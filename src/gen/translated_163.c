#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00cf98a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf98a0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf98a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ccd480();
  return uVar1;
}

/* ref: FUN_00cf98b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf98b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf98b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00cf98f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf98f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf98f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00cf9940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcf9940u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x1131538);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined * PTR32, 0x1131530);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,0);
  }
  F_00cd0850(this GEN_EDX_ARG,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x11312e4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x11314ec));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) - 4 + (int)this))) = *((int *)GEN_TOP((*(int *)this + 4))) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cf99b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf99b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf99b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cf9d00((int)this - *((int *)GEN_TOP(((int)this - 4))) GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cf99d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf99d0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf99d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ccd4c0();
  return uVar1;
}

/* ref: FUN_00cf99e0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf99e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(float param_2, float gen_a2), GEN_P(float param_3, float gen_a3), GEN_P(float param_4, float gen_a4))
{
  GEN_ENTER(0xcf99e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(float param_2 = (float)gen_a2;)
  GEN_PIN(float param_3 = (float)gen_a3;)
  GEN_PIN(float param_4 = (float)gen_a4;)
  F_00ccdbe0((int)this - 4 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_00cf99f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf99f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf99f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00cf9a30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9a30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf9a30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00cf9a80 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *(undefined4 *)this;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)this + 0x28))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  }
  return 0;
}

/* ref: FUN_00cf9ab0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcf9ab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10);
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar2 == 0) {
    if (*((char *)GEN_TOP(((int)this + 0x28))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar4 = ((iVar2 - 1 + param_2) / param_2) * param_2;
  iVar1 = uVar4 + param_1;
  uVar3 = iVar1 - iVar2;
  if (*((uint *)GEN_TOP(((int)this + 0xc))) < uVar3) {
    if (*((char *)GEN_TOP(((int)this + 0x28))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  *((int *)GEN_TOP(((int)this + 8))) = iVar1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = *((uint *)GEN_TOP(((int)this + 0xc))) - uVar3;
  if (*((char *)GEN_TOP(((int)this + 0x28))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar4;
}

/* ref: FUN_00cf9b60 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined1 *)GEN_TOP(((int)this + 0xcc))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb4));
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = *((undefined4 *)GEN_TOP(((int)this + 0xa4)));
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = *((undefined4 *)GEN_TOP(((int)this + 0xa8)));
  if (*((char *)GEN_TOP(((int)this + 0xcc))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb4));
  }
  return 0;
}

/* ref: FUN_00cf9ba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcf9ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cf9ab0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00cf9bb0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cf9bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf9bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[7];
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_1[8];
  *((undefined1 *)GEN_TOP(((int)this + 0x24))) = *(undefined1 *)(param_1 + 9);
  *((undefined1 *)GEN_TOP(((int)this + 0x25))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x25)));
  *((undefined1 *)GEN_TOP(((int)this + 0x26))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x26)));
  *((undefined1 *)GEN_TOP(((int)this + 0x27))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x27)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_1[0xb];
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_1[0xc];
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_1[0xd];
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = param_1[0xe];
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = param_1[0xf];
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = param_1[0x10];
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = param_1[0x11];
  *((undefined1 *)GEN_TOP(((int)this + 0x48))) = *(undefined1 *)(param_1 + 0x12);
  *((undefined1 *)GEN_TOP(((int)this + 0x49))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x49)));
  *((undefined1 *)GEN_TOP(((int)this + 0x4a))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x4a)));
  *((undefined1 *)GEN_TOP(((int)this + 0x4b))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x4b)));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = param_1[0x13];
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = param_1[0x14];
  return 0;
}

/* ref: FUN_00cf9c60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9c60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf9c60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00cf9cb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9cb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf9cb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00cf9d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9d00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf9d00u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00cf9d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9d50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf9d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cf7ed0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cf9d75 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cf9d75(GEN_P(float * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcf9d75u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float * pfVar6;
  float * pfVar7;
  uint uVar8;
  uint uVar9;
  float * pfVar10;
  uint uVar11;
  uint uVar12;
  float * pfVar13;
  float10 fVar14;
  float fVar15;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar5 = (int)gen_fl2bits(param_1[8]);
  uVar11 = (uint)gen_fl2bits(param_1[7]);
  uVar12 = (uint)gen_fl2bits(param_1[6]);
  local_8 = (int)gen_fl2bits(param_1[1]);
  if (param_1[9] != 0.0) {
    uVar12 = 1;
    uVar11 = 1;
  }
  pfVar6 = ((float *)(uintptr_t)gen_fl2bits((float)(param_1[3])));
  if (pfVar6 == ((float *)GEN_TOP(0x0))) {
    local_10 = (uint)gen_fl2bits(param_1[5]) / uVar12;
    if (local_10 != 0) {
      pfVar6 = ((float *)(uintptr_t)gen_fl2bits((float)(param_1[2])));
      param_1 = ((float *)(uintptr_t)gen_fl2bits((float)(*param_1)));
      do {
        uVar8 = 0;
        if (uVar11 != 0) {
          fVar2 = *param_1;
          pfVar7 = pfVar6;
          do {
            fVar15 = fVar2 * *pfVar7;
            uVar9 = 1;
            pfVar7 = pfVar7 + 1;
            if (1 < uVar12) {
              do {
                pfVar10 = param_1 + uVar9;
                fVar3 = *pfVar7;
                pfVar7 = pfVar7 + 1;
                uVar9 = uVar9 + 1;
                fVar15 = fVar15 + *pfVar10 * fVar3;
              } while (uVar9 < uVar12);
            }
            if (iVar5 != 0) {
              fVar15 = fVar15 + *((float *)GEN_TOP((local_8 + uVar8 * 4)));
            }
            *((float *)GEN_TOP((local_8 + uVar8 * 4))) = fVar15;
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar11);
        }
        param_1 = param_1 + uVar12;
        local_8 = local_8 + uVar11 * 4;
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
  }
  else {
    uVar8 = (uint)gen_fl2bits(param_1[5]) / uVar12;
    local_10 = 0;
    if (uVar8 != 0) {
      pfVar7 = ((float *)(uintptr_t)gen_fl2bits((float)(param_1[2])));
      param_1 = ((float *)(uintptr_t)gen_fl2bits((float)(*param_1)));
      do {
        local_c = 0;
        if (uVar11 != 0) {
          fVar14 = (float10)(int)local_10;
          fVar2 = *param_1;
          if ((int)local_10 < 0) {
            fVar14 = GEN_X87(fVar14 + (float10)*(float *)&REFG(undefined, 0x1088110));
          }
          pfVar10 = pfVar6;
          pfVar13 = pfVar7;
          do {
            fVar15 = *pfVar10;
            fVar3 = *pfVar13;
            uVar9 = 1;
            pfVar10 = pfVar10 + 1;
            pfVar13 = pfVar13 + 1;
            fVar15 = (fVar15 * (float)fVar14 + fVar3) * fVar2;
            if (1 < uVar12) {
              do {
                fVar3 = *pfVar10;
                fVar4 = *pfVar13;
                pfVar1 = param_1 + uVar9;
                pfVar10 = pfVar10 + 1;
                pfVar13 = pfVar13 + 1;
                uVar9 = uVar9 + 1;
                fVar15 = fVar15 + (fVar3 * (float)fVar14 + fVar4) * *pfVar1;
              } while (uVar9 < uVar12);
            }
            if (iVar5 == 0) {
              *((float *)GEN_TOP((local_8 + local_c * 4))) = fVar15;
            }
            else {
              pfVar1 = ((float *)GEN_TOP((local_8 + local_c * 4)));
              *pfVar1 = fVar15 + *pfVar1;
            }
            local_c = local_c + 1;
          } while (local_c < uVar11);
        }
        param_1 = param_1 + uVar12;
        local_8 = local_8 + uVar11 * 4;
        local_10 = local_10 + 1;
      } while (local_10 < uVar8);
    }
  }
  return 0;
}

/* ref: FUN_00cf9f10 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cf9f10(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcf9f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  float * pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar4 = ((float *)GEN_TOP(*param_1));
  pfVar3 = ((float *)GEN_TOP(param_1[1]));
  iVar1 = param_1[8];
  iVar5 = param_1[5];
  pfVar2 = ((float *)GEN_TOP(param_1[3]));
  fVar9 = *((float *)GEN_TOP(param_1[2]));
  fVar8 = (((float *)GEN_TOP(param_1[2])))[1];
  if (pfVar2 == ((float *)GEN_TOP(0x0))) {
    if (iVar5 != 0) {
      do {
        fVar6 = *pfVar4;
        iVar5 = iVar5 - 1;
        pfVar4 = pfVar4 + 1;
        fVar10 = fVar6 * fVar9;
        fVar6 = fVar6 * fVar8;
        if (iVar1 == 0) {
          *pfVar3 = fVar10;
        }
        else {
          *pfVar3 = fVar10 + *pfVar3;
          fVar6 = fVar6 + pfVar3[1];
        }
        pfVar3[1] = fVar6;
        pfVar3 = pfVar3 + 2;
      } while (iVar5 != 0);
      return 0;
    }
  }
  else {
    fVar6 = *pfVar2;
    fVar10 = pfVar2[1];
    while (iVar5 != 0) {
      fVar7 = *pfVar4;
      iVar5 = iVar5 - 1;
      pfVar4 = pfVar4 + 1;
      fVar11 = fVar7 * fVar9;
      fVar7 = fVar7 * fVar8;
      if (iVar1 == 0) {
        *pfVar3 = fVar11;
      }
      else {
        *pfVar3 = fVar11 + *pfVar3;
        fVar7 = fVar7 + pfVar3[1];
      }
      pfVar3[1] = fVar7;
      fVar9 = fVar9 + fVar6;
      pfVar3 = pfVar3 + 2;
      fVar8 = fVar10 + fVar8;
    }
  }
  return 0;
}

/* ref: FUN_00cf9fe0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cf9fe0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcf9fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float * pfVar7;
  float * pfVar8;
  float * pfVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  pfVar9 = ((float *)GEN_TOP(param_1[2]));
  pfVar8 = ((float *)GEN_TOP(param_1[1]));
  fVar14 = *pfVar9;
  fVar15 = pfVar9[1];
  fVar16 = pfVar9[2];
  fVar17 = pfVar9[3];
  fVar18 = pfVar9[4];
  fVar13 = pfVar9[5];
  iVar6 = param_1[8];
  pfVar9 = ((float *)GEN_TOP(*param_1));
  iVar10 = param_1[5];
  pfVar7 = ((float *)GEN_TOP(param_1[3]));
  if (pfVar7 == ((float *)GEN_TOP(0x0))) {
    if (iVar10 != 0) {
      do {
        fVar11 = *pfVar9;
        iVar10 = iVar10 - 1;
        pfVar9 = pfVar9 + 1;
        if (iVar6 == 0) {
          *pfVar8 = fVar11 * fVar14;
          pfVar8[1] = fVar11 * fVar15;
          pfVar8[2] = fVar11 * fVar16;
          pfVar8[3] = fVar11 * fVar17;
          pfVar8[4] = fVar11 * fVar18;
          fVar11 = fVar11 * fVar13;
        }
        else {
          *pfVar8 = fVar11 * fVar14 + *pfVar8;
          pfVar8[1] = fVar11 * fVar15 + pfVar8[1];
          pfVar8[2] = fVar11 * fVar16 + pfVar8[2];
          pfVar8[3] = fVar11 * fVar17 + pfVar8[3];
          pfVar8[4] = fVar11 * fVar18 + pfVar8[4];
          fVar11 = fVar11 * fVar13 + pfVar8[5];
        }
        pfVar8[5] = fVar11;
        pfVar8 = pfVar8 + 6;
      } while (iVar10 != 0);
      return 0;
    }
  }
  else {
    fVar11 = *pfVar7;
    fVar1 = pfVar7[1];
    fVar2 = pfVar7[2];
    fVar3 = pfVar7[3];
    fVar4 = pfVar7[4];
    fVar5 = pfVar7[5];
    while (iVar10 != 0) {
      fVar12 = *pfVar9;
      iVar10 = iVar10 - 1;
      pfVar9 = pfVar9 + 1;
      if (iVar6 == 0) {
        *pfVar8 = fVar12 * fVar14;
        pfVar8[1] = fVar12 * fVar15;
        pfVar8[2] = fVar12 * fVar16;
        pfVar8[3] = fVar12 * fVar17;
        pfVar8[4] = fVar12 * fVar18;
        fVar12 = fVar12 * fVar13;
      }
      else {
        *pfVar8 = fVar12 * fVar14 + *pfVar8;
        pfVar8[1] = fVar12 * fVar15 + pfVar8[1];
        pfVar8[2] = fVar12 * fVar16 + pfVar8[2];
        pfVar8[3] = fVar12 * fVar17 + pfVar8[3];
        pfVar8[4] = fVar12 * fVar18 + pfVar8[4];
        fVar12 = fVar12 * fVar13 + pfVar8[5];
      }
      fVar14 = fVar14 + fVar11;
      fVar15 = fVar15 + fVar1;
      fVar16 = fVar16 + fVar2;
      fVar17 = fVar17 + fVar3;
      fVar18 = fVar18 + fVar4;
      pfVar8[5] = fVar12;
      pfVar8 = pfVar8 + 6;
      fVar13 = fVar5 + fVar13;
    }
  }
  return 0;
}

/* ref: FUN_00cfa210 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cfa210(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfa210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float * pfVar12;
  int iVar13;
  float * pfVar14;
  int iVar15;
  float * pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pfVar12 = ((float *)GEN_TOP(param_1[2]));
  local_24 = pfVar12[4];
  fVar22 = pfVar12[3];
  fVar19 = *pfVar12;
  fVar20 = pfVar12[1];
  fVar21 = pfVar12[2];
  pfVar16 = ((float *)GEN_TOP(*param_1));
  pfVar14 = ((float *)GEN_TOP(param_1[1]));
  iVar13 = param_1[8];
  local_20 = pfVar12[5];
  local_1c = pfVar12[6];
  local_18 = pfVar12[7];
  local_14 = pfVar12[8];
  local_10 = pfVar12[9];
  local_c = pfVar12[10];
  local_8 = pfVar12[0xb];
  pfVar12 = ((float *)GEN_TOP(param_1[3]));
  iVar15 = param_1[5];
  if (pfVar12 == ((float *)GEN_TOP(0x0))) {
    if (iVar15 != 0) {
      iVar15 = (iVar15 - 1U >> 1) + 1;
      do {
        fVar17 = *pfVar16;
        fVar1 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        fVar23 = fVar1 * fVar20 + fVar17 * fVar19;
        if (iVar13 == 0) {
          *pfVar14 = fVar23;
          pfVar14[1] = fVar1 * fVar22 + fVar17 * fVar21;
          pfVar14[2] = fVar1 * local_20 + fVar17 * local_24;
          pfVar14[3] = fVar1 * local_18 + fVar17 * local_1c;
          pfVar14[4] = fVar1 * local_10 + fVar17 * local_14;
          fVar17 = fVar1 * local_8 + fVar17 * local_c;
        }
        else {
          *pfVar14 = fVar23 + *pfVar14;
          pfVar14[1] = (fVar1 * fVar22 + fVar17 * fVar21) + pfVar14[1];
          pfVar14[2] = (fVar1 * local_20 + fVar17 * local_24) + pfVar14[2];
          pfVar14[3] = (fVar1 * local_18 + fVar17 * local_1c) + pfVar14[3];
          pfVar14[4] = (fVar1 * local_10 + fVar17 * local_14) + pfVar14[4];
          fVar17 = (fVar1 * local_8 + fVar17 * local_c) + pfVar14[5];
        }
        pfVar14[5] = fVar17;
        pfVar14 = pfVar14 + 6;
        iVar15 = iVar15 - 1;
      } while (iVar15 != 0);
      return 0;
    }
  }
  else {
    fVar17 = *pfVar12;
    fVar1 = pfVar12[1];
    fVar23 = pfVar12[2];
    fVar2 = pfVar12[3];
    fVar3 = pfVar12[4];
    fVar4 = pfVar12[5];
    fVar5 = pfVar12[6];
    fVar6 = pfVar12[7];
    fVar7 = pfVar12[8];
    fVar8 = pfVar12[9];
    fVar9 = pfVar12[10];
    fVar10 = pfVar12[0xb];
    if (iVar15 != 0) {
      iVar15 = (iVar15 - 1U >> 1) + 1;
      do {
        fVar18 = *pfVar16;
        fVar11 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        fVar24 = fVar11 * fVar20 + fVar18 * fVar19;
        if (iVar13 == 0) {
          *pfVar14 = fVar24;
          pfVar14[1] = fVar11 * fVar22 + fVar18 * fVar21;
          pfVar14[2] = fVar11 * local_20 + fVar18 * local_24;
          pfVar14[3] = fVar11 * local_18 + fVar18 * local_1c;
          pfVar14[4] = fVar11 * local_10 + fVar18 * local_14;
          fVar18 = fVar11 * local_8 + fVar18 * local_c;
        }
        else {
          *pfVar14 = fVar24 + *pfVar14;
          pfVar14[1] = (fVar11 * fVar22 + fVar18 * fVar21) + pfVar14[1];
          pfVar14[2] = (fVar11 * local_20 + fVar18 * local_24) + pfVar14[2];
          pfVar14[3] = (fVar11 * local_18 + fVar18 * local_1c) + pfVar14[3];
          pfVar14[4] = (fVar11 * local_10 + fVar18 * local_14) + pfVar14[4];
          fVar18 = (fVar11 * local_8 + fVar18 * local_c) + pfVar14[5];
        }
        pfVar14[5] = fVar18;
        local_24 = fVar3 + local_24;
        local_20 = fVar4 + local_20;
        fVar22 = fVar2 + fVar22;
        fVar19 = fVar19 + fVar17;
        fVar20 = fVar20 + fVar1;
        fVar21 = fVar21 + fVar23;
        local_1c = fVar5 + local_1c;
        local_18 = fVar6 + local_18;
        local_14 = fVar7 + local_14;
        local_10 = fVar8 + local_10;
        local_c = fVar9 + local_c;
        local_8 = fVar10 + local_8;
        pfVar14 = pfVar14 + 6;
        iVar15 = iVar15 - 1;
      } while (iVar15 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00cfa670 */
GEN_LIB GEN_NOFRAME float * GEN_STDCALL F_00cfa670(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfa670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float * pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  float * pfVar17;
  float * pfVar18;
  int iVar19;
  int iVar20;
  float * pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pfVar17 = *((float * PTR32 *)GEN_TOP((param_1 + 8)));
  local_30 = pfVar17[2];
  fVar24 = *pfVar17;
  fVar25 = pfVar17[1];
  pfVar18 = *((float * PTR32 *)GEN_TOP(param_1));
  local_2c = pfVar17[3];
  local_28 = pfVar17[4];
  local_24 = pfVar17[5];
  local_20 = pfVar17[6];
  local_1c = pfVar17[7];
  local_18 = pfVar17[8];
  local_14 = pfVar17[9];
  local_10 = pfVar17[10];
  iVar16 = *((int *)GEN_TOP((param_1 + 0x20)));
  local_c = pfVar17[0xb];
  pfVar17 = *((float * PTR32 *)GEN_TOP((param_1 + 0xc)));
  pfVar21 = *((float * PTR32 *)GEN_TOP((param_1 + 4)));
  iVar20 = *((int *)GEN_TOP((param_1 + 0x14)));
  if (pfVar17 == ((float *)GEN_TOP(0x0))) {
    if (iVar20 != 0) {
      iVar19 = (iVar20 - 1U) / 6 + 1;
      do {
        pfVar17 = pfVar18 + 5;
        pfVar1 = pfVar18 + 1;
        fVar22 = *pfVar18;
        pfVar2 = pfVar18 + 2;
        pfVar3 = pfVar18 + 3;
        pfVar4 = pfVar18 + 4;
        pfVar18 = pfVar18 + 6;
        fVar26 = ((((*pfVar1 * fVar25 + fVar22 * fVar24) + *pfVar2 * local_30) + *pfVar3 * local_2c)
                 + *pfVar4 * local_28) + *pfVar17 * local_24;
        fVar22 = ((((*pfVar1 * local_1c + fVar22 * local_20) + *pfVar2 * local_18) +
                  *pfVar3 * local_14) + *pfVar4 * local_10) + *pfVar17 * local_c;
        if (iVar16 == 0) {
          *pfVar21 = fVar26;
        }
        else {
          *pfVar21 = fVar26 + *pfVar21;
          fVar22 = fVar22 + pfVar21[1];
        }
        pfVar21[1] = fVar22;
        pfVar21 = pfVar21 + 2;
        iVar19 = iVar19 - 1;
      } while (iVar19 != 0);
      return ((float *)GEN_TOP(((iVar20 - 1U) * -0x55555555)));
    }
  }
  else {
    fVar22 = *pfVar17;
    fVar26 = pfVar17[1];
    fVar5 = pfVar17[2];
    fVar6 = pfVar17[3];
    fVar7 = pfVar17[4];
    fVar8 = pfVar17[5];
    fVar9 = pfVar17[6];
    fVar10 = pfVar17[7];
    fVar11 = pfVar17[8];
    fVar12 = pfVar17[9];
    fVar13 = pfVar17[10];
    fVar14 = pfVar17[0xb];
    if (iVar20 != 0) {
      pfVar17 = ((float *)GEN_TOP(((iVar20 - 1U) * -0x55555555)));
      iVar20 = (iVar20 - 1U) / 6 + 1;
      do {
        fVar15 = pfVar18[5];
        pfVar1 = pfVar18 + 1;
        fVar23 = *pfVar18;
        pfVar2 = pfVar18 + 2;
        pfVar3 = pfVar18 + 3;
        pfVar4 = pfVar18 + 4;
        fVar27 = (((*pfVar1 * fVar25 + fVar23 * fVar24) + *pfVar2 * local_30) + *pfVar3 * local_2c)
                 + *pfVar4 * local_28;
        pfVar18 = pfVar18 + 6;
        fVar23 = ((((*pfVar1 * local_1c + fVar23 * local_20) + *pfVar2 * local_18) +
                  *pfVar3 * local_14) + *pfVar4 * local_10) + fVar15 * local_c;
        if (iVar16 == 0) {
          *pfVar21 = fVar27 + fVar15 * local_24;
        }
        else {
          *pfVar21 = (fVar27 + fVar15 * local_24) + *pfVar21;
          fVar23 = fVar23 + pfVar21[1];
        }
        pfVar21[1] = fVar23;
        local_30 = fVar5 + local_30;
        local_2c = fVar6 + local_2c;
        local_28 = fVar7 + local_28;
        fVar24 = fVar22 + fVar24;
        fVar25 = fVar26 + fVar25;
        local_24 = fVar8 + local_24;
        local_20 = fVar9 + local_20;
        local_1c = fVar10 + local_1c;
        local_18 = fVar11 + local_18;
        local_14 = fVar12 + local_14;
        local_10 = fVar13 + local_10;
        pfVar21 = pfVar21 + 2;
        iVar20 = iVar20 - 1;
        local_c = fVar14 + local_c;
      } while (iVar20 != 0);
    }
  }
  return pfVar17;
}

/* ref: FUN_00cfaa50 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cfaa50(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfaa50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float * pfVar25;
  int iVar26;
  float * pfVar27;
  int iVar28;
  float * pfVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pfVar25 = ((float *)GEN_TOP(param_1[2]));
  local_58 = pfVar25[3];
  local_54 = pfVar25[4];
  local_50 = pfVar25[5];
  local_4c = pfVar25[6];
  local_48 = pfVar25[7];
  local_44 = pfVar25[8];
  local_40 = pfVar25[9];
  local_3c = pfVar25[10];
  local_38 = pfVar25[0xb];
  local_34 = pfVar25[0xc];
  fVar35 = pfVar25[1];
  fVar36 = pfVar25[2];
  fVar32 = *pfVar25;
  local_30 = pfVar25[0xd];
  pfVar29 = ((float *)GEN_TOP(*param_1));
  pfVar27 = ((float *)GEN_TOP(param_1[1]));
  iVar26 = param_1[8];
  local_2c = pfVar25[0xe];
  local_28 = pfVar25[0xf];
  local_24 = pfVar25[0x10];
  local_20 = pfVar25[0x11];
  local_1c = pfVar25[0x12];
  local_18 = pfVar25[0x13];
  local_14 = pfVar25[0x14];
  local_10 = pfVar25[0x15];
  local_c = pfVar25[0x16];
  local_8 = pfVar25[0x17];
  pfVar25 = ((float *)GEN_TOP(param_1[3]));
  iVar28 = param_1[5];
  if (pfVar25 == ((float *)GEN_TOP(0x0))) {
    if (iVar28 != 0) {
      iVar28 = (iVar28 - 1U >> 2) + 1;
      do {
        fVar30 = pfVar29[1];
        fVar1 = *pfVar29;
        fVar2 = pfVar29[2];
        fVar3 = pfVar29[3];
        fVar37 = ((fVar30 * fVar35 + fVar1 * fVar32) + fVar2 * fVar36) + fVar3 * local_58;
        fVar33 = ((fVar30 * local_50 + fVar1 * local_54) + fVar2 * local_4c) + fVar3 * local_48;
        pfVar29 = pfVar29 + 4;
        if (iVar26 == 0) {
          *pfVar27 = fVar37;
          pfVar27[1] = fVar33;
          pfVar27[2] = ((fVar30 * local_40 + fVar1 * local_44) + fVar2 * local_3c) +
                       fVar3 * local_38;
          pfVar27[3] = ((fVar30 * local_30 + fVar1 * local_34) + fVar2 * local_2c) +
                       fVar3 * local_28;
          pfVar27[4] = ((fVar30 * local_20 + fVar1 * local_24) + fVar2 * local_1c) +
                       fVar3 * local_18;
          fVar30 = ((fVar30 * local_10 + fVar1 * local_14) + fVar2 * local_c) + fVar3 * local_8;
        }
        else {
          *pfVar27 = fVar37 + *pfVar27;
          pfVar27[1] = fVar33 + pfVar27[1];
          pfVar27[2] = (((fVar30 * local_40 + fVar1 * local_44) + fVar2 * local_3c) +
                       fVar3 * local_38) + pfVar27[2];
          pfVar27[3] = (((fVar30 * local_30 + fVar1 * local_34) + fVar2 * local_2c) +
                       fVar3 * local_28) + pfVar27[3];
          pfVar27[4] = (((fVar30 * local_20 + fVar1 * local_24) + fVar2 * local_1c) +
                       fVar3 * local_18) + pfVar27[4];
          fVar30 = (((fVar30 * local_10 + fVar1 * local_14) + fVar2 * local_c) + fVar3 * local_8) +
                   pfVar27[5];
        }
        pfVar27[5] = fVar30;
        pfVar27 = pfVar27 + 6;
        iVar28 = iVar28 - 1;
      } while (iVar28 != 0);
      return 0;
    }
  }
  else {
    fVar30 = *pfVar25;
    fVar1 = pfVar25[1];
    fVar2 = pfVar25[2];
    fVar3 = pfVar25[3];
    fVar33 = pfVar25[4];
    fVar37 = pfVar25[5];
    fVar4 = pfVar25[6];
    fVar5 = pfVar25[7];
    fVar6 = pfVar25[8];
    fVar7 = pfVar25[9];
    fVar8 = pfVar25[10];
    fVar9 = pfVar25[0xb];
    fVar10 = pfVar25[0xc];
    fVar11 = pfVar25[0xd];
    fVar12 = pfVar25[0xe];
    fVar13 = pfVar25[0xf];
    fVar14 = pfVar25[0x10];
    fVar15 = pfVar25[0x11];
    fVar16 = pfVar25[0x12];
    fVar17 = pfVar25[0x13];
    fVar18 = pfVar25[0x14];
    fVar19 = pfVar25[0x15];
    fVar20 = pfVar25[0x16];
    fVar21 = pfVar25[0x17];
    if (iVar28 != 0) {
      iVar28 = (iVar28 - 1U >> 2) + 1;
      do {
        fVar31 = pfVar29[1];
        fVar22 = *pfVar29;
        fVar23 = pfVar29[2];
        fVar24 = pfVar29[3];
        fVar38 = ((fVar31 * fVar35 + fVar22 * fVar32) + fVar23 * fVar36) + fVar24 * local_58;
        fVar34 = ((fVar31 * local_50 + fVar22 * local_54) + fVar23 * local_4c) + fVar24 * local_48;
        pfVar29 = pfVar29 + 4;
        if (iVar26 == 0) {
          *pfVar27 = fVar38;
          pfVar27[1] = fVar34;
          pfVar27[2] = ((fVar31 * local_40 + fVar22 * local_44) + fVar23 * local_3c) +
                       fVar24 * local_38;
          pfVar27[3] = ((fVar31 * local_30 + fVar22 * local_34) + fVar23 * local_2c) +
                       fVar24 * local_28;
          pfVar27[4] = ((fVar31 * local_20 + fVar22 * local_24) + fVar23 * local_1c) +
                       fVar24 * local_18;
          fVar31 = ((fVar31 * local_10 + fVar22 * local_14) + fVar23 * local_c) + fVar24 * local_8;
        }
        else {
          *pfVar27 = fVar38 + *pfVar27;
          pfVar27[1] = fVar34 + pfVar27[1];
          pfVar27[2] = (((fVar31 * local_40 + fVar22 * local_44) + fVar23 * local_3c) +
                       fVar24 * local_38) + pfVar27[2];
          pfVar27[3] = (((fVar31 * local_30 + fVar22 * local_34) + fVar23 * local_2c) +
                       fVar24 * local_28) + pfVar27[3];
          pfVar27[4] = (((fVar31 * local_20 + fVar22 * local_24) + fVar23 * local_1c) +
                       fVar24 * local_18) + pfVar27[4];
          fVar31 = (((fVar31 * local_10 + fVar22 * local_14) + fVar23 * local_c) + fVar24 * local_8)
                   + pfVar27[5];
        }
        pfVar27[5] = fVar31;
        local_58 = fVar3 + local_58;
        local_54 = fVar33 + local_54;
        local_50 = fVar37 + local_50;
        local_4c = fVar4 + local_4c;
        local_48 = fVar5 + local_48;
        local_44 = fVar6 + local_44;
        local_40 = fVar7 + local_40;
        local_3c = fVar8 + local_3c;
        local_38 = fVar9 + local_38;
        local_34 = fVar10 + local_34;
        local_30 = fVar11 + local_30;
        local_2c = fVar12 + local_2c;
        local_28 = fVar13 + local_28;
        local_24 = fVar14 + local_24;
        local_20 = fVar15 + local_20;
        fVar35 = fVar1 + fVar35;
        fVar36 = fVar2 + fVar36;
        fVar32 = fVar32 + fVar30;
        local_1c = fVar16 + local_1c;
        local_18 = fVar17 + local_18;
        local_14 = fVar18 + local_14;
        local_10 = fVar19 + local_10;
        local_c = fVar20 + local_c;
        pfVar27 = pfVar27 + 6;
        iVar28 = iVar28 - 1;
        local_8 = fVar21 + local_8;
      } while (iVar28 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00cfb2a0 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cfb2a0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfb2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x4c, 4);
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float * pfVar6;
  float * pfVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  
  (*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48);
  (*(uint *)(gen_frame + 0x0)) = param_1[6];
  iVar1 = *param_1;
  uVar2 = param_1[5];
  iVar3 = param_1[1];
  iVar4 = param_1[8];
  if (param_1[9] != 0) {
    (*(uint *)(gen_frame + 0x0)) = 1;
  }
  switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x0)))) {
  case 1: ;
    pfVar6 = ((float *)GEN_TOP(param_1[3]));
    ((float *)(gen_frame + 0x24))[0] = *((float *)GEN_TOP(param_1[2]));
    if (pfVar6 != ((float *)GEN_TOP(0x0))) {
      ((float *)(gen_frame + 0x4))[0] = *pfVar6;
    }
    break;
  case 2: ;
    pfVar6 = ((float *)GEN_TOP(param_1[2]));
    ((float *)(gen_frame + 0x24))[0] = *pfVar6;
    pfVar7 = ((float *)GEN_TOP(param_1[3]));
    ((float *)(gen_frame + 0x24))[1] = pfVar6[3];
    if (pfVar7 != ((float *)GEN_TOP(0x0))) {
      ((float *)(gen_frame + 0x4))[0] = *pfVar7;
      ((float *)(gen_frame + 0x4))[1] = pfVar7[3];
    }
    break;
  case 3: ;
    pfVar6 = ((float *)GEN_TOP(param_1[2]));
    ((float *)(gen_frame + 0x24))[0] = *pfVar6;
    ((float *)(gen_frame + 0x24))[1] = pfVar6[4];
    pfVar7 = ((float *)GEN_TOP(param_1[3]));
    ((float *)(gen_frame + 0x24))[2] = pfVar6[8];
    if (pfVar7 != ((float *)GEN_TOP(0x0))) {
      ((float *)(gen_frame + 0x4))[0] = *pfVar7;
      ((float *)(gen_frame + 0x4))[1] = pfVar7[4];
      ((float *)(gen_frame + 0x4))[2] = pfVar7[8];
    }
    break;
  case 4: ;
    pfVar6 = ((float *)GEN_TOP(param_1[2]));
    ((float *)(gen_frame + 0x24))[0] = *pfVar6;
    ((float *)(gen_frame + 0x24))[1] = pfVar6[5];
    ((float *)(gen_frame + 0x24))[2] = pfVar6[10];
    pfVar7 = ((float *)GEN_TOP(param_1[3]));
    ((float *)(gen_frame + 0x24))[3] = pfVar6[0xf];
    if (pfVar7 != ((float *)GEN_TOP(0x0))) {
      ((float *)(gen_frame + 0x4))[0] = *pfVar7;
      ((float *)(gen_frame + 0x4))[1] = pfVar7[5];
      ((float *)(gen_frame + 0x4))[2] = pfVar7[10];
      ((float *)(gen_frame + 0x4))[3] = pfVar7[0xf];
    }
    break;
  case 5: ;
    pfVar6 = ((float *)GEN_TOP(param_1[2]));
    ((float *)(gen_frame + 0x24))[0] = *pfVar6;
    ((float *)(gen_frame + 0x24))[1] = pfVar6[6];
    ((float *)(gen_frame + 0x24))[2] = pfVar6[0xc];
    ((float *)(gen_frame + 0x24))[3] = pfVar6[0x12];
    pfVar7 = ((float *)GEN_TOP(param_1[3]));
    (*(float *)(gen_frame + 0x34)) = pfVar6[0x18];
    if (pfVar7 != ((float *)GEN_TOP(0x0))) {
      ((float *)(gen_frame + 0x4))[0] = *pfVar7;
      ((float *)(gen_frame + 0x4))[1] = pfVar7[6];
      ((float *)(gen_frame + 0x4))[2] = pfVar7[0xc];
      ((float *)(gen_frame + 0x4))[3] = pfVar7[0x12];
      (*(float *)(gen_frame + 0x14)) = pfVar7[0x18];
    }
    break;
  case 6: ;
    pfVar6 = ((float *)GEN_TOP(param_1[2]));
    ((float *)(gen_frame + 0x24))[0] = *pfVar6;
    ((float *)(gen_frame + 0x24))[1] = pfVar6[7];
    ((float *)(gen_frame + 0x24))[2] = pfVar6[0xe];
    ((float *)(gen_frame + 0x24))[3] = pfVar6[0x15];
    (*(float *)(gen_frame + 0x34)) = pfVar6[0x1c];
    pfVar7 = ((float *)GEN_TOP(param_1[3]));
    (*(float *)(gen_frame + 0x38)) = pfVar6[0x23];
    if (pfVar7 != ((float *)GEN_TOP(0x0))) {
      ((float *)(gen_frame + 0x4))[0] = *pfVar7;
      ((float *)(gen_frame + 0x4))[1] = pfVar7[7];
      ((float *)(gen_frame + 0x4))[2] = pfVar7[0xe];
      ((float *)(gen_frame + 0x4))[3] = pfVar7[0x15];
      (*(float *)(gen_frame + 0x14)) = pfVar7[0x1c];
      (*(float *)(gen_frame + 0x18)) = pfVar7[0x23];
    }
  }
  uVar5 = 0;
  uVar8 = 0;
  if (param_1[3] == 0) {
    if (3 < (int)uVar2) {
      pfVar6 = ((float *)GEN_TOP((iVar3 + 4)));
      pfVar7 = ((float *)GEN_TOP((iVar1 + 0xc)));
      iVar9 = (uVar2 - 4 >> 2) + 1;
      uVar8 = iVar9 * 4;
      do {
        if (iVar4 == 0) {
          pfVar6[-1] = ((float *)(gen_frame + 0x24))[(int)(uVar5)] * pfVar7[-3];
        }
        else {
          pfVar6[-1] = pfVar6[-1] + ((float *)(gen_frame + 0x24))[(int)(uVar5)] * pfVar7[-3];
        }
        uVar5 = uVar5 + 1;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar5) {
          uVar5 = 0;
        }
        fVar10 = ((float *)(gen_frame + 0x24))[(int)(uVar5)] * *((float *)GEN_TOP(((iVar1 - iVar3) + (int)pfVar6)));
        if (iVar4 == 0) {
          *pfVar6 = fVar10;
        }
        else {
          *pfVar6 = *pfVar6 + fVar10;
        }
        uVar5 = uVar5 + 1;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar5) {
          uVar5 = 0;
        }
        if (iVar4 == 0) {
          pfVar6[1] = ((float *)(gen_frame + 0x24))[(int)(uVar5)] * pfVar7[-1];
        }
        else {
          pfVar6[1] = pfVar6[1] + ((float *)(gen_frame + 0x24))[(int)(uVar5)] * pfVar7[-1];
        }
        uVar5 = uVar5 + 1;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar5) {
          uVar5 = 0;
        }
        fVar10 = ((float *)(gen_frame + 0x24))[(int)(uVar5)] * *pfVar7;
        if (iVar4 != 0) {
          fVar10 = fVar10 + pfVar6[2];
        }
        uVar5 = uVar5 + 1;
        pfVar6[2] = fVar10;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar5) {
          uVar5 = 0;
        }
        pfVar6 = pfVar6 + 4;
        pfVar7 = pfVar7 + 4;
        iVar9 = iVar9 - 1;
      } while (iVar9 != 0);
    }
    if (uVar8 < uVar2) {
      iVar9 = uVar2 - uVar8;
      pfVar6 = ((float *)GEN_TOP((iVar3 + uVar8 * 4)));
      do {
        fVar10 = ((float *)(gen_frame + 0x24))[(int)(uVar5)] * *((float *)GEN_TOP(((int)pfVar6 + (iVar1 - iVar3))));
        if (iVar4 == 0) {
          *pfVar6 = fVar10;
        }
        else {
          *pfVar6 = *pfVar6 + fVar10;
        }
        uVar5 = uVar5 + 1;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar5) {
          uVar5 = 0;
        }
        pfVar6 = pfVar6 + 1;
        iVar9 = iVar9 - 1;
      } while (iVar9 != 0);
      return uVar5;
    }
  }
  else {
    if (3 < (int)uVar2) {
      pfVar6 = ((float *)GEN_TOP((iVar1 + 0xc)));
      pfVar7 = ((float *)GEN_TOP((iVar3 + 4)));
      iVar9 = (uVar2 - 4 >> 2) + 1;
      uVar8 = iVar9 * 4;
      do {
        fVar10 = pfVar6[-3] * ((float *)(gen_frame + 0x24))[(int)(uVar5)];
        ((float *)(gen_frame + 0x24))[(int)(uVar5)] = ((float *)(gen_frame + 0x4))[(int)(uVar5)] + ((float *)(gen_frame + 0x24))[(int)(uVar5)];
        if (iVar4 == 0) {
          pfVar7[-1] = fVar10;
        }
        else {
          pfVar7[-1] = pfVar7[-1] + fVar10;
        }
        uVar5 = uVar5 + 1;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar5) {
          uVar5 = 0;
        }
        fVar10 = *((float *)GEN_TOP(((int)pfVar7 + (iVar1 - iVar3)))) * ((float *)(gen_frame + 0x24))[(int)(uVar5)];
        ((float *)(gen_frame + 0x24))[(int)(uVar5)] = ((float *)(gen_frame + 0x4))[(int)(uVar5)] + ((float *)(gen_frame + 0x24))[(int)(uVar5)];
        if (iVar4 == 0) {
          *pfVar7 = fVar10;
        }
        else {
          *pfVar7 = *pfVar7 + fVar10;
        }
        uVar5 = uVar5 + 1;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar5) {
          uVar5 = 0;
        }
        fVar10 = pfVar6[-1] * ((float *)(gen_frame + 0x24))[(int)(uVar5)];
        ((float *)(gen_frame + 0x24))[(int)(uVar5)] = ((float *)(gen_frame + 0x4))[(int)(uVar5)] + ((float *)(gen_frame + 0x24))[(int)(uVar5)];
        if (iVar4 == 0) {
          pfVar7[1] = fVar10;
        }
        else {
          pfVar7[1] = pfVar7[1] + fVar10;
        }
        uVar5 = uVar5 + 1;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar5) {
          uVar5 = 0;
        }
        fVar10 = *pfVar6 * ((float *)(gen_frame + 0x24))[(int)(uVar5)];
        ((float *)(gen_frame + 0x24))[(int)(uVar5)] = ((float *)(gen_frame + 0x4))[(int)(uVar5)] + ((float *)(gen_frame + 0x24))[(int)(uVar5)];
        if (iVar4 != 0) {
          fVar10 = fVar10 + pfVar7[2];
        }
        uVar5 = uVar5 + 1;
        pfVar7[2] = fVar10;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar5) {
          uVar5 = 0;
        }
        pfVar7 = pfVar7 + 4;
        pfVar6 = pfVar6 + 4;
        iVar9 = iVar9 - 1;
      } while (iVar9 != 0);
    }
    if (uVar8 < uVar2) {
      iVar9 = uVar2 - uVar8;
      pfVar6 = ((float *)GEN_TOP((iVar3 + uVar8 * 4)));
      do {
        fVar10 = *((float *)GEN_TOP(((int)pfVar6 + (iVar1 - iVar3)))) * ((float *)(gen_frame + 0x24))[(int)(uVar5)];
        ((float *)(gen_frame + 0x24))[(int)(uVar5)] = ((float *)(gen_frame + 0x4))[(int)(uVar5)] + ((float *)(gen_frame + 0x24))[(int)(uVar5)];
        if (iVar4 == 0) {
          *pfVar6 = fVar10;
        }
        else {
          *pfVar6 = *pfVar6 + fVar10;
        }
        uVar5 = uVar5 + 1;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar5) {
          uVar5 = 0;
        }
        pfVar6 = pfVar6 + 1;
        iVar9 = iVar9 - 1;
      } while (iVar9 != 0);
    }
  }
  return uVar5;
}

/* ref: FUN_00cfb810 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cfb810(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfb810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float * pfVar7;
  float * pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fStack_28;
  float fStack_24;
  float fStack_18;
  float fStack_14;
  
  pfVar7 = ((float *)GEN_TOP(*param_1));
  pfVar8 = ((float *)GEN_TOP(param_1[1]));
  uVar6 = param_1[5];
  iVar1 = param_1[8];
  pfVar2 = ((float *)GEN_TOP(param_1[2]));
  pfVar3 = ((float *)GEN_TOP(param_1[3]));
  fVar25 = *pfVar2;
  fVar26 = pfVar2[1];
  if (pfVar3 == ((float *)GEN_TOP(0x0))) {
    fStack_28 = *pfVar2;
    fStack_18 = 0.0;
    fStack_14 = 0.0;
    fStack_24 = fVar26;
  }
  else {
    fStack_18 = *pfVar3;
    fStack_28 = *pfVar2 + fStack_18;
    fStack_14 = pfVar3[1];
    fStack_24 = pfVar2[1] + fStack_14;
  }
  fVar27 = fStack_28;
  fVar28 = fStack_24;
  if (((uint)pfVar8 & 0x38) != 0) {
    if ((int)uVar6 < 8) goto LAB_00cfb940;
    do {
      fVar29 = *pfVar7 * fVar25;
      fVar30 = *pfVar7 * fVar26;
      fVar25 = fVar25 + fStack_18;
      fVar26 = fVar26 + fStack_14;
      fVar27 = fVar27 + fStack_18;
      fVar28 = fVar28 + fStack_14;
      pfVar7 = pfVar7 + 1;
      if (iVar1 != 0) {
        fVar29 = fVar29 + *pfVar8;
        fVar30 = fVar30 + pfVar8[1];
      }
      uVar6 = uVar6 - 1;
      *pfVar8 = fVar29;
      pfVar8[1] = fVar30;
      pfVar8 = pfVar8 + 2;
    } while (((uint)pfVar8 & 0x38) != 0);
  }
  if (7 < (int)uVar6) {
    uVar4 = uVar6 & 0xfffffff8;
    uVar6 = uVar6 & 7;
    fVar29 = fStack_18 + fStack_18;
    fVar30 = fStack_14 + fStack_14;
    fVar31 = fStack_18 + fStack_18;
    fVar32 = fStack_14 + fStack_14;
    pfVar7 = pfVar7 + uVar4;
    pfVar8 = pfVar8 + uVar4 * 2;
    iVar5 = -uVar4;
    do {
      pfVar2 = pfVar7 + iVar5;
      pfVar3 = pfVar7 + iVar5 + 4;
      fVar9 = *pfVar2 * fVar25;
      fVar10 = *pfVar2 * fVar26;
      fVar11 = pfVar2[1] * fVar27;
      fVar12 = pfVar2[1] * fVar28;
      fVar13 = pfVar2[2] * (fVar25 + fVar29);
      fVar14 = pfVar2[2] * (fVar26 + fVar30);
      fVar15 = pfVar2[3] * (fVar27 + fVar31);
      fVar16 = pfVar2[3] * (fVar28 + fVar32);
      fVar25 = (fVar25 + fVar29) + fVar29;
      fVar26 = (fVar26 + fVar30) + fVar30;
      fVar27 = (fVar27 + fVar31) + fVar31;
      fVar28 = (fVar28 + fVar32) + fVar32;
      fVar17 = *pfVar3 * fVar25;
      fVar18 = *pfVar3 * fVar26;
      fVar19 = pfVar3[1] * fVar27;
      fVar20 = pfVar3[1] * fVar28;
      fVar25 = fVar25 + fVar29;
      fVar26 = fVar26 + fVar30;
      fVar27 = fVar27 + fVar31;
      fVar28 = fVar28 + fVar32;
      fVar21 = pfVar3[2] * fVar25;
      fVar22 = pfVar3[2] * fVar26;
      fVar23 = pfVar3[3] * fVar27;
      fVar24 = pfVar3[3] * fVar28;
      fVar25 = fVar25 + fVar29;
      fVar26 = fVar26 + fVar30;
      fVar27 = fVar27 + fVar31;
      fVar28 = fVar28 + fVar32;
      if (iVar1 != 0) {
        pfVar2 = pfVar8 + iVar5 * 2;
        fVar9 = fVar9 + *pfVar2;
        fVar10 = fVar10 + pfVar2[1];
        fVar11 = fVar11 + pfVar2[2];
        fVar12 = fVar12 + pfVar2[3];
        pfVar2 = pfVar8 + iVar5 * 2 + 4;
        fVar13 = fVar13 + *pfVar2;
        fVar14 = fVar14 + pfVar2[1];
        fVar15 = fVar15 + pfVar2[2];
        fVar16 = fVar16 + pfVar2[3];
        pfVar2 = pfVar8 + iVar5 * 2 + 8;
        fVar17 = fVar17 + *pfVar2;
        fVar18 = fVar18 + pfVar2[1];
        fVar19 = fVar19 + pfVar2[2];
        fVar20 = fVar20 + pfVar2[3];
        pfVar2 = pfVar8 + iVar5 * 2 + 0xc;
        fVar21 = fVar21 + *pfVar2;
        fVar22 = fVar22 + pfVar2[1];
        fVar23 = fVar23 + pfVar2[2];
        fVar24 = fVar24 + pfVar2[3];
      }
      pfVar2 = pfVar8 + iVar5 * 2;
      *pfVar2 = fVar9;
      pfVar2[1] = fVar10;
      pfVar2[2] = fVar11;
      pfVar2[3] = fVar12;
      pfVar2 = pfVar8 + iVar5 * 2 + 4;
      *pfVar2 = fVar13;
      pfVar2[1] = fVar14;
      pfVar2[2] = fVar15;
      pfVar2[3] = fVar16;
      pfVar2 = pfVar8 + iVar5 * 2 + 8;
      *pfVar2 = fVar17;
      pfVar2[1] = fVar18;
      pfVar2[2] = fVar19;
      pfVar2[3] = fVar20;
      pfVar2 = pfVar8 + iVar5 * 2 + 0xc;
      *pfVar2 = fVar21;
      pfVar2[1] = fVar22;
      pfVar2[2] = fVar23;
      pfVar2[3] = fVar24;
      iVar5 = iVar5 + 8;
    } while (iVar5 != 0);
  }
LAB_00cfb940: ;
  while ((uVar6 & 7) != 0) {
    fVar27 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    uVar6 = uVar6 - 1;
    fVar28 = fVar27 * fVar25;
    fVar27 = fVar27 * fVar26;
    fVar25 = fVar25 + fStack_18;
    fVar26 = fVar26 + fStack_14;
    if (iVar1 != 0) {
      fVar28 = fVar28 + *pfVar8;
      fVar27 = fVar27 + pfVar8[1];
    }
    *pfVar8 = fVar28;
    pfVar8[1] = fVar27;
    pfVar8 = pfVar8 + 2;
  }
  return 0;
}

/* ref: FUN_00cfb9d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cfb9d0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfb9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x78, 8);
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float * pfVar5;
  float * pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  (*(float * PTR32 *)(gen_frame + 0x70)) = ((float *)GEN_TOP(param_1[1]));
  iVar1 = param_1[8];
  (*(float * PTR32 *)(gen_frame + 0x6c)) = ((float *)GEN_TOP(*param_1));
  (*(uint *)(gen_frame + 0x68)) = param_1[5];
  pfVar5 = ((float *)GEN_TOP(param_1[2]));
  fVar11 = *pfVar5;
  pfVar6 = ((float *)GEN_TOP(param_1[3]));
  fVar12 = pfVar5[1];
  fVar13 = pfVar5[2];
  fVar14 = pfVar5[3];
  fVar15 = pfVar5[4];
  fVar16 = pfVar5[5];
  if (pfVar6 == ((float *)GEN_TOP(0x0))) {
    (*(float *)(gen_frame + 0x0)) = *pfVar5;
    (*(float *)(gen_frame + 0x4)) = pfVar5[1];
    (*(float *)(gen_frame + 0x8)) = pfVar5[2];
    (*(float *)(gen_frame + 0xc)) = pfVar5[3];
    (*(float *)(gen_frame + 0x10)) = pfVar5[4];
    (*(float *)(gen_frame + 0x14)) = pfVar5[5];
    F_00c48350(&(*(float *)(gen_frame + 0x18)),0,0x30);
  }
  else {
    (*(float *)(gen_frame + 0x0)) = *pfVar5 + *pfVar6;
    (*(float *)(gen_frame + 0x4)) = pfVar6[1] + pfVar5[1];
    (*(float *)(gen_frame + 0x8)) = pfVar6[2] + pfVar5[2];
    (*(float *)(gen_frame + 0xc)) = pfVar6[3] + pfVar5[3];
    (*(float *)(gen_frame + 0x10)) = pfVar6[4] + pfVar5[4];
    (*(float *)(gen_frame + 0x14)) = pfVar6[5] + pfVar5[5];
    fVar17 = pfVar6[1];
    (*(float *)(gen_frame + 0x18)) = *pfVar6;
    (*(float *)(gen_frame + 0x1c)) = fVar17;
    (*(float *)(gen_frame + 0x20)) = pfVar6[2];
    (*(float *)(gen_frame + 0x24)) = pfVar6[3];
    (*(float *)(gen_frame + 0x28)) = pfVar6[4];
    (*(float *)(gen_frame + 0x2c)) = pfVar6[5];
    (*(float *)(gen_frame + 0x30)) = *pfVar6;
    (*(float *)(gen_frame + 0x34)) = pfVar6[1];
    (*(float *)(gen_frame + 0x38)) = pfVar6[2];
    (*(float *)(gen_frame + 0x3c)) = pfVar6[3];
    (*(float *)(gen_frame + 0x40)) = pfVar6[4];
    (*(float *)(gen_frame + 0x44)) = pfVar6[5];
  }
  uVar4 = (*(uint *)(gen_frame + 0x68));
  pfVar5 = (*(float * PTR32 *)(gen_frame + 0x6c));
  pfVar6 = (*(float * PTR32 *)(gen_frame + 0x70));
  fVar17 = (*(float *)(gen_frame + 0x0));
  fVar18 = (*(float *)(gen_frame + 0x4));
  fVar19 = (*(float *)(gen_frame + 0x8));
  fVar20 = (*(float *)(gen_frame + 0xc));
  fVar21 = (*(float *)(gen_frame + 0x10));
  fVar22 = (*(float *)(gen_frame + 0x14));
  if (((uint)(*(float * PTR32 *)(gen_frame + 0x70)) & 0xc) != 0) {
    if ((int)(*(uint *)(gen_frame + 0x68)) < 2) goto LAB_00cfbbcf;
    do {
      fVar10 = *pfVar5;
      fVar19 = fVar19 + (*(float *)(gen_frame + 0x38));
      fVar20 = fVar20 + (*(float *)(gen_frame + 0x3c));
      fVar21 = fVar21 + (*(float *)(gen_frame + 0x40));
      fVar22 = fVar22 + (*(float *)(gen_frame + 0x44));
      fVar7 = fVar10 * fVar11;
      fVar8 = fVar10 * fVar12;
      fVar9 = fVar10 * fVar13;
      fVar10 = fVar10 * fVar14;
      fVar11 = fVar11 + (*(float *)(gen_frame + 0x18));
      fVar12 = fVar12 + (*(float *)(gen_frame + 0x1c));
      fVar13 = fVar13 + (*(float *)(gen_frame + 0x20));
      fVar14 = fVar14 + (*(float *)(gen_frame + 0x24));
      if (iVar1 != 0) {
        fVar7 = fVar7 + *pfVar6;
        fVar8 = fVar8 + pfVar6[1];
        fVar9 = fVar9 + pfVar6[2];
        fVar10 = fVar10 + pfVar6[3];
      }
      *pfVar6 = fVar7;
      pfVar6[1] = fVar8;
      pfVar6[2] = fVar9;
      pfVar6[3] = fVar10;
      fVar10 = *pfVar5 * fVar15;
      fVar7 = *pfVar5 * fVar16;
      fVar15 = fVar15 + (*(float *)(gen_frame + 0x28));
      fVar16 = fVar16 + (*(float *)(gen_frame + 0x2c));
      fVar17 = fVar17 + (*(float *)(gen_frame + 0x30));
      fVar18 = fVar18 + (*(float *)(gen_frame + 0x34));
      pfVar5 = pfVar5 + 1;
      if (iVar1 != 0) {
        fVar10 = fVar10 + gen_bits2f((uint)*(undefined8 *)(pfVar6 + 4));
        fVar7 = fVar7 + gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar6 + 4) >> 0x20));
      }
      *(ulonglong *)(pfVar6 + 4) = CONCAT44((uint)gen_fl2bits(fVar7),(uint)gen_fl2bits(fVar10));
      uVar4 = uVar4 - 1;
      pfVar6 = pfVar6 + 6;
    } while (((uint)pfVar6 & 0xc) != 0);
  }
  if (1 < (int)uVar4) {
    uVar2 = uVar4 & 0xfffffffe;
    uVar4 = uVar4 & 1;
    pfVar5 = pfVar5 + uVar2;
    iVar3 = -uVar2;
    do {
      fVar10 = gen_bits2f((uint)*(undefined8 *)(pfVar5 + iVar3));
      fVar7 = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar5 + iVar3) >> 0x20));
      if (iVar1 == 0) {
        *pfVar6 = fVar10 * fVar11;
        pfVar6[1] = fVar10 * fVar12;
        pfVar6[2] = fVar10 * fVar13;
        pfVar6[3] = fVar10 * fVar14;
        pfVar6[4] = fVar10 * fVar15;
        pfVar6[5] = fVar10 * fVar16;
        pfVar6[6] = fVar7 * fVar17;
        pfVar6[7] = fVar7 * fVar18;
        pfVar6[8] = fVar7 * fVar19;
        pfVar6[9] = fVar7 * fVar20;
        pfVar6[10] = fVar7 * fVar21;
        pfVar6[0xb] = fVar7 * fVar22;
      }
      else {
        *pfVar6 = fVar10 * fVar11 + *pfVar6;
        pfVar6[1] = fVar10 * fVar12 + pfVar6[1];
        pfVar6[2] = fVar10 * fVar13 + pfVar6[2];
        pfVar6[3] = fVar10 * fVar14 + pfVar6[3];
        pfVar6[4] = fVar10 * fVar15 + pfVar6[4];
        pfVar6[5] = fVar10 * fVar16 + pfVar6[5];
        pfVar6[6] = fVar7 * fVar17 + pfVar6[6];
        pfVar6[7] = fVar7 * fVar18 + pfVar6[7];
        pfVar6[8] = fVar7 * fVar19 + pfVar6[8];
        pfVar6[9] = fVar7 * fVar20 + pfVar6[9];
        pfVar6[10] = fVar7 * fVar21 + pfVar6[10];
        pfVar6[0xb] = fVar7 * fVar22 + pfVar6[0xb];
      }
      fVar22 = fVar22 + ((*(float *)(gen_frame + 0x44)) + (*(float *)(gen_frame + 0x44)));
      fVar21 = fVar21 + ((*(float *)(gen_frame + 0x40)) + (*(float *)(gen_frame + 0x40)));
      fVar20 = fVar20 + ((*(float *)(gen_frame + 0x3c)) + (*(float *)(gen_frame + 0x3c)));
      fVar19 = fVar19 + ((*(float *)(gen_frame + 0x38)) + (*(float *)(gen_frame + 0x38)));
      fVar18 = fVar18 + ((*(float *)(gen_frame + 0x34)) + (*(float *)(gen_frame + 0x34)));
      fVar17 = fVar17 + ((*(float *)(gen_frame + 0x30)) + (*(float *)(gen_frame + 0x30)));
      fVar16 = fVar16 + ((*(float *)(gen_frame + 0x2c)) + (*(float *)(gen_frame + 0x2c)));
      fVar15 = fVar15 + ((*(float *)(gen_frame + 0x28)) + (*(float *)(gen_frame + 0x28)));
      fVar14 = fVar14 + ((*(float *)(gen_frame + 0x24)) + (*(float *)(gen_frame + 0x24)));
      fVar13 = fVar13 + ((*(float *)(gen_frame + 0x20)) + (*(float *)(gen_frame + 0x20)));
      fVar12 = fVar12 + ((*(float *)(gen_frame + 0x1c)) + (*(float *)(gen_frame + 0x1c)));
      fVar11 = fVar11 + ((*(float *)(gen_frame + 0x18)) + (*(float *)(gen_frame + 0x18)));
      pfVar6 = pfVar6 + 0xc;
      iVar3 = iVar3 + 2;
    } while (iVar3 != 0);
  }
LAB_00cfbbcf: ;
  if ((uVar4 & 1) != 0) {
    fVar17 = *pfVar5;
    fVar11 = fVar17 * fVar11;
    fVar12 = fVar17 * fVar12;
    fVar13 = fVar17 * fVar13;
    fVar14 = fVar17 * fVar14;
    fVar15 = fVar17 * fVar15;
    fVar17 = fVar17 * fVar16;
    if (iVar1 != 0) {
      fVar11 = fVar11 + *pfVar6;
      fVar12 = fVar12 + pfVar6[1];
      fVar13 = fVar13 + pfVar6[2];
      fVar14 = fVar14 + pfVar6[3];
      fVar15 = fVar15 + gen_bits2f((uint)*(undefined8 *)(pfVar6 + 4));
      fVar17 = fVar17 + gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar6 + 4) >> 0x20));
    }
    *pfVar6 = fVar11;
    pfVar6[1] = fVar12;
    pfVar6[2] = fVar13;
    pfVar6[3] = fVar14;
    *(ulonglong *)(pfVar6 + 4) = CONCAT44((uint)gen_fl2bits(fVar17),(uint)gen_fl2bits(fVar15));
  }
  return 0;
}

/* ref: FUN_00cfbc70 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cfbc70(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfbc70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  float * pfVar1;
  float * pfVar2;
  int iVar3;
  float * pfVar4;
  float * pfVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float * pfVar9;
  float * pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pfVar9 = ((float *)GEN_TOP(*param_1));
  pfVar10 = ((float *)GEN_TOP(param_1[1]));
  uVar8 = param_1[5];
  iVar3 = param_1[8];
  iVar6 = param_1[6];
  if (param_1[9] != 0) {
    iVar6 = 1;
  }
  if (iVar6 == 1) {
    local_30 = *((float *)GEN_TOP(param_1[2]));
    fStack_2c = local_30;
    fStack_28 = local_30;
    fStack_24 = local_30;
    if (((float *)GEN_TOP(param_1[3])) == ((float *)GEN_TOP(0x0))) {
LAB_00cfbdbe: ;
      local_20 = 0.0;
      fStack_1c = 0.0;
      fStack_18 = 0.0;
      fStack_14 = 0.0;
    }
    else {
      fVar28 = *((float *)GEN_TOP(param_1[3]));
      fVar29 = *((float *)GEN_TOP(param_1[2]));
      fStack_2c = fVar29 + fVar28;
      fStack_28 = fVar28 * REFG(float, 0x10928e4) + fVar29;
      local_20 = fVar28 * REFG(float, 0x1094870);
      fStack_24 = fVar28 * REFG(float, 0x1087ef8) + fVar29;
      fStack_1c = local_20;
      fStack_18 = local_20;
      fStack_14 = local_20;
    }
  }
  else if (iVar6 == 2) {
    pfVar4 = ((float *)GEN_TOP(param_1[2]));
    local_30 = *pfVar4;
    pfVar5 = ((float *)GEN_TOP(param_1[3]));
    fStack_2c = pfVar4[3];
    if (pfVar5 == ((float *)GEN_TOP(0x0))) {
      local_20 = 0.0;
      fStack_1c = 0.0;
      fStack_18 = 0.0;
      fStack_14 = 0.0;
      fStack_28 = local_30;
      fStack_24 = fStack_2c;
    }
    else {
      fStack_28 = *pfVar4 + *pfVar5;
      local_20 = *pfVar5 * REFG(float, 0x10928e4);
      fStack_1c = pfVar5[3] * REFG(float, 0x10928e4);
      fStack_24 = pfVar5[3] + pfVar4[3];
      fStack_18 = local_20;
      fStack_14 = fStack_1c;
    }
  }
  else if (iVar6 == 4) {
    pfVar4 = ((float *)GEN_TOP(param_1[2]));
    local_30 = *pfVar4;
    pfVar5 = ((float *)GEN_TOP(param_1[3]));
    fStack_2c = pfVar4[5];
    fStack_28 = pfVar4[10];
    fStack_24 = pfVar4[0xf];
    if (pfVar5 == ((float *)GEN_TOP(0x0))) goto LAB_00cfbdbe;
    local_20 = *pfVar5;
    fStack_1c = pfVar5[5];
    fStack_18 = pfVar5[10];
    fStack_14 = pfVar5[0xf];
  }
  fVar28 = local_30;
  fVar29 = fStack_2c;
  fVar30 = fStack_28;
  fVar31 = fStack_24;
  fVar12 = local_20;
  fVar32 = fStack_1c;
  fVar33 = fStack_18;
  fVar34 = fStack_14;
  if (((uint)pfVar10 & 0x3c) != 0) {
    fVar11 = local_30;
    fVar13 = fStack_2c;
    fVar14 = fStack_28;
    fVar15 = local_20;
    fVar12 = local_20;
    fVar16 = fStack_1c;
    fVar17 = fStack_18;
    if ((int)uVar8 < 0x10) goto LAB_00cfbebd;
    do {
      fVar33 = fVar34;
      fVar32 = fVar17;
      fVar12 = fVar16;
      fVar34 = fVar15;
      fVar30 = fVar31;
      fVar29 = fVar14;
      fVar28 = fVar13;
      fVar13 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      uVar8 = uVar8 - 1;
      fVar13 = fVar13 * fVar11;
      fVar31 = fVar11 + fVar34;
      if (iVar3 != 0) {
        fVar13 = fVar13 + *pfVar10;
      }
      *pfVar10 = fVar13;
      pfVar10 = pfVar10 + 1;
      fVar11 = fVar28;
      fVar13 = fVar29;
      fVar14 = fVar30;
      fVar15 = fVar12;
      fVar16 = fVar32;
      fVar17 = fVar33;
    } while (((uint)pfVar10 & 0x3c) != 0);
  }
  if (0xf < (int)uVar8) {
    uVar7 = uVar8 & 0xfffffff0;
    uVar8 = uVar8 & 0xf;
    pfVar9 = pfVar9 + uVar7;
    pfVar10 = pfVar10 + uVar7;
    iVar6 = -uVar7;
    do {
      pfVar4 = pfVar9 + iVar6;
      pfVar5 = pfVar9 + iVar6 + 4;
      pfVar1 = pfVar9 + iVar6 + 8;
      pfVar2 = pfVar9 + iVar6 + 0xc;
      fVar11 = *pfVar4 * fVar28;
      fVar13 = pfVar4[1] * fVar29;
      fVar14 = pfVar4[2] * fVar30;
      fVar15 = pfVar4[3] * fVar31;
      fVar16 = *pfVar5 * (fVar28 + fVar12);
      fVar17 = pfVar5[1] * (fVar29 + fVar32);
      fVar18 = pfVar5[2] * (fVar30 + fVar33);
      fVar19 = pfVar5[3] * (fVar31 + fVar34);
      fVar28 = (fVar28 + fVar12) + fVar12;
      fVar29 = (fVar29 + fVar32) + fVar32;
      fVar30 = (fVar30 + fVar33) + fVar33;
      fVar31 = (fVar31 + fVar34) + fVar34;
      fVar20 = *pfVar1 * fVar28;
      fVar21 = pfVar1[1] * fVar29;
      fVar22 = pfVar1[2] * fVar30;
      fVar23 = pfVar1[3] * fVar31;
      fVar28 = fVar28 + fVar12;
      fVar29 = fVar29 + fVar32;
      fVar30 = fVar30 + fVar33;
      fVar31 = fVar31 + fVar34;
      fVar24 = *pfVar2 * fVar28;
      fVar25 = pfVar2[1] * fVar29;
      fVar26 = pfVar2[2] * fVar30;
      fVar27 = pfVar2[3] * fVar31;
      fVar28 = fVar28 + fVar12;
      fVar29 = fVar29 + fVar32;
      fVar30 = fVar30 + fVar33;
      fVar31 = fVar31 + fVar34;
      if (iVar3 != 0) {
        pfVar4 = pfVar10 + iVar6;
        fVar11 = fVar11 + *pfVar4;
        fVar13 = fVar13 + pfVar4[1];
        fVar14 = fVar14 + pfVar4[2];
        fVar15 = fVar15 + pfVar4[3];
        pfVar4 = pfVar10 + iVar6 + 4;
        fVar16 = fVar16 + *pfVar4;
        fVar17 = fVar17 + pfVar4[1];
        fVar18 = fVar18 + pfVar4[2];
        fVar19 = fVar19 + pfVar4[3];
        pfVar4 = pfVar10 + iVar6 + 8;
        fVar20 = fVar20 + *pfVar4;
        fVar21 = fVar21 + pfVar4[1];
        fVar22 = fVar22 + pfVar4[2];
        fVar23 = fVar23 + pfVar4[3];
        pfVar4 = pfVar10 + iVar6 + 0xc;
        fVar24 = fVar24 + *pfVar4;
        fVar25 = fVar25 + pfVar4[1];
        fVar26 = fVar26 + pfVar4[2];
        fVar27 = fVar27 + pfVar4[3];
      }
      pfVar4 = pfVar10 + iVar6;
      *pfVar4 = fVar11;
      pfVar4[1] = fVar13;
      pfVar4[2] = fVar14;
      pfVar4[3] = fVar15;
      pfVar4 = pfVar10 + iVar6 + 4;
      *pfVar4 = fVar16;
      pfVar4[1] = fVar17;
      pfVar4[2] = fVar18;
      pfVar4[3] = fVar19;
      pfVar4 = pfVar10 + iVar6 + 8;
      *pfVar4 = fVar20;
      pfVar4[1] = fVar21;
      pfVar4[2] = fVar22;
      pfVar4[3] = fVar23;
      pfVar4 = pfVar10 + iVar6 + 0xc;
      *pfVar4 = fVar24;
      pfVar4[1] = fVar25;
      pfVar4[2] = fVar26;
      pfVar4[3] = fVar27;
      iVar6 = iVar6 + 0x10;
    } while (iVar6 != 0);
  }
LAB_00cfbebd: ;
  while (fVar11 = fVar12, (uVar8 & 0xf) != 0) {
    fVar12 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    uVar8 = uVar8 - 1;
    fVar12 = fVar12 * fVar28;
    fVar13 = fVar28 + fVar11;
    if (iVar3 != 0) {
      fVar12 = fVar12 + *pfVar10;
    }
    *pfVar10 = fVar12;
    pfVar10 = pfVar10 + 1;
    fVar28 = fVar29;
    fVar29 = fVar30;
    fVar30 = fVar31;
    fVar31 = fVar13;
    fVar12 = fVar32;
    fVar32 = fVar33;
    fVar33 = fVar34;
    fVar34 = fVar11;
  }
  return 0;
}

/* ref: FUN_00cfbf33 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cfbf33(GEN_P(short * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfbf33u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  short * psVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  float * pfVar7;
  float fVar8;
  float * pfVar9;
  uint uVar10;
  uint uVar11;
  float * pfVar12;
  uint uVar13;
  uint uVar14;
  float * pfVar15;
  float10 fVar16;
  float fVar17;
  uint local_10;
  uint local_c;
  int local_8;
  
  fVar8 = REFG(float, 0x1131540);
  iVar6 = *((int *)GEN_TOP(((int)param_1 + 0x20)));
  uVar13 = *((uint *)GEN_TOP(((int)param_1 + 0x1c)));
  uVar14 = *((uint *)GEN_TOP(((int)param_1 + 0x18)));
  local_8 = *((int *)GEN_TOP(((int)param_1 + 4)));
  if (*((int *)GEN_TOP(((int)param_1 + 0x24))) != 0) {
    uVar14 = 1;
    uVar13 = 1;
  }
  pfVar7 = *((float * PTR32 *)GEN_TOP(((int)param_1 + 0xc)));
  if (pfVar7 == ((float *)GEN_TOP(0x0))) {
    local_10 = *((uint *)GEN_TOP(((int)param_1 + 0x14))) / uVar14;
    if (local_10 != 0) {
      pfVar7 = *((float * PTR32 *)GEN_TOP(((int)param_1 + 8)));
      param_1 = *(short * PTR32 *)param_1;
      do {
        uVar10 = 0;
        if (uVar13 != 0) {
          sVar5 = *param_1;
          pfVar9 = pfVar7;
          do {
            fVar17 = *pfVar9;
            uVar11 = 1;
            pfVar9 = pfVar9 + 1;
            fVar17 = ((float)(int)sVar5 * fVar17) * fVar8;
            if (1 < uVar14) {
              do {
                psVar1 = param_1 + uVar11;
                fVar3 = *pfVar9;
                pfVar9 = pfVar9 + 1;
                uVar11 = uVar11 + 1;
                fVar17 = fVar17 + ((float)(int)*psVar1 * fVar3) * fVar8;
              } while (uVar11 < uVar14);
            }
            if (iVar6 == 0) {
              *((float *)GEN_TOP((local_8 + uVar10 * 4))) = fVar17;
            }
            else {
              *((float *)GEN_TOP((local_8 + uVar10 * 4))) = *((float *)GEN_TOP((local_8 + uVar10 * 4))) + fVar17;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar13);
        }
        param_1 = param_1 + uVar14;
        local_8 = local_8 + uVar13 * 4;
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
  }
  else {
    uVar10 = *((uint *)GEN_TOP(((int)param_1 + 0x14))) / uVar14;
    local_10 = 0;
    if (uVar10 != 0) {
      pfVar9 = *((float * PTR32 *)GEN_TOP(((int)param_1 + 8)));
      param_1 = *(short * PTR32 *)param_1;
      do {
        local_c = 0;
        if (uVar13 != 0) {
          fVar16 = (float10)(int)local_10;
          sVar5 = *param_1;
          if ((int)local_10 < 0) {
            fVar16 = GEN_X87(fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110));
          }
          pfVar12 = pfVar7;
          pfVar15 = pfVar9;
          do {
            fVar17 = *pfVar12;
            fVar3 = *pfVar15;
            uVar11 = 1;
            pfVar12 = pfVar12 + 1;
            pfVar15 = pfVar15 + 1;
            fVar17 = ((fVar17 * (float)fVar16 + fVar3) * (float)(int)sVar5) * fVar8;
            if (1 < uVar14) {
              do {
                fVar3 = *pfVar12;
                psVar1 = param_1 + uVar11;
                fVar4 = *pfVar15;
                pfVar12 = pfVar12 + 1;
                pfVar15 = pfVar15 + 1;
                uVar11 = uVar11 + 1;
                fVar17 = fVar17 + ((fVar3 * (float)fVar16 + fVar4) * (float)(int)*psVar1) * fVar8;
              } while (uVar11 < uVar14);
            }
            if (iVar6 == 0) {
              *((float *)GEN_TOP((local_8 + local_c * 4))) = fVar17;
            }
            else {
              pfVar2 = ((float *)GEN_TOP((local_8 + local_c * 4)));
              *pfVar2 = *pfVar2 + fVar17;
            }
            local_c = local_c + 1;
          } while (local_c < uVar13);
        }
        param_1 = param_1 + uVar14;
        local_8 = local_8 + uVar13 * 4;
        local_10 = local_10 + 1;
      } while (local_10 < uVar10);
    }
  }
  return 0;
}

/* ref: FUN_00cfc120 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cfc120(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfc120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  short sVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  short * psVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  psVar5 = ((short *)GEN_TOP(*param_1));
  pfVar4 = ((float *)GEN_TOP(param_1[1]));
  iVar2 = param_1[8];
  iVar6 = param_1[5];
  pfVar3 = ((float *)GEN_TOP(param_1[3]));
  fVar9 = *((float *)GEN_TOP(param_1[2])) * REFG(float, 0x1131540);
  fVar10 = (((float *)GEN_TOP(param_1[2])))[1] * REFG(float, 0x1131540);
  if (pfVar3 == ((float *)GEN_TOP(0x0))) {
    if (iVar6 != 0) {
      do {
        sVar1 = *psVar5;
        iVar6 = iVar6 - 1;
        psVar5 = psVar5 + 1;
        fVar11 = (float)(int)sVar1 * fVar9;
        fVar7 = (float)(int)sVar1 * fVar10;
        if (iVar2 == 0) {
          *pfVar4 = fVar11;
        }
        else {
          *pfVar4 = fVar11 + *pfVar4;
          fVar7 = fVar7 + pfVar4[1];
        }
        pfVar4[1] = fVar7;
        pfVar4 = pfVar4 + 2;
      } while (iVar6 != 0);
      return 0;
    }
  }
  else {
    fVar7 = *pfVar3 * REFG(float, 0x1131540);
    fVar11 = pfVar3[1] * REFG(float, 0x1131540);
    while (iVar6 != 0) {
      sVar1 = *psVar5;
      iVar6 = iVar6 - 1;
      psVar5 = psVar5 + 1;
      fVar12 = (float)(int)sVar1 * fVar9;
      fVar8 = (float)(int)sVar1 * fVar10;
      if (iVar2 == 0) {
        *pfVar4 = fVar12;
      }
      else {
        *pfVar4 = fVar12 + *pfVar4;
        fVar8 = fVar8 + pfVar4[1];
      }
      pfVar4[1] = fVar8;
      pfVar4 = pfVar4 + 2;
      fVar9 = fVar9 + fVar7;
      fVar10 = fVar10 + fVar11;
    }
  }
  return 0;
}

/* ref: FUN_00cfc220 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cfc220(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfc220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  float * pfVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  short * psVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  pfVar1 = ((float *)GEN_TOP(param_1[2]));
  pfVar4 = ((float *)GEN_TOP(param_1[1]));
  iVar2 = param_1[8];
  psVar5 = ((short *)GEN_TOP(*param_1));
  iVar6 = param_1[5];
  pfVar3 = ((float *)GEN_TOP(param_1[3]));
  fVar9 = *pfVar1 * REFG(float, 0x1131540);
  fVar10 = pfVar1[1] * REFG(float, 0x1131540);
  fVar11 = pfVar1[2] * REFG(float, 0x1131540);
  fVar12 = pfVar1[3] * REFG(float, 0x1131540);
  fVar13 = pfVar1[4] * REFG(float, 0x1131540);
  fVar14 = pfVar1[5] * REFG(float, 0x1131540);
  if (pfVar3 == ((float *)GEN_TOP(0x0))) {
    if (iVar6 != 0) {
      do {
        iVar6 = iVar6 - 1;
        fVar7 = (float)(int)*psVar5;
        psVar5 = psVar5 + 1;
        if (iVar2 == 0) {
          *pfVar4 = fVar7 * fVar9;
          pfVar4[1] = fVar7 * fVar10;
          pfVar4[2] = fVar7 * fVar11;
          pfVar4[3] = fVar7 * fVar12;
          pfVar4[4] = fVar7 * fVar13;
          fVar7 = fVar7 * fVar14;
        }
        else {
          *pfVar4 = fVar7 * fVar9 + *pfVar4;
          pfVar4[1] = fVar7 * fVar10 + pfVar4[1];
          pfVar4[2] = fVar7 * fVar11 + pfVar4[2];
          pfVar4[3] = fVar7 * fVar12 + pfVar4[3];
          pfVar4[4] = fVar7 * fVar13 + pfVar4[4];
          fVar7 = fVar7 * fVar14 + pfVar4[5];
        }
        pfVar4[5] = fVar7;
        pfVar4 = pfVar4 + 6;
      } while (iVar6 != 0);
      return 0;
    }
  }
  else {
    fVar7 = *pfVar3 * REFG(float, 0x1131540);
    fVar15 = pfVar3[1] * REFG(float, 0x1131540);
    fVar16 = pfVar3[2] * REFG(float, 0x1131540);
    fVar17 = pfVar3[3] * REFG(float, 0x1131540);
    fVar18 = pfVar3[4] * REFG(float, 0x1131540);
    fVar19 = pfVar3[5] * REFG(float, 0x1131540);
    while (iVar6 != 0) {
      iVar6 = iVar6 - 1;
      fVar8 = (float)(int)*psVar5;
      psVar5 = psVar5 + 1;
      if (iVar2 == 0) {
        *pfVar4 = fVar8 * fVar9;
        pfVar4[1] = fVar8 * fVar10;
        pfVar4[2] = fVar8 * fVar11;
        pfVar4[3] = fVar8 * fVar12;
        pfVar4[4] = fVar8 * fVar13;
        fVar8 = fVar8 * fVar14;
      }
      else {
        *pfVar4 = fVar8 * fVar9 + *pfVar4;
        pfVar4[1] = fVar8 * fVar10 + pfVar4[1];
        pfVar4[2] = fVar8 * fVar11 + pfVar4[2];
        pfVar4[3] = fVar8 * fVar12 + pfVar4[3];
        pfVar4[4] = fVar8 * fVar13 + pfVar4[4];
        fVar8 = fVar8 * fVar14 + pfVar4[5];
      }
      fVar9 = fVar9 + fVar7;
      fVar10 = fVar10 + fVar15;
      fVar11 = fVar11 + fVar16;
      fVar12 = fVar12 + fVar17;
      fVar13 = fVar13 + fVar18;
      fVar14 = fVar14 + fVar19;
      pfVar4[5] = fVar8;
      pfVar4 = pfVar4 + 6;
    }
  }
  return 0;
}

/* ref: FUN_00cfc490 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cfc490(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfc490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  float * pfVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  int iVar5;
  short * psVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pfVar1 = ((float *)GEN_TOP(param_1[2]));
  local_24 = pfVar1[4] * REFG(float, 0x1131540);
  local_20 = pfVar1[5] * REFG(float, 0x1131540);
  psVar6 = ((short *)GEN_TOP(*param_1));
  pfVar4 = ((float *)GEN_TOP(param_1[1]));
  iVar2 = param_1[8];
  local_1c = pfVar1[6] * REFG(float, 0x1131540);
  local_18 = pfVar1[7] * REFG(float, 0x1131540);
  local_14 = pfVar1[8] * REFG(float, 0x1131540);
  local_10 = pfVar1[9] * REFG(float, 0x1131540);
  local_c = pfVar1[10] * REFG(float, 0x1131540);
  pfVar3 = ((float *)GEN_TOP(param_1[3]));
  iVar5 = param_1[5];
  fVar23 = pfVar1[3] * REFG(float, 0x1131540);
  local_8 = pfVar1[0xb] * REFG(float, 0x1131540);
  fVar20 = *pfVar1 * REFG(float, 0x1131540);
  fVar21 = pfVar1[1] * REFG(float, 0x1131540);
  fVar22 = pfVar1[2] * REFG(float, 0x1131540);
  if (pfVar3 == ((float *)GEN_TOP(0x0))) {
    if (iVar5 != 0) {
      iVar5 = (iVar5 - 1U >> 1) + 1;
      do {
        fVar9 = (float)(int)*psVar6;
        fVar7 = (float)(int)psVar6[1];
        psVar6 = psVar6 + 2;
        fVar24 = fVar7 * fVar21 + fVar9 * fVar20;
        if (iVar2 == 0) {
          *pfVar4 = fVar24;
          pfVar4[1] = fVar7 * fVar23 + fVar9 * fVar22;
          pfVar4[2] = fVar7 * local_20 + fVar9 * local_24;
          pfVar4[3] = fVar7 * local_18 + fVar9 * local_1c;
          pfVar4[4] = fVar7 * local_10 + fVar9 * local_14;
          fVar7 = fVar7 * local_8 + fVar9 * local_c;
        }
        else {
          *pfVar4 = fVar24 + *pfVar4;
          pfVar4[1] = (fVar7 * fVar23 + fVar9 * fVar22) + pfVar4[1];
          pfVar4[2] = (fVar7 * local_20 + fVar9 * local_24) + pfVar4[2];
          pfVar4[3] = (fVar7 * local_18 + fVar9 * local_1c) + pfVar4[3];
          pfVar4[4] = (fVar7 * local_10 + fVar9 * local_14) + pfVar4[4];
          fVar7 = (fVar7 * local_8 + fVar9 * local_c) + pfVar4[5];
        }
        pfVar4[5] = fVar7;
        pfVar4 = pfVar4 + 6;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
      return 0;
    }
  }
  else {
    fVar7 = *pfVar3 * REFG(float, 0x1131540);
    fVar9 = pfVar3[1] * REFG(float, 0x1131540);
    fVar24 = pfVar3[2] * REFG(float, 0x1131540);
    fVar10 = pfVar3[3] * REFG(float, 0x1131540);
    fVar11 = pfVar3[4] * REFG(float, 0x1131540);
    fVar12 = pfVar3[5] * REFG(float, 0x1131540);
    fVar13 = pfVar3[6] * REFG(float, 0x1131540);
    fVar14 = pfVar3[7] * REFG(float, 0x1131540);
    fVar15 = pfVar3[8] * REFG(float, 0x1131540);
    fVar16 = pfVar3[9] * REFG(float, 0x1131540);
    fVar17 = pfVar3[10] * REFG(float, 0x1131540);
    fVar18 = pfVar3[0xb] * REFG(float, 0x1131540);
    if (iVar5 != 0) {
      iVar5 = (iVar5 - 1U >> 1) + 1;
      do {
        fVar19 = (float)(int)*psVar6;
        fVar8 = (float)(int)psVar6[1];
        psVar6 = psVar6 + 2;
        fVar25 = fVar8 * fVar21 + fVar19 * fVar20;
        if (iVar2 == 0) {
          *pfVar4 = fVar25;
          pfVar4[1] = fVar8 * fVar23 + fVar19 * fVar22;
          pfVar4[2] = fVar8 * local_20 + fVar19 * local_24;
          pfVar4[3] = fVar8 * local_18 + fVar19 * local_1c;
          pfVar4[4] = fVar8 * local_10 + fVar19 * local_14;
          fVar8 = fVar8 * local_8 + fVar19 * local_c;
        }
        else {
          *pfVar4 = fVar25 + *pfVar4;
          pfVar4[1] = (fVar8 * fVar23 + fVar19 * fVar22) + pfVar4[1];
          pfVar4[2] = (fVar8 * local_20 + fVar19 * local_24) + pfVar4[2];
          pfVar4[3] = (fVar8 * local_18 + fVar19 * local_1c) + pfVar4[3];
          pfVar4[4] = (fVar8 * local_10 + fVar19 * local_14) + pfVar4[4];
          fVar8 = (fVar8 * local_8 + fVar19 * local_c) + pfVar4[5];
        }
        pfVar4[5] = fVar8;
        local_24 = fVar11 + local_24;
        local_20 = fVar12 + local_20;
        fVar23 = fVar10 + fVar23;
        fVar20 = fVar20 + fVar7;
        fVar21 = fVar21 + fVar9;
        fVar22 = fVar22 + fVar24;
        local_1c = fVar13 + local_1c;
        local_18 = fVar14 + local_18;
        local_14 = fVar15 + local_14;
        local_10 = fVar16 + local_10;
        local_c = fVar17 + local_c;
        local_8 = fVar18 + local_8;
        pfVar4 = pfVar4 + 6;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00cfc980 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cfc980(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfc980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  short * psVar1;
  short * psVar2;
  short * psVar3;
  short * psVar4;
  short * psVar5;
  short sVar6;
  float * pfVar7;
  int iVar8;
  float * pfVar9;
  short * psVar10;
  int iVar11;
  float * pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pfVar7 = *((float * PTR32 *)GEN_TOP((param_1 + 8)));
  local_30 = pfVar7[2] * REFG(float, 0x1131540);
  local_2c = pfVar7[3] * REFG(float, 0x1131540);
  local_28 = pfVar7[4] * REFG(float, 0x1131540);
  local_24 = pfVar7[5] * REFG(float, 0x1131540);
  psVar10 = *((short * PTR32 *)GEN_TOP(param_1));
  local_20 = pfVar7[6] * REFG(float, 0x1131540);
  local_1c = pfVar7[7] * REFG(float, 0x1131540);
  local_18 = pfVar7[8] * REFG(float, 0x1131540);
  local_14 = pfVar7[9] * REFG(float, 0x1131540);
  local_10 = pfVar7[10] * REFG(float, 0x1131540);
  iVar8 = *((int *)GEN_TOP((param_1 + 0x20)));
  pfVar9 = *((float * PTR32 *)GEN_TOP((param_1 + 0xc)));
  pfVar12 = *((float * PTR32 *)GEN_TOP((param_1 + 4)));
  iVar11 = *((int *)GEN_TOP((param_1 + 0x14)));
  fVar25 = *pfVar7 * REFG(float, 0x1131540);
  fVar26 = pfVar7[1] * REFG(float, 0x1131540);
  local_c = pfVar7[0xb] * REFG(float, 0x1131540);
  if (pfVar9 == ((float *)GEN_TOP(0x0))) {
    if (iVar11 != 0) {
      iVar11 = (iVar11 - 1U) / 6 + 1;
      do {
        sVar6 = *psVar10;
        psVar1 = psVar10 + 1;
        psVar2 = psVar10 + 2;
        psVar3 = psVar10 + 3;
        psVar4 = psVar10 + 4;
        psVar5 = psVar10 + 5;
        psVar10 = psVar10 + 6;
        fVar27 = (((((float)(int)*psVar1 * fVar26 + (float)(int)sVar6 * fVar25) +
                   (float)(int)*psVar2 * local_30) + (float)(int)*psVar3 * local_2c) +
                 (float)(int)*psVar4 * local_28) + (float)(int)*psVar5 * local_24;
        fVar13 = (((((float)(int)*psVar1 * local_1c + (float)(int)sVar6 * local_20) +
                   (float)(int)*psVar2 * local_18) + (float)(int)*psVar3 * local_14) +
                 (float)(int)*psVar4 * local_10) + (float)(int)*psVar5 * local_c;
        if (iVar8 == 0) {
          *pfVar12 = fVar27;
        }
        else {
          *pfVar12 = fVar27 + *pfVar12;
          fVar13 = fVar13 + pfVar12[1];
        }
        pfVar12[1] = fVar13;
        pfVar12 = pfVar12 + 2;
        iVar11 = iVar11 - 1;
      } while (iVar11 != 0);
      return 0;
    }
  }
  else {
    fVar13 = *pfVar9 * REFG(float, 0x1131540);
    fVar27 = pfVar9[1] * REFG(float, 0x1131540);
    fVar15 = pfVar9[2] * REFG(float, 0x1131540);
    fVar16 = pfVar9[3] * REFG(float, 0x1131540);
    fVar17 = pfVar9[4] * REFG(float, 0x1131540);
    fVar18 = pfVar9[5] * REFG(float, 0x1131540);
    fVar19 = pfVar9[6] * REFG(float, 0x1131540);
    fVar20 = pfVar9[7] * REFG(float, 0x1131540);
    fVar21 = pfVar9[8] * REFG(float, 0x1131540);
    fVar22 = pfVar9[9] * REFG(float, 0x1131540);
    fVar23 = pfVar9[10] * REFG(float, 0x1131540);
    fVar24 = pfVar9[0xb] * REFG(float, 0x1131540);
    if (iVar11 != 0) {
      iVar11 = (iVar11 - 1U) / 6 + 1;
      do {
        sVar6 = *psVar10;
        psVar1 = psVar10 + 1;
        psVar2 = psVar10 + 2;
        psVar3 = psVar10 + 3;
        psVar4 = psVar10 + 4;
        fVar28 = (float)(int)psVar10[5];
        fVar29 = ((((float)(int)*psVar1 * fVar26 + (float)(int)sVar6 * fVar25) +
                  (float)(int)*psVar2 * local_30) + (float)(int)*psVar3 * local_2c) +
                 (float)(int)*psVar4 * local_28;
        psVar10 = psVar10 + 6;
        fVar14 = (((((float)(int)*psVar1 * local_1c + (float)(int)sVar6 * local_20) +
                   (float)(int)*psVar2 * local_18) + (float)(int)*psVar3 * local_14) +
                 (float)(int)*psVar4 * local_10) + fVar28 * local_c;
        if (iVar8 == 0) {
          *pfVar12 = fVar29 + fVar28 * local_24;
        }
        else {
          *pfVar12 = (fVar29 + fVar28 * local_24) + *pfVar12;
          fVar14 = fVar14 + pfVar12[1];
        }
        pfVar12[1] = fVar14;
        local_30 = fVar15 + local_30;
        local_2c = fVar16 + local_2c;
        local_28 = fVar17 + local_28;
        fVar25 = fVar13 + fVar25;
        fVar26 = fVar27 + fVar26;
        local_24 = fVar18 + local_24;
        local_20 = fVar19 + local_20;
        local_1c = fVar20 + local_1c;
        local_18 = fVar21 + local_18;
        local_14 = fVar22 + local_14;
        local_10 = fVar23 + local_10;
        pfVar12 = pfVar12 + 2;
        iVar11 = iVar11 - 1;
        local_c = fVar24 + local_c;
      } while (iVar11 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00cfce10 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cfce10(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfce10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  float * pfVar1;
  int iVar2;
  float * pfVar3;
  int iVar4;
  short * psVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pfVar1 = ((float *)GEN_TOP(param_1[2]));
  local_58 = pfVar1[3] * REFG(float, 0x1131540);
  local_54 = pfVar1[4] * REFG(float, 0x1131540);
  local_50 = pfVar1[5] * REFG(float, 0x1131540);
  local_4c = pfVar1[6] * REFG(float, 0x1131540);
  local_48 = pfVar1[7] * REFG(float, 0x1131540);
  local_44 = pfVar1[8] * REFG(float, 0x1131540);
  local_40 = pfVar1[9] * REFG(float, 0x1131540);
  local_3c = pfVar1[10] * REFG(float, 0x1131540);
  local_38 = pfVar1[0xb] * REFG(float, 0x1131540);
  local_34 = pfVar1[0xc] * REFG(float, 0x1131540);
  local_30 = pfVar1[0xd] * REFG(float, 0x1131540);
  local_2c = pfVar1[0xe] * REFG(float, 0x1131540);
  local_28 = pfVar1[0xf] * REFG(float, 0x1131540);
  local_24 = pfVar1[0x10] * REFG(float, 0x1131540);
  psVar5 = ((short *)GEN_TOP(*param_1));
  pfVar3 = ((float *)GEN_TOP(param_1[1]));
  iVar2 = param_1[8];
  local_20 = pfVar1[0x11] * REFG(float, 0x1131540);
  local_1c = pfVar1[0x12] * REFG(float, 0x1131540);
  local_18 = pfVar1[0x13] * REFG(float, 0x1131540);
  local_14 = pfVar1[0x14] * REFG(float, 0x1131540);
  local_10 = pfVar1[0x15] * REFG(float, 0x1131540);
  local_c = pfVar1[0x16] * REFG(float, 0x1131540);
  iVar4 = param_1[5];
  fVar33 = pfVar1[1] * REFG(float, 0x1131540);
  fVar36 = pfVar1[2] * REFG(float, 0x1131540);
  local_8 = pfVar1[0x17] * REFG(float, 0x1131540);
  fVar32 = *pfVar1 * REFG(float, 0x1131540);
  pfVar1 = ((float *)GEN_TOP(param_1[3]));
  if (pfVar1 == ((float *)GEN_TOP(0x0))) {
    if (iVar4 != 0) {
      iVar4 = (iVar4 - 1U >> 2) + 1;
      do {
        fVar8 = (float)(int)*psVar5;
        fVar6 = (float)(int)psVar5[1];
        fVar28 = (float)(int)psVar5[2];
        fVar30 = (float)(int)psVar5[3];
        fVar37 = ((fVar6 * fVar33 + fVar8 * fVar32) + fVar28 * fVar36) + fVar30 * local_58;
        fVar34 = ((fVar6 * local_50 + fVar8 * local_54) + fVar28 * local_4c) + fVar30 * local_48;
        psVar5 = psVar5 + 4;
        if (iVar2 == 0) {
          *pfVar3 = fVar37;
          pfVar3[1] = fVar34;
          pfVar3[2] = ((fVar6 * local_40 + fVar8 * local_44) + fVar28 * local_3c) +
                      fVar30 * local_38;
          pfVar3[3] = ((fVar6 * local_30 + fVar8 * local_34) + fVar28 * local_2c) +
                      fVar30 * local_28;
          pfVar3[4] = ((fVar6 * local_20 + fVar8 * local_24) + fVar28 * local_1c) +
                      fVar30 * local_18;
          fVar6 = ((fVar6 * local_10 + fVar8 * local_14) + fVar28 * local_c) + fVar30 * local_8;
        }
        else {
          *pfVar3 = fVar37 + *pfVar3;
          pfVar3[1] = fVar34 + pfVar3[1];
          pfVar3[2] = (((fVar6 * local_40 + fVar8 * local_44) + fVar28 * local_3c) +
                      fVar30 * local_38) + pfVar3[2];
          pfVar3[3] = (((fVar6 * local_30 + fVar8 * local_34) + fVar28 * local_2c) +
                      fVar30 * local_28) + pfVar3[3];
          pfVar3[4] = (((fVar6 * local_20 + fVar8 * local_24) + fVar28 * local_1c) +
                      fVar30 * local_18) + pfVar3[4];
          fVar6 = (((fVar6 * local_10 + fVar8 * local_14) + fVar28 * local_c) + fVar30 * local_8) +
                  pfVar3[5];
        }
        pfVar3[5] = fVar6;
        pfVar3 = pfVar3 + 6;
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
      return 0;
    }
  }
  else {
    fVar6 = *pfVar1 * REFG(float, 0x1131540);
    fVar8 = pfVar1[1] * REFG(float, 0x1131540);
    fVar28 = pfVar1[2] * REFG(float, 0x1131540);
    fVar30 = pfVar1[3] * REFG(float, 0x1131540);
    fVar34 = pfVar1[4] * REFG(float, 0x1131540);
    fVar37 = pfVar1[5] * REFG(float, 0x1131540);
    fVar9 = pfVar1[6] * REFG(float, 0x1131540);
    fVar10 = pfVar1[7] * REFG(float, 0x1131540);
    fVar11 = pfVar1[8] * REFG(float, 0x1131540);
    fVar12 = pfVar1[9] * REFG(float, 0x1131540);
    fVar13 = pfVar1[10] * REFG(float, 0x1131540);
    fVar14 = pfVar1[0xb] * REFG(float, 0x1131540);
    fVar15 = pfVar1[0xc] * REFG(float, 0x1131540);
    fVar16 = pfVar1[0xd] * REFG(float, 0x1131540);
    fVar17 = pfVar1[0xe] * REFG(float, 0x1131540);
    fVar18 = pfVar1[0xf] * REFG(float, 0x1131540);
    fVar19 = pfVar1[0x10] * REFG(float, 0x1131540);
    fVar20 = pfVar1[0x11] * REFG(float, 0x1131540);
    fVar21 = pfVar1[0x12] * REFG(float, 0x1131540);
    fVar22 = pfVar1[0x13] * REFG(float, 0x1131540);
    fVar23 = pfVar1[0x14] * REFG(float, 0x1131540);
    fVar24 = pfVar1[0x15] * REFG(float, 0x1131540);
    fVar25 = pfVar1[0x16] * REFG(float, 0x1131540);
    fVar26 = pfVar1[0x17] * REFG(float, 0x1131540);
    if (iVar4 != 0) {
      iVar4 = (iVar4 - 1U >> 2) + 1;
      do {
        fVar27 = (float)(int)*psVar5;
        fVar7 = (float)(int)psVar5[1];
        fVar29 = (float)(int)psVar5[2];
        fVar31 = (float)(int)psVar5[3];
        fVar38 = ((fVar7 * fVar33 + fVar27 * fVar32) + fVar29 * fVar36) + fVar31 * local_58;
        fVar35 = ((fVar7 * local_50 + fVar27 * local_54) + fVar29 * local_4c) + fVar31 * local_48;
        psVar5 = psVar5 + 4;
        if (iVar2 == 0) {
          *pfVar3 = fVar38;
          pfVar3[1] = fVar35;
          pfVar3[2] = ((fVar7 * local_40 + fVar27 * local_44) + fVar29 * local_3c) +
                      fVar31 * local_38;
          pfVar3[3] = ((fVar7 * local_30 + fVar27 * local_34) + fVar29 * local_2c) +
                      fVar31 * local_28;
          pfVar3[4] = ((fVar7 * local_20 + fVar27 * local_24) + fVar29 * local_1c) +
                      fVar31 * local_18;
          fVar7 = ((fVar7 * local_10 + fVar27 * local_14) + fVar29 * local_c) + fVar31 * local_8;
        }
        else {
          *pfVar3 = fVar38 + *pfVar3;
          pfVar3[1] = fVar35 + pfVar3[1];
          pfVar3[2] = (((fVar7 * local_40 + fVar27 * local_44) + fVar29 * local_3c) +
                      fVar31 * local_38) + pfVar3[2];
          pfVar3[3] = (((fVar7 * local_30 + fVar27 * local_34) + fVar29 * local_2c) +
                      fVar31 * local_28) + pfVar3[3];
          pfVar3[4] = (((fVar7 * local_20 + fVar27 * local_24) + fVar29 * local_1c) +
                      fVar31 * local_18) + pfVar3[4];
          fVar7 = (((fVar7 * local_10 + fVar27 * local_14) + fVar29 * local_c) + fVar31 * local_8) +
                  pfVar3[5];
        }
        pfVar3[5] = fVar7;
        local_58 = fVar30 + local_58;
        local_54 = fVar34 + local_54;
        local_50 = fVar37 + local_50;
        local_4c = fVar9 + local_4c;
        local_48 = fVar10 + local_48;
        local_44 = fVar11 + local_44;
        local_40 = fVar12 + local_40;
        local_3c = fVar13 + local_3c;
        local_38 = fVar14 + local_38;
        local_34 = fVar15 + local_34;
        local_30 = fVar16 + local_30;
        local_2c = fVar17 + local_2c;
        local_28 = fVar18 + local_28;
        local_24 = fVar19 + local_24;
        local_20 = fVar20 + local_20;
        fVar33 = fVar8 + fVar33;
        fVar36 = fVar28 + fVar36;
        fVar32 = fVar32 + fVar6;
        local_1c = fVar21 + local_1c;
        local_18 = fVar22 + local_18;
        local_14 = fVar23 + local_14;
        local_10 = fVar24 + local_10;
        local_c = fVar25 + local_c;
        pfVar3 = pfVar3 + 6;
        iVar4 = iVar4 - 1;
        local_8 = fVar26 + local_8;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00cfd750 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cfd750(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfd750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x4c, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  uint uVar6;
  short * psVar7;
  float * pfVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  
  (*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48);
  (*(uint *)(gen_frame + 0x0)) = param_1[6];
  iVar1 = param_1[1];
  iVar2 = *param_1;
  uVar3 = param_1[5];
  iVar4 = param_1[8];
  if (param_1[9] != 0) {
    (*(uint *)(gen_frame + 0x0)) = 1;
  }
  switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x0)))) {
  case 1: ;
    pfVar8 = ((float *)GEN_TOP(param_1[3]));
    ((float *)(gen_frame + 0x24))[0] = *((float *)GEN_TOP(param_1[2])) * REFG(float, 0x1131540);
    if (pfVar8 != ((float *)GEN_TOP(0x0))) {
      ((float *)(gen_frame + 0x4))[0] = *pfVar8 * REFG(float, 0x1131540);
    }
    break;
  case 2: ;
    pfVar8 = ((float *)GEN_TOP(param_1[2]));
    ((float *)(gen_frame + 0x24))[0] = *pfVar8 * REFG(float, 0x1131540);
    pfVar5 = ((float *)GEN_TOP(param_1[3]));
    ((float *)(gen_frame + 0x24))[1] = pfVar8[3] * REFG(float, 0x1131540);
    if (pfVar5 != ((float *)GEN_TOP(0x0))) {
      ((float *)(gen_frame + 0x4))[0] = *pfVar5 * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x4))[1] = pfVar5[3] * REFG(float, 0x1131540);
    }
    break;
  case 3: ;
    pfVar8 = ((float *)GEN_TOP(param_1[2]));
    ((float *)(gen_frame + 0x24))[0] = *pfVar8 * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x24))[1] = pfVar8[4] * REFG(float, 0x1131540);
    pfVar5 = ((float *)GEN_TOP(param_1[3]));
    ((float *)(gen_frame + 0x24))[2] = pfVar8[8] * REFG(float, 0x1131540);
    if (pfVar5 != ((float *)GEN_TOP(0x0))) {
      ((float *)(gen_frame + 0x4))[0] = *pfVar5 * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x4))[1] = pfVar5[4] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x4))[2] = pfVar5[8] * REFG(float, 0x1131540);
    }
    break;
  case 4: ;
    pfVar8 = ((float *)GEN_TOP(param_1[2]));
    ((float *)(gen_frame + 0x24))[0] = *pfVar8 * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x24))[1] = pfVar8[5] * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x24))[2] = pfVar8[10] * REFG(float, 0x1131540);
    pfVar5 = ((float *)GEN_TOP(param_1[3]));
    ((float *)(gen_frame + 0x24))[3] = pfVar8[0xf] * REFG(float, 0x1131540);
    if (pfVar5 != ((float *)GEN_TOP(0x0))) {
      ((float *)(gen_frame + 0x4))[0] = *pfVar5 * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x4))[1] = pfVar5[5] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x4))[2] = pfVar5[10] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x4))[3] = pfVar5[0xf] * REFG(float, 0x1131540);
    }
    break;
  case 5: ;
    pfVar8 = ((float *)GEN_TOP(param_1[2]));
    ((float *)(gen_frame + 0x24))[0] = *pfVar8 * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x24))[1] = pfVar8[6] * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x24))[2] = pfVar8[0xc] * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x24))[3] = pfVar8[0x12] * REFG(float, 0x1131540);
    pfVar5 = ((float *)GEN_TOP(param_1[3]));
    (*(float *)(gen_frame + 0x34)) = pfVar8[0x18] * REFG(float, 0x1131540);
    if (pfVar5 != ((float *)GEN_TOP(0x0))) {
      ((float *)(gen_frame + 0x4))[0] = *pfVar5 * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x4))[1] = pfVar5[6] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x4))[2] = pfVar5[0xc] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x4))[3] = pfVar5[0x12] * REFG(float, 0x1131540);
      (*(float *)(gen_frame + 0x14)) = pfVar5[0x18] * REFG(float, 0x1131540);
    }
    break;
  case 6: ;
    pfVar8 = ((float *)GEN_TOP(param_1[2]));
    ((float *)(gen_frame + 0x24))[0] = *pfVar8 * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x24))[1] = pfVar8[7] * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x24))[2] = pfVar8[0xe] * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x24))[3] = pfVar8[0x15] * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0x34)) = pfVar8[0x1c] * REFG(float, 0x1131540);
    pfVar5 = ((float *)GEN_TOP(param_1[3]));
    (*(float *)(gen_frame + 0x38)) = pfVar8[0x23] * REFG(float, 0x1131540);
    if (pfVar5 != ((float *)GEN_TOP(0x0))) {
      ((float *)(gen_frame + 0x4))[0] = *pfVar5 * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x4))[1] = pfVar5[7] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x4))[2] = pfVar5[0xe] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x4))[3] = pfVar5[0x15] * REFG(float, 0x1131540);
      (*(float *)(gen_frame + 0x14)) = pfVar5[0x1c] * REFG(float, 0x1131540);
      (*(float *)(gen_frame + 0x18)) = pfVar5[0x23] * REFG(float, 0x1131540);
    }
  }
  uVar6 = 0;
  uVar10 = 0;
  if (param_1[3] == 0) {
    if (3 < (int)uVar3) {
      pfVar8 = ((float *)GEN_TOP((iVar1 + 8)));
      iVar9 = (uVar3 - 4 >> 2) + 1;
      psVar7 = ((short *)GEN_TOP((iVar2 + 4)));
      uVar10 = iVar9 * 4;
      do {
        if (iVar4 == 0) {
          pfVar8[-2] = (float)(int)psVar7[-2] * ((float *)(gen_frame + 0x24))[(int)(uVar6)];
        }
        else {
          pfVar8[-2] = pfVar8[-2] + (float)(int)psVar7[-2] * ((float *)(gen_frame + 0x24))[(int)(uVar6)];
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar6) {
          uVar6 = 0;
        }
        if (iVar4 == 0) {
          pfVar8[-1] = (float)(int)psVar7[-1] * ((float *)(gen_frame + 0x24))[(int)(uVar6)];
        }
        else {
          pfVar8[-1] = pfVar8[-1] + (float)(int)psVar7[-1] * ((float *)(gen_frame + 0x24))[(int)(uVar6)];
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar6) {
          uVar6 = 0;
        }
        if (iVar4 == 0) {
          *pfVar8 = (float)(int)*psVar7 * ((float *)(gen_frame + 0x24))[(int)(uVar6)];
        }
        else {
          *pfVar8 = *pfVar8 + (float)(int)*psVar7 * ((float *)(gen_frame + 0x24))[(int)(uVar6)];
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar6) {
          uVar6 = 0;
        }
        fVar11 = (float)(int)psVar7[1] * ((float *)(gen_frame + 0x24))[(int)(uVar6)];
        if (iVar4 != 0) {
          fVar11 = fVar11 + pfVar8[1];
        }
        uVar6 = uVar6 + 1;
        pfVar8[1] = fVar11;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar6) {
          uVar6 = 0;
        }
        psVar7 = psVar7 + 4;
        pfVar8 = pfVar8 + 4;
        iVar9 = iVar9 - 1;
      } while (iVar9 != 0);
    }
    if (uVar10 < uVar3) {
      do {
        fVar11 = (float)(int)*((short *)GEN_TOP((iVar2 + uVar10 * 2))) * ((float *)(gen_frame + 0x24))[(int)(uVar6)];
        if (iVar4 == 0) {
          *((float *)GEN_TOP((iVar1 + uVar10 * 4))) = fVar11;
        }
        else {
          *((float *)GEN_TOP((iVar1 + uVar10 * 4))) = *((float *)GEN_TOP((iVar1 + uVar10 * 4))) + fVar11;
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar6) {
          uVar6 = 0;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar3);
      return uVar6;
    }
  }
  else {
    if (3 < (int)uVar3) {
      pfVar8 = ((float *)GEN_TOP((iVar1 + 8)));
      iVar9 = (uVar3 - 4 >> 2) + 1;
      psVar7 = ((short *)GEN_TOP((iVar2 + 4)));
      uVar10 = iVar9 * 4;
      do {
        fVar11 = (float)(int)psVar7[-2] * ((float *)(gen_frame + 0x24))[(int)(uVar6)];
        ((float *)(gen_frame + 0x24))[(int)(uVar6)] = ((float *)(gen_frame + 0x4))[(int)(uVar6)] + ((float *)(gen_frame + 0x24))[(int)(uVar6)];
        if (iVar4 == 0) {
          pfVar8[-2] = fVar11;
        }
        else {
          pfVar8[-2] = pfVar8[-2] + fVar11;
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar6) {
          uVar6 = 0;
        }
        fVar11 = (float)(int)psVar7[-1] * ((float *)(gen_frame + 0x24))[(int)(uVar6)];
        ((float *)(gen_frame + 0x24))[(int)(uVar6)] = ((float *)(gen_frame + 0x4))[(int)(uVar6)] + ((float *)(gen_frame + 0x24))[(int)(uVar6)];
        if (iVar4 == 0) {
          pfVar8[-1] = fVar11;
        }
        else {
          pfVar8[-1] = pfVar8[-1] + fVar11;
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar6) {
          uVar6 = 0;
        }
        fVar11 = (float)(int)*psVar7 * ((float *)(gen_frame + 0x24))[(int)(uVar6)];
        ((float *)(gen_frame + 0x24))[(int)(uVar6)] = ((float *)(gen_frame + 0x4))[(int)(uVar6)] + ((float *)(gen_frame + 0x24))[(int)(uVar6)];
        if (iVar4 != 0) {
          fVar11 = fVar11 + *pfVar8;
        }
        uVar6 = uVar6 + 1;
        *pfVar8 = fVar11;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar6) {
          uVar6 = 0;
        }
        fVar11 = (float)(int)psVar7[1] * ((float *)(gen_frame + 0x24))[(int)(uVar6)];
        ((float *)(gen_frame + 0x24))[(int)(uVar6)] = ((float *)(gen_frame + 0x4))[(int)(uVar6)] + ((float *)(gen_frame + 0x24))[(int)(uVar6)];
        if (iVar4 == 0) {
          pfVar8[1] = fVar11;
        }
        else {
          pfVar8[1] = pfVar8[1] + fVar11;
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x0)) <= uVar6) {
          uVar6 = 0;
        }
        psVar7 = psVar7 + 4;
        pfVar8 = pfVar8 + 4;
        iVar9 = iVar9 - 1;
      } while (iVar9 != 0);
    }
    for (; uVar10 < uVar3; uVar10 = uVar10 + 1) {
      fVar11 = (float)(int)*((short *)GEN_TOP((iVar2 + uVar10 * 2))) * ((float *)(gen_frame + 0x24))[(int)(uVar6)];
      ((float *)(gen_frame + 0x24))[(int)(uVar6)] = ((float *)(gen_frame + 0x4))[(int)(uVar6)] + ((float *)(gen_frame + 0x24))[(int)(uVar6)];
      if (iVar4 == 0) {
        *((float *)GEN_TOP((iVar1 + uVar10 * 4))) = fVar11;
      }
      else {
        *((float *)GEN_TOP((iVar1 + uVar10 * 4))) = *((float *)GEN_TOP((iVar1 + uVar10 * 4))) + fVar11;
      }
      uVar6 = uVar6 + 1;
      if ((*(uint *)(gen_frame + 0x0)) <= uVar6) {
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}

/* ref: FUN_00cfddb0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cfddb0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfddb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined1 auVar1 [16];
  short sVar2;
  float * pfVar3;
  int iVar4;
  float * pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  short * psVar13;
  float * pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fStack_28;
  float fStack_24;
  float fStack_18;
  float fStack_14;
  
  psVar13 = ((short *)GEN_TOP(*param_1));
  pfVar14 = ((float *)GEN_TOP(param_1[1]));
  uVar12 = param_1[5];
  pfVar3 = ((float *)GEN_TOP(param_1[2]));
  fVar15 = *pfVar3 * REFG(float, 0x1131540);
  iVar4 = param_1[8];
  pfVar5 = ((float *)GEN_TOP(param_1[3]));
  fVar16 = pfVar3[1] * REFG(float, 0x1131540);
  if (pfVar5 == ((float *)GEN_TOP(0x0))) {
    fStack_18 = 0.0;
    fStack_14 = 0.0;
    fStack_28 = fVar15;
    fStack_24 = fVar16;
  }
  else {
    fStack_28 = (*pfVar3 + *pfVar5) * REFG(float, 0x1131540);
    fStack_18 = *pfVar5 * REFG(float, 0x1131540);
    fStack_14 = pfVar5[1] * REFG(float, 0x1131540);
    fStack_24 = (pfVar3[1] + pfVar5[1]) * REFG(float, 0x1131540);
  }
  fVar29 = fStack_28;
  fVar30 = fStack_24;
  if (((uint)pfVar14 & 0x38) != 0) {
    if ((int)uVar12 < 8) goto LAB_00cfdf29;
    do {
      sVar2 = *psVar13;
      psVar13 = psVar13 + 1;
      uVar12 = uVar12 - 1;
      fVar31 = (float)(int)sVar2 * fVar15;
      fVar32 = (float)(int)sVar2 * fVar16;
      fVar15 = fVar15 + fStack_18;
      fVar16 = fVar16 + fStack_14;
      fVar29 = fVar29 + fStack_18;
      fVar30 = fVar30 + fStack_14;
      if (iVar4 != 0) {
        fVar31 = fVar31 + *pfVar14;
        fVar32 = fVar32 + pfVar14[1];
      }
      *pfVar14 = fVar31;
      pfVar14[1] = fVar32;
      pfVar14 = pfVar14 + 2;
    } while (((uint)pfVar14 & 0x38) != 0);
  }
  if (7 < (int)uVar12) {
    uVar10 = uVar12 & 0xfffffff8;
    uVar12 = uVar12 & 7;
    fVar31 = fStack_18 + fStack_18;
    fVar32 = fStack_14 + fStack_14;
    fVar33 = fStack_18 + fStack_18;
    fVar34 = fStack_14 + fStack_14;
    psVar13 = psVar13 + uVar10;
    pfVar14 = pfVar14 + uVar10 * 2;
    iVar11 = -uVar10;
    do {
      memcpy(&(auVar1), &(*(gen_v16 *)(psVar13 + iVar11)), sizeof(*(gen_v16 *)(psVar13 + iVar11)) < sizeof(auVar1) ? sizeof(*(gen_v16 *)(psVar13 + iVar11)) : sizeof(auVar1));
      fVar17 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 0)) * fVar15;
      fVar18 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 0)) * fVar16;
      fVar19 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 2)) * fVar29;
      fVar20 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 2)) * fVar30;
      fVar21 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 4)) * (fVar15 + fVar31);
      fVar22 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 4)) * (fVar16 + fVar32);
      fVar23 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 6)) * (fVar29 + fVar33);
      fVar24 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 6)) * (fVar30 + fVar34);
      fVar15 = (fVar15 + fVar31) + fVar31;
      fVar16 = (fVar16 + fVar32) + fVar32;
      fVar29 = (fVar29 + fVar33) + fVar33;
      fVar30 = (fVar30 + fVar34) + fVar34;
      fVar6 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 8)) * fVar15;
      fVar7 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 8)) * fVar16;
      fVar8 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 10)) * fVar29;
      fVar9 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 10)) * fVar30;
      fVar15 = fVar15 + fVar31;
      fVar16 = fVar16 + fVar32;
      fVar29 = fVar29 + fVar33;
      fVar30 = fVar30 + fVar34;
      fVar25 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 12)) * fVar15;
      fVar26 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 12)) * fVar16;
      fVar27 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 14)) * fVar29;
      fVar28 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 14)) * fVar30;
      fVar15 = fVar15 + fVar31;
      fVar16 = fVar16 + fVar32;
      fVar29 = fVar29 + fVar33;
      fVar30 = fVar30 + fVar34;
      if (iVar4 != 0) {
        pfVar3 = pfVar14 + iVar11 * 2;
        fVar17 = fVar17 + *pfVar3;
        fVar18 = fVar18 + pfVar3[1];
        fVar19 = fVar19 + pfVar3[2];
        fVar20 = fVar20 + pfVar3[3];
        pfVar3 = pfVar14 + iVar11 * 2 + 4;
        fVar21 = fVar21 + *pfVar3;
        fVar22 = fVar22 + pfVar3[1];
        fVar23 = fVar23 + pfVar3[2];
        fVar24 = fVar24 + pfVar3[3];
        pfVar3 = pfVar14 + iVar11 * 2 + 8;
        fVar6 = fVar6 + *pfVar3;
        fVar7 = fVar7 + pfVar3[1];
        fVar8 = fVar8 + pfVar3[2];
        fVar9 = fVar9 + pfVar3[3];
        pfVar3 = pfVar14 + iVar11 * 2 + 0xc;
        fVar25 = fVar25 + *pfVar3;
        fVar26 = fVar26 + pfVar3[1];
        fVar27 = fVar27 + pfVar3[2];
        fVar28 = fVar28 + pfVar3[3];
      }
      pfVar3 = pfVar14 + iVar11 * 2;
      *pfVar3 = fVar17;
      pfVar3[1] = fVar18;
      pfVar3[2] = fVar19;
      pfVar3[3] = fVar20;
      pfVar3 = pfVar14 + iVar11 * 2 + 4;
      *pfVar3 = fVar21;
      pfVar3[1] = fVar22;
      pfVar3[2] = fVar23;
      pfVar3[3] = fVar24;
      (*(undefined2 *)((char *)&auVar1 + 4)) = (short)(uint)gen_fl2bits(fVar7);
      (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar6);
      (*(undefined2 *)((char *)&auVar1 + 6)) = (short)((uint)gen_fl2bits(fVar7) >> 0x10);
      (*(undefined2 *)((char *)&auVar1 + 8)) = (short)(uint)gen_fl2bits(fVar8);
      (*(undefined2 *)((char *)&auVar1 + 10)) = (short)((uint)gen_fl2bits(fVar8) >> 0x10);
      (*(undefined2 *)((char *)&auVar1 + 12)) = (short)(uint)gen_fl2bits(fVar9);
      (*(undefined2 *)((char *)&auVar1 + 14)) = (short)((uint)gen_fl2bits(fVar9) >> 0x10);
      memcpy(&(*(gen_v16 *)(pfVar14 + iVar11 * 2 + 8)), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)(pfVar14 + iVar11 * 2 + 8)) ? sizeof(auVar1) : sizeof(*(gen_v16 *)(pfVar14 + iVar11 * 2 + 8)));
      pfVar3 = pfVar14 + iVar11 * 2 + 0xc;
      *pfVar3 = fVar25;
      pfVar3[1] = fVar26;
      pfVar3[2] = fVar27;
      pfVar3[3] = fVar28;
      iVar11 = iVar11 + 8;
    } while (iVar11 != 0);
  }
LAB_00cfdf29: ;
  while ((uVar12 & 7) != 0) {
    sVar2 = *psVar13;
    psVar13 = psVar13 + 1;
    uVar12 = uVar12 - 1;
    fVar29 = (float)(int)sVar2 * fVar15;
    fVar30 = (float)(int)sVar2 * fVar16;
    fVar15 = fVar15 + fStack_18;
    fVar16 = fVar16 + fStack_14;
    if (iVar4 != 0) {
      fVar29 = fVar29 + *pfVar14;
      fVar30 = fVar30 + pfVar14[1];
    }
    *pfVar14 = fVar29;
    pfVar14[1] = fVar30;
    pfVar14 = pfVar14 + 2;
  }
  return 0;
}

/* ref: FUN_00cfdfc0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cfdfc0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfdfc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x78, 8);
  int iVar1;
  float * pfVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  short * psVar7;
  float * pfVar8;
  undefined2 uVar10;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  (*(short * PTR32 *)(gen_frame + 0x6c)) = ((short *)GEN_TOP(*param_1));
  (*(uint *)(gen_frame + 0x68)) = param_1[5];
  pfVar8 = ((float *)GEN_TOP(param_1[2]));
  fVar14 = *pfVar8 * REFG(float, 0x1131540);
  fVar15 = pfVar8[1] * REFG(float, 0x1131540);
  fVar16 = pfVar8[2] * REFG(float, 0x1131540);
  fVar17 = pfVar8[3] * REFG(float, 0x1131540);
  fVar18 = pfVar8[4] * REFG(float, 0x1131540);
  (*(float * PTR32 *)(gen_frame + 0x70)) = ((float *)GEN_TOP(param_1[1]));
  iVar1 = param_1[8];
  pfVar2 = ((float *)GEN_TOP(param_1[3]));
  fVar19 = pfVar8[5] * REFG(float, 0x1131540);
  if (pfVar2 == ((float *)GEN_TOP(0x0))) {
    F_00c48350(&(*(float *)(gen_frame + 0x18)),0,0x30);
    (*(float *)(gen_frame + 0x0)) = fVar14;
    (*(float *)(gen_frame + 0x4)) = fVar15;
    (*(float *)(gen_frame + 0x8)) = fVar16;
    (*(float *)(gen_frame + 0xc)) = fVar17;
    (*(float *)(gen_frame + 0x10)) = fVar18;
    (*(float *)(gen_frame + 0x14)) = fVar19;
  }
  else {
    (*(float *)(gen_frame + 0x0)) = (*pfVar8 + *pfVar2) * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0x4)) = (pfVar2[1] + pfVar8[1]) * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0x8)) = (pfVar2[2] + pfVar8[2]) * REFG(float, 0x1131540);
    fVar20 = pfVar2[3];
    (*(float *)(gen_frame + 0xc)) = (fVar20 + pfVar8[3]) * REFG(float, 0x1131540);
    fVar21 = pfVar2[4];
    (*(float *)(gen_frame + 0x10)) = (fVar21 + pfVar8[4]) * REFG(float, 0x1131540);
    fVar22 = pfVar2[5];
    fVar23 = pfVar8[5];
    fVar24 = *pfVar2 * REFG(float, 0x1131540);
    fVar25 = pfVar2[1] * REFG(float, 0x1131540);
    fVar9 = pfVar2[2] * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0x18)) = fVar24;
    (*(float *)(gen_frame + 0x1c)) = fVar25;
    (*(float *)(gen_frame + 0x20)) = fVar9;
    fVar20 = fVar20 * REFG(float, 0x1131540);
    fVar21 = fVar21 * REFG(float, 0x1131540);
    fVar11 = fVar22 * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0x24)) = fVar20;
    (*(float *)(gen_frame + 0x28)) = fVar21;
    (*(float *)(gen_frame + 0x2c)) = fVar11;
    (*(float *)(gen_frame + 0x30)) = fVar24;
    (*(float *)(gen_frame + 0x34)) = fVar25;
    (*(float *)(gen_frame + 0x38)) = fVar9;
    (*(float *)(gen_frame + 0x14)) = (fVar22 + fVar23) * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0x3c)) = fVar20;
    (*(float *)(gen_frame + 0x40)) = fVar21;
    (*(float *)(gen_frame + 0x44)) = fVar11;
  }
  uVar6 = (*(uint *)(gen_frame + 0x68));
  psVar7 = (*(short * PTR32 *)(gen_frame + 0x6c));
  pfVar8 = (*(float * PTR32 *)(gen_frame + 0x70));
  fVar20 = (*(float *)(gen_frame + 0x0));
  fVar21 = (*(float *)(gen_frame + 0x4));
  fVar22 = (*(float *)(gen_frame + 0x8));
  fVar23 = (*(float *)(gen_frame + 0xc));
  fVar24 = (*(float *)(gen_frame + 0x10));
  fVar25 = (*(float *)(gen_frame + 0x14));
  if (((uint)(*(float * PTR32 *)(gen_frame + 0x70)) & 0xc) != 0) {
    if ((int)(*(uint *)(gen_frame + 0x68)) < 2) goto LAB_00cfe251;
    do {
      fVar22 = fVar22 + (*(float *)(gen_frame + 0x38));
      fVar23 = fVar23 + (*(float *)(gen_frame + 0x3c));
      fVar24 = fVar24 + (*(float *)(gen_frame + 0x40));
      fVar25 = fVar25 + (*(float *)(gen_frame + 0x44));
      fVar9 = (float)(int)*psVar7;
      fVar11 = fVar9 * fVar14;
      fVar12 = fVar9 * fVar15;
      fVar13 = fVar9 * fVar16;
      fVar9 = fVar9 * fVar17;
      fVar14 = fVar14 + (*(float *)(gen_frame + 0x18));
      fVar15 = fVar15 + (*(float *)(gen_frame + 0x1c));
      fVar16 = fVar16 + (*(float *)(gen_frame + 0x20));
      fVar17 = fVar17 + (*(float *)(gen_frame + 0x24));
      if (iVar1 != 0) {
        fVar11 = fVar11 + *pfVar8;
        fVar12 = fVar12 + pfVar8[1];
        fVar13 = fVar13 + pfVar8[2];
        fVar9 = fVar9 + pfVar8[3];
      }
      *pfVar8 = fVar11;
      pfVar8[1] = fVar12;
      pfVar8[2] = fVar13;
      pfVar8[3] = fVar9;
      fVar9 = (float)(int)*psVar7 * fVar18;
      fVar11 = (float)(int)*psVar7 * fVar19;
      fVar18 = fVar18 + (*(float *)(gen_frame + 0x28));
      fVar19 = fVar19 + (*(float *)(gen_frame + 0x2c));
      fVar20 = fVar20 + (*(float *)(gen_frame + 0x30));
      fVar21 = fVar21 + (*(float *)(gen_frame + 0x34));
      psVar7 = psVar7 + 1;
      if (iVar1 != 0) {
        fVar9 = fVar9 + gen_bits2f((uint)*(undefined8 *)(pfVar8 + 4));
        fVar11 = fVar11 + gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar8 + 4) >> 0x20));
      }
      *(ulonglong *)(pfVar8 + 4) = CONCAT44((uint)gen_fl2bits(fVar11),(uint)gen_fl2bits(fVar9));
      uVar6 = uVar6 - 1;
      pfVar8 = pfVar8 + 6;
    } while (((uint)pfVar8 & 0xc) != 0);
  }
  if (1 < (int)uVar6) {
    uVar4 = uVar6 & 0xfffffffe;
    uVar6 = uVar6 & 1;
    psVar7 = psVar7 + uVar4;
    iVar5 = -uVar4;
    do {
      uVar3 = *(undefined4 *)(psVar7 + iVar5);
      uVar10 = (undefined2)((uint)uVar3 >> 0x10);
      fVar9 = (float)(int)(short)uVar3;
      fVar11 = (float)(int)((longlong)CONCAT26(uVar10,CONCAT24(uVar10,uVar3)) >> 0x30);
      if (iVar1 == 0) {
        *pfVar8 = fVar9 * fVar14;
        pfVar8[1] = fVar9 * fVar15;
        pfVar8[2] = fVar9 * fVar16;
        pfVar8[3] = fVar9 * fVar17;
        pfVar8[4] = fVar9 * fVar18;
        pfVar8[5] = fVar9 * fVar19;
        pfVar8[6] = fVar11 * fVar20;
        pfVar8[7] = fVar11 * fVar21;
        pfVar8[8] = fVar11 * fVar22;
        pfVar8[9] = fVar11 * fVar23;
        pfVar8[10] = fVar11 * fVar24;
        pfVar8[0xb] = fVar11 * fVar25;
      }
      else {
        *pfVar8 = fVar9 * fVar14 + *pfVar8;
        pfVar8[1] = fVar9 * fVar15 + pfVar8[1];
        pfVar8[2] = fVar9 * fVar16 + pfVar8[2];
        pfVar8[3] = fVar9 * fVar17 + pfVar8[3];
        pfVar8[4] = fVar9 * fVar18 + pfVar8[4];
        pfVar8[5] = fVar9 * fVar19 + pfVar8[5];
        pfVar8[6] = fVar11 * fVar20 + pfVar8[6];
        pfVar8[7] = fVar11 * fVar21 + pfVar8[7];
        pfVar8[8] = fVar11 * fVar22 + pfVar8[8];
        pfVar8[9] = fVar11 * fVar23 + pfVar8[9];
        pfVar8[10] = fVar11 * fVar24 + pfVar8[10];
        pfVar8[0xb] = fVar11 * fVar25 + pfVar8[0xb];
      }
      fVar25 = fVar25 + ((*(float *)(gen_frame + 0x44)) + (*(float *)(gen_frame + 0x44)));
      fVar24 = fVar24 + ((*(float *)(gen_frame + 0x40)) + (*(float *)(gen_frame + 0x40)));
      fVar23 = fVar23 + ((*(float *)(gen_frame + 0x3c)) + (*(float *)(gen_frame + 0x3c)));
      fVar22 = fVar22 + ((*(float *)(gen_frame + 0x38)) + (*(float *)(gen_frame + 0x38)));
      fVar21 = fVar21 + ((*(float *)(gen_frame + 0x34)) + (*(float *)(gen_frame + 0x34)));
      fVar20 = fVar20 + ((*(float *)(gen_frame + 0x30)) + (*(float *)(gen_frame + 0x30)));
      fVar19 = fVar19 + ((*(float *)(gen_frame + 0x2c)) + (*(float *)(gen_frame + 0x2c)));
      fVar18 = fVar18 + ((*(float *)(gen_frame + 0x28)) + (*(float *)(gen_frame + 0x28)));
      fVar17 = fVar17 + ((*(float *)(gen_frame + 0x24)) + (*(float *)(gen_frame + 0x24)));
      fVar16 = fVar16 + ((*(float *)(gen_frame + 0x20)) + (*(float *)(gen_frame + 0x20)));
      fVar15 = fVar15 + ((*(float *)(gen_frame + 0x1c)) + (*(float *)(gen_frame + 0x1c)));
      fVar14 = fVar14 + ((*(float *)(gen_frame + 0x18)) + (*(float *)(gen_frame + 0x18)));
      pfVar8 = pfVar8 + 0xc;
      iVar5 = iVar5 + 2;
    } while (iVar5 != 0);
  }
LAB_00cfe251: ;
  if ((uVar6 & 1) != 0) {
    fVar20 = (float)(int)*psVar7;
    fVar14 = fVar20 * fVar14;
    fVar15 = fVar20 * fVar15;
    fVar16 = fVar20 * fVar16;
    fVar17 = fVar20 * fVar17;
    fVar18 = fVar20 * fVar18;
    fVar20 = fVar20 * fVar19;
    if (iVar1 != 0) {
      fVar14 = fVar14 + *pfVar8;
      fVar15 = fVar15 + pfVar8[1];
      fVar16 = fVar16 + pfVar8[2];
      fVar17 = fVar17 + pfVar8[3];
      fVar18 = fVar18 + gen_bits2f((uint)*(undefined8 *)(pfVar8 + 4));
      fVar20 = fVar20 + gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar8 + 4) >> 0x20));
    }
    *pfVar8 = fVar14;
    pfVar8[1] = fVar15;
    pfVar8[2] = fVar16;
    pfVar8[3] = fVar17;
    *(ulonglong *)(pfVar8 + 4) = CONCAT44((uint)gen_fl2bits(fVar20),(uint)gen_fl2bits(fVar18));
  }
  return 0;
}

/* ref: FUN_00cfe300 */
GEN_LIB GEN_NOFRAME unsigned int F_00cfe300(GEN_P(float in_xmm1, float gen_a0), GEN_P(float in_xmm3, float gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcfe300u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(float in_xmm1 = (float)gen_a0;)
  GEN_PIN(float in_xmm3 = (float)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  short sVar3;
  int iVar4;
  float * pfVar5;
  float * pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  short * psVar16;
  float * pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  psVar16 = ((short *)GEN_TOP(*param_3));
  pfVar17 = ((float *)GEN_TOP(param_3[1]));
  uVar15 = param_3[5];
  iVar4 = param_3[8];
  iVar13 = param_3[6];
  if (param_3[9] != 0) {
    iVar13 = 1;
  }
  if (iVar13 == 1) {
    local_30 = *((float *)GEN_TOP(param_3[2])) * REFG(float, 0x1131540);
    fStack_2c = local_30;
    fStack_28 = local_30;
    fStack_24 = local_30;
    if (((float *)GEN_TOP(param_3[3])) == ((float *)GEN_TOP(0x0))) {
LAB_00cfe49c: ;
      local_20 = 0.0;
      fStack_1c = 0.0;
      fStack_18 = 0.0;
      fStack_14 = 0.0;
    }
    else {
      fVar27 = *((float *)GEN_TOP(param_3[3]));
      fVar30 = *((float *)GEN_TOP(param_3[2]));
      fStack_2c = (fVar30 + fVar27) * REFG(float, 0x1131540);
      fVar31 = fVar27 * REFG(float, 0x10928e4) + fVar30;
      local_20 = (fVar27 * REFG(float, 0x1094870)) * REFG(float, 0x1131540);
      fVar30 = fVar27 * REFG(float, 0x1087ef8) + fVar30;
      fStack_14 = local_20;
LAB_00cfe505: ;
      fStack_28 = fVar31 * REFG(float, 0x1131540);
      fStack_24 = fVar30 * REFG(float, 0x1131540);
      fStack_1c = fStack_14;
      fStack_18 = local_20;
    }
  }
  else if (iVar13 == 2) {
    pfVar5 = ((float *)GEN_TOP(param_3[2]));
    pfVar6 = ((float *)GEN_TOP(param_3[3]));
    local_30 = *pfVar5 * REFG(float, 0x1131540);
    fStack_2c = pfVar5[3] * REFG(float, 0x1131540);
    if (pfVar6 != ((float *)GEN_TOP(0x0))) {
      fVar31 = *pfVar5 + *pfVar6;
      fVar30 = pfVar6[3] + pfVar5[3];
      fStack_14 = (pfVar6[3] * REFG(float, 0x10928e4)) * REFG(float, 0x1131540);
      local_20 = (*pfVar6 * REFG(float, 0x10928e4)) * REFG(float, 0x1131540);
      goto LAB_00cfe505;
    }
    local_20 = 0.0;
    fStack_1c = 0.0;
    fStack_18 = 0.0;
    fStack_14 = 0.0;
    fStack_28 = local_30;
    fStack_24 = fStack_2c;
  }
  else if (iVar13 == 4) {
    pfVar5 = ((float *)GEN_TOP(param_3[2]));
    pfVar6 = ((float *)GEN_TOP(param_3[3]));
    local_30 = *pfVar5 * REFG(float, 0x1131540);
    fStack_2c = pfVar5[5] * REFG(float, 0x1131540);
    fStack_28 = pfVar5[10] * REFG(float, 0x1131540);
    fStack_24 = pfVar5[0xf] * REFG(float, 0x1131540);
    if (pfVar6 == ((float *)GEN_TOP(0x0))) goto LAB_00cfe49c;
    local_20 = *pfVar6 * REFG(float, 0x1131540);
    fStack_1c = pfVar6[5] * REFG(float, 0x1131540);
    fStack_18 = pfVar6[10] * REFG(float, 0x1131540);
    fStack_14 = pfVar6[0xf] * REFG(float, 0x1131540);
  }
  fVar27 = local_30;
  fVar30 = fStack_2c;
  fVar31 = fStack_28;
  fVar32 = fStack_24;
  fVar19 = local_20;
  fVar33 = fStack_1c;
  fVar34 = fStack_18;
  fVar35 = fStack_14;
  if (((uint)pfVar17 & 0x3c) != 0) {
    fVar29 = local_30;
    fVar28 = fStack_2c;
    fVar7 = fStack_28;
    fVar8 = local_20;
    fVar19 = local_20;
    fVar9 = fStack_1c;
    fVar10 = fStack_18;
    if ((int)uVar15 < 0x10) goto LAB_00cfe5ed;
    do {
      fVar34 = fVar35;
      fVar33 = fVar10;
      fVar19 = fVar9;
      fVar35 = fVar8;
      fVar31 = fVar32;
      fVar30 = fVar7;
      fVar27 = fVar28;
      sVar3 = *psVar16;
      psVar16 = psVar16 + 1;
      uVar15 = uVar15 - 1;
      fVar28 = (float)(int)sVar3 * fVar29;
      fVar32 = fVar29 + fVar35;
      if (iVar4 != 0) {
        fVar28 = fVar28 + *pfVar17;
      }
      *pfVar17 = fVar28;
      pfVar17 = pfVar17 + 1;
      fVar29 = fVar27;
      fVar28 = fVar30;
      fVar7 = fVar31;
      fVar8 = fVar19;
      fVar9 = fVar33;
      fVar10 = fVar34;
    } while (((uint)pfVar17 & 0x3c) != 0);
  }
  if (0xf < (int)uVar15) {
    uVar14 = uVar15 & 0xfffffff0;
    uVar15 = uVar15 & 0xf;
    psVar16 = psVar16 + uVar14;
    pfVar17 = pfVar17 + uVar14;
    iVar13 = -uVar14;
    do {
      memcpy(&(auVar1), &(*(gen_v16 *)(psVar16 + iVar13)), sizeof(*(gen_v16 *)(psVar16 + iVar13)) < sizeof(auVar1) ? sizeof(*(gen_v16 *)(psVar16 + iVar13)) : sizeof(auVar1));
      memcpy(&(auVar2), &(*(gen_v16 *)(psVar16 + iVar13 + 8)), sizeof(*(gen_v16 *)(psVar16 + iVar13 + 8)) < sizeof(auVar2) ? sizeof(*(gen_v16 *)(psVar16 + iVar13 + 8)) : sizeof(auVar2));
      fVar18 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 0)) * fVar27;
      fVar20 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 2)) * fVar30;
      fVar21 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 4)) * fVar31;
      fVar22 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 6)) * fVar32;
      fVar29 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 8)) * (fVar27 + fVar19);
      fVar28 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 10)) * (fVar30 + fVar33);
      fVar7 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 12)) * (fVar31 + fVar34);
      fVar8 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 14)) * (fVar32 + fVar35);
      fVar27 = (fVar27 + fVar19) + fVar19;
      fVar30 = (fVar30 + fVar33) + fVar33;
      fVar31 = (fVar31 + fVar34) + fVar34;
      fVar32 = (fVar32 + fVar35) + fVar35;
      fVar23 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 0)) * fVar27;
      fVar24 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 2)) * fVar30;
      fVar25 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 4)) * fVar31;
      fVar26 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 6)) * fVar32;
      fVar27 = fVar27 + fVar19;
      fVar30 = fVar30 + fVar33;
      fVar31 = fVar31 + fVar34;
      fVar32 = fVar32 + fVar35;
      fVar9 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 8)) * fVar27;
      fVar10 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 10)) * fVar30;
      fVar11 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 12)) * fVar31;
      fVar12 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 14)) * fVar32;
      fVar27 = fVar27 + fVar19;
      fVar30 = fVar30 + fVar33;
      fVar31 = fVar31 + fVar34;
      fVar32 = fVar32 + fVar35;
      if (iVar4 != 0) {
        pfVar5 = pfVar17 + iVar13;
        fVar18 = fVar18 + *pfVar5;
        fVar20 = fVar20 + pfVar5[1];
        fVar21 = fVar21 + pfVar5[2];
        fVar22 = fVar22 + pfVar5[3];
        pfVar5 = pfVar17 + iVar13 + 4;
        fVar29 = fVar29 + *pfVar5;
        fVar28 = fVar28 + pfVar5[1];
        fVar7 = fVar7 + pfVar5[2];
        fVar8 = fVar8 + pfVar5[3];
        pfVar5 = pfVar17 + iVar13 + 8;
        fVar23 = fVar23 + *pfVar5;
        fVar24 = fVar24 + pfVar5[1];
        fVar25 = fVar25 + pfVar5[2];
        fVar26 = fVar26 + pfVar5[3];
        pfVar5 = pfVar17 + iVar13 + 0xc;
        fVar9 = fVar9 + *pfVar5;
        fVar10 = fVar10 + pfVar5[1];
        fVar11 = fVar11 + pfVar5[2];
        fVar12 = fVar12 + pfVar5[3];
      }
      pfVar5 = pfVar17 + iVar13;
      *pfVar5 = fVar18;
      pfVar5[1] = fVar20;
      pfVar5[2] = fVar21;
      pfVar5[3] = fVar22;
      (*(undefined2 *)((char *)&auVar1 + 4)) = (short)(uint)gen_fl2bits(fVar28);
      (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar29);
      (*(undefined2 *)((char *)&auVar1 + 6)) = (short)((uint)gen_fl2bits(fVar28) >> 0x10);
      (*(undefined2 *)((char *)&auVar1 + 8)) = (short)(uint)gen_fl2bits(fVar7);
      (*(undefined2 *)((char *)&auVar1 + 10)) = (short)((uint)gen_fl2bits(fVar7) >> 0x10);
      (*(undefined2 *)((char *)&auVar1 + 12)) = (short)(uint)gen_fl2bits(fVar8);
      (*(undefined2 *)((char *)&auVar1 + 14)) = (short)((uint)gen_fl2bits(fVar8) >> 0x10);
      memcpy(&(*(gen_v16 *)(pfVar17 + iVar13 + 4)), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)(pfVar17 + iVar13 + 4)) ? sizeof(auVar1) : sizeof(*(gen_v16 *)(pfVar17 + iVar13 + 4)));
      pfVar5 = pfVar17 + iVar13 + 8;
      *pfVar5 = fVar23;
      pfVar5[1] = fVar24;
      pfVar5[2] = fVar25;
      pfVar5[3] = fVar26;
      (*(undefined2 *)((char *)&auVar2 + 4)) = (short)(uint)gen_fl2bits(fVar10);
      (*(undefined4 *)((char *)&auVar2 + 0)) = (undefined4)gen_fl2bits(fVar9);
      (*(undefined2 *)((char *)&auVar2 + 6)) = (short)((uint)gen_fl2bits(fVar10) >> 0x10);
      (*(undefined2 *)((char *)&auVar2 + 8)) = (short)(uint)gen_fl2bits(fVar11);
      (*(undefined2 *)((char *)&auVar2 + 10)) = (short)((uint)gen_fl2bits(fVar11) >> 0x10);
      (*(undefined2 *)((char *)&auVar2 + 12)) = (short)(uint)gen_fl2bits(fVar12);
      (*(undefined2 *)((char *)&auVar2 + 14)) = (short)((uint)gen_fl2bits(fVar12) >> 0x10);
      memcpy(&(*(gen_v16 *)(pfVar17 + iVar13 + 0xc)), &(auVar2), sizeof(auVar2) < sizeof(*(gen_v16 *)(pfVar17 + iVar13 + 0xc)) ? sizeof(auVar2) : sizeof(*(gen_v16 *)(pfVar17 + iVar13 + 0xc)));
      iVar13 = iVar13 + 0x10;
    } while (iVar13 != 0);
  }
LAB_00cfe5ed: ;
  while (fVar29 = fVar19, (uVar15 & 0xf) != 0) {
    sVar3 = *psVar16;
    psVar16 = psVar16 + 1;
    uVar15 = uVar15 - 1;
    fVar19 = (float)(int)sVar3 * fVar27;
    fVar28 = fVar27 + fVar29;
    if (iVar4 != 0) {
      fVar19 = fVar19 + *pfVar17;
    }
    *pfVar17 = fVar19;
    pfVar17 = pfVar17 + 1;
    fVar27 = fVar30;
    fVar30 = fVar31;
    fVar31 = fVar32;
    fVar32 = fVar28;
    fVar19 = fVar33;
    fVar33 = fVar34;
    fVar34 = fVar35;
    fVar35 = fVar29;
  }
  return 0;
}

/* ref: FUN_00cfe670 */
GEN_LIB GEN_NOFRAME double GEN_STDCALL F_00cfe670(GEN_P(byte * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfe670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  return GEN_X87(((double)GEN_TOD((((float10)*param_1 - (float10)REFG(float, 0x10a0d94)) * (float10)REFG(float, 0x1131544)))));
}

/* ref: FUN_00cfe6a0 */
GEN_LIB GEN_NOFRAME float GEN_STDCALL F_00cfe6a0(GEN_P(short * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfe6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  return GEN_X87((float)((float10)(int)*param_1 * (float10)REFG(float, 0x1131540)));
}

/* ref: FUN_00cfe6c0 */
GEN_LIB GEN_NOFRAME float GEN_STDCALL F_00cfe6c0(GEN_P(uint3 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfe6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint3 * param_1 = (uint3 *)(uintptr_t)gen_a0;)
  return GEN_X87(((float)GEN_TOF((((float10)GEN_TOD(((int)((uint)*param_1 << 8) >> 0xc))) * (float10)REFG(float, 0x1131548)))));
}

/* ref: FUN_00cfe700 */
GEN_LIB GEN_NOFRAME float GEN_STDCALL F_00cfe700(GEN_P(uint3 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfe700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint3 * param_1 = (uint3 *)(uintptr_t)gen_a0;)
  return GEN_X87(((float)GEN_TOF((((float10)GEN_TOD(((int)((uint)*param_1 << 8) >> 8))) * (float10)REFG(float, 0x10905c4)))));
}

/* ref: FUN_00cfe740 */
GEN_LIB GEN_NOFRAME float GEN_STDCALL F_00cfe740(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfe740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  return GEN_X87(((float)GEN_TOF(((float10)(*param_1 >> 0xc) * (float10)REFG(float, 0x1131548)))));
}

/* ref: FUN_00cfe760 */
GEN_LIB GEN_NOFRAME float GEN_STDCALL F_00cfe760(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfe760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  return GEN_X87(((float)GEN_TOF(((float10)(*param_1 >> 8) * (float10)REFG(float, 0x10905c4)))));
}

/* ref: FUN_00cfe780 */
GEN_LIB GEN_NOFRAME float GEN_STDCALL F_00cfe780(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcfe780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  return GEN_X87((float)((float10)*param_1 * (float10)REFG(float, 0x113154c)));
}

/* ref: FUN_00cfe7a0 */
GEN_LIB GEN_NOFRAME unsigned int F_00cfe7a0(GEN_P(float in_xmm0, float gen_a0), GEN_P(float in_xmm1, float gen_a1), GEN_P(float in_xmm2, float gen_a2), GEN_P(float in_xmm3, float gen_a3), GEN_P(float in_xmm4, float gen_a4), GEN_P(float in_xmm5, float gen_a5), GEN_P(float in_xmm6, float gen_a6), GEN_P(int * param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xcfe7a0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float in_xmm0 = (float)gen_a0;)
  GEN_PIN(float in_xmm1 = (float)gen_a1;)
  GEN_PIN(float in_xmm2 = (float)gen_a2;)
  GEN_PIN(float in_xmm3 = (float)gen_a3;)
  GEN_PIN(float in_xmm4 = (float)gen_a4;)
  GEN_PIN(float in_xmm5 = (float)gen_a5;)
  GEN_PIN(float in_xmm6 = (float)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float * pfVar11;
  uint uVar12;
  float * pfVar13;
  int iVar14;
  int iVar15;
  float * pfVar16;
  float10 fVar17;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar18;
  float fVar19;
  int iStack_34;
  uint uStack_28;
  int iStack_24;
  uint uStack_20;
  float fStack_1c;
  uint local_18;
  uint local_14;
  int local_10;
  code * pcStack_c;
  int iStack_8;
  
  fVar9 = REFG(float, 0x113154c);
  fVar8 = REFG(float, 0x1131548);
  fVar7 = REFG(float, 0x1131544);
  fVar6 = REFG(float, 0x1131540);
  fVar3 = REFG(float, 0x10a0d94);
  fVar2 = REFG(float, 0x10905c4);
  local_18 = param_8[7];
  local_10 = param_8[1];
  iVar14 = *param_8;
  local_14 = param_8[6];
  iVar4 = param_8[8];
  if (param_8[9] != 0) {
    local_18 = 1;
    local_14 = 1;
  }
  iVar5 = param_8[4];
                    
  switch((unsigned int)(uintptr_t)(iVar5)) {
  case 0: ;
    iStack_8 = 1;
    pcStack_c = ((code *)REFP(0xcfe670));
    break;
  case 1: ;
    iStack_8 = 2;
    pcStack_c = ((code *)REFP(0xcfe6a0));
    break;
  case 2: ;
    iStack_8 = 3;
    pcStack_c = ((code *)REFP(0xcfe6c0));
    break;
  case 3: ;
    pcStack_c = ((code *)REFP(0xcfe740));
    goto LAB_00cfe840;
  case 4: ;
    iStack_8 = 3;
    pcStack_c = ((code *)REFP(0xcfe700));
    break;
  case 5: ;
    pcStack_c = ((code *)REFP(0xcfe760));
    goto LAB_00cfe840;
  case 6: ;
    pcStack_c = ((code *)REFP(0xcfe780));
LAB_00cfe840: ;
    iStack_8 = 4;
  }
  uVar10 = (uint)param_8[5] / local_14;
  uStack_28 = 0;
  if (param_8[3] == 0) {
    if (uVar10 != 0) {
      pfVar16 = ((float *)GEN_TOP(param_8[2]));
      do {
        param_8 = ((int *)GEN_TOP(0x0));
        pfVar11 = pfVar16;
        if (local_18 != 0) {
          do {
            fVar18 = 0.0;
            uVar12 = 0;
            if (local_14 != 0) {
              iVar15 = 0;
              do {
                    
                switch((unsigned int)(uintptr_t)(iVar5)) {
                case 0: ;
                  fVar19 = ((float)*((byte *)GEN_TOP((uVar12 + iVar14))) - fVar3) * fVar7;
                  break;
                case 1: ;
                  fVar19 = (float)(int)*((short *)GEN_TOP((iVar14 + uVar12 * 2))) * fVar6;
                  break;
                case 2: ;
                  fVar19 = ((float)GEN_TOF(((int)((uint)CONCAT21(CONCAT11(*((undefined1 *)GEN_TOP((iVar15 + 2 + iVar14))),
                                                                 *((undefined1 *)GEN_TOP((iVar15 + 1 + iVar14)))),
                                                        *((undefined1 *)GEN_TOP((iVar15 + iVar14)))) << 8) >>
                                  0xc))) * fVar8;
                  break;
                case 3: ;
                  fVar19 = ((float)GEN_TOF((*((int *)GEN_TOP((iVar14 + uVar12 * 4))) >> 0xc))) * fVar8;
                  break;
                case 4: ;
                  fVar19 = ((float)GEN_TOF(((int)((uint)CONCAT21(CONCAT11(*((undefined1 *)GEN_TOP((iVar15 + 2 + iVar14))),
                                                                 *((undefined1 *)GEN_TOP((iVar15 + 1 + iVar14)))),
                                                        *((undefined1 *)GEN_TOP((iVar15 + iVar14)))) << 8) >> 8
                                  ))) * fVar2;
                  break;
                case 5: ;
                  fVar19 = ((float)GEN_TOF((*((int *)GEN_TOP((iVar14 + uVar12 * 4))) >> 8))) * fVar2;
                  break;
                case 6: ;
                  fVar19 = (float)*((int *)GEN_TOP((iVar14 + uVar12 * 4))) * fVar9;
                }
                fVar1 = *pfVar11;
                uVar12 = uVar12 + 1;
                pfVar11 = pfVar11 + 1;
                iVar15 = iVar15 + 3;
                fVar18 = fVar18 + fVar19 * fVar1;
              } while (uVar12 < local_14);
            }
            if (iVar4 == 0) {
              *((float *)GEN_TOP((local_10 + (int)((int)(uintptr_t)param_8) * 4))) = fVar18;
            }
            else {
              *((float *)GEN_TOP((local_10 + (int)((int)(uintptr_t)param_8) * 4))) =
                   *((float *)GEN_TOP((local_10 + (int)((int)(uintptr_t)param_8) * 4))) + fVar18;
            }
            param_8 = ((int *)GEN_TOP(((int)param_8 + 1)));
          } while (param_8 < local_18);
        }
        iVar14 = iVar14 + iStack_8 * local_14;
        local_10 = local_10 + local_18 * 4;
        uStack_28 = uStack_28 + 1;
      } while (uStack_28 < uVar10);
      return 0;
    }
  }
  else if (uVar10 != 0) {
    do {
      pfVar16 = ((float *)GEN_TOP(param_8[3]));
      uStack_20 = 0;
      if (local_18 != 0) {
        fVar17 = (float10)(int)uStack_28;
        if ((int)uStack_28 < 0) {
          fVar17 = GEN_X87(fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        pfVar11 = ((float *)GEN_TOP(param_8[2]));
        do {
          extraout_ST0 = (*pcStack_c)(iVar14);
          fVar2 = *pfVar16;
          pfVar16 = pfVar16 + 1;
          pfVar13 = pfVar11 + 1;
          fStack_1c = ((float)GEN_TOF((((float10)(float)fVar17 * (float10)fVar2 + (float10)*pfVar11) *
                             extraout_ST0)));
          if (1 < local_14) {
            iStack_34 = local_14 - 1;
            iVar5 = iVar14;
            do {
              iStack_24 = iStack_8 + iVar5;
              extraout_ST0_00 = (*pcStack_c)(iStack_24);
              fVar2 = *pfVar16;
              pfVar16 = pfVar16 + 1;
              fVar3 = *pfVar13;
              pfVar13 = pfVar13 + 1;
              iStack_34 = iStack_34 - 1;
              fStack_1c = ((float)GEN_TOF((((float10)(float)fVar17 * (float10)fVar2 + (float10)fVar3) *
                                  extraout_ST0_00 + (float10)fStack_1c)));
              iVar5 = iStack_24;
            } while (iStack_34 != 0);
          }
          if (iVar4 == 0) {
            *((float *)GEN_TOP((local_10 + uStack_20 * 4))) = fStack_1c;
          }
          else {
            *((float *)GEN_TOP((local_10 + uStack_20 * 4))) = fStack_1c + *((float *)GEN_TOP((local_10 + uStack_20 * 4)));
          }
          uStack_20 = uStack_20 + 1;
          pfVar11 = pfVar13;
        } while (uStack_20 < local_18);
      }
      local_10 = local_10 + local_18 * 4;
      uStack_28 = uStack_28 + 1;
      iVar14 = iVar14 + iStack_8 * local_14;
    } while (uStack_28 < uVar10);
  }
  return 0;
}

/* ref: FUN_00cfeb30 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cfeb30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcfeb30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  BOOL BVar1;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      if (param_2 == 1) {
        if (param_3 == 2) {
          BVar1 = gen_imp_IsProcessorFeaturePresent(10);
          if ((BVar1 != 0) && ((param_4 & 4) != 0)) {
            return 0xcfddb0;
          }
          return 0xcfc120;
        }
        if (param_3 == 6) {
          BVar1 = gen_imp_IsProcessorFeaturePresent(10);
          if ((BVar1 != 0) && ((param_4 & 4) != 0)) {
            return 0xcfdfc0;
          }
          return 0xcfc220;
        }
      }
      else if (param_2 == 2) {
        if (param_3 == 6) {
          return 0xcfc490;
        }
      }
      else if (param_2 == 6) {
        if (param_3 == 2) {
          return 0xcfc980;
        }
      }
      else if ((param_2 == 4) && (param_3 == 6)) {
        return 0xcfce10;
      }
      if ((param_4 & 2) != 0) {
        BVar1 = gen_imp_IsProcessorFeaturePresent(10);
        if ((BVar1 != 0) &&
           (((param_4 & 1) != 0 || (((param_2 < 5 && (param_2 != 3)) && ((param_4 & 4) != 0)))))) {
          return 0xcfe300;
        }
        if (param_2 < 7) {
          return 0xcfd750;
        }
      }
      return 0xcfbf33;
    }
    if (param_1 < 2) {
      return 0;
    }
    if (6 < param_1) {
      if (param_1 != 7) {
        return 0;
      }
      if (param_2 == 1) {
        if (param_3 == 2) {
          BVar1 = gen_imp_IsProcessorFeaturePresent(6);
          if ((BVar1 != 0) && ((param_4 & 4) != 0)) {
            return 0xcfb810;
          }
          return 0xcf9f10;
        }
        if (param_3 == 6) {
          BVar1 = gen_imp_IsProcessorFeaturePresent(6);
          if ((BVar1 != 0) && ((param_4 & 4) != 0)) {
            return 0xcfb9d0;
          }
          return 0xcf9fe0;
        }
      }
      else if (param_2 == 2) {
        if (param_3 == 6) {
          return 0xcfa210;
        }
      }
      else if (param_2 == 6) {
        if (param_3 == 2) {
          return 0xcfa670;
        }
      }
      else if ((param_2 == 4) && (param_3 == 6)) {
        return 0xcfaa50;
      }
      if ((param_4 & 2) != 0) {
        BVar1 = gen_imp_IsProcessorFeaturePresent(6);
        if ((BVar1 != 0) &&
           (((param_4 & 1) != 0 || (((param_2 < 5 && (param_2 != 3)) && ((param_4 & 4) != 0)))))) {
          return 0xcfbc70;
        }
        if (param_2 < 7) {
          return 0xcfb2a0;
        }
      }
      return 0xcf9d75;
    }
  }
  return 0xcfe7a0;
}

/* ref: FUN_00cfed50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cfed50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(char * param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xcfed50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(char * param_6 = (char *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  F_00cff8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,1,param_7,0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113159c));
  F_00ce4660(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = *(undefined4 *)(param_6 + 4);
  *((undefined4 *)GEN_TOP(((int)this + 100))) = *(undefined4 *)(param_6 + 8);
  if (*param_6 != '\0') {
    iVar2 = *(int *)(param_6 + 0x14);
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x18)) = param_2 + iVar2;
    bVar1 = param_6[1];
    iVar3 = *(int *)(param_6 + 0x10);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(0x0));
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(char * PTR32 *)(gen_frame + 0x4)) = param_6 + (uint)bVar1 + iVar3;
    (*(int *)(gen_frame + 0xc)) = iVar2;
    uVar4 = F_00ce4700((int)this + 0x48 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0);
    if (uVar4 == 0xffffffff) {
      F_00cff770(this GEN_EDX_ARG,1);
    }
  }
  return (uint)this;
}

/* ref: FUN_00cfee00 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cfee00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcfee00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113159c));
  F_00ce4c50(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_FWD);
  F_00cffb40(this GEN_EDX_ARG);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisDataTransfer::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cfee20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcfee20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD);
  if ((char)uVar3 != '\0') {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    F_00c48350(*((undefined * PTR32 *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))),0,uVar3);
    return *(int *)(this + 8) + 1;
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  uVar3 = F_00cff810(this + 0x1c GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x4)) = uVar3;
  (*(int *)(gen_frame + 0xc)) = *(int *)(this + 0x20) - *(int *)(this + 0x24);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x10)));
  (*(int *)(gen_frame + 0x0)) = *((int *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34)));
  uVar3 = (*pcVar1)(this);
  (*(uint *)(gen_frame + 0x8)) = uVar3;
  F_00ce4700(this + 0x48 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),0);
  F_00cff820(this + 0x1c GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
  this[*(int *)(this + 8) + 0x44] = (undefined1)0x0;
  bVar2 = F_00cff870(this + 0x1c GEN_EDX_ARG);
  if (bVar2 == 0) {
    bVar2 = F_00cff8a0(this + 0x1c GEN_EDX_ARG);
    if (bVar2 != 0) {
      F_00ce45d0(this + 0x48 GEN_EDX_ARG,*(undefined4 *)(this + 100));
      F_00cff8b0(this + 0x1c GEN_EDX_ARG);
      uVar3 = F_00cff810(this + 0x1c GEN_EDX_ARG);
      (*(uint *)(gen_frame + 0x4)) = uVar3;
      (*(int *)(gen_frame + 0xc)) = *(int *)(this + 0x20) - *(int *)(this + 0x24);
      F_00ce4700(this + 0x48 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),1);
      F_00cff820(this + 0x1c GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
      this[*(int *)(this + 8) + 0x44] = (undefined1)0x1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    F_00c48350(((undefined *)GEN_TOP((*((int *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))) + (*(uint *)(gen_frame + 0x10))))),0,uVar3 - (*(uint *)(gen_frame + 0x10)));
    if ((*(uint *)(gen_frame + 0x10)) == 0) {
      return *(int *)(this + 8) + 1;
    }
  }
  if ((*(uint *)(gen_frame + 0x10)) < (*(uint *)(gen_frame + 0x8))) {
    F_00c48350(((undefined *)GEN_TOP(((*(uint *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x0))))),0,(*(uint *)(gen_frame + 0x8)) - (*(uint *)(gen_frame + 0x10)));
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_ARG);
  *(uint *)(this + 8) = (*(int *)(this + 8) + 1U) % uVar3;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf4 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cfefa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcfefa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cfefb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcfefb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x14)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cfefc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcfefc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cfefd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcfefd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf16 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cfefe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcfefe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf17 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cfeff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcfeff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf18 */
GEN_LIB GEN_NOFRAME uint F_00cff000(void)
{
  GEN_ENTER(0xcff000u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf19 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cff010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcff010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf20 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cff020(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x1a)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf21 */
GEN_LIB GEN_NOFRAME unsigned int F_00cff030(void)
{
  GEN_ENTER(0xcff030u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf22 */
GEN_LIB GEN_NOFRAME byte F_00cff040(void)
{
  GEN_ENTER(0xcff040u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf23 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cff050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcff050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf13 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cff070(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x24)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf14 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cff080(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf15 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cff090(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x30)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisDataTransfer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cff0a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcff0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[24])REFP(0x113159c));
  F_00ce4c50(param_1 + 0x12 GEN_EDX_FWD);
  F_00cffb40(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IDataTransfer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cff0f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcff0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AdpcmStreamDataTransferEx::vf26 */
GEN_LIB GEN_NOFRAME unsigned int F_00cff160(void)
{
  GEN_ENTER(0xcff160u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AdpcmStreamDataTransferEx::vf25 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cff170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcff170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_8;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD,0);
  uVar3 = F_00ce93e0(uVar2);
  *param_1 = *(int *)(this + 0xc) * *(int *)(this + 0x14) + *(int *)(this + 0x10);
  local_8 = 0;
  uVar4 = F_00ce1c20(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG);
  param_1[1] = uVar4;
  if (*(int *)(this + 0xc) < (int)uVar4) {
    param_1[1] = *(int *)(this + 0xc);
  }
  iVar5 = param_1[1] % (int)(uint)*((ushort *)GEN_TOP((uVar2 + uVar3 + 0xc)));
  if (iVar5 != 0) {
    param_1[1] = param_1[1] - iVar5;
  }
  iVar5 = param_1[1];
  uVar2 = F_00ce1c00(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG);
  F_00c46aa0(*param_1,uVar2,iVar5);
  F_00ce1f10(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG,param_1[1]);
  bVar1 = F_00ce1dc0(*(undefined4 *)(this + 4) GEN_EDX_ARG);
  if (bVar1 == 0) {
    bVar1 = F_00ce1df0(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG);
    if (bVar1 != 0) {
      local_8 = 1;
    }
  }
  else {
    F_00ce1f50(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG);
  }
  *(int *)(this + 0x14) = (*(int *)(this + 0x14) + 1) % 3;
  return local_8;
}

/* ref: FUN_00cff240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cff240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcff240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined1 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x1131724));
  iVar1 = *((int *)GEN_TOP((param_1 + 0xd0)));
  *((int *)GEN_TOP(((int)this + 0xc))) = iVar1;
  uVar2 = F_00cf9ab0(((undefined *)GEN_TOP((param_1 + 0xa4))) GEN_EDX_FWD,iVar1 * 3,4);
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
  return (uint)this;
}

/* ref: FUN_00cff290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cff290(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcff290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x11316b4));
  in_ecx[1] = param_2;
  *(undefined1 *)(in_ecx + 2) = 0;
  return (uint)in_ecx;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf7 */
GEN_LIB GEN_NOFRAME uint F_00cff2b0(void)
{
  GEN_ENTER(0xcff2b0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf20 */
GEN_LIB GEN_NOFRAME byte F_00cff2c0(void)
{
  GEN_ENTER(0xcff2c0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf9 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cff2d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 8)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cff2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcff2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf10 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cff2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcff2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf1 */
GEN_LIB GEN_NOFRAME unsigned int F_00cff300(void)
{
  GEN_ENTER(0xcff300u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf3 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cff310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcff310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf4 */
GEN_LIB GEN_NOFRAME uint F_00cff320(void)
{
  GEN_ENTER(0xcff320u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf5 */
GEN_LIB GEN_NOFRAME uint F_00cff330(void)
{
  GEN_ENTER(0xcff330u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf6 */
GEN_LIB GEN_NOFRAME uint F_00cff340(void)
{
  GEN_ENTER(0xcff340u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf8 */
GEN_LIB GEN_NOFRAME uint F_00cff350(void)
{
  GEN_ENTER(0xcff350u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf11 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cff360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcff360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf12 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cff370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcff370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf13 */
GEN_LIB GEN_NOFRAME uint F_00cff380(void)
{
  GEN_ENTER(0xcff380u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf14 */
GEN_LIB GEN_NOFRAME uint F_00cff390(void)
{
  GEN_ENTER(0xcff390u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf15 */
GEN_LIB GEN_NOFRAME byte F_00cff3a0(void)
{
  GEN_ENTER(0xcff3a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf16 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cff3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcff3b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf17 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cff3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcff3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf18 */
GEN_LIB GEN_NOFRAME uint F_00cff3d0(void)
{
  GEN_ENTER(0xcff3d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf19 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cff3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcff3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf21 */
GEN_LIB GEN_NOFRAME unsigned int F_00cff3f0(void)
{
  GEN_ENTER(0xcff3f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf22 */
GEN_LIB GEN_NOFRAME byte F_00cff400(void)
{
  GEN_ENTER(0xcff400u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf23 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cff410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcff410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cff420(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcff420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AdpcmStreamDataTransferEx::vf24 */
GEN_LIB GEN_NOFRAME uint F_00cff450(void)
{
  GEN_ENTER(0xcff450u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AdpcmStreamDataTransferEx::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cff460(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcff460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cff490 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cff490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11317dc));
  uVar1 = F_00ce4c50(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisStreamDataTransferEx::vf26 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cff4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff4b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ce46b0(this + 0x14 GEN_EDX_FWD);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisStreamDataTransferEx::vf25 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cff4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcff4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD);
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32));
  if ((char)uVar5 != '\0') {
    return 1;
  }
  iVar1 = *(int *)(this + 0xc);
  iVar8 = *(int *)(this + 0x34) * iVar1 + *(int *)(this + 0x10);
  iVar6 = 0;
  bVar3 = false;
  ((byte *)(gen_frame + 0x0))[0] = 0;
  ((byte *)(gen_frame + 0x0))[1] = 0;
  ((byte *)(gen_frame + 0x0))[2] = 0;
  ((byte *)(gen_frame + 0x0))[3] = 0;
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  ((byte *)(gen_frame + 0x0))[8] = 0;
  ((byte *)(gen_frame + 0x0))[9] = 0;
  ((byte *)(gen_frame + 0x0))[10] = 0;
  ((byte *)(gen_frame + 0x0))[0xb] = 0;
  ((byte *)(gen_frame + 0x0))[0xc] = 0;
  ((byte *)(gen_frame + 0x0))[0xd] = 0;
  ((byte *)(gen_frame + 0x0))[0xe] = 0;
  ((byte *)(gen_frame + 0x0))[0xf] = 0;
  ((byte *)(gen_frame + 0x0))[0x10] = 0;
  ((byte *)(gen_frame + 0x0))[0x11] = 0;
  ((byte *)(gen_frame + 0x0))[0x12] = 0;
  ((byte *)(gen_frame + 0x0))[0x13] = 0;
  ((byte *)(gen_frame + 0x0))[0x14] = 0;
  ((byte *)(gen_frame + 0x0))[0x15] = 0;
  ((byte *)(gen_frame + 0x0))[0x16] = 0;
  ((byte *)(gen_frame + 0x0))[0x17] = 0;
  ((byte *)(gen_frame + 0x0))[0x18] = 0;
  ((byte *)(gen_frame + 0x0))[0x19] = 0;
  ((byte *)(gen_frame + 0x0))[0x1a] = 0;
  ((byte *)(gen_frame + 0x0))[0x1b] = 0;
  ((byte *)(gen_frame + 0x0))[0x20] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)) = uVar2 & 0xffffff00;
  if (0 < iVar1) {
    do {
      if (!bVar3) {
        uVar2 = *(undefined4 *)(this + 0xc);
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = iVar8;
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = uVar2;
      }
      ((byte *)(gen_frame + 0x0))[0x1c] = ((byte *)(gen_frame + 0x0))[0x10];
      ((byte *)(gen_frame + 0x0))[0x1d] = ((byte *)(gen_frame + 0x0))[0x11];
      ((byte *)(gen_frame + 0x0))[0x1e] = ((byte *)(gen_frame + 0x0))[0x12];
      ((byte *)(gen_frame + 0x0))[0x1f] = ((byte *)(gen_frame + 0x0))[0x13];
      uVar5 = F_00ce1c00(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG);
      ((byte *)(gen_frame + 0x0))[4] = (char)uVar5;
      ((byte *)(gen_frame + 0x0))[5] = (char)(uVar5 >> 8);
      ((byte *)(gen_frame + 0x0))[6] = (char)(uVar5 >> 0x10);
      ((byte *)(gen_frame + 0x0))[7] = (char)(uVar5 >> 0x18);
      uVar5 = F_00ce1c20(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG);
      ((byte *)(gen_frame + 0x0))[0xc] = (char)uVar5;
      ((byte *)(gen_frame + 0x0))[0xd] = (char)(uVar5 >> 8);
      ((byte *)(gen_frame + 0x0))[0xe] = (char)(uVar5 >> 0x10);
      ((byte *)(gen_frame + 0x0))[0xf] = (char)(uVar5 >> 0x18);
      uVar5 = F_00ce4700(this + 0x14 GEN_EDX_ARG,((byte *)(gen_frame + 0x0)),(byte)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)));
      if (uVar5 == 0xffffffff) {
        return 0xffffffff;
      }
      F_00ce1f10(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)));
      bVar4 = F_00ce1dc0(*(undefined4 *)(this + 4) GEN_EDX_ARG);
      if (bVar4 == 0) {
        bVar4 = F_00ce1df0(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG);
        if ((bVar4 != 0) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) == 0)) {
          this[8] = (undefined1)0x1;
          uVar7 = 1;
        }
      }
      else {
        F_00ce1f50(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG);
        F_00ce45d0(this + 0x14 GEN_EDX_ARG,*(undefined4 *)(this + 0x30));
        uVar7 = 3;
      }
      iVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16));
      if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28)) == (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16))) break;
      bVar3 = true;
      ((byte *)(gen_frame + 0x0))[0x20] = 1;
      ((byte *)(gen_frame + 0x0))[0x20] = 1;
    } while ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) < *(int *)(this + 0xc));
  }
  param_1[1] = iVar6;
  *param_1 = iVar8;
  *(int *)(this + 0x34) = (*(int *)(this + 0x34) + 1) % 3;
  return uVar7;
}

/* ref: FUN_00cff5e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cff5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcff5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  char * pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int * piVar5;
  uint uVar6;
  
  *((int * PTR32 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined1 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11317dc));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  F_00ce4660(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG,0)));
  iVar2 = param_1[0x34];
  *((int *)GEN_TOP(((int)this + 0xc))) = iVar2;
  uVar6 = F_00cf9ab0(param_1 + 0x29 GEN_EDX_ARG,iVar2 * 3,4);
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  uVar6 = F_00ce93e0(piVar5);
  pcVar1 = ((char *)GEN_TOP(((int)piVar5 + uVar6)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = *(undefined4 *)(pcVar1 + 4);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = *(undefined4 *)(pcVar1 + 8);
  if (*pcVar1 != '\0') {
    iVar2 = *piVar5;
    iVar3 = *(int *)(pcVar1 + 0x14);
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(int *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(int *)(gen_frame + 0x18)) = iVar2 + iVar3;
    uVar6 = F_00ce93e0(piVar5);
    uVar4 = *(undefined4 *)(pcVar1 + 0x14);
    (*(int *)(gen_frame + 0x4)) = uVar6 + (byte)pcVar1[1] + *(int *)(pcVar1 + 0x10) + (int)piVar5;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = uVar4;
    uVar6 = F_00ce4700((int)this + 0x14 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0);
    if (uVar6 == 0xffffffff) {
      *((undefined1 *)GEN_TOP(((int)this + 8))) = 1;
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisStreamDataTransferEx::vf24 */
GEN_LIB GEN_NOFRAME uint F_00cff6d0(void)
{
  GEN_ENTER(0xcff6d0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisStreamDataTransferEx::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cff6e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcff6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[27])REFP(0x11317dc));
  F_00ce4c50(param_1 + 5 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cff710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cff710(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcff710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cff720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcff720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (*((int *)GEN_TOP((in_ecx + 0x10))) <= param_2) {
    return 0;
  }
  return *((uint *)GEN_TOP((in_ecx + 0x34 + param_2 * 4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf3 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cff740(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcff740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (*((int *)GEN_TOP((in_ecx + 0x10))) <= param_2) {
    return 0;
  }
  return *((byte *)GEN_TOP((param_2 + 0x44 + in_ecx)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf9 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cff760(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf10 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cff770(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcff770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf12 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cff780(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcff780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint uVar1;
  
  param_1[9] = param_2;
  if ((param_3 != '\0') && (uVar1 = 0, param_1[4] != 0)) {
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x20))))(param_1 GEN_EDX_FWD);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[4]);
  }
  return 0;
}

/* ref: FUN_00cff7c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cff7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcff7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  return (uint)this;
}

/* ref: FUN_00cff7f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cff7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcff7f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(uint *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return param_1;
}

/* ref: FUN_00cff810 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cff810(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  return in_ecx[2] + *in_ecx;
}

/* ref: FUN_00cff820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cff820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcff820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + param_1;
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  uVar3 = param_1;
  if (iVar1 <= iVar2) {
    if (*((char *)GEN_TOP(((int)this + 0x14))) == '\x01') {
      *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 1;
      *((int *)GEN_TOP(((int)this + 8))) = iVar1;
      return param_1 + (iVar1 - iVar2);
    }
    uVar3 = param_1 + (iVar1 - iVar2);
    *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 1;
    *((int *)GEN_TOP(((int)this + 8))) = iVar1;
  }
  return uVar3;
}

/* ref: FUN_00cff870 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cff870(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: FUN_00cff880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cff880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcff880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if ((int)param_1 < param_2) {
    *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
    *((int *)GEN_TOP(((int)this + 4))) = param_2;
    *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 1;
  }
  return param_1;
}

/* ref: FUN_00cff8a0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cff8a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x15)));
}

/* ref: FUN_00cff8b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cff8b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x15))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0xc))) = 0;
  *((uint *)GEN_TOP((in_ecx + 8))) = *((uint *)GEN_TOP((in_ecx + 0x10)));
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: FUN_00cff8c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cff8c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(char param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xcff8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(char param_7 = (char)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  uVar3 = 0;
  *param_1 = (*(undefined * PTR32 (*)[24])REFP(0x1131894));
  param_1[2] = 0;
  param_1[3] = param_4;
  uVar2 = param_5;
  if (4 < param_5) {
    uVar2 = 4;
  }
  param_1[4] = uVar2;
  param_1[5] = param_4;
  *((char *)GEN_TOP(((int)param_1 + 0x19))) = param_7;
  *(undefined1 *)(param_1 + 6) = 0;
  *((bool *)GEN_TOP(((int)param_1 + 0x1a))) = param_8 != 0;
  param_1[7] = param_2;
  param_1[8] = param_3;
  param_1[9] = param_6;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  puVar4 = param_1 + 0xd;
  do {
    if ((uVar3 < (uint)param_1[4]) && (param_7 != '\0')) {
      uVar1 = param_1[3];
      if (param_8 == 0) {
        if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
          REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
        }
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,uVar1,((char *)REFP(0x112a0a8)),0,0,0x10);
        *puVar4 = uVar2;
      }
      else {
        uVar2 = F_00cf9ab0(((undefined *)GEN_TOP((param_8 + 0x78))) GEN_EDX_ARG,uVar1,param_9);
        *puVar4 = uVar2;
      }
    }
    else {
      *puVar4 = 0;
    }
    *((undefined1 *)GEN_TOP(((int)param_1 + uVar3 + 0x44))) = 0;
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar3 < 4);
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf1 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cff9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pAVar2;
  
  uVar1 = 0;
  if (*(int *)(this + 0x10) != 0) {
    pAVar2 = this + 0x34;
    do {
      if (((*(int *)pAVar2 != 0) && (this[0x19] != (undefined1)0x0)) &&
         (this[0x1a] == (undefined1)0x0)) {
        F_00406810(*(int *)pAVar2);
      }
      *(int *)pAVar2 = 0;
      uVar1 = uVar1 + 1;
      pAVar2 = pAVar2 + 4;
    } while (uVar1 < *(uint *)(this + 0x10));
  }
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cffa00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcffa00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (this[0x28] == (undefined1)0x1) {
    F_00c48350(*((undefined * PTR32 *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))),0,*(gen_size32 *)(this + 0xc));
    return *(int *)(this + 8) + 1;
  }
  iVar1 = *(int *)(this + 0x20);
  uVar3 = *(uint *)(this + 0xc);
  *(uint *)(this + 0x24) = *(int *)(this + 0x24) + uVar3;
  if (iVar1 <= *(int *)(this + 0x24)) {
    if (this[0x30] == (undefined1)0x1) {
      this[0x31] = (undefined1)0x1;
    }
    else {
      this[0x28] = (undefined1)0x1;
    }
    uVar3 = uVar3 + (iVar1 - *(int *)(this + 0x24));
    *(int *)(this + 0x24) = iVar1;
  }
  if (this[0x19] == (undefined1)0x0) {
    *((uint *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))) =
         (*(int *)(this + 0x24) - uVar3) + *(int *)(this + 0x1c);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0xc);
  }
  else {
    F_00c46aa0(*((undefined4 *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))),
               (*(int *)(this + 0x24) - uVar3) + *(int *)(this + 0x1c),uVar3);
    if ((this[0x28] != (undefined1)0x0) && (uVar3 < *(uint *)(this + 0xc))) {
      F_00c48350(((undefined *)GEN_TOP((*((int *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))) + uVar3))),0,
              *(uint *)(this + 0xc) - uVar3);
    }
  }
  if (this[0x31] != (undefined1)0x0) {
    this[0x31] = (undefined1)0x0;
    this[0x28] = (undefined1)0x0;
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x2c);
    if (this[0x19] == (undefined1)0x0) {
      *(uint *)(this + 0x14) = uVar3;
    }
    else {
      uVar2 = F_00cff820(this + 0x1c GEN_EDX_ARG,*(int *)(this + 0xc) - uVar3);
      F_00c46aa0(*((int *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))) + uVar3,
                 (*(int *)(this + 0x24) - uVar2) + *(int *)(this + 0x1c),uVar2);
      *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0xc);
    }
  }
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  if (*(uint *)(this + 0x10) <= *(uint *)(this + 8)) {
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cffb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcffb20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if ((int)param_1 < param_2) {
    *(uint *)(this + 0x2c) = param_1;
    *(int *)(this + 0x20) = param_2;
    this[0x30] = (undefined1)0x1;
  }
  return param_1;
}

/* ref: FUN_00cffb40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cffb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcffb40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x1131894));
  F_00cff9b0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  return;
}

/* ref: FUN_00cffb60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cffb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcffb60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cf9ab0(((undefined *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cffb70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcffb70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[24])REFP(0x1131894));
  F_00cff9b0(param_1 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cffbb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cffbb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcffbb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1131904));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00cffbf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cffbf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcffbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1131904));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  return (uint)this;
}

/* ref: FUN_00cffc10 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cffc10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcffc10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1131904));
  return;
}

/* ref: FUN_00cffc20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cffc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcffc20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP(((int)param_1 + 8)));
  }
  return (uint)this;
}

/* ref: FUN_00cffcb0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cffcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcffcb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xdc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x14))))
                            (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xe0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cffd70 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cffd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcffd70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  byte bVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xdc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x14))))
                            (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
  bVar3 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG,param_1);
    bVar3 = (byte)uVar2;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xe0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar3;
}

/* ref: FUN_00cffde0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cffde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcffde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  byte bVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xdc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x14))))
                            (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
  bVar3 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,param_1);
    bVar3 = (byte)uVar2;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xe0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar3;
}

/* ref: FUN_00cffe50 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cffe50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcffe50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x60))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cffe80 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cffe80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcffe80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  byte bVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xdc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x14))))
                            (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
  bVar3 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG,param_1);
    bVar3 = (byte)uVar2;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xe0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar3;
}

/* ref: FUN_00cfff50 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cfff50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcfff50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0xdc))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0x14))))
                            (*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 4))))));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x30))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0xe0))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d00000 */
GEN_LIB GEN_FRAME byte F_00d00000(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd00000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar2 = *((int *)GEN_TOP((param_2 + 4)));
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  return iVar1 == iVar2;
}

/* ref: FUN_00d00050 */
GEN_LIB GEN_FRAME byte F_00d00050(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd00050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar2 = *((int *)GEN_TOP((param_2 + 4)));
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  return iVar1 != iVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerController::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d000a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd000a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1131904));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00d000d0 */
GEN_LIB GEN_FRAME unsigned int F_00d000d0(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd000d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf1 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d00140(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd00140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  if (param_3 == -1) {
    *((uint *)GEN_TOP((param_1 + 0x40))) =
         *((uint *)GEN_TOP((param_1 + 0x40))) ^ ((uint)param_2 ^ *((uint *)GEN_TOP((param_1 + 0x40)))) & 1;
    return;
  }
  if (param_3 < 0x40) {
    uVar1 = 1 << GEN_SHC((byte)param_3, (unsigned int)(uintptr_t)param_3);
    if (param_2 != 0) {
      *((uint *)GEN_TOP((param_1 + 0x48))) = *((uint *)GEN_TOP((param_1 + 0x48))) | uVar1;
      *((uint *)GEN_TOP((param_1 + 0x4c))) = *((uint *)GEN_TOP((param_1 + 0x4c))) | (int)uVar1 >> 0x1f;
      return;
    }
    *((uint *)GEN_TOP((param_1 + 0x48))) = *((uint *)GEN_TOP((param_1 + 0x48))) & ~uVar1;
    *((uint *)GEN_TOP((param_1 + 0x4c))) = *((uint *)GEN_TOP((param_1 + 0x4c))) & ~((int)uVar1 >> 0x1f);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf2 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d00190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd00190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 == -1) {
    return (byte)this[0x40] & 1;
  }
  if (param_1 < 0x40) {
    return ((ulonglong)(byte)param_1 < 0x40) *
           (char)(*(ulonglong *)(this + 0x48) >> (ulonglong)(byte)param_1) & 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d001d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd001d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  uVar1 = ((uint)param_2 * 2 ^ *((uint *)GEN_TOP((in_ecx + 0x40)))) & 2;
  *((uint *)GEN_TOP((in_ecx + 0x40))) = *((uint *)GEN_TOP((in_ecx + 0x40))) ^ uVar1;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf4 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d001f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd001f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x40))) >> 1 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf5 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d00200(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd00200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (3 < param_2) {
    return 0;
  }
  *((char *)GEN_TOP((in_ecx + 0x30))) = (char)param_2;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf6 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d00220(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd00220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x30)));
}

/* ref: FUN_00d00230 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d00230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd00230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x34)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf35 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d00240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd00240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  undefined * _Dst;
  int iVar3;
  int iVar4;
  undefined * pLVar5;
  undefined * pLVar6;
  
  *(int * PTR32 *)(this + 8) = param_1;
  if ((param_1 != ((int *)GEN_TOP(0x0))) && (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x110))))(param_1 GEN_EDX_FWD), -1 < (int)uVar1)
     ) {
    pLVar5 = this + 0x10;
    pLVar6 = this + 0x134;
    do {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x100))))
                        (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,pLVar5 + (-0x10 - (int)this));
      *pLVar5 = SUB41(uVar2,0);
      if (SUB41(uVar2,0) != (undefined1)0x0) {
        if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
          REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
        }
        _Dst = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                 (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,(uVar2 & 0xff) * 0x28,((char *)REFP(0x1131a24)),0,
                                  0,0x10)));
        *(undefined * PTR32 *)(pLVar6 - 0x80) = _Dst;
        *(undefined * PTR32 *)pLVar6 = ((undefined *)GEN_TOP(((int)_Dst + (uint)(byte)*pLVar5 * 0x14)));
        F_00c48350(_Dst,0,(uint)(byte)*pLVar5 * 0x28);
        iVar4 = 0;
        if (*pLVar5 != (undefined1)0x0) {
          iVar3 = 0;
          do {
            *((undefined4 *)GEN_TOP((*(int *)(pLVar6 - 0x80) + 0xc + iVar3))) = 0xffffffff;
            *((undefined4 *)GEN_TOP((*(int *)pLVar6 + 0xc + iVar3))) = 0xffffffff;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 0x14;
          } while (iVar4 < (int)(uint)(byte)*pLVar5);
        }
      }
      pLVar5 = pLVar5 + 1;
      pLVar6 = pLVar6 + 4;
    } while ((int)(pLVar5 + (-0x10 - (int)this)) <= (int)uVar1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf36 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d00350(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd00350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf37 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d00360(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd00360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf38 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d00370(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd00370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: FUN_00d00380 */
GEN_LIB GEN_FRAME double F_00d00380(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd00380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  float fVar1;
  double dVar2;
  
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((param_1 + 2))))) {
  case 1: ;
    dVar2 = F_00d1aa00(param_1,param_2,param_3);
    return dVar2;
  case 2: ;
    dVar2 = F_00d196d0(param_1,param_2,param_3);
    return dVar2;
  case 3: ;
    fVar1 = F_00d18bc0(param_1,param_2,param_3);
    return (double)fVar1;
  case 4: ;
    fVar1 = F_00d16880(param_1,param_2,param_3);
    return (double)fVar1;
  case 5: ;
    fVar1 = F_00d12f80(param_1,gen_bits2f((unsigned int)(param_2)),param_3);
    return (double)fVar1;
  case 6: ;
    fVar1 = F_00d10980(param_1,param_2,param_3);
    return (double)fVar1;
  case 7: ;
    fVar1 = F_00d0ee30(param_1,param_2,param_3);
    return (double)fVar1;
  case 8: ;
    dVar2 = F_00d0db20(param_1,param_2,param_3);
    return dVar2;
  default: ;
    return 0.0;
  case 0xe: ;
    fVar1 = F_00d0ab20(param_1,param_2,param_3);
    return (double)fVar1;
  }
}

/* ref: FUN_00d00490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d00490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd00490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x2d0)));
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if (bVar1 < 0x40) {
    uVar2 = (uint)bVar1;
    *((undefined4 *)GEN_TOP(((int)this + uVar2 * 4 + 0x1d0))) = param_1;
  }
  *((char *)GEN_TOP(((int)this + 0x2d0))) = *((char *)GEN_TOP(((int)this + 0x2d0))) + '\x01';
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf41 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d004c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd004c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00d04680(param_1 GEN_EDX_FWD,param_2,this);
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf44 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d004e0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd004e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_2)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xb4))))(param_1 GEN_EDX_FWD,local_c);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf46 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d00530(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd00530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_3)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xbc))))(param_1 GEN_EDX_FWD,param_2,local_c);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf49 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d00580(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xd00580u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  *((float *)GEN_TOP((param_1 + 0x74))) = param_4;
  *((uint *)GEN_TOP((param_1 + 0x6c))) = param_2;
  *((float *)GEN_TOP((param_1 + 0x78))) = param_5;
  *((undefined4 *)GEN_TOP((param_1 + 0x70))) = param_3;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d005a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd005a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  *param_1 = *(undefined4 *)(this + 0x6c);
  *param_2 = *(undefined4 *)(this + 0x70);
  *param_3 = *(undefined4 *)(this + 0x74);
  *param_4 = *(undefined4 *)(this + 0x78);
  return (uint)param_3;
}

/* ref: FUN_00d005d0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d005d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd005d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((*((int *)GEN_TOP(((int)this + 0x6c))) == 0) || (*((int *)GEN_TOP(((int)this + 0x70))) == 0)) {
    return (float)(float10)1;
  }
  if (*((int *)GEN_TOP(((int)this + 0x6c))) == param_1) {
    return *((float *)GEN_TOP(((int)this + 0x74)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x70))) == param_1) {
    return *((float *)GEN_TOP(((int)this + 0x78)));
  }
  return (float)(float10)1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf51 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d00610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd00610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf52 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d00630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd00630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf33 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d00650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd00650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint in_ecx;
  int iVar2;
  undefined * pLVar3;
  undefined * pLVar4;
  int local_8;
  
  if (((byte)this[0x40] & 1) == 0) {
    if (this[0x1cc] != (undefined1)0x0) {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x1b4));
    }
    pLVar4 = this + 0x10;
    pLVar3 = this + 0xb4;
    local_8 = 0x20;
    do {
      if (*pLVar4 != (undefined1)0x0) {
        F_00c46aa0(*(int *)(pLVar3 + 0x80),*(int *)pLVar3,(uint)(byte)*pLVar4 * 0x14);
        F_00c48350(*(undefined * PTR32 *)pLVar3,0,(uint)(byte)*pLVar4 * 0x14);
        iVar1 = 0;
        if (*pLVar4 != (undefined1)0x0) {
          iVar2 = 0;
          do {
            *((undefined4 *)GEN_TOP((iVar2 + 0xc + *(int *)pLVar3))) = 0xffffffff;
            iVar1 = iVar1 + 1;
            iVar2 = iVar2 + 0x14;
          } while (iVar1 < (int)(uint)(byte)*pLVar4);
        }
      }
      pLVar3 = pLVar3 + 4;
      pLVar4 = pLVar4 + 1;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
    if (this[0x1cc] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x1b4));
    }
    if (this[0xb0] != (undefined1)0x0) {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    }
    in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x98))))(this GEN_EDX_ARG);
    F_00d1b830(in_ecx GEN_EDX_ARG);
    iVar1 = 0;
    if (0 < *(int *)(this + 0x58)) {
      do {
        F_00d07290(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar1 * 4))) GEN_EDX_ARG,param_1,0);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 0x58));
    }
    iVar1 = 0;
    if (0 < *(int *)(this + 0x58)) {
      do {
        F_00d07290(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar1 * 4))) GEN_EDX_ARG,param_1,1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 0x58));
    }
    if (this[0xb0] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    }
  }
  return 1;
}

/* ref: FUN_00d007a0 */
GEN_LIB GEN_FRAME uint F_00d007a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd007a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (*((uint *)GEN_TOP((param_1 + 0xc))) < *((uint *)GEN_TOP((param_2 + 0xc)))) {
    return 0xffffffff;
  }
  return (uint)(*((uint *)GEN_TOP((param_2 + 0xc))) < *((uint *)GEN_TOP((param_1 + 0xc))));
}

/* ref: FUN_00d007c0 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00d007c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd007c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x38, 8, 4);
  int * piVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x30)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34));
  (*(float * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(float * PTR32 *)(gen_frame + 0x10)) = param_2;
  (*(int *)(gen_frame + 0x18)) = 0;
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x98))))(this GEN_EDX_FWD)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x30))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
  *((undefined1 *)GEN_TOP(((int)this + 0x2d0))) = 0;
  if (*((char *)GEN_TOP(((int)this + 0x2ec))) != '\0') {
    gen_imp_EnterCriticalSection((int)this + 0x2d4);
  }
  if (*((char *)GEN_TOP(((int)this + 0xb0))) != '\0') {
    gen_imp_EnterCriticalSection((int)this + 0x98);
  }
  iVar3 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x58)))) {
    do {
      F_00d07600(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + iVar3 * 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP(((int)this + 0x58))));
  }
  if (*((char *)GEN_TOP(((int)this + 0xb0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  }
  *(*(float * PTR32 *)(gen_frame + 0x10)) = (float)(float10)1;
  if (*((char *)GEN_TOP(((int)this + 0x2d0))) != '\0') {
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = ((undefined4 *)GEN_TOP(((int)this + 0x1d0)));
    do {
      piVar1 = ((int *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar1;
      uVar2 = F_00d1eee0(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
      if (uVar2 != 0) {
        iVar3 = *piVar1;
        uVar5 = 0;
        fVar4 = F_00d1f050((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
        ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x60))))
                  ((*(int * PTR32 *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x4)),(undefined4)gen_fl2bits(fVar4),uVar5);
        (*(int *)(gen_frame + 0x18)) = 1;
        *(*(float * PTR32 *)(gen_frame + 0x8)) = (float)((float10)*(*(float * PTR32 *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x0)));
        *(*(float * PTR32 *)(gen_frame + 0x10)) = (float)((float10)*(*(float * PTR32 *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x4)));
        if ((float10)*(*(float * PTR32 *)(gen_frame + 0x8)) <= (float10)0) break;
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + 1;
      iVar3 = (*(int *)(gen_frame + 0xc)) + 1;
      (*(int *)(gen_frame + 0xc)) = iVar3;
    } while (iVar3 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x2d0))));
  }
  if (*((char *)GEN_TOP(((int)this + 0x2ec))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2d4));
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x2d0))) = 0;
  return (*(int *)(gen_frame + 0x18)) != 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf9 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d00940(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd00940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x40))) >> 2 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d00950(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd00950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((uint *)GEN_TOP((in_ecx + 0x40))) = *((uint *)GEN_TOP((in_ecx + 0x40))) | 4;
    return;
  }
  *((uint *)GEN_TOP((in_ecx + 0x40))) = *((uint *)GEN_TOP((in_ecx + 0x40))) & 0xfffffffb;
  return;
}

/* ref: FUN_00d00970 */
GEN_LIB GEN_NOFRAME byte GEN_STDCALL F_00d00970(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd00970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return 0;
}

/* ref: FUN_00d00980 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d00980(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd00980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((uint *)GEN_TOP((in_ecx + 0x40))) = *((uint *)GEN_TOP((in_ecx + 0x40))) | 8;
    return;
  }
  *((uint *)GEN_TOP((in_ecx + 0x40))) = *((uint *)GEN_TOP((in_ecx + 0x40))) & 0xfffffff7;
  return;
}

/* ref: FUN_00d009a0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d009a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd009a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x40))) >> 3 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf27 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d009b0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd009b0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x98))))(param_1 GEN_EDX_FWD)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x84))))
                      (piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3));
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf28 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d009f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd009f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x98))))(this GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x88))))(piVar1 GEN_EDX_ARG,param_1,param_2);
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf29 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d00a30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd00a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf30 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d00a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd00a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xc);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]));
  }
  return;
}

/* ref: FUN_00d00a70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d00a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd00a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  char cStack_e;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 8)));
  uVar3 = *((uint *)GEN_TOP((param_1 + 4)));
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,uVar3 & 0xff);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_ARG,uVar3 >> 8 & 0xff);
  cStack_e = (char)(uVar3 >> 0x10);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,(uint)(cStack_e != '\0'));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_ARG,uVar3 >> 0x18);
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = uVar2;
  return uVar3;
}

/* ref: FUN_00d00af0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d00af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd00af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((gen_code32 *)GEN_TOP(((int)this + 0x2f4))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x2f4))))(param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d00b10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d00b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd00b10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((gen_code32 *)GEN_TOP(((int)this + 0x2f8))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x2f8))))(param_1,param_2);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf67 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d00b30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xd00b30u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  *((float *)GEN_TOP((param_1 + 0x310))) = param_4;
  *((uint *)GEN_TOP((param_1 + 0x308))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x30c))) = param_3;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf69 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d00b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd00b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  code * pcVar1;
  int * piVar2;
  
  *(float *)(this + 0x8c) = (float)(float10)0;
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x98)));
  *(float *)(this + 0x90) = (float)(float10)1;
  piVar2 = ((int *)GEN_TOP((*pcVar1)(this)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_FWD,2,param_1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))(this GEN_EDX_ARG,0);
  *param_2 = *(undefined4 *)(this + 0x8c);
  *param_3 = *(undefined4 *)(this + 0x90);
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf72 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d00bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8)
{
  GEN_ENTER(0xd00bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[8];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  memcpy(&gen_args[3], &gen_a4, sizeof gen_a4);
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  memcpy(&gen_args[7], &gen_a8, sizeof gen_a8);
  GEN_FRAME_DECL_GS(0x78, 8, 4);
  int * piVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x70)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x74));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x98))))(param_1 GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
  if ((char)uVar2 != '\0') {
    gen_imp_GetClientRect((HWND)param_1[0xc2],&(*(tagRECT *)(gen_frame + 0x60)));
    (*(float *)&gen_args[3]) = (float)(float10)1;
    (*(float *)&gen_args[7]) = (float)(float10)1;
    F_00c34320(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,((float *)(gen_frame + 0x10)),&(*(undefined4 *)&gen_args[0]));
    F_00c34320(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,((byte *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[4]));
    gen_imp_MoveToEx((HDC)param_1[0xc3],
             (int)((float10)((float *)(gen_frame + 0x10))[0] * ((float10)GEN_TOD(gen_bits2f(param_1[0xc4])))) + (*(tagRECT *)(gen_frame + 0x60)).right / 2,
             (int)((float10)(*(float *)(gen_frame + 0x18)) * ((float10)GEN_TOD(gen_bits2f(param_1[0xc4])))) + (*(tagRECT *)(gen_frame + 0x60)).bottom / 2,
             (LPPOINT)0x0);
    uVar2 = gen_imp_LineTo((HDC)param_1[0xc3],
                   (int)(((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))))) * ((float10)GEN_TOD(gen_bits2f(param_1[0xc4])))) +
                   (*(tagRECT *)(gen_frame + 0x60)).right / 2,
                   (int)(((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))))) * ((float10)GEN_TOD(gen_bits2f(param_1[0xc4])))) +
                   (*(tagRECT *)(gen_frame + 0x60)).bottom / 2);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf74 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d00cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd00cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if ((code *)*(gen_code32 *)(this + 0x2fc) == ((code *)GEN_TOP(0x0))) {
    return param_1;
  }
  uVar1 = ((code *)*(gen_code32 *)(this + 0x2fc))(param_1);
  return uVar1;
}

/* ref: FUN_00d00d00 */
GEN_LIB GEN_FRAME uint F_00d00d00(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd00d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  pbVar2 = param_1;
  if ((param_1 == ((byte *)GEN_TOP(0x0))) && (pbVar2 = REFG(byte * PTR32, 0x15d9304), REFG(byte * PTR32, 0x15d9304) == ((byte *)GEN_TOP(0x0)))) {
    return 0;
  }
  if ((param_2 == 3) && (*pbVar2 == 0x2c)) {
    *pbVar2 = 0;
    REFG(byte * PTR32, 0x15d9304) = pbVar2 + 1;
    return (uint)pbVar2;
  }
LAB_00d00d35: ;
  while( true ) {
    for (; ((((bVar1 = *pbVar2, bVar1 == 0x20 || (bVar1 == 0x2c)) || (bVar1 == 9)) ||
            ((bVar1 == 0x3d || (bVar1 == 0x5b)))) ||
           ((bVar1 == 0x5d || ((bVar1 == 0x28 || (bVar1 == 0x29)))))); pbVar2 = pbVar2 + 1) {
      if (param_2 == 4) {
        if (bVar1 == 0x2c) {
          REFG(byte * PTR32, 0x15d9304) = pbVar2 + 1;
          return (uint)pbVar2;
        }
      }
      else if (((4 < param_2) &&
               ((((bVar1 == 0x28 || (bVar1 == 0x29)) || (bVar1 == 0x5b)) || (bVar1 == 0x5d)))) ||
              ((param_2 == 6 && (bVar1 == 0x20)))) goto LAB_00d00de8;
    }
    if ((param_2 != 1) || (bVar1 != 0x3a)) break;
    pbVar2 = pbVar2 + 1;
  }
  if (((char)bVar1 == 0x81) && (pbVar2[1] == 0x40)) {
    if (param_2 != 6) {
      pbVar2 = pbVar2 + 2;
      goto LAB_00d00d35;
    }
  }
  else {
    if ((param_2 == 2) && (bVar1 == 0x5f)) {
      pbVar2 = pbVar2 + 1;
      goto LAB_00d00d35;
    }
    if (*pbVar2 == 0) {
      REFG(byte * PTR32, 0x15d9304) = ((byte *)GEN_TOP(0x0));
      return 0;
    }
  }
LAB_00d00de8: ;
  bVar1 = *pbVar2;
  pbVar3 = pbVar2;
joined_r0x00d00dee: ;
  if (bVar1 == 0) {
    REFG(byte * PTR32, 0x15d9304) = ((byte *)GEN_TOP(0x0));
    return (uint)pbVar2;
  }
  bVar1 = *pbVar3;
  if ((((bVar1 == 0x20) || (bVar1 == 0x2c)) || (bVar1 == 9)) ||
     (((bVar1 == 0x3d || (bVar1 == 0x5b)) ||
      ((bVar1 == 0x5d || ((bVar1 == 0x28 || (bVar1 == 0x29)))))))) {
    if (param_2 == 3) {
      if (bVar1 == 0x2c) goto LAB_00d00e6b;
    }
    else if (((param_2 < 5) ||
             ((((bVar1 != 0x28 && (bVar1 != 0x29)) && (bVar1 != 0x5b)) && (bVar1 != 0x5d)))) &&
            ((param_2 != 6 || (bVar1 != 0x20)))) goto LAB_00d00e6b;
  }
  else {
    if (param_2 == 1) {
      bVar4 = bVar1 == 0x3a;
LAB_00d00e30: ;
      if (bVar4) {
LAB_00d00e6b: ;
        *pbVar3 = 0;
        REFG(byte * PTR32, 0x15d9304) = pbVar3 + 1;
        return (uint)pbVar2;
      }
    }
    else if (param_2 == 2) {
      bVar4 = bVar1 == 0x5f;
      goto LAB_00d00e30;
    }
    if (((char)bVar1 == 0x81) && (pbVar3[1] == 0x40)) {
      if (param_2 != 6) {
        *pbVar3 = 0;
        REFG(byte * PTR32, 0x15d9304) = pbVar3 + 2;
        return (uint)pbVar2;
      }
      pbVar3 = pbVar3 + 1;
    }
    else if (((0x80 < bVar1) && (bVar1 < 0xa0)) || ((0xdf < bVar1 && (bVar1 < 0xfd)))) {
      pbVar3 = pbVar3 + 1;
    }
  }
  pbVar3 = pbVar3 + 1;
  bVar1 = *pbVar3;
  goto joined_r0x00d00dee;
}

/* ref: FUN_00d00ed0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d00ed0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xd00ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint * puVar5;
  int iVar6;
  undefined * this;
  undefined * this_00;
  uint * puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint * puVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  
  if (0x1f < (byte)param_3) {
    return 0;
  }
  uVar9 = (uint)*((byte *)GEN_TOP(((byte)param_3 + 0x10 + (int)param_1)));
  if (uVar9 != 0) {
    fVar12 = ((float10)GEN_TOD(gen_bits2f(param_1[0x23])));
    fVar13 = (float10)param_5;
    if (fVar12 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar12)) && fVar13 != fVar12)) {
      param_1[0x23] = (int)gen_fl2bits(param_5);
    }
    fVar1 = gen_bits2f(param_1[0x24]);
    dVar14 = F_00d21650(param_2 GEN_EDX_FWD);
    if (!((double)fVar1 <= dVar14) != (GEN_ISNAN(dVar14) || GEN_ISNAN((double)fVar1))) {
      dVar14 = F_00d21650(param_2 GEN_EDX_ARG);
      param_1[0x24] = (int)gen_fl2bits((float)dVar14);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x6d);
    *(undefined1 *)(param_1 + 0x73) = 1;
    gen_imp_EnterCriticalSection(lpCriticalSection);
    puVar7 = ((uint *)GEN_TOP(param_1[(byte)param_3 + 0x2d]));
    uVar4 = F_00d214d0(param_2 GEN_EDX_ARG);
    if ((uVar4 != 0) && (iVar8 = 0, uVar9 != 0)) {
      puVar5 = puVar7 + 4;
LAB_00d00f82: ;
      if (puVar5[-1] != 0xffffffff) {
        if ((ushort)*puVar5 != uVar4) goto code_r0x00d00f91;
        if ((puVar5[-4] <= param_4) &&
           (!(((float10)GEN_TOD(gen_bits2f(puVar5[-3]))) <= (float10)param_5) ==
            (GEN_ISNAN((float10)param_5) || GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(puVar5[-3]))))))) {
          if (iVar8 < (int)(uVar9 - 1)) {
            iVar6 = (uVar9 - 1) - iVar8;
            puVar5 = puVar7 + iVar8 * 5 + 5;
            puVar11 = puVar7 + iVar8 * 5;
            for (uVar10 = (uint)(iVar6 * 0x14) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar11 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar11 = puVar11 + 1;
            }
            iVar8 = iVar8 + iVar6;
          }
          puVar7[iVar8 * 5 + 3] = 0xffffffff;
          goto LAB_00d00f9c;
        }
        goto LAB_00d01134;
      }
    }
LAB_00d00f9c: ;
    fVar12 = (float10)param_5;
    uVar10 = 0;
    puVar5 = puVar7;
    if (uVar9 != 0) {
      do {
        if (puVar5[3] == 0xffffffff) break;
        if ((*puVar5 <= param_4) &&
           ((*puVar5 != param_4 ||
            (fVar13 = ((float10)GEN_TOD(gen_bits2f(puVar5[1]))),
            !(fVar12 <= fVar13) || ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12))))) {
          uVar2 = puVar7[uVar9 * 5 - 2];
          if ((uVar2 != 0xffffffff) &&
             (this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xa0))))(param_1 GEN_EDX_ARG,uVar2))), this != ((undefined *)GEN_TOP(0x0)))) {
            F_00d05290(this GEN_EDX_ARG);
            this_00 = ((undefined *)GEN_TOP(F_00d05480(this GEN_EDX_ARG,uVar2)));
            if ((this_00 != ((undefined *)GEN_TOP(0x0))) && (bVar3 = F_00d210f0(this_00 GEN_EDX_ARG), bVar3 == 0)) {
              bVar3 = F_00d22a30(this_00 GEN_EDX_ARG);
              if (bVar3 != 0) {
                F_00d22c70(this_00 GEN_EDX_ARG,0);
              }
              F_00d055c0(this GEN_EDX_ARG,uVar2,0);
            }
            F_00d052b0(this GEN_EDX_ARG);
          }
          iVar8 = uVar9 - 1;
          if ((int)uVar10 < iVar8) {
            puVar7 = puVar7 + iVar8 * 5;
            iVar8 = iVar8 - uVar10;
            do {
              *puVar7 = puVar7[-5];
              puVar7[1] = puVar7[-4];
              puVar7[2] = puVar7[-3];
              puVar7[3] = puVar7[-2];
              puVar7[4] = puVar7[-1];
              puVar7 = puVar7 - 5;
              iVar8 = iVar8 - 1;
            } while (iVar8 != 0);
          }
          *puVar5 = param_4;
          goto LAB_00d00fe4;
        }
        uVar10 = uVar10 + 1;
        puVar5 = puVar5 + 5;
      } while ((int)uVar10 < (int)uVar9);
    }
    if (uVar10 != uVar9) {
      puVar5 = puVar7 + uVar10 * 5;
      *puVar5 = param_4;
LAB_00d00fe4: ;
      puVar5[1] = (uint)gen_fl2bits(param_5);
      uVar9 = F_00d218e0(param_2 GEN_EDX_ARG);
      puVar5[2] = uVar9;
      puVar5[3] = *((uint *)GEN_TOP(((int)param_2 + 0x20)));
      *(ushort *)(puVar5 + 4) = uVar4;
      if ((char)param_1[0x73] != '\0') {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
      return 1;
    }
LAB_00d01134: ;
    if ((char)param_1[0x73] != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0;
code_r0x00d00f91: ;
  iVar8 = iVar8 + 1;
  puVar5 = puVar5 + 5;
  if ((int)uVar9 <= iVar8) goto LAB_00d00f9c;
  goto LAB_00d00f82;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf39 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d01150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd01150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int * piVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x98);
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = 0;
  if (0 < *(int *)(this + 0x58)) {
    piVar3 = *(int * PTR32 *)(this + 0x94);
    do {
      if (*((uint *)GEN_TOP((*piVar3 + 0x10))) == param_1) goto LAB_00d0121f;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < *(int *)(this + 0x58));
  }
  if (*(int *)(this + 0x60) <= *(int *)(this + 0x58)) {
    if (this[0xb0] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0xf8,((char *)REFP(0x1131a40)),0,0,0x10)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00d09300(this_00 GEN_EDX_ARG,this,param_1,*(undefined4 *)(this + 100),
                         *(undefined4 *)(this + 0x68));
  }
  *((uint *)GEN_TOP((*(int *)(this + 0x94) + *(int *)(this + 0x58) * 4))) = uVar2;
  *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
  if (*(int *)(this + 0x5c) < *(int *)(this + 0x58)) {
    *(int *)(this + 0x5c) = *(int *)(this + 0x58);
  }
LAB_00d0121f: ;
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d01240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd01240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x98);
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = 0;
  if (0 < *(int *)(this + 0x58)) {
    piVar3 = *(int * PTR32 *)(this + 0x94);
    do {
      if (*((int *)GEN_TOP((*piVar3 + 0x10))) == param_1) {
        uVar1 = (*(int * PTR32 *)(this + 0x94))[iVar2];
        if (this[0xb0] != (undefined1)0x0) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return uVar1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00d012c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d012c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd012c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xb0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  iVar5 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x58)))) {
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x94)));
    do {
      if (*((int *)GEN_TOP((*piVar4 + 0x10))) == param_1) {
        puVar3 = ((undefined4 *)GEN_TOP((*((int * PTR32 *)GEN_TOP(((int)this + 0x94))))[iVar5]));
        if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
        }
        iVar5 = iVar5 + 1;
        if (iVar5 < *((int *)GEN_TOP(((int)this + 0x58)))) {
          do {
            iVar1 = iVar5 * 4;
            iVar2 = iVar5 * 4;
            iVar5 = iVar5 + 1;
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + iVar2 - 4))) =
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + iVar1)));
          } while (iVar5 < *((int *)GEN_TOP(((int)this + 0x58))));
        }
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) - 4 + iVar5 * 4))) = 0;
        *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
        break;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < *((int *)GEN_TOP(((int)this + 0x58))));
  }
  if (*((char *)GEN_TOP(((int)this + 0xb0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf45 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d01360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd01360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  iVar1 = 0;
  if (0 < *(int *)(this + 0x58)) {
    do {
      F_00d059d0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar1 * 4))) GEN_EDX_ARG,0xffffffff,param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf47 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d013b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd013b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint extraout_EAX = 0;
  uint uVar1;
  uint extraout_EAX_00 = 0;
  int iVar2;
  
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  iVar2 = 0;
  uVar1 = extraout_EAX;
  if (0 < *(int *)(this + 0x58)) {
    do {
      uVar1 = F_00d052f0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))) GEN_EDX_ARG,param_1,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    uVar1 = extraout_EAX_00;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf48 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d01400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd01400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int iVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x98);
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = 0;
  if (0 < *(int *)(this + 0x58)) {
    do {
      bVar1 = F_00d06580(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))) GEN_EDX_ARG,param_1);
      if (bVar1 == 0) {
        if (this[0xb0] != (undefined1)0x0) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf53 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d01470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd01470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  *(undefined4 *)(this + 0x300) = 1;
  *(undefined4 *)(this + 0x304) = 0;
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf54 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d014b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd014b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x98);
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(this + 0x300) < *(int *)(this + 0x58)) {
    do {
      uVar1 = F_00d053b0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + *(int *)(this + 0x300) * 4))) GEN_EDX_ARG,
                           *(undefined4 *)(this + 0x304),param_1,param_2);
      if (uVar1 == 0) {
        if (this[0xb0] != (undefined1)0x0) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return 0;
      }
      if (uVar1 != 0xffffffff) {
        *(int *)(this + 0x304) = *(int *)(this + 0x304) + 1;
        if (this[0xb0] != (undefined1)0x0) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return uVar1;
      }
      *(int *)(this + 0x300) = *(int *)(this + 0x300) + 1;
      *(undefined4 *)(this + 0x304) = 0;
    } while (*(int *)(this + 0x300) < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf55 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d01570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd01570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  if ((*(undefined4 * PTR32 *)&gen_args[0]) != ((undefined4 *)GEN_TOP(0x0))) {
    this[0xb0] = (undefined1)0x1;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    *puVar1 = *(undefined4 *)(this + 0x58);
    puVar1[1] = *(undefined4 *)(this + 0x5c);
    puVar1[2] = *(undefined4 *)(this + 0x60);
    puVar1[5] = *(undefined4 *)(this + 100);
    puVar1[8] = *(undefined4 *)(this + 0x68);
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    if (0 < *(int *)(this + 0x58)) {
      iVar2 = 0;
      do {
        F_00d05440(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]),&(*(int *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x4)),
                     &(*(int *)(gen_frame + 0x0)));
        if ((int)puVar1[3] < (int)(*(undefined4 * PTR32 *)&gen_args[0])) {
          puVar1[3] = (*(undefined4 * PTR32 *)&gen_args[0]);
        }
        if ((int)puVar1[4] < (*(int *)(gen_frame + 0x8))) {
          puVar1[4] = (*(int *)(gen_frame + 0x8));
        }
        if ((int)puVar1[6] < (*(int *)(gen_frame + 0x4))) {
          puVar1[6] = (*(int *)(gen_frame + 0x4));
        }
        if ((int)puVar1[7] < (*(int *)(gen_frame + 0x0))) {
          puVar1[7] = (*(int *)(gen_frame + 0x0));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 0x58));
    }
    if (*(int *)(this + 4) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xd4))))
                (*(int * PTR32 *)(this + 4) GEN_EDX_ARG,puVar1 + 9,puVar1 + 10,puVar1 + 0xb);
    }
    if (this[0xb0] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    }
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf31 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d01670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd01670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint extraout_EAX = 0;
  uint uVar1;
  uint extraout_EAX_00 = 0;
  int iVar2;
  
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  iVar2 = 0;
  uVar1 = extraout_EAX;
  if (0 < *(int *)(this + 0x58)) {
    do {
      uVar1 = F_00d07430(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))) GEN_EDX_ARG,param_1,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    uVar1 = extraout_EAX_00;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf32 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d016c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd016c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint extraout_EAX = 0;
  
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  uVar1 = F_00d074a0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)(this + 0x94))) GEN_EDX_ARG,param_1);
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf34 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d01700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd01700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x58, 8, 4);
  undefined1 LVar1;
  undefined * pLVar2;
  short * psVar3;
  byte bVar4;
  short * psVar5;
  undefined * pvVar6;
  LPCRITICAL_SECTION p_Var7;
  undefined * pvVar8;
  uint uVar9;
  gen_size32 _NumOfElements;
  int * piVar10;
  uint uVar11;
  int * piVar12;
  int iVar13;
  int iVar14;
  undefined * pLVar15;
  undefined * pLVar16;
  
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = this;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x30)) = (LPCRITICAL_SECTION)(this + 0x1b4);
  this[0x1cc] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x1b4));
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = this + 0x134;
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this + 0x10;
  (*(int *)(gen_frame + 0x38)) = 0x20;
  do {
    if (*(*(undefined * PTR32 *)(gen_frame + 0x3c)) != (undefined1)0x0) {
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = ((undefined *)GEN_TOP(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x40))));
      uVar11 = (uint)(byte)*(*(undefined * PTR32 *)(gen_frame + 0x3c));
      (*(int *)(gen_frame + 0x44)) = 0;
      if (uVar11 != 0) {
        pLVar15 = ((undefined *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x40)) - 0x80) + 8)));
        (*(undefined * PTR32 *)(gen_frame + 0x4c)) = pLVar15;
        do {
          (*(undefined * PTR32 *)(gen_frame + 0x4c)) = pLVar15;
          if (*((int *)GEN_TOP(((int)pLVar15 + 4))) == -1) break;
          if (((short)*((int *)GEN_TOP(((int)pLVar15 + 8))) != 0) && (iVar14 = 0, uVar11 != 0)) {
            psVar3 = ((short *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x10)));
            do {
              psVar5 = psVar3;
              if (*(int *)(psVar5 - 2) == -1) goto LAB_00d018b2;
              if ((short)*((int *)GEN_TOP(((int)pLVar15 + 8))) == *psVar5) break;
              iVar14 = iVar14 + 1;
              psVar3 = psVar5 + 10;
            } while (iVar14 < (int)uVar11);
            if (((*(int *)pLVar15 != *(int *)(psVar5 - 4)) ||
                (*((int *)GEN_TOP(((int)pLVar15 + 4))) != *(int *)(psVar5 - 2))) &&
               (pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0xa0))))((*(undefined * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG,*(int *)pLVar15))),
               pvVar6 != ((undefined *)GEN_TOP(0x0)))) {
              F_00d05290(pvVar6 GEN_EDX_ARG);
              p_Var7 = (LPCRITICAL_SECTION)F_00d05480(pvVar6 GEN_EDX_ARG,*((int *)GEN_TOP(((int)pLVar15 + 4))));
              (*(LPCRITICAL_SECTION *)(gen_frame + 0x48)) = p_Var7;
              if ((p_Var7 != (LPCRITICAL_SECTION)0x0) &&
                 (pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0xa0))))
                                             ((*(undefined * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG,*(undefined4 *)(psVar5 - 4)))),
                 pLVar15 = (*(undefined * PTR32 *)(gen_frame + 0x4c)), pvVar8 != ((undefined *)GEN_TOP(0x0)))) {
                F_00d05290(pvVar8 GEN_EDX_ARG);
                uVar11 = F_00d05480(pvVar6 GEN_EDX_ARG,*(undefined4 *)(psVar5 - 2));
                if ((uVar11 != 0) &&
                   ((*((HANDLE *)GEN_TOP((uVar11 + 0x24))) == (*((HANDLE *)GEN_TOP(((((char *)((*(LPCRITICAL_SECTION *)(gen_frame + 0x48))) + (1) * 24) + 12))))) &&
                    (*((HANDLE *)GEN_TOP((uVar11 + 0x28))) == (*((HANDLE *)GEN_TOP(((((char *)((*(LPCRITICAL_SECTION *)(gen_frame + 0x48))) + (1) * 24) + 16))))))))) {
                  F_00cbbd90(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,((undefined *)GEN_TOP((uVar11 + 8))));
                  bVar4 = F_00cbc040(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
                  if (bVar4 != 0) {
                    F_00cbbd90(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
                    F_00cbbdc0(&(*(LONG *)(((char *)((*(LPCRITICAL_SECTION *)(gen_frame + 0x48))) + 8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
                    F_00cbbdb0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
                    uVar9 = F_00cbbd70(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
                    F_00cbbdc0(((undefined *)GEN_TOP((uVar11 + 8))) GEN_EDX_ARG,uVar9);
                    F_00cbbdb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
                  }
                  F_00cbbdb0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
                }
                F_00d052b0(pvVar8 GEN_EDX_ARG);
                pLVar15 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
              }
              F_00d052b0(pvVar6 GEN_EDX_ARG);
            }
          }
LAB_00d018b2: ;
          uVar11 = (uint)(byte)*(*(undefined * PTR32 *)(gen_frame + 0x3c));
          iVar14 = (*(int *)(gen_frame + 0x44)) + 1;
          pLVar15 = ((undefined *)GEN_TOP(((int)pLVar15 + 0x14)));
          (*(int *)(gen_frame + 0x44)) = iVar14;
          (*(undefined * PTR32 *)(gen_frame + 0x4c)) = pLVar15;
        } while (iVar14 < (int)uVar11);
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x40)) = (*(undefined * PTR32 *)(gen_frame + 0x40)) + 4;
    (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (*(undefined * PTR32 *)(gen_frame + 0x3c)) + 1;
    iVar14 = (*(int *)(gen_frame + 0x38)) - 1;
    (*(int *)(gen_frame + 0x38)) = iVar14;
  } while (iVar14 != 0);
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = (*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x10;
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x134;
  (*(int *)(gen_frame + 0x44)) = 0x20;
  do {
    LVar1 = *(undefined1 *)(*(undefined * PTR32 *)(gen_frame + 0x40));
    if (LVar1 != (undefined1)0x0) {
      iVar14 = *(int *)(*(undefined * PTR32 *)(gen_frame + 0x3c));
      uVar11 = (uint)(byte)LVar1;
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = ((undefined *)GEN_TOP(*(int *)((*(undefined * PTR32 *)(gen_frame + 0x3c)) - 0x80)));
      (*(int *)(gen_frame + 0x38)) = 0;
      if (LVar1 != (undefined1)0x0) {
        do {
          pLVar15 = (*(undefined * PTR32 *)(gen_frame + 0x50));
          if (*((int *)GEN_TOP((iVar14 + 0xc))) == -1) break;
          uVar9 = 0;
          if (uVar11 != 0) {
            piVar12 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0xc)));
            do {
              if ((piVar12[-1] == *((int *)GEN_TOP((iVar14 + 8)))) && (*piVar12 == *((int *)GEN_TOP((iVar14 + 0xc)))))
              break;
              uVar9 = uVar9 + 1;
              piVar12 = piVar12 + 5;
            } while ((int)uVar9 < (int)uVar11);
          }
          if (uVar9 == uVar11) {
            p_Var7 = (LPCRITICAL_SECTION)((*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x98);
            (*(LPCRITICAL_SECTION *)(gen_frame + 0x48)) = p_Var7;
            if ((*(undefined * PTR32 *)(gen_frame + 0x50))[0xb0] != (undefined1)0x0) {
              gen_imp_EnterCriticalSection(p_Var7);
            }
            pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pLVar15 + 0xa0))))
                                       (pLVar15 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar14 + 8))))));
            if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
              F_00d05290(pvVar6 GEN_EDX_ARG);
              pvVar8 = ((undefined *)GEN_TOP(F_00d05480(pvVar6 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar14 + 0xc))))));
              if ((pvVar8 != ((undefined *)GEN_TOP(0x0))) && (bVar4 = F_00d210f0(pvVar8 GEN_EDX_ARG), bVar4 == 0)) {
                bVar4 = F_00d22a30(pvVar8 GEN_EDX_ARG);
                if (bVar4 == 0) {
                  F_00d055c0(pvVar6 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar14 + 0xc))),0);
                }
                else {
                  F_00d22c70(pvVar8 GEN_EDX_ARG,0);
                }
              }
              F_00d052b0(pvVar6 GEN_EDX_ARG);
              p_Var7 = (*(LPCRITICAL_SECTION *)(gen_frame + 0x48));
            }
            if (*(char *)&(*(undefined * PTR32 *)(((char *)(p_Var7) + (1) * 24))) != '\0') {
              gen_imp_LeaveCriticalSection(p_Var7);
            }
          }
          uVar11 = (uint)(byte)*(*(undefined * PTR32 *)(gen_frame + 0x40));
          iVar13 = (*(int *)(gen_frame + 0x38)) + 1;
          iVar14 = iVar14 + 0x14;
          (*(int *)(gen_frame + 0x38)) = iVar13;
        } while (iVar13 < (int)uVar11);
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (*(undefined * PTR32 *)(gen_frame + 0x3c)) + 4;
    (*(undefined * PTR32 *)(gen_frame + 0x40)) = (*(undefined * PTR32 *)(gen_frame + 0x40)) + 1;
    iVar14 = (*(int *)(gen_frame + 0x44)) - 1;
    (*(int *)(gen_frame + 0x44)) = iVar14;
  } while (iVar14 != 0);
  pLVar15 = (*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x10;
  pLVar16 = (*(undefined * PTR32 *)(gen_frame + 0x50)) + 0xb4;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = pLVar16;
  (*(int *)(gen_frame + 0x38)) = 0x20;
  do {
    LVar1 = *(undefined1 *)pLVar15;
    if (LVar1 != (undefined1)0x0) {
      _NumOfElements = 0;
      if ((byte)LVar1 != 0) {
        piVar12 = ((int *)GEN_TOP(((int)*(undefined * PTR32 *)pLVar16 + 0xc)));
        do {
          if (*piVar12 == -1) break;
          _NumOfElements = _NumOfElements + 1;
          piVar12 = piVar12 + 5;
        } while ((int)_NumOfElements < (int)(uint)(byte)LVar1);
      }
      F_00c4f040(*(undefined * PTR32 *)pLVar16,_NumOfElements,0x14,((code *)REFP(0xd007a0)));
    }
    pLVar2 = (*(undefined * PTR32 *)(gen_frame + 0x50));
    pLVar16 = pLVar16 + 4;
    pLVar15 = pLVar15 + 1;
    iVar14 = (*(int *)(gen_frame + 0x38)) - 1;
    (*(int *)(gen_frame + 0x38)) = iVar14;
  } while (iVar14 != 0);
  if (*(int *)((*(undefined * PTR32 *)(gen_frame + 0x50)) + 8) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x50)) + 8) + 0x114))))(*(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x50)) + 8) GEN_EDX_ARG);
  }
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x48)) = (LPCRITICAL_SECTION)(pLVar2 + 0x10);
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = (*(undefined * PTR32 *)(gen_frame + 0x34));
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = ((undefined *)GEN_TOP(0x20));
  do {
    if (*(undefined *)(*(LPCRITICAL_SECTION *)(gen_frame + 0x48)) != (undefined1)0x0) {
      (*(int *)(gen_frame + 0x38)) = 0;
      piVar12 = ((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0xc)));
      do {
        pLVar15 = (*(undefined * PTR32 *)(gen_frame + 0x50));
        if (*piVar12 == -1) break;
        p_Var7 = (LPCRITICAL_SECTION)((*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x98);
        if ((*(undefined * PTR32 *)(gen_frame + 0x50))[0xb0] != (undefined1)0x0) {
          gen_imp_EnterCriticalSection(p_Var7);
        }
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0xa0))))((*(undefined * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG,piVar12[-1])));
        if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
          F_00d05290(pvVar6 GEN_EDX_ARG);
          piVar10 = ((int *)GEN_TOP(F_00d05480(pvVar6 GEN_EDX_ARG,*piVar12)));
          if ((piVar10 != ((int *)GEN_TOP(0x0))) &&
             (uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0x3c))))(piVar10 GEN_EDX_ARG), (char)uVar11 == '\0')) {
            F_00d055c0(pvVar6 GEN_EDX_ARG,*piVar12,0);
          }
          F_00d052b0(pvVar6 GEN_EDX_ARG);
        }
        if (pLVar15[0xb0] != (undefined1)0x0) {
          gen_imp_LeaveCriticalSection(p_Var7);
        }
        iVar14 = (*(int *)(gen_frame + 0x38)) + 1;
        piVar12 = piVar12 + 5;
        (*(int *)(gen_frame + 0x38)) = iVar14;
      } while (iVar14 < (int)(uint)(byte)*(undefined *)(*(LPCRITICAL_SECTION *)(gen_frame + 0x48)));
    }
    (*(undefined * PTR32 *)(gen_frame + 0x4c)) = (*(undefined * PTR32 *)(gen_frame + 0x4c)) + 4;
    (*(LPCRITICAL_SECTION *)(gen_frame + 0x48)) = (LPCRITICAL_SECTION)((int)(*(LPCRITICAL_SECTION *)(gen_frame + 0x48)) + 1);
    iVar14 = (int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) - 1;
    (*(undefined * PTR32 *)(gen_frame + 0x3c)) = ((undefined *)GEN_TOP(iVar14));
    if (iVar14 == 0) {
      if (*(int *)((*(undefined * PTR32 *)(gen_frame + 0x50)) + 8) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x50)) + 8) + 0x118))))(*(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x50)) + 8) GEN_EDX_ARG);
      }
      if (*(char *)&(*(undefined * PTR32 *)(((char *)((*(LPCRITICAL_SECTION *)(gen_frame + 0x30))) + (1) * 24))) != '\0') {
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x30)));
      }
      return 1;
    }
  } while( true );
}

/* ref: FUN_00d01b90 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d01b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(float * param_4, unsigned int gen_a4), GEN_P(float * param_5, unsigned int gen_a5), GEN_P(float * param_6, unsigned int gen_a6), GEN_P(float * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xd01b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a5;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a7;)
  GEN_FRAME_DECL(0x16c, 4);
  char cVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  undefined4 * puVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 extraout_ST0;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar34;
  float fVar35;
  undefined1 in_XMM5 [16] = {0};
  undefined1 auVar33 [16];
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  (*(float *)(gen_frame + 0x10c)) = 0.0;
  (*(float *)(gen_frame + 0x110)) = 0.0;
  (*(float *)(gen_frame + 0x114)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x118)) = 0;
  (*(float *)(gen_frame + 0x7c)) = 0.0;
  (*(float *)(gen_frame + 0x80)) = 0.0;
  (*(float * PTR32 *)(gen_frame + 0x94)) = param_2;
  (*(float *)(gen_frame + 0x84)) = 0.0;
  (*(float *)(gen_frame + 0x10c)) = 0.0;
  (*(float *)(gen_frame + 0x110)) = 0.0;
  (*(float *)(gen_frame + 0x114)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x118)) = 0;
  (*(float *)(gen_frame + 0x88)) = 0.0;
  (*(float * PTR32 *)(gen_frame + 0xb4)) = param_3;
  (*(float *)(gen_frame + 0x6c)) = 0.0;
  (*(float * PTR32 *)(gen_frame + 0x48)) = param_4;
  (*(float *)(gen_frame + 0x70)) = 0.0;
  (*(float * PTR32 *)(gen_frame + 0x8c)) = param_5;
  (*(float *)(gen_frame + 0x74)) = 0.0;
  (*(float * PTR32 *)(gen_frame + 0x5c)) = param_6;
  (*(float * PTR32 *)(gen_frame + 0xb8)) = param_7;
  (*(float *)(gen_frame + 0x78)) = 0.0;
  (*(int *)(gen_frame + 0x98)) = 0;
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x98))))(this GEN_EDX_FWD)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x30))))(piVar5 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x148)));
  fVar10 = (float10)(*(float *)(gen_frame + 0x148));
  fVar11 = (float10)*param_1;
  if (!(fVar10 <= fVar11) || ((GEN_ISNAN(fVar11) || GEN_ISNAN(fVar10)) || fVar11 == fVar10)) {
    (*(float *)(gen_frame + 0x10c)) = *param_1;
  }
  else {
    (*(float *)(gen_frame + 0x10c)) = (*(float *)(gen_frame + 0x148));
    fVar10 = (float10)*param_1;
  }
  (*(float *)(gen_frame + 0xec)) = (float)fVar10;
  fVar10 = (float10)(*(float *)(gen_frame + 0x14c));
  fVar11 = (float10)param_1[1];
  if (!(fVar10 <= fVar11) || ((GEN_ISNAN(fVar11) || GEN_ISNAN(fVar10)) || fVar11 == fVar10)) {
    (*(float *)(gen_frame + 0x110)) = param_1[1];
  }
  else {
    (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x14c));
    fVar10 = (float10)param_1[1];
  }
  (*(float *)(gen_frame + 0xf0)) = (float)fVar10;
  fVar10 = (float10)(*(float *)(gen_frame + 0x150));
  fVar11 = (float10)param_1[2];
  if (!(fVar10 <= fVar11) || ((GEN_ISNAN(fVar11) || GEN_ISNAN(fVar10)) || fVar11 == fVar10)) {
    (*(float *)(gen_frame + 0x114)) = param_1[2];
  }
  else {
    (*(float *)(gen_frame + 0x114)) = (*(float *)(gen_frame + 0x150));
    fVar10 = (float10)param_1[2];
  }
  (*(float *)(gen_frame + 0xf4)) = (float)fVar10;
  *((undefined1 *)GEN_TOP(((int)this + 0x2d0))) = 0;
  if (*((char *)GEN_TOP(((int)this + 0x2ec))) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2d4));
  }
  if (*((char *)GEN_TOP(((int)this + 0xb0))) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  }
  (*(int *)(gen_frame + 0xd8)) = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x58)))) {
    do {
      F_00d07500(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + (*(int *)(gen_frame + 0xd8)) * 4))) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10c)),&(*(float *)(gen_frame + 0xec)));
      iVar6 = (*(int *)(gen_frame + 0xd8)) + 1;
      (*(int *)(gen_frame + 0xd8)) = iVar6;
    } while (iVar6 < *((int *)GEN_TOP(((int)this + 0x58))));
  }
  if (*((char *)GEN_TOP(((int)this + 0xb0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  }
  fVar11 = (float10)1;
  *(*(float * PTR32 *)(gen_frame + 0x94)) = (float)fVar11;
  *(*(float * PTR32 *)(gen_frame + 0xb4)) = (float)fVar11;
  *(*(float * PTR32 *)(gen_frame + 0x8c)) = (float)fVar11;
  *(*(float * PTR32 *)(gen_frame + 0x5c)) = (float)fVar11;
  *(*(float * PTR32 *)(gen_frame + 0xb8)) = (float)(float10)0;
  cVar1 = *((char *)GEN_TOP(((int)this + 0x2d0)));
  while (cVar1 != '\0') {
    (*(float *)(gen_frame + 0xb0)) = REFG(float, 0x1090708);
    fVar14 = param_1[3];
    (*(int * PTR32 *)(gen_frame + 0x90)) = ((int *)GEN_TOP(0x0));
    (*(int *)(gen_frame + 0x68)) = 0;
    fVar16 = param_1[1];
    fVar19 = param_1[2];
    (*(int *)(gen_frame + 0xd8)) = 0;
    (*(float *)(gen_frame + 0xbc)) = *param_1 - (*(float *)(gen_frame + 0x148));
    (*(float *)(gen_frame + 0xc0)) = fVar16 - (*(float *)(gen_frame + 0x14c));
    (*(float *)(gen_frame + 0xc4)) = fVar19 - (*(float *)(gen_frame + 0x150));
    (*(float *)(gen_frame + 0xc8)) = fVar14 - (*(float *)(gen_frame + 0x154));
    (*(float *)(gen_frame + 0xdc)) = *param_1 - (*(float *)(gen_frame + 0x148));
    (*(float *)(gen_frame + 0xe0)) = fVar16 - (*(float *)(gen_frame + 0x14c));
    (*(float *)(gen_frame + 0xe4)) = fVar19 - (*(float *)(gen_frame + 0x150));
    (*(float *)(gen_frame + 0xe8)) = fVar14 - (*(float *)(gen_frame + 0x154));
    if (*((char *)GEN_TOP(((int)this + 0x2d0))) == '\0') break;
    (*(undefined4 * PTR32 *)(gen_frame + 0xd4)) = ((undefined4 *)GEN_TOP(((int)this + 0x1d0)));
    do {
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0xd4)))) + 0x58))))
                (((int *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0xd4)))),&(*(float *)(gen_frame + 0x148)),&(*(float *)(gen_frame + 0xdc)),&(*(float *)(gen_frame + 0xfc)),((undefined1 *)(gen_frame + 0x14)));
      fVar14 = (float)extraout_ST0;
      (*(float *)(gen_frame + 0xac)) = fVar14;
      fVar11 = (float10)0;
      fVar10 = (float10)fVar14;
      if (!(fVar11 <= fVar10) == (GEN_ISNAN(fVar10) || GEN_ISNAN(fVar11))) {
        fVar12 = (float10)(*(float *)(gen_frame + 0xb0));
        if ((!(fVar11 <= fVar12) != (GEN_ISNAN(fVar12) || GEN_ISNAN(fVar11))) ||
           (!(fVar12 <= fVar10) != (GEN_ISNAN(fVar10) || GEN_ISNAN(fVar12)))) {
          (*(float *)(gen_frame + 0xb0)) = fVar14;
          (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0xd8));
          (*(float *)(gen_frame + 0x13c)) = (*(float *)(gen_frame + 0x100));
          (*(float *)(gen_frame + 0x138)) = (*(float *)(gen_frame + 0xfc));
          (*(float *)(gen_frame + 0x140)) = (*(float *)(gen_frame + 0x104));
          (*(float *)(gen_frame + 0x144)) = (*(float *)(gen_frame + 0x108));
          (*(int * PTR32 *)(gen_frame + 0x90)) = ((int *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0xd4))));
        }
      }
      else {
        puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0xd4));
        iVar6 = (*(int *)(gen_frame + 0xd8));
        if ((*(int *)(gen_frame + 0xd8)) < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x2d0)))) {
          do {
            *puVar8 = puVar8[1];
            iVar6 = iVar6 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar6 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x2d0))));
        }
        *((char *)GEN_TOP(((int)this + 0x2d0))) = *((char *)GEN_TOP(((int)this + 0x2d0))) - 1;
        (*(int *)(gen_frame + 0xd8)) = (*(int *)(gen_frame + 0xd8)) - 1;
        (*(undefined4 * PTR32 *)(gen_frame + 0xd4)) = (*(undefined4 * PTR32 *)(gen_frame + 0xd4)) - 1;
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0xd4)) = (*(undefined4 * PTR32 *)(gen_frame + 0xd4)) + 1;
      iVar6 = (*(int *)(gen_frame + 0xd8)) + 1;
      (*(int *)(gen_frame + 0xd8)) = iVar6;
    } while (iVar6 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x2d0))));
    bVar9 = GEN_ISNAN((float10)REFG(float, 0x1090708)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0xb0)));
    if (bVar9 != (bVar9 || (float10)REFG(float, 0x1090708) == (float10)(*(float *)(gen_frame + 0xb0)))) break;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x90)) + 0x60))))
              ((*(int * PTR32 *)(gen_frame + 0x90)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0x64)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xb0))),0);
    *(*(float * PTR32 *)(gen_frame + 0x8c)) = (float)((float10)(*(float *)(gen_frame + 0x60)) * (float10)*(*(float * PTR32 *)(gen_frame + 0x8c)));
    *(*(float * PTR32 *)(gen_frame + 0x5c)) = (float)((float10)*(*(float * PTR32 *)(gen_frame + 0x5c)) * (float10)(*(float *)(gen_frame + 0x64)));
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x90)) + 0x5c))))((*(int * PTR32 *)(gen_frame + 0x90)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x138)),&(*(float *)(gen_frame + 0x128)),param_1,&(*(float *)(gen_frame + 0x148)));
    fVar17 = (*(float *)(gen_frame + 0x154));
    fVar15 = (*(float *)(gen_frame + 0x150));
    fVar4 = *(float *)&REFG(undefined, 0x1131b38);
    fVar3 = *(float *)&REFG(undefined, 0x1131b34);
    fVar21 = *(float *)&REFG(undefined, 0x1131b30);
    fVar19 = *(float *)&REFG(undefined, 0x1131b28);
    fVar16 = *(float *)&REFG(undefined, 0x1131b24);
    fVar14 = *(float *)&REFG(undefined, 0x1131b20);
    if ((char)uVar7 == '\x01') {
      fVar22 = (*(float *)(gen_frame + 0x148)) - (*(float *)(gen_frame + 0x128));
      fVar24 = (*(float *)(gen_frame + 0x14c)) - (*(float *)(gen_frame + 0x12c));
      fVar26 = (*(float *)(gen_frame + 0x150)) - (*(float *)(gen_frame + 0x130));
      fVar28 = (*(float *)(gen_frame + 0x154)) - (*(float *)(gen_frame + 0x134));
      (*(float *)(gen_frame + 0xbc)) = fVar22;
      (*(float *)(gen_frame + 0xc0)) = fVar24;
      (*(float *)(gen_frame + 0xc4)) = fVar26;
      (*(float *)(gen_frame + 0xc8)) = fVar28;
      (*(float *)(gen_frame + 0x38)) = fVar22;
      (*(float *)(gen_frame + 0x3c)) = fVar24;
      (*(float *)(gen_frame + 0x40)) = fVar26;
      (*(float *)(gen_frame + 0x44)) = fVar28;
      fVar23 = *param_1 - (*(float *)(gen_frame + 0x128));
      fVar25 = param_1[1] - (*(float *)(gen_frame + 0x12c));
      fVar27 = param_1[2] - (*(float *)(gen_frame + 0x130));
      fVar29 = param_1[3] - (*(float *)(gen_frame + 0x134));
      (*(float *)(gen_frame + 0xbc)) = fVar23;
      (*(float *)(gen_frame + 0xc0)) = fVar25;
      (*(float *)(gen_frame + 0xc4)) = fVar27;
      (*(float *)(gen_frame + 0xc8)) = fVar29;
      (*(float *)(gen_frame + 0x4c)) = fVar23;
      (*(float *)(gen_frame + 0x50)) = fVar25;
      (*(float *)(gen_frame + 0x54)) = fVar27;
      (*(float *)(gen_frame + 0x58)) = fVar29;
      fVar13 = fVar22 * fVar22;
      fVar15 = fVar24 * fVar24;
      fVar17 = fVar26 * fVar26;
      fVar20 = fVar28 * fVar28;
      fVar30 = (fVar17 + fVar13) + fVar15;
      fVar31 = (fVar13 + fVar15) + fVar17;
      fVar13 = (fVar15 + fVar17) + fVar13;
      fVar20 = (fVar20 + fVar20) + fVar20;
      (*(undefined4 *)((char *)&auVar33 + 4)) = (undefined4)gen_fl2bits(fVar31);
      (*(undefined4 *)((char *)&auVar33 + 0)) = (undefined4)gen_fl2bits(fVar30);
      (*(undefined4 *)((char *)&auVar33 + 8)) = (undefined4)gen_fl2bits(fVar13);
      (*(undefined4 *)((char *)&auVar33 + 12)) = (undefined4)gen_fl2bits(fVar20);
      gen_rsqrtps(&(auVar33), &(in_XMM5), &(auVar33));
      fVar32 = (*(float *)((char *)&auVar33 + 0));
      fVar34 = (*(float *)((char *)&auVar33 + 4));
      fVar35 = (*(float *)((char *)&auVar33 + 8));
      fVar15 = (fVar32 * fVar30) * fVar32;
      fVar17 = (fVar34 * fVar31) * fVar34;
      fVar18 = (fVar35 * fVar13) * fVar35;
      *(*(float * PTR32 *)(gen_frame + 0xb8)) = ((float)GEN_TOF(((float10)*(*(float * PTR32 *)(gen_frame + 0xb8)) +
                         ((float10)GEN_TOD(GEN_X87(SQRT((fVar26 * fVar26 + fVar22 * fVar22) + fVar24 * fVar24)))))));
      (*(float *)(gen_frame + 0xbc)) = fVar15;
      (*(float *)(gen_frame + 0xc0)) = fVar17;
      (*(float *)(gen_frame + 0xc4)) = fVar18;
      (*(float *)(gen_frame + 0xc8)) = ((*(float *)((char *)&auVar33 + 12)) * fVar20) * (*(float *)((char *)&auVar33 + 12));
      fVar15 = gen_bits2f((uint)gen_fl2bits(((fVar14 - fVar15) * (fVar21 * fVar32) + fVar32) *
                                            fVar22) & -(uint)(0.0 < fVar30) |
                          ~-(uint)(0.0 < fVar30) & (uint)gen_fl2bits(fVar22));
      fVar17 = gen_bits2f((uint)gen_fl2bits(((fVar16 - fVar17) * (fVar3 * fVar34) + fVar34) * fVar24
                                           ) & -(uint)(0.0 < fVar31) |
                          ~-(uint)(0.0 < fVar31) & (uint)gen_fl2bits(fVar24));
      fVar13 = gen_bits2f((uint)gen_fl2bits(((fVar19 - fVar18) * (fVar4 * fVar35) + fVar35) * fVar26
                                           ) & -(uint)(0.0 < fVar13) |
                          ~-(uint)(0.0 < fVar13) & (uint)gen_fl2bits(fVar26));
      (*(float *)(gen_frame + 0xbc)) = fVar15;
      (*(float *)(gen_frame + 0xc0)) = fVar17;
      (*(float *)(gen_frame + 0xc4)) = fVar13;
      (*(float *)(gen_frame + 0xc8)) = fVar28;
      (*(float *)(gen_frame + 0x28)) = fVar15;
      (*(float *)(gen_frame + 0x2c)) = fVar17;
      (*(float *)(gen_frame + 0x30)) = fVar13;
      (*(float *)(gen_frame + 0x34)) = fVar28;
      fVar18 = fVar23 * fVar23;
      fVar20 = fVar25 * fVar25;
      fVar22 = fVar27 * fVar27;
      fVar24 = fVar29 * fVar29;
      fVar26 = (fVar22 + fVar18) + fVar20;
      fVar28 = (fVar18 + fVar20) + fVar22;
      fVar18 = (fVar20 + fVar22) + fVar18;
      fVar24 = (fVar24 + fVar24) + fVar24;
      (*(undefined4 *)((char *)&auVar2 + 4)) = (undefined4)gen_fl2bits(fVar28);
      (*(undefined4 *)((char *)&auVar2 + 0)) = (undefined4)gen_fl2bits(fVar26);
      (*(undefined4 *)((char *)&auVar2 + 8)) = (undefined4)gen_fl2bits(fVar18);
      (*(undefined4 *)((char *)&auVar2 + 12)) = (undefined4)gen_fl2bits(fVar24);
      gen_rsqrtps(&(auVar33), (&(unsigned int[4]){(unsigned int)((uint)gen_fl2bits(fVar29)), 0, 0, 0}), &(auVar2));
      fVar20 = (*(float *)((char *)&auVar33 + 0));
      fVar22 = (*(float *)((char *)&auVar33 + 4));
      fVar30 = (*(float *)((char *)&auVar33 + 8));
      (*(float *)((char *)&in_XMM5 + 0)) = (fVar20 * fVar26) * fVar20;
      (*(float *)((char *)&in_XMM5 + 4)) = (fVar22 * fVar28) * fVar22;
      (*(float *)((char *)&in_XMM5 + 8)) = (fVar30 * fVar18) * fVar30;
      (*(float *)((char *)&in_XMM5 + 12)) = ((*(float *)((char *)&auVar33 + 12)) * fVar24) * (*(float *)((char *)&auVar33 + 12));
      fVar14 = gen_bits2f((uint)gen_fl2bits(((fVar14 - (*(float *)((char *)&in_XMM5 + 0))) * (fVar20 * fVar21) + fVar20)
                                            * fVar23) & -(uint)(0.0 < fVar26) |
                          ~-(uint)(0.0 < fVar26) & (uint)gen_fl2bits(fVar23));
      fVar16 = gen_bits2f((uint)gen_fl2bits(((fVar16 - (*(float *)((char *)&in_XMM5 + 4))) * (fVar22 * fVar3) + fVar22)
                                            * fVar25) & -(uint)(0.0 < fVar28) |
                          ~-(uint)(0.0 < fVar28) & (uint)gen_fl2bits(fVar25));
      fVar19 = gen_bits2f((uint)gen_fl2bits(((fVar19 - (*(float *)((char *)&in_XMM5 + 8))) * (fVar30 * fVar4) + fVar30)
                                            * fVar27) & -(uint)(0.0 < fVar18) |
                          ~-(uint)(0.0 < fVar18) & (uint)gen_fl2bits(fVar27));
      (*(float *)(gen_frame + 0xbc)) = fVar14;
      (*(float *)(gen_frame + 0xc0)) = fVar16;
      (*(float *)(gen_frame + 0xc4)) = fVar19;
      (*(float *)(gen_frame + 0xc8)) = fVar29;
      (*(float *)(gen_frame + 0x18)) = fVar14;
      (*(float *)(gen_frame + 0x1c)) = fVar16;
      (*(float *)(gen_frame + 0x20)) = fVar19;
      (*(float *)(gen_frame + 0x24)) = fVar29;
      fVar14 = ((float)GEN_TOF(((float10)1 -
                      (((float10)GEN_TOD(((fVar19 * fVar13 + fVar14 * fVar15) + fVar16 * fVar17))) + (float10)1
                      ) * (float10)*(double *)&REFG(double, 0x10948e0))));
      (*(float *)(gen_frame + 0xac)) = fVar14;
      *(*(float * PTR32 *)(gen_frame + 0xb4)) = (float)((float10)fVar14 * (float10)*(*(float * PTR32 *)(gen_frame + 0xb4)));
      (*(float *)(gen_frame + 0x148)) = (*(float *)(gen_frame + 0x128));
      (*(float *)(gen_frame + 0x14c)) = (*(float *)(gen_frame + 0x12c));
      (*(float *)(gen_frame + 0x150)) = (*(float *)(gen_frame + 0x130));
      (*(float *)(gen_frame + 0x154)) = (*(float *)(gen_frame + 0x134));
    }
    else {
      (*(float *)(gen_frame + 0x150)) = (*(float *)(gen_frame + 0x140));
      (*(float *)(gen_frame + 0x154)) = (*(float *)(gen_frame + 0x144));
      *(*(float * PTR32 *)(gen_frame + 0x94)) = (float)((float10)*(*(float * PTR32 *)(gen_frame + 0x94)) * (float10)(*(float *)(gen_frame + 0x60)));
      *(*(float * PTR32 *)(gen_frame + 0xb4)) = (float)((float10)*(*(float * PTR32 *)(gen_frame + 0xb4)) * (float10)(*(float *)(gen_frame + 0x64)));
      (*(float *)(gen_frame + 0x130)) = (*(float *)(gen_frame + 0x140));
      (*(float *)(gen_frame + 0x134)) = (*(float *)(gen_frame + 0x144));
      fVar14 = (*(float *)(gen_frame + 0x148)) - (*(float *)(gen_frame + 0x138));
      fVar16 = (*(float *)(gen_frame + 0x14c)) - (*(float *)(gen_frame + 0x13c));
      fVar15 = fVar15 - (*(float *)(gen_frame + 0x140));
      (*(float *)(gen_frame + 0xbc)) = fVar14;
      (*(float *)(gen_frame + 0xc0)) = fVar16;
      (*(float *)(gen_frame + 0xc4)) = fVar15;
      (*(float *)(gen_frame + 0xc8)) = fVar17 - (*(float *)(gen_frame + 0x144));
      (*(float *)(gen_frame + 0x9c)) = fVar14;
      (*(float *)(gen_frame + 0xa0)) = fVar16;
      (*(float *)(gen_frame + 0xa4)) = fVar15;
      (*(float *)(gen_frame + 0xa8)) = fVar17 - (*(float *)(gen_frame + 0x144));
      *(*(float * PTR32 *)(gen_frame + 0xb8)) = ((float)GEN_TOF(((float10)*(*(float * PTR32 *)(gen_frame + 0xb8)) +
                         ((float10)GEN_TOD(GEN_X87(SQRT((fVar15 * fVar15 + fVar14 * fVar14) + fVar16 * fVar16)))))));
      (*(float *)(gen_frame + 0x148)) = (*(float *)(gen_frame + 0x138));
      (*(float *)(gen_frame + 0x14c)) = (*(float *)(gen_frame + 0x13c));
      (*(float *)(gen_frame + 0x128)) = (*(float *)(gen_frame + 0x138));
      (*(float *)(gen_frame + 0x12c)) = (*(float *)(gen_frame + 0x13c));
    }
    if ((*(int *)(gen_frame + 0x98)) == 0) {
      (*(float *)(gen_frame + 0x7c)) = (*(float *)(gen_frame + 0x148));
      (*(float *)(gen_frame + 0x80)) = (*(float *)(gen_frame + 0x14c));
      (*(float *)(gen_frame + 0x84)) = (*(float *)(gen_frame + 0x150));
      (*(float *)(gen_frame + 0x88)) = (*(float *)(gen_frame + 0x154));
      (*(float *)(gen_frame + 0x6c)) = (*(float *)(gen_frame + 0x138));
      (*(float *)(gen_frame + 0x70)) = (*(float *)(gen_frame + 0x13c));
      (*(float *)(gen_frame + 0x74)) = (*(float *)(gen_frame + 0x140));
      (*(float *)(gen_frame + 0x78)) = (*(float *)(gen_frame + 0x144));
    }
    (*(int *)(gen_frame + 0x98)) = 1;
    (*(float *)(gen_frame + 0x128)) = (*(float *)(gen_frame + 0x148));
    (*(float *)(gen_frame + 0x12c)) = (*(float *)(gen_frame + 0x14c));
    (*(float *)(gen_frame + 0x130)) = (*(float *)(gen_frame + 0x150));
    (*(float *)(gen_frame + 0x134)) = (*(float *)(gen_frame + 0x154));
    if (((float10)*(*(float * PTR32 *)(gen_frame + 0x94)) <= (float10)0) && ((float10)*(*(float * PTR32 *)(gen_frame + 0x8c)) <= (float10)0)) break;
    if ((*(int *)(gen_frame + 0x68)) < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x2d0)))) {
      puVar8 = ((undefined4 *)GEN_TOP(((int)this + (*(int *)(gen_frame + 0x68)) * 4 + 0x1d0)));
      iVar6 = (*(int *)(gen_frame + 0x68));
      do {
        *puVar8 = puVar8[1];
        iVar6 = iVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar6 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x2d0))));
    }
    *((char *)GEN_TOP(((int)this + 0x2d0))) = *((char *)GEN_TOP(((int)this + 0x2d0))) - 1;
    cVar1 = *((char *)GEN_TOP(((int)this + 0x2d0)));
  }
  if (*((char *)GEN_TOP(((int)this + 0x2ec))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2d4));
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x2d0))) = 0;
  if ((*(int *)(gen_frame + 0x98)) != 0) {
    fVar14 = *param_1 - (*(float *)(gen_frame + 0x128));
    fVar16 = gen_bits2f((uint)((ulonglong)*(undefined8 *)((int)(uintptr_t)param_1) >> 0x20)) - (*(float *)(gen_frame + 0x12c));
    fVar19 = param_1[2] - (*(float *)(gen_frame + 0x130));
    fVar21 = param_1[3] - (*(float *)(gen_frame + 0x134));
    (*(float *)(gen_frame + 0xfc)) = fVar14;
    (*(float *)(gen_frame + 0x100)) = fVar16;
    (*(float *)(gen_frame + 0x104)) = fVar19;
    (*(float *)(gen_frame + 0x108)) = fVar21;
    (*(float *)(gen_frame + 0x9c)) = fVar14;
    (*(float *)(gen_frame + 0xa0)) = fVar16;
    (*(float *)(gen_frame + 0xa4)) = fVar19;
    (*(float *)(gen_frame + 0xa8)) = fVar21;
    fVar16 = fVar16 * fVar16;
    fVar19 = fVar19 * fVar19;
    (*(float *)(gen_frame + 0x0)) = (fVar19 + fVar16) + fVar16;
    (*(float *)(gen_frame + 0x4)) = (fVar19 + fVar19) + fVar16;
    (*(float *)(gen_frame + 0x8)) = (fVar19 + fVar21 * fVar21) + fVar16;
    *(*(float * PTR32 *)(gen_frame + 0xb8)) = ((float)GEN_TOF(((float10)*(*(float * PTR32 *)(gen_frame + 0xb8)) + ((float10)GEN_TOD(GEN_X87(SQRT((fVar19 + fVar14 * fVar14) + fVar16)))))));
    *param_1 = (*(float *)(gen_frame + 0x7c));
    param_1[1] = (*(float *)(gen_frame + 0x80));
    param_1[2] = (*(float *)(gen_frame + 0x84));
    param_1[3] = (*(float *)(gen_frame + 0x88));
    *(*(float * PTR32 *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x6c));
    (*(float * PTR32 *)(gen_frame + 0x48))[1] = (*(float *)(gen_frame + 0x70));
    (*(float * PTR32 *)(gen_frame + 0x48))[2] = (*(float *)(gen_frame + 0x74));
    (*(float * PTR32 *)(gen_frame + 0x48))[3] = (*(float *)(gen_frame + 0x78));
  }
  return (*(int *)(gen_frame + 0x98)) != 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf23 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d02600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd02600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint extraout_EAX = 0;
  uint uVar1;
  uint extraout_EAX_00 = 0;
  int iVar2;
  
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  iVar2 = 0;
  uVar1 = extraout_EAX;
  if (0 < *(int *)(this + 0x58)) {
    do {
      uVar1 = F_00d06b20(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))) GEN_EDX_ARG,param_1,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    uVar1 = extraout_EAX_00;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d02650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd02650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint extraout_EAX = 0;
  uint uVar1;
  uint extraout_EAX_00 = 0;
  int iVar2;
  
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  iVar2 = 0;
  uVar1 = extraout_EAX;
  if (0 < *(int *)(this + 0x58)) {
    do {
      uVar1 = F_00d06d10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))) GEN_EDX_ARG,param_1,param_2,param_3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    uVar1 = extraout_EAX_00;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf25 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d026c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd026c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint extraout_EAX = 0;
  uint uVar1;
  uint extraout_EAX_00 = 0;
  int iVar2;
  
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  iVar2 = 0;
  uVar1 = extraout_EAX;
  if (0 < *(int *)(this + 0x58)) {
    do {
      uVar1 = F_00d06db0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))) GEN_EDX_ARG,param_1,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    uVar1 = extraout_EAX_00;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d02710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd02710u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint extraout_EAX = 0;
  uint uVar1;
  uint extraout_EAX_00 = 0;
  int iVar2;
  
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  iVar2 = 0;
  uVar1 = extraout_EAX;
  if (0 < *(int *)(this + 0x58)) {
    do {
      uVar1 = F_00d06ed0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))) GEN_EDX_ARG,param_1,param_2,param_3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    uVar1 = extraout_EAX_00;
  }
  return uVar1;
}

/* ref: FUN_00d02780 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d02780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd02780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xb0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  iVar1 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x58)))) {
    do {
      F_00d08e80(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + iVar1 * 4))) GEN_EDX_ARG);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *((int *)GEN_TOP(((int)this + 0x58))));
  }
  if (*((char *)GEN_TOP(((int)this + 0xb0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf66 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d027d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd027d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  undefined2 * puVar4;
  
  iVar3 = 0;
  puVar4 = param_1;
  if (0 < param_2) {
    do {
      switch((unsigned int)(uintptr_t)(*puVar4)) {
      case 1: ;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x9c))))(this GEN_EDX_FWD,*(undefined4 *)(puVar4 + 2));
        break;
      case 2: ;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa8))))(this GEN_EDX_ARG,*(undefined4 *)(puVar4 + 2));
        break;
      case 3: ;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_ARG,*(undefined4 *)(puVar4 + 2))));
        if ((this_00 == ((undefined *)GEN_TOP(0x0))) || (bVar1 = F_00d08f70(this_00 GEN_EDX_ARG,puVar4), bVar1 == 0)) {
          return 0;
        }
        break;
      case 4: ;
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_ARG,*(undefined4 *)(puVar4 + 2));
        if (uVar2 == 0) {
          return 0;
        }
        F_00d055c0(uVar2 GEN_EDX_ARG,*(undefined4 *)(puVar4 + 4),1);
        break;
      default: ;
        F_00d1df80(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG,puVar4);
        break;
      case 7: ;
        F_00d00a70(this GEN_EDX_ARG,puVar4);
        break;
      case 9: ;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa8))))(this GEN_EDX_ARG,1);
      }
      iVar3 = iVar3 + (uint)(ushort)puVar4[1];
      puVar4 = ((undefined2 *)GEN_TOP(((int)puVar4 + (uint)(ushort)puVar4[1])));
    } while (iVar3 < param_2);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf64 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d028e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd028e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  code * pcVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_FWD);
  if ((char)uVar2 != '\0') {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x34)));
    (*(undefined4 *)(gen_frame + 0x0)) = 0x100007;
    uVar2 = (*pcVar1)(this);
    (*(undefined1 *)(gen_frame + 0x4)) = (char)uVar2;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_ARG);
    (*(undefined1 *)(gen_frame + 0x5)) = (char)uVar2;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
    (*(undefined1 *)(gen_frame + 0x6)) = (char)uVar2;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(this + 0x50);
    (*(undefined1 *)(gen_frame + 0x7)) = (char)uVar2;
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(this + 0x54);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_ARG);
    if (uVar2 == 0) {
      uVar2 = F_00d03a90(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
    }
    if ((code *)*(gen_code32 *)(this + 0x2f4) != ((code *)GEN_TOP(0x0))) {
      uVar2 = ((code *)*(gen_code32 *)(this + 0x2f4))(&(*(undefined4 *)(gen_frame + 0x0)),0x10);
    }
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf65 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d02990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd02990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  code * pcVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_FWD);
  if ((char)uVar2 != '\0') {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xf4)));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x100009;
    uVar2 = (*pcVar1)(this);
    if (uVar2 == 0) {
      uVar2 = F_00d03a20(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
    }
    if ((code *)*(gen_code32 *)(this + 0x2f4) != ((code *)GEN_TOP(0x0))) {
      uVar2 = ((code *)*(gen_code32 *)(this + 0x2f4))(&(*(undefined4 *)(gen_frame + 0x0)),0x10);
    }
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf70 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d02a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd02a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int iVar2;
  
  F_00c49386(param_1,((char *)REFP(0x1131a5c)));
  F_00c49386(param_1,((char *)REFP(0x1131a74)),0);
  F_00c49386(param_1,"\n");
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x98);
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = 0;
  if (0 < *(int *)(this + 0x58)) {
    do {
      bVar1 = F_00d078f0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))) GEN_EDX_ARG,param_1);
      if (bVar1 == 0) {
        if (this[0xb0] != (undefined1)0x0) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  F_00c49386(param_1,((char *)REFP(0x1131a94)));
  F_00c49386(param_1,"\n");
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf71 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d02ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd02ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x12008, 8, 4);
  byte bVar1;
  char * pcVar2;
  byte * pbVar3;
  int iVar4;
  uint uVar5;
  undefined * this_00;
  byte * pbVar6;
  byte * pbVar7;
  bool bVar8;
  
  (*(uint *)(gen_frame + 0x12000)) = 0xd02add;
  (*(uint *)(gen_frame + 0x12000)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  pcVar2 = F_00c5281f((char *)((byte *)(gen_frame + 0x10000)),0x2000,param_1);
  pbVar7 = REFG(byte * PTR32, 0x15d9304);
  do {
    if (pcVar2 == ((char *)GEN_TOP(0x0))) {
      REFG(byte * PTR32, 0x15d9304) = pbVar7;
      return 1;
    }
    pbVar3 = ((byte *)(gen_frame + 0x10000));
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    if (pbVar3[(int)(((byte *)(gen_frame + 0x10000)) + (-1 - (int)(((byte *)(gen_frame + 0x10000)) + 1)))] == 10) {
      pbVar3[(int)(((byte *)(gen_frame + 0x10000)) + (-1 - (int)(((byte *)(gen_frame + 0x10000)) + 1)))] = 0;
    }
    pbVar3 = ((byte *)(gen_frame + 0x10000));
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    if (pbVar3[(int)(((byte *)(gen_frame + 0x10000)) + (-1 - (int)(((byte *)(gen_frame + 0x10000)) + 1)))] == 0xd) {
      pbVar3[(int)(((byte *)(gen_frame + 0x10000)) + (-1 - (int)(((byte *)(gen_frame + 0x10000)) + 1)))] = 0;
    }
    REFG(byte * PTR32, 0x15d9304) = pbVar7;
    if ((((byte *)(gen_frame + 0x10000))[0] != 0) && (((byte *)(gen_frame + 0x10000))[0] != 0x3b)) {
      pbVar7 = ((byte *)(gen_frame + 0x10000));
      while( true ) {
        for (; ((((bVar1 = *pbVar7, bVar1 == 0x20 || (bVar1 == 0x2c)) || (bVar1 == 9)) ||
                ((bVar1 == 0x3d || (bVar1 == 0x5b)))) ||
               ((bVar1 == 0x5d || ((bVar1 == 0x28 || (bVar1 == 0x29)))))); pbVar7 = pbVar7 + 1) {
        }
        if (((char)bVar1 != 0x81) || (pbVar7[1] != 0x40)) break;
        pbVar7 = pbVar7 + 2;
      }
      pbVar3 = pbVar7;
      if (*pbVar7 == 0) {
        REFG(byte * PTR32, 0x15d9304) = ((byte *)GEN_TOP(0x0));
        return 0;
      }
      do {
        bVar1 = *pbVar3;
        if ((((bVar1 == 0x20) || (bVar1 == 0x2c)) || (bVar1 == 9)) ||
           (((bVar1 == 0x3d || (bVar1 == 0x5b)) ||
            ((bVar1 == 0x5d || ((bVar1 == 0x28 || (bVar1 == 0x29)))))))) {
          pbVar6 = pbVar3 + 1;
LAB_00d02c1a: ;
          *pbVar3 = 0;
          goto LAB_00d02c1c;
        }
        if (((char)bVar1 == 0x81) && (pbVar3[1] == 0x40)) {
          pbVar6 = pbVar3 + 2;
          goto LAB_00d02c1a;
        }
        if (((0x80 < bVar1) && (bVar1 < 0xa0)) || ((0xdf < bVar1 && (bVar1 < 0xfd)))) {
          pbVar3 = pbVar3 + 1;
        }
        pbVar3 = pbVar3 + 1;
      } while (*pbVar3 != 0);
      pbVar6 = ((byte *)GEN_TOP(0x0));
LAB_00d02c1c: ;
      pcVar2 = ((char *)REFP(0x1131aac));
      pbVar3 = pbVar7;
      do {
        bVar1 = *pcVar2;
        bVar8 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_00d02c50: ;
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00d02c55;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar8 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_00d02c50;
        pcVar2 = pcVar2 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00d02c55: ;
      if (iVar4 == 0) {
        REFG(byte * PTR32, 0x15d9304) = pbVar6;
        return 1;
      }
      pcVar2 = ((char *)REFP(0x1131ac0));
      pbVar3 = pbVar7;
      do {
        bVar1 = *pcVar2;
        bVar8 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_00d02c84: ;
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00d02c89;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar8 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_00d02c84;
        pcVar2 = pcVar2 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00d02c89: ;
      REFG(byte * PTR32, 0x15d9304) = pbVar6;
      if (iVar4 != 0) {
        pcVar2 = ((char *)REFP(0x1131ad0));
        do {
          bVar1 = *pcVar2;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00d02cb8: ;
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00d02cbd;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00d02cb8;
          pcVar2 = pcVar2 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00d02cbd: ;
        if (iVar4 == 0) {
          if (pbVar6 == ((byte *)GEN_TOP(0x0))) {
            return 0;
          }
          while( true ) {
            for (; ((((bVar1 = *pbVar6, bVar1 == 0x20 || (bVar1 == 0x2c)) || (bVar1 == 9)) ||
                    ((bVar1 == 0x3d || (bVar1 == 0x5b)))) ||
                   ((bVar1 == 0x5d || ((bVar1 == 0x28 || (bVar1 == 0x29)))))); pbVar6 = pbVar6 + 1)
            {
            }
            if (((char)bVar1 != 0x81) || (pbVar6[1] != 0x40)) break;
            pbVar6 = pbVar6 + 2;
          }
          pbVar7 = pbVar6;
          if (*pbVar6 == 0) {
            REFG(byte * PTR32, 0x15d9304) = ((byte *)GEN_TOP(0x0));
            return 0;
          }
          do {
            bVar1 = *pbVar7;
            if (((((bVar1 == 0x20) || (bVar1 == 0x2c)) || (bVar1 == 9)) ||
                ((bVar1 == 0x3d || (bVar1 == 0x5b)))) ||
               ((bVar1 == 0x5d || ((bVar1 == 0x28 || (bVar1 == 0x29)))))) {
              *pbVar7 = 0;
              REFG(byte * PTR32, 0x15d9304) = pbVar7 + 1;
              goto LAB_00d02d75;
            }
            if (((char)bVar1 == 0x81) && (pbVar7[1] == 0x40)) {
              *pbVar7 = 0;
              REFG(byte * PTR32, 0x15d9304) = pbVar7 + 2;
              goto LAB_00d02d75;
            }
            if (((0x80 < bVar1) && (bVar1 < 0xa0)) || ((0xdf < bVar1 && (bVar1 < 0xfd)))) {
              pbVar7 = pbVar7 + 1;
            }
            pbVar7 = pbVar7 + 1;
          } while (*pbVar7 != 0);
          REFG(byte * PTR32, 0x15d9304) = ((byte *)GEN_TOP(0x0));
LAB_00d02d75: ;
          uVar5 = F_00c4c74c(pbVar6);
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x9c))))(this GEN_EDX_ARG,uVar5);
          this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_ARG,uVar5)));
          if (this_00 == ((undefined *)GEN_TOP(0x0))) {
            return 0;
          }
          bVar1 = F_00d08fa0(this_00 GEN_EDX_ARG,param_1);
          if (bVar1 == 0) {
            return 0;
          }
        }
      }
    }
    pcVar2 = F_00c5281f((char *)((byte *)(gen_frame + 0x10000)),0x2000,param_1);
    pbVar7 = REFG(byte * PTR32, 0x15d9304);
  } while( true );
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf42 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d02e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd02e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 != 0) {
    F_00d012c0(this GEN_EDX_FWD,param_1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf43 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d02e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd02e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00d012c0(this GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_00d02e40 */
GEN_LIB_GS GEN_FRAME uint F_00d02e40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd02e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x1131af8)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x1131ad8)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00d02ee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d02ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd02ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x1131c74));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  *((undefined1 *)GEN_TOP(((int)this + 0xb0))) = 1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1b4));
  *((undefined1 *)GEN_TOP(((int)this + 0x1cc))) = 1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2d4));
  uVar1 = *(undefined4 *)&REFG(undefined, 0x113191c);
  *((undefined1 *)GEN_TOP(((int)this + 0x2ec))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x314))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x318))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x31c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = uVar1;
  *((uint *)GEN_TOP(((int)this + 0x40))) = *((uint *)GEN_TOP(((int)this + 0x40))) & 0xfffffffc;
  *((float *)GEN_TOP(((int)this + 0x74))) = (float)(float10)0;
  *((float *)GEN_TOP(((int)this + 0x78))) = (float)(float10)0;
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1131924);
  *((undefined4 *)GEN_TOP(((int)this + 100))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = uVar1;
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1131928);
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  uVar1 = *(undefined4 *)&REFG(undefined, 0x135007c);
  *((undefined1 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 1;
  uVar1 = *(undefined4 *)&REFG(undefined, 0x113192c);
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((int *)GEN_TOP(((int)this + 0x60))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1 * 4,((char *)REFP(0x1131930)),0,0,0x10);
  *((uint *)GEN_TOP(((int)this + 0x94))) = uVar2;
  if (uVar2 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xd02e40));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x11319e0),"",((char *)REFP(0x11319cc)),0x4a,
                    ((char *)REFP(0x113198c)));
  }
  else {
    iVar3 = 0;
    if (0 < *((int *)GEN_TOP(((int)this + 0x60)))) {
      do {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + iVar3 * 4))) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *((int *)GEN_TOP(((int)this + 0x60))));
    }
  }
  iVar3 = 0;
  puVar4 = ((undefined4 *)GEN_TOP(((int)this + 0x134)));
  do {
    *((undefined1 *)GEN_TOP(((int)this + iVar3 + 0x10))) = 0;
    puVar4[-0x20] = 0;
    *puVar4 = 0;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 < 0x20);
  *((uint *)GEN_TOP(((int)this + 0x40))) = *((uint *)GEN_TOP(((int)this + 0x40))) & 0xfffffff3;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x1d0))),0,0x100);
  *((float *)GEN_TOP(((int)this + 0x8c))) = (float)(float10)0;
  *((float *)GEN_TOP(((int)this + 0x90))) = (float)(float10)1;
  *((undefined1 *)GEN_TOP(((int)this + 0x2d0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x2f1))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2f0))) = 0;
  *((float *)GEN_TOP(((int)this + 0x310))) = (float)(float10)0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2f8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2fc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x300))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x304))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x308))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30c))) = 0;
  return (uint)this;
}

/* ref: FUN_00d030f0 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d030f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8)
{
  GEN_ENTER(0xd030f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[8];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  memcpy(&gen_args[3], &gen_a4, sizeof gen_a4);
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  memcpy(&gen_args[7], &gen_a8, sizeof gen_a8);
  GEN_FRAME_DECL_GS(0xa0, 0, 4);
  float fVar1;
  float fVar2;
  int * piVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x98))))(param_1 GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x28)));
  if ((char)uVar4 != '\0') {
    gen_imp_GetClientRect((HWND)param_1[0xc2],&(*(tagRECT *)(gen_frame + 0x68)));
    (*(float *)&gen_args[3]) = (float)(float10)1;
    (*(float *)&gen_args[7]) = (float)(float10)1;
    (*(float *)(gen_frame + 0x24)) = gen_bits2f((*(tagRECT *)(gen_frame + 0x68)).right / 2);
    (*(float *)(gen_frame + 0x20)) = gen_bits2f((*(tagRECT *)(gen_frame + 0x68)).bottom / 2);
    F_00c34320(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG,((float *)(gen_frame + 0x10)),&(*(undefined4 *)&gen_args[0]));
    F_00c34320(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG,((byte *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[4]));
    fVar2 = (*(float *)(gen_frame + 0x24));
    fVar1 = (*(float *)(gen_frame + 0x20));
    (*(float *)(gen_frame + 0x24)) = (float)(int)gen_fl2bits((*(float *)(gen_frame + 0x24)));
    (*(float *)(gen_frame + 0x78)) = (float)((float10)(int)gen_fl2bits(fVar2) +
                      (float10)((float *)(gen_frame + 0x10))[0] * ((float10)GEN_TOD(gen_bits2f(param_1[0xc4]))));
    (*(float *)(gen_frame + 0x7c)) = (float)(float10)0;
    (*(float *)(gen_frame + 0x20)) = (float)(int)gen_fl2bits((*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x80)) = (float)((float10)(int)gen_fl2bits(fVar1) +
                      (float10)(*(float *)(gen_frame + 0x18)) * ((float10)GEN_TOD(gen_bits2f(param_1[0xc4]))));
    (*(float *)(gen_frame + 0x84)) = (float)(float10)1;
    (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))))) * ((float10)GEN_TOD(gen_bits2f(param_1[0xc4]))) +
                      (float10)(int)gen_fl2bits(fVar2))));
    (*(float *)(gen_frame + 0x8c)) = (float)(float10)0;
    (*(float *)(gen_frame + 0x90)) = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))))) * ((float10)GEN_TOD(gen_bits2f(param_1[0xc4]))) +
                      (float10)(int)gen_fl2bits(fVar1))));
    (*(float *)(gen_frame + 0x94)) = (float)(float10)1;
    uVar4 = F_00d042d0(param_1 + 0xc5 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x78)));
  }
  return uVar4;
}

/* ref: FUN_00d03210 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d03210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd03210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x1131c74));
  *((undefined1 *)GEN_TOP(((int)this + 0xb0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x58)))) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + iVar2 * 4)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x58))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x94))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x94))));
    *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  }
  piVar3 = ((int *)GEN_TOP(((int)this + 0xb4)));
  iVar2 = 0x20;
  do {
    if (*piVar3 != 0) {
      F_00406810(*piVar3);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  piVar3 = ((int *)GEN_TOP(((int)this + 0x314)));
  *((undefined1 *)GEN_TOP(((int)this + 0x2d0))) = 0;
  if (((int *)(gen_frame + 0x0)) != piVar3) {
    iVar2 = *piVar3;
    *piVar3 = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x318))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x31c))) = 0;
    if (iVar2 != 0) {
      F_00406810(iVar2);
    }
  }
  if (*((char *)GEN_TOP(((int)this + 0xb0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  }
  if (*piVar3 != 0) {
    F_00406810(*piVar3);
  }
  *piVar3 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x318))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x31c))) = 0;
  gen_imp_DeleteCriticalSection((int)this + 0x2d4);
  gen_imp_DeleteCriticalSection((int)this + 0x1b4);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x1131b44));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf68 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d03330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd03330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  undefined * pLVar1;
  undefined * h;
  HGDIOBJ h_00;
  int iVar2;
  float * pfVar3;
  
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x14)) = (LPCRITICAL_SECTION)(this + 0x98);
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  iVar2 = 0;
  if (0 < *(int *)(this + 0x58)) {
    do {
      F_00d077d0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))) GEN_EDX_ARG,param_1,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  pLVar1 = this + 0x314;
  if (*(int *)(this + 0x314) != *(int *)(this + 0x318)) {
    h = gen_imp_CreatePen(0,1,0xff);
    h_00 = gen_imp_SelectObject(*(HDC *)(this + 0x30c),h);
    pfVar3 = *(float * PTR32 *)pLVar1;
    if (pfVar3 != *(float * PTR32 *)(this + 0x318)) {
      do {
        gen_imp_MoveToEx(*(HDC *)(this + 0x30c),(int)*pfVar3,(int)pfVar3[2],(LPPOINT)0x0);
        gen_imp_LineTo(*(HDC *)(this + 0x30c),(int)pfVar3[4],(int)pfVar3[6]);
        pfVar3 = pfVar3 + 8;
      } while (pfVar3 != *(float * PTR32 *)(this + 0x318));
    }
    gen_imp_SelectObject(*(HDC *)(this + 0x30c),h_00);
    gen_imp_DeleteObject(h);
    if (((undefined1 *)(gen_frame + 0x0)) != pLVar1) {
      iVar2 = *(int *)pLVar1;
      *(int *)pLVar1 = 0;
      *(undefined4 *)(this + 0x318) = 0;
      *(undefined4 *)(this + 0x31c) = 0;
      if (iVar2 != 0) {
        F_00406810(iVar2);
      }
    }
  }
  if (*(char *)&(*(undefined * PTR32 *)(((char *)((*(LPCRITICAL_SECTION *)(gen_frame + 0x14))) + (1) * 24))) != '\0') {
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
  }
  return 0;
}

/* ref: FUN_00d03460 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d03460(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd03460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[2];
  fVar2 = param_3[3];
  fVar3 = param_3[1];
  fVar4 = in_ecx[3];
  fVar5 = in_ecx[1];
  fVar6 = in_ecx[2];
  *param_2 = *in_ecx - *param_3;
  param_2[1] = fVar5 - fVar3;
  param_2[2] = fVar6 - fVar1;
  param_2[3] = fVar4 - fVar2;
  return (uint)param_2;
}

/* ref: FUN_00d034e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d034e0(GEN_P(gen_v12 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd034e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v12 * in_ecx = (gen_v12 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 in_XMM4 [16] = {0};
  undefined1 auVar13 [16];
  
  fVar1 = *((float *)GEN_TOP((*in_ecx + 8)));
  fVar2 = *((float *)GEN_TOP(in_ecx[1]));
  fVar3 = *((float *)GEN_TOP(*in_ecx));
  fVar4 = *((float *)GEN_TOP((*in_ecx + 4)));
  fVar5 = fVar3 * fVar3;
  fVar6 = gen_bits2f((uint)((ulonglong)*((undefined8 *)GEN_TOP(*in_ecx)) >> 0x20)) * fVar4;
  fVar7 = ((unsigned int)gen_vbits((*in_ecx), 12, 64, 4)) * fVar1;
  fVar8 = fVar2 * fVar2;
  fVar9 = (fVar7 + fVar5) + fVar6;
  fVar10 = (fVar5 + fVar6) + fVar7;
  fVar5 = (fVar6 + fVar7) + fVar5;
  (*(undefined4 *)((char *)&auVar13 + 4)) = (undefined4)gen_fl2bits(fVar10);
  (*(undefined4 *)((char *)&auVar13 + 0)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar13 + 8)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)&auVar13 + 12)) = (undefined4)gen_fl2bits((fVar8 + fVar8) + fVar8);
  gen_rsqrtps(&(auVar13), &(in_XMM4), &(auVar13));
  fVar12 = (*(float *)((char *)&auVar13 + 0));
  fVar14 = (*(float *)((char *)&auVar13 + 4));
  fVar15 = (*(float *)((char *)&auVar13 + 8));
  fVar8 = *(float *)&REFG(undefined, 0x1131b34) * fVar14;
  fVar11 = *(float *)&REFG(undefined, 0x1131b38) * fVar15;
  fVar6 = *(float *)&REFG(undefined, 0x1131b24) - (fVar14 * fVar10) * fVar14;
  fVar7 = *(float *)&REFG(undefined, 0x1131b28) - (fVar15 * fVar5) * fVar15;
  *param_2 = (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1131b20) - (fVar12 * fVar9) * fVar12) *
                                (*(float *)&REFG(undefined, 0x1131b30) * fVar12) + fVar12) * fVar3) &
             -(uint)(0.0 < fVar9) | ~-(uint)(0.0 < fVar9) & (uint)gen_fl2bits(fVar3);
  param_2[1] = (uint)gen_fl2bits((fVar6 * fVar8 + fVar14) * fVar4) & -(uint)(0.0 < fVar10) |
               ~-(uint)(0.0 < fVar10) & (uint)gen_fl2bits(fVar4);
  param_2[2] = (uint)gen_fl2bits((fVar7 * fVar11 + fVar15) * fVar1) & -(uint)(0.0 < fVar5) |
               ~-(uint)(0.0 < fVar5) & (uint)gen_fl2bits(fVar1);
  param_2[3] = (uint)gen_fl2bits(fVar2);
  return (uint)param_2;
}

/* ref: FUN_00d035a0 */
GEN_LIB GEN_FRAME ushort F_00d035a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd035a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return (ushort)param_1 << 8 | (ushort)param_1 >> 8;
}

/* ref: FUN_00d035c0 */
GEN_LIB GEN_FRAME uint F_00d035c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd035c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}

/* ref: FUN_00d035d0 */
GEN_LIB GEN_FRAME float10 F_00d035d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd035d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return ((float10)GEN_TOD(gen_bits2f(param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 |
                             param_1 << 0x18)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ILayoutManager::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d035f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd035f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[75])REFP(0x1131b44));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf20 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d03630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd03630u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((float *)GEN_TOP((in_ecx + 0x7c))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0x80))) = param_3;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf22 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d03650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd03650u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((float *)GEN_TOP((in_ecx + 0x84))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0x88))) = param_3;
  return;
}

/* ref: FUN_00d03680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d03680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd03680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  F_00cbbd90(param_1 GEN_EDX_FWD,(int)this + 8);
  return (uint)param_1;
}

/* ref: FUN_00d036a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d036a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd036a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00cbbdc0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]));
  F_00cbbdb0(&(*(undefined4 *)&gen_args[0]) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d036c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d036c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd036c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  uVar1 = F_00cbbd70(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  uVar1 = F_00cbbdc0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar1);
  F_00cbbdb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d03750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d03750(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd03750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00d037d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d037d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd037d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00d037f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d037f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd037f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d03830 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d03830(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd03830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1 << 5,((char *)REFP(0x112eaa8)),0,0,0x10);
  return uVar1;
}

/* ref: FUN_00d038a0 */
GEN_LIB GEN_FRAME ushort F_00d038a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd038a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return (ushort)param_1 << 8 | (ushort)param_1 >> 8;
}

/* ref: FUN_00d038c0 */
GEN_LIB GEN_FRAME uint F_00d038c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd038c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}

/* ref: FUN_00d038e0 */
GEN_LIB GEN_FRAME float10 F_00d038e0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xd038e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return ((float10)GEN_TOD(gen_bits2f((uint)gen_fl2bits(param_1) >> 0x18 |
                             ((uint)gen_fl2bits(param_1) & 0xff0000) >> 8 |
                             ((uint)gen_fl2bits(param_1) & 0xff00) << 8 |
                             (int)gen_fl2bits(param_1) << 0x18)));
}

/* ref: FUN_00d03900 */
GEN_LIB GEN_FRAME uint F_00d03900(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd03900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00d03920 */
GEN_LIB GEN_FRAME uint F_00d03920(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd03920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00d03930 */
GEN_LIB GEN_FRAME uint F_00d03930(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd03930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00d03950 */
GEN_LIB GEN_FRAME uint F_00d03950(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd03950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00d03960 */
GEN_LIB GEN_FRAME uint F_00d03960(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd03960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00d03970 */
GEN_LIB GEN_FRAME uint F_00d03970(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd03970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00d03980 */
GEN_LIB GEN_FRAME uint F_00d03980(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd03980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00d03990 */
GEN_LIB GEN_FRAME uint F_00d03990(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd03990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00d039a0 */
GEN_LIB GEN_FRAME byte F_00d039a0(void)
{
  GEN_ENTER(0xd039a0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00d039b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d039b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd039b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[7];
  return (uint)this;
}

/* ref: FUN_00d03a00 */
GEN_LIB GEN_FRAME uint F_00d03a00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd03a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00d03a20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d03a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd03a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  *(ushort *)param_1 = *(ushort *)((int)(uintptr_t)this) << 8 | *(ushort *)((int)(uintptr_t)this) >> 8;
  *((ushort *)GEN_TOP(((int)param_1 + 2))) = *((ushort *)GEN_TOP(((int)this + 2))) << 8 | *((ushort *)GEN_TOP(((int)this + 2))) >> 8;
  iVar3 = 3;
  puVar2 = param_1;
  do {
    puVar2 = puVar2 + 1;
    uVar1 = *((uint *)GEN_TOP((((int)this - (int)param_1) + (int)puVar2)));
    uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    *puVar2 = uVar1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_00d03a90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d03a90(GEN_P(ushort * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd03a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  *((ushort *)GEN_TOP(param_2)) = *param_1 << 8 | *param_1 >> 8;
  *((ushort *)GEN_TOP((param_2 + 2))) = param_1[1] << 8 | param_1[1] >> 8;
  *((char *)GEN_TOP((param_2 + 4))) = (char)param_1[2];
  *((undefined1 *)GEN_TOP((param_2 + 5))) = *((undefined1 *)GEN_TOP(((int)param_1 + 5)));
  *((char *)GEN_TOP((param_2 + 6))) = (char)param_1[3];
  *((undefined1 *)GEN_TOP((param_2 + 7))) = *((undefined1 *)GEN_TOP(((int)param_1 + 7)));
  uVar1 = *(uint *)(param_1 + 4);
  *((uint *)GEN_TOP((param_2 + 8))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 6);
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((uint *)GEN_TOP((param_2 + 0xc))) = uVar1;
  return uVar1;
}

/* ref: FUN_00d03b30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d03b30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd03b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d03b60 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d03b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd03b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00d03b90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d03b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd03b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 5;
  if (0x7ffffff - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00d03be0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d03be0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd03be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00d03bf0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d03bf0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd03bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00d03c00 */
GEN_LIB GEN_FRAME uint F_00d03c00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd03c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d03c20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d03c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd03c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[7];
  return (uint)this;
}

/* ref: FUN_00d03c60 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d03c60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd03c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
  }
  return (uint)param_1;
}

/* ref: FUN_00d03ca0 */
GEN_LIB GEN_FRAME uint F_00d03ca0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd03ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 8) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[6] = puVar2[6];
    puVar1[7] = puVar2[7];
    puVar1 = puVar1 + 8;
  }
  return (uint)puVar1;
}

/* ref: FUN_00d03cf0 */
GEN_LIB GEN_FRAME uint F_00d03cf0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd03cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
  }
  return (uint)param_1;
}

/* ref: FUN_00d03d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d03d40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd03d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00d03d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d03d50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd03d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00d03d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d03d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd03d70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  
  iVar1 = *(int *)this;
  *param_1 = iVar1;
  *(int *)this = iVar1 + 0x20;
  return (uint)param_1;
}

/* ref: FUN_00d03d90 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d03d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd03d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00d03dc0 */
GEN_LIB GEN_FRAME uint F_00d03dc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd03dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
    param_2[5] = param_3[5];
    param_2[6] = param_3[6];
    param_2[7] = param_3[7];
  }
  return (uint)param_2;
}

/* ref: FUN_00d03e00 */
GEN_LIB GEN_FRAME uint F_00d03e00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd03e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00d03ca0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00d03e20 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d03e20(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd03e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
  }
  return (uint)param_1;
}

/* ref: FUN_00d03e60 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d03e60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd03e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
  }
  return (uint)param_1;
}

/* ref: FUN_00d03ec0 */
GEN_LIB GEN_FRAME uint F_00d03ec0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd03ec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
    param_2[5] = param_3[5];
    param_2[6] = param_3[6];
    param_2[7] = param_3[7];
  }
  return (uint)param_2;
}

/* ref: FUN_00d03f00 */
GEN_LIB GEN_FRAME uint F_00d03f00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd03f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
    param_2[5] = param_3[5];
    param_2[6] = param_3[6];
    param_2[7] = param_3[7];
  }
  return (uint)param_2;
}

/* ref: FUN_00d03f50 */
GEN_LIB GEN_FRAME unsigned int F_00d03f50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd03f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 8) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[6] = puVar2[6];
      puVar1[7] = puVar2[7];
    }
    puVar1 = puVar1 + 8;
  }
  return 0;
}

/* ref: FUN_00d03fb0 */
GEN_LIB GEN_FRAME unsigned int F_00d03fb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd03fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 in_ECX = 0;
  
  F_00d03f50(param_1,param_2,param_3,param_4,0,in_ECX);
  return;
}

/* ref: FUN_00d03ff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d03ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd03ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00d03ca0(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00d04030 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d04030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd04030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00d03f50(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return;
}

/* ref: FUN_00d04060 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d04060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd04060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00d04090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd04090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint in_EAX = 0;
  
  if (0x7ffffff < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 5) < param_1) {
    in_EAX = F_00d03830(param_1);
    F_00d03f50(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),in_EAX,(int)this + 0xc,0,in_EAX)
    ;
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = (iVar2 - iVar1 & 0xffffffe0U) + in_EAX;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x20 + in_EAX;
    *(uint *)this = in_EAX;
  }
  return in_EAX;
}

/* ref: FUN_00d04110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd04110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (*(uint *)this != uVar1) {
    uVar1 = F_00d03ca0(uVar1,uVar1,*(uint *)this,this);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00d04140 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d04140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd04140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00d04170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd04170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 5;
  if (0x7ffffffU - param_1 < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 5;
  if (uVar2 < uVar1) {
    if (0x7ffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar2 + (uVar2 >> 1);
    }
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00d04090(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00d041d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d041d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd041d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar4) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      puVar4 = ((undefined4 *)GEN_TOP(F_00d04170(this GEN_EDX_FWD,1)));
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar4 = ((undefined4 *)GEN_TOP((((int)param_1 - (int)puVar1 & 0xffffffe0U) + *(int *)this)));
      *puVar2 = *puVar4;
      puVar2[1] = puVar4[1];
      puVar2[2] = puVar4[2];
      puVar2[3] = puVar4[3];
      puVar2[4] = puVar4[4];
      puVar2[5] = puVar4[5];
      puVar2[6] = puVar4[6];
      uVar3 = puVar4[7];
      puVar2[7] = uVar3;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x20;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00d04170(this GEN_EDX_ARG,1);
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
      puVar4[2] = param_1[2];
      puVar4[3] = param_1[3];
      puVar4[4] = param_1[4];
      puVar4[5] = param_1[5];
      puVar4[6] = param_1[6];
      puVar4[7] = param_1[7];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x20;
  return (uint)puVar4;
}

/* ref: FUN_00d04290 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d04290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd04290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00d042d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d042d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd042d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar4) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      puVar4 = ((undefined4 *)GEN_TOP(F_00d04170(this GEN_EDX_FWD,1)));
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar4 = ((undefined4 *)GEN_TOP((((int)param_1 - (int)puVar1 & 0xffffffe0U) + *(int *)this)));
      *puVar2 = *puVar4;
      puVar2[1] = puVar4[1];
      puVar2[2] = puVar4[2];
      puVar2[3] = puVar4[3];
      puVar2[4] = puVar4[4];
      puVar2[5] = puVar4[5];
      puVar2[6] = puVar4[6];
      uVar3 = puVar4[7];
      puVar2[7] = uVar3;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x20;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00d04170(this GEN_EDX_ARG,1);
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
      puVar4[2] = param_1[2];
      puVar4[3] = param_1[3];
      puVar4[4] = param_1[4];
      puVar4[5] = param_1[5];
      puVar4[6] = param_1[6];
      puVar4[7] = param_1[7];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x20;
  return (uint)puVar4;
}

/* ref: FUN_00d04390 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d04390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd04390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    if (*(int *)this != 0) {
      F_00406810(*(int *)this);
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d043e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd043e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x34))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d043f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd043f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x34)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d04400(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd04400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x38)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04410(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd04410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x38))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf13 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d04420(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd04420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x3c)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04430(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd04430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x3c))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf15 */
GEN_LIB GEN_NOFRAME float10 GEN_THISCALL F_00d04440(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd04440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x50)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf16 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d04450(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd04450u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x50))) = param_2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf17 */
GEN_LIB GEN_NOFRAME float10 GEN_THISCALL F_00d04460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd04460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x54)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf18 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d04470(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd04470u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x54))) = param_2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04480(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd04480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x7c)));
  *param_3 = *((undefined4 *)GEN_TOP((in_ecx + 0x80)));
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d044a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd044a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x84)));
  *param_3 = *((undefined4 *)GEN_TOP((in_ecx + 0x88)));
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf63 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d044c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd044c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x2f8))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf60 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d044d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd044d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x2f0))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf61 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d044e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd044e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((in_ecx + 0x2f0)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf56 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d044f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd044f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x2f1))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf57 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d04500(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd04500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x2f1)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf58 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d04510(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd04510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x2f2))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf59 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d04520(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd04520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x2f2)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf62 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd04530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x2f4))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf73 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04540(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd04540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x2fc))) = param_2;
  return param_2;
}

/* ref: FUN_00d04550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd04550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (this != param_1) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00d04590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd04590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    if (*(int *)this != 0) {
      F_00406810(*(int *)this);
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00d045e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d045e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd045e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  if (this != param_1) {
    uVar1 = *(undefined4 *)this;
    *(undefined4 *)this = *param_1;
    *param_1 = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    param_1[1] = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    param_1[2] = uVar1;
  }
  return (uint)param_1;
}

/* ref: FUN_00d04620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd04620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int iVar1;
  undefined1 * puVar2;
  
  puVar2 = ((undefined1 *)(gen_frame + 0x0));
  if (puVar2 != this) {
    iVar1 = *(int *)this;
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    puVar2 = ((undefined1 *)GEN_TOP(0x0));
    if (iVar1 != 0) {
      puVar2 = ((undefined1 *)GEN_TOP(F_00406810(iVar1)));
    }
  }
  return (uint)puVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04650(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd04650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00d03210(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00d04680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd04680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1131df0));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00d046c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d046c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd046c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1131df0));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  return (uint)this;
}

/* ref: FUN_00d046e0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d046e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd046e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1131df0));
  return;
}

/* ref: FUN_00d046f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d046f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd046f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP(((int)param_1 + 8)));
  }
  return (uint)this;
}

/* ref: FUN_00d04720 */
GEN_LIB GEN_FRAME byte F_00d04720(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd04720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((param_1 + 4))) == *((int *)GEN_TOP((param_2 + 4)));
}

/* ref: FUN_00d04740 */
GEN_LIB GEN_FRAME byte F_00d04740(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd04740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((param_1 + 4))) != *((int *)GEN_TOP((param_2 + 4)));
}

/* ref: FUN_00d04760 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d04760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd04760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  undefined * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa0))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      bVar1 = F_00d06530(this_00 GEN_EDX_ARG,param_1);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00d047d0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d047d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd047d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  undefined * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa0))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      bVar1 = F_00d06580(this_00 GEN_EDX_ARG,param_1);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00d04840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd04840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa0))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00d05480(this_00 GEN_EDX_ARG,param_1);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00d048b0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d048b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd048b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined * this;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0xa0))))
                             (*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 4))))));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d05170(this GEN_EDX_ARG,(uint)param_2,param_3);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d04920 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d04920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd04920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  undefined * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa0))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      bVar1 = F_00d051c0(this_00 GEN_EDX_ARG,param_1);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00d04990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd04990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * this_00;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa0))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00d07c70(this_00 GEN_EDX_ARG,param_1,param_2,param_3,0,0,1);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00d04a10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d04a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd04a10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa0))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d057a0(this_00 GEN_EDX_ARG,param_1,param_2);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d04a80 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d04a80(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd04a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  undefined * this;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_3)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0xa0))))
                             (*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 4))))));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d057a0(this GEN_EDX_ARG,param_2,local_c);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d04b20 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d04b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd04b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa0))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d059d0(this_00 GEN_EDX_ARG,param_1,0);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d04b90 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d04b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd04b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa0))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d06db0(this_00 GEN_EDX_ARG,param_1,param_2);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d04c00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd04c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined * this_00;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = REFG(undefined4, 0x11299fc);
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa0))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      if (param_2 != 0) {
        F_00d05fb0(this_00 GEN_EDX_ARG,param_1,param_2);
      }
      if (0 < param_3) {
        F_00d07700(this_00 GEN_EDX_ARG,param_1,param_3);
      }
      F_00d05e30(this_00 GEN_EDX_ARG,param_1,1);
      uVar1 = REFG(undefined4, 0x11299e4);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00d04ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04ca0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd04ca0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  undefined * this;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = REFG(undefined4, 0x11299fc);
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0xa0))))
                             (*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 4))))));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      if (param_6 != 0) {
        F_00d05fb0(this GEN_EDX_ARG,param_2,param_6);
      }
      if (0 < param_7) {
        F_00d07700(this GEN_EDX_ARG,param_2,param_7);
      }
      uVar1 = F_00d05ee0(this GEN_EDX_ARG,param_2,param_3,param_4,param_5);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00d04d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04d50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd04d50u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  uint extraout_EAX = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0xa0))))
                      (*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 4))));
    if (uVar1 != 0) {
      F_00d06010(uVar1 GEN_EDX_ARG,param_2,param_3,param_4);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00d04dc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d04dc0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd04dc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_4)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = F_00d04d50(param_1 GEN_EDX_FWD,param_2,param_3,local_c);
  return uVar1;
}

/* ref: FUN_00d04e10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d04e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd04e10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa0))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d061d0(this_00 GEN_EDX_ARG,param_1,param_2);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d04e80 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d04e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd04e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa0))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d06220(this_00 GEN_EDX_ARG,param_1,param_2);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d04ef0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d04ef0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd04ef0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0xa0))))
                      (*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 4))));
    if (uVar1 != 0) {
      F_00d068c0(uVar1 GEN_EDX_ARG,param_2,param_3,param_4);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d04f60 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d04f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd04f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa0))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d069c0(this_00 GEN_EDX_ARG,param_1,param_2);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d04fd0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d04fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd04fd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa0))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d07000(this_00 GEN_EDX_ARG,param_1,param_2);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d05040 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d05040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd05040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa0))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))))));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d07050(this_00 GEN_EDX_ARG,param_1,param_2);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d050b0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d050b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd050b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  float10 fVar2;
  float local_8;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  local_8 = (float)(float10)0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xcc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa0))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))));
    if (uVar1 != 0) {
      fVar2 = F_00d06a00(uVar1 GEN_EDX_ARG,param_1);
      local_8 = (float)fVar2;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return local_8;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PageController::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d05120(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd05120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1131df0));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00d05150 */
GEN_LIB GEN_FRAME unsigned int F_00d05150(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd05150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00d05170 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d05170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd05170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (param_2 == -1) {
    *((undefined1 *)GEN_TOP(((int)this + 0x18))) = (undefined1)param_1;
    return;
  }
  if (param_2 < 0x40) {
    uVar1 = 1 << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2);
    if (param_1 != 0) {
      *((uint *)GEN_TOP(((int)this + 0x20))) = *((uint *)GEN_TOP(((int)this + 0x20))) | uVar1;
      *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) | (int)uVar1 >> 0x1f;
      return;
    }
    *((uint *)GEN_TOP(((int)this + 0x20))) = *((uint *)GEN_TOP(((int)this + 0x20))) & ~uVar1;
    *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) & ~((int)uVar1 >> 0x1f);
  }
  return;
}

/* ref: FUN_00d051c0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d051c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd051c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 == -1) {
    return *((char *)GEN_TOP(((int)this + 0x18))) != '\0';
  }
  if (param_1 < 0x40) {
    return ((ulonglong)(byte)param_1 < 0x40) *
           (char)(*((ulonglong *)GEN_TOP(((int)this + 0x20))) >> (ulonglong)(byte)param_1) & 1;
  }
  return 0;
}

/* ref: FUN_00d05200 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d05200(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd05200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  if (param_3 == -1) {
    *((char *)GEN_TOP((param_1 + 0x19))) = param_2;
    return;
  }
  if (param_3 < 0x40) {
    uVar1 = 1 << GEN_SHC((byte)param_3, (unsigned int)(uintptr_t)param_3);
    if (param_2 != '\0') {
      *((uint *)GEN_TOP((param_1 + 0x20))) = *((uint *)GEN_TOP((param_1 + 0x20))) | uVar1;
      *((uint *)GEN_TOP((param_1 + 0x24))) = *((uint *)GEN_TOP((param_1 + 0x24))) | (int)uVar1 >> 0x1f;
      return;
    }
    *((uint *)GEN_TOP((param_1 + 0x20))) = *((uint *)GEN_TOP((param_1 + 0x20))) & ~uVar1;
    *((uint *)GEN_TOP((param_1 + 0x24))) = *((uint *)GEN_TOP((param_1 + 0x24))) & ~((int)uVar1 >> 0x1f);
  }
  return;
}

/* ref: FUN_00d05250 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d05250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd05250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 == -1) {
    return *((char *)GEN_TOP(((int)this + 0x19))) != '\0';
  }
  if (param_1 < 0x40) {
    return ((ulonglong)(byte)param_1 < 0x40) *
           (char)(*((ulonglong *)GEN_TOP(((int)this + 0x28))) >> (ulonglong)(byte)param_1) & 1;
  }
  return 0;
}

/* ref: FUN_00d05290 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d05290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd05290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  }
  return 0;
}

/* ref: FUN_00d052b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d052b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd052b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  }
  return 0;
}

/* ref: FUN_00d052f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d052f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd052f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  for (puVar1 = ((undefined4 *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,0))); puVar1 != ((undefined4 *)GEN_TOP(0x0));
      puVar1 = ((undefined4 *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,puVar1)))) {
    F_00d21010(*puVar1 GEN_EDX_ARG,(undefined1)param_1,param_2);
  }
  uVar2 = 0;
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00d05360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d05360(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd05360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_3)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = F_00d052f0(param_1 GEN_EDX_FWD,param_2,local_c);
  return uVar1;
}

/* ref: FUN_00d053b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d053b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd053b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * this_00;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_1 < *((int *)GEN_TOP(((int)this + 0x48)))) {
    this_00 = ((undefined *)GEN_TOP(((int)this + 0x40)));
    iVar1 = param_1;
  }
  else {
    iVar1 = param_1 - *((int *)GEN_TOP(((int)this + 0x48)));
    if (iVar1 < *((int *)GEN_TOP(((int)this + 0x58)))) {
      this_00 = ((undefined *)GEN_TOP(((int)this + 0x50)));
    }
    else {
      iVar1 = iVar1 - *((int *)GEN_TOP(((int)this + 0x58)));
      if (*((int *)GEN_TOP(((int)this + 0x68))) <= iVar1) {
        if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return 0xffffffff;
      }
      this_00 = ((undefined *)GEN_TOP(((int)this + 0x60)));
    }
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00d2ffd0(this_00 GEN_EDX_ARG,iVar1)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar2)) + 0x48))))(((int *)GEN_TOP(*puVar2)) GEN_EDX_ARG,param_2,param_3);
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar3;
}

/* ref: FUN_00d05440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d05440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3), GEN_P(uint * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd05440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a4;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x48)));
  if (*((int *)GEN_TOP(((int)this + 0x30))) < iVar1) {
    *((int *)GEN_TOP(((int)this + 0x30))) = iVar1;
  }
  *param_1 = iVar1;
  *param_2 = *((undefined4 *)GEN_TOP(((int)this + 0x30)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x58)));
  if (*((int *)GEN_TOP(((int)this + 0x34))) < iVar1) {
    *((int *)GEN_TOP(((int)this + 0x34))) = iVar1;
  }
  *param_3 = iVar1;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x34)));
  *param_4 = uVar2;
  return uVar2;
}

/* ref: FUN_00d05480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d05480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd05480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint * puVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  for (puVar1 = ((uint *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,0))); puVar1 != ((uint *)GEN_TOP(0x0));
      puVar1 = ((uint *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,puVar1)))) {
    uVar2 = *puVar1;
    if (*((int *)GEN_TOP((uVar2 + 0x20))) == param_1) goto LAB_00d05522;
  }
  for (puVar1 = ((uint *)GEN_TOP(F_00d2ff90((int)this + 0x50 GEN_EDX_ARG,0))); puVar1 != ((uint *)GEN_TOP(0x0));
      puVar1 = ((uint *)GEN_TOP(F_00d2ff90((int)this + 0x50 GEN_EDX_ARG,puVar1)))) {
    uVar2 = *puVar1;
    if (*((int *)GEN_TOP((uVar2 + 0x20))) == param_1) goto LAB_00d05522;
  }
  puVar1 = ((uint *)GEN_TOP(F_00d2ff90((int)this + 0x60 GEN_EDX_ARG,0)));
  while( true ) {
    if (puVar1 == ((uint *)GEN_TOP(0x0))) {
      if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
      return 0;
    }
    uVar2 = *puVar1;
    if (*((int *)GEN_TOP((uVar2 + 0x20))) == param_1) break;
    puVar1 = ((uint *)GEN_TOP(F_00d2ff90((int)this + 0x60 GEN_EDX_ARG,puVar1)));
  }
LAB_00d05522: ;
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar2;
}

/* ref: FUN_00d05540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d05540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd05540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar1 = F_00d05480(this GEN_EDX_ARG,param_1);
  if (uVar1 == 0) {
    if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  F_00cbbd90(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar1 + 8);
  uVar1 = F_00cbbff0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00cbbdb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar1;
}

/* ref: FUN_00d055c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d055c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd055c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  char cVar1;
  undefined4 * puVar2;
  code * pcVar3;
  int * piVar4;
  LPCRITICAL_SECTION p_Var5;
  uint uVar6;
  LPCRITICAL_SECTION p_Var7;
  LPCRITICAL_SECTION extraout_EAX = 0;
  
  if ((param_3 != '\0') && (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0')) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
  }
  for (piVar4 = ((int *)GEN_TOP(F_00d2ff90((int)param_1 + 0x40 GEN_EDX_ARG,0))); piVar4 != ((int *)GEN_TOP(0x0));
      piVar4 = ((int *)GEN_TOP(F_00d2ff90((int)param_1 + 0x40 GEN_EDX_ARG,piVar4)))) {
    if (*((int *)GEN_TOP((*piVar4 + 0x20))) == param_2) {
      F_00d095a0(param_1 GEN_EDX_ARG,*piVar4);
      F_00d2ff30(((undefined *)GEN_TOP(((int)param_1 + 0x40))) GEN_EDX_ARG,piVar4);
      p_Var7 = (LPCRITICAL_SECTION)((int)param_1 + 0x88);
      *((char *)GEN_TOP(((int)param_1 + 0xa0))) = *((char *)GEN_TOP(((int)param_1 + 0x84)));
      if (*((char *)GEN_TOP(((int)param_1 + 0x84))) != '\0') {
        gen_imp_EnterCriticalSection(p_Var7);
      }
      p_Var5 = *((LPCRITICAL_SECTION *)GEN_TOP(((int)param_1 + 0x74)));
      *piVar4 = (int)p_Var5;
      *((int * PTR32 *)GEN_TOP(((int)param_1 + 0x74))) = piVar4;
      cVar1 = *((char *)GEN_TOP(((int)param_1 + 0xa0)));
      pcVar3 = (((code *)GEN_TOP(gen_imp_LeaveCriticalSection)));
      goto joined_r0x00d056b0;
    }
  }
  for (piVar4 = ((int *)GEN_TOP(F_00d2ff90((int)param_1 + 0x50 GEN_EDX_ARG,0))); piVar4 != ((int *)GEN_TOP(0x0));
      piVar4 = ((int *)GEN_TOP(F_00d2ff90((int)param_1 + 0x50 GEN_EDX_ARG,piVar4)))) {
    if (*((int *)GEN_TOP((*piVar4 + 0x20))) == param_2) {
      if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0xc))) + 0x2ec))) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(*((int *)GEN_TOP(((int)param_1 + 0xc))) + 0x2d4));
      }
      puVar2 = ((undefined4 *)GEN_TOP(*piVar4));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
      F_00d2ff30(((undefined *)GEN_TOP(((int)param_1 + 0x50))) GEN_EDX_ARG,piVar4);
      *((char *)GEN_TOP(((int)param_1 + 0xa0))) = *((char *)GEN_TOP(((int)param_1 + 0x84)));
      if (*((char *)GEN_TOP(((int)param_1 + 0x84))) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x88));
      }
      *piVar4 = *((int *)GEN_TOP(((int)param_1 + 0x74)));
      *((int * PTR32 *)GEN_TOP(((int)param_1 + 0x74))) = piVar4;
      pcVar3 = (((code *)GEN_TOP(gen_imp_LeaveCriticalSection)));
      if (*((char *)GEN_TOP(((int)param_1 + 0xa0))) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x88));
      }
      p_Var7 = (LPCRITICAL_SECTION)(*((int *)GEN_TOP(((int)param_1 + 0xc))) + 0x2d4);
      cVar1 = *((char *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0xc))) + 0x2ec)));
      p_Var5 = p_Var7;
joined_r0x00d056b0: ;
      if (cVar1 != '\0') {
        p_Var5 = (LPCRITICAL_SECTION)(*pcVar3)(p_Var7);
      }
      if (param_3 != '\0') {
        if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
          uVar6 = (*pcVar3)((int)param_1 + 0xd8U);
          return uVar6;
        }
        return (int)param_1 + 0xd8U;
      }
      return (uint)p_Var5;
    }
  }
  piVar4 = ((int *)GEN_TOP(F_00d2ff90((int)param_1 + 0x60 GEN_EDX_ARG,0)));
  p_Var7 = (LPCRITICAL_SECTION)0x0;
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    do {
      puVar2 = ((undefined4 *)GEN_TOP(*piVar4));
      if (puVar2[8] == param_2) {
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        }
        F_00d2ff30(((undefined *)GEN_TOP(((int)param_1 + 0x60))) GEN_EDX_ARG,piVar4);
        p_Var7 = (LPCRITICAL_SECTION)F_00cc6810(((undefined *)GEN_TOP(((int)param_1 + 0x70))) GEN_EDX_ARG,piVar4);
        goto LAB_00d0576f;
      }
      piVar4 = ((int *)GEN_TOP(F_00d2ff90((int)param_1 + 0x60 GEN_EDX_ARG,piVar4)));
    } while (piVar4 != ((int *)GEN_TOP(0x0)));
    p_Var7 = (LPCRITICAL_SECTION)0x0;
  }
LAB_00d0576f: ;
  if ((param_3 != '\0') &&
     (p_Var7 = (LPCRITICAL_SECTION)((int)param_1 + 0xd8), *((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0')) {
    gen_imp_LeaveCriticalSection(p_Var7);
    p_Var7 = extraout_EAX;
  }
  return (uint)p_Var7;
}

/* ref: FUN_00d057a0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d057a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd057a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  for (piVar3 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,0))); piVar3 != ((int *)GEN_TOP(0x0));
      piVar3 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,piVar3)))) {
    iVar1 = *piVar3;
    if (*((int *)GEN_TOP((iVar1 + 0x20))) == param_1) {
      *((undefined4 *)GEN_TOP((iVar1 + 0x38))) = param_2;
      *((undefined1 *)GEN_TOP((iVar1 + 0x34))) = 0;
      F_00d095a0(this GEN_EDX_ARG,*piVar3);
      F_00d2ff30(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,piVar3);
      *((char *)GEN_TOP(((int)this + 0xa0))) = *((char *)GEN_TOP(((int)this + 0x84)));
      if (*((char *)GEN_TOP(((int)this + 0x84))) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
      }
      *piVar3 = *((int *)GEN_TOP(((int)this + 0x74)));
      *((int * PTR32 *)GEN_TOP(((int)this + 0x74))) = piVar3;
      if (*((char *)GEN_TOP(((int)this + 0xa0))) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
      }
      if (*((char *)GEN_TOP(((int)this + 0xf0))) == '\0') {
        return 0;
      }
      return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
    }
  }
  for (piVar3 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x50 GEN_EDX_ARG,0))); piVar3 != ((int *)GEN_TOP(0x0));
      piVar3 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x50 GEN_EDX_ARG,piVar3)))) {
    if (*((int *)GEN_TOP((*piVar3 + 0x20))) == param_1) {
      if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x2ec))) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(*((int *)GEN_TOP(((int)this + 0xc))) + 0x2d4));
      }
      puVar2 = ((undefined4 *)GEN_TOP(*piVar3));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
      F_00d2ff30(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,piVar3);
      *((char *)GEN_TOP(((int)this + 0xa0))) = *((char *)GEN_TOP(((int)this + 0x84)));
      if (*((char *)GEN_TOP(((int)this + 0x84))) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
      }
      *piVar3 = *((int *)GEN_TOP(((int)this + 0x74)));
      *((int * PTR32 *)GEN_TOP(((int)this + 0x74))) = piVar3;
      if (*((char *)GEN_TOP(((int)this + 0xa0))) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
      }
      if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x2ec))) != '\0') {
        gen_imp_LeaveCriticalSection(*((int *)GEN_TOP(((int)this + 0xc))) + 0x2d4);
      }
      if (*((char *)GEN_TOP(((int)this + 0xf0))) == '\0') {
        return 0;
      }
      return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
    }
  }
  piVar3 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x60 GEN_EDX_ARG,0)));
  do {
    if (piVar3 == ((int *)GEN_TOP(0x0))) {
LAB_00d0595e: ;
      if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
      return 0;
    }
    puVar2 = ((undefined4 *)GEN_TOP(*piVar3));
    if (puVar2[8] == param_1) {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
      F_00d2ff30(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,piVar3);
      F_00cc6810(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,piVar3);
      goto LAB_00d0595e;
    }
    piVar3 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x60 GEN_EDX_ARG,piVar3)));
  } while( true );
}

/* ref: FUN_00d05980 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d05980(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd05980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_3)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  F_00d057a0(param_1 GEN_EDX_FWD,param_2,local_c);
  return;
}

/* ref: FUN_00d059d0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d059d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd059d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  byte bVar3;
  int * piVar4;
  int * piVar5;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  piVar4 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,0)));
  if (param_1 == 0xffffffff) {
    while (piVar4 != ((int *)GEN_TOP(0x0))) {
      iVar1 = *piVar4;
      *((undefined4 *)GEN_TOP((iVar1 + 0x38))) = param_2;
      *((undefined1 *)GEN_TOP((iVar1 + 0x34))) = 0;
      puVar2 = ((undefined4 *)GEN_TOP(*piVar4));
      if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,0);
        *((char *)GEN_TOP(((int)this + 0xd4))) = *((char *)GEN_TOP(((int)this + 0xb8)));
        if (*((char *)GEN_TOP(((int)this + 0xb8))) != '\0') {
          gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xbc));
        }
        *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 0xa8)));
        *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = puVar2;
        if (*((char *)GEN_TOP(((int)this + 0xd4))) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xbc));
        }
      }
      else if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
      piVar5 = ((int *)GEN_TOP(F_00d2ff30(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,piVar4)));
      *((char *)GEN_TOP(((int)this + 0xa0))) = *((char *)GEN_TOP(((int)this + 0x84)));
      if (*((char *)GEN_TOP(((int)this + 0x84))) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
      }
      *piVar4 = *((int *)GEN_TOP(((int)this + 0x74)));
      *((int * PTR32 *)GEN_TOP(((int)this + 0x74))) = piVar4;
      piVar4 = piVar5;
      if (*((char *)GEN_TOP(((int)this + 0xa0))) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
      }
    }
    piVar4 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x50 GEN_EDX_ARG,0)));
    if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x2ec))) != '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(*((int *)GEN_TOP(((int)this + 0xc))) + 0x2d4));
    }
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      do {
        puVar2 = ((undefined4 *)GEN_TOP(*piVar4));
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        }
        piVar5 = ((int *)GEN_TOP(F_00d2ff30(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,piVar4)));
        *((char *)GEN_TOP(((int)this + 0xa0))) = *((char *)GEN_TOP(((int)this + 0x84)));
        if (*((char *)GEN_TOP(((int)this + 0x84))) != '\0') {
          gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
        }
        *piVar4 = *((int *)GEN_TOP(((int)this + 0x74)));
        *((int * PTR32 *)GEN_TOP(((int)this + 0x74))) = piVar4;
        if (*((char *)GEN_TOP(((int)this + 0xa0))) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
        }
        piVar4 = piVar5;
      } while (piVar5 != ((int *)GEN_TOP(0x0)));
    }
    if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x2ec))) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(*((int *)GEN_TOP(((int)this + 0xc))) + 0x2d4));
    }
    piVar4 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x60 GEN_EDX_ARG,0)));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      do {
        puVar2 = ((undefined4 *)GEN_TOP(*piVar4));
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        }
        piVar5 = ((int *)GEN_TOP(F_00d2ff30(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,piVar4)));
        *((char *)GEN_TOP(((int)this + 0xa0))) = *((char *)GEN_TOP(((int)this + 0x84)));
        if (*((char *)GEN_TOP(((int)this + 0x84))) != '\0') {
          gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
        }
        *piVar4 = *((int *)GEN_TOP(((int)this + 0x74)));
        *((int * PTR32 *)GEN_TOP(((int)this + 0x74))) = piVar4;
        if (*((char *)GEN_TOP(((int)this + 0xa0))) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
        }
        piVar4 = piVar5;
      } while (piVar5 != ((int *)GEN_TOP(0x0)));
    }
  }
  else {
    while (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar3 = F_00d21190(*piVar4 GEN_EDX_ARG);
      if (bVar3 == param_1) {
        iVar1 = *piVar4;
        *((undefined4 *)GEN_TOP((iVar1 + 0x38))) = param_2;
        *((undefined1 *)GEN_TOP((iVar1 + 0x34))) = 0;
        puVar2 = ((undefined4 *)GEN_TOP(*piVar4));
        if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,0);
          *((char *)GEN_TOP(((int)this + 0xd4))) = *((char *)GEN_TOP(((int)this + 0xb8)));
          if (*((char *)GEN_TOP(((int)this + 0xb8))) != '\0') {
            gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xbc));
          }
          *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 0xa8)));
          *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = puVar2;
          if (*((char *)GEN_TOP(((int)this + 0xd4))) != '\0') {
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xbc));
          }
        }
        else if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        }
        piVar5 = ((int *)GEN_TOP(F_00d2ff30(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,piVar4)));
        *((char *)GEN_TOP(((int)this + 0xa0))) = *((char *)GEN_TOP(((int)this + 0x84)));
        if (*((char *)GEN_TOP(((int)this + 0x84))) != '\0') {
          gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
        }
        *piVar4 = *((int *)GEN_TOP(((int)this + 0x74)));
        *((int * PTR32 *)GEN_TOP(((int)this + 0x74))) = piVar4;
        piVar4 = piVar5;
        if (*((char *)GEN_TOP(((int)this + 0xa0))) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
        }
      }
      else {
        piVar4 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,piVar4)));
      }
    }
    if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x2ec))) != '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(*((int *)GEN_TOP(((int)this + 0xc))) + 0x2d4));
    }
    piVar4 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x50 GEN_EDX_ARG,0)));
    while (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar3 = F_00d21190(*piVar4 GEN_EDX_ARG);
      if (bVar3 == param_1) {
        puVar2 = ((undefined4 *)GEN_TOP(*piVar4));
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        }
        piVar5 = ((int *)GEN_TOP(F_00d2ff30(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,piVar4)));
        *((char *)GEN_TOP(((int)this + 0xa0))) = *((char *)GEN_TOP(((int)this + 0x84)));
        if (*((char *)GEN_TOP(((int)this + 0x84))) != '\0') {
          gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
        }
        *piVar4 = *((int *)GEN_TOP(((int)this + 0x74)));
        *((int * PTR32 *)GEN_TOP(((int)this + 0x74))) = piVar4;
        piVar4 = piVar5;
        if (*((char *)GEN_TOP(((int)this + 0xa0))) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
        }
      }
      else {
        piVar4 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x50 GEN_EDX_ARG,piVar4)));
      }
    }
    if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x2ec))) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(*((int *)GEN_TOP(((int)this + 0xc))) + 0x2d4));
    }
    piVar4 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x60 GEN_EDX_ARG,0)));
    while (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar3 = F_00d21190(*piVar4 GEN_EDX_ARG);
      if (bVar3 == param_1) {
        puVar2 = ((undefined4 *)GEN_TOP(*piVar4));
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        }
        piVar5 = ((int *)GEN_TOP(F_00d2ff30(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,piVar4)));
        *((char *)GEN_TOP(((int)this + 0xa0))) = *((char *)GEN_TOP(((int)this + 0x84)));
        if (*((char *)GEN_TOP(((int)this + 0x84))) != '\0') {
          gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
        }
        *piVar4 = *((int *)GEN_TOP(((int)this + 0x74)));
        *((int * PTR32 *)GEN_TOP(((int)this + 0x74))) = piVar4;
        piVar4 = piVar5;
        if (*((char *)GEN_TOP(((int)this + 0xa0))) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
        }
      }
      else {
        piVar4 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x60 GEN_EDX_ARG,piVar4)));
      }
    }
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  }
  return 0;
}

/* ref: FUN_00d05de0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d05de0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd05de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_3)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  F_00d059d0(param_1 GEN_EDX_FWD,param_2,local_c);
  return;
}

/* ref: FUN_00d05e30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d05e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd05e30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint in_ecx;
  uint uVar1;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  in_ecx = F_00d05480(this GEN_EDX_ARG,param_1);
  uVar1 = 0;
  if (in_ecx != 0) {
    uVar1 = F_00d20fe0(in_ecx GEN_EDX_ARG,(undefined1)param_2);
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00d05e80 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d05e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd05e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  uint in_ecx;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  in_ecx = F_00d05480(this GEN_EDX_ARG,param_1);
  if (in_ecx == 0) {
    if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  bVar1 = F_00d21000(in_ecx GEN_EDX_ARG);
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return bVar1;
}

/* ref: FUN_00d05ee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d05ee0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xd05ee0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  int * piVar1;
  uint uVar2;
  
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
  piVar1 = ((int *)GEN_TOP(F_00d05480(param_1 GEN_EDX_ARG,param_2)));
  uVar2 = REFG(undefined4, 0x11299fc);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))
                      (piVar1 GEN_EDX_ARG,param_3,(undefined4)gen_fl2bits(param_4),
                       (undefined4)gen_fl2bits(param_5));
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
  }
  return uVar2;
}

/* ref: FUN_00d05f50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d05f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd05f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  this_00 = ((undefined *)GEN_TOP(F_00d05480(this GEN_EDX_ARG,param_1)));
  uVar1 = REFG(undefined4, 0x11299fc);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d21200(this_00 GEN_EDX_ARG,param_2);
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  }
  return uVar1;
}

/* ref: FUN_00d05fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d05fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd05fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  this_00 = ((undefined *)GEN_TOP(F_00d05480(this GEN_EDX_ARG,param_1)));
  uVar1 = REFG(undefined4, 0x11299fc);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d21240(this_00 GEN_EDX_ARG,param_2);
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  }
  return uVar1;
}

/* ref: FUN_00d06010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06010(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd06010u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
  piVar1 = ((int *)GEN_TOP(F_00d05480(param_1 GEN_EDX_ARG,param_2)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_3),param_4);
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00d06060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06060(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd06060u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  int iVar1;
  float10 fVar2;
  int * piVar3;
  uint uVar4;
  uint extraout_EAX = 0;
  undefined4 local_c;
  ushort uStack_8;
  
  iVar1 = *((int *)GEN_TOP(param_4));
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1097260);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xf0))) = 1;
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)TRUNC((double)(float)((float10)iVar1 / fVar2) * *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
  piVar3 = ((int *)GEN_TOP(F_00d05480(param_1 GEN_EDX_ARG,param_2)));
  uVar4 = 0;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_3),local_c);
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
    uVar4 = extraout_EAX;
  }
  return uVar4;
}

/* ref: FUN_00d060f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d060f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd060f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
  piVar1 = ((int *)GEN_TOP(F_00d05480(param_1 GEN_EDX_ARG,param_2)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_3),param_4);
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00d06140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06140(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd06140u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  int iVar1;
  float10 fVar2;
  int * piVar3;
  uint uVar4;
  uint extraout_EAX = 0;
  undefined4 local_c;
  ushort uStack_8;
  
  iVar1 = *((int *)GEN_TOP(param_4));
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1097260);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xf0))) = 1;
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)TRUNC((double)(float)((float10)iVar1 / fVar2) * *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
  piVar3 = ((int *)GEN_TOP(F_00d05480(param_1 GEN_EDX_ARG,param_2)));
  uVar4 = 0;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_3),local_c);
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
    uVar4 = extraout_EAX;
  }
  return uVar4;
}

/* ref: FUN_00d061d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d061d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd061d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  piVar1 = ((int *)GEN_TOP(F_00d05480(this GEN_EDX_ARG,param_1)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,param_2);
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00d06220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd06220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  piVar1 = ((int *)GEN_TOP(F_00d05480(this GEN_EDX_ARG,param_1)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG,param_2);
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00d06270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd06270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float10 fVar1;
  int * piVar2;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  piVar2 = ((int *)GEN_TOP(F_00d05480(this GEN_EDX_ARG,param_2)));
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    fVar1 = (float10)0;
    *param_1 = (float)fVar1;
    param_1[1] = (float)fVar1;
    param_1[2] = (float)fVar1;
    param_1[3] = (float)(float10)1;
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x2c))))(piVar2 GEN_EDX_ARG,param_1);
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  }
  return (uint)param_1;
}

/* ref: FUN_00d062d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d062d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd062d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  uVar1 = F_00d05480(this GEN_EDX_ARG,param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00d21010(uVar1 GEN_EDX_ARG,1,param_2);
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00d06320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06320(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd06320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  float10 fVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_EAX = 0;
  undefined4 local_c;
  ushort uStack_8;
  
  iVar1 = *((int *)GEN_TOP(param_3));
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1097260);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xf0))) = 1;
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)TRUNC((double)(float)((float10)iVar1 / fVar2) * *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
  uVar3 = F_00d05480(param_1 GEN_EDX_ARG,param_2);
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = F_00d21010(uVar3 GEN_EDX_ARG,1,local_c);
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
    uVar4 = extraout_EAX;
  }
  return uVar4;
}

/* ref: FUN_00d063a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d063a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd063a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  uVar1 = F_00d05480(this GEN_EDX_ARG,param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00d21010(uVar1 GEN_EDX_ARG,0,param_2);
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00d063f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d063f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd063f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  float10 fVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_EAX = 0;
  undefined4 local_c;
  ushort uStack_8;
  
  iVar1 = *((int *)GEN_TOP(param_3));
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1097260);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xf0))) = 1;
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)TRUNC((double)(float)((float10)iVar1 / fVar2) * *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
  uVar3 = F_00d05480(param_1 GEN_EDX_ARG,param_2);
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = F_00d21010(uVar3 GEN_EDX_ARG,0,local_c);
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
    uVar4 = extraout_EAX;
  }
  return uVar4;
}

/* ref: FUN_00d06470 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d06470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd06470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  undefined * this_00;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this_00 = ((undefined *)GEN_TOP(F_00d05480(this GEN_EDX_ARG,param_1)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  bVar1 = F_00d21100(this_00 GEN_EDX_ARG);
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return bVar1;
}

/* ref: FUN_00d064d0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d064d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd064d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  uint in_ecx;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  in_ecx = F_00d05480(this GEN_EDX_ARG,param_1);
  if (in_ecx == 0) {
    if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  bVar1 = F_00d210f0(in_ecx GEN_EDX_ARG);
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return bVar1;
}

/* ref: FUN_00d06530 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d06530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd06530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar1 = F_00d05480(this GEN_EDX_ARG,param_1);
  if (uVar1 == 0) {
    if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}

/* ref: FUN_00d06580 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d06580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd06580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,0)));
  while( true ) {
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
      return 1;
    }
    if (param_1 == *((int *)GEN_TOP((*piVar1 + 0x24)))) break;
    piVar1 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,piVar1)));
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00d065f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d065f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd065f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  uint uVar1;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
  uVar1 = F_00d05480(param_1 GEN_EDX_ARG,param_2);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP((uVar1 + 0xb0))) =
         *((uint *)GEN_TOP((uVar1 + 0xb0))) ^ ((uint)param_3 * 8 ^ *((uint *)GEN_TOP((uVar1 + 0xb0)))) & 8;
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00d06650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06650(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd06650u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
  uVar1 = F_00d05480(param_1 GEN_EDX_ARG,param_2);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00d21400(uVar1 GEN_EDX_ARG,param_3);
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00d066a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d066a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd066a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  undefined * this_00;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this_00 = ((undefined *)GEN_TOP(F_00d05480(this GEN_EDX_ARG,param_1)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0xffffffff;
  }
  uVar1 = F_00d21440(this_00 GEN_EDX_ARG);
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar1;
}

/* ref: FUN_00d06700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd06700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  undefined * this_00;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this_00 = ((undefined *)GEN_TOP(F_00d05480(this GEN_EDX_ARG,param_1)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0xffffffff;
  }
  uVar1 = F_00d21450(this_00 GEN_EDX_ARG);
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar1;
}

/* ref: FUN_00d06760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd06760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  this_00 = ((undefined *)GEN_TOP(F_00d05480(this GEN_EDX_ARG,param_2)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    *param_1 = 0;
  }
  else {
    F_00d21460(this_00 GEN_EDX_ARG,param_1);
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  }
  return (uint)param_1;
}

/* ref: FUN_00d067b0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d067b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd067b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  undefined * this_00;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this_00 = ((undefined *)GEN_TOP(F_00d05480(this GEN_EDX_ARG,param_1)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  bVar1 = F_00d22a30(this_00 GEN_EDX_ARG);
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return bVar1;
}

/* ref: FUN_00d06810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd06810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  this_00 = ((undefined *)GEN_TOP(F_00d05480(this GEN_EDX_ARG,param_1)));
  uVar1 = 0;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d214a0(this_00 GEN_EDX_ARG);
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00d06860 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd06860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  undefined * this_00;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this_00 = ((undefined *)GEN_TOP(F_00d05480(this GEN_EDX_ARG,param_1)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar1 = F_00d22a60(this_00 GEN_EDX_ARG);
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar1;
}

/* ref: FUN_00d068c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d068c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd068c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
  uVar1 = F_00d05480(param_1 GEN_EDX_ARG,param_2);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00d214e0(uVar1 GEN_EDX_ARG,param_3,param_4);
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xd8));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00d06910 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d06910(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd06910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  undefined * this;
  float fVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0xd8);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this = ((undefined *)GEN_TOP(F_00d05480(param_1 GEN_EDX_ARG,param_2)));
  if (this == ((undefined *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return (float10)0;
  }
  fVar1 = F_00d21520(this GEN_EDX_ARG);
  if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (float10)fVar1;
}

/* ref: FUN_00d06970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd06970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  uVar1 = F_00d05480(this GEN_EDX_ARG,param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00d21540(uVar1 GEN_EDX_ARG,(undefined1)param_2);
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00d069c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d069c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd069c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  uVar1 = F_00d05480(this GEN_EDX_ARG,param_1);
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00d06a00 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d06a00(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd06a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  undefined * this;
  float fVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0xd8);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this = ((undefined *)GEN_TOP(F_00d05480(param_1 GEN_EDX_ARG,param_2)));
  if (this == ((undefined *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return (float10)0;
  }
  fVar1 = F_00d21580(this GEN_EDX_ARG);
  if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (float10)fVar1;
}

/* ref: FUN_00d06a60 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d06a60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd06a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  undefined * this;
  float fVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0xd8);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this = ((undefined *)GEN_TOP(F_00d05480(param_1 GEN_EDX_ARG,param_2)));
  if (this == ((undefined *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return (float10)0;
  }
  fVar1 = F_00d21610(this GEN_EDX_ARG);
  if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (float10)fVar1;
}

/* ref: FUN_00d06ac0 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d06ac0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd06ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  undefined * this;
  float fVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0xd8);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this = ((undefined *)GEN_TOP(F_00d05480(param_1 GEN_EDX_ARG,param_2)));
  if (this == ((undefined *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return (float10)0;
  }
  fVar1 = F_00d21630(this GEN_EDX_ARG);
  if (*((char *)GEN_TOP(((int)param_1 + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (float10)fVar1;
}

/* ref: FUN_00d06b20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd06b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  int * extraout_EAX = 0;
  int * extraout_EAX_00 = 0;
  uint uVar7;
  int * extraout_EAX_01 = 0;
  int * extraout_EAX_02 = 0;
  int * extraout_EAX_03 = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  piVar5 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,0)));
  piVar4 = piVar5;
  if (param_1 == 0) {
    while (piVar4 != ((int *)GEN_TOP(0x0))) {
      iVar2 = *piVar4;
      *((undefined4 *)GEN_TOP((iVar2 + 0x38))) = param_2;
      *((undefined1 *)GEN_TOP((iVar2 + 0x34))) = 0;
      puVar3 = ((undefined4 *)GEN_TOP(*piVar4));
      if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,0);
        *((char *)GEN_TOP(((int)this + 0xd4))) = *((char *)GEN_TOP(((int)this + 0xb8)));
        if (*((char *)GEN_TOP(((int)this + 0xb8))) != '\0') {
          gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xbc));
        }
        *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0xa8)));
        *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = puVar3;
        if (*((char *)GEN_TOP(((int)this + 0xd4))) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xbc));
        }
      }
      else if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
      }
      piVar6 = ((int *)GEN_TOP(F_00d2ff30(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,piVar4)));
      cVar1 = *((char *)GEN_TOP(((int)this + 0x84)));
      piVar5 = ((int *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)piVar6) >> 8),cVar1)));
      *((char *)GEN_TOP(((int)this + 0xa0))) = cVar1;
      if (cVar1 != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
        piVar5 = extraout_EAX;
      }
      *piVar4 = *((int *)GEN_TOP(((int)this + 0x74)));
      *((int * PTR32 *)GEN_TOP(((int)this + 0x74))) = piVar4;
      piVar4 = piVar6;
      if (*((char *)GEN_TOP(((int)this + 0xa0))) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
        piVar5 = extraout_EAX_00;
      }
    }
  }
  else {
    while (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar7 = F_00d22a60(((undefined *)GEN_TOP(*piVar4)) GEN_EDX_ARG);
      if (uVar7 == param_1) {
        iVar2 = *piVar4;
        *((undefined4 *)GEN_TOP((iVar2 + 0x38))) = param_2;
        *((undefined1 *)GEN_TOP((iVar2 + 0x34))) = 0;
        puVar3 = ((undefined4 *)GEN_TOP(*piVar4));
        if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,0);
          *((char *)GEN_TOP(((int)this + 0xd4))) = *((char *)GEN_TOP(((int)this + 0xb8)));
          if (*((char *)GEN_TOP(((int)this + 0xb8))) != '\0') {
            gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xbc));
          }
          *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0xa8)));
          *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = puVar3;
          if (*((char *)GEN_TOP(((int)this + 0xd4))) != '\0') {
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xbc));
          }
        }
        else if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
        }
        piVar6 = ((int *)GEN_TOP(F_00d2ff30(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,piVar4)));
        cVar1 = *((char *)GEN_TOP(((int)this + 0x84)));
        piVar5 = ((int *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)piVar6) >> 8),cVar1)));
        *((char *)GEN_TOP(((int)this + 0xa0))) = cVar1;
        if (cVar1 != '\0') {
          gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
          piVar5 = extraout_EAX_01;
        }
        *piVar4 = *((int *)GEN_TOP(((int)this + 0x74)));
        *((int * PTR32 *)GEN_TOP(((int)this + 0x74))) = piVar4;
        piVar4 = piVar6;
        if (*((char *)GEN_TOP(((int)this + 0xa0))) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
          piVar5 = extraout_EAX_02;
        }
      }
      else {
        piVar5 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,piVar4)));
        piVar4 = piVar5;
      }
    }
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    piVar5 = extraout_EAX_03;
  }
  return (uint)piVar5;
}

/* ref: FUN_00d06d10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd06d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int in_ecx;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  in_ecx = (int)this + 0x40;
  puVar1 = ((undefined4 *)GEN_TOP(F_00d2ff90(in_ecx GEN_EDX_ARG,0)));
  if (param_1 == 0) {
    if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00d06d99;
    do {
      F_00d21010(*puVar1 GEN_EDX_ARG,(undefined1)param_2,param_3);
      puVar1 = ((undefined4 *)GEN_TOP(F_00d2ff90(in_ecx GEN_EDX_ARG,puVar1)));
    } while (puVar1 != ((undefined4 *)GEN_TOP(0x0)));
  }
  else {
    if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00d06d99;
    do {
      uVar2 = F_00d22a60(((undefined *)GEN_TOP(*puVar1)) GEN_EDX_ARG);
      if (uVar2 == param_1) {
        F_00d21010(*puVar1 GEN_EDX_ARG,(undefined1)param_2,param_3);
      }
      puVar1 = ((undefined4 *)GEN_TOP(F_00d2ff90(in_ecx GEN_EDX_ARG,puVar1)));
    } while (puVar1 != ((undefined4 *)GEN_TOP(0x0)));
  }
  puVar1 = ((undefined4 *)GEN_TOP(0x0));
LAB_00d06d99: ;
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    puVar1 = extraout_EAX;
  }
  return (uint)puVar1;
}

/* ref: FUN_00d06db0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd06db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  int * extraout_EAX = 0;
  int * extraout_EAX_00 = 0;
  int * extraout_EAX_01 = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  piVar4 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,0)));
  piVar6 = ((int *)GEN_TOP(0x0));
  while (piVar4 != ((int *)GEN_TOP(0x0))) {
    iVar2 = *piVar4;
    if (*((int *)GEN_TOP((iVar2 + 0x24))) == param_1) {
      *((undefined4 *)GEN_TOP((iVar2 + 0x38))) = param_2;
      *((undefined1 *)GEN_TOP((iVar2 + 0x34))) = 0;
      puVar3 = ((undefined4 *)GEN_TOP(*piVar4));
      if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,0);
        *((char *)GEN_TOP(((int)this + 0xd4))) = *((char *)GEN_TOP(((int)this + 0xb8)));
        if (*((char *)GEN_TOP(((int)this + 0xb8))) != '\0') {
          gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xbc));
        }
        *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0xa8)));
        *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = puVar3;
        if (*((char *)GEN_TOP(((int)this + 0xd4))) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xbc));
        }
      }
      else if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
      }
      piVar5 = ((int *)GEN_TOP(F_00d2ff30(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,piVar4)));
      cVar1 = *((char *)GEN_TOP(((int)this + 0x84)));
      piVar6 = ((int *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)piVar5) >> 8),cVar1)));
      *((char *)GEN_TOP(((int)this + 0xa0))) = cVar1;
      if (cVar1 != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
        piVar6 = extraout_EAX;
      }
      *piVar4 = *((int *)GEN_TOP(((int)this + 0x74)));
      *((int * PTR32 *)GEN_TOP(((int)this + 0x74))) = piVar4;
      piVar4 = piVar5;
      if (*((char *)GEN_TOP(((int)this + 0xa0))) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
        piVar6 = extraout_EAX_00;
      }
    }
    else {
      piVar4 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,piVar4)));
      piVar6 = piVar4;
    }
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    piVar6 = extraout_EAX_01;
  }
  return (uint)piVar6;
}

/* ref: FUN_00d06ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd06ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  for (piVar1 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,0))); piVar1 != ((int *)GEN_TOP(0x0));
      piVar1 = ((int *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,piVar1)))) {
    if (*((int *)GEN_TOP((*piVar1 + 0x24))) == param_1) {
      F_00d21010(*piVar1 GEN_EDX_ARG,(undefined1)param_2,param_3);
    }
  }
  uVar2 = 0;
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00d06f40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd06f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar1 = F_00d05480(this GEN_EDX_ARG,param_1);
  if (uVar1 == 0) {
    if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar1 = *((uint *)GEN_TOP((uVar1 + 0x24)));
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar1;
}

/* ref: FUN_00d06fa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d06fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd06fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar1 = F_00d05480(this GEN_EDX_ARG,param_1);
  if (uVar1 == 0) {
    if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0xffffffff;
  }
  uVar1 = *((uint *)GEN_TOP((uVar1 + 0x28)));
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar1;
}

/* ref: FUN_00d07000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d07000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd07000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  uint uVar1;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  this_00 = ((undefined *)GEN_TOP(F_00d05480(this GEN_EDX_ARG,param_1)));
  uVar1 = 0;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d22a80(this_00 GEN_EDX_ARG,param_2);
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00d07050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d07050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd07050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  uint uVar1;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  this_00 = ((undefined *)GEN_TOP(F_00d05480(this GEN_EDX_ARG,param_1)));
  uVar1 = 0;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d22ad0(this_00 GEN_EDX_ARG,param_2);
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00d070a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d070a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd070a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint in_ecx;
  uint uVar1;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  in_ecx = F_00d05480(this GEN_EDX_ARG,param_1);
  uVar1 = 0;
  if (in_ecx != 0) {
    uVar1 = F_00d21680(in_ecx GEN_EDX_ARG,param_2);
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00d070f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d070f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd070f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar1 = F_00d05480(this GEN_EDX_ARG,param_1);
  if (uVar1 == 0) {
    if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar1 = F_00d21690(uVar1 GEN_EDX_ARG);
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar1;
}

/* ref: FUN_00d07150 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d07150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd07150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar1 = F_00d05480(this GEN_EDX_ARG,param_1);
  if (uVar1 == 0) {
    if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar1 = F_00d21160(uVar1 GEN_EDX_ARG);
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (byte)uVar1;
}

/* ref: FUN_00d071b0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d071b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd071b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int * in_ecx;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  in_ecx = ((int *)GEN_TOP(F_00d05480(this GEN_EDX_ARG,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_00d21130(in_ecx GEN_EDX_ARG);
    if (bVar1 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x30))))(in_ecx GEN_EDX_ARG,param_2);
      if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
      return 1;
    }
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00d07220 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d07220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd07220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int * in_ecx;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  in_ecx = ((int *)GEN_TOP(F_00d05480(this GEN_EDX_ARG,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_00d21130(in_ecx GEN_EDX_ARG);
    if (bVar1 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x34))))(in_ecx GEN_EDX_ARG,param_2);
      if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
      return 1;
    }
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00d07290 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d07290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd07290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * in_ecx;
  ulonglong uVar5;
  undefined4 * puVar6;
  byte bVar7;
  undefined4 * puVar8;
  uint uVar9;
  
  if ((*((char *)GEN_TOP(((int)this + 0x18))) != '\0') && (*((char *)GEN_TOP(((int)this + 0x19))) == '\0')) {
    uVar5 = *((ulonglong *)GEN_TOP(((int)this + 0x20)));
    uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x48)));
    uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x4c)));
    uVar3 = *((uint *)GEN_TOP(((int)this + 0x28)));
    uVar4 = *((uint *)GEN_TOP(((int)this + 0x2c)));
    *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    if (param_2 == 0) {
      for (puVar8 = ((undefined4 *)GEN_TOP(F_00d2ff90((int)this + 0x60 GEN_EDX_ARG,0))); puVar8 != ((undefined4 *)GEN_TOP(0x0));
          puVar8 = ((undefined4 *)GEN_TOP(F_00d2ff90((int)this + 0x60 GEN_EDX_ARG,puVar8)))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 0x38))))(((int *)GEN_TOP(*puVar8)) GEN_EDX_ARG,param_1);
      }
      for (puVar8 = ((undefined4 *)GEN_TOP(F_00d2ff90((int)this + 0x50 GEN_EDX_ARG,0))); puVar8 != ((undefined4 *)GEN_TOP(0x0));
          puVar8 = ((undefined4 *)GEN_TOP(F_00d2ff90((int)this + 0x50 GEN_EDX_ARG,puVar8)))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 0x38))))(((int *)GEN_TOP(*puVar8)) GEN_EDX_ARG,param_1);
      }
    }
    else if (param_2 == 1) {
      puVar8 = ((undefined4 *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,0)));
      while (puVar6 = puVar8, puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        in_ecx = ((int *)GEN_TOP(*puVar6));
        puVar8 = ((undefined4 *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,puVar6)));
        bVar7 = F_00d21190(in_ecx GEN_EDX_ARG);
        if (((((ulonglong)(((ulonglong)bVar7 < 0x40) ? ((uVar5 >> (ulonglong)bVar7)) : 0)) & 1) != 0) &&
           ((((ulonglong)(((ulonglong)bVar7 < 0x40) ? ((CONCAT44(uVar2 | uVar4,uVar1 | uVar3) >> (ulonglong)bVar7)) : 0)) & 1) == 0)) {
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x38))))(in_ecx GEN_EDX_ARG,param_1);
          if ((char)uVar9 == '\0') {
            bVar7 = F_00d21710(in_ecx GEN_EDX_ARG);
            if (bVar7 == 0) {
              F_00d095a0(this GEN_EDX_ARG,*puVar6);
              puVar8 = ((undefined4 *)GEN_TOP(F_00d2ff30(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,puVar6)));
              F_00cc6810(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,puVar6);
            }
          }
          else {
            puVar8 = ((undefined4 *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,puVar6)));
          }
        }
      }
    }
    if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00d07430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d07430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd07430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  for (puVar1 = ((undefined4 *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,0))); puVar1 != ((undefined4 *)GEN_TOP(0x0));
      puVar1 = ((undefined4 *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,puVar1)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar1)) + 0x24))))(((int *)GEN_TOP(*puVar1)) GEN_EDX_ARG,param_1,param_2);
  }
  uVar2 = 0;
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00d074a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d074a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd074a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  for (puVar1 = ((undefined4 *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,0))); puVar1 != ((undefined4 *)GEN_TOP(0x0));
      puVar1 = ((undefined4 *)GEN_TOP(F_00d2ff90((int)this + 0x40 GEN_EDX_ARG,puVar1)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar1)) + 0x28))))(((int *)GEN_TOP(*puVar1)) GEN_EDX_ARG,param_1);
  }
  uVar2 = 0;
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00d07500 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d07500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd07500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * in_ecx;
  ulonglong uVar5;
  byte bVar6;
  undefined4 * puVar7;
  uint uVar8;
  
  if ((*((char *)GEN_TOP(((int)this + 0x18))) != '\0') && (*((char *)GEN_TOP(((int)this + 0x19))) == '\0')) {
    uVar5 = *((ulonglong *)GEN_TOP(((int)this + 0x20)));
    uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x48)));
    uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x4c)));
    uVar3 = *((uint *)GEN_TOP(((int)this + 0x28)));
    uVar4 = *((uint *)GEN_TOP(((int)this + 0x2c)));
    *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    for (puVar7 = ((undefined4 *)GEN_TOP(F_00d2ff90((int)this + 0x50 GEN_EDX_ARG,0))); puVar7 != ((undefined4 *)GEN_TOP(0x0));
        puVar7 = ((undefined4 *)GEN_TOP(F_00d2ff90((int)this + 0x50 GEN_EDX_ARG,puVar7)))) {
      in_ecx = ((int *)GEN_TOP(*puVar7));
      bVar6 = F_00d21190(in_ecx GEN_EDX_ARG);
      if (((((((ulonglong)(((ulonglong)bVar6 < 0x40) ? ((uVar5 >> (ulonglong)bVar6)) : 0)) & 1) != 0) &&
           ((((ulonglong)(((ulonglong)bVar6 < 0x40) ? ((CONCAT44(uVar2 | uVar4,uVar1 | uVar3) >> (ulonglong)bVar6)) : 0)) & 1) == 0)) &&
          (bVar6 = F_00d21000(in_ecx GEN_EDX_ARG), bVar6 != 0)) &&
         (uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x54))))(in_ecx GEN_EDX_ARG,param_1,param_2), (char)uVar8 == '\x01')) {
        F_00d00490(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,in_ecx);
      }
    }
    if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    }
  }
  return;
}

/* ref: FUN_00d07600 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d07600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd07600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * in_ecx;
  ulonglong uVar5;
  byte bVar6;
  undefined4 * puVar7;
  uint uVar8;
  
  if ((*((char *)GEN_TOP(((int)this + 0x18))) != '\0') && (*((char *)GEN_TOP(((int)this + 0x19))) == '\0')) {
    uVar5 = *((ulonglong *)GEN_TOP(((int)this + 0x20)));
    uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x48)));
    uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x4c)));
    uVar3 = *((uint *)GEN_TOP(((int)this + 0x28)));
    uVar4 = *((uint *)GEN_TOP(((int)this + 0x2c)));
    *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    for (puVar7 = ((undefined4 *)GEN_TOP(F_00d2ff90((int)this + 0x50 GEN_EDX_ARG,0))); puVar7 != ((undefined4 *)GEN_TOP(0x0));
        puVar7 = ((undefined4 *)GEN_TOP(F_00d2ff90((int)this + 0x50 GEN_EDX_ARG,puVar7)))) {
      in_ecx = ((int *)GEN_TOP(*puVar7));
      bVar6 = F_00d21190(in_ecx GEN_EDX_ARG);
      if (((((((ulonglong)(((ulonglong)bVar6 < 0x40) ? ((uVar5 >> (ulonglong)bVar6)) : 0)) & 1) != 0) &&
           ((((ulonglong)(((ulonglong)bVar6 < 0x40) ? ((CONCAT44(uVar2 | uVar4,uVar1 | uVar3) >> (ulonglong)bVar6)) : 0)) & 1) == 0)) &&
          (uVar8 = F_00d20fd0(in_ecx GEN_EDX_ARG), uVar8 != 8)) &&
         (uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x54))))(in_ecx GEN_EDX_ARG,param_1,param_1), (char)uVar8 == '\x01')) {
        F_00d00490(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,in_ecx);
      }
    }
    if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    }
  }
  return;
}

/* ref: FUN_00d07700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d07700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd07700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint extraout_EAX = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  uVar1 = F_00d05480(this GEN_EDX_ARG,param_1);
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 0xb8))) = param_2;
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

