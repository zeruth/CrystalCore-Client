#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_005bf310 */
GEN_OWN GEN_FRAME uint F_005bf310(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf320 */
GEN_OWN GEN_FRAME uint F_005bf320(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf330 */
GEN_OWN GEN_FRAME uint F_005bf330(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf3d0 */
GEN_OWN GEN_FRAME uint F_005bf3d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf3e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bf3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5bf3e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_005bf400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bf400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5bf400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_005bf420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bf420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5bf420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_005bf470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bf470(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5bf470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005bf580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bf580(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5bf580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_FWD);
  F_0042c880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005bf5d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bf5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5bf5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_005bf5f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bf5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5bf5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_005bf610 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005bf610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5bf610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) == *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_005bf630 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005bf630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5bf630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) == *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_005bf650 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005bf650(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5bf650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bf690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bf690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5bf690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_005bf6b0 */
GEN_OWN GEN_FRAME uint F_005bf6b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf6c0 */
GEN_OWN GEN_FRAME uint F_005bf6c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf6d0 */
GEN_OWN GEN_FRAME uint F_005bf6d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5bf6d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005bf6f0 */
GEN_OWN GEN_FRAME uint F_005bf6f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf6f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf700 */
GEN_OWN GEN_FRAME uint F_005bf700(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf720 */
GEN_OWN GEN_FRAME uint F_005bf720(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf730 */
GEN_OWN GEN_FRAME uint F_005bf730(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf740 */
GEN_OWN GEN_FRAME uint F_005bf740(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf750 */
GEN_OWN GEN_FRAME uint F_005bf750(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf760 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005bf760(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5bf760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005bf790 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005bf790(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5bf790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005bf7b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005bf7b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5bf7b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005bf7d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005bf7d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5bf7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005bf7f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005bf7f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5bf7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005bf860 */
GEN_OWN GEN_FRAME uint F_005bf860(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bf870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5bf870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_005bf890 */
GEN_OWN GEN_FRAME uint F_005bf890(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf8a0 */
GEN_OWN GEN_FRAME uint F_005bf8a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf8b0 */
GEN_OWN GEN_FRAME uint F_005bf8b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf8c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bf8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5bf8c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_005bf900 */
GEN_OWN GEN_FRAME uint F_005bf900(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5bf900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + param_2;
  return param_1;
}

/* ref: FUN_005bf930 */
GEN_OWN GEN_FRAME uint F_005bf930(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5bf930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + param_2;
  return param_1;
}

/* ref: FUN_005bf940 */
GEN_OWN GEN_FRAME uint F_005bf940(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf950 */
GEN_OWN GEN_FRAME uint F_005bf950(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf960 */
GEN_OWN GEN_FRAME uint F_005bf960(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf970 */
GEN_OWN GEN_FRAME uint F_005bf970(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf980 */
GEN_OWN GEN_FRAME uint F_005bf980(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf990 */
GEN_OWN GEN_FRAME uint F_005bf990(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf9a0 */
GEN_OWN GEN_FRAME uint F_005bf9a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf9b0 */
GEN_OWN GEN_FRAME uint F_005bf9b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bf9c0 */
GEN_OWN GEN_FRAME uint F_005bf9c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5bf9c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005bf9e0 */
GEN_OWN GEN_FRAME uint F_005bf9e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bf9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bfa90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bfa90(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5bfa90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *in_ecx - *param_2 >> 2;
}

/* ref: FUN_005bfab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bfab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5bfab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_005bfad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bfad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5bfad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_005bfaf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bfaf0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5bfaf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) + param_2;
  return in_ecx;
}

/* ref: FUN_005bfb00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bfb00(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5bfb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) + param_2;
  return in_ecx;
}

/* ref: FUN_005bfb10 */
GEN_OWN GEN_FRAME uint F_005bfb10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x5bfb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  
  iVar3 = param_2;
  while (param_3 < iVar3) {
    iVar4 = (iVar3 - 1) / 2;
    uVar1 = *param_4;
    iVar2 = *((int *)GEN_TOP((param_1 + iVar4 * 4)));
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *((ushort *)GEN_TOP((iVar2 + 0x84)));
    }
    if (((uVar1 == 0) || (*((ushort *)GEN_TOP((uVar1 + 0x84))) <= uVar5)) ||
       (*((int *)GEN_TOP((iVar2 + 8))) != *((int *)GEN_TOP((uVar1 + 8))))) break;
    *((int *)GEN_TOP((param_1 + iVar3 * 4))) = iVar2;
    iVar3 = iVar4;
  }
  uVar1 = *param_4;
  *((uint *)GEN_TOP((param_1 + iVar3 * 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_005bfb80 */
GEN_OWN GEN_FRAME uint F_005bfb80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5bfb80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_005bfbb0 */
GEN_OWN GEN_FRAME uint F_005bfbb0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bfbb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bfbc0 */
GEN_OWN GEN_FRAME uint F_005bfbc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bfbc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bfbd0 */
GEN_OWN GEN_FRAME uint F_005bfbd0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bfbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bfbe0 */
GEN_OWN GEN_FRAME uint F_005bfbe0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bfbe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bfbf0 */
GEN_OWN GEN_FRAME uint F_005bfbf0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bfbf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bfc00 */
GEN_OWN GEN_FRAME uint F_005bfc00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bfc00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bfc10 */
GEN_OWN GEN_FRAME uint F_005bfc10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bfc10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bfc30 */
GEN_OWN GEN_FRAME uint F_005bfc30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5bfc30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005bfc40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005bfc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5bfc40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_005bfc50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005bfc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5bfc50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_005bfc60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005bfc60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5bfc60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_005bfc70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005bfc70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5bfc70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_005bfc80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005bfc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5bfc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_005bfc90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bfc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5bfc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  *param_1 = *(undefined4 *)this;
  param_1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  param_1[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  param_1[3] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_005bfd40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bfd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5bfd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int iVar2;
  
  piVar1 = ((int *)GEN_TOP(((int)this + 0x29c)));
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(param_1));
  if (*((uint *)GEN_TOP(((int)this + 0x284))) <
      (uint)(*((int *)GEN_TOP(((int)this + 0x298))) + *((int *)GEN_TOP(((int)this + 0x29c))))) {
    return 0;
  }
  return ((*((int *)GEN_TOP(((int)this + 0x290))) - iVar2) - param_1) + *((uint *)GEN_TOP(((int)this + 0x284)));
}

/* ref: FUN_005bfd90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bfd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5bfd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP(((int)this + (int)(&REFG(undefined * PTR32, 0x10a0c2c))[(int)(param_1)] * 0x10 + 0x24c)));
}

/* ref: FUN_005bfdb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bfdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5bfdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (int)this + (int)(&REFG(undefined * PTR32, 0x10a0c2c))[(int)(param_1)] * 0x10 + 0x24c;
}

/* ref: FUN_005bfde0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bfde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5bfde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  if (param_1 < 3) {
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x7c))) = param_2;
    *((uint *)GEN_TOP(((int)this + param_1 * 4 + 0x88))) = *param_3 & 0xfffffff;
  }
  return param_1;
}

/* ref: FUN_005bfe10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bfe10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5bfe10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x50)));
  uVar6 = param_2 + 0xfU & 0xfffffff0;
  uVar2 = iVar3 + uVar6;
  if (uVar2 < 0x801) {
    *((uint *)GEN_TOP(((int)this + 0x50))) = uVar2;
    puVar5 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + iVar3)));
    *puVar5 = param_1;
    *(undefined2 *)(puVar5 + 1) = (undefined2)param_3;
    return (uint)puVar5;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 0x10)));
  piVar1 = ((int *)GEN_TOP((iVar4 + 0x298)));
  iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(0x800));
  if (*((uint *)GEN_TOP((iVar4 + 0x284))) < (uint)(*((int *)GEN_TOP((iVar4 + 0x29c))) * 3 + *piVar1)) {
    _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-0x800));
    return 0;
  }
  puVar5 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x290))) + iVar3)));
  if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
  *((uint *)GEN_TOP(((int)this + 0x50))) = uVar6;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = puVar5;
  *puVar5 = param_1;
  *(undefined2 *)(puVar5 + 1) = (undefined2)param_3;
  return (uint)puVar5;
}

/* ref: FUN_005bfeb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bfeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5bfeb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  
  piVar1 = ((int *)GEN_TOP(((int)this + 0x54)));
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    iVar4 = *((int *)GEN_TOP(((int)this + 0x10)));
    puVar2 = ((uint *)GEN_TOP((iVar4 + 0x29c)));
    uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar2), (long)(0x400));
    if (*((uint *)GEN_TOP((iVar4 + 0x284))) < *puVar2 * 3 + *((int *)GEN_TOP((iVar4 + 0x298)))) {
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 0x400;
      UNLOCK();
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 1;
      return uVar3;
    }
    iVar4 = (*((int *)GEN_TOP((iVar4 + 0x290))) - uVar3) - 0x400 + *((uint *)GEN_TOP((iVar4 + 0x284)));
    if (iVar4 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 1;
      return 0;
    }
    **((int * PTR32 *)GEN_TOP(((int)this + 0x4c))) = iVar4;
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x4c))) + 4))) = 0;
    *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) + 1;
    *((int *)GEN_TOP(((int)this + 0x4c))) = iVar4;
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0x7f;
  }
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x4c)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x4c))) = puVar5 + 2;
  *puVar5 = *((undefined4 *)GEN_TOP(((int)this + 0x70)));
  puVar5[1] = param_1;
  return (uint)puVar5;
}

/* ref: FUN_005bff60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bff60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5bff60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_005bfe10(param_1 GEN_EDX_FWD,2,0x1c,0);
  uVar2 = 0;
  if (uVar1 != 0) {
    *((byte *)GEN_TOP(((int)param_1 + 0xa4))) =
         *((byte *)GEN_TOP(((int)param_1 + 0xa4))) ^
         ((param_2 != '\0') * '\x02' ^ *((byte *)GEN_TOP(((int)param_1 + 0xa4)))) & 2;
    *((uint *)GEN_TOP((uVar1 + 8))) = (uint)(param_2 != '\0');
    *((undefined4 *)GEN_TOP((uVar1 + 0xc))) = *param_3;
    *((undefined4 *)GEN_TOP((uVar1 + 0x10))) = param_3[1];
    *((undefined4 *)GEN_TOP((uVar1 + 0x14))) = param_3[2];
    *((undefined4 *)GEN_TOP((uVar1 + 0x18))) = param_3[3];
    uVar2 = F_005bfeb0(param_1 GEN_EDX_ARG,uVar1);
  }
  return uVar2;
}

/* ref: FUN_005bffc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005bffc0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5bffc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar1 = F_005bfe10(param_1 GEN_EDX_FWD,1,0x50,2);
  uVar2 = 0;
  if (uVar1 != 0) {
    *((byte *)GEN_TOP(((int)param_1 + 0xa4))) =
         *((byte *)GEN_TOP(((int)param_1 + 0xa4))) ^
         ((param_2 != '\0') << 2 ^ *((byte *)GEN_TOP(((int)param_1 + 0xa4)))) & 4;
    *((undefined4 *)GEN_TOP((uVar1 + 0xc))) = param_3;
    *((uint *)GEN_TOP((uVar1 + 8))) = (uint)(param_2 != '\0');
    puVar4 = param_4;
    puVar5 = ((undefined4 *)GEN_TOP((uVar1 + 0x10)));
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar2 = F_005bfeb0(param_1 GEN_EDX_ARG,uVar1);
  }
  return uVar2;
}

/* ref: FUN_005c002f */
GEN_OWN GEN_NOFRAME unsigned int F_005c002f(void)
{
  GEN_ENTER(0x5c002fu, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_005c0080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c0080(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c0080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x50)));
  if (((uVar1 & 0x80000) != 0) &&
     (((uVar1 & 0x8000000) != 0 || (((uVar1 >> 1 | uVar1) >> 0x10 & 1) == 0)))) {
    return 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerCount::vf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005c00e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c00e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)(*((uint *)GEN_TOP((in_ecx + 0xb8))) <= *((uint *)GEN_TOP((in_ecx + 0xbc))));
}

/* ref: FUN_005c00f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c00f0(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c00f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((float *)GEN_TOP(param_2)) =
       ((float)GEN_TOF(GEN_X87(SQRT((float10)(float)((float10)*param_1 * (float10)*param_1 +
                                   (float10)param_1[1] * (float10)param_1[1])))));
  *((float *)GEN_TOP((param_2 + 4))) =
       ((float)GEN_TOF(GEN_X87(SQRT((float10)(float)((float10)param_1[2] * (float10)param_1[2] +
                                   (float10)param_1[3] * (float10)param_1[3])))));
  return param_2;
}

/* ref: FUN_005c0160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c0160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: Component::GUI2::AtkCrestFactory::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c01a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c01a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10a0c94));
  puVar1 = param_1 + 0xc;
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
  } while (-1 < iVar2);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkCrestColorPallete::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c0210(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10a0cb4));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkCrestBasePallete::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c0270(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10a0cbc));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Input::SoftKeyboardDevice::vf1 */
GEN_OWN GEN_NOFRAME byte F_005c02b0(void)
{
  GEN_ENTER(0x5c02b0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Input::SoftKeyboardDevice::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_005c02c0(void)
{
  GEN_ENTER(0x5c02c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Input::SoftKeyboardDevice::vf3 */
GEN_OWN GEN_NOFRAME unsigned int F_005c02d0(void)
{
  GEN_ENTER(0x5c02d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Input::SoftKeyboardDevice::vf4 */
GEN_OWN GEN_NOFRAME byte F_005c02e0(void)
{
  GEN_ENTER(0x5c02e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Input::SoftKeyboardDevice::vf5 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005c02f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c02f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::System::Input::SoftKeyboardDevice::vf6 */
GEN_OWN GEN_NOFRAME unsigned int F_005c0300(void)
{
  GEN_ENTER(0x5c0300u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Input::SoftKeyboardDevice::vf7 */
GEN_OWN GEN_NOFRAME byte F_005c0310(void)
{
  GEN_ENTER(0x5c0310u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Input::SoftKeyboardDevice::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c0320(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x10a09fc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005c0350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c0350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x5c0350u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[2], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[3], &gen_a4, sizeof gen_a4);
  memcpy(&gen_args[4], &gen_a5, sizeof gen_a5);
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (uint)(longlong)TRUNC((double)(*(float *)&gen_args[3]) * *(double *)&REFG(undefined, 0x1088100));
  uVar4 = local_c & 0xff;
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  dVar1 = (double)(*(float *)&gen_args[4]);
  (*(undefined2 *)((char *)&(*(float *)&gen_args[4]) + 0)) = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(float *)&gen_args[4]) + 0)));
  local_c = (uint)(longlong)TRUNC(dVar1 * *(double *)&REFG(undefined, 0x1088100));
  uVar2 = local_c << 8;
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  (*(undefined2 *)((char *)&(*(float *)&gen_args[4]) + 0)) = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(float *)&gen_args[4]) + 0)));
  local_c = (uint)(longlong)TRUNC((double)(*(float *)&gen_args[2]) * *(double *)&REFG(undefined, 0x1088100));
  uVar3 = local_c & 0xff;
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  (*(undefined2 *)((char *)&(*(float *)&gen_args[4]) + 0)) = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(float *)&gen_args[4]) + 0)));
  local_c = (uint)(longlong)TRUNC(*(double *)&REFG(undefined, 0x1088100) * (double)(*(float *)&gen_args[1]));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  *((uint *)GEN_TOP((param_1 + 0x40 + (*(char *)&gen_args[0]) * 4))) = ((uVar4 | uVar2) << 8 | uVar3) << 8 | local_c & 0xff;
  return (int)(*(char *)&gen_args[0]);
}

/* ref: FUN_005c0410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c0410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *((int *)GEN_TOP(((int)this + 0xc0))) = param_1;
  uVar1 = 0;
  if (param_1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 200))) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
    uVar1 = *((uint *)GEN_TOP((param_1 + 0x1c)));
    *((uint *)GEN_TOP(((int)this + 0xcc))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_005c0450 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c0450(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c0450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  int iVar2;
  bool bVar3;
  float10 fVar4;
  float fVar5;
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = *((int *)GEN_TOP((param_1 + 0x70)));
  }
  uVar1 = (uint)(short)(ushort)param_2;
  fVar5 = (float)(int)uVar1;
  if (iVar2 == 0) goto LAB_005c04bc;
  if ((*((uint *)GEN_TOP((iVar2 + 0x88))) & 1) == 0) {
    fVar4 = (float10)(int)uVar1;
    bVar3 = GEN_ISNAN((float10)*((float *)GEN_TOP((iVar2 + 0x38)))) || GEN_ISNAN(fVar4);
    uVar1 = (uint)((ushort)param_2 & 0xff);
    if (bVar3 != (bVar3 || (float10)*((float *)GEN_TOP((iVar2 + 0x38))) == fVar4)) {
      fVar4 = (float10)(int)(short)param_3;
      bVar3 = GEN_ISNAN((float10)*((float *)GEN_TOP((iVar2 + 0x3c)))) || GEN_ISNAN(fVar4);
      uVar1 = (uint)((ushort)param_2 & 0xff);
      if (bVar3 != (bVar3 || (float10)*((float *)GEN_TOP((iVar2 + 0x3c))) == fVar4)) goto LAB_005c04b2;
    }
    *((uint *)GEN_TOP((iVar2 + 0x88))) = *((uint *)GEN_TOP((iVar2 + 0x88))) | 1;
  }
LAB_005c04b2: ;
  *((float *)GEN_TOP((iVar2 + 0x38))) = fVar5;
  *((float *)GEN_TOP((iVar2 + 0x3c))) = (float)(int)(short)param_3;
LAB_005c04bc: ;
  return (byte)uVar1;
}

/* ref: FUN_005c04e0 */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_005c04e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c04e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((in_ecx != 0) && (*((int *)GEN_TOP((in_ecx + 0x70))) != 0)) {
    return (ushort)(int)*((float *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x70))) + 0x3c)));
  }
  return (ushort)(int)*(float *)&REFG(undefined, 0x1088114);
}

/* ref: FUN_005c0500 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c0500(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  int iVar2;
  bool bVar3;
  float10 fVar4;
  float fVar5;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *((int *)GEN_TOP((param_1 + 0x70)));
  }
  uVar1 = (uint)(short)(ushort)param_2;
  fVar5 = (float)(int)uVar1;
  if (iVar2 != 0) {
    if ((*((uint *)GEN_TOP((iVar2 + 0x88))) & 1) == 0) {
      fVar4 = (float10)(int)uVar1;
      bVar3 = GEN_ISNAN((float10)*((float *)GEN_TOP((iVar2 + 0x38)))) || GEN_ISNAN(fVar4);
      uVar1 = (uint)((ushort)param_2 & 0xff);
      if (bVar3 == (bVar3 || (float10)*((float *)GEN_TOP((iVar2 + 0x38))) == fVar4)) {
        *((uint *)GEN_TOP((iVar2 + 0x88))) = *((uint *)GEN_TOP((iVar2 + 0x88))) | 1;
      }
    }
    *((float *)GEN_TOP((iVar2 + 0x38))) = fVar5;
  }
  return (byte)uVar1;
}

/* ref: FUN_005c0550 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c0550(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  int iVar2;
  bool bVar3;
  float10 fVar4;
  float fVar5;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *((int *)GEN_TOP((param_1 + 0x70)));
  }
  uVar1 = (uint)(short)(ushort)param_2;
  fVar5 = (float)(int)uVar1;
  if (iVar2 != 0) {
    if ((*((uint *)GEN_TOP((iVar2 + 0x88))) & 1) == 0) {
      fVar4 = (float10)(int)uVar1;
      bVar3 = GEN_ISNAN((float10)*((float *)GEN_TOP((iVar2 + 0x3c)))) || GEN_ISNAN(fVar4);
      uVar1 = (uint)((ushort)param_2 & 0xff);
      if (bVar3 == (bVar3 || (float10)*((float *)GEN_TOP((iVar2 + 0x3c))) == fVar4)) {
        *((uint *)GEN_TOP((iVar2 + 0x88))) = *((uint *)GEN_TOP((iVar2 + 0x88))) | 1;
      }
    }
    *((float *)GEN_TOP((iVar2 + 0x3c))) = fVar5;
  }
  return (byte)uVar1;
}

/* ref: FUN_005c05a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005c05a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined2 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c05a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;)
  float fVar1;
  int iVar2;
  
  if ((this != ((undefined *)GEN_TOP(0x0))) && (iVar2 = *((int *)GEN_TOP(((int)this + 0x70))), iVar2 != 0)) {
    fVar1 = *((float *)GEN_TOP((iVar2 + 0x34)));
    *param_1 = (short)(int)*((float *)GEN_TOP((iVar2 + 0x30)));
    *param_2 = (short)(int)fVar1;
  }
  return;
}

/* ref: FUN_005c05d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005c05d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined2 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c05d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  if ((this != ((undefined *)GEN_TOP(0x0))) && (iVar1 = *((int *)GEN_TOP(((int)this + 0x70))), iVar1 != 0)) {
    *param_1 = *((undefined2 *)GEN_TOP((iVar1 + 0x7c)));
    *param_2 = *((undefined2 *)GEN_TOP((iVar1 + 0x7e)));
  }
  return;
}

/* ref: FUN_005c0600 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005c0600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c0600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  
  if ((this != ((undefined *)GEN_TOP(0x0))) && (iVar1 = *((int *)GEN_TOP(((int)this + 0x70))), iVar1 != 0)) {
    *((undefined2 *)GEN_TOP((iVar1 + 0x7c))) = (undefined2)param_1;
    *((undefined2 *)GEN_TOP((iVar1 + 0x7e))) = (undefined2)param_2;
  }
  return;
}

/* ref: FUN_005c0650 */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_005c0650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c0650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((in_ecx != 0) && (*((int *)GEN_TOP((in_ecx + 0x70))) != 0)) {
    return *((ushort *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x70))) + 0x7e)));
  }
  return 0;
}

/* ref: FUN_005c0670 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005c0670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if ((in_ecx != 0) && (*((int *)GEN_TOP((in_ecx + 0x70))) != 0)) {
    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x70))) + 0x7c))) = (undefined2)param_2;
  }
  return;
}

/* ref: FUN_005c0690 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005c0690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if ((in_ecx != 0) && (*((int *)GEN_TOP((in_ecx + 0x70))) != 0)) {
    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x70))) + 0x7e))) = (undefined2)param_2;
  }
  return;
}

/* ref: FUN_005c06b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005c06b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c06b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  if ((((in_ecx != 0) && (iVar1 = *((int *)GEN_TOP((in_ecx + 0x70))), iVar1 != 0)) &&
      ((*((uint *)GEN_TOP((iVar1 + 0x84))) & 0x100000) != 0)) && ((*((uint *)GEN_TOP((iVar1 + 0x88))) & 0x20000) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005c06e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005c06e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c06e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = *((int *)GEN_TOP((param_1 + 0x70))), iVar1 != 0)) {
    *((uint *)GEN_TOP((iVar1 + 0x84))) =
         *((uint *)GEN_TOP((iVar1 + 0x84))) ^ ((uint)param_2 << 0x14 ^ *((uint *)GEN_TOP((iVar1 + 0x84)))) & 0x100000;
    *((uint *)GEN_TOP((iVar1 + 0x88))) =
         *((uint *)GEN_TOP((iVar1 + 0x88))) ^ ((uint)(param_2 == 0) << 7 ^ *((uint *)GEN_TOP((iVar1 + 0x88)))) & 0x80;
  }
  return;
}

/* ref: FUN_005c0730 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005c0730(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c0730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((in_ecx != 0) && (*((int *)GEN_TOP((in_ecx + 0x70))) != 0)) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x70))) + 0x84))) >> 0x15 & 1;
  }
  return 0;
}

/* ref: FUN_005c0750 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005c0750(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  
  if ((in_ecx != 0) && (iVar1 = *((int *)GEN_TOP((in_ecx + 0x70))), iVar1 != 0)) {
    *((uint *)GEN_TOP((iVar1 + 0x84))) =
         *((uint *)GEN_TOP((iVar1 + 0x84))) ^ ((uint)param_2 << 0x19 ^ *((uint *)GEN_TOP((iVar1 + 0x84)))) & 0x2000000;
  }
  return;
}

/* ref: Component::GUI2::AtkComponentBase::vf12 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005c0780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  
  if ((in_ecx != 0) && (iVar1 = *((int *)GEN_TOP((in_ecx + 0x70))), iVar1 != 0)) {
    *((uint *)GEN_TOP((iVar1 + 0x84))) =
         *((uint *)GEN_TOP((iVar1 + 0x84))) ^ ((uint)param_2 << 0x1a ^ *((uint *)GEN_TOP((iVar1 + 0x84)))) & 0x4000000;
  }
  return;
}

/* ref: FUN_005c07d0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005c07d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c07d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((in_ecx != 0) && (*((int *)GEN_TOP((in_ecx + 0x70))) != 0)) {
    return (byte)(*((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x70))) + 0x88))) >> 0x12) & 1;
  }
  return 0;
}

/* ref: FUN_005c0800 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005c0800(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c0800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((((*((byte *)GEN_TOP((in_ecx + 0xf8))) & 0x10) != 0) && ((*((byte *)GEN_TOP((in_ecx + 0xf8))) & 4) != 0)) &&
     ((*((ushort *)GEN_TOP((in_ecx + 0x126))) & 0xfff) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkDragDropInterface::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c0860(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  if (param_2 != 0) {
    *((uint *)GEN_TOP((param_2 + 0x84))) = *((uint *)GEN_TOP((param_2 + 0x84))) | 0x8000000;
  }
  return param_2;
}

/* ref: Component::GUI2::AtkDragDropInterface::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005c0880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c0880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP((uVar1 + 0x84))) = *((uint *)GEN_TOP((uVar1 + 0x84))) | 0x100000;
    *((uint *)GEN_TOP((uVar1 + 0x88))) = *((uint *)GEN_TOP((uVar1 + 0x88))) & 0xffffff7f;
  }
  return uVar1;
}

/* ref: FUN_005c08a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c08a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c08a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0055d920(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
  *((uint *)GEN_TOP(((int)this + 0x1e4))) = uVar1;
  return uVar1;
}

/* ref: FUN_005c08c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005c08c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c08c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 200))) != -1) {
    *((undefined4 *)GEN_TOP((in_ecx + 200))) = 0xffffffff;
  }
  return 0xffffffff;
}

/* ref: FUN_005c08f0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005c08f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c08f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0x300)));
  if (((iVar1 != 0) && ((*((uint *)GEN_TOP((iVar1 + 0x84))) & 0x100000) != 0)) &&
     ((*((uint *)GEN_TOP((iVar1 + 0x88))) & 0x20000) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005c0920 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005c0920(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c0920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  if ((*((uint *)GEN_TOP((param_1 + 0x84))) & 0x40000000) != 0) {
    uVar1 = F_005596f0(GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x60)))));
    return uVar1;
  }
  uVar1 = (uint)(ushort)((*((short *)GEN_TOP((param_3 + 0x2c))) -
                         ((ushort)((uint)*((undefined4 *)GEN_TOP((param_1 + 0x88))) >> 0x14) & 1)) * 0x40);
  if (0xfffe < uVar1) {
    return 0;
  }
  return 0xffff - uVar1;
}

/* ref: Component::GUI2::AtkGrid::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c09a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c09a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10a0c50));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkTextInput::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c09d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c09d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0055bcb0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkTexture::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c0a00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkRenderTexture::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c0a30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10a0c84));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005c0d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c0d20(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  if ((param_2 & 2) != 0) {
    iVar1 = *((int *)GEN_TOP((param_1 - 4))) - 1;
    if (-1 < iVar1) {
      puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 4))) * 0x10 + param_1 + 4)));
      do {
        puVar2 = puVar2 - 4;
        iVar1 = iVar1 - 1;
        *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
      } while (-1 < iVar1);
    }
    if ((param_2 & 1) != 0) {
      F_00406b30(param_1 - 4);
    }
    return param_1 - 4;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP((param_1 + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_005c0db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c0db0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((uint)in_ecx[4] <= param_2) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (3 < (uint)in_ecx[5]) {
    in_ecx = ((undefined4 *)GEN_TOP(*in_ecx));
  }
  return (uint)(in_ecx + param_2);
}

/* ref: FUN_005c0e30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c0e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if ((uint)(*((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) <= param_1) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  return *(int *)this + param_1 * 4;
}

/* ref: FUN_005c0e60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c0e60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c0e70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c0e70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_005c0e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c0e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if ((uint)(*((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) <= param_1) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  return *(int *)this + param_1 * 4;
}

/* ref: FUN_005c0eb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c0eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_005c0ee0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c0ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_005c0f30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c0f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_005c0f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c0f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c0f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  
  iVar1 = *(int *)this;
  *param_1 = iVar1;
  *(int *)this = iVar1 + 4;
  return (uint)param_1;
}

/* ref: FUN_005c0fb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c0fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c0fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_005c1030 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c1030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_005c1080 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c1080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_005c10c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c10c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c10c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_005c10f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c10f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c10f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_005c1110 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c1110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_005c1140 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c1140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_005c1160 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005c1160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c1160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005bc040(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_005c1190 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c1190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_005c1200 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005c1200(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5c1200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005c1250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1250(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c1250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c1260 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c1260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_005c12d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c12d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c12d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_005c1330 */
GEN_OWN GEN_FRAME uint F_005c1330(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5c1330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_005c13a0 */
GEN_OWN GEN_FRAME uint F_005c13a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5c13a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_005c13b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c13b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c13b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c13c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c13c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c13c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_005c1560 */
GEN_OWN GEN_FRAME uint F_005c1560(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5c1560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_005c15b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c15b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c15b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c15d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c15d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c15d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_005c1600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1600(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c1600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c1620 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c1620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_005c1640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1640(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c1640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c1660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_005c1680 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c1680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_005c16d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c16d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c16d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c16e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c16e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c16e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_005c1700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1700(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c1720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1720(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c1720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c1730 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c1730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_005c1760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1760(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c1760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c1770 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c1770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_005c17a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c17a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c17a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c17b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c17b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c17b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_005c1800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c1800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_005c1840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1840(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c1840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c1860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1860(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c1860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c1870 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c1870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_005c1890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1890(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c1890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c18a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c18a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c18a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_005c1a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005c1aa0 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_005c1aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1aa0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_005c1ad0 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_005c1ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1ad0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_005c1b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x14;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005c1b40 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_005c1b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if ((int)puVar2[3] < *param_1) {
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

/* ref: FUN_005c1bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005c1c00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005c1c30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005c1c30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c1c50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005c1ca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005c1cd0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005c1cd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c1cf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005c1d40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005c1d80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005c1db0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005c1db0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c1dd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005c1e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005c1e30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005c1e60 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_005c1e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x19))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x19))) == '\0');
  }
  return puVar2;
}

/* ref: FUN_005c1e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1e90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c1e90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c1eb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1eb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c1eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c1ed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005c1f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xb0;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005c1f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1f50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c1f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c1f60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1f60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_005c1fa0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005c1fa0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c1fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c1fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005c1ff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c1ff0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c1ff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c2000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2000(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c2010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2010(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c2020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2020(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c2030 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005c2030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c2030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_005c2080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2080(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c2090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2090(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c20a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c20a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c20a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c20c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c20c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c20c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c20d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c20d0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c20d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 8))) = *((int *)GEN_TOP((in_ecx + 8))) - param_2;
  return in_ecx;
}

/* ref: FUN_005c20e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c20e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c20e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_005c2120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2120(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c2120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 8))) = *((int *)GEN_TOP((in_ecx + 8))) - param_2;
  return in_ecx;
}

/* ref: FUN_005c2130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2130u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_005c2170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2170(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c2180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2180(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c2190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c2190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_005c21b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c21b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c21b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005c21c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c21c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c21c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 8;
  return (uint)this;
}

/* ref: FUN_005c21e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c21e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c21e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  uint uVar5;
  
  if (*((uint *)GEN_TOP(((int)this + 0x10))) < param_1) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x10))) - param_1;
  uVar5 = param_2;
  if (uVar2 < param_2) {
    uVar5 = uVar2;
  }
  if (uVar5 != 0) {
    pvVar4 = this;
    pvVar1 = this;
    if (3 < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar1 = *(undefined * PTR32 *)this;
    }
    F_005bd930(((undefined *)GEN_TOP(((int)pvVar4 + param_1 * 4))),((undefined *)GEN_TOP(((int)pvVar1 + (param_1 + uVar5) * 4))),
                 uVar2 - uVar5);
    iVar3 = *((int *)GEN_TOP(((int)this + 0x10))) - uVar5;
    *((int *)GEN_TOP(((int)this + 0x10))) = iVar3;
    if (3 < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      *((undefined4 *)GEN_TOP((*(int *)this + iVar3 * 4))) = 0;
      return (uint)this;
    }
    *((undefined4 *)GEN_TOP(((int)this + iVar3 * 4))) = 0;
  }
  return (uint)this;
}

/* ref: FUN_005c22a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c22a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c22a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_005c2300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c2300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_005c23b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c23b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c23b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x19))) == '\0') {
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

/* ref: FUN_005c2410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c2410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x19))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_005c2480 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005c2480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c2480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005bd810(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_005c24a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c24a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c24a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_005bc040(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_005c24d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c24d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c24d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2 * 0xc;
  return (uint)in_ecx;
}

/* ref: FUN_005c24f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c24f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c24f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) - *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_005c2510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c2510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) - *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_005c2530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2530(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c2530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2 * 0x14;
  return (uint)in_ecx;
}

/* ref: FUN_005c2550 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c2550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c2550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_005c2570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2570u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_005c25b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c25b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c25b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_005c25d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c25d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c25d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_005c25f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c25f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c25f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  byte bVar2;
  
  uVar1 = F_0055d920(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
  if (((uVar1 != 0) && (999 < *((ushort *)GEN_TOP((uVar1 + 0x18))))) &&
     (uVar1 = *((uint *)GEN_TOP((uVar1 + 0x8c))), uVar1 != 0)) {
    if ((((*((byte *)GEN_TOP((uVar1 + 0x60))) & 1) == 0) || ((*((byte *)GEN_TOP((uVar1 + 0x60))) & 4) == 0)) ||
       (*((char *)GEN_TOP((uVar1 + 0x1c))) != '\x01')) {
      bVar2 = 0;
    }
    else {
      bVar2 = *((byte *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0xc))) + 0xf)));
    }
    if (bVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_005c2650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  byte bVar2;
  
  uVar1 = F_0055d920(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
  if (((uVar1 != 0) && (999 < *((ushort *)GEN_TOP((uVar1 + 0x18))))) &&
     (uVar1 = *((uint *)GEN_TOP((uVar1 + 0x8c))), uVar1 != 0)) {
    if ((((*((byte *)GEN_TOP((uVar1 + 0x60))) & 1) == 0) || ((*((byte *)GEN_TOP((uVar1 + 0x60))) & 4) == 0)) ||
       (*((char *)GEN_TOP((uVar1 + 0x1c))) != '\x01')) {
      bVar2 = 0;
    }
    else {
      bVar2 = *((byte *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0xc))) + 0xf)));
    }
    if (bVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_005c26b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c26b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c26b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_005c26d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c26d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5c26d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * in_edi;
  undefined4 * puVar4;
  ushort uVar5;
  uint uVar6;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar1 != 0) {
    uVar6 = (uint)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]);
    uVar5 = 1 << GEN_SHC((byte)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]), (byte)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]));
    if ((((*((ushort *)GEN_TOP(((int)this + 0x22))) & uVar5 & 0x7fff) != 0) &&
        (*((ushort *)GEN_TOP(((int)this + 0x22))) = (~uVar5 | 0x8000) & *((ushort *)GEN_TOP(((int)this + 0x22))),
        (short)(*(undefined4 * PTR32 *)&gen_args[0]) == *((short *)GEN_TOP((iVar1 + 10 + uVar6 * 8))))) &&
       (uVar5 = *((ushort *)GEN_TOP((iVar1 + 8 + uVar6 * 8))), uVar5 != 0)) {
      uVar2 = *((undefined4 *)GEN_TOP((iVar1 + 0xc + uVar6 * 8)));
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(0x0));
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
      F_005be650(uVar3,uVar2,(uint)uVar5,&(*(undefined4 * PTR32 *)&gen_args[1]),&(*(undefined4 * PTR32 *)&gen_args[0]));
      puVar4 = (*(undefined4 * PTR32 *)&gen_args[1]);
      in_edi = (*(undefined4 * PTR32 *)&gen_args[0]);
      if ((*(undefined4 * PTR32 *)&gen_args[1]) != ((undefined4 *)GEN_TOP(0x0))) {
        if (((*(undefined4 * PTR32 *)&gen_args[0]) != ((undefined4 *)GEN_TOP(0x0))) && ((*(undefined4 * PTR32 *)&gen_args[1]) != (*(undefined4 * PTR32 *)&gen_args[0]))) {
          F_005ba9d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 2))),*((undefined4 *)GEN_TOP(((int)this + 8))),
                       (uint)(*(undefined4 * PTR32 *)&gen_args[1]),(uint)(*(undefined4 * PTR32 *)&gen_args[0]));
          F_0055eaa0(((undefined1 *)(gen_frame + 0x0)),in_edi,(*(undefined4 * PTR32 *)&gen_args[2]),puVar4);
          return 1;
        }
        *(*(undefined4 * PTR32 *)&gen_args[2]) = *(*(undefined4 * PTR32 *)&gen_args[1]);
        (*(undefined4 * PTR32 *)&gen_args[2])[1] = (*(undefined4 * PTR32 *)&gen_args[1])[1];
        (*(undefined4 * PTR32 *)&gen_args[2])[2] = (*(undefined4 * PTR32 *)&gen_args[1])[2];
        (*(undefined4 * PTR32 *)&gen_args[2])[3] = (*(undefined4 * PTR32 *)&gen_args[1])[3];
        (*(undefined4 * PTR32 *)&gen_args[2])[4] = (*(undefined4 * PTR32 *)&gen_args[1])[4];
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005c27d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c27d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5c27d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * in_eax;
  undefined4 * in_ecx;
  ushort uVar4;
  uint uVar5;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar1 != 0) {
    uVar5 = (uint)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]);
    uVar4 = 1 << GEN_SHC((byte)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]), (byte)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]));
    if ((((*((ushort *)GEN_TOP(((int)this + 0x22))) & uVar4 & 0x7fff) != 0) &&
        (*((ushort *)GEN_TOP(((int)this + 0x22))) = (~uVar4 | 0x8000) & *((ushort *)GEN_TOP(((int)this + 0x22))),
        (short)(*(undefined4 * PTR32 *)&gen_args[0]) == *((short *)GEN_TOP((iVar1 + 10 + uVar5 * 8))))) &&
       (uVar4 = *((ushort *)GEN_TOP((iVar1 + 8 + uVar5 * 8))), uVar4 != 0)) {
      uVar2 = *((undefined4 *)GEN_TOP((iVar1 + 0xc + uVar5 * 8)));
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(0x0));
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
      F_005be6a0(uVar3,uVar2,(uint)uVar4,&(*(undefined4 * PTR32 *)&gen_args[1]),&(*(undefined4 * PTR32 *)&gen_args[0]));
      in_ecx = (*(undefined4 * PTR32 *)&gen_args[1]);
      in_eax = (*(undefined4 * PTR32 *)&gen_args[0]);
      if ((*(undefined4 * PTR32 *)&gen_args[1]) != ((undefined4 *)GEN_TOP(0x0))) {
        if (((*(undefined4 * PTR32 *)&gen_args[0]) != ((undefined4 *)GEN_TOP(0x0))) && ((*(undefined4 * PTR32 *)&gen_args[1]) != (*(undefined4 * PTR32 *)&gen_args[0]))) {
          F_005ba9d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 2))),*((undefined4 *)GEN_TOP(((int)this + 8))),
                       (uint)(*(undefined4 * PTR32 *)&gen_args[1]),(uint)(*(undefined4 * PTR32 *)&gen_args[0]));
          F_0055ea70(in_eax,in_ecx,(*(undefined4 * PTR32 *)&gen_args[2]),((undefined1 *)(gen_frame + 0x0)));
          return 1;
        }
        *(*(undefined4 * PTR32 *)&gen_args[2]) = *(*(undefined4 * PTR32 *)&gen_args[1]);
        (*(undefined4 * PTR32 *)&gen_args[2])[1] = (*(undefined4 * PTR32 *)&gen_args[1])[1];
        (*(undefined4 * PTR32 *)&gen_args[2])[2] = (*(undefined4 * PTR32 *)&gen_args[1])[2];
        (*(undefined4 * PTR32 *)&gen_args[2])[3] = (*(undefined4 * PTR32 *)&gen_args[1])[3];
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005c28d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c28d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5c28d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * in_eax;
  undefined4 * in_edx;
  ushort uVar4;
  uint uVar5;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar1 != 0) {
    uVar5 = (uint)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]);
    uVar4 = 1 << GEN_SHC((byte)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]), (byte)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]));
    if ((((*((ushort *)GEN_TOP(((int)this + 0x22))) & uVar4 & 0x7fff) != 0) &&
        (*((ushort *)GEN_TOP(((int)this + 0x22))) = (~uVar4 | 0x8000) & *((ushort *)GEN_TOP(((int)this + 0x22))),
        (short)(*(undefined4 * PTR32 *)&gen_args[0]) == *((short *)GEN_TOP((iVar1 + 10 + uVar5 * 8))))) &&
       (uVar4 = *((ushort *)GEN_TOP((iVar1 + 8 + uVar5 * 8))), uVar4 != 0)) {
      uVar2 = *((undefined4 *)GEN_TOP((iVar1 + 0xc + uVar5 * 8)));
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(0x0));
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
      F_005be6f0(uVar3,uVar2,(uint)uVar4,&(*(undefined4 * PTR32 *)&gen_args[1]),&(*(undefined4 * PTR32 *)&gen_args[0]));
      in_edx = (*(undefined4 * PTR32 *)&gen_args[1]);
      in_eax = (*(undefined4 * PTR32 *)&gen_args[0]);
      if ((*(undefined4 * PTR32 *)&gen_args[1]) != ((undefined4 *)GEN_TOP(0x0))) {
        if (((*(undefined4 * PTR32 *)&gen_args[0]) != ((undefined4 *)GEN_TOP(0x0))) && ((*(undefined4 * PTR32 *)&gen_args[1]) != (*(undefined4 * PTR32 *)&gen_args[0]))) {
          F_005ba9d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 2))),*((undefined4 *)GEN_TOP(((int)this + 8))),
                       (uint)(*(undefined4 * PTR32 *)&gen_args[1]),(uint)(*(undefined4 * PTR32 *)&gen_args[0]));
          F_0055eaf0(in_eax,in_edx,(*(undefined4 * PTR32 *)&gen_args[2]),((undefined1 *)(gen_frame + 0x0)));
          return 1;
        }
        *(*(undefined4 * PTR32 *)&gen_args[2]) = *(*(undefined4 * PTR32 *)&gen_args[1]);
        (*(undefined4 * PTR32 *)&gen_args[2])[1] = (*(undefined4 * PTR32 *)&gen_args[1])[1];
        (*(undefined4 * PTR32 *)&gen_args[2])[2] = (*(undefined4 * PTR32 *)&gen_args[1])[2];
        (*(undefined4 * PTR32 *)&gen_args[2])[3] = (*(undefined4 * PTR32 *)&gen_args[1])[3];
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005c29d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c29d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5c29d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * in_edi;
  undefined4 * puVar4;
  ushort uVar5;
  uint uVar6;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar1 != 0) {
    uVar6 = (uint)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]);
    uVar5 = 1 << GEN_SHC((byte)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]), (byte)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]));
    if ((((*((ushort *)GEN_TOP(((int)this + 0x22))) & uVar5 & 0x7fff) != 0) &&
        (*((ushort *)GEN_TOP(((int)this + 0x22))) = (~uVar5 | 0x8000) & *((ushort *)GEN_TOP(((int)this + 0x22))),
        (short)(*(undefined4 * PTR32 *)&gen_args[0]) == *((short *)GEN_TOP((iVar1 + 10 + uVar6 * 8))))) &&
       (uVar5 = *((ushort *)GEN_TOP((iVar1 + 8 + uVar6 * 8))), uVar5 != 0)) {
      uVar2 = *((undefined4 *)GEN_TOP((iVar1 + 0xc + uVar6 * 8)));
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(0x0));
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
      F_005be740(uVar3,uVar2,(uint)uVar5,&(*(undefined4 * PTR32 *)&gen_args[1]),&(*(undefined4 * PTR32 *)&gen_args[0]));
      puVar4 = (*(undefined4 * PTR32 *)&gen_args[1]);
      in_edi = (*(undefined4 * PTR32 *)&gen_args[0]);
      if ((*(undefined4 * PTR32 *)&gen_args[1]) != ((undefined4 *)GEN_TOP(0x0))) {
        if (((*(undefined4 * PTR32 *)&gen_args[0]) != ((undefined4 *)GEN_TOP(0x0))) && ((*(undefined4 * PTR32 *)&gen_args[1]) != (*(undefined4 * PTR32 *)&gen_args[0]))) {
          F_005ba9d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 2))),*((undefined4 *)GEN_TOP(((int)this + 8))),
                       (uint)(*(undefined4 * PTR32 *)&gen_args[1]),(uint)(*(undefined4 * PTR32 *)&gen_args[0]));
          F_0055ecb0(((undefined1 *)(gen_frame + 0x0)),in_edi,(*(undefined4 * PTR32 *)&gen_args[2]),puVar4);
          return 1;
        }
        *(*(undefined4 * PTR32 *)&gen_args[2]) = *(*(undefined4 * PTR32 *)&gen_args[1]);
        (*(undefined4 * PTR32 *)&gen_args[2])[1] = (*(undefined4 * PTR32 *)&gen_args[1])[1];
        (*(undefined4 * PTR32 *)&gen_args[2])[2] = (*(undefined4 * PTR32 *)&gen_args[1])[2];
        (*(undefined4 * PTR32 *)&gen_args[2])[3] = (*(undefined4 * PTR32 *)&gen_args[1])[3];
        (*(undefined4 * PTR32 *)&gen_args[2])[4] = (*(undefined4 * PTR32 *)&gen_args[1])[4];
        (*(undefined4 * PTR32 *)&gen_args[2])[5] = (*(undefined4 * PTR32 *)&gen_args[1])[5];
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005c2ad0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c2ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5c2ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * in_eax;
  undefined4 * in_edx;
  ushort uVar4;
  uint uVar5;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar1 != 0) {
    uVar5 = (uint)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]);
    uVar4 = 1 << GEN_SHC((byte)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]), (byte)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]));
    if ((((*((ushort *)GEN_TOP(((int)this + 0x22))) & uVar4 & 0x7fff) != 0) &&
        (*((ushort *)GEN_TOP(((int)this + 0x22))) = (~uVar4 | 0x8000) & *((ushort *)GEN_TOP(((int)this + 0x22))),
        (short)(*(undefined4 * PTR32 *)&gen_args[0]) == *((short *)GEN_TOP((iVar1 + 10 + uVar5 * 8))))) &&
       (uVar4 = *((ushort *)GEN_TOP((iVar1 + 8 + uVar5 * 8))), uVar4 != 0)) {
      uVar2 = *((undefined4 *)GEN_TOP((iVar1 + 0xc + uVar5 * 8)));
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(0x0));
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
      F_005be790(uVar3,uVar2,(uint)uVar4,&(*(undefined4 * PTR32 *)&gen_args[1]),&(*(undefined4 * PTR32 *)&gen_args[0]));
      in_edx = (*(undefined4 * PTR32 *)&gen_args[1]);
      in_eax = (*(undefined4 * PTR32 *)&gen_args[0]);
      if ((*(undefined4 * PTR32 *)&gen_args[1]) != ((undefined4 *)GEN_TOP(0x0))) {
        if (((*(undefined4 * PTR32 *)&gen_args[0]) != ((undefined4 *)GEN_TOP(0x0))) && ((*(undefined4 * PTR32 *)&gen_args[1]) != (*(undefined4 * PTR32 *)&gen_args[0]))) {
          F_005ba9d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 2))),*((undefined4 *)GEN_TOP(((int)this + 8))),
                       (uint)(*(undefined4 * PTR32 *)&gen_args[1]),(uint)(*(undefined4 * PTR32 *)&gen_args[0]));
          F_0055ec50(in_eax,in_edx,(*(undefined4 * PTR32 *)&gen_args[2]),((undefined1 *)(gen_frame + 0x0)));
          return 1;
        }
        *(*(undefined4 * PTR32 *)&gen_args[2]) = *(*(undefined4 * PTR32 *)&gen_args[1]);
        (*(undefined4 * PTR32 *)&gen_args[2])[1] = (*(undefined4 * PTR32 *)&gen_args[1])[1];
        (*(undefined4 * PTR32 *)&gen_args[2])[2] = (*(undefined4 * PTR32 *)&gen_args[1])[2];
        (*(undefined4 * PTR32 *)&gen_args[2])[3] = (*(undefined4 * PTR32 *)&gen_args[1])[3];
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005c2bd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c2bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5c2bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * in_edi;
  undefined4 * puVar4;
  ushort uVar5;
  uint uVar6;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar1 != 0) {
    uVar6 = (uint)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]);
    uVar5 = 1 << GEN_SHC((byte)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]), (byte)(ushort)(*(undefined4 * PTR32 *)&gen_args[1]));
    if ((((*((ushort *)GEN_TOP(((int)this + 0x22))) & uVar5 & 0x7fff) != 0) &&
        (*((ushort *)GEN_TOP(((int)this + 0x22))) = (~uVar5 | 0x8000) & *((ushort *)GEN_TOP(((int)this + 0x22))),
        (short)(*(undefined4 * PTR32 *)&gen_args[0]) == *((short *)GEN_TOP((iVar1 + 10 + uVar6 * 8))))) &&
       (uVar5 = *((ushort *)GEN_TOP((iVar1 + 8 + uVar6 * 8))), uVar5 != 0)) {
      uVar2 = *((undefined4 *)GEN_TOP((iVar1 + 0xc + uVar6 * 8)));
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(0x0));
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
      F_005be7e0(uVar3,uVar2,(uint)uVar5,&(*(undefined4 * PTR32 *)&gen_args[1]),&(*(undefined4 * PTR32 *)&gen_args[0]));
      puVar4 = (*(undefined4 * PTR32 *)&gen_args[1]);
      in_edi = (*(undefined4 * PTR32 *)&gen_args[0]);
      if ((*(undefined4 * PTR32 *)&gen_args[1]) != ((undefined4 *)GEN_TOP(0x0))) {
        if (((*(undefined4 * PTR32 *)&gen_args[0]) != ((undefined4 *)GEN_TOP(0x0))) && ((*(undefined4 * PTR32 *)&gen_args[1]) != (*(undefined4 * PTR32 *)&gen_args[0]))) {
          F_005ba9d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 2))),*((undefined4 *)GEN_TOP(((int)this + 8))),
                       (uint)(*(undefined4 * PTR32 *)&gen_args[1]),(uint)(*(undefined4 * PTR32 *)&gen_args[0]));
          F_0055eb50(((undefined1 *)(gen_frame + 0x0)),in_edi,(*(undefined4 * PTR32 *)&gen_args[2]),puVar4);
          return 1;
        }
        *(*(undefined4 * PTR32 *)&gen_args[2]) = *(*(undefined4 * PTR32 *)&gen_args[1]);
        (*(undefined4 * PTR32 *)&gen_args[2])[1] = (*(undefined4 * PTR32 *)&gen_args[1])[1];
        (*(undefined4 * PTR32 *)&gen_args[2])[2] = (*(undefined4 * PTR32 *)&gen_args[1])[2];
        (*(undefined4 * PTR32 *)&gen_args[2])[3] = (*(undefined4 * PTR32 *)&gen_args[1])[3];
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005c2cc0 */
GEN_OWN GEN_FRAME unsigned int F_005c2cc0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2cc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return 0;
}

/* ref: FUN_005c2ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2ce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_005c2d00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2d00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_005c2d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c2d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  byte bVar2;
  
  uVar1 = F_0055d920(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
  if (((uVar1 != 0) && (999 < *((ushort *)GEN_TOP((uVar1 + 0x18))))) &&
     (uVar1 = *((uint *)GEN_TOP((uVar1 + 0x8c))), uVar1 != 0)) {
    if ((((*((byte *)GEN_TOP((uVar1 + 0x60))) & 1) == 0) || ((*((byte *)GEN_TOP((uVar1 + 0x60))) & 4) == 0)) ||
       (*((char *)GEN_TOP((uVar1 + 0x1c))) != '\x01')) {
      bVar2 = 0;
    }
    else {
      bVar2 = *((byte *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0xc))) + 0xf)));
    }
    if (bVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_005c2d80 */
GEN_OWN GEN_FRAME uint F_005c2d80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2d80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005c2db0 */
GEN_OWN GEN_FRAME uint F_005c2db0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c2dd0 */
GEN_OWN GEN_FRAME uint F_005c2dd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2dd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c2df0 */
GEN_OWN GEN_FRAME uint F_005c2df0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2df0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005c2e30 */
GEN_OWN GEN_FRAME uint F_005c2e30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2e30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c2e60 */
GEN_OWN GEN_FRAME uint F_005c2e60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c2eb0 */
GEN_OWN GEN_FRAME uint F_005c2eb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_005c2ee0 */
GEN_OWN GEN_FRAME uint F_005c2ee0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2ee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_005c2f40 */
GEN_OWN GEN_FRAME uint F_005c2f40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2f40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c2f60 */
GEN_OWN GEN_FRAME uint F_005c2f60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c2f80 */
GEN_OWN GEN_FRAME uint F_005c2f80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005c2fb0 */
GEN_OWN GEN_FRAME uint F_005c2fb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c2fd0 */
GEN_OWN GEN_FRAME uint F_005c2fd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2fd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c2ff0 */
GEN_OWN GEN_FRAME uint F_005c2ff0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c2ff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005c3020 */
GEN_OWN GEN_FRAME uint F_005c3020(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3040 */
GEN_OWN GEN_FRAME uint F_005c3040(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3070 */
GEN_OWN GEN_FRAME uint F_005c3070(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3090 */
GEN_OWN GEN_FRAME uint F_005c3090(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005c30c0 */
GEN_OWN GEN_FRAME uint F_005c30c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c30c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_005c30e0 */
GEN_OWN GEN_FRAME uint F_005c30e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c30e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_005c3100 */
GEN_OWN GEN_FRAME uint F_005c3100(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3120 */
GEN_OWN GEN_FRAME uint F_005c3120(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3140 */
GEN_OWN GEN_FRAME uint F_005c3140(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3160 */
GEN_OWN GEN_FRAME uint F_005c3160(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3180 */
GEN_OWN GEN_FRAME uint F_005c3180(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c31a0 */
GEN_OWN GEN_FRAME uint F_005c31a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c31a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c31c0 */
GEN_OWN GEN_FRAME uint F_005c31c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c31c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005c3200 */
GEN_OWN GEN_FRAME uint F_005c3200(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3220 */
GEN_OWN GEN_FRAME uint F_005c3220(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3250 */
GEN_OWN GEN_FRAME uint F_005c3250(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3270 */
GEN_OWN GEN_FRAME uint F_005c3270(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_005c3320 */
GEN_OWN GEN_FRAME unsigned int F_005c3320(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_005c3390 */
GEN_OWN GEN_FRAME uint F_005c3390(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005c33d0 */
GEN_OWN GEN_FRAME uint F_005c33d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c33d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005c3410 */
GEN_OWN GEN_FRAME uint F_005c3410(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005c3460 */
GEN_OWN GEN_FRAME uint F_005c3460(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005c3490 */
GEN_OWN GEN_FRAME uint F_005c3490(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c34b0 */
GEN_OWN GEN_FRAME uint F_005c34b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c34b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c34d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c34d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c34d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_005c34f0 */
GEN_OWN GEN_FRAME unsigned int F_005c34f0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c34f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_005c3510 */
GEN_OWN GEN_FRAME uint F_005c3510(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3540 */
GEN_OWN GEN_FRAME uint F_005c3540(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c35a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c35a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c35a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_005c35c0 */
GEN_OWN GEN_FRAME uint F_005c35c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c35c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3600 */
GEN_OWN GEN_FRAME uint F_005c3600(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3620 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_005c3620(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    F_0042cbc0(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG,param_2 + 0x54);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0xa8))) = *((undefined4 *)GEN_TOP((param_2 + 0xa8)));
    *((undefined4 *)GEN_TOP(((int)param_1 + 0xac))) = *((undefined4 *)GEN_TOP((param_2 + 0xac)));
  }
  return;
}

/* ref: FUN_005c3670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3670(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *in_ecx - *param_2 >> 2;
}

/* ref: FUN_005c36c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005c36c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c36c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005be4d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_005c36d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c36d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c36d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_005c36f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005c36f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c36f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005be530(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_005c3700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_005c3720 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005c3720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c3720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005be590(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_005c3730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_005c3750 */
GEN_OWN GEN_FRAME uint F_005c3750(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5c3750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005c3760 */
GEN_OWN GEN_FRAME uint F_005c3760(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c3770 */
GEN_OWN GEN_FRAME uint F_005c3770(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_005c3780 */
GEN_OWN GEN_FRAME uint F_005c3780(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((param_1 + 8))) = param_3;
  return param_1;
}

/* ref: FUN_005c3790 */
GEN_OWN GEN_FRAME uint F_005c3790(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((param_1 + 8))) = param_3;
  return param_1;
}

/* ref: FUN_005c37a0 */
GEN_OWN GEN_FRAME unsigned int F_005c37a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c37a0u, gen_a0, gen_a1, gen_a2, 0u);
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
  return 0;
}

/* ref: FUN_005c37e0 */
GEN_OWN GEN_FRAME unsigned int F_005c37e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c37e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_005c3810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_005c3830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_005c3850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_005c3870 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005c3870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c3870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005bd810(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_005c3880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3880(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c3890 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c3890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_005c38b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c38b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c38b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c38c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c38c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c38c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_005c38e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c38e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c38e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_005c3930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_005c3960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_005c39b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c39b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c39b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_005c3a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_005c3a40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3a40(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2 * -4;
  return (uint)in_ecx;
}

/* ref: FUN_005c3a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3a60(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2 * -4;
  return (uint)in_ecx;
}

/* ref: FUN_005c3a80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c3a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_005c3ac0 */
GEN_OWN GEN_FRAME uint F_005c3ac0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3ac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3ae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_005c3b00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005c3b00(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5c3b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_005c3b20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c3b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) != *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_005c3b40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c3b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) != *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_005c3b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_005c3b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_005c3bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005c3be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_005c3c00 */
GEN_OWN GEN_FRAME uint F_005c3c00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3c00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3c20 */
GEN_OWN GEN_FRAME uint F_005c3c20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5c3c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_005c3c30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_005c3c50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005c3c50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3c50u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_005c3c90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c3c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_005c3cb0 */
GEN_OWN GEN_FRAME uint F_005c3cb0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + param_2;
  return param_1;
}

/* ref: FUN_005c3cc0 */
GEN_OWN GEN_FRAME uint F_005c3cc0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + param_2;
  return param_1;
}

/* ref: FUN_005c3cd0 */
GEN_OWN GEN_FRAME uint F_005c3cd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_005c3d00 */
GEN_OWN GEN_FRAME uint F_005c3d00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3d00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3d30 */
GEN_OWN GEN_FRAME uint F_005c3d30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3d50 */
GEN_OWN GEN_FRAME uint F_005c3d50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3d50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3d70 */
GEN_OWN GEN_FRAME uint F_005c3d70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3d70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3d90 */
GEN_OWN GEN_FRAME uint F_005c3d90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3db0 */
GEN_OWN GEN_FRAME uint F_005c3db0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3dd0 */
GEN_OWN GEN_FRAME uint F_005c3dd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3dd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3df0 */
GEN_OWN GEN_FRAME uint F_005c3df0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3df0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_005c3e30 */
GEN_OWN GEN_FRAME uint F_005c3e30(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *param_1 = *param_1 + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_005c3e50 */
GEN_OWN GEN_FRAME uint F_005c3e50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  *param_3 = *param_3 + (param_2 - param_1 >> 2);
  return (uint)param_3;
}

/* ref: FUN_005c3e70 */
GEN_OWN GEN_FRAME uint F_005c3e70(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *param_1 = *param_1 + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_005c3e90 */
GEN_OWN GEN_FRAME uint F_005c3e90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c3e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_005c3eb0 */
GEN_OWN GEN_FRAME uint F_005c3eb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x5c3eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  
  iVar5 = param_2;
  while( true ) {
    iVar3 = iVar5 * 2 + 2;
    if (param_3 <= iVar3) break;
    iVar1 = *((int *)GEN_TOP((param_1 + iVar3 * 4)));
    iVar2 = *((int *)GEN_TOP((param_1 - 4 + iVar3 * 4)));
    if (iVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *((ushort *)GEN_TOP((iVar1 + 0x84)));
    }
    if (((iVar2 != 0) && (uVar6 < (ushort)*((undefined4 *)GEN_TOP((iVar2 + 0x84))))) &&
       (*((int *)GEN_TOP((iVar1 + 8))) == *((int *)GEN_TOP((iVar2 + 8))))) {
      iVar3 = iVar5 * 2 + 1;
    }
    *((undefined4 *)GEN_TOP((param_1 + iVar5 * 4))) = *((undefined4 *)GEN_TOP((param_1 + iVar3 * 4)));
    iVar5 = iVar3;
  }
  if (iVar3 == param_3) {
    *((undefined4 *)GEN_TOP((param_1 + iVar5 * 4))) = *((undefined4 *)GEN_TOP((param_1 - 4 + param_3 * 4)));
    iVar5 = param_3 - 1;
  }
  uVar4 = F_005bfb10(param_1,iVar5,param_2,param_4,param_5);
  return uVar4;
}

/* ref: FUN_005c3f50 */
GEN_OWN GEN_FRAME uint F_005c3f50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_005c3f80 */
GEN_OWN GEN_FRAME uint F_005c3f80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3fb0 */
GEN_OWN GEN_FRAME uint F_005c3fb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c3ff0 */
GEN_OWN GEN_FRAME uint F_005c3ff0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c3ff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c4020 */
GEN_OWN GEN_FRAME uint F_005c4020(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c4020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c4050 */
GEN_OWN GEN_FRAME uint F_005c4050(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c4050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c4090 */
GEN_OWN GEN_FRAME uint F_005c4090(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c4090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c40c0 */
GEN_OWN GEN_FRAME uint F_005c40c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c40c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c40f0 */
GEN_OWN GEN_FRAME uint F_005c40f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c40f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c4120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4120(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *in_ecx - *param_2 >> 2;
}

/* ref: FUN_005c4140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_005c4160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_005c4180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4180(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) + param_2;
  return in_ecx;
}

/* ref: FUN_005c4190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4190(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) + param_2;
  return in_ecx;
}

/* ref: FUN_005c41a0 */
GEN_OWN GEN_FRAME uint F_005c41a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c41a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_005c41c0 */
GEN_OWN GEN_FRAME uint F_005c41c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x5c41c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  *param_3 = *param_1;
  uVar1 = F_005c3eb0(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 2,param_4,param_5);
  return uVar1;
}

/* ref: FUN_005c41f0 */
GEN_OWN GEN_FRAME uint F_005c41f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5c41f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_005c4220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *((int *)GEN_TOP(((int)this + (int)(&REFG(undefined * PTR32, 0x10a0c2c))[(int)(param_1)] * 0x10 + 0x24c)));
  iVar2 = (int)(&REFG(undefined * PTR32, 0x10a0c2c))[(int)(param_1)] * 0x10;
  puVar1 = ((uint *)GEN_TOP(((int)this + iVar2 + 600)));
  uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(iVar4 * 0x4000));
  if (*((uint *)GEN_TOP(((int)this + iVar2 + 0x254))) < *puVar1) {
    _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(iVar4 * -0x4000));
    return 0;
  }
  return *((int *)GEN_TOP(((int)this + 0x294))) + *((int *)GEN_TOP(((int)this + iVar2 + 0x250))) + uVar3;
}

/* ref: FUN_005c4280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  undefined * puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar2 = (&REFG(undefined * PTR32, 0x10a0c2c))[(int)(*((int *)GEN_TOP(((int)this + 0x74))))];
  iVar3 = *((int *)GEN_TOP(((int)this + (int)((int)(uintptr_t)puVar2) * 4 + 0x24)));
  piVar1 = ((int *)GEN_TOP(((int)this + (int)((int)(uintptr_t)puVar2) * 4 + 0x3c)));
  *piVar1 = *piVar1 + param_1;
  uVar5 = iVar3 + param_1;
  if (0x4000 < uVar5) {
    if (param_1 < 0x4001) {
      uVar5 = F_005c4220(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x74))));
      if (uVar5 != 0) {
        iVar3 = *((int *)GEN_TOP(((int)this + (int)((int)(uintptr_t)puVar2) * 4 + 0x24)));
        *((uint *)GEN_TOP(((int)this + (int)((int)(uintptr_t)puVar2) * 4 + 0x24))) = param_1;
        piVar1 = ((int *)GEN_TOP(((int)this + (int)((int)(uintptr_t)puVar2) * 4 + 0x3c)));
        *piVar1 = *piVar1 + (0x4000 - iVar3);
        *((uint *)GEN_TOP(((int)this + (int)((int)(uintptr_t)puVar2) * 4 + 0x18))) = uVar5;
        return uVar5;
      }
    }
    return 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + (int)(&REFG(undefined * PTR32, 0x10a0c2c))[(int)(*((int *)GEN_TOP(((int)this + 0x74))))] * 4 + 0x30)));
  *((uint *)GEN_TOP(((int)this + (int)((int)(uintptr_t)puVar2) * 4 + 0x24))) = uVar5;
  return iVar4 * iVar3 + *((int *)GEN_TOP(((int)this + (int)((int)(uintptr_t)puVar2) * 4 + 0x18)));
}

/* ref: FUN_005c4360 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005c4360(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5c4360u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if ((param_1 != 0) && (*((int *)GEN_TOP((param_1 + 0x70))) != 0)) {
    F_00567d00(*((int *)GEN_TOP((param_1 + 0x70))) GEN_EDX_FWD,param_2,param_2);
  }
  return;
}

/* ref: FUN_005c4390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5c4390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  if ((this != ((undefined *)GEN_TOP(0x0))) && (iVar1 = *((int *)GEN_TOP(((int)this + 0x70))), iVar1 != 0)) {
    if (*((int *)GEN_TOP((iVar1 + 0x80))) == 0) {
      uVar4 = 0;
      uVar2 = F_00404270();
      puVar3 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar2,uVar4)));
      if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar3 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar3 = 0;
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x80))) = puVar3;
    }
    in_EAX = F_00565340(*((undefined4 *)GEN_TOP((iVar1 + 0x80))) GEN_EDX_ARG,(undefined1)param_1,param_2,param_4,iVar1,
                          param_3,0);
  }
  return in_EAX;
}

/* ref: FUN_005c4400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0055d920(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
  if ((((uVar1 == 0) || (*((ushort *)GEN_TOP((uVar1 + 0x18))) < 1000)) ||
      (uVar1 = *((uint *)GEN_TOP((uVar1 + 0x8c))), uVar1 == 0)) ||
     ((((*((byte *)GEN_TOP((uVar1 + 0x60))) & 1) == 0 || ((*((byte *)GEN_TOP((uVar1 + 0x60))) & 4) == 0)) ||
      ((*((char *)GEN_TOP((uVar1 + 0x1c))) != '\x01' || (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0xc))) + 0xf))) != '\x01'))))))
  {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_005c4450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0055d920(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
  if ((((uVar1 == 0) || (*((ushort *)GEN_TOP((uVar1 + 0x18))) < 1000)) ||
      (uVar1 = *((uint *)GEN_TOP((uVar1 + 0x8c))), uVar1 == 0)) ||
     ((((*((byte *)GEN_TOP((uVar1 + 0x60))) & 1) == 0 || ((*((byte *)GEN_TOP((uVar1 + 0x60))) & 4) == 0)) ||
      ((*((char *)GEN_TOP((uVar1 + 0x1c))) != '\x01' || (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0xc))) + 0xf))) != '\x0f'))))))
  {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_005c44a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005c44a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5c44a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x90)));
  if (iVar1 != 0) {
    if (*((int *)GEN_TOP((iVar1 + 0x80))) == 0) {
      uVar4 = 0;
      uVar2 = F_00404270();
      puVar3 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar2,uVar4)));
      if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar3 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar3 = 0;
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x80))) = puVar3;
    }
    F_00565340(*((undefined4 *)GEN_TOP((iVar1 + 0x80))) GEN_EDX_ARG,(undefined1)param_1,param_2,param_4,iVar1,param_3,0);
  }
  return;
}

/* ref: FUN_005c4510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4510(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar1 = *((int *)GEN_TOP((iVar2 + 0x10)));
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005c4550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4550(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x5c4550u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004d4760(param_1 GEN_EDX_FWD,0x28)));
  uVar2 = 0;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 3;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = (undefined4)gen_fl2bits(param_4);
    puVar1[4] = param_5;
    if (param_6 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[5] = puVar1 + 6;
      puVar1[6] = *param_6;
      puVar1[7] = param_6[1];
      puVar1[8] = param_6[2];
      puVar1[9] = param_6[3];
      uVar2 = F_004d4810(param_1 GEN_EDX_ARG,puVar1);
      return uVar2;
    }
    puVar1[5] = 0;
    uVar2 = F_004d4810(param_1 GEN_EDX_ARG,puVar1);
  }
  return uVar2;
}

/* ref: FUN_005c4610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4610(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c4620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_005c4630 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c4630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_005c4660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4660(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c4670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_005c46c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005c46c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c46c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x10)));
  if (uVar1 != 0) {
    uVar1 = uVar1 - 1;
    *((uint *)GEN_TOP((in_ecx + 0x10))) = uVar1;
    if (uVar1 == 0) {
      *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_005c46e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005c46e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c46e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x10)));
  if (uVar1 != 0) {
    uVar1 = uVar1 - 1;
    *((uint *)GEN_TOP((in_ecx + 0x10))) = uVar1;
    if (uVar1 == 0) {
      *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_005c4740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4740(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_005c4760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4760(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_005c4800 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005c4800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_005c4820 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005c4820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5c4820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  piVar1 = ((int *)GEN_TOP(*piVar2));
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  piVar2 = piVar1;
  if (piVar1 != *(int * PTR32 *)this) {
    do {
      piVar2 = ((int *)GEN_TOP(*piVar1));
      F_00429760(piVar1,0xc,400);
      piVar1 = piVar2;
    } while (piVar2 != ((int *)GEN_TOP(*(int *)this)));
  }
  return (uint)piVar2;
}

/* ref: FUN_005c4870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4870(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c4880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4880(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_005c4890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_005c48a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c48a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c48a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c48c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c48c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c48c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c48d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c48d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c48d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_005c48f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c48f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c48f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c4900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4900(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_005c4950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c4950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5c4950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int * piVar6;
  ulonglong uVar7;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  iVar2 = *param_1;
  puVar5 = ((undefined4 *)GEN_TOP(*puVar1));
  piVar6 = param_1;
  while (puVar5 != puVar1) {
    if (puVar5[2] == iVar2) {
      puVar3 = ((undefined4 *)GEN_TOP(puVar5[1]));
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
      *puVar3 = puVar4;
      puVar4[1] = puVar3;
      uVar7 = F_00429760(puVar5,0xc,400);
      piVar6 = ((int *)GEN_TOP((uint)uVar7));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
      puVar5 = puVar4;
    }
    else {
      puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_005c49b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c49b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c49b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c49c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c49c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c49c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_005c49e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c49e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c49e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005c49f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005c49f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5c49f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

