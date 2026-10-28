#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_004d6f50 */
GEN_NOFRAME uint GEN_THISCALL F_004d6f50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  F_00b1b490(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a24));
  *(undefined4 *)((int)this + 8) = 0;
  puVar1 = (undefined4 *)((int)this + 0xc);
  *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (REFG(undefined4 * PTR32, 0x1375a40) == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  else {
    *((undefined4 * PTR32 *)GEN_TOP(((int)REFG(undefined4 * PTR32, 0x1375a40) + 4))) = puVar1;
    *(undefined4 * PTR32 *)((int)this + 0x14) = REFG(undefined4 * PTR32, 0x1375a40);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  REFG(undefined4 * PTR32, 0x1375a40) = puVar1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096ba4));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096b8c));
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Query::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_004d6fc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x1c);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x1c) = 0;
  }
  return uVar2;
}

/* ref: FUN_004d7110 */
GEN_NOFRAME byte GEN_THISCALL F_004d7110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d7110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = (uint *)((int)this + 0x28);
  uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (*(uint *)((int)this + 0x24) <= uVar2) {
    return 0;
  }
  *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) =
       uVar2 * 0x5b0 + *(int *)((int)this + 4);
  return 1;
}

/* ref: FUN_004d7150 */
GEN_FRAME unsigned int GEN_THISCALL F_004d7150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d7150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  if (local_c != 0) {
    local_8 = 0;
    do {
      iVar4 = *(int *)((int)this + 4) + local_8;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(uint *)(iVar4 + 0x38) = REFG(undefined4, 0x1302350) & 0x7ffffff;
      *(uint *)(iVar4 + 0x3c) = REFG(undefined4, 0x1302370) & 0x7fffffff;
      *(undefined4 *)(iVar4 + 0x40) = 0;
      *(undefined4 *)(iVar4 + 0x44) = 0;
      *(undefined4 *)(iVar4 + 0x48) = 0;
      *(undefined4 *)(iVar4 + 0x4c) = 0;
      *(uint *)(iVar4 + 0x6c) = *(uint *)(iVar4 + 0x6c) & 0x800000ff;
      *(uint *)(iVar4 + 0x74) = *(uint *)(iVar4 + 0x74) & 0x800000ff;
      *(uint *)(iVar4 + 0x7c) = *(uint *)(iVar4 + 0x7c) & 0x800000ff;
      *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) & 0x800000ff;
      *(uint *)(iVar4 + 0x8c) = *(uint *)(iVar4 + 0x8c) & 0x800000ff;
      *(uint *)(iVar4 + 0x94) = *(uint *)(iVar4 + 0x94) & 0x800000ff;
      *(uint *)(iVar4 + 0x9c) = *(uint *)(iVar4 + 0x9c) & 0x800000ff;
      *(uint *)(iVar4 + 0xa4) = *(uint *)(iVar4 + 0xa4) & 0x800000ff;
      *(undefined4 *)(iVar4 + 0x68) = 0;
      *(undefined1 *)(iVar4 + 0x6c) = 0;
      *(undefined4 *)(iVar4 + 0x70) = 0;
      *(undefined1 *)(iVar4 + 0x74) = 0;
      *(undefined4 *)(iVar4 + 0x78) = 0;
      *(undefined1 *)(iVar4 + 0x7c) = 0;
      *(undefined4 *)(iVar4 + 0x80) = 0;
      *(undefined1 *)(iVar4 + 0x84) = 0;
      *(undefined4 *)(iVar4 + 0x88) = 0;
      *(undefined1 *)(iVar4 + 0x8c) = 0;
      *(undefined4 *)(iVar4 + 0x90) = 0;
      *(undefined1 *)(iVar4 + 0x94) = 0;
      *(undefined4 *)(iVar4 + 0x98) = 0;
      *(undefined1 *)(iVar4 + 0x9c) = 0;
      *(undefined4 *)(iVar4 + 0xa0) = 0;
      *(undefined1 *)(iVar4 + 0xa4) = 0;
      puVar5 = (undefined4 *)(iVar4 + 0xa8);
      for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      puVar2 = (uint *)(iVar4 + 0x2ac);
      iVar3 = 0x60;
      do {
        puVar2[-1] = 0;
        *puVar2 = REFG(undefined4, 0x1375a5c) & 0xfffffff;
        puVar2 = puVar2 + 2;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      local_8 = local_8 + 0x5b0;
      *(uint *)(iVar4 + 0x50) = REFG(undefined4, 0x1302360) & 0x1f;
      uVar1 = REFG(undefined4, 0x1302368);
      *(uint *)(iVar4 + 0x5c) = REFG(undefined4, 0x130236c) & 0xfffffffc;
      *(uint *)(iVar4 + 0x58) = uVar1 & 0xfe000000;
      local_c = local_c - 1;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(int *)(iVar4 + 0x14) = iVar4 + 0x10;
      *(undefined4 *)(iVar4 + 0x18) = 0x8000;
      *(undefined4 *)(iVar4 + 0x1c) = 1;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(undefined4 *)(iVar4 + 0x28) = 0;
    } while (local_c != 0);
  }
  return 0;
}

/* ref: FUN_004d72d0 */
GEN_NOFRAME uint GEN_THISCALL F_004d72d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d72d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  DWORD DVar3;
  uint uVar4;
  uint uVar5;
  
  if ((*(char *)((int)this + 0xa8) == '\0') || (iVar1 = *(int *)((int)this + 0xa0), iVar1 == 0))
  goto LAB_004d737b;
  if (iVar1 == 1) {
LAB_004d7304: ;
    uVar5 = 0x3c;
  }
  else if (iVar1 == 2) {
    uVar5 = 0x1e;
  }
  else {
    if (iVar1 != 3) goto LAB_004d7304;
    uVar5 = 0x14;
  }
  iVar1 = *(int *)((int)this + 0xb0);
  *(int *)((int)this + 0xb0) = iVar1 + 1;
  uVar5 = (uint)(iVar1 * 1000) / uVar5 + *(int *)((int)this + 0xac);
  DVar3 = gen_imp_timeGetTime();
  if (DVar3 < uVar5) {
    if (3 < uVar5 - DVar3) {
      gen_imp_Sleep((uVar5 - DVar3) - 3);
    }
    uVar4 = gen_imp_timeGetTime();
    while (uVar4 < uVar5) {
      gen_imp_Sleep(0);
      uVar4 = gen_imp_timeGetTime();
    }
  }
  else if (uVar5 + 100 < DVar3) {
    DVar3 = gen_imp_timeGetTime();
    *(DWORD *)((int)this + 0xac) = DVar3;
    *(undefined4 *)((int)this + 0xb0) = 0;
  }
LAB_004d737b: ;
  if (*(char *)((int)this + 0x4c) == '\0') {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x3c)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0,0,0,0,0);
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0xc))))(*(int * PTR32 *)((int)this + 0x40) GEN_EDX_ARG);
  }
  else {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0x44))))(*(int * PTR32 *)((int)this + 0x40) GEN_EDX_ARG,0,0,0,0);
  }
  if ((uVar5 == 0x88760868) || (uVar5 == 0x88760869)) {
    *(undefined4 *)((int)this + 0x38) = 2;
  }
  *(undefined1 *)((int)this + 0x31) = 0;
  return uVar5;
}

/* ref: FUN_004d73d0 */
GEN_FRAME uint GEN_THISCALL F_004d73d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d73d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0x74) - *(int *)((int)this + 0x70);
  iVar1 = iVar4 >> 0x1f;
  iVar4 = iVar4 / 0xc + iVar1;
  uVar2 = 0;
  if (iVar4 != iVar1) {
    piVar3 = *(int * PTR32 *)((int)this + 0x70);
    do {
      if (((*param_1 == *piVar3) && (param_1[1] == piVar3[1])) && (param_1[2] == piVar3[2])) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar2 < (uint)(iVar4 - iVar1));
  }
  return 0xffffffff;
}

/* ref: FUN_004d7430 */
GEN_FRAME uint GEN_THISCALL F_004d7430(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d7430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float * pfVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)*(int *)((int)this + 0x90);
  if (*(int *)((int)this + 0x90) < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar4 = (float10)*(int *)((int)this + 0x94);
  if (*(int *)((int)this + 0x94) < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x8)) = (float)fVar4;
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  pfVar2 = &(*(float *)(gen_frame + 0x8));
  if (!((float10)1 < (float10)(float)fVar4)) {
    pfVar2 = &(*(float *)(gen_frame + 0x4));
  }
  fVar1 = *pfVar2;
  (*(float *)(gen_frame + 0x8)) = fVar1;
  *(float *)((int)this + 0x98) = (float)((float10)(float)fVar3 / (float10)fVar1);
  return (uint)pfVar2;
}

/* ref: FUN_004d74a0 */
GEN_NOFRAME uint GEN_THISCALL F_004d74a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d74a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096bbc));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x1000;
  *(undefined4 *)((int)this + 0x14) = 0x1000;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  return (uint)this;
}

/* ref: FUN_004d74f0 */
GEN_NOFRAME uint GEN_THISCALL F_004d74f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d74f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x230) != (undefined *)0x0) {
    F_004d6410(*(undefined * PTR32 *)((int)this + 0x230) GEN_EDX_FWD);
  }
  if (*(int *)((int)this + 0x21c) != 0) {
    F_0050c620(*(int *)((int)this + 0x21c),0,0);
    *(undefined4 *)((int)this + 0x21c) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x218) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x218),0,0);
    *(undefined4 *)((int)this + 0x218) = 0;
  }
  return uVar1;
}

/* ref: FUN_004d7550 */
GEN_FRAME uint GEN_THISCALL F_004d7550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4d7550u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar1 = param_2[2];
  iVar2 = *param_2;
  (*(int *)(gen_frame + 0x4)) = param_2[1];
  (*(int *)(gen_frame + 0xc)) = param_2[3] - param_2[1];
  piVar3 = *(int * PTR32 *)(param_1 + 0x1c);
  (*(float *)(gen_frame + 0x10)) = param_3;
  (*(int *)(gen_frame + 0x0)) = iVar2;
  (*(int *)(gen_frame + 0x8)) = iVar1 - iVar2;
  (*(float *)(gen_frame + 0x14)) = param_4;
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xbc))(piVar3 GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_004d75c0 */
GEN_FRAME uint GEN_THISCALL F_004d75c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d75c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD,0x1b,param_1 & 1);
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
              (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0xab,(param_1 >> 1 & 7) + 1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
              (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x13,(param_1 >> 4 & 0xf) + 1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
              (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x14,(param_1 >> 8 & 0xf) + 1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
              (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0xd1,(param_1 >> 0xc & 7) + 1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
              (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0xcf,(param_1 >> 0xf & 0xf) + 1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
              (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0xd0,(param_1 >> 0x13 & 0xf) + 1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0xce,1);
  }
  iVar1 = (param_1 >> 0x18 & 7) + (param_1 >> 0x14 & 8);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0xa8,iVar1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0xbe,iVar1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0xbf,iVar1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0xc0,iVar1);
  *(uint *)((int)this + 0x40) = param_1 & 0x7ffffff;
  return param_1 & 0x7ffffff;
}

/* ref: FUN_004d7720 */
GEN_FRAME uint GEN_THISCALL F_004d7720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d7720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x34) == 0) {
    param_1 = param_1 & 0xfffffffe;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD,7,param_1 & 1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
            (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0xe,param_1 >> 1 & 1);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
                    (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x17,(param_1 >> 2 & 7) + 1);
  *(uint *)((int)this + 0x44) = param_1 & 0x1f;
  return uVar1;
}

/* ref: FUN_004d7790 */
GEN_FRAME uint GEN_THISCALL F_004d7790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d7790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
                    (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x34,param_1 >> 0x19 & 1);
  if ((param_1 & 0x2000000) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
              (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x38,(param_1 >> 0x1a & 7) + 1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
              (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x39,param_2 >> 8 & 0xff);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
              (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x3a,param_2 >> 0x10 & 0xff);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
              (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x3b,param_2 >> 0x18);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
              (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x35,(param_1 >> 0x1d) + 1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
              (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x36,(param_2 >> 2 & 7) + 1);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
                      (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x37,(param_2 >> 5 & 7) + 1);
  }
  *(uint *)((int)this + 0x48) = param_1 & 0xfe000000;
  *(uint *)((int)this + 0x4c) = param_2 & 0xfffffffc;
  return uVar1;
}

/* ref: FUN_004d7890 */
GEN_FRAME uint GEN_THISCALL F_004d7890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d7890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD,8,param_1 & 3);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
            (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x16,((param_1 >> 3 & 1) + 1) * (param_1 >> 2 & 1) + 1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
            (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0xae,param_1 >> 4 & 1);
  uVar1 = param_1 >> 5;
  if ((short)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ((uVar1 & 0x8000) * 8 | uVar1 & 0x3ff) << 0xd |
            (((uVar1 & 0xffff) >> 10 & 0x1f) + 0x70) * 0x800000;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0xc3,uVar1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))
            (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0xaf,
             (undefined4)
             gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(((int)((param_1 >> 0x15) << 0x16) >> 0x16))) *
                                (float10)*(double *)&REFG(double, 0x10969f8))))));
  *(uint *)((int)this + 0x50) = param_1 & 0x7fffffff;
  return param_1 & 0x7fffffff;
}

/* ref: FUN_004d79a0 */
GEN_FRAME uint GEN_THISCALL F_004d79a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4d79a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int * piVar5;
  uint uVar6;
  
  if (*(uint *)((int)this + 0x58) != param_1) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x15c))))
              (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x20));
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar6 = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 1;
  if (param_3 != 0) {
    iVar2 = (int)this + (0x130 - (int)param_2);
    bVar4 = 0;
    piVar5 = param_2;
    do {
      (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) | ((uint)piVar5[1] >> 0x1f & (uint)(param_5 != 0)) +
                          (uint)(param_5 != 0) * 2 << (bVar4 & 0x1f);
      if (((uVar1 & (*(uint *)(gen_frame + 0xc))) != 0) &&
         ((*piVar5 != *(int *)(iVar2 + (int)piVar5) ||
          (piVar5[1] != *(int *)(iVar2 + 4 + (int)piVar5))))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 400))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar6,
                   *(undefined4 *)(*piVar5 + 0x20 + REFG(int, 0x1375a3c) * 4),
                   (uint)piVar5[1] >> 8 & 0x7fffff,piVar5[1] & 0xff);
        *(int *)(iVar2 + (int)piVar5) = *piVar5;
        *(int *)(iVar2 + 4 + (int)piVar5) = piVar5[1];
      }
      bVar4 = bVar4 + 2;
      uVar6 = uVar6 + 1;
      piVar5 = piVar5 + 2;
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0xc)) < 0);
    } while (uVar6 < param_3);
  }
  uVar1 = *(uint *)((int)this + 0x128);
  iVar2 = 0;
  uVar6 = 0;
  do {
    bVar4 = (byte)uVar6;
    if ((2 << (bVar4 & 0x1f) & (*(uint *)(gen_frame + 0x18))) == 0) {
      if (((uVar1 ^ (*(uint *)(gen_frame + 0x18))) & 3 << (bVar4 & 0x1f)) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x198))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,iVar2,1);
      }
    }
    else {
      if (((*(uint *)(gen_frame + 0x18)) & 1 << (bVar4 & 0x1f)) == 0) {
        uVar3 = param_5 | 0x40000000;
      }
      else {
        uVar3 = 0x80000001;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x198))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,iVar2,uVar3);
    }
    uVar6 = uVar6 + 2;
    iVar2 = iVar2 + 1;
  } while (uVar6 < 0x10);
  *(uint *)((int)this + 0x58) = param_1;
  *(uint *)((int)this + 0x128) = (*(uint *)(gen_frame + 0x18));
  return param_1;
}

/* ref: FUN_004d7b30 */
GEN_FRAME uint GEN_THISCALL F_004d7b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4d7b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint local_8;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x15c))))
            (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x20));
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar3 = 0;
  local_8 = 0;
  uVar6 = 1;
  if (param_3 != 0) {
    bVar1 = 0;
    puVar5 = (uint *)(param_2 + 4);
    do {
      local_8 = local_8 | (*puVar5 >> 0x1f & (uint)(param_5 != 0)) + (uint)(param_5 != 0) * 2 <<
                          (bVar1 & 0x1f);
      if ((uVar2 & uVar6) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 400))))
                  (this,*(undefined4 *)((int)this + 0x1c),uVar3,
                   *(undefined4 *)(puVar5[-1] + 0x20 + REFG(int, 0x1375a3c) * 4),*puVar5 >> 8 & 0x7fffff,
                   *puVar5 & 0xff);
      }
      bVar1 = bVar1 + 2;
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 2;
      uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
    } while (uVar3 < param_3);
  }
  iVar4 = 0;
  uVar6 = 0;
  do {
    if ((local_8 & 2 << ((byte)uVar6 & 0x1f)) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x198))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,iVar4,1);
    }
    else {
      if ((local_8 & 1 << ((byte)uVar6 & 0x1f)) == 0) {
        uVar2 = param_5 | 0x40000000;
      }
      else {
        uVar2 = 0x80000001;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x198))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,iVar4,uVar2);
    }
    uVar6 = uVar6 + 2;
    iVar4 = iVar4 + 1;
  } while (uVar6 < 0x10);
  *(uint *)((int)this + 0x128) = local_8;
  *(int *)((int)this + 0x58) = param_1;
  uVar7 = F_00c46aa0((int)this + 0x130,param_2,param_3 * 8);
  return (uint)uVar7;
}

/* ref: FUN_004d7c80 */
GEN_FRAME uint GEN_THISCALL F_004d7c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d7c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar5 = 0;
  if (uVar1 != 0) {
    iVar3 = (int)this + (0x60 - param_2);
    puVar4 = (uint *)(param_2 + 4);
    do {
      uVar2 = *puVar4;
      if (*(uint *)(iVar3 + (int)puVar4) < uVar2 ||
          *(uint *)((int)this + uVar5 * 8 + 0x60) != puVar4[-1]) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x178))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,
                   (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x10) + (-4 - param_2) + (int)puVar4))),
                   puVar4[-1],uVar2);
        *(uint *)((int)this + uVar5 * 8 + 0x60) = puVar4[-1];
        *(uint *)((int)this + uVar5 * 8 + 100) = *puVar4;
      }
      else {
        *(uint *)(iVar3 + (int)puVar4) = uVar2;
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (uVar5 < uVar1);
  }
  return (int)this + 0x60;
}

/* ref: FUN_004d7d30 */
GEN_FRAME uint GEN_THISCALL F_004d7d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d7d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x178))))
                (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x10) + uVar2 * 8)))
                 ,*(undefined4 *)(param_2 + uVar2 * 8),*(undefined4 *)(param_2 + 4 + uVar2 * 8));
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  uVar3 = F_00c46aa0((int)this + 0x60,param_2,uVar1 * 8);
  return (uint)uVar3;
}

/* ref: FUN_004d7da0 */
GEN_FRAME uint GEN_THISCALL F_004d7da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d7da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort * puVar6;
  ushort * puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar8 = *(uint *)(param_1 + 0xc);
  iVar3 = *(int *)((int)this + 0x5c);
  uVar4 = *(uint *)(iVar3 + 0xc);
  (*(uint *)(gen_frame + 0xc)) = 0;
  F_00c46aa0(((undefined4 *)(gen_frame + 0x18)),(int)this + 0x60,uVar4 * 8);
  (*(uint *)(gen_frame + 0x10)) = 0;
  uVar9 = 0;
  if (uVar8 != 0) {
    do {
      iVar1 = (*(uint *)(gen_frame + 0x10)) * 8;
      puVar6 = ((ushort *)GEN_TOP((*(int *)(param_1 + 0x10) + iVar1)));
      *(undefined4 *)(iVar1 + 0x60 + (int)this) = 0;
      *(undefined4 *)(iVar1 + 100 + (int)this) = 0;
      uVar10 = uVar9;
      uVar5 = (*(uint *)(gen_frame + 0xc));
      if (uVar9 < uVar4) {
        uVar2 = *puVar6;
        puVar7 = ((ushort *)GEN_TOP((*(int *)(iVar3 + 0x10) + uVar9 * 8)));
        do {
          if (uVar2 == *puVar7 && puVar7[1] <= puVar6[1]) {
            *(undefined4 *)((*(uint *)(gen_frame + 0x10)) * 8 + 0x60 + (int)this) = ((undefined4 *)(gen_frame + 0x18))[(int)(uVar9 * 2)];
            *(undefined4 *)((*(uint *)(gen_frame + 0x10)) * 8 + 100 + (int)this) = ((undefined4 *)(gen_frame + 0x18))[(int)(uVar9 * 2 + 1)];
            uVar10 = uVar9 + 1;
            uVar5 = uVar9 + 1;
            break;
          }
          uVar10 = uVar9;
          uVar5 = uVar9;
          if (uVar2 < *puVar7) break;
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 4;
          uVar10 = (*(uint *)(gen_frame + 0xc));
          uVar5 = (*(uint *)(gen_frame + 0xc));
        } while (uVar9 < uVar4);
      }
      (*(uint *)(gen_frame + 0xc)) = uVar5;
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
      uVar9 = uVar10;
    } while ((*(uint *)(gen_frame + 0x10)) < uVar8);
  }
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x170))))
                    (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x2c));
  *(int *)((int)this + 0x5c) = param_1;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return uVar8;
}

/* ref: FUN_004d7ee0 */
GEN_FRAME unsigned int GEN_THISCALL F_004d7ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d7ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint * puVar5;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar3 = -4 - param_2;
    puVar5 = (uint *)(param_2 + 4);
    param_2 = *(int *)(param_1 + 0x14);
    do {
      iVar4 = *((ushort *)GEN_TOP(((int)puVar5 + *(int *)(param_1 + 0x18) + iVar3))) + 0x101;
      if (puVar5[-1] != *(uint *)((int)this + iVar4 * 8 - 0x698)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x104))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,iVar4,*(undefined4 *)(puVar5[-1] + 0x30));
      }
      puVar1 = (uint *)((int)this + iVar4 * 8 - 0x694);
      if (*puVar5 != *puVar1) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,iVar4,1,(*puVar5 & 3) + 1);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,iVar4,2,(*puVar5 >> 2 & 3) + 1);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,iVar4,3,(*puVar5 >> 4 & 3) + 1);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,iVar4,8,
                   (undefined4)
                   gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(((int)((*puVar5 >> 10) << 0x16) >> 0x16))) *
                                      (float10)*(double *)&REFG(double, 0x10969f8))))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,iVar4,9,*puVar5 >> 0x14 & 0xf);
      }
      *(uint *)((int)this + iVar4 * 8 - 0x698) = puVar5[-1];
      uVar2 = *puVar5;
      puVar5 = puVar5 + 2;
      param_2 = param_2 - 1;
      *puVar1 = uVar2 & 0xfffffff;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_004d8030 */
GEN_FRAME unsigned int GEN_THISCALL F_004d8030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d8030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint * puVar4;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = -4 - param_2;
    puVar4 = (uint *)(param_2 + 4);
    param_2 = *(int *)(param_1 + 0x14);
    do {
      iVar3 = *((ushort *)GEN_TOP(((int)puVar4 + *(int *)(param_1 + 0x18) + iVar2))) + 0x101;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x104))))
                (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,iVar3,*(undefined4 *)(puVar4[-1] + 0x30));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,iVar3,1,(*puVar4 & 3) + 1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,iVar3,2,(*puVar4 >> 2 & 3) + 1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,iVar3,3,(*puVar4 >> 4 & 3) + 1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,iVar3,8,
                 (undefined4)
                 gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(((int)((*puVar4 >> 10) << 0x16) >> 0x16))) *
                                    (float10)*(double *)&REFG(double, 0x10969f8))))));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,iVar3,9,*puVar4 >> 0x14 & 0xf);
      *(uint *)((int)this + iVar3 * 8 - 0x698) = puVar4[-1];
      uVar1 = *puVar4;
      puVar4 = puVar4 + 2;
      param_2 = param_2 - 1;
      *(uint *)((int)this + iVar3 * 8 - 0x694) = uVar1 & 0xfffffff;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_004d8160 */
GEN_FRAME uint GEN_THISCALL F_004d8160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d8160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar5 = 0;
  if (uVar1 != 0) {
    iVar3 = (int)this + (200 - param_2);
    puVar4 = (uint *)(param_2 + 4);
    do {
      uVar2 = *puVar4;
      if (*(uint *)(iVar3 + (int)puVar4) < uVar2 ||
          *(uint *)((int)this + uVar5 * 8 + 200) != puVar4[-1]) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x1b4))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,
                   (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x10) + (-4 - param_2) + (int)puVar4))),
                   puVar4[-1],uVar2);
        *(uint *)((int)this + uVar5 * 8 + 200) = puVar4[-1];
        *(uint *)((int)this + uVar5 * 8 + 0xcc) = *puVar4;
      }
      else {
        *(uint *)(iVar3 + (int)puVar4) = uVar2;
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (uVar5 < uVar1);
  }
  return (int)this + 200;
}

/* ref: FUN_004d8210 */
GEN_FRAME uint GEN_THISCALL F_004d8210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d8210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x1b4))))
                (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x10) + uVar2 * 8)))
                 ,*(undefined4 *)(param_2 + uVar2 * 8),*(undefined4 *)(param_2 + 4 + uVar2 * 8));
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  uVar3 = F_00c46aa0((int)this + 200,param_2,uVar1 * 8);
  return (uint)uVar3;
}

/* ref: FUN_004d8280 */
GEN_FRAME uint GEN_THISCALL F_004d8280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d8280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort * puVar6;
  ushort * puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar8 = *(uint *)(param_1 + 0xc);
  iVar3 = *(int *)((int)this + 0xc0);
  uVar4 = *(uint *)(iVar3 + 0xc);
  (*(uint *)(gen_frame + 0xc)) = 0;
  F_00c46aa0(((undefined4 *)(gen_frame + 0x18)),(int)this + 200,uVar4 * 8);
  (*(uint *)(gen_frame + 0x10)) = 0;
  uVar9 = 0;
  if (uVar8 != 0) {
    do {
      iVar1 = (*(uint *)(gen_frame + 0x10)) * 8;
      puVar6 = ((ushort *)GEN_TOP((*(int *)(param_1 + 0x10) + iVar1)));
      *(undefined4 *)(iVar1 + 200 + (int)this) = 0;
      *(undefined4 *)(iVar1 + 0xcc + (int)this) = 0;
      uVar10 = uVar9;
      uVar5 = (*(uint *)(gen_frame + 0xc));
      if (uVar9 < uVar4) {
        uVar2 = *puVar6;
        puVar7 = ((ushort *)GEN_TOP((*(int *)(iVar3 + 0x10) + uVar9 * 8)));
        do {
          if (uVar2 == *puVar7 && puVar7[1] <= puVar6[1]) {
            *(undefined4 *)((*(uint *)(gen_frame + 0x10)) * 8 + 200 + (int)this) = ((undefined4 *)(gen_frame + 0x18))[(int)(uVar9 * 2)];
            *(undefined4 *)((*(uint *)(gen_frame + 0x10)) * 8 + 0xcc + (int)this) = ((undefined4 *)(gen_frame + 0x18))[(int)(uVar9 * 2 + 1)];
            uVar10 = uVar9 + 1;
            uVar5 = uVar9 + 1;
            break;
          }
          uVar10 = uVar9;
          uVar5 = uVar9;
          if (uVar2 < *puVar7) break;
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 4;
          uVar10 = (*(uint *)(gen_frame + 0xc));
          uVar5 = (*(uint *)(gen_frame + 0xc));
        } while (uVar9 < uVar4);
      }
      (*(uint *)(gen_frame + 0xc)) = uVar5;
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
      uVar9 = uVar10;
    } while ((*(uint *)(gen_frame + 0x10)) < uVar8);
  }
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x1ac))))
                    (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x28));
  *(int *)((int)this + 0xc0) = param_1;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return uVar8;
}

/* ref: FUN_004d83c0 */
GEN_FRAME uint GEN_THISCALL F_004d83c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d83c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  uint * puVar5;
  uint uVar6;
  uint uVar7;
  int local_c;
  
  local_c = *(int *)(param_1 + 0x14);
  if (local_c != 0) {
    puVar5 = (uint *)(param_2 + 4);
    do {
      uVar6 = (uint)*((ushort *)GEN_TOP(((int)puVar5 + (-4 - param_2) + *(int *)(param_1 + 0x18))));
      uVar2 = puVar5[-1];
      if (uVar2 != *(uint *)((int)this + uVar6 * 8 + 0x194)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x104))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar6,*(undefined4 *)(uVar2 + 0x30));
        uVar3 = *(uint *)((int)this + uVar6 * 8 + 0x194);
        if (4 < uVar3) {
          *(uint *)((int)this + uVar6 * 8 + 0x198) =
               (uint)(*(char *)(uVar2 + 0x27) != *(char *)(uVar3 + 0x27)) << 0x1c |
               *(uint *)((int)this + uVar6 * 8 + 0x198) & 0xfffffff;
        }
      }
      puVar1 = (uint *)((int)this + uVar6 * 8 + 0x198);
      if (*puVar5 != *puVar1) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar6,1,(*puVar5 & 3) + 1);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar6,2,(*puVar5 >> 2 & 3) + 1);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar6,3,(*puVar5 >> 4 & 3) + 1);
        uVar3 = *puVar5 >> 6 & 0xf;
        if (uVar3 != (*puVar1 >> 6 & 0xf)) {
          if (uVar3 == 0xf) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                      (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar6,5,2);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                      (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar6,6,3);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                      (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar6,7,2);
          }
          else {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                      (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar6,5,
                       *(undefined4 *)(&REFG(undefined, 0x1096bf4) + (*puVar5 >> 9 & 1) * 4));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                      (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar6,6,
                       *(undefined4 *)(&REFG(undefined, 0x1096bec) + (*puVar5 >> 6 & 1) * 4));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                      (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar6,7,
                       *(undefined4 *)(&REFG(undefined, 0x1096be0) + (*puVar5 >> 7 & 3) * 4));
          }
        }
        fVar4 = 3.088944e-09;
        if (*(char *)(uVar2 + 0x27) == '\0') {
          fVar4 = ((float)GEN_TOF((((float10)GEN_TOD(((int)((*puVar5 >> 10) << 0x16) >> 0x16))) *
                         (float10)*(double *)&REFG(double, 0x10969f8))));
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar6,8,(undefined4)gen_fl2bits(fVar4));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar6,9,*puVar5 >> 0x14 & 0xf);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar6,10,
                   *(undefined4 *)(&REFG(undefined, 0x1096bc0) + (*(byte *)((int)puVar5 + 3) & 7) * 4));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar6,0xb,*puVar5 >> 0x1b & 1);
      }
      *(uint *)((int)this + uVar6 * 8 + 0x194) = puVar5[-1];
      uVar2 = *puVar5;
      puVar5 = puVar5 + 2;
      local_c = local_c - 1;
      *puVar1 = uVar2 & 0xfffffff;
    } while (local_c != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x1c);
  uVar6 = ~uVar2 & *(uint *)((int)this + 0x214);
  if (uVar6 != 0) {
    uVar7 = 0;
    uVar3 = 1;
    do {
      if ((uVar6 & uVar3) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x104))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar7,0);
        *(undefined4 *)((int)this + uVar7 * 8 + 0x194) = 0;
      }
      uVar7 = uVar7 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    } while (uVar7 < 0x10);
  }
  *(uint *)((int)this + 0x214) = uVar2;
  return uVar2;
}

/* ref: FUN_004d8690 */
GEN_FRAME uint GEN_THISCALL F_004d8690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d8690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  float fVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = -4 - param_2;
    puVar4 = (uint *)(param_2 + 4);
    param_2 = *(int *)(param_1 + 0x14);
    do {
      uVar1 = puVar4[-1];
      uVar5 = (uint)*((ushort *)GEN_TOP(((int)puVar4 + *(int *)(param_1 + 0x18) + iVar2)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x104))))
                (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar5,*(undefined4 *)(uVar1 + 0x30));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar5,1,(*puVar4 & 3) + 1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar5,2,(*puVar4 >> 2 & 3) + 1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar5,3,(*puVar4 >> 4 & 3) + 1);
      if ((*puVar4 & 0x3c0) == 0x3c0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar5,5,2);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar5,6,3);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar5,7,1);
      }
      else {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar5,5,
                   *(undefined4 *)(&REFG(undefined, 0x1096c30) + (*puVar4 >> 9 & 1) * 4));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar5,6,
                   *(undefined4 *)(&REFG(undefined, 0x1096c28) + (*puVar4 >> 6 & 1) * 4));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar5,7,
                   *(undefined4 *)(&REFG(undefined, 0x1096c1c) + (*puVar4 >> 7 & 3) * 4));
      }
      fVar3 = 3.088944e-09;
      if (*(char *)(uVar1 + 0x27) == '\0') {
        fVar3 = ((float)GEN_TOF((((float10)GEN_TOD(((int)((*puVar4 >> 10) << 0x16) >> 0x16))) *
                       (float10)*(double *)&REFG(double, 0x10969f8))));
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar5,8,(undefined4)gen_fl2bits(fVar3));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar5,9,*puVar4 >> 0x14 & 0xf);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar5,10,
                 *(undefined4 *)(&REFG(undefined, 0x1096bfc) + (*(byte *)((int)puVar4 + 3) & 7) * 4));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x114))))
                (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar5,0xb,*puVar4 >> 0x1b & 1);
      *(uint *)((int)this + uVar5 * 8 + 0x194) = puVar4[-1];
      uVar1 = *puVar4;
      puVar4 = puVar4 + 2;
      param_2 = param_2 - 1;
      *(uint *)((int)this + uVar5 * 8 + 0x198) = uVar1 & 0xfffffff;
    } while (param_2 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (~uVar1 != 0) {
    uVar6 = 0;
    uVar5 = 1;
    do {
      if ((~uVar1 & uVar5) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x104))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar6,0);
        *(undefined4 *)((int)this + uVar6 * 8 + 0x194) = 0;
      }
      uVar6 = uVar6 + 1;
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    } while (uVar6 < 0x10);
  }
  *(uint *)((int)this + 0x214) = uVar1;
  return uVar1;
}

/* ref: FUN_004d8900 */
GEN_FRAME uint GEN_THISCALL F_004d8900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d8900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint local_8;
  
  if (*(char *)((int)this + 0x20) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa8))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD);
    *(undefined1 *)((int)this + 0x20) = 0;
  }
  uVar1 = *(uint *)(param_1 + 4);
  local_8 = (uint)((uVar1 & 1) != 0);
  if ((uVar1 & 2) != 0) {
    local_8 = local_8 | 2;
  }
  if ((uVar1 & 4) != 0) {
    local_8 = local_8 | 4;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xac))))
                    (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,(uint)(*(int *)(param_1 + 0x14) != 0),
                     *(int *)(param_1 + 0x14),local_8,
                     CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 0xb),
                                                *(undefined1 *)(param_1 + 8)),
                                       *(undefined1 *)(param_1 + 9)),*(undefined1 *)(param_1 + 10)),
                     *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  return uVar1;
}

/* ref: FUN_004d89a0 */
GEN_FRAME uint GEN_THISCALL F_004d89a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d89a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x20) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa8))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD);
    *(undefined1 *)((int)this + 0x20) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x3c)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,0,0,0,0,0);
  return uVar2;
}

/* ref: FUN_004d89e0 */
GEN_FRAME uint GEN_THISCALL F_004d89e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d89e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x14) + 0x30)));
  if (piVar1 == (int *)0x0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x14) + 0x34)));
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
  }
  else {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x18),&(*(int * PTR32 *)(gen_frame + 0x0)));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x30)));
  if (piVar1 == (int *)0x0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x34)));
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  }
  else {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG,*(undefined4 *)(param_1 + 8),&(*(int * PTR32 *)(gen_frame + 0x4)));
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  (*(int *)(gen_frame + 0x8)) = iVar2;
  (*(int *)(gen_frame + 0xc)) = iVar3;
  if (piVar1 == (int *)0x0) {
    bVar5 = (byte)*(undefined4 *)(param_1 + 0x18);
    uVar4 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x14) + 0x18))) >> (bVar5 & 0x1f);
    uVar6 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x14) + 0x1c))) >> (bVar5 & 0x1f);
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    (*(int *)(gen_frame + 0x10)) = iVar2 + uVar4;
    (*(int *)(gen_frame + 0x14)) = iVar3 + uVar6;
  }
  else {
    (*(int *)(gen_frame + 0x10)) = (piVar1[2] - *piVar1) + iVar2;
    (*(int *)(gen_frame + 0x14)) = (piVar1[3] - piVar1[1]) + iVar3;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x88))))
            (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x0)),piVar1,(*(int * PTR32 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)),1);
  if ((*(int * PTR32 *)(gen_frame + 0x4)) != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  }
  uVar4 = 0;
  if ((*(int * PTR32 *)(gen_frame + 0x0)) != (int *)0x0) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_004d8b40 */
GEN_FRAME uint GEN_STDCALL F_004d8b40(unsigned int gen_a0)
{
  GEN_ENTER(0x4d8b40u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  sbyte sVar6;
  uint uVar7;
  
  iVar4 = (int)param_1;
  uVar7 = *(uint *)((int)param_1 + 0x14);
  sVar6 = 0;
  if ((*(uint *)(uVar7 + 0x28) & 0xf000) == 0x3000) {
    sVar6 = 2;
  }
  uVar5 = *(uint *)(uVar7 + 0x2c) & 0x3c00000;
  if (uVar5 == 0x800000) {
    puVar1 = (undefined4 *)((int)param_1 + 0x18);
    param_1 = ((int *)GEN_TOP(((*(uint *)(uVar7 + 0x1c) >> ((byte)*puVar1 & 0x1f)) >> sVar6)));
    if (param_1 == (int *)0x0) {
      param_1 = (int *)0x1;
    }
    piVar2 = *(int * PTR32 *)(uVar7 + 0x30);
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar4 + 4) + 0x30)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2 GEN_EDX_ARG,*puVar1,&(*(int *)(gen_frame + 0x10)),0,0x10);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar4 + 8),&(*(int *)(gen_frame + 0x4)),0,0);
    F_00c46aa0((*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x10)) * (int)param_1);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar4 + 8));
    uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x50))(piVar2 GEN_EDX_ARG,*(undefined4 *)(iVar4 + 0x18));
    return uVar7;
  }
  if (uVar5 == 0x1000000) {
    puVar1 = (undefined4 *)((int)param_1 + 0x18);
    param_1 = ((int *)GEN_TOP(((*(uint *)(uVar7 + 0x20) >> ((byte)*puVar1 & 0x1f)) >> sVar6)));
    if (param_1 == (int *)0x0) {
      param_1 = (int *)0x1;
    }
    piVar2 = *(int * PTR32 *)(uVar7 + 0x30);
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar4 + 4) + 0x30)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2 GEN_EDX_ARG,*puVar1,((undefined1 *)(gen_frame + 0x0)),0,0x10);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar4 + 8),((undefined1 *)(gen_frame + 0xc)),0,0);
    F_00c46aa0((*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x8)),(*(int *)(gen_frame + 0x4)) * (int)param_1);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar4 + 8));
    uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x50))(piVar2 GEN_EDX_ARG,*(undefined4 *)(iVar4 + 0x18));
    return uVar7;
  }
  if (uVar5 != 0x2000000) {
    return uVar7;
  }
  uVar5 = (*(uint *)(uVar7 + 0x1c) >> ((byte)*(undefined4 *)((int)param_1 + 0x18) & 0x1f)) >> sVar6;
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  if (uVar5 == 0) {
    (*(uint *)(gen_frame + 0x18)) = 1;
  }
  uVar5 = *(uint *)(uVar7 + 0x2c) & 0x3c00000;
  if (uVar5 != 0x800000) {
    if (uVar5 == 0x1000000) {
      param_1 = *(int * PTR32 *)(uVar7 + 0x30);
      goto LAB_004d8be6;
    }
    if (uVar5 == 0x2000000) {
      param_1 = *(int * PTR32 *)(uVar7 + 0x30);
      goto LAB_004d8be6;
    }
  }
  param_1 = *(int * PTR32 *)(uVar7 + 0x30);
LAB_004d8be6: ;
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar4 + 4) + 0x30)));
  uVar7 = 0;
  do {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x4c))(param_1 GEN_EDX_ARG,uVar7,*(undefined4 *)(iVar4 + 0x18),&(*(int *)(gen_frame + 0x10)),0,0x10);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2 GEN_EDX_ARG,uVar7,*(undefined4 *)(iVar4 + 8),&(*(int *)(gen_frame + 0x4)),0,0);
    F_00c46aa0((*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x10)) * (*(uint *)(gen_frame + 0x18)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x50))(piVar2 GEN_EDX_ARG,uVar7,*(undefined4 *)(iVar4 + 8));
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x50))(param_1 GEN_EDX_ARG,uVar7,*(undefined4 *)(iVar4 + 0x18));
    uVar7 = uVar7 + 1;
  } while (uVar7 < 6);
  return uVar5;
}

/* ref: FUN_004d8da0 */
GEN_FRAME uint GEN_STDCALL F_004d8da0(unsigned int gen_a0)
{
  GEN_ENTER(0x4d8da0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = param_1;
  if (((*((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x2c))) & 0x200000) == 0) &&
     ((*((uint *)GEN_TOP((*(int *)(param_1 + 0x14) + 0x2c))) & 0x300000) == 0)) {
    uVar1 = F_004d8b40(param_1);
  }
  return uVar1;
}

/* ref: FUN_004d8dd0 */
GEN_FRAME uint GEN_THISCALL F_004d8dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d8dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x20) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa8))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD);
    *(undefined1 *)((int)this + 0x20) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x30)));
  if (piVar1 == (int *)0x0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x34)));
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  }
  else {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG,*(uint *)(param_1 + 0x14) & 0x7fffffff,&(*(int * PTR32 *)(gen_frame + 0x4)));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x30)));
  if (piVar1 == (int *)0x0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x34)));
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar1;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  }
  else {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG,*(undefined4 *)(param_1 + 8),&(*(int * PTR32 *)(gen_frame + 0x8)));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x88))))
            (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x4)),*(undefined4 *)(param_1 + 0x18),(*(int * PTR32 *)(gen_frame + 0x8)),
             *(undefined4 *)(param_1 + 0xc),((*(uint *)(param_1 + 0x14) & 0x80000000) != 0) + 1);
  if ((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  }
  uVar2 = 0;
  if ((*(int * PTR32 *)(gen_frame + 0x4)) != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_004d8ef0 */
GEN_FRAME uint GEN_THISCALL F_004d8ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d8ef0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[1] + 0x38 + REFG(int, 0x1375a3c) * 4)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_FWD,0,&(*(int * PTR32 *)&gen_args[1]));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0x80))))
            (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG,*(undefined4 *)(piVar2[1] + 0x34),(*(int * PTR32 *)&gen_args[1]));
  uVar3 = 0;
  if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_004d8f50 */
GEN_FRAME uint GEN_STDCALL F_004d8f50(unsigned int gen_a0)
{
  GEN_ENTER(0x4d8f50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  code * pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar6 = *(int *)(iVar1 + 0x38 + REFG(int, 0x1375a3c) * 4);
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x34) != 0) {
      uVar3 = gen_imp_D3DXSaveSurfaceToFileA(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                         *(int *)(iVar1 + 0x34),0,0);
      goto LAB_004d8fc1;
    }
    iVar6 = *(int *)(iVar1 + 0x30);
    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar4 = *(undefined4 *)(param_1 + 4);
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar4 = *(undefined4 *)(param_1 + 4);
  }
  uVar3 = gen_imp_D3DXSaveTextureToFileA(uVar4,uVar5,iVar6,0);
LAB_004d8fc1: ;
  pcVar2 = *(gen_code32 *)(param_1 + 0x14);
  if (pcVar2 != (code *)0x0) {
    uVar5 = *(undefined4 *)(iVar1 + 0x18);
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x109694c);
    (*(undefined4 *)(gen_frame + 0x10)) = uVar5;
    (*(undefined4 *)(gen_frame + 0x14)) = uVar4;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    uVar3 = (*pcVar2)(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return uVar3;
}

/* ref: FUN_004d9000 */
GEN_FRAME byte GEN_THISCALL F_004d9000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_FWD,5,0);
  (*(undefined4 *)(gen_frame + 0x18)) = 0x73686364;
  uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x18)),"shader/shcd/SaveTextureRightsVS.shcd",0,0,0);
  *(uint *)((int)this + 4) = uVar2;
  if (uVar2 != 0) {
    uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x18)),"shader/shcd/SaveTextureRightsPS.shcd",0,0,0);
    *(uint *)((int)this + 8) = uVar2;
    if (uVar2 != 0) {
      F_004ff310(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0,0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0x746578;
      uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x10)),"common/graphics/texture/screenShotCopyRights.tex",0,0
                           ,0);
      *(uint *)((int)this + 0xc) = uVar2;
      if (uVar2 != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x98)));
        if (piVar1 != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
        }
        piVar1 = *(int * PTR32 *)((int)this + 0x10);
        if (piVar1 != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
        }
        *(undefined4 *)((int)this + 0x10) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0x98)));
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 0x9c)));
        if (piVar1 != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
        }
        piVar1 = *(int * PTR32 *)((int)this + 0x14);
        if (piVar1 != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
        }
        *(undefined4 *)((int)this + 0x14) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x9c)));
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xfc)));
        if (piVar1 != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
        }
        piVar1 = *(int * PTR32 *)((int)this + 0x18);
        if (piVar1 != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
        }
        *(undefined4 *)((int)this + 0x18) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xfc)));
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_004d9130 */
GEN_FRAME byte GEN_THISCALL F_004d9130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d9130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;
  if (*(int *)((int)this + 0x34) != 0) {
    return 0;
  }
  F_00c4a8e0((wchar_t *)((int)this + 0x48),0x104,param_1);
  *(wchar_t * PTR32 *)((int)this + 0x34) = (wchar_t *)((int)this + 0x48);
  return 1;
}

/* ref: FUN_004d9170 */
GEN_NOFRAME uint GEN_THISCALL F_004d9170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HANDLE pvVar1;
  
  F_004cefe0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x1096c3c));
  pvVar1 = gen_imp_CreateEventA(0,0,0,0);
  *(HANDLE *)((int)this + 0x18) = pvVar1;
  pvVar1 = gen_imp_CreateEventA(0,0,0,0);
  *(HANDLE *)((int)this + 0x1c) = pvVar1;
  *(undefined4 *)((int)this + 0x38) = 0;
  return (uint)this;
}

/* ref: FUN_004d91b0 */
GEN_FRAME unsigned int GEN_THISCALL F_004d91b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d91b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  *(undefined4 *)((int)this + 0x20) = *param_1;
  *(undefined4 *)((int)this + 0x24) = param_1[1];
  *(undefined4 *)((int)this + 0x28) = param_1[2];
  *(undefined4 *)((int)this + 0x2c) = param_1[3];
  *(undefined4 *)((int)this + 0x30) = param_1[4];
  *(undefined4 *)((int)this + 0x34) = param_1[5];
  ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  *(int * PTR32 *)((int)this + 0x38) = param_2;
  return (uint)(gen_imp_SetEvent(*(HANDLE *)((int)this + 0x18)));
}

/* ref: FUN_004d9220 */
GEN_NOFRAME uint GEN_THISCALL F_004d9220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  gen_imp_SetEvent(*(HANDLE *)((int)this + 0x18));
  uVar1 = F_004cf020(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::SaveTextureWork::SaveThread::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004d9240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d9240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 SVar1;
  int * piVar2;
  undefined4 uVar3;
  
  SVar1 = this[0x14];
  while ((SVar1 == (undefined1)0x0 &&
         (gen_imp_WaitForSingleObject(*(undefined4 *)(this + 0x18),0xffffffff),
         this[0x14] == (undefined1)0x0))) {
    uVar3 = gen_imp_D3DXSaveSurfaceToFileW(*(undefined4 *)(this + 0x24),*(undefined4 *)(this + 0x28),
                       *(undefined4 *)(this + 0x38),0,0);
    *(undefined4 *)(this + 0x3c) = uVar3;
    piVar2 = *(int * PTR32 *)(this + 0x38);
    if (piVar2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
      *(undefined4 *)(this + 0x38) = 0;
    }
    gen_imp_SetEvent(*(HANDLE *)(this + 0x1c));
    SVar1 = this[0x14];
  }
  return 0;
}

/* ref: FUN_004d92b0 */
GEN_NOFRAME uint GEN_THISCALL F_004d92b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d92b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HANDLE pvVar1;
  
  F_004cefe0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1096c58));
  pvVar1 = gen_imp_CreateEventA(0,0,0,0);
  *(HANDLE *)((int)this + 0x18) = pvVar1;
  pvVar1 = gen_imp_CreateEventA(0,0,0,0);
  *(HANDLE *)((int)this + 0x1c) = pvVar1;
  return (uint)this;
}

/* ref: FUN_004d92f0 */
GEN_NOFRAME uint GEN_THISCALL F_004d92f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d92f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096c74));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: FUN_004d9320 */
GEN_FRAME uint GEN_THISCALL F_004d9320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d9320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 4);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)((int)this + 0x1c);
  uVar2 = 0;
  if (*(uint *)((int)this + 0x20) != 0) {
    do {
      if (*(int *)(iVar1 + uVar2 * 8) == 0) {
        *(undefined4 *)(iVar1 + uVar2 * 8) = param_1;
        *(undefined4 *)(iVar1 + 4 + uVar2 * 8) = param_2;
        *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 0x20));
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0xffffffff;
}

/* ref: FUN_004d9380 */
GEN_FRAME unsigned int GEN_THISCALL F_004d9380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d9380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 8))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + 4 + param_1 * 8))) = 0;
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) - 1;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4)));
}

/* ref: FUN_004d93c0 */
GEN_FRAME unsigned int GEN_THISCALL F_004d93c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d93c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  code * pcVar3;
  uint uVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  uVar1 = *(uint *)((int)this + 0x20);
  iVar2 = *(int *)((int)this + 0x1c);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      pcVar3 = *(gen_code32 *)(iVar2 + uVar4 * 8);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(*(undefined4 *)(iVar2 + 4 + uVar4 * 8));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4)));
}

/* ref: FUN_004d9410 */
GEN_FRAME uint GEN_THISCALL F_004d9410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d9410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = param_1 + 0xfU >> 4;
  piVar1 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*(uint *)((int)this + 8) & 0xf) * 4)));
  _InterlockedExchangeAdd((volatile long *)(piVar1), (long)((uVar2 * 0x10 - (*(uint *)((int)this + 8) & 0xfffffff0))));
  uVar2 = uVar2 << 4;
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xf | uVar2;
  return uVar2;
}

/* ref: FUN_004d9460 */
GEN_NOFRAME uint GEN_THISCALL F_004d9460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  if (*(int *)((int)this + REFG(int, 0x1375a38) * 4 + 0x20) != 0) {
    piVar3 = (int *)((int)this + 0x2c);
    iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar3), (long)(-1));
    if (iVar2 == 1) {
      piVar3 = *(int * PTR32 *)((int)this + REFG(int, 0x1375a38) * 4 + 0x20);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x30))(piVar3 GEN_EDX_FWD);
    }
  }
  if ((*(byte *)((int)this + 0x1c) & 1) == 0) {
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x28) = 0;
    piVar3 = *(int * PTR32 *)((int)this + 0x20);
    if (piVar3 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  else {
    piVar3 = (int *)((int)this + 0x20);
    iVar2 = 3;
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  piVar3 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*(uint *)((int)this + 8) & 0xf) * 4)));
  LOCK();
  *piVar3 = *piVar3 - (*(uint *)((int)this + 8) & 0xfffffff0);
  UNLOCK();
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xf;
  return (uint)piVar3;
}

/* ref: FUN_004d9500 */
GEN_FRAME byte GEN_THISCALL F_004d9500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_c;
  uint local_8;
  
  uVar3 = *(uint *)((int)this + 0x1c);
  local_8 = 0;
  if ((uVar3 & 1) != 0) {
    local_8 = 0x200;
  }
  if ((uVar3 & 0x10) == 0) {
    local_8 = local_8 | 8;
  }
  local_c = (uint)((uVar3 & 4) != 0);
  if ((uVar3 & 0x40) != 0) {
    local_c = 2;
  }
  puVar1 = (undefined4 *)((int)this + 0x20);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x68))))
                    (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18),local_8,0,
                     local_c,puVar1,0);
  if (-1 < (int)uVar3) {
    if ((*(byte *)((int)this + 0x1c) & 1) == 0) {
      *(undefined4 *)((int)this + 0x24) = *puVar1;
      *(undefined4 *)((int)this + 0x28) = *puVar1;
      uVar3 = *(int *)((int)this + 0x18) + 0xfU >> 4;
      piVar2 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*(uint *)((int)this + 8) & 0xf) * 4)));
      _InterlockedExchangeAdd((volatile long *)(piVar2), (long)((uVar3 * 0x10 - (*(uint *)((int)this + 8) & 0xfffffff0))));
      uVar3 = uVar3 << 4 | *(uint *)((int)this + 8) & 0xf;
    }
    else {
      uVar3 = 1;
      iVar5 = (int)this + 0x24;
      do {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x68))))
                          (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18),local_8,
                           0,local_c,iVar5,0);
        if ((int)uVar4 < 0) {
          return 0;
        }
        uVar3 = uVar3 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar3 < 3);
      uVar3 = *(int *)((int)this + 0x18) * 3 + 0xfU >> 4;
      piVar2 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*(uint *)((int)this + 8) & 0xf) * 4)));
      _InterlockedExchangeAdd((volatile long *)(piVar2), (long)((uVar3 * 0x10 - (*(uint *)((int)this + 8) & 0xfffffff0))));
      uVar3 = uVar3 << 4 | *(uint *)((int)this + 8) & 0xf;
    }
    *(uint *)((int)this + 8) = uVar3;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x30) = 0xffffffff;
    return 1;
  }
  return 0;
}

/* ref: FUN_004d9650 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004d9650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(byte *)((int)this + 0x10) & 0x4c) == 0) {
    F_004d9460((undefined *)((int)this - 0xc) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_004d9660 */
GEN_NOFRAME byte GEN_THISCALL F_004d9660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((*(byte *)((int)this + 0x10) & 0x4c) != 0) {
    return 1;
  }
  bVar1 = F_004d9500((undefined *)((int)this - 0xc) GEN_EDX_FWD);
  if (bVar1 == 0) {
    F_004d9460((undefined *)((int)this - 0xc) GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004d9690 */
GEN_NOFRAME uint GEN_THISCALL F_004d9690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  if (*(int *)((int)this + REFG(int, 0x1375a38) * 4 + 0x24) != 0) {
    piVar3 = (int *)((int)this + 0x30);
    iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar3), (long)(-1));
    if (iVar2 == 1) {
      piVar3 = *(int * PTR32 *)((int)this + REFG(int, 0x1375a38) * 4 + 0x24);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x30))(piVar3 GEN_EDX_FWD);
    }
  }
  if ((*(byte *)((int)this + 0x20) & 1) == 0) {
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    piVar3 = *(int * PTR32 *)((int)this + 0x24);
    if (piVar3 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  else {
    piVar3 = (int *)((int)this + 0x24);
    iVar2 = 3;
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  piVar3 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*(uint *)((int)this + 8) & 0xf) * 4)));
  LOCK();
  *piVar3 = *piVar3 - (*(uint *)((int)this + 8) & 0xfffffff0);
  UNLOCK();
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xf;
  return (uint)piVar3;
}

/* ref: FUN_004d9730 */
GEN_FRAME byte GEN_THISCALL F_004d9730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  if (*(int *)((int)this + 0x1c) == 1) {
    local_c = 0x65;
  }
  else {
    if (*(int *)((int)this + 0x1c) != 2) {
      return 0;
    }
    local_c = 0x66;
  }
  uVar3 = *(uint *)((int)this + 0x20);
  local_8 = 0;
  if ((uVar3 & 1) != 0) {
    local_8 = 0x200;
  }
  if ((uVar3 & 0x10) == 0) {
    local_8 = local_8 | 8;
  }
  uVar4 = (uint)((uVar3 & 4) != 0);
  if ((uVar3 & 0x40) != 0) {
    uVar4 = 2;
  }
  puVar1 = (undefined4 *)((int)this + 0x24);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x6c))))
                    (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18),local_8,
                     local_c,uVar4,puVar1,0);
  if ((int)uVar3 < 0) {
    return 0;
  }
  if ((*(byte *)((int)this + 0x20) & 1) == 0) {
    *(undefined4 *)((int)this + 0x28) = *puVar1;
    *(undefined4 *)((int)this + 0x2c) = *puVar1;
    iVar5 = *(int *)((int)this + 0x18);
  }
  else {
    local_10 = 1;
    iVar5 = (int)this + 0x28;
    do {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x6c))))
                        (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18),local_8,
                         local_c,uVar4,iVar5,0);
      if ((int)uVar3 < 0) {
        return 0;
      }
      local_10 = local_10 + 1;
      iVar5 = iVar5 + 4;
    } while (local_10 < 3);
    iVar5 = *(int *)((int)this + 0x18) * 3;
  }
  uVar3 = iVar5 + 0xfU >> 4;
  piVar2 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*(uint *)((int)this + 8) & 0xf) * 4)));
  _InterlockedExchangeAdd((volatile long *)(piVar2), (long)((uVar3 * 0x10 - (*(uint *)((int)this + 8) & 0xfffffff0))));
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xf | uVar3 << 4;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  return 1;
}

/* ref: FUN_004d9870 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004d9870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(byte *)((int)this + 0x14) & 0x4c) == 0) {
    F_004d9690((undefined *)((int)this - 0xc) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_004d9880 */
GEN_NOFRAME byte GEN_THISCALL F_004d9880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((*(byte *)((int)this + 0x14) & 0x4c) != 0) {
    return 1;
  }
  bVar1 = F_004d9730((undefined *)((int)this - 0xc) GEN_EDX_FWD);
  if (bVar1 == 0) {
    F_004d9690((undefined *)((int)this - 0xc) GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004d98b0 */
GEN_NOFRAME uint GEN_THISCALL F_004d98b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d98b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 1) != 0) {
      piVar2 = (int *)((int)this + 0x14);
      iVar3 = 3;
      do {
        uVar1 = 0;
        if (*piVar2 != 0) {
          uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))
                            (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,*piVar2);
          *piVar2 = 0;
        }
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      return uVar1;
    }
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    uVar1 = 0;
    if (*(int *)((int)this + 0x14) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,*(int *)((int)this + 0x14));
      *(undefined4 *)((int)this + 0x14) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_004d9920 */
GEN_FRAME uint GEN_THISCALL F_004d9920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d9920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_2;
  if (param_2 == 0) {
    iVar3 = *(int *)((int)this + 0xc) - param_1;
  }
  uVar2 = param_1 + iVar3;
  if ((uVar2 <= *(uint *)((int)this + 0xc)) &&
     (((*(uint *)((int)this + 0x10) & 3) == 0 || ((param_3 & 1) == 0)))) {
    if ((*(uint *)((int)this + 0x10) & 2) == 0) {
      iVar3 = *(int *)((int)this + REFG(int, 0x1375a38) * 4 + 0x14);
      *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0xc);
      *(int *)((int)this + 0x20) = iVar3;
      return iVar3 + param_1;
    }
    uVar1 = F_004d4760(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) +
                                   0x1a8))) GEN_EDX_ARG,uVar2);
    *(uint *)((int)this + 0x20) = uVar1;
    if (uVar1 != 0) {
      *(uint *)((int)this + 0x24) = uVar2;
      *(uint *)((int)this + 0x28) = param_1 + 0xf + iVar3 & 0xfffffff0;
      return uVar1 + param_1;
    }
  }
  return 0;
}

/* ref: FUN_004d99c0 */
GEN_FRAME byte GEN_THISCALL F_004d99c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d99c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  byte * pbVar7;
  byte * pbVar8;
  
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,param_2 * 4,0x10);
  *(uint *)((int)this + 0xc) = uVar4;
  *(int *)((int)this + 0x10) = param_2;
  if (uVar4 != 0) {
    F_00c46aa0(uVar4,param_1,param_2 * 4);
    piVar1 = *(int * PTR32 *)(REFG(int, 0x1371270) + 8);
    pcVar2 = *(gen_code32 *)(*piVar1 + 8);
    uVar4 = 0;
    (*(uint *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(uint *)(gen_frame + 0x18)) = 0;
    uVar5 = (*pcVar2)(piVar1,param_2 * 8 + 8,0x10);
    (*(uint *)(gen_frame + 0xc)) = uVar5;
    if (param_2 != 0) {
      pbVar7 = (byte *)(param_1 + 3);
      pbVar8 = (byte *)(uVar5 + 4);
      param_1 = param_2;
      do {
        *(ushort *)(pbVar8 - 4) = (ushort)pbVar7[-3];
        *(ushort *)(pbVar8 - 2) = (ushort)pbVar7[-2];
        bVar3 = F_004d5660((uint)pbVar7[-1]);
        *pbVar8 = bVar3;
        pbVar8[1] = 0;
        F_004d5770((uint)*pbVar7,pbVar8 + 2,pbVar8 + 3);
        bVar3 = pbVar7[-3];
        (*(uint *)(gen_frame + 0x8)) = (uint)bVar3;
        puVar6 = &(*(uint *)(gen_frame + 0x10));
        if (uVar4 <= bVar3) {
          puVar6 = &(*(uint *)(gen_frame + 0x8));
        }
        uVar4 = *puVar6;
        bVar3 = *pbVar7;
        (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) | 1 << (pbVar7[-3] & 0x1f);
        pbVar8 = pbVar8 + 8;
        pbVar7 = pbVar7 + 4;
        (*(uint *)(gen_frame + 0x10)) = uVar4;
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) | 1 << (bVar3 & 0x1f);
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    *(undefined4 *)((*(uint *)(gen_frame + 0xc)) + param_2 * 8) = 0xff;
    *(undefined4 *)((*(uint *)(gen_frame + 0xc)) + 4 + param_2 * 8) = 0x11;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x158))))
                      (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) GEN_EDX_ARG,(*(uint *)(gen_frame + 0xc)),(int)this + 0x20);
    if ((*(uint *)(gen_frame + 0xc)) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,(*(uint *)(gen_frame + 0xc)));
    }
    *(uint *)((int)this + 0x14) = uVar4;
    *(uint *)((int)this + 0x18) = (*(uint *)(gen_frame + 0x18));
    *(uint *)((int)this + 0x1c) = (*(uint *)(gen_frame + 0x14));
    return -1 < (int)uVar5;
  }
  return 0;
}

/* ref: FUN_004d9b40 */
GEN_NOFRAME uint GEN_THISCALL F_004d9b40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x20);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  return uVar2;
}

/* ref: FUN_004d9b80 */
GEN_FRAME byte GEN_THISCALL F_004d9b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d9b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  *(int *)((int)this + 0xc) = param_1;
  *(int *)((int)this + 0x14) = param_2;
  if (param_1 + param_2 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,(param_1 + param_2) * 8,0x10);
    *(uint *)((int)this + 0x10) = uVar1;
    if (uVar1 == 0) {
      return 0;
    }
    *(uint *)((int)this + 0x18) = uVar1 + param_1 * 8;
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    if (param_2 == 0) {
      *(undefined4 *)((int)this + 0x18) = 0;
    }
  }
  *(int *)((int)this + 0x20) = (*(int *)((int)this + 0x14) + *(int *)((int)this + 0xc)) * 8;
  return 1;
}

/* ref: FUN_004d9c00 */
GEN_NOFRAME uint GEN_THISCALL F_004d9c00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x20) = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    uVar1 = 0;
    if (*(int *)((int)this + 0x18) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,*(int *)((int)this + 0x18));
      *(undefined4 *)((int)this + 0x18) = 0;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x18) = 0;
    uVar1 = 0;
    if (*(int *)((int)this + 0x10) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,*(int *)((int)this + 0x10));
      *(undefined4 *)((int)this + 0x10) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 0x14) = 0;
      return uVar1;
    }
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar1;
}

/* ref: FUN_004d9c60 */
GEN_NOFRAME uint GEN_THISCALL F_004d9c60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x2c);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  uVar2 = F_004d9c00(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_004d9c90 */
GEN_NOFRAME uint GEN_THISCALL F_004d9c90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x28);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  uVar2 = F_004d9c00(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_004d9cc0 */
GEN_FRAME uint GEN_THISCALL F_004d9cc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  
  if (*(int *)((int)this + 0x44) != 0) {
    bVar1 = *(byte *)((int)this + 0x24);
    uVar4 = 0;
    if (bVar1 != 0) {
      iVar5 = 0;
      do {
        iVar2 = *((int *)GEN_TOP((iVar5 + *(int *)((int)this + 0x44))));
        if (iVar2 != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_FWD,iVar2);
          *((undefined4 *)GEN_TOP((iVar5 + *(int *)((int)this + 0x44)))) = 0;
        }
        if (*((int *)GEN_TOP((iVar5 + 4 + *(int *)((int)this + 0x44)))) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x50))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG,uVar4);
          *((undefined4 *)GEN_TOP((iVar5 + 4 + *(int *)((int)this + 0x44)))) = 0;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0xc;
      } while (uVar4 < bVar1);
    }
    if (*(int *)((int)this + 0x44) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))
                (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,*(int *)((int)this + 0x44));
      *(undefined4 *)((int)this + 0x44) = 0;
    }
  }
  piVar6 = (int *)((int)this + 0x38);
  iVar5 = 3;
  do {
    piVar3 = (int *)*piVar6;
    if (piVar3 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG);
      *piVar6 = 0;
    }
    piVar6 = piVar6 + 1;
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  piVar6 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar6 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 8))(piVar6 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  uVar4 = *(uint *)((int)this + 0x2c) & 0x3c00000;
  if ((((uVar4 == 0x800000) || (uVar4 == 0x1000000)) || (uVar4 == 0x2000000)) &&
     (piVar6 = *(int * PTR32 *)((int)this + 0x30), piVar6 != (int *)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 8))(piVar6 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  piVar6 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*(uint *)((int)this + 8) & 0xf) * 4)));
  LOCK();
  *piVar6 = *piVar6 - (*(uint *)((int)this + 8) & 0xfffffff0);
  UNLOCK();
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xf;
  return (uint)piVar6;
}

/* ref: FUN_004d9de0 */
GEN_FRAME uint GEN_THISCALL F_004d9de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d9de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  byte * pbVar6;
  
  if (((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) & 0x3c00000) != 0x1000000) || (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) == 0))
  {
    return 0;
  }
  uVar5 = 0;
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) & 1) == 0) {
    if ((*(int *)&gen_args[3]) == 1) {
      uVar5 = 0x10;
    }
  }
  else {
    uVar5 = 0x1000;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) + 0x4c))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) GEN_EDX_ARG,(*(int *)&gen_args[1]),((byte *)(gen_frame + 0x0)),0,uVar5);
  if ((int)uVar3 < 0) {
    return 0;
  }
  *(undefined4 *)(*(byte * PTR32 *)&gen_args[2]) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
  *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
  *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 8))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
  pbVar6 = (*(byte * PTR32 *)&gen_args[2]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) != 0) {
    iVar2 = (*(int *)&gen_args[1]) * 0xc;
    iVar1 = *((int *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))));
    if (iVar1 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,iVar1);
      *((undefined4 *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44)))))) = 0;
      pbVar6 = (*(byte * PTR32 *)&gen_args[2]);
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) + 4 + iVar2))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) >> ((byte)(*(int *)&gen_args[1]) & 0x1f);
    (*(int *)&gen_args[3]) = 1;
    (*(byte * PTR32 *)&gen_args[2]) = (byte *)uVar3;
    piVar4 = (int *)&(*(byte * PTR32 *)&gen_args[2]);
    if (uVar3 < 2) {
      piVar4 = &(*(int *)&gen_args[3]);
    }
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) + 8 + iVar2))) = *piVar4 * (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
  }
  return *(uint *)(pbVar6 + 8);
}

/* ref: FUN_004d9ed0 */
GEN_FRAME uint GEN_THISCALL F_004d9ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d9ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((int)this + 0x2c) & 0x3c00000;
  if ((uVar4 == 0x1000000) && (*(int *)((int)this + 0x30) != 0)) {
    if (*(int *)((int)this + 0x44) != 0) {
      iVar3 = param_1 * 0xc;
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + 4 + iVar3)));
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + 8 + iVar3)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,uVar2,0x10);
      F_00c46aa0(uVar4,uVar1,uVar2);
      *((uint *)GEN_TOP((iVar3 + *(int *)((int)this + 0x44)))) = uVar4;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + 4 + iVar3))) = 0;
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x50))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG,param_1);
  }
  return uVar4;
}

/* ref: FUN_004d9f60 */
GEN_FRAME uint F_004d9f60(unsigned int gen_a0)
{
  GEN_ENTER(0x4d9f60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x2461) {
    if (param_1 == 0x2460) {
      return 0x71;
    }
    if (param_1 < 0x1451) {
      if (param_1 == 0x1450) {
        return 0x15;
      }
      if (param_1 < 0x1132) {
        if (param_1 == 0x1131) {
          return 0x1c;
        }
        if (param_1 == 0) {
          return 0;
        }
        if (param_1 == 0x1130) {
          return 0x32;
        }
      }
      else {
        if (param_1 == 0x1440) {
          return 0x1a;
        }
        if (param_1 == 0x1441) {
          return 0x19;
        }
      }
    }
    else if (param_1 < 0x2251) {
      if (param_1 == 0x2250) {
        return 0x70;
      }
      if (param_1 == 0x1451) {
        return 0x16;
      }
      if (param_1 == 0x2150) {
        return 0x72;
      }
    }
    else if (param_1 == 0x2260) {
      return 0x73;
    }
  }
  else if (param_1 < 0x4141) {
    if (param_1 == 0x4140) {
      return 0x50;
    }
    if (param_1 < 0x3431) {
      if (param_1 == 0x3430) {
        return 0x33545844;
      }
      if (param_1 == 0x2470) {
        return 0x74;
      }
      if (param_1 == 0x3420) {
        return 0x31545844;
      }
    }
    else if (param_1 == 0x3431) {
      return 0x35545844;
    }
  }
  else if (param_1 < 0x5141) {
    if (param_1 == 0x5140) {
      if ((*(uint *)(REFG(int, 0x1370b90) + 0x34) >> 3 & 1) != 0) {
        return 0x50;
      }
      if ((*(uint *)(REFG(int, 0x1370b90) + 0x34) >> 4 & 1) == 0) {
        return 0x50;
      }
      return 0x36314644;
    }
    if (param_1 == 0x4250) {
      uVar1 = *(uint *)(REFG(int, 0x1370b90) + 0x34);
      if ((uVar1 >> 2 & 1) != 0) {
        return 0x5a544e49;
      }
      if ((uVar1 >> 1 & 1) == 0) {
        return (-(uint)((uVar1 >> 4 & 1) != 0) & 0x343245f9) + 0x4b;
      }
      return 0x5a574152;
    }
    if (param_1 == 0x5100) {
      return (-(uint)((*(byte *)(REFG(int, 0x1370b90) + 0x34) & 1) != 0) & 0x4c4c5539) + 0x15;
    }
  }
  else if ((param_1 == 0x5150) &&
          (((*(uint *)(REFG(int, 0x1370b90) + 0x34) >> 3 & 1) != 0 ||
           (uVar1 = 0x34324644, (*(uint *)(REFG(int, 0x1370b90) + 0x34) >> 4 & 1) == 0)))) {
    uVar1 = 0x4b;
  }
  return uVar1;
}

/* ref: FUN_004da150 */
GEN_FRAME byte GEN_THISCALL F_004da150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4da150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint * puVar8;
  uint * puVar9;
  uint * puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  
  uVar11 = *(uint *)((int)this + 0x2c);
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0;
  bVar14 = (uVar11 & 0x100000) != 0;
  if (bVar14) {
    (*(uint *)(gen_frame + 0x28)) = 1;
  }
  (*(uint *)(gen_frame + 0x28)) = (uint)bVar14;
  if ((uVar11 & 0x200000) != 0) {
    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) | 2;
  }
  if ((uVar11 & 1) != 0) {
    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) | 0x200;
  }
  bVar14 = (uVar11 & 4) != 0;
  if (bVar14) {
    (*(uint *)(gen_frame + 0x24)) = 1;
  }
  (*(uint *)(gen_frame + 0x24)) = (uint)bVar14;
  if ((uVar11 & 0x40) != 0) {
    (*(uint *)(gen_frame + 0x24)) = 2;
  }
  uVar7 = F_004d9f60(*(undefined4 *)((int)this + 0x28));
  uVar11 = uVar11 & 0x3c00000;
  if (uVar11 == 0x800000) {
    uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x5c))))
                       (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18),
                        *(undefined4 *)((int)this + 0x1c),(uint)*(byte *)((int)this + 0x24),(*(uint *)(gen_frame + 0x28)),
                        uVar7,(*(uint *)(gen_frame + 0x24)),(int)this + 0x30,0);
  }
  else if (uVar11 == 0x1000000) {
    uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x60))))
                       (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18),
                        *(undefined4 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20),
                        (uint)*(byte *)((int)this + 0x24),(*(uint *)(gen_frame + 0x28)),uVar7,(*(uint *)(gen_frame + 0x24)),(int)this + 0x30,0);
  }
  else {
    if (uVar11 != 0x2000000) {
      return 0;
    }
    uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 100))))
                       (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18),
                        (uint)*(byte *)((int)this + 0x24),(*(uint *)(gen_frame + 0x28)),uVar7,(*(uint *)(gen_frame + 0x24)),(int)this + 0x30,0);
  }
  if (-1 < (int)uVar11) {
    bVar2 = *(byte *)((int)this + 0x24);
    uVar11 = *(uint *)((int)this + 0x1c);
    uVar12 = *(uint *)((int)this + 0x18);
    (*(uint *)(gen_frame + 0x1c)) = *(uint *)((int)this + 0x20);
    uVar3 = *(uint *)((int)this + 0x28);
    *(bool *)((int)this + 0x27) = uVar7 == 0x34324644;
    (*(uint *)(gen_frame + 0x14)) = uVar12;
    ((uint *)(gen_frame + 0x0))[4] = uVar11;
    if (bVar2 != 0) {
      ((uint *)(gen_frame + 0x0))[2] = 1;
      ((uint *)(gen_frame + 0x0))[1] = 1;
      ((uint *)(gen_frame + 0x0))[0] = 1;
      ((uint *)(gen_frame + 0x0))[3] = (uint)bVar2;
      do {
        puVar10 = &(*(uint *)(gen_frame + 0x14));
        if (uVar12 < 2) {
          puVar10 = ((uint *)(gen_frame + 0x0)) + 2;
        }
        puVar8 = ((uint *)(gen_frame + 0x0)) + 4;
        if (uVar11 < 2) {
          puVar8 = ((uint *)(gen_frame + 0x0)) + 1;
        }
        (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar8;
        puVar9 = &(*(uint *)(gen_frame + 0x1c));
        if ((*(uint *)(gen_frame + 0x1c)) < 2) {
          puVar9 = ((uint *)(gen_frame + 0x0));
        }
        uVar4 = *puVar10;
        uVar5 = *puVar9;
        uVar6 = *puVar8;
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) >> 1;
        (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + (uVar4 * uVar5 * (1 << ((byte)(uVar3 >> 4) & 0xf)) * uVar6 >> 3);
        uVar12 = uVar12 >> 1;
        uVar11 = uVar11 >> 1;
        uVar4 = ((uint *)(gen_frame + 0x0))[3] - 1;
        ((uint *)(gen_frame + 0x0))[3] = uVar4;
        (*(uint *)(gen_frame + 0x14)) = uVar12;
        ((uint *)(gen_frame + 0x0))[4] = uVar11;
      } while (uVar4 != 0);
    }
    if ((*(uint *)((int)this + 0x2c) & 0x300000) != 0) {
      uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x48))))
                         (*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG,0,(int)this + 0x34);
      if ((int)uVar11 < 0) {
        return 0;
      }
      if (((*(uint *)(gen_frame + 0x24)) == 0) && ((*(byte *)((int)this + 0x2c) & 0x10) != 0)) {
        ((uint *)(gen_frame + 0x0))[3] = 0;
        iVar13 = (int)this + 0x38;
        do {
          uVar11 = (*(uint *)(gen_frame + 0x28)) & 0xfffffffc;
          (*(uint *)(gen_frame + 0x28)) = uVar11;
          uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x5c))))
                             (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18),
                              *(undefined4 *)((int)this + 0x1c),(uint)*(byte *)((int)this + 0x24),
                              uVar11,uVar7,2,iVar13,0);
          if ((int)uVar11 < 0) {
            return 0;
          }
          uVar11 = ((uint *)(gen_frame + 0x0))[3] + 1;
          iVar13 = iVar13 + 4;
          ((uint *)(gen_frame + 0x0))[3] = uVar11;
        } while (uVar11 < 3);
        (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) * 3 + 1;
      }
    }
    uVar11 = (*(int *)(gen_frame + 0x20)) + 0xfU >> 4;
    piVar1 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*(uint *)((int)this + 8) & 0xf) * 4)));
    _InterlockedExchangeAdd((volatile long *)(piVar1), (long)((uVar11 * 0x10 - (*(uint *)((int)this + 8) & 0xfffffff0))));
    *(uint *)((int)this + 8) = uVar11 << 4 | *(uint *)((int)this + 8) & 0xf;
    return 1;
  }
  return 0;
}

/* ref: FUN_004da3e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004da3e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4da3e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(byte *)((int)this + 0x20) & 0x4c) == 0) {
    F_004d9cc0((undefined *)((int)this - 0xc) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_004da3f0 */
GEN_FRAME byte GEN_THISCALL F_004da3f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4da3f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  if ((*(uint *)((int)this + 0x20) & 0x4c) == 0) {
    bVar2 = F_004da150((undefined *)((int)this - 0xc) GEN_EDX_FWD);
    if (bVar2 != 0) {
      return 1;
    }
    F_004d9cc0((undefined *)((int)this - 0xc) GEN_EDX_ARG);
    return 0;
  }
  if (*(int *)((int)this + 0x38) == 0) {
    return 1;
  }
  if ((*(uint *)((int)this + 0x20) & 0x3c00000) == 0x1000000) {
    piVar1 = *(int * PTR32 *)((int)this + 0x24);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x24) = 0;
    }
    uVar3 = *(uint *)((int)this + 0x20);
    (*(uint *)(gen_frame + 0x18)) = 0;
    uVar5 = (uint)((uVar3 & 0x100000) != 0);
    if ((uVar3 & 0x200000) != 0) {
      uVar5 = uVar5 | 2;
    }
    if ((uVar3 & 1) != 0) {
      uVar5 = uVar5 | 0x200;
    }
    bVar6 = (uVar3 & 4) != 0;
    if (bVar6) {
      (*(uint *)(gen_frame + 0x18)) = 1;
    }
    (*(uint *)(gen_frame + 0x18)) = (uint)bVar6;
    if ((uVar3 & 0x40) != 0) {
      (*(uint *)(gen_frame + 0x18)) = 2;
    }
    uVar3 = F_004d9f60(*(undefined4 *)((int)this + 0x1c));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x60))))
                      (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc),
                       *(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 0x14),
                       (uint)*(byte *)((int)this + 0x18),uVar5,uVar3,(*(uint *)(gen_frame + 0x18)),
                       (undefined4 *)((int)this + 0x24),0);
    if ((-1 < (int)uVar3) && (*(int *)((int)this + 0x24) != 0)) {
      uVar3 = 0;
      (*(uint *)(gen_frame + 0x18)) = (uint)*(byte *)((int)this + 0x18);
      if (*(byte *)((int)this + 0x18) == 0) {
        return 1;
      }
      iVar4 = 0;
      do {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x4c))))
                          (*(int * PTR32 *)((int)this + 0x24) GEN_EDX_ARG,uVar3,((byte *)(gen_frame + 0xc)),0,0);
        if ((int)uVar5 < 0) {
          return 0;
        }
        F_00c46aa0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x38) + iVar4))),
                   *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x38) + 8 + iVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x50))))(*(int * PTR32 *)((int)this + 0x24) GEN_EDX_ARG,uVar3);
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0xc;
      } while (uVar3 < (*(uint *)(gen_frame + 0x18)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_004da550 */
GEN_FRAME byte GEN_THISCALL F_004da550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4da550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  byte bVar2;
  
  *(undefined4 *)((int)this + 0x18) = *param_1;
  uVar1 = param_1[1];
  *(undefined1 *)((int)this + 0x24) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  if (param_3 != 0) {
    *(int *)((int)this + 0x28) = param_3;
  }
  bVar2 = F_004da150(this GEN_EDX_FWD);
  if (bVar2 == 0) {
    F_004d9cc0(this GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004da5a0 */
GEN_NOFRAME uint GEN_THISCALL F_004da5a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4da5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x38);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x3c);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  piVar1 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*(uint *)((int)this + 8) & 0xf) * 4)));
  LOCK();
  *piVar1 = *piVar1 - (*(uint *)((int)this + 8) & 0xfffffff0);
  UNLOCK();
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xf;
  return (uint)piVar1;
}

/* ref: FUN_004da610 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004da610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4da610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(byte *)((int)this + 0x24) & 0x4c) == 0) {
    F_004da5a0((undefined *)((int)this - 0xc) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_004da620 */
GEN_NOFRAME uint GEN_THISCALL F_004da620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4da620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(undefined * PTR32 *)((int)this + 0x38) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x38) GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)((int)this + 0x34) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x34) GEN_EDX_ARG);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x3c);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  return uVar2;
}

/* ref: FUN_004da660 */
GEN_FRAME byte GEN_THISCALL F_004da660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4da660u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  byte bVar3;
  uint uVar4;
  
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = (*(int * PTR32 *)&gen_args[1]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_FWD);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) + 0x14))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) GEN_EDX_ARG,0,0,&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar4) {
    bVar3 = F_004d6d10(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))),8);
    if (bVar3 != 0) {
      iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = *(undefined4 *)(iVar2 + 0x18);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = *(undefined4 *)(iVar2 + 0x1c);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = *(undefined4 *)(iVar2 + 0x28);
      if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
        (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
      }
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
      if (this_00 != (undefined *)0x0) {
        *(undefined4 *)((int)this_00 + 0x18) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
        *(undefined4 *)((int)this_00 + 0x1c) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
        *(undefined1 *)((int)this_00 + 0x24) = 1;
        bVar3 = F_004da150(this_00 GEN_EDX_ARG);
        if (bVar3 == 0) {
          F_004d9cc0(this_00 GEN_EDX_ARG);
          F_004da620((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
          return 0;
        }
      }
      return 1;
    }
    if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
      (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
    }
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) != (undefined *)0x0) {
    F_004d9cc0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) GEN_EDX_ARG);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) != (undefined *)0x0) {
    F_004d9cc0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) GEN_EDX_ARG);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
  }
  return 0;
}

/* ref: FUN_004da760 */
GEN_NOFRAME byte GEN_THISCALL F_004da760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4da760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x18);
  if (iVar1 == 1) {
    uVar3 = 8;
  }
  else if (iVar1 == 2) {
    uVar3 = 9;
  }
  else {
    if ((iVar1 != 3) || (REFG(int, 0x1375a30) == 0 && REFG(int, 0x1375a34) == 0)) {
      return 0;
    }
    uVar3 = 10;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x1d8))))
                    (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) GEN_EDX_ARG,uVar3,(int)this + 0x1c);
  return -1 < (int)uVar2;
}

/* ref: FUN_004da7c0 */
GEN_FRAME byte F_004da7c0(void)
{
  GEN_ENTER(0x4da7c0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x1d8))))
                    (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) GEN_EDX_ARG,0xc,&(*(int * PTR32 *)(gen_frame + 0x8)));
  if ((int)uVar2 < 0) {
    REFG(int, 0x1375a30) = 0;
    REFG(int, 0x1375a34) = 0;
    return 1;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
  REFG(int, 0x1375a30) = 0;
  REFG(int, 0x1375a34) = 0;
  do {
    do {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(int, 0x1375a30),8,1);
    } while ((int)uVar2 < 0);
  } while (REFG(int, 0x1375a30) == 0 && REFG(int, 0x1375a34) == 0);
  uVar1 = CONCAT44(REFG(int, 0x1375a34),REFG(int, 0x1375a30)) / 1000000;
  REFG(int, 0x1375a34) = (int)(uVar1 >> 0x20);
  REFG(int, 0x1375a30) = (int)uVar1;
  if ((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    uVar1 = CONCAT44(REFG(int, 0x1375a34),REFG(int, 0x1375a30));
  }
  REFG(int, 0x1375a34) = (int)(uVar1 >> 0x20);
  REFG(int, 0x1375a30) = (int)uVar1;
  return 1;
}

/* ref: FUN_004da890 */
GEN_NOFRAME byte GEN_THISCALL F_004da890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4da890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 == 1) {
    uVar4 = 8;
  }
  else if (iVar1 == 2) {
    uVar4 = 9;
  }
  else {
    if ((iVar1 != 3) || (REFG(int, 0x1375a30) == 0 && REFG(int, 0x1375a34) == 0)) goto LAB_004da8e3;
    uVar4 = 10;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x1d8))))
                    (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) GEN_EDX_ARG,uVar4,(int)this + 0x10);
  if (-1 < (int)uVar3) {
    return 1;
  }
LAB_004da8e3: ;
  piVar2 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return 0;
}

/* ref: FUN_004da960 */
GEN_FRAME uint GEN_THISCALL F_004da960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4da960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  *param_1 = 0;
  iVar6 = REFG(int, 0x1370b90);
  uVar4 = *(uint *)((int)this + 0x20);
  if (uVar4 == 0) {
    return 0;
  }
  piVar1 = (int *)(REFG(int, 0x1370b90) + 0xc4);
  iVar7 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(uVar4 * 0x8000));
  if (*(uint *)(iVar6 + 0xb8) < (uint)(*(int *)(iVar6 + 0xc0) + *(int *)(iVar6 + 0xc4))) {
    iVar6 = 0;
  }
  else {
    iVar6 = (*(int *)(iVar6 + 0xbc) - iVar7) + uVar4 * -0x8000 + *(uint *)(iVar6 + 0xb8);
  }
  iVar5 = *(int *)((int)this + 0x10);
  uVar2 = iVar6 + uVar4 * 0x4000;
  iVar7 = iVar6;
  for (uVar3 = uVar4; uVar3 != 0; uVar3 = uVar3 - 1) {
    F_00c46aa0(iVar7,iVar5,0x4000);
    iVar7 = iVar7 + 0x4000;
    iVar5 = *(int *)(iVar5 + 0x3ff8);
  }
  F_00c46aa0(uVar2,iVar6,uVar4 * 0x4000);
  iVar7 = (uVar4 & 0x3ffff) * 0x800 - *(int *)((int)this + 0x1c);
  *param_1 = iVar7;
  F_004d5dd0(this GEN_EDX_ARG,uVar2,iVar6,0,iVar7 - 1);
  return uVar2;
}

/* ref: FUN_004daa40 */
GEN_FRAME uint GEN_THISCALL F_004daa40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4daa40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  puVar1 = (undefined4 *)F_004d4760((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,0x24);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  (*(uint *)(gen_frame + 0x8)) = 4;
  *puVar1 = 0;
  puVar2 = &(*(uint *)&gen_args[1]);
  if (3 < (*(uint *)&gen_args[1])) {
    puVar2 = &(*(uint *)(gen_frame + 0x8));
  }
  uVar4 = *puVar2;
  puVar1[7] = (*(undefined4 *)&gen_args[4]);
  uVar3 = 0;
  puVar1[1] = uVar4;
  puVar1[8] = (*(undefined4 *)&gen_args[5]);
  if (uVar4 != 0) {
    puVar6 = puVar1 + 2;
    do {
      *puVar6 = *(undefined4 *)((*(int *)&gen_args[2]) + uVar3 * 4);
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar3 < uVar4);
    if (3 < uVar3) goto LAB_004daab1;
  }
  puVar6 = puVar1 + uVar3 + 2;
  for (iVar5 = 4 - uVar3; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
LAB_004daab1: ;
  puVar1[6] = (*(undefined4 *)&gen_args[3]);
  uVar4 = F_004d4810((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,puVar1);
  return uVar4;
}

/* ref: FUN_004daad0 */
GEN_FRAME uint GEN_THISCALL F_004daad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4daad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint * puVar9;
  int iVar10;
  undefined4 * puVar11;
  ushort * puVar12;
  int * piVar13;
  int * piVar14;
  
  puVar11 = (*(undefined4 * PTR32 *)&gen_args[2]);
  iVar2 = (*(uint *)&gen_args[1]);
  *(*(int * PTR32 *)&gen_args[3]) = (int)(*(undefined4 * PTR32 *)&gen_args[2]);
  iVar5 = *(int *)((*(uint *)&gen_args[1]) + 0xc);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)&gen_args[2]) = (undefined4 *)iVar5;
  if (iVar5 != 0) {
    puVar12 = ((ushort *)GEN_TOP((*(int *)((*(uint *)&gen_args[1]) + 0x10) + 2)));
    iVar10 = iVar5;
    do {
      iVar6 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + *(int *)(puVar12 + 1) * 4 + 0xa8)));
      *puVar11 = *(undefined4 *)(iVar6 + 0x20);
      uVar4 = *puVar12;
      uVar7 = *(uint *)(iVar6 + 0x28) >> 4;
      (*(uint *)&gen_args[1]) = uVar7;
      (*(uint *)(gen_frame + 0x4)) = (uint)uVar4;
      puVar9 = &(*(uint *)&gen_args[1]);
      if (uVar4 <= uVar7) {
        puVar9 = &(*(uint *)(gen_frame + 0x4));
      }
      puVar11[1] = *puVar9;
      puVar12 = puVar12 + 4;
      puVar11 = puVar11 + 2;
      iVar10 = iVar10 - 1;
    } while (iVar10 != 0);
  }
  iVar10 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5a8)));
  *(*(int * PTR32 *)&gen_args[4]) = *(*(int * PTR32 *)&gen_args[3]) + iVar5 * 8;
  iVar5 = *(int *)(iVar2 + 0x14);
  (*(undefined4 * PTR32 *)&gen_args[2]) = (undefined4 *)iVar5;
  if (iVar5 != 0) {
    piVar14 = ((int *)GEN_TOP((*(int *)(iVar2 + 0x18) + 4)));
    (*(int * PTR32 *)&gen_args[3]) = (int *)iVar5;
    piVar13 = ((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[4])));
    do {
      piVar1 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + *piVar14 * 8 + 0x2a8)));
      *piVar13 = *piVar1;
      uVar8 = piVar1[1] & 0xfffffff;
      piVar13[1] = uVar8;
      bVar3 = *(byte *)(*piVar13 + 0x26);
      uVar7 = uVar8 >> 0x14 & 0xf;
      (*(uint *)&gen_args[1]) = uVar7;
      (*(uint *)(gen_frame + 0x4)) = (uint)bVar3;
      puVar9 = &(*(uint *)&gen_args[1]);
      if (uVar7 <= bVar3) {
        puVar9 = &(*(uint *)(gen_frame + 0x4));
      }
      uVar8 = (*puVar9 << 0x14 ^ uVar8) & 0xf00000 ^ uVar8;
      uVar7 = (uint)((uVar8 & 0x3c0) == 0x1c0);
      piVar14 = piVar14 + 2;
      iVar2 = (int)(*(int * PTR32 *)&gen_args[3]) - 1;
      (*(int * PTR32 *)&gen_args[3]) = (int *)iVar2;
      piVar13[1] = ~(uVar7 * 0x70003c0) & uVar8 | uVar7 * iVar10;
      piVar13 = piVar13 + 2;
    } while (iVar2 != 0);
  }
  return *(*(int * PTR32 *)&gen_args[4]) + iVar5 * 8;
}

/* ref: FUN_004dac00 */
GEN_NOFRAME uint GEN_THISCALL F_004dac00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dac00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0xd0) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0xd0),0,0);
    *(undefined4 *)((int)this + 0xd0) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar1 = F_004d74f0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_004dac40 */
GEN_FRAME uint GEN_STDCALL F_004dac40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4dac40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  byte bVar1;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x48,0x10)));
  if (this != (undefined *)0x0) {
    this_00 = (int *)F_004d6c80(this GEN_EDX_ARG);
    if (this_00 != (int *)0x0) {
      this_00[2] = this_00[2] ^ (this_00[2] ^ param_4) & 0xf;
      bVar1 = F_004d5950(this_00 GEN_EDX_ARG,param_1,param_2,param_3);
      if (bVar1 != 0) {
        return (uint)this_00;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xc))(this_00 GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: FUN_004dacb0 */
GEN_FRAME uint GEN_THISCALL F_004dacb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4dacb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004d9320(*(undefined * PTR32 *)((int)this + 0x80) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_004dacc0 */
GEN_FRAME unsigned int GEN_THISCALL F_004dacc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4dacc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x80);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4));
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1c) + param_1 * 8))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1c) + 4 + param_1 * 8))) = 0;
  *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) - 1;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4)));
}

/* ref: FUN_004dad00 */
GEN_FRAME uint GEN_THISCALL F_004dad00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4dad00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004d9320(*(undefined * PTR32 *)((int)this + 0x84) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_004dad10 */
GEN_FRAME unsigned int GEN_THISCALL F_004dad10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4dad10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x84);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4));
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1c) + param_1 * 8))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1c) + 4 + param_1 * 8))) = 0;
  *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) - 1;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4)));
}

/* ref: FUN_004dad50 */
GEN_FRAME uint GEN_THISCALL F_004dad50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4dad50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004d9320(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_004dad60 */
GEN_FRAME unsigned int GEN_THISCALL F_004dad60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4dad60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x18);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4));
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1c) + param_1 * 8))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1c) + 4 + param_1 * 8))) = 0;
  *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) - 1;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4)));
}

/* ref: FUN_004dada0 */
GEN_FRAME uint GEN_THISCALL F_004dada0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4dada0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar5 = 0;
  (*(uint * PTR32 *)(gen_frame + 0x50)) = param_1;
  (*(uint *)(gen_frame + 0x5c)) = *(uint *)((int)this + 0x28);
  (*(uint *)(gen_frame + 0x60)) = 0;
  if (*(uint *)((int)this + 0x28) != 0) {
    ((uint *)(gen_frame + 0x64))[0] = 0;
    do {
      uVar2 = F_004da960(((undefined *)GEN_TOP((*(int *)((int)this + 4) + ((uint *)(gen_frame + 0x64))[0]))) GEN_EDX_FWD,((uint *)(gen_frame + 0x64)) + uVar5 + 1);
      (*(uint *)(gen_frame + 0x60)) = (*(uint *)(gen_frame + 0x60)) + ((uint *)(gen_frame + 0x64))[(int)(uVar5 + 1)];
      ((uint *)(gen_frame + 0x64))[0] = ((uint *)(gen_frame + 0x64))[0] + 0x5b0;
      ((uint *)(gen_frame + 0xc))[(int)(uVar5)] = uVar2;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (*(uint *)(gen_frame + 0x5c)));
  }
  uVar5 = *(int *)((int)this + 0xbc) + *(int *)((int)this + 0xb8) + (*(uint *)(gen_frame + 0x60)) * -8;
  (*(uint *)(gen_frame + 0x58)) = uVar5;
  ((uint *)(gen_frame + 0x64))[0] = uVar5;
  uVar2 = (*(uint *)(gen_frame + 0x5c));
  if ((*(uint *)(gen_frame + 0x60)) != 0) {
    do {
      iVar6 = 0;
      uVar5 = 0xffffffff;
      uVar4 = 0;
      if (uVar2 != 0) {
        do {
          iVar3 = uVar2 - uVar4;
          if ((((uint *)(gen_frame + 0x64))[(int)(iVar3)] != 0) && (*(uint *)((uint *)(gen_frame + 0xc))[(int)(iVar3 - 1)] <= uVar5)) {
            iVar6 = iVar3 - 1;
            uVar5 = *(uint *)((uint *)(gen_frame + 0xc))[(int)(iVar3 - 1)];
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      puVar1 = ((uint *)(gen_frame + 0xc)) + iVar6;
      (*(uint * PTR32 *)(gen_frame + 0x4c)) = ((uint *)(gen_frame + 0x64)) + iVar6 + 1;
      uVar5 = ((uint *)(gen_frame + 0x64))[(int)(iVar6 + 1)];
      uVar4 = 0;
      (*(uint * PTR32 *)(gen_frame + 0x54)) = puVar1;
      do {
        uVar4 = uVar4 + 1;
        if (uVar4 == uVar5) break;
      } while (*(int *)((uint *)(gen_frame + 0xc))[(int)(iVar6)] == *(int *)(*puVar1 + uVar4 * 8));
      if (uVar4 != 0) {
        iVar6 = uVar4 * 8;
        F_00c46aa0(((uint *)(gen_frame + 0x64))[0],*puVar1,iVar6);
        puVar1 = (*(uint * PTR32 *)(gen_frame + 0x4c));
        ((uint *)(gen_frame + 0x64))[0] = ((uint *)(gen_frame + 0x64))[0] + iVar6;
        *(*(uint * PTR32 *)(gen_frame + 0x54)) = iVar6 + *(*(uint * PTR32 *)(gen_frame + 0x54));
        *puVar1 = uVar5 - uVar4;
        uVar2 = (*(uint *)(gen_frame + 0x5c));
      }
      uVar5 = (*(uint *)(gen_frame + 0x58));
    } while ((uint)((int)(((uint *)(gen_frame + 0x64))[0] - (*(uint *)(gen_frame + 0x58))) >> 3) < (*(uint *)(gen_frame + 0x60)));
  }
  *(*(uint * PTR32 *)(gen_frame + 0x50)) = (*(uint *)(gen_frame + 0x60));
  (*(uint *)(gen_frame + 0x58)) = uVar5;
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_004daee0 */
GEN_NOFRAME uint GEN_THISCALL F_004daee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4daee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  BOOL BVar3;
  undefined4 uVar4;
  DWORD DVar5;
  
  if (*(char *)((int)this + 0x4f) != '\0') {
    if (*(int *)((int)this + 0x38) != 5) {
      *(undefined4 *)((int)this + 0x38) = 2;
    }
    *(undefined1 *)((int)this + 0x4f) = 0;
  }
  if ((*(char *)((int)this + 0x4c) == '\0') &&
     ((((*(int *)((int)this + 0x90) != *(int *)((int)this + 0x68) ||
        (*(int *)((int)this + 0x94) != *(int *)((int)this + 0x6c))) &&
       (*(int *)((int)this + 0x68) != 0)) && (*(int *)((int)this + 0x6c) != 0)))) {
    *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)this + 0x68);
    *(undefined4 *)((int)this + 0x94) = *(undefined4 *)((int)this + 0x6c);
    F_004d7430(this GEN_EDX_FWD);
    if (*(int *)((int)this + 0x38) != 5) {
      *(undefined1 *)((int)this + 0x50) = 1;
    }
  }
  cVar1 = *(char *)((int)this + 0x4d);
  if ((*(char *)((int)this + 0x4c) != cVar1) ||
     ((*(char *)((int)this + 0x4c) != '\0' &&
      (*(int *)((int)this + 0x60) != *(int *)((int)this + 100))))) {
    *(char *)((int)this + 0x4c) = cVar1;
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 100);
    if (cVar1 == '\0') {
      gen_imp_SetWindowLongA(*(HWND *)((int)this + 0x5c),-0x10,0xcf0000);
      uVar4 = *(undefined4 *)((int)this + 0x6c);
      *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)this + 0x68);
    }
    else {
      BVar3 = gen_imp_IsZoomed(*(HWND *)((int)this + 0x5c));
      if (BVar3 != 0) {
        gen_imp_ShowWindow(*(HWND *)((int)this + 0x5c),1);
      }
      gen_imp_SetWindowLongA(*(HWND *)((int)this + 0x5c),-0x10,-0x70000000);
      *(undefined4 *)((int)this + 0x90) =
           *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x70) + *(int *)((int)this + 0x60) * 0xc)));
      uVar4 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x70) + 4 + *(int *)((int)this + 0x60) * 0xc)));
    }
    *(undefined4 *)((int)this + 0x94) = uVar4;
    F_004d7430(this GEN_EDX_ARG);
    gen_imp_SetWindowPos(*(HWND *)((int)this + 0x5c),(HWND)0xfffffffe,0,0,0,0,0x23);
    *(undefined1 *)((int)this + 0x4e) = 1;
    if (*(int *)((int)this + 0x38) != 5) {
      *(undefined4 *)((int)this + 0x38) = 2;
    }
  }
  if (*(int *)((int)this + 0xa0) != *(int *)((int)this + 0xa4)) {
    *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa4);
    if (*(char *)((int)this + 0x4c) == '\0') {
      DVar5 = gen_imp_timeGetTime();
      *(DWORD *)((int)this + 0xac) = DVar5;
      *(undefined4 *)((int)this + 0xb0) = 0;
    }
    else if (*(int *)((int)this + 0x38) != 5) {
      *(undefined4 *)((int)this + 0x38) = 2;
    }
  }
  uVar2 = *(uint *)((int)this + 0x38);
  if ((uVar2 == 2) || (uVar2 == 3)) {
    *(undefined1 *)((int)this + 0x50) = 0;
  }
  return uVar2;
}

/* ref: FUN_004db060 */
GEN_FRAME unsigned int GEN_THISCALL F_004db060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4db060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  char cVar1;
  
  F_00c48350(param_1,0,0x38);
  if (*(char *)((int)this + 0x4c) == '\0') {
    *param_1 = 1;
    param_1[1] = 1;
  }
  else {
    *param_1 = *(undefined4 *)((int)this + 0x90);
    param_1[1] = *(undefined4 *)((int)this + 0x94);
  }
  param_1[2] = 0x16;
  param_1[3] = 1;
  param_1[6] = 1;
  cVar1 = *(char *)((int)this + 0x4c);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = (uint)(cVar1 == '\0');
  if (*(char *)((int)this + 0x4c) == '\0') {
    *(undefined1 *)((int)this + 0xa8) = 1;
  }
  else {
    switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0xa0))) {
    default: ;
      *(undefined1 *)((int)this + 0xa8) = 0;
      break;
    case 2: ;
      *(byte *)((int)this + 0xa8) = ~(byte)(*(uint *)((int)this + 0x34) >> 7) & 1;
      break;
    case 3: ;
      *(byte *)((int)this + 0xa8) = ~(byte)((uint)*(undefined4 *)((int)this + 0x34) >> 8) & 1;
    }
  }
  if (*(char *)((int)this + 0xa8) == '\0') {
    if (*(char *)((int)this + 0x4c) == '\0') {
      param_1[0xc] = 0x3c;
    }
    else {
      param_1[0xc] = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x70) + 8 + *(int *)((int)this + 0x60) * 0xc)));
    }
    switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0xa0))) {
    case 0: ;
      goto switchD_004db132_caseD_0;
    default: ;
      param_1[0xd] = 1;
      return 0;
    case 2: ;
      param_1[0xd] = 2;
      return 0;
    case 3: ;
      param_1[0xd] = 4;
      return 0;
    }
  }
  param_1[0xc] = 0;
switchD_004db132_caseD_0: ;
  param_1[0xd] = 0x80000000;
  return 0;
}

/* ref: FUN_004db190 */
GEN_NOFRAME uint GEN_THISCALL F_004db190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4db190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  F_00510db0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0x14))))(*(int * PTR32 *)((int)this + 0x40) GEN_EDX_ARG);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  for (piVar1 = REFG(int * PTR32, 0x1375a40); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  iVar2 = *(int *)((int)this + 0x2c);
  if (*(undefined * PTR32 *)(iVar2 + 0x38) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)(iVar2 + 0x38) GEN_EDX_ARG);
  }
  if (*(undefined * PTR32 *)(iVar2 + 0x34) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)(iVar2 + 0x34) GEN_EDX_ARG);
  }
  piVar1 = *(int * PTR32 *)(iVar2 + 0x3c);
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(iVar2 + 0x3c) = 0;
  }
  *(undefined4 *)((int)this + 0x38) = 3;
  *(undefined4 *)((int)this + 0x54) = 6;
  return uVar3;
}

/* ref: FUN_004db220 */
GEN_NOFRAME byte GEN_THISCALL F_004db220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4db220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_ecx;
  undefined * pvVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (0x20 < *(uint *)((int)this + 0x88)) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x38) = 5;
  *(uint *)((int)this + 0x88) = *(uint *)((int)this + 0x88) + 1;
  if (*((int *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x84) + 0x24))) != 0) {
    F_004d93c0(*(undefined * PTR32 *)((int)this + 0x84) GEN_EDX_FWD);
    return 1;
  }
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar4 = 1;
  uVar3 = 0x500;
  pvVar1 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0xf);
  F_00414a40(pvVar1 GEN_EDX_ARG,uVar3,uVar4);
  uVar4 = 1;
  uVar3 = 0x2d0;
  pvVar1 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x10);
  F_00414a40(pvVar1 GEN_EDX_ARG,uVar3,uVar4);
  uVar4 = 1;
  uVar3 = 0;
  pvVar1 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x11);
  F_00414a40(pvVar1 GEN_EDX_ARG,uVar3,uVar4);
  BVar2 = gen_imp_IsZoomed(*(HWND *)((int)this + 0x5c));
  if (BVar2 != 0) {
    gen_imp_ShowWindow(*(HWND *)((int)this + 0x5c),1);
  }
  return 1;
}

/* ref: FUN_004db2c0 */
GEN_NOFRAME uint GEN_THISCALL F_004db2c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4db2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint extraout_EAX = 0;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  for (piVar1 = REFG(int * PTR32, 0x1375a40); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  uVar3 = extraout_EAX;
  if (*(char *)((int)this + 0x4c) == '\0') {
    iVar2 = *(int *)((int)this + 0x2c);
    if (*(undefined * PTR32 *)(iVar2 + 0x38) != (undefined *)0x0) {
      F_004d9cc0(*(undefined * PTR32 *)(iVar2 + 0x38) GEN_EDX_ARG);
    }
    if (*(undefined * PTR32 *)(iVar2 + 0x34) != (undefined *)0x0) {
      F_004d9cc0(*(undefined * PTR32 *)(iVar2 + 0x34) GEN_EDX_ARG);
    }
    piVar1 = *(int * PTR32 *)(iVar2 + 0x3c);
    uVar3 = 0;
    if (piVar1 != (int *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
      *(undefined4 *)(iVar2 + 0x3c) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_004db340 */
GEN_FRAME byte GEN_THISCALL F_004db340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4db340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,5,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x73686364;
  uVar3 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/DepthCopyVS.shcd",0,0,0);
  *(uint *)((int)this + 0x218) = uVar3;
  if (uVar3 != 0) {
    uVar3 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/DepthCopyPS.shcd",0,0,0);
    *(uint *)((int)this + 0x21c) = uVar3;
    if (uVar3 != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x218) + 0x98)));
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
      }
      piVar1 = *(int * PTR32 *)((int)this + 0x220);
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
      }
      *(undefined4 *)((int)this + 0x220) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x218) + 0x98)));
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x21c) + 0x9c)));
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
      }
      piVar1 = *(int * PTR32 *)((int)this + 0x224);
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
      }
      *(undefined4 *)((int)this + 0x224) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x21c) + 0x9c)));
      if ((*(undefined * PTR32 *)((int)this + 0x230) != (undefined *)0x0) &&
         (bVar2 = F_004d9000(*(undefined * PTR32 *)((int)this + 0x230) GEN_EDX_ARG), bVar2 == 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_004db440 */
GEN_FRAME uint GEN_THISCALL F_004db440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4db440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x24) + 0x18)));
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x24) + 0x1c)));
  bVar3 = (byte)*(undefined4 *)((int)this + 0x38);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x18)) = uVar1 >> (bVar3 & 0x1f);
  (*(uint *)(gen_frame + 0x14)) = uVar2 >> (bVar3 & 0x1f);
  F_004e28b0((int)this + 8,param_1 + 4,&(*(undefined4 *)(gen_frame + 0xc)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 300))))
                    (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,(int)this + 8);
  return uVar2;
}

/* ref: FUN_004db4a0 */
GEN_FRAME uint GEN_STDCALL F_004db4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4db4a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = param_1;
  if ((*(uint *)(param_1 + 0xc) >> 1 & 1) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(param_1 + 4))(*(undefined4 *)(param_1 + 8));
  }
  return uVar1;
}

/* ref: FUN_004db4c0 */
GEN_FRAME unsigned int GEN_THISCALL F_004db4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4db4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x230);
  if (*(int *)(iVar1 + 0x34) == 0) {
    F_00c4a8e0((wchar_t *)(iVar1 + 0x48),0x104,*(wchar_t * PTR32 *)(param_1 + 4));
    *(wchar_t * PTR32 *)(iVar1 + 0x34) = (wchar_t *)(iVar1 + 0x48);
  }
  return;
}

/* ref: FUN_004db500 */
GEN_FRAME uint GEN_THISCALL F_004db500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4db500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (*(uint *)((int)this + 0x40) != (REFG(undefined4, 0x1302350) & 0x7ffffff)) {
    F_004d75c0(this GEN_EDX_FWD,REFG(undefined4, 0x1302350) & 0x7ffffff);
  }
  if (*(uint *)((int)this + 0x44) != (REFG(undefined4, 0x130235c) & 0x1f)) {
    F_004d7720(this GEN_EDX_ARG,REFG(undefined4, 0x130235c) & 0x1f);
  }
  if ((*(uint *)((int)this + 0x48) != (REFG(undefined4, 0x1302368) & 0xfe000000)) ||
     (*(uint *)((int)this + 0x4c) != (REFG(undefined4, 0x130236c) & 0xfffffffc))) {
    F_004d7790(this GEN_EDX_ARG,REFG(undefined4, 0x1302368) & 0xfe000000,REFG(undefined4, 0x130236c) & 0xfffffffc);
  }
  if (*(uint *)((int)this + 0x50) != (REFG(undefined4, 0x1302370) & 0x7fffffff)) {
    F_004d7890(this GEN_EDX_ARG,REFG(undefined4, 0x1302370) & 0x7fffffff);
  }
  uVar4 = 0;
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x104))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar4,0);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x2c);
  if (*(char *)((int)this + 0x20) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa8))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG);
    *(undefined1 *)((int)this + 0x20) = 0;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x94))))
            (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x34) + 0x34))));
  uVar4 = 1;
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x94))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar4,0);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  if (*(int *)(iVar1 + 0x38) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x9c))))
              (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x38) + 0x34))));
  }
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(iVar1 + 0x34);
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  uVar2 = *(undefined4 *)(iVar1 + 0x1c);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar1 + 0x18);
  piVar3 = *(int * PTR32 *)((int)this + 0x1c);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xbc))(piVar3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x9c,1);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_004db680 */
GEN_FRAME uint GEN_THISCALL F_004db680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4db680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  piVar1 = (int *)0x0;
  if (param_2 != 0) {
    piVar2 = (int *)(param_1 + 4);
    iVar3 = param_2;
    do {
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        if (*piVar1 == 8) {
          if (((*(uint *)(piVar1[1] + 0x2c) & 0x200000) == 0) &&
             ((*(uint *)(piVar1[5] + 0x2c) & 0x300000) == 0)) {
            piVar1 = (int *)F_004d8b40(piVar1);
          }
        }
        else if ((*piVar1 == 0xb) && (((uint)piVar1[3] >> 1 & 1) != 0)) {
          piVar1 = ((int *)GEN_TOP((*(code *)piVar1[1])(piVar1[2])));
        }
      }
      piVar2 = piVar2 + 2;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_004db6f0 */
GEN_FRAME byte GEN_THISCALL F_004db6f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4db6f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * this_00;
  HANDLE pvVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  *(int *)((int)this + 0x1c) = (int)this + 0x20;
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xc0000;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x50001;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x14)) = 0x11;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x158))))
            (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),(int)this + 0x28);
  this_00 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x40,0x10)));
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_004cefe0(this_00 GEN_EDX_ARG);
    *this_00 = (*(undefined * PTR32 (*)[6])REFP(0x1096c3c));
    pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
    this_00[6] = pvVar1;
    pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
    this_00[7] = pvVar1;
    this_00[0xe] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x2c) = this_00;
  F_004cf9e0(this_00 GEN_EDX_ARG,0,0xfffffffe,0x1000,"SaveTextureThread");
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x30) = 2;
  **(undefined4 * PTR32 *)((int)this + 0x1c) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_004db7e0 */
GEN_NOFRAME uint GEN_THISCALL F_004db7e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4db7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x2c);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    gen_imp_SetEvent((HANDLE)piVar1[6]);
    F_004cf020(piVar1 GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x2c);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x2c) = 0;
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x28);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x24);
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return uVar3;
}

/* ref: FUN_004db880 */
GEN_FRAME byte GEN_THISCALL F_004db880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4db880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (**(int * PTR32 *)((int)this + 0x1c) != 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(int *)((int)this + 0x3c) = iVar1;
  *(undefined4 *)((int)this + 0x250) = param_3;
  *(undefined4 *)((int)this + 0x38) = param_2;
  *(undefined4 *)((int)this + 0x40) = uVar2;
  *(uint *)((int)this + 0x44) = iVar1 * 4 + 0xfU & 0xfffffff0;
  if (*(int *)((int)this + 0x24) != 0) {
    return 0;
  }
  piVar3 = *(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40);
  uVar4 = F_004d9f60(*(undefined4 *)(param_1 + 0x28));
  if (uVar4 == 0x15) {
    uVar4 = 0x16;
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x70))
                    (piVar3 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),uVar4,0,
                     0,1,&(*(int * PTR32 *)(gen_frame + 0x8)),0);
  if ((int)uVar4 < 0) {
    if ((code *)*(gen_code32 *)((int)this + 0x250) != (code *)0x0) {
      *(undefined4 *)((int)this + 0x30) = 1;
      ((code *)*(gen_code32 *)((int)this + 0x250))((undefined4 *)((int)this + 0x30));
    }
    return 0;
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x88))(piVar3 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x34),0,(*(int * PTR32 *)(gen_frame + 0x8)),0,0);
  if ((int)uVar4 < 0) {
    if ((code *)*(gen_code32 *)((int)this + 0x250) != (code *)0x0) {
      *(undefined4 *)((int)this + 0x30) = 2;
      ((code *)*(gen_code32 *)((int)this + 0x250))((undefined4 *)((int)this + 0x30));
    }
    if ((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    }
    return 0;
  }
  *(int * PTR32 *)((int)this + 0x24) = (*(int * PTR32 *)(gen_frame + 0x8));
  return 1;
}

/* ref: FUN_004db9a0 */
GEN_FRAME byte GEN_THISCALL F_004db9a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4db9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  float10 fVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  uVar10 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(uint *)(gen_frame + 0x68)) = uVar10;
  if (**(int * PTR32 *)((int)this + 0x1c) != 0) {
    F_00c47745(uVar10 ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_FWD);
    return 0;
  }
  iVar4 = *(int *)((int)this + 0x24);
  if (iVar4 == 0) {
    F_00c47745(uVar10 ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return 0;
  }
  iVar5 = *(int *)((int)this + 0x3c);
  iVar6 = *(int *)((int)this + 0x40);
  iVar7 = *(int *)((int)this + 0x18);
  fVar11 = (float10)iVar5;
  if (iVar5 < 0) {
    fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar12 = (float10)*(int *)(iVar7 + 0x18);
  if (*(int *)(iVar7 + 0x18) < 0) {
    fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar9 = (float10)1;
  fVar13 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar14 = (float10)*(int *)(iVar7 + 0x1c);
  if (*(int *)(iVar7 + 0x1c) < 0) {
    fVar14 = fVar14 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  fVar15 = (float10)(float)((float10)REFG(double, 0x1094890) / (float10)(float)fVar11);
  fVar1 = (float)(fVar15 - fVar9);
  fVar16 = (float10)(float)(fVar9 / (float10)(float)fVar13);
  (*(float *)(gen_frame + 0x18)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  fVar2 = (float)(fVar16 - fVar9);
  (*(float *)(gen_frame + 0x1c)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar12 / ((float10)(float)fVar11 *
                                                             (float10)REFG(double, 0x1088108))))) - fVar9))) +
                 fVar15)));
  (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(float *)(gen_frame + 0x2c)) = fVar3;
  (*(float *)(gen_frame + 0x30)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar2 = ((float)GEN_TOF((fVar16 + (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar14 / ((float10)(float)fVar13 *
                                                                      (float10)REFG(double, 0x1088108))))) -
                                           fVar9))))));
  (*(undefined4 *)(gen_frame + 0x3c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(float *)(gen_frame + 0x40)) = fVar1;
  (*(float *)(gen_frame + 0x44)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x48)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(float *)(gen_frame + 0x58)) = fVar2;
  (*(float *)(gen_frame + 0x54)) = fVar3;
  (*(undefined4 *)(gen_frame + 0x5c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  piVar8 = *(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x94))(piVar8 GEN_EDX_ARG,0,iVar4);
  uVar10 = 1;
  do {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x94))(piVar8 GEN_EDX_ARG,uVar10,0);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 4);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x9c))(piVar8 GEN_EDX_ARG,0);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xa4))(piVar8 GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x8)) = iVar5;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0xc)) = iVar6;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xbc))(piVar8 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,0x34,0);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,7,0);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,0x1b,1);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,0xab,1);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,0x13,5);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,0x14,6);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,0xd1,1);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,0xcf,2);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,0xd0,6);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,0xce,1);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,0xa8,0xf);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,0xbe,0xf);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,0xbf,0xf);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,0xc0,0xf);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,8,3);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,0x16,1);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,0xae,0);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,0xc3,0);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8 GEN_EDX_ARG,0xaf,0);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x104))(piVar8 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x30))));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x114))(piVar8 GEN_EDX_ARG,0,1,3);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x114))(piVar8 GEN_EDX_ARG,0,2,3);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x114))(piVar8 GEN_EDX_ARG,0,3,3);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x114))(piVar8 GEN_EDX_ARG,0,5,1);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x114))(piVar8 GEN_EDX_ARG,0,6,1);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x114))(piVar8 GEN_EDX_ARG,0,7,0);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x114))(piVar8 GEN_EDX_ARG,0,8,0);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x114))(piVar8 GEN_EDX_ARG,0,9,0);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x114))(piVar8 GEN_EDX_ARG,0,10,1);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x114))(piVar8 GEN_EDX_ARG,0,0xb,0);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x15c))(piVar8 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x28));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x170))(piVar8 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2c))));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x1ac))(piVar8 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x28))));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14c))(piVar8 GEN_EDX_ARG,5,2,&(*(float *)(gen_frame + 0x18)),0x14);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xa8))(piVar8 GEN_EDX_ARG);
  **(undefined4 * PTR32 *)((int)this + 0x1c) = 3;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_004dbf10 */
GEN_NOFRAME uint GEN_THISCALL F_004dbf10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dbf10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  DWORD DVar4;
  
  if (**(uint * PTR32 *)((int)this + 0x1c) < 3) {
    return (uint)*(uint * PTR32 *)((int)this + 0x1c);
  }
  if (**(int * PTR32 *)((int)this + 0x1c) == 3) {
    if (*(int *)((int)this + 0x34) == 0) {
      return 3;
    }
    **(undefined4 * PTR32 *)((int)this + 0x1c) = 4;
  }
  if (**(int * PTR32 *)((int)this + 0x1c) == 4) {
    F_004d91b0(*(undefined * PTR32 *)((int)this + 0x2c) GEN_EDX_FWD,(int)this + 0x30,*(undefined4 *)((int)this + 0x24));
    **(undefined4 * PTR32 *)((int)this + 0x1c) = 5;
    piVar1 = *(int * PTR32 *)((int)this + 0x24);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x24) = 0;
    return uVar3;
  }
  DVar4 = gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x1c))),0);
  if (DVar4 != 0) {
    return DVar4;
  }
  pcVar2 = *(gen_code32 *)((int)this + 0x250);
  uVar3 = 0;
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x3c))) < 0) {
    if (pcVar2 == (code *)0x0) goto LAB_004dbfb6;
    *(undefined4 *)((int)this + 0x30) = 2;
  }
  else {
    if (pcVar2 == (code *)0x0) goto LAB_004dbfb6;
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  uVar3 = (*pcVar2)((int)this + 0x30);
LAB_004dbfb6: ;
  *(undefined4 *)((int)this + 0x30) = 2;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x1c) = 0;
  return uVar3;
}

/* ref: FUN_004dbff0 */
GEN_FRAME byte GEN_THISCALL F_004dbff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4dbff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  byte bVar2;
  
  if (1 < (param_2 >> 6 & 1) + (param_2 >> 3 & 1) + (param_2 >> 2 & 1) + (param_2 >> 1 & 1) +
          (param_2 & 1)) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(uint *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  if ((((((*(byte *)((int)this + 0x1c) & 0x4c) != 0) ||
        (iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x38), iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 4)) &&
     (bVar2 = F_004d9500(this GEN_EDX_FWD), bVar2 == 0)) {
    F_004d9460(this GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc090 */
GEN_FRAME byte GEN_THISCALL F_004dc090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4dc090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  byte bVar2;
  
  if (1 < (param_3 >> 6 & 1) + (param_3 >> 3 & 1) + (param_3 >> 2 & 1) + (param_3 >> 1 & 1) +
          (param_3 & 1)) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(uint *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  if ((((((*(byte *)((int)this + 0x20) & 0x4c) != 0) ||
        (iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x38), iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 4)) &&
     (bVar2 = F_004d9730(this GEN_EDX_FWD), bVar2 == 0)) {
    F_004d9690(this GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc130 */
GEN_FRAME byte GEN_THISCALL F_004dc130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4dc130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  if ((param_2 >> 6 & 1) + (param_2 >> 3 & 1) + (param_2 >> 2 & 1) + (param_2 >> 1 & 1) +
      (param_2 & 1) < 2) {
    *(uint *)((int)this + 0xc) = param_1 + 0xfU & 0xfffffff0;
    *(uint *)((int)this + 0x10) = param_2;
    if ((param_2 & 2) != 0) {
      return 1;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,param_1,0x10);
    *(uint *)((int)this + 0x14) = uVar1;
    if (uVar1 != 0) {
      if ((*(byte *)((int)this + 0x10) & 1) == 0) {
        *(uint *)((int)this + 0x18) = uVar1;
        *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x14);
        return 1;
      }
      uVar1 = 1;
      puVar3 = (uint *)((int)this + 0x18);
      do {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                          (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,param_1,0x10);
        *puVar3 = uVar2;
        if (uVar2 == 0) {
          F_004d98b0(this GEN_EDX_ARG);
          return 0;
        }
        uVar1 = uVar1 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar1 < 3);
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Graphics::Kernel::InputLayout::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_004dc210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dc210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x20);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x20) = 0;
  }
  uVar2 = 0;
  if (*(int *)(this + 0xc) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x10) = 0;
  return uVar2;
}

/* ref: Client::Graphics::Kernel::VertexShader::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_004dc250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dc250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x2c);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x2c) = 0;
  }
  uVar2 = F_004d9c00(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_004dc280 */
GEN_FRAME byte GEN_THISCALL F_004dc280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dc280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  
  bVar3 = F_004d9b80(this GEN_EDX_FWD,param_3,param_4);
  if (bVar3 == 0) {
    return 0;
  }
  *(int *)((int)this + 0x24) = param_2 - 4;
  *(undefined4 *)((int)this + 0x28) = *param_1;
  piVar1 = (int *)((int)this + 0x2c);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x16c))))
                    (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) GEN_EDX_ARG,param_1 + 1,piVar1);
  if ((int)uVar4 < 0) {
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
      *piVar1 = 0;
    }
    F_004d9c00(this GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: Client::Graphics::Kernel::PixelShader::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_004dc300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dc300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x28);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x28) = 0;
  }
  uVar2 = F_004d9c00(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_004dc330 */
GEN_FRAME byte GEN_THISCALL F_004dc330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dc330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  
  bVar3 = F_004d9b80(this GEN_EDX_FWD,param_3,param_4);
  if (bVar3 == 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x28);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x28) = 0;
    }
    F_004d9c00(this GEN_EDX_ARG);
    return 0;
  }
  *(undefined4 *)((int)this + 0x24) = param_2;
  piVar1 = (int *)((int)this + 0x28);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x1a8))))
                    (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) GEN_EDX_ARG,param_1,piVar1);
  if ((int)uVar4 < 0) {
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
      *piVar1 = 0;
    }
    F_004d9c00(this GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc3d0 */
GEN_FRAME byte GEN_THISCALL F_004dc3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dc3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  int iVar1;
  byte bVar2;
  
  if (1 < (param_4 >> 6 & 1) + (param_4 >> 3 & 1) + (param_4 >> 2 & 1) + (param_4 >> 1 & 1) +
          (param_4 & 1)) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x18) = *param_1;
  *(undefined4 *)((int)this + 0x1c) = param_1[1];
  *(undefined1 *)((int)this + 0x24) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined2 *)((int)this + 0x25) = 0;
  *(undefined4 *)((int)this + 0x28) = param_3;
  *(uint *)((int)this + 0x2c) = param_4 & 0xfcbfffff | 0x800000;
  if ((((((param_4 & 0x4c) != 0) || (iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x38), iVar1 == 0)) ||
       (iVar1 == 1)) || (iVar1 == 4)) && (bVar2 = F_004da150(this GEN_EDX_FWD), bVar2 == 0)) {
    F_004d9cc0(this GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc480 */
GEN_FRAME byte GEN_THISCALL F_004dc480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4dc480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  int iVar1;
  byte bVar2;
  undefined * _Dst;
  
  if (1 < (param_5 >> 6 & 1) + (param_5 >> 3 & 1) + (param_5 >> 2 & 1) + (param_5 >> 1 & 1) +
          (param_5 & 1)) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x18) = *param_1;
  *(undefined4 *)((int)this + 0x1c) = param_1[1];
  *(undefined4 *)((int)this + 0x28) = param_4;
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(char *)((int)this + 0x24) = (char)param_3;
  *(undefined2 *)((int)this + 0x25) = 0;
  *(uint *)((int)this + 0x2c) = param_5 & 0xfd3fffff | 0x1000000;
  if ((param_5 & 4) != 0) {
    _Dst = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,param_3 * 0xc,0x10)));
    *(undefined * PTR32 *)((int)this + 0x44) = _Dst;
    F_00c48350(_Dst,0,param_3 * 0xc);
  }
  if ((((((*(byte *)((int)this + 0x2c) & 0x4c) != 0) ||
        (iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x38), iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 4)) &&
     (bVar2 = F_004da150(this GEN_EDX_ARG), bVar2 == 0)) {
    F_004d9cc0(this GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc560 */
GEN_FRAME byte GEN_THISCALL F_004dc560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dc560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  int iVar1;
  byte bVar2;
  
  if (1 < (param_4 >> 6 & 1) + (param_4 >> 3 & 1) + (param_4 >> 2 & 1) + (param_4 >> 1 & 1) +
          (param_4 & 1)) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined1 *)((int)this + 0x24) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined2 *)((int)this + 0x25) = 0;
  *(undefined4 *)((int)this + 0x28) = param_3;
  *(uint *)((int)this + 0x2c) = param_4 & 0xfe3fffff | 0x2000000;
  if ((((((param_4 & 0x4c) != 0) || (iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x38), iVar1 == 0)) ||
       (iVar1 == 1)) || (iVar1 == 4)) && (bVar2 = F_004da150(this GEN_EDX_FWD), bVar2 == 0)) {
    F_004d9cc0(this GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc610 */
GEN_FRAME byte GEN_THISCALL F_004dc610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4dc610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  byte bVar2;
  
  if (1 < (param_3 >> 6 & 1) + (param_3 >> 3 & 1) + (param_3 >> 2 & 1) + (param_3 >> 1 & 1) +
          (param_3 & 1)) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x18) = *param_1;
  *(undefined4 *)((int)this + 0x1c) = param_1[1];
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined2 *)((int)this + 0x24) = 1;
  *(undefined1 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0x28) = param_2;
  *(uint *)((int)this + 0x2c) = param_3 & 0xfcbfffff | 0x900000;
  if ((((((param_3 & 0x4c) != 0) || (iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x38), iVar1 == 0)) ||
       (iVar1 == 1)) || (iVar1 == 4)) && (bVar2 = F_004da150(this GEN_EDX_FWD), bVar2 == 0)) {
    F_004d9cc0(this GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc6d0 */
GEN_FRAME byte GEN_THISCALL F_004dc6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4dc6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  byte bVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  *(int *)((int)this + 0x18) = param_1;
  iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x38);
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 4)) && (bVar3 = F_004da760(this GEN_EDX_FWD), bVar3 == 0))
  {
    piVar2 = *(int * PTR32 *)((int)this + 0x1c);
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x1c) = 0;
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc730 */
GEN_FRAME uint GEN_THISCALL F_004dc730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4dc730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar1;
  uVar2 = *(uint *)((int)this + 0x20);
  *param_2 = 0;
  if (uVar2 == 0) {
    F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_FWD);
    return 0;
  }
  if (0x30000 < (int)(uVar2 * 0x8000)) {
    uVar2 = F_004da960(this GEN_EDX_ARG,param_2);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return uVar2;
  }
  uVar3 = F_004e1760(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG,uVar2 * 0x8000);
  uVar1 = uVar3 + uVar2 * 0x4000;
  (*(uint *)(gen_frame + 0x8)) = uVar3;
  iVar4 = (uVar2 & 0x3ffff) * 0x800 - *(int *)((int)this + 0x1c);
  (*(uint *)(gen_frame + 0x10)) = uVar1;
  *param_2 = iVar4;
  (*(int *)(gen_frame + 0x24)) = iVar4;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 0x10);
  (*(undefined4 *)(gen_frame + 0x14)) = 0x4000;
  (*(undefined4 *)(gen_frame + 0x18)) = 8;
  (*(int *)(gen_frame + 0x1c)) = uVar2 * 0x4000;
  (*(uint *)(gen_frame + 0x20)) = uVar2;
  F_00a1a9d0(param_1,&(*(uint *)(gen_frame + 0x8)),param_3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004dc830 */
GEN_FRAME byte GEN_THISCALL F_004dc830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4dc830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int iVar1;
  char cVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  *param_1 = *(uint *)((int)this + 0x30);
  param_1[1] = *(uint *)((int)this + 0x34);
  param_1[2] = *(uint *)((int)this + 0x38) & 0x7ffffff;
  param_1[3] = *(uint *)((int)this + 0x3c) & 0x7fffffff;
  param_1[4] = *(uint *)((int)this + 0x40);
  param_1[5] = *(uint *)((int)this + 0x44);
  param_1[6] = *(uint *)((int)this + 0x48);
  uVar7 = *(uint *)((int)this + 0x4c);
  param_1[7] = uVar7;
  uVar4 = *(uint *)((int)this + 0x5c);
  *param_1 = *(uint *)((int)this + 0x58) & 0xfe000000;
  param_1[1] = uVar4 & 0xfffffffc;
  *param_1 = *param_1 | *(uint *)((int)this + 0x50) & 0x1f;
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x60);
  if (pvVar3 != (undefined *)0x0) {
    uVar4 = *(uint *)((int)this + 8) >> 0x13 & 0xf;
    if ((((byte)uVar4 < 0x10) && (cVar2 = *(char *)(uVar4 + 0xc + (int)pvVar3), -1 < cVar2)) &&
       ((int)cVar2 < *(int *)((int)pvVar3 + 8))) {
      uVar4 = F_004e3c00(pvVar3 GEN_EDX_FWD,(int)cVar2);
    }
    else {
      uVar4 = 0;
    }
    param_1[4] = uVar4;
    pvVar3 = *(undefined * PTR32 *)((int)this + 0x60);
    uVar4 = *(uint *)((int)this + 8) >> 0x13 & 0xf;
    if ((((byte)uVar4 < 0x10) && (cVar2 = *(char *)(uVar4 + 0xc + (int)pvVar3), -1 < cVar2)) &&
       ((int)cVar2 < *(int *)((int)pvVar3 + 8))) {
      uVar4 = F_004e3c40(pvVar3 GEN_EDX_ARG,(int)cVar2);
    }
    else {
      uVar4 = 0;
    }
    param_1[5] = uVar4;
  }
  uVar7 = *(int *)(uVar7 + 0x14) + 1;
  iVar1 = uVar7 * 8;
  puVar5 = (undefined4 *)
           F_004d4760(this GEN_EDX_ARG,iVar1 + *(int *)(param_1[5] + 0x20) + *(int *)(param_1[4] + 0x20));
  if (puVar5 == (undefined4 *)0x0) {
    return 0;
  }
  param_1[8] = uVar7;
  param_1[9] = (uint)puVar5;
  if (uVar7 != 0) {
    puVar6 = (undefined4 *)((int)this + 0x68);
    do {
      *puVar5 = *puVar6;
      puVar5[1] = puVar6[1];
      puVar6 = puVar6 + 2;
      puVar5 = puVar5 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = F_004daad0(this GEN_EDX_ARG,param_1[4],param_1[9] + iVar1,param_1 + 10,param_1 + 0xb);
  F_004daad0(this GEN_EDX_ARG,param_1[5],uVar7,param_1 + 0xc,param_1 + 0xd);
  return 1;
}

/* ref: FUN_004dc980 */
GEN_FRAME byte GEN_THISCALL F_004dc980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dc980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined4 * puVar5;
  char * pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  bVar4 = 1;
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    bVar2 = F_004db340(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_FWD);
    if (bVar2 == 0) {
      bVar4 = 0;
    }
  }
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  pcVar6 = "common/graphics/texture/dummy.tex";
  puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x8)) = 0x746578;
  uVar3 = F_004ff310(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,0,0);
  uVar3 = F_00513d70(uVar3,puVar5,pcVar6,uVar7,uVar8,uVar9);
  *(uint *)((int)this + 0xd0) = uVar3;
  if (uVar3 == 0) {
    bVar4 = 0;
  }
  piVar1 = *(int * PTR32 *)(uVar3 + 0xfc);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xd4);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  }
  *(undefined4 *)((int)this + 0xd4) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd0) + 0xfc)));
  return bVar4;
}

/* ref: FUN_004dca20 */
GEN_FRAME uint GEN_STDCALL F_004dca20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dca20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  byte bVar1;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x48,0x10)));
  if (this != (undefined *)0x0) {
    this_00 = (int *)F_004d6c80(this GEN_EDX_ARG);
    if (this_00 != (int *)0x0) {
      this_00[2] = this_00[2] ^ (this_00[2] ^ param_5) & 0xf;
      bVar1 = F_004dc3d0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4);
      if (bVar1 != 0) {
        return (uint)this_00;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xc))(this_00 GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: FUN_004dca90 */
GEN_FRAME uint GEN_STDCALL F_004dca90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4dca90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  byte bVar1;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x48,0x10)));
  if (this != (undefined *)0x0) {
    this_00 = (int *)F_004d6c80(this GEN_EDX_ARG);
    if (this_00 != (int *)0x0) {
      this_00[2] = this_00[2] ^ (this_00[2] ^ param_6) & 0xf;
      bVar1 = F_004dc480(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
      if (bVar1 != 0) {
        return (uint)this_00;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xc))(this_00 GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: FUN_004dcb00 */
GEN_FRAME uint GEN_STDCALL F_004dcb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dcb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  byte bVar1;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x48,0x10)));
  if (this != (undefined *)0x0) {
    this_00 = (int *)F_004d6c80(this GEN_EDX_ARG);
    if (this_00 != (int *)0x0) {
      this_00[2] = this_00[2] ^ (this_00[2] ^ param_5) & 0xf;
      bVar1 = F_004dc560(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4);
      if (bVar1 != 0) {
        return (uint)this_00;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xc))(this_00 GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: FUN_004dcb70 */
GEN_FRAME uint GEN_STDCALL F_004dcb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dcb70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  byte bVar1;
  int * this;
  
  this = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                          (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x30,0x10)));
  if (this != (int *)0x0) {
    F_00b1b490(this GEN_EDX_ARG);
    this[2] = 0;
    this[3] = 0;
    this[4] = 0;
    this[5] = 0;
    this[6] = 0;
    this[7] = 0;
    this[8] = 0;
    *this = (int)(*(undefined * PTR32 (*)[5])REFP(0x1096afc));
    this[9] = 0;
    this[10] = 0;
    this[0xb] = 0;
    this[2] = this[2] ^ param_5 & 0xf;
    bVar1 = F_004dc280(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
    if (bVar1 != 0) {
      return (uint)this;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*this + 0xc))(this GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_004dcc00 */
GEN_FRAME uint GEN_STDCALL F_004dcc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dcc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  byte bVar1;
  int * this;
  
  this = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                          (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x2c,0x10)));
  if (this != (int *)0x0) {
    F_00b1b490(this GEN_EDX_ARG);
    this[2] = 0;
    this[3] = 0;
    this[4] = 0;
    this[5] = 0;
    this[6] = 0;
    this[7] = 0;
    this[8] = 0;
    *this = (int)(*(undefined * PTR32 (*)[5])REFP(0x1096b14));
    this[9] = 0;
    this[10] = 0;
    this[2] = this[2] ^ param_5 & 0xf;
    bVar1 = F_004dc330(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
    if (bVar1 != 0) {
      return (uint)this;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*this + 0xc))(this GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_004dcc90 */
GEN_FRAME uint GEN_STDCALL F_004dcc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4dcc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  byte bVar1;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x34,0x10)));
  if (this != (undefined *)0x0) {
    this_00 = (int *)F_004d6830(this GEN_EDX_ARG);
    if (this_00 != (int *)0x0) {
      this_00[2] = this_00[2] ^ (this_00[2] ^ param_3) & 0xf;
      bVar1 = F_004dbff0(this_00 GEN_EDX_ARG,param_1,param_2);
      if (bVar1 != 0) {
        return (uint)this_00;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xc))(this_00 GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: FUN_004dccf0 */
GEN_FRAME uint GEN_STDCALL F_004dccf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4dccf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  byte bVar1;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x38,0x10)));
  if (this != (undefined *)0x0) {
    this_00 = (int *)F_004d69a0(this GEN_EDX_ARG);
    if (this_00 != (int *)0x0) {
      this_00[2] = this_00[2] ^ (this_00[2] ^ param_4) & 0xf;
      bVar1 = F_004dc090(this_00 GEN_EDX_ARG,param_1,param_2,param_3);
      if (bVar1 != 0) {
        return (uint)this_00;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xc))(this_00 GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: FUN_004dcd60 */
GEN_FRAME uint GEN_STDCALL F_004dcd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4dcd60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  byte bVar1;
  int * this;
  
  this = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                          (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x2c,0x10)));
  if (this != (int *)0x0) {
    F_00b1b490(this GEN_EDX_ARG);
    this[2] = 0;
    *this = (int)(*(undefined * PTR32 (*)[5])REFP(0x1096ab4));
    this[3] = 0;
    this[4] = 0;
    this[8] = 0;
    this[9] = 0;
    this[10] = 0;
    this[2] = this[2] ^ param_3 & 0xf;
    bVar1 = F_004dc130(this GEN_EDX_ARG,param_1,param_2);
    if (bVar1 != 0) {
      return (uint)this;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*this + 0xc))(this GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_004dcde0 */
GEN_FRAME uint GEN_STDCALL F_004dcde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4dcde0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  int * piVar2;
  byte bVar3;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x20,0x10)));
  if ((this != (undefined *)0x0) && (this_00 = (int *)F_004d6f50(this GEN_EDX_ARG), this_00 != (int *)0x0)) {
    this_00[2] = this_00[2] ^ (this_00[2] ^ param_2) & 0xf;
    if (param_1 != 0) {
      this_00[6] = param_1;
      iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x38);
      if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) {
        return (uint)this_00;
      }
      bVar3 = F_004da760(this_00 GEN_EDX_ARG);
      if (bVar3 != 0) {
        return (uint)this_00;
      }
      piVar2 = (int *)this_00[7];
      if (piVar2 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
        this_00[7] = 0;
      }
    }
    ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xc))(this_00 GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_004dce70 */
GEN_FRAME uint GEN_THISCALL F_004dce70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4dce70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint * puVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined * this_01;
  int iVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar3 = *(uint *)((int)this + 0x28);
  uVar7 = 0;
  (*(uint * PTR32 *)(gen_frame + 0x50)) = param_1;
  (*(uint *)(gen_frame + 0x58)) = uVar3;
  (*(uint *)(gen_frame + 0x5c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x11ac);
  this_00 = (undefined *)F_00a1abd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x11ac) GEN_EDX_FWD);
  (*(undefined * PTR32 *)(gen_frame + 0x60)) = this_00;
  if (uVar3 != 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = (undefined4 *)0x0;
    do {
      puVar1 = ((uint *)(gen_frame + 0x68)) + uVar7;
      if (this_00 == (undefined *)0x0) {
        uVar3 = F_004da960(((undefined *)GEN_TOP((*(int *)((int)this + 4) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64))))) GEN_EDX_ARG,puVar1);
      }
      else {
        uVar3 = F_004dc730(((undefined *)GEN_TOP((*(int *)((int)this + 4) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64))))) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x60)),puVar1,
                             uVar7 + 1 & 7);
      }
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x60));
      (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x5c)) + *puVar1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) + 0x5b0);
      ((uint *)(gen_frame + 0x0))[(int)(uVar7)] = uVar3;
      uVar7 = uVar7 + 1;
      uVar3 = (*(uint *)(gen_frame + 0x58));
    } while (uVar7 < (*(uint *)(gen_frame + 0x58)));
  }
  this_01 = (undefined *)0x0;
  if (this_00 != (undefined *)0x0) {
    F_00b1af80(this_00 GEN_EDX_ARG);
    this_01 = (*(undefined * PTR32 *)(gen_frame + 0x60));
  }
  puVar8 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xbc) + *(int *)((int)this + 0xb8) + (*(uint *)(gen_frame + 0x5c)) * -8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = puVar8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = puVar8;
  if ((*(uint *)(gen_frame + 0x5c)) != 0) {
    do {
      iVar6 = 0;
      uVar7 = 0xffffffff;
      uVar5 = 0;
      if (uVar3 != 0) {
        do {
          iVar4 = uVar3 - uVar5;
          if ((((uint *)(gen_frame + 0x68))[(int)(iVar4 - 1)] != 0) && (*(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4 - 1)] <= uVar7)) {
            iVar6 = iVar4 - 1;
            uVar7 = *(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4 - 1)];
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
      }
      piVar2 = (int *)((uint *)(gen_frame + 0x0))[(int)(iVar6)];
      (*(uint * PTR32 *)(gen_frame + 0x40)) = ((uint *)(gen_frame + 0x68)) + iVar6;
      uVar3 = ((uint *)(gen_frame + 0x68))[(int)(iVar6)];
      uVar7 = 0;
      (*(uint * PTR32 *)(gen_frame + 0x54)) = ((uint *)(gen_frame + 0x0)) + iVar6;
      do {
        uVar7 = uVar7 + 1;
        if (uVar7 == uVar3) break;
      } while (*piVar2 == piVar2[uVar7 * 2]);
      if (uVar7 != 0) {
        if (((*(undefined * PTR32 *)(gen_frame + 0x60)) == (undefined *)0x0) || (uVar7 < 0x401)) {
          if (0 < (int)uVar7) {
            (*(uint *)(gen_frame + 0x48)) = uVar7;
            puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x64));
            do {
              *puVar8 = *((undefined4 *)GEN_TOP((((int)piVar2 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64))) + (int)puVar8)));
              puVar8[1] = *((undefined4 *)GEN_TOP((((int)piVar2 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64))) + 4 + (int)puVar8)));
              puVar8 = puVar8 + 2;
              uVar5 = (*(uint *)(gen_frame + 0x48)) - 1;
              (*(uint *)(gen_frame + 0x48)) = uVar5;
            } while (uVar5 != 0);
          }
        }
        else {
          F_00a1a5d0((*(undefined * PTR32 *)(gen_frame + 0x60)),(*(undefined4 * PTR32 *)(gen_frame + 0x64)),piVar2,uVar7 * 8);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = (*(undefined4 * PTR32 *)(gen_frame + 0x64)) + uVar7 * 2;
        *(*(uint * PTR32 *)(gen_frame + 0x40)) = uVar3 - uVar7;
        *(*(uint * PTR32 *)(gen_frame + 0x54)) = (uint)(piVar2 + uVar7 * 2);
      }
      this_01 = (*(undefined * PTR32 *)(gen_frame + 0x60));
      uVar3 = (*(uint *)(gen_frame + 0x58));
    } while ((uint)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x4c))) >> 3) < (*(uint *)(gen_frame + 0x5c)));
  }
  uVar3 = (*(uint *)(gen_frame + 0x5c));
  puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c));
  if (this_01 == (undefined *)0x0) {
    *(*(uint * PTR32 *)(gen_frame + 0x50)) = (*(uint *)(gen_frame + 0x5c));
  }
  else {
    F_00b1af80(this_01 GEN_EDX_ARG);
    F_00a1ac10((*(undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x60)));
    *(*(uint * PTR32 *)(gen_frame + 0x50)) = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return (uint)puVar8;
}

/* ref: FUN_004dd050 */
GEN_NOFRAME uint GEN_THISCALL F_004dd050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dd050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0x230) != (undefined *)0x0) {
    F_004db7e0(*(undefined * PTR32 *)((int)this + 0x230) GEN_EDX_FWD);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x230);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x230) = 0;
    }
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x22c);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x22c) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x228);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x228) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x224);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x224) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x220);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x220) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x18);
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return uVar3;
}

/* ref: FUN_004dd100 */
GEN_FRAME uint GEN_THISCALL F_004dd100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4dd100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  uint * puVar4;
  byte bVar5;
  code * pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(int *)(gen_frame + 0x18)) = param_1;
  if (*(char *)((int)this + 0x20) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa8))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD);
    *(undefined1 *)((int)this + 0x20) = 0;
  }
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)((int)this + 0x24);
  uVar10 = 0;
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)(param_1 + 8);
  iVar8 = param_1;
  do {
    iVar2 = *(*(int * PTR32 *)(gen_frame + 0x1c));
    if (iVar2 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x94))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar10,0);
    }
    else {
      piVar3 = (int *)(iVar8 + 0x1c);
      if (*piVar3 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x94))))
                  (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar10,*(undefined4 *)(iVar2 + 0x34));
      }
      else {
        iVar8 = (*(int *)(gen_frame + 0x18));
        if (((*(uint *)(iVar2 + 0x2c) & 0x3c00000) == 0x800000) &&
           ((*(uint *)(iVar2 + 0x2c) & 0x100000) != 0)) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 0x30) + 0x48))))(*(int * PTR32 *)(iVar2 + 0x30) GEN_EDX_ARG,*piVar3,&(*(int * PTR32 *)(gen_frame + 0x14)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x94))))
                    (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar10,(*(int * PTR32 *)(gen_frame + 0x14)));
          iVar8 = (*(int *)(gen_frame + 0x18));
          if ((*(int * PTR32 *)(gen_frame + 0x14)) != (int *)0x0) {
            ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
            (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x0;
            iVar8 = (*(int *)(gen_frame + 0x18));
          }
        }
      }
    }
    *(*(int * PTR32 *)(gen_frame + 0x10)) = *(*(int * PTR32 *)(gen_frame + 0x1c));
    uVar10 = uVar10 + 1;
    (*(int * PTR32 *)(gen_frame + 0x1c)) = (*(int * PTR32 *)(gen_frame + 0x1c)) + 1;
    (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x10)) + 1;
  } while (uVar10 < 4);
  piVar3 = *(int * PTR32 *)((int)this + 0x1c);
  if (*(int *)(iVar8 + 0x18) == 0) {
    pcVar6 = *(gen_code32 *)(*piVar3 + 0x9c);
    uVar12 = 0;
  }
  else {
    uVar12 = *((undefined4 *)GEN_TOP((*(int *)(iVar8 + 0x18) + 0x34)));
    pcVar6 = *(gen_code32 *)(*piVar3 + 0x9c);
  }
  (*pcVar6)(piVar3,uVar12);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(iVar8 + 0x18);
  uVar12 = *(undefined4 *)(iVar8 + 0x1c);
  iVar2 = *(int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x38) = uVar12;
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(iVar8 + 0x20);
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  bVar5 = (byte)uVar12;
  uVar7 = *(uint *)(iVar2 + 0x18) >> (bVar5 & 0x1f);
  uVar11 = *(uint *)(iVar2 + 0x18) >> (bVar5 & 0x1f);
  uVar9 = *(uint *)(iVar2 + 0x1c) >> (bVar5 & 0x1f);
  uVar10 = *(uint *)(iVar2 + 0x1c) >> (bVar5 & 0x1f);
  ((byte *)(gen_frame + 0x0))[0] = 0;
  ((byte *)(gen_frame + 0x0))[1] = 0;
  ((byte *)(gen_frame + 0x0))[2] = 0;
  ((byte *)(gen_frame + 0x0))[3] = 0;
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  puVar1 = (undefined4 *)((int)this + 8);
  ((byte *)(gen_frame + 0x0))[8] = (char)uVar7;
  ((byte *)(gen_frame + 0x0))[9] = (char)(uVar7 >> 8);
  ((byte *)(gen_frame + 0x0))[10] = (char)(uVar7 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0xb] = (char)(uVar7 >> 0x18);
  (*(uint *)(gen_frame + 0x30)) = uVar11;
  (*(uint *)(gen_frame + 0x34)) = uVar9;
  (*(uint *)(gen_frame + 0xc)) = uVar10;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar4 = &(*(uint *)(gen_frame + 0x30));
  if ((int)uVar7 <= (int)uVar11) {
    puVar4 = (uint *)(((byte *)(gen_frame + 0x0)) + 8);
  }
  uVar7 = *puVar4;
  *(uint *)((int)this + 0x10) = uVar7;
  puVar4 = &(*(uint *)(gen_frame + 0x34));
  if ((int)uVar10 <= (int)uVar9) {
    puVar4 = &(*(uint *)(gen_frame + 0xc));
  }
  uVar10 = *puVar4;
  *(uint *)((int)this + 0x14) = uVar10;
  if ((int)uVar7 < 0) {
    *puVar1 = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  if ((int)uVar10 < 0) {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 300))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,puVar1);
  piVar3 = *(int * PTR32 *)((int)this + 0x1c);
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x28)) = uVar11;
  (*(uint *)(gen_frame + 0x2c)) = uVar9;
  (*(uint *)(gen_frame + 0x34)) = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  uVar10 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xbc))(piVar3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)));
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar10;
}

/* ref: FUN_004dd310 */
GEN_FRAME uint GEN_THISCALL F_004dd310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4dd310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    F_004db500(this GEN_EDX_FWD);
    if (*(char *)((int)this + 0x20) == '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG);
      *(undefined1 *)((int)this + 0x20) = 1;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x34,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x38,8);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x39,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x3a,0xff);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x3b,0xff);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x35,1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x36,1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x37,1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,8,3);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0x16,3);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0xae,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0xc3,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0xaf,0);
    ((code *)*(gen_code32 *)(param_1 + 4))(*(undefined4 *)(param_1 + 8));
    F_004d61f0(this GEN_EDX_ARG);
    uVar1 = F_004db500(((undefined *)(uint)(this)) GEN_EDX_ARG);
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 4))(*(undefined4 *)(param_1 + 8));
  return uVar1;
}

/* ref: FUN_004dd470 */
GEN_NOFRAME uint GEN_THISCALL F_004dd470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dd470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if (*(char *)((int)this + 0x20) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa8))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD);
    *(undefined1 *)((int)this + 0x20) = 0;
  }
  bVar1 = F_004db9a0(*(undefined * PTR32 *)((int)this + 0x230) GEN_EDX_ARG);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (*(char *)((int)this + 0x20) == '\0') {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG);
    *(undefined1 *)((int)this + 0x20) = 1;
  }
  return uVar2;
}

/* ref: FUN_004dd4b0 */
GEN_FRAME byte GEN_THISCALL F_004dd4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4dd4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  bVar1 = F_004db880(*(undefined * PTR32 *)((int)this + 0x230) GEN_EDX_FWD,*(undefined4 *)(param_1 + 8),
                       *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  return bVar1;
}

/* ref: FUN_004dd4e0 */
GEN_FRAME uint GEN_THISCALL F_004dd4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4dd4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x20) == '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD);
    *(undefined1 *)((int)this + 0x20) = 1;
  }
  if (*(uint *)((int)this + 0x40) != (param_1[2] & 0x7ffffff)) {
    F_004d75c0(this GEN_EDX_ARG,param_1[2] & 0x7ffffff);
  }
  if (*(uint *)((int)this + 0x44) != (*param_1 & 0x1f)) {
    F_004d7720(this GEN_EDX_ARG,*param_1 & 0x1f);
  }
  if ((*(uint *)((int)this + 0x48) != (*param_1 & 0xfe000000)) ||
     (*(uint *)((int)this + 0x4c) != (param_1[1] & 0xfffffffc))) {
    F_004d7790(this GEN_EDX_ARG,*param_1 & 0xfe000000,param_1[1] & 0xfffffffc);
  }
  if (*(uint *)((int)this + 0x50) != (param_1[3] & 0x7fffffff)) {
    F_004d7890(this GEN_EDX_ARG,param_1[3] & 0x7fffffff);
  }
  F_004d79a0(this GEN_EDX_ARG,param_1[7],param_1[9],param_1[8],param_1[4],param_2);
  uVar2 = param_1[6];
  if (*(uint *)((int)this + 0x54) != uVar2) {
    if (uVar2 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x1a0))))
                (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,*(undefined4 *)(uVar2 + 0x24 + REFG(int, 0x1375a3c) * 4));
    }
    *(uint *)((int)this + 0x54) = uVar2;
  }
  uVar2 = param_1[10];
  uVar1 = param_1[4];
  if (*(uint *)((int)this + 0x5c) == 1) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x170))))
              (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,*(undefined4 *)(uVar1 + 0x2c));
    *(uint *)((int)this + 0x5c) = uVar1;
    F_004d7d30(this GEN_EDX_ARG,uVar1,uVar2);
  }
  else {
    if (*(uint *)((int)this + 0x5c) != uVar1) {
      F_004d7da0(this GEN_EDX_ARG,uVar1);
    }
    F_004d7c80(this GEN_EDX_ARG,uVar1,uVar2);
  }
  F_004d7ee0(this GEN_EDX_ARG,param_1[4],param_1[0xb]);
  F_004e3d40(this GEN_EDX_ARG,param_1[5],param_1[0xc]);
  uVar2 = F_004d83c0(this GEN_EDX_ARG,param_1[5],param_1[0xd]);
  return uVar2;
}

/* ref: FUN_004dd630 */
GEN_FRAME byte GEN_THISCALL F_004dd630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dd630u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  int * this_01;
  
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = (*(int * PTR32 *)&gen_args[1]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_FWD);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) + 0x14))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) GEN_EDX_ARG,0,0,&(*(int * PTR32 *)&gen_args[1]));
  if ((int)uVar3 < 0) {
    F_004da5a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return 0;
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                              (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x48,0x10)));
  if ((this_00 != (undefined *)0x0) && (this_01 = (int *)F_004d6c80(this_00 GEN_EDX_ARG), this_01 != (int *)0x0)) {
    bVar2 = F_004d6d10(this_01 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),8);
    if (bVar2 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*this_01 + 0xc))(this_01 GEN_EDX_ARG);
      if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
        (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
      }
      F_004da5a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      return 0;
    }
    *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = this_01;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = this_01[6];
    iVar1 = this_01[7];
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = (undefined1)(*(undefined4 *)&gen_args[3]);
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = iVar1;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = (*(undefined4 *)&gen_args[2]);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 1;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = (*(undefined4 *)&gen_args[4]);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 8;
    if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
      (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
    }
    if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) != '\0') {
      uVar3 = F_004dca20(((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),1,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),
                           *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) | 0x200000,1);
      if (uVar3 == 0) {
        return 0;
      }
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = uVar3;
    }
    return 1;
  }
  if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
    (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
  }
  F_004da5a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_004dd770 */
GEN_FRAME byte GEN_THISCALL F_004dd770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dd770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined * this_00;
  int * piVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x4)),0,0x38);
  uVar1 = *(undefined4 *)((int)this + 0x20);
  uVar2 = *(undefined4 *)((int)this + 0x1c);
  iVar7 = (int)this + 0x18;
  (*(int *)(gen_frame + 0x40)) = iVar7;
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x18);
  (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
  uVar5 = F_004d9f60(uVar1);
  (*(uint *)(gen_frame + 0xc)) = uVar5;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 1;
  (*(undefined4 *)(gen_frame + 0x24)) = 1;
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 0x24);
  (*(undefined4 *)(gen_frame + 0x38)) = 0x80000000;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x34))))
                    (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),(undefined4 *)((int)this + 0x3c));
  if ((int)uVar5 < 0) goto LAB_004dd8a3;
  piVar6 = *(int * PTR32 *)((int)this + 0x3c);
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x14))(piVar6 GEN_EDX_ARG,0,0,&(*(int * PTR32 *)(gen_frame + 0x44)));
  if ((int)uVar5 < 0) goto LAB_004dd8a3;
  iVar3 = *(int *)((int)this + 0x34);
  if (iVar3 != 0) {
    iVar7 = *(int *)((int)this + 0x20);
    (*(int * PTR32 *)(gen_frame + 0x3c)) = (*(int * PTR32 *)(gen_frame + 0x44));
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x44)) + 0x30))((*(int * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x48)));
    *(undefined4 *)(iVar3 + 0x18) = (*(undefined4 *)(gen_frame + 0x60));
    *(undefined4 *)(iVar3 + 0x1c) = (*(undefined4 *)(gen_frame + 0x64));
    if (iVar7 != 0) {
      *(int *)(iVar3 + 0x28) = iVar7;
    }
    *(int * PTR32 *)(iVar3 + 0x34) = (*(int * PTR32 *)(gen_frame + 0x3c));
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 4))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
    iVar7 = (*(int *)(gen_frame + 0x40));
LAB_004dd8b9: ;
    if ((*(int * PTR32 *)(gen_frame + 0x44)) != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x44)) + 8))((*(int * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG);
      (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)0x0;
    }
    if (*(char *)((int)this + 0x28) != '\0') {
      if (*(undefined * PTR32 *)((int)this + 0x38) != (undefined *)0x0) {
        F_004da550(*(undefined * PTR32 *)((int)this + 0x38) GEN_EDX_ARG,iVar7,1,*(undefined4 *)((int)this + 0x2c));
        F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
        return 1;
      }
      uVar5 = F_004dca20(iVar7,1,*(undefined4 *)((int)this + 0x2c),
                           *(uint *)((int)this + 0x30) | 0x200000,1);
      if (uVar5 == 0) goto LAB_004dd8a3;
      *(uint *)((int)this + 0x38) = uVar5;
    }
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return 1;
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                              (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x48,0x10)));
  if (this_00 != (undefined *)0x0) {
    piVar6 = (int *)F_004d6c80(this_00 GEN_EDX_ARG);
    if (piVar6 != (int *)0x0) {
      bVar4 = F_004d6d10(piVar6 GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x44)),*(undefined4 *)((int)this + 0x20),8);
      if (bVar4 != 0) {
        *(int * PTR32 *)((int)this + 0x34) = piVar6;
        goto LAB_004dd8b9;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG);
    }
  }
  if ((*(int * PTR32 *)(gen_frame + 0x44)) != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x44)) + 8))((*(int * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG);
  }
LAB_004dd8a3: ;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_004dd940 */
GEN_NOFRAME byte GEN_THISCALL F_004dd940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dd940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((*(byte *)((int)this + 0x24) & 0x4c) != 0) {
    return 1;
  }
  bVar1 = F_004dd770((undefined *)((int)this - 0xc) GEN_EDX_FWD);
  if (bVar1 == 0) {
    F_004da5a0((undefined *)((int)this - 0xc) GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dd970 */
GEN_FRAME byte GEN_THISCALL F_004dd970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dd970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 uVar1;
  byte bVar2;
  
  *(undefined4 *)((int)this + 0x18) = *param_1;
  uVar1 = param_1[1];
  *(undefined1 *)((int)this + 0x28) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  if (param_3 != 0) {
    *(int *)((int)this + 0x20) = param_3;
  }
  if (param_4 != 0) {
    *(int *)((int)this + 0x2c) = param_4;
  }
  bVar2 = F_004dd770(this GEN_EDX_FWD);
  if (bVar2 == 0) {
    F_004da5a0(this GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dd9c0 */
GEN_FRAME uint GEN_THISCALL F_004dd9c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dd9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this_00;
  byte bVar1;
  HWND pHVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x54) != 0) {
    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) - 1;
    return 1;
  }
  if ((*(char *)((int)this + 0x4c) != '\0') &&
     (pHVar2 = gen_imp_GetActiveWindow(), pHVar2 != *(HWND *)((int)this + 0x5c))) {
    return 1;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0xc))))(*(int * PTR32 *)((int)this + 0x40) GEN_EDX_ARG);
  if (uVar3 == 0x88760868) {
    return 1;
  }
  F_004db190(this GEN_EDX_ARG);
  F_004db060(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0x40))))(*(int * PTR32 *)((int)this + 0x40) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  if (-1 < (int)uVar3) {
    *(undefined4 *)((int)this + 0x38) = 4;
    if (*(char *)((int)this + 0x4c) == '\0') {
      this_00 = *(undefined * PTR32 *)((int)this + 0x2c);
      *(undefined4 *)((int)this_00 + 0x18) = *(undefined4 *)((int)this + 0x90);
      *(undefined4 *)((int)this_00 + 0x1c) = *(undefined4 *)((int)this + 0x94);
      *(undefined1 *)((int)this_00 + 0x28) = 1;
      bVar1 = F_004dd770(this_00 GEN_EDX_ARG);
      if (bVar1 == 0) {
        F_004da5a0(this_00 GEN_EDX_ARG);
        return 4;
      }
    }
    else {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0x38))))
                        (*(int * PTR32 *)((int)this + 0x40) GEN_EDX_ARG,0,&(*(int * PTR32 *)(gen_frame + 0x38)));
      if ((int)uVar3 < 0) {
        return 4;
      }
      bVar1 = F_004da660(*(undefined * PTR32 *)((int)this + 0x2c) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x38)));
      if (bVar1 == 0) {
        if ((*(int * PTR32 *)(gen_frame + 0x38)) != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 8))((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
        }
        return 4;
      }
      if ((*(int * PTR32 *)(gen_frame + 0x38)) != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 8))((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
      }
    }
    bVar1 = F_004d6710();
    if (bVar1 == 0) {
      return 4;
    }
    F_004d93c0(*(undefined * PTR32 *)((int)this + 0x80) GEN_EDX_ARG);
    if ((*(char *)((int)this + 0x4e) != '\0') && (*(char *)((int)this + 0x4c) == '\0')) {
      *(undefined1 *)((int)this + 0x4e) = 0;
    }
    F_004d6140(this GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined1 *)((int)this + 0x31) = 1;
    *(undefined4 *)((int)this + 0x88) = 0;
    return 0;
  }
  if ((int)uVar3 < -0x7789f7d8) {
    if ((uVar3 != 0x88760827) && ((uVar3 == 0x8007000e || (uVar3 == 0x8876017c)))) {
      return 4;
    }
  }
  else {
    if (uVar3 == 0x88760868) {
      return 1;
    }
    if (uVar3 == 0x8876086c) {
      return 3;
    }
  }
  return 2;
}

/* ref: FUN_004ddb50 */
GEN_NOFRAME byte GEN_THISCALL F_004ddb50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ddb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  byte bVar1;
  
  if (*(char *)((int)this + 0x4c) == '\0') {
    this_00 = *(undefined * PTR32 *)((int)this + 0x2c);
    *(undefined4 *)((int)this_00 + 0x18) = *(undefined4 *)((int)this + 0x90);
    *(undefined4 *)((int)this_00 + 0x1c) = *(undefined4 *)((int)this + 0x94);
    *(undefined1 *)((int)this_00 + 0x28) = 1;
    bVar1 = F_004dd770(this_00 GEN_EDX_FWD);
    if (bVar1 == 0) {
      F_004da5a0(this_00 GEN_EDX_ARG);
      return 0;
    }
  }
  bVar1 = F_004d67a0();
  if (bVar1 == 0) {
    return 0;
  }
  F_004d93c0(*(undefined * PTR32 *)((int)this + 0x80) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_004ddbb0 */
GEN_FRAME uint GEN_THISCALL F_004ddbb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ddbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  F_004dd4e0(this GEN_EDX_FWD,param_1 + 0x10,0);
  uVar1 = *(uint *)(param_1 + 0xc);
  switch((unsigned int)(uintptr_t)(*(int *)(param_1 + 4))) {
  case 2: ;
    uVar1 = uVar1 >> 1;
    break;
  case 4: ;
    uVar1 = uVar1 - 1;
    break;
  case 5: ;
    uVar1 = uVar1 / 3;
    break;
  case 6: ;
    uVar1 = uVar1 - 2;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x144))))
                    (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,
                     *(undefined4 *)(&REFG(undefined, 0x1096c78) + *(int *)(param_1 + 4) * 4),
                     *(undefined4 *)(param_1 + 8),uVar1);
  return uVar1;
}

/* ref: FUN_004ddc30 */
GEN_FRAME uint GEN_THISCALL F_004ddc30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ddc30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  F_004dd4e0(this GEN_EDX_FWD,param_1 + 0x1c,0);
  uVar1 = *(uint *)(param_1 + 0x18);
  switch((unsigned int)(uintptr_t)(*(int *)(param_1 + 4))) {
  case 2: ;
    uVar1 = uVar1 >> 1;
    break;
  case 4: ;
    uVar1 = uVar1 - 1;
    break;
  case 5: ;
    uVar1 = uVar1 / 3;
    break;
  case 6: ;
    uVar1 = uVar1 - 2;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x148))))
                    (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,
                     *(undefined4 *)(&REFG(undefined, 0x1096c94) + *(int *)(param_1 + 4) * 4),
                     *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                     *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),uVar1);
  return uVar1;
}

/* ref: FUN_004ddcb0 */
GEN_FRAME uint GEN_THISCALL F_004ddcb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ddcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  F_004dd4e0(this GEN_EDX_FWD,param_1 + 0x20,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 0x18);
  switch((unsigned int)(uintptr_t)(*(int *)(param_1 + 4))) {
  case 2: ;
    uVar1 = uVar1 >> 1;
    break;
  case 4: ;
    uVar1 = uVar1 - 1;
    break;
  case 5: ;
    uVar1 = uVar1 / 3;
    break;
  case 6: ;
    uVar1 = uVar1 - 2;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x148))))
                    (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,
                     *(undefined4 *)(&REFG(undefined, 0x1096cb0) + *(int *)(param_1 + 4) * 4),
                     *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                     *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),uVar1);
  return uVar1;
}

/* ref: FUN_004ddd40 */
GEN_FRAME uint GEN_THISCALL F_004ddd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ddd40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  iVar1 = (*(int * PTR32 *)&gen_args[1])[1];
  (*(int * PTR32 *)(gen_frame + 0x54)) = (int *)0x0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0x70))))
            (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG,*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c)
             ,0x4c4c554e,0,0,0,&(*(int * PTR32 *)(gen_frame + 0x54)),0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0x94))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG,0,(*(int * PTR32 *)(gen_frame + 0x54)));
  uVar4 = 1;
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0x94))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG,uVar4,0);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0x9c))))
            (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG,*(undefined4 *)(piVar3[1] + 0x34));
  iVar1 = piVar3[5];
  (*(undefined4 *)(gen_frame + 0x4c)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22c)));
  (*(int *)(gen_frame + 0x44)) = iVar1;
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  (*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x130236c) & 0xfffffffc;
  uVar2 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x220)));
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x1302368) & 0xfe000000 | REFG(undefined4, 0x130235c) & 0x1d | 2;
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302370) & 0x7ffffffb;
  (*(uint *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302350) & 0x7fffff;
  (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228)));
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x20)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x224)));
  (*(undefined4 *)(gen_frame + 0x50)) = 0x14;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x4c));
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x40)) = &(*(int *)(gen_frame + 0x44));
  F_004dd4e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)),0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0x144))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG,4,0,1);
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0xa8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG);
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  }
  uVar4 = 0;
  (*(int * PTR32 *)(gen_frame + 0x58)) = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)));
  do {
    iVar1 = *(*(int * PTR32 *)(gen_frame + 0x58));
    if (iVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0x94))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG,uVar4,0);
    }
    else if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0x94))))
                (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG,uVar4,*(undefined4 *)(iVar1 + 0x34));
    }
    else if (((*(uint *)(iVar1 + 0x2c) & 0x3c00000) == 0x800000) &&
            ((*(uint *)(iVar1 + 0x2c) & 0x100000) != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x30) + 0x48))))
                (*(int * PTR32 *)(iVar1 + 0x30) GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))),&(*(int * PTR32 *)&gen_args[1]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0x94))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG,uVar4,(*(int * PTR32 *)&gen_args[1]));
      if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
        (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
      }
    }
    (*(int * PTR32 *)(gen_frame + 0x58)) = (*(int * PTR32 *)(gen_frame + 0x58)) + 1;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) == 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x9c))(piVar3 GEN_EDX_ARG,0);
  }
  else {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x9c))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 0x34))));
  }
  uVar4 = 0;
  if ((*(int * PTR32 *)(gen_frame + 0x54)) != (int *)0x0) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x54)) + 8))((*(int * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  }
  return uVar4;
}

/* ref: FUN_004ddf80 */
GEN_FRAME unsigned int GEN_THISCALL F_004ddf80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ddf80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x20)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x20)) {
    do {
      piVar4 = (int *)piVar5[4];
      if (piVar4[1] == 1) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG);
        piVar4 = piVar5;
        if (*(char *)((int)piVar5 + 0x15) == '\0') {
          piVar4 = (int *)piVar5[2];
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            piVar2 = (int *)*piVar4;
            if (*(char *)(*piVar4 + 0x15) == '\0') {
              do {
                piVar4 = piVar2;
                piVar2 = (int *)*piVar4;
              } while (*(char *)((int)piVar2 + 0x15) == '\0');
              F_004e4af0((undefined *)((int)this + 0x1c) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar5);
              piVar5 = piVar4;
              goto LAB_004de057;
            }
          }
          else {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
            while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
              cVar1 = *(char *)(piVar4[1] + 0x15);
              piVar3 = (int *)piVar4[1];
              piVar2 = piVar4;
            }
          }
        }
        F_004e4af0((undefined *)((int)this + 0x1c) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar5);
        piVar5 = piVar4;
      }
      else if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar4 = (int *)piVar5[2];
        if (*(char *)((int)piVar4 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x15);
          piVar5 = piVar4;
          piVar4 = (int *)*piVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x15);
            piVar5 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar2 = (int *)piVar5[1];
          piVar4 = piVar5;
          while ((piVar5 = piVar2, cVar1 == '\0' && (piVar4 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar2 = (int *)piVar5[1];
            piVar4 = piVar5;
          }
        }
      }
LAB_004de057: ;
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x20));
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4)));
}

/* ref: FUN_004de070 */
GEN_FRAME byte GEN_THISCALL F_004de070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x4de070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  
  *(undefined4 *)((int)this + 0x18) = *param_1;
  uVar1 = param_1[1];
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(undefined4 *)((int)this + 0x2c) = param_5;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined4 *)((int)this + 0x24) = param_3;
  *(undefined1 *)((int)this + 0x28) = (undefined1)param_4;
  *(uint *)((int)this + 0x30) = param_6;
  if (((((param_6 & 0x4c) != 0) || (iVar2 = *(int *)(REFG(int, 0x1370b90) + 0x38), iVar2 == 0)) ||
      (iVar2 == 1)) || (iVar2 == 4)) {
    bVar3 = F_004dd770(this GEN_EDX_FWD);
    if (bVar3 == 0) {
      F_004da5a0(this GEN_EDX_ARG);
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_004de0e0 */
GEN_FRAME uint GEN_STDCALL F_004de0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x4de0e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  byte bVar1;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x40,0x10)));
  if (this != (undefined *)0x0) {
    this_00 = (int *)F_004d6ec0(this GEN_EDX_ARG);
    if (this_00 != (int *)0x0) {
      this_00[2] = this_00[2] ^ (this_00[2] ^ param_7) & 0xf;
      bVar1 = F_004de070(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6);
      if (bVar1 != 0) {
        return (uint)this_00;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xc))(this_00 GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: FUN_004de150 */
GEN_NOFRAME byte GEN_THISCALL F_004de150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4de150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_004dd9c0(this GEN_EDX_FWD);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
  case 1: ;
    return 1;
  case 2: ;
    F_00429940(1,1,0x1000000d,0xffffffff);
    return 0;
  case 3: ;
    bVar1 = F_004db220(this GEN_EDX_ARG);
    if (bVar1 == 0) {
      F_00429940(1,1,0x1000003d,0xffffffff);
    }
    break;
  case 4: ;
    bVar1 = F_004db220(this GEN_EDX_ARG);
    if (bVar1 == 0) {
      F_00429940(1,1,0x10000001,0xffffffff);
      return 1;
    }
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: FUN_004de1e0 */
GEN_FRAME uint GEN_THISCALL F_004de1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4de1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)((int)this + 0x20) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa8))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD);
    *(undefined1 *)((int)this + 0x20) = 0;
  }
  uVar2 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x14) + 0x2c)));
  uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x2c)));
  if ((uVar2 & uVar1 & 0x200000) != 0) {
    uVar2 = F_004ddd40(this GEN_EDX_ARG,param_1);
    return uVar2;
  }
  if ((uVar1 & 0x100000) != 0) {
    uVar2 = F_004d89e0(this GEN_EDX_ARG,param_1);
    return uVar2;
  }
  uVar3 = param_1;
  if (((uVar1 & 0x200000) == 0) && ((uVar2 & 0x300000) == 0)) {
    uVar3 = F_004d8b40(param_1);
  }
  return uVar3;
}

/* ref: FUN_004de260 */
GEN_FRAME uint GEN_THISCALL F_004de260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4de260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_004d61f0(this GEN_EDX_FWD);
  F_004db500(((undefined *)(uint)(this)) GEN_EDX_ARG);
  if (param_2 != 0) {
    piVar5 = (int *)(param_1 + 4);
    iVar4 = param_2;
    do {
      puVar1 = (undefined4 *)*piVar5;
      if (puVar1 != (undefined4 *)0x0) {
        switch((unsigned int)(uintptr_t)(*puVar1)) {
        case 0: ;
          F_004dd100(this GEN_EDX_ARG,puVar1);
          break;
        case 1: ;
          F_004d7550(this GEN_EDX_ARG,puVar1 + 1,GEN_TOF(gen_bits2f(puVar1[5])),GEN_TOF(gen_bits2f(puVar1[6])));
          break;
        case 2: ;
          F_004db440(this GEN_EDX_ARG,puVar1);
          break;
        case 3: ;
          F_004d8900(this GEN_EDX_ARG,puVar1);
          break;
        case 4: ;
          F_004ddbb0(this GEN_EDX_ARG,puVar1);
          break;
        case 5: ;
          F_004ddc30(this GEN_EDX_ARG,puVar1);
          break;
        case 6: ;
          F_004ddcb0(this GEN_EDX_ARG,puVar1);
          break;
        case 7: ;
          F_004d89a0(this GEN_EDX_ARG,puVar1);
          break;
        case 8: ;
          F_004de1e0(this GEN_EDX_ARG,puVar1);
          break;
        case 9: ;
          F_004d8dd0(this GEN_EDX_ARG,puVar1);
          break;
        case 10: ;
          F_004d8ef0(this GEN_EDX_ARG,puVar1);
          break;
        case 0xb: ;
          F_004dd310(this GEN_EDX_ARG,puVar1);
          break;
        case 0xc: ;
          if (*(int *)(puVar1[1] + 0x1c) != 0) {
            piVar2 = *(int * PTR32 *)(puVar1[1] + 0x1c);
            ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,puVar1[2]);
          }
          break;
        case 0xd: ;
          F_004d8f50(puVar1);
          break;
        case 0xe: ;
          F_004db880(*(undefined * PTR32 *)((int)this + 0x230) GEN_EDX_ARG,puVar1[2],puVar1[1],puVar1[4]);
          break;
        case 0xf: ;
          F_004db4c0(this GEN_EDX_ARG,puVar1);
        }
        F_004dbf10(*(undefined * PTR32 *)((int)this + 0x230) GEN_EDX_ARG);
      }
      piVar5 = piVar5 + 2;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  if (*(char *)((int)this + 0x20) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa8))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG);
    *(undefined1 *)((int)this + 0x20) = 0;
  }
  F_004db9a0(*(undefined * PTR32 *)((int)this + 0x230) GEN_EDX_ARG);
  if (*(char *)((int)this + 0x20) == '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG);
    *(undefined1 *)((int)this + 0x20) = 1;
    if (*(char *)((int)this + 0x20) == '\0') goto LAB_004de3f9;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa8))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG);
  *(undefined1 *)((int)this + 0x20) = 0;
LAB_004de3f9: ;
  piVar5 = *(int * PTR32 *)((int)this + 0x1c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(REFG(int, 0x1370b90) + 0x90);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(REFG(int, 0x1370b90) + 0x94);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 300))(piVar5 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_004de480 */
GEN_FRAME unsigned int GEN_THISCALL F_004de480(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4de480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  do {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
    piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x20)));
    if (piVar6 != *(int * PTR32 *)((int)this + 0x20)) {
      do {
        piVar5 = (int *)piVar6[4];
        if (piVar5[1] == 1) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5 GEN_EDX_ARG);
          piVar5 = piVar6;
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            piVar5 = (int *)piVar6[2];
            if (*(char *)((int)piVar5 + 0x15) == '\0') {
              piVar2 = (int *)*piVar5;
              if (*(char *)(*piVar5 + 0x15) == '\0') {
                do {
                  piVar5 = piVar2;
                  piVar2 = (int *)*piVar5;
                } while (*(char *)((int)piVar2 + 0x15) == '\0');
                F_004e4af0((undefined *)((int)this + 0x1c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),piVar6);
                piVar6 = piVar5;
                goto LAB_004de567;
              }
            }
            else {
              cVar1 = *(char *)(piVar6[1] + 0x15);
              piVar4 = (int *)piVar6[1];
              piVar2 = piVar6;
              while ((piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
                cVar1 = *(char *)(piVar5[1] + 0x15);
                piVar4 = (int *)piVar5[1];
                piVar2 = piVar5;
              }
            }
          }
          F_004e4af0((undefined *)((int)this + 0x1c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),piVar6);
          piVar6 = piVar5;
        }
        else if (*(char *)((int)piVar6 + 0x15) == '\0') {
          piVar5 = (int *)piVar6[2];
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            cVar1 = *(char *)(*piVar5 + 0x15);
            piVar6 = piVar5;
            piVar5 = (int *)*piVar5;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar5 + 0x15);
              piVar6 = piVar5;
              piVar5 = (int *)*piVar5;
            }
          }
          else {
            cVar1 = *(char *)(piVar6[1] + 0x15);
            piVar2 = (int *)piVar6[1];
            piVar5 = piVar6;
            while ((piVar6 = piVar2, cVar1 == '\0' && (piVar5 == (int *)piVar6[2]))) {
              cVar1 = *(char *)(piVar6[1] + 0x15);
              piVar2 = (int *)piVar6[1];
              piVar5 = piVar6;
            }
          }
        }
LAB_004de567: ;
      } while (piVar6 != *(int * PTR32 *)((int)this + 0x20));
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
    iVar3 = *(int *)((int)this + 0x24);
    if ((iVar3 == 0) || ((*(int *)(gen_frame + 0x8)) == iVar3)) {
      return 0;
    }
    (*(int *)(gen_frame + 0x8)) = iVar3;
  } while( true );
}

/* ref: FUN_004de5a0 */
GEN_NOFRAME uint GEN_THISCALL F_004de5a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4de5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x2c) != (undefined *)0x0) {
    F_004e5780(*(undefined * PTR32 *)((int)this + 0x2c) GEN_EDX_FWD,3);
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  uVar1 = F_004e5010((undefined *)((int)this + 4) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::RenderThread::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004de600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4de600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 RVar1;
  
  RVar1 = this[0x14];
  while ((RVar1 == (undefined1)0x0 &&
         (gen_imp_WaitForSingleObject(*(undefined4 *)(this + 0x18),0xffffffff),
         this[0x14] == (undefined1)0x0))) {
    if (*(int *)(REFG(int, 0x1370b90) + 0x38) == 1) {
      F_004de260(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 8) GEN_EDX_ARG,*(undefined4 *)(REFG(int, 0x1370b90) + 200),
                   *(undefined4 *)(REFG(int, 0x1370b90) + 0xcc));
    }
    else {
      F_004db680(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 8) GEN_EDX_ARG,*(undefined4 *)(REFG(int, 0x1370b90) + 200),
                   *(undefined4 *)(REFG(int, 0x1370b90) + 0xcc));
    }
    gen_imp_SetEvent(*(undefined4 *)(this + 0x1c));
    RVar1 = this[0x14];
  }
  return 0;
}

/* ref: FUN_004de670 */
GEN_FRAME byte GEN_THISCALL F_004de670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4de670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x1c)
  ;
  puVar1 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,0,0);
  if (puVar1 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = param_1;
    puVar1 = puVar2;
    uVar3 = param_1;
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      puVar1[5] = 0xf;
      puVar1[4] = 0;
      *(undefined1 *)puVar1 = 0;
      puVar1 = puVar1 + 7;
    }
  }
  *(uint * PTR32 *)((int)this + 0x2c) = puVar2;
  *(undefined4 *)((int)this + 0x30) = 0;
  if (puVar2 == (uint *)0x0) {
    *(undefined4 *)((int)this + 0x34) = 0;
    F_004e5010((undefined *)((int)this + 4) GEN_EDX_ARG);
    return 0;
  }
  *(uint *)((int)this + 0x34) = param_1;
  return 1;
}

/* ref: FUN_004de750 */
GEN_FRAME unsigned int GEN_THISCALL F_004de750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4de750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  iVar1 = *(int *)((int)this + 0x7c);
  iVar2 = *(int *)((int)this + iVar1 * 0x10 + 0x4c);
  this_00 = (undefined *)((int)this + iVar1 * 0x10 + 0x4c);
  uVar3 = (*(int *)((int)this + iVar1 * 0x10 + 0x50) - iVar2) / 0xc;
  if ((uint)((*(int *)((int)this_00 + 8) - iVar2) / 0xc) <= uVar3) {
    F_004e5840(this_00 GEN_EDX_ARG,uVar3 * 2 + 2);
  }
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = param_3;
  (*(undefined4 *)(gen_frame + 0x4)) = param_2;
  F_004e6210(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4)));
}

/* ref: FUN_004de7e0 */
GEN_FRAME uint GEN_THISCALL F_004de7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4de7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  byte * pbVar1;
  char cVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  int * piVar8;
  
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x14)) = (LPCRITICAL_SECTION)((int)this + 4);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  uVar5 = 0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x811c9dc5;
  if (param_2 * 4 != 0) {
    do {
      pbVar1 = (byte *)(uVar5 + (int)param_1);
      uVar5 = uVar5 + 1;
      (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)((uint)*pbVar1 ^ (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x18))) * 0x1000193);
    } while (uVar5 < (uint)(param_2 * 4));
  }
  this_00 = (undefined *)((int)this + 0x1c);
  (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x18));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this_00;
  F_004e41b0(this_00 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(int * PTR32 *)(gen_frame + 0x10)));
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x0));
  do {
    if (piVar6 == (*(int * PTR32 *)(gen_frame + 0x4))) {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                                (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x24,0x10)));
      if (piVar6 != (int *)0x0) {
        F_00b1b490(piVar6 GEN_EDX_ARG);
        piVar6[2] = 0;
        *piVar6 = (int)(*(undefined * PTR32 (*)[5])REFP(0x1096acc));
        piVar6[3] = 0;
        piVar6[4] = 0;
        piVar6[5] = 0;
        piVar6[6] = 0;
        piVar6[7] = 0;
        piVar6[8] = 0;
        bVar4 = F_004d99c0(piVar6 GEN_EDX_ARG,param_1,param_2);
        if (bVar4 != 0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 8))(piVar6 GEN_EDX_ARG);
          (*(int * PTR32 *)(gen_frame + 0x0)) = (*(int * PTR32 *)(gen_frame + 0x18));
          (*(int * PTR32 *)(gen_frame + 0x4)) = piVar6;
          F_004e5d50(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),&(*(int * PTR32 *)(gen_frame + 0x0)));
          gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
          return (uint)piVar6;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG);
      }
      gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
      return 0;
    }
    piVar3 = (int *)piVar6[4];
    if (param_2 == piVar3[4]) {
      uVar5 = param_2 * 4;
      piVar7 = param_1;
      if (piVar3[4] == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)piVar3[3];
      }
      for (; 3 < uVar5; uVar5 = uVar5 - 4) {
        if (*piVar7 != *piVar8) goto LAB_004de8bd;
        piVar8 = piVar8 + 1;
        piVar7 = piVar7 + 1;
      }
      if ((uVar5 == 0) ||
         (((char)*piVar8 == (char)*piVar7 &&
          ((uVar5 < 2 ||
           ((*(char *)((int)piVar8 + 1) == *(char *)((int)piVar7 + 1) &&
            ((uVar5 < 3 || (*(char *)((int)piVar8 + 2) == *(char *)((int)piVar7 + 2))))))))))) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG);
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
        return (uint)piVar3;
      }
    }
LAB_004de8bd: ;
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0xc));
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      piVar3 = (int *)piVar6[2];
      if (*(char *)((int)piVar3 + 0x15) == '\0') {
        cVar2 = *(char *)(*piVar3 + 0x15);
        piVar6 = piVar3;
        piVar3 = (int *)*piVar3;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*piVar3 + 0x15);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar2 = *(char *)(piVar6[1] + 0x15);
        piVar7 = (int *)piVar6[1];
        piVar3 = piVar6;
        while ((piVar6 = piVar7, cVar2 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar2 = *(char *)(piVar6[1] + 0x15);
          piVar7 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
  } while( true );
}

/* ref: FUN_004de9d0 */
GEN_NOFRAME uint GEN_THISCALL F_004de9d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4de9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096cd4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096cd0));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x30) = 0x101;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined2 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 1;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = uVar1;
  *(undefined4 *)((int)this + 0x9c) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x9c), REFG(float, 0x1087f04));
  *(undefined4 *)((int)this + 0xa0) = 1;
  *(undefined4 *)((int)this + 0xa4) = 1;
  *(undefined1 *)((int)this + 0xa8) = 1;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  return (uint)this;
}

/* ref: FUN_004deb40 */
GEN_FRAME uint GEN_THISCALL F_004deb40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4deb40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004de7e0(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_004deb50 */
GEN_FRAME byte F_004deb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4deb50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  piVar1 = *(int * PTR32 *)(REFG(int, 0x1370b90) + 0x3c);
  if (piVar1 == (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(gen_imp_Direct3DCreate9(0x20)));
    if (piVar1 == (int *)0x0) {
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return 0;
    }
  }
  else {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG,param_1,0x16);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG,param_1,0x16,uVar4,((byte *)(gen_frame + 0xc)));
      if (-1 < (int)uVar3) {
        ((byte *)(gen_frame + 0x20))[0] = ((byte *)(gen_frame + 0xc))[4];
        ((byte *)(gen_frame + 0x20))[1] = ((byte *)(gen_frame + 0xc))[5];
        ((byte *)(gen_frame + 0x20))[2] = ((byte *)(gen_frame + 0xc))[6];
        ((byte *)(gen_frame + 0x20))[3] = ((byte *)(gen_frame + 0xc))[7];
        ((byte *)(gen_frame + 0x24))[0] = ((byte *)(gen_frame + 0xc))[8];
        ((byte *)(gen_frame + 0x24))[1] = ((byte *)(gen_frame + 0xc))[9];
        ((byte *)(gen_frame + 0x24))[2] = ((byte *)(gen_frame + 0xc))[10];
        ((byte *)(gen_frame + 0x24))[3] = ((byte *)(gen_frame + 0xc))[0xb];
        ((byte *)(gen_frame + 0x1c))[0] = ((byte *)(gen_frame + 0xc))[0];
        ((byte *)(gen_frame + 0x1c))[1] = ((byte *)(gen_frame + 0xc))[1];
        ((byte *)(gen_frame + 0x1c))[2] = ((byte *)(gen_frame + 0xc))[2];
        ((byte *)(gen_frame + 0x1c))[3] = ((byte *)(gen_frame + 0xc))[3];
        F_004e6640(param_2 GEN_EDX_ARG,((byte *)(gen_frame + 0x1c)));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_004dec40 */
GEN_FRAME byte GEN_THISCALL F_004dec40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4dec40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  undefined * pvVar8;
  int * piVar9;
  undefined4 * puVar10;
  undefined4 uVar11;
  
  piVar9 = *(int * PTR32 *)(REFG(int, 0x1370b90) + 0x3c);
  *(int * PTR32 *)((int)this + 0x18) = piVar9;
  ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 4))(piVar9 GEN_EDX_FWD);
  piVar9 = *(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40);
  *(int * PTR32 *)((int)this + 0x1c) = piVar9;
  ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 4))(piVar9 GEN_EDX_ARG);
  pvVar8 = *(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x14);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x230000;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)&REFG(undefined, 0x8220c00);
  uVar7 = F_004de7e0(pvVar8 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),2);
  *(uint *)((int)this + 0x228) = uVar7;
  pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x34,0x10)));
  if (pvVar8 != (undefined *)0x0) {
    piVar9 = (int *)F_004d6830(pvVar8 GEN_EDX_ARG);
    if (piVar9 != (int *)0x0) {
      piVar9[2] = piVar9[2] & 0xfffffff0;
      bVar6 = F_004dbff0(piVar9 GEN_EDX_ARG,0x3c,4);
      if (bVar6 != 0) goto LAB_004decde;
      ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0xc))(piVar9 GEN_EDX_ARG);
    }
  }
  piVar9 = (int *)0x0;
LAB_004decde: ;
  *(int * PTR32 *)((int)this + 0x22c) = piVar9;
  if (piVar9[REFG(int, 0x1375a38) + 8] != 0) {
    uVar11 = 0;
    if ((*(byte *)(piVar9 + 7) & 1) != 0) {
      if (REFG(int, 0x1375a38) == piVar9[0xc]) {
        uVar11 = 0x1000;
      }
      else {
        piVar9[0xc] = REFG(int, 0x1375a38);
        uVar11 = 0x2000;
      }
    }
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)piVar9[REFG(int, 0x1375a38) + 8] + 0x2c))))
                      ((int *)piVar9[REFG(int, 0x1375a38) + 8] GEN_EDX_ARG,0,piVar9[6],&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),uVar11);
    if ((int)uVar7 < 0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      LOCK();
      piVar9[0xb] = piVar9[0xb] + 1;
      UNLOCK();
      puVar10 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
    }
    uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
    uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    uVar11 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087ef8)));
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = GEN_FLT_TO(*puVar10, REFG(float, 0x1090708));
      puVar10[1] = uVar4;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = uVar3;
      puVar10[5] = uVar11;
      puVar10[6] = uVar4;
      puVar10[7] = 0;
      puVar10[8] = uVar5;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar11;
      puVar10[0xc] = 0;
      puVar10[0xd] = 0;
      puVar10[0xe] = uVar4;
      iVar2 = *(int *)((int)this + 0x22c);
      if (*(int *)(iVar2 + 0x20 + REFG(int, 0x1375a38) * 4) != 0) {
        piVar9 = (int *)(iVar2 + 0x2c);
        iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar9), (long)(-1));
        if (iVar1 == 1) {
          piVar9 = *(int * PTR32 *)(iVar2 + 0x20 + REFG(int, 0x1375a38) * 4);
          ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0x30))(piVar9 GEN_EDX_ARG);
        }
      }
    }
  }
  puVar10 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x254,0x10)));
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    *puVar10 = (*(undefined * PTR32 (*)[1])REFP(0x10969ec));
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    F_00429f90(puVar10 + 0x12 GEN_EDX_ARG);
    puVar10[0xc] = 2;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x230) = puVar10;
  bVar6 = F_004db6f0(puVar10 GEN_EDX_ARG);
  if (bVar6 == 0) {
    puVar10 = *(undefined4 * PTR32 *)((int)this + 0x230);
    if (puVar10 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar10)(puVar10 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x230) = 0;
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_004deef0 */
GEN_NOFRAME uint GEN_THISCALL F_004deef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4deef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096cdc));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  return (uint)this;
}

/* ref: FUN_004def50 */
GEN_FRAME unsigned int GEN_THISCALL F_004def50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4def50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 4));
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c)));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 * 0x10 + 0x1c)));
  this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 * 0x10 + 0x1c)));
  uVar3 = *(int *)((int)this_00 + 4) - iVar2 >> 2;
  if ((uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 * 0x10 + 0x24))) - iVar2 >> 2) <= uVar3) {
    F_004e6090(this_00 GEN_EDX_ARG,uVar3 * 2 + 2);
  }
  F_004e6760(this_00 GEN_EDX_ARG,&(*(undefined4 *)&gen_args[1]));
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
}

/* ref: FUN_004defb0 */
GEN_FRAME unsigned int GEN_THISCALL F_004defb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4defb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_8;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  iVar4 = *(int *)((int)this + 0x80);
  piVar1 = (int *)((int)this + iVar4 * 0x10 + 0x1c);
  uVar5 = *(int *)((int)this + iVar4 * 0x10 + 0x20) - *(int *)((int)this + iVar4 * 0x10 + 0x1c) >> 2
  ;
  local_8 = 0;
  if (uVar5 != 0) {
    do {
      piVar2 = *(int * PTR32 *)(*piVar1 + local_8 * 4);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2 GEN_EDX_ARG);
      local_8 = local_8 + 1;
    } while (local_8 < uVar5);
  }
  F_004e66d0(piVar1 GEN_EDX_ARG,0);
  iVar4 = *(int *)((int)this + 0x80);
  piVar1 = (int *)((int)this + iVar4 * 0x10 + 0x4c);
  local_8 = (*(int *)((int)this + iVar4 * 0x10 + 0x50) - *(int *)((int)this + iVar4 * 0x10 + 0x4c))
            / 0xc;
  if (local_8 != 0) {
    iVar4 = 0;
    do {
      iVar3 = *piVar1;
      if ((code *)*(gen_code32 *)(iVar3 + iVar4) != (code *)0x0) {
        ((code *)*(gen_code32 *)(iVar3 + iVar4))
                  (*(undefined4 *)(iVar3 + 4 + iVar4),*(undefined4 *)(iVar3 + 8 + iVar4));
      }
      iVar4 = iVar4 + 0xc;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  F_004e6140(piVar1 GEN_EDX_ARG,0);
  *(int *)((int)this + 0x7c) = *(int *)((int)this + 0x80);
  *(uint *)((int)this + 0x80) = (*(int *)((int)this + 0x80) + 1U) % 3;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4)));
}

/* ref: FUN_004df0a0 */
GEN_FRAME uint GEN_THISCALL F_004df0a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4df0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * pvVar2;
  code * pcVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  LPCRITICAL_SECTION p_Var7;
  uint uVar8;
  LPCRITICAL_SECTION p_Var9;
  
  uVar6 = F_004dada0(this GEN_EDX_FWD,&(*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
  F_004ddf80(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_ARG);
  if (*(char *)((int)this + 0x30) != '\0') {
    if (*(int *)((int)this + 0x38) == 1) {
      gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP((*(int *)((int)this + 0xc) + 0x1c))),0xffffffff);
      if (0 < REFG(int, 0x1375a60)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0xac))))
                  (*(int * PTR32 *)((int)this + 0x40) GEN_EDX_ARG,0,0,1,0,(undefined4)gen_fl2bits((float)(float10)1),0)
        ;
        REFG(int, 0x1375a60) = REFG(int, 0x1375a60) - 1;
      }
      F_004d72d0(this GEN_EDX_ARG);
    }
    F_004daee0(this GEN_EDX_ARG);
    F_004defb0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
    if ((*(int *)((int)this + 0x38) == 2) || (*(int *)((int)this + 0x38) == 5)) {
      F_004db190(this GEN_EDX_ARG);
    }
    if (*(char *)((int)this + 0x50) == '\0') goto LAB_004df329;
    *(undefined4 *)((int)this + 0x38) = 6;
    F_004db2c0(this GEN_EDX_ARG);
    if (*(char *)((int)this + 0x4c) == '\0') {
      pvVar2 = *(undefined * PTR32 *)((int)this + 0x2c);
      *(undefined4 *)((int)pvVar2 + 0x18) = *(undefined4 *)((int)this + 0x90);
      *(undefined4 *)((int)pvVar2 + 0x1c) = *(undefined4 *)((int)this + 0x94);
      *(undefined1 *)((int)pvVar2 + 0x28) = 1;
      bVar5 = F_004dd770(pvVar2 GEN_EDX_ARG);
      if (bVar5 != 0) goto LAB_004df300;
      F_004da5a0(pvVar2 GEN_EDX_ARG);
    }
    else {
LAB_004df300: ;
      bVar5 = F_004d67a0();
      if (bVar5 != 0) {
        F_004d93c0(*(undefined * PTR32 *)((int)this + 0x80) GEN_EDX_ARG);
      }
    }
    *(undefined4 *)((int)this + 0x38) = 1;
    *(undefined1 *)((int)this + 0x50) = 0;
    REFG(int, 0x1375a60) = 10;
LAB_004df329: ;
    iVar1 = *(int *)((int)this + 0xb4);
    if (*(int *)((int)this + 0xbc) == iVar1) {
      *(int *)((int)this + 0xbc) = *(int *)((int)this + 0xb8) + iVar1;
    }
    else {
      *(int *)((int)this + 0xbc) = iVar1;
    }
    *(LPCRITICAL_SECTION *)((int)this + 0xcc) = (*(LPCRITICAL_SECTION *)(gen_frame + 0x8));
    *(uint *)((int)this + 200) = uVar6;
    REFG(int, 0x1375a3c) = REFG(undefined4, 0x1375a38);
    REFG(undefined4, 0x1375a38) = (REFG(undefined4, 0x1375a38) + 1) % 3;
    iVar1 = *(int *)((int)this + 0x18);
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4));
    p_Var7 = *(LPCRITICAL_SECTION *)(iVar1 + 0x20);
    iVar4 = *(int *)(iVar1 + 0x1c);
    p_Var9 = (LPCRITICAL_SECTION)0x0;
    (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)) = p_Var7;
    if (p_Var7 != (LPCRITICAL_SECTION)0x0) {
      do {
        pcVar3 = *(gen_code32 *)(iVar4 + (int)p_Var9 * 8);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(*(undefined4 *)(iVar4 + 4 + (int)p_Var9 * 8));
          p_Var7 = (*(LPCRITICAL_SECTION *)(gen_frame + 0x8));
        }
        p_Var9 = (LPCRITICAL_SECTION)((int)&(*(undefined * PTR32 *)((char *)(p_Var9))) + 1);
      } while (p_Var9 < p_Var7);
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4));
    if (*(int *)((int)this + 0x38) == 0) {
      *(undefined4 *)((int)this + 0x38) = 1;
    }
    if (*(int *)((int)this + 0x38) == 1) {
      uVar6 = gen_imp_SetEvent(*((HANDLE *)GEN_TOP((*(int *)((int)this + 0xc) + 0x18))));
    }
    else {
      uVar6 = F_004db680(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,*(undefined4 *)((int)this + 200),
                           *(undefined4 *)((int)this + 0xcc));
    }
    if (*(int *)((int)this + 0x38) == 3) {
      bVar5 = F_004de150(this GEN_EDX_ARG);
      uVar6 = CONCAT31(extraout_var,bVar5);
      if (bVar5 == 0) {
        uVar6 = F_00429940(1,1,0x1000000f,0xffffffff);
      }
      REFG(int, 0x1375a60) = 0x1e;
    }
    return uVar6;
  }
  iVar1 = *(int *)((int)this + 0xb4);
  if (*(int *)((int)this + 0xbc) == iVar1) {
    *(int *)((int)this + 0xbc) = *(int *)((int)this + 0xb8) + iVar1;
  }
  else {
    *(int *)((int)this + 0xbc) = iVar1;
  }
  *(LPCRITICAL_SECTION *)((int)this + 0xcc) = (*(LPCRITICAL_SECTION *)(gen_frame + 0x8));
  *(uint *)((int)this + 200) = uVar6;
  REFG(int, 0x1375a3c) = REFG(undefined4, 0x1375a38);
  REFG(undefined4, 0x1375a38) = (REFG(undefined4, 0x1375a38) + 1) % 3;
  if (*(int *)((int)this + 0x38) == 0) {
    *(undefined4 *)((int)this + 0x38) = 1;
  }
  if (*(int *)((int)this + 0x38) == 1) {
    F_004de260(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,*(undefined4 *)((int)this + 200),
                 *(undefined4 *)((int)this + 0xcc));
  }
  else {
    F_004db680(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,*(undefined4 *)((int)this + 200),
                 *(undefined4 *)((int)this + 0xcc));
  }
  if (*(int *)((int)this + 0x38) == 1) {
    F_004d72d0(this GEN_EDX_ARG);
  }
  F_004daee0(this GEN_EDX_ARG);
  F_004defb0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
  if ((*(int *)((int)this + 0x38) == 2) || (*(int *)((int)this + 0x38) == 5)) {
    F_004db190(this GEN_EDX_ARG);
  }
  if (*(int *)((int)this + 0x38) == 3) {
    bVar5 = F_004de150(this GEN_EDX_ARG);
    if (bVar5 == 0) {
      F_00429940(1,1,0x1000000f,0xffffffff);
    }
  }
  if (*(char *)((int)this + 0x50) == '\0') goto LAB_004df207;
  *(undefined4 *)((int)this + 0x38) = 6;
  F_004db2c0(this GEN_EDX_ARG);
  if (*(char *)((int)this + 0x4c) == '\0') {
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x2c);
    *(undefined4 *)((int)pvVar2 + 0x18) = *(undefined4 *)((int)this + 0x90);
    *(undefined4 *)((int)pvVar2 + 0x1c) = *(undefined4 *)((int)this + 0x94);
    *(undefined1 *)((int)pvVar2 + 0x28) = 1;
    bVar5 = F_004dd770(pvVar2 GEN_EDX_ARG);
    if (bVar5 != 0) goto LAB_004df1ec;
    F_004da5a0(pvVar2 GEN_EDX_ARG);
  }
  else {
LAB_004df1ec: ;
    bVar5 = F_004d67a0();
    if (bVar5 != 0) {
      F_004d93c0(*(undefined * PTR32 *)((int)this + 0x80) GEN_EDX_ARG);
    }
  }
  *(undefined4 *)((int)this + 0x38) = 1;
  *(undefined1 *)((int)this + 0x50) = 0;
LAB_004df207: ;
  iVar1 = *(int *)((int)this + 0x18);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)) = (LPCRITICAL_SECTION)(iVar1 + 4);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4));
  uVar6 = *(uint *)(iVar1 + 0x20);
  iVar1 = *(int *)(iVar1 + 0x1c);
  uVar8 = 0;
  if (uVar6 != 0) {
    do {
      pcVar3 = *(gen_code32 *)(iVar1 + uVar8 * 8);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(*(undefined4 *)(iVar1 + 4 + uVar8 * 8));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
  return extraout_EAX;
}

/* ref: FUN_004df430 */
GEN_FRAME byte GEN_THISCALL F_004df430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4df430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 * puVar1;
  byte bVar2;
  undefined4 uVar3;
  int * PTR32 * ppiVar4;
  DWORD DVar5;
  uint uVar6;
  undefined * pvVar7;
  int * piVar8;
  uint * puVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)((int)this + 0x4c) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)((int)this + 0x4d) = *(undefined1 *)(param_1 + 0x10);
  uVar3 = gen_imp_Direct3DCreate9(0x20);
  *(undefined4 *)((int)this + 0x3c) = uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  (*(undefined4 *)(gen_frame + 0x40)) = uVar3;
  gen_imp_D3DPERF_SetOptions(1);
  *(undefined4 *)((int)this + 0x58) = uVar3;
  piVar8 = (int *)((int)this + 0x70);
  bVar2 = F_004deb50((*(undefined4 *)(gen_frame + 0x40)),piVar8);
  if (bVar2 == 0) {
LAB_004df6f8: ;
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return 0;
  }
  uVar6 = (*(int *)((int)this + 0x74) - *piVar8) / 0xc;
  uVar10 = 0;
  if (uVar6 != 0) {
    piVar8 = (int *)*piVar8;
    do {
      if (((*(int *)(param_1 + 0x24) == *piVar8) && (*(int *)(param_1 + 0x28) == piVar8[1])) &&
         (*(int *)(param_1 + 0x2c) == piVar8[2])) {
        if ((int)uVar10 < 0) goto LAB_004df4df;
        goto LAB_004df52c;
      }
      uVar10 = uVar10 + 1;
      piVar8 = piVar8 + 3;
    } while (uVar10 < uVar6);
  }
  uVar10 = 0xffffffff;
LAB_004df4df: ;
  (*(int * PTR32 *)(gen_frame + 0x48)) = (int *)0x0;
  if (uVar6 != 0) {
    puVar9 = ((uint *)GEN_TOP((*(int *)((int)this + 0x70) + 4)));
    uVar11 = uVar6;
    do {
      if ((*(int * PTR32 *)(gen_frame + 0x48)) <= (int *)*puVar9) {
        (*(int * PTR32 *)(gen_frame + 0x48)) = (int *)*puVar9;
      }
      puVar9 = puVar9 + 3;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = 0;
  (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)0x0;
  if (uVar6 != 0) {
    puVar9 = *(uint * PTR32 *)((int)this + 0x70);
    do {
      if (((*(int * PTR32 *)(gen_frame + 0x48)) == (int *)puVar9[1]) && ((*(int * PTR32 *)(gen_frame + 0x44)) <= (int *)*puVar9)) {
        (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)*puVar9;
        uVar10 = uVar11;
      }
      uVar11 = uVar11 + 1;
      puVar9 = puVar9 + 3;
    } while (uVar11 < uVar6);
  }
LAB_004df52c: ;
  *(uint *)((int)this + 0x60) = uVar10;
  *(uint *)((int)this + 100) = uVar10;
  if (*(char *)((int)this + 0x4c) == '\0') {
    *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)this + 0x68);
    *(undefined4 *)((int)this + 0x94) = *(undefined4 *)((int)this + 0x6c);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x70) + uVar10 * 0xc)));
    *(undefined4 *)((int)this + 0x94) =
         *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x70) + 4 + uVar10 * 0xc)));
  }
  fVar12 = (float10)*(int *)((int)this + 0x90);
  if (*(int *)((int)this + 0x90) < 0) {
    fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x3c)) = (float)fVar12;
  fVar13 = (float10)*(int *)((int)this + 0x94);
  if (*(int *)((int)this + 0x94) < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(int * PTR32 *)(gen_frame + 0x48)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar13)));
  (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  ppiVar4 = &(*(int * PTR32 *)(gen_frame + 0x48));
  if (!((float10)1 < (float10)(float)fVar13)) {
    ppiVar4 = &(*(int * PTR32 *)(gen_frame + 0x44));
  }
  piVar8 = *ppiVar4;
  (*(int * PTR32 *)(gen_frame + 0x48)) = piVar8;
  *(float *)((int)this + 0x98) = (float)((float10)(float)fVar12 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar8))));
  DVar5 = gen_imp_timeGetTime();
  *(DWORD *)((int)this + 0xac) = DVar5;
  *(undefined4 *)((int)this + 0xb0) = 0;
  F_004db060(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  uVar3 = (*(undefined4 *)(gen_frame + 0x40));
  puVar1 = (undefined4 *)((int)this + 0x40);
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0x40))))
                    (*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x40)),1,*(undefined4 *)((int)this + 0x5c),0x54,
                     ((undefined1 *)(gen_frame + 0x4)),puVar1);
  if ((int)uVar6 < 0) goto LAB_004df6f8;
  F_004d5f50(this GEN_EDX_ARG,uVar3,1);
  if (*(int *)((int)this + 0x44) == 0x10de) {
    uVar6 = F_00b1b540();
    if (uVar6 == 0) {
      uVar3 = *puVar1;
      *(undefined1 *)((int)this + 0x51) = 1;
      ((undefined4 *)(gen_frame + 0x4c))[0] = 0x1001c;
      uVar6 = F_00b32cf0(uVar3,((undefined4 *)(gen_frame + 0x4c)));
      if (uVar6 == 0) {
        *(undefined4 *)((int)this + 0x8c) = (*(undefined4 *)(gen_frame + 0x54));
      }
    }
  }
  uVar6 = F_00b1b420();
  if ((int)uVar6 < 1) {
    uVar6 = 1;
  }
  if (*(uint *)((int)this + 0x8c) < uVar6) {
    *(uint *)((int)this + 0x8c) = uVar6;
  }
  if (*(char *)((int)this + 0x4c) != '\0') {
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar1 + 0x38))((int *)*puVar1 GEN_EDX_ARG,0,&(*(int * PTR32 *)(gen_frame + 0x48)));
    if ((int)uVar6 < 0) goto LAB_004df6f8;
    pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x40,0x10)));
    if (pvVar7 == (undefined *)0x0) {
      pvVar7 = (undefined *)0x0;
    }
    else {
      pvVar7 = (undefined *)F_004d6ec0(pvVar7 GEN_EDX_ARG);
    }
    *(undefined * PTR32 *)((int)this + 0x2c) = pvVar7;
    if (pvVar7 != (undefined *)0x0) {
      bVar2 = F_004dd630(pvVar7 GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x48)),0x1451,0,0x4250);
      if (bVar2 != 0) {
        if ((*(int * PTR32 *)(gen_frame + 0x48)) != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x48)) + 8))((*(int * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG);
        }
        goto LAB_004df787;
      }
    }
    if ((*(int * PTR32 *)(gen_frame + 0x48)) != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x48)) + 8))((*(int * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG);
    }
    goto LAB_004df6f8;
  }
  pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x40,0x10)));
  if (pvVar7 == (undefined *)0x0) {
LAB_004df782: ;
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)F_004d6ec0(pvVar7 GEN_EDX_ARG);
    if (piVar8 == (int *)0x0) goto LAB_004df782;
    piVar8[2] = piVar8[2] & 0xfffffff0;
    piVar8[6] = *(int *)((int)this + 0x90);
    piVar8[7] = *(int *)((int)this + 0x94);
    piVar8[8] = 0x1451;
    piVar8[9] = 1;
    *(undefined1 *)(piVar8 + 10) = 0;
    piVar8[0xb] = 0x4250;
    piVar8[0xc] = 8;
    bVar2 = F_004dd770(piVar8 GEN_EDX_ARG);
    if (bVar2 == 0) {
      F_004da5a0(piVar8 GEN_EDX_ARG);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8 GEN_EDX_ARG);
      goto LAB_004df782;
    }
  }
  *(int * PTR32 *)((int)this + 0x2c) = piVar8;
LAB_004df787: ;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_004df7a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004df7a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4df7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = 0;
  do {
    iVar2 = 3;
    do {
      F_004defb0(this GEN_EDX_FWD);
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
    iVar2 = (*(int *)((int)this + 0x70) - *(int *)((int)this + 0x6c)) / 0xc +
            (*(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2) +
            (*(int *)((int)this + 0x30) - *(int *)((int)this + 0x2c) >> 2) +
            (*(int *)((int)this + 0x50) - *(int *)((int)this + 0x4c)) / 0xc +
            (*(int *)((int)this + 0x20) - *(int *)((int)this + 0x1c) >> 2) +
            (*(int *)((int)this + 0x60) - *(int *)((int)this + 0x5c)) / 0xc;
  } while ((iVar2 != 0) && (bVar3 = iVar1 != iVar2, iVar1 = iVar2, bVar3));
  return 0;
}

/* ref: FUN_004df840 */
GEN_NOFRAME uint GEN_THISCALL F_004df840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4df840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096ce4));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar1 = F_004296a0(0x18,0,0xc9);
  *(uint *)((int)this + 0x20) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 4))) = *(int *)((int)this + 0x20);
  *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 8))) = *(int *)((int)this + 0x20);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_004df890 */
GEN_NOFRAME uint GEN_THISCALL F_004df890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4df890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096cec));
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x18,0,0xc9);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x15))) = 1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x14));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  return (uint)this;
}

/* ref: FUN_004df8f0 */
GEN_FRAME uint GEN_THISCALL F_004df8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4df8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  char cVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  byte * pbVar7;
  byte * pbVar8;
  int iVar9;
  uint uVar10;
  int * piVar11;
  bool bVar12;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(byte * PTR32 *)(gen_frame + 0x24)) = param_1;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x14)) = (LPCRITICAL_SECTION)((int)this + 0x14);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x14));
  pbVar7 = param_1;
  do {
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
  } while (bVar1 != 0);
  (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)0x811c9dc5;
  uVar10 = 0;
  pbVar8 = param_1;
  if (pbVar7 != param_1 + 1) {
    do {
      pbVar8 = pbVar8 + uVar10;
      uVar10 = uVar10 + 1;
      (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)((uint)*pbVar8 ^ (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x28))) * 0x1000193);
      pbVar8 = (*(byte * PTR32 *)(gen_frame + 0x24));
    } while (uVar10 < (uint)((int)pbVar7 - (int)(param_1 + 1)));
  }
  (*(int * PTR32 *)(gen_frame + 0x20)) = (*(int * PTR32 *)(gen_frame + 0x28));
  F_004e4280((undefined *)((int)this + 4) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x18)),&(*(int * PTR32 *)(gen_frame + 0x20)));
  uVar10 = ((uint *)(gen_frame + 0x2c))[0];
  if ((*(int * PTR32 *)(gen_frame + 0x18)) != (*(int * PTR32 *)(gen_frame + 0x1c))) {
    piVar3 = *(int * PTR32 *)((int)this + 0x2c);
    (*(int * PTR32 *)(gen_frame + 0x20)) = piVar3;
    piVar11 = (*(int * PTR32 *)(gen_frame + 0x18));
    do {
      uVar4 = piVar11[4];
      pbVar7 = (byte *)(piVar3 + uVar4 * 7);
      pbVar8 = (*(byte * PTR32 *)(gen_frame + 0x24));
      if (0xf < (uint)piVar3[uVar4 * 7 + 5]) {
        pbVar7 = *(byte * PTR32 *)pbVar7;
      }
      do {
        bVar1 = *pbVar8;
        bVar12 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_004df9c2: ;
          iVar9 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_004df9c7;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar12 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_004df9c2;
        pbVar8 = pbVar8 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar9 = 0;
LAB_004df9c7: ;
      if (iVar9 == 0) {
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
        F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
        return uVar4;
      }
      if (*(char *)((int)piVar11 + 0x15) == '\0') {
        piVar5 = (int *)piVar11[2];
        if (*(char *)((int)piVar5 + 0x15) == '\0') {
          cVar2 = *(char *)(*piVar5 + 0x15);
          piVar11 = piVar5;
          piVar5 = (int *)*piVar5;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*piVar5 + 0x15);
            piVar11 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar2 = *(char *)(piVar11[1] + 0x15);
          piVar6 = (int *)piVar11[1];
          piVar5 = piVar11;
          while ((piVar11 = piVar6, cVar2 == '\0' && (piVar5 == (int *)piVar11[2]))) {
            cVar2 = *(char *)(piVar11[1] + 0x15);
            piVar6 = (int *)piVar11[1];
            piVar5 = piVar11;
          }
        }
      }
      this = (*(undefined * PTR32 *)(gen_frame + 0x10));
    } while (piVar11 != (*(int * PTR32 *)(gen_frame + 0x1c)));
  }
  uVar4 = *(uint *)((int)this + 0x30);
  (*(uint *)(gen_frame + 0x40)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x2c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x2c))[0] = uVar10 & 0xffffff00;
  pbVar7 = (*(byte * PTR32 *)(gen_frame + 0x24));
  do {
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
  } while (bVar1 != 0);
  F_004e5c20(((uint *)(gen_frame + 0x2c)) GEN_EDX_ARG,(*(byte * PTR32 *)(gen_frame + 0x24)),(int)pbVar7 - (int)((*(byte * PTR32 *)(gen_frame + 0x24)) + 1));
  F_004e54d0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2c) + uVar4 * 0x1c))) GEN_EDX_ARG,((uint *)(gen_frame + 0x2c)),0,0xffffffff);
  if (0xf < (*(uint *)(gen_frame + 0x40))) {
    F_00429760(((uint *)(gen_frame + 0x2c))[0],(*(uint *)(gen_frame + 0x40)) + 1,0x32);
  }
  (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x28));
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)uVar4;
  F_004e5df0((undefined *)((int)this + 4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),&(*(int * PTR32 *)(gen_frame + 0x18)));
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + 1;
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_004dfaf0 */
GEN_NOFRAME uint GEN_THISCALL F_004dfaf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dfaf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    gen_imp_SetEvent(*((HANDLE *)GEN_TOP((*(int *)((int)this + 0xc) + 0x18))));
    F_004cf020(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0xc);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_004dd050(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 8);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xd4);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0xd4) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x2c);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar2 != (undefined4 *)0x0) {
    if (puVar2[-1] == 0) {
      F_00406b30(puVar2 - 1);
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,3);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  if (*(int *)((int)this + 0xb4) != 0) {
    F_00406810(*(int *)((int)this + 0xb4));
    *(undefined4 *)((int)this + 0xb4) = 0;
  }
  iVar3 = *(int *)((int)this + 0x20);
  if (iVar3 != 0) {
    if (*(undefined * PTR32 *)(iVar3 + 0x2c) != (undefined *)0x0) {
      F_004e5780(*(undefined * PTR32 *)(iVar3 + 0x2c) GEN_EDX_ARG,3);
      *(undefined4 *)(iVar3 + 0x2c) = 0;
    }
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    F_004e5010((undefined *)(iVar3 + 4) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x20);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  iVar3 = *(int *)((int)this + 0x1c);
  if (iVar3 != 0) {
    if (*(undefined * PTR32 *)(iVar3 + 0x2c) != (undefined *)0x0) {
      F_004e5780(*(undefined * PTR32 *)(iVar3 + 0x2c) GEN_EDX_ARG,3);
      *(undefined4 *)(iVar3 + 0x2c) = 0;
    }
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    F_004e5010((undefined *)(iVar3 + 4) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1c);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
  }
  iVar3 = *(int *)((int)this + 0x18);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x1c) != 0) {
      F_00406b30(*(int *)(iVar3 + 0x1c));
      *(undefined4 *)(iVar3 + 0x1c) = 0;
    }
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x18);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x18) = 0;
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_004de480(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x14) = 0;
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    F_004df7a0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x10);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x10) = 0;
    }
  }
  iVar3 = *(int *)((int)this + 0x84);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x1c) != 0) {
      F_00406b30(*(int *)(iVar3 + 0x1c));
      *(undefined4 *)(iVar3 + 0x1c) = 0;
    }
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x84);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x84) = 0;
    }
  }
  iVar3 = *(int *)((int)this + 0x80);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x1c) != 0) {
      F_00406b30(*(int *)(iVar3 + 0x1c));
      *(undefined4 *)(iVar3 + 0x1c) = 0;
    }
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x80) = 0;
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x40);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x3c);
  uVar4 = 0;
  if (piVar1 != (int *)0x0) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  return uVar4;
}

/* ref: FUN_004dfd30 */
GEN_FRAME byte GEN_THISCALL F_004dfd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4dfd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int * PTR32 * ppiVar4;
  undefined4 * puVar5;
  uint uVar6;
  uint * puVar7;
  undefined * pvVar8;
  uint * puVar9;
  
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  uVar6 = *param_1;
  piVar2 = (int *)F_00406520();
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,uVar6,0x80);
  *(uint *)((int)this + 0xb4) = uVar3;
  *(uint *)((int)this + 0xbc) = uVar3;
  ppiVar4 = (int * PTR32 *)(param_1 + 1);
  *(uint *)((int)this + 0xb8) = uVar6 >> 1;
  piVar2 = *ppiVar4;
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x10;
  if ((int *)0xf < piVar2) {
    ppiVar4 = &(*(int * PTR32 *)(gen_frame + 0x4));
  }
  *(int * PTR32 *)((int)this + 0x24) = *ppiVar4;
  *(char *)((int)this + 0x30) = (char)param_1[2];
  REFG(undefined4, 0x1375a3c) = 2;
  REFG(undefined4, 0x1375a38) = 0;
  puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x38,0x10)));
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x1096cec));
    puVar5[3] = 0;
    uVar6 = F_004296a0(0x18,0,0xc9);
    puVar5[2] = uVar6;
    *(uint *)uVar6 = uVar6;
    *(undefined4 *)(puVar5[2] + 4) = puVar5[2];
    *(undefined4 *)(puVar5[2] + 8) = puVar5[2];
    *(undefined1 *)(puVar5[2] + 0x14) = 1;
    *(undefined1 *)(puVar5[2] + 0x15) = 1;
    gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(puVar5 + 5));
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x1c) = puVar5;
  if ((puVar5 != (undefined4 *)0x0) && (bVar1 = F_004de670(puVar5 GEN_EDX_ARG,0x80), bVar1 != 0)) {
    puVar5 = *(undefined4 * PTR32 *)((int)this + 0x24);
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar7 = (uint *)F_00406a50(4);
    }
    else {
      piVar2 = *(int * PTR32 *)(REFG(int, 0x1371270) + 8);
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
      uVar6 = -(uint)((int)(ZEXT48(puVar5) * 0x5b0 >> 0x20) != 0) | (uint)(ZEXT48(puVar5) * 0x5b0);
      puVar7 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))
                                 (piVar2 GEN_EDX_ARG,-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0x10)));
    }
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)0x0;
    }
    else {
      *puVar7 = (uint)puVar5;
      puVar7 = puVar7 + 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) - 1);
      puVar9 = puVar7;
      while (-1 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x8))) {
        *puVar9 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x1096a04));
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        puVar9[7] = 0;
        puVar9[8] = 0;
        puVar9[9] = 0;
        puVar9[10] = 0;
        puVar9[0x14] = REFG(undefined4, 0x1302360);
        puVar9[0x16] = REFG(undefined4, 0x1302368);
        puVar9[0x17] = REFG(undefined4, 0x130236c);
        puVar9[0x18] = 0;
        F_00401500(puVar9 + 0xaa,8,0x60,((code *)REFP(0x4e1f20)));
        puVar9[0x16a] = 0x20003c0;
        puVar9 = puVar9 + 0x16c;
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) - 1);
      }
    }
    *(uint * PTR32 *)((int)this + 4) = puVar7;
    if (puVar7 != (uint *)0x0) {
      puVar7 = (uint *)((int)this + 0x28);
      uVar6 = _InterlockedExchangeAdd((volatile long *)(puVar7), (long)(1));
      if (uVar6 < *(uint *)((int)this + 0x24)) {
        *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) =
             uVar6 * 0x5b0 + *(int *)((int)this + 4);
      }
      puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                         (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x84,0x10)));
      if (puVar5 == (undefined4 *)0x0) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
      }
      else {
        *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x1096cdc));
        gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(puVar5 + 1));
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0;
        puVar5[0xd] = 0;
        puVar5[0xf] = 0;
        puVar5[0x10] = 0;
        puVar5[0x11] = 0;
        puVar5[0x13] = 0;
        puVar5[0x14] = 0;
        puVar5[0x15] = 0;
        puVar5[0x17] = 0;
        puVar5[0x18] = 0;
        puVar5[0x19] = 0;
        puVar5[0x1b] = 0;
        puVar5[0x1c] = 0;
        puVar5[0x1d] = 0;
        puVar5[0x1f] = 0;
        puVar5[0x20] = 1;
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar5;
      }
      *(undefined4 * PTR32 *)((int)this + 0x10) = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) != (undefined4 *)0x0) {
        puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 0x13;
        (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x3;
        do {
          F_004e6090(puVar5 - 0xc GEN_EDX_ARG,0x20);
          F_004e5840(puVar5 GEN_EDX_ARG,0x20);
          puVar5 = puVar5 + 4;
          piVar2 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x4)) - 1);
          (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
        } while (piVar2 != (int *)0x0);
        (*(undefined4 * PTR32 *)(gen_frame + 0x8))[0x1f] = 0;
        (*(undefined4 * PTR32 *)(gen_frame + 0x8))[0x20] = 1;
        pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                                   (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x2c,0x10)));
        if (pvVar8 == (undefined *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = F_004df840(pvVar8 GEN_EDX_ARG);
        }
        *(uint *)((int)this + 0x14) = uVar6;
        if (uVar6 != 0) {
          puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x28,0x10)));
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x1096c74));
            gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(puVar5 + 1));
            puVar5[7] = 0;
            puVar5[8] = 0;
            puVar5[9] = 0;
          }
          *(undefined4 * PTR32 *)((int)this + 0x18) = puVar5;
          if ((puVar5 != (undefined4 *)0x0) && (bVar1 = F_004d64d0(puVar5 GEN_EDX_ARG,4), bVar1 != 0)) {
            pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                                       (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x38,0x10)));
            if (pvVar8 == (undefined *)0x0) {
              pvVar8 = (undefined *)0x0;
            }
            else {
              pvVar8 = (undefined *)F_004df890(pvVar8 GEN_EDX_ARG);
            }
            *(undefined * PTR32 *)((int)this + 0x20) = pvVar8;
            if ((pvVar8 != (undefined *)0x0) && (bVar1 = F_004de670(pvVar8 GEN_EDX_ARG,0x60), bVar1 != 0)) {
              pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                                         (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x28,0x10)));
              if (pvVar8 == (undefined *)0x0) {
                pvVar8 = (undefined *)0x0;
              }
              else {
                pvVar8 = (undefined *)F_004d92f0(pvVar8 GEN_EDX_ARG);
              }
              *(undefined * PTR32 *)((int)this + 0x80) = pvVar8;
              if (pvVar8 == (undefined *)0x0) {
                return 0;
              }
              bVar1 = F_004d64d0(pvVar8 GEN_EDX_ARG,4);
              if (bVar1 == 0) {
                return 0;
              }
              pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                                         (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x28,0x10)));
              if (pvVar8 == (undefined *)0x0) {
                pvVar8 = (undefined *)0x0;
              }
              else {
                pvVar8 = (undefined *)F_004d92f0(pvVar8 GEN_EDX_ARG);
              }
              *(undefined * PTR32 *)((int)this + 0x84) = pvVar8;
              if (pvVar8 == (undefined *)0x0) {
                return 0;
              }
              bVar1 = F_004d64d0(pvVar8 GEN_EDX_ARG,4);
              if (bVar1 == 0) {
                return 0;
              }
              bVar1 = F_004df430(this GEN_EDX_ARG,param_1);
              if ((bVar1 != 0) && (bVar1 = F_004da7c0(), bVar1 != 0)) {
                pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x238,0x10)));
                if (pvVar8 == (undefined *)0x0) {
                  pvVar8 = (undefined *)0x0;
                }
                else {
                  pvVar8 = (undefined *)F_004d74a0(pvVar8 GEN_EDX_ARG);
                }
                *(undefined * PTR32 *)((int)this + 8) = pvVar8;
                if ((pvVar8 != (undefined *)0x0) && (bVar1 = F_004dec40(pvVar8 GEN_EDX_ARG,param_1), bVar1 != 0)) {
                  pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,0x20,0x10)));
                  if (pvVar8 == (undefined *)0x0) {
                    pvVar8 = (undefined *)0x0;
                  }
                  else {
                    pvVar8 = (undefined *)F_004d92b0(pvVar8 GEN_EDX_ARG);
                  }
                  *(undefined * PTR32 *)((int)this + 0xc) = pvVar8;
                  if (pvVar8 != (undefined *)0x0) {
                    F_004cf9e0(pvVar8 GEN_EDX_ARG,0,0xffffffff,param_1[3],"RenderThread");
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  F_004dfaf0(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_004e0250 */
GEN_FRAME byte F_004e0250(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0250u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x480];
  char cVar1;
  char * PTR32 * PTR32 * pppcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * PTR32 * PTR32 * PTR32 * ppppcVar6;
  char * PTR32 * PTR32 * PTR32 * ppppcVar7;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0x478)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x47c);
  F_004e7090(param_1 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)),*param_1,param_1[1]);
  piVar3 = *(int * PTR32 *)(REFG(int, 0x1370b90) + 0x3c);
  if (piVar3 == (int *)0x0) {
    piVar3 = ((int *)GEN_TOP(gen_imp_Direct3DCreate9(0x20)));
    if (piVar3 == (int *)0x0) {
      F_00c47745((*(uint *)(gen_frame + 0x478)) ^ (uint)(uint)(gen_frame + 0x47c) GEN_EDX_ARG);
      return 0;
    }
  }
  else {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG);
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3 GEN_EDX_ARG);
  uVar8 = 0;
  (*(uint *)(gen_frame + 0xc)) = uVar4;
  if (uVar4 != 0) {
    do {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3 GEN_EDX_ARG,uVar8,0,((undefined1 *)(gen_frame + 0x10)));
      pppcVar2 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c))[0];
      if (-1 < (int)uVar4) {
        pcVar5 = ((char *)(gen_frame + 0x210));
        (*(uint *)(gen_frame + 0x470)) = 0xf;
        (*(int *)(gen_frame + 0x46c)) = 0;
        (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c))[0] + 0)) = 0;
        ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c))[0] = (char * PTR32 * PTR32 *)((uint)pppcVar2 & 0xffffff00);
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        F_004e5c20(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c)) GEN_EDX_ARG,((char *)(gen_frame + 0x210)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x210)) + 1));
        F_004e5a40(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c)) GEN_EDX_ARG,&REFG(undefined, 0x1096904),1);
        pcVar5 = ((char *)(gen_frame + 0x410));
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        F_004e5a40(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c)) GEN_EDX_ARG,((char *)(gen_frame + 0x410)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x410)) + 1));
        F_004e5a40(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c)) GEN_EDX_ARG,&REFG(undefined, 0x1096908),1);
        ppppcVar7 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c))[0];
        if ((*(uint *)(gen_frame + 0x470)) < 0x10) {
          ppppcVar7 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c));
        }
        ppppcVar7 = (char * PTR32 * PTR32 * PTR32 *)((int)ppppcVar7 + (*(int *)(gen_frame + 0x46c)));
        ppppcVar6 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c))[0];
        if ((*(uint *)(gen_frame + 0x470)) < 0x10) {
          ppppcVar6 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c));
        }
        for (; ppppcVar6 != ppppcVar7; ppppcVar6 = (char * PTR32 * PTR32 * PTR32 *)((int)ppppcVar6 + 1)) {
          if (*(char *)ppppcVar6 == ' ') {
            *(char *)ppppcVar6 = '_';
          }
        }
        F_004e7380(param_1 GEN_EDX_ARG,((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c)));
        if (0xf < (*(uint *)(gen_frame + 0x470))) {
          F_00429760(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c))[0],(*(uint *)(gen_frame + 0x470)) + 1,0x32);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (*(uint *)(gen_frame + 0xc)));
  }
  ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x478)) ^ (uint)(uint)(gen_frame + 0x47c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_004e03e0 */
GEN_FRAME uint F_004e03e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e03e0u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  char cVar2;
  char * pcVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  uint uVar7;
  uint * puVar8;
  
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x0)) = (uint *)0x0;
  (*(uint * PTR32 *)(gen_frame + 0x4)) = (uint *)0x0;
  (*(int *)(gen_frame + 0x8)) = 0;
  F_004e0250(&(*(uint * PTR32 *)(gen_frame + 0x0)));
  uVar7 = ((int)(*(uint * PTR32 *)(gen_frame + 0x4)) - (int)(*(uint * PTR32 *)(gen_frame + 0x0))) / 0x1c;
  (*(uint *)(gen_frame + 0x10)) = uVar7;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if (uVar7 != 0) {
    puVar8 = (*(uint * PTR32 *)(gen_frame + 0x0)) + 4;
    do {
      pcVar3 = param_1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar3 - (int)(param_1 + 1);
      uVar7 = *puVar8;
      uVar6 = uVar7;
      if (uVar4 <= uVar7) {
        uVar6 = uVar4;
      }
      if (puVar8[1] < 0x10) {
        puVar5 = puVar8 - 4;
      }
      else {
        puVar5 = (uint *)puVar8[-4];
      }
      uVar6 = F_0040d320(puVar5,param_1,uVar6);
      if (((uVar6 == 0) && (uVar4 <= uVar7)) && (uVar7 == uVar4)) {
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x18));
        break;
      }
      uVar7 = (*(uint *)(gen_frame + 0x18)) + 1;
      puVar8 = puVar8 + 7;
      (*(uint *)(gen_frame + 0x18)) = uVar7;
    } while (uVar7 < (*(uint *)(gen_frame + 0x10)));
  }
  puVar8 = (*(uint * PTR32 *)(gen_frame + 0x0));
  if ((*(uint * PTR32 *)(gen_frame + 0x0)) != (uint *)0x0) {
    if ((*(uint * PTR32 *)(gen_frame + 0x0)) != (*(uint * PTR32 *)(gen_frame + 0x4))) {
      puVar5 = (*(uint * PTR32 *)(gen_frame + 0x0)) + 5;
      do {
        if (0xf < *puVar5) {
          F_00429760(puVar5[-5],*puVar5 + 1,0x32);
        }
        *puVar5 = 0xf;
        puVar5[-1] = 0;
        *(undefined1 *)(puVar5 - 5) = 0;
        puVar1 = puVar5 + 2;
        puVar5 = puVar5 + 7;
      } while (puVar1 != (*(uint * PTR32 *)(gen_frame + 0x4)));
    }
    F_00429760(puVar8,(((*(int *)(gen_frame + 0x8)) - (int)puVar8) / 0x1c) * 0x1c,0xc9);
  }
  return (*(uint *)(gen_frame + 0x14));
}

/* ref: FUN_004e0540 */
GEN_FRAME uint GEN_THISCALL F_004e0540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0540u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_004e0580 */
GEN_FRAME uint GEN_THISCALL F_004e0580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0580u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_004e05d0 */
GEN_FRAME uint GEN_THISCALL F_004e05d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e05d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_004e0620 */
GEN_FRAME uint GEN_THISCALL F_004e0620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 0x1c;
}

/* ref: FUN_004e0640 */
GEN_FRAME uint GEN_THISCALL F_004e0640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0640u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004e0680 */
GEN_FRAME uint GEN_THISCALL F_004e0680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0680u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004e06d0 */
GEN_FRAME uint GEN_STDCALL F_004e06d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e06d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e0700 */
GEN_FRAME uint GEN_THISCALL F_004e0700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0700u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004e0750 */
GEN_FRAME uint GEN_STDCALL F_004e0750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0750u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e07a0 */
GEN_FRAME uint GEN_THISCALL F_004e07a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e07a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004e0890 */
GEN_FRAME uint GEN_THISCALL F_004e0890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e08e0 */
GEN_FRAME uint GEN_STDCALL F_004e08e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e08e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e0910 */
GEN_FRAME uint GEN_STDCALL F_004e0910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0910u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e0950 */
GEN_FRAME uint GEN_STDCALL F_004e0950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0950u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e0980 */
GEN_FRAME uint GEN_STDCALL F_004e0980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0980u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e09b0 */
GEN_FRAME uint GEN_STDCALL F_004e09b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e09b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1c,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e09f0 */
GEN_FRAME uint GEN_THISCALL F_004e09f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e09f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e0a00 */
GEN_FRAME uint GEN_THISCALL F_004e0a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e0a10 */
GEN_FRAME uint GEN_THISCALL F_004e0a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_004e0a30 */
GEN_FRAME uint GEN_THISCALL F_004e0a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e0a40 */
GEN_FRAME uint GEN_THISCALL F_004e0a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0a40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0xc;
  return (uint)in_ecx;
}

/* ref: FUN_004e0a60 */
GEN_FRAME uint GEN_THISCALL F_004e0a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e0af0 */
GEN_FRAME uint F_004e0af0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0b00 */
GEN_FRAME uint F_004e0b00(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0b00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0b10 */
GEN_FRAME uint F_004e0b10(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0b10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0b20 */
GEN_FRAME uint F_004e0b20(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0b20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0b30 */
GEN_FRAME uint F_004e0b30(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0b30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0b40 */
GEN_FRAME uint F_004e0b40(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0b40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0b50 */
GEN_FRAME uint F_004e0b50(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0b50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0b60 */
GEN_FRAME uint F_004e0b60(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0b60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0b90 */
GEN_FRAME uint GEN_STDCALL F_004e0b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0b90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: FUN_004e0bc0 */
GEN_FRAME uint GEN_STDCALL F_004e0bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_004e0be0 */
GEN_FRAME uint GEN_STDCALL F_004e0be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0be0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: FUN_004e0c10 */
GEN_FRAME unsigned int F_004e0c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e0c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  char * pcVar1;
  
  for (pcVar1 = param_1; pcVar1 != param_2; pcVar1 = pcVar1 + 1) {
    if (*pcVar1 == *param_3) {
      *pcVar1 = *param_4;
    }
  }
  return 0;
}

/* ref: FUN_004e0c40 */
GEN_FRAME uint F_004e0c40(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0c40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0c50 */
GEN_FRAME uint F_004e0c50(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0c50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0c60 */
GEN_FRAME uint GEN_THISCALL F_004e0c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0c80 */
GEN_FRAME uint F_004e0c80(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0c80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0c90 */
GEN_FRAME uint GEN_THISCALL F_004e0c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0cb0 */
GEN_FRAME uint F_004e0cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0cb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0cc0 */
GEN_FRAME uint F_004e0cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0cc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0cd0 */
GEN_FRAME uint F_004e0cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0cd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0cf0 */
GEN_FRAME uint F_004e0cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0cf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0d00 */
GEN_FRAME uint F_004e0d00(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0d00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0d20 */
GEN_FRAME uint F_004e0d20(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0d20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0d30 */
GEN_FRAME uint F_004e0d30(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0d30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0d40 */
GEN_FRAME uint F_004e0d40(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0d40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0d50 */
GEN_FRAME uint F_004e0d50(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0d50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0d60 */
GEN_FRAME uint F_004e0d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0d60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_004e0d90 */
GEN_FRAME uint F_004e0d90(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0d90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0da0 */
GEN_FRAME uint GEN_THISCALL F_004e0da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0dc0 */
GEN_FRAME uint F_004e0dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0dc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0dd0 */
GEN_FRAME uint GEN_THISCALL F_004e0dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0e20 */
GEN_FRAME uint F_004e0e20(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0e20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0e30 */
GEN_FRAME uint F_004e0e30(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0e30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0e40 */
GEN_FRAME uint F_004e0e40(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0e40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0e70 */
GEN_FRAME uint F_004e0e70(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0e70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0e80 */
GEN_FRAME uint GEN_THISCALL F_004e0e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0ea0 */
GEN_FRAME uint GEN_THISCALL F_004e0ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0ed0 */
GEN_FRAME uint GEN_THISCALL F_004e0ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e0ef0 */
GEN_FRAME uint GEN_THISCALL F_004e0ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e0f10 */
GEN_FRAME uint F_004e0f10(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0f10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0f20 */
GEN_FRAME uint F_004e0f20(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0f20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0f30 */
GEN_FRAME uint F_004e0f30(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0f30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0f60 */
GEN_FRAME uint F_004e0f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0f60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte * pbVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 0x811c9dc5;
  if (param_2 != 0) {
    do {
      pbVar1 = (byte *)(uVar3 + param_1);
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 * 0x1000193 ^ (uint)*pbVar1;
    } while (uVar3 < param_2);
  }
  return uVar2;
}

/* ref: FUN_004e0fb0 */
GEN_FRAME uint F_004e0fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0fb0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = *param_2 >> ((byte)param_3 & 0x1f);
  param_1[1] = param_2[1] >> ((byte)param_3 & 0x1f);
  return (uint)param_1;
}

/* ref: FUN_004e0fd0 */
GEN_FRAME uint GEN_THISCALL F_004e0fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004e1000 */
GEN_FRAME uint F_004e1000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e1000u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2 >> ((byte)param_3 & 0x1f);
  param_1[1] = uVar1 >> ((byte)param_3 & 0x1f);
  return (uint)param_1;
}

/* ref: FUN_004e1020 */
GEN_FRAME uint GEN_THISCALL F_004e1020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4e1020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return (uint)this;
}

/* ref: FUN_004e1060 */
GEN_FRAME uint GEN_THISCALL F_004e1060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e1060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 4);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,param_2);
  return uVar2;
}

/* ref: FUN_004e1080 */
GEN_FRAME uint F_004e1080(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1080u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 in_EAX = 0;
  
  if ((short)param_1 == 0) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
  }
  return (((param_1 & 0xffff) >> 10 & 0x1f) + 0x70) * 0x800000;
}

/* ref: FUN_004e10d0 */
GEN_FRAME float GEN_THISCALL F_004e10d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e10d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  
  uVar1 = *(ushort *)this;
  if (uVar1 == 0) {
    return 0.0;
  }
  return gen_bits2f(((uVar1 & 0xffff8000) * 8 | uVar1 & 0x3ff) << 0xd |
                    ((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000);
}

/* ref: FUN_004e1160 */
GEN_FRAME uint GEN_THISCALL F_004e1160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1160u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2 & 0x1f;
  return (uint)in_ecx;
}

/* ref: FUN_004e1180 */
GEN_FRAME unsigned int GEN_THISCALL F_004e1180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4e1180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  uint param_7 = (uint)gen_a7;
  uint param_8 = (uint)gen_a8;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 5) = (undefined1)param_3;
  *(undefined1 *)((int)this + 6) = (undefined1)param_4;
  *(undefined1 *)((int)this + 7) = (undefined1)param_5;
  *(undefined4 *)this = 0;
  *(uint *)this =
       ((param_2 & 7 | param_6 * 8) * 2 | (uint)((char)param_1 != '\0')) << 0x19 |
       *(uint *)this & 0x1ffffff;
  *(uint *)((int)this + 4) =
       ((param_8 & 7) * 8 | param_7 & 7) * 4 | *(uint *)((int)this + 4) & 0xffffff03;
  return 0;
}

/* ref: FUN_004e1200 */
GEN_FRAME uint GEN_THISCALL F_004e1200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e1200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)this = param_1 & 0xfe000000;
  *(uint *)((int)this + 4) = param_2 & 0xfffffffc;
  return (uint)this;
}

/* ref: FUN_004e1220 */
GEN_FRAME float GEN_THISCALL F_004e1220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e1220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)(uintptr_t)this) >> 5;
  if ((short)uVar1 == 0) {
    return 0.0;
  }
  return gen_bits2f(((uVar1 & 0x8000) * 8 | uVar1 & 0x3ff) << 0xd |
                    (((uVar1 & 0xffff) >> 10 & 0x1f) + 0x70) * 0x800000);
}

/* ref: FUN_004e1280 */
GEN_FRAME float10 GEN_THISCALL F_004e1280(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e1280u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return (float10)((float)GEN_TOF((((float10)GEN_TOD(((int)((*in_ecx >> 0x15) << 0x16) >> 0x16))) *
                         (float10)*(double *)&REFG(double, 0x10969f8))));
}

/* ref: FUN_004e12b0 */
GEN_FRAME uint GEN_THISCALL F_004e12b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e12b0u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return (uint)gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(((int)((*in_ecx >> 10) << 0x16) >> 0x16))) *
                                  (float10)*(double *)&REFG(double, 0x10969f8)))));
}

/* ref: FUN_004e12e0 */
GEN_FRAME unsigned int F_004e12e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e12e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1[1] = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + 4 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_004e1310 */
GEN_FRAME byte GEN_THISCALL F_004e1310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((uint)param_1[1] <= *(uint *)((int)this + 4) && *(int *)this == *param_1) {
    *(int *)((int)this + 4) = param_1[1];
    return 1;
  }
  return 0;
}

/* ref: FUN_004e1340 */
GEN_FRAME uint GEN_THISCALL F_004e1340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e1390 */
GEN_FRAME uint GEN_THISCALL F_004e1390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)(in_ecx + 8) ^ param_2) & 0xf;
  *(uint *)(in_ecx + 8) = *(uint *)(in_ecx + 8) ^ uVar1;
  return uVar1;
}

/* ref: FUN_004e13e0 */
GEN_FRAME uint GEN_THISCALL F_004e13e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e13e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x18) >> ((byte)param_2 & 0x1f);
  uVar2 = *(uint *)((int)this + 0x1c) >> ((byte)param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_004e14d0 */
GEN_FRAME uint GEN_THISCALL F_004e14d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e14d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x10) + param_2 * 8;
}

/* ref: FUN_004e14f0 */
GEN_FRAME uint GEN_THISCALL F_004e14f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e14f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x18) + param_2 * 8;
}

/* ref: FUN_004e1540 */
GEN_FRAME byte GEN_THISCALL F_004e1540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  return *(short *)this == *param_1 && (ushort)param_1[1] <= *(ushort *)((int)this + 2);
}

/* ref: FUN_004e1570 */
GEN_FRAME uint GEN_THISCALL F_004e1570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e15f0 */
GEN_FRAME uint GEN_THISCALL F_004e15f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e15f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (*(uint *)(in_ecx + 0x10) <= param_2) {
    return 0;
  }
  return *(int *)(in_ecx + 0xc) + param_2 * 4;
}

/* ref: FUN_004e16d0 */
GEN_FRAME uint GEN_THISCALL F_004e16d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e16d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (uint)((*(uint *)((int)this + 0x34) & 1 << ((byte)param_1 & 0x1f)) != 0);
}

/* ref: FUN_004e16f0 */
GEN_FRAME byte GEN_STDCALL F_004e16f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e16f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (param_1 & 0x4c) == 0;
}

/* ref: FUN_004e1710 */
GEN_FRAME uint GEN_THISCALL F_004e1710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  undefined4 in_EAX = 0;
  
  if ((param_2 & 0x4c) != 0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  iVar1 = *(int *)(in_ecx + 0x38);
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_004e1740 */
GEN_FRAME uint GEN_THISCALL F_004e1740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e1740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = (uint *)((int)this + param_1 * 4 + 0xd8);
  uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(param_2));
  return uVar2;
}

/* ref: FUN_004e1760 */
GEN_FRAME uint GEN_THISCALL F_004e1760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 0xc4);
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(param_1));
  if (*(uint *)((int)this + 0xb8) < (uint)(*(int *)((int)this + 0xc0) + *(int *)((int)this + 0xc4)))
  {
    return 0;
  }
  return ((*(int *)((int)this + 0xbc) - iVar2) - param_1) + *(uint *)((int)this + 0xb8);
}

/* ref: FUN_004e17b0 */
GEN_FRAME unsigned int GEN_THISCALL F_004e17b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e17b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x1a0))))
              (*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x24 + REFG(int, 0x1375a3c) * 4));
  }
  *(int *)((int)this + 0x54) = param_1;
  return;
}

/* ref: FUN_004e17e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004e17e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e17e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x20) == '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD);
    *(undefined1 *)((int)this + 0x20) = 1;
  }
  return;
}

/* ref: FUN_004e1800 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004e1800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e1800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x20) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa8))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD);
    *(undefined1 *)((int)this + 0x20) = 0;
  }
  return;
}

/* ref: FUN_004e1880 */
GEN_FRAME uint GEN_THISCALL F_004e1880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1880u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_004e18a0 */
GEN_FRAME uint GEN_THISCALL F_004e18a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e18a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: Singleton_VDevice_Kernel_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_004e18b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e18b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10969f4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004e18e0 */
GEN_NOFRAME uint GEN_THISCALL F_004e18e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e18e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  return (uint)in_ecx;
}

/* ref: FUN_004e1920 */
GEN_FRAME uint GEN_STDCALL F_004e1920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x32);
  return (uint)uVar1;
}

/* ref: FUN_004e1950 */
GEN_FRAME uint GEN_STDCALL F_004e1950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e1990 */
GEN_FRAME uint GEN_STDCALL F_004e1990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e19d0 */
GEN_FRAME uint GEN_STDCALL F_004e19d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e19d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e1a20 */
GEN_FRAME uint GEN_STDCALL F_004e1a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1a20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e1a70 */
GEN_FRAME uint GEN_STDCALL F_004e1a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e1ad0 */
GEN_FRAME byte GEN_THISCALL F_004e1ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_004e1af0 */
GEN_FRAME byte GEN_THISCALL F_004e1af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_004e1b10 */
GEN_FRAME byte GEN_THISCALL F_004e1b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_004e1b30 */
GEN_FRAME byte GEN_THISCALL F_004e1b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_004e1b60 */
GEN_FRAME uint F_004e1b60(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1b60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_004e1b70 */
GEN_FRAME uint F_004e1b70(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1b70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_004e1b80 */
GEN_FRAME uint F_004e1b80(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1b80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e1b90 */
GEN_FRAME uint F_004e1b90(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1b90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_004e1ba0 */
GEN_FRAME uint F_004e1ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1ba0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_004e1bb0 */
GEN_FRAME uint F_004e1bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1bb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_004e1bc0 */
GEN_FRAME uint F_004e1bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1bc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_004e1be0 */
GEN_FRAME uint F_004e1be0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1be0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_004e1c00 */
GEN_FRAME uint F_004e1c00(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1c00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_004e1c10 */
GEN_FRAME uint F_004e1c10(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1c10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_004e1c20 */
GEN_FRAME uint F_004e1c20(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1c20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e1c30 */
GEN_FRAME uint F_004e1c30(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1c30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_004e1c40 */
GEN_FRAME uint F_004e1c40(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1c40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_004e1c50 */
GEN_FRAME uint F_004e1c50(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_004e1c60 */
GEN_FRAME uint F_004e1c60(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1c60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_004e1c80 */
GEN_FRAME uint F_004e1c80(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1c80u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_004e1cc0 */
GEN_FRAME uint GEN_STDCALL F_004e1cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x32);
  return uVar1;
}

/* ref: FUN_004e1cf0 */
GEN_FRAME uint GEN_THISCALL F_004e1cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e1cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e1d00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004e1d00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e1d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_004e1d50 */
GEN_FRAME uint GEN_THISCALL F_004e1d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e1d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e1d60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004e1d60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e1d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_004e1db0 */
GEN_FRAME uint F_004e1db0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1db0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e1dc0 */
GEN_FRAME uint F_004e1dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1dc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e1df0 */
GEN_FRAME byte F_004e1df0(void)
{
  GEN_ENTER(0x4e1df0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_004e1e00 */
GEN_FRAME byte F_004e1e00(void)
{
  GEN_ENTER(0x4e1e00u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_004e1e20 */
GEN_FRAME byte F_004e1e20(void)
{
  GEN_ENTER(0x4e1e20u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_004e1e30 */
GEN_FRAME byte F_004e1e30(void)
{
  GEN_ENTER(0x4e1e30u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: Client::Graphics::Kernel::Notifier::vf1 */
GEN_NOFRAME unsigned int F_004e1e60(void)
{
  GEN_ENTER(0x4e1e60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Kernel::Notifier::vf2 */
GEN_NOFRAME byte F_004e1e70(void)
{
  GEN_ENTER(0x4e1e70u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_004e1e80 */
GEN_NOFRAME uint GEN_THISCALL F_004e1e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004e2be0((undefined *)((int)this - 0xc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_004e1e90 */
GEN_NOFRAME uint GEN_THISCALL F_004e1e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004e2c70((undefined *)((int)this - 0xc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_004e1ee0 */
GEN_NOFRAME uint GEN_THISCALL F_004e1ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004e2a30((undefined *)((int)this - 0xc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_004e1ef0 */
GEN_NOFRAME uint GEN_THISCALL F_004e1ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004e2ac0((undefined *)((int)this - 0xc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_004e1f00 */
GEN_NOFRAME uint GEN_THISCALL F_004e1f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004e2d60((undefined *)((int)this - 0xc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_004e1f20 */
GEN_NOFRAME uint GEN_THISCALL F_004e1f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e1f20u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  return in_ecx;
}

/* ref: FUN_004e1f30 */
GEN_FRAME uint GEN_THISCALL F_004e1f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(uint *)((int)this + 8) = param_1[2] & 0x7ffffff;
  *(uint *)((int)this + 0xc) = param_1[3] & 0x7fffffff;
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return (uint)this;
}

/* ref: FUN_004e1f80 */
GEN_FRAME uint GEN_THISCALL F_004e1f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = param_1[1] & 0xfffffff;
  return (uint)this;
}

/* ref: FUN_004e1fe0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004e1fe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e1fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x1096c3c));
  gen_imp_CloseHandle(*(undefined4 *)((int)this + 0x1c));
  gen_imp_CloseHandle(*(undefined4 *)((int)this + 0x18));
  F_004cf880(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_004e2010 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004e2010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e2010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1096c58));
  gen_imp_CloseHandle(*(undefined4 *)((int)this + 0x1c));
  gen_imp_CloseHandle(*(undefined4 *)((int)this + 0x18));
  F_004cf880(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_004e2060 */
GEN_FRAME uint GEN_THISCALL F_004e2060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e2080 */
GEN_FRAME uint GEN_THISCALL F_004e2080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e2110 */
GEN_FRAME uint GEN_THISCALL F_004e2110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e2130 */
GEN_FRAME uint GEN_THISCALL F_004e2130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
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

/* ref: FUN_004e2170 */
GEN_FRAME uint GEN_THISCALL F_004e2170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_004e21a0 */
GEN_FRAME uint GEN_THISCALL F_004e21a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e21a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
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

/* ref: FUN_004e21e0 */
GEN_FRAME uint F_004e21e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e21e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_004e21f0 */
GEN_FRAME uint F_004e21f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e21f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_004e2230 */
GEN_FRAME uint GEN_THISCALL F_004e2230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1c;
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

/* ref: FUN_004e2270 */
GEN_FRAME uint GEN_THISCALL F_004e2270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e2280 */
GEN_FRAME uint GEN_THISCALL F_004e2280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e2290 */
GEN_FRAME uint GEN_THISCALL F_004e2290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_004e22b0 */
GEN_FRAME uint GEN_THISCALL F_004e22b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e22b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e22c0 */
GEN_FRAME uint GEN_THISCALL F_004e22c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e22c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0xc;
  return (uint)in_ecx;
}

/* ref: FUN_004e22e0 */
GEN_FRAME uint GEN_THISCALL F_004e22e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e22e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e22f0 */
GEN_FRAME byte GEN_THISCALL F_004e22f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e22f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  
  if (param_1 != (undefined *)0x0) {
    pvVar1 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar1 = *(undefined * PTR32 *)this;
    }
    if (pvVar1 <= param_1) {
      pvVar1 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        pvVar1 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + (int)pvVar1)))) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_004e2370 */
GEN_FRAME byte GEN_THISCALL F_004e2370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_004e2390 */
GEN_FRAME byte GEN_THISCALL F_004e2390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_004e23b0 */
GEN_FRAME byte GEN_THISCALL F_004e23b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e23b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_004e23d0 */
GEN_FRAME byte GEN_THISCALL F_004e23d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e23d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_004e23f0 */
GEN_FRAME uint GEN_THISCALL F_004e23f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e23f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e2410 */
GEN_FRAME uint GEN_THISCALL F_004e2410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e2430 */
GEN_FRAME uint F_004e2430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_004e2450 */
GEN_FRAME uint F_004e2450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_004e2470 */
GEN_FRAME uint F_004e2470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_004e2490 */
GEN_FRAME uint F_004e2490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_004e24b0 */
GEN_FRAME uint F_004e24b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e24b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_004e24d0 */
GEN_FRAME uint F_004e24d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e24d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_004e24f0 */
GEN_FRAME uint F_004e24f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e24f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_004e2520 */
GEN_FRAME uint GEN_THISCALL F_004e2520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e2540 */
GEN_FRAME uint GEN_THISCALL F_004e2540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e2560 */
GEN_FRAME uint GEN_THISCALL F_004e2560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4e2560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar1 = *(uint *)((int)this + 0x10) - param_1;
  uVar2 = param_2;
  if (uVar1 < param_2) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2;
  if (param_4 <= uVar2) {
    uVar1 = param_4;
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  uVar1 = F_0040d320((int)this + param_1,param_3,uVar1);
  if (uVar1 == 0) {
    if (uVar2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(uVar2 != param_4);
  }
  return uVar1;
}

/* ref: FUN_004e25d0 */
GEN_FRAME uint F_004e25d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e25d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e25e0 */
GEN_FRAME unsigned int F_004e25e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e25e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
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

/* ref: FUN_004e2610 */
GEN_FRAME unsigned int F_004e2610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
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

/* ref: FUN_004e2660 */
GEN_FRAME uint GEN_THISCALL F_004e2660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e2680 */
GEN_FRAME uint GEN_THISCALL F_004e2680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e26a0 */
GEN_NOFRAME uint GEN_THISCALL F_004e26a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e26a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_004e2700 */
GEN_NOFRAME uint GEN_THISCALL F_004e2700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e2700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_004e2760 */
GEN_FRAME uint F_004e2760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_004e2780 */
GEN_FRAME uint GEN_THISCALL F_004e2780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e27a0 */
GEN_FRAME uint GEN_THISCALL F_004e27a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e27a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e2820 */
GEN_FRAME uint F_004e2820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_004e2850 */
GEN_FRAME uint F_004e2850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_004e2870 */
GEN_FRAME uint GEN_THISCALL F_004e2870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e2890 */
GEN_FRAME uint GEN_THISCALL F_004e2890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e28b0 */
GEN_FRAME unsigned int F_004e28b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e28b0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  piVar1 = param_2;
  if (*param_2 <= *param_3) {
    piVar1 = param_3;
  }
  *param_1 = *piVar1;
  piVar1 = param_3 + 1;
  if (*piVar1 < param_2[1]) {
    piVar1 = param_2 + 1;
  }
  param_1[1] = *piVar1;
  piVar1 = param_3;
  if (param_2[2] < param_3[2]) {
    piVar1 = param_2;
  }
  param_1[2] = piVar1[2];
  piVar1 = param_2;
  if (param_3[3] <= param_2[3]) {
    piVar1 = param_3;
  }
  param_1[3] = piVar1[3];
  if (param_1[2] < *param_1) {
    *param_1 = 0;
    param_1[2] = 0;
  }
  if (param_1[3] < param_1[1]) {
    param_1[1] = 0;
    param_1[3] = 0;
  }
  return 0;
}

/* ref: FUN_004e2930 */
GEN_FRAME uint F_004e2930(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e2950 */
GEN_FRAME uint F_004e2950(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2950u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Resource::vf0 */
GEN_FRAME uint GEN_THISCALL F_004e2970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Buffer::vf0 */
GEN_FRAME uint GEN_THISCALL F_004e29a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e29a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_004e29d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004e29d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e29d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096b44));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096b2c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (*(int *)((int)this + 0x10) == 0) {
    REFG(undefined4, 0x1375a40) = *(undefined4 *)((int)this + 0x14);
  }
  else {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return 0;
}

/* ref: Client::Graphics::Kernel::Texture::vf0 */
GEN_FRAME uint GEN_THISCALL F_004e2a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004e29d0(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_004e2a60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004e2a60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e2a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096b74));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096b5c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (*(int *)((int)this + 0x10) == 0) {
    REFG(undefined4, 0x1375a40) = *(undefined4 *)((int)this + 0x14);
  }
  else {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return 0;
}

/* ref: Client::Graphics::Kernel::SwapChain::vf0 */
GEN_FRAME uint GEN_THISCALL F_004e2ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004e2a60(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Shader::vf0 */
GEN_FRAME uint GEN_THISCALL F_004e2af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::VertexShader::vf0 */
GEN_FRAME uint GEN_THISCALL F_004e2b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::PixelShader::vf0 */
GEN_FRAME uint GEN_THISCALL F_004e2b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_004e2b80 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004e2b80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e2b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a54));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a6c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (*(int *)((int)this + 0x10) == 0) {
    REFG(undefined4, 0x1375a40) = *(undefined4 *)((int)this + 0x14);
  }
  else {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return 0;
}

/* ref: Client::Graphics::Kernel::VertexBuffer::vf0 */
GEN_FRAME uint GEN_THISCALL F_004e2be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004e2b80(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_004e2c10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004e2c10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e2c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a9c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (*(int *)((int)this + 0x10) == 0) {
    REFG(undefined4, 0x1375a40) = *(undefined4 *)((int)this + 0x14);
  }
  else {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return 0;
}

/* ref: Client::Graphics::Kernel::IndexBuffer::vf0 */
GEN_FRAME uint GEN_THISCALL F_004e2c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004e2c10(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::ConstantBuffer::vf0 */
GEN_FRAME uint GEN_THISCALL F_004e2ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::InputLayout::vf0 */
GEN_FRAME uint GEN_THISCALL F_004e2cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_004e2d00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004e2d00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e2d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096b8c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096ba4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (*(int *)((int)this + 0x10) == 0) {
    REFG(undefined4, 0x1375a40) = *(undefined4 *)((int)this + 0x14);
  }
  else {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return 0;
}

/* ref: Client::Graphics::Kernel::Query::vf0 */
GEN_FRAME uint GEN_THISCALL F_004e2d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004e2d00(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_004e2d90 */
GEN_FRAME uint F_004e2d90(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2d90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e2db0 */
GEN_FRAME uint F_004e2db0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2db0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::vf0 */
GEN_FRAME uint GEN_THISCALL F_004e2dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096bbc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_004e2e00 */
GEN_FRAME uint F_004e2e00(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2e00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e2e20 */
GEN_FRAME uint F_004e2e20(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2e20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::SaveTextureWork::vf0 */
GEN_FRAME uint GEN_THISCALL F_004e2e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10969ec));
  F_00429fa0();
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_004e2e80 */
GEN_FRAME uint F_004e2e80(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2e80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e2ea0 */
GEN_FRAME uint F_004e2ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2ea0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::SaveTextureWork::SaveThread::vf0 */
GEN_FRAME uint GEN_THISCALL F_004e2ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1096c3c));
  gen_imp_CloseHandle(*(undefined4 *)(this + 0x1c));
  gen_imp_CloseHandle(*(undefined4 *)(this + 0x18));
  F_004cf880(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

