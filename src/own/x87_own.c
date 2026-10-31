/* Functions the project writes itself (rhipper.json "own_functions"): the reference's x87 code that
   hands results along the register stack in a way no prototype the decompiler takes can hold. Each
   is written from its disassembly; the declarations are translated.h's. */
#include "translated.h"
#include <math.h>
#include <string.h>

/* ---- the C runtime's x87 transcendental fragments (VS2010 trans.asm) ----------------------------
   Each runs on its dispatcher's frame (`[ebp - 0x90]` the function code, `[ebp - 0x9f]` the status
   word's high byte) and ends in a jump to the dispatcher's exit, 0xc5ecc8. In the port the
   dispatchers call them through their tables; what each leaves in st0 is its value here. */

/* 0xc6fe98, exp's core: x * log2(e) split into n + f (frndint), 2^f - 1 by f2xm1, scaled by 2^n.
   With n 0 the scale is skipped and it stays 2^f - 1, e^x - 1 (bh 0 says so); otherwise e^x */
float10 F_00c6fe98(unsigned int gen_a0, double gen_a1, unsigned int gen_a2)
{
    GEN_ENTER(0xc6fe98u, gen_a0, 0u, gen_a2, 0u);
    (void)gen_a0; (void)gen_a2;
    return nearbyint(gen_a1 * 1.4426950408889634) == 0.0 ? expm1(gen_a1) : exp(gen_a1);   /* (log2(e), fldl2e) */
}

/* 0xc6fec9: e + 1/e of 0xc6fe98's e^x (bh set), or of its e^x - 1 form (bh 0): x - x/(1 + x) + 2,
   the same sum, by its own sequence (0xc6fedb's `fadd st(1); fchs; fxch st(1); fdivrp`) */
float10 F_00c6fec9(unsigned int gen_a0, double gen_a1)
{
    GEN_ENTER(0xc6fec9u, gen_a0, 0u, 0u, 0u);
    unsigned int bh = (gen_a0 >> 8) & 0xff;
    return bh ? gen_a1 + 1.0 / gen_a1 : gen_a1 - gen_a1 / (1.0 + gen_a1) + 2.0;
}

/* 0xc6fdf0, sinh: (e - 1/e) * 2^-1 (0xc6fedb's difference, then 0xc6fe57's `fld1; fchs; fscale`) */
float10 F_00c6fdf0(unsigned int gen_a0, unsigned int gen_a1, double gen_a2, unsigned int gen_a3)
{
    GEN_ENTER(0xc6fdf0u, gen_a0, gen_a1, gen_a3, 0u);
    return sinh(gen_a2);
}

/* 0xc6fe09, tanh: (e - 1/e) / (e + 1/e); past the bound at 0x1125bf0 (|x| large) its error path,
   0xc5ecdd, gives the limit, +-1 */
float10 F_00c6fe09(unsigned int gen_a0, unsigned int gen_a1, double gen_a2, unsigned int gen_a3)
{
    GEN_ENTER(0xc6fe09u, gen_a0, gen_a1, gen_a3, 0u);
    return tanh(gen_a2);
}

/* 0xc6fe42, cosh: (e + 1/e) * 2^-1 (0xc6fec9, then the same scale) */
float10 F_00c6fe42(unsigned int gen_a0, unsigned int gen_a1, double gen_a2, unsigned int gen_a3)
{
    GEN_ENTER(0xc6fe42u, gen_a0, gen_a1, gen_a3, 0u);
    return cosh(gen_a2);
}

/* 0xc5e9e1, exp: 2^f (f2xm1 + 1), its reciprocal for a negative f, scaled by 2^n where n is not 0 */
float10 F_00c5e9e1(double gen_a0, unsigned int gen_a1)
{
    GEN_ENTER(0xc5e9e1u, gen_a1, 0u, 0u, 0u);
    return exp(gen_a0);
}

/* ---- a bounds test that keeps its bound on the x87 stack across its calls -----------------------
   Both load the bound before the loop and compare each 0xd8c560 result (a length, `fsqrt`) with it
   after the call: the decompiler, the call taken for one that clears the stack, read the bound as
   extraout_ST1. The frame is the reference's: 0xd8c100 fills the 16 bytes at [ebp - 0x20] (0x24),
   the vector copied to [ebp - 0x10] (0x14) is 0xd8c560's first argument. */

/* 0xd8ca30: *out = 1, then 0 if any of the n + 1 lengths is above param_9 * [0x11386c0] (a float) */
uint F_00d8ca30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3,
                unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7,
                float gen_a8)
{
    GEN_ENTER(0xd8ca30u, gen_a0, gen_a1, gen_a2, gen_a3);
    GEN_FRAME_DECL_TOP(0x24, 12, 4);
    *((undefined1 *)GEN_TOP(gen_a0)) = 1;
    if ((int)gen_a5 < 0)
        return gen_a0;
    float bound = gen_a8 * REFG(float, 0x11386c0);         /* (mulss, stored and loaded as a float) */
    unsigned int vec = *((unsigned int *)GEN_TOP(gen_a6));
    unsigned int arg = *((unsigned int *)GEN_TOP(gen_a7));
    int n = (int)gen_a5 + 1;
    do {
        for (int w = 0; w < 4; w++)                     /* (its four words, [vec + 0, 4, 8, 0xc]) */
            ((unsigned int *)(gen_frame + 0x10))[w] = *((unsigned int *)GEN_TOP(vec + 4 * w));
        F_00d8c100((unsigned int)(uintptr_t)(gen_frame + 0x0), gen_a1, gen_a2, gen_a4, gen_a3,
                   *((float *)GEN_TOP(arg)));
        float len = F_00d8c560((unsigned int)(uintptr_t)(gen_frame + 0x10), (unsigned int)(uintptr_t)(gen_frame + 0x0));
        if ((float10)len > (float10)bound)                  /* (fcompi st(1); jbe past) */
            *((undefined1 *)GEN_TOP(gen_a0)) = 0;
        vec += 16;
        arg += 4;
    } while (--n != 0);
    return gen_a0;
}

/* 0xd8cae0: *out = 0 at the first of the n + 1 lengths above its own value plus [0x10947f8] (the sum
   at x87 width; an unordered compare goes on, `ja`), else *out = 1 */
uint F_00d8cae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3,
                unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7,
                unsigned int gen_a8)
{
    GEN_ENTER(0xd8cae0u, gen_a0, gen_a1, gen_a2, gen_a3);
    GEN_FRAME_DECL_TOP(0x28, 12, 4);
    if ((int)gen_a5 >= 0) {
        float10 slack = (float10)REFG(float, 0x10947f8);
        unsigned int own = *((unsigned int *)GEN_TOP(gen_a8));
        unsigned int vec = *((unsigned int *)GEN_TOP(gen_a6));
        unsigned int step = *((unsigned int *)GEN_TOP(gen_a7)) - own;   /* (local_8: the second array's offset) */
        int i = 0;
        do {
            for (int w = 0; w < 4; w++)                     /* (its four words, [vec + 0, 4, 8, 0xc]) */
            ((unsigned int *)(gen_frame + 0x10))[w] = *((unsigned int *)GEN_TOP(vec + 4 * w));
            F_00d8c100((unsigned int)(uintptr_t)(gen_frame + 0x0), gen_a1, gen_a2, gen_a4, gen_a3,
                       *((float *)GEN_TOP(own + step)));
            float len = F_00d8c560((unsigned int)(uintptr_t)(gen_frame + 0x10), (unsigned int)(uintptr_t)(gen_frame + 0x0));
            float10 limit = (float10)*((float *)GEN_TOP(own)) + slack;
            if (!isnan((float10)len) && !isnan(limit) && (float10)len > limit) {
                *((undefined1 *)GEN_TOP(gen_a0)) = 0;
                return gen_a0;
            }
            i++;
            vec += 16;
            own += 4;
        } while (i <= (int)gen_a5);
    }
    *((undefined1 *)GEN_TOP(gen_a0)) = 1;
    return gen_a0;
}
