package dev.crystalcore.client

import android.content.Context
import android.net.ConnectivityManager
import android.net.NetworkCapabilities
import java.util.concurrent.CancellationException

/** Blocks a download while the device has no network, so a lost connection resumes instead of failing. */
class NetworkWaiter(context: Context, private val cancelled: () -> Boolean) {
    private val connectivity = context.getSystemService(ConnectivityManager::class.java)

    fun isOnline(): Boolean {
        val network = connectivity.activeNetwork ?: return false
        return connectivity.getNetworkCapabilities(network)
            ?.hasCapability(NetworkCapabilities.NET_CAPABILITY_INTERNET) == true
    }

    /** Returns once there is a network; [onWaiting] is told once if it had to wait. */
    fun await(onWaiting: () -> Unit) {
        var told = false
        while (!isOnline()) {
            if (cancelled()) throw CancellationException()
            if (!told) {
                onWaiting()
                told = true
            }
            Thread.sleep(POLL_MS)
        }
    }

    private companion object {
        const val POLL_MS = 2000L
    }
}
