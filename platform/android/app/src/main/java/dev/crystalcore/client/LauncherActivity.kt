package dev.crystalcore.client

import android.app.Activity
import android.app.AlertDialog
import android.content.Intent
import android.os.Bundle
import android.view.View
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import dev.rhipper.host.RhipperActivity
import dev.rhipper.host.RhipperExitReports
import dev.rhipper.host.RhipperLogsActivity
import dev.rhipper.host.padForSystemBars
import java.io.File
import java.text.DateFormat
import java.util.Date
import kotlin.concurrent.thread

/** Once installed: Play (with the lobby server to use), re-verify the install, and the logs. */
class LauncherActivity : Activity() {
    private lateinit var paths: GamePaths
    private lateinit var prefs: Prefs
    private lateinit var reference: ReferenceBuild
    private lateinit var lobby: EditText
    private lateinit var status: TextView
    private lateinit var buttons: List<Button>

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        paths = GamePaths(this)
        prefs = Prefs(this)
        reference = PatchList.bundled(this).reference
        if (!InstallState.isInstalled(paths, reference)) return openInstaller()

        setContentView(R.layout.activity_launcher)
        findViewById<View>(R.id.root).padForSystemBars()
        findViewById<TextView>(R.id.info).text =
            getString(R.string.launcher_info, reference.version, reference.build, paths.game.path)
        lobby = findViewById(R.id.lobby)
        lobby.setText(prefs.lobby)
        status = findViewById(R.id.status)
        val play = findViewById<Button>(R.id.play)
        val verify = findViewById<Button>(R.id.verify)
        val logs = findViewById<Button>(R.id.logs)
        buttons = listOf(play, verify, logs)
        play.setOnClickListener { play() }
        verify.setOnClickListener { reverify() }
        logs.setOnClickListener { startActivity(RhipperLogsActivity.intent(this, paths.logs)) }
    }

    override fun onResume() {
        super.onResume()
        if (isFinishing) return
        showLastRun()
    }

    private fun play() {
        val parsed = Lobby.parse(lobby.text.toString())
        if (parsed == null) {
            lobby.error = getString(R.string.lobby_invalid)
            return
        }
        prefs.lobby = parsed.toString()
        startActivity(GameActivity.intent(this, paths, reference.version, parsed))
    }

    /** ffxivgame.ver and ffxiv.exe's SHA-1 checked again; on a mismatch the installer takes over
     *  (which re-applies nothing ffxivgame.ver records as applied, and says how to start over). */
    private fun reverify() {
        buttons.forEach { it.isEnabled = false }
        status.text = getString(R.string.verifying)
        thread(name = "crystalcore-verify") {
            val result = runCatching {
                val version = paths.installedVersion()
                check(version == reference.version) { "ffxivgame.ver is ${version.ifEmpty { "missing" }}, not ${reference.version}" }
                check(paths.exe.isFile) { "${paths.exe} is missing" }
                val sha1 = Hashes.sha1(paths.exe, { false }) { _, _, _ -> }
                check(sha1 == reference.exeSha1) { "ffxiv.exe SHA-1 $sha1, expected ${reference.exeSha1}" }
                InstallState.markVerified(paths, reference)
                sha1
            }
            runOnUiThread {
                if (isFinishing) return@runOnUiThread
                buttons.forEach { it.isEnabled = true }
                result.onSuccess { status.text = getString(R.string.verify_ok, reference.version, it) }
                result.onFailure { error ->
                    InstallState.clear(paths)
                    AlertDialog.Builder(this)
                        .setTitle(R.string.verify_failed)
                        .setMessage(error.message)
                        .setPositiveButton(R.string.open_installer) { _, _ -> openInstaller() }
                        .setCancelable(false)
                        .show()
                }
            }
        }
    }

    /** How the last run ended: its exit code, or what Android saw when it died without one. */
    private fun showLastRun() {
        thread(name = "crystalcore-exits") {
            val reports = runCatching {
                RhipperExitReports.collect(this, CrystalCore.GAME_PROCESS, paths.logs)
            }.getOrDefault(emptyList())
            val lastExit = File(paths.logs, RhipperActivity.EXIT_RECORD).takeIf { it.isFile }?.readText()?.trim()
            runOnUiThread {
                if (isFinishing) return@runOnUiThread
                status.text = lastExit?.let(::describeExit).orEmpty()
                if (reports.isNotEmpty()) showCrash(reports)
            }
        }
    }

    private fun describeExit(record: String): String? {
        // "exit <code> <epoch ms>"
        val parts = record.split(' ')
        val code = parts.getOrNull(1)?.toIntOrNull() ?: return null
        val time = parts.getOrNull(2)?.toLongOrNull() ?: return null
        return getString(R.string.last_exit, code, code, DateFormat.getDateTimeInstance().format(Date(time)))
    }

    private fun showCrash(reports: List<RhipperExitReports.Report>) {
        val text = reports.joinToString("\n\n") { r ->
            DateFormat.getDateTimeInstance().format(Date(r.time)) + ": " + r.reason +
                (r.description?.let { "\n$it" } ?: "") +
                (r.trace?.let { "\n" + getString(R.string.crash_saved, it.name) } ?: "")
        }
        AlertDialog.Builder(this)
            .setTitle(R.string.crash_title)
            .setMessage(text)
            .setPositiveButton(R.string.logs) { _, _ -> startActivity(RhipperLogsActivity.intent(this, paths.logs)) }
            .setNegativeButton(android.R.string.ok, null)
            .show()
    }

    private fun openInstaller() {
        startActivity(Intent(this, InstallerActivity::class.java))
        finish()
    }
}
