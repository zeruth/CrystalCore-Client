package dev.crystalcore.client

/**
 * Whether the game folder holds the reference: ffxivgame.ver says so and ffxiv.exe's SHA-1 was
 * checked. The check is remembered (with the exe's size and time) so the app does not hash it on
 * every start; "Re-verify install" hashes it again.
 */
object InstallState {
    fun isInstalled(paths: GamePaths, reference: ReferenceBuild): Boolean =
        paths.installedVersion() == reference.version &&
            paths.verifiedMarker.isFile &&
            paths.verifiedMarker.readText().trim() == marker(paths, reference)

    fun markVerified(paths: GamePaths, reference: ReferenceBuild) {
        paths.verifiedMarker.writeText(marker(paths, reference) + "\n")
    }

    fun clear(paths: GamePaths) {
        paths.verifiedMarker.delete()
    }

    private fun marker(paths: GamePaths, reference: ReferenceBuild) =
        "${reference.version} ${reference.exeSha1} ${paths.exe.length()} ${paths.exe.lastModified()}"
}
