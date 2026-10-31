package dev.crystalcore.client

import android.Manifest
import android.app.Activity
import android.content.Intent
import android.content.pm.PackageManager
import android.os.Build
import android.os.Bundle
import android.os.StatFs
import android.text.SpannableStringBuilder
import android.text.Spanned
import android.text.style.ForegroundColorSpan
import android.view.View
import android.widget.Button
import android.widget.CheckBox
import android.widget.LinearLayout
import android.widget.ProgressBar
import android.widget.TextView
import dev.rhipper.host.padForSystemBars
import java.io.File
import kotlin.concurrent.thread

/**
 * The first screen: what will be installed where, each patch's bar, the total and the storage, and
 * the step under way. The work itself is [InstallService]'s; this screen starts and stops it and
 * shows [InstallProgress]. Once the game is installed and checked, it hands over to
 * [LauncherActivity].
 */
class InstallerActivity : Activity() {
    private lateinit var paths: GamePaths
    private lateinit var storageBar: SegmentBar
    private lateinit var storageLegend: TextView
    private lateinit var keepDownloads: CheckBox
    private lateinit var patchColumns: List<LinearLayout>
    private lateinit var totalBar: ProgressBar
    private lateinit var totalDetail: TextView
    private lateinit var step: TextView
    private lateinit var progress: ProgressBar
    private lateinit var detail: TextView
    private lateinit var message: TextView
    private lateinit var install: Button
    private lateinit var stop: Button
    private var list: PatchList? = null
    private var rows: List<PatchRow> = emptyList()
    private val onProgress = { render() }

    /** One patch's row of [R.layout.item_patch]. */
    private class PatchRow(val patch: Patch, view: View) {
        val name: TextView = view.findViewById(R.id.patch_name)
        val state: TextView = view.findViewById(R.id.patch_state)
        val size: TextView = view.findViewById(R.id.patch_size)
        val bar: ProgressBar = view.findViewById(R.id.patch_bar)
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        paths = GamePaths(this)
        val reference = PatchList.bundled(this).reference
        if (!InstallProgress.status.phase.active && InstallState.isInstalled(paths, reference)) {
            return openLauncher()
        }

        setContentView(R.layout.activity_installer)
        findViewById<View>(R.id.root).padForSystemBars()
        storageBar = findViewById(R.id.storage_bar)
        storageLegend = findViewById(R.id.storage_legend)
        keepDownloads = findViewById(R.id.keep_downloads)
        patchColumns = listOf(findViewById(R.id.patch_rows_a), findViewById(R.id.patch_rows_b))
        totalBar = findViewById(R.id.total_bar)
        totalDetail = findViewById(R.id.total_detail)
        step = findViewById(R.id.step)
        progress = findViewById(R.id.progress)
        detail = findViewById(R.id.detail)
        message = findViewById(R.id.message)
        install = findViewById(R.id.install)
        stop = findViewById(R.id.stop)
        findViewById<TextView>(R.id.bar_key).text = colorKey()

        val prefs = Prefs(this)
        keepDownloads.isChecked = prefs.keepDownloads
        keepDownloads.setOnCheckedChangeListener { _, checked ->
            prefs.keepDownloads = checked
            renderPlan()
        }
        install.setOnClickListener { startInstall() }
        stop.setOnClickListener { InstallService.stop(this) }
    }

    override fun onStart() {
        super.onStart()
        if (isFinishing) return
        InstallProgress.addListener(onProgress)
        loadPlan()
        render()
    }

    override fun onStop() {
        InstallProgress.removeListener(onProgress)
        super.onStop()
    }

    private fun startInstall() {
        // the progress notification needs this on Android 13+; the install runs either way
        if (Build.VERSION.SDK_INT >= 33 &&
            checkSelfPermission(Manifest.permission.POST_NOTIFICATIONS) != PackageManager.PERMISSION_GRANTED
        ) {
            requestPermissions(arrayOf(Manifest.permission.POST_NOTIFICATIONS), 1)
        }
        InstallService.start(this, keepDownloads.isChecked)
    }

    /** The patch list as it is on the device (no network here: the service fetches the latest). */
    private fun loadPlan() {
        thread(name = "crystalcore-plan") {
            val loaded = runCatching { PatchList.local(this, paths) }.getOrNull()
            runOnUiThread {
                list = loaded
                buildRows()
                renderPlan()
                render()
            }
        }
    }

    private fun buildRows() {
        val path = list?.let { runCatching { it.updatePath() }.getOrNull() } ?: return
        if (rows.map { it.patch } == path) return
        patchColumns.forEach { it.removeAllViews() }
        // (down the first column, then the second)
        val perColumn = (path.size + 1) / 2
        rows = path.mapIndexed { i, patch ->
            val column = patchColumns[i / perColumn]
            val view = layoutInflater.inflate(R.layout.item_patch, column, false)
            column.addView(view)
            PatchRow(patch, view).also {
                it.name.text = shortName(patch.file)
                it.size.text = formatSize(patch.size)
            }
        }
    }

    /** What changes only between steps: the summary and the storage. */
    private fun renderPlan() {
        val list = list ?: return
        val path = runCatching { list.updatePath() }.getOrElse {
            message.text = it.message
            message.visibility = View.VISIBLE
            return
        }
        val installed = paths.installedVersion()
        val remaining = path.filter { it.version > installed }
        val need = Installer.spaceNeeded(paths, remaining, keepDownloads.isChecked)
        paths.install.mkdirs()
        val free = StatFs(paths.install.path).availableBytes

        // (used: the game's data and the downloads on disk now; needed: taken out of the free)
        val used = folderSize(paths.game) + folderSize(paths.downloads)
        val wanted = need.coerceAtMost(free)
        storageBar.setSegments(listOf(
            SegmentBar.Segment(used, getColor(R.color.gold)),
            SegmentBar.Segment(wanted, getColor(R.color.crystal), hatched = true),
            SegmentBar.Segment(free - wanted, getColor(R.color.night_high)),
        ))
        storageLegend.text = SpannableStringBuilder().apply {
            key(getColor(R.color.gold)); append(" ${getString(R.string.storage_used, formatSize(used))}  ")
            key(getColor(R.color.crystal)); append(" ${getString(R.string.storage_needed, formatSize(need))}  ")
            key(getColor(R.color.night_high)); append(" ${getString(R.string.storage_free, formatSize(free))}")
        }
        // (the shortfall goes under the step, beside the Install button it blocks: see render)
        spaceWarning = if (need > free) getString(R.string.installer_no_space) else null
        showMessage(InstallProgress.status)
    }

    private fun render() {
        val status = InstallProgress.status
        // (DONE from an earlier run in this process counts only while the install still checks out)
        if (status.phase == Phase.DONE && InstallState.isInstalled(paths, PatchList.bundled(this).reference)) {
            return openLauncher()
        }
        val active = status.phase.active
        step.text = when (status.phase) {
            Phase.IDLE -> getString(R.string.install_idle)
            Phase.PREPARING -> getString(R.string.install_preparing)
            Phase.FAILED -> getString(R.string.install_failed_title)
            Phase.STOPPED -> getString(R.string.install_stopped_title)
            else -> getString(R.string.install_step, status.step, status.steps, shortLabel(status.label))
        }
        progress.isIndeterminate = active && status.total <= 0
        progress.progress = (status.fraction * progress.max).toInt()
        progress.visibility = if (status.phase == Phase.IDLE) View.INVISIBLE else View.VISIBLE
        detail.text = status.detail()
        showMessage(status)
        // (one button at a time: Stop while it runs, Install or Continue while it doesn't)
        install.visibility = if (active) View.GONE else View.VISIBLE
        install.setText(if (status.phase == Phase.IDLE && paths.installedVersion().isEmpty()) R.string.install else R.string.resume)
        stop.visibility = if (active) View.VISIBLE else View.GONE
        keepDownloads.isEnabled = !active
        renderRows(status)
        // a step began or the run ended: the summary and the space changed
        val stage = status.phase to status.step
        if (stage != lastStage) {
            lastStage = stage
            renderPlan()
        }
    }

    /**
     * Each patch's bar and the total's: blue as far as it is downloaded, gold as far as it is
     * applied. The patch under way takes the live status; the others what is on disk.
     */
    private fun renderRows(status: InstallStatus) {
        if (rows.isEmpty()) return
        val installed = paths.installedVersion()
        var downloadedBytes = 0L
        var appliedBytes = 0L
        for ((i, row) in rows.withIndex()) {
            val p = row.patch
            val current = status.phase.active && status.step == i + 1
            val applied = installed.isNotEmpty() && installed >= p.version
            val onDisk = File(paths.downloads, p.file).length().coerceAtMost(p.size)
            val downloaded = when {
                applied -> p.size
                current && status.phase == Phase.DOWNLOADING -> status.done.coerceAtMost(p.size)
                else -> onDisk
            }
            val applying = when {
                applied -> p.size
                current && status.phase == Phase.APPLYING && status.total > 0 -> (p.size * status.fraction).toLong()
                else -> 0L
            }
            downloadedBytes += downloaded
            appliedBytes += applying
            row.bar.secondaryProgress = permille(downloaded, p.size)
            row.bar.progress = permille(applying, p.size)
            row.state.text = when {
                applied -> getString(R.string.patch_applied)
                current -> when (status.phase) {
                    Phase.DOWNLOADING -> getString(R.string.patch_downloading, (100 * downloaded / p.size).toInt())
                    Phase.CHECKING -> getString(R.string.patch_checking)
                    Phase.APPLYING -> getString(R.string.patch_applying, (100 * status.fraction).toInt())
                    Phase.WAITING_FOR_NETWORK -> getString(R.string.patch_waiting)
                    else -> ""
                }
                downloaded == p.size -> getString(R.string.patch_downloaded)
                downloaded > 0 -> getString(R.string.patch_partial, (100 * downloaded / p.size).toInt())
                else -> ""
            }
            // (one line: the state while there is one, else the size)
            row.size.visibility = if (row.state.text.isEmpty()) View.VISIBLE else View.GONE
            row.state.setTextColor(getColor(when {
                applied -> R.color.gold
                current -> R.color.crystal
                else -> R.color.text_dim
            }))
            row.name.setTextColor(getColor(if (current) R.color.gold_text else R.color.text))
        }
        val total = rows.sumOf { it.patch.size }
        totalBar.secondaryProgress = permille(downloadedBytes, total)
        totalBar.progress = permille(appliedBytes, total)
        totalDetail.text = getString(R.string.total_detail, formatSize(downloadedBytes), formatSize(total), formatSize(appliedBytes))
    }

    /**
     * A patch file as the rows show it: its version alone, less the trailing ".0000" every base patch
     * has ("D2013.06.29.0000.0000.patch" -> "2013.06.29.0000"); "D" and ".patch" say nothing here.
     */
    private fun shortName(file: String): String {
        val v = file.removePrefix("D").removeSuffix(".patch")
        return if (v.count { it == '.' } == 4) v.removeSuffix(".0000") else v
    }

    /** The installer's step label with its patch files named as the rows name them. */
    private fun shortLabel(label: String) = PATCH_FILE.replace(label) { shortName(it.value) }

    /** The run's own message, else (while nothing runs) the space shortfall, else nothing. */
    private fun showMessage(status: InstallStatus) {
        val text = status.message?.takeIf { it.isNotEmpty() } ?: spaceWarning.takeIf { !status.phase.active }
        message.text = text.orEmpty()
        message.visibility = if (text == null) View.GONE else View.VISIBLE
    }

    private var spaceWarning: String? = null

    private fun permille(part: Long, whole: Long) = if (whole > 0) (1000 * part / whole).toInt() else 0

    private fun SpannableStringBuilder.key(color: Int) {
        val start = length
        append("■")
        setSpan(ForegroundColorSpan(color), start, length, Spanned.SPAN_EXCLUSIVE_EXCLUSIVE)
    }

    private fun colorKey() = SpannableStringBuilder().apply {
        key(getColor(R.color.crystal)); append(" ${getString(R.string.key_downloaded)}   ")
        key(getColor(R.color.gold)); append(" ${getString(R.string.key_applied)}")
    }

    private fun folderSize(dir: File): Long = dir.walkTopDown().filter { it.isFile }.sumOf { it.length() }

    private var lastStage: Pair<Phase, Int>? = null

    private fun openLauncher() {
        startActivity(Intent(this, LauncherActivity::class.java))
        finish()
    }

    private companion object {
        val PATCH_FILE = Regex("""D\d{4}\.\d\d\.\d\d\.\d{4}\.\d{4}\.patch""")
    }
}
