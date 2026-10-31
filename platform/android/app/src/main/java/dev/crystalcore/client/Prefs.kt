package dev.crystalcore.client

import android.content.Context

/** The app's few settings. */
class Prefs(context: Context) {
    private val prefs = context.getSharedPreferences("crystalcore", Context.MODE_PRIVATE)

    /** Keep each patch file after applying it (~10 GB more), instead of deleting it. */
    var keepDownloads: Boolean
        get() = prefs.getBoolean(KEY_KEEP_DOWNLOADS, false)
        set(value) = prefs.edit().putBoolean(KEY_KEEP_DOWNLOADS, value).apply()

    /** The lobby server, host:port. */
    var lobby: String
        get() = prefs.getString(KEY_LOBBY, null) ?: CrystalCore.DEFAULT_LOBBY
        set(value) = prefs.edit().putString(KEY_LOBBY, value).apply()

    private companion object {
        const val KEY_KEEP_DOWNLOADS = "keep_downloads"
        const val KEY_LOBBY = "lobby"
    }
}
