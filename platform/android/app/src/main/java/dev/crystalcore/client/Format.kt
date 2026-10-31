package dev.crystalcore.client

import java.util.Locale

/** Sizes as the PS1 writes them: GB with two decimals, MB with one, else KB (1024-based). */
fun formatSize(bytes: Double): String = when {
    bytes >= GB -> String.format(Locale.US, "%.2f GB", bytes / GB)
    bytes >= MB -> String.format(Locale.US, "%.1f MB", bytes / MB)
    else -> String.format(Locale.US, "%.0f KB", bytes / KB)
}

fun formatSize(bytes: Long): String = formatSize(bytes.toDouble())

/** A time left, to the minute once it is long: "2 h 05 min", "7 min 30 s", "40 s". */
fun formatDuration(seconds: Long): String = when {
    seconds >= 3600 -> String.format(Locale.US, "%d h %02d min", seconds / 3600, seconds % 3600 / 60)
    seconds >= 60 -> String.format(Locale.US, "%d min %02d s", seconds / 60, seconds % 60)
    else -> "$seconds s"
}

private const val KB = 1024.0
private const val MB = KB * 1024
private const val GB = MB * 1024
