package dev.crystalcore.client

import java.io.File
import java.security.MessageDigest
import java.util.concurrent.CancellationException

object Hashes {
    /** A file's SHA-1 as lowercase hex. */
    fun sha1(file: File, cancelled: () -> Boolean, progress: Progress): String {
        val digest = MessageDigest.getInstance("SHA-1")
        val total = file.length()
        val clock = ProgressClock(progress)
        val buf = ByteArray(4 shl 20)
        var done = 0L
        file.inputStream().use { input ->
            while (true) {
                val n = input.read(buf)
                if (n < 0) break
                digest.update(buf, 0, n)
                done += n
                if (cancelled()) throw CancellationException()
                clock.tick(done, total)
            }
        }
        clock.tick(done, total, force = true)
        return digest.digest().joinToString("") { "%02x".format(it) }
    }
}
