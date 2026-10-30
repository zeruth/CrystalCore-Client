#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00cc17d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc17d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcc17d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a310);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined * PTR32, 0x112a308);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,0);
  }
  F_00cd07a0(this GEN_EDX_ARG,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a17c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a2c4));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) - 4 + (int)this))) = *((int *)GEN_TOP((*(int *)this + 4))) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cc1840 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cc1840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(float param_2, float gen_a2), GEN_P(float param_3, float gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcc1840u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(float param_2 = (float)gen_a2;)
  GEN_PIN(float param_3 = (float)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00ccdb50((int)this - 4 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_00cc1850 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc1850(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ccd410();
  return uVar1;
}

/* ref: FUN_00cc1860 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc1860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cc1c00((int)this - *((int *)GEN_TOP(((int)this - 4))) GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cc1880 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc1880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cd0920(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x40 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x1c GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cc18c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc18c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc18c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(param_1 + 0x13 GEN_EDX_FWD);
  F_00cccb40(param_1 + 10 GEN_EDX_ARG);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_2 & 1) != 0) && (param_1 - 1 != ((undefined4 *)GEN_TOP(0x0)))) {
    F_00406810(param_1 - 1);
  }
  return (uint)(param_1 - 1);
}

/* ref: FUN_00cc1910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcc1910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a368);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined * PTR32, 0x112a360);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,0);
  }
  F_00cd07a0(this GEN_EDX_ARG,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a1cc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a31c));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) - 4 + (int)this))) = *((int *)GEN_TOP((*(int *)this + 4))) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cc1980 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc1980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cc1c50((int)this - *((int *)GEN_TOP(((int)this - 4))) GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cc19a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc19a0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc19a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ccd420();
  return uVar1;
}

/* ref: FUN_00cc19b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc19b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(float param_2, float gen_a2), GEN_P(float param_3, float gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcc19b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(float param_2 = (float)gen_a2;)
  GEN_PIN(float param_3 = (float)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00ccdb80((int)this - 4 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00cc19c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc19c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc19c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cd0920(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x40 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x1c GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cc1a00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1a00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(param_1 + 0x13 GEN_EDX_FWD);
  F_00cccb40(param_1 + 10 GEN_EDX_ARG);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_2 & 1) != 0) && (param_1 - 1 != ((undefined4 *)GEN_TOP(0x0)))) {
    F_00406810(param_1 - 1);
  }
  return (uint)(param_1 - 1);
}

/* ref: FUN_00cc1a50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcc1a50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a3c0);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined * PTR32, 0x112a3b8);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,0);
  }
  F_00cd07a0(this GEN_EDX_ARG,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a21c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a374));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) - 4 + (int)this))) = *((int *)GEN_TOP((*(int *)this + 4))) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cc1ac0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc1ac0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ccd430();
  return uVar1;
}

/* ref: FUN_00cc1ad0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc1ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(float param_2, float gen_a2), GEN_P(float param_3, float gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcc1ad0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(float param_2 = (float)gen_a2;)
  GEN_PIN(float param_3 = (float)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00ccdbb0((int)this - 4 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00cc1ae0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc1ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cc1ca0((int)this - *((int *)GEN_TOP(((int)this - 4))) GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cc1b00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc1b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cd0920(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x40 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x1c GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cc1b40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1b40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(param_1 + 0x13 GEN_EDX_FWD);
  F_00cccb40(param_1 + 10 GEN_EDX_ARG);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_2 & 1) != 0) && (param_1 - 1 != ((undefined4 *)GEN_TOP(0x0)))) {
    F_00406810(param_1 - 1);
  }
  return (uint)(param_1 - 1);
}

/* ref: FUN_00cc1b90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcc1b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00cbee70(param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00cc1bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1bb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = param_1 - 6;
  F_00cd0920(param_1 - 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(param_1 + 0x13 GEN_EDX_ARG);
  F_00cccb40(param_1 + 10 GEN_EDX_ARG);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    F_00406810(puVar1);
  }
  return (uint)puVar1;
}

/* ref: FUN_00cc1c00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1c00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = param_1 - 6;
  F_00cd0920(param_1 - 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(param_1 + 0x13 GEN_EDX_ARG);
  F_00cccb40(param_1 + 10 GEN_EDX_ARG);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    F_00406810(puVar1);
  }
  return (uint)puVar1;
}

/* ref: FUN_00cc1c50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1c50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = param_1 - 6;
  F_00cd0920(param_1 - 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(param_1 + 0x13 GEN_EDX_ARG);
  F_00cccb40(param_1 + 10 GEN_EDX_ARG);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    F_00406810(puVar1);
  }
  return (uint)puVar1;
}

/* ref: FUN_00cc1ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1ca0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = param_1 - 6;
  F_00cd0920(param_1 - 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(param_1 + 0x13 GEN_EDX_ARG);
  F_00cccb40(param_1 + 10 GEN_EDX_ARG);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    F_00406810(puVar1);
  }
  return (uint)puVar1;
}

/* ref: FUN_00cc1d20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcc1d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(param_1,param_2,param_3,param_4,param_5);
  return (uint)this;
}

/* ref: FUN_00cc1d70 */
GEN_LIB GEN_FRAME unsigned int F_00cc1d70(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cc1d90 */
GEN_LIB GEN_NOFRAME uint F_00cc1d90(void)
{
  GEN_ENTER(0xcc1d90u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  REFG(undefined4, 0x15d8624) = REFG(undefined4, 0x15d8624) + 1;
  if (0x3fffff < (int)REFG(undefined4, 0x15d8624)) {
    REFG(int, 0x15d8628) = REFG(int, 0x15d8628) + 1;
    REFG(undefined4, 0x15d8624) = 1;
  }
  if (REFG(int, 0x15d8628) != 0) {
    do {
      piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0)));
      while( true ) {
        if (piVar1 == ((int *)GEN_TOP(0x0))) goto LAB_00cc1e11;
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xd0))))(piVar1 GEN_EDX_ARG);
        if ((int)uVar2 >> 9 == REFG(undefined4, 0x15d8624)) break;
        piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)));
      }
      REFG(undefined4, 0x15d8624) = REFG(undefined4, 0x15d8624) + 1;
      if (0x3fffff < (int)REFG(undefined4, 0x15d8624)) {
        REFG(int, 0x15d8628) = REFG(int, 0x15d8628) + 1;
        REFG(undefined4, 0x15d8624) = 1;
      }
    } while( true );
  }
LAB_00cc1e11: ;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return REFG(undefined4, 0x15d8624);
}

/* ref: FUN_00cc1e50 */
GEN_LIB GEN_FRAME uint F_00cc1e50(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined1 * param_6, unsigned int gen_a5), GEN_P(int * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xcc1e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a5;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a6;)
  bool bVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  byte * pbVar7;
  int iVar8;
  float10 extraout_ST0;
  float10 fVar9;
  float10 extraout_ST0_00;
  longlong lVar10;
  longlong lVar11;
  float local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  if (param_2 == 0) {
    return 0;
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  iVar8 = 0;
  for (piVar3 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar3 != ((int *)GEN_TOP(0x0));
      piVar3 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3)))) {
    if ((((piVar3 != param_7) && (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xdc))))(piVar3 GEN_EDX_ARG), uVar4 != 8)) &&
        (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xdc))))(piVar3 GEN_EDX_ARG), uVar4 != 0x20)) &&
       (bVar2 = F_00cd4390(piVar3 GEN_EDX_ARG,param_1,param_4,param_5), bVar2 != 0)) {
      iVar8 = iVar8 + 1;
    }
  }
  local_c = 0;
  if ((iVar8 < 1) && (param_1[6] != 0)) goto LAB_00cc21ed;
  local_c = 1;
  local_10 = 0;
  if (param_1[7] == 0) {
LAB_00cc1fcb: ;
    pbVar7 = param_1 + 0x10;
  }
  else {
    pbVar7 = param_1 + 0x1c;
    do {
      local_14 = 0;
      piVar3 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0)));
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        do {
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xdc))))(piVar3 GEN_EDX_ARG);
          if (((uVar4 != 8) && (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xdc))))(piVar3 GEN_EDX_ARG), uVar4 != 0x20)) &&
             (bVar2 = F_00cd3290(piVar3 GEN_EDX_ARG,pbVar7,iVar8,(uint)*((byte *)GEN_TOP((param_2 + 2))),param_4,param_5,
                                   param_3), bVar2 != 0)) {
            local_14 = local_14 + 1;
          }
          piVar3 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3)));
        } while (piVar3 != ((int *)GEN_TOP(0x0)));
        if (local_14 != 0) {
          local_c = local_10 + 2;
        }
      }
      local_10 = local_10 + 1;
      pbVar7 = pbVar7 + 0x18;
      iVar8 = local_14;
    } while (local_10 < (int)(uint)param_1[7]);
    if (((int)local_c < 1) || (5 < (int)local_c)) goto LAB_00cc21ed;
    if (local_c == 1) goto LAB_00cc1fcb;
    pbVar7 = param_1 + local_c * 0x18 - 8;
  }
  if (pbVar7 != ((byte *)GEN_TOP(0x0))) {
    local_14 = 0;
    do {
      switch((unsigned int)(uintptr_t)(pbVar7[local_14 + 1])) {
      case 1: ;
        for (piVar3 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar3 != ((int *)GEN_TOP(0x0));
            piVar3 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3)))) {
          if (local_c == piVar3[0x4d]) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,0);
            if ((*((char *)GEN_TOP((param_2 + 3))) == '\x02') || (*((char *)GEN_TOP((param_2 + 3))) == '\f')) {
              *param_6 = 1;
            }
          }
        }
        break;
      case 2: ;
        for (uVar4 = F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); uVar4 != 0;
            uVar4 = F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,uVar4)) {
          if (local_c == *((uint *)GEN_TOP((uVar4 + 0x134)))) {
            iVar8 = (uint)*((byte *)GEN_TOP((uVar4 + 0x12))) + *(int *)(pbVar7 + local_14 * 4 + 8);
            if (iVar8 < 0) {
              iVar8 = 0;
            }
            else if (0xff < iVar8) {
              iVar8 = 0xff;
            }
            *((char *)GEN_TOP((uVar4 + 0x12))) = (char)iVar8;
          }
        }
        break;
      case 3: ;
        for (piVar3 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar3 != ((int *)GEN_TOP(0x0));
            piVar3 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3)))) {
          if (local_c == piVar3[0x4d]) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(pbVar7 + local_14 * 4 + 8));
          }
        }
        break;
      case 4: ;
        for (piVar3 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar3 != ((int *)GEN_TOP(0x0));
            piVar3 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3)))) {
          if (local_c == piVar3[0x4d]) {
            extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((piVar3[0x11] + 0x10))))(piVar3 + 0x11);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))
                      (piVar3 GEN_EDX_ARG,(undefined4)
                              gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(pbVar7 + local_14 * 4 + 8) *
                                                 (float10)(float)extraout_ST0)))),0);
          }
        }
        break;
      case 5: ;
        piVar3 = ((int *)GEN_TOP(0x0));
        uVar4 = 0x100;
        piVar6 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0)));
        if (piVar6 == ((int *)GEN_TOP(0x0))) {
          return 0;
        }
        do {
          if (local_c == piVar6[0x4d]) {
            uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc0))))(piVar6 GEN_EDX_ARG);
            if ((uVar5 & 0xff) < uVar4) {
              uVar4 = uVar5 & 0xff;
              piVar3 = piVar6;
            }
          }
          piVar6 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar6)));
        } while (piVar6 != ((int *)GEN_TOP(0x0)));
        if (piVar3 == ((int *)GEN_TOP(0x0))) {
          return 0;
        }
LAB_00cc21bb: ;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,0);
        if ((*((char *)GEN_TOP((param_2 + 3))) == '\x02') || (*((char *)GEN_TOP((param_2 + 3))) == '\f')) {
          *param_6 = 1;
        }
        break;
      case 6: ;
        for (piVar3 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar3 != ((int *)GEN_TOP(0x0));
            piVar3 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3)))) {
          if (local_c == piVar3[0x4d]) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x54))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(pbVar7 + local_14 * 4 + 8),0);
          }
        }
        break;
      case 7: ;
        iVar8 = 0;
        if (*param_1 < 2) {
          fVar9 = (float10)*(float *)(pbVar7 + local_14 * 4 + 8);
        }
        else {
          iVar8 = (int)*(uint *)(pbVar7 + local_14 * 4 + 8) >> 8;
          fVar9 = GEN_X87(((float10)GEN_TOD((*(uint *)(pbVar7 + local_14 * 4 + 8) & 0xff))) *
                  (float10)*(double *)&REFG(undefined, 0x10928e8));
        }
        for (piVar3 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar3 != ((int *)GEN_TOP(0x0));
            piVar3 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3)))) {
          if (local_c == piVar3[0x4d]) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x40))))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)fVar9),iVar8);
          }
        }
        break;
      case 8: ;
        for (piVar3 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar3 != ((int *)GEN_TOP(0x0));
            piVar3 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3)))) {
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xdc))))(piVar3 GEN_EDX_ARG);
          if (((uVar4 != 8) && (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xdc))))(piVar3 GEN_EDX_ARG), uVar4 != 0x20)) &&
             (local_c == piVar3[0x4d])) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,0);
            if ((*((char *)GEN_TOP((param_2 + 3))) == '\x02') || (*((char *)GEN_TOP((param_2 + 3))) == '\f')) {
              *param_6 = 1;
            }
            break;
          }
        }
        break;
      case 0xc: ;
        piVar3 = ((int *)GEN_TOP(0x0));
        bVar1 = true;
        piVar6 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0)));
        if (piVar6 != ((int *)GEN_TOP(0x0))) {
          do {
            if (local_c == piVar6[0x4d]) {
              if (bVar1) {
                bVar1 = false;
              }
              else {
                lVar10 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x118))))(piVar3);
                lVar11 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x118))))(piVar6);
                if (lVar10 <= lVar11) goto LAB_00cc23b1;
              }
              piVar3 = piVar6;
            }
LAB_00cc23b1: ;
            piVar6 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar6)));
          } while (piVar6 != ((int *)GEN_TOP(0x0)));
          if (piVar3 != ((int *)GEN_TOP(0x0))) goto LAB_00cc21bb;
        }
        break;
      case 0xd: ;
        piVar3 = ((int *)GEN_TOP(0x0));
        local_18 = *(float *)&REFG(undefined, 0x112a620);
        piVar6 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0)));
        if (piVar6 == ((int *)GEN_TOP(0x0))) {
          return 0;
        }
        do {
          if (local_c == piVar6[0x4d]) {
            extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x110))))(piVar6);
            if ((float10)(float)extraout_ST0_00 <= (float10)local_18) {
              piVar3 = piVar6;
              local_18 = (float)extraout_ST0_00;
            }
          }
          piVar6 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar6)));
        } while (piVar6 != ((int *)GEN_TOP(0x0)));
        if (piVar3 == ((int *)GEN_TOP(0x0))) {
          return 0;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,0);
        if ((*((char *)GEN_TOP((param_2 + 3))) == '\x02') || (*((char *)GEN_TOP((param_2 + 3))) == '\f')) {
          *param_6 = 1;
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < 1);
  }
LAB_00cc21ed: ;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return local_c;
}

/* ref: FUN_00cc24a0 */
GEN_LIB GEN_FRAME uint F_00cc24a0(GEN_P(char param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc24a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < REFG(int, 0x15d862c)) {
    iVar2 = 0;
    do {
      bVar1 = F_00cd6590(iVar2 + REFG(int, 0x15d8630) GEN_EDX_ARG);
      if ((bVar1 != 0) &&
         ((param_1 != '\0' || ((*((uint *)GEN_TOP((iVar2 + 0x24c + REFG(int, 0x15d8630)))) >> 6 & 1) == 0)))) {
        return iVar3 * 0x278 + REFG(int, 0x15d8630);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x278;
    } while (iVar3 < REFG(int, 0x15d862c));
  }
  return 0;
}

/* ref: FUN_00cc2510 */
GEN_LIB GEN_FRAME uint F_00cc2510(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc2510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  if ((int)param_1 < 0) {
    return 0;
  }
  piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
  bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
  if (bVar1 != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
    if ((char)uVar2 != '\0') {
      return (uint)piVar3;
    }
  }
  return 0;
}

/* ref: FUN_00cc2570 */
GEN_LIB GEN_FRAME uint F_00cc2570(void)
{
  GEN_ENTER(0xcc2570u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  ((uint *)(gen_frame + 0x0))[9] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  uVar2 = 0x398;
  ((uint *)(gen_frame + 0x0))[1] = 0x420;
  ((uint *)(gen_frame + 0x0))[3] = 0x420;
  ((uint *)(gen_frame + 0x0))[5] = 0x3a8;
  ((uint *)(gen_frame + 0x0))[6] = 0x3a8;
  ((uint *)(gen_frame + 0x0))[0] = 0x398;
  ((uint *)(gen_frame + 0x0))[2] = 0x430;
  ((uint *)(gen_frame + 0x0))[4] = 0x398;
  ((uint *)(gen_frame + 0x0))[7] = 0x398;
  ((uint *)(gen_frame + 0x0))[8] = 0;
  uVar1 = 0x398;
  iVar3 = 1;
  do {
    if ((int)uVar1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    uVar2 = ((uint *)(gen_frame + 0x0))[(int)(iVar3)];
    iVar3 = iVar3 + 1;
  } while (uVar2 != 0);
  return uVar1;
}

/* ref: FUN_00cc25e0 */
GEN_LIB GEN_FRAME byte F_00cc25e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc25e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  byte bVar1;
  byte extraout_AL = 0;
  int iVar2;
  int iVar3;
  
  bVar1 = F_00cccbf0(&REFG(undefined, 0x15d8644) GEN_EDX_ARG);
  if (bVar1 == 0) {
    bVar1 = 0;
    if (0 < REFG(int, 0x15d862c)) {
      iVar2 = 0;
      iVar3 = 0;
      do {
        bVar1 = F_00cd65d0(((undefined *)GEN_TOP((iVar2 + REFG(int, 0x15d8630)))) GEN_EDX_ARG,param_1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x278;
      } while (iVar3 < REFG(int, 0x15d862c));
    }
  }
  else {
    F_00cccb80((undefined *)&REFG(undefined, 0x15d8644) GEN_EDX_ARG,param_1);
    *(float *)&REFG(undefined, 0x134c6f8) =
         F_00cccee0((undefined *)&REFG(undefined, 0x15d8644) GEN_EDX_ARG);
    bVar1 = extraout_AL;
    if (0 < REFG(int, 0x15d862c)) {
      iVar2 = 0;
      iVar3 = 0;
      do {
        F_00cd6e20(((undefined *)GEN_TOP((iVar2 + REFG(int, 0x15d8630)))) GEN_EDX_ARG);
        bVar1 = F_00cd65d0(((undefined *)GEN_TOP((REFG(int, 0x15d8630) + iVar2))) GEN_EDX_ARG,param_1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x278;
      } while (iVar3 < REFG(int, 0x15d862c));
      return bVar1;
    }
  }
  return bVar1;
}

/* ref: FUN_00cc2690 */
GEN_LIB GEN_FRAME uint F_00cc2690(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xcc2690u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  int * piVar1;
  
  *(float *)&REFG(undefined, 0x134c6f4) = param_1;
  for (piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar1 != ((int *)GEN_TOP(0x0));
      piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x58))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1));
  }
  return 0;
}

/* ref: FUN_00cc26e0 */
GEN_LIB GEN_FRAME uint F_00cc26e0(GEN_P(float param_1, float gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc26e0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    *(float *)&REFG(undefined, 0x134c6f8) = param_1;
    F_00cccbd0(&REFG(undefined, 0x15d8644) GEN_EDX_ARG,param_1);
    iVar3 = 0;
    uVar1 = 0;
    if (0 < REFG(int, 0x15d862c)) {
      iVar2 = 0;
      do {
        uVar1 = F_00cd6e20(((undefined *)GEN_TOP((iVar2 + REFG(int, 0x15d8630)))) GEN_EDX_ARG);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x278;
      } while (iVar3 < REFG(int, 0x15d862c));
    }
    return uVar1;
  }
  uVar1 = F_00cccd90(&REFG(undefined, 0x15d8644) GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00cc2740 */
GEN_LIB GEN_NOFRAME float F_00cc2740(void)
{
  GEN_ENTER(0xcc2740u, 0u, 0u, 0u, 0u);
  return *(float *)&REFG(undefined, 0x134c6f8);
}

/* ref: FUN_00cc2750 */
GEN_LIB GEN_FRAME uint F_00cc2750(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc2750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x134c6fc) = param_1;
  return param_1;
}

/* ref: FUN_00cc2760 */
GEN_LIB GEN_NOFRAME uint F_00cc2760(void)
{
  GEN_ENTER(0xcc2760u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x134c6fc);
}

/* ref: FUN_00cc2770 */
GEN_LIB GEN_FRAME uint F_00cc2770(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc2770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_8;
  
  iVar1 = 0;
  if (param_2 == 0) {
    return REFG(undefined4, 0x15d862c);
  }
  if (param_1 != 0) {
    uVar2 = 0;
    local_8 = 0;
    iVar3 = param_1;
    if (0 < (int)REFG(undefined4, 0x15d862c)) {
      do {
        if (param_2 <= uVar2) {
          return local_8;
        }
        F_00cd7180(((undefined *)GEN_TOP((iVar1 + REFG(int, 0x15d8630)))) GEN_EDX_ARG,iVar3);
        local_8 = local_8 + 1;
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x24;
        iVar1 = iVar1 + 0x278;
      } while ((int)uVar2 < (int)REFG(undefined4, 0x15d862c));
    }
    return local_8;
  }
  return 0;
}

/* ref: FUN_00cc27e0 */
GEN_LIB GEN_NOFRAME uint F_00cc27e0(void)
{
  GEN_ENTER(0xcc27e0u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  uint uVar3;
  uint extraout_EAX = 0;
  int in_ecx;
  
  if (REFG(int, 0x15d8630) != 0) {
    iVar2 = *((int *)GEN_TOP((REFG(int, 0x15d8630) - 4)));
    iVar1 = REFG(int, 0x15d8630) - 4;
    in_ecx = iVar2 * 0x278 + REFG(int, 0x15d8630);
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      in_ecx = in_ecx - 0x278;
      F_00cd6180(in_ecx GEN_EDX_ARG);
    }
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  REFG(char, 0x15d8698) = REFG(char, 0x15d867c);
  if (REFG(char, 0x15d867c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  }
  uVar3 = 0;
  if (REFG(int, 0x15d8668) != 0) {
    uVar3 = F_00406810(REFG(int, 0x15d8668));
    REFG(int, 0x15d8668) = 0;
  }
  REFG(undefined4, 0x15d866c) = 0;
  if (REFG(char, 0x15d8698) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
    uVar3 = extraout_EAX;
  }
  return uVar3;
}

/* ref: FUN_00cc2880 */
GEN_LIB GEN_FRAME uint F_00cc2880(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc2880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x6c))))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc2900 */
GEN_LIB GEN_FRAME uint F_00cc2900(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc2900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x70))))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc2980 */
GEN_LIB GEN_FRAME uint F_00cc2980(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc2980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x74))))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc2a00 */
GEN_LIB GEN_FRAME uint F_00cc2a00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc2a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x78))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc2aa0 */
GEN_LIB GEN_FRAME byte F_00cc2aa0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc2aa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined * this;
  undefined4 * puVar4;
  int iVar5;
  
  iVar2 = param_1;
  puVar4 = param_2;
  if (0 < param_1) {
    for (; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  iVar2 = 0;
  if (0 < param_1) {
    do {
      iVar3 = 0;
      if (REFG(int, 0x15d862c) < 1) {
LAB_00cc2b0a: ;
        iVar2 = 0;
        do {
          if (param_2[iVar2] == 0) {
            return 0;
          }
          F_00cd8630(param_2[iVar2] GEN_EDX_ARG);
          param_2[iVar2] = 0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_1);
        return 0;
      }
      iVar5 = 0;
      while ((bVar1 = F_00cd6590(iVar5 + REFG(int, 0x15d8630) GEN_EDX_ARG), bVar1 == 0 ||
             ((param_3 == '\0' && ((*((uint *)GEN_TOP((iVar5 + 0x24c + REFG(int, 0x15d8630)))) >> 6 & 1) != 0))))) {
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x278;
        if (REFG(int, 0x15d862c) <= iVar3) goto LAB_00cc2b0a;
      }
      this = ((undefined *)GEN_TOP((iVar3 * 0x278 + REFG(int, 0x15d8630))));
      if (this == ((undefined *)GEN_TOP(0x0))) goto LAB_00cc2b0a;
      F_00cd85d0(this GEN_EDX_ARG);
      param_2[iVar2] = this;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  return 1;
}

/* ref: FUN_00cc2b60 */
GEN_LIB GEN_FRAME byte F_00cc2b60(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc2b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0)));
  while( true ) {
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      if (REFG(char, 0x15d86b4) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
      }
      return 0;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x144))))(piVar1 GEN_EDX_ARG,param_1);
    if (((char)uVar2 != '\0') &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x138))))(piVar1 GEN_EDX_ARG), (char)uVar2 == '\0')) break;
    piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)));
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 1;
}

/* ref: FUN_00cc2c00 */
GEN_LIB GEN_FRAME byte F_00cc2c00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc2c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return 1;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc2c90 */
GEN_LIB GEN_FRAME uint F_00cc2c90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc2c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
          F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
        }
        if (REFG(char, 0x15d7798) != '\0') {
          if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
            F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
          }
          F_00ccaea0(&REFG(char, 0x15d7798) GEN_EDX_ARG,piVar3);
        }
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 3;
}

/* ref: FUN_00cc2d80 */
GEN_LIB GEN_FRAME uint F_00cc2d80(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc2d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG,param_2);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 3;
}

/* ref: FUN_00cc2e20 */
GEN_LIB GEN_FRAME byte F_00cc2e20(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc2e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,param_2);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc2ec0 */
GEN_LIB GEN_FRAME uint F_00cc2ec0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc2ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc2f40 */
GEN_LIB GEN_FRAME uint F_00cc2f40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc2f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x30))))(piVar3 GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc2fc0 */
GEN_LIB GEN_FRAME uint F_00cc2fc0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc2fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3040 */
GEN_LIB GEN_FRAME uint F_00cc3040(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc3040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x20))))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc30c0 */
GEN_LIB GEN_FRAME byte F_00cc30c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc30c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x134))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3160 */
GEN_LIB GEN_FRAME byte F_00cc3160(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc3160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x13c))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3200 */
GEN_LIB GEN_FRAME uint F_00cc3200(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc3200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xdc))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc32a0 */
GEN_LIB GEN_FRAME unsigned int F_00cc32a0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc32a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  REFG(char, 0x15d8698) = REFG(char, 0x15d867c);
  if (REFG(char, 0x15d867c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  }
  *param_1 = REFG(undefined4 * PTR32, 0x15d866c);
  REFG(undefined4 * PTR32, 0x15d866c) = param_1;
  if (REFG(char, 0x15d8698) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  }
  return 0;
}

/* ref: FUN_00cc32f0 */
GEN_LIB GEN_FRAME uint F_00cc32f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc32f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  int * piVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  uVar1 = gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d869c));
  if (REFG(int, 0x15d863c) != 0) {
    piVar2 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0)));
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,param_1);
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x138))))(piVar2 GEN_EDX_ARG);
      if ((char)uVar1 == '\0') {
        piVar2 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar2)));
      }
      else {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,0);
        REFG(char, 0x15d8698) = REFG(char, 0x15d867c);
        if (REFG(char, 0x15d867c) != '\0') {
          gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8680));
        }
        *piVar2 = (int)REFG(int * PTR32, 0x15d866c);
        REFG(int * PTR32, 0x15d866c) = piVar2;
        if (REFG(char, 0x15d8698) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
        }
        piVar2 = ((int *)GEN_TOP(F_00d2ff30(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar2)));
      }
    } while (piVar2 != ((int *)GEN_TOP(0x0)));
    uVar1 = 0;
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00cc33c0 */
GEN_LIB GEN_NOFRAME uint F_00cc33c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc33c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar1 != ((int *)GEN_TOP(0x0));
      piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14c))))(piVar1 GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc3430 */
GEN_LIB GEN_FRAME unsigned int F_00cc3430(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc3430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  int iVar2;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  iVar1 = 0;
  if (0 < REFG(int, 0x15d862c)) {
    iVar2 = 0;
    do {
      F_00cd9d70(((undefined *)GEN_TOP((iVar2 + REFG(int, 0x15d8630)))) GEN_EDX_ARG,param_1);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x278;
    } while (iVar1 < REFG(int, 0x15d862c));
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return;
}

/* ref: FUN_00cc3490 */
GEN_LIB GEN_FRAME unsigned int F_00cc3490(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc3490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00cc32f0(param_1);
  F_00cc3430(param_1);
  return;
}

/* ref: FUN_00cc34b0 */
GEN_LIB GEN_FRAME uint F_00cc34b0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc34b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x38))))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3530 */
GEN_LIB GEN_FRAME uint F_00cc3530(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcc3530u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x3c))))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3,param_4)
      ;
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc35c0 */
GEN_LIB GEN_FRAME uint F_00cc35c0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc35c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x44))))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3640 */
GEN_LIB GEN_FRAME uint F_00cc3640(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcc3640u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc36c0 */
GEN_LIB GEN_FRAME uint F_00cc36c0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcc36c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 100))))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3740 */
GEN_LIB GEN_FRAME uint F_00cc3740(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc3740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc37c0 */
GEN_LIB GEN_FRAME uint F_00cc37c0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc37c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x198))))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3840 */
GEN_LIB GEN_FRAME uint F_00cc3840(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc3840u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x54))))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc38c0 */
GEN_LIB GEN_FRAME uint F_00cc38c0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc38c0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3940 */
GEN_LIB GEN_FRAME uint F_00cc3940(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcc3940u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x68))))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc39c0 */
GEN_LIB GEN_FRAME uint F_00cc39c0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcc39c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3a40 */
GEN_LIB GEN_FRAME uint F_00cc3a40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc3a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xd4))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0xffffffff;
}

/* ref: FUN_00cc3ae0 */
GEN_LIB GEN_FRAME uint F_00cc3ae0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc3ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xd8))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0xffffffff;
}

/* ref: FUN_00cc3b80 */
GEN_LIB GEN_FRAME uint F_00cc3b80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc3b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_2) {
    piVar3 = ((int *)GEN_TOP(((param_2 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_2);
      if ((char)uVar2 != '\0') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe0))))(piVar3 GEN_EDX_ARG,param_1);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (uint)param_1;
      }
    }
  }
  *param_1 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return (uint)param_1;
}

/* ref: FUN_00cc3c20 */
GEN_LIB GEN_FRAME uint F_00cc3c20(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc3c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x7c))))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3ca0 */
GEN_LIB GEN_FRAME byte F_00cc3ca0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc3ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x154))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3d40 */
GEN_LIB GEN_FRAME uint F_00cc3d40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc3d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x158))))(piVar3 GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3dc0 */
GEN_LIB GEN_FRAME uint F_00cc3dc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc3dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xa4))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3e60 */
GEN_LIB GEN_FRAME uint F_00cc3e60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc3e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xbc))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3f00 */
GEN_LIB GEN_FRAME uint F_00cc3f00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc3f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe4))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3fa0 */
GEN_LIB GEN_FRAME byte F_00cc3fa0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc3fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xf0))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4040 */
GEN_LIB GEN_FRAME uint F_00cc4040(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc4040u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x80))))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc40d0 */
GEN_LIB GEN_FRAME float10 F_00cc40d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc40d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  float10 extraout_ST0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe8))))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (float10)(float)extraout_ST0;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return (float10)0;
}

/* ref: FUN_00cc4170 */
GEN_LIB GEN_FRAME uint F_00cc4170(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc4170u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar1 != ((int *)GEN_TOP(0x0));
      piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x144))))(piVar1 GEN_EDX_ARG,param_1);
    if ((char)uVar2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x80))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc41f0 */
GEN_LIB GEN_FRAME uint F_00cc41f0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc41f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x84))))(piVar3 GEN_EDX_ARG,param_2,0);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc4270 */
GEN_LIB GEN_FRAME uint F_00cc4270(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc4270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x34))))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc42f0 */
GEN_LIB_GS GEN_FRAME uint F_00cc42f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc42f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_GS(0x1c, 4, 4);
  float10 fVar1;
  int * piVar2;
  uint uVar3;
  uint extraout_EAX = 0;
  float10 fVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x14)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18));
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar2 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar2 != ((int *)GEN_TOP(0x0));
      piVar2 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar2)))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xec))))(piVar2 GEN_EDX_ARG);
    if (uVar3 == 0xe) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 300))))(piVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      if ((char)uVar3 == '\0') {
        (*(uint *)(gen_frame + 0x8)) = 0x32000f;
      }
      (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)(int)(*((int *)GEN_TOP((param_1 + 4))) - ((*(uint *)(gen_frame + 0x8)) & 0xffff)) /
                        (float10)(int)(((*(uint *)(gen_frame + 0x8)) >> 0x10) - ((*(uint *)(gen_frame + 0x8)) & 0xffff)))));
      fVar1 = (float10)0;
      fVar4 = (float10)(*(float *)(gen_frame + 0x0));
      if (!(fVar1 <= fVar4) == (GEN_ISNAN(fVar4) || GEN_ISNAN(fVar1))) {
        fVar1 = (float10)1;
        if (!(fVar4 <= fVar1) != (GEN_ISNAN(fVar1) || GEN_ISNAN(fVar4))) {
          (*(float *)(gen_frame + 0x0)) = (float)fVar1;
        }
      }
      else {
        (*(float *)(gen_frame + 0x0)) = (float)fVar1;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x80))))(piVar2 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x0))),0);
    }
  }
  uVar3 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar3 = extraout_EAX;
  }
  return uVar3;
}

/* ref: FUN_00cc4400 */
GEN_LIB_GS GEN_FRAME uint F_00cc4400(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc4400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  float10 fVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_2) {
    piVar4 = ((int *)GEN_TOP(((param_2 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar2 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar4);
    if ((bVar2 != 0) &&
       (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x140))))(piVar4 GEN_EDX_ARG,param_2), (char)uVar3 != '\0')) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xfc))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    }
  }
  fVar1 = (float10)0;
  *param_1 = (float)fVar1;
  param_1[1] = (float)fVar1;
  param_1[2] = (float)fVar1;
  param_1[3] = (float)(float10)1;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return (uint)param_1;
}

/* ref: FUN_00cc44b0 */
GEN_LIB GEN_FRAME float10 F_00cc44b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc44b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  float fVar5;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar4 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar4);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x140))))(piVar4 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xf8))))(piVar4 GEN_EDX_ARG);
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xf4))))(piVar4 GEN_EDX_ARG);
        fVar5 = F_00cc83a0(uVar3,uVar2);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (float10)fVar5;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return (float10)0;
}

/* ref: FUN_00cc4560 */
GEN_LIB GEN_FRAME float10 F_00cc4560(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc4560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  float10 extraout_ST0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10c))))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (float10)(float)extraout_ST0;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return (float10)0;
}

/* ref: FUN_00cc4600 */
GEN_LIB GEN_FRAME float10 F_00cc4600(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc4600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  float10 extraout_ST0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x110))))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (float10)(float)extraout_ST0;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return (float10)0;
}

/* ref: FUN_00cc46a0 */
GEN_LIB GEN_FRAME uint F_00cc46a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc46a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x114))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4740 */
GEN_LIB GEN_FRAME uint F_00cc4740(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc4740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x8c))))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc47c0 */
GEN_LIB GEN_FRAME uint F_00cc47c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc47c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x90))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4860 */
GEN_LIB GEN_FRAME uint F_00cc4860(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcc4860u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x94))))
                        (piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
                         param_4);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc48f0 */
GEN_LIB GEN_FRAME uint F_00cc48f0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcc48f0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x98))))
                        (piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
                         param_4);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc4980 */
GEN_LIB GEN_FRAME uint F_00cc4980(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc4980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x11c))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4a20 */
GEN_LIB GEN_FRAME uint F_00cc4a20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc4a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined8 uVar4;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x118))))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (uint)uVar4;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4ac0 */
GEN_LIB GEN_FRAME uint F_00cc4ac0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc4ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x120))))(piVar3 GEN_EDX_ARG,param_2);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0xffffffff;
}

/* ref: FUN_00cc4b60 */
GEN_LIB GEN_FRAME byte F_00cc4b60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc4b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc0))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4c00 */
GEN_LIB GEN_FRAME byte F_00cc4c00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc4c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x15c))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4ca0 */
GEN_LIB GEN_FRAME uint F_00cc4ca0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc4ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xa0))))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc4d20 */
GEN_LIB GEN_FRAME uint F_00cc4d20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc4d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xf4))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4dc0 */
GEN_LIB GEN_FRAME uint F_00cc4dc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc4dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xf8))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0xffffffff;
}

/* ref: FUN_00cc4e60 */
GEN_LIB GEN_FRAME uint F_00cc4e60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc4e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar1 != ((int *)GEN_TOP(0x0));
      piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x144))))(piVar1 GEN_EDX_ARG,param_1);
    if ((char)uVar2 != '\0') {
      if (param_2 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_ARG,1);
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,param_2);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc4ef0 */
GEN_LIB GEN_FRAME uint F_00cc4ef0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc4ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  int * piVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  uVar1 = gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d869c));
  if (REFG(int, 0x15d863c) != 0) {
    piVar2 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0)));
    do {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x144))))(piVar2 GEN_EDX_ARG,param_1);
      if ((char)uVar1 == '\0') {
LAB_00cc4fa7: ;
        piVar2 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar2)));
      }
      else {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG);
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x138))))(piVar2 GEN_EDX_ARG);
        if ((char)uVar1 == '\0') goto LAB_00cc4fa7;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,0);
        REFG(char, 0x15d8698) = REFG(char, 0x15d867c);
        if (REFG(char, 0x15d867c) != '\0') {
          gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8680));
        }
        *piVar2 = (int)REFG(int * PTR32, 0x15d866c);
        REFG(int * PTR32, 0x15d866c) = piVar2;
        if (REFG(char, 0x15d8698) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
        }
        piVar2 = ((int *)GEN_TOP(F_00d2ff30(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar2)));
      }
    } while (piVar2 != ((int *)GEN_TOP(0x0)));
    uVar1 = 0;
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00cc4fe0 */
GEN_LIB GEN_FRAME uint F_00cc4fe0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc4fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar1 != ((int *)GEN_TOP(0x0));
      piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x144))))(piVar1 GEN_EDX_ARG,param_1);
    if ((char)uVar2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,param_2);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc5060 */
GEN_LIB GEN_FRAME uint F_00cc5060(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc5060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar1 != ((int *)GEN_TOP(0x0));
      piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x144))))(piVar1 GEN_EDX_ARG,param_1);
    if ((char)uVar2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG,param_2);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc50e0 */
GEN_LIB GEN_FRAME uint F_00cc50e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc50e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar1 != ((int *)GEN_TOP(0x0));
      piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x144))))(piVar1 GEN_EDX_ARG,param_1);
    if ((char)uVar2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc5160 */
GEN_LIB GEN_FRAME byte F_00cc5160(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc5160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0)));
  while( true ) {
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      if (REFG(char, 0x15d86b4) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
      }
      return 0;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x144))))(piVar1 GEN_EDX_ARG,param_1);
    if (((char)uVar2 != '\0') && (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xdc))))(piVar1 GEN_EDX_ARG), (uVar2 & 8) != 0))
    break;
    piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)));
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 1;
}

/* ref: FUN_00cc5200 */
GEN_LIB GEN_FRAME byte F_00cc5200(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc5200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x150))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc52a0 */
GEN_LIB GEN_FRAME uint F_00cc52a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc52a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar1 != ((int *)GEN_TOP(0x0));
      piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)))) {
    if (param_1 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_ARG,1);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,param_1);
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc5320 */
GEN_LIB GEN_NOFRAME byte F_00cc5320(void)
{
  GEN_ENTER(0xcc5320u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0)));
  while( true ) {
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      if (REFG(char, 0x15d86b4) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
      }
      return 1;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x138))))(piVar1 GEN_EDX_ARG);
    if ((char)uVar2 == '\0') break;
    piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)));
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc53a0 */
GEN_LIB GEN_FRAME uint F_00cc53a0(GEN_P(char param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc53a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int * piVar1;
  int * piVar2;
  int * extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0)));
  piVar2 = piVar1;
  if (param_1 == '\0') {
    while (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,param_2,param_3);
      piVar2 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar2)));
      piVar1 = ((int *)GEN_TOP(0x0));
    }
  }
  else if (piVar1 != ((int *)GEN_TOP(0x0))) {
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG,param_2,param_3);
      piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)));
    } while (piVar1 != ((int *)GEN_TOP(0x0)));
    piVar1 = ((int *)GEN_TOP(0x0));
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    piVar1 = extraout_EAX;
  }
  return (uint)piVar1;
}

/* ref: FUN_00cc5440 */
GEN_LIB GEN_FRAME uint F_00cc5440(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc5440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar1 != ((int *)GEN_TOP(0x0));
      piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x134))))(piVar1 GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xf4))))(piVar1 GEN_EDX_ARG);
      iVar3 = 0;
      if (0 < (int)uVar4) {
        do {
          if (*((uint *)GEN_TOP((param_1 + iVar3 * 4))) == uVar2) goto LAB_00cc54a5;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)uVar4);
      }
      *((uint *)GEN_TOP((param_1 + uVar4 * 4))) = uVar2;
      uVar4 = uVar4 + 1;
      if (param_2 <= (int)uVar4) break;
    }
LAB_00cc54a5: ;
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return uVar4;
}

/* ref: FUN_00cc54e0 */
GEN_LIB GEN_NOFRAME uint F_00cc54e0(void)
{
  GEN_ENTER(0xcc54e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar1 = REFG(undefined4, 0x15d863c);
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return uVar1;
}

/* ref: FUN_00cc5520 */
GEN_LIB GEN_FRAME uint F_00cc5520(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc5520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    REFG(char, 0x15d86b4) = '\x01';
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar1 = F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0);
    for (uVar2 = 0; (uVar1 != 0 && (uVar2 < param_2)); uVar2 = uVar2 + 1) {
      *((uint *)GEN_TOP((param_1 + uVar2 * 4))) = uVar1;
      uVar1 = F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,uVar1);
    }
    if (REFG(char, 0x15d86b4) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    }
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00cc5590 */
GEN_LIB GEN_FRAME uint F_00cc5590(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc5590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x188))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc5630 */
GEN_LIB GEN_FRAME byte F_00cc5630(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc5630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xdc))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2 & 1;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc56d0 */
GEN_LIB GEN_FRAME byte F_00cc56d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc56d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int * piVar4;
  
  bVar3 = 1;
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar4 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar4);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x140))))(piVar4 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xdc))))(piVar4 GEN_EDX_ARG);
        if ((uVar2 & 0x28) == 0) {
          bVar3 = 0;
        }
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return bVar3;
}

/* ref: FUN_00cc5760 */
GEN_LIB GEN_FRAME uint F_00cc5760(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc5760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 400))))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc5800 */
GEN_LIB GEN_FRAME uint F_00cc5800(void)
{
  GEN_ENTER(0xcc5800u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  uint uVar2;
  undefined * this;
  uint extraout_EAX = 0;
  uint in_ECX = 0;
  byte bVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0)));
  while (piVar1 != ((int *)GEN_TOP(0x0))) {
    bVar3 = 0;
    (*(uint *)(gen_frame + 0x0)) = in_ECX & 0xffffff00;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc4))))(piVar1 GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      do {
        this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xcc))))(piVar1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)))));
        F_00cd6e40(this GEN_EDX_ARG);
        bVar3 = bVar3 + 1;
        (*(uint *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3),bVar3);
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc4))))(piVar1 GEN_EDX_ARG);
      } while (bVar3 < (byte)uVar2);
    }
    piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)));
    in_ECX = (*(uint *)(gen_frame + 0x0));
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc58a0 */
GEN_LIB GEN_FRAME byte F_00cc58a0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc58a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x140))))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x194))))(piVar3 GEN_EDX_ARG,param_2);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc5940 */
GEN_LIB_GS GEN_FRAME uint F_00cc5940(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc5940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_GS(0x114, 12, 4);
  char cVar1;
  int iVar2;
  byte bVar3;
  char * pcVar4;
  uint uVar5;
  int * piVar6;
  undefined4 * puVar7;
  uint uVar8;
  int iVar9;
  char * pcVar10;
  float10 extraout_ST0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110));
  (*(int *)(gen_frame + 0x4)) = param_1;
  F_00c4720f(((char *)(gen_frame + 0xc)),((char *)REFP(0x112a530)));
  pcVar4 = ((char *)(gen_frame + 0xc));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0xc));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0xc));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  (*(int *)(gen_frame + 0x8)) = 0;
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar6 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0))); piVar6 != ((int *)GEN_TOP(0x0));
      piVar6 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar6)))) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xdc))))(piVar6 GEN_EDX_ARG);
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x13c))))(uVar5);
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x138))))(uVar5 & 0xff);
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x150))))(uVar5 & 0xff);
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xd0))))(uVar5 & 0xff);
    F_00c4720f(((char *)(gen_frame + 0xc)),((char *)REFP(0x112a53c)),(*(int *)(gen_frame + 0x8)),uVar5);
    pcVar4 = ((char *)(gen_frame + 0xc));
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0xc));
    pcVar4 = ((char *)GEN_TOP(((*(int *)(gen_frame + 0x4)) - 1)));
    do {
      pcVar10 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar10 != '\0');
    pcVar10 = ((char *)(gen_frame + 0xc));
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar4 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar4 = pcVar4 + 1;
    }
    puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xe0))))(piVar6 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)))));
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x10c))))(piVar6);
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xa4))))
                      (*puVar7,(int)(ulonglong)gen_d2bits((double)extraout_ST0),
                       (int)((ulonglong)gen_d2bits((double)extraout_ST0) >> 0x20));
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xf4))))(uVar5);
    F_00c4720f(((char *)(gen_frame + 0xc)),((char *)REFP(0x112a56c)),uVar5);
    pcVar4 = ((char *)(gen_frame + 0xc));
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0xc));
    pcVar4 = ((char *)GEN_TOP(((*(int *)(gen_frame + 0x4)) - 1)));
    do {
      pcVar10 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar10 != '\0');
    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
    pcVar10 = ((char *)(gen_frame + 0xc));
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar4 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar4 = pcVar4 + 1;
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  F_00c4720f(((char *)(gen_frame + 0xc)),((char *)REFP(0x112a590)),(*(int *)(gen_frame + 0x8)));
  iVar2 = (*(int *)(gen_frame + 0x4));
  pcVar4 = ((char *)(gen_frame + 0xc));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0xc));
  pcVar4 = ((char *)GEN_TOP(((*(int *)(gen_frame + 0x4)) - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0xc));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0xc)),((char *)REFP(0x112a5ac)));
  pcVar4 = ((char *)(gen_frame + 0xc));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0xc));
  pcVar4 = ((char *)GEN_TOP((iVar2 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0xc));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  (*(int *)(gen_frame + 0x8)) = 0;
  F_00c4720f(((char *)(gen_frame + 0xc)),((char *)REFP(0x112a5b8)));
  pcVar4 = ((char *)(gen_frame + 0xc));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0xc));
  pcVar4 = ((char *)GEN_TOP((iVar2 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0xc));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  if (0 < REFG(int, 0x15d862c)) {
    (*(int *)(gen_frame + 0x4)) = 0;
    do {
      iVar9 = (*(int *)(gen_frame + 0x0));
      bVar3 = F_00cd6590((*(int *)(gen_frame + 0x4)) + REFG(int, 0x15d8630) GEN_EDX_ARG);
      if (bVar3 == 0) {
        F_00c4720f(((char *)(gen_frame + 0xc)),&REFG(undefined, 0x112a5c4),iVar9);
        pcVar4 = ((char *)(gen_frame + 0xc));
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0xc));
        pcVar4 = ((char *)GEN_TOP((iVar2 - 1)));
        do {
          pcVar10 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar10 != '\0');
        pcVar10 = ((char *)(gen_frame + 0xc));
        for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar4 = pcVar4 + 4;
        }
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
        for (uVar5 = uVar5 & 3; iVar9 = (*(int *)(gen_frame + 0x0)), uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar4 = pcVar4 + 1;
        }
      }
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 0x278;
      (*(int *)(gen_frame + 0x0)) = iVar9 + 1;
    } while (iVar9 + 1 < REFG(int, 0x15d862c));
  }
  F_00c4720f(((char *)(gen_frame + 0xc)),((char *)REFP(0x112a5c8)),(*(int *)(gen_frame + 0x8)),REFG(int, 0x15d862c));
  pcVar4 = ((char *)(gen_frame + 0xc));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar10 = ((char *)GEN_TOP((iVar2 - 1)));
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0xc));
  do {
    pcVar4 = pcVar10 + 1;
    pcVar10 = pcVar10 + 1;
  } while (*pcVar4 != '\0');
  pcVar4 = ((char *)(gen_frame + 0xc));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar10 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar10 = pcVar10 + 1;
  }
  return uVar5;
}

/* ref: FUN_00cc5d00 */
GEN_LIB GEN_FRAME uint F_00cc5d00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc5d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cc53a0((undefined1)param_1,0,param_2);
  return uVar1;
}

/* ref: FUN_00cc5d20 */
GEN_LIB_GS GEN_FRAME uint F_00cc5d20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcc5d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112a600)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112a5e0)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00cc5dc0 */
GEN_LIB GEN_FRAME unsigned int F_00cc5dc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc5dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_TOP(0x3c, 4, 4);
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint * this;
  int iVar6;
  int iVar7;
  
  ((int *)(gen_frame + 0x10))[9] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38);
  (*(int *)(gen_frame + 0x8)) = param_1;
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if (REFG(char, 0x15d7798) == '\0') {
    uVar3 = *((uint *)GEN_TOP((param_1 + 4)));
  }
  else {
    uVar3 = REFG(undefined4, 0x15d860c);
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
      uVar3 = REFG(undefined4, 0x15d860c);
    }
  }
  REFG(undefined4, 0x15d862c) = uVar3;
  uVar4 = -(uint)((int)((ulonglong)uVar3 * 0x278 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0x278);
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  puVar2 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,-(uint)(0xfffffffb < uVar4) | uVar4 + 4,
                              "CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (puVar2 == ((uint *)GEN_TOP(0x0))) {
    REFG(uint * PTR32, 0x15d8630) = ((uint *)GEN_TOP(0x0));
    iVar6 = param_1;
    puVar1 = REFG(uint * PTR32, 0x15d8630);
  }
  else {
    *puVar2 = uVar3;
    this = puVar2 + 1;
    iVar6 = (*(int *)(gen_frame + 0x8));
    while (uVar3 = uVar3 - 1, puVar1 = puVar2 + 1, (*(int *)(gen_frame + 0x8)) = iVar6, -1 < (int)uVar3) {
      F_00cd7250(this GEN_EDX_ARG);
      this = this + 0x9e;
      iVar6 = (*(int *)(gen_frame + 0x8));
    }
  }
  REFG(uint * PTR32, 0x15d8630) = puVar1;
  uVar3 = *((uint *)GEN_TOP((iVar6 + 0x40))) & ((int)*((uint *)GEN_TOP((iVar6 + 0x40))) < 0) - 1;
  if (*((char *)GEN_TOP((iVar6 + 0x1bf))) == '\0') {
    uVar3 = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x4)) = uVar3;
    puVar2 = &REFG(undefined4, 0x15d862c);
    if ((int)uVar3 <= (int)REFG(undefined4, 0x15d862c)) {
      puVar2 = &(*(uint *)(gen_frame + 0x4));
    }
    uVar3 = *puVar2;
  }
  iVar6 = 0;
  if (0 < (int)REFG(undefined4, 0x15d862c)) {
    iVar7 = 0;
    do {
      F_00cd61f0(iVar7 + (int)REFG(uint * PTR32, 0x15d8630) GEN_EDX_ARG,iVar6,*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x10))),
                   iVar6 < (int)uVar3);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x278;
    } while (iVar6 < (int)REFG(undefined4, 0x15d862c));
  }
  F_00d2fdb0(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0x188);
  iVar6 = 0x398;
  ((int *)(gen_frame + 0x10))[1] = 0x420;
  ((int *)(gen_frame + 0x10))[3] = 0x420;
  ((int *)(gen_frame + 0x10))[5] = 0x3a8;
  ((int *)(gen_frame + 0x10))[6] = 0x3a8;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x398;
  ((int *)(gen_frame + 0x10))[0] = 0x398;
  ((int *)(gen_frame + 0x10))[2] = 0x430;
  ((int *)(gen_frame + 0x10))[4] = 0x398;
  ((int *)(gen_frame + 0x10))[7] = 0x398;
  ((int *)(gen_frame + 0x10))[8] = 0;
  iVar7 = 0x398;
  iVar5 = 1;
  do {
    if (iVar7 < iVar6) {
      iVar7 = iVar6;
    }
    iVar6 = ((int *)(gen_frame + 0x10))[(int)(iVar5)];
    iVar5 = iVar5 + 1;
  } while (iVar6 != 0);
  (*(char * PTR32 *)(gen_frame + 0x0)) = "CDev.Engine.Sd.SoundDriver";
  (*(uint *)(gen_frame + 0x4)) = 0x10;
  F_00cc6930(&REFG(undefined4, 0x15d8668) GEN_EDX_ARG,iVar7,REFG(undefined4, 0x15d862c),&(*(char * PTR32 *)(gen_frame + 0x0)),0x10,1);
  return;
}

/* ref: FUN_00cc5fc0 */
GEN_LIB GEN_FRAME uint F_00cc5fc0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcc5fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_FRAME_DECL_TOP(0x9c, 4, 4);
  undefined4 uVar1;
  undefined4 * puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  undefined1 uVar10;
  
  piVar7 = ((int *)GEN_TOP(0x0));
  REFG(char, 0x15d8698) = REFG(char, 0x15d867c);
  if (REFG(char, 0x15d867c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  }
  puVar2 = REFG(undefined4 * PTR32, 0x15d866c);
  if (REFG(undefined4 * PTR32, 0x15d866c) == ((undefined4 *)GEN_TOP(0x0))) {
    if (REFG(char, 0x15d8698) == '\0') {
      return 0;
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
    return 0;
  }
  uVar1 = *REFG(undefined4 * PTR32, 0x15d866c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = REFG(undefined4 * PTR32, 0x15d866c);
  REFG(undefined4 * PTR32, 0x15d866c) = ((undefined4 *)GEN_TOP(uVar1));
  if (REFG(char, 0x15d8698) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  }
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar4 = (uint)((int)puVar2 - *(int *)&REFG(undefined, 0x15d8670)) / REFG(undefined4, 0x15d8674);
  uVar5 = F_00cc1d90();
  uVar4 = uVar5 << 9 | uVar4;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  if (uVar5 == 3) {
    (*(uint *)(gen_frame + 0x80)) = 0;
    (*(uint *)(gen_frame + 0x84)) = 0;
    (*(uint *)(gen_frame + 0x88)) = 0;
    (*(uint *)(gen_frame + 0x8c)) = 0;
    F_00cde2f0(&(*(undefined1 *)(gen_frame + 0x93)) GEN_EDX_ARG);
    bVar3 = F_00cc2aa0(4,&(*(uint *)(gen_frame + 0x80)),0);
    if (bVar3 == 0) {
      F_00cc6810(&REFG(undefined4, 0x15d8668) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x94)));
      return 0;
    }
    piVar7 = ((int *)GEN_TOP(F_00cded50((*(undefined4 * PTR32 *)(gen_frame + 0x94)) GEN_EDX_ARG,uVar4,param_1,&(*(uint *)(gen_frame + 0x80)),4,param_3,&(*(undefined1 *)(gen_frame + 0x93)),param_4)));
    goto LAB_00cc60c8;
  }
  if ((*(byte *)(param_1 + 0x12) & 8) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x88))))(param_1 GEN_EDX_ARG);
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc5d20));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112a4a8))
                    ,"",((char *)REFP(0x112a494)),0x161,
                    ((char *)REFP(0x112a40c)));
    goto LAB_00cc60c8;
  }
  uVar5 = *param_2;
  (*(uint *)(gen_frame + 0x84)) = param_2[1];
  uVar8 = param_2[3];
  (*(uint *)(gen_frame + 0x88)) = param_2[2];
  (*(uint *)(gen_frame + 0x80)) = uVar5;
  (*(uint *)(gen_frame + 0x8c)) = uVar8;
  cVar6 = (char)(uVar5 >> 0x18);
  if (cVar6 == -0x80) {
LAB_00cc61ff: ;
    F_00cc6810(&REFG(undefined4, 0x15d8668) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x94)));
    return 0;
  }
  uVar8 = 1;
  if (((1 < (byte)uVar5) && (cVar6 != '\x02')) && (cVar6 != '\x05')) {
    uVar8 = uVar5 & 0xff;
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x4)),0,0x7c);
  bVar3 = F_00cc2aa0(uVar8,&(*(int *)(gen_frame + 0x0)),0);
  if (bVar3 == 0) goto LAB_00cc61ff;
  uVar10 = (undefined1)param_4;
  switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x80)) >> 0x18)) {
  case 1: ;
  case 0xf: ;
    piVar7 = ((int *)GEN_TOP(F_00cd38f0((*(undefined4 * PTR32 *)(gen_frame + 0x94)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x0)),uVar8,1,param_3,uVar10)));
    break;
  case 2: ;
  case 0xc: ;
    piVar7 = ((int *)GEN_TOP(F_00cdd250((*(undefined4 * PTR32 *)(gen_frame + 0x94)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x0)),uVar8,param_3,param_4)));
    break;
  case 3: ;
    piVar7 = ((int *)GEN_TOP(F_00cde150((*(undefined4 * PTR32 *)(gen_frame + 0x94)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x0)),uVar8,1,param_3,param_4)));
    break;
  case 4: ;
    piVar7 = ((int *)GEN_TOP(F_00cdcb70((*(undefined4 * PTR32 *)(gen_frame + 0x94)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x0)),uVar8,param_3,param_4)));
    break;
  case 5: ;
  case 0xd: ;
    piVar7 = ((int *)GEN_TOP(F_00cdc690((*(undefined4 * PTR32 *)(gen_frame + 0x94)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x0)),uVar8,param_3,param_4)));
    break;
  case 6: ;
    piVar7 = ((int *)GEN_TOP(F_00cdda70((*(undefined4 * PTR32 *)(gen_frame + 0x94)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x0)),uVar8,(char)param_3,uVar10)))
    ;
    break;
  case 7: ;
    piVar7 = ((int *)GEN_TOP(F_00cddc70((*(undefined4 * PTR32 *)(gen_frame + 0x94)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x0)),uVar8,param_3,param_4)));
    break;
  default: ;
    goto LAB_00cc6384;
  case 0xb: ;
    piVar7 = ((int *)GEN_TOP(F_00cd38f0((*(undefined4 * PTR32 *)(gen_frame + 0x94)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x0)),uVar8,1,param_3,uVar10)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x1a4))))(piVar7 GEN_EDX_ARG);
    break;
  case 0xe: ;
    piVar7 = ((int *)GEN_TOP(F_00cdc550((*(undefined4 * PTR32 *)(gen_frame + 0x94)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x0)),uVar8,param_3,param_4)));
    break;
  case 0x10: ;
LAB_00cc6384: ;
    F_00cc6810(&REFG(undefined4, 0x15d8668) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x94)));
    iVar9 = 0;
    if (uVar8 != 0) {
      do {
        if (*(int *)(((undefined1 *)(gen_frame + 0x4)) + iVar9 * 4 - 4) != 0) {
          F_00cd8630(*(int *)(((undefined1 *)(gen_frame + 0x4)) + iVar9 * 4 - 4) GEN_EDX_ARG);
          *(undefined4 *)(((undefined1 *)(gen_frame + 0x4)) + iVar9 * 4 - 4) = 0;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar8);
    }
    return 0;
  }
LAB_00cc60c8: ;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  F_00d2fe00(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar7);
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  if (piVar7 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x1a8))))(piVar7 GEN_EDX_ARG);
    if ((char)uVar4 == '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x10))))(piVar7 GEN_EDX_ARG,0);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x58))))(piVar7 GEN_EDX_ARG,*(undefined4 *)&REFG(undefined, 0x134c6f4));
    *((undefined1 *)GEN_TOP(((int)piVar7 + 0x1c5))) = param_5;
  }
  return (uint)piVar7;
}

/* ref: FUN_00cc6400 */
GEN_LIB GEN_FRAME uint F_00cc6400(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc6400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(*param_2));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc0))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc0))))(piVar1 GEN_EDX_ARG);
  return (uVar2 & 0xff) - (uVar3 & 0xff);
}

/* ref: FUN_00cc6440 */
GEN_LIB GEN_FRAME uint F_00cc6440(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc6440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint _NumOfElements;
  
  if ((param_1 != ((undefined *)GEN_TOP(0x0))) && (param_2 != 0)) {
    _NumOfElements = F_00cc5520(param_1,param_2);
    if (_NumOfElements == 0) {
      return 0;
    }
    F_00c4f040(param_1,_NumOfElements,4,((code *)REFP(0xcc6400)));
    return _NumOfElements;
  }
  return 0;
}

/* ref: FUN_00cc6490 */
GEN_LIB GEN_FRAME uint F_00cc6490(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc6490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00cc64a0 */
GEN_LIB GEN_FRAME uint F_00cc64a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc64a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1,*param_2,0,0,param_2[1]);
  return uVar1;
}

/* ref: FUN_00cc64f0 */
GEN_LIB GEN_FRAME uint F_00cc64f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc64f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00cc6510 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc6510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc6510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_InitializeCriticalSection(this);
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 1;
  return (uint)this;
}

/* ref: FUN_00cc6530 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cc6530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc6530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return param_2;
}

/* ref: FUN_00cc6560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc6560(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc6560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0xc))) * param_2 + *((int *)GEN_TOP((in_ecx + 8)));
}

/* ref: FUN_00cc6580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc6580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc6580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(param_1 - *((int *)GEN_TOP(((int)this + 8)))) / *((uint *)GEN_TOP(((int)this + 0xc)));
}

/* ref: FUN_00cc65d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc65d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc65d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (4 < param_1 - 1U) {
    return 0;
  }
  if (param_1 == 1) {
    return (int)this + 0x10;
  }
  return (int)this + param_1 * 0x18 - 8;
}

/* ref: FUN_00cc6660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc6660(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc6660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = (uint)*((byte *)GEN_TOP((in_ecx + 0x12))) + param_2;
  if ((int)uVar1 < 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 0x12))) = 0;
    return 0;
  }
  if (0xff < (int)uVar1) {
    uVar1 = 0xff;
  }
  *((char *)GEN_TOP((in_ecx + 0x12))) = (char)uVar1;
  return uVar1;
}

/* ref: FUN_00cc66a0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cc66a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc66a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return param_1 == *((int *)GEN_TOP(((int)this + 0x134)));
}

/* ref: FUN_00cc66c0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cc66c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc66c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1c5))) = param_2;
  return param_2;
}

/* ref: FUN_00cc6700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc6700(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc6700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *param_1 = param_2;
  *((undefined1 *)GEN_TOP((param_2 + 0x18))) = param_3;
  if (*(char *)&(*(unsigned int *)(((char *)GEN_TOP((uint)(*param_1))) + (1) * 24 + 0)) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cc6740 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc6740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc6740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  *((undefined1 *)GEN_TOP(((int)this + 0x30))) = 1;
  return (uint)this;
}

/* ref: FUN_00cc6770 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc6770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc6770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint extraout_EAX = 0;
  
  *((char *)GEN_TOP(((int)this + 0x30))) = *((char *)GEN_TOP(((int)this + 0x14)));
  if (*((char *)GEN_TOP(((int)this + 0x14))) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  }
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
    *(undefined4 *)this = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (*((char *)GEN_TOP(((int)this + 0x30))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00cc67c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc67c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc67c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 * puVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  *((char *)GEN_TOP(((int)this + 0x30))) = *((char *)GEN_TOP(((int)this + 0x14)));
  if (*((char *)GEN_TOP(((int)this + 0x14))) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP(((int)this + 0x30))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *puVar1;
  if (*((char *)GEN_TOP(((int)this + 0x30))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (uint)puVar1;
}

/* ref: FUN_00cc6810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc6810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc6810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint in_EAX = 0;
  uint extraout_EAX = 0;
  
  if (param_1 != ((uint *)GEN_TOP(0x0))) {
    *((char *)GEN_TOP(((int)this + 0x30))) = *((char *)GEN_TOP(((int)this + 0x14)));
    if (*((char *)GEN_TOP(((int)this + 0x14))) != '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
    }
    in_EAX = *((uint *)GEN_TOP(((int)this + 4)));
    *param_1 = in_EAX;
    *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = param_1;
    if (*((char *)GEN_TOP(((int)this + 0x30))) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
      in_EAX = extraout_EAX;
    }
  }
  return in_EAX;
}

/* ref: FUN_00cc6850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc6850(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc6850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  int iVar2;
  int * in_ecx;
  
  if ((param_2 & 2) == 0) {
    F_00cd6180(param_1 GEN_EDX_FWD);
    if (((param_2 & 1) != 0) && (param_1 != ((int *)GEN_TOP(0x0)))) {
      F_00406810(param_1);
    }
  }
  else {
    piVar1 = param_1 - 1;
    iVar2 = *piVar1;
    in_ecx = param_1 + iVar2 * 0x9e;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      in_ecx = in_ecx - 0x9e;
      F_00cd6180(in_ecx GEN_EDX_ARG);
    }
    param_1 = piVar1;
    if (((param_2 & 1) != 0) && (piVar1 != ((int *)GEN_TOP(0x0)))) {
      F_00406810(piVar1);
      return (uint)piVar1;
    }
  }
  return (uint)param_1;
}

/* ref: FUN_00cc68e0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cc68e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc68e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  *((char *)GEN_TOP(((int)this + 0x30))) = *((char *)GEN_TOP(((int)this + 0x14)));
  if (*((char *)GEN_TOP(((int)this + 0x14))) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)this != 0) {
    F_00406810(*(int *)this);
    *(undefined4 *)this = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (*((char *)GEN_TOP(((int)this + 0x30))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (uint)(gen_imp_DeleteCriticalSection(lpCriticalSection));
}

/* ref: FUN_00cc6930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc6930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcc6930u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  int iVar2;
  int * piVar3;
  LPCRITICAL_SECTION extraout_EAX = 0;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  *((char *)GEN_TOP(((int)this + 0x14))) = (char)param_5;
  *((char *)GEN_TOP(((int)this + 0x30))) = (char)param_5;
  if ((char)param_5 != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  uVar4 = param_4;
  if (param_4 < 4) {
    uVar4 = 4;
  }
  uVar1 = param_1;
  if (param_1 < 4) {
    uVar1 = 4;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = param_2;
  iVar2 = (((uVar1 - 1) + uVar4) / uVar4) * uVar4;
  *((int *)GEN_TOP(((int)this + 0xc))) = iVar2;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,iVar2 * param_2 - 1 + uVar4,*param_3,0,0,param_3[1]);
  *(uint *)this = uVar1;
  if (uVar1 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc5d20));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112a624),&REFG(undefined1, 0x107fc63),
                    ((char *)REFP(0x112a630))
                    ,0x4d,((char *)REFP(0x112a680)));
  }
  iVar2 = 0;
  piVar3 = ((int *)GEN_TOP((((*(int *)this - 1 + uVar4) / uVar4) * uVar4)));
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar3;
  *((int * PTR32 *)GEN_TOP(((int)this + 4))) = piVar3;
  if (0 < param_2) {
    do {
      if (iVar2 < param_2 - 1) {
        *piVar3 = (int)piVar3 + (*((uint *)GEN_TOP(((int)this + 0xc))) & 0xfffffffc);
      }
      else {
        *piVar3 = 0;
      }
      iVar2 = iVar2 + 1;
      piVar3 = ((int *)GEN_TOP(((int)piVar3 + (*((uint *)GEN_TOP(((int)this + 0xc))) & 0xfffffffc))));
    } while (iVar2 < param_2);
  }
  if (*((char *)GEN_TOP(((int)this + 0x30))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    lpCriticalSection = extraout_EAX;
  }
  return (uint)lpCriticalSection;
}

/* ref: FUN_00cc6a70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc6a70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc6a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x112a6c4));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cc6a90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc6a90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc6a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x112a6c4));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cc6aa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc6aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc6aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112a6c4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  return (uint)this;
}

/* ref: FUN_00cc6ac0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cc6ac0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc6ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x112a6c4));
  return;
}

/* ref: FUN_00cc6ad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc6ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc6ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cc6b10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cc6b10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcc6b10u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0xc))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3,param_4);
  }
  return;
}

/* ref: FUN_00cc6b40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc6b40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc6b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::EffectController::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc6b50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc6b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x112a6c4));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cc6b80 */
GEN_LIB GEN_FRAME unsigned int F_00cc6b80(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc6b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cc6ba0 */
GEN_LIB GEN_NOFRAME uint F_00cc6ba0(void)
{
  GEN_ENTER(0xcc6ba0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(undefined4, 0x15d86c0) = REFG(undefined4, 0x15d86c0) + 1;
  if (0xfffff < (int)REFG(undefined4, 0x15d86c0)) {
    REFG(int, 0x15d86c4) = REFG(int, 0x15d86c4) + 1;
    REFG(undefined4, 0x15d86c0) = 1;
  }
  if (REFG(int, 0x15d86c4) == 0) {
    return REFG(undefined4, 0x15d86c0);
  }
  do {
    uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0);
    while( true ) {
      if (uVar1 == 0) {
        return REFG(undefined4, 0x15d86c0);
      }
      if ((*((uint *)GEN_TOP((uVar1 + 0x14))) & 0xfffff) == REFG(undefined4, 0x15d86c0)) break;
      uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar1);
    }
    REFG(undefined4, 0x15d86c0) = REFG(undefined4, 0x15d86c0) + 1;
    if (0xfffff < (int)REFG(undefined4, 0x15d86c0)) {
      REFG(int, 0x15d86c4) = REFG(int, 0x15d86c4) + 1;
      REFG(undefined4, 0x15d86c0) = 1;
    }
  } while( true );
}

/* ref: FUN_00cc6c30 */
GEN_LIB GEN_FRAME uint F_00cc6c30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc6c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
  bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar2);
  if ((bVar1 != 0) && (*((uint *)GEN_TOP((uVar2 + 0x14))) == param_1)) {
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00cc6c80 */
GEN_LIB GEN_FRAME uint F_00cc6c80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc6c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4 GEN_EDX_ARG,0)));
  while( true ) {
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    if ((piVar1[4] == param_1 / 1000) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,param_1 % 1000), uVar2 != 0)) break;
    piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4 GEN_EDX_ARG,piVar1)));
  }
  return (uint)piVar1;
}

/* ref: FUN_00cc6d00 */
GEN_LIB GEN_FRAME uint F_00cc6d00(void)
{
  GEN_ENTER(0xcc6d00u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  ((uint *)(gen_frame + 0x0))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14);
  uVar1 = 100;
  uVar2 = 200;
  ((uint *)(gen_frame + 0x0))[0] = 200;
  ((uint *)(gen_frame + 0x0))[1] = 0xb4;
  ((uint *)(gen_frame + 0x0))[2] = 0xfc;
  ((uint *)(gen_frame + 0x0))[3] = 0;
  iVar3 = 1;
  do {
    if ((int)uVar1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    uVar2 = ((uint *)(gen_frame + 0x0))[(int)(iVar3)];
    iVar3 = iVar3 + 1;
  } while (uVar2 != 0);
  return uVar1;
}

/* ref: FUN_00cc6d60 */
GEN_LIB GEN_NOFRAME uint F_00cc6d60(void)
{
  GEN_ENTER(0xcc6d60u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  if (REFG(int, 0x15d8704) != 0) {
    F_00406810(REFG(int, 0x15d8704));
    REFG(int, 0x15d8704) = 0;
  }
  REFG(undefined4, 0x15d8708) = 0;
  if (REFG(char, 0x15d8734) != '\0') {
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d871c));
  }
  REFG(char, 0x15d8ba0) = REFG(char, 0x15d8b81);
  if (REFG(char, 0x15d8b81) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8b88));
  }
  uVar1 = 0;
  if (REFG(int, 0x15d8b84) != 0) {
    uVar1 = F_00406810(REFG(int, 0x15d8b84));
    REFG(int, 0x15d8b84) = 0;
  }
  if (REFG(char, 0x15d8ba0) != '\0') {
    uVar1 = gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8b88));
  }
  return uVar1;
}

/* ref: FUN_00cc6e00 */
GEN_LIB GEN_FRAME uint F_00cc6e00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc6e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    uVar2 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar2);
    if ((bVar1 != 0) && (*((uint *)GEN_TOP((uVar2 + 0x14))) == param_1)) goto LAB_00cc6e46;
  }
  uVar2 = 0;
LAB_00cc6e46: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc6e60 */
GEN_LIB GEN_FRAME uint F_00cc6e60(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc6e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  REFG(char, 0x15d876c) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  uVar1 = F_00cc6c80(param_1);
  if (REFG(char, 0x15d876c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  }
  return uVar1;
}

/* ref: FUN_00cc6ea0 */
GEN_LIB GEN_FRAME byte F_00cc6ea0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc6ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d876c) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4 GEN_EDX_ARG,0)));
  do {
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      if (REFG(char, 0x15d876c) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
      }
      return 0;
    }
    if (piVar1[4] == param_1 / 1000) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,param_1);
      *param_3 = uVar2;
      if (-1 < (int)uVar2) {
        *param_2 = piVar1[5];
        if (REFG(char, 0x15d876c) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
        }
        return 1;
      }
    }
    piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4 GEN_EDX_ARG,piVar1)));
  } while( true );
}

/* ref: FUN_00cc6f60 */
GEN_LIB GEN_FRAME uint F_00cc6f60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc6f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d876c) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4 GEN_EDX_ARG,0)));
  while( true ) {
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      if (REFG(char, 0x15d876c) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
      }
      return 0;
    }
    if ((piVar1[4] == param_1 / 1000) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,param_1 % 1000), uVar2 != 0)) break;
    piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4 GEN_EDX_ARG,piVar1)));
  }
  uVar2 = piVar1[5];
  if (REFG(char, 0x15d876c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  }
  return uVar2;
}

/* ref: FUN_00cc7020 */
GEN_LIB GEN_FRAME uint F_00cc7020(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc7020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined4 * this;
  uint uVar1;
  int * piVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  this = REFG(undefined4 * PTR32, 0x15d8708);
  if (REFG(undefined4 * PTR32, 0x15d8708) == ((undefined4 *)GEN_TOP(0x0))) {
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d871c));
    }
  }
  else {
    REFG(undefined4 * PTR32, 0x15d8708) = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8708)));
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d871c));
    }
    if (this != ((undefined4 *)GEN_TOP(0x0))) {
      if ((*param_1 == 0x42444553) && ((uint)param_1[2] < 4)) {
        uVar1 = F_00cc6ba0();
        uVar1 = (uint)((int)this - *(int *)&REFG(undefined, 0x15d870c)) / REFG(undefined4, 0x15d8710) << 0x14 | uVar1 & 0xfffff;
        if (param_1[1] == 0x46435353) {
          if (param_2 == '\0') {
            piVar2 = ((int *)GEN_TOP(F_00ce0700(this GEN_EDX_ARG,param_1,uVar1)));
          }
          else {
            piVar2 = ((int *)GEN_TOP(F_00cdf400(this GEN_EDX_ARG,param_1,uVar1)));
          }
          F_00d2fe00(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar2);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
          REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) + 1;
          if (REFG(char, 0x15d8750) != '\0') {
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
          }
          return uVar1;
        }
      }
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return 0;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc7150 */
GEN_LIB GEN_FRAME uint F_00cc7150(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc7150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG);
  if ((uVar1 != 0) && (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG), uVar1 != 0)) {
    for (uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0); uVar2 != 0;
        uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar2)) {
      if (((*((byte *)GEN_TOP((uVar2 + 0x48))) & 0x40) != 0) && (*((int * PTR32 *)GEN_TOP((uVar2 + 8))) == param_1)) {
        uVar1 = *((uint *)GEN_TOP((uVar2 + 0x14)));
        if (REFG(char, 0x15d8750) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
        }
        return uVar1;
      }
    }
    uVar2 = F_00cc7020(uVar1,0);
    if (uVar2 != 0) {
      uVar1 = F_00cc6e00(uVar2);
      F_00ce11d0(uVar1 GEN_EDX_ARG,param_1);
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG);
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7220 */
GEN_LIB GEN_FRAME uint F_00cc7220(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcc7220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  undefined4 * this;
  uint uVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  this = REFG(undefined4 * PTR32, 0x15d8708);
  if (REFG(undefined4 * PTR32, 0x15d8708) == ((undefined4 *)GEN_TOP(0x0))) {
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d871c));
    }
  }
  else {
    REFG(undefined4 * PTR32, 0x15d8708) = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8708)));
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(REFG(undefined4 * PTR32, 0x15d8708),&REFG(undefined, 0x15d871c));
    }
    if (this != ((undefined4 *)GEN_TOP(0x0))) {
      uVar1 = F_00cc6ba0();
      uVar2 = (uint)((int)this - *(int *)&REFG(undefined, 0x15d870c)) / REFG(undefined4, 0x15d8710) << 0x14 | uVar1 & 0xfffff;
      uVar1 = F_00ce1760(this GEN_EDX_ARG,uVar2,param_1,param_2,param_3,param_4,param_5);
      F_00d2fe00(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar1);
      REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) + 1;
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc7310 */
GEN_LIB GEN_FRAME uint F_00cc7310(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc7310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 * this;
  uint uVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  this = REFG(undefined4 * PTR32, 0x15d8708);
  if (REFG(undefined4 * PTR32, 0x15d8708) == ((undefined4 *)GEN_TOP(0x0))) {
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d871c));
    }
  }
  else {
    REFG(undefined4 * PTR32, 0x15d8708) = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8708)));
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(REFG(undefined4 * PTR32, 0x15d8708),&REFG(undefined, 0x15d871c));
    }
    if (this != ((undefined4 *)GEN_TOP(0x0))) {
      uVar1 = F_00cc6ba0();
      uVar2 = (uint)((int)this - *(int *)&REFG(undefined, 0x15d870c)) / REFG(undefined4, 0x15d8710) << 0x14 | uVar1 & 0xfffff;
      uVar1 = F_00ce2020(this GEN_EDX_ARG,uVar2,param_1,param_2,param_3);
      F_00d2fe00(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar1);
      REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) + 1;
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc73f0 */
GEN_LIB GEN_FRAME uint F_00cc73f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc73f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined4 * this;
  uint uVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  this = REFG(undefined4 * PTR32, 0x15d8708);
  if (REFG(undefined4 * PTR32, 0x15d8708) == ((undefined4 *)GEN_TOP(0x0))) {
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d871c));
    }
  }
  else {
    REFG(undefined4 * PTR32, 0x15d8708) = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8708)));
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(REFG(undefined4 * PTR32, 0x15d8708),&REFG(undefined, 0x15d871c));
    }
    if (this != ((undefined4 *)GEN_TOP(0x0))) {
      uVar1 = F_00cc6ba0();
      uVar2 = (uint)((int)this - *(int *)&REFG(undefined, 0x15d870c)) / REFG(undefined4, 0x15d8710) << 0x14 | uVar1 & 0xfffff;
      uVar1 = F_00cdf510(this GEN_EDX_ARG,param_1,uVar2);
      F_00d2fe00(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar1);
      REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) + 1;
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc74d0 */
GEN_LIB GEN_FRAME byte F_00cc74d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc74d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cc6e00(param_1);
  return uVar1 != 0;
}

/* ref: FUN_00cc74f0 */
GEN_LIB GEN_NOFRAME uint F_00cc74f0(void)
{
  GEN_ENTER(0xcc74f0u, 0u, 0u, 0u, 0u);
  uint extraout_EAX = 0;
  int * this;
  uint uVar1;
  uint extraout_EAX_00 = 0;
  
  REFG(char, 0x15d8700) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
  uVar1 = extraout_EAX;
  if (REFG(int, 0x15d86e0) != 0) {
    this = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,0)));
    do {
      F_00ce1900(this GEN_EDX_ARG);
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x88))))(this GEN_EDX_ARG);
      if ((char)uVar1 == '\0') {
        this = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,this)));
      }
      else {
        this = ((int *)GEN_TOP(F_00d2ff30(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,this)));
      }
    } while (this != ((int *)GEN_TOP(0x0)));
    uVar1 = 0;
  }
  if (REFG(char, 0x15d8700) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
    uVar1 = extraout_EAX_00;
  }
  return uVar1;
}

/* ref: FUN_00cc7570 */
GEN_LIB GEN_FRAME uint F_00cc7570(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc7570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  undefined * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    this = ((undefined *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,this);
    if ((bVar1 != 0) && (*((uint *)GEN_TOP(((int)this + 0x14))) == param_1)) {
      uVar2 = F_00ce11f0(this GEN_EDX_ARG);
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc7600 */
GEN_LIB GEN_FRAME uint F_00cc7600(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc7600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  undefined * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar2 = extraout_EAX;
  if (param_1 != 0) {
    this = ((undefined *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,this);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (*((uint *)GEN_TOP(((int)this + 0x14))) == param_1)) {
      uVar2 = F_00ce1230(this GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc7670 */
GEN_LIB GEN_FRAME uint F_00cc7670(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc7670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  undefined * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    this = ((undefined *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,this);
    if ((bVar1 != 0) && (*((uint *)GEN_TOP(((int)this + 0x14))) == param_1)) {
      uVar2 = F_00ce1250(this GEN_EDX_ARG);
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc7700 */
GEN_LIB GEN_FRAME uint F_00cc7700(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc7700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  undefined * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar2 = extraout_EAX;
  if (param_1 != 0) {
    this = ((undefined *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,this);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (*((uint *)GEN_TOP(((int)this + 0x14))) == param_1)) {
      uVar2 = F_00ce1280(this GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc7770 */
GEN_LIB GEN_NOFRAME uint F_00cc7770(void)
{
  GEN_ENTER(0xcc7770u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0);
  while( true ) {
    if (uVar1 == 0) {
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return 0;
    }
    if ((*((byte *)GEN_TOP((uVar1 + 0x48))) & 1) != 0) break;
    uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar1);
  }
  uVar1 = *((uint *)GEN_TOP((uVar1 + 0x14)));
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar1;
}

/* ref: FUN_00cc77e0 */
GEN_LIB GEN_NOFRAME uint F_00cc77e0(void)
{
  GEN_ENTER(0xcc77e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00cc7770();
  uVar1 = F_00cc6e00(uVar1);
  return uVar1;
}

/* ref: FUN_00cc77f0 */
GEN_LIB GEN_FRAME uint F_00cc77f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc77f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0);
  while( true ) {
    if (uVar1 == 0) {
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return 0;
    }
    if (param_1 == *((int *)GEN_TOP((uVar1 + 0x10)))) break;
    uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar1);
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar1;
}

/* ref: FUN_00cc7870 */
GEN_LIB GEN_FRAME uint F_00cc7870(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc7870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint extraout_EAX = 0;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  if (uVar1 == 2) {
    REFG(char, 0x15d8700) = '\x01';
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
    uVar1 = F_00d2fe00(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,param_1);
    if (REFG(char, 0x15d8700) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
      uVar1 = extraout_EAX;
    }
  }
  return uVar1;
}

/* ref: FUN_00cc78c0 */
GEN_LIB GEN_FRAME uint F_00cc78c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc78c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d8700) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
  uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,0);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (*((int *)GEN_TOP((uVar1 + 0x14))) == param_1) {
        uVar2 = F_00d2ff30(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,uVar1);
        goto LAB_00cc790c;
      }
      uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,uVar1);
    } while (uVar1 != 0);
    uVar2 = 0;
  }
LAB_00cc790c: ;
  if (REFG(char, 0x15d8700) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc7930 */
GEN_LIB GEN_FRAME uint F_00cc7930(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc7930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x20))))(piVar3 GEN_EDX_ARG);
      goto LAB_00cc7983;
    }
  }
  uVar2 = 0;
LAB_00cc7983: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc79a0 */
GEN_LIB GEN_FRAME uint F_00cc79a0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc79a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar2 = extraout_EAX;
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x30))))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc7a10 */
GEN_LIB GEN_FRAME uint F_00cc7a10(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc7a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x60))))(piVar3 GEN_EDX_ARG,param_2);
      goto LAB_00cc7a68;
    }
  }
  uVar2 = 0xffffffff;
LAB_00cc7a68: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7a90 */
GEN_LIB GEN_FRAME uint F_00cc7a90(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc7a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 100))))(piVar3 GEN_EDX_ARG,param_2);
      goto LAB_00cc7ae8;
    }
  }
  uVar2 = 0xffffffff;
LAB_00cc7ae8: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7b10 */
GEN_LIB GEN_FRAME byte F_00cc7b10(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc7b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x68))))(piVar3 GEN_EDX_ARG,param_2);
      bVar1 = (byte)uVar2;
      goto LAB_00cc7b68;
    }
  }
  bVar1 = 0;
LAB_00cc7b68: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return bVar1;
}

/* ref: FUN_00cc7b90 */
GEN_LIB GEN_FRAME uint F_00cc7b90(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc7b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,param_2);
      goto LAB_00cc7be7;
    }
  }
  uVar2 = 0;
LAB_00cc7be7: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7c10 */
GEN_LIB GEN_FRAME uint F_00cc7c10(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc7c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  piVar1 = ((int *)GEN_TOP(F_00cc6c80(param_1)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG,param_1);
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7c60 */
GEN_LIB GEN_FRAME uint F_00cc7c60(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc7c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,param_2);
      goto LAB_00cc7cb7;
    }
  }
  uVar2 = 0;
LAB_00cc7cb7: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7ce0 */
GEN_LIB GEN_FRAME uint F_00cc7ce0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc7ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  piVar1 = ((int *)GEN_TOP(F_00cc6c80(param_1)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,param_1);
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7d30 */
GEN_LIB GEN_FRAME byte F_00cc7d30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc7d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x88))))(piVar3 GEN_EDX_ARG);
      bVar1 = (byte)uVar2;
      goto LAB_00cc7d87;
    }
  }
  bVar1 = 0;
LAB_00cc7d87: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return bVar1;
}

/* ref: FUN_00cc7db0 */
GEN_LIB GEN_FRAME byte F_00cc7db0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc7db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  undefined * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    this = ((undefined *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,this);
    if ((bVar1 != 0) && (*((uint *)GEN_TOP(((int)this + 0x14))) == param_1)) {
      bVar1 = F_00ce12a0(this GEN_EDX_ARG);
      goto LAB_00cc7e02;
    }
  }
  bVar1 = 0;
LAB_00cc7e02: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return bVar1;
}

/* ref: FUN_00cc7e20 */
GEN_LIB GEN_FRAME uint F_00cc7e20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc7e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar2 = extraout_EAX;
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xa4))))(piVar3 GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc7e90 */
GEN_LIB GEN_FRAME byte F_00cc7e90(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc7e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  int iVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    iVar2 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,iVar2);
    if ((bVar1 != 0) && (*((uint *)GEN_TOP((iVar2 + 0x14))) == param_1)) {
      *((byte *)GEN_TOP((iVar2 + 0x48))) = *((byte *)GEN_TOP((iVar2 + 0x48))) ^ (*((byte *)GEN_TOP((iVar2 + 0x48))) ^ param_2) & 1;
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return 1;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc7f20 */
GEN_LIB GEN_FRAME uint F_00cc7f20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc7f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  int * piVar4;
  
  REFG(char, 0x15d8750) = '\x01';
  uVar3 = gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar4 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar2 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar4);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (((bVar2 != 0) && (piVar4[5] == param_1)) &&
       (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG), uVar3 == 2)) {
      pcVar1 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x84)));
      *(byte *)(piVar4 + 0x12) = *(byte *)(piVar4 + 0x12) & 0xfd;
      (*pcVar1)(piVar4);
      REFG(char, 0x15d8700) = '\x01';
      gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d86e8));
      uVar3 = F_00d2fe00(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,piVar4);
      if (REFG(char, 0x15d8700) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
        uVar3 = extraout_EAX;
      }
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar3 = extraout_EAX_00;
  }
  return uVar3;
}

/* ref: FUN_00cc7fd0 */
GEN_LIB GEN_FRAME uint F_00cc7fd0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc7fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint extraout_EAX_00 = 0;
  int iVar3;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar2 = extraout_EAX;
  if (param_1 != 0) {
    iVar3 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,iVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (*((uint *)GEN_TOP((iVar3 + 0x14))) == param_1)) {
      uVar2 = CONCAT31(extraout_var,param_2 << 4 ^ *((byte *)GEN_TOP((iVar3 + 0x48)))) & 0xffffff10;
      *((byte *)GEN_TOP((iVar3 + 0x48))) = *((byte *)GEN_TOP((iVar3 + 0x48))) ^ (byte)uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc8040 */
GEN_LIB GEN_FRAME uint F_00cc8040(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc8040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint extraout_EAX_00 = 0;
  int iVar3;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar2 = extraout_EAX;
  if (param_1 != 0) {
    iVar3 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,iVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (*((uint *)GEN_TOP((iVar3 + 0x14))) == param_1)) {
      uVar2 = CONCAT31(extraout_var,param_2 << 5 ^ *((byte *)GEN_TOP((iVar3 + 0x48)))) & 0xffffff20;
      *((byte *)GEN_TOP((iVar3 + 0x48))) = *((byte *)GEN_TOP((iVar3 + 0x48))) ^ (byte)uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc80b0 */
GEN_LIB GEN_FRAME byte F_00cc80b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc80b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  int iVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    iVar2 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,iVar2);
    if ((bVar1 != 0) && (*((uint *)GEN_TOP((iVar2 + 0x14))) == param_1)) {
      bVar1 = *((byte *)GEN_TOP((iVar2 + 0x48))) >> 5 & 1;
      goto LAB_00cc8102;
    }
  }
  bVar1 = 0;
LAB_00cc8102: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return bVar1;
}

/* ref: FUN_00cc8120 */
GEN_LIB GEN_FRAME uint F_00cc8120(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc8120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  uVar2 = gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x84))))(piVar3 GEN_EDX_ARG);
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
      if (uVar2 == 2) {
        REFG(char, 0x15d8700) = '\x01';
        gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d86e8));
        uVar2 = F_00d2fe00(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,piVar3);
        if (REFG(char, 0x15d8700) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
          uVar2 = extraout_EAX;
        }
      }
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc81d0 */
GEN_LIB GEN_FRAME byte F_00cc81d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc81d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  int iVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    iVar2 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,iVar2);
    if ((bVar1 != 0) && (*((uint *)GEN_TOP((iVar2 + 0x14))) == param_1)) {
      bVar1 = *((byte *)GEN_TOP((iVar2 + 0x48))) >> 3 & 1;
      goto LAB_00cc8222;
    }
  }
  bVar1 = 0;
LAB_00cc8222: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return bVar1;
}

/* ref: FUN_00cc8240 */
GEN_LIB GEN_FRAME byte F_00cc8240(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc8240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  byte bVar1;
  uint uVar2;
  int * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    this = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,this);
    if ((bVar1 != 0) && (this[5] == param_1)) {
      F_00ce11f0(this GEN_EDX_ARG);
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x18))))(this GEN_EDX_ARG,param_2);
      if (uVar2 != 0) {
        *param_3 = *((undefined4 *)GEN_TOP((uVar2 + 0x34)));
        F_00ce1230(this GEN_EDX_ARG);
        if (REFG(char, 0x15d8750) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
        }
        return 1;
      }
      F_00ce1230(this GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc82f0 */
GEN_LIB GEN_FRAME byte F_00cc82f0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc82f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  byte bVar1;
  uint uVar2;
  int * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    this = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,this);
    if ((bVar1 != 0) && (this[5] == param_1)) {
      F_00ce11f0(this GEN_EDX_ARG);
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xc))))(this GEN_EDX_ARG,param_2);
      if (uVar2 != 0) {
        *param_3 = (uint)*((byte *)GEN_TOP((uVar2 + 2)));
        F_00ce1230(this GEN_EDX_ARG);
        if (REFG(char, 0x15d8750) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
        }
        return 1;
      }
      F_00ce1230(this GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc83a0 */
GEN_LIB GEN_FRAME float F_00cc83a0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc83a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  int * this;
  float10 extraout_ST0;
  float local_8;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  local_8 = (float)(float10)0;
  if (param_1 != 0) {
    this = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,this);
    if ((bVar1 != 0) && (this[5] == param_1)) {
      F_00ce11f0(this GEN_EDX_ARG);
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*this + 0x1c))))(this,param_2);
      local_8 = (float)extraout_ST0;
      F_00ce1230(this GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return local_8;
}

/* ref: FUN_00cc8430 */
GEN_LIB GEN_FRAME float10 F_00cc8430(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc8430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  int * piVar2;
  float10 extraout_ST0;
  float10 fVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar2 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar2);
    if ((bVar1 != 0) && (piVar2[5] == param_1)) {
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xa8))))(piVar2);
      fVar3 = extraout_ST0;
      goto LAB_00cc8488;
    }
  }
  fVar3 = (float10)REFG(float, 0x1090708);
LAB_00cc8488: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return (float10)(float)fVar3;
}

/* ref: FUN_00cc84b0 */
GEN_LIB GEN_FRAME uint F_00cc84b0(GEN_P(char param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc84b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  byte bVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  for (uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0); uVar2 != 0; uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar2))
  {
    bVar1 = *((byte *)GEN_TOP((uVar2 + 0x48)));
    if ((bVar1 & 8) != 0) {
      *((byte *)GEN_TOP((uVar2 + 0x48))) = (param_1 << 4 ^ bVar1) & 0x10 ^ bVar1;
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc8520 */
GEN_LIB GEN_FRAME uint F_00cc8520(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc8520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d876c) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  uVar3 = *((uint *)GEN_TOP((param_1 + 0x10)));
  if (-1 < (int)uVar3) {
    uVar2 = uVar3 & 0x8000003f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
    }
    bVar1 = F_00d30050(&REFG(undefined4, 0x15d8770) + uVar2 * 4 GEN_EDX_ARG,param_1);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      uVar3 = F_00d2fe00(&REFG(undefined4, 0x15d8770) + uVar2 * 4 GEN_EDX_ARG,param_1);
    }
  }
  if (REFG(char, 0x15d876c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
    uVar3 = extraout_EAX;
  }
  return uVar3;
}

/* ref: FUN_00cc8590 */
GEN_LIB GEN_FRAME uint F_00cc8590(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc8590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d876c) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  uVar3 = *((uint *)GEN_TOP((param_1 + 0x10)));
  if (-1 < (int)uVar3) {
    uVar2 = uVar3 & 0x8000003f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
    }
    bVar1 = F_00d30050(&REFG(undefined4, 0x15d8770) + uVar2 * 4 GEN_EDX_ARG,param_1);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar3 = F_00d2ff30(&REFG(undefined4, 0x15d8770) + uVar2 * 4 GEN_EDX_ARG,param_1);
    }
  }
  if (REFG(char, 0x15d876c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
    uVar3 = extraout_EAX;
  }
  return uVar3;
}

/* ref: FUN_00cc8600 */
GEN_LIB GEN_FRAME uint F_00cc8600(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc8600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar4 = 0;
  piVar2 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar4 = 0;
    do {
      if ((((*(byte *)(piVar2 + 0x12) & 8) == 0) && (bVar1 = F_00cc2b60(piVar2), bVar1 != 0)) &&
         ((param_1 == 0 || (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x60))))(piVar2 GEN_EDX_ARG,0), param_1 == uVar3)))) {
        uVar4 = uVar4 + piVar2[7];
      }
      piVar2 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar2)));
    } while (piVar2 != ((int *)GEN_TOP(0x0)));
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar4;
}

/* ref: FUN_00cc8690 */
GEN_LIB GEN_FRAME uint F_00cc8690(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc8690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar3 = 0;
  piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar3 = 0;
    do {
      if (((*(byte *)(piVar1 + 0x12) & 8) == 0) &&
         ((param_1 == 0 || (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,0), param_1 == uVar2)))) {
        uVar3 = uVar3 + piVar1[7];
      }
      piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar1)));
    } while (piVar1 != ((int *)GEN_TOP(0x0)));
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar3;
}

/* ref: FUN_00cc8710 */
GEN_LIB GEN_FRAME uint F_00cc8710(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc8710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    iVar3 = 0;
    do {
      if (((*(byte *)(piVar1 + 0x12) & 8) == 0) &&
         ((param_3 == 0 || (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,0), param_3 == uVar2)))) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 100))))(piVar1 GEN_EDX_ARG,0);
        *((uint *)GEN_TOP((param_1 + iVar3 * 4))) = uVar2;
        iVar3 = iVar3 + 1;
        if (param_2 <= iVar3) break;
      }
      piVar1 = ((int *)GEN_TOP(F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar1)));
    } while (piVar1 != ((int *)GEN_TOP(0x0)));
  }
  uVar2 = REFG(undefined4, 0x15d86d0);
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc87b0 */
GEN_LIB GEN_FRAME unsigned int F_00cc87b0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc87b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  *param_1 = REFG(undefined4, 0x15d86d0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 4) = 0;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc8800 */
GEN_LIB GEN_FRAME byte F_00cc8800(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc8800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  char cVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  if (*((char *)GEN_TOP((param_1 + 0x10))) != '\0') {
    *((undefined4 *)GEN_TOP((param_1 + 4))) = 0xffffffff;
    return 0;
  }
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x20))))(piVar2 GEN_EDX_ARG);
    if (*((int *)GEN_TOP((param_1 + 0xc))) < (int)uVar4) goto LAB_00cc886a;
  }
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  do {
    uVar4 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 8))));
    *((uint *)GEN_TOP((param_1 + 8))) = uVar4;
    if (uVar4 == 0) break;
  } while ((*((byte *)GEN_TOP((uVar4 + 0x48))) & 8) != 0);
LAB_00cc886a: ;
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP((param_1 + 4))) = 0xffffffff;
    *((undefined1 *)GEN_TOP((param_1 + 0x10))) = 1;
  }
  else {
    iVar3 = *((int *)GEN_TOP((param_1 + 0xc)));
    *((int *)GEN_TOP((param_1 + 0xc))) = iVar3 + 1;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 100))))(piVar2 GEN_EDX_ARG,iVar3);
    *((uint *)GEN_TOP((param_1 + 4))) = uVar4;
  }
  cVar1 = *((char *)GEN_TOP((param_1 + 0x10)));
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return cVar1 == '\0';
}

/* ref: FUN_00cc88c0 */
GEN_LIB GEN_FRAME byte F_00cc88c0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc88c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  byte bVar1;
  uint uVar2;
  int * in_ecx;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    in_ecx = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,in_ecx);
    if ((bVar1 != 0) && (in_ecx[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG);
      if ((uVar2 == 3) && (in_ecx[0x20] == 4)) {
        uVar2 = F_00ce1bf0(in_ecx GEN_EDX_ARG);
        *param_2 = uVar2;
        *param_3 = in_ecx[0x27];
        if (REFG(char, 0x15d8750) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
        }
        return 1;
      }
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc8970 */
GEN_LIB GEN_FRAME uint F_00cc8970(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc8970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 * this;
  uint uVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  this = REFG(undefined4 * PTR32, 0x15d8708);
  if (REFG(undefined4 * PTR32, 0x15d8708) == ((undefined4 *)GEN_TOP(0x0))) {
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d871c));
    }
  }
  else {
    REFG(undefined4 * PTR32, 0x15d8708) = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8708)));
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(REFG(undefined4 * PTR32, 0x15d8708),&REFG(undefined, 0x15d871c));
    }
    if (this != ((undefined4 *)GEN_TOP(0x0))) {
      uVar1 = F_00cc6ba0();
      uVar2 = (uint)((int)this - *(int *)&REFG(undefined, 0x15d870c)) / REFG(undefined4, 0x15d8710) << 0x14 | uVar1 & 0xfffff;
      uVar1 = F_00ce2110(this GEN_EDX_ARG,uVar2,
                           (*(undefined * PTR32 (*)[3])REFP(0x112a770)),param_1,param_2,param_3);
      F_00d2fe00(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar1);
      REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) + 1;
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc8a70 */
GEN_LIB GEN_FRAME byte F_00cc8a70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc8a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  code * pcVar4;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
  if (piVar3[5] != param_1) {
    if (REFG(char, 0x15d8750) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    }
    return 0;
  }
  pcVar4 = (((code *)GEN_TOP(gen_imp_LeaveCriticalSection)));
  if ((*(byte *)(piVar3 + 0x12) & 8) != 0) {
    REFG(char, 0x15d8700) = '\x01';
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d86e8));
    for (uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,0); uVar2 != 0;
        uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,uVar2)) {
      if (*((uint *)GEN_TOP((uVar2 + 0x14))) == param_1) {
        F_00d2ff30(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,uVar2);
        break;
      }
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
    if (uVar2 == 3) {
      *(byte *)(piVar3 + 0x12) = *(byte *)(piVar3 + 0x12) & 0xdf;
    }
    bVar1 = F_00ce3950(param_1);
    pcVar4 = (((code *)GEN_TOP(gen_imp_LeaveCriticalSection)));
    if (bVar1 == 0) {
      if (REFG(char, 0x15d8700) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d86e8));
      }
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
      }
      return 0;
    }
    if (REFG(char, 0x15d8700) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d86e8));
    }
  }
  F_00cc8590(piVar3);
  F_00d2ff30(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x70))))(piVar3 GEN_EDX_ARG);
  if (uVar2 != 0) {
    F_00ce30d0(&REFG(undefined, 0x15d8b70) GEN_EDX_ARG,uVar2);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,0);
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  *piVar3 = (int)REFG(int * PTR32, 0x15d8708);
  REFG(int * PTR32, 0x15d8708) = piVar3;
  if (REFG(char, 0x15d8734) != '\0') {
    (*pcVar4)(&REFG(undefined, 0x15d871c));
  }
  REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) - 1;
  if (REFG(char, 0x15d8750) != '\0') {
    (*pcVar4)(&REFG(undefined, 0x15d8738));
  }
  return 1;
}

/* ref: FUN_00cc8bf0 */
GEN_LIB_GS GEN_FRAME uint F_00cc8bf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcc8bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112a73c)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112a71c)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00cc8c90 */
GEN_LIB GEN_FRAME uint F_00cc8c90(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc8c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  int * in_ecx;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  uVar2 = 0;
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG);
  if ((uVar1 != 0) && (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG), uVar1 != 0)) {
    for (uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0); uVar2 != 0;
        uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar2)) {
      if (((*((byte *)GEN_TOP((uVar2 + 0x48))) & 0x40) != 0) && (*((int *)GEN_TOP((uVar2 + 8))) == param_2)) {
        uVar1 = *((uint *)GEN_TOP((uVar2 + 0x14)));
        if (REFG(char, 0x15d8750) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
        }
        return uVar1;
      }
    }
    uVar2 = F_00cc7020(uVar1,0);
    if (uVar2 != 0) {
      in_ecx = ((int *)GEN_TOP(F_00cc6e00(uVar2)));
      F_00ce11d0(in_ecx GEN_EDX_ARG,param_2);
      uVar4 = 1;
      uVar3 = 4;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x20))))(in_ecx GEN_EDX_ARG);
      uVar1 = F_00ce3060(&REFG(undefined, 0x15d8b70) GEN_EDX_ARG,uVar1 * 0x94,uVar3,uVar4);
      if (uVar1 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x6c))))(in_ecx GEN_EDX_ARG,uVar1);
        goto LAB_00cc8d9f;
      }
      F_00cc8a70(uVar2);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG);
    if (REFG(char, 0x15d8750) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    }
    return 0;
  }
LAB_00cc8d9f: ;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG);
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc8dd0 */
GEN_LIB GEN_FRAME uint F_00cc8dd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc8dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 * in_ecx;
  
  ((int *)(gen_frame + 0xc))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20);
  REFG(undefined4, 0x15d86b8) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if (REFG(char, 0x15d7798) == '\0') {
    iVar3 = *((int *)GEN_TOP((param_1 + 0xc)));
  }
  else {
    iVar3 = REFG(int, 0x15d8610);
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
      iVar3 = REFG(int, 0x15d8610);
    }
  }
  REFG(int, 0x15d86bc) = iVar3;
  F_00d2fdb0(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0x24);
  F_00d2fdb0(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,0x30);
  in_ecx = &REFG(undefined4, 0x15d8770);
  do {
    F_00d2fdb0(in_ecx GEN_EDX_ARG,0x3c);
    in_ecx = in_ecx + 4;
  } while ((int)in_ecx < 0x15d8b70);
  iVar4 = 100;
  iVar1 = 200;
  (*(undefined4 *)(gen_frame + 0x8)) = 100;
  ((int *)(gen_frame + 0xc))[0] = 200;
  ((int *)(gen_frame + 0xc))[1] = 0xb4;
  ((int *)(gen_frame + 0xc))[2] = 0xfc;
  ((int *)(gen_frame + 0xc))[3] = 0;
  iVar3 = 1;
  do {
    if (iVar4 < iVar1) {
      iVar4 = iVar1;
    }
    iVar1 = ((int *)(gen_frame + 0xc))[(int)(iVar3)];
    iVar3 = iVar3 + 1;
  } while (iVar1 != 0);
  (*(char * PTR32 *)(gen_frame + 0x0)) = "CDev.Engine.Sd.SoundDriver";
  (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
  F_00cc6930(&REFG(undefined4, 0x15d8704) GEN_EDX_ARG,iVar4,REFG(int, 0x15d86bc),&(*(char * PTR32 *)(gen_frame + 0x0)),0x10,1);
  (*(char * PTR32 *)(gen_frame + 0x0)) = "CDev.Engine.Sd.SoundDriver";
  (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
  uVar2 = F_00cc9280(&REFG(undefined, 0x15d8b70) GEN_EDX_ARG,REFG(int, 0x15d86bc) * 0x600,&(*(char * PTR32 *)(gen_frame + 0x0)),1,1);
  return uVar2;
}

/* ref: FUN_00cc8f10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc8f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc8f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  *((undefined1 *)GEN_TOP(((int)this + 0x30))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return (uint)this;
}

/* ref: FUN_00cc8f40 */
GEN_LIB GEN_FRAME uint F_00cc8f40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc8f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1 & 0x8000003f;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xffffffc0) + 1;
  }
  return uVar1;
}

/* ref: FUN_00cc8f80 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cc8f80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc8f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  
  bVar1 = (*((byte *)GEN_TOP((in_ecx + 0x48))) ^ param_2) & 1;
  *((byte *)GEN_TOP((in_ecx + 0x48))) = *((byte *)GEN_TOP((in_ecx + 0x48))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00cc8fb0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cc8fb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc8fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0x14))) == param_2;
}

/* ref: FUN_00cc9010 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cc9010(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc9010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 << 4 ^ *((byte *)GEN_TOP((in_ecx + 0x48)))) & 0x10;
  *((byte *)GEN_TOP((in_ecx + 0x48))) = *((byte *)GEN_TOP((in_ecx + 0x48))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00cc9030 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cc9030(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc9030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 << 5 ^ *((byte *)GEN_TOP((in_ecx + 0x48)))) & 0x20;
  *((byte *)GEN_TOP((in_ecx + 0x48))) = *((byte *)GEN_TOP((in_ecx + 0x48))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00cc9120 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc9120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc9120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint extraout_EAX = 0;
  
  *((char *)GEN_TOP(((int)this + 0x30))) = *((char *)GEN_TOP(((int)this + 0x11)));
  if (*((char *)GEN_TOP(((int)this + 0x11))) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  }
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    uVar1 = F_00406810(*((int *)GEN_TOP(((int)this + 0x14))));
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  if (*((char *)GEN_TOP(((int)this + 0x30))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::StreamReaderAdapter::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc9170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc9170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  float10 fVar1;
  uint uVar2;
  float10 fVar3;
  longlong lVar4;
  
  fVar3 = GEN_X87((float10)(int)param_1[3] / (float10)(int)param_1[4]);
  fVar1 = (float10)REFG(double, 0x1088108);
  if (fVar1 <= fVar3 && ((!GEN_ISNAN(fVar3) && !GEN_ISNAN(fVar1)) && fVar3 != fVar1)) {
    return 0;
  }
  lVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 4))))
                    (*(int * PTR32 *)(this + 4),*param_1,param_1[2],0,param_1[1],0);
  uVar2 = (uint)lVar4;
  if (lVar4 == -1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::StreamReaderAdapter::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc91d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcc91d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xc))))
                    (*(int * PTR32 *)(this + 4) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::StreamReaderAdapter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc91e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc91e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x109726c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cc9210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc9210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc9210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x112a770));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  return (uint)this;
}

/* ref: FUN_00cc9230 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cc9230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc9230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  *((char *)GEN_TOP(((int)this + 0x30))) = *((char *)GEN_TOP(((int)this + 0x11)));
  if (*((char *)GEN_TOP(((int)this + 0x11))) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x14))));
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  if (*((char *)GEN_TOP(((int)this + 0x30))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (uint)(gen_imp_DeleteCriticalSection(lpCriticalSection));
}

/* ref: FUN_00cc9280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc9280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcc9280u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1,*param_2,0,0,param_2[1]);
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  if (uVar1 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc8bf0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112a624),&REFG(undefined1, 0x107fc63),
                    ((char *)REFP(0x112a780))
                    ,0x60,((char *)REFP(0x112a7cc)));
  }
  uVar1 = F_00ce3200(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x14))),param_1,(undefined1)param_3,
                       (undefined1)param_4);
  return uVar1;
}

/* ref: FUN_00cc9320 */
GEN_LIB GEN_FRAME unsigned int F_00cc9320(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc9320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cc9340 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cc9340(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc9340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP((in_ecx + 0xc)));
  while (iVar1 = iVar2, iVar1 != 0) {
    in_ecx = iVar1;
    iVar2 = *((int *)GEN_TOP((iVar1 + 0xc)));
  }
  return (int)*((short *)GEN_TOP((in_ecx + 8))) <= *((int *)GEN_TOP((in_ecx + 0xbc)));
}

/* ref: FUN_00cc9360 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc9360(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc9360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP((in_ecx + 0xc)));
  while (iVar1 = iVar2, iVar1 != 0) {
    in_ecx = iVar1;
    iVar2 = *((int *)GEN_TOP((iVar1 + 0xc)));
  }
  return *((uint *)GEN_TOP((in_ecx + 0xbc)));
}

/* ref: FUN_00cc9380 */
GEN_LIB GEN_NOFRAME byte GEN_STDCALL F_00cc9380(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc9380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return 1;
}

/* ref: FUN_00cc9390 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cc9390(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc9390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 == *((int *)GEN_TOP((in_ecx + 4)));
}

/* ref: FUN_00cc93a0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cc93a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc93a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 0x10))))((int)this + 0x34);
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x10))))((int)this + 0x10);
  extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x58))) + 0x10))))((int)this + 0x58);
  return GEN_X87(((float)GEN_TOF((extraout_ST0_01 *
                (float10)(double)(extraout_ST0_00 * (float10)(double)extraout_ST0)))));
}

/* ref: FUN_00cc93f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc93f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcc93f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint in_EAX = 0;
  
  F_00cccc10(in_ecx + 0x10 GEN_EDX_FWD,param_2);
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cc9410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc9410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00cc9420 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cc9420(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc9420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((ushort *)GEN_TOP((in_ecx + 10))) = *((ushort *)GEN_TOP((in_ecx + 10))) | 1;
    return;
  }
  *((ushort *)GEN_TOP((in_ecx + 10))) = *((ushort *)GEN_TOP((in_ecx + 10))) & 0xfffe;
  return;
}

/* ref: FUN_00cc9450 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc9450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc9450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = 0;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    this = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc)));
  }
  for (this_00 = ((undefined *)GEN_TOP(F_00d2ff90((int)this + 0xb4 GEN_EDX_FWD,0))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = ((undefined *)GEN_TOP(F_00d2ff90((int)this + 0xb4 GEN_EDX_ARG,this_00)))) {
    bVar1 = F_00cbbe10(this_00 GEN_EDX_ARG);
    if (bVar1 == 0) {
      uVar2 = uVar2 + 1;
    }
  }
  return uVar2;
}

/* ref: FUN_00cc94a0 */
GEN_LIB GEN_NOFRAME unsigned int F_00cc94a0(void)
{
  GEN_ENTER(0xcc94a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00cc94b0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cc94b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc94b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  undefined * this;
  uint uVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  *((int *)GEN_TOP((param_1 + 0x7c))) = *((int *)GEN_TOP((param_1 + 0x7c))) + 1;
  if (*((int *)GEN_TOP((param_1 + 0x7c))) == 1) {
    if (param_3 != 0) {
      F_00cccd90(param_1 + 0x34 GEN_EDX_FWD,param_2,param_3);
      return;
    }
    iVar1 = *((int *)GEN_TOP((param_1 + 0xc)));
    if (iVar1 == 0) {
      iVar1 = param_1;
    }
    F_00cccbd0(param_1 + 0x34 GEN_EDX_ARG,param_2);
    for (this = ((undefined *)GEN_TOP(F_00d2ff90(iVar1 + 0xb4 GEN_EDX_ARG,0))); this != ((undefined *)GEN_TOP(0x0));
        this = ((undefined *)GEN_TOP(F_00d2ff90(iVar1 + 0xb4 GEN_EDX_ARG,this)))) {
      uVar2 = F_00cbcc20(this GEN_EDX_ARG);
      if (uVar2 == *((uint *)GEN_TOP((param_1 + 4)))) {
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x34))) + 0x10))))(param_1 + 0x34);
        extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x10))))(param_1 + 0x10);
        extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x58))) + 0x10))))(param_1 + 0x58);
        F_00cbc8c0(this GEN_EDX_ARG,((float)GEN_TOF((extraout_ST0_01 *
                                 (float10)(double)(extraout_ST0_00 * (float10)(double)extraout_ST0))))
                    );
      }
    }
  }
  return;
}

/* ref: FUN_00cc9590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc9590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc9590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  undefined * this_00;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x7c)));
  if (0 < (int)uVar2) {
    uVar2 = uVar2 - 1;
    *((uint *)GEN_TOP(((int)this + 0x7c))) = uVar2;
    if (uVar2 == 0) {
      if (param_1 != 0) {
        uVar2 = F_00cccd90((int)this + 0x34 GEN_EDX_FWD,(float)(float10)1,param_1);
        return uVar2;
      }
      pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc)));
      if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
        pvVar1 = this;
      }
      F_00cccbd0((int)this + 0x34 GEN_EDX_ARG,(float)(float10)1);
      for (this_00 = ((undefined *)GEN_TOP(F_00d2ff90((int)pvVar1 + 0xb4 GEN_EDX_ARG,0))); this_00 != ((undefined *)GEN_TOP(0x0));
          this_00 = ((undefined *)GEN_TOP(F_00d2ff90((int)pvVar1 + 0xb4 GEN_EDX_ARG,this_00)))) {
        uVar2 = F_00cbcc20(this_00 GEN_EDX_ARG);
        if (uVar2 == *((uint *)GEN_TOP(((int)this + 4)))) {
          extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 0x10))))((int)this + 0x34);
          extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x10))))((int)this + 0x10);
          extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x58))) + 0x10))))((int)this + 0x58);
          F_00cbc8c0(this_00 GEN_EDX_ARG,((float)GEN_TOF((extraout_ST0_01 *
                                      (float10)(double)(extraout_ST0_00 *
                                                       (float10)(double)extraout_ST0)))));
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cc9670(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc9670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  int in_ecx;
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined * this;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  *((undefined1 *)GEN_TOP((param_1 + 0xdc))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
  in_ecx = *((int *)GEN_TOP((param_1 + 0xc)));
  iVar2 = in_ecx;
  if (in_ecx == 0) {
    iVar2 = param_1;
  }
  this = ((undefined *)GEN_TOP((iVar2 + 0xb4)));
  uVar1 = *((uint *)GEN_TOP((iVar2 + 0x90)));
  if (in_ecx == 0) {
    uVar4 = *((uint *)GEN_TOP((param_1 + 0xbc)));
  }
  else {
    uVar4 = F_00cc9360(in_ecx GEN_EDX_ARG);
  }
  if (uVar1 == uVar4) {
    puVar5 = ((undefined4 *)GEN_TOP(F_00d2ff90(this GEN_EDX_ARG,0)));
    do {
      bVar3 = F_00cbbe20(puVar5 GEN_EDX_ARG);
      if ((bVar3 == 0) && (bVar3 = F_00cbbe10(puVar5 GEN_EDX_ARG), bVar3 == 0)) {
        puVar6 = ((undefined4 *)GEN_TOP(F_00d2ff90(this GEN_EDX_ARG,puVar5)));
      }
      else {
        F_00cbdbf0(puVar5 GEN_EDX_ARG,0);
        puVar6 = ((undefined4 *)GEN_TOP(F_00d2ff30(this GEN_EDX_ARG,puVar5)));
        if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
          *((char *)GEN_TOP((iVar2 + 0xb0))) = *((char *)GEN_TOP((iVar2 + 0x94)));
          if (*((char *)GEN_TOP((iVar2 + 0x94))) != '\0') {
            gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x98));
          }
          *puVar5 = *((undefined4 *)GEN_TOP((iVar2 + 0x84)));
          *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0x84))) = puVar5;
          if (*((char *)GEN_TOP((iVar2 + 0xb0))) != '\0') {
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x98));
          }
        }
      }
      puVar5 = puVar6;
    } while (puVar6 != ((undefined4 *)GEN_TOP(0x0)));
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(iVar2 + 0x98);
  *((char *)GEN_TOP((iVar2 + 0xb0))) = *((char *)GEN_TOP((iVar2 + 0x94)));
  if (*((char *)GEN_TOP((iVar2 + 0x94))) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0x84)));
  if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP((iVar2 + 0xb0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
  }
  else {
    *((undefined4 *)GEN_TOP((iVar2 + 0x84))) = *puVar5;
    if (*((char *)GEN_TOP((iVar2 + 0xb0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
      F_00cbbdc0(puVar5 GEN_EDX_ARG,param_2);
      F_00d2fe00(this GEN_EDX_ARG,puVar5);
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x34))) + 0x10))))(param_1 + 0x34);
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x10))))(param_1 + 0x10);
      extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x58))) + 0x10))))(param_1 + 0x58);
      F_00cbc8c0(puVar5 GEN_EDX_ARG,((float)GEN_TOF((extraout_ST0_01 *
                                 (float10)(double)(extraout_ST0_00 * (float10)(double)extraout_ST0))))
                  );
    }
  }
  if (*((char *)GEN_TOP((param_1 + 0xdc))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf1 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cc9800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc9800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * pBVar1;
  byte bVar2;
  undefined4 * this_00;
  undefined4 * puVar3;
  uint uVar4;
  undefined * this_01;
  bool bVar5;
  bool bVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  this[0xdc] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  if (*(int *)(this + 0xbc) != 0) {
    this_00 = ((undefined4 *)GEN_TOP(F_00d2ff90(this + 0xb4 GEN_EDX_ARG,0)));
    do {
      bVar2 = F_00cbc040(this_00 GEN_EDX_ARG);
      if (bVar2 == 0) {
        puVar3 = ((undefined4 *)GEN_TOP(F_00d2ff30(this + 0xb4 GEN_EDX_ARG,this_00)));
        if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
          this[0xb0] = this[0x94];
          if (this[0x94] != (undefined1)0x0) {
            gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
          }
          *this_00 = *(undefined4 *)(this + 0x84);
          *(undefined4 * PTR32 *)(this + 0x84) = this_00;
          if (this[0xb0] != (undefined1)0x0) {
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
          }
        }
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(F_00d2ff90(this + 0xb4 GEN_EDX_ARG,this_00)));
      }
      this_00 = puVar3;
    } while (puVar3 != ((undefined4 *)GEN_TOP(0x0)));
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0xc))))(this + 0x10 GEN_EDX_ARG);
  bVar5 = (char)uVar4 != '\0';
  if (bVar5) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 8))))(this + 0x10 GEN_EDX_ARG,param_1);
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x34) + 0xc))))(this + 0x34 GEN_EDX_ARG);
  bVar6 = (char)uVar4 != '\0';
  if (bVar6) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x34) + 8))))(this + 0x34 GEN_EDX_ARG,param_1);
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x58) + 0xc))))(this + 0x58 GEN_EDX_ARG);
  if ((char)uVar4 == '\0') {
    if (!bVar6 && !bVar5) goto LAB_00cc998b;
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x58) + 8))))(this + 0x58 GEN_EDX_ARG,param_1);
  }
  pBVar1 = *(undefined * PTR32 *)(this + 0xc);
  if (pBVar1 == ((undefined *)GEN_TOP(0x0))) {
    pBVar1 = this;
  }
  for (this_01 = ((undefined *)GEN_TOP(F_00d2ff90(pBVar1 + 0xb4 GEN_EDX_ARG,0))); this_01 != ((undefined *)GEN_TOP(0x0));
      this_01 = ((undefined *)GEN_TOP(F_00d2ff90(pBVar1 + 0xb4 GEN_EDX_ARG,this_01)))) {
    uVar4 = F_00cbcc20(this_01 GEN_EDX_ARG);
    if (uVar4 == *(uint *)(this + 4)) {
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x34) + 0x10))))(this + 0x34);
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x10))))(this + 0x10);
      extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x58) + 0x10))))(this + 0x58);
      F_00cbc8c0(this_01 GEN_EDX_ARG,((float)GEN_TOF((extraout_ST0_01 *
                                  (float10)(double)(extraout_ST0_00 * (float10)(double)extraout_ST0)
                                  ))));
    }
  }
LAB_00cc998b: ;
  if (this[0xdc] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc99b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc99b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  undefined * this;
  LPCRITICAL_SECTION extraout_EAX = 0;
  LPCRITICAL_SECTION lpCriticalSection;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  if (param_3 != 0) {
    uVar2 = F_00cccd90(param_1 + 0x10 GEN_EDX_FWD,param_2,param_3);
    return uVar2;
  }
  F_00cccbd0(param_1 + 0x10 GEN_EDX_ARG,param_2);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc4);
  *((undefined1 *)GEN_TOP((param_1 + 0xdc))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = *((int *)GEN_TOP((param_1 + 0xc)));
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  for (this = ((undefined *)GEN_TOP(F_00d2ff90(iVar1 + 0xb4 GEN_EDX_ARG,0))); this != ((undefined *)GEN_TOP(0x0));
      this = ((undefined *)GEN_TOP(F_00d2ff90(iVar1 + 0xb4 GEN_EDX_ARG,this)))) {
    uVar2 = F_00cbcc20(this GEN_EDX_ARG);
    if (uVar2 == *((uint *)GEN_TOP((param_1 + 4)))) {
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x34))) + 0x10))))(param_1 + 0x34);
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x10))))(param_1 + 0x10);
      extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x58))) + 0x10))))(param_1 + 0x58);
      F_00cbc8c0(this GEN_EDX_ARG,((float)GEN_TOF((extraout_ST0_01 *
                               (float10)(double)(extraout_ST0_00 * (float10)(double)extraout_ST0)))));
    }
  }
  if (*((char *)GEN_TOP((param_1 + 0xdc))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    lpCriticalSection = extraout_EAX;
  }
  return (uint)lpCriticalSection;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cc9aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc9aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * pBVar1;
  undefined * this_00;
  uint uVar2;
  
  this[0xdc] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  pBVar1 = this;
  if (*(undefined * PTR32 *)(this + 0xc) != ((undefined *)GEN_TOP(0x0))) {
    pBVar1 = *(undefined * PTR32 *)(this + 0xc);
  }
  for (this_00 = ((undefined *)GEN_TOP(F_00d2ff90(pBVar1 + 0xb4 GEN_EDX_ARG,0))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = ((undefined *)GEN_TOP(F_00d2ff90(pBVar1 + 0xb4 GEN_EDX_ARG,this_00)))) {
    uVar2 = F_00cbcc20(this_00 GEN_EDX_ARG);
    if (uVar2 == *(uint *)(this + 4)) {
      F_00cbdbf0(this_00 GEN_EDX_ARG,param_1);
    }
  }
  this[0xe4] = (undefined1)0x0;
  if (this[0xdc] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cc9b30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc9b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  int iVar1;
  undefined * this;
  uint uVar2;
  
  if ((*((char *)GEN_TOP((param_1 + 0xe5))) == '\0') || (param_3 != '\0')) {
    *((undefined1 *)GEN_TOP((param_1 + 0xdc))) = 1;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
    iVar1 = *((int *)GEN_TOP((param_1 + 0xc)));
    if (iVar1 == 0) {
      iVar1 = param_1;
    }
    for (this = ((undefined *)GEN_TOP(F_00d2ff90(iVar1 + 0xb4 GEN_EDX_ARG,0))); this != ((undefined *)GEN_TOP(0x0));
        this = ((undefined *)GEN_TOP(F_00d2ff90(iVar1 + 0xb4 GEN_EDX_ARG,this)))) {
      uVar2 = F_00cbcc20(this GEN_EDX_ARG);
      if (uVar2 == *((uint *)GEN_TOP((param_1 + 4)))) {
        F_00cbc120(this GEN_EDX_ARG,param_2);
      }
    }
    *((undefined1 *)GEN_TOP((param_1 + 0xe4))) = 1;
    *((char *)GEN_TOP((param_1 + 0xe5))) = param_3;
    if (*((char *)GEN_TOP((param_1 + 0xdc))) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
    }
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cc9bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc9bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * pBVar1;
  undefined * this_00;
  uint uVar2;
  
  this[0xdc] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  pBVar1 = this;
  if (*(undefined * PTR32 *)(this + 0xc) != ((undefined *)GEN_TOP(0x0))) {
    pBVar1 = *(undefined * PTR32 *)(this + 0xc);
  }
  for (this_00 = ((undefined *)GEN_TOP(F_00d2ff90(pBVar1 + 0xb4 GEN_EDX_ARG,0))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = ((undefined *)GEN_TOP(F_00d2ff90(pBVar1 + 0xb4 GEN_EDX_ARG,this_00)))) {
    uVar2 = F_00cbcc20(this_00 GEN_EDX_ARG);
    if (uVar2 == *(uint *)(this + 4)) {
      F_00cbc1a0(this_00 GEN_EDX_ARG,param_1);
    }
  }
  *(undefined2 *)(this + 0xe4) = 0;
  if (this[0xdc] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  }
  return 0;
}

/* ref: FUN_00cc9c60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc9c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc9c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc4);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x10)) = lpCriticalSection;
  *((undefined1 *)GEN_TOP(((int)this + 0xdc))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    (*(int *)(gen_frame + 0x18)) = (int)this + 0xb4;
  }
  else {
    (*(int *)(gen_frame + 0x18)) = *((int *)GEN_TOP(((int)this + 0xc))) + 0xb4;
  }
  ((uint *)(gen_frame + 0x0))[0] = 0;
  ((uint *)(gen_frame + 0x0))[1] = 0xffffffff;
  ((uint *)(gen_frame + 0x0))[2] = 0;
  ((uint *)(gen_frame + 0x0))[3] = 0xffffffff;
  (*(int *)(gen_frame + 0x14)) = 0;
  for (this_00 = ((undefined *)GEN_TOP(F_00d2ff90((*(int *)(gen_frame + 0x18)) GEN_EDX_ARG,0))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = ((undefined *)GEN_TOP(F_00d2ff90((*(int *)(gen_frame + 0x18)) GEN_EDX_ARG,this_00)))) {
    bVar1 = F_00cbc040(this_00 GEN_EDX_ARG);
    if (bVar1 != 0) {
      uVar2 = F_00cbbe00(this_00 GEN_EDX_ARG);
      bVar1 = F_00cbc290(this_00 GEN_EDX_ARG);
      uVar3 = (uint)bVar1;
      if (uVar2 < ((uint *)(gen_frame + 0x0))[(int)(uVar3 * 2 + 1)]) {
        ((uint *)(gen_frame + 0x0))[(int)(uVar3 * 2 + 1)] = uVar2;
        uVar2 = F_00cbbff0(this_00 GEN_EDX_ARG);
        ((uint *)(gen_frame + 0x0))[(int)(uVar3 * 2)] = uVar2;
      }
      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + uVar3;
      lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x10));
    }
  }
  uVar2 = ((uint *)(gen_frame + 0x0))[(int)((uint)((*(int *)(gen_frame + 0x14)) != 0) * 2)];
  if (*(char *)&(*(undefined * PTR32 *)(((char *)(lpCriticalSection) + (1) * 24))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar2;
}

/* ref: FUN_00cc9d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc9d30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc9d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_TOP(0x818, 8, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  undefined1 * puVar6;
  uint * puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x810)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x814);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc4);
  *((undefined1 *)GEN_TOP((param_1 + 0xdc))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar8 = *((int *)GEN_TOP((param_1 + 0xc)));
  if (iVar8 == 0) {
    iVar8 = param_1;
  }
  iVar8 = iVar8 + 0xb4;
  (*(byte *)(gen_frame + 0xf)) = 0xff;
  pvVar3 = ((undefined *)GEN_TOP(F_00d2ff90(iVar8 GEN_EDX_ARG,0)));
  bVar1 = (*(byte *)(gen_frame + 0xf));
  while (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
    bVar2 = F_00cbbe20(pvVar3 GEN_EDX_ARG);
    (*(byte *)(gen_frame + 0xf)) = bVar1;
    if ((bVar2 == 0) && (bVar2 = F_00cbd740(pvVar3 GEN_EDX_ARG), bVar2 < bVar1)) {
      (*(byte *)(gen_frame + 0xf)) = bVar2;
    }
    pvVar3 = ((undefined *)GEN_TOP(F_00d2ff90(iVar8 GEN_EDX_ARG,pvVar3)));
    bVar1 = (*(byte *)(gen_frame + 0xf));
  }
  puVar6 = ((undefined1 *)(gen_frame + 0x10));
  iVar9 = 0x7f;
  do {
    F_00cbbd70(puVar6 GEN_EDX_ARG);
    puVar6 = puVar6 + 0x10;
    iVar9 = iVar9 - 1;
  } while (-1 < iVar9);
  uVar10 = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  pvVar3 = ((undefined *)GEN_TOP(F_00d2ff90(iVar8 GEN_EDX_ARG,0)));
  if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
    puVar6 = ((undefined1 *)(gen_frame + 0x10));
    do {
      bVar2 = F_00cbbe20(pvVar3 GEN_EDX_ARG);
      if (bVar2 == 0) {
        (*(uint *)(gen_frame + 0x4)) = uVar10;
        if (0x7f < uVar10) break;
        bVar2 = F_00cbd740(pvVar3 GEN_EDX_ARG);
        if (bVar1 == bVar2) {
          F_00cbbdc0(puVar6 GEN_EDX_ARG,pvVar3);
          uVar10 = uVar10 + 1;
          puVar6 = puVar6 + 0x10;
          if (param_2 == '\0') {
            uVar10 = F_00cbbff0(pvVar3 GEN_EDX_ARG);
            puVar7 = &(*(uint *)(gen_frame + 0x810));
            iVar8 = 0x7f;
            do {
              puVar7 = puVar7 - 4;
              F_00cbbdb0(puVar7 GEN_EDX_ARG);
              iVar8 = iVar8 - 1;
            } while (-1 < iVar8);
            if (*((char *)GEN_TOP((param_1 + 0xdc))) != '\0') {
              gen_imp_LeaveCriticalSection(lpCriticalSection);
            }
            return uVar10;
          }
        }
      }
      pvVar3 = ((undefined *)GEN_TOP(F_00d2ff90(iVar8 GEN_EDX_ARG,pvVar3)));
      (*(uint *)(gen_frame + 0x4)) = uVar10;
    } while (pvVar3 != ((undefined *)GEN_TOP(0x0)));
  }
  uVar10 = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  if ((*(uint *)(gen_frame + 0x4)) != 0) {
    do {
      uVar4 = F_00cbbe00(((undefined1 *)(gen_frame + 0x10)) + uVar10 * 0x10 GEN_EDX_ARG);
      uVar5 = F_00cbbff0(((undefined1 *)(gen_frame + 0x10)) + uVar10 * 0x10 GEN_EDX_ARG);
      if ((uVar10 == 0) || (uVar4 < (*(uint *)(gen_frame + 0x8)))) {
        (*(uint *)(gen_frame + 0x0)) = uVar5;
        (*(uint *)(gen_frame + 0x8)) = uVar4;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (*(uint *)(gen_frame + 0x4)));
  }
  puVar7 = &(*(uint *)(gen_frame + 0x810));
  iVar8 = 0x7f;
  do {
    puVar7 = puVar7 - 4;
    F_00cbbdb0(puVar7 GEN_EDX_ARG);
    iVar8 = iVar8 - 1;
  } while (-1 < iVar8);
  if (*((char *)GEN_TOP((param_1 + 0xdc))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00cc9f30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc9f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc9f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint extraout_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112a8c4));
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    *((char *)GEN_TOP(((int)this + 0xb0))) = *((char *)GEN_TOP(((int)this + 0x94)));
    if (*((char *)GEN_TOP(((int)this + 0x94))) != '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
    }
    if (*((int *)GEN_TOP(((int)this + 0x80))) != 0) {
      F_00406810(*((int *)GEN_TOP(((int)this + 0x80))));
      *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
    if (*((char *)GEN_TOP(((int)this + 0xb0))) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
    }
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc4));
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x98);
  *((char *)GEN_TOP(((int)this + 0xb0))) = *((char *)GEN_TOP(((int)this + 0x94)));
  if (*((char *)GEN_TOP(((int)this + 0x94))) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  if (*((int *)GEN_TOP(((int)this + 0x80))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x80))));
    *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  if (*((char *)GEN_TOP(((int)this + 0xb0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  F_00cccb40((int)this + 0x58 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x34 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x10 GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00cca000 */
GEN_LIB_GS GEN_FRAME uint F_00cca000(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcca000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112a8a4)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112a884)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00cca0a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cca0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(short * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcca0a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(short * param_2 = (short *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112a8c4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *(undefined4 *)param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  F_00cccb10((int)this + 0x10 GEN_EDX_FWD,(float)(float10)1);
  F_00cccb10((int)this + 0x34 GEN_EDX_ARG,(float)(float10)1);
  F_00cccb10((int)this + 0x58 GEN_EDX_ARG,(float)(float10)1);
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x94))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  *((undefined1 *)GEN_TOP(((int)this + 0xb0))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc4));
  *((undefined1 *)GEN_TOP(((int)this + 0xdc))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xe6))) = 0;
  iVar1 = (int)*param_2;
  if (iVar1 != 0) {
    if (iVar1 < 0) {
      uVar2 = F_00cbf660(-iVar1);
      *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
      if (uVar2 == 0) {
        if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
          REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcca000));
        }
        ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112a858)),((char *)REFP(0x112a840)),((char *)REFP(0x112a838)),0x3d,
                        ((char *)REFP(0x112a80c)));
        return (uint)this;
      }
    }
    else {
      (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)REFP(0x112a868));
      (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
      F_00cc6930(((undefined *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,0x1c,iVar1 * 2,&(*(char * PTR32 *)(gen_frame + 0x0)),0x10,1);
      F_00d2fdb0((int)this + 0xb4 GEN_EDX_ARG,0x10);
    }
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cca220(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcca220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cc9f30(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cca300 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cca300(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcca300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x1e] = 0;
  in_ecx[0x1f] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  in_ecx[0x23] = 0;
  in_ecx[0x24] = 0;
  in_ecx[0x25] = 0;
  in_ecx[0x26] = 0;
  in_ecx[0x27] = 0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  return 0;
}

/* ref: FUN_00cca3f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cca3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcca3f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar1 = 0;
  iVar3 = param_2;
  if ((int)(uint)*((byte *)GEN_TOP(((int)this + 0x42))) <= param_2) {
    iVar3 = 0;
    uVar1 = 0xffffffff;
  }
  puVar4 = ((undefined4 *)GEN_TOP((iVar3 * 0x7c + 0x44 + (int)this)));
  puVar5 = param_1;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return uVar1;
}

/* ref: FUN_00cca420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cca420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcca420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if ((int)(uint)*((byte *)GEN_TOP(((int)this + 1))) <= param_2) {
    *param_1 = 0x10;
    return 0xffffffff;
  }
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + param_2 * 4 + 2)));
  return 0;
}

/* ref: FUN_00cca460 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cca460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcca460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0xa8, 8, 4);
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa4));
  uVar1 = 0;
  if (param_2 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x614)))) {
    puVar3 = ((undefined4 *)GEN_TOP((param_2 * 0xa0 + 0x618 + (int)this)));
  }
  else {
    F_00cca300(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD);
    uVar1 = 0xffffffff;
    puVar3 = ((undefined4 *)(gen_frame + 0x0));
  }
  puVar4 = param_1;
  for (iVar2 = 0x28; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return uVar1;
}

/* ref: FUN_00cca4d0 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cca4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcca4d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  uVar1 = 0;
  if ((param_2 < 0) || ((int)(uint)*((byte *)GEN_TOP(((int)this + 0xb18))) <= param_2)) {
    uVar1 = 0xffffffff;
    (*(undefined2 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x2)) = 0;
    (*(undefined2 *)(gen_frame + 0x6)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    puVar3 = (undefined4 *)&(*(undefined2 *)(gen_frame + 0x0));
  }
  else {
    puVar3 = ((undefined4 *)GEN_TOP((param_2 * 0x20 + 0xb1c + (int)this)));
  }
  puVar4 = param_1;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return uVar1;
}

/* ref: FUN_00cca550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cca550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcca550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint local_18;
  
  if ((-1 < param_2) && (param_2 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0xd1c))))) {
    iVar1 = param_2 * 5 + 0x348;
    *param_1 = *((uint *)GEN_TOP(((int)this + iVar1 * 4)));
    param_1[1] = *((uint *)GEN_TOP(((int)this + iVar1 * 4 + 4)));
    param_1[2] = *((uint *)GEN_TOP(((int)this + iVar1 * 4 + 8)));
    param_1[3] = *((uint *)GEN_TOP(((int)this + iVar1 * 4 + 0xc)));
    param_1[4] = *((uint *)GEN_TOP(((int)this + iVar1 * 4 + 0x10)));
    return 0;
  }
  local_18 = local_18 & 0xffffff00;
  *param_1 = local_18;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return 0xffffffff;
}

/* ref: FUN_00cca5c0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cca5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcca5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  uint uVar1;
  int iVar2;
  
  ((undefined4 *)(gen_frame + 0x4))[0] = 0;
  ((undefined4 *)(gen_frame + 0x4))[1] = 0;
  ((undefined4 *)(gen_frame + 0x4))[2] = 0;
  ((undefined4 *)(gen_frame + 0x4))[3] = 0;
  ((char *)(gen_frame + 0x0))[0] = '\0';
  uVar1 = F_00cca550(this GEN_EDX_FWD,((char *)(gen_frame + 0x0)),param_1);
  if ((uVar1 == 0) && (iVar2 = 0, 0 < ((char *)(gen_frame + 0x0))[0])) {
    do {
      if (*((char *)GEN_TOP(((undefined4 *)(gen_frame + 0x4))[(int)(iVar2)])) == '\x04') {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < ((char *)(gen_frame + 0x0))[0]);
  }
  return 0;
}

/* ref: FUN_00cca610 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cca610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcca610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  byte bVar1;
  uint uVar2;
  int iVar3;
  char * pcVar4;
  
  ((int *)(gen_frame + 0x4))[0] = 0;
  ((int *)(gen_frame + 0x4))[1] = 0;
  ((int *)(gen_frame + 0x4))[2] = 0;
  ((int *)(gen_frame + 0x4))[3] = 0;
  ((char *)(gen_frame + 0x0))[0] = '\0';
  uVar2 = F_00cca550(this GEN_EDX_FWD,((char *)(gen_frame + 0x0)),param_1);
  if ((uVar2 == 0) && (iVar3 = 0, 0 < ((char *)(gen_frame + 0x0))[0])) {
    do {
      if (*((char *)GEN_TOP(((int *)(gen_frame + 0x4))[(int)(iVar3)])) == '\x04') {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < ((char *)(gen_frame + 0x0))[0]);
  }
  ((int *)(gen_frame + 0x4))[4] = 0;
  if (*((char *)GEN_TOP(((int)this + 0xb18))) != '\0') {
    pcVar4 = ((char *)GEN_TOP(((int)this + 0xb1d)));
    do {
      if ((pcVar4[-1] == param_1) && (iVar3 = 0, '\0' < *pcVar4)) {
        do {
          bVar1 = F_00cca610(this GEN_EDX_ARG,(int)pcVar4[iVar3 + 1]);
          if (bVar1 != 0) {
            return 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *pcVar4);
      }
      iVar3 = ((int *)(gen_frame + 0x4))[4] + 1;
      pcVar4 = pcVar4 + 0x20;
      ((int *)(gen_frame + 0x4))[4] = iVar3;
    } while (iVar3 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0xb18))));
  }
  return 0;
}

/* ref: FUN_00cca6d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cca6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcca6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0xe78))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  return 0;
}

/* ref: FUN_00cca6f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cca6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcca6f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  if (*((char *)GEN_TOP(((int)this + 0xd1c))) != '\0') {
    piVar3 = ((int *)GEN_TOP(((int)this + 0xd20)));
    do {
      iVar4 = 0;
      piVar2 = piVar3;
      if ('\0' < (char)*piVar3) {
        do {
          iVar1 = piVar2[1];
          if (iVar1 != 0) {
            F_00406810(iVar1);
          }
          iVar4 = iVar4 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar4 < (char)*piVar3);
      }
      local_8 = local_8 + 1;
      piVar3 = piVar3 + 5;
    } while (local_8 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0xd1c))));
  }
  *(undefined2 *)this = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x42))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x614))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xb18))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xd1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe78))) = 0;
  return 0;
}

/* ref: FUN_00cca790 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cca790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcca790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0xa8, 8, 4);
  char * pcVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  short * psVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa4));
  F_00cca6f0(this GEN_EDX_FWD);
  *((undefined1 *)GEN_TOP(((int)this + 1))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe7c))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 2))) = 4;
  *((char *)GEN_TOP(((int)this + 1))) = *((char *)GEN_TOP(((int)this + 1))) + '\x01';
  psVar5 = ((short *)GEN_TOP(((int)this + 2)));
  *((undefined4 *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP(((int)this + 1))) * 4 + 2))) = 0x10020;
  *((char *)GEN_TOP(((int)this + 1))) = *((char *)GEN_TOP(((int)this + 1))) + '\x01';
  *((undefined4 *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP(((int)this + 1))) * 4 + 2))) = 4;
  pcVar1 = ((char *)GEN_TOP(((int)this + 1)));
  *pcVar1 = *pcVar1 + '\x01';
  *((undefined4 *)GEN_TOP(((int)this + 0xe74))) = 0;
  iVar2 = 0;
  if (*pcVar1 != '\0') {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + *psVar5;
      *((int *)GEN_TOP(((int)this + 0xe74))) = iVar4;
      iVar2 = iVar2 + 1;
      psVar5 = psVar5 + 2;
    } while (iVar2 < (int)(uint)*((byte *)GEN_TOP(((int)this + 1))));
  }
  ((undefined4 *)(gen_frame + 0x24))[1] = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x42))) = 0;
  ((undefined4 *)(gen_frame + 0x24))[0] = 0;
  ((undefined4 *)(gen_frame + 0x24))[2] = 0;
  ((undefined4 *)(gen_frame + 0x24))[3] = 0;
  ((undefined4 *)(gen_frame + 0x24))[5] = 0;
  ((undefined4 *)(gen_frame + 0x24))[6] = 0;
  ((undefined4 *)(gen_frame + 0x24))[4] = 0;
  puVar3 = ((undefined4 *)(gen_frame + 0x50));
  iVar2 = 4;
  do {
    *(undefined2 *)(puVar3 - 4) = 0;
    puVar3[-3] = 0;
    puVar3[-2] = 0;
    *((undefined2 *)GEN_TOP(((int)puVar3 - 0xe))) = 0;
    *(undefined2 *)(puVar3 - 1) = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *((undefined2 *)GEN_TOP(((int)puVar3 - 2))) = 0;
    puVar3 = puVar3 + 6;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  puVar6 = ((undefined4 *)(gen_frame + 0x24));
  puVar7 = ((undefined4 *)GEN_TOP(((int)this + 0x44)));
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *((char *)GEN_TOP(((int)this + 0x42))) = *((char *)GEN_TOP(((int)this + 0x42))) + '\x01';
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) & 0xffffff00;
  *((undefined4 *)GEN_TOP(((int)this + 0xd20))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12));
  *((undefined4 *)GEN_TOP(((int)this + 0xd24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd2c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x614))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xb18))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xd1c))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xd30))) = 0;
  return (uint)puVar3;
}

/* ref: FUN_00cca900 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cca900(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcca900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0xe78))) = 0x40;
  return;
}

/* ref: FUN_00cca910 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cca910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcca910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x8c, 4, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  uint * puVar6;
  short * psVar7;
  undefined4 * puVar8;
  int iVar9;
  uint * puVar10;
  char * pcVar11;
  undefined4 * puVar12;
  uint * puVar13;
  undefined4 uVar14;
  char * PTR32 * ppcVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x84)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x88));
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = this;
  (*(int * PTR32 *)(gen_frame + 0x38)) = param_1;
  (*(uint *)(gen_frame + 0x80)) = param_1[3];
  if ((*param_1 != 0x46434453) || (param_1[1] != 0)) {
    return 0xffffffff;
  }
  (*(int *)(gen_frame + 0x48)) = 0;
  (*(uint *)(gen_frame + 0x40)) = param_1[2] & 0xffU;
  if ((param_1[2] & 0xffU) != 0) {
    do {
      iVar5 = (*(int * PTR32 *)(gen_frame + 0x38))[(*(int *)(gen_frame + 0x48)) * 4 + 4];
      puVar6 = ((uint *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x38))[(*(int *)(gen_frame + 0x48)) * 4 + 5] + (int)(*(int * PTR32 *)(gen_frame + 0x38)))));
      (*(uint *)(gen_frame + 0x7c)) = (*(int * PTR32 *)(gen_frame + 0x38))[(*(int *)(gen_frame + 0x48)) * 4 + 6];
      (*(uint *)(gen_frame + 0x80)) = (*(int * PTR32 *)(gen_frame + 0x38))[(*(int *)(gen_frame + 0x48)) * 4 + 7];
      (*(uint * PTR32 *)(gen_frame + 0x58)) = puVar6;
      if (iVar5 == 0x20435445) {
        (*(uint *)(gen_frame + 0x78)) = puVar6[1];
        (*(uint *)(gen_frame + 0x7c)) = puVar6[2];
        (*(uint *)(gen_frame + 0x80)) = puVar6[3];
        *((uint *)GEN_TOP(((int)this + 0xe7c))) = *puVar6 & 0xff;
      }
      else if (iVar5 == 0x20535542) {
        uVar2 = *puVar6;
        (*(uint *)(gen_frame + 0x78)) = puVar6[1];
        (*(uint *)(gen_frame + 0x7c)) = puVar6[2];
        (*(uint *)(gen_frame + 0x80)) = puVar6[3];
        *((undefined1 *)GEN_TOP(((int)this + 1))) = 0;
        if ((byte)uVar2 != 0) {
          do {
            bVar1 = *((byte *)GEN_TOP(((int)this + 1)));
            if (0xf < bVar1) break;
            *((uint *)GEN_TOP(((int)this + (uint)bVar1 * 4 + 2))) = puVar6[bVar1 + 4];
            *((char *)GEN_TOP(((int)this + 1))) = *((char *)GEN_TOP(((int)this + 1))) + '\x01';
          } while (*((byte *)GEN_TOP(((int)this + 1))) < (byte)uVar2);
        }
        iVar5 = 0;
        iVar9 = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0xe74))) = 0;
        if (*((char *)GEN_TOP(((int)this + 1))) != '\0') {
          psVar7 = ((short *)GEN_TOP(((int)this + 2)));
          do {
            iVar5 = iVar5 + *psVar7;
            *((int *)GEN_TOP(((int)this + 0xe74))) = iVar5;
            iVar9 = iVar9 + 1;
            psVar7 = psVar7 + 2;
          } while (iVar9 < (int)(uint)*((byte *)GEN_TOP(((int)this + 1))));
        }
      }
      else if (iVar5 == 0x52545441) {
        uVar2 = *puVar6;
        (*(uint *)(gen_frame + 0x78)) = puVar6[1];
        (*(uint *)(gen_frame + 0x7c)) = puVar6[2];
        (*(uint *)(gen_frame + 0x80)) = puVar6[3];
        *((undefined1 *)GEN_TOP(((int)this + 0x42))) = 1;
        if ((byte)uVar2 != 0) {
          do {
            bVar1 = *((byte *)GEN_TOP(((int)this + 0x42)));
            if (0xb < bVar1) break;
            puVar10 = puVar6 + (uint)bVar1 * 0x1f - 0x1b;
            puVar13 = ((uint *)GEN_TOP(((int)this + (uint)bVar1 * 0x7c + 0x44)));
            for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 - 1) {
              *puVar13 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            }
            iVar5 = 4;
            do {
              iVar5 = iVar5 - 1;
            } while (iVar5 != 0);
            *((char *)GEN_TOP(((int)this + 0x42))) = *((char *)GEN_TOP(((int)this + 0x42))) + '\x01';
          } while (*((byte *)GEN_TOP(((int)this + 0x42))) <= (byte)uVar2);
        }
      }
      else if (iVar5 == 0x5243414d) {
        uVar2 = *puVar6;
        *((undefined1 *)GEN_TOP(((int)this + 0x614))) = 0;
        if ((byte)uVar2 != 0) {
          do {
            bVar1 = *((byte *)GEN_TOP(((int)this + 0x614)));
            if (7 < bVar1) break;
            puVar10 = puVar6 + (uint)bVar1 * 0x28 + 4;
            puVar13 = ((uint *)GEN_TOP(((int)this + (uint)bVar1 * 0xa0 + 0x618)));
            for (iVar5 = 0x28; iVar5 != 0; iVar5 = iVar5 - 1) {
              *puVar13 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            }
            iVar5 = (uint)*((byte *)GEN_TOP(((int)this + 0x614))) * 0xa0;
            iVar9 = 0;
            if ('\0' < *((char *)GEN_TOP(((int)this + iVar5 + 0x619)))) {
              do {
                iVar9 = iVar9 + 1;
              } while (iVar9 < *((char *)GEN_TOP(((int)this + iVar5 + 0x619))));
            }
            *((char *)GEN_TOP(((int)this + 0x614))) = *((char *)GEN_TOP(((int)this + 0x614))) + '\x01';
          } while (*((byte *)GEN_TOP(((int)this + 0x614))) < (byte)uVar2);
        }
      }
      else if (iVar5 == 0x54554f52) {
        uVar2 = *puVar6;
        (*(uint *)(gen_frame + 0x78)) = puVar6[1];
        (*(uint *)(gen_frame + 0x7c)) = puVar6[2];
        (*(uint *)(gen_frame + 0x80)) = puVar6[3];
        *((undefined1 *)GEN_TOP(((int)this + 0xb18))) = 0;
        if ((byte)uVar2 != 0) {
          do {
            puVar10 = puVar6 + (uint)*((byte *)GEN_TOP(((int)this + 0xb18))) * 8 + 4;
            puVar13 = ((uint *)GEN_TOP(((uint)*((byte *)GEN_TOP(((int)this + 0xb18))) * 0x20 + 0xb1c + (int)this)));
            for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 - 1) {
              *puVar13 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            }
            *((char *)GEN_TOP(((int)this + 0xb18))) = *((char *)GEN_TOP(((int)this + 0xb18))) + '\x01';
          } while (*((byte *)GEN_TOP(((int)this + 0xb18))) < (byte)uVar2);
        }
        iVar5 = 0;
        if (*((char *)GEN_TOP(((int)this + 0xb18))) != '\0') {
          do {
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0xb18))));
        }
      }
      else if (iVar5 == 0x54434645) {
        uVar2 = *puVar6;
        (*(int *)(gen_frame + 0x50)) = 0x10;
        *((undefined1 *)GEN_TOP(((int)this + 0xd1c))) = 0;
        if ((byte)uVar2 != 0) {
          do {
            (*(undefined4 *)(gen_frame + 0x68)) = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x50)) + 8 + (int)puVar6)));
            (*(undefined4 *)(gen_frame + 0x6c)) = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x50)) + 0xc + (int)puVar6)));
            (*(int *)(gen_frame + 0x60)) = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x50)) + (int)puVar6)));
            uVar3 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x50)) + 4 + (int)puVar6)));
            pcVar11 = ((char *)GEN_TOP(((int)this + ((uint)*((byte *)GEN_TOP(((int)this + 0xd1c))) * 5 + 0x348) * 4)));
            (*(uint *)(gen_frame + 0x64)) = uVar3;
            (*(char * PTR32 *)(gen_frame + 0x3c)) = pcVar11;
            *pcVar11 = (char)uVar3;
            puVar8 = ((undefined4 *)GEN_TOP(((int)puVar6 + (*(int *)(gen_frame + 0x50)) + 0x10)));
            iVar5 = (*(int *)(gen_frame + 0x50));
            if ((char)uVar3 != '\0') {
              pcVar11 = pcVar11 + 4;
              (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = ((undefined1 *)GEN_TOP(((int)&(*(uint *)(gen_frame + 0x64)) + 1)));
              (*(char * PTR32 *)(gen_frame + 0x44)) = pcVar11;
              (*(uint *)(gen_frame + 0x4c)) = uVar3 & 0xff;
              do {
                (*(char * PTR32 *)(gen_frame + 0x44)) = pcVar11;
                puVar12 = puVar8;
                switch((unsigned int)(uintptr_t)(*(*(undefined1 * PTR32 *)(gen_frame + 0x54)))) {
                case 1: ;
                  (*(char * PTR32 *)(gen_frame + 0x30)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x34)) = 0x10;
                  puVar4 = ((undefined4 *)GEN_TOP(F_00cc1070(0x30,&(*(char * PTR32 *)(gen_frame + 0x30)))));
                  *(undefined4 * PTR32 *)pcVar11 = puVar4;
                  iVar5 = 0xc;
                  puVar8 = puVar8 + 0xc;
                  goto code_r0x00ccad94;
                case 2: ;
                  ppcVar15 = &(*(char * PTR32 *)(gen_frame + 0x20));
                  (*(char * PTR32 *)(gen_frame + 0x20)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x24)) = 0x10;
                  uVar14 = 0x20;
                  break;
                case 3: ;
                  (*(char * PTR32 *)(gen_frame + 0x10)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x14)) = 0x10;
                  puVar4 = ((undefined4 *)GEN_TOP(F_00cc1070(0x50,&(*(char * PTR32 *)(gen_frame + 0x10)))));
                  *(undefined4 * PTR32 *)pcVar11 = puVar4;
                  iVar5 = 0x14;
                  puVar8 = puVar8 + 0x24;
                  goto code_r0x00ccad94;
                case 4: ;
                  ppcVar15 = &(*(char * PTR32 *)(gen_frame + 0x8));
                  (*(char * PTR32 *)(gen_frame + 0x8)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0xc)) = 0x10;
                  uVar14 = 0x20;
                  break;
                case 5: ;
                  ppcVar15 = &(*(char * PTR32 *)(gen_frame + 0x0));
                  (*(char * PTR32 *)(gen_frame + 0x0)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
                  uVar14 = 0x20;
                  break;
                case 6: ;
                  (*(char * PTR32 *)(gen_frame + 0x18)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x1c)) = 0x10;
                  puVar4 = ((undefined4 *)GEN_TOP(F_00cc1070(0xa0,&(*(char * PTR32 *)(gen_frame + 0x18)))));
                  *(undefined4 * PTR32 *)pcVar11 = puVar4;
                  iVar5 = 0x28;
                  puVar8 = puVar8 + 0x28;
                  goto code_r0x00ccad94;
                case 7: ;
                  ppcVar15 = &(*(char * PTR32 *)(gen_frame + 0x28));
                  (*(char * PTR32 *)(gen_frame + 0x28)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x2c)) = 0x10;
                  uVar14 = 0x50;
                  break;
                default: ;
                  goto switchD_00ccac82_default;
                }
                puVar4 = ((undefined4 *)GEN_TOP(F_00cc1070(uVar14,ppcVar15)));
                *(undefined4 * PTR32 *)pcVar11 = puVar4;
                iVar5 = 8;
                puVar8 = puVar8 + 8;
code_r0x00ccad94: ;
                for (; this = (*(undefined * PTR32 *)(gen_frame + 0x5c)), puVar6 = (*(uint * PTR32 *)(gen_frame + 0x58)), iVar5 != 0; iVar5 = iVar5 - 1) {
                  *puVar4 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar4 = puVar4 + 1;
                }
switchD_00ccac82_default: ;
                (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = (*(undefined1 * PTR32 *)(gen_frame + 0x54)) + 1;
                pcVar11 = (*(char * PTR32 *)(gen_frame + 0x44)) + 4;
                uVar3 = (*(uint *)(gen_frame + 0x4c)) - 1;
                (*(uint *)(gen_frame + 0x4c)) = uVar3;
                (*(char * PTR32 *)(gen_frame + 0x44)) = pcVar11;
                iVar5 = (*(int *)(gen_frame + 0x50));
              } while (uVar3 != 0);
            }
            iVar9 = 4;
            do {
              iVar9 = iVar9 - 1;
            } while (iVar9 != 0);
            *((char *)GEN_TOP(((int)this + 0xd1c))) = *((char *)GEN_TOP(((int)this + 0xd1c))) + '\x01';
            (*(int *)(gen_frame + 0x50)) = iVar5 + 0x10 + (*(int *)(gen_frame + 0x60));
          } while (*((byte *)GEN_TOP(((int)this + 0xd1c))) < (byte)uVar2);
        }
        iVar5 = 0;
        if (*((char *)GEN_TOP(((int)this + 0xd1c))) != '\0') {
          bVar1 = *((byte *)GEN_TOP(((int)this + 0xd1c)));
          do {
            (*(undefined4 *)(gen_frame + 0x74)) = 0;
            (*(uint *)(gen_frame + 0x78)) = 0;
            (*(uint *)(gen_frame + 0x7c)) = 0;
            (*(uint *)(gen_frame + 0x80)) = 0;
            ((char *)(gen_frame + 0x70))[0] = '\0';
            F_00cca550(this GEN_EDX_ARG,((char *)(gen_frame + 0x70)),iVar5);
            if ('\0' < ((char *)(gen_frame + 0x70))[0]) {
              iVar9 = 0;
              if (0 < ((char *)(gen_frame + 0x70))[0]) {
                do {
                  iVar9 = iVar9 + 1;
                } while (iVar9 < ((char *)(gen_frame + 0x70))[0]);
              }
            }
            iVar5 = iVar5 + 1;
            this = (*(undefined * PTR32 *)(gen_frame + 0x5c));
          } while (iVar5 < (int)(uint)bVar1);
        }
      }
      iVar5 = (*(int *)(gen_frame + 0x48)) + 1;
      (*(int *)(gen_frame + 0x48)) = iVar5;
    } while (iVar5 < (int)(*(uint *)(gen_frame + 0x40)));
  }
  return 0;
}

/* ref: FUN_00ccaea0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ccaea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xccaea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  float10 extraout_ST0;
  int iVar7;
  int iVar8;
  int local_10;
  
  local_10 = 0;
  if (*((char *)GEN_TOP(((int)this + 0x614))) != '\0') {
    pcVar5 = ((char *)GEN_TOP(((int)this + 0x619)));
    do {
      iVar6 = 0;
      bVar2 = 1;
      if (*pcVar5 < '\x01') {
LAB_00ccaf2a: ;
        if (pcVar5[-1] == '\x01') {
          iVar6 = *param_1;
          extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((iVar6 + 0x110))))(param_1,0);
          ((code *)*((gen_code32 *)GEN_TOP((iVar6 + 0x38))))
                    (param_1,(undefined4)
                             gen_fl2bits(((float)GEN_TOF((extraout_ST0 * (float10)*(float *)(pcVar5 + 0xf))))))
          ;
        }
      }
      else {
        do {
          piVar1 = (int *)(pcVar5 + iVar6 * 0x10 + 0x1f);
          if (*piVar1 == 1) {
            iVar8 = piVar1[1];
            iVar7 = piVar1[2];
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x118))))(param_1 GEN_EDX_ARG);
            bVar3 = F_00ccb120(uVar4,iVar7,iVar8);
          }
          else {
            bVar3 = 1;
          }
          if (iVar6 != 0) {
            bVar3 = F_00ccb1d0(bVar2,bVar3,piVar1[3]);
          }
          iVar6 = iVar6 + 1;
          bVar2 = bVar3;
        } while (iVar6 < *pcVar5);
        if (bVar3 != 0) goto LAB_00ccaf2a;
      }
      local_10 = local_10 + 1;
      pcVar5 = pcVar5 + 0xa0;
    } while (local_10 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x614))));
  }
  return;
}

/* ref: FUN_00ccaf80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ccaf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xccaf80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined2 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  int in_ecx;
  undefined1 * puVar5;
  int local_8;
  
  puVar2 = ((undefined2 *)GEN_TOP(((int)this + 2)));
  iVar4 = 0xf;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  puVar5 = ((undefined1 *)GEN_TOP(((int)this + 0x44)));
  local_8 = 0xb;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x58)));
  do {
    *puVar5 = 0;
    *((undefined1 *)GEN_TOP(((int)puVar3 - 0x13))) = 0;
    *((undefined4 *)GEN_TOP(((int)puVar3 - 0x12))) = 0;
    *((undefined2 *)GEN_TOP(((int)puVar3 - 0xe))) = 0;
    puVar3[-3] = 0;
    puVar3[-2] = 0;
    *(undefined2 *)(puVar3 - 1) = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *((undefined2 *)GEN_TOP(((int)puVar3 - 2))) = 0;
    iVar4 = 4;
    puVar1 = puVar3;
    do {
      *(undefined2 *)(puVar1 + 2) = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *((undefined2 *)GEN_TOP(((int)puVar1 + 10))) = 0;
      *(undefined2 *)(puVar1 + 5) = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *((undefined2 *)GEN_TOP(((int)puVar1 + 0x16))) = 0;
      iVar4 = iVar4 - 1;
      puVar1 = puVar1 + 6;
    } while (iVar4 != 0);
    puVar5 = puVar5 + 0x7c;
    puVar3 = puVar3 + 0x1f;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  in_ecx = (int)this + 0x618;
  iVar4 = 7;
  do {
    F_00cca300(in_ecx GEN_EDX_FWD);
    in_ecx = in_ecx + 0xa0;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  puVar2 = ((undefined2 *)GEN_TOP(((int)this + 0xb1c)));
  iVar4 = 0xf;
  do {
    *puVar2 = 0;
    *((undefined1 *)GEN_TOP(((int)puVar2 + 7))) = 0;
    *(undefined4 *)(puVar2 + 0xe) = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 6) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 10) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    puVar2 = puVar2 + 0x10;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  puVar5 = ((undefined1 *)GEN_TOP(((int)this + 0xd20)));
  iVar4 = 0x10;
  do {
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)(puVar5 + 8) = 0;
    *(undefined4 *)(puVar5 + 0xc) = 0;
    *(undefined4 *)(puVar5 + 0x10) = 0;
    puVar5 = puVar5 + 0x14;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  *(undefined1 *)this = 0;
  F_00cca790(this GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0xe78))) = 0x40;
  return (uint)this;
}

/* ref: FUN_00ccb0b0 */
GEN_LIB GEN_FRAME ushort F_00ccb0b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccb0b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return (ushort)param_1;
}

/* ref: FUN_00ccb0c0 */
GEN_LIB GEN_FRAME ushort F_00ccb0c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccb0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return (ushort)param_1;
}

/* ref: FUN_00ccb0d0 */
GEN_LIB GEN_FRAME uint F_00ccb0d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccb0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ccb0e0 */
GEN_LIB GEN_FRAME float10 F_00ccb0e0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xccb0e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)param_1;
}

/* ref: FUN_00ccb0f0 */
GEN_LIB GEN_FRAME uint F_00ccb0f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccb0f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ccb100 */
GEN_LIB GEN_FRAME byte F_00ccb100(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccb100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  return param_1;
}

/* ref: FUN_00ccb110 */
GEN_LIB GEN_FRAME byte F_00ccb110(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccb110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  return param_1;
}

/* ref: FUN_00ccb120 */
GEN_LIB GEN_FRAME byte F_00ccb120(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xccb120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 1: ;
    return param_2 < param_1;
  case 2: ;
    return param_2 <= param_1;
  case 3: ;
    return param_1 < param_2;
  case 4: ;
    return param_1 <= param_2;
  case 5: ;
    return param_1 == param_2;
  case 6: ;
    return param_1 != param_2;
  case 7: ;
    if (param_1 == 0) {
      return 0;
    }
    break;
  case 8: ;
    if (param_1 != 0) {
      return 1;
    }
    break;
  default: ;
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ccb1d0 */
GEN_LIB GEN_FRAME byte F_00ccb1d0(GEN_P(byte param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xccb1d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 1: ;
    return param_2 < param_1;
  case 2: ;
    return 1 - (param_1 < param_2);
  case 3: ;
    return param_1 < param_2;
  case 4: ;
    return 1 - (param_2 < param_1);
  case 5: ;
    return param_1 == param_2;
  case 6: ;
    return param_1 != param_2;
  case 7: ;
    if (param_1 == 0) {
      return 0;
    }
    break;
  case 8: ;
    if (param_1 != 0) {
      return 1;
    }
    break;
  default: ;
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ccb2c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ccb2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xccb2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x12))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  iVar2 = 4;
  do {
    *(undefined2 *)(puVar1 - 4) = 0;
    puVar1[-3] = 0;
    puVar1[-2] = 0;
    *((undefined2 *)GEN_TOP(((int)puVar1 - 0xe))) = 0;
    *(undefined2 *)(puVar1 - 1) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *((undefined2 *)GEN_TOP(((int)puVar1 - 2))) = 0;
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00ccb440 */
GEN_LIB GEN_FRAME undefined4 GEN_THISCALL F_00ccb440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xccb440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = 4;
  do {
    this = ((undefined *)GEN_TOP(((int)this + 4)));
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  return *(undefined4 *)this;
}

/* ref: FUN_00ccb470 */
GEN_LIB GEN_FRAME unsigned int F_00ccb470(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccb470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00ccb490 */
GEN_LIB GEN_FRAME uint F_00ccb490(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccb490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x15d8ba8) = param_1;
  return param_1;
}

/* ref: FUN_00ccb4a0 */
GEN_LIB GEN_FRAME uint F_00ccb4a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccb4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x15d8bac) = param_1;
  return param_1;
}

/* ref: FUN_00ccb4b0 */
GEN_LIB GEN_FRAME uint F_00ccb4b0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccb4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != 0) {
    *((uint *)GEN_TOP((REFG(int, 0x15d8bb8) + param_2 * 4))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ccb4d0 */
GEN_LIB GEN_FRAME uint F_00ccb4d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccb4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if (REFG(undefined4, 0x15d8bc0) <= param_1) {
    return 0;
  }
  return *((uint *)GEN_TOP((REFG(int, 0x15d8bb8) + param_1 * 4)));
}

/* ref: FUN_00ccb4f0 */
GEN_LIB GEN_NOFRAME uint F_00ccb4f0(void)
{
  GEN_ENTER(0xccb4f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = 0;
  if (REFG(int * PTR32, 0x15d8bbc) != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8bbc) + 0x48))))(REFG(int * PTR32, 0x15d8bbc) GEN_EDX_ARG);
    REFG(int * PTR32, 0x15d8bbc) = ((int *)GEN_TOP(0x0));
  }
  return uVar1;
}

/* ref: FUN_00ccb510 */
GEN_LIB GEN_NOFRAME uint F_00ccb510(void)
{
  GEN_ENTER(0xccb510u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d8bbc);
}

/* ref: FUN_00ccb520 */
GEN_LIB GEN_FRAME uint F_00ccb520(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccb520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    *((int *)GEN_TOP((REFG(int, 0x15d8bc4) + REFG(undefined4, 0x15d8bcc) * 4))) = param_1;
    uVar1 = REFG(undefined4, 0x15d8bcc);
    *((undefined4 *)GEN_TOP((REFG(int, 0x15d8bc8) + REFG(undefined4, 0x15d8bcc) * 4))) = param_2;
    REFG(undefined4, 0x15d8bcc) = REFG(undefined4, 0x15d8bcc) + 1;
  }
  return uVar1;
}

/* ref: FUN_00ccb560 */
GEN_LIB GEN_FRAME uint F_00ccb560(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccb560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if (REFG(undefined4, 0x15d8bcc) <= param_1) {
    return 0;
  }
  return *((uint *)GEN_TOP((REFG(int, 0x15d8bc4) + param_1 * 4)));
}

/* ref: FUN_00ccb580 */
GEN_LIB GEN_FRAME uint F_00ccb580(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccb580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if (REFG(undefined4, 0x15d8bcc) <= param_1) {
    return 0;
  }
  return *((uint *)GEN_TOP((REFG(int, 0x15d8bc8) + param_1 * 4)));
}

/* ref: FUN_00ccb5a0 */
GEN_LIB_GS GEN_FRAME uint F_00ccb5a0(void)
{
  GEN_ENTER(0xccb5a0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  uVar1 = 0;
  if (REFG(int * PTR32, 0x15d8ba4) != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x38))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  }
  return uVar1;
}

/* ref: FUN_00ccb5e0 */
GEN_LIB GEN_FRAME byte F_00ccb5e0(void)
{
  GEN_ENTER(0xccb5e0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x11218, 8, 4);
  UINT UVar1;
  DWORD dwLen;
  
  (*(uint *)(gen_frame + 0x11210)) = 0xccb5ed;
  (*(uint *)(gen_frame + 0x11210)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  UVar1 = gen_imp_GetSystemDirectoryA(((CHAR *)(gen_frame + 0x11008)),0x104);
  if (UVar1 != 0) {
    (*(undefined1 *)(gen_frame + 0x1110b)) = 0;
    gen_imp_lstrcpyA(((CHAR *)(gen_frame + 0x1110c)),((CHAR *)(gen_frame + 0x11008)));
    gen_imp_lstrcatA(((CHAR *)(gen_frame + 0x1110c)),((char *)REFP(0x112aba0)));
    dwLen = gen_imp_GetFileVersionInfoSizeA(((CHAR *)(gen_frame + 0x1110c)),(LPDWORD)0x0);
    if ((dwLen != 0) && (dwLen < 0x1000)) {
      gen_imp_GetFileVersionInfoA(((CHAR *)(gen_frame + 0x1110c)),0,dwLen,((undefined1 *)(gen_frame + 0x10008)));
      gen_imp_VerQueryValueA(((undefined1 *)(gen_frame + 0x10008)),((char *)REFP(0x112abb0)),&(*(LPVOID *)(gen_frame + 0x10004)),&(*(uint *)(gen_frame + 0x10000)));
      if (*((int *)GEN_TOP(((int)(*(LPVOID *)(gen_frame + 0x10004)) + 0x10))) == 0x90016) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00ccb6c0 */
GEN_LIB_GS GEN_FRAME uint F_00ccb6c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccb6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_GS(0x5f8, 8, 4);
  char cVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5f0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5f4));
  F_00c4720f(((char *)(gen_frame + 0x470)),((char *)REFP(0x112abb4)));
  pcVar2 = ((char *)(gen_frame + 0x470));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x470));
  pcVar2 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar6 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = ((char *)(gen_frame + 0x470));
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x470)),((char *)REFP(0x112abc0)),(uint)REFG(undefined1, 0x15d8bd8));
  pcVar2 = ((char *)(gen_frame + 0x470));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x470));
  pcVar2 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar6 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = ((char *)(gen_frame + 0x470));
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x470)),((char *)REFP(0x112abd4)),(uint)REFG(undefined1, 0x15d8bd9));
  pcVar2 = ((char *)(gen_frame + 0x470));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x470));
  pcVar2 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar6 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = ((char *)(gen_frame + 0x470));
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x470)),((char *)REFP(0x112abec)),REFG(int * PTR32, 0x15d8ba4));
  pcVar2 = ((char *)(gen_frame + 0x470));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x470));
  pcVar2 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar6 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = ((char *)(gen_frame + 0x470));
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0xc))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
  if (uVar3 == 0) {
    F_00c4720f(((char *)(gen_frame + 0x470)),((char *)REFP(0x112ac18)),(*(uint *)(gen_frame + 0x0)));
    pcVar2 = ((char *)(gen_frame + 0x470));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x470));
    pcVar2 = ((char *)GEN_TOP((param_1 - 1)));
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = ((char *)(gen_frame + 0x470));
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    uVar4 = 0;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
    if ((*(uint *)(gen_frame + 0x0)) != 0) {
      do {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x10))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,uVar4,((undefined1 *)(gen_frame + 0x4)));
        if (uVar3 == 0) {
          F_00c4720f(((char *)(gen_frame + 0x470)),((char *)REFP(0x112ac44)),uVar4,
                   ((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x204)),(*(undefined4 *)(gen_frame + 0x404)),(uint)(*(ushort *)(gen_frame + 0x40a)),(*(undefined4 *)(gen_frame + 0x41c)));
        }
        else {
          F_00c4720f(((char *)(gen_frame + 0x470)),((char *)REFP(0x112ac30)),uVar4);
        }
        pcVar2 = ((char *)(gen_frame + 0x470));
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x470));
        pcVar2 = ((char *)GEN_TOP((param_1 - 1)));
        do {
          pcVar6 = pcVar2 + 1;
          pcVar2 = pcVar2 + 1;
        } while (*pcVar6 != '\0');
        pcVar6 = ((char *)(gen_frame + 0x470));
        for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar2 = pcVar2 + 4;
        }
        uVar4 = uVar4 + 1;
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar2 = pcVar2 + 1;
        }
      } while (uVar4 < (*(uint *)(gen_frame + 0x0)));
    }
    F_00c48350(&(*(undefined4 *)(gen_frame + 0x430)),0,0x40);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x38))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x430)));
    F_00c4720f(((char *)(gen_frame + 0x470)),((char *)REFP(0x112ac80)),(*(undefined4 *)(gen_frame + 0x430)),(*(undefined4 *)(gen_frame + 0x434)),(*(undefined4 *)(gen_frame + 0x438)),(*(undefined4 *)(gen_frame + 0x43c)));
    pcVar2 = ((char *)(gen_frame + 0x470));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x470));
    pcVar2 = ((char *)GEN_TOP((param_1 - 1)));
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = ((char *)(gen_frame + 0x470));
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
    F_00c4720f(((char *)(gen_frame + 0x470)),((char *)REFP(0x112ac98)),(*(undefined4 *)(gen_frame + 0x440)),(*(undefined4 *)(gen_frame + 0x444)));
    pcVar2 = ((char *)(gen_frame + 0x470));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x470));
    pcVar2 = ((char *)GEN_TOP((param_1 - 1)));
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = ((char *)(gen_frame + 0x470));
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
    F_00c4720f(((char *)(gen_frame + 0x470)),((char *)REFP(0x112acb0)),(*(undefined4 *)(gen_frame + 0x448)),(*(undefined4 *)(gen_frame + 0x44c)),(*(undefined4 *)(gen_frame + 0x450)));
    pcVar2 = ((char *)(gen_frame + 0x470));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x470));
    pcVar2 = ((char *)GEN_TOP((param_1 - 1)));
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = ((char *)(gen_frame + 0x470));
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
    F_00c4720f(((char *)(gen_frame + 0x470)),((char *)REFP(0x112acd0)),(*(undefined4 *)(gen_frame + 0x454)),(*(undefined4 *)(gen_frame + 0x458)),(*(undefined4 *)(gen_frame + 0x45c)));
    pcVar2 = ((char *)(gen_frame + 0x470));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x470));
    pcVar2 = ((char *)GEN_TOP((param_1 - 1)));
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = ((char *)(gen_frame + 0x470));
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
    F_00c4720f(((char *)(gen_frame + 0x470)),((char *)REFP(0x112acf0)),(*(undefined4 *)(gen_frame + 0x460)),(*(undefined4 *)(gen_frame + 0x464)));
    pcVar2 = ((char *)(gen_frame + 0x470));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x470));
    pcVar2 = ((char *)GEN_TOP((param_1 - 1)));
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
  }
  else {
    F_00c4720f(((char *)(gen_frame + 0x470)),((char *)REFP(0x112ac00)),uVar3);
    pcVar2 = ((char *)(gen_frame + 0x470));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x470));
    pcVar2 = ((char *)GEN_TOP((param_1 - 1)));
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
  }
  pcVar6 = ((char *)(gen_frame + 0x470));
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  return uVar3;
}

/* ref: FUN_00ccbb70 */
GEN_LIB GEN_FRAME unsigned int F_00ccbb70(void)
{
  GEN_ENTER(0xccbb70u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  undefined * rclsid;
  HRESULT HVar2;
  
  if (REFG(char, 0x15d8bd8) != '\0') {
    if (REFG(int * PTR32, 0x15d8bbc) != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8bbc) + 0x48))))(REFG(int * PTR32, 0x15d8bbc) GEN_EDX_ARG);
      REFG(int * PTR32, 0x15d8bbc) = ((int *)GEN_TOP(0x0));
    }
    if (REFG(int * PTR32, 0x15d8ba4) != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x30))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 8))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG);
      REFG(int * PTR32, 0x15d8ba4) = ((int *)GEN_TOP(0x0));
    }
    puVar1 = REFG(undefined4 * PTR32, 0x15d8bb0);
    if (REFG(undefined4 * PTR32, 0x15d8bb0) != ((undefined4 *)GEN_TOP(0x0))) {
      *REFG(undefined4 * PTR32, 0x15d8bb0) = (*(undefined * PTR32 (*)[3])REFP(0x112ad94));
      F_00406810(puVar1);
      REFG(undefined4 * PTR32, 0x15d8bb0) = ((undefined4 *)GEN_TOP(0x0));
    }
    rclsid = (undefined *)&REFG(undefined, 0x112ad80);
    if (((byte)REFG(undefined4, 0x15d8bb4) & 1) == 0) {
      rclsid = (undefined *)&REFG(undefined, 0x112ad70);
    }
    HVar2 = gen_imp_CoGetClassObject(rclsid,1,(LPVOID)0x0,(undefined *)&REFG(undefined, 0x1082394),&(*(int * PTR32 *)(gen_frame + 0x0)));
    if (-1 < HVar2) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x10))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    if (REFG(int, 0x15d8bb8) != 0) {
      F_00406810(REFG(int, 0x15d8bb8));
      REFG(int, 0x15d8bb8) = 0;
    }
    if (REFG(int, 0x15d8bc4) != 0) {
      F_00406810(REFG(int, 0x15d8bc4));
      REFG(int, 0x15d8bc4) = 0;
    }
    if (REFG(int, 0x15d8bc8) != 0) {
      F_00406810(REFG(int, 0x15d8bc8));
      REFG(int, 0x15d8bc8) = 0;
    }
    gen_imp_CoUninitialize();
    F_00ce45c0();
    REFG(char, 0x15d8bd8) = '\0';
  }
  return;
}

/* ref: FUN_00ccbc80 */
GEN_LIB_GS GEN_FRAME uint F_00ccbc80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xccbc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112ad34)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112ad14)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00ccbd20 */
GEN_LIB_GS GEN_FRAME byte F_00ccbd20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccbd20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_GS(0x83c, 4, 4);
  int iVar1;
  HRESULT HVar2;
  uint uVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x834)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x838));
  F_00ccb5e0();
  if (REFG(char, 0x15d8bd8) != '\0') {
    return 1;
  }
  F_00ce45a0();
  gen_imp_CoInitializeEx((LPVOID)0x0,0);
  (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(0x0));
  if ((REFG(undefined4, 0x15d8bb4) & 1) == 0) {
LAB_00ccbda5: ;
    HVar2 = gen_imp_CoGetClassObject(&REFG(undefined, 0x112ad70),1,0,&REFG(undefined, 0x1082394),&(*(int * PTR32 *)(gen_frame + 0x4)));
    if (HVar2 < 0) goto LAB_00ccbdf8;
  }
  else {
    HVar2 = gen_imp_CoGetClassObject(&REFG(undefined, 0x112ad80),1,0,&REFG(undefined, 0x1082394),&(*(int * PTR32 *)(gen_frame + 0x4)));
    if (HVar2 < 0) {
      REFG(undefined4, 0x15d8bb4) = 0;
    }
    if ((REFG(undefined4, 0x15d8bb4) & 1) == 0) goto LAB_00ccbda5;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x10))))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar3 = F_00ccc110(&REFG(int * PTR32, 0x15d8ba4),REFG(undefined4, 0x15d8bb4),*((undefined4 *)GEN_TOP((param_1 + 0x54))));
  if (uVar3 == 0) {
    (*(uint *)(gen_frame + 0x0)) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0xc))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
    uVar4 = 0;
    uVar3 = 0xffffffff;
    if ((*(uint *)(gen_frame + 0x0)) != 0) {
      do {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x10))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,uVar4,((undefined1 *)(gen_frame + 0x8)));
        if (((*(uint *)(gen_frame + 0x408)) & 8) != 0) {
          REFG(undefined4, 0x134c7e4) = (uint)(*(ushort *)(gen_frame + 0x40e));
          REFG(undefined4, 0x134c7e8) = (*(undefined4 *)(gen_frame + 0x410));
          *(undefined4 *)&REFG(undefined, 0x15d8bd4) = (*(undefined4 *)(gen_frame + 0x420));
          uVar3 = uVar4;
          break;
        }
        if ((*(uint *)(gen_frame + 0x408)) != 0) {
          REFG(undefined4, 0x134c7e4) = (uint)(*(ushort *)(gen_frame + 0x40e));
          REFG(undefined4, 0x134c7e8) = (*(undefined4 *)(gen_frame + 0x410));
          *(undefined4 *)&REFG(undefined, 0x15d8bd4) = (*(undefined4 *)(gen_frame + 0x420));
          uVar3 = uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (*(uint *)(gen_frame + 0x0)));
      if (uVar3 != 0xffffffff) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x2c))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG);
        uVar3 = *((uint *)GEN_TOP((param_1 + 0x38)));
        if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
          F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
        }
        if (REFG(char, 0x15d7798) != '\0') {
          if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
            F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
          }
          uVar3 = (uint)REFG(undefined1, 0x15d82b0);
        }
        if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
          REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
        }
        REFG(void * PTR32, 0x15d8bb8) = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,uVar3 * 4,"CDev.Engine.Sd.SoundDriver",0,0,
                                          0x10)));
        F_00c48350(REFG(void * PTR32, 0x15d8bb8),0,uVar3 * 4);
        iVar1 = *((int *)GEN_TOP((param_1 + 0x3c)));
        REFG(undefined4, 0x15d8bc0) = uVar3;
        if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
          REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
        }
        REFG(undefined4, 0x15d8bc8) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                 (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,iVar1 * 4,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
        iVar1 = *((int *)GEN_TOP((param_1 + 0x3c)));
        if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
          REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
        }
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                          (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,iVar1 * 4,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
        REFG(undefined4, 0x15d8bcc) = 0;
        *(undefined4 *)&REFG(undefined, 0x15d8bd0) = 0;
        REFG(undefined4, 0x15d8bc4) = uVar3;
        *(undefined4 *)&REFG(undefined, 0x134c7f0) = *((undefined4 *)GEN_TOP((param_1 + 0x58)));
        REFG(char, 0x15d8bd8) = 1;
        return 1;
      }
    }
    (*(undefined1 *)(gen_frame + 0x832)) = 0;
    F_00c472ec(((char *)(gen_frame + 0x434)),0x400,0x3fe,((char *)REFP(0x112aa5c)));
    F_00c473c8(((char *)(gen_frame + 0x434)),0x400,&REFG(undefined, 0x112aa90));
    F_00cbee70(((char *)(gen_frame + 0x434)),2);
    return 0;
  }
LAB_00ccbdf8: ;
  gen_imp_CoUninitialize();
  return 0;
}

/* ref: FUN_00ccc080 */
GEN_LIB GEN_FRAME uint F_00ccc080(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL(0x18, 8);
  int iVar1;
  uint uVar2;
  
  if (REFG(undefined4, 0x15d8bbc) == 0) {
    iVar1 = REFG(int, 0x15d8bac);
    if (REFG(int, 0x15d8bac) == 0) {
      iVar1 = REFG(int, 0x15d8ba8);
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x8));
    (*(undefined4 *)(gen_frame + 0x8)) = 0x80;
    (*(int *)(gen_frame + 0xc)) = iVar1;
    (*(undefined4 *)(gen_frame + 0x0)) = 1;
    if (((REFG(int * PTR32, 0x15d8ba4) != ((int *)GEN_TOP(0x0))) && (iVar1 != 0)) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x24))))
                          (REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,&REFG(undefined4, 0x15d8bbc),param_1,param_2 & 0xffff,0,0,&(*(undefined4 *)(gen_frame + 0x0)),0),
       (int)uVar2 < 0)) {
      F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x13)) GEN_EDX_ARG,((char *)REFP(0x112ab70)),&REFG(undefined, 0x112aa92),
                   ((char *)REFP(0x112ab14)),0x1ec,
                   ((char *)REFP(0x112ab28)));
    }
  }
  return REFG(undefined4, 0x15d8bbc);
}

/* ref: FUN_00ccc110 */
GEN_LIB GEN_FRAME uint F_00ccc110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc110u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * piVar1;
  undefined * rclsid;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  rclsid = (undefined *)&REFG(undefined, 0x112ad80);
  if (((uint)(*(int * PTR32 *)&gen_args[1]) & 1) == 0) {
    rclsid = (undefined *)&REFG(undefined, 0x112ad70);
  }
  uVar2 = gen_imp_CoCreateInstance(rclsid,(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112ad60),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x14))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,piVar1,(*(undefined4 *)&gen_args[2]));
    if (-1 < (int)uVar2) {
      *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
      return uVar2;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioXA2::EngineCallback::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ccc1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xccc1d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioXA2::EngineCallback::vf1 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ccc1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xccc1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioXA2::EngineCallback::vf0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ccc1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xccc1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00ccc230 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc230(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccc230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc250 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc250(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc270 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc270(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc290 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc290(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xccc290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc2b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc2b0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xccc2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00ccc2e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc2e0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xccc2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00ccc310 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc310(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xccc310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc330 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc330(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc350 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc350(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccc350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc370 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc370(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc390 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc390(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc3b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc3b0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xccc3b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc3d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc3d0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xccc3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00ccc400 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc400(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xccc400u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00ccc430 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc430(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xccc430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc450 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc450(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc470 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc470(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccc470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc490 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc490(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccc490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc4b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc4b0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc4d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc4d0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc4f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc4f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc510 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc510(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc530 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc530(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xccc530u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
  return uVar1;
}

/* ref: FUN_00ccc550 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc550(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xccc550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_ARG,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00ccc570 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc570(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x20))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc590 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc590(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccc590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc5b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc5b0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc5d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc5d0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc5f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc5f0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccc5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc610 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc610(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xccc610u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00ccc630 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc630(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc650 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc650(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xccc650u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: FUN_00ccc670 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc670(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xccc670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc690 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc690(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x20))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc6b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc6b0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc6d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc6d0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x28))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc6f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc6f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xccc6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x2c))))(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00ccc720 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc720(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccc720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc740 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc740(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccc740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc760 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc760(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc780 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc780(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xccc780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc7a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc7a0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc7c0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc7c0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc7c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc7e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc7e0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccc7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc800 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc800(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccc800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x20))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc820 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc820(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xccc820u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00ccc850 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc850(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xccc850u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x28))))(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00ccc880 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc880(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xccc880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x2c))))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc8a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc8a0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xccc8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))
                    (param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00ccc8d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc8d0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10), GEN_P(undefined4 param_12, unsigned int gen_a11), GEN_P(undefined4 param_13, unsigned int gen_a12))
{
  GEN_ENTER(0xccc8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_PIN(undefined4 param_12 = (undefined4)gen_a11;)
  GEN_PIN(undefined4 param_13 = (undefined4)gen_a12;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x34))))
                    (param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_13);
  return uVar1;
}

/* ref: FUN_00ccc930 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc930(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10), GEN_P(undefined4 param_12, unsigned int gen_a11), GEN_P(undefined4 param_13, unsigned int gen_a12), GEN_P(undefined4 param_14, unsigned int gen_a13), GEN_P(undefined4 param_15, unsigned int gen_a14), GEN_P(undefined4 param_16, unsigned int gen_a15), GEN_P(undefined4 param_17, unsigned int gen_a16))
{
  GEN_ENTER(0xccc930u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_PIN(undefined4 param_12 = (undefined4)gen_a11;)
  GEN_PIN(undefined4 param_13 = (undefined4)gen_a12;)
  GEN_PIN(undefined4 param_14 = (undefined4)gen_a13;)
  GEN_PIN(undefined4 param_15 = (undefined4)gen_a14;)
  GEN_PIN(undefined4 param_16 = (undefined4)gen_a15;)
  GEN_PIN(undefined4 param_17 = (undefined4)gen_a16;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x38))))
                    (param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17);
  return uVar1;
}

/* ref: FUN_00ccc9a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc9a0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc9a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x3c))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc9c0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc9c0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x40))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc9e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccc9e0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccc9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x44))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccca00 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccca00(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xccca00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x48))))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccca20 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccca20(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xccca20u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x4c))))(param_1 GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: FUN_00ccca40 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccca40(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xccca40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccca60 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccca60(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccca60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x54))))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccca80 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccca80(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xccca80u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x58))))(param_1 GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: FUN_00cccaa0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cccaa0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcccaa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x5c))))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00cccac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cccac0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcccac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x112ad94));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cccaf0 */
GEN_LIB GEN_FRAME uint F_00cccaf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcccaf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c473c8(param_1,0x400,param_2);
  return uVar1;
}

/* ref: FUN_00cccb10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cccb10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcccb10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  in_ecx[1] = (undefined4)gen_fl2bits(param_2);
  in_ecx[2] = (undefined4)gen_fl2bits(param_2);
  *in_ecx = (*(undefined * PTR32 (*)[7])REFP(0x112adb0));
  in_ecx[4] = 0;
  in_ecx[3] = (undefined4)gen_fl2bits((float)(float10)0);
  in_ecx[5] = 0;
  in_ecx[6] = (undefined4)gen_fl2bits((float)(float10)0);
  in_ecx[8] = 0;
  in_ecx[7] = (undefined4)gen_fl2bits((float)(float10)1);
  return (uint)in_ecx;
}

/* ref: FUN_00cccb40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cccb40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcccb40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[7])REFP(0x112adb0));
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cccb50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcccb50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 4))) = param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  *((float *)GEN_TOP((in_ecx + 8))) = param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x20))) = 0;
  *((float *)GEN_TOP((in_ecx + 0xc))) = (float)(float10)0;
  *((float *)GEN_TOP((in_ecx + 0x18))) = (float)(float10)0;
  *((float *)GEN_TOP((in_ecx + 0x1c))) = (float)(float10)1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cccb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcccb80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  if (this[0x20] != (undefined1)0x0) {
    this[0x20] = (undefined1)0x0;
  }
  if (this[0x22] != (undefined1)0x0) {
    this[0x22] = (undefined1)0x0;
  }
  if (0 < *(int *)(this + 0x10)) {
    iVar1 = *(int *)(this + 0x10) - param_1;
    *(int *)(this + 0x10) = iVar1;
    if (iVar1 < 1) {
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 4) = *(undefined4 *)(this + 8);
      return 0;
    }
    *(float *)(this + 4) =
         ((float)GEN_TOF(((float10)*(float *)(this + 0xc) * (float10)param_1 + (float10)*(float *)(this + 4))))
    ;
  }
  return 0;
}

/* ref: FUN_00cccbd0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cccbd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcccbd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  *((float *)GEN_TOP((in_ecx + 4))) = param_2;
  *((float *)GEN_TOP((in_ecx + 8))) = param_2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf3 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cccbf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcccbf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((((0 < *((int *)GEN_TOP((in_ecx + 0x10)))) || (*((char *)GEN_TOP((in_ecx + 0x20))) != '\0')) ||
      (*((char *)GEN_TOP((in_ecx + 0x22))) != '\0')) && (*((char *)GEN_TOP((in_ecx + 0x23))) == '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cccc10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cccc10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcccc10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x20))) = 1;
  *((float *)GEN_TOP((in_ecx + 0x1c))) = param_2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cccc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcccc30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  float10 fVar1;
  
  *(int *)(this + 0x10) = *(int *)(this + 0x10) - param_1;
  if (*(int *)(this + 0x10) < 1) {
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 4) = *(undefined4 *)(this + 8);
    return 0;
  }
  fVar1 = (float10)param_1;
  if (param_1 < 0) {
    fVar1 = GEN_X87(fVar1 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  *(float *)(this + 4) =
       ((float)GEN_TOF((fVar1 * (float10)*(float *)(this + 0xc) + (float10)*(float *)(this + 4))));
  return 0;
}

/* ref: FUN_00cccc70 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cccc70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcccc70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x23))) = 1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cccc80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcccc80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x23))) = 0;
  return;
}

/* ref: FUN_00cccc90 */
GEN_LIB GEN_FRAME float10 GEN_STDCALL F_00cccc90(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xcccc90u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar1;
  
  fVar1 = GEN_X87((float10)(float)((float10)1 - (float10)param_1 * (float10)param_1));
  return GEN_X87((float10)((float)GEN_TOF(((fVar1 * fVar1) * fVar1))));
}

/* ref: FUN_00ccccc0 */
GEN_LIB GEN_FRAME float10 GEN_STDCALL F_00ccccc0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xccccc0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar1;
  
  fVar1 = GEN_X87((float10)(float)((float10)1 - (float10)param_1 * (float10)param_1));
  return GEN_X87((float10)((float)GEN_TOF(((float10)1 - (float10)((float)GEN_TOF(((fVar1 * fVar1) * fVar1)))))));
}

/* ref: FUN_00ccccf0 */
GEN_LIB GEN_FRAME float10 GEN_STDCALL F_00ccccf0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xccccf0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar1;
  
  fVar1 = GEN_X87((float10)(float)((float10)1 - (float10)param_1));
  fVar1 = GEN_X87((float10)(float)((float10)1 - fVar1 * fVar1));
  return GEN_X87((float10)((float)GEN_TOF(((fVar1 * fVar1) * fVar1))));
}

/* ref: FUN_00cccd20 */
GEN_LIB GEN_FRAME float10 GEN_STDCALL F_00cccd20(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xcccd20u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)1;
  fVar2 = GEN_X87((float10)((float)GEN_TOF((fVar1 - (float10)(float)(fVar1 - (float10)param_1) *
                                   (float10)(float)(fVar1 - (float10)param_1)))));
  return GEN_X87((float10)((float)GEN_TOF((fVar1 - (float10)((float)GEN_TOF(((fVar2 * fVar2) * fVar2)))))));
}

/* ref: FUN_00cccd60 */
GEN_LIB GEN_FRAME float10 GEN_STDCALL F_00cccd60(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xcccd60u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar1;
  
  fVar1 = GEN_X87((float10)(float)((float10)1 - (float10)param_1 * (float10)param_1));
  return GEN_X87((float10)((float)GEN_TOF(((fVar1 * fVar1) * fVar1))));
}

/* ref: FUN_00cccd90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cccd90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcccd90u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  
  if (param_3 == 0) {
    *((float *)GEN_TOP((param_1 + 4))) = param_2;
    *((undefined4 *)GEN_TOP((param_1 + 0x10))) = 0;
    *((float *)GEN_TOP((param_1 + 8))) = param_2;
    return 0;
  }
  *((float *)GEN_TOP((param_1 + 8))) = param_2;
  uVar1 = param_3 & 0xfffffff;
  *((byte *)GEN_TOP((param_1 + 0x21))) = (byte)(param_3 >> 0x1c);
  *((uint *)GEN_TOP((param_1 + 0x10))) = uVar1;
  *((uint *)GEN_TOP((param_1 + 0x14))) = uVar1;
  *((float *)GEN_TOP((param_1 + 0xc))) =
       ((float)GEN_TOF((((float10)param_2 - (float10)*((float *)GEN_TOP((param_1 + 4)))) / (float10)uVar1)));
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  return uVar1;
}

/* ref: FUN_00cccde0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cccde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcccde0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (*((char *)GEN_TOP(((int)this + 0x21))) != '\0') {
    iVar3 = *((int *)GEN_TOP(((int)this + 0x14)));
    iVar4 = iVar3 - *((int *)GEN_TOP(((int)this + 0x10)));
    fVar5 = (float10)iVar4;
    if (iVar4 < 0) {
      fVar5 = GEN_X87(fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    fVar6 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar6 = GEN_X87(fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    fVar1 = (float)(fVar5 / fVar6);
    fVar2 = ((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 8))) -
                                       (float10)*((float *)GEN_TOP(((int)this + 0x18)))))))));
    switch((unsigned int)(uintptr_t)(*((char *)GEN_TOP(((int)this + 0x21))))) {
    case '\x01': ;
      fVar5 = F_00ccccc0(fVar1);
      return GEN_X87(((float)GEN_TOF((fVar5 * (float10)fVar2 + (float10)*((float *)GEN_TOP(((int)this + 0x18)))))));
    case '\x02': ;
      fVar5 = F_00cccd20(fVar1);
      return GEN_X87(((float)GEN_TOF((fVar5 * (float10)fVar2 + (float10)*((float *)GEN_TOP(((int)this + 8)))))));
    case '\x03': ;
      fVar5 = F_00ccccf0(fVar1);
      return GEN_X87(((float)GEN_TOF((fVar5 * (float10)fVar2 + (float10)*((float *)GEN_TOP(((int)this + 0x18)))))));
    case '\x04': ;
      fVar5 = GEN_X87((float10)(float)((float10)1 - (float10)fVar1 * (float10)fVar1));
      return GEN_X87(((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar5 * fVar5) * fVar5))) * (float10)fVar2 +
                    (float10)*((float *)GEN_TOP(((int)this + 8)))))));
    }
  }
  return *((float *)GEN_TOP(((int)this + 4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf4 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cccee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcccee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  
  fVar1 = F_00cccde0(this GEN_EDX_FWD);
  return GEN_X87(((float)GEN_TOF(((float10)fVar1 * (float10)*((float *)GEN_TOP((((int)(uint)(this)) + 0x1c)))))));
}

/* ref: FUN_00cccf00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cccf00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcccf00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x112adb0));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cccf30 */
GEN_LIB GEN_FRAME unsigned int F_00cccf30(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcccf30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cccf50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cccf50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcccf50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  float fVar1;
  
  fVar1 = *(float *)&REFG(undefined, 0x112addc);
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb10(in_ecx + 1 GEN_EDX_FWD,fVar1);
  F_00cccb10(in_ecx + 10 GEN_EDX_ARG,*(float *)&REFG(undefined, 0x112ade0));
  F_00cccb10(in_ecx + 0x13 GEN_EDX_ARG,(float)(float10)1);
  return (uint)in_ecx;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cccfa0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcccfa0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  code * pcVar2;
  
  if (param_3 == 0) {
    pcVar2 = *((gen_code32 *)GEN_TOP((*param_1 + 0x28)));
  }
  else if (param_3 == 1) {
    pcVar2 = *((gen_code32 *)GEN_TOP((*param_1 + 0x2c)));
  }
  else {
    if (param_3 != 2) goto LAB_00cccfd6;
    pcVar2 = *((gen_code32 *)GEN_TOP((*param_1 + 0x30)));
  }
  (*pcVar2)(param_1,(undefined4)gen_fl2bits(param_2),param_4);
LAB_00cccfd6: ;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cccff0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcccff0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  float10 fVar1;
  uint uVar3;
  float10 fVar4;
  
  fVar1 = (float10)0;
  fVar4 = (float10)param_2;
  if (!(fVar1 <= fVar4) == (GEN_ISNAN(fVar4) || GEN_ISNAN(fVar1))) {
    fVar1 = (float10)1;
    if (!(fVar4 <= fVar1) != (GEN_ISNAN(fVar1) || GEN_ISNAN(fVar4))) {
      param_2 = (float)fVar1;
    }
  }
  else {
    param_2 = (float)fVar1;
  }
  fVar1 = ((float10)GEN_TOD(pow((float10)*(double *)&REFG(undefined, 0x1092098),
                               (float10)((float)GEN_TOF((((float10)1 - (float10)param_2) *
                                               (float10)*(double *)&REFG(undefined, 0x10ac278)))))));
  if (param_3 == 0) {
    F_00cccbd0(param_1 + 4 GEN_EDX_FWD,(float)((float10)(float)fVar1 * (float10)*(double *)&REFG(undefined, 0x112b0a0)));
    return 0;
  }
  uVar3 = F_00cccd90(param_1 + 4 GEN_EDX_ARG,
                       (float)((float10)(float)fVar1 * (float10)*(double *)&REFG(undefined, 0x112b0a0)),param_3);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ccd080(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xccd080u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  float10 fVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar1 = (float10)0;
  fVar3 = (float10)param_2;
  if (!(fVar1 <= fVar3) != (GEN_ISNAN(fVar3) || GEN_ISNAN(fVar1))) {
    fVar3 = (float10)(float)fVar1;
  }
  if (param_3 == 0) {
    F_00cccbd0(param_1 + 0x28 GEN_EDX_FWD,(float)fVar3);
    return 0;
  }
  uVar2 = F_00cccd90(param_1 + 0x28 GEN_EDX_ARG,(float)fVar3,param_3);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ccd0d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xccd0d0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  if (param_3 != 0) {
    uVar1 = F_00cccd90(param_1 + 0x4c GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  F_00cccbd0(param_1 + 0x4c GEN_EDX_ARG,param_2);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ccd100(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xccd100u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x28))))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x2c))))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_3),0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_4),0);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf16 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ccd150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xccd150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 4))))(this + 4 GEN_EDX_FWD,*(undefined4 *)&REFG(undefined, 0x112addc));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 4))))(this + 0x28 GEN_EDX_ARG,*(undefined4 *)&REFG(undefined, 0x112ade0));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 4))))
                    (this + 0x4c GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)1));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ccd190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xccd190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0xc))))(this + 4 GEN_EDX_FWD);
  bVar2 = (char)uVar1 != '\0';
  if (bVar2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 8))))(this + 4 GEN_EDX_ARG,param_1);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))))(this + 0x28 GEN_EDX_ARG);
  bVar3 = (char)uVar1 != '\0';
  if (bVar3) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 8))))(this + 0x28 GEN_EDX_ARG,param_1);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 0xc))))(this + 0x4c GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 8))))(this + 0x4c GEN_EDX_ARG,param_1);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
    return uVar1;
  }
  if (bVar3 || bVar2) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00ccd220 */
GEN_LIB GEN_FRAME unsigned int F_00ccd220(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xccd220u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  float fVar1;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar7 = ((float10)GEN_TOD(GEN_X87MATH((float10)(float)((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1080228)),4)));
  fVar3 = (float10)(float)fVar7;
  fVar4 = GEN_X87((float10)(float)(fVar3 * (float10)param_3));
  fVar7 = (float10)1;
  fVar5 = GEN_X87((float10)(float)(fVar3 * fVar3));
  fVar1 = ((float)GEN_TOF((fVar7 / (fVar5 + (fVar4 + fVar7)))));
  fVar8 = GEN_X87(fVar5 * (float10)*(double *)&REFG(undefined, 0x1092098));
  fVar6 = (float10)fVar1;
  *((float *)GEN_TOP((param_1 + 0xc))) = ((float)GEN_TOF(-(fVar6 * (fVar8 - (float10)*(double *)&REFG(undefined, 0x1092098)))));
  *((float *)GEN_TOP((param_1 + 0x10))) = ((float)GEN_TOF(-(((fVar7 - fVar4) + fVar5) * fVar6)));
  fVar7 = GEN_X87((float10)((float)GEN_TOF(GEN_X87(SQRT((float10)param_4)))) * (float10)(float)(fVar3 * (float10)param_3));
  fVar4 = GEN_X87((float10)param_4 * (float10)(float)(fVar3 * fVar3));
  fVar3 = (float10)fVar1;
  *((float *)GEN_TOP(param_1)) = ((float)GEN_TOF((fVar3 * ((fVar7 + (float10)1) + fVar4))));
  *((float *)GEN_TOP((param_1 + 4))) =
       ((float)GEN_TOF((((float10)param_4 * (float10)(double)fVar8 - (float10)*(double *)&REFG(undefined, 0x1092098)) *
              fVar3)));
  *((float *)GEN_TOP((param_1 + 8))) = ((float)GEN_TOF(((((float10)1 - fVar7) + fVar4) * fVar3)));
  return 0;
}

/* ref: FUN_00ccd2f0 */
GEN_LIB GEN_FRAME unsigned int F_00ccd2f0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xccd2f0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  float fVar1;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar7 = ((float10)GEN_TOD(GEN_X87MATH((float10)(float)((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1080228)),4)));
  fVar3 = (float10)(float)fVar7;
  fVar4 = GEN_X87((float10)(float)(fVar3 * (float10)param_3));
  fVar7 = (float10)1;
  fVar5 = GEN_X87((float10)(float)(fVar3 * fVar3));
  fVar1 = ((float)GEN_TOF((fVar7 / (fVar5 + (fVar4 + fVar7)))));
  fVar6 = (float10)fVar1;
  *((float *)GEN_TOP((param_1 + 0xc))) =
       ((float)GEN_TOF(-(fVar6 * (fVar5 * (float10)*(double *)&REFG(undefined, 0x1092098) -
                        (float10)*(double *)&REFG(undefined, 0x1092098)))));
  *((float *)GEN_TOP((param_1 + 0x10))) = ((float)GEN_TOF(-(((fVar7 - fVar4) + fVar5) * fVar6)));
  fVar7 = GEN_X87((float10)((float)GEN_TOF(GEN_X87(SQRT((float10)param_4)))) * (float10)(float)(fVar3 * (float10)param_3));
  fVar4 = (float10)param_4;
  fVar3 = GEN_X87((float10)(float)(fVar3 * fVar3));
  fVar5 = (float10)fVar1;
  *((float *)GEN_TOP(param_1)) = ((float)GEN_TOF((fVar5 * (fVar3 + (fVar4 + fVar7)))));
  *((float *)GEN_TOP((param_1 + 4))) = ((float)GEN_TOF((((fVar3 - fVar4) + (fVar3 - fVar4)) * fVar5)));
  *((float *)GEN_TOP((param_1 + 8))) = ((float)GEN_TOF((((fVar4 - fVar7) + fVar3) * fVar5)));
  return 0;
}

/* ref: FUN_00ccd3b0 */
GEN_LIB GEN_FRAME uint F_00ccd3b0(GEN_P(float * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xccd3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  float10 fVar1;
  
  fVar1 = (float10)0;
  param_1[3] = (float)fVar1;
  param_1[4] = (float)fVar1;
  *param_1 = (float)(float10)1;
  param_1[1] = (float)fVar1;
  param_1[2] = (float)fVar1;
  return (uint)param_1;
}

/* ref: FUN_00ccd3e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ccd3e0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xccd3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  float10 fVar1;
  
  fVar1 = (float10)0;
  param_1[3] = (float)fVar1;
  param_1[4] = (float)fVar1;
  *param_1 = (float)(float10)1;
  param_1[1] = (float)fVar1;
  param_1[2] = (float)fVar1;
  return (uint)param_1;
}

/* ref: FUN_00ccd400 */
GEN_LIB GEN_NOFRAME uint F_00ccd400(void)
{
  GEN_ENTER(0xccd400u, 0u, 0u, 0u, 0u);
  return 1;
}

