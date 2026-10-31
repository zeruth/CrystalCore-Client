package dev.crystalcore.client

import android.content.Context
import android.content.Intent
import dev.rhipper.host.RhipperActivity
import dev.rhipper.host.RhipperConfig

/**
 * FINAL FANTASY XIV's window: Rhipper's host activity, run in the ":game" process (see the
 * manifest) with libcrystalcore.so, game/ffxiv.exe, the game folder as working directory and the
 * launcher's arguments.
 */
class GameActivity : RhipperActivity() {
    companion object {
        fun intent(context: Context, paths: GamePaths, version: String, lobby: Lobby): Intent =
            RhipperConfig(
                library = CrystalCore.LIBRARY,
                referenceExe = paths.exe.path,
                workingDir = paths.game.path,
                args = launchArgs(version, lobby),
                logDir = paths.logs.path,
            ).putInto(Intent(context, GameActivity::class.java))
    }
}
