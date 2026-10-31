package dev.crystalcore.client

import java.io.File
import java.io.FileOutputStream
import java.io.RandomAccessFile

/**
 * The game folder as [ZiPatch] writes it (the PS1's ZiPatch.Game): files opened read-write on
 * first use and kept open for the patch (a patch writes the same few dat files over and over),
 * paths relative with forward slashes, and the chunk counts.
 */
internal class GameFiles(private val root: File) {
    private val open = HashMap<String, RandomAccessFile>()
    val stats = HashMap<String, Int>()

    private fun full(rel: String) = File(root, rel)

    private fun open(rel: String): RandomAccessFile = open.getOrPut(rel) {
        val file = full(rel)
        file.parentFile?.mkdirs()
        RandomAccessFile(file, "rw")
    }

    fun write(rel: String, offset: Long, data: ByteArray, start: Int, count: Int) {
        val f = open(rel)
        f.seek(offset)
        f.write(data, start, count)
    }

    fun wipe(rel: String, offset: Long, length: Long) {
        var at = offset
        var left = length
        while (left > 0) {
            val n = minOf(left, ZERO.size.toLong()).toInt()
            write(rel, at, ZERO, 0, n)
            at += n
            left -= n
        }
    }

    fun truncate(rel: String) {
        close(rel)
        val file = full(rel)
        file.parentFile?.mkdirs()
        FileOutputStream(file).close()
    }

    fun delete(rel: String) {
        close(rel)
        val file = full(rel)
        if (file.isFile) file.delete()
    }

    fun makeDir(rel: String) {
        full(rel).mkdirs()
    }

    fun removeDirIfEmpty(rel: String) {
        val dir = full(rel)
        if (dir.isDirectory && dir.list()?.isEmpty() == true) dir.delete()
    }

    /** The names of the files (not folders) in [rel]. */
    fun list(rel: String): List<String> =
        full(rel).listFiles()?.filter { it.isFile }?.map { it.name }.orEmpty()

    fun close(rel: String) {
        open.remove(rel)?.close()
    }

    fun closeAll() {
        for (f in open.values) runCatching { f.close() }
        open.clear()
    }

    fun count(key: String) {
        stats[key] = (stats[key] ?: 0) + 1
    }

    private companion object {
        val ZERO = ByteArray(1 shl 20)
    }
}
