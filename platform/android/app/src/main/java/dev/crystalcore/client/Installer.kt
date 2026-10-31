package dev.crystalcore.client

import android.content.Context
import android.os.StatFs
import java.io.File
import java.io.IOException

/** Why the install stopped, for the user. */
class InstallFailure(message: String) : Exception(message)

/**
 * The install, step by step, as CrystalCore-Installer.ps1 does it after its disc steps: each patch
 * of the update path not yet applied is downloaded (resumed), checked, applied with [ZiPatch], and
 * ffxivgame.ver set to its version; then ffxiv.exe's SHA-1 is checked. The version file says what
 * is done, so a run can stop anywhere (stop button, lost process, time limit) and the next one picks
 * up there. Blocking: run it on a worker thread. Throws [InstallFailure], an IOException or, when
 * [cancelled], a CancellationException.
 */
class Installer(
    private val context: Context,
    private val paths: GamePaths,
    private val keepDownloads: Boolean,
    private val cancelled: () -> Boolean,
    /** true while downloading: the service holds a Wi-Fi lock for it */
    private val onNetworkUse: (Boolean) -> Unit,
) {
    private val network = NetworkWaiter(context, cancelled)
    private var status = InstallStatus()

    fun run() {
        report(InstallStatus(Phase.PREPARING, label = "Reading the patch list"))
        val list = PatchList.load(context, paths, ::log)
        val reference = list.reference
        val path = list.updatePath()
        val steps = path.size + 1
        paths.game.mkdirs()
        paths.downloads.mkdirs()

        val start = paths.installedVersion()
        log("game ${reference.version} (build ${reference.build}) into ${paths.game}; " +
            "installed: ${start.ifEmpty { "nothing yet" }}")
        if (start > reference.version) {
            throw InstallFailure("The install is at game $start, past ${reference.version}: delete ${paths.game} to start over")
        }
        checkSpace(path.filter { it.version > start })

        // each patch applies to the version before it (an empty folder for the first)
        var prev = ""
        for ((i, patch) in path.withIndex()) {
            val now = paths.installedVersion()
            if (now.isNotEmpty() && now >= patch.version) {
                log("${patch.file} already applied")
                prev = patch.version
                continue
            }
            if (now != prev) {
                throw InstallFailure("The install is at game ${now.ifEmpty { "(empty)" }}; " +
                    "${patch.file} applies to ${prev.ifEmpty { "an empty folder" }}")
            }
            val file = fetch(patch, i + 1, steps)
            apply(patch, file, i + 1, steps)
            prev = patch.version
        }
        verify(reference, steps)
    }

    // ---- the steps

    /** The patch file, downloaded and checked: by SHA-1 where one is known, else by size. */
    private fun fetch(patch: Patch, step: Int, steps: Int): File {
        val file = File(paths.downloads, patch.file)
        val sha1 = patch.sha1 ?: CrystalCore.KNOWN_SHA1[patch.file]
        repeat(2) { attempt ->
            if (file.length() != patch.size || !file.isFile) download(patch, file, step, steps)
            else log("have ${patch.file}")
            if (sha1 == null) return file // (the applier checks every chunk's CRC too)
            report(InstallStatus(Phase.CHECKING, step, steps, "Checking ${patch.file} (SHA-1)", 0, patch.size))
            val got = Hashes.sha1(file, cancelled, progress(Phase.CHECKING, step, steps, "Checking ${patch.file} (SHA-1)"))
            if (got == sha1) {
                log("SHA-1 ok")
                return file
            }
            log("${patch.file}: SHA-1 $got, expected $sha1" + if (attempt == 0) "; downloading it again" else "")
            file.delete()
        }
        throw InstallFailure("${patch.file}: its SHA-1 did not match twice")
    }

    private fun download(patch: Patch, file: File, step: Int, steps: Int) {
        val label = "Downloading ${patch.file}"
        val downloader = Downloader(network, cancelled) {
            report(status.copy(phase = Phase.WAITING_FOR_NETWORK, rate = 0.0, message = "Waiting for a network connection"))
        }
        val have = if (file.isFile) file.length() else 0L
        log("downloading ${patch.file} (${formatSize(patch.size)})" + if (have > 0) ", resuming at ${formatSize(have)}" else "")
        report(InstallStatus(Phase.DOWNLOADING, step, steps, label, have, patch.size))
        onNetworkUse(true)
        try {
            var lastError: IOException? = null
            for (url in patch.urls) {
                try {
                    downloader.download(url, file, patch.size, progress(Phase.DOWNLOADING, step, steps, label))
                    return
                } catch (e: IOException) {
                    lastError = e
                    log("  ${hostOf(url)}: ${e.message}")
                }
            }
            throw InstallFailure("${patch.file}: no source answered (${lastError?.message})")
        } finally {
            onNetworkUse(false)
        }
    }

    private fun apply(patch: Patch, file: File, step: Int, steps: Int) {
        val label = "Applying ${patch.file}"
        log("patch ${patch.file}")
        report(InstallStatus(Phase.APPLYING, step, steps, label, 0, file.length()))
        val stats = try {
            ZiPatch(paths.game).apply(file, cancelled, progress(Phase.APPLYING, step, steps, label))
        } catch (e: ZiPatchException) {
            // a bad chunk in a file only checked by size: fetch it again next time
            if (patch.sha1 == null && CrystalCore.KNOWN_SHA1[patch.file] == null) file.delete()
            throw InstallFailure("${e.message}. Run the installer again to download it again.")
        }
        // (the version file is the patch's version: the launcher writes it from the patch list)
        paths.versionFile.writeText(patch.version, Charsets.US_ASCII)
        log("applied: $stats")
        log("game version ${patch.version}")
        if (!keepDownloads) file.delete()
    }

    private fun verify(reference: ReferenceBuild, steps: Int) {
        val label = "Checking ffxiv.exe"
        report(InstallStatus(Phase.VERIFYING, steps, steps, label))
        val version = paths.installedVersion()
        if (version != reference.version) throw InstallFailure("ffxivgame.ver is $version, not ${reference.version}")
        if (!paths.exe.isFile) throw InstallFailure("${paths.exe} is missing")
        val sha1 = Hashes.sha1(paths.exe, cancelled, progress(Phase.VERIFYING, steps, steps, label))
        if (sha1 != reference.exeSha1) {
            throw InstallFailure("ffxiv.exe SHA-1 $sha1, expected ${reference.exeSha1}. " +
                "Delete ${paths.game} and install again to rebuild it from the patches.")
        }
        InstallState.markVerified(paths, reference)
        log("ffxivgame.ver $version, ffxiv.exe $sha1 (CrystalCore's reference)")
        report(InstallStatus(Phase.DONE, steps, steps, "Game ${reference.version} is installed", message = paths.game.path))
    }

    /** Refuses to start what cannot finish: see [spaceNeeded]. */
    private fun checkSpace(remaining: List<Patch>) {
        val need = spaceNeeded(paths, remaining, keepDownloads)
        val free = StatFs(paths.install.path).availableBytes
        log("space: about ${formatSize(need)} needed, ${formatSize(free)} free")
        if (need > free) {
            throw InstallFailure("Not enough space: about ${formatSize(need)} needed, ${formatSize(free)} free")
        }
    }

    // ---- reporting

    private fun report(next: InstallStatus) {
        status = next
        InstallProgress.update(next)
    }

    private fun progress(phase: Phase, step: Int, steps: Int, label: String): Progress = { done, total, rate ->
        report(InstallStatus(phase, step, steps, label, done, total, rate))
    }

    private fun log(line: String) = InstallProgress.log(line)

    private fun hostOf(url: String) = runCatching { java.net.URL(url).host }.getOrDefault(url)

    companion object {
        private const val MARGIN = 512L shl 20

        /**
         * An estimate of the space the [remaining] patches take: the game data they add (about
         * their own size: the 2013 base patches are about as large as what they install) plus the
         * downloads that are on disk at once (all of them with [keepDownloads], else the largest),
         * less what is already downloaded, plus a margin.
         */
        fun spaceNeeded(paths: GamePaths, remaining: List<Patch>, keepDownloads: Boolean): Long {
            if (remaining.isEmpty()) return 0
            val data = remaining.sumOf { it.size }
            val downloads = if (keepDownloads) data else remaining.maxOf { it.size }
            val downloaded = remaining.sumOf { File(paths.downloads, it.file).length().coerceAtMost(it.size) }
            return (data + downloads - downloaded).coerceAtLeast(0) + MARGIN
        }
    }
}
