package dev.crystalcore.client

import java.io.File
import java.io.FileOutputStream
import java.io.IOException
import java.net.HttpURLConnection
import java.net.URL
import java.util.concurrent.CancellationException

/**
 * Fetch.Download of CrystalCore-Installer.ps1: a download to a file, resumed from what is already
 * there with an HTTP range, retried. Unlike the PS1's five tries, a dropped network only waits
 * ([NetworkWaiter]) and resumes; it gives up after [MAX_FAILURES] attempts in a row that got no
 * byte further.
 */
class Downloader(
    private val network: NetworkWaiter,
    private val cancelled: () -> Boolean,
    private val onWaitingForNetwork: () -> Unit,
) {
    fun download(url: String, file: File, size: Long, progress: Progress) {
        var have = if (file.isFile) file.length() else 0L
        if (have > size) {
            file.delete()
            have = 0
        }
        var failures = 0
        while (have < size) {
            if (cancelled()) throw CancellationException()
            network.await(onWaitingForNetwork)
            val before = have
            try {
                have = fetchOnce(url, file, have, size, progress)
            } catch (e: IOException) {
                have = if (file.isFile) file.length() else 0L
                failures = if (have > before) 1 else failures + 1
                if (failures >= MAX_FAILURES) throw IOException("${e.message} (after $failures attempts)", e)
                Thread.sleep(minOf(RETRY_MS shl (failures - 1).coerceAtMost(4), MAX_RETRY_MS))
            }
        }
        if (have != size) throw IOException("${file.name}: got $have bytes, expected $size")
        progress(have, size, 0.0)
    }

    /** One request from byte [have]; returns how many bytes the file holds after it. */
    private fun fetchOnce(url: String, file: File, have: Long, size: Long, progress: Progress): Long {
        val conn = URL(url).openConnection() as HttpURLConnection
        try {
            conn.instanceFollowRedirects = true
            conn.connectTimeout = CONNECT_TIMEOUT_MS
            conn.readTimeout = READ_TIMEOUT_MS
            conn.setRequestProperty("User-Agent", CrystalCore.USER_AGENT)
            if (have > 0) conn.setRequestProperty("Range", "bytes=$have-")
            val code = conn.responseCode
            if (code == 416 && have == size) return have
            // a 200 to a range request: the server starts over, so does the file
            val resume = when (code) {
                206 -> have > 0
                200 -> false
                else -> throw IOException("HTTP $code from ${URL(url).host}")
            }
            var done = if (resume) have else 0L
            val clock = ProgressClock(progress, startDone = done)
            val buf = ByteArray(1 shl 20)
            conn.inputStream.use { body ->
                FileOutputStream(file, resume).use { out ->
                    while (done < size) {
                        val n = body.read(buf, 0, minOf(buf.size.toLong(), size - done).toInt())
                        if (n < 0) break
                        out.write(buf, 0, n)
                        done += n
                        if (cancelled()) throw CancellationException()
                        clock.tick(done, size)
                    }
                }
            }
            if (done < size) throw IOException("the connection closed at $done of $size bytes")
            return done
        } finally {
            conn.disconnect()
        }
    }

    private companion object {
        const val CONNECT_TIMEOUT_MS = 30_000
        const val READ_TIMEOUT_MS = 60_000
        const val MAX_FAILURES = 8
        const val RETRY_MS = 3000L
        const val MAX_RETRY_MS = 60_000L
    }
}
