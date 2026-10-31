package dev.crystalcore.client

import android.content.Context
import android.graphics.Canvas
import android.graphics.Paint
import android.graphics.RectF
import android.util.AttributeSet
import android.view.View

/**
 * A bar of parts of one whole (the storage: the game's data, the downloads, what the install still
 * needs, what is free), each its own color, in a gold-ruled groove. A part may be [Segment.hatched]:
 * drawn as an outline over what follows, for space that is wanted but not taken yet.
 */
class SegmentBar @JvmOverloads constructor(context: Context, attrs: AttributeSet? = null) : View(context, attrs) {
    data class Segment(val value: Long, val color: Int, val hatched: Boolean = false)

    private var segments: List<Segment> = emptyList()
    private val density = resources.displayMetrics.density
    private val groove = Paint(Paint.ANTI_ALIAS_FLAG).apply { color = context.getColor(R.color.night_deep) }
    private val frame = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = density
        color = context.getColor(R.color.gold_dim)
    }
    private val fill = Paint(Paint.ANTI_ALIAS_FLAG)
    private val rect = RectF()

    fun setSegments(parts: List<Segment>) {
        segments = parts
        invalidate()
    }

    override fun onMeasure(widthMeasureSpec: Int, heightMeasureSpec: Int) {
        val h = resolveSize((14 * density).toInt(), heightMeasureSpec)
        setMeasuredDimension(getDefaultSize(suggestedMinimumWidth, widthMeasureSpec), h)
    }

    override fun onDraw(canvas: Canvas) {
        val r = 2 * density
        val inset = 2 * density
        rect.set(0f, 0f, width.toFloat(), height.toFloat())
        canvas.drawRoundRect(rect, r, r, groove)
        val whole = segments.sumOf { it.value }.toFloat()
        if (whole > 0) {
            val span = width - 2 * inset
            var x = inset
            for (s in segments) {
                val w = span * (s.value / whole)
                if (w <= 0f) continue
                rect.set(x, inset, (x + w).coerceAtMost(width - inset), height - inset)
                fill.color = s.color
                if (s.hatched) {
                    fill.style = Paint.Style.STROKE
                    fill.strokeWidth = density
                    canvas.drawRect(rect, fill)
                    fill.style = Paint.Style.FILL
                    fill.alpha = 0x40
                    canvas.drawRect(rect, fill)
                    fill.alpha = 0xff
                } else {
                    fill.style = Paint.Style.FILL
                    canvas.drawRect(rect, fill)
                }
                x += w
            }
        }
        rect.set(density / 2, density / 2, width - density / 2, height - density / 2)
        canvas.drawRoundRect(rect, r, r, frame)
    }
}
