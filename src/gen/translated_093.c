#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00945320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945320(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00945330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945330(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00945350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945350(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00945360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945360(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00945380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945380(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00945390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945390(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_009453b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009453b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9453b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00910c10(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_009453c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009453c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9453c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00910c10(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_009453f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009453f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9453f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945400(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00945420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945420(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945430(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00945450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945450(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00945480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945480(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945490(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_009454b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009454b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9454b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009454c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009454c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9454c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00945500 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00945500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x945500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  if (uVar1 != 0) {
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
    if (*((uint *)GEN_TOP(((int)this + 8))) <= *((uint *)GEN_TOP(((int)this + 0xc)))) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
    uVar1 = uVar1 - 1;
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
    if (uVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00945680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945680(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_009456d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009456d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9456d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009456e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009456e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9456e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_009457c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009457c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9457c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945850(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00945860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945860(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_009458b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009458b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9458b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009458c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009458c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9458c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_009458e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009458e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9458e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009458f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009458f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9458f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00945910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945910(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945920(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00945940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945940(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945950(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00945970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945970(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945980(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_009459a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009459a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9459a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_009459d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009459d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9459d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945a00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945a50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00945a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x945a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00928100(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00945a70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00945a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x945a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00928170(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00945a90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945ab0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945ad0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) != *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_00945b10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945b30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945b50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945b70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00945b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00945bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945bc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x945bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00945be0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945c00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945c20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945c40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00945c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x945c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_009283d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00945c60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945c80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945cb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00945cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x945cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00914400(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00945cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00945cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x945cc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00914400(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00945ce0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) != *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_00945d00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945d20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945d40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945d60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945d80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945da0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945dc0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945e00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00945e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x945e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00945ed0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00945ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x945ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  return 0;
}

/* ref: FUN_00945f50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00945f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x945f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x137);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00945f70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00945f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x945f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00946180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x946180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_009461c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009461c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9461c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: FUN_00946200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x946200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x25))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x25))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00946240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x946240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x21))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x21))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00946280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x946280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x15))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00946300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946300(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x946300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946310 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00946310(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00946320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946320(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946330(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946340 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00946340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x946340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00946340(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x18,400);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_009463d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009463d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9463d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_009463f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009463f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9463f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 - 1;
      *((int *)GEN_TOP(((int)this + 0x10))) = iVar2;
      if (iVar2 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      }
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar2 != 0) {
    iVar2 = iVar2 - 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))),0x10,400);
    }
  }
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,400);
    uVar3 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_009464b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009464b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9464b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_009464d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009464d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9464d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x39)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_009464d0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x40,400);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x39)));
  }
  return;
}

/* ref: FUN_00946510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x946510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x39))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_009465d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009465d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9465d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_009465f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009465f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9465f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 - 1;
      *((int *)GEN_TOP(((int)this + 0x10))) = iVar2;
      if (iVar2 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      }
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar2 != 0) {
    iVar2 = iVar2 - 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))),0x20,400);
    }
  }
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,400);
    uVar3 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_009466b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009466b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9466b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_009466d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009466d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9466d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009466e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009466e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9466e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_009466f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009466f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9466f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946700(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946710(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946730(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946740(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946750(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946760(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946770(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946a80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946a90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946aa0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946ab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946ab0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946ac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946ac0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946ad0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946ae0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946af0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946b00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946b10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946b10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946b20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946b30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946b30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946b40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946b40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946b50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946b60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946b70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946b80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946bb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00946bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x946bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00946bf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946bf0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946c00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946c00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946c10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946c10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946c20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946c30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946c30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946c40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946c40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946c50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946c50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946c60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946c70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946c70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946c80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946c80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946c90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946c90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x946c90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946ca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946ca0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x946ca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946cb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946cb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x946cb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x946cc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00946ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x946ce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00929470(this GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00946d00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x946d00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00929420(this GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00946d20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00946d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x946d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x21)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00946d20(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x28,400);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x21)));
  }
  return;
}

/* ref: FUN_00946d80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946d80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946d90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946da0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00946da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x946da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00946da0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x18,400);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_00946e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946e00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946e10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946e10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x946e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00946e20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00946e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x946e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00946e20(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x18,400);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_00946e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946e80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x946e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946e90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00946e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x946e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00929740(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00946ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946ea0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x946ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946eb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00946eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x946eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_009297a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00946ec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x946ec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_00946f00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x946f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: FUN_00946f40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946f40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x946f40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946f50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00946f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x946f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00929870(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00946f60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946f60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x946f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946f70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x946f70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_00946fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x946fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: FUN_00946ff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00946ff0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x946ff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947000(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x947000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947010(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x947010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947020(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x947020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947030(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x947030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947040(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x947040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947050(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x947050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x947060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = param_2 * 0xd4 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_009471a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009471a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9471a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009471b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009471b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9471b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009471c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009471c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9471c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = param_2 * 0x54 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_009471e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009471e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9471e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = param_2 * 0xd + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_00947200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x947200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = param_2 * 3 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_00947220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x947220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = param_2 * 0x60 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_00947240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x947240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * 8;
  return (uint)param_1;
}

/* ref: FUN_00947260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x947260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * 8;
  return (uint)param_1;
}

/* ref: FUN_00947280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x947280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * 0xc;
  return (uint)param_1;
}

/* ref: FUN_009472a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009472a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9472a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((((int *)GEN_TOP(*param_1)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_009472d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009472d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9472d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((((int *)GEN_TOP(*param_1)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00947300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((((int *)GEN_TOP(*param_1)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_009473c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009473c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9473c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_009473f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009473f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9473f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,400)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    puVar1[4] = param_3[2];
  }
  return (uint)puVar1;
}

/* ref: FUN_00947430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00947460 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947460(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x947460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xc,0,400)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_009474a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009474a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9474a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009474b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009474b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9474b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_009474e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009474e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9474e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xc,0,400)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00947520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x947520u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *param_1 = 0;
  param_1[1] = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return (uint)param_1;
  }
  param_1[2] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00947550 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_00947550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0');
  }
  return puVar2;
}

/* ref: FUN_009475c0 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_009475c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9475c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x21))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x21))) == '\0');
  }
  return puVar2;
}

/* ref: FUN_009475f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009475f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9475f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009476a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009476a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x9476a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *param_1 = 0;
  param_1[1] = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return (uint)param_1;
  }
  param_1[2] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00947740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x947740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *param_1 = 0;
  param_1[1] = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return (uint)param_1;
  }
  param_1[2] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00947770 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947770(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947780 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947780(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947790 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947790(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009477a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009477a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9477a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009477b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009477b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9477b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009477c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009477c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9477c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00947850 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947850(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x947850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xc,0,400)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00947890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_009478c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009478c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9478c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,400)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    puVar1[4] = param_3[2];
    puVar1[5] = param_3[3];
  }
  return (uint)puVar1;
}

/* ref: FUN_00947910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00947940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00947970 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947970(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x947970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,400)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    puVar1[4] = param_3[2];
  }
  return (uint)puVar1;
}

/* ref: FUN_009479b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009479b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9479b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_009479e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009479e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9479e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00947a10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00947a40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947a40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947a50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947a50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947a60 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947a60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947a70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947a70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947a80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947a80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947a90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947a90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947aa0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947aa0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947ab0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947ab0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947ac0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947ac0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947ad0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947ad0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947ae0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947ae0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947af0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947af0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947b00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947b00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947b10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947b10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947b70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947b70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947bc0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947bc0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x947bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947c10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x947c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: FUN_00947c50 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_00947c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x21))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x21))) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00947c80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x947c80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: FUN_00947cc0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00947cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00947ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00947d10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947d10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x947d10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xc,0,400)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00947d50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00947d80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00947d80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x947d80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xc,0,400)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00947dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x947dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = param_2 * 0x54 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_00947de0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00947de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00947e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00947e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x947e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_00947e40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00947e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00947e60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00947e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00947e80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00947e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00947ea0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00947ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00947ec0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00947ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00947ee0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00947ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00947f00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00947f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00947f20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00947f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00947f40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00947f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00947f60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00947f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00947f80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00947f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00947fa0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00947fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00947fc0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00947fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00947fe0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00947fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x947fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00948000 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00948000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x948000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00948020 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00948020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x948020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00948040 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00948040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x948040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00948060 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00948060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x948060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00948080 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00948080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x948080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_009480a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009480a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9480a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_009480c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009480c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9480c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_009480e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009480e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9480e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00948100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00948100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x948100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00929870(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x15))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_0094821a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00914980(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00915630(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_0094821a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_0092a180(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_0092a1e0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_0092a180(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_009482d8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_0092a1e0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_009482d8;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_0092a180(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_0092a1e0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,400);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00948360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00948360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x948360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x21))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_009159a0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x21))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 8))) = (char)piVar3[8];
      *(char *)(piVar3 + 8) = (char)iVar1;
      goto LAB_0094847a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00915710(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      uVar5 = F_009156f0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_0094847a: ;
  if ((char)piVar3[8] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[8] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_0092a240(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x20))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x20))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x20))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x20))) = 1;
                *(undefined1 *)(piVar6 + 8) = 0;
                F_0092a2a0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 8) = (char)piVar4[8];
              *(undefined1 *)(piVar4 + 8) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x20))) = 1;
              F_0092a240(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00948538: ;
            *(undefined1 *)(piVar6 + 8) = 0;
          }
        }
        else {
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_0092a2a0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x20))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x20))) == '\x01'))
            goto LAB_00948538;
            if (*((char *)GEN_TOP((*piVar6 + 0x20))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x20))) = 1;
              *(undefined1 *)(piVar6 + 8) = 0;
              F_0092a240(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 8) = (char)piVar4[8];
            *(undefined1 *)(piVar4 + 8) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x20))) = 1;
            F_0092a2a0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  F_00429760(piVar3,0x28,400);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_009485c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009485c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9485c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_009297a0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x15))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_009486da;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00915080(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00915740(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_009486da: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_0092a300(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_0092a360(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_0092a300(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00948798: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_0092a360(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00948798;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_0092a300(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_0092a360(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,400);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00948820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00948820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x948820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00929740(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x15))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_0094893a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00915160(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00915770(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_0094893a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_0092a3c0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_0092a420(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_0092a3c0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_009489f8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_0092a420(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_009489f8;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_0092a3c0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_0092a420(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,400);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00948a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00948a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x948a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00929740(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00948aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00948aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x948aa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_009297a0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00948ac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00948ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x948ac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00929870(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00948ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00948ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x948ae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_009159a0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00948b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00948b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x948b00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_00948b40 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00948b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x948b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00948b40(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x18,800);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_00948b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00948b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x948b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e0b0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_00948d10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00948d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x948d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e120(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_00948ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00948ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x948ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e1c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_00949030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00949030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x949030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e230(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_009491c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009491c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x9491c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e2a0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_00949350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00949350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x949350u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e310(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_009494e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009494e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x9494e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e380(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_00949670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00949670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x949670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e3f0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_00949800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00949800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x949800u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e460(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_00949990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00949990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x949990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e4d0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_00949b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00949b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x949b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e540(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_00949cb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00949cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x949cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e5b0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_00949e40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00949e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x949e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e620(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_00949fd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00949fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x949fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e690(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094a160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094a160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94a160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e700(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094a2f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094a2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94a2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e770(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094a480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094a480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94a480u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e7e0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094a610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094a610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94a610u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e850(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094a7a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094a7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94a7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094a930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094a930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94a930u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e930(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094aac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094aac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94aac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093e9a0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094ac50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094ac50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94ac50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093ea10(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094ade0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094ade0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94ade0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093ea80(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094af70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094af70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94af70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093eaf0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094b100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094b100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94b100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093eb60(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094b290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094b290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94b290u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093ebd0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094b420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094b420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94b420u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093ec40(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094b5b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094b5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94b5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093ecb0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094b740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094b740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94b740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093ed20(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094b8d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094b8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94b8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093edd0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094ba60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094ba60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94ba60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093ee80(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094bbf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094bbf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94bbf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093eef0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094bd80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094bd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94bd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093ef60(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094bf10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094bf10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x94bf10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0093efd0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0094c0a0 */
GEN_OWN GEN_FRAME uint F_0094c0a0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x94c0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  
  for (iVar1 = param_2; (iVar1 != param_3 && (*((char *)GEN_TOP((iVar1 + 0x14))) == '\0'));
      iVar1 = iVar1 + 0x18) {
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_0094c0d0 */
GEN_OWN GEN_FRAME uint F_0094c0d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x94c0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  uint uVar1;
  int * piVar2;
  
  piVar2 = param_2;
  while ((piVar2 != param_3 && (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG), uVar1 != param_4))) {
    piVar2 = piVar2 + 3;
  }
  *param_1 = piVar2;
  return (uint)param_1;
}

/* ref: FUN_0094c110 */
GEN_OWN GEN_FRAME uint F_0094c110(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x94c110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  uint uVar1;
  int * piVar2;
  
  piVar2 = param_2;
  while ((piVar2 != param_3 && (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG), uVar1 != param_4))) {
    piVar2 = piVar2 + 6;
  }
  *param_1 = piVar2;
  return (uint)param_1;
}

/* ref: FUN_0094c150 */
GEN_OWN GEN_FRAME uint F_0094c150(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x94c150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  uint uVar1;
  int * piVar2;
  
  piVar2 = param_2;
  while ((piVar2 != param_3 && (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG), uVar1 != param_4))) {
    piVar2 = piVar2 + 4;
  }
  *param_1 = piVar2;
  return (uint)param_1;
}

/* ref: FUN_0094c190 */
GEN_OWN GEN_FRAME uint F_0094c190(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94c190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_0094c1b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094c1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x94c1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this GEN_EDX_FWD,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1 GEN_EDX_ARG);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1 GEN_EDX_ARG);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0094c1f0 */
GEN_OWN GEN_FRAME uint F_0094c1f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x94c1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  int iVar1;
  
  for (iVar1 = param_2; iVar1 != param_3; iVar1 = iVar1 + 0xd4) {
    (*param_4)(iVar1);
  }
  *param_1 = param_4;
  return (uint)param_1;
}

/* ref: FUN_0094c220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094c220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x94c220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 0x34))) == '\0') || (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0093f170(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this GEN_EDX_ARG,uVar1,(undefined1)param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0094c2a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094c2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x94c2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 0x34))) == '\0') || (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0093f200(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this GEN_EDX_ARG,uVar1,(undefined1)param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0094c320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094c320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x94c320u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 0x34))) == '\0') || (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0093f290(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this GEN_EDX_ARG,uVar1,(undefined1)param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0094c3a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094c3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x94c3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 0x34))) == '\0') || (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0093f320(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this GEN_EDX_ARG,uVar1,(undefined1)param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0094c420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094c420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x94c420u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 0x34))) == '\0') || (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0093f3b0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this GEN_EDX_ARG,uVar1,(undefined1)param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0094c4a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094c4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x94c4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 0x34))) == '\0') || (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0093f440(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this GEN_EDX_ARG,uVar1,(undefined1)param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0094c520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094c520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x94c520u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 0x34))) == '\0') || (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0093f4d0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this GEN_EDX_ARG,uVar1,(undefined1)param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0094c5a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094c5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x94c5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 0x34))) == '\0') || (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0093f560(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this GEN_EDX_ARG,uVar1,(undefined1)param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0094c620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094c620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x94c620u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 0x34))) == '\0') || (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0093f5f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this GEN_EDX_ARG,uVar1,(undefined1)param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0094c6a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094c6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x94c6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 0x34))) == '\0') || (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0093f680(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this GEN_EDX_ARG,uVar1,(undefined1)param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0094c720 */
GEN_OWN GEN_FRAME uint F_0094c720(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x94c720u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  int * piVar1;
  
  piVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (*piVar1 == *param_4) break;
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_3);
  }
  *param_1 = piVar1;
  return (uint)param_1;
}

/* ref: FUN_0094c750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094c750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x94c750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 0x34))) == '\0') || (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0093f730(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this GEN_EDX_ARG,uVar1,(undefined1)param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0094c7d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094c7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x94c7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,param_1)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar2 + 0xfb))) & 8) == 0)) {
    piVar2 = ((int *)GEN_TOP(F_0093ef60(this GEN_EDX_ARG,param_1,param_2,param_3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0);
      return (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
    }
  }
  return 0;
}

/* ref: _Uninitialized_move<>_0094c860 */
GEN_OWN GEN_FRAME unsigned int F_0094c860(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94c860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 0xd;
    puVar3 = puVar2 + 0xd;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 0xd; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_0094c890 */
GEN_OWN GEN_FRAME unsigned int F_0094c890(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94c890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
  }
  return;
}

/* ref: FUN_0094c8c0 */
GEN_OWN GEN_FRAME unsigned int F_0094c8c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94c8c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00916ea0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_0094c8e0 */
GEN_OWN GEN_FRAME uint F_0094c8e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94c8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP((param_2 + 100))) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_2 + 0x10))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0094c900 */
GEN_OWN GEN_FRAME uint F_0094c900(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94c900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0093f7f0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0094c920 */
GEN_OWN GEN_FRAME unsigned int F_0094c920(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94c920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
    F_0042cbc0(param_2 + 5 GEN_EDX_ARG,param_3 + 5);
    F_0042cbc0(param_2 + 0x1a GEN_EDX_ARG,param_3 + 0x1a);
    param_2[0x2f] = param_3[0x2f];
  }
  return;
}

/* ref: FUN_0094c980 */
GEN_OWN GEN_FRAME unsigned int F_0094c980(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94c980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
    F_0042cbc0(param_2 + 5 GEN_EDX_ARG,param_3 + 5);
    F_0042cbc0(param_2 + 0x1a GEN_EDX_ARG,param_3 + 0x1a);
    param_2[0x2f] = param_3[0x2f];
  }
  return;
}

/* ref: FUN_0094c9e0 */
GEN_OWN GEN_FRAME unsigned int F_0094c9e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94c9e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x58))) = *((undefined4 *)GEN_TOP((param_3 + 0x58)));
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x5c))) = *((undefined4 *)GEN_TOP((param_3 + 0x5c)));
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x60))) = *((undefined4 *)GEN_TOP((param_3 + 0x60)));
    *((undefined1 *)GEN_TOP(((int)param_2 + 100))) = *((undefined1 *)GEN_TOP((param_3 + 100)));
  }
  return;
}

/* ref: FUN_0094ca20 */
GEN_OWN GEN_FRAME unsigned int F_0094ca20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94ca20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x58))) = *((undefined4 *)GEN_TOP((param_3 + 0x58)));
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x5c))) = *((undefined4 *)GEN_TOP((param_3 + 0x5c)));
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x60))) = *((undefined4 *)GEN_TOP((param_3 + 0x60)));
    *((undefined4 *)GEN_TOP(((int)param_2 + 100))) = *((undefined4 *)GEN_TOP((param_3 + 100)));
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x68))) = *((undefined4 *)GEN_TOP((param_3 + 0x68)));
  }
  return;
}

/* ref: FUN_0094ca60 */
GEN_OWN GEN_FRAME uint F_0094ca60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94ca60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0042ccf0(this GEN_EDX_ARG,iVar1);
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_0094caa0 */
GEN_OWN GEN_FRAME unsigned int F_0094caa0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94caa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = ((undefined4 *)GEN_TOP(((int)puVar2 + 0xd)))) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(puVar2 + 3);
    puVar1 = ((undefined4 *)GEN_TOP(((int)puVar1 + 0xd)));
  }
  return 0;
}

/* ref: FUN_0094cae0 */
GEN_OWN GEN_FRAME unsigned int F_0094cae0(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  undefined2 * puVar1;
  undefined2 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = ((undefined2 *)GEN_TOP(((int)puVar2 + 3)))) {
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = ((undefined2 *)GEN_TOP(((int)puVar1 + 3)));
  }
  return 0;
}

/* ref: FUN_0094cb10 */
GEN_OWN GEN_FRAME uint F_0094cb10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cb10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0093f8e0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0094cb30 */
GEN_OWN GEN_FRAME unsigned int F_0094cb30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cb30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_0094cb60 */
GEN_OWN GEN_FRAME unsigned int F_0094cb60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cb60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_0094cb90 */
GEN_OWN GEN_FRAME unsigned int F_0094cb90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cb90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 3) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_0094cbc0 */
GEN_OWN GEN_FRAME uint F_0094cbc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cbc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0093f9f0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0094cbe0 */
GEN_OWN GEN_FRAME unsigned int F_0094cbe0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cbe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 4) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1 = puVar1 + 4;
  }
  return 0;
}

/* ref: FUN_0094cc20 */
GEN_OWN GEN_FRAME uint F_0094cc20(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cc20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 5) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1 = puVar1 + 5;
  }
  return (uint)puVar1;
}

/* ref: FUN_0094cc60 */
GEN_OWN GEN_FRAME unsigned int F_0094cc60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cc60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_0094cc90 */
GEN_OWN GEN_FRAME unsigned int F_0094cc90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cc90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_0094ccc0 */
GEN_OWN GEN_FRAME unsigned int F_0094ccc0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94ccc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_0094ccf0 */
GEN_OWN GEN_FRAME unsigned int F_0094ccf0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94ccf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_0094cd20 */
GEN_OWN GEN_FRAME unsigned int F_0094cd20(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cd20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_0094cd50 */
GEN_OWN GEN_FRAME uint F_0094cd50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cd50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0093fc00(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0094cd70 */
GEN_OWN GEN_FRAME unsigned int F_0094cd70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cd70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_0094cda0 */
GEN_OWN GEN_FRAME unsigned int F_0094cda0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cda0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_0094cdd0 */
GEN_OWN GEN_FRAME unsigned int F_0094cdd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cdd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 3) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_0094ce00 */
GEN_OWN GEN_FRAME unsigned int F_0094ce00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94ce00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: _Uninitialized_move<>_0094ce30 */
GEN_OWN GEN_FRAME unsigned int F_0094ce30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94ce30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 0x15;
    puVar3 = puVar2 + 0x15;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 0x15; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_0094ce60 */
GEN_OWN GEN_FRAME unsigned int F_0094ce60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94ce60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 3) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_0094ce90 */
GEN_OWN GEN_FRAME uint F_0094ce90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94ce90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0093fd60(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0094ceb0 */
GEN_OWN GEN_FRAME unsigned int F_0094ceb0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94ceb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 4) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1 = puVar1 + 4;
  }
  return 0;
}

/* ref: FUN_0094cef0 */
GEN_OWN GEN_FRAME uint F_0094cef0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0093fe20(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0094cf10 */
GEN_OWN GEN_FRAME uint F_0094cf10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cf10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0093fe80(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0094cf30 */
GEN_OWN GEN_FRAME unsigned int F_0094cf30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cf30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_0094cf60 */
GEN_OWN GEN_FRAME uint F_0094cf60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cf60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0093ff10(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0094cf80 */
GEN_OWN GEN_FRAME unsigned int F_0094cf80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94cf80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_0042cbc0(param_2 + 2 GEN_EDX_ARG,param_3 + 2);
    param_2[0x17] = param_3[0x17];
    param_2[0x18] = param_3[0x18];
  }
  return;
}

/* ref: FUN_0094cfc0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0094cfc0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94cfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d38));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
  }
  return (uint)param_1;
}

/* ref: FUN_0094d000 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0094d000(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94d000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d48));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    *(undefined1 *)(param_1 + 5) = *((undefined1 *)GEN_TOP((param_2 + 0x14)));
  }
  return (uint)param_1;
}

/* ref: FUN_0094d040 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0094d040(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94d040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d58));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
  }
  return (uint)param_1;
}

/* ref: FUN_0094d070 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0094d070(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x94d070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  undefined * this;
  int iVar2;
  
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0xb8))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x60))) GEN_EDX_ARG);
  this = ((undefined *)GEN_TOP((param_1 + 0x60)));
  iVar2 = 9;
  do {
    this = ((undefined *)GEN_TOP(((int)this - 8)));
    uVar1 = F_005a2670(this GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_0094d0b0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_0094d0b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94d0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    F_0042cbc0(param_1 + 1 GEN_EDX_ARG,param_2 + 1);
    param_1[0x16] = param_2[0x16];
    F_0042cbc0(param_1 + 0x17 GEN_EDX_ARG,param_2 + 0x17);
    param_1[0x2c] = param_2[0x2c];
  }
  return;
}

/* ref: FUN_0094d100 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0094d100(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x94d100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0094d120 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_0094d120(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94d120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = *((undefined4 *)GEN_TOP((param_2 + 0x54)));
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x58))) = *((undefined4 *)GEN_TOP((param_2 + 0x58)));
  }
  return;
}

/* ref: FUN_0094d150 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0094d150(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x94d150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0094d170 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0094d170(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94d170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    F_0042cbc0(param_1 + 2 GEN_EDX_ARG,param_2 + 2);
    uVar1 = param_2[0x17];
    param_1[0x17] = uVar1;
  }
  return uVar1;
}

/* ref: FUN_0094d1b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0094d1b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x94d1b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0094d1d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094d1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x94d1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return (*(int *)this - *param_1) / 0x14;
}

/* ref: FUN_0094d200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094d200(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94d200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP((param_1 + 100))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_0094d230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094d230(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x94d230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00429760(param_5,0x18,400);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
      **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
    }
  }
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x14)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x14))) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_0094d42d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x14))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_0094d42d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_0094d460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094d460(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x94d460u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00429760(param_5,0x40,400);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
      **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
    }
  }
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x38)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x38))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x38))) == '\0') {
        *(undefined1 *)(piVar5 + 0xe) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x38))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x38))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x39))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x38))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x38))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x39))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_0094d65d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x38))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x39))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x38))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x38))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x39))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_0094d65d;
      }
      *(undefined1 *)(piVar5 + 0xe) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x38))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x38))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x38)));
  } while( true );
}

/* ref: FUN_0094d690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094d690(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x94d690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00429760(param_5,0x28,400);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
      **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
    }
  }
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x20)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x20))) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x21))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_0094d88d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x20))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x21))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_0094d88d;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x20)));
  } while( true );
}

/* ref: FUN_0094d8c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094d8c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x94d8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00429760(param_5,0x18,400);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
      **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
    }
  }
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x14)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x14))) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_0094dabd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x14))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_0094dabd;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_0094daf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094daf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x94daf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0094db10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0094db10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x94db10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00917270(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0094db20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094db20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x94db20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0094db40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0094db40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x94db40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_009172d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0094db50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0094db50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x94db50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00917330(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0094db60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094db60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x94db60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0094db80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0094db80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x94db80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00917390(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0094db90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094db90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x94db90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0094dbb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094dbb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x94dbb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0094dbc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094dbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x94dbc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_0094dbf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094dbf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x94dbf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = ((undefined *)GEN_TOP(F_00406bd0(0x1c4,0,uVar1,uVar2)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  this_01 = ((undefined4 *)GEN_TOP(F_0082e5a0(this_00 GEN_EDX_ARG)));
  if (this_01 != ((undefined4 *)GEN_TOP(0x0))) {
    F_005a8d00(this_01 GEN_EDX_ARG,param_2,param_3);
    uVar1 = F_0057fac0(this GEN_EDX_ARG,this_01,param_1);
    if (uVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_01)))(this_01 GEN_EDX_ARG,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0094dc60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094dc60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x94dc60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = ((undefined *)GEN_TOP(F_00406bd0(0x1d4,0,uVar1,uVar2)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  this_01 = ((undefined4 *)GEN_TOP(F_0082e650(this_00 GEN_EDX_ARG)));
  if (this_01 != ((undefined4 *)GEN_TOP(0x0))) {
    F_005a8d00(this_01 GEN_EDX_ARG,param_2,param_3);
    uVar1 = F_0057fac0(this GEN_EDX_ARG,this_01,param_1);
    if (uVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_01)))(this_01 GEN_EDX_ARG,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0094dcd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094dcd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x94dcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = ((undefined *)GEN_TOP(F_00406bd0(0x1d4,0,uVar1,uVar2)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  this_01 = ((undefined4 *)GEN_TOP(F_0082ec20(this_00 GEN_EDX_ARG)));
  if (this_01 != ((undefined4 *)GEN_TOP(0x0))) {
    F_005a8d00(this_01 GEN_EDX_ARG,param_2,param_3);
    uVar1 = F_0057fac0(this GEN_EDX_ARG,this_01,param_1);
    if (uVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_01)))(this_01 GEN_EDX_ARG,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0094dd40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094dd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x94dd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = ((undefined *)GEN_TOP(F_00406bd0(0x1da0,0,uVar1,uVar2)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  this_01 = ((undefined4 *)GEN_TOP(F_00832970(this_00 GEN_EDX_ARG)));
  if (this_01 != ((undefined4 *)GEN_TOP(0x0))) {
    F_005a8d00(this_01 GEN_EDX_ARG,param_2,param_3);
    uVar1 = F_0057fac0(this GEN_EDX_ARG,this_01,param_1);
    if (uVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_01)))(this_01 GEN_EDX_ARG,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0094ddb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094ddb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x94ddb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = ((undefined *)GEN_TOP(F_00406bd0(0xee4,0,uVar1,uVar2)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  this_01 = ((undefined4 *)GEN_TOP(F_00843730(this_00 GEN_EDX_ARG)));
  if (this_01 != ((undefined4 *)GEN_TOP(0x0))) {
    F_005a8d00(this_01 GEN_EDX_ARG,param_2,param_3);
    uVar1 = F_0057fac0(this GEN_EDX_ARG,this_01,param_1);
    if (uVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_01)))(this_01 GEN_EDX_ARG,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0094de20 */
GEN_OWN GEN_FRAME byte F_0094de20(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94de20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *param_1 == *param_2;
}

/* ref: FUN_0094de40 */
GEN_OWN GEN_FRAME uint F_0094de40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94de40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0094de50 */
GEN_OWN GEN_FRAME uint F_0094de50(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x94de50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  int * piVar1;
  
  piVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (piVar1[2] == *param_4) break;
      piVar1 = ((int *)GEN_TOP(*piVar1));
    } while (piVar1 != param_3);
  }
  *param_1 = (int)piVar1;
  return (uint)param_1;
}

/* ref: FUN_0094de80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094de80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x94de80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,param_1)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar2 + 0xfb))) & 8) == 0)) {
    piVar2 = ((int *)GEN_TOP(F_009402b0(this GEN_EDX_ARG,param_1,param_2,param_3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0);
      return (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
    }
  }
  return 0;
}

/* ref: FUN_0094df10 */
GEN_OWN GEN_FRAME byte F_0094df10(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94df10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *param_1 == *param_2;
}

/* ref: FUN_0094df30 */
GEN_OWN GEN_FRAME uint F_0094df30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94df30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0094df40 */
GEN_OWN GEN_FRAME uint F_0094df40(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x94df40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  int * piVar1;
  
  piVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (piVar1[2] == *param_4) break;
      piVar1 = ((int *)GEN_TOP(*piVar1));
    } while (piVar1 != param_3);
  }
  *param_1 = (int)piVar1;
  return (uint)param_1;
}

/* ref: FUN_0094df70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094df70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x94df70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,param_1)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar2 + 0xfb))) & 8) == 0)) {
    piVar2 = ((int *)GEN_TOP(F_00940340(this GEN_EDX_ARG,param_1,param_2,param_3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0);
      return (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
    }
  }
  return 0;
}

/* ref: FUN_0094e000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094e000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x94e000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,param_1)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar2 + 0xfb))) & 8) == 0)) {
    piVar2 = ((int *)GEN_TOP(F_009403b0(this GEN_EDX_ARG,param_1,param_2,param_3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0);
      return (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
    }
  }
  return 0;
}

/* ref: FUN_0094e090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094e090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x94e090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,param_1)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar2 + 0xfb))) & 8) == 0)) {
    piVar2 = ((int *)GEN_TOP(F_00940420(this GEN_EDX_ARG,param_1,param_2,param_3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0);
      return (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
    }
  }
  return 0;
}

/* ref: FUN_0094e120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0094e120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x94e120u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,param_1)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar2 + 0xfb))) & 8) == 0)) {
    piVar2 = ((int *)GEN_TOP(F_00940490(this GEN_EDX_ARG,param_1,param_2,param_3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0);
      return (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
    }
  }
  return 0;
}

/* ref: FUN_0094e1b0 */
GEN_OWN GEN_FRAME unsigned int F_0094e1b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94e1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
    }
    puVar1 = ((undefined4 *)GEN_TOP(((int)puVar1 + 0xd)));
  }
  return;
}

/* ref: FUN_0094e1e0 */
GEN_OWN GEN_FRAME unsigned int F_0094e1e0(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94e1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined2 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined2 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
    }
    puVar1 = ((undefined2 *)GEN_TOP(((int)puVar1 + 3)));
  }
  return;
}

/* ref: FUN_0094e210 */
GEN_OWN GEN_FRAME unsigned int F_0094e210(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94e210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    puVar1 = puVar1 + 2;
  }
  return;
}

/* ref: FUN_0094e240 */
GEN_OWN GEN_FRAME unsigned int F_0094e240(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94e240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    puVar1 = puVar1 + 2;
  }
  return;
}

/* ref: FUN_0094e270 */
GEN_OWN GEN_FRAME unsigned int F_0094e270(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x94e270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    puVar1 = puVar1 + 3;
  }
  return;
}

