#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00db6ea0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00db6ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb6ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00dc14d0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  F_00d9b7c0(this GEN_EDX_ARG);
  return;
}

/* ref: hkFixedSizeAllocator::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db6ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb6ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00dc14d0(this + 4 GEN_EDX_FWD);
  F_00d9b7c0(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00db6ee0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db6ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb6ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int in_ecx;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[8])REFP(0x113d9a8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113da20));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[8])REFP(0x113d9fc));
  F_00da5ee0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,4000);
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) = (*(undefined * PTR32 (*)[11])REFP(0x113d9cc));
  F_00dc1410((int)this + 0x34 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 0;
  in_ecx = (int)this + 0x1c0;
  iVar1 = 0x28;
  do {
    F_00dc1410(in_ecx GEN_EDX_ARG);
    in_ecx = in_ecx + 0x38;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  return (uint)this;
}

/* ref: FUN_00db6f50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db6f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb6f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD);
    return uVar2 - iVar1;
  }
  return 0;
}

/* ref: FUN_00db6f70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db6f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb6f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
    piVar2 = ((int *)GEN_TOP(((int)this + 8)));
    do {
      if (param_1 == *piVar2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while ((int)uVar1 < *((int *)GEN_TOP(((int)this + 4))));
  }
  return 0xffffffff;
}

/* ref: FUN_00db6fa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db6fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb6fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = F_00db6f70(this GEN_EDX_FWD,param_1);
  if ((int)uVar2 < 0) {
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + 1;
  }
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + uVar2 * 0xc + 8)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  return (uint)puVar1;
}

/* ref: FUN_00db6fe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db6fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb6fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined8 * puVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if (param_1 != uVar2 - 1) {
    puVar1 = ((undefined8 *)GEN_TOP(((int)this + param_1 * 0xc + 8)));
    *puVar1 = *((undefined8 *)GEN_TOP(((int)this + uVar2 * 0xc - 4)));
    uVar2 = *((uint *)GEN_TOP(((int)this + uVar2 * 0xc + 4)));
    *(uint *)(puVar1 + 1) = uVar2;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  return uVar2;
}

/* ref: FUN_00db7020 */
GEN_LIB GEN_FRAME unsigned int F_00db7020(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb7020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * this;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  this = param_2;
  *param_2 = param_1;
  F_00db6fa0(param_2 GEN_EDX_ARG,0x200,0x80,param_1);
  F_00db6fa0(param_2 GEN_EDX_ARG,0x100,0x20,param_1);
  F_00db6fa0(param_2 GEN_EDX_ARG,0,4,param_1);
  F_00db6fa0(param_2 GEN_EDX_ARG,0x280,0x80,param_1);
  param_2 = ((undefined4 *)GEN_TOP(0x200));
  do {
    if (param_2 < 0x100) {
      uVar1 = (uint)param_2;
      if (0x80 < param_2) {
        uVar1 = (uint)param_2 & 0xffffffe0;
      }
    }
    else {
      uVar1 = (uint)param_2 & 0xffffffc0;
    }
    iVar3 = 0x10;
    if (0x3f < uVar1) {
      iVar3 = 0x20;
    }
    uVar2 = iVar3 - 1 + uVar1 & ~(iVar3 - 1U);
    uVar1 = F_00db6f70(this GEN_EDX_ARG,uVar2);
    if ((int)uVar1 < 0) {
      F_00db6fa0(this GEN_EDX_ARG,uVar2,iVar3,param_1);
    }
    param_2 = ((undefined4 *)GEN_TOP(((int)param_2 - 0x10)));
  } while (0xf < (int)param_2);
  return 0;
}

/* ref: FUN_00db70e0 */
GEN_LIB GEN_FRAME uint F_00db70e0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb70e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_8;
  
  F_00db6fa0(param_1 GEN_EDX_ARG,0x200,0x80,0x4000);
  F_00db6fa0(param_1 GEN_EDX_ARG,0x100,0x20,0x4000);
  F_00db6fa0(param_1 GEN_EDX_ARG,0,4,0x100);
  F_00db6fa0(param_1 GEN_EDX_ARG,0x280,0x80,0x4000);
  uVar4 = 0x200;
  do {
    if (uVar4 < 0x100) {
      uVar1 = uVar4;
      if (0x80 < uVar4) {
        uVar1 = uVar4 & 0xffffffe0;
      }
    }
    else {
      uVar1 = uVar4 & 0xffffffc0;
    }
    iVar2 = 0x10;
    if ((uVar1 == 0) || (local_8 = uVar4 << 4, uVar4 < 0x100)) {
      local_8 = 0x1000;
    }
    if (0x3f < uVar1) {
      iVar2 = 0x20;
    }
    uVar3 = iVar2 - 1 + uVar1 & ~(iVar2 - 1U);
    uVar1 = F_00db6f70(param_1 GEN_EDX_ARG,uVar3);
    if ((int)uVar1 < 0) {
      uVar1 = F_00db6fa0(param_1 GEN_EDX_ARG,uVar3,iVar2,local_8);
    }
    uVar4 = uVar4 - 0x10;
  } while (0xf < (int)uVar4);
  return uVar1;
}

/* ref: hkFreeListAllocator::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db71c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb71c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x40, 0, 4);
  int iVar1;
  int iVar2;
  int iVar3;
  
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x30)) = (LPCRITICAL_SECTION)(this + 8);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x28) + 0x20))))(*(int * PTR32 *)(this + 0x28) GEN_EDX_ARG,param_1);
  iVar1 = *(int *)(this + 0x1b4);
  iVar3 = 0;
  iVar2 = 0;
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  if (iVar1 != -1 && -1 < iVar1 + 1) {
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = this + 0x110;
    do {
      (*(int *)(gen_frame + 0x18)) = -1;
      (*(int *)(gen_frame + 0x1c)) = -1;
      (*(undefined4 *)(gen_frame + 0x20)) = 0xffffffff;
      (*(int *)(gen_frame + 0x24)) = -1;
      (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0xffffffff;
      if (iVar2 == iVar1) {
        (*(undefined * PTR32 *)(gen_frame + 0x38)) = this + 0x34;
      }
      else {
        (*(undefined * PTR32 *)(gen_frame + 0x38)) = *(undefined * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x34));
      }
      F_00dc1710((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x18)));
      if ((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x38)) != 0) || (*(uint *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x20) < *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x24))) {
        if (*((uint *)GEN_TOP((param_1 + 0x14))) < *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 4)) {
          *((uint *)GEN_TOP((param_1 + 0x14))) = *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 4);
        }
      }
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x18));
      iVar1 = *(int *)(this + 0x1b4);
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x24));
      iVar3 = iVar3 + (*(int *)(gen_frame + 0x1c));
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = (*(undefined * PTR32 *)(gen_frame + 0x34)) + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1 + 1);
  }
  *((int *)GEN_TOP((param_1 + 0xc))) = *((int *)GEN_TOP((param_1 + 0xc))) + (*(int *)(gen_frame + 0xc));
  *((int *)GEN_TOP((param_1 + 4))) = *((int *)GEN_TOP((param_1 + 4))) + (iVar3 - (*(int *)(gen_frame + 0x0)));
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *(undefined4 *)(this + 0x24);
  return (uint)(gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x30))));
}

/* ref: hkFreeListAllocator::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db72b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb72b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x4)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  *(uint *)(this + 0x24) = (*(uint *)(gen_frame + 0x4));
  return (*(uint *)(gen_frame + 0x4));
}

/* ref: hkFreeListAllocator::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db72f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb72f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x5, 11);
  undefined * phVar1;
  int iVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  *param_1 = 1;
  if (0 < *(int *)(this + 0x1b4)) {
    phVar1 = this + 0x110;
    iVar2 = 0;
    do {
      F_00dc1760(*(undefined * PTR32 *)phVar1 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x0)));
      if ((*(char *)(gen_frame + 0x0)) == '\0') {
        *param_1 = 0;
        break;
      }
      iVar2 = iVar2 + 1;
      phVar1 = phVar1 + 4;
    } while (iVar2 < *(int *)(this + 0x1b4));
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 8));
  return (uint)param_1;
}

/* ref: hkFreeListAllocator::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db7360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb7360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (param_2 < 0x281) {
    if (param_2 == 0) {
      return 0;
    }
    if (*((int *)GEN_TOP((this + (param_2 + 0xf >> 4) * 4 + 0x6c))) != 0) {
      return *((uint *)GEN_TOP((*((int *)GEN_TOP((this + (param_2 + 0xf >> 4) * 4 + 0x6c))) + 4)));
    }
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x28) + 0x24))))(*(int * PTR32 *)(this + 0x28) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: hkFreeListAllocator::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db73a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdb73a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]));
  return uVar1;
}

/* ref: hkFreeListAllocator::vf2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db73c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb73c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    lpCriticalSection = (LPCRITICAL_SECTION)(this + 8);
    gen_imp_EnterCriticalSection(lpCriticalSection);
    if (param_2 < 0x281) {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((this + (param_2 + 0xf >> 4) * 4 + 0x6c)));
      iVar2 = puVar1[0xd];
      puVar1[0xd] = iVar2 + 1;
      *param_1 = *puVar1;
      *puVar1 = param_1;
      *(int *)(this + 0x20) = *(int *)(this + 0x20) + (puVar1[0xd] - iVar2) * puVar1[1];
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x28) + 8))))(*(int * PTR32 *)(this + 0x28) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

/* ref: hkFreeListAllocator::vf7 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db7430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb7430u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  undefined4 * puVar5;
  int iVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 8);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_3 < 0x281) {
    piVar1 = *((int * PTR32 *)GEN_TOP((this + (param_3 + 0xf >> 4) * 4 + 0x6c)));
    iVar6 = piVar1[0xd];
    piVar1[0xd] = iVar6 + param_2;
    piVar3 = ((int *)GEN_TOP(*piVar1));
    puVar5 = param_1;
    iVar4 = param_2;
    while (iVar4 = iVar4 - 1, -1 < iVar4) {
      piVar2 = ((int *)GEN_TOP(*puVar5));
      puVar5 = puVar5 + 1;
      if (piVar2 == ((int *)GEN_TOP(0x0))) {
        piVar1[0xd] = piVar1[0xd] - 1;
      }
      else {
        *piVar2 = (int)piVar3;
        piVar3 = piVar2;
      }
    }
    *piVar1 = (int)piVar3;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + (piVar1[0xd] - iVar6) * piVar1[1];
    return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
  }
  iVar6 = 0;
  if (0 < param_2) {
    do {
      if (param_1[iVar6] != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x28) + 8))))(*(int * PTR32 *)(this + 0x28) GEN_EDX_ARG,param_1[iVar6],param_3);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2);
  }
  return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
}

/* ref: FUN_00db74f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db74f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb74f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int iVar1;
  int * piVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 * local_c;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  bVar4 = false;
  while( true ) {
    iVar6 = 0;
    bVar3 = false;
    if (*((int *)GEN_TOP(((int)this + 0x1b0))) < 1) break;
    local_c = ((undefined4 *)GEN_TOP(((int)this + 0x10c)));
    do {
      this_00 = ((undefined *)GEN_TOP(*local_c));
      iVar1 = *((int *)GEN_TOP(((int)this_00 + 0x34)));
      uVar5 = F_00dc17f0(this_00 GEN_EDX_ARG);
      if ((int)uVar5 < 0) {
        bVar4 = true;
      }
      if (*((int *)GEN_TOP(((int)this_00 + 0x10))) != 0) {
        bVar3 = true;
      }
      F_00dc1690(this_00 GEN_EDX_ARG);
      local_c = local_c + 1;
      *((int *)GEN_TOP(((int)this + 0x1c))) =
           *((int *)GEN_TOP(((int)this + 0x1c))) +
           (*((int *)GEN_TOP(((int)this_00 + 0x34))) - iVar1) * *((int *)GEN_TOP(((int)this_00 + 4)));
      iVar6 = iVar6 + 1;
    } while (iVar6 < *((int *)GEN_TOP(((int)this + 0x1b0))));
    if ((!bVar3) || (!bVar4)) break;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4)));
}

/* ref: FUN_00db75a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db75a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb75a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *((undefined4 *)GEN_TOP(((int)this + 0xab4))) = param_1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return 0;
}

/* ref: FUN_00db75d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db75d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb75d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xab4)));
}

/* ref: FUN_00db7600 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00db7600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb7600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 - *((int *)GEN_TOP(((int)this + 0x1c)));
    uVar3 = *((uint *)GEN_TOP(((int)this + 0x20)));
    if (*((uint *)GEN_TOP(((int)this + 0x20))) < uVar2) {
      uVar3 = uVar2;
    }
    *((uint *)GEN_TOP(((int)this + 0x20))) = uVar3;
    return uVar2 < (uint)(*((int *)GEN_TOP(((int)this + 0xab4))) - param_1);
  }
  return 1;
}

/* ref: FUN_00db7640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db7640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb7640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  F_00dc14d0(param_1 GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x1b8)));
  if ((int)param_1 + 0x38U == uVar1) {
    uVar1 = uVar1 - 0x38;
    *((uint *)GEN_TOP(((int)this + 0x1b8))) = uVar1;
  }
  return uVar1;
}

/* ref: hkFreeListAllocator::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db7670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb7670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  iVar1 = *param_1;
  if (iVar1 < 0x281) {
    piVar2 = *((int * PTR32 *)GEN_TOP((this + (iVar1 + 0xf >> 4) * 4 + 0x6c)));
    local_8 = *piVar2;
    iVar1 = piVar2[0xd];
    if (local_8 == 0) {
      local_8 = piVar2[8];
      if (local_8 < (uint)piVar2[9]) {
        piVar2[0xd] = iVar1 - 1;
        piVar2[8] = piVar2[1] + local_8;
      }
      else {
        local_8 = F_00dc1990(piVar2 GEN_EDX_ARG);
      }
    }
    else {
      piVar2[0xd] = iVar1 - 1;
      *piVar2 = *((int *)GEN_TOP(local_8));
    }
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + (piVar2[0xd] - iVar1) * piVar2[1];
    *param_1 = piVar2[1];
  }
  else {
    local_8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x28) + 4))))(*(int * PTR32 *)(this + 0x28) GEN_EDX_ARG,iVar1);
  }
  piVar2 = *(int * PTR32 *)(this + 0x2c);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
    uVar3 = uVar3 - *(int *)(this + 0x20);
    uVar4 = *(uint *)(this + 0x24);
    if (*(uint *)(this + 0x24) < uVar3) {
      uVar4 = uVar3;
    }
    *(uint *)(this + 0x24) = uVar4;
    if (*(uint *)(this + 0xab8) <= uVar3) {
      F_00dc23e0(1);
    }
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 8));
  return local_8;
}

/* ref: hkFreeListAllocator::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db7750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb7750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint * puVar1;
  undefined4 * this_00;
  undefined4 * puVar2;
  int * piVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint * puVar8;
  uint * puVar9;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  if (param_3 < 0x281) {
    this_00 = *((undefined4 * PTR32 *)GEN_TOP((this + (param_3 + 0xf >> 4) * 4 + 0x6c)));
    iVar7 = this_00[0xd];
    puVar1 = param_1 + param_2;
    puVar8 = param_1;
    for (puVar2 = ((undefined4 *)GEN_TOP(*this_00));
        (puVar4 = puVar2, puVar8 < puVar1 &&
        (puVar4 = ((undefined4 *)GEN_TOP(0x0)), puVar2 != ((undefined4 *)GEN_TOP(0x0)))); puVar2 = ((undefined4 *)GEN_TOP(*puVar2)))
    {
      *puVar8 = (uint)puVar2;
      puVar8 = puVar8 + 1;
    }
    *this_00 = puVar4;
    this_00[0xd] = this_00[0xd] - ((int)puVar8 - (int)((int)(uintptr_t)param_1) >> 2);
    while (puVar8 < puVar1) {
      puVar9 = puVar8;
      if ((uint)this_00[8] < (uint)this_00[9]) {
        do {
          if (puVar1 <= puVar9) break;
          *puVar9 = this_00[8];
          this_00[8] = this_00[8] + this_00[1];
          puVar9 = puVar9 + 1;
        } while ((uint)this_00[8] < (uint)this_00[9]);
        this_00[0xd] = this_00[0xd] - ((int)puVar9 - (int)((int)(uintptr_t)puVar8) >> 2);
        puVar8 = puVar9;
      }
      else {
        uVar5 = F_00dc1990(this_00 GEN_EDX_ARG);
        *puVar8 = uVar5;
        puVar8 = puVar8 + 1;
      }
    }
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + (this_00[0xd] - iVar7) * this_00[1];
  }
  else {
    iVar7 = 0;
    if (0 < param_2) {
      do {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x28) + 4))))(*(int * PTR32 *)(this + 0x28) GEN_EDX_ARG,param_3);
        param_1[iVar7] = uVar5;
        iVar7 = iVar7 + 1;
      } while (iVar7 < param_2);
    }
  }
  piVar3 = *(int * PTR32 *)(this + 0x2c);
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG);
    uVar6 = uVar6 - *(int *)(this + 0x20);
    uVar5 = *(uint *)(this + 0x24);
    if (*(uint *)(this + 0x24) < uVar6) {
      uVar5 = uVar6;
    }
    *(uint *)(this + 0x24) = uVar5;
    if (*(uint *)(this + 0xab8) <= uVar6) {
      F_00dc23e0(1);
    }
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 8)));
}

/* ref: FUN_00db7890 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db7890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb7890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x10, 0);
  int iVar1;
  undefined * this_00;
  int iVar2;
  int * piVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  iVar6 = param_1;
  if (param_1 < 1) {
    iVar6 = 1;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0xab8)));
  (*(int *)(gen_frame + 0x4)) = iVar1;
  do {
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + (*(int *)(gen_frame + 0x4)) * 4 + 0x10c)));
    iVar2 = *((int *)GEN_TOP(((int)this_00 + 0x34)));
    pcVar4 = ((char *)GEN_TOP(F_00dc1e30(this_00 GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0xb)),iVar6,&(*(int *)(gen_frame + 0x0)))));
    if ((*pcVar4 != '\0') &&
       (iVar5 = (*(int *)(gen_frame + 0x4)) + 1, (*(int *)(gen_frame + 0x4)) = iVar5, *((int *)GEN_TOP(((int)this + 0x1b0))) <= iVar5)) {
      (*(int *)(gen_frame + 0x4)) = 0;
    }
    F_00dc1690(this_00 GEN_EDX_ARG);
    iVar6 = iVar6 - (*(int *)(gen_frame + 0x0));
    *((int *)GEN_TOP(((int)this + 0x1c))) =
         *((int *)GEN_TOP(((int)this + 0x1c))) +
         (*((int *)GEN_TOP(((int)this_00 + 0x34))) - iVar2) * *((int *)GEN_TOP(((int)this_00 + 4)));
  } while ((0 < iVar6) && ((*(int *)(gen_frame + 0x4)) != iVar1));
  *((int *)GEN_TOP(((int)this + 0xab8))) = (*(int *)(gen_frame + 0x4));
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4)));
}

/* ref: FUN_00db7950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db7950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb7950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  bool bVar2;
  int * piVar3;
  uint extraout_EAX = 0;
  int iVar4;
  int iVar5;
  undefined * this_00;
  int * local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113da20));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[8])REFP(0x113d9fc));
  if (0 < *((int *)GEN_TOP(((int)this + 0x1b4)))) {
    local_8 = ((int *)GEN_TOP(((int)this + 0x110)));
    iVar5 = 1;
    do {
      iVar1 = *local_8;
      if ((iVar1 != 0) &&
         (F_00db7640(this GEN_EDX_FWD,iVar1), iVar4 = iVar5, piVar3 = local_8,
         iVar5 < *((int *)GEN_TOP(((int)this + 0x1b4))))) {
        do {
          piVar3 = piVar3 + 1;
          if (*piVar3 == iVar1) {
            *piVar3 = 0;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *((int *)GEN_TOP(((int)this + 0x1b4))));
      }
      local_8 = local_8 + 1;
      bVar2 = iVar5 < *((int *)GEN_TOP(((int)this + 0x1b4)));
      iVar5 = iVar5 + 1;
    } while (bVar2);
  }
  F_00dc14d0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(((int)this + 0xab8)));
  iVar5 = 0x28;
  do {
    this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x38)));
    F_00dc14d0(this_00 GEN_EDX_ARG);
    iVar5 = iVar5 - 1;
  } while (-1 < iVar5);
  F_00dc14d0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG);
  F_00d9b7c0((int)this + 0x30 GEN_EDX_ARG);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[8])REFP(0x113d9a8));
  F_00d9b7c0(this GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00db7a20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db7a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb7a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * this_00;
  code * pcVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1b8)));
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1bc))) <= this_00) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  *((int *)GEN_TOP(((int)this + 0x1b8))) = (int)this_00 + 0x38;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00dc1c00(this_00 GEN_EDX_ARG,param_1,param_2,param_3,*((undefined4 *)GEN_TOP(((int)this + 0x28))),(int)this + 0x30)
    ;
  }
  iVar4 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x1b4)))) {
    piVar3 = ((int *)GEN_TOP(((int)this + 0x110)));
    do {
      if (*((int *)GEN_TOP((*piVar3 + 4))) == *((int *)GEN_TOP(((int)this_00 + 4)))) {
        F_00db7640(this GEN_EDX_ARG,this_00);
        return *((uint *)GEN_TOP(((int)this + iVar4 * 4 + 0x110)));
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *((int *)GEN_TOP(((int)this + 0x1b4))));
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1b4))) * 4 + 0x110))) = this_00;
  *((int *)GEN_TOP(((int)this + 0x1b4))) = *((int *)GEN_TOP(((int)this + 0x1b4))) + 1;
  return (uint)this_00;
}

/* ref: FUN_00db7ac0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db7ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb7ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1f8, 8, 4);
  code * pcVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  uint * puVar8;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0xc)));
  iVar5 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xabc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  (*pcVar1)((int)this + 4,0x7fffffff);
  ((int *)(gen_frame + 0x0))[0] = 0;
  ((int *)(gen_frame + 0x0))[1] = 0;
  if (param_1 == ((int *)GEN_TOP(0x0))) {
    F_00db7020(0x2000,((int *)(gen_frame + 0x0)));
    param_1 = ((int *)(gen_frame + 0x0));
  }
  iVar2 = *param_1;
  if (iVar2 == 0) {
    iVar2 = 0x400;
  }
  F_00dc21f0(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG,0x10,4,iVar2,*((undefined4 *)GEN_TOP(((int)this + 0x28))));
  *((int *)GEN_TOP(((int)this + 0x1b8))) = (int)this + 0x1c0;
  *((int *)GEN_TOP(((int)this + 0x1bc))) = (int)this + 0xab8;
  puVar7 = ((undefined4 *)GEN_TOP(((int)this + 0x6c)));
  for (iVar2 = 0x29; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  if (0 < param_1[1]) {
    puVar8 = (uint *)(param_1 + 2);
    do {
      uVar3 = F_00db7a20(this GEN_EDX_ARG,*puVar8,puVar8[1],puVar8[2]);
      *((uint *)GEN_TOP(((int)this + (*puVar8 >> 4) * 4 + 0x6c))) = uVar3;
      iVar5 = iVar5 + 1;
      puVar8 = puVar8 + 3;
    } while (iVar5 < param_1[1]);
  }
  piVar4 = ((int *)GEN_TOP(((int)this + 0x10c)));
  iVar2 = 0x28;
  iVar5 = *piVar4;
  do {
    iVar6 = *piVar4;
    if (iVar6 == 0) {
      *piVar4 = iVar5;
      iVar6 = iVar5;
    }
    piVar4 = piVar4 - 1;
    iVar2 = iVar2 - 1;
    iVar5 = iVar6;
  } while (-1 < iVar2);
  return 0;
}

/* ref: FUN_00db7bc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db7bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb7bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  int in_ecx;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[8])REFP(0x113d9a8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113da20));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[8])REFP(0x113d9fc));
  F_00da5ee0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,4000);
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) = (*(undefined * PTR32 (*)[11])REFP(0x113d9cc));
  F_00dc1410((int)this + 0x34 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 0;
  in_ecx = (int)this + 0x1c0;
  iVar1 = 0x28;
  do {
    F_00dc1410(in_ecx GEN_EDX_ARG);
    in_ecx = in_ecx + 0x38;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_00db7ac0(this GEN_EDX_ARG,param_3);
  return (uint)this;
}

/* ref: FUN_00db7c50 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db7c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb7c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_2;
  F_00db7ac0(this GEN_EDX_FWD,param_3);
  return;
}

/* ref: FUN_00db7c70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db7c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb7c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xcc, 4, 4);
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * this_00;
  
  if (*((int *)GEN_TOP(((int)this + 0x28))) == 0) {
    return 1;
  }
  (*(LPCRITICAL_SECTION *)(gen_frame + 0xc4)) = (LPCRITICAL_SECTION)((int)this + 4);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x10c)));
  F_00da1010(((int *)(gen_frame + 0x0)),puVar3,*((int *)GEN_TOP(((int)this + 0x1b0))) * 4);
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1b0)));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x30)));
  ((int *)(gen_frame + 0x0))[(int)(iVar2)] = (int)this_00;
  (*(undefined * PTR32 *)(gen_frame + 0xc0)) = this_00;
  F_00db8070(&(*(int * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x24))),((int *)(gen_frame + 0x0)),iVar2 + 1,param_1,param_2);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x18))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,((code *)REFP(0xdb7f30)),&(*(int * PTR32 *)(gen_frame + 0xa8)));
  (*(uint *)(gen_frame + 0xbc)) = uVar1;
  if (uVar1 == 0) {
    iVar2 = 0;
    if (0 < *((int *)GEN_TOP(((int)this + 0x1b0)))) {
      do {
        iVar2 = iVar2 + 1;
        F_00dc18d0(((undefined *)GEN_TOP(*puVar3)) GEN_EDX_ARG,param_1,iVar2,param_2);
        puVar3 = puVar3 + 1;
        this_00 = (*(undefined * PTR32 *)(gen_frame + 0xc0));
      } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x1b0))));
    }
    F_00dc18d0(this_00 GEN_EDX_ARG,param_1,*((int *)GEN_TOP(((int)this + 0x1b0))) + 1,param_2);
    if ((*(int *)(gen_frame + 0xac)) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xa8)) + 8))))((*(int * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG,(*(int *)(gen_frame + 0xac)),(*(int *)(gen_frame + 0xb0)) * 4);
    }
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0xc4)));
    return 0;
  }
  if ((*(int *)(gen_frame + 0xac)) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xa8)) + 8))))((*(int * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG,(*(int *)(gen_frame + 0xac)),(*(int *)(gen_frame + 0xb0)) * 4);
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0xc4)));
  return (*(uint *)(gen_frame + 0xbc));
}

/* ref: FUN_00db7dc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db7dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb7dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00dc14d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00db7df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db7df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb7df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 8)));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  while( true ) {
    do {
      iVar3 = iVar4;
      if (iVar3 < 1) {
        return 0xffffffff;
      }
      iVar4 = iVar3 / 2;
      uVar2 = *((uint *)GEN_TOP((iVar1 + iVar4 * 4)));
    } while (param_1 < uVar2);
    if (param_1 <= uVar2) break;
    iVar1 = iVar1 + 4 + iVar4 * 4;
    iVar4 = iVar3 + (-1 - iVar4);
  }
  return (iVar1 - *((int *)GEN_TOP(((int)this + 4))) >> 2) + iVar4;
}

/* ref: FUN_00db7e50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db7e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb7e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (((char)param_3 != '\0') && (uVar1 = F_00db7df0(this GEN_EDX_FWD,param_1), -1 < (int)uVar1)) {
    return uVar1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0xc))))
                    (param_1,param_2,param_3,0,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  return uVar1;
}

/* ref: FUN_00db7e90 */
GEN_LIB GEN_FRAME unsigned int F_00db7e90(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb7e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  piVar2 = param_1;
  for (puVar1 = param_2; puVar1 != ((undefined4 *)GEN_TOP(0x0)); puVar1 = ((undefined4 *)GEN_TOP(*puVar1))) {
    puVar3 = ((undefined4 *)GEN_TOP(puVar1[1]));
    if (((undefined4 *)GEN_TOP(puVar1[1])) == ((undefined4 *)GEN_TOP(0x0))) {
      puVar3 = puVar1;
    }
    *piVar2 = (int)puVar3;
    piVar2 = piVar2 + 1;
  }
  return 0;
}

/* ref: FUN_00db7ec0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00db7ec0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb7ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00db7ee0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db7ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb7ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00db8030(((undefined *)GEN_TOP(((int)this - 4))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00db7ef0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00db7ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb7ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x2c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 - *((int *)GEN_TOP(((int)this + 0x20)));
    uVar3 = *((uint *)GEN_TOP(((int)this + 0x24)));
    if (*((uint *)GEN_TOP(((int)this + 0x24))) < uVar2) {
      uVar3 = uVar2;
    }
    *((uint *)GEN_TOP(((int)this + 0x24))) = uVar3;
    return uVar2 < (uint)(*((int *)GEN_TOP(((int)this + 0xab8))) - param_1);
  }
  return 1;
}

/* ref: FUN_00db7f30 */
GEN_LIB GEN_FRAME uint F_00db7f30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdb7f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_5 = (undefined *)(uintptr_t)gen_a4;)
  uint uVar1;
  
  if (((char)param_3 != '\0') && (uVar1 = F_00db7df0(param_5 GEN_EDX_ARG,param_1), -1 < (int)uVar1)) {
    return uVar1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)param_5 + 0xc))))
                    (param_1,param_2,param_3,0,*((undefined4 *)GEN_TOP(((int)param_5 + 0x10))));
  return uVar1;
}

/* ref: FUN_00db7f70 */
GEN_LIB GEN_NOFRAME unsigned int F_00db7f70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdb7f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  do {
    uVar1 = *((uint *)GEN_TOP((param_1 + (param_2 + param_3 >> 1) * 4)));
    iVar4 = param_3;
    iVar5 = param_2;
    do {
      uVar2 = *((uint *)GEN_TOP((param_1 + iVar5 * 4)));
      while (uVar2 < uVar1) {
        iVar5 = iVar5 + 1;
        uVar2 = *((uint *)GEN_TOP((param_1 + iVar5 * 4)));
      }
      uVar2 = *((uint *)GEN_TOP((param_1 + iVar4 * 4)));
      while (uVar1 < uVar2) {
        iVar4 = iVar4 - 1;
        uVar2 = *((uint *)GEN_TOP((param_1 + iVar4 * 4)));
      }
      if (iVar4 < iVar5) break;
      if (iVar4 != iVar5) {
        uVar3 = *((undefined4 *)GEN_TOP((param_1 + iVar4 * 4)));
        *((undefined4 *)GEN_TOP((param_1 + iVar4 * 4))) = *((undefined4 *)GEN_TOP((param_1 + iVar5 * 4)));
        *((undefined4 *)GEN_TOP((param_1 + iVar5 * 4))) = uVar3;
      }
      iVar4 = iVar4 - 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar4);
    if (param_2 < iVar4) {
      F_00db7f70(param_1,param_2,iVar4,param_4);
    }
    param_2 = iVar5;
    if (param_3 <= iVar5) {
      return;
    }
  } while( true );
}

/* ref: FUN_00db8000 */
GEN_LIB GEN_FRAME unsigned int F_00db8000(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb8000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (1 < param_2) {
    F_00db7f70(param_1,0,param_2 - 1,param_3);
  }
  return;
}

/* ref: hkFreeListAllocator::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db8030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb8030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00db7950(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00db8040 */
GEN_LIB GEN_FRAME unsigned int F_00db8040(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb8040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (1 < param_2) {
    F_00db7f70(param_1,0,param_2 - 1,0);
  }
  return;
}

/* ref: FUN_00db8070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xdb8070u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * puVar5;
  int iVar6;
  
  iVar6 = 0;
  *(int * PTR32 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_5;
  if (0 < (int)param_3) {
    do {
      iVar1 = *((int *)GEN_TOP((param_2 + iVar6 * 4)));
      uVar3 = F_00dc1440(*((undefined4 *)GEN_TOP((iVar1 + 0xc))));
      *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + uVar3;
      uVar3 = F_00dc1440(*((undefined4 *)GEN_TOP((iVar1 + 0x10))));
      *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + uVar3;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)param_3);
  }
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 8))) * 4)));
  *((int * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    iVar6 = 0;
    if (0 < (int)param_3) {
      do {
        for (puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_2 + iVar6 * 4))) + 0xc)));
            puVar2 != ((undefined4 *)GEN_TOP(0x0)); puVar2 = ((undefined4 *)GEN_TOP(*puVar2))) {
          puVar5 = ((undefined4 *)GEN_TOP(puVar2[1]));
          if (((undefined4 *)GEN_TOP(puVar2[1])) == ((undefined4 *)GEN_TOP(0x0))) {
            puVar5 = puVar2;
          }
          *piVar4 = (int)puVar5;
          piVar4 = piVar4 + 1;
        }
        for (puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_2 + iVar6 * 4))) + 0x10)));
            puVar2 != ((undefined4 *)GEN_TOP(0x0)); puVar2 = ((undefined4 *)GEN_TOP(*puVar2))) {
          puVar5 = ((undefined4 *)GEN_TOP(puVar2[1]));
          if (((undefined4 *)GEN_TOP(puVar2[1])) == ((undefined4 *)GEN_TOP(0x0))) {
            puVar5 = puVar2;
          }
          *piVar4 = (int)puVar5;
          piVar4 = piVar4 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_3);
    }
    param_3 = param_3 & 0xffffff00;
    if (1 < *((int *)GEN_TOP(((int)this + 8)))) {
      F_00db7f70(*((undefined4 *)GEN_TOP(((int)this + 4))),0,*((int *)GEN_TOP(((int)this + 8))) - 1,param_3);
    }
  }
  return (uint)this;
}

/* ref: FUN_00db81c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db81c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb81c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + in_ecx;
}

/* ref: FUN_00db81d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db81d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb81d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx - param_2;
}

/* ref: FUN_00db8200 */
GEN_LIB GEN_FRAME uint F_00db8200(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb8200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x10;
}

/* ref: FUN_00db8210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb8210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP((param_1 + 4 + (int)this)));
  *((uint *)GEN_TOP(((int)this + 4))) = param_1 | 3;
  *puVar1 = *puVar1 | 1;
  return (uint)puVar1;
}

/* ref: FUN_00db8230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb8230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2 | 3;
  return param_2 | 3;
}

/* ref: FUN_00db8240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8240(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb8240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((param_2 + in_ecx))) = param_2;
  return param_2;
}

/* ref: FUN_00db8250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb8250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((uint *)GEN_TOP(((int)this + 4))) = param_1 | 1;
  *((uint *)GEN_TOP((param_1 + (int)this))) = param_1;
  return param_1;
}

/* ref: FUN_00db8270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb8270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *((uint *)GEN_TOP((param_2 + 4))) = *((uint *)GEN_TOP((param_2 + 4))) & 0xfffffffe;
  *((uint *)GEN_TOP(((int)this + 4))) = param_1 | 1;
  *((uint *)GEN_TOP((param_1 + (int)this))) = param_1;
  return param_1;
}

/* ref: FUN_00db8290 */
GEN_LIB GEN_FRAME byte F_00db8290(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb8290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  return (param_1 & 0xf) == 0;
}

/* ref: FUN_00db8320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb8320u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  return (uint)this;
}

/* ref: FUN_00db8370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb8370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((uint *)GEN_TOP(((int)this + 0xc))) = *((uint *)GEN_TOP(((int)this + 0xc))) | 1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  return (uint)this;
}

/* ref: FUN_00db8390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb8390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((uint *)GEN_TOP(((int)this + 0xc))) = *((uint *)GEN_TOP(((int)this + 0xc))) & ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1));
  return (uint)this;
}

/* ref: FUN_00db83b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db83b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb83b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return (uint)((1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1) & *((uint *)GEN_TOP(((int)this + 0xc)))) != 0);
}

/* ref: FUN_00db83d0 */
GEN_LIB GEN_FRAME uint F_00db83d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb83d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_1 >> 8;
  if (uVar1 == 0) {
    return 0;
  }
  if (0xffff < uVar1) {
    return 0x1f;
  }
  uVar4 = uVar1 - 0x100 >> 0x10 & 8;
  iVar2 = uVar1 << (sbyte)uVar4;
  uVar1 = iVar2 - 0x1000U >> 0x10 & 4;
  iVar2 = iVar2 << (sbyte)uVar1;
  uVar3 = iVar2 - 0x4000U >> 0x10 & 2;
  iVar2 = (((uint)(iVar2 << (sbyte)uVar3) >> 0xf) - uVar3) - (uVar4 + uVar1);
  return (param_1 >> GEN_SHC((char)iVar2 + 0x15U, (char)iVar2 + 0x15U) & 1) + 0x1c + iVar2 * 2;
}

/* ref: FUN_00db8440 */
GEN_LIB GEN_FRAME uint F_00db8440(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb8440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_1 - 1U >> 0xc & 0x10;
  uVar1 = param_1 - 1U >> (sbyte)uVar6;
  uVar2 = uVar1 >> 5 & 8;
  uVar1 = uVar1 >> (sbyte)uVar2;
  uVar3 = uVar1 >> 2 & 4;
  uVar1 = uVar1 >> (sbyte)uVar3;
  uVar4 = uVar1 >> 1 & 2;
  uVar1 = uVar1 >> (sbyte)uVar4;
  uVar5 = uVar1 >> 1 & 1;
  return (uVar1 >> (sbyte)uVar5) + uVar6 + uVar2 + uVar3 + uVar4 + uVar5;
}

/* ref: FUN_00db8490 */
GEN_LIB GEN_FRAME uint F_00db8490(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb8490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x1fU & 0xfffffff0;
}

/* ref: FUN_00db84a0 */
GEN_LIB GEN_FRAME uint F_00db84a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb84a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (param_1 == 0x1f) {
    return 0;
  }
  return 0x19 - (param_1 >> 1);
}

/* ref: FUN_00db84c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db84c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb84c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (uint)(*((uint *)GEN_TOP((in_ecx + 0x10))) <= param_2);
}

/* ref: FUN_00db84d0 */
GEN_LIB GEN_FRAME uint F_00db84d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb84d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return -param_1 & param_1;
}

/* ref: FUN_00db84e0 */
GEN_LIB GEN_FRAME uint F_00db84e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb84e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 * -2 | param_1 * 2;
}

/* ref: FUN_00db84f0 */
GEN_LIB GEN_FRAME uint F_00db84f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb84f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return 1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
}

/* ref: FUN_00db8500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8500(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb8500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((in_ecx + 0xc0))) != in_ecx + 0xbc;
  return param_2;
}

/* ref: hkLargeBlockAllocator::FixedMemoryBlockServer::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb8530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 4);
  if (*(int *)(this + 0x10) != iVar1) {
    return 0;
  }
  iVar2 = *(int *)(this + 0xc) - iVar1;
  if (iVar2 < *param_1) {
    return 0;
  }
  *(int *)(this + 0x10) = iVar1 + iVar2;
  *param_1 = iVar2;
  return *(uint *)(this + 4);
}

/* ref: FUN_00db8570 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00db8570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdb8570u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (((uVar1 == param_1) && (uVar2 = param_3 + uVar1, uVar1 <= uVar2)) &&
     (uVar2 <= *((uint *)GEN_TOP(((int)this + 0xc))))) {
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    *param_4 = uVar2 - uVar1;
    return 1;
  }
  return 0;
}

/* ref: hkLargeBlockAllocator::FixedMemoryBlockServer::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db85a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb85a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  code * pcVar1;
  uint uVar2;
  
  if ((*(int *)(this + 0x10) != *(int *)(this + 4)) &&
     (uVar2 = *(int *)(this + 0x10) - *(int *)(this + 4), uVar2 == param_2)) {
    *(undefined4 *)(this + 0x10) = 0;
    return uVar2;
  }
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  uVar2 = (*pcVar1)();
  return uVar2;
}

/* ref: hkLargeBlockAllocator::FixedMemoryBlockServer::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db85d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb85d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x10) - *(int *)(this + 4);
  *param_1 = iVar2;
  param_1[1] = iVar2;
  param_1[2] = iVar2;
  iVar2 = *(int *)(this + 8);
  iVar1 = *(int *)(this + 0x10);
  param_1[3] = iVar2 - iVar1;
  param_1[4] = iVar2 - iVar1;
  param_1[5] = *(int *)(this + 8) - *(int *)(this + 4);
  return (uint)param_1;
}

/* ref: FUN_00db8600 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db8600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb8600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc0)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x113da78));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[8])REFP(0x113da54));
  uVar2 = uVar1;
  if (uVar1 != (int)this + 0xbcU) {
    do {
      uVar2 = *((uint *)GEN_TOP((uVar1 + 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xb0))) + 0x10))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0xb0))) GEN_EDX_ARG,uVar1,*((undefined4 *)GEN_TOP((uVar1 + 0xc))));
      uVar1 = uVar2;
    } while (uVar2 != (int)this + 0xbcU);
  }
  F_00d9b7c0((int)this + 0x9c GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[8])REFP(0x113d9a8));
  F_00d9b7c0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00db8660 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db8660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb8660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  uVar1 = (int)this + 0xbc;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 3;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = ((undefined4 *)GEN_TOP(((int)this + 0xb4)));
  *((uint *)GEN_TOP(((int)this + 0xc0))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  return uVar1;
}

/* ref: FUN_00db8750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb8750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  uVar4 = F_00db83d0(param_2);
  *((undefined4 *)GEN_TOP((param_1 + 0x14))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x10))) = 0;
  uVar6 = 1 << GEN_SHC((byte)uVar4, (unsigned int)(uintptr_t)uVar4);
  *((uint *)GEN_TOP((param_1 + 0x1c))) = uVar4;
  piVar1 = ((int *)GEN_TOP(((int)this + uVar4 * 4 + 0x1c)));
  if ((uVar6 & *((uint *)GEN_TOP(((int)this + 0xc)))) == 0) {
    *((uint *)GEN_TOP(((int)this + 0xc))) = *((uint *)GEN_TOP(((int)this + 0xc))) | uVar6;
    *piVar1 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 0x18))) = piVar1;
    *((int *)GEN_TOP((param_1 + 8))) = param_1;
    *((int *)GEN_TOP((param_1 + 0xc))) = param_1;
    return uVar4;
  }
  if (uVar4 == 0x1f) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0x19 - (char)((int)uVar4 >> 1);
  }
  uVar6 = param_2 << GEN_SHC(bVar5, bVar5);
  uVar4 = *((uint *)GEN_TOP((*piVar1 + 4)));
  iVar3 = *piVar1;
  while( true ) {
    if ((uVar4 & 0xfffffffc) == param_2) {
      uVar4 = *((uint *)GEN_TOP((iVar3 + 8)));
      *((int *)GEN_TOP((uVar4 + 0xc))) = param_1;
      *((int *)GEN_TOP((iVar3 + 8))) = param_1;
      *((int *)GEN_TOP((param_1 + 0xc))) = iVar3;
      *((uint *)GEN_TOP((param_1 + 8))) = uVar4;
      *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 0;
      return uVar4;
    }
    piVar1 = ((int *)GEN_TOP((iVar3 + 0x10 + ((int)uVar6 >> 0x1f) * -4)));
    iVar2 = *piVar1;
    uVar6 = uVar6 * 2;
    if (iVar2 == 0) break;
    uVar4 = *((uint *)GEN_TOP((iVar2 + 4)));
    iVar3 = iVar2;
  }
  *piVar1 = param_1;
  *((int *)GEN_TOP((param_1 + 0x18))) = iVar3;
  *((int *)GEN_TOP((param_1 + 8))) = param_1;
  *((int *)GEN_TOP((param_1 + 0xc))) = param_1;
  return uVar6;
}

/* ref: FUN_00db8810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb8810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  
  uVar3 = *((uint *)GEN_TOP((param_1 + 0xc)));
  iVar1 = *((int *)GEN_TOP((param_1 + 0x18)));
  if (uVar3 == param_1) {
    uVar3 = *((uint *)GEN_TOP((param_1 + 0x14)));
    puVar5 = ((uint *)GEN_TOP((param_1 + 0x14)));
    if (uVar3 == 0) {
      uVar3 = *((uint *)GEN_TOP((param_1 + 0x10)));
      puVar5 = ((uint *)GEN_TOP((param_1 + 0x10)));
      if (uVar3 == 0) goto LAB_00db8863;
    }
    while ((puVar4 = ((uint *)GEN_TOP((uVar3 + 0x14))), *((int *)GEN_TOP((uVar3 + 0x14))) != 0 ||
           (puVar4 = ((uint *)GEN_TOP((uVar3 + 0x10))), *((int *)GEN_TOP((uVar3 + 0x10))) != 0))) {
      puVar5 = puVar4;
      uVar3 = *puVar4;
    }
    *puVar5 = 0;
  }
  else {
    iVar2 = *((int *)GEN_TOP((param_1 + 8)));
    *((uint *)GEN_TOP((iVar2 + 0xc))) = uVar3;
    *((int *)GEN_TOP((uVar3 + 8))) = iVar2;
  }
LAB_00db8863: ;
  if (iVar1 != 0) {
    if (param_1 == *((uint *)GEN_TOP(((int)this + *((int *)GEN_TOP((param_1 + 0x1c))) * 4 + 0x1c)))) {
      *((uint *)GEN_TOP(((int)this + *((int *)GEN_TOP((param_1 + 0x1c))) * 4 + 0x1c))) = uVar3;
      if (uVar3 == 0) {
        uVar3 = ~(1 << GEN_SHC((byte)*((undefined4 *)GEN_TOP((param_1 + 0x1c))), (byte)*((undefined4 *)GEN_TOP((param_1 + 0x1c)))));
        *((uint *)GEN_TOP(((int)this + 0xc))) = *((uint *)GEN_TOP(((int)this + 0xc))) & uVar3;
        return uVar3;
      }
    }
    else {
      if (*((uint *)GEN_TOP((iVar1 + 0x10))) == param_1) {
        *((uint *)GEN_TOP((iVar1 + 0x10))) = uVar3;
      }
      else {
        *((uint *)GEN_TOP((iVar1 + 0x14))) = uVar3;
      }
      if (uVar3 == 0) {
        return 0;
      }
    }
    *((int *)GEN_TOP((uVar3 + 0x18))) = iVar1;
    iVar1 = *((int *)GEN_TOP((param_1 + 0x10)));
    if (iVar1 != 0) {
      *((int *)GEN_TOP((uVar3 + 0x10))) = iVar1;
      *((uint *)GEN_TOP((iVar1 + 0x18))) = uVar3;
    }
    iVar1 = *((int *)GEN_TOP((param_1 + 0x14)));
    if (iVar1 != 0) {
      *((int *)GEN_TOP((uVar3 + 0x14))) = iVar1;
      *((uint *)GEN_TOP((iVar1 + 0x18))) = uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00db88d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db88d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb88d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int local_c;
  int local_8;
  
  local_8 = 0;
  uVar9 = -param_1;
  uVar4 = F_00db83d0(param_1);
  iVar5 = *((int *)GEN_TOP(((int)this + uVar4 * 4 + 0x1c)));
  if (iVar5 != 0) {
    if (uVar4 == 0x1f) {
      bVar6 = 0;
    }
    else {
      bVar6 = 0x19 - (char)((int)uVar4 >> 1);
    }
    iVar8 = param_1 << GEN_SHC(bVar6, bVar6);
    local_c = 0;
    while ((uVar7 = (*((uint *)GEN_TOP((iVar5 + 4))) & 0xfffffffc) - param_1, uVar9 <= uVar7 ||
           (uVar9 = uVar7, local_8 = iVar5, uVar7 != 0))) {
      iVar2 = *((int *)GEN_TOP((iVar5 + 0x14)));
      iVar3 = *((int *)GEN_TOP((iVar5 + 0x10 + (iVar8 >> 0x1f) * -4)));
      if ((iVar2 != 0) && (iVar2 != iVar3)) {
        local_c = iVar2;
      }
      iVar5 = local_c;
      if (iVar3 == 0) break;
      iVar8 = iVar8 * 2;
      iVar5 = iVar3;
    }
    if (iVar5 == 0) {
      if (local_8 == 0) goto LAB_00db8968;
    }
    else {
      do {
        uVar4 = (*((uint *)GEN_TOP((iVar5 + 4))) & 0xfffffffc) - param_1;
        if (uVar4 < uVar9) {
          uVar9 = uVar4;
          local_8 = iVar5;
        }
        iVar8 = *((int *)GEN_TOP((iVar5 + 0x10)));
        if (*((int *)GEN_TOP((iVar5 + 0x10))) == 0) {
          iVar8 = *((int *)GEN_TOP((iVar5 + 0x14)));
        }
joined_r0x00db8991: ;
        iVar5 = iVar8;
      } while (iVar5 != 0);
      if (local_8 == 0) {
        return 0;
      }
    }
    iVar5 = local_8 + param_1;
    F_00db8810(this GEN_EDX_ARG,local_8);
    if (uVar9 < 0x100) {
      *((uint *)GEN_TOP((local_8 + 4))) = uVar9 + param_1 | 3;
      puVar1 = ((uint *)GEN_TOP((uVar9 + param_1 + 4 + local_8)));
      *puVar1 = *puVar1 | 1;
      *((int *)GEN_TOP(((int)this + 0xd4))) = *((int *)GEN_TOP(((int)this + 0xd4))) + uVar9 + param_1;
      *((int *)GEN_TOP(((int)this + 0xd8))) = *((int *)GEN_TOP(((int)this + 0xd8))) + (uVar9 - 0x10) + param_1;
      return local_8 + 0x10;
    }
    *((uint *)GEN_TOP((local_8 + 4))) = param_1 | 3;
    *((int *)GEN_TOP(((int)this + 0xd4))) = *((int *)GEN_TOP(((int)this + 0xd4))) + param_1;
    *((int *)GEN_TOP(((int)this + 0xd8))) = *((int *)GEN_TOP(((int)this + 0xd8))) + (param_1 - 0x10);
    *((uint *)GEN_TOP((iVar5 + 4))) = uVar9 | 1;
    *((uint *)GEN_TOP((iVar5 + uVar9))) = uVar9;
    F_00db8750(this GEN_EDX_ARG,iVar5,uVar9);
    return local_8 + 0x10;
  }
LAB_00db8968: ;
  iVar8 = 1 << GEN_SHC((byte)uVar4, (unsigned int)(uintptr_t)uVar4);
  uVar4 = (iVar8 * -2 | iVar8 * 2) & *((uint *)GEN_TOP(((int)this + 0xc)));
  iVar8 = iVar5;
  if (uVar4 == 0) goto joined_r0x00db8991;
  uVar4 = F_00db8440(-uVar4 & uVar4);
  iVar8 = *((int *)GEN_TOP(((int)this + uVar4 * 4 + 0x1c)));
  goto joined_r0x00db8991;
}

/* ref: FUN_00db8a60 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00db8a60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb8a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = param_1;
  uVar3 = param_2;
  while (iVar1 = iVar2, iVar1 != 0) {
    uVar4 = *((uint *)GEN_TOP((iVar1 + 4))) & 0xfffffffc;
    if (uVar3 < uVar4) {
      uVar3 = uVar4;
    }
    iVar2 = *((int *)GEN_TOP((iVar1 + 0x14)));
    if (*((int *)GEN_TOP((iVar1 + 0x14))) == 0) {
      iVar2 = *((int *)GEN_TOP((iVar1 + 0x10)));
    }
  }
  return uVar3;
}

/* ref: FUN_00db8aa0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db8aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb8aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x18)));
  uVar1 = F_00db83d0(uVar2);
  iVar3 = 0x1f;
  if ((int)uVar1 < 0x20) {
    piVar4 = ((int *)GEN_TOP(((int)this + 0x98)));
    do {
      if (*piVar4 != 0) {
        uVar2 = F_00db8a60(*piVar4,uVar2);
        return uVar2;
      }
      iVar3 = iVar3 - 1;
      piVar4 = piVar4 - 1;
    } while ((int)uVar1 <= iVar3);
  }
  return uVar2;
}

/* ref: FUN_00db8af0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db8af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb8af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4))) = *((uint *)GEN_TOP(((int)this + 0x18))) | 1;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x18)));
  *((uint *)GEN_TOP((uVar1 + *((int *)GEN_TOP(((int)this + 0x14)))))) = uVar1;
  return uVar1;
}

/* ref: FUN_00db8b10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb8b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  
  *((int *)GEN_TOP(((int)this + 0xd4))) = *((int *)GEN_TOP(((int)this + 0xd4))) + param_1;
  *((int *)GEN_TOP(((int)this + 0xd8))) = *((int *)GEN_TOP(((int)this + 0xd8))) + (param_1 - 0x10);
  iVar2 = *((int *)GEN_TOP(((int)this + 0x14)));
  puVar1 = ((uint *)GEN_TOP((iVar2 + param_1)));
  uVar3 = *((int *)GEN_TOP(((int)this + 0x18))) - param_1;
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar3;
  *((uint * PTR32 *)GEN_TOP(((int)this + 0x14))) = puVar1;
  *puVar1 = param_1;
  puVar1[1] = uVar3 | 1;
  *((uint *)GEN_TOP((iVar2 + 4))) = param_1 | 3;
  return iVar2 + 0x10;
}

/* ref: FUN_00db8b50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb8b50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc0)));
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + 0xc)));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  bVar4 = F_00db8570(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_FWD,iVar1,uVar2,param_2,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  if (bVar4 == 0) {
    *param_1 = 0;
    return (uint)param_1;
  }
  uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4 + *((int *)GEN_TOP(((int)this + 0x18))))));
  uVar5 = (int)(*(undefined * PTR32 *)(gen_frame + 0x0)) - *((int *)GEN_TOP((iVar1 + 0xc))) & 0xfffffff0;
  *((uint *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + uVar5;
  *((int *)GEN_TOP((iVar1 + 0x14))) = *((int *)GEN_TOP((iVar1 + 0x14))) + uVar5;
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc))) = (*(undefined * PTR32 *)(gen_frame + 0x0));
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4 + *((int *)GEN_TOP(((int)this + 0x18)))))) =
       (uVar3 & 0xfffffffc) - uVar5 | 2;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00db8be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb8be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if ((*((int *)GEN_TOP(((int)this + 0xc))) != 0) && (uVar1 = F_00db88d0(this GEN_EDX_FWD,param_1), uVar1 != 0)) {
    return uVar1;
  }
  if (*((uint *)GEN_TOP(((int)this + 0x18))) <= param_1 + 0x100U) {
    return 0;
  }
  uVar1 = F_00db8b10(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: hkLargeBlockAllocator::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  undefined * phVar2;
  int iVar3;
  uint uVar4;
  char * pcVar5;
  undefined * phVar6;
  uint uVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar7 = (*(int *)&gen_args[0]) + 0x1fU & 0xfffffff0;
  if (uVar7 < 0x100) {
    uVar7 = 0x100;
  }
  uVar4 = F_00db8be0(this GEN_EDX_FWD,uVar7);
  if (uVar4 == 0) {
    if ((*(int *)(this + 0xa0) == 0) ||
       (phVar6 = *(undefined * PTR32 *)(this + 0xc0), phVar6 == this + 0xbc)) {
      piVar1 = *(int * PTR32 *)(this + 0xb0);
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP((uVar7 + 0x138)));
      phVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)))));
      if (phVar6 == ((undefined *)GEN_TOP(0x0))) {
        piVar1 = *(int * PTR32 *)(this + 8);
        if (piVar1 == ((int *)GEN_TOP(0x0))) {
          return 0;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,uVar7);
        uVar4 = F_00db8be0(this GEN_EDX_ARG,uVar7);
        if (uVar4 != 0) {
          return uVar4;
        }
        piVar1 = *(int * PTR32 *)(this + 0xb0);
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP((uVar7 + 0x138)));
        phVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)))));
        if (phVar6 == ((undefined *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 8))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,uVar7);
          return 0;
        }
      }
      *(int *)(phVar6 + 8) = 0;
      *(undefined * PTR32 *)(phVar6 + 0xc) = (*(undefined * PTR32 *)(gen_frame + 0x0));
      *(undefined * PTR32 *)(phVar6 + 0x10) = phVar6 + 0x18;
      *(undefined * PTR32 *)(phVar6 + 0x14) = phVar6 + (int)(*(undefined * PTR32 *)(gen_frame + 0x0));
      *(uint *)(phVar6 + 0x14) = *(uint *)(phVar6 + 0x14) & 0xfffffff0;
      *(uint *)(phVar6 + 0x10) = (uint)(phVar6 + 0x27) & 0xfffffff0;
      for (phVar2 = *(undefined * PTR32 *)(this + 0xc0);
          (phVar2 != this + 0xbc && (phVar2 < phVar6));
          phVar2 = *(undefined * PTR32 *)(phVar2 + 4)) {
      }
      *(undefined * PTR32 *)(phVar6 + 4) = phVar2;
      iVar3 = *(int *)phVar2;
      *(int *)phVar6 = iVar3;
      *((undefined * PTR32 *)GEN_TOP((iVar3 + 4))) = phVar6;
      *(undefined * PTR32 *)phVar2 = phVar6;
      if (*(undefined * PTR32 *)(this + 0x14) != this + 0xb4) {
        F_00db8af0(this GEN_EDX_ARG);
        F_00db8750(this GEN_EDX_ARG,*(int *)(this + 0x14),*((uint *)GEN_TOP((*(int *)(this + 0x14) + 4))) & 0xfffffffc);
      }
      *(int *)(this + 0x18) = (*(int *)(phVar6 + 0x14) - *(int *)(phVar6 + 0x10)) - 0x10;
      *(int *)(this + 0x14) = *(int *)(phVar6 + 0x10);
      F_00db8af0(this GEN_EDX_ARG);
      iVar3 = *(int *)(phVar6 + 0x14);
      *((undefined4 *)GEN_TOP((iVar3 - 0xc))) = 2;
      if (*(undefined * PTR32 *)(phVar6 + 4) != this + 0xbc) {
        *((uint *)GEN_TOP((iVar3 - 0xc))) =
             *((int *)GEN_TOP((*(undefined * PTR32 *)(phVar6 + 4) + 0x10))) - (iVar3 - 0x10) | 2;
      }
      if (*(undefined * PTR32 *)phVar6 != this + 0xbc) {
        iVar3 = *((int *)GEN_TOP((*(undefined * PTR32 *)phVar6 + 0x14)));
        *((uint *)GEN_TOP((iVar3 - 0xc))) =
             *(int *)(this + 0x14) - (iVar3 - 0x10) | *((uint *)GEN_TOP((iVar3 - 0xc))) & 3;
      }
    }
    else {
      pcVar5 = ((char *)GEN_TOP(F_00db8b50(this GEN_EDX_ARG,(int)&(*(int *)&gen_args[0]) + 3,*(int *)(phVar6 + 0xc) + uVar7)));
      if (*pcVar5 == '\0') {
        piVar1 = *(int * PTR32 *)(this + 8);
        if (piVar1 == ((int *)GEN_TOP(0x0))) {
          return 0;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,uVar7);
        uVar4 = F_00db8be0(this GEN_EDX_ARG,uVar7);
        if (uVar4 != 0) {
          return uVar4;
        }
        pcVar5 = ((char *)GEN_TOP(F_00db8b50(this GEN_EDX_ARG,(int)&(*(int *)&gen_args[0]) + 3,*(int *)(phVar6 + 0xc) + uVar7)));
        if (*pcVar5 == '\0') {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 8))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,uVar7);
          return 0;
        }
      }
    }
    uVar4 = F_00db8b10(this GEN_EDX_ARG,uVar7);
  }
  return uVar4;
}

/* ref: FUN_00db8e30 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00db8e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb8e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00db8e40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db8e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb8e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: FUN_00db8e50 */
GEN_LIB GEN_NOFRAME uint F_00db8e50(void)
{
  GEN_ENTER(0xdb8e50u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00db8e60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db8e60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb8e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xd4)));
}

/* ref: FUN_00db8e70 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00db8e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb8e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((int)this - 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this - 4))) + 4))))(piVar1,param_1);
  if (uVar2 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,uVar2,param_1);
    return 1;
  }
  return 0;
}

/* ref: FUN_00db8eb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db8eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb8eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00db8af0(((undefined *)GEN_TOP(((int)this - 4))) GEN_EDX_FWD);
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xbc)));
  if (*((int * PTR32 *)GEN_TOP(((int)this + 0xbc))) != ((int *)GEN_TOP(((int)this + 0xb8)))) {
    do {
      iVar6 = piVar2[4];
      if (((*((uint *)GEN_TOP((iVar6 + 4))) >> 1 & 1) == 0) &&
         ((*((uint *)GEN_TOP((iVar6 + 4))) & 0xfffffffc) + iVar6 == piVar2[5] - 0x10)) {
        piVar5 = ((int *)GEN_TOP(piVar2[1]));
        *((int * PTR32 *)GEN_TOP((*piVar2 + 4))) = piVar5;
        *((int *)GEN_TOP(piVar2[1])) = *piVar2;
        if (iVar6 == *((int *)GEN_TOP(((int)this + 0x10)))) {
          *((int *)GEN_TOP(((int)this + 0x10))) = (int)this + 0xb0;
          *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
        }
        else {
          F_00db8810(((undefined *)GEN_TOP(((int)this - 4))) GEN_EDX_ARG,iVar6);
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xac))) + 0x10))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0xac))) GEN_EDX_ARG,piVar2,piVar2[3]);
      }
      else {
        piVar5 = ((int *)GEN_TOP(piVar2[1]));
      }
      piVar2 = piVar5;
    } while (piVar5 != ((int *)GEN_TOP(((int)this + 0xb8))));
  }
  uVar1 = (int)this + 0xb8;
  if (*((uint *)GEN_TOP(((int)this + 0xbc))) != uVar1) {
    if (*((int *)GEN_TOP(((int)this + 0x9c))) == 0) {
      if (*((int *)GEN_TOP(((int)this + 0x10))) != (int)this + 0xb0) {
        F_00db8750(((undefined *)GEN_TOP(((int)this - 4))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x10))),
                     *((undefined4 *)GEN_TOP(((int)this + 0x14))));
        *((int *)GEN_TOP(((int)this + 0x10))) = (int)this + 0xb0;
        *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
      }
      uVar4 = *((uint *)GEN_TOP(((int)this + 0xbc)));
      iVar6 = 0;
      if (uVar4 != uVar1) {
        do {
          piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x14))) - 0x10)));
          if (((*((byte *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x14))) - 0xc))) & 1) == 0) &&
             ((iVar3 = (int)piVar2 - *piVar2, iVar6 == 0 ||
              ((*((uint *)GEN_TOP((iVar6 + 4))) & 0xfffffffc) < (*((uint *)GEN_TOP((iVar3 + 4))) & 0xfffffffc))))) {
            iVar6 = iVar3;
          }
          uVar4 = *((uint *)GEN_TOP((uVar4 + 4)));
        } while (uVar4 != (int)this + 0xb8U);
        if (iVar6 != 0) {
          F_00db8810(((undefined *)GEN_TOP(((int)this - 4))) GEN_EDX_ARG,iVar6);
          *((int *)GEN_TOP(((int)this + 0x10))) = iVar6;
          uVar1 = *((uint *)GEN_TOP((iVar6 + 4))) & 0xfffffffc;
          *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
          return uVar1;
        }
      }
      uVar1 = (int)this + 0xb0;
      *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    }
    else if (0x7fff < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      uVar1 = F_00db8b50(((undefined *)GEN_TOP(((int)this - 4))) GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3,
                           (*((int *)GEN_TOP(((int)this + 0x10))) - *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xbc))) + 0x10)))
                           ) + 0x120);
      return uVar1;
    }
    return uVar1;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = (int)this + 0xb0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  return uVar1;
}

/* ref: FUN_00db9040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb9040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 & 0xf) != 0) {
    *param_1 = 0;
    return (uint)param_1;
  }
  if ((*((uint *)GEN_TOP((param_2 - 0xc))) >> 1 & 1) == 0) {
    *param_1 = 0;
    return (uint)param_1;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc0)));
  do {
    if (iVar2 == (int)this + 0xbc) {
LAB_00db9095: ;
      *param_1 = 0;
      return (uint)param_1;
    }
    uVar3 = *((uint *)GEN_TOP((iVar2 + 0x10)));
    if ((uVar3 <= param_2) && (param_2 < *((uint *)GEN_TOP((iVar2 + 0x14))))) {
      uVar1 = *((uint *)GEN_TOP((iVar2 + 0x14))) - 0x10;
      if (uVar3 != uVar1) {
        do {
          if (uVar3 == param_2 - 0x10) {
            *param_1 = 1;
            return (uint)param_1;
          }
          uVar3 = uVar3 + (*((uint *)GEN_TOP((uVar3 + 4))) & 0xfffffffc);
        } while (uVar3 != uVar1);
        *param_1 = 0;
        return (uint)param_1;
      }
      goto LAB_00db9095;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
  } while( true );
}

/* ref: hkLargeBlockAllocator::vf2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db90e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb90e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  
  if (param_1 != 0) {
    piVar5 = ((int *)GEN_TOP((param_1 - 0x10)));
    uVar4 = *((uint *)GEN_TOP((param_1 - 0xc))) & 0xfffffffc;
    *(uint *)(this + 0xd4) = *(int *)(this + 0xd4) - uVar4;
    *(uint *)(this + 0xd8) =
         *(int *)(this + 0xd8) + (0x10 - (*((uint *)GEN_TOP((param_1 - 0xc))) & 0xfffffffc));
    iVar1 = uVar4 + (int)piVar5;
    if ((*((byte *)GEN_TOP((param_1 - 0xc))) & 1) == 0) {
      iVar2 = *piVar5;
      piVar5 = ((int *)GEN_TOP(((int)piVar5 - iVar2)));
      F_00db8810(this GEN_EDX_FWD,piVar5);
      uVar4 = uVar4 + iVar2;
    }
    uVar3 = *((uint *)GEN_TOP((iVar1 + 4)));
    if ((uVar3 >> 1 & 1) == 0) {
      if (iVar1 == *(int *)(this + 0x14)) {
        iVar1 = *(int *)(this + 0x18);
        *(uint *)(this + 0x18) = iVar1 + uVar4;
        *(int * PTR32 *)(this + 0x14) = piVar5;
        piVar5[1] = iVar1 + uVar4 | 1;
        return;
      }
      uVar4 = uVar4 + (uVar3 & 0xfffffffc);
      F_00db8810(this GEN_EDX_ARG,iVar1);
      piVar5[1] = uVar4 | 1;
    }
    else {
      *((uint *)GEN_TOP((iVar1 + 4))) = uVar3 & 0xfffffffe;
      piVar5[1] = uVar4 | 1;
    }
    *((uint *)GEN_TOP((uVar4 + (int)piVar5))) = uVar4;
    F_00db8750(this GEN_EDX_ARG,piVar5,uVar4);
  }
  return;
}

/* ref: hkLargeBlockAllocator::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db91a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb91a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return (*((uint *)GEN_TOP((param_1 - 0xc))) & 0xfffffffc) - 0x10;
}

/* ref: FUN_00db91c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db91c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(code * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb91c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(code * param_1 = (code *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4))) = *((uint *)GEN_TOP(((int)this + 0x18))) | 1;
  for (iVar1 = *((int *)GEN_TOP(((int)this + 0xc0))); iVar1 != (int)this + 0xbc; iVar1 = *((int *)GEN_TOP((iVar1 + 4)))) {
    iVar2 = *((int *)GEN_TOP((iVar1 + 0x14)));
    for (iVar4 = *((int *)GEN_TOP((iVar1 + 0x10))); iVar4 != iVar2 - 0x10;
        iVar4 = iVar4 + (uVar3 & 0xfffffffc)) {
      uVar3 = *((uint *)GEN_TOP((iVar4 + 4)));
      if ((uVar3 >> 1 & 1) != 0) {
        (*param_1)(iVar4 + 0x10,(*((uint *)GEN_TOP((iVar4 + 4))) & 0xfffffffc) - 0x10,param_2);
      }
    }
  }
  return 0;
}

/* ref: FUN_00db9250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb9250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 uVar2;
  
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4))) = *((uint *)GEN_TOP(((int)this + 0x18))) | 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc0)));
  if (iVar1 == (int)this + 0xbc) {
    *param_1 = 0;
    return (uint)param_1;
  }
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + 0x10)));
  param_1[1] = iVar1;
  iVar1 = *((int *)GEN_TOP((iVar1 + 0x14)));
  *param_1 = uVar2;
  param_1[2] = iVar1 - 0x10;
  return (uint)param_1;
}

/* ref: FUN_00db92a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db92a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb92a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
LAB_00db92d3: ;
    *param_1 = 0;
    return (uint)param_1;
  }
  iVar1 = iVar1 + (*((uint *)GEN_TOP((iVar1 + 4))) & 0xfffffffc);
  *param_2 = iVar1;
  if (iVar1 == param_2[2]) {
    iVar1 = *((int *)GEN_TOP((param_2[1] + 4)));
    if (iVar1 == (int)this + 0xbc) {
      *param_2 = 0;
      goto LAB_00db92d3;
    }
    param_2[1] = iVar1;
    *param_2 = *((int *)GEN_TOP((iVar1 + 0x10)));
    param_2[2] = *((int *)GEN_TOP((iVar1 + 0x14))) - 0x10;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00db9300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb9300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  F_00db8af0(this GEN_EDX_FWD);
  for (iVar1 = *((int *)GEN_TOP(((int)this + 0xc0))); iVar1 != (int)this + 0xbc; iVar1 = *((int *)GEN_TOP((iVar1 + 4)))) {
    for (iVar3 = *((int *)GEN_TOP((iVar1 + 0x10))); iVar3 != *((int *)GEN_TOP((iVar1 + 0x14))) - 0x10;
        iVar3 = iVar3 + (uVar2 & 0xfffffffc)) {
      uVar2 = *((uint *)GEN_TOP((iVar3 + 4)));
      if ((uVar2 >> 1 & 1) != 0) {
        uVar4 = uVar4 + (uVar2 & 0xfffffffc);
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00db9360 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db9360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb9360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP(((int)this + 0xc0))); iVar1 != (int)this + 0xbc; iVar1 = *((int *)GEN_TOP((iVar1 + 4)))) {
    uVar2 = uVar2 + *((int *)GEN_TOP((iVar1 + 0xc)));
  }
  return uVar2;
}

/* ref: FUN_00db9380 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00db9380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb9380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  byte bVar2;
  uint uVar3;
  
  puVar1 = ((uint *)GEN_TOP((param_1 - 0x10)));
  if (((param_1 & 0xf) == 0) && (*((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) <= puVar1)) {
    bVar2 = 1;
    if (((*((uint *)GEN_TOP((param_1 - 0xc))) >> 1 & 1) != 0) &&
       ((uVar3 = *((uint *)GEN_TOP((param_1 - 0xc))) & 0xfffffffc, 0xf < uVar3 &&
        ((*((byte *)GEN_TOP((uVar3 + 4 + (int)puVar1))) & 1) != 0)))) {
      if ((*((byte *)GEN_TOP((param_1 - 0xc))) & 1) == 0) {
        uVar3 = *((uint *)GEN_TOP(((int)puVar1 + (4 - *puVar1))));
        if (((uVar3 >> 1 & 1) != 0) || ((uVar3 & 0xfffffffc) != *puVar1)) {
          bVar2 = 0;
        }
      }
      return bVar2;
    }
  }
  return 0;
}

/* ref: FUN_00db93e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db93e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb93e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  if (((((param_2 & 0xf) == 0) && ((*((uint *)GEN_TOP((param_2 + 4))) >> 1 & 1) == 0)) &&
      (*((uint *)GEN_TOP(((int)this + 0x10))) <= param_2)) &&
     (((uVar1 = *((uint *)GEN_TOP((param_2 + 4))) & 0xfffffffc, (*((byte *)GEN_TOP((uVar1 + 4 + param_2))) & 1) == 0 &&
       ((*((uint *)GEN_TOP((uVar1 + 4 + param_2))) >> 1 & 1) != 0)) && ((*((byte *)GEN_TOP((param_2 + 4))) & 1) != 0)))) {
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00db9430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb9430u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      bVar1 = F_00db9380(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_2 + iVar2 * 4))));
      if (bVar1 == 0) {
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00db9480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb9480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + 0xfU & 0xfffffff0;
  uVar2 = param_1 + param_2 & 0xfffffff0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x113daa8));
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00db94b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db94b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb94b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[8])REFP(0x113d9a8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x113da78));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[8])REFP(0x113da54));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  F_00db9480(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_FWD,0,0);
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = param_1;
  F_00db8660(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00db9500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb9500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[8])REFP(0x113d9a8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x113da78));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[8])REFP(0x113da54));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  F_00db9480(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_FWD,param_1,param_2);
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xb0))) = ((undefined *)GEN_TOP(((int)this + 0x9c)));
  F_00db8660(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00db9550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb9550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  code * pcVar2;
  code * pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (*(gen_code32 *)&gen_args[0]);
  F_00db9250(((undefined *)GEN_TOP(((int)this - 4))) GEN_EDX_FWD,((int *)(gen_frame + 0x0)));
  uVar4 = (*(undefined4 *)&gen_args[1]);
  pcVar2 = (*(gen_code32 *)&gen_args[0]);
  while (((int *)(gen_frame + 0x0))[0] != 0) {
    uVar1 = *((uint *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 4)));
    gen_piece_set(&(*(gen_code32 *)&gen_args[0]), 1, 3, (unsigned long long)((undefined3)((uint)((int)(uintptr_t)pcVar2) >> 8)));
    (*(gen_code32 *)&gen_args[0]) = ((code *)GEN_TOP((CONCAT31(GEN_PIECE(&(*(gen_code32 *)&gen_args[0]), 1, 3),(char)(uVar1 >> 1)) & 0xffffff01)));
    (*pcVar3)(((int *)(gen_frame + 0x0))[0] + 0x10,uVar1 & 0xfffffffc,(*(gen_code32 *)&gen_args[0]),0,uVar4);
    F_00db92a0(((undefined *)GEN_TOP(((int)this - 4))) GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[1]) + 3,((int *)(gen_frame + 0x0)));
    pcVar2 = (*(gen_code32 *)&gen_args[0]);
  }
  return 0;
}

/* ref: hkLargeBlockAllocator::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db95c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb95c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00db9360(this GEN_EDX_FWD);
  *param_1 = uVar1;
  param_1[1] = *(uint *)(this + 0xd8);
  param_1[3] = uVar1 - *(int *)(this + 0xd8);
  uVar1 = F_00db8aa0(this GEN_EDX_ARG);
  param_1[5] = uVar1;
  param_1[4] = 0;
  return uVar1;
}

/* ref: FUN_00db9600 */
GEN_LIB GEN_FRAME uint F_00db9600(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb9600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_3,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*param_3 + param_3[1] * 4)));
  *puVar1 = param_1;
  param_3[1] = param_3[1] + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db9650 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db9650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb9650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00db96f0(((undefined *)GEN_TOP(((int)this - 4))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00db9660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9660(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb9660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx != 0;
  return param_2;
}

/* ref: FUN_00db9680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9680(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb9680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  *param_2 = (byte)(*((uint *)GEN_TOP((*in_ecx + 4))) >> 1) & 1;
  return (uint)param_2;
}

/* ref: hkLargeBlockAllocator::FixedMemoryBlockServer::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db96b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb96b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: hkLargeBlockAllocator::FixedMemoryBlockServer::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00db96c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb96c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkLargeBlockAllocator::FixedMemoryBlockServer::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db96d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb96d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  return param_2;
}

/* ref: hkLargeBlockAllocator::FixedMemoryBlockServer::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db96e0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb96e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d9b7c0(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: hkLargeBlockAllocator::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db96f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb96f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00db8600(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00db9700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb9700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkMemoryTrackStreamReader::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db9750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb9750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: hkMemoryTrackStreamReader::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db9760(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb9760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 8))) + 8)));
}

/* ref: FUN_00db9780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb9780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 8))) / *(int *)this - *((int *)GEN_TOP(((int)this + 0xc)));
  uVar1 = (*((int *)GEN_TOP(((int)this + 0xc))) + iVar3) * *(int *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 8))) - uVar1;
  if (0 < (int)param_2) {
    while( true ) {
      if (iVar3 < *((int *)GEN_TOP(((int)this + 0x14))) - 1) {
        iVar4 = *(int *)this;
      }
      else {
        iVar4 = *((int *)GEN_TOP(((int)this + 4)));
      }
      iVar4 = iVar4 - iVar2;
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar3 * 4))) + iVar2;
      if ((int)param_2 <= iVar4) break;
      F_00da1010(param_1,iVar2,iVar4);
      *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + iVar4;
      param_1 = param_1 + iVar4;
      param_2 = param_2 - iVar4;
      iVar3 = iVar3 + 1;
      iVar2 = 0;
      if ((int)param_2 < 1) {
        return param_2;
      }
    }
    F_00da1010(param_1,iVar2,param_2);
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + param_2;
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_00db9820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9820(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdb9820u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  *((undefined2 *)GEN_TOP(((int)param_1 + 6))) = 1;
  param_1[4] = param_3;
  *param_1 = (*(undefined * PTR32 (*)[12])REFP(0x113dad8));
  param_1[2] = param_2;
  param_1[3] = 0xffffffff;
  *(undefined1 *)(param_1 + 5) = param_4;
  return (uint)param_1;
}

/* ref: FUN_00db9860 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db9860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb9860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined4 * puVar5;
  int local_8;
  
  local_8 = (*((int *)GEN_TOP(((int)this + 8))) - *((int *)GEN_TOP(((int)this + 0xc))) * *(int *)this) / *(int *)this;
  if (0 < local_8) {
    do {
      uVar1 = *(undefined4 *)this;
      uVar2 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,uVar2,uVar1);
      *((int *)GEN_TOP(((int)this + 0x14))) = *((int *)GEN_TOP(((int)this + 0x14))) - 1;
      iVar4 = *((int *)GEN_TOP(((int)this + 0x14))) * 4;
      puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
      if (0 < iVar4) {
        iVar4 = (iVar4 - 1U >> 2) + 1;
        do {
          *puVar5 = puVar5[1];
          puVar5 = puVar5 + 1;
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
      }
      *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return 0;
}

/* ref: hkArrayStreamWriter::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db98f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb98f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 4))) = 0;
  iVar1 = *(int *)(this + 8);
  *(undefined4 *)(this + 0xc) = 0;
  uVar3 = *((int *)GEN_TOP((iVar1 + 4))) + 1;
  uVar4 = *((uint *)GEN_TOP((iVar1 + 8))) & 0x3fffffff;
  if ((int)uVar4 < (int)uVar3) {
    uVar4 = uVar4 * 2;
    if ((int)uVar3 < (int)uVar4) {
      uVar3 = uVar4;
    }
    bVar2 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),iVar1,uVar3,1);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  *((undefined1 *)GEN_TOP(((*(int * PTR32 *)(this + 8))[1] + **(int * PTR32 *)(this + 8)))) = 0;
  return uVar3;
}

/* ref: hkArrayStreamWriter::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb9940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int * PTR32 *)(this + 8);
  iVar3 = piVar2[1];
  if (iVar3 - *(int *)(this + 0xc) < (int)param_2) {
    iVar1 = param_2 + (iVar3 - (iVar3 - *(int *)(this + 0xc)));
    iVar3 = iVar1 + 1;
    if ((int)(piVar2[2] & 0x3fffffffU) < iVar3) {
      iVar4 = (piVar2[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar3) {
        iVar4 = iVar3;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar2,iVar4,1);
    }
    *((int *)GEN_TOP((*(int *)(this + 8) + 4))) = iVar1;
    *((undefined1 *)GEN_TOP((iVar1 + **(int * PTR32 *)(this + 8)))) = 0;
  }
  else if (iVar3 < (int)(piVar2[2] & 0x3fffffffU)) {
    *((undefined1 *)GEN_TOP((iVar3 + *piVar2))) = 0;
  }
  F_00da1010(**(int * PTR32 *)(this + 8) + *(int *)(this + 0xc),param_1,param_2);
  *(uint *)(this + 0xc) = *(int *)(this + 0xc) + param_2;
  return param_2;
}

/* ref: FUN_00db99d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db99d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb99d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  uVar2 = *((int *)GEN_TOP(((int)this + 0x14))) - 1;
  if (0 < (int)param_2) {
    local_8 = uVar2 * 4;
    piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
    while( true ) {
      iVar4 = *(int *)this;
      iVar5 = iVar4 - *((int *)GEN_TOP(((int)this + 4)));
      if (iVar5 == 0) {
        pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 4))))
                          (*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,iVar4);
        if (*((uint *)GEN_TOP(((int)this + 0x14))) == (*((uint *)GEN_TOP(((int)this + 0x18))) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
        }
        *((uint *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)this + 0x14))) * 4))) = uVar2;
        *((int *)GEN_TOP(((int)this + 0x14))) = *((int *)GEN_TOP(((int)this + 0x14))) + 1;
        local_8 = local_8 + 4;
        iVar5 = *(int *)this;
        *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      }
      iVar4 = *((int *)GEN_TOP((local_8 + *piVar1))) + *((int *)GEN_TOP(((int)this + 4)));
      if ((int)param_2 <= iVar5) break;
      F_00da1010(iVar4,param_1,iVar5);
      param_1 = param_1 + iVar5;
      param_2 = param_2 - iVar5;
      *((undefined4 *)GEN_TOP(((int)this + 4))) = *(undefined4 *)this;
      if ((int)param_2 < 1) {
        return param_2;
      }
    }
    F_00da1010(iVar4,param_1,param_2);
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_2;
    uVar2 = param_2;
  }
  return uVar2;
}

/* ref: hkMemoryTrackStreamWriter::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb9ab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  F_00db99d0(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD,param_1,param_2);
  return param_2;
}

/* ref: hkArrayStreamWriter::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb9ad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int * piVar2;
  int iVar3;
  gen_size32 _Size;
  int iVar4;
  
  iVar4 = param_1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      iVar4 = *(int *)(this + 0xc) + param_1;
    }
    else {
      iVar4 = *(int *)(this + 0xc);
      if (param_2 == 2) {
        iVar4 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))) - param_1;
      }
    }
  }
  if (iVar4 < 0) {
    return 1;
  }
  piVar2 = *(int * PTR32 *)(this + 8);
  if (piVar2[1] < iVar4) {
    iVar1 = iVar4 + 1;
    if ((int)(piVar2[2] & 0x3fffffffU) < iVar1) {
      iVar3 = (piVar2[2] & 0x3fffffffU) * 2;
      if (iVar3 <= iVar1) {
        iVar3 = iVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar2,iVar3,1);
    }
    _Size = iVar1 - piVar2[1];
    if (0 < (int)_Size) {
      F_00c48350(((undefined *)GEN_TOP((*piVar2 + piVar2[1]))),0,_Size);
    }
    piVar2[1] = iVar1;
    *((int *)GEN_TOP((*(int *)(this + 8) + 4))) = iVar4;
  }
  *(int *)(this + 0xc) = iVar4;
  return 0;
}

/* ref: FUN_00db9b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb9b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return (uint)this;
}

/* ref: FUN_00db9bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb9bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x14)))) {
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar5 * 4)));
      uVar2 = *(undefined4 *)this;
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,uVar1,uVar2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *((int *)GEN_TOP(((int)this + 0x14))));
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (-1 < (int)uVar4) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),uVar4 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  uVar1 = *(undefined4 *)this;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar4;
}

/* ref: FUN_00db9c40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb9c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = param_1[5];
  if (iVar1 != 1 && -1 < iVar1 - 1) {
    iVar6 = 0;
    do {
      uVar2 = *((undefined4 *)GEN_TOP((param_1[4] + iVar6 * 4)));
      F_00db99d0(this GEN_EDX_FWD,uVar2,*param_1);
      uVar3 = *param_1;
      pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) GEN_EDX_ARG,uVar2,uVar3);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1 - 1);
  }
  if (iVar1 != 0) {
    uVar2 = *((undefined4 *)GEN_TOP((param_1[4] - 4 + iVar1 * 4)));
    F_00db99d0(this GEN_EDX_ARG,uVar2,param_1[1]);
    uVar3 = *param_1;
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) GEN_EDX_ARG,uVar2,uVar3);
  }
  iVar1 = param_1[6];
  param_1[5] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[4],iVar1 * 4);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  uVar5 = F_00db9bb0(param_1 GEN_EDX_ARG);
  return uVar5;
}

/* ref: hkMemoryTrackStreamWriter::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db9d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb9d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00db9bb0(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD);
  return uVar1;
}

/* ref: hkMemoryTrackStreamReader::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb9d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  pcVar2 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3)));
  if (*pcVar2 == '\0') {
    return 0;
  }
  piVar1 = *(int * PTR32 *)(this + 8);
  uVar3 = ((piVar1[5] - 1 + piVar1[3]) * *piVar1 - piVar1[2]) + piVar1[1];
  uVar4 = param_2;
  if ((int)uVar3 <= (int)param_2) {
    uVar4 = uVar3;
  }
  if (((piVar1[5] - 1 + piVar1[3]) * *piVar1 - piVar1[2]) + piVar1[1] < (int)param_2) {
    *(uint *)(this + 0xc) = piVar1[2] + param_2;
    return 0;
  }
  F_00db9780(piVar1 GEN_EDX_ARG,param_1,uVar4);
  if (this[0x14] != (undefined1)0x0) {
    F_00db9860(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG);
    piVar1 = *(int * PTR32 *)(this + 8);
    if (piVar1[2] == (piVar1[5] - 1 + piVar1[3]) * *piVar1 + piVar1[1]) {
      F_00db9bb0(piVar1 GEN_EDX_ARG);
      *(undefined4 *)(this + 0xc) = 0xffffffff;
    }
  }
  return uVar4;
}

/* ref: FUN_00db9df0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db9df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb9df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00db9bb0(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return uVar1;
}

/* ref: FUN_00db9e40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00db9e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb9e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113dad8));
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 1) {
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 8)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00db9df0(this_00 GEN_EDX_FWD);
      pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,this_00,0x1c);
    }
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
    return;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return;
}

/* ref: FUN_00db9ec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9ec0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb9ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00db9ed0 */
GEN_LIB GEN_FRAME uint F_00db9ed0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb9ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00db9ef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb9ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00db9f20 */
GEN_LIB GEN_FRAME unsigned int F_00db9f20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb9f20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: hkMemoryTrackStreamReader::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb9f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: hkMemoryTrackStreamReader::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db9fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb9fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: hkMemoryTrackStreamReader::vf8 */
GEN_LIB GEN_NOFRAME uint F_00db9fb0(void)
{
  GEN_ENTER(0xdb9fb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: hkMemoryTrackStreamReader::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb9fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: hkMemoryTrackStreamReader::vf10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db9fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb9fd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 1;
}

/* ref: hkMemoryTrackStreamReader::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db9fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb9fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *((bool *)GEN_TOP(param_1)) = *(int *)(this + 0xc) < (piVar1[5] - 1 + piVar1[3]) * *piVar1 + piVar1[1];
  return param_1;
}

/* ref: FUN_00dba030 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dba030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdba030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) * 4;
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + param_1 * 4)));
  if (0 < iVar1) {
    iVar1 = (iVar1 - 1U >> 2) + 1;
    do {
      *puVar2 = puVar2[1];
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00dba070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dba070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdba070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dba0b0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dba0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined1 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdba0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *((undefined1 *)GEN_TOP((iVar5 + iVar1 + iVar3))) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return 0;
}

/* ref: FUN_00dba110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dba110(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdba110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00dba120 */
GEN_LIB GEN_FRAME uint F_00dba120(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdba120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,param_2);
  return uVar2;
}

/* ref: FUN_00dba150 */
GEN_LIB GEN_FRAME uint F_00dba150(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdba150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00dba180 */
GEN_LIB GEN_FRAME uint F_00dba180(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdba180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00dba1b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dba1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdba1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dba1f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dba1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdba1f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *(int *)this;
  iVar4 = param_1 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *((undefined1 *)GEN_TOP((iVar5 + iVar1 + iVar3))) = *param_2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return 0;
}

/* ref: FUN_00dba250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dba250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdba250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dba290 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dba290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdba290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dba2d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dba2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdba2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkMemoryTrackStreamReader::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dba310(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdba310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00db9e40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00dba350 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dba350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdba350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  uVar3 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xc))) + uVar3,iVar1 - uVar3);
      uVar3 = uVar3 + uVar2;
      if (uVar2 == 0) {
        return uVar3;
      }
    } while ((int)uVar3 < iVar1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return uVar3;
}

/* ref: hkBufferedStreamWriter::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dba3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdba3a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x14) - *(int *)(this + 0x10);
  uVar3 = param_2;
  if (iVar4 < (int)param_2) {
    do {
      F_00da1010(*(int *)(this + 0x10) + *(int *)(this + 0xc),param_1,iVar4);
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + iVar4;
      uVar1 = *(uint *)(this + 0x10);
      param_1 = param_1 + iVar4;
      uVar3 = uVar3 - iVar4;
      uVar2 = F_00dba350(this GEN_EDX_ARG);
      if (uVar2 != uVar1) {
        return param_2 - uVar3;
      }
      iVar4 = *(int *)(this + 0x14) - *(int *)(this + 0x10);
    } while (iVar4 < (int)uVar3);
  }
  F_00da1010(*(int *)(this + 0xc) + *(int *)(this + 0x10),param_1,uVar3);
  *(uint *)(this + 0x10) = *(int *)(this + 0x10) + uVar3;
  return param_2;
}

/* ref: hkBufferedStreamWriter::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dba430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdba430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00dba350(this GEN_EDX_FWD);
  if (*(int *)(this + 8) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG);
    return uVar1;
  }
  return uVar1;
}

/* ref: hkBufferedStreamWriter::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dba450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdba450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined1 * puVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (*(int *)(this + 8) != 0) {
    puVar1 = ((undefined1 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3)));
    *param_1 = *puVar1;
    return (uint)param_1;
  }
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3)) = *(int *)(this + 0x10) != *(int *)(this + 0x14);
  *param_1 = *(int *)(this + 0x10) != *(int *)(this + 0x14);
  return (uint)param_1;
}

/* ref: hkBufferedStreamWriter::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dba4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdba4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined1 * puVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (*(int *)(this + 8) != 0) {
    puVar1 = ((undefined1 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x18))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3)));
    *param_1 = *puVar1;
    return (uint)param_1;
  }
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3)) = 1;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkBufferedStreamWriter::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dba4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdba4e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(this + 8) != 0) {
    F_00dba350(this GEN_EDX_FWD);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x1c))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1,param_2);
    return uVar2;
  }
  iVar3 = param_1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      iVar3 = *(int *)(this + 0x10) + param_1;
    }
    else {
      iVar3 = -1;
      if (param_2 == 2) {
        iVar3 = *(int *)(this + 0x10) - param_1;
      }
    }
  }
  if (-1 < iVar3) {
    iVar1 = *(int *)(this + 0x14);
    iVar4 = iVar3;
    if (iVar1 < iVar3) {
      iVar4 = iVar1;
    }
    *(int *)(this + 0x10) = iVar4;
    return (uint)(iVar1 < iVar3);
  }
  *(undefined4 *)(this + 0x10) = 0;
  return 1;
}

/* ref: hkBufferedStreamWriter::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dba550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdba550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(int *)(this + 8) == 0) {
    return *(uint *)(this + 0x10);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x20))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD);
  if (-1 < (int)uVar1) {
    return *(int *)(this + 0x10) + uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00dba580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dba580(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdba580u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  int iVar1;
  
  *((undefined2 *)GEN_TOP(((int)param_1 + 6))) = 1;
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x113db20));
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  iVar1 = param_3 - 1;
  if (param_4 == '\0') {
    iVar1 = param_3;
  }
  param_1[5] = iVar1;
  *(undefined1 *)(param_1 + 6) = 0;
  if (param_4 != '\0') {
    F_00da1030(param_2,0,param_3);
  }
  return (uint)param_1;
}

/* ref: FUN_00dba5e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dba5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdba5e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  LPVOID pvVar1;
  uint uVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x113db20));
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 1;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d923f0(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_2,0x40);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return (uint)this;
}

/* ref: FUN_00dba640 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dba640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdba640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  LPVOID pvVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x113db20));
  uVar2 = F_00dba430(this GEN_EDX_FWD);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  if (*((char *)GEN_TOP(((int)this + 0x18))) != '\0') {
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar2 = F_00d92430(*((undefined4 *)GEN_TOP(((int)pvVar3 + 0x2c))),uVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkBufferedStreamWriter::vf2 */
GEN_LIB GEN_NOFRAME uint F_00dba690(void)
{
  GEN_ENTER(0xdba690u, 0u, 0u, 0u, 0u);
  return 0x15e0038;
}

/* ref: FUN_00dba6a0 */
GEN_LIB GEN_FRAME uint F_00dba6a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdba6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d923f0(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_2,param_1);
  return uVar2;
}

/* ref: FUN_00dba6d0 */
GEN_LIB GEN_FRAME uint F_00dba6d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdba6d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d92430(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_1);
  return uVar2;
}

/* ref: FUN_00dba700 */
GEN_LIB GEN_FRAME uint F_00dba700(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdba700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkBufferedStreamWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dba730(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdba730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00dba640(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00dba770 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dba770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdba770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined2 *)this = *((undefined2 *)GEN_TOP((param_1 + 2)));
  return (uint)this;
}

/* ref: FUN_00dba790 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dba790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdba790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *(undefined2 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00dba7b0 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00dba7b0(GEN_P(short * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdba7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(short * in_ecx = (short *)(uintptr_t)gen_a0;)
  return ((float10)GEN_TOD(gen_bits2f((int)*in_ecx << 0x10)));
}

/* ref: FUN_00dba7d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dba7d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdba7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((in_ecx + 8))) != 0;
  return param_2;
}

/* ref: FUN_00dba7f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dba7f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdba7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((in_ecx + 0xc))) != 0;
  return param_2;
}

/* ref: FUN_00dba810 */
GEN_LIB GEN_FRAME uint F_00dba810(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdba810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (param_1 == 0x19) {
    uVar1 = F_00d929c0(param_2 GEN_EDX_ARG);
    return uVar1;
  }
  uVar1 = F_00da5f30(param_1);
  return (int)*((short *)GEN_TOP((uVar1 + 8)));
}

/* ref: FUN_00dba840 */
GEN_LIB GEN_FRAME float10 F_00dba840(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdba840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  if (param_1 == 0xb) {
    return (float10)*param_2;
  }
  if (param_1 != 0x20) {
    return (float10)0;
  }
  return ((float10)GEN_TOD(gen_bits2f((int)*(short *)((int)(uintptr_t)param_2) << 0x10)));
}

/* ref: FUN_00dba870 */
GEN_LIB GEN_FRAME uint F_00dba870(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdba870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  if (param_1 == 0xb) {
    *param_2 = param_3;
  }
  else if (param_1 == 0x20) {
    *(short *)param_2 = (short)(param_3 >> 0x10);
    return (int)param_3 >> 0x10;
  }
  return param_1;
}

/* ref: FUN_00dba8a0 */
GEN_LIB GEN_FRAME uint F_00dba8a0(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(ushort * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdba8a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  ushort * puVar1;
  
  if (param_1 == ((ushort *)GEN_TOP(0xb))) {
    *(int *)param_2 = (int)(short)(ushort)param_3 << 0x10;
    puVar1 = param_2;
  }
  else {
    puVar1 = param_1;
    if (param_1 == (ushort *)&REFG(undefined, 0x20)) {
      *param_2 = (ushort)param_3;
      return (uint)(ushort)param_3;
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_00dba8d0 */
GEN_LIB GEN_FRAME uint F_00dba8d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdba8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
  case 2: ;
  case 3: ;
    return (int)(char)(byte)*param_2;
  case 4: ;
    return (uint)(byte)*param_2;
  case 5: ;
    return (int)(short)(ushort)*param_2;
  case 6: ;
    return (uint)(ushort)*param_2;
  case 7: ;
    return *param_2;
  case 8: ;
    return *param_2;
  case 9: ;
  case 10: ;
    return *param_2;
  default: ;
    return 0;
  case 0x1e: ;
    return *param_2;
  }
}

/* ref: FUN_00dba980 */
GEN_LIB GEN_FRAME uint F_00dba980(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdba980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  if ((param_1 != 0x18) && (param_1 != 0x1f)) {
    uVar1 = F_00dba8d0(param_1,param_3);
    return uVar1;
  }
  uVar1 = F_00dba8d0(param_2,param_3);
  return uVar1;
}

/* ref: FUN_00dba9c0 */
GEN_LIB GEN_FRAME uint F_00dba9c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdba9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = param_1 - 1;
  if (uVar2 < 0x1e) {
    uVar2 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xdbaa78) + param_1 + 3)));
    uVar1 = (undefined1)param_3;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 1: ;
      if (param_3 != 0 || param_4 != 0) {
        *(undefined1 *)param_2 = 1;
        return 1;
      }
      *(undefined1 *)param_2 = 0;
      return 0;
    case 2: ;
    case 3: ;
      *(undefined1 *)param_2 = uVar1;
      return param_3 & 0xff;
    case 4: ;
      *(undefined1 *)param_2 = uVar1;
      return (uint)param_2;
    case 5: ;
      *(undefined2 *)param_2 = (undefined2)param_3;
      return uVar2;
    case 6: ;
      *(undefined2 *)param_2 = (undefined2)param_3;
      return param_3 & 0xffff;
    case 7: ;
      *param_2 = param_3;
      return (uint)param_2;
    case 8: ;
      *param_2 = param_3;
      return uVar2;
    case 9: ;
    case 10: ;
      *param_2 = param_3;
      param_2[1] = param_4;
      return (uint)param_2;
    case 0x1e: ;
      *param_2 = param_3;
      uVar2 = param_3;
    }
  }
  return uVar2;
}

/* ref: FUN_00dbaaa0 */
GEN_LIB GEN_FRAME uint F_00dbaaa0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdbaaa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  if ((param_1 != 0x18) && (param_1 != 0x1f)) {
    uVar1 = F_00dba9c0(param_1,param_3,param_4,param_5);
    return uVar1;
  }
  uVar1 = F_00dba9c0(param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00dbaaf0 */
GEN_LIB GEN_FRAME uint F_00dbaaf0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdbaaf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (param_1 == 0x1d) {
    *param_2 = param_3;
  }
  else if (param_1 == 0x21) {
    uVar1 = F_00d91520(param_2 GEN_EDX_ARG,param_3);
    return uVar1;
  }
  return param_1;
}

/* ref: FUN_00dbab20 */
GEN_LIB GEN_FRAME uint F_00dbab20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbab20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL(0x5, 11);
  uint uVar1;
  char * pcVar2;
  
  uVar1 = F_00d929c0(param_1 GEN_EDX_ARG);
  F_00da1030(param_2,0,uVar1);
  pcVar2 = ((char *)GEN_TOP(F_00d929e0(param_1 GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x0)))));
  if (*pcVar2 != '\0') {
    pcVar2 = ((char *)GEN_TOP(F_00d929c0(param_1 GEN_EDX_ARG)));
    *((short *)GEN_TOP((param_2 + 4))) = (short)pcVar2;
    *((undefined2 *)GEN_TOP((param_2 + 6))) = 1;
  }
  return (uint)pcVar2;
}

/* ref: FUN_00dbab70 */
GEN_LIB GEN_FRAME uint F_00dbab70(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdbab70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  undefined * this;
  
  iVar1 = *param_1;
  uVar2 = F_00d92610(param_2 GEN_EDX_ARG);
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x1c))))(param_1,uVar2)));
  if ((this != ((undefined *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 8))) != 0)) {
    this = ((undefined *)GEN_TOP(F_00dc25d0(this GEN_EDX_ARG,param_3,1)));
  }
  return (uint)this;
}

/* ref: FUN_00dbabb0 */
GEN_LIB GEN_FRAME uint F_00dbabb0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdbabb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  undefined * this;
  
  iVar1 = *param_1;
  uVar2 = F_00d92610(param_2 GEN_EDX_ARG);
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x1c))))(param_1,uVar2)));
  if ((this != ((undefined *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 8))) != 0)) {
    this = ((undefined *)GEN_TOP(F_00dc25f0(this GEN_EDX_ARG,param_3,1)));
  }
  return (uint)this;
}

/* ref: FUN_00dbabf0 */
GEN_LIB GEN_FRAME uint F_00dbabf0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdbabf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  undefined * this;
  
  iVar1 = *param_1;
  uVar2 = F_00d92610(param_2 GEN_EDX_ARG);
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x1c))))(param_1,uVar2)));
  if ((this != ((undefined *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 8))) != 0)) {
    this = ((undefined *)GEN_TOP(F_00dc2610(this GEN_EDX_ARG,param_3)));
  }
  return (uint)this;
}

/* ref: FUN_00dbac30 */
GEN_LIB GEN_FRAME uint F_00dbac30(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdbac30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  uint uVar1;
  undefined * this;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = F_00d92610(param_2 GEN_EDX_ARG);
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x1c))))(param_1,uVar1)));
  uVar1 = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = param_4;
    if (0 < (int)param_4) {
      param_1 = ((int *)GEN_TOP(param_4));
      iVar2 = param_3;
      do {
        uVar1 = F_00d929c0(param_2 GEN_EDX_ARG);
        uVar1 = F_00da1030(iVar2,0,uVar1);
        if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
          uVar1 = F_00dc25f0(this GEN_EDX_ARG,iVar2,1);
        }
        iVar2 = iVar2 + param_5;
        param_1 = ((int *)GEN_TOP(((int)param_1 - 1)));
      } while (param_1 != ((int *)GEN_TOP(0x0)));
    }
  }
  return uVar1;
}

/* ref: FUN_00dbac90 */
GEN_LIB GEN_FRAME uint F_00dbac90(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdbac90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  uint uVar1;
  undefined * this;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  uVar1 = F_00d92610(param_2 GEN_EDX_ARG);
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x1c))))(param_1,uVar1)));
  pvVar2 = this;
  if (((this != ((undefined *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 8))) != 0)) &&
     (iVar3 = param_4, iVar4 = param_3, 0 < param_4)) {
    do {
      pvVar2 = ((undefined *)GEN_TOP(F_00dc25f0(this GEN_EDX_ARG,iVar4,1)));
      iVar4 = iVar4 + param_5;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00dbace0 */
GEN_LIB GEN_FRAME uint F_00dbace0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdbace0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  uint uVar1;
  undefined * this;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  uVar1 = F_00d92610(param_2 GEN_EDX_ARG);
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x1c))))(param_1,uVar1)));
  pvVar2 = this;
  if (((this != ((undefined *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 8))) != 0)) &&
     (iVar3 = param_4, iVar4 = param_3, 0 < param_4)) {
    do {
      pvVar2 = ((undefined *)GEN_TOP(F_00dc2610(this GEN_EDX_ARG,iVar4)));
      iVar4 = iVar4 + param_5;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00dbad30 */
GEN_LIB GEN_FRAME uint F_00dbad30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbad30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_2;
  if ((int)param_2 < 1) {
    uVar1 = 1;
  }
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0xb: ;
  case 0x20: ;
    break;
  case 0xc: ;
  case 0xd: ;
    return uVar1 * 4;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
    return uVar1 * 0xc;
  case 0x11: ;
  case 0x12: ;
    return uVar1 << 4;
  default: ;
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00dbada0 */
GEN_LIB GEN_FRAME uint F_00dbada0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdbada0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00dbad30(param_1,param_2)));
  puVar3 = puVar1;
  if (((int)param_5 < 0) || (puVar3 = param_5, (int)param_5 <= (int)puVar1)) {
    if (param_1 == 0x20) {
      puVar1 = ((undefined4 *)GEN_TOP(0x0));
      if (0 < (int)puVar3) {
        do {
          *((undefined2 *)GEN_TOP((param_4 + (int)((int)(uintptr_t)puVar1) * 2))) =
               *((undefined2 *)GEN_TOP((param_3 + 2 + (int)((int)(uintptr_t)puVar1) * 4)));
          puVar1 = ((undefined4 *)GEN_TOP(((int)puVar1 + 1)));
        } while ((int)puVar1 < (int)puVar3);
        return (uint)puVar1;
      }
    }
    else {
      iVar6 = 0;
      if (3 < (int)puVar3) {
        iVar5 = ((uint)(puVar3 - 1) >> 2) + 1;
        iVar6 = iVar5 * 4;
        puVar2 = ((undefined4 *)GEN_TOP((param_4 + 4)));
        puVar4 = ((undefined4 *)GEN_TOP((param_3 + 0xc)));
        do {
          puVar1 = puVar2 + 4;
          puVar2[-1] = puVar4[-3];
          iVar5 = iVar5 - 1;
          *puVar2 = *((undefined4 *)GEN_TOP(((param_3 - param_4) - 0x10 + (int)puVar1)));
          puVar2[1] = puVar4[-1];
          puVar2[2] = *puVar4;
          puVar2 = puVar1;
          puVar4 = puVar4 + 4;
        } while (iVar5 != 0);
      }
      if (iVar6 < (int)puVar3) {
        iVar5 = (int)puVar3 - iVar6;
        puVar3 = ((undefined4 *)GEN_TOP((param_4 + iVar6 * 4)));
        do {
          puVar1 = puVar3 + 1;
          iVar5 = iVar5 - 1;
          *puVar3 = *((undefined4 *)GEN_TOP(((int)puVar3 + (param_3 - param_4))));
          puVar3 = puVar1;
        } while (iVar5 != 0);
      }
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_00dbae70 */
GEN_LIB GEN_FRAME uint F_00dbae70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdbae70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  undefined4 * puVar2;
  
  if (param_2 == ((undefined4 *)GEN_TOP(0x14))) {
    *param_3 = *param_1;
    puVar2 = param_3;
  }
  else {
    puVar2 = param_2;
    if (param_2 == ((undefined4 *)GEN_TOP(0x1c))) {
      *param_3 = *param_1;
      uVar1 = param_1[1];
      param_3[1] = uVar1;
      return uVar1;
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00dbaea0 */
GEN_LIB GEN_FRAME uint F_00dbaea0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdbaea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  uint in_ecx;
  uint uVar2;
  
  in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x14))))(param_2 GEN_EDX_ARG,param_1);
  uVar2 = 0;
  if (in_ecx != 0) {
    iVar1 = *param_3;
    uVar2 = F_00d92610(in_ecx GEN_EDX_ARG);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x10))))(param_3,uVar2);
  }
  return uVar2;
}

/* ref: FUN_00dbaed0 */
GEN_LIB GEN_FRAME uint F_00dbaed0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdbaed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL(0x5, 11);
  char * pcVar1;
  
  pcVar1 = ((char *)GEN_TOP(F_00d929e0(param_1 GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x0)))));
  if (*pcVar1 == '\0') {
    *param_3 = param_2;
    return (uint)pcVar1;
  }
  if (param_4 != '\0') {
    if (param_2 != ((undefined *)GEN_TOP(0x0))) {
      pcVar1 = ((char *)GEN_TOP(F_00d919e0(param_2 GEN_EDX_ARG)));
    }
    if (((undefined *)GEN_TOP(*param_3)) != ((undefined *)GEN_TOP(0x0))) {
      pcVar1 = ((char *)GEN_TOP(F_00d91a80(((undefined *)GEN_TOP(*param_3)) GEN_EDX_ARG)));
    }
    *param_3 = param_2;
    return (uint)pcVar1;
  }
  *param_3 = param_2;
  return (uint)param_3;
}

/* ref: FUN_00dbaf30 */
GEN_LIB GEN_FRAME uint F_00dbaf30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbaf30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (param_1 != 0x19) {
    uVar1 = F_00da5f30(param_1);
    return (int)*((short *)GEN_TOP((uVar1 + 8)));
  }
  uVar1 = F_00d929c0(param_2 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00dbaf60 */
GEN_LIB GEN_FRAME uint F_00dbaf60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdbaf60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  
  if (param_1 == 0x16) {
    uVar1 = 0xc;
  }
  else {
    iVar2 = param_2;
    if ((param_1 != 0x18) && (param_1 != 0x1f)) {
      iVar2 = param_1;
    }
    uVar1 = F_00dbaf30(iVar2,param_3);
    if (0 < param_4) {
      return uVar1 * param_4;
    }
  }
  return uVar1;
}

/* ref: FUN_00dbafb0 */
GEN_LIB GEN_FRAME uint F_00dbafb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdbafb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  
  if (param_1 == 1) {
    uVar1 = F_00da1010(param_3,param_2,param_4);
    return uVar1;
  }
  uVar1 = F_00da5f30(param_1);
  uVar1 = (int)*((short *)GEN_TOP((uVar1 + 8))) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    if (0 < param_4) {
      uVar1 = param_3;
      iVar2 = param_4;
      do {
        *((bool *)GEN_TOP(uVar1)) = *((char *)GEN_TOP(((param_2 - param_3) + uVar1))) != '\0';
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 - 1;
      } while (iVar2 != 0);
      return uVar1;
    }
    break;
  case 1: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((bool *)GEN_TOP((uVar1 + param_3))) = *((short *)GEN_TOP((param_2 + uVar1 * 2))) != 0;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 2: ;
  case 4: ;
  case 5: ;
  case 6: ;
    break;
  case 3: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((bool *)GEN_TOP((uVar1 + param_3))) = *((int *)GEN_TOP((param_2 + uVar1 * 4))) != 0;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 7: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((bool *)GEN_TOP((uVar1 + param_3))) =
             *((int *)GEN_TOP((param_2 + uVar1 * 8))) != 0 || *((int *)GEN_TOP((param_2 + 4 + uVar1 * 8))) != 0;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
    }
    break;
  default: ;
    goto switchD_00dbafea_default;
  }
switchD_00dbafea_default: ;
  return uVar1;
}

/* ref: FUN_00dbb0b0 */
GEN_LIB GEN_FRAME uint F_00dbb0b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdbb0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  char * pcVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 1) {
    uVar2 = F_00da1010(param_3,param_1,param_4);
    return uVar2;
  }
  uVar2 = F_00da5f30(param_2);
  uVar2 = (int)*((short *)GEN_TOP((uVar2 + 8))) - 1;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    if (0 < param_4) {
      uVar2 = param_3;
      iVar3 = param_4;
      do {
        *((bool *)GEN_TOP(uVar2)) = *((char *)GEN_TOP(((param_1 - param_3) + uVar2))) != '\0';
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      return uVar2;
    }
    break;
  case 1: ;
    uVar2 = 0;
    if (0 < param_4) {
      do {
        pcVar1 = ((char *)GEN_TOP((uVar2 + param_1)));
        uVar2 = uVar2 + 1;
        *((ushort *)GEN_TOP(((param_3 - 2) + uVar2 * 2))) = (ushort)(*pcVar1 != '\0');
      } while ((int)uVar2 < param_4);
      return uVar2;
    }
    break;
  case 2: ;
  case 4: ;
  case 5: ;
  case 6: ;
    break;
  case 3: ;
    uVar2 = 0;
    if (0 < param_4) {
      do {
        pcVar1 = ((char *)GEN_TOP((uVar2 + param_1)));
        uVar2 = uVar2 + 1;
        *((uint *)GEN_TOP(((param_3 - 4) + uVar2 * 4))) = (uint)(*pcVar1 != '\0');
      } while ((int)uVar2 < param_4);
      return uVar2;
    }
    break;
  case 7: ;
    iVar3 = 0;
    if (0 < param_4) {
      do {
        uVar2 = (uint)(*((char *)GEN_TOP((iVar3 + param_1))) != '\0');
        iVar3 = iVar3 + 1;
        *((uint *)GEN_TOP(((param_3 - 8) + iVar3 * 8))) = uVar2;
        *((undefined4 *)GEN_TOP(((param_3 - 4) + iVar3 * 8))) = 0;
      } while (iVar3 < param_4);
    }
    break;
  default: ;
    goto switchD_00dbb0ea_default;
  }
switchD_00dbb0ea_default: ;
  return uVar2;
}

/* ref: FUN_00dbb1b0 */
GEN_LIB GEN_FRAME uint F_00dbb1b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdbb1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint uVar1;
  
  uVar1 = param_2 - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00dbafb0(9,param_1,param_3,param_4);
    return uVar1;
  case 1: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined1 *)GEN_TOP((uVar1 + param_3))) = *((undefined1 *)GEN_TOP((param_1 + uVar1 * 8)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 2: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined1 *)GEN_TOP((uVar1 + param_3))) = *((undefined1 *)GEN_TOP((param_1 + uVar1 * 8)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 3: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined1 *)GEN_TOP((uVar1 + param_3))) = *((undefined1 *)GEN_TOP((param_1 + uVar1 * 8)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 4: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined2 *)GEN_TOP((param_3 + uVar1 * 2))) = *((undefined2 *)GEN_TOP((param_1 + uVar1 * 8)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 5: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined2 *)GEN_TOP((param_3 + uVar1 * 2))) = *((undefined2 *)GEN_TOP((param_1 + uVar1 * 8)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 6: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined4 *)GEN_TOP((param_3 + uVar1 * 4))) = *((undefined4 *)GEN_TOP((param_1 + uVar1 * 8)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 7: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined4 *)GEN_TOP((param_3 + uVar1 * 4))) = *((undefined4 *)GEN_TOP((param_1 + uVar1 * 8)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
    }
    break;
  case 8: ;
  case 9: ;
    uVar1 = F_00da1010(param_3,param_1,param_4 * 8);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00dbb320 */
GEN_LIB GEN_FRAME uint F_00dbb320(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbb320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  if (param_1 == 0x1d) {
    return *param_2;
  }
  if (param_1 != 0x21) {
    return 0;
  }
  return *param_2 & 0xfffffffe;
}

/* ref: FUN_00dbb350 */
GEN_LIB GEN_FRAME uint F_00dbb350(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdbb350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((param_3 + 0xc))))) {
  case 0x14: ;
  case 0x16: ;
  case 0x1c: ;
  case 0x21: ;
    *param_1 = 1;
    return (uint)param_1;
  default: ;
    *param_1 = 0;
    return (uint)param_1;
  case 0x19: ;
    break;
  }
  iVar1 = *param_2;
  uVar2 = F_00da5fd0(param_3 GEN_EDX_ARG);
  uVar2 = F_00d92610(uVar2 GEN_EDX_ARG);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x1c))))(param_2,uVar2);
  if ((uVar2 != 0) && ((*((int *)GEN_TOP((uVar2 + 0xc))) != 0 || (*((int *)GEN_TOP((uVar2 + 8))) != 0)))) {
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00dbb3e0 */
GEN_LIB GEN_FRAME uint F_00dbb3e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xdbb3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar1 = param_2 - 0x14;
  if (uVar1 < 0xe) {
    uVar1 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xdbb488) + param_2)));
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0x14: ;
      uVar1 = param_5;
      puVar2 = param_4;
      if (0 < (int)param_5) {
        do {
          *puVar2 = 0;
          puVar2 = ((undefined4 *)GEN_TOP(((int)puVar2 + param_6)));
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
        return 0;
      }
      break;
    case 0x19: ;
      uVar1 = F_00dbac30(param_1,param_3,param_4,param_5,param_6);
      return uVar1;
    case 0x1c: ;
      uVar1 = param_5;
      puVar2 = param_4;
      if (0 < (int)param_5) {
        do {
          puVar2[1] = 0;
          *puVar2 = 0;
          puVar2 = ((undefined4 *)GEN_TOP(((int)puVar2 + param_6)));
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
        return 0;
      }
      break;
    case 0x21: ;
      puVar2 = param_4;
      uVar3 = param_5;
      if (0 < (int)param_5) {
        do {
          if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
            uVar1 = F_00d91340(puVar2 GEN_EDX_ARG);
          }
          puVar2 = ((undefined4 *)GEN_TOP(((int)puVar2 + param_6)));
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
  }
  return uVar1;
}

/* ref: FUN_00dbb4b0 */
GEN_LIB GEN_FRAME uint F_00dbb4b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbb4b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *((uint *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_00dbb4c0 */
GEN_LIB GEN_FRAME uint F_00dbb4c0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdbb4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00dba810(param_2,param_3);
  F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,param_4,uVar1);
  return *param_1;
}

/* ref: FUN_00dbb4f0 */
GEN_LIB GEN_FRAME ulonglong F_00dbb4f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdbb4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x214, 12);
  char * pcVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  int iVar5;
  undefined * puVar6;
  
  iVar4 = 0;
  iVar5 = 0;
  if (((param_1 != 0) && (param_2 != 0)) &&
     (pcVar1 = ((char *)GEN_TOP(F_00d929e0(param_1 GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x20f))))), iVar4 = param_2, iVar5 = param_1,
     *pcVar1 != '\0')) {
    uVar2 = F_00dbaea0(param_2,param_3,param_4);
    if (uVar2 == 0) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
      pcVar1 = ((char *)REFP(0x113dbc8));
      puVar6 = &REFG(undefined, 0x113dbc0);
      uVar2 = F_00d92610(param_1 GEN_EDX_ARG);
      pvVar3 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,
                                    ((char *)REFP(0x113db84)))));
      pvVar3 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar3 GEN_EDX_ARG,uVar2)));
      pvVar3 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar3 GEN_EDX_ARG,puVar6)));
      pvVar3 = ((undefined *)GEN_TOP(F_00d9fde0(pvVar3 GEN_EDX_ARG,param_2)));
      F_00d9fe80(pvVar3 GEN_EDX_ARG,pcVar1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x3476d70f,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x113db5c)),0x28c
                );
      F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
      return 0;
    }
    return CONCAT44(uVar2,param_2);
  }
  return CONCAT44(iVar5,iVar4);
}

/* ref: FUN_00dbb5f0 */
GEN_LIB GEN_FRAME ulonglong F_00dbb5f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(ulonglong * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdbb5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(ulonglong * param_5 = (ulonglong *)(uintptr_t)gen_a4;)
  ulonglong uVar1;
  
  if (param_1 == 0x14) {
    uVar1 = F_00dbb4f0(param_2,(int)*param_5,param_3,param_4);
    return uVar1;
  }
  if (param_1 != 0x19) {
    if (param_1 != 0x1c) {
      return 0;
    }
    return *param_5;
  }
  uVar1 = F_00dbb4f0(param_2,param_5,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00dbb650 */
GEN_LIB GEN_FRAME uint F_00dbb650(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdbb650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint uVar1;
  
  uVar1 = param_1 - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00dbb0b0(param_2,7,param_3,param_4);
    return uVar1;
  case 1: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((int *)GEN_TOP((param_3 + uVar1 * 4))) = (int)*((char *)GEN_TOP((uVar1 + param_2)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 2: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((int *)GEN_TOP((param_3 + uVar1 * 4))) = (int)*((char *)GEN_TOP((uVar1 + param_2)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 3: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((uint *)GEN_TOP((param_3 + uVar1 * 4))) = (uint)*((byte *)GEN_TOP((uVar1 + param_2)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 4: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((int *)GEN_TOP((param_3 + uVar1 * 4))) = (int)*((short *)GEN_TOP((param_2 + uVar1 * 2)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 5: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((uint *)GEN_TOP((param_3 + uVar1 * 4))) = (uint)*((ushort *)GEN_TOP((param_2 + uVar1 * 2)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
    }
    break;
  case 6: ;
  case 7: ;
    uVar1 = F_00da1010(param_3,param_2,param_4 * 4);
    return uVar1;
  case 8: ;
  case 9: ;
    uVar1 = F_00dbb1b0(param_2,7,param_3,param_4);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00dbb790 */
GEN_LIB GEN_FRAME uint F_00dbb790(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdbb790u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2 - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00dbafb0(7,param_1,param_3,param_4);
    return uVar1;
  case 1: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined1 *)GEN_TOP((uVar1 + param_3))) = *((undefined1 *)GEN_TOP((param_1 + uVar1 * 4)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 2: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined1 *)GEN_TOP((uVar1 + param_3))) = *((undefined1 *)GEN_TOP((param_1 + uVar1 * 4)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 3: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined1 *)GEN_TOP((uVar1 + param_3))) = *((undefined1 *)GEN_TOP((param_1 + uVar1 * 4)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 4: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined2 *)GEN_TOP((param_3 + uVar1 * 2))) = *((undefined2 *)GEN_TOP((param_1 + uVar1 * 4)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 5: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined2 *)GEN_TOP((param_3 + uVar1 * 2))) = *((undefined2 *)GEN_TOP((param_1 + uVar1 * 4)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 6: ;
  case 7: ;
    uVar1 = F_00da1010(param_3,param_1,param_4 * 4);
    return uVar1;
  case 8: ;
    iVar2 = 0;
    if (0 < param_4) {
      do {
        uVar1 = *((uint *)GEN_TOP((param_1 + iVar2 * 4)));
        *((uint *)GEN_TOP((param_3 + iVar2 * 8))) = uVar1;
        *((int *)GEN_TOP((param_3 + 4 + iVar2 * 8))) = (int)uVar1 >> 0x1f;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
      return uVar1;
    }
    break;
  case 9: ;
    iVar2 = 0;
    if (0 < param_4) {
      do {
        uVar1 = *((uint *)GEN_TOP((param_1 + iVar2 * 4)));
        *((uint *)GEN_TOP((param_3 + iVar2 * 8))) = uVar1;
        *((int *)GEN_TOP((param_3 + 4 + iVar2 * 8))) = (int)uVar1 >> 0x1f;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
    }
  }
  return uVar1;
}

/* ref: FUN_00dbb910 */
GEN_LIB GEN_FRAME uint F_00dbb910(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdbb910u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint uVar1;
  
  uVar1 = param_2 - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00dbafb0(8,param_1,param_3,param_4);
    return uVar1;
  case 1: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined1 *)GEN_TOP((uVar1 + param_3))) = *((undefined1 *)GEN_TOP((param_1 + uVar1 * 4)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 2: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined1 *)GEN_TOP((uVar1 + param_3))) = *((undefined1 *)GEN_TOP((param_1 + uVar1 * 4)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 3: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined1 *)GEN_TOP((uVar1 + param_3))) = *((undefined1 *)GEN_TOP((param_1 + uVar1 * 4)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 4: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined2 *)GEN_TOP((param_3 + uVar1 * 2))) = *((undefined2 *)GEN_TOP((param_1 + uVar1 * 4)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 5: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined2 *)GEN_TOP((param_3 + uVar1 * 2))) = *((undefined2 *)GEN_TOP((param_1 + uVar1 * 4)));
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 6: ;
  case 7: ;
    uVar1 = F_00da1010(param_3,param_1,param_4 * 4);
    return uVar1;
  case 8: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined4 *)GEN_TOP((param_3 + uVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + uVar1 * 4)));
        *((undefined4 *)GEN_TOP((param_3 + 4 + uVar1 * 8))) = 0;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 9: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *((undefined4 *)GEN_TOP((param_3 + uVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + uVar1 * 4)));
        *((undefined4 *)GEN_TOP((param_3 + 4 + uVar1 * 8))) = 0;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
    }
  }
  return uVar1;
}

/* ref: FUN_00dbba90 */
GEN_LIB GEN_FRAME uint F_00dbba90(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdbba90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_TOP(0x10c, 4, 4);
  short sVar1;
  uint uVar2;
  uint uVar3;
  short * psVar4;
  int * piVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == param_3) {
    uVar2 = F_00da5f30(param_1);
    uVar2 = F_00da1010(param_4,param_2,*((short *)GEN_TOP((uVar2 + 8))) * param_5);
    return uVar2;
  }
  uVar2 = param_1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    uVar2 = F_00dbb0b0(param_2,param_3,param_4,param_5);
    return uVar2;
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
    if (param_3 == 1) {
      uVar2 = F_00dbafb0(param_1,param_2,param_4,param_5);
      return uVar2;
    }
    uVar2 = F_00da5f30(param_1);
    uVar3 = F_00da5f30(param_3);
    sVar1 = *((short *)GEN_TOP((uVar2 + 8)));
    if (sVar1 == *((short *)GEN_TOP((uVar3 + 8)))) {
      uVar2 = F_00da1010(param_4,param_2,sVar1 * param_5);
      return uVar2;
    }
    (*(int *)(gen_frame + 0x100)) = (int)sVar1 << 6;
    uVar2 = (int)*((short *)GEN_TOP((uVar3 + 8))) << 6;
    (*(uint *)(gen_frame + 0x104)) = uVar2;
    uVar3 = param_2;
    iVar7 = param_5;
    if (0 < param_5) {
      do {
        iVar6 = iVar7;
        if (0x40 < iVar7) {
          iVar6 = 0x40;
        }
        F_00dbb650(param_1,uVar3,((undefined1 *)(gen_frame + 0x0)),iVar6);
        uVar2 = F_00dbb790(((undefined1 *)(gen_frame + 0x0)),param_3,param_4,iVar6);
        uVar3 = uVar3 + (*(int *)(gen_frame + 0x100));
        param_4 = param_4 + (*(uint *)(gen_frame + 0x104));
        iVar7 = iVar7 - iVar6;
      } while (0 < iVar7);
      return uVar2;
    }
    break;
  case 7: ;
    uVar2 = F_00dbb790(param_2,param_3,param_4,param_5);
    return uVar2;
  case 8: ;
    uVar2 = F_00dbb910(param_2,param_3,param_4,param_5);
    return uVar2;
  case 9: ;
  case 10: ;
    uVar2 = F_00dbb1b0(param_2,param_3,param_4,param_5);
    return uVar2;
  case 0xb: ;
    if ((param_3 == 0x20) && (uVar2 = 0, 0 < param_5)) {
      do {
        *((undefined2 *)GEN_TOP((param_4 + uVar2 * 2))) = *((undefined2 *)GEN_TOP((param_2 + 2 + uVar2 * 4)));
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < param_5);
    }
    break;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
  case 0x11: ;
  case 0x12: ;
  case 0x13: ;
  case 0x14: ;
  case 0x15: ;
  case 0x16: ;
  case 0x17: ;
  case 0x18: ;
  case 0x19: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1c: ;
  case 0x1d: ;
  case 0x1e: ;
  case 0x1f: ;
    break;
  case 0x20: ;
    if (param_3 == 0xb) {
      iVar7 = 0;
      if (3 < param_5) {
        piVar5 = ((int *)GEN_TOP((param_4 + 8)));
        psVar4 = ((short *)GEN_TOP((param_2 + 4)));
        iVar6 = (param_5 - 4U >> 2) + 1;
        iVar7 = iVar6 * 4;
        do {
          piVar5[-2] = (int)psVar4[-2] << 0x10;
          piVar5[-1] = (int)psVar4[-1] << 0x10;
          *piVar5 = (int)*psVar4 << 0x10;
          piVar5[1] = (int)psVar4[1] << 0x10;
          psVar4 = psVar4 + 4;
          piVar5 = piVar5 + 4;
          iVar6 = iVar6 - 1;
        } while (iVar6 != 0);
      }
      uVar2 = param_2;
      if (iVar7 < param_5) {
        do {
          *((int *)GEN_TOP((param_4 + iVar7 * 4))) = (int)*((short *)GEN_TOP((param_2 + iVar7 * 2))) << 0x10;
          iVar7 = iVar7 + 1;
        } while (iVar7 < param_5);
        return param_2;
      }
    }
    break;
  default: ;
    goto switchD_00dbbadd_default;
  }
switchD_00dbbadd_default: ;
  return uVar2;
}

/* ref: FUN_00dbbd20 */
GEN_LIB GEN_FRAME uint F_00dbbd20(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xdbbd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 * puVar4;
  undefined8 * puVar5;
  
  uVar1 = param_2;
  if ((param_5 == param_2) && (param_5 == param_4)) {
    uVar1 = F_00da1010(param_3,param_1,param_5 * param_6);
    return uVar1;
  }
  switch((unsigned int)(uintptr_t)(param_5)) {
  case 1: ;
    puVar5 = param_1;
    puVar4 = param_3;
    iVar3 = param_6;
    if (param_6 < 1) {
      return (uint)param_1;
    }
    do {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
      puVar5 = ((undefined8 *)GEN_TOP(((int)puVar5 + param_2)));
      puVar4 = ((undefined8 *)GEN_TOP(((int)puVar4 + param_4)));
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    return (uint)puVar5;
  case 2: ;
    if ((((uint)param_1 | param_2 | (uint)param_3 | param_4) & 1) == 0) {
      puVar5 = param_3;
      iVar3 = param_6;
      puVar4 = param_1;
      if (param_6 < 1) {
        return (uint)param_3;
      }
      do {
        *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
        puVar4 = ((undefined8 *)GEN_TOP(((int)puVar4 + param_2)));
        puVar5 = ((undefined8 *)GEN_TOP(((int)puVar5 + param_4)));
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      return (uint)puVar5;
    }
    break;
  case 4: ;
    if ((((uint)param_1 | param_2 | (uint)param_3 | param_4) & 3) == 0) {
      puVar5 = param_3;
      iVar3 = param_6;
      puVar4 = param_1;
      if (param_6 < 1) {
        return (uint)param_3;
      }
      do {
        *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
        puVar4 = ((undefined8 *)GEN_TOP(((int)puVar4 + param_2)));
        puVar5 = ((undefined8 *)GEN_TOP(((int)puVar5 + param_4)));
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      return (uint)puVar5;
    }
    break;
  case 8: ;
    if ((((uint)param_1 | param_2 | (uint)param_3 | param_4) & 7) == 0) {
      puVar5 = param_3;
      iVar3 = param_6;
      puVar4 = param_1;
      if (param_6 < 1) {
        return (uint)param_3;
      }
      do {
        *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
        *((undefined4 *)GEN_TOP(((int)puVar5 + 4))) = *((undefined4 *)GEN_TOP(((int)puVar4 + 4)));
        puVar4 = ((undefined8 *)GEN_TOP(((int)puVar4 + param_2)));
        puVar5 = ((undefined8 *)GEN_TOP(((int)puVar5 + param_4)));
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      return (uint)puVar5;
    }
    break;
  case 0x10: ;
    if ((((uint)param_1 | param_2 | (uint)param_3 | param_4) & 0xf) == 0) {
      puVar5 = param_3;
      iVar3 = param_6;
      puVar4 = param_1;
      if (param_6 < 1) {
        return (uint)param_3;
      }
      do {
        *puVar5 = *puVar4;
        puVar5[1] = puVar4[1];
        puVar4 = ((undefined8 *)GEN_TOP(((int)puVar4 + param_2)));
        puVar5 = ((undefined8 *)GEN_TOP(((int)puVar5 + param_4)));
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      return (uint)puVar5;
    }
  }
  uVar2 = param_5;
  if (0 < param_6) {
    param_2 = param_6;
    puVar5 = param_1;
    do {
      uVar2 = F_00da1010(param_3,puVar5,param_5);
      param_3 = ((undefined8 *)GEN_TOP(((int)param_3 + param_4)));
      puVar5 = ((undefined8 *)GEN_TOP(((int)puVar5 + uVar1)));
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return uVar2;
}

/* ref: FUN_00dbbec0 */
GEN_LIB GEN_FRAME uint F_00dbbec0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xdbbec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  uint uVar1;
  undefined * this;
  int iVar2;
  
  if (param_2 == 0x19) {
    uVar1 = F_00dbace0(param_1,param_3,param_4,param_5,param_6);
    return uVar1;
  }
  uVar1 = param_2;
  if ((param_2 == 0x21) && (this = param_4, iVar2 = param_5, 0 < param_5)) {
    do {
      uVar1 = F_00d91510(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this + param_6)));
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return uVar1;
}

/* ref: FUN_00dbbf10 */
GEN_LIB GEN_FRAME unsigned int F_00dbbf10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdbbf10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (param_2[1] != 0) {
    uVar1 = F_00dba810(param_3,param_4);
    F_00dbbec0(param_1,param_3,param_4,*param_2,param_2[1],uVar1);
    param_2[1] = 0;
  }
  return;
}

/* ref: FUN_00dbbf50 */
GEN_LIB GEN_FRAME uint F_00dbbf50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdbbf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2[1];
  if (uVar1 != param_5) {
    uVar2 = F_00dba810(param_3,param_4);
    if ((int)param_5 < (int)param_2[1]) {
      F_00dbbec0(param_1,param_3,param_4,uVar2 * param_5 + *param_2,uVar1 - param_5,uVar2);
      param_2[1] = param_5;
      return *param_2;
    }
    if ((int)(param_2[2] & 0x3fffffff) < (int)param_5) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_2,param_5,uVar2);
    }
    F_00dbb3e0(param_1,param_3,param_4,uVar2 * uVar1 + *param_2,param_5 - uVar1,uVar2);
    param_2[1] = param_5;
  }
  return *param_2;
}

/* ref: FUN_00dbc000 */
GEN_LIB GEN_FRAME uint F_00dbc000(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdbc000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short * psVar4;
  int * piVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = F_00dbad30(param_1,param_2);
  if ((int)uVar2 < 1) {
    return 0;
  }
  if (param_1 != 0x20) {
    return param_3;
  }
  uVar1 = uVar2 * 4;
  if ((int)(param_4[2] & 0x3fffffff) < (int)uVar1) {
    uVar3 = (param_4[2] & 0x3fffffff) * 2;
    if ((int)uVar3 <= (int)uVar1) {
      uVar3 = uVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_4,uVar3,1);
  }
  uVar3 = *param_4;
  param_4[1] = uVar1;
  iVar7 = 0;
  if (3 < (int)uVar2) {
    psVar4 = ((short *)GEN_TOP((param_3 + 4)));
    iVar6 = (uVar2 - 4 >> 2) + 1;
    piVar5 = ((int *)GEN_TOP((uVar3 + 8)));
    iVar7 = iVar6 * 4;
    do {
      piVar5[-2] = (int)psVar4[-2] << 0x10;
      piVar5[-1] = (int)psVar4[-1] << 0x10;
      *piVar5 = (int)*psVar4 << 0x10;
      piVar5[1] = (int)psVar4[1] << 0x10;
      psVar4 = psVar4 + 4;
      piVar5 = piVar5 + 4;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  for (; iVar7 < (int)uVar2; iVar7 = iVar7 + 1) {
    *((int *)GEN_TOP((uVar3 + iVar7 * 4))) = (int)*((short *)GEN_TOP((param_3 + iVar7 * 2))) << 0x10;
  }
  return uVar3;
}

/* ref: FUN_00dbc0e0 */
GEN_LIB GEN_FRAME unsigned int F_00dbc0e0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc0e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (0 < param_1[3]) {
    iVar1 = *param_1;
    if ((iVar1 == *param_2) && (param_1[1] == param_2[1])) {
      uVar2 = F_00da5f30(iVar1);
      F_00dbbd20(param_1[2],param_1[4],param_2[2],param_2[4],
                   (int)*((short *)GEN_TOP((uVar2 + 8))) * param_1[1],param_1[3]);
      return;
    }
    uVar2 = F_00da5f30(iVar1);
    uVar3 = F_00da5f30(*param_2);
    iVar4 = (int)*((short *)GEN_TOP((uVar3 + 8))) * param_2[1];
    iVar1 = param_1[4];
    iVar5 = (int)*((short *)GEN_TOP((uVar2 + 8))) * param_1[1];
    if ((iVar5 - iVar1 == 0) && (iVar4 - param_2[4] == 0)) {
      F_00dbba90(*param_1,param_1[2],*param_2,param_2[2],param_1[3] * param_1[1]);
      return;
    }
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(uint *)(gen_frame + 0x4)) = 0;
    (*(uint *)(gen_frame + 0x8)) = 0x80000000;
    if (iVar5 - iVar1 == 0) {
      uVar2 = param_1[3] * iVar4;
      if (0 < (int)uVar2) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(undefined4 *)(gen_frame + 0x0)),((int)uVar2 < 0) - 1 & uVar2,1);
      }
      (*(uint *)(gen_frame + 0x4)) = uVar2;
      F_00dbba90(*param_1,param_1[2],*param_2,(*(undefined4 *)(gen_frame + 0x0)),param_1[1] * param_1[3]);
      F_00dbbd20((*(undefined4 *)(gen_frame + 0x0)),iVar4,param_2[2],param_2[4],iVar4,param_1[3]);
    }
    else {
      uVar2 = param_1[3] * iVar5;
      if (0 < (int)uVar2) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(undefined4 *)(gen_frame + 0x0)),uVar2 & ((int)uVar2 < 0) - 1,1);
      }
      (*(uint *)(gen_frame + 0x4)) = uVar2;
      F_00dbbd20(param_1[2],param_1[4],(*(undefined4 *)(gen_frame + 0x0)),iVar5,iVar5,param_1[3]);
      F_00dbba90(*param_1,(*(undefined4 *)(gen_frame + 0x0)),*param_2,param_2[2],param_1[1] * param_1[3]);
    }
    (*(uint *)(gen_frame + 0x4)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
    }
  }
  return;
}

/* ref: FUN_00dbc2a0 */
GEN_LIB GEN_FRAME uint F_00dbc2a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00dbc2b0 */
GEN_LIB GEN_FRAME uint F_00dbc2b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00dbc2c0 */
GEN_LIB GEN_FRAME uint F_00dbc2c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00dbc2d0 */
GEN_LIB GEN_FRAME uint F_00dbc2d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00dbc2e0 */
GEN_LIB GEN_FRAME uint F_00dbc2e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00dbc2f0 */
GEN_LIB GEN_FRAME uint F_00dbc2f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00dbc300 */
GEN_LIB GEN_FRAME uint F_00dbc300(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00dbc310 */
GEN_LIB GEN_FRAME uint F_00dbc310(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00dbc320 */
GEN_LIB GEN_FRAME uint F_00dbc320(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00dbc330 */
GEN_LIB GEN_FRAME uint F_00dbc330(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00dbc340 */
GEN_LIB GEN_FRAME uint F_00dbc340(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dbc370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbc370(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00dbc380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbc380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00dbc3c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbc3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbc3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dbc400 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbc400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbc400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dbc490 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dbc490(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  param_2[4] = in_ecx[1];
  param_2[8] = in_ecx[2];
  param_2[0xc] = in_ecx[3];
  param_2[1] = in_ecx[4];
  param_2[5] = in_ecx[5];
  param_2[9] = in_ecx[6];
  param_2[0xd] = in_ecx[7];
  param_2[2] = in_ecx[8];
  param_2[6] = in_ecx[9];
  param_2[10] = in_ecx[10];
  param_2[0xe] = in_ecx[0xb];
  param_2[3] = in_ecx[0xc];
  param_2[7] = in_ecx[0xd];
  param_2[0xb] = in_ecx[0xe];
  param_2[0xf] = in_ecx[0xf];
  return 0;
}

/* ref: FUN_00dbc500 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dbc500(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(double * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(double * param_2 = (double *)(uintptr_t)gen_a1;)
  *param_2 = (double)*in_ecx;
  param_2[4] = (double)in_ecx[1];
  param_2[8] = (double)in_ecx[2];
  param_2[0xc] = (double)in_ecx[3];
  param_2[1] = (double)in_ecx[4];
  param_2[5] = (double)in_ecx[5];
  param_2[9] = (double)in_ecx[6];
  param_2[0xd] = (double)in_ecx[7];
  param_2[2] = (double)in_ecx[8];
  param_2[6] = (double)in_ecx[9];
  param_2[10] = (double)in_ecx[10];
  param_2[0xe] = (double)in_ecx[0xb];
  param_2[3] = (double)in_ecx[0xc];
  param_2[7] = (double)in_ecx[0xd];
  param_2[0xb] = (double)in_ecx[0xe];
  param_2[0xf] = (double)in_ecx[0xf];
  return 0;
}

/* ref: FUN_00dbc5e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dbc5e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[4];
  in_ecx[2] = param_2[8];
  in_ecx[3] = param_2[0xc];
  in_ecx[4] = param_2[1];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[9];
  in_ecx[7] = param_2[0xd];
  in_ecx[8] = param_2[2];
  in_ecx[9] = param_2[6];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xe];
  in_ecx[0xc] = param_2[3];
  in_ecx[0xd] = param_2[7];
  in_ecx[0xe] = param_2[0xb];
  in_ecx[0xf] = param_2[0xf];
  return 0;
}

/* ref: FUN_00dbc650 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dbc650(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(double * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(double * param_2 = (double *)(uintptr_t)gen_a1;)
  *in_ecx = (float)*param_2;
  in_ecx[1] = (float)param_2[4];
  in_ecx[2] = (float)param_2[8];
  in_ecx[3] = (float)param_2[0xc];
  in_ecx[4] = (float)param_2[1];
  in_ecx[5] = (float)param_2[5];
  in_ecx[6] = (float)param_2[9];
  in_ecx[7] = (float)param_2[0xd];
  in_ecx[8] = (float)param_2[2];
  in_ecx[9] = (float)param_2[6];
  in_ecx[10] = (float)param_2[10];
  in_ecx[0xb] = (float)param_2[0xe];
  in_ecx[0xc] = (float)param_2[3];
  in_ecx[0xd] = (float)param_2[7];
  in_ecx[0xe] = (float)param_2[0xb];
  in_ecx[0xf] = (float)param_2[0xf];
  return 0;
}

/* ref: FUN_00dbc740 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dbc740(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(double * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(double * param_2 = (double *)(uintptr_t)gen_a1;)
  *param_2 = (double)*in_ecx;
  param_2[1] = (double)in_ecx[1];
  param_2[2] = (double)in_ecx[2];
  param_2[3] = (double)in_ecx[3];
  param_2[4] = (double)in_ecx[4];
  param_2[5] = (double)in_ecx[5];
  param_2[6] = (double)in_ecx[6];
  param_2[7] = (double)in_ecx[7];
  param_2[8] = (double)in_ecx[8];
  param_2[9] = (double)in_ecx[9];
  param_2[10] = (double)in_ecx[10];
  param_2[0xb] = (double)in_ecx[0xb];
  param_2[0xc] = (double)in_ecx[0xc];
  param_2[0xd] = (double)in_ecx[0xd];
  param_2[0xe] = (double)in_ecx[0xe];
  param_2[0xf] = (double)in_ecx[0xf];
  return 0;
}

/* ref: FUN_00dbc820 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dbc820(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(double * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(double * param_2 = (double *)(uintptr_t)gen_a1;)
  *in_ecx = (float)*param_2;
  in_ecx[1] = (float)param_2[1];
  in_ecx[2] = (float)param_2[2];
  in_ecx[3] = (float)param_2[3];
  in_ecx[4] = (float)param_2[4];
  in_ecx[5] = (float)param_2[5];
  in_ecx[6] = (float)param_2[6];
  in_ecx[7] = (float)param_2[7];
  in_ecx[8] = (float)param_2[8];
  in_ecx[9] = (float)param_2[9];
  in_ecx[10] = (float)param_2[10];
  in_ecx[0xb] = (float)param_2[0xb];
  in_ecx[0xc] = (float)param_2[0xc];
  in_ecx[0xd] = (float)param_2[0xd];
  in_ecx[0xe] = (float)param_2[0xe];
  in_ecx[0xf] = (float)param_2[0xf];
  return 0;
}

/* ref: FUN_00dbc990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbc990(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 + *in_ecx;
  in_ecx[1] = fVar1 + in_ecx[1];
  in_ecx[2] = fVar2 + in_ecx[2];
  in_ecx[3] = fVar3 + in_ecx[3];
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  in_ecx[4] = param_2[4] + in_ecx[4];
  in_ecx[5] = fVar1 + in_ecx[5];
  in_ecx[6] = fVar2 + in_ecx[6];
  in_ecx[7] = fVar3 + in_ecx[7];
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  in_ecx[8] = param_2[8] + in_ecx[8];
  in_ecx[9] = fVar1 + in_ecx[9];
  in_ecx[10] = fVar2 + in_ecx[10];
  in_ecx[0xb] = fVar3 + in_ecx[0xb];
  fVar1 = param_2[0xd];
  fVar2 = param_2[0xe];
  fVar3 = param_2[0xf];
  in_ecx[0xc] = param_2[0xc] + in_ecx[0xc];
  in_ecx[0xd] = fVar1 + in_ecx[0xd];
  in_ecx[0xe] = fVar2 + in_ecx[0xe];
  in_ecx[0xf] = fVar3 + in_ecx[0xf];
  return (uint)param_2;
}

/* ref: FUN_00dbc9d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbc9d0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbc9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *in_ecx - *param_2;
  in_ecx[1] = in_ecx[1] - fVar1;
  in_ecx[2] = in_ecx[2] - fVar2;
  in_ecx[3] = in_ecx[3] - fVar3;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  in_ecx[4] = in_ecx[4] - param_2[4];
  in_ecx[5] = in_ecx[5] - fVar1;
  in_ecx[6] = in_ecx[6] - fVar2;
  in_ecx[7] = in_ecx[7] - fVar3;
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  in_ecx[8] = in_ecx[8] - param_2[8];
  in_ecx[9] = in_ecx[9] - fVar1;
  in_ecx[10] = in_ecx[10] - fVar2;
  in_ecx[0xb] = in_ecx[0xb] - fVar3;
  fVar1 = param_2[0xd];
  fVar2 = param_2[0xe];
  fVar3 = param_2[0xf];
  in_ecx[0xc] = in_ecx[0xc] - param_2[0xc];
  in_ecx[0xd] = in_ecx[0xd] - fVar1;
  in_ecx[0xe] = in_ecx[0xe] - fVar2;
  in_ecx[0xf] = in_ecx[0xf] - fVar3;
  return (uint)param_2;
}

/* ref: FUN_00dbd010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd010(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = in_ecx[1];
  uVar2 = in_ecx[2];
  uVar3 = in_ecx[3];
  *param_2 = *in_ecx;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = in_ecx[5];
  uVar2 = in_ecx[6];
  uVar3 = in_ecx[7];
  param_2[4] = in_ecx[4];
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar1 = in_ecx[9];
  uVar2 = in_ecx[10];
  uVar3 = in_ecx[0xb];
  param_2[8] = in_ecx[8];
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar1 = in_ecx[0xd];
  uVar2 = in_ecx[0xe];
  uVar3 = in_ecx[0xf];
  param_2[0xc] = in_ecx[0xc];
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00dbd040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd040(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  in_ecx[4] = param_2[4];
  in_ecx[5] = uVar1;
  in_ecx[6] = uVar2;
  in_ecx[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  in_ecx[8] = param_2[8];
  in_ecx[9] = uVar1;
  in_ecx[10] = uVar2;
  in_ecx[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = uVar1;
  in_ecx[0xe] = uVar2;
  in_ecx[0xf] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00dbd070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd070(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_2 * 0x10;
  uVar1 = *(undefined4 *)(&REFG(undefined, 0x113dbf4) + iVar4);
  uVar2 = *(undefined4 *)(&REFG(undefined, 0x113dbf8) + iVar4);
  uVar3 = *(undefined4 *)(&REFG(undefined, 0x113dbfc) + iVar4);
  *in_ecx = *(undefined4 *)(&REFG(undefined, 0x113dbf0) + iVar4);
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)(&REFG(undefined, 0x113dbf0) + iVar4);
}

/* ref: FUN_00dbd090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd090(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  in_ecx[4] = param_2[4];
  in_ecx[5] = uVar1;
  in_ecx[6] = uVar2;
  in_ecx[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  in_ecx[8] = param_2[8];
  in_ecx[9] = uVar1;
  in_ecx[10] = uVar2;
  in_ecx[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = uVar1;
  in_ecx[0xe] = uVar2;
  in_ecx[0xf] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00dbd0c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd0c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *in_ecx = uVar1;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00dbd0e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd0e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd0e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_2 + 4)));
  *in_ecx = uVar1;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  return param_2;
}

/* ref: FUN_00dbd100 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd100(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_2 + 8)));
  *in_ecx = uVar1;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  return param_2;
}

/* ref: FUN_00dbd150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xc)));
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00dbd170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd170(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x1c)));
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00dbd190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd190(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x2c)));
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00dbd1b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd1b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x3c)));
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00dbd1d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd1d0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar3 = in_ecx[3];
  *param_2 = -(uint)(*in_ecx == 0.0);
  param_2[1] = -(uint)(fVar1 == 0.0);
  param_2[2] = -(uint)(fVar2 == 0.0);
  param_2[3] = -(uint)(fVar3 == 0.0);
  return (uint)param_2;
}

/* ref: FUN_00dbd1f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd1f0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = in_ecx[2] + *in_ecx;
  fVar2 = in_ecx[3] + in_ecx[1];
  fVar3 = *in_ecx + in_ecx[2];
  fVar4 = in_ecx[1] + in_ecx[3];
  *param_2 = fVar2 + fVar1;
  param_2[1] = fVar1 + fVar2;
  param_2[2] = fVar4 + fVar3;
  param_2[3] = fVar3 + fVar4;
  return (uint)param_2;
}

/* ref: FUN_00dbd220 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00dbd220(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(in_ecx[1] - param_2[1] == 0.0);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(*in_ecx - *param_2 == 0.0);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(in_ecx[2] - param_2[2] == 0.0);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(in_ecx[3] - param_2[3] == 0.0);
  uVar2 = gen_movmskps(&(auVar1));
  return ((byte)uVar2 & 7) == 7;
}

/* ref: FUN_00dbd250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd250(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdbd250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  fVar7 = in_ecx[0xd];
  fVar8 = in_ecx[0xe];
  fVar9 = in_ecx[0xf];
  fVar10 = in_ecx[5];
  fVar11 = in_ecx[6];
  fVar12 = in_ecx[7];
  fVar13 = in_ecx[9];
  fVar14 = in_ecx[10];
  fVar15 = in_ecx[0xb];
  *param_3 = ((fVar1 * *in_ecx + in_ecx[0xc]) + fVar2 * in_ecx[4]) + fVar3 * in_ecx[8];
  param_3[1] = ((fVar1 * fVar4 + fVar7) + fVar2 * fVar10) + fVar3 * fVar13;
  param_3[2] = ((fVar1 * fVar5 + fVar8) + fVar2 * fVar11) + fVar3 * fVar14;
  param_3[3] = ((fVar1 * fVar6 + fVar9) + fVar2 * fVar12) + fVar3 * fVar15;
  return (uint)param_2;
}

/* ref: FUN_00dbd290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd290(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdbd290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = in_ecx[5];
  fVar5 = in_ecx[6];
  fVar6 = in_ecx[7];
  fVar7 = in_ecx[1];
  fVar8 = in_ecx[2];
  fVar9 = in_ecx[3];
  fVar10 = in_ecx[9];
  fVar11 = in_ecx[10];
  fVar12 = in_ecx[0xb];
  *param_3 = (fVar2 * in_ecx[4] + fVar1 * *in_ecx) + fVar3 * in_ecx[8];
  param_3[1] = (fVar2 * fVar4 + fVar1 * fVar7) + fVar3 * fVar10;
  param_3[2] = (fVar2 * fVar5 + fVar1 * fVar8) + fVar3 * fVar11;
  param_3[3] = (fVar2 * fVar6 + fVar1 * fVar9) + fVar3 * fVar12;
  return (uint)param_2;
}

/* ref: FUN_00dbd3c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd3c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x1c)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0x2c)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0x3c)));
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xc)));
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00dbd400 */
GEN_LIB GEN_FRAME uint F_00dbd400(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dbd410 */
GEN_LIB GEN_FRAME uint F_00dbd410(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dbd480 */
GEN_LIB GEN_FRAME uint F_00dbd480(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbd480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return (uint)((param_1 - 1 & param_1) == 0);
}

/* ref: FUN_00dbd4a0 */
GEN_LIB GEN_FRAME uint F_00dbd4a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dbd4b0 */
GEN_LIB GEN_FRAME uint F_00dbd4b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dbd4e0 */
GEN_LIB GEN_FRAME uint F_00dbd4e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dbd4f0 */
GEN_LIB GEN_FRAME uint F_00dbd4f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dbd580 */
GEN_LIB GEN_FRAME uint F_00dbd580(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbd580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return (uint)((param_1 - 1 & param_1) == 0);
}

/* ref: FUN_00dbd5a0 */
GEN_LIB GEN_FRAME uint F_00dbd5a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dbd5b0 */
GEN_LIB GEN_FRAME uint F_00dbd5b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dbd5e0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dbd5e0(void)
{
  GEN_ENTER(0xdbd5e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dbd5f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd5f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + param_2 * 8)));
}

/* ref: FUN_00dbd600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd600(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 8)));
}

/* ref: FUN_00dbd610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbd610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *((undefined4 *)GEN_TOP((uVar1 + 4 + param_1 * 8))) = param_2;
  return uVar1;
}

/* ref: FUN_00dbd640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdbd640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  *(undefined4 *)this = param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = param_2 | 0x80000000;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: FUN_00dbd660 */
GEN_LIB GEN_FRAME uint F_00dbd660(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbd660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 * 8;
}

/* ref: FUN_00dbd680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00dbd6b0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dbd6b0(void)
{
  GEN_ENTER(0xdbd6b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dbd6c0 */
GEN_LIB GEN_FRAME ulonglong GEN_THISCALL F_00dbd6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return CONCAT44(*((undefined4 *)GEN_TOP((*(int *)this + 4 + param_1 * 0x10))),
                  *((undefined4 *)GEN_TOP((*(int *)this + param_1 * 0x10))));
}

/* ref: FUN_00dbd6e0 */
GEN_LIB GEN_FRAME ulonglong GEN_THISCALL F_00dbd6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return CONCAT44(*((undefined4 *)GEN_TOP((*(int *)this + 0xc + param_1 * 0x10))),
                  *((undefined4 *)GEN_TOP((*(int *)this + 8 + param_1 * 0x10))));
}

/* ref: FUN_00dbd700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdbd700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  
  iVar1 = *(int *)this;
  *((undefined4 *)GEN_TOP((iVar1 + 8 + param_1 * 0x10))) = param_2;
  *((undefined4 *)GEN_TOP((iVar1 + 0xc + param_1 * 0x10))) = param_3;
  return param_1 * 2;
}

/* ref: FUN_00dbd720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdbd720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00dbd750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdbd750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  *(undefined4 *)this = param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = param_2 | 0x80000000;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: FUN_00dbd770 */
GEN_LIB GEN_FRAME uint F_00dbd770(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbd770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 << 4;
}

/* ref: FUN_00dbd790 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00dbd7c0 */
GEN_LIB GEN_FRAME uint F_00dbd7c0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdbd7c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  return (param_1 >> 4) * -0x61c8864f & param_3;
}

/* ref: FUN_00dbd7e0 */
GEN_LIB GEN_FRAME uint F_00dbd7e0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbd7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_00dbd800 */
GEN_LIB GEN_FRAME uint F_00dbd800(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_1 & param_2) != 0xffffffff) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00dbd820 */
GEN_LIB GEN_FRAME uint F_00dbd820(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdbd820u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  if ((param_1 == param_3) && (param_2 == param_4)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00dbd850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd850(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = (*((uint *)GEN_TOP((in_ecx + 4))) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_00dbd880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd880(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = (*((uint *)GEN_TOP((in_ecx + 4))) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_00dbd8b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdbd8b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00dbdbb0(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f & *((uint *)GEN_TOP(((int)this + 8)));
  iVar2 = *((int *)GEN_TOP((iVar1 + uVar4 * 8)));
  uVar3 = 1;
  do {
    if (iVar2 == -1) {
LAB_00dbd912: ;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + uVar3;
      *((uint *)GEN_TOP((iVar1 + uVar4 * 8))) = param_2;
      *((undefined4 *)GEN_TOP((*(int *)this + 4 + uVar4 * 8))) = param_3;
      return uVar3;
    }
    if (*((uint *)GEN_TOP((iVar1 + uVar4 * 8))) == param_2) {
      uVar3 = 0;
      goto LAB_00dbd912;
    }
    uVar4 = uVar4 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
    iVar2 = *((int *)GEN_TOP((iVar1 + uVar4 * 8)));
  } while( true );
}

/* ref: FUN_00dbd930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    uVar3 = (param_1 >> 4) * -0x61c8864f & uVar1;
    uVar2 = *((uint *)GEN_TOP((*(int *)this + uVar3 * 8)));
    while (uVar2 != 0xffffffff) {
      if (uVar2 == param_1) {
        return uVar3;
      }
      uVar3 = uVar3 + 1 & uVar1;
      uVar2 = *((uint *)GEN_TOP((*(int *)this + uVar3 * 8)));
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00dbd970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbd970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    uVar3 = *((uint *)GEN_TOP((iVar2 + uVar4 * 8)));
    while (uVar3 != 0xffffffff) {
      if (uVar3 == param_1) {
        return *((uint *)GEN_TOP((iVar2 + 4 + uVar4 * 8)));
      }
      uVar4 = uVar4 + 1 & uVar1;
      uVar3 = *((uint *)GEN_TOP((iVar2 + uVar4 * 8)));
    }
  }
  return param_2;
}

/* ref: FUN_00dbd9c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbd9c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd930(this GEN_EDX_FWD,param_1);
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    *param_2 = *((undefined4 *)GEN_TOP((*(int *)this + 4 + uVar1 * 8)));
    return 0;
  }
  return 1;
}

/* ref: FUN_00dbd9f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbd9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbd9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  *((undefined4 *)GEN_TOP((*(int *)this + param_1 * 8))) = 0xffffffff;
  iVar1 = *(int *)this;
  uVar5 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar3 = uVar5 + param_1 & uVar5;
  iVar2 = *((int *)GEN_TOP((iVar1 + uVar3 * 8)));
  while (iVar2 != -1) {
    uVar3 = uVar3 + uVar5 & uVar5;
    iVar2 = *((int *)GEN_TOP((iVar1 + uVar3 * 8)));
  }
  uVar4 = uVar3 + 1 & uVar5;
  uVar6 = param_1 + 1 & uVar5;
  iVar1 = *((int *)GEN_TOP((iVar1 + uVar6 * 8)));
  uVar3 = uVar4;
  uVar7 = param_1;
  while (iVar1 != -1) {
    iVar1 = *(int *)this;
    uVar5 = (*((uint *)GEN_TOP((iVar1 + uVar6 * 8))) >> 4) * -0x61c8864f & uVar5;
    if ((((uVar6 < uVar4) || (uVar5 <= uVar7)) &&
        ((uVar7 <= uVar6 || ((uVar5 <= uVar7 && (uVar6 < uVar5)))))) &&
       ((uVar5 <= uVar7 || (uVar4 <= uVar5)))) {
      *((undefined4 *)GEN_TOP((iVar1 + uVar7 * 8))) = *((undefined4 *)GEN_TOP((iVar1 + uVar6 * 8)));
      *((undefined4 *)GEN_TOP((*(int *)this + 4 + uVar7 * 8))) = *((undefined4 *)GEN_TOP((*(int *)this + 4 + uVar6 * 8)));
      *((undefined4 *)GEN_TOP((*(int *)this + uVar6 * 8))) = 0xffffffff;
      uVar7 = uVar6;
    }
    uVar5 = *((uint *)GEN_TOP(((int)this + 8)));
    uVar3 = *(uint *)this;
    uVar6 = uVar6 + 1 & uVar5;
    iVar1 = *((int *)GEN_TOP((uVar3 + uVar6 * 8)));
  }
  return uVar3;
}

/* ref: FUN_00dbdaa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbdaa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbdaa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  iVar6 = 0;
  if (-1 < (int)uVar1) {
    iVar2 = *(int *)this;
    do {
      uVar3 = *((uint *)GEN_TOP((iVar2 + iVar6 * 8)));
      if (uVar3 != 0xffffffff) {
        uVar5 = (uVar3 >> 4) * -0x61c8864f & uVar1;
        uVar4 = *((uint *)GEN_TOP((iVar2 + uVar5 * 8)));
        while (uVar4 != uVar3) {
          uVar5 = uVar5 + 1 & uVar1;
          uVar4 = *((uint *)GEN_TOP((iVar2 + uVar5 * 8)));
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar1);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00dbdaf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbdaf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbdaf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  uVar1 = 0;
  if (0 < iVar2) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)this + uVar1 * 8))) = 0xffffffff;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < iVar2);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = *((uint *)GEN_TOP(((int)this + 4))) & 0x80000000;
  return uVar1;
}

/* ref: FUN_00dbdb20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbdb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbdb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbdaf0(this GEN_EDX_FWD);
  if ((*((uint *)GEN_TOP(((int)this + 4))) & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,*((int *)GEN_TOP(((int)this + 8))) * 8 + 8)
    ;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00dbdb70 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dbdb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbdb70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 3;
  *(undefined4 *)this = param_1;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2 - 1;
  iVar1 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x80000000;
  if (uVar2 != 0) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)this + iVar1 * 8))) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar2);
  }
  return 0;
}

/* ref: FUN_00dbdbb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbdbb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbdbb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_2;
  if (param_2 < 9) {
    iVar6 = 8;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  iVar2 = *(int *)this;
  iVar5 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD,iVar6 * 8);
  if (uVar3 == 0) {
    return 1;
  }
  *(uint *)this = uVar3;
  iVar4 = 0;
  if (0 < iVar6) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)this + iVar4 * 8))) = 0xffffffff;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar6);
  }
  *((int *)GEN_TOP(((int)this + 8))) = iVar6 - 1;
  iVar6 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (0 < iVar5) {
    do {
      iVar4 = *((int *)GEN_TOP((iVar2 + iVar6 * 8)));
      if (iVar4 != -1) {
        F_00dbd8b0(this GEN_EDX_ARG,param_1,iVar4,*((undefined4 *)GEN_TOP((iVar2 + 4 + iVar6 * 8))));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  if ((uVar1 & 0x80000000) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,iVar2,iVar5 * 8);
  }
  return 0;
}

/* ref: FUN_00dbdca0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dbdca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbdca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint * puVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    puVar2 = ((uint *)GEN_TOP((iVar1 * 0x10 + *(int *)this)));
    do {
      if ((*puVar2 & puVar2[1]) != 0xffffffff) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00dbdcd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbdcd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xdbdcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00dbe080(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f;
  do {
    uVar4 = uVar4 & *((uint *)GEN_TOP(((int)this + 8)));
    uVar3 = *((uint *)GEN_TOP((iVar1 + uVar4 * 0x10)));
    uVar2 = *((uint *)GEN_TOP((iVar1 + 4 + uVar4 * 0x10)));
    if ((uVar3 & uVar2) == 0xffffffff) {
      uVar3 = 1;
LAB_00dbdd3a: ;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + uVar3;
      *((uint *)GEN_TOP((iVar1 + uVar4 * 0x10))) = param_2;
      *((uint *)GEN_TOP((iVar1 + 4 + uVar4 * 0x10))) = param_3;
      iVar1 = *(int *)this;
      *((undefined4 *)GEN_TOP((iVar1 + 8 + uVar4 * 0x10))) = param_4;
      *((undefined4 *)GEN_TOP((iVar1 + 0xc + uVar4 * 0x10))) = param_5;
      return uVar3;
    }
    if ((uVar3 == param_2) && (uVar2 == param_3)) {
      uVar3 = 0;
      goto LAB_00dbdd3a;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

/* ref: FUN_00dbdd70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbdd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbdd70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    uVar4 = (param_1 >> 4) * -0x61c8864f;
    while( true ) {
      uVar4 = uVar4 & uVar1;
      uVar2 = *((uint *)GEN_TOP((*(int *)this + uVar4 * 0x10)));
      uVar3 = *((uint *)GEN_TOP((*(int *)this + 4 + uVar4 * 0x10)));
      if ((uVar2 & uVar3) == 0xffffffff) break;
      if ((uVar2 == param_1) && (uVar3 == param_2)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00dbddc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbddc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdbddc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (0 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
    iVar1 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f;
    while( true ) {
      uVar4 = uVar4 & *((uint *)GEN_TOP(((int)this + 8)));
      uVar2 = *((uint *)GEN_TOP((iVar1 + uVar4 * 0x10)));
      uVar3 = *((uint *)GEN_TOP((iVar1 + 4 + uVar4 * 0x10)));
      if ((uVar2 & uVar3) == 0xffffffff) break;
      if ((uVar2 == param_1) && (uVar3 == param_2)) {
        return *((uint *)GEN_TOP((iVar1 + 8 + uVar4 * 0x10)));
      }
      uVar4 = uVar4 + 1;
    }
  }
  return param_3;
}

/* ref: FUN_00dbde20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbde20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdbde20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00dbdd70(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar2 <= *((int *)GEN_TOP(((int)this + 8)))) {
    iVar1 = *(int *)this;
    *param_3 = *((undefined4 *)GEN_TOP((iVar1 + 8 + uVar2 * 0x10)));
    param_3[1] = *((undefined4 *)GEN_TOP((iVar1 + 0xc + uVar2 * 0x10)));
    return 0;
  }
  return 1;
}

/* ref: FUN_00dbde60 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dbde60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbde60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)this;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  *((undefined4 *)GEN_TOP((iVar1 + param_1 * 0x10))) = 0xffffffff;
  *((undefined4 *)GEN_TOP((iVar1 + 4 + param_1 * 0x10))) = 0xffffffff;
  uVar4 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar3 = param_1;
  do {
    uVar3 = uVar4 + uVar3 & uVar4;
  } while ((*((uint *)GEN_TOP((*(int *)this + uVar3 * 0x10))) & *((uint *)GEN_TOP((*(int *)this + 4 + uVar3 * 0x10)))) !=
           0xffffffff);
  uVar3 = uVar3 + 1 & uVar4;
  uVar4 = param_1 + 1 & uVar4;
  while( true ) {
    iVar1 = *(int *)this;
    uVar2 = *((uint *)GEN_TOP((iVar1 + 4 + uVar4 * 0x10)));
    if ((*((uint *)GEN_TOP((iVar1 + uVar4 * 0x10))) & uVar2) == 0xffffffff) break;
    uVar5 = (*((uint *)GEN_TOP((iVar1 + uVar4 * 0x10))) >> 4) * -0x61c8864f & *((uint *)GEN_TOP(((int)this + 8)));
    if ((((uVar4 < uVar3) || (uVar5 <= param_1)) &&
        ((param_1 <= uVar4 || ((uVar5 <= param_1 && (uVar4 < uVar5)))))) &&
       ((uVar5 <= param_1 || (uVar3 <= uVar5)))) {
      *((undefined4 *)GEN_TOP((iVar1 + param_1 * 0x10))) = *((undefined4 *)GEN_TOP((iVar1 + uVar4 * 0x10)));
      *((uint *)GEN_TOP((iVar1 + 4 + param_1 * 0x10))) = uVar2;
      iVar1 = *(int *)this;
      *((undefined4 *)GEN_TOP((iVar1 + 8 + param_1 * 0x10))) = *((undefined4 *)GEN_TOP((iVar1 + 8 + uVar4 * 0x10)));
      *((undefined4 *)GEN_TOP((iVar1 + 0xc + param_1 * 0x10))) = *((undefined4 *)GEN_TOP((iVar1 + 0xc + uVar4 * 0x10)));
      iVar1 = *(int *)this;
      *((undefined4 *)GEN_TOP((iVar1 + uVar4 * 0x10))) = 0xffffffff;
      *((undefined4 *)GEN_TOP((iVar1 + 4 + uVar4 * 0x10))) = 0xffffffff;
      param_1 = uVar4;
    }
    uVar4 = uVar4 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
  }
  return 0;
}

/* ref: FUN_00dbdf40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbdf40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbdf40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int local_c;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (-1 < (int)uVar1) {
    puVar2 = *(uint * PTR32 *)this;
    local_c = uVar1 + 1;
    puVar5 = puVar2;
    do {
      uVar3 = *puVar5;
      if ((uVar3 & puVar5[1]) != 0xffffffff) {
        uVar4 = (uVar3 >> 4) * -0x61c8864f;
        while ((uVar4 = uVar4 & uVar1, puVar2[uVar4 * 4] != uVar3 ||
               (puVar2[uVar4 * 4 + 1] != puVar5[1]))) {
          uVar4 = uVar4 + 1;
        }
      }
      puVar5 = puVar5 + 4;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00dbdfc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbdfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbdfc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint in_EAX = 0;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  if (0 < iVar2) {
    in_EAX = 0;
    do {
      iVar1 = *(int *)this;
      *((undefined4 *)GEN_TOP((in_EAX + iVar1))) = 0xffffffff;
      *((undefined4 *)GEN_TOP((in_EAX + 4 + iVar1))) = 0xffffffff;
      in_EAX = in_EAX + 0x10;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = *((uint *)GEN_TOP(((int)this + 4))) & 0x80000000;
  return in_EAX;
}

/* ref: FUN_00dbdff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbdff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbdff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbdfc0(this GEN_EDX_FWD);
  if ((*((uint *)GEN_TOP(((int)this + 4))) & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,(*((int *)GEN_TOP(((int)this + 8))) + 1) * 0x10);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00dbe040 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dbe040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbe040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 >> 4;
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x80000000;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar3 - 1;
  if (uVar3 != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)this;
      *((undefined4 *)GEN_TOP((iVar2 + iVar1))) = 0xffffffff;
      *((undefined4 *)GEN_TOP((iVar2 + 4 + iVar1))) = 0xffffffff;
      iVar2 = iVar2 + 0x10;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00dbe080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbe080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint * puVar9;
  
  iVar8 = param_2;
  if (param_2 < 9) {
    iVar8 = 8;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  puVar2 = *(uint * PTR32 *)this;
  iVar7 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD,iVar8 << 4);
  if (uVar4 != 0) {
    *(uint *)this = uVar4;
    if (0 < iVar8) {
      iVar5 = 0;
      iVar6 = iVar8;
      do {
        iVar3 = *(int *)this;
        *((undefined4 *)GEN_TOP((iVar5 + iVar3))) = 0xffffffff;
        *((undefined4 *)GEN_TOP((iVar5 + 4 + iVar3))) = 0xffffffff;
        iVar5 = iVar5 + 0x10;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((int *)GEN_TOP(((int)this + 8))) = iVar8 - 1;
    puVar9 = puVar2;
    param_2 = iVar7;
    if (0 < iVar7) {
      do {
        if ((*puVar9 & puVar9[1]) != 0xffffffff) {
          F_00dbdcd0(this GEN_EDX_ARG,param_1,*puVar9,puVar9[1],puVar9[2],puVar9[3]);
        }
        iVar8 = param_2 - 1;
        puVar9 = puVar9 + 4;
        param_2 = iVar8;
      } while (iVar8 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,puVar2,iVar7 * 0x10);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00dbe160 */
GEN_LIB GEN_FRAME uint F_00dbe160(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbe160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00dbe180 */
GEN_LIB GEN_FRAME unsigned int F_00dbe180(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbe180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00dbe1b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbe1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd930(this GEN_EDX_FWD,param_2);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)));
  return param_1;
}

/* ref: FUN_00dbe1d0 */
GEN_LIB GEN_FRAME uint F_00dbe1d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbe1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00dbe1f0 */
GEN_LIB GEN_FRAME unsigned int F_00dbe1f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbe1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00dbe220 */
GEN_LIB GEN_FRAME uint F_00dbe220(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbe220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00dbe240 */
GEN_LIB GEN_FRAME unsigned int F_00dbe240(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbe240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00dbe270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdbe270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00dbdd70(this GEN_EDX_FWD,param_2,param_3);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)));
  return param_1;
}

/* ref: FUN_00dbe2a0 */
GEN_LIB GEN_FRAME uint F_00dbe2a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbe2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00dbe2c0 */
GEN_LIB GEN_FRAME unsigned int F_00dbe2c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbe2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00dbe300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdbe300u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00dbdcd0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00dbe330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbe330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00dbdb70(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00dbe350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(uint * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdbe350u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a4;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    uVar1 = F_00dbdbb0(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
    *param_4 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_4 = 0;
  }
  uVar1 = F_00dbd8b0(this GEN_EDX_ARG,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00dbe3b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdbe3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00dbdbb0(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar2 = (param_2 >> 4) * -0x61c8864f & *((uint *)GEN_TOP(((int)this + 8)));
  if (*((uint *)GEN_TOP((iVar1 + uVar2 * 8))) != param_2) {
    while (*((int *)GEN_TOP((iVar1 + uVar2 * 8))) != -1) {
      uVar2 = uVar2 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
      if (*((uint *)GEN_TOP((iVar1 + uVar2 * 8))) == param_2) {
        return uVar2;
      }
    }
    *((uint *)GEN_TOP((iVar1 + uVar2 * 8))) = param_2;
    *((undefined4 *)GEN_TOP((*(int *)this + 4 + uVar2 * 8))) = param_3;
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  }
  return uVar2;
}

/* ref: FUN_00dbe420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbe420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbd930(this GEN_EDX_FWD,param_1);
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    F_00dbd9f0(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00dbe450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbe450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00dbdbb0(this GEN_EDX_FWD,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00dbe480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbe480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00dbe040(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00dbe4a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(uint * param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xdbe4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(uint * param_6 = (uint *)(uintptr_t)gen_a6;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    uVar1 = F_00dbe080(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
    *param_6 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_6 = 0;
  }
  uVar1 = F_00dbdcd0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00dbe510 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dbe510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xdbe510u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00dbe080(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & *((uint *)GEN_TOP(((int)this + 8)));
    uVar2 = *((uint *)GEN_TOP((iVar1 + uVar4 * 0x10)));
    uVar3 = *((uint *)GEN_TOP((iVar1 + 4 + uVar4 * 0x10)));
    if ((uVar2 == param_2) && (uVar3 == param_3)) break;
    if ((uVar2 & uVar3) == 0xffffffff) {
      *((uint *)GEN_TOP((iVar1 + uVar4 * 0x10))) = param_2;
      *((uint *)GEN_TOP((iVar1 + 4 + uVar4 * 0x10))) = param_3;
      iVar1 = *(int *)this;
      *((undefined4 *)GEN_TOP((iVar1 + 8 + uVar4 * 0x10))) = param_4;
      *((undefined4 *)GEN_TOP((iVar1 + 0xc + uVar4 * 0x10))) = param_5;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
      return 0;
    }
    uVar4 = uVar4 + 1;
  }
  return 0;
}

/* ref: FUN_00dbe5a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbe5a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbdd70(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    F_00dbde60(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00dbe5e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbe5e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00dbe080(this GEN_EDX_FWD,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00dbe610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbe610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00dbe330(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00dbe630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdbe630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00dbe350(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00dbe650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbe650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbe3b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dbe670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbe670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00dbe480(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00dbe690 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xdbe690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = F_00dbe4a0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00dbe6c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dbe6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdbe6c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00dbe510(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_00dbe6f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbe6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbe5e0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00dbe710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbe710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  if (param_1 != 0) {
    F_00dbe5e0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00dbe750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe750(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbe750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00dbe7a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbe7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x18);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0x18;
}

/* ref: FUN_00dbe7e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbe7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(*((undefined4 *)GEN_TOP(((int)this + 0xc))),this,0x18);
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x18)));
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  uVar2 = F_00da0f10(*param_1,*((undefined4 *)GEN_TOP(((int)this + 0xc))));
  *puVar1 = uVar2;
  puVar1[4] = param_1[4];
  puVar1[1] = param_1[1];
  uVar2 = param_1[2];
  puVar1[2] = uVar2;
  puVar1[3] = param_1[3];
  return uVar2;
}

/* ref: FUN_00dbe850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbe850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  uVar1 = F_00dbe7e0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00dbe890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbe890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdbe890u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = param_3;
  (*(undefined4 *)(gen_frame + 0x4)) = param_2;
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  (*(undefined4 *)(gen_frame + 0xc)) = param_4;
  uVar1 = F_00dbe7e0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00dbe8d0 */
GEN_LIB GEN_FRAME uint F_00dbe8d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbe8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1111c, 4, 4);
  uint uVar1;
  DWORD DVar2;
  
  (*(undefined4 *)(gen_frame + 0x11114)) = 0xdbe8dd;
  (*(CHAR * PTR32 *)(gen_frame + 0x1108c)) = ((CHAR *)(gen_frame + 0x11098));
  (*(uint *)(gen_frame + 0x11094)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x11090)) = 1;
  ((CHAR *)(gen_frame + 0x11098))[0] = '\0';
  F_00da4df0(&(*(undefined4 *)(gen_frame + 0x11000)) GEN_EDX_ARG,param_1);
  if ((*(int *)(gen_frame + 0x11004)) != 1 && -1 < (*(int *)(gen_frame + 0x11004)) - 1) {
    F_00da45a0(&(*(undefined4 *)(gen_frame + 0x11000)) GEN_EDX_ARG,0x5c,0x2f,1);
    uVar1 = F_00da44d0(&(*(undefined4 *)(gen_frame + 0x11000)) GEN_EDX_ARG,&REFG(undefined, 0x1080808));
    if (uVar1 == 0) {
      F_00da4d70(&(*(undefined4 *)(gen_frame + 0x11000)) GEN_EDX_ARG,&REFG(undefined, 0x1080808));
    }
    F_00db2660((*(undefined4 *)(gen_frame + 0x11000)),&(*(CHAR * PTR32 *)(gen_frame + 0x1108c)));
  }
  (*(int *)(gen_frame + 0x11004)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x11008))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)(gen_frame + 0x11000)),(*(uint *)(gen_frame + 0x11008)) & 0x3fffffff);
  }
  DVar2 = gen_imp_GetFullPathNameA((*(CHAR * PTR32 *)(gen_frame + 0x1108c)),0x1000,((CHAR *)(gen_frame + 0x10000)),((LPSTR *)GEN_TOP(0x0)));
  if (DVar2 != 0) {
    F_00da46f0(param_2 GEN_EDX_ARG,((CHAR *)(gen_frame + 0x10000)));
    F_00da4ac0(param_2 GEN_EDX_ARG,1);
    uVar1 = *param_2;
    (*(undefined4 *)(gen_frame + 0x11090)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x11094))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516a4),(*(CHAR * PTR32 *)(gen_frame + 0x1108c)),(*(uint *)(gen_frame + 0x11094)) & 0x3fffffff);
    }
    return uVar1;
  }
  F_00da4850(param_2 GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x11090)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x11094))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(CHAR * PTR32 *)(gen_frame + 0x1108c)),(*(uint *)(gen_frame + 0x11094)) & 0x3fffffff)
    ;
  }
  return 0;
}

/* ref: FUN_00dbea40 */
GEN_LIB GEN_FRAME uint F_00dbea40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbea40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x278, 8, 4);
  uint uVar1;
  DWORD DVar2;
  HANDLE hFindFile;
  BOOL BVar3;
  
  (*(CHAR * PTR32 *)(gen_frame + 0x1cc)) = ((CHAR *)(gen_frame + 0x1d8));
  (*(uint *)(gen_frame + 0x1d4)) = 0x80000080;
  (*(int *)(gen_frame + 0x1d0)) = 1;
  ((CHAR *)(gen_frame + 0x1d8))[0] = '\0';
  F_00da4df0(&(*(undefined4 *)(gen_frame + 0x140)) GEN_EDX_ARG,param_1);
  if ((*(int *)(gen_frame + 0x144)) != 1 && -1 < (*(int *)(gen_frame + 0x144)) - 1) {
    F_00da45a0(&(*(undefined4 *)(gen_frame + 0x140)) GEN_EDX_ARG,0x5c,0x2f,1);
    uVar1 = F_00da44d0(&(*(undefined4 *)(gen_frame + 0x140)) GEN_EDX_ARG,&REFG(undefined, 0x1080808));
    if (uVar1 == 0) {
      F_00da4d70(&(*(undefined4 *)(gen_frame + 0x140)) GEN_EDX_ARG,&REFG(undefined, 0x1080808));
    }
    F_00db2660((*(undefined4 *)(gen_frame + 0x140)),&(*(CHAR * PTR32 *)(gen_frame + 0x1cc)));
  }
  (*(int *)(gen_frame + 0x144)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x148))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)(gen_frame + 0x140)),(*(uint *)(gen_frame + 0x148)) & 0x3fffffff);
  }
  DVar2 = gen_imp_GetFileAttributesA((*(CHAR * PTR32 *)(gen_frame + 0x1cc)));
  if ((DVar2 != 0xffffffff) && ((DVar2 >> 4 & 1) != 0)) {
    if ((*(int *)(gen_frame + 0x1d0)) != 1) {
      F_00da4d70(&(*(CHAR * PTR32 *)(gen_frame + 0x1cc)) GEN_EDX_ARG,&REFG(undefined, 0x111869c));
    }
    hFindFile = gen_imp_FindFirstFileA((*(CHAR * PTR32 *)(gen_frame + 0x1cc)),(undefined *)((byte *)(gen_frame + 0x0)));
    (*(HANDLE *)(gen_frame + 0x270)) = hFindFile;
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        uVar1 = F_00da0d20(((undefined1 *)(gen_frame + 0x2c)),&REFG(undefined, 0x1118a34));
        if ((uVar1 != 0) && (uVar1 = F_00da0d20(((undefined1 *)(gen_frame + 0x2c)),&REFG(undefined, 0x113be34)), uVar1 != 0)) {
          if (((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) >> 4 & 1) == 0) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x258)) = ((undefined1 *)(gen_frame + 0x2c));
            ((byte *)(gen_frame + 0x260))[8] = 1;
            ((byte *)(gen_frame + 0x260))[9] = 0;
            ((byte *)(gen_frame + 0x260))[10] = 0;
            ((byte *)(gen_frame + 0x260))[0xb] = 0;
            (*(undefined4 *)(gen_frame + 0x25c)) = (int)((longlong)
                             CONCAT44(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) - 0x19db1de) -
                                      (uint)((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) < 0xd53e8000),
                                      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) + 0x2ac18000) / 10000000);
            ((byte *)(gen_frame + 0x260))[0] = ((byte *)(gen_frame + 0x0))[0x20];
            ((byte *)(gen_frame + 0x260))[1] = ((byte *)(gen_frame + 0x0))[0x21];
            ((byte *)(gen_frame + 0x260))[2] = ((byte *)(gen_frame + 0x0))[0x22];
            ((byte *)(gen_frame + 0x260))[3] = ((byte *)(gen_frame + 0x0))[0x23];
            ((byte *)(gen_frame + 0x260))[4] = ((byte *)(gen_frame + 0x0))[0x1c];
            ((byte *)(gen_frame + 0x260))[5] = ((byte *)(gen_frame + 0x0))[0x1d];
            ((byte *)(gen_frame + 0x260))[6] = ((byte *)(gen_frame + 0x0))[0x1e];
            ((byte *)(gen_frame + 0x260))[7] = ((byte *)(gen_frame + 0x0))[0x1f];
            F_00dbe7e0(param_2 GEN_EDX_ARG,&(*(undefined1 * PTR32 *)(gen_frame + 0x258)));
            hFindFile = (*(HANDLE *)(gen_frame + 0x270));
          }
          else {
            (*(undefined1 * PTR32 *)(gen_frame + 0x258)) = ((undefined1 *)(gen_frame + 0x2c));
            (*(undefined4 *)(gen_frame + 0x25c)) = 0;
            ((byte *)(gen_frame + 0x260))[0] = 0xff;
            ((byte *)(gen_frame + 0x260))[1] = 0xff;
            ((byte *)(gen_frame + 0x260))[2] = 0xff;
            ((byte *)(gen_frame + 0x260))[3] = 0xff;
            ((byte *)(gen_frame + 0x260))[4] = 0xff;
            ((byte *)(gen_frame + 0x260))[5] = 0xff;
            ((byte *)(gen_frame + 0x260))[6] = 0xff;
            ((byte *)(gen_frame + 0x260))[7] = 0xff;
            ((byte *)(gen_frame + 0x260))[8] = 2;
            ((byte *)(gen_frame + 0x260))[9] = 0;
            ((byte *)(gen_frame + 0x260))[10] = 0;
            ((byte *)(gen_frame + 0x260))[0xb] = 0;
            F_00dbe7e0(param_2 GEN_EDX_ARG,&(*(undefined1 * PTR32 *)(gen_frame + 0x258)));
          }
        }
        BVar3 = gen_imp_FindNextFileA(hFindFile,(undefined *)((byte *)(gen_frame + 0x0)));
      } while (BVar3 != 0);
    }
    gen_imp_FindClose(hFindFile);
    (*(int *)(gen_frame + 0x1d0)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x1d4))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516a4),(*(CHAR * PTR32 *)(gen_frame + 0x1cc)),(*(uint *)(gen_frame + 0x1d4)) & 0x3fffffff);
    }
    return 0;
  }
  (*(int *)(gen_frame + 0x1d0)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x1d4))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(CHAR * PTR32 *)(gen_frame + 0x1cc)),(*(uint *)(gen_frame + 0x1d4)) & 0x3fffffff)
    ;
  }
  return 1;
}

/* ref: FUN_00dbecc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbecc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(char * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbecc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a2;)
  undefined * pFVar1;
  
  pFVar1 = F_00c495d8(param_1,param_2);
  *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = pFVar1;
  return (uint)pFVar1;
}

/* ref: FUN_00dbece0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbece0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbece0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * _File;
  
  _File = *((undefined * PTR32 *)GEN_TOP(((int)this + 8)));
  if ((_File != ((undefined *)GEN_TOP(0x0))) && (*((char *)GEN_TOP(((int)this + 0xc))) != '\0')) {
    _File = ((undefined *)GEN_TOP(F_00c49312(_File)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return (uint)_File;
}

/* ref: hkStdioStreamWriter::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbed10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(gen_size32 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbed10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 param_2 = (gen_size32)gen_a2;)
  gen_size32 sVar1;
  
  if ((*(undefined * PTR32 *)(this + 8) != ((undefined *)GEN_TOP(0x0))) && (0 < (int)param_2)) {
    sVar1 = F_00c4922b(param_1,1,param_2,*(undefined * PTR32 *)(this + 8));
    if ((int)sVar1 < 1) {
      F_00dbece0(this GEN_EDX_ARG);
    }
    return sVar1;
  }
  return 0;
}

/* ref: hkStdioStreamWriter::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbed60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbed60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(undefined * PTR32 *)(this + 8) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00c50ee3(*(undefined * PTR32 *)(this + 8));
  }
  return uVar1;
}

/* ref: hkStdioStreamWriter::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbed70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbed70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((in_ecx + 8))) != 0;
  return param_2;
}

/* ref: hkStdioStreamWriter::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbed90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbed90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkStdioStreamWriter::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbeda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbeda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkStdioStreamWriter::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbedb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(long param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbedb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(long param_1 = (long)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = F_00c4bbff(*(undefined * PTR32 *)(this + 8),param_1,param_2);
  return (uint)(iVar1 != 0);
}

/* ref: hkStdioStreamWriter::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbede0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbede0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c51bcf(*(undefined * PTR32 *)(this + 8));
  return uVar1;
}

/* ref: FUN_00dbedf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbedf0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbedf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  *((undefined2 *)GEN_TOP(((int)in_ecx + 6))) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x113dd04));
  *(undefined1 *)(in_ecx + 3) = 0;
  uVar1 = F_00c50860();
  if (param_2 == 2) {
    in_ecx[2] = uVar1 + 0x40;
    return (uint)in_ecx;
  }
  in_ecx[2] = uVar1 + 0x20;
  return (uint)in_ecx;
}

/* ref: FUN_00dbee30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbee30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbee30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113dd04));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 1;
  if (param_1 != 0) {
    F_00dbecc0(this GEN_EDX_FWD,param_1,&REFG(undefined, 0x11187c8));
  }
  return (uint)this;
}

/* ref: FUN_00dbee70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbee70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbee70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113dd04));
  uVar1 = F_00dbece0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkStdioStreamWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbee90(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbee90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00dbee70(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00dbeed0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dbeed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbeed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  iVar4 = 0;
  if (iVar2 < 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    return;
  }
  uVar3 = *((int *)GEN_TOP(((int)this + 0x10))) - iVar2;
  if (*((int *)GEN_TOP(((int)this + 0x20))) <= (int)uVar3) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0xffffffff;
    return;
  }
  if (0 < iVar2) {
    uVar1 = uVar3 & 0x800001ff;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffe00) + 1;
    }
    if (uVar1 != 0) {
      iVar4 = 0x200 - uVar1;
    }
    F_00da1020(*((int *)GEN_TOP(((int)this + 0xc))) + iVar4,iVar2 + *((int *)GEN_TOP(((int)this + 0xc))),uVar3);
    *((int *)GEN_TOP(((int)this + 0x1c))) = iVar4;
    iVar2 = (((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x1ffU)) >> 9) + (uint)(uVar1 != 0)) * 0x200;
    *((int *)GEN_TOP(((int)this + 0x10))) = iVar2;
    *((int *)GEN_TOP(((int)this + 0x14))) = iVar2;
  }
  return;
}

/* ref: hkBufferedStreamReader::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbef70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbef70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  code * pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = *(int *)(this + 0x10);
  iVar5 = *(int *)(this + 0x14) - iVar2;
  uVar4 = param_2;
  if (iVar5 < (int)param_2) {
    do {
      F_00da1010(param_1,*(int *)(this + 0xc) + iVar2,iVar5);
      pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x30)));
      param_1 = param_1 + iVar5;
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + iVar5;
      uVar4 = uVar4 - iVar5;
      uVar3 = (*pcVar1)(this,0xffffffff);
      if (uVar3 != 0) {
        return param_2 - uVar4;
      }
      iVar2 = *(int *)(this + 0x10);
      iVar5 = *(int *)(this + 0x14) - iVar2;
    } while (iVar5 < (int)uVar4);
  }
  F_00da1010(param_1,*(int *)(this + 0xc) + *(int *)(this + 0x10),uVar4);
  *(uint *)(this + 0x10) = *(int *)(this + 0x10) + uVar4;
  return param_2;
}

/* ref: hkBufferedStreamReader::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 0x14) - *(int *)(this + 0x10);
  uVar3 = param_1;
  if (iVar1 < (int)param_1) {
    do {
      uVar3 = uVar3 - iVar1;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_FWD,0xffffffff);
      if (uVar2 != 0) {
        return param_1 - uVar3;
      }
      iVar1 = *(int *)(this + 0x14) - *(int *)(this + 0x10);
    } while (iVar1 < (int)uVar3);
  }
  *(uint *)(this + 0x10) = *(int *)(this + 0x10) + uVar3;
  return param_1;
}

/* ref: hkBufferedStreamReader::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char * pcVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (*(int *)(this + 0x10) == *(int *)(this + 0x14)) {
    pcVar1 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))
                               (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3)));
    if (*pcVar1 == '\0') {
      *param_1 = 0;
      return (uint)param_1;
    }
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkBufferedStreamReader::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf090(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((in_ecx + 0x18))) != 0;
  return param_2;
}

/* ref: hkBufferedStreamReader::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0x10);
  *(int *)(this + 0x20) = param_1;
  return (uint)(*(int *)(this + 0x18) < param_1);
}

/* ref: hkBufferedStreamReader::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbf0d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbf0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (-1 < *((int *)GEN_TOP((in_ecx + 0x1c)))) {
    *((int *)GEN_TOP((in_ecx + 0x10))) = *((int *)GEN_TOP((in_ecx + 0x1c)));
    return 0;
  }
  return 1;
}

/* ref: hkBufferedStreamReader::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x24))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: hkBufferedStreamReader::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdbf110u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x28))))
                    (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: hkBufferedStreamReader::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbf130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbf130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x2c))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD);
  if (-1 < (int)uVar1) {
    return (*(int *)(this + 0x10) - *(int *)(this + 0x14)) + uVar1;
  }
  return 0xffffffff;
}

/* ref: hkBufferedStreamReader::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char * pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  pcVar1 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3)))
  ;
  if (*pcVar1 == '\0') {
    return 1;
  }
  F_00dbeed0(this GEN_EDX_ARG);
  uVar4 = *(int *)(this + 0x18) - *(int *)(this + 0x14);
  if ((-1 < (int)param_1) && ((int)param_1 <= (int)uVar4)) {
    uVar4 = param_1;
  }
  iVar3 = 0;
  if (0 < (int)uVar4) {
    do {
      if ((uVar4 & 0x1f) != 0) {
        uVar4 = uVar4 - (uVar4 & 0x1f);
      }
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))
                        (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,*(int *)(this + 0x10) + *(int *)(this + 0xc),uVar4);
      *(uint *)(this + 0x14) = *(int *)(this + 0x14) + uVar2;
      iVar3 = iVar3 + uVar2;
      if (uVar2 != uVar4) {
        return (uint)(iVar3 == 0);
      }
    } while (iVar3 < (int)uVar4);
  }
  return 0;
}

/* ref: FUN_00dbf200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d923f0(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_1,0x40);
  *(uint *)this = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_00dbf250 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbf250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbf250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)this;
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = F_00d92430(*((undefined4 *)GEN_TOP(((int)pvVar2 + 0x2c))),uVar1);
  return uVar3;
}

/* ref: FUN_00dbf270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbf270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x113dd30));
  F_00dbf200(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_2);
  F_00d919e0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00dbf2b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbf2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbf2b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x113dd30));
  F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  uVar1 = F_00dbf250(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00dbf2e0 */
GEN_LIB GEN_FRAME uint F_00dbf2e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbf2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkBufferedStreamReader::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf310(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00dbf2b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: hkStdioStreamReader::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf350(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined1 *)GEN_TOP((in_ecx + 0x10)));
  return (uint)param_2;
}

/* ref: hkStdioStreamReader::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkStdioStreamReader::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkStdioStreamReader::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(long param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbf380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(long param_1 = (long)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = F_00c4bbff(*(undefined * PTR32 *)(this + 0xc),param_1,param_2);
  return (uint)(iVar1 != 0);
}

/* ref: hkStdioStreamReader::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbf3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbf3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c51bcf(*(undefined * PTR32 *)(this + 0xc));
  return uVar1;
}

/* ref: FUN_00dbf3c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  undefined * pFVar1;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113dd9c));
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 1;
  pFVar1 = F_00c495d8(param_1,((char *)REFP(0x11187c4)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = pFVar1;
  *((bool *)GEN_TOP(((int)this + 0x10))) = pFVar1 != ((undefined *)GEN_TOP(0x0));
  return (uint)this;
}

/* ref: FUN_00dbf410 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbf410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbf410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113dd9c));
  uVar1 = 0;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00c49312(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkStdioStreamReader::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(gen_size32 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbf440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 param_2 = (gen_size32)gen_a2;)
  gen_size32 sVar1;
  
  sVar1 = F_00c48f5e(param_1,1,param_2,*(undefined * PTR32 *)(this + 0xc));
  if ((int)sVar1 < 1) {
    this[0x10] = (undefined1)0x0;
  }
  return sVar1;
}

/* ref: hkStdioStreamReader::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbf490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_FWD);
  *(uint *)(this + 8) = uVar1;
  return (uint)(uVar1 == 0xffffffff);
}

/* ref: hkStdioStreamReader::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbf4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbf4b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_FWD,*(undefined4 *)(this + 8),0);
  return uVar1;
}

/* ref: FUN_00dbf4c0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00dbf4c0(GEN_P(undefined1 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbf4c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00dbf4d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00dbf4d0(GEN_P(undefined1 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbf4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00dbf4f0 */
GEN_LIB GEN_FRAME uint F_00dbf4f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbf4f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00dbf520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf520(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: hkStdioStreamReader::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf560(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00dbf410(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00dbf5a0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dbf5a0(void)
{
  GEN_ENTER(0xdbf5a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkBsdSocket::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf5b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((in_ecx + 0x20))) != -1;
  return param_2;
}

/* ref: hkBsdSocket::vf4 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00dbf5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbf5d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(SOCKET *)(this + 0x20) != 0xffffffff) {
    gen_imp_closesocket(*(SOCKET *)(this + 0x20));
    *(undefined4 *)(this + 0x20) = 0xffffffff;
  }
  return;
}

/* ref: FUN_00dbf5f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbf5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbf5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  SOCKET SVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  SVar1 = gen_imp_socket(2,1,0);
  *((SOCKET *)GEN_TOP(((int)this + 0x20))) = SVar1;
  return (uint)(SVar1 == 0xffffffff);
}

/* ref: hkBsdSocket::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbf620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  
  if (*(SOCKET *)(this + 0x20) != 0xffffffff) {
    uVar1 = gen_imp_recv(*(SOCKET *)(this + 0x20),param_1,param_2,0);
    if ((0 < (int)uVar1) && (uVar1 != 0xffffffff)) {
      return uVar1;
    }
    iVar2 = gen_imp_WSAGetLastError();
    if (iVar2 != 0x2733) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: hkBsdSocket::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbf670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  
  if (*(SOCKET *)(this + 0x20) != 0xffffffff) {
    uVar1 = gen_imp_send(*(SOCKET *)(this + 0x20),param_1,param_2,0);
    if ((0 < (int)uVar1) && (uVar1 != 0xffffffff)) {
      return uVar1;
    }
    iVar2 = gen_imp_WSAGetLastError();
    if (iVar2 != 0x2733) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: FUN_00dbf6c0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dbf6c0(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  *((bool *)GEN_TOP(in_eax)) = in_ecx - 0x30U < 10;
  return 0;
}

/* ref: hkBsdSocket::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbf6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  ushort uVar1;
  char * extraout_EAX = 0;
  ulong uVar2;
  undefined * phVar3;
  uint uVar4;
  int iVar5;
  
  F_00da1030(((undefined *)(gen_frame + 0x0)),0,0x10);
  (*(ushort *)((char *)((undefined *)(gen_frame + 0x0)))) = 2;
  uVar1 = gen_imp_htons((ushort)(*(undefined4 *)&gen_args[1]));
  (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x0)) + 2) + (0) * 1))))) = (char)uVar1;
  (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x0)) + 2) + (1) * 1))))) = (char)(uVar1 >> 8);
  F_00dbf6c0((int)&(*(undefined4 *)&gen_args[1]) + 3,(int)*(*(char * PTR32 *)&gen_args[0]));
  if (*extraout_EAX == '\0') {
    phVar3 = gen_imp_gethostbyname((*(char * PTR32 *)&gen_args[0]));
    if (phVar3 == ((undefined *)GEN_TOP(0x0))) {
      return 1;
    }
    F_00da1010(((char *)(((char *)((undefined *)(gen_frame + 0x0)) + 2))) + 2,*(*(undefined * PTR32 *)(((char *)(phVar3) + 12))),(int)(*(short *)(((char *)(phVar3) + 10))));
  }
  else {
    uVar2 = gen_imp_inet_addr((*(char * PTR32 *)&gen_args[0]));
    (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x0)) + 2) + (2) * 1))))) = (char)uVar2;
    (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x0)) + 2) + (3) * 1))))) = (char)(uVar2 >> 8);
    (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x0)) + 2) + (4) * 1))))) = (char)(uVar2 >> 0x10);
    (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x0)) + 2) + (5) * 1))))) = (char)(uVar2 >> 0x18);
  }
  if ((*(int *)(this + 0x20) == -1) && (uVar4 = F_00dbf5f0(this GEN_EDX_ARG), uVar4 != 0)) {
    return 1;
  }
  iVar5 = gen_imp_connect(*(SOCKET *)(this + 0x20),((undefined *)(gen_frame + 0x0)),0x10);
  if ((iVar5 < 0) && (iVar5 = gen_imp_WSAGetLastError(), iVar5 != 0x2733)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    return 1;
  }
  return 0;
}

/* ref: hkBsdSocket::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(HWND param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdbf790u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(HWND param_1 = (HWND)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int iVar1;
  
  iVar1 = gen_imp_WSAAsyncSelect(*(SOCKET *)(this + 0x20),param_1,param_2,(param_3 & 0xc) * 4 | param_3 & 3)
  ;
  return (uint)(iVar1 != 0);
}

/* ref: hkBsdSocket::vf10 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00dbf7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbf7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x110, 0, 4);
  SOCKET SVar1;
  int iVar2;
  
  SVar1 = *(SOCKET *)(this + 0x20);
  if (SVar1 != 0xffffffff) {
    (*(long *)((char *)&((*(undefined8 *)(gen_frame + 0x104))))) = 0;
    (*(long *)(((char *)&((*(undefined8 *)(gen_frame + 0x104))) + 4))) = 0;
    (*((SOCKET *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x0)) + 4) + (0) * 4))))) = SVar1;
    (*(uint *)((char *)((undefined *)(gen_frame + 0x0)))) = 1;
    iVar2 = gen_imp_select(SVar1 + 1,((undefined *)(gen_frame + 0x0)),((undefined *)GEN_TOP(0x0)),((undefined *)GEN_TOP(0x0)),&(*(undefined8 *)(gen_frame + 0x104)));
    return 0 < iVar2;
  }
  return 0;
}

/* ref: FUN_00dbf810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf810(GEN_P(ulong param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ulong param_1 = (ulong)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  
  (*(ulong *)(gen_frame + 0x0)) = param_1;
  (*(ulong *)(gen_frame + 0x0)) = (uint)(param_2 == '\0');
  iVar1 = gen_imp_ioctlsocket(*((SOCKET *)GEN_TOP((param_1 + 0x20))),-0x7ffb9982,&(*(ulong *)(gen_frame + 0x0)));
  return (uint)(iVar1 != 0);
}

