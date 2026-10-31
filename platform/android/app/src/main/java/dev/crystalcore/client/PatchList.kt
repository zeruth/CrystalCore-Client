package dev.crystalcore.client

import android.content.Context
import org.json.JSONObject
import java.net.HttpURLConnection
import java.net.URL

/** One base-game patch from patches/game.json. */
data class Patch(
    val file: String,
    val version: String,
    val size: Long,
    val sha1: String?,
    val urls: List<String>,
    val release: String?,
)

/** game.json's "reference": the build CrystalCore ports, its ffxiv.exe checked by SHA-1. */
data class ReferenceBuild(val version: String, val build: Int, val exeSha1: String)

/**
 * patches/game.json (tools/patches/patchlist.py): every base-game patch in version order, each
 * with its file, size, SHA-1 where known and URLs (Square Enix's CDN first).
 */
class PatchList(val reference: ReferenceBuild, val patches: List<Patch>, val source: String) {
    /**
     * The patches that build the reference from an EMPTY game folder, in order: the five parts of
     * the retail disc's base (D2013.06.29.0000-0004) and the two beta patches (D2013.08.09.0000,
     * .0001). Applied in order they reproduce the disc install plus both patches byte for byte, so
     * no disc image is needed.
     */
    fun updatePath(): List<Patch> {
        val path = patches.filter { it.version <= reference.version }
        require(path.lastOrNull()?.version == reference.version) {
            "the patch list ($source) has no patch reaching ${reference.version}"
        }
        require(path.all { it.urls.isNotEmpty() }) {
            "not available from any source: ${path.filter { it.urls.isEmpty() }.joinToString { it.file }}"
        }
        return path
    }

    companion object {
        private const val TIMEOUT_MS = 15_000

        fun parse(text: String, source: String): PatchList {
            val json = JSONObject(text)
            val ref = json.getJSONObject("reference")
            val reference = ReferenceBuild(ref.getString("version"), ref.optInt("build"), ref.getString("ffxiv_exe_sha1"))
            val array = json.getJSONArray("patches")
            val patches = (0 until array.length()).map { i ->
                val p = array.getJSONObject(i)
                val urls = p.optJSONArray("urls")
                Patch(
                    file = p.getString("file"),
                    version = p.getString("version"),
                    size = p.getLong("size"),
                    sha1 = p.optText("sha1"),
                    urls = if (urls == null) emptyList() else (0 until urls.length()).map { urls.getString(it) },
                    release = p.optText("release"),
                )
            }
            return PatchList(reference, patches, source)
        }

        /** The copy bundled at build time: its reference is the build libcrystalcore.so is of. */
        fun bundled(context: Context): PatchList =
            parse(context.assets.open("game.json").bufferedReader().use { it.readText() }, "bundled")

        /** Without the network: the last fetched list, else the bundled one. */
        fun local(context: Context, paths: GamePaths): PatchList {
            val bundled = bundled(context)
            val cached = runCatching {
                parse(paths.patchListCache.readText(), "cached").withReference(bundled.reference)
            }.getOrNull()
            return cached?.takeIf { runCatching { it.updatePath() }.isSuccess } ?: bundled
        }

        /**
         * The latest list from CrystalCore's repository (sizes, URLs and SHA-1s may have been
         * corrected since this build), cached; else [local]. The reference always stays the
         * bundled one, the build this app's native library is of.
         */
        fun load(context: Context, paths: GamePaths, log: (String) -> Unit): PatchList {
            val bundled = bundled(context)
            val fetched = runCatching {
                val text = fetch(CrystalCore.PATCH_LIST_URL)
                val list = parse(text, CrystalCore.PATCH_LIST_URL).withReference(bundled.reference)
                list.updatePath() // usable, or this throws
                paths.patchListCache.writeText(text)
                list
            }
            fetched.onSuccess { log("patch list: ${it.source} (${it.patches.size} patches)") }
            fetched.onFailure { log("patch list unavailable online (${it.message}); using the local copy") }
            return fetched.getOrNull() ?: local(context, paths)
        }

        // (org.json's optString gives "" for a missing key and "null" for a JSON null)
        private fun JSONObject.optText(key: String): String? =
            if (isNull(key)) null else optString(key).ifEmpty { null }

        private fun PatchList.withReference(reference: ReferenceBuild) = PatchList(reference, patches, source)

        private fun fetch(url: String): String {
            val conn = URL(url).openConnection() as HttpURLConnection
            try {
                conn.connectTimeout = TIMEOUT_MS
                conn.readTimeout = TIMEOUT_MS
                conn.setRequestProperty("User-Agent", CrystalCore.USER_AGENT)
                if (conn.responseCode != 200) throw java.io.IOException("HTTP ${conn.responseCode}")
                return conn.inputStream.bufferedReader().use { it.readText() }
            } finally {
                conn.disconnect()
            }
        }
    }
}
