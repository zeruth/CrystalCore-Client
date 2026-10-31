package dev.crystalcore.client

import android.os.SystemClock

/** (done, total, bytes per second): reported a few times a second at most. */
typealias Progress = (done: Long, total: Long, rate: Double) -> Unit

/** Throttles a [Progress] to every [PROGRESS_MS], with the rate since it was made. */
class ProgressClock(private val progress: Progress, private val startDone: Long = 0) {
    private val start = SystemClock.elapsedRealtime()
    private var last = 0L

    fun tick(done: Long, total: Long, force: Boolean = false) {
        val now = SystemClock.elapsedRealtime()
        if (!force && now - last < PROGRESS_MS) return
        last = now
        val seconds = maxOf((now - start) / 1000.0, 0.001)
        progress(done, total, (done - startDone) / seconds)
    }

    companion object {
        const val PROGRESS_MS = 250L
    }
}
