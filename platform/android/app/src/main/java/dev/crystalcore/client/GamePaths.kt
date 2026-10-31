package dev.crystalcore.client

import android.content.Context
import java.io.File

/**
 * Where everything lives: in the app's external files dir (no storage permission, reachable with
 * adb under /sdcard/Android/data/dev.crystalcore.client/files), falling back to internal storage
 * when there is no external storage. Choosing another folder is for later.
 */
class GamePaths(context: Context) {
    val base: File = context.getExternalFilesDir(null) ?: context.filesDir

    /** The install's top folder, the PS1's InstallDir: game\ and the downloads under it. */
    val install = File(base, "ffxiv")
    val game = File(install, "game")
    val downloads = File(install, "downloads")

    /** The runtime's logs, crash reports and the game's last exit. */
    val logs = File(base, "logs")

    val versionFile = File(game, "ffxivgame.ver")
    val exe = File(game, "ffxiv.exe")

    /** Written once ffxiv.exe's SHA-1 checks out (beside game\, never in it). */
    val verifiedMarker = File(install, "verified")

    /** The last patch list fetched from CrystalCore's repository. */
    val patchListCache = File(context.filesDir, "game.json")

    /** ffxivgame.ver's version, or "" when the game folder has none yet (an empty folder). */
    fun installedVersion(): String =
        if (versionFile.isFile) versionFile.readText(Charsets.US_ASCII).trim() else ""
}
