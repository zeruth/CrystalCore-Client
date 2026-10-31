package dev.crystalcore.client

import android.app.Notification
import android.app.NotificationChannel
import android.app.NotificationManager
import android.app.PendingIntent
import android.app.Service
import android.content.Context
import android.content.Intent
import android.content.pm.ServiceInfo
import android.graphics.drawable.Icon
import android.net.wifi.WifiManager
import android.os.Handler
import android.os.IBinder
import android.os.Looper
import android.os.PowerManager
import android.os.SystemClock
import java.util.concurrent.CancellationException
import kotlin.concurrent.thread

/**
 * Runs the [Installer] in a dataSync foreground service, so ~10 GB of downloads and patching
 * survive the app going to the background, with a progress notification and a Stop action.
 *
 * Locks: a partial wake lock for the whole run (the CPU must not sleep mid-patch with the screen
 * off) and a Wi-Fi lock only while downloading.
 *
 * Android 15+ limits dataSync services to 6 hours a day in the background; when that runs out
 * ([onTimeout]) the install stops cleanly and resumes when the user opens the app and taps
 * Continue (bringing the app to the foreground resets the limit).
 */
class InstallService : Service() {
    private val main = Handler(Looper.getMainLooper())
    private var worker: Thread? = null
    @Volatile private var stopRequested = false
    @Volatile private var stopReason: String? = null
    private var wakeLock: PowerManager.WakeLock? = null
    private var wifiLock: WifiManager.WifiLock? = null
    private var lastNotified = 0L
    private var lastPhase: Phase? = null
    private val onProgress = { updateNotification(force = false) }

    override fun onBind(intent: Intent?): IBinder? = null

    override fun onCreate() {
        super.onCreate()
        val channel = NotificationChannel(CHANNEL, getString(R.string.install_channel), NotificationManager.IMPORTANCE_LOW)
        getSystemService(NotificationManager::class.java).createNotificationChannel(channel)
        InstallProgress.addListener(onProgress)
    }

    override fun onDestroy() {
        InstallProgress.removeListener(onProgress)
        releaseLocks()
        super.onDestroy()
    }

    override fun onStartCommand(intent: Intent?, flags: Int, startId: Int): Int {
        if (intent?.action == ACTION_STOP) {
            stopReason = getString(R.string.install_stopped)
            stopRequested = true
            if (worker == null) stopSelf()
            return START_NOT_STICKY
        }
        startForeground(NOTIFICATION_ID, notification(InstallProgress.status), ServiceInfo.FOREGROUND_SERVICE_TYPE_DATA_SYNC)
        if (worker == null) startWorker(intent?.getBooleanExtra(EXTRA_KEEP_DOWNLOADS, false) ?: false)
        // (not restarted by the system: the user resumes it from the app, which the version file makes safe)
        return START_NOT_STICKY
    }

    /** Android 15+: this service type's background time ran out. Must stop within seconds. */
    override fun onTimeout(startId: Int, fgsType: Int) {
        stopReason = getString(R.string.install_timed_out)
        stopRequested = true
        stopForeground(STOP_FOREGROUND_REMOVE)
        stopSelf()
    }

    private fun startWorker(keepDownloads: Boolean) {
        stopRequested = false
        stopReason = null
        wakeLock = getSystemService(PowerManager::class.java)
            .newWakeLock(PowerManager.PARTIAL_WAKE_LOCK, "CrystalCore:install")
            .apply {
                setReferenceCounted(false)
                acquire(WAKE_LOCK_MAX_MS)
            }
        worker = thread(name = "crystalcore-install") {
            val result = runCatching {
                Installer(this, GamePaths(this), keepDownloads, { stopRequested }, ::useWifi).run()
            }
            main.post { finished(result.exceptionOrNull()) }
        }
    }

    private fun finished(error: Throwable?) {
        worker = null
        releaseLocks()
        val status = InstallProgress.status
        when (error) {
            null -> Unit // the Installer reported DONE
            is CancellationException -> {
                InstallProgress.log(stopReason ?: getString(R.string.install_stopped))
                InstallProgress.update(status.copy(phase = Phase.STOPPED, rate = 0.0, message = stopReason))
            }
            else -> {
                val message = (error as? InstallFailure)?.message ?: error.toString()
                InstallProgress.log("Failed: $message")
                InstallProgress.update(status.copy(phase = Phase.FAILED, rate = 0.0, message = message))
            }
        }
        // the final word stays in the shade, dismissable
        stopForeground(STOP_FOREGROUND_DETACH)
        getSystemService(NotificationManager::class.java).notify(NOTIFICATION_ID, notification(InstallProgress.status))
        stopSelf()
    }

    private fun useWifi(on: Boolean) {
        if (on) {
            @Suppress("DEPRECATION") // FULL_HIGH_PERF still keeps the radio up with the screen off
            val lock = wifiLock ?: getSystemService(WifiManager::class.java)
                .createWifiLock(WifiManager.WIFI_MODE_FULL_HIGH_PERF, "CrystalCore:download")
                .apply { setReferenceCounted(false) }
            wifiLock = lock
            lock.acquire()
        } else {
            wifiLock?.takeIf { it.isHeld }?.release()
        }
    }

    private fun releaseLocks() {
        wifiLock?.takeIf { it.isHeld }?.release()
        wakeLock?.takeIf { it.isHeld }?.release()
        wakeLock = null
    }

    // ---- the notification

    private fun updateNotification(force: Boolean) {
        if (worker == null) return
        val status = InstallProgress.status
        val now = SystemClock.elapsedRealtime()
        if (!force && status.phase == lastPhase && now - lastNotified < NOTIFY_MS) return
        lastNotified = now
        lastPhase = status.phase
        getSystemService(NotificationManager::class.java).notify(NOTIFICATION_ID, notification(status))
    }

    private fun notification(status: InstallStatus): Notification {
        val open = PendingIntent.getActivity(
            this, 0, Intent(this, InstallerActivity::class.java).addFlags(Intent.FLAG_ACTIVITY_SINGLE_TOP),
            PendingIntent.FLAG_IMMUTABLE or PendingIntent.FLAG_UPDATE_CURRENT,
        )
        val title = when (status.phase) {
            Phase.DONE -> getString(R.string.install_done_title)
            Phase.FAILED -> getString(R.string.install_failed_title)
            Phase.STOPPED -> getString(R.string.install_stopped_title)
            Phase.IDLE, Phase.PREPARING -> getString(R.string.install_preparing)
            else -> getString(R.string.install_step, status.step, status.steps, status.label)
        }
        val text = status.message?.takeIf { !status.phase.active || status.phase == Phase.WAITING_FOR_NETWORK }
            ?: status.detail()
        val builder = Notification.Builder(this, CHANNEL)
            .setSmallIcon(R.drawable.ic_stat_install)
            .setContentTitle(title)
            .setContentText(text)
            .setStyle(Notification.BigTextStyle().bigText(text))
            .setContentIntent(open)
            .setOnlyAlertOnce(true)
            .setCategory(Notification.CATEGORY_PROGRESS)
            .setForegroundServiceBehavior(Notification.FOREGROUND_SERVICE_IMMEDIATE)
            .setOngoing(status.phase.active)
            .setAutoCancel(!status.phase.active)
        if (status.phase.active) {
            builder.setProgress(PROGRESS_MAX, (status.fraction * PROGRESS_MAX).toInt(), status.total <= 0)
            val stop = PendingIntent.getService(
                this, 1, Intent(this, InstallService::class.java).setAction(ACTION_STOP), PendingIntent.FLAG_IMMUTABLE,
            )
            builder.addAction(
                Notification.Action.Builder(Icon.createWithResource(this, R.drawable.ic_stat_install), getString(R.string.stop), stop).build(),
            )
        }
        return builder.build()
    }

    companion object {
        private const val CHANNEL = "install"
        private const val NOTIFICATION_ID = 1
        private const val NOTIFY_MS = 1000L
        private const val PROGRESS_MAX = 1000
        private const val WAKE_LOCK_MAX_MS = 24L * 60 * 60 * 1000
        private const val ACTION_START = "dev.crystalcore.client.action.INSTALL"
        private const val ACTION_STOP = "dev.crystalcore.client.action.STOP_INSTALL"
        private const val EXTRA_KEEP_DOWNLOADS = "keep_downloads"

        /** From the foreground (an Android 12+ rule for starting foreground services). */
        fun start(context: Context, keepDownloads: Boolean) {
            context.startForegroundService(
                Intent(context, InstallService::class.java).setAction(ACTION_START).putExtra(EXTRA_KEEP_DOWNLOADS, keepDownloads),
            )
        }

        fun stop(context: Context) {
            context.startService(Intent(context, InstallService::class.java).setAction(ACTION_STOP))
        }
    }
}
