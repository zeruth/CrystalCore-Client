package dev.crystalcore.client

/** What this app is a port of, and the constants of CrystalCore-Installer.ps1 it shares. */
object CrystalCore {
    /** libcrystalcore.so: the translation, Rhipper's runtime32-posix and its JNI glue. */
    // (the boot library: it loads libCrystalCore.so below 2 GB, Rhipper's runtime32-posix/android_jni.c)
    const val LIBRARY = "CrystalCore_boot"

    /** The game process's android:process (the manifest's GameActivity). */
    const val GAME_PROCESS = ":game"

    /** The latest patch list ($PatchListUrl in CrystalCore-Installer.ps1); the bundled copy otherwise. */
    const val PATCH_LIST_URL =
        "https://raw.githubusercontent.com/zeruth/CrystalCore-Client/2013.08.09.672261/patches/game.json"

    /** What the downloads say they are (as the PS1's). */
    const val USER_AGENT = "CrystalCore-Installer"

    /**
     * SHA-1s CrystalCore-Installer.ps1 carries for the two beta patches; game.json has none for
     * them. Used when the list has no SHA-1 of its own; other patches are checked by size, and the
     * applier checks every chunk's CRC.
     */
    val KNOWN_SHA1 = mapOf(
        "D2013.08.09.0000.0000.patch" to "6add155dcb1cc5f537475d374bb1e2aab866925a",
        "D2013.08.09.0001.0000.patch" to "57e3bcd92c0d57883e4ef277e113ecb0aac247cb",
    )

    /** The lobby's port in the PS1's $LaunchArgs (DEV.LobbyPort01/02). */
    const val LOBBY_PORT = 54994

    /**
     * The lobby server the launcher offers first. The PS1's 127.0.0.1 is the phone itself here, so
     * this is a LAN address to edit in the launcher (where CrystalCore-Server usually runs).
     */
    const val DEFAULT_LOBBY = "192.168.1.100:$LOBBY_PORT"
}
