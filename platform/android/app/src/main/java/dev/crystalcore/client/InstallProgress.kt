package dev.crystalcore.client

import android.os.Handler
import android.os.Looper
import android.util.Log
import java.util.concurrent.CopyOnWriteArraySet

enum class Phase(val active: Boolean) {
    IDLE(false),
    PREPARING(true),
    WAITING_FOR_NETWORK(true),
    DOWNLOADING(true),
    CHECKING(true),
    APPLYING(true),
    VERIFYING(true),
    DONE(false),
    FAILED(false),
    STOPPED(false),
}

/** Where the install is: step [step] of [steps], [done] of [total] bytes at [rate] bytes/s. */
data class InstallStatus(
    val phase: Phase = Phase.IDLE,
    val step: Int = 0,
    val steps: Int = 0,
    val label: String = "",
    val done: Long = 0,
    val total: Long = 0,
    val rate: Double = 0.0,
    val message: String? = null,
) {
    val fraction: Double get() = if (total > 0) (done.toDouble() / total).coerceIn(0.0, 1.0) else 0.0

    /** Seconds left at the current rate, or null when there is no rate yet. */
    val etaSeconds: Long? get() = if (rate > 1.0 && total > done) ((total - done) / rate).toLong() else null

    /** "512.0 MB of 1.40 GB, 8.2 MB/s, 2 min 40 s left" */
    fun detail(): String {
        if (total <= 0) return ""
        val parts = mutableListOf("${formatSize(done)} of ${formatSize(total)}")
        if (rate > 0) parts += "${formatSize(rate)}/s"
        etaSeconds?.let { parts += "${formatDuration(it)} left" }
        return parts.joinToString(", ")
    }
}

/**
 * The installer's state and log, shared by [InstallService] (which writes them from its worker
 * thread) and the screens and notification (which listen on the main thread). In-process only:
 * after the app's process dies the screens read what is on disk instead.
 */
object InstallProgress {
    private const val TAG = "CrystalCoreInstall"
    private const val MAX_LOG_LINES = 300

    @Volatile
    var status = InstallStatus()
        private set

    private val logLines = ArrayDeque<String>()
    private val listeners = CopyOnWriteArraySet<() -> Unit>()
    private val main = Handler(Looper.getMainLooper())
    private val notify = Runnable { listeners.forEach { it() } }

    fun update(next: InstallStatus) {
        status = next
        post()
    }

    fun log(line: String) {
        Log.i(TAG, line)
        synchronized(logLines) {
            logLines.addLast(line)
            while (logLines.size > MAX_LOG_LINES) logLines.removeFirst()
        }
        post()
    }

    fun logLines(): List<String> = synchronized(logLines) { logLines.toList() }

    /** Main thread. */
    fun addListener(listener: () -> Unit) {
        listeners += listener
    }

    fun removeListener(listener: () -> Unit) {
        listeners -= listener
    }

    // (coalesced: a burst of updates is one redraw)
    private fun post() {
        main.removeCallbacks(notify)
        main.post(notify)
    }
}
