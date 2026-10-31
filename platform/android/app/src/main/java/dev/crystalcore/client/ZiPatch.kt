package dev.crystalcore.client

import java.io.BufferedInputStream
import java.io.DataInputStream
import java.io.EOFException
import java.io.File
import java.io.FileInputStream
import java.io.IOException
import java.util.Locale
import java.util.concurrent.CancellationException
import java.util.zip.CRC32
import java.util.zip.DataFormatException
import java.util.zip.Inflater

class ZiPatchException(message: String) : IOException(message)

/**
 * FFXIV ZiPatch files applied to a game folder the way the 2013 launcher does: a port of the
 * ZiPatch class in CrystalCore-Installer.ps1 (itself tools/zipatch.py), which reproduces the
 * launcher's result byte for byte. Every chunk's CRC is checked before it is applied.
 *
 * Chunks: FHDR, APLY, APFS, XXXX (bookkeeping), ADIR, DELD, SQPK, EOF_. SQPK commands: A (add
 * data), D and E (delete / expand data: zeroed blocks with a free-block header), H (dat/index
 * header), F (file: A add, D delete, M make dir, R remove all), and T, X, I (bookkeeping, skipped).
 *
 * Re-applying a patch interrupted halfway is safe: every write lands at an absolute offset, and
 * F/A truncates the file it starts at offset 0. One instance per patch; not thread-safe.
 */
class ZiPatch(gameDir: File) {
    private val game = GameFiles(gameDir)
    private val inflater = Inflater(true) // raw deflate, as .NET's DeflateStream
    private val inflated = ByteArray(64 * 1024)

    /** Applies [patch]; returns its chunk and command counts, e.g. "ADIR: 3, EOF_: 1, ...". */
    fun apply(patch: File, cancelled: () -> Boolean, progress: Progress): String {
        try {
            DataInputStream(BufferedInputStream(FileInputStream(patch), 1 shl 20)).use { input ->
                readChunks(patch, input, cancelled, progress)
            }
        } catch (e: EOFException) {
            throw ZiPatchException("${patch.name}: ended without EOF_")
        } finally {
            game.closeAll()
            inflater.end()
        }
        return game.stats.toSortedMap().entries.joinToString(", ") { "${it.key}: ${it.value}" }
    }

    private fun readChunks(patch: File, input: DataInputStream, cancelled: () -> Boolean, progress: Progress) {
        val magic = ByteArray(12)
        input.readFully(magic)
        if (!magic.contentEquals(MAGIC)) throw ZiPatchException("${patch.name}: not a ZiPatch file")
        val total = patch.length()
        var pos = 12L
        val hdr = ByteArray(8)
        val crcBytes = ByteArray(4)
        val crc = CRC32()
        var body = ByteArray(1 shl 20)
        val clock = ProgressClock(progress)
        while (true) {
            input.readFully(hdr)
            val size = be32(hdr, 0)
            if (size > Int.MAX_VALUE - 16) throw ZiPatchException("${patch.name}: chunk of $size bytes at $pos")
            val n = size.toInt()
            if (body.size < n) body = ByteArray(maxOf(n, body.size * 2))
            input.readFully(body, 0, n)
            input.readFully(crcBytes)
            // CRC-32 (zlib's) of the type and the body
            crc.reset()
            crc.update(hdr, 4, 4)
            crc.update(body, 0, n)
            if (crc.value != be32(crcBytes, 0)) throw ZiPatchException("${patch.name}: CRC mismatch at $pos")
            pos += 12L + n
            val type = String(hdr, 4, 4, Charsets.ISO_8859_1)
            game.count(type)
            when (type) {
                "SQPK" -> sqpk(body, n)
                "ADIR" -> game.makeDir(latin1(body, 4, be32(body, 0).toInt()))
                "DELD" -> game.removeDirIfEmpty(latin1(body, 4, be32(body, 0).toInt()))
                "EOF_" -> break
                "FHDR", "APLY", "APFS", "XXXX" -> Unit
                else -> throw ZiPatchException("${patch.name}: unknown chunk $type")
            }
            if (cancelled()) throw CancellationException()
            clock.tick(pos, total)
        }
        clock.tick(pos, total, force = true)
    }

    private fun sqpk(body: ByteArray, len: Int) {
        val cmd = (body[4].toInt() and 0xFF).toChar()
        var key = cmd.toString()
        when (cmd) {
            'A' -> {
                val rel = datPath(be16(body, 8), be16(body, 10), be32(body, 12))
                val off = be32(body, 16) shl 7
                val num = be32(body, 20) shl 7
                val del = be32(body, 24) shl 7
                game.write(rel, off, body, 28, num.toInt())
                game.wipe(rel, off + num, del)
            }
            'D', 'E' -> {
                val rel = datPath(be16(body, 8), be16(body, 10), be32(body, 12))
                emptyBlock(rel, be32(body, 16) shl 7, be32(body, 20))
            }
            'H' -> {
                val fileKind = (body[5].toInt() and 0xFF).toChar()
                val headerKind = (body[6].toInt() and 0xFF).toChar()
                val main = be16(body, 8)
                val sub = be16(body, 10)
                val id = be32(body, 12)
                val rel = if (fileKind == 'D') datPath(main, sub, id) else indexPath(main, sub, id)
                game.write(rel, if (headerKind == 'V') 0L else 1024L, body, 16, 1024)
            }
            'F' -> {
                val op = (body[5].toInt() and 0xFF).toChar()
                val fileOffset = be64(body, 8)
                val pathLen = be32(body, 24).toInt()
                val expansion = be16(body, 28)
                val rel = latin1(body, 32, pathLen).trimEnd('\u0000').replace('\\', '/')
                when (op) {
                    'A' -> {
                        if (fileOffset == 0L) game.truncate(rel)
                        writeBlocks(rel, fileOffset, body, 32 + pathLen, len)
                    }
                    'D' -> game.delete(rel)
                    'M' -> game.makeDir(rel)
                    'R' -> removeAll(if (expansion == 0) "ffxiv" else "ex$expansion")
                    else -> throw ZiPatchException("unknown file op $op")
                }
                key += op
            }
            'T', 'X', 'I' -> Unit
            else -> throw ZiPatchException("unknown SQPK command $cmd")
        }
        game.count("SQPK $key")
    }

    /** F/R: every file of an expansion's sqpack and movie folders, but its .var files and the
     *  four opening movies. */
    private fun removeAll(name: String) {
        for (folder in listOf("sqpack/$name", "movie/$name")) {
            for (fn in game.list(folder)) {
                if (fn.endsWith(".var") || fn in KEPT_MOVIES) continue
                game.delete("$folder/$fn")
            }
        }
    }

    /** What the launcher leaves where data was removed: zeroed blocks with a free-block header. */
    private fun emptyBlock(rel: String, offset: Long, blocks: Long) {
        game.wipe(rel, offset, blocks shl 7)
        val header = ByteArray(20)
        putLe32(header, 0, 1L shl 7)
        putLe32(header, 12, blocks - 1) // (as the PS1's uint: 0 blocks gives 0xFFFFFFFF)
        game.write(rel, offset, header, 0, 20)
    }

    /**
     * An F/A operation's blocks, written from [offset] on: each a 16-byte header, then deflate data
     * (raw when csize is 32000), padded to 128 bytes. Streamed to the file rather than gathered
     * first as the PS1 does: the same bytes land at the same offsets.
     */
    private fun writeBlocks(rel: String, offset: Long, body: ByteArray, start: Int, end: Int) {
        var p = start
        var at = offset
        while (p < end) {
            val hsize = le32(body, p)
            val csize = le32(body, p + 8)
            val dsize = le32(body, p + 12)
            if (hsize != 16L) throw ZiPatchException("bad block header size $hsize")
            val raw = csize == 32000L
            val n = (if (raw) dsize else csize).toInt()
            if (raw) {
                game.write(rel, at, body, p + 16, n)
                at += n
            } else {
                at += inflate(rel, at, body, p + 16, n)
            }
            p += (16 + n + 127) and 127.inv()
        }
    }

    /** One deflate block to [rel] at [at]; returns the bytes written. */
    private fun inflate(rel: String, at: Long, body: ByteArray, off: Int, n: Int): Long {
        inflater.reset()
        inflater.setInput(body, off, n)
        var written = 0L
        var fedPad = false
        while (!inflater.finished()) {
            val k = try {
                inflater.inflate(inflated)
            } catch (e: DataFormatException) {
                throw ZiPatchException("$rel: bad deflate data (${e.message})")
            }
            if (k > 0) {
                game.write(rel, at + written, inflated, 0, k)
                written += k
                continue
            }
            // java.util.zip.Inflater: "when using the 'nowrap' option it is also necessary to
            // provide an extra dummy byte as input" for some streams
            if (inflater.needsInput() && !fedPad) {
                inflater.setInput(PAD)
                fedPad = true
                continue
            }
            break // input exhausted: like DeflateStream, keep what it gave
        }
        return written
    }

    private companion object {
        val MAGIC = byteArrayOf(0x91.toByte(), 0x5A, 0x49, 0x50, 0x41, 0x54, 0x43, 0x48, 0x0D, 0x0A, 0x1A, 0x0A)
        val PAD = ByteArray(1)
        val KEPT_MOVIES = setOf("00000.bk2", "00001.bk2", "00002.bk2", "00003.bk2")

        fun expansion(sub: Int): String {
            val e = sub shr 8
            return if (e == 0) "ffxiv" else "ex$e"
        }

        fun datPath(main: Int, sub: Int, id: Long) =
            String.format(Locale.US, "sqpack/%s/%02x%04x.win32.dat%d", expansion(sub), main, sub, id)

        fun indexPath(main: Int, sub: Int, id: Long) =
            String.format(Locale.US, "sqpack/%s/%02x%04x.win32.index%s", expansion(sub), main, sub, if (id == 0L) "" else id.toString())

        fun be16(b: ByteArray, p: Int): Int = ((b[p].toInt() and 0xFF) shl 8) or (b[p + 1].toInt() and 0xFF)

        fun be32(b: ByteArray, p: Int): Long =
            ((b[p].toLong() and 0xFF) shl 24) or ((b[p + 1].toLong() and 0xFF) shl 16) or
                ((b[p + 2].toLong() and 0xFF) shl 8) or (b[p + 3].toLong() and 0xFF)

        fun be64(b: ByteArray, p: Int): Long = (be32(b, p) shl 32) or be32(b, p + 4)

        fun le32(b: ByteArray, p: Int): Long =
            (b[p].toLong() and 0xFF) or ((b[p + 1].toLong() and 0xFF) shl 8) or
                ((b[p + 2].toLong() and 0xFF) shl 16) or ((b[p + 3].toLong() and 0xFF) shl 24)

        fun putLe32(b: ByteArray, p: Int, v: Long) {
            for (i in 0 until 4) b[p + i] = (v ushr (8 * i)).toByte()
        }

        fun latin1(b: ByteArray, p: Int, n: Int) = String(b, p, n, Charsets.ISO_8859_1)
    }
}
