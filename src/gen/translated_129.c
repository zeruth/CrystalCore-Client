#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00b54d70 */
uint F_00b54d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b54d80 */
unsigned int F_00b54d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54d80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b54db0 */
unsigned int F_00b54db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54db0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b54de0 */
unsigned int F_00b54de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54de0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b54e10 */
unsigned int F_00b54e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54e10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b54e40 */
unsigned int F_00b54e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54e40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b54e70 */
unsigned int F_00b54e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54e70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b54ea0 */
byte F_00b54ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54ea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  int * piVar3;
  
  if (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) {
    piVar3 = *(int * PTR32 *)(param_1 + 0xc);
    piVar2 = *(int * PTR32 *)(param_2 + 0xc);
    uVar1 = *(int *)(param_1 + 0x10) - (int)piVar3;
    if (uVar1 == *(int *)(param_2 + 0x10) - (int)piVar2) {
      for (; 3 < uVar1; uVar1 = uVar1 - 4) {
        if (*piVar3 != *piVar2) {
          return 0;
        }
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      if ((uVar1 == 0) ||
         (((char)*piVar2 == (char)*piVar3 &&
          ((uVar1 < 2 ||
           ((*(char *)((int)piVar2 + 1) == *(char *)((int)piVar3 + 1) &&
            ((uVar1 < 3 || (*(char *)((int)piVar2 + 2) == *(char *)((int)piVar3 + 2))))))))))) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b54f20 */
byte F_00b54f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54f20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00b54ea0(param_1,param_2);
  return bVar1 == 0;
}

/* ref: FUN_00b54f40 */
unsigned int F_00b54f40(unsigned int gen_a0)
{
  GEN_ENTER(0xb54f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b547b0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x18c) = 0;
  return 0;
}

/* ref: FUN_00b54f60 */
uint F_00b54f60(unsigned int gen_a0)
{
  GEN_ENTER(0xb54f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b54fa0 */
uint F_00b54fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xb54fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b54fe0 */
uint F_00b54fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xb54fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b55020 */
uint F_00b55020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((uint)this & 0xffffff);
  uVar1 = F_00b548a0((undefined *)((int)this + 4),param_1,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    *(int *)((int)this + 0x18c) = *(int *)((int)this + 0x18c) + 1;
    return 1;
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00b55060 */
uint F_00b55060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb55060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b550c0 */
uint F_00b550c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb550c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b55120 */
uint F_00b55120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb55120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b55180 */
unsigned int F_00b55180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55180u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b551b0 */
unsigned int F_00b551b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb551b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b551e0 */
unsigned int F_00b551e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb551e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b55210 */
unsigned int F_00b55210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb55210u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b55240 */
unsigned int F_00b55240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb55240u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b55270 */
unsigned int F_00b55270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb55270u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b552a0 */
unsigned int F_00b552a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb552a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f1224));
  F_00b547b0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x18c) = 0;
  return 0;
}

/* ref: CBalanceSet_USItem_ShaderPackage_Kernel_Graphics_Client::vf0 */
uint F_00b552c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb552c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f1224));
  F_00b547b0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x18c) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b55300 */
uint F_00b55300(unsigned int gen_a0)
{
  GEN_ENTER(0xb55300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b55340 */
uint F_00b55340(unsigned int gen_a0)
{
  GEN_ENTER(0xb55340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b55380 */
uint F_00b55380(unsigned int gen_a0)
{
  GEN_ENTER(0xb55380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b553e0 */
unsigned int F_00b553e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb553e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b55430 */
unsigned int F_00b55430(unsigned int gen_a0)
{
  GEN_ENTER(0xb55430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b55480 */
unsigned int F_00b55480(unsigned int gen_a0)
{
  GEN_ENTER(0xb55480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b554b0 */
unsigned int F_00b554b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb554b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b554e0 */
unsigned int F_00b554e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb554e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b55510 */
unsigned int F_00b55510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55510u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b55540 */
unsigned int F_00b55540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb55540u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b55570 */
unsigned int F_00b55570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb55570u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b555a0 */
unsigned int F_00b555a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb555a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b555d0 */
uint F_00b555d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb555d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f122c));
  iVar1 = *(int *)((int)this + 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_00b55620 */
uint F_00b55620(unsigned int gen_a0)
{
  GEN_ENTER(0xb55620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f1234));
  iVar1 = *(int *)((int)this + 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_00b55670 */
uint F_00b55670(unsigned int gen_a0)
{
  GEN_ENTER(0xb55670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f123c));
  iVar1 = *(int *)((int)this + 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: CVector_PAVVertexShader_Kernel_Graphics_Client_Kernel::vf0 */
uint F_00b556c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb556c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f122c));
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,0xca);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CVector_PAVPixelShader_Kernel_Graphics_Client_Kernel::vf0 */
uint F_00b55720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f1234));
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,0xca);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CVector_PAVShaderNode_Kernel_Graphics_Client_Kernel::vf0 */
uint F_00b55780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f123c));
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,0xca);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b557e0 */
uint F_00b557e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb557e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0xc) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0xc),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b55800 */
uint F_00b55800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xca);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xca);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00b558b0 */
uint F_00b558b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb558b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xca);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xca);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00b55960 */
uint F_00b55960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xca);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xca);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: Client::Graphics::Kernel::ShaderPackage::vf0 */
uint F_00b55a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b53110(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0xc) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0xc),this);
  }
  return (uint)this;
}

/* ref: FUN_00b55a40 */
uint F_00b55a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b55800(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b55800(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b55ab0 */
uint F_00b55ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b558b0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b558b0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b55b20 */
uint F_00b55b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b55960(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b55960(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b55b90 */
uint F_00b55b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = *(int *)((int)this + 4);
  uVar2 = iVar3 - *(int *)((int)(uintptr_t)this) >> 2;
  if (param_1 < uVar2) {
    iVar1 = *(int *)this + param_1 * 4;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *(int *)((int)this + 4) = iVar1;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_00b55a40(this,param_1 - uVar2);
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar3 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 2); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *(uint *)((int)this + 4);
    *(uint *)((int)this + 4) = uVar2 + (param_1 - ((int)(uVar2 - *(int *)this) >> 2)) * 4;
  }
  return uVar2;
}

/* ref: FUN_00b55c20 */
uint F_00b55c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = *(int *)((int)this + 4);
  uVar2 = iVar3 - *(int *)((int)(uintptr_t)this) >> 2;
  if (param_1 < uVar2) {
    iVar1 = *(int *)this + param_1 * 4;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *(int *)((int)this + 4) = iVar1;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_00b55ab0(this,param_1 - uVar2);
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar3 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 2); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *(uint *)((int)this + 4);
    *(uint *)((int)this + 4) = uVar2 + (param_1 - ((int)(uVar2 - *(int *)this) >> 2)) * 4;
  }
  return uVar2;
}

/* ref: FUN_00b55cb0 */
uint F_00b55cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = *(int *)((int)this + 4);
  uVar2 = iVar3 - *(int *)((int)(uintptr_t)this) >> 2;
  if (param_1 < uVar2) {
    iVar1 = *(int *)this + param_1 * 4;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *(int *)((int)this + 4) = iVar1;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_00b55b20(this,param_1 - uVar2);
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar3 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 2); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *(uint *)((int)this + 4);
    *(uint *)((int)this + 4) = uVar2 + (param_1 - ((int)(uVar2 - *(int *)this) >> 2)) * 4;
  }
  return uVar2;
}

/* ref: FUN_00b55d70 */
uint F_00b55d70(unsigned int gen_a0)
{
  GEN_ENTER(0xb55d70u, gen_a0, 0u, 0u, 0u);
  int * in_edx = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  iVar2 = *in_edx;
  uVar1 = 0;
  if (iVar2 == 0x3b) {
    return 0;
  }
  do {
    in_edx = in_edx + 1;
    if (iVar2 - 0x30U < 10) {
      uVar1 = iVar2 + -0x30 + uVar1 * 0x10;
    }
    else if (iVar2 - 0x61U < 6) {
      uVar1 = iVar2 + -0x57 + uVar1 * 0x10;
    }
    else {
      if (5 < iVar2 - 0x41U) {
        return 0;
      }
      uVar1 = iVar2 + -0x37 + uVar1 * 0x10;
    }
    iVar2 = *in_edx;
  } while (iVar2 != 0x3b);
  return uVar1;
}

/* ref: FUN_00b55df0 */
byte F_00b55df0(unsigned int gen_a0)
{
  GEN_ENTER(0xb55df0u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char cVar1;
  char * pcVar2;
  
  cVar1 = *param_1;
  pcVar2 = param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return 1;
    }
    if (cVar1 != ' ') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 1;
  }
  return 0;
}

/* ref: FUN_00b55e50 */
uint F_00b55e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55e50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a1;
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  *in_ecx = *in_esi;
  while( true ) {
    cVar1 = *(char *)*in_esi;
    if ((((9 < (byte)(cVar1 - 0x30U)) && (0x19 < (byte)(cVar1 + 0xbfU))) &&
        (0x19 < (byte)(cVar1 + 0x9fU))) &&
       (((cVar1 != '-' && (cVar1 != '.')) && ((cVar1 != ':' && (cVar1 != '_')))))) break;
    *in_esi = (char *)*in_esi + 1;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

/* ref: FUN_00b55ec0 */
unsigned int F_00b55ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xb55ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10f12d4));
  if ((*(int *)((int)this + 8) == 0) &&
     (puVar1 = *(undefined4 * PTR32 *)((int)this + 4), puVar1 != (undefined4 *)0x0)) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_00b55ef0 */
uint F_00b55ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55ef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_00b55f10 */
byte F_00b55f10(unsigned int gen_a0)
{
  GEN_ENTER(0xb55f10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (('\b' < (char)param_1) && (((char)param_1 < '\v' || ((char)param_1 == '\r')))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b55f30 */
uint F_00b55f30(unsigned int gen_a0)
{
  GEN_ENTER(0xb55f30u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * pcVar1;
  char cVar2;
  char * pcVar3;
  char * pcVar4;
  int iVar5;
  char * pcVar6;
  
  iVar5 = 0;
  cVar2 = *param_1;
  pcVar4 = param_1;
  while (cVar2 != '\0') {
    if ((cVar2 < '\t') || (('\n' < cVar2 && (cVar2 != '\r')))) {
      iVar5 = iVar5 + 1;
    }
    pcVar6 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar6;
  }
  pcVar3 = (char *)F_004297d0(iVar5 + 1,0x2bd);
  cVar2 = *param_1;
  pcVar4 = param_1;
  pcVar6 = pcVar3;
  while (cVar2 != '\0') {
    if ((cVar2 < '\t') || (('\n' < cVar2 && (cVar2 != '\r')))) {
      *pcVar6 = cVar2;
      pcVar6 = pcVar6 + 1;
    }
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar1;
  }
  *pcVar6 = '\0';
  return (uint)pcVar3;
}

/* ref: FUN_00b55f90 */
uint F_00b55f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb55f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;
  undefined1 * param_5 = (undefined1 *)(uintptr_t)gen_a4;
  char cVar1;
  undefined1 uVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  pcVar3 = (char *)F_0042a7e0(param_1,0);
  uVar6 = (uint)(*pcVar3 == '#');
  uVar4 = F_0042a970(param_1);
  if ((int)uVar6 < (int)uVar4) {
    do {
      iVar5 = 0;
      pcVar3 = (char *)F_0042a7e0(param_1,uVar6);
      cVar1 = *pcVar3;
      if ((byte)(cVar1 - 0x30U) < 10) {
        iVar5 = cVar1 + -0x30;
      }
      else if ((byte)(cVar1 + 0x9fU) < 6) {
        iVar5 = cVar1 + -0x57;
      }
      else if ((byte)(cVar1 + 0xbfU) < 6) {
        iVar5 = cVar1 + -0x37;
      }
      local_c = local_c + 1;
      local_8 = local_8 * 0x10 + iVar5;
      uVar6 = uVar6 + 1;
      uVar4 = F_0042a970(param_1);
    } while ((int)uVar6 < (int)uVar4);
    if (6 < local_c) {
      uVar2 = (undefined1)((uint)local_8 >> 0x18);
      goto LAB_00b5602e;
    }
  }
  uVar2 = 0xff;
LAB_00b5602e: ;
  *param_2 = uVar2;
  *param_3 = (char)((uint)local_8 >> 0x10);
  *param_4 = (char)((uint)local_8 >> 8);
  *param_5 = (char)local_8;
  return (uint)param_5;
}

/* ref: FUN_00b56060 */
uint F_00b56060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb56060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)this;
  uVar3 = 0;
  if (0 < (int)(*(int *)((int)this + 4) - iVar2 & 0xfffffffcU)) {
    do {
      iVar2 = *(int *)(iVar2 + uVar3 * 4);
      *param_2 = iVar2;
      bVar1 = F_0042b660(param_1,iVar2 + 0x14);
      if (bVar1 != 0) {
        return uVar3;
      }
      iVar2 = *(int *)this;
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)((int)this + 4) - iVar2 >> 2);
  }
  return 0xffffffff;
}

/* ref: FUN_00b560c0 */
uint F_00b560c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb560c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00b56060((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]),&(*(uint *)&gen_args[1]));
  return ((int)uVar1 < 0) - 1 & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00b56110 */
uint F_00b56110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb56110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  byte bVar2;
  undefined * this_00;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)this;
  if (*(undefined4 * PTR32 *)((int)this + 4) != puVar3) {
    do {
      piVar1 = (int *)*puVar3;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,param_1)));
      if ((this_00 != &REFG(undefined, 0x14c4c10)) && (bVar2 = F_0042b660(this_00,param_2), bVar2 != 0)) {
        return (uint)piVar1;
      }
      puVar3 = puVar3 + 1;
    } while (*(undefined4 * PTR32 *)((int)this + 4) != puVar3);
  }
  return 0;
}

/* ref: FUN_00b56170 */
uint F_00b56170(unsigned int gen_a0)
{
  GEN_ENTER(0xb56170u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  uint uVar2;
  undefined4 * PTR32 * PTR32 * pppuVar3;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)),param_1,REFG(undefined4, 0x108cc50));
  (*(uint *)(gen_frame + 0x70)) = 3;
  (*(int *)(gen_frame + 0x6c)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (undefined4 * PTR32 * PTR32 *)0x0;
  F_0042eca0(((undefined1 *)(gen_frame + 0x8)),((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c)));
  iVar1 = (*(int *)(gen_frame + 0x6c)) * 4;
  uVar2 = F_004297d0(iVar1 + 4,0x2bd);
  pppuVar3 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
  if ((*(uint *)(gen_frame + 0x70)) < 4) {
    pppuVar3 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c));
  }
  F_00c46aa0(uVar2,pppuVar3,iVar1);
  *(undefined4 *)(iVar1 + uVar2) = 0;
  if (3 < (*(uint *)(gen_frame + 0x70))) {
    F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0],(*(uint *)(gen_frame + 0x70)) * 4 + 4,0x3c);
  }
  (*(uint *)(gen_frame + 0x70)) = 3;
  (*(int *)(gen_frame + 0x6c)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (undefined4 * PTR32 *)0x0;
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar2;
}

/* ref: FUN_00b56230 */
uint F_00b56230(unsigned int gen_a0)
{
  GEN_ENTER(0xb56230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 4) - *(int *)this)));
  iVar3 = 0;
  if (0 < (int)((uint)piVar2 & 0xfffffffc)) {
    do {
      piVar2 = (int *)(*(int *)this + iVar3 * 4);
      if (*(int *)(*(int *)this + iVar3 * 4) != 0) {
        puVar1 = (undefined4 *)*piVar2;
        piVar2 = (int *)0x0;
        if (puVar1 != (undefined4 *)0x0) {
          piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar1)(puVar1,1)));
        }
        *(undefined4 *)(*(int *)this + iVar3 * 4) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2);
  }
  iVar3 = *(int *)this;
  if (iVar3 != *(int *)((int)this + 4)) {
    piVar2 = (int *)F_00c46e20(iVar3,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar3;
  }
  return (uint)piVar2;
}

/* ref: FUN_00b562a0 */
byte F_00b562a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb562a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  piVar2 = *(int * PTR32 *)this;
  if (piVar1 != piVar2) {
    do {
      if (*piVar2 == param_1) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
    if (piVar1 != piVar2) {
      F_00c46e20(piVar2,piVar2 + 1,((int)piVar1 - (int)(piVar2 + 1) >> 2) * 4);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b562f0 */
uint F_00b562f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb562f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 4) - *(int *)this)));
  iVar3 = 0;
  if (0 < (int)((uint)piVar2 & 0xfffffffc)) {
    do {
      piVar2 = (int *)(*(int *)this + iVar3 * 4);
      if (*(int *)(*(int *)this + iVar3 * 4) != 0) {
        puVar1 = (undefined4 *)*piVar2;
        piVar2 = (int *)0x0;
        if (puVar1 != (undefined4 *)0x0) {
          piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar1)(puVar1,1)));
        }
        *(undefined4 *)(*(int *)this + iVar3 * 4) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2);
  }
  iVar3 = *(int *)this;
  if (iVar3 != *(int *)((int)this + 4)) {
    piVar2 = (int *)F_00c46e20(iVar3,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar3;
  }
  return (uint)piVar2;
}

/* ref: FUN_00b56360 */
uint F_00b56360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb56360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  
  puVar3 = *(uint * PTR32 *)this;
  uVar2 = 0;
  if (puVar3 != *(uint * PTR32 *)((int)this + 4)) {
    while( true ) {
      uVar2 = *puVar3;
      bVar1 = F_0042b660(param_1,uVar2 + 0x14);
      if (bVar1 != 0) break;
      puVar3 = puVar3 + 1;
      if (puVar3 == *(uint * PTR32 *)((int)this + 4)) {
        return uVar2;
      }
    }
    F_00c46e20(puVar3,puVar3 + 1,(*(int *)((int)this + 4) - (int)(puVar3 + 1) >> 2) * 4);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  }
  return uVar2;
}

/* ref: FUN_00b563c0 */
uint F_00b563c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb563c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f12e0));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042cbc0((undefined *)((int)this + 0x14),param_2);
  F_0042b630((int)this + 0x68);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  return (uint)this;
}

/* ref: FUN_00b56410 */
uint F_00b56410(unsigned int gen_a0)
{
  GEN_ENTER(0xb56410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f12e0));
  F_00b56230((undefined *)((int)this + 0xbc));
  iVar1 = *(int *)((int)this + 0xbc);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xc4) - iVar1 >> 2) * 4,0x134);
  }
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  F_0042c880((undefined *)((int)this + 0x68));
  uVar2 = F_0042c880((undefined *)((int)this + 0x14));
  return (uint)uVar2;
}

/* ref: FUN_00b56480 */
uint F_00b56480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb56480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xc0);
  piVar2 = *(int * PTR32 *)((int)this + 0xbc);
  if (piVar1 != piVar2) {
    do {
      if (*piVar2 == param_1) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
    if (piVar1 != piVar2) {
      piVar2 = (int *)F_00c46e20(piVar2,piVar2 + 1,((int)piVar1 - (int)(piVar2 + 1) >> 2) * 4);
      *(int *)((int)this + 0xc0) = *(int *)((int)this + 0xc0) + -4;
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00b564e0 */
uint F_00b564e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb564e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"#document",REFG(undefined4, 0x108cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f12e0));
  *(undefined4 *)((int)this + 4) = 9;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042cbc0((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x4)));
  F_0042b630((int)this + 0x68);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f130c));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_00b56570 */
uint F_00b56570(unsigned int gen_a0)
{
  GEN_ENTER(0xb56570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)),&REFG(undefined, 0x10f125e),REFG(undefined4, 0x108cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f12e0));
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042cbc0((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x8)));
  F_0042b630((int)this + 0x68);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f1338));
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  return (uint)this;
}

/* ref: FUN_00b56600 */
uint F_00b56600(unsigned int gen_a0)
{
  GEN_ENTER(0xb56600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f1338));
  F_00b562f0((undefined *)((int)this + 0xcc));
  iVar1 = *(int *)((int)this + 0xcc);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xd4) - iVar1 >> 2) * 4,0x134);
  }
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  uVar2 = F_00b56410(this);
  return uVar2;
}

/* ref: FUN_00b56670 */
uint F_00b56670(unsigned int gen_a0)
{
  GEN_ENTER(0xb56670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)),&REFG(undefined, 0x10f125f),REFG(undefined4, 0x108cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f12e0));
  *(undefined4 *)((int)this + 4) = 2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042cbc0((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x8)));
  F_0042b630((int)this + 0x68);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f1364));
  return (uint)this;
}

/* ref: FUN_00b566f0 */
uint F_00b566f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb566f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"#text",REFG(undefined4, 0x108cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f12e0));
  *(undefined4 *)((int)this + 4) = 3;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042cbc0((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x4)));
  F_0042b630((int)this + 0x68);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f1390));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_00b56780 */
uint F_00b56780(unsigned int gen_a0)
{
  GEN_ENTER(0xb56780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"#cdata-section",REFG(undefined4, 0x108cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f12e0));
  *(undefined4 *)((int)this + 4) = 4;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042cbc0((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x4)));
  F_0042b630((int)this + 0x68);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f13bc));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_00b56810 */
uint F_00b56810(unsigned int gen_a0)
{
  GEN_ENTER(0xb56810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"#comment",REFG(undefined4, 0x108cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f12e0));
  *(undefined4 *)((int)this + 4) = 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042cbc0((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x4)));
  F_0042b630((int)this + 0x68);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f13e8));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_00b568a0 */
uint F_00b568a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb568a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10f12d4));
  if (param_1 != 0) {
    *(int *)((int)this + 8) = param_1;
    *(int *)((int)this + 4) = param_1;
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  this_00 = (undefined *)F_00406b90(0xcc,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b564e0(this_00);
    *(undefined4 *)((int)this + 8) = 0;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 0xc) = uVar1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return (uint)this;
}

/* ref: Component::Xml::DOMParser::vf1 */
uint F_00b56910(void)
{
  GEN_ENTER(0xb56910u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0xdc,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_00b56570(this);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00b56930 */
uint F_00b56930(unsigned int gen_a0)
{
  GEN_ENTER(0xb56930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint * puVar1;
  byte bVar2;
  uint * puVar3;
  uint uVar4;
  uint * puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 * this_00;
  uint * puVar9;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  iVar7 = 0;
  (*(int *)(gen_frame + 0x0)) = 0x100;
  puVar3 = (uint *)F_004297d0(0x400,0x2bd);
  uVar4 = *(uint *)this;
  (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar3;
  do {
    if (uVar4 == 0) {
      uVar4 = F_00429810((*(uint * PTR32 *)(gen_frame + 0xc)),iVar7 * 4 + 4,0x2bd);
      *(undefined4 *)(uVar4 + iVar7 * 4) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
      return uVar4;
    }
    iVar6 = 0;
    (*(uint *)(gen_frame + 0x14)) = *(uint *)this;
    puVar9 = (uint *)((int)this + 4);
    if ((*(uint *)(gen_frame + 0x14)) == 0x26) {
      iVar8 = 0;
      puVar5 = puVar9;
      uVar4 = *puVar9;
      while (uVar4 != 0x3b) {
        if (uVar4 == 0) goto LAB_00b56abd;
        puVar1 = puVar5 + 1;
        puVar5 = puVar5 + 1;
        iVar8 = iVar8 + 1;
        uVar4 = *puVar1;
      }
      if (*puVar9 == 0x23) {
        uVar4 = *(uint *)((int)this + 8);
        puVar9 = (uint *)((int)this + 8);
        if (uVar4 == 0x78) {
          (*(uint *)(gen_frame + 0x14)) = F_00b55d70((uint *)((int)this + 0xc));
        }
        else {
          (*(uint *)(gen_frame + 0x14)) = 0;
          while (uVar4 != 0x3b) {
            puVar9 = puVar9 + 1;
            if (9 < uVar4 - 0x30) {
              (*(uint *)(gen_frame + 0x14)) = 0;
              break;
            }
            (*(uint *)(gen_frame + 0x14)) = (uVar4 - 0x30) + (*(uint *)(gen_frame + 0x14)) * 10;
            uVar4 = *puVar9;
          }
        }
      }
      else {
        (*(uint *)(gen_frame + 0x80)) = 3;
        (*(undefined4 *)(gen_frame + 0x7c)) = 0;
        ((undefined4 *)(gen_frame + 0x6c))[0] = 0;
        F_00b589f0(((undefined4 *)(gen_frame + 0x6c)),puVar9,iVar8);
        F_0042e230(((undefined1 *)(gen_frame + 0x18)),((undefined4 *)(gen_frame + 0x6c)));
        if (3 < (*(uint *)(gen_frame + 0x80))) {
          F_00429760(((undefined4 *)(gen_frame + 0x6c))[0],(*(uint *)(gen_frame + 0x80)) * 4 + 4,0x3c);
        }
        this_00 = &REFG(undefined4, 0x14c4c68);
        uVar4 = 0;
        do {
          if (*(char *)*this_00 == '\0') {
            F_0042c880(((undefined1 *)(gen_frame + 0x18)));
            goto LAB_00b56abd;
          }
          bVar2 = F_0042b660(this_00,((undefined1 *)(gen_frame + 0x18)));
          if (bVar2 != 0) {
            (*(uint *)(gen_frame + 0x14)) = (&REFG(undefined4, 0x14c4cbc))[iVar6 * 0x16];
            break;
          }
          uVar4 = uVar4 + 0x58;
          iVar6 = iVar6 + 1;
          this_00 = this_00 + 0x16;
        } while (uVar4 < 0x210);
        F_0042c880(((undefined1 *)(gen_frame + 0x18)));
      }
      puVar9 = ((uint *)GEN_TOP(((int)this + (iVar8 + 2) * 4)));
    }
LAB_00b56abd: ;
    *puVar3 = (*(uint *)(gen_frame + 0x14));
    (*(uint * PTR32 *)(gen_frame + 0x4)) = puVar3 + 1;
    iVar7 = iVar7 + 1;
    if ((*(int *)(gen_frame + 0x0)) - iVar7 < 0x80) {
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 0x100;
      (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)F_00429810((*(uint * PTR32 *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x0)) * 4,0x2bd);
      (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0xc)) + iVar7;
    }
    uVar4 = *puVar9;
    this = puVar9;
    puVar3 = (*(uint * PTR32 *)(gen_frame + 0x4));
  } while( true );
}

/* ref: FUN_00b56b60 */
uint F_00b56b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb56b60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  iVar2 = (*(int *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar3 = F_00b56060((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]) + 0x14,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  if ((int)uVar3 < 0) {
    uVar3 = F_00b590e0((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[1]));
    return uVar3;
  }
  piVar4 = ((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + uVar3 * 4)));
  if (*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + uVar3 * 4))) != 0) {
    puVar1 = (undefined4 *)*piVar4;
    piVar4 = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar1)(puVar1,1)));
    }
    *((undefined4 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + uVar3 * 4))) = 0;
  }
  *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + uVar3 * 4))) = iVar2;
  return (uint)piVar4;
}

/* ref: FUN_00b56bd0 */
uint F_00b56bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb56bd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  *(undefined * PTR32 *)((*(int *)&gen_args[1]) + 8) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((int)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))) & 0xfffffffcU) < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) + -4)));
  }
  uVar2 = F_00b590e0(((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))),&(*(int *)&gen_args[1]));
  if (iVar3 != 0) {
    *(int *)(iVar1 + 0x10) = iVar3;
    *(int *)(iVar3 + 0xc) = iVar1;
  }
  return uVar2;
}

/* ref: FUN_00b56c20 */
uint F_00b56c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb56c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar5 = (*(int * PTR32 *)&gen_args[2])[0x30] - (*(int * PTR32 *)&gen_args[2])[0x2f];
  if ((uVar5 & 0xfffffffc) != 0) {
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x20))))((*(int * PTR32 *)&gen_args[2]));
    F_00b58970(((byte *)(gen_frame + 0x0)),uVar5);
    uVar5 = (int)((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))) >> 2;
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x10)) = uVar5;
    iVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    if (0 < (int)uVar5) {
      do {
        iVar7 = (*(int *)(gen_frame + 0x18));
        piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + (*(int *)(gen_frame + 0x18)) * 4)));
        bVar4 = F_0042b660(piVar1 + 5,(*(undefined4 *)&gen_args[3]));
        if (bVar4 != 0) {
          puVar2 = ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1]));
          (*(int * PTR32 *)&gen_args[2]) = piVar1;
          if ((&(*(int * PTR32 *)&gen_args[2]) < puVar2) && (puVar3 = ((undefined4 *)GEN_TOP(*(*(uint * PTR32 *)&gen_args[1]))), puVar3 <= &(*(int * PTR32 *)&gen_args[2]))) {
            if (puVar2 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[2]))) {
              F_00b58f20((*(uint * PTR32 *)&gen_args[1]),1);
            }
            iVar7 = (*(int *)(gen_frame + 0x18));
            if (((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1])) != (undefined4 *)0x0) {
              *((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1])) =
                   *((undefined4 *)GEN_TOP((*(*(uint * PTR32 *)&gen_args[1]) + ((int)&(*(int * PTR32 *)&gen_args[2]) - (int)((int)(uintptr_t)puVar3) >> 2) * 4)));
            }
          }
          else {
            if (puVar2 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[2]))) {
              F_00b58f20((*(uint * PTR32 *)&gen_args[1]),1);
            }
            if (((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1])) != (undefined4 *)0x0) {
              *((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1])) = piVar1;
            }
          }
          (*(uint * PTR32 *)&gen_args[1])[1] = (*(uint * PTR32 *)&gen_args[1])[1] + 4;
        }
        uVar5 = F_00b56c20((*(undefined * PTR32 *)(gen_frame + 0x14)),(*(uint * PTR32 *)&gen_args[1]),piVar1,(*(undefined4 *)&gen_args[3]));
        (*(int *)(gen_frame + 0x18)) = iVar7 + 1;
        iVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
      } while (iVar7 + 1 < (int)(*(uint *)(gen_frame + 0x10)));
    }
    if (iVar6 != 0) {
      uVar8 = F_00429760(iVar6,((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) - iVar6 >> 2) * 4,0x134);
      uVar5 = (uint)uVar8;
    }
  }
  return uVar5;
}

/* ref: FUN_00b56d30 */
uint F_00b56d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb56d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  F_00b56c20(this,param_1,this,param_2);
  return (uint)param_1;
}

/* ref: FUN_00b56d60 */
uint F_00b56d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb56d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_2;
  if (iVar1 != param_2[1]) {
    F_00c46e20(iVar1,param_2[1],0);
    param_2[1] = iVar1;
  }
  uVar2 = F_00b56c20(this,param_2,this,param_1);
  return uVar2;
}

/* ref: FUN_00b56db0 */
uint F_00b56db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb56db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char cVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  undefined * this_00;
  uint uVar6;
  undefined * this_01;
  int * piVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (0 < param_2) {
    uVar3 = F_004297d0(param_2 + 1,0x2bd);
    F_00c46aa0(uVar3,param_1,param_2);
    *(undefined1 *)(param_2 + uVar3) = 0;
    pcVar4 = (char *)F_00b55f30(uVar3);
    pcVar5 = pcVar4;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (pcVar5 != pcVar4 + 1) {
      cVar2 = *pcVar4;
      pcVar5 = pcVar4;
      while (cVar2 != '\0') {
        if (cVar2 != ' ') {
          this_00 = (undefined *)F_00b56170(pcVar4);
          uVar6 = F_00b56930(this_00);
          this_01 = (undefined *)F_00406b90(0xcc,0,0);
          if (this_01 == (undefined *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = (int *)F_00b566f0(this_01);
          }
          F_0042e290(((undefined1 *)(gen_frame + 0x4)),uVar6);
          ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,((undefined1 *)(gen_frame + 0x4)));
          F_0042c880(((undefined1 *)(gen_frame + 0x4)));
          F_00b56bd0(*(undefined * PTR32 *)((int)this + 0xc),piVar7);
          F_004297f0(uVar6,0x2bd);
          F_004297f0(this_00,0x2bd);
          break;
        }
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        cVar2 = *pcVar1;
      }
    }
    F_004297f0(pcVar4,0x2bd);
    F_004297f0(uVar3,0x2bd);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_00b56ee0 */
uint F_00b56ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb56ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  
  piVar3 = *(int * PTR32 *)this;
  for (piVar5 = piVar3; (piVar5 != *(int * PTR32 *)((int)this + 4) && (*piVar5 != param_2));
      piVar5 = piVar5 + 1) {
  }
  if (*(int * PTR32 *)((int)this + 4) == *(int * PTR32 *)((int)this + 8)) {
    F_00b58f20(this,1);
  }
  if (*(uint * PTR32 *)((int)this + 4) != (uint *)0x0) {
    **(uint * PTR32 *)((int)this + 4) = param_1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  iVar4 = *(int *)((int)this + 4);
  iVar1 = iVar4 + -4;
  iVar2 = *(int *)this + ((int)piVar5 - (int)((int)(uintptr_t)piVar3) >> 2) * 4;
  if ((iVar2 != iVar1) && (iVar1 != iVar4)) {
    F_00b58560(iVar2,iVar1,iVar4,0,0);
  }
  return param_1;
}

/* ref: FUN_00b56f60 */
uint F_00b56f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb56f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b56ee0((undefined *)((int)this + 0xbc),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00b56f70 */
uint F_00b56f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb56f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined * pvVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int * piVar10;
  char * pcVar11;
  char * pcVar12;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(char * PTR32 *)(gen_frame + 0xc)) = param_1;
  pcVar11 = param_1;
  if (param_2 == 0) {
LAB_00b5748c: ;
    F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
    return 1;
  }
  for (; (cVar1 = *pcVar11, cVar1 == ' ' || (('\b' < cVar1 && ((cVar1 < '\v' || (cVar1 == '\r'))))))
      ; pcVar11 = pcVar11 + 1) {
  }
  cVar1 = *pcVar11;
  (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar11;
  if (cVar1 != '?') {
    if (cVar1 != '!') {
      if (cVar1 == '/') {
        (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar11 + 1;
        uVar7 = F_00b55e50(&(*(char * PTR32 *)(gen_frame + 0x4)),&(*(char * PTR32 *)(gen_frame + 0xc)));
        iVar4 = *(int *)((int)this + 0xc);
        uVar7 = F_0042cc20(((undefined1 *)(gen_frame + 0x64)),(*(char * PTR32 *)(gen_frame + 0x4)),uVar7);
        bVar3 = F_0042b660((undefined *)(iVar4 + 0x14),uVar7);
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        if (bVar3 != 0) {
          *(undefined4 *)((int)this + 0xc) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8)));
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
          return 0;
        }
      }
      else {
        uVar7 = F_00b55e50(&(*(char * PTR32 *)(gen_frame + 0x4)),&(*(char * PTR32 *)(gen_frame + 0xc)));
        if (uVar7 != 0) {
          piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
          iVar4 = *piVar6;
          uVar7 = F_0042cc20(((undefined1 *)(gen_frame + 0x64)),(*(char * PTR32 *)(gen_frame + 0x4)),uVar7);
          ((code *)*(gen_code32 *)(iVar4 + 8))(piVar6,uVar7);
          F_0042c880(((undefined1 *)(gen_frame + 0x64)));
          F_00b56bd0(*(undefined * PTR32 *)((int)this + 0xc),piVar6);
          pcVar11 = (*(char * PTR32 *)(gen_frame + 0xc));
LAB_00b572b0: ;
          for (; (cVar1 = *pcVar11, cVar1 == ' ' ||
                 (('\b' < cVar1 && ((cVar1 < '\v' || (cVar1 == '\r')))))); pcVar11 = pcVar11 + 1) {
          }
          cVar1 = *pcVar11;
          (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar11;
          if (cVar1 == '/') {
LAB_00b57477: ;
            F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
            return 0;
          }
          if (cVar1 == '>') {
            *(int * PTR32 *)((int)this + 0xc) = piVar6;
            goto LAB_00b57477;
          }
          for (; (cVar1 = *pcVar11, cVar1 == ' ' ||
                 (('\b' < cVar1 && ((cVar1 < '\v' || (cVar1 == '\r')))))); pcVar11 = pcVar11 + 1) {
          }
          (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar11;
          uVar7 = F_00b55e50(&(*(char * PTR32 *)(gen_frame + 0x4)),&(*(char * PTR32 *)(gen_frame + 0xc)));
          if (uVar7 != 0) {
            pvVar5 = (undefined *)F_00406b90(0xcc,0,0);
            if (pvVar5 == (undefined *)0x0) {
              (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
            }
            else {
              piVar10 = (int *)F_00b56670(pvVar5);
              (*(int * PTR32 *)(gen_frame + 0x8)) = piVar10;
            }
            piVar10 = (*(int * PTR32 *)(gen_frame + 0x8));
            iVar4 = *(*(int * PTR32 *)(gen_frame + 0x8));
            uVar7 = F_0042cc20(((undefined1 *)(gen_frame + 0x64)),(*(char * PTR32 *)(gen_frame + 0x4)),uVar7);
            ((code *)*(gen_code32 *)(iVar4 + 8))(piVar10,uVar7);
            F_0042c880(((undefined1 *)(gen_frame + 0x64)));
            if (*(*(char * PTR32 *)(gen_frame + 0xc)) != '=') goto LAB_00b5748c;
            pcVar11 = (*(char * PTR32 *)(gen_frame + 0xc)) + 1;
            (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar11;
            for (; (cVar1 = *pcVar11, cVar1 == ' ' ||
                   (('\b' < cVar1 && ((cVar1 < '\v' || (cVar1 == '\r')))))); pcVar11 = pcVar11 + 1)
            {
            }
            cVar1 = *pcVar11;
            iVar4 = 0;
            (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar11;
            if ((cVar1 == '\"') || (cVar1 == '\'')) {
              pcVar12 = pcVar11 + 1;
              (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar12;
              cVar2 = *pcVar12;
              pcVar11 = pcVar12;
              while (cVar1 != cVar2) {
                pcVar11 = pcVar11 + 1;
                iVar4 = iVar4 + 1;
                cVar2 = *pcVar11;
              }
              pcVar11 = pcVar11 + 1;
              (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar11;
              if (iVar4 < 0) goto LAB_00b5748c;
              if (0 < iVar4) {
                F_0042cc20(((undefined1 *)(gen_frame + 0x64)),pcVar12,iVar4);
                uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x64)));
                pvVar5 = (undefined *)F_00b56170(uVar7);
                uVar7 = F_00b56930(pvVar5);
                F_0042e290(((undefined1 *)(gen_frame + 0x10)),uVar7);
                ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x10)));
                F_0042c880(((undefined1 *)(gen_frame + 0x10)));
                F_004297f0(uVar7,0x2bd);
                F_004297f0(pvVar5,0x2bd);
                F_0042c880(((undefined1 *)(gen_frame + 0x64)));
                piVar10 = (*(int * PTR32 *)(gen_frame + 0x8));
              }
            }
            F_00b56b60(piVar6 + 0x33,piVar10);
            goto LAB_00b572b0;
          }
        }
      }
      goto LAB_00b5748c;
    }
    if (((4 < param_2) && (iVar4 = F_00c4b813("--",pcVar11 + 1,2), iVar4 == 0)) &&
       (iVar4 = F_00c4b813("--",pcVar11 + param_2 + -2,2), iVar4 == 0)) {
      pvVar5 = (undefined *)F_00406b90(0xcc,0,0);
      if (pvVar5 == (undefined *)0x0) {
        (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      }
      else {
        piVar6 = (int *)F_00b56810(pvVar5);
        (*(int * PTR32 *)(gen_frame + 0x8)) = piVar6;
      }
      uVar7 = F_004297d0(param_2 + -4,0x2bd);
      F_00c46aa0(uVar7,pcVar11 + 3,param_2 + -5);
      *(undefined1 *)(param_2 + -5 + uVar7) = 0;
      uVar8 = F_00b55f30(uVar7);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)*(*(int * PTR32 *)(gen_frame + 0x8));
      uVar9 = F_0042cc20(((undefined1 *)(gen_frame + 0x64)),uVar8,REFG(undefined4, 0x108cc50));
      piVar6 = (*(int * PTR32 *)(gen_frame + 0x8));
      ((code *)*(gen_code32 *)((*(char * PTR32 *)(gen_frame + 0x4)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x8)),uVar9);
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      F_004297f0(uVar8,0x2bd);
      F_004297f0(uVar7,0x2bd);
      F_00b56bd0(*(undefined * PTR32 *)((int)this + 0xc),piVar6);
      pcVar11 = (*(char * PTR32 *)(gen_frame + 0xc));
    }
    if (((9 < param_2) && (iVar4 = F_00c4b813("[CDATA[",pcVar11 + 1,7), iVar4 == 0)) &&
       (iVar4 = F_00c4b813("]]",pcVar11 + param_2 + -2,2), iVar4 == 0)) {
      pvVar5 = (undefined *)F_00406b90(0xcc,0,0);
      if (pvVar5 == (undefined *)0x0) {
        (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      }
      else {
        piVar6 = (int *)F_00b56780(pvVar5);
        (*(int * PTR32 *)(gen_frame + 0x8)) = piVar6;
      }
      uVar7 = F_004297d0(param_2 + -9,0x2bd);
      F_00c46aa0(uVar7,pcVar11 + 8,param_2 + -10);
      *(undefined1 *)(param_2 + -10 + uVar7) = 0;
      uVar8 = F_00b55f30(uVar7);
      iVar4 = *(*(int * PTR32 *)(gen_frame + 0x8));
      uVar9 = F_0042cc20(((undefined1 *)(gen_frame + 0x64)),uVar8,REFG(undefined4, 0x108cc50));
      piVar6 = (*(int * PTR32 *)(gen_frame + 0x8));
      ((code *)*(gen_code32 *)(iVar4 + 0xc))((*(int * PTR32 *)(gen_frame + 0x8)),uVar9);
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      F_004297f0(uVar8,0x2bd);
      F_004297f0(uVar7,0x2bd);
      F_00b56bd0(*(undefined * PTR32 *)((int)this + 0xc),piVar6);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: FUN_00b574b0 */
uint F_00b574b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb574b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  char cVar1;
  bool bVar2;
  char * pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char * _Str1;
  int local_10;
  undefined4 local_c;
  
  iVar7 = 0;
  local_10 = 0;
  local_c = 0;
  bVar2 = false;
  if (param_2 < 0) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    param_2 = (int)pcVar3 - (int)(param_1 + 1);
  }
  if ((2 < param_2) && (iVar4 = F_00c4b813(param_1,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x10f12b4)))),3), iVar4 == 0)) {
    iVar7 = 3;
    local_10 = 3;
  }
  if (iVar7 < param_2) {
    pcVar3 = param_1 + iVar7;
    iVar4 = param_2 - iVar7;
    do {
      cVar1 = *pcVar3;
      switch((unsigned int)(uintptr_t)(local_c)) {
      case 0: ;
        if (cVar1 == '<') {
          uVar5 = F_00b56db0(this,param_1 + local_10,iVar7 - local_10);
          if (uVar5 != 0) {
            return uVar5;
          }
          local_10 = iVar7 + 1;
          local_c = 1;
          bVar2 = true;
        }
        break;
      case 1: ;
        if ((!bVar2) || (bVar2 = false, cVar1 != '!')) {
          if (cVar1 == '>') {
            uVar5 = F_00b56f70(this,param_1 + local_10,iVar7 - local_10);
            if (uVar5 != 0) {
              return uVar5;
            }
            local_10 = iVar7 + 1;
            local_c = 0;
          }
          break;
        }
        iVar6 = F_00c4b813("!--",param_1 + local_10,3);
        if (iVar6 == 0) {
          iVar7 = iVar7 + 3;
          iVar4 = iVar4 + -3;
          local_c = 2;
          pcVar3 = pcVar3 + 3;
        }
        else {
          iVar6 = F_00c4b813("![CDATA[",param_1 + local_10,8);
          if (iVar6 != 0) break;
          iVar7 = iVar7 + 8;
          iVar4 = iVar4 + -8;
          pcVar3 = pcVar3 + 8;
          local_c = 3;
        }
        goto LAB_00b5762a;
      case 2: ;
        if (2 < iVar4) {
          _Str1 = "-->";
LAB_00b57609: ;
          iVar6 = F_00c4b813(_Str1,pcVar3,3);
          if (iVar6 == 0) {
            iVar7 = iVar7 + 2;
            iVar4 = iVar4 + -2;
            pcVar3 = pcVar3 + 2;
            local_c = 1;
            goto LAB_00b5762a;
          }
        }
        break;
      case 3: ;
        if (2 < iVar4) {
          _Str1 = "]]>";
          goto LAB_00b57609;
        }
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + -1;
      pcVar3 = pcVar3 + 1;
LAB_00b5762a: ;
    } while (iVar7 < param_2);
  }
  return 0;
}

/* ref: FUN_00b57650 */
uint F_00b57650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb57650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * PTR32 * param_2 = (undefined4 * PTR32 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  uint uVar1;
  undefined4 * PTR32 * PTR32 * pppuVar2;
  undefined4 * PTR32 * PTR32 * pppuVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined * this_00;
  undefined4 * PTR32 * PTR32 * pppuVar7;
  undefined4 * PTR32 * ppuVar8;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x14)));
  (*(uint *)(gen_frame + 0xd0)) = 3;
  (*(uint *)(gen_frame + 0xcc)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] = (undefined4 * PTR32 * PTR32 *)0x0;
  F_0042eca0(param_1,((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_2;
  while ((*(uint *)(gen_frame + 0x10)) < (*(uint *)(gen_frame + 0xcc))) {
    (*(int *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0xcc)) - (*(uint *)(gen_frame + 0x10));
    if ((*(int *)(gen_frame + 0x8)) == 0) break;
    pppuVar2 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0];
    if ((*(uint *)(gen_frame + 0xd0)) < 4) {
      pppuVar2 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc));
    }
    pppuVar2 = pppuVar2 + (*(uint *)(gen_frame + 0x10));
    while( true ) {
      (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)) = pppuVar2;
      pppuVar3 = pppuVar2;
      iVar6 = (*(int *)(gen_frame + 0x8));
      while( true ) {
        if (iVar6 == 0) goto LAB_00b576f3;
        if (*pppuVar3 == param_2) break;
        pppuVar3 = pppuVar3 + 1;
        iVar6 = iVar6 + -1;
      }
      iVar6 = 1;
      ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
      pppuVar7 = pppuVar3;
      while (*pppuVar7 == (undefined4 * PTR32 *)*ppuVar8) {
        pppuVar7 = pppuVar7 + 1;
        ppuVar8 = ppuVar8 + 1;
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) goto LAB_00b57794;
      }
      if ((-(uint)(*pppuVar7 < *ppuVar8) & 0xfffffffe) == 0xffffffff) break;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + (-1 - ((int)pppuVar3 - (int)((int)(uintptr_t)pppuVar2) >> 2));
      pppuVar2 = pppuVar3 + 1;
    }
LAB_00b57794: ;
    pppuVar2 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0];
    if ((*(uint *)(gen_frame + 0xd0)) < 4) {
      pppuVar2 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc));
    }
    iVar6 = (int)pppuVar3 - (int)((int)(uintptr_t)pppuVar2) >> 2;
    if (iVar6 == -1) break;
    F_0042e230(((undefined1 *)(gen_frame + 0x68)),((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc)));
    uVar5 = F_0042d9b0(((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x68)),(*(uint *)(gen_frame + 0x10)),iVar6 - (*(uint *)(gen_frame + 0x10)));
    uVar4 = *(uint *)((int)this + 4);
    if ((uVar5 < uVar4) && (uVar1 = *(uint *)this, uVar1 <= uVar5)) {
      if (uVar4 == *(uint *)((int)this + 8)) {
        F_00b59150(this,1);
      }
      this_00 = *(undefined * PTR32 *)((int)this + 4);
      if (this_00 != (undefined *)0x0) {
        uVar5 = ((int)(uVar5 - uVar1) / 0x54) * 0x54 + *(int *)this;
LAB_00b5785f: ;
        F_0042cbc0(this_00,uVar5);
      }
    }
    else {
      if (uVar4 == *(uint *)((int)this + 8)) {
        F_00b59150(this,1);
      }
      this_00 = *(undefined * PTR32 *)((int)this + 4);
      if (this_00 != (undefined *)0x0) goto LAB_00b5785f;
    }
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
    F_0042c880(((undefined1 *)(gen_frame + 0x68)));
    (*(uint *)(gen_frame + 0x10)) = iVar6 + 1;
  }
LAB_00b576f3: ;
  F_0042e230(((undefined1 *)(gen_frame + 0x68)),((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc)));
  uVar4 = F_0042d9b0(((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x68)),(*(uint *)(gen_frame + 0x10)),0xffffffff);
  F_00b59290(this,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x68)));
  if (3 < (*(uint *)(gen_frame + 0xd0))) {
    F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0],(*(uint *)(gen_frame + 0xd0)) * 4 + 4,0x3c);
  }
  (*(uint *)(gen_frame + 0xd0)) = 3;
  (*(uint *)(gen_frame + 0xcc)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] = (undefined4 * PTR32 *)0x0;
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)this;
}

/* ref: FUN_00b578a0 */
uint F_00b578a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb578a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b578b0 */
uint F_00b578b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb578b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b578c0 */
uint F_00b578c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb578c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b57910 */
uint F_00b57910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57910u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b579b0 */
uint F_00b579b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb579b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00b579f0 */
uint F_00b579f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb579f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x134);
  return uVar1;
}

/* ref: FUN_00b57a20 */
uint F_00b57a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57a20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x134);
  return (uint)uVar1;
}

/* ref: FUN_00b57a60 */
uint F_00b57a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b57a90 */
uint F_00b57a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57a90u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00b57ab0 */
uint F_00b57ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xb57ab0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b57ac0 */
unsigned int F_00b57ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb57ac0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b57ae0 */
uint F_00b57ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xb57ae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b57af0 */
uint F_00b57af0(unsigned int gen_a0)
{
  GEN_ENTER(0xb57af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b57b10 */
uint F_00b57b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb57b10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b57b50 */
uint F_00b57b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57b50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b57b70 */
uint F_00b57b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00b57bb0 */
uint F_00b57bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb57bb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b57be0 */
uint F_00b57be0(unsigned int gen_a0)
{
  GEN_ENTER(0xb57be0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b57bf0 */
uint F_00b57bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xb57bf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b57c00 */
uint F_00b57c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57c00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 4);
}

/* ref: FUN_00b57c20 */
uint F_00b57c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57c20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 4);
}

/* ref: Component::Xml::DOMParser::vf0 */
uint F_00b57c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10f12d4));
  if ((*(int *)(this + 8) == 0) &&
     (puVar1 = *(undefined4 * PTR32 *)(this + 4), puVar1 != (undefined4 *)0x0)) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 4) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b57c90 */
uint F_00b57c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57c90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *in_ecx - *param_2 >> 2;
}

/* ref: FUN_00b57ce0 */
uint F_00b57ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b57d10 */
uint F_00b57d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (0x30c30c3 - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00b57d60 */
uint F_00b57d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57d60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b57d90 */
uint F_00b57d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb57d90u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint * puVar2;
  uint * puVar3;
  
  puVar2 = param_1;
  puVar3 = param_2;
  iVar1 = param_3;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*puVar2 != *puVar3) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    iVar1 = iVar1 + -1;
  }
  return (-(uint)(*puVar2 < *puVar3) & 0xfffffffe) + 1;
}

/* ref: FUN_00b57dc0 */
uint F_00b57dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb57dc0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  int iVar2;
  
  if (param_2 != 0) {
    piVar1 = param_1;
    iVar2 = param_2;
    do {
      if (*piVar1 == *param_3) {
        return (uint)piVar1;
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00b57de0 */
uint F_00b57de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb57de0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b57e20 */
uint F_00b57e20(unsigned int gen_a0)
{
  GEN_ENTER(0xb57e20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x30c30c4) && (uVar1 = F_004069f0(param_1 * 0x54), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00b57e70 */
uint F_00b57e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57e70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b57e90 */
uint F_00b57e90(unsigned int gen_a0)
{
  GEN_ENTER(0xb57e90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b57ea0 */
uint F_00b57ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b57eb0 */
unsigned int F_00b57eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00b57ed0 */
unsigned int F_00b57ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00b57ef0 */
uint F_00b57ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00b57f10 */
uint F_00b57f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57f10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * -4;
  return (uint)in_ecx;
}

/* ref: FUN_00b57f40 */
uint F_00b57f40(unsigned int gen_a0)
{
  GEN_ENTER(0xb57f40u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00b57f50 */
unsigned int F_00b57f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00b57f70 */
uint F_00b57f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57f70u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *param_1 = *param_1 + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00b57f90 */
uint F_00b57f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb57f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b57fb0 */
uint F_00b57fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57fb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *in_ecx - *param_2 >> 2;
}

/* ref: FUN_00b57fd0 */
uint F_00b57fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b58010 */
uint F_00b58010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58010u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b58020 */
uint F_00b58020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58020u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b58040 */
uint F_00b58040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb58040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * puVar1;
  uint * puVar2;
  uint * puVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  int iVar7;
  uint * puVar8;
  
  if ((param_3 != 0) || (uVar4 = param_2, *(uint *)((int)this + 0x10) < param_2)) {
    if ((param_2 < *(uint *)((int)this + 0x10)) &&
       (uVar4 = *(uint *)((int)this + 0x10) - param_2, param_3 <= uVar4)) {
      iVar7 = uVar4 + (1 - param_3);
      pvVar5 = this;
      if (3 < *(uint *)((int)this + 0x14)) {
        pvVar5 = *(undefined * PTR32 *)this;
      }
      puVar2 = (uint *)((int)pvVar5 + param_2 * 4);
      for (; iVar7 != 0; iVar7 = iVar7 + (-1 - (iVar6 >> 2))) {
        puVar3 = puVar2;
        iVar6 = iVar7;
        while (puVar8 = param_1, uVar4 = param_3, puVar1 = puVar3, *puVar3 != *param_1) {
          puVar3 = puVar3 + 1;
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) goto LAB_00b5809c;
        }
        while( true ) {
          if (uVar4 == 0) goto LAB_00b580bf;
          if (*puVar1 != *puVar8) break;
          puVar8 = puVar8 + 1;
          uVar4 = uVar4 - 1;
          puVar1 = puVar1 + 1;
        }
        if ((-(uint)(*puVar1 < *puVar8) & 0xfffffffe) == 0xffffffff) {
LAB_00b580bf: ;
          if (3 < *(uint *)((int)this + 0x14)) {
            this = *(undefined * PTR32 *)this;
          }
          return (int)puVar3 - (int)((int)(uintptr_t)this) >> 2;
        }
        iVar6 = (int)puVar3 - (int)puVar2;
        puVar2 = puVar3 + 1;
      }
    }
LAB_00b5809c: ;
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

/* ref: FUN_00b58100 */
byte F_00b58100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 4,0,0x134);
    *(uint *)((int)this + 8) = param_1 * 4 + uVar1;
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00b58170 */
uint F_00b58170(unsigned int gen_a0)
{
  GEN_ENTER(0xb58170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x134);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b581b0 */
uint F_00b581b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb581b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x30c30c4) && (uVar1 = F_004069f0(param_1 * 0x54), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00b58200 */
uint F_00b58200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb58200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
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

/* ref: FUN_00b58230 */
unsigned int F_00b58230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00b58250 */
uint F_00b58250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b58270 */
uint F_00b58270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b58290 */
unsigned int F_00b58290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58290u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00b582b0 */
uint F_00b582b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb582b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00b582d0 */
uint F_00b582d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb582d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * -4;
  return (uint)param_1;
}

/* ref: FUN_00b582f0 */
unsigned int F_00b582f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb582f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b58320 */
uint F_00b58320(unsigned int gen_a0)
{
  GEN_ENTER(0xb58320u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00b58330 */
uint F_00b58330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58330u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *param_1 = *param_1 + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00b58350 */
unsigned int F_00b58350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00b58370 */
unsigned int F_00b58370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b583a0 */
uint F_00b583a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb583a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  *param_3 = *param_3 + (param_2 - param_1 >> 2);
  return (uint)param_3;
}

/* ref: FUN_00b583c0 */
uint F_00b583c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb583c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b583e0 */
uint F_00b583e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb583e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00b58040((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),1);
  return uVar1;
}

/* ref: FUN_00b58400 */
uint F_00b58400(unsigned int gen_a0)
{
  GEN_ENTER(0xb58400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x134);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b58440 */
uint F_00b58440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b58450 */
uint F_00b58450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b58460 */
uint F_00b58460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb58460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b584c0 */
unsigned int F_00b584c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb584c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00b584e0 */
unsigned int F_00b584e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb584e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b58510 */
uint F_00b58510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58510u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00b58520 */
unsigned int F_00b58520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58520u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b58550 */
uint F_00b58550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58550u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 - param_1 >> 2;
}

/* ref: FUN_00b58560 */
unsigned int F_00b58560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb58560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  int iVar8;
  undefined4 * puVar9;
  int iVar10;
  
  iVar4 = (int)param_3 - (int)((int)(uintptr_t)param_1) >> 2;
  iVar10 = param_2 - (int)((int)(uintptr_t)param_1) >> 2;
  iVar8 = iVar10;
  iVar3 = iVar4;
  while (iVar2 = iVar8, iVar2 != 0) {
    iVar8 = iVar3 % iVar2;
    iVar3 = iVar2;
  }
  if ((iVar3 < iVar4) && (0 < iVar3)) {
    puVar7 = param_1 + iVar3;
    do {
      puVar6 = puVar7 + iVar10;
      puVar9 = puVar7;
      if (puVar7 + iVar10 == param_3) {
        puVar6 = param_1;
      }
      do {
        puVar5 = puVar6;
        uVar1 = *puVar9;
        *puVar9 = *puVar5;
        *puVar5 = uVar1;
        iVar8 = (int)param_3 - (int)((int)(uintptr_t)puVar5) >> 2;
        if (iVar10 < iVar8) {
          puVar6 = puVar5 + iVar10;
        }
        else {
          puVar6 = param_1 + (iVar10 - iVar8);
        }
        puVar9 = puVar5;
      } while (puVar6 != puVar7);
      iVar3 = iVar3 + -1;
      puVar7 = puVar7 + -1;
    } while (0 < iVar3);
  }
  return 0;
}

/* ref: FUN_00b58610 */
uint F_00b58610(unsigned int gen_a0)
{
  GEN_ENTER(0xb58610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x134);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b58660 */
uint F_00b58660(unsigned int gen_a0)
{
  GEN_ENTER(0xb58660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x134);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b586a0 */
uint F_00b586a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb586a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b586e0 */
unsigned int F_00b586e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb586e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b58710 */
unsigned int F_00b58710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58710u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00b58740 */
unsigned int F_00b58740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x54) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00b58770 */
unsigned int F_00b58770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58770u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b587a0 */
uint F_00b587a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb587a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_0042cbc0(this,iVar1);
    }
    iVar1 = iVar1 + 0x54;
    this = (undefined *)((int)this + 0x54);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00b587e0 */
unsigned int F_00b587e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb587e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00b58560(param_1,param_2,param_3,0,0);
  return 0;
}

/* ref: FUN_00b58800 */
unsigned int F_00b58800(unsigned int gen_a0)
{
  GEN_ENTER(0xb58800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: Component::Xml::DOM_Node::vf1 */
byte F_00b58830(void)
{
  GEN_ENTER(0xb58830u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::Xml::DOM_Node::vf2 */
uint F_00b58840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0(this + 0x14,param_1);
  return uVar1;
}

/* ref: Component::Xml::DOM_Node::vf3 */
uint F_00b58850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0(this + 0x68,param_1);
  return uVar1;
}

/* ref: Component::Xml::DOM_Node::vf4 */
uint F_00b58860(void)
{
  GEN_ENTER(0xb58860u, 0u, 0u, 0u, 0u);
  return 0x14c4c00;
}

/* ref: Component::Xml::DOM_Node::vf5 */
uint F_00b58870(void)
{
  GEN_ENTER(0xb58870u, 0u, 0u, 0u, 0u);
  return 0x14c4c00;
}

/* ref: Component::Xml::DOM_Node::vf7 */
uint F_00b58880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0x14c4c10;
}

/* ref: Component::Xml::DOM_Node::vf6 */
uint F_00b58890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0x14c4c10;
}

/* ref: Component::Xml::DOM_Node::vf8 */
uint F_00b588a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb588a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xbc;
}

/* ref: Component::Xml::DOM_Node::vf9 */
uint F_00b588b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb588b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xbc;
}

/* ref: Component::Xml::DOM_Element::vf4 */
uint F_00b588c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb588c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xcc;
}

/* ref: Component::Xml::DOM_Element::vf5 */
uint F_00b588d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb588d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xcc;
}

/* ref: Component::Xml::DOM_Element::vf6 */
uint F_00b588e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb588e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    return param_1 + 0x68;
  }
  return 0x14c4c10;
}

/* ref: Component::Xml::DOM_Element::vf1 */
byte F_00b58910(unsigned int gen_a0)
{
  GEN_ENTER(0xb58910u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (*(int *)(in_ecx + 0xd0) - *(int *)(in_ecx + 0xcc) & 0xfffffffcU) != 0;
}

/* ref: Component::Xml::DOM_Element::vf7 */
uint F_00b58930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58930u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00b56060((*(undefined * PTR32 *)&gen_args[0]) + 0xcc,(*(uint *)&gen_args[1]),&(*(uint *)&gen_args[1]));
  uVar1 = ((int)uVar1 < 0) - 1 & (*(uint *)&gen_args[1]);
  if (uVar1 != 0) {
    return uVar1 + 0x68;
  }
  return 0x14c4c10;
}

/* ref: FUN_00b58970 */
uint F_00b58970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar3 = param_1[1];
  iVar1 = *param_1;
  *(undefined4 *)this = 0;
  iVar3 = iVar3 - iVar1 >> 2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)F_004296a0(iVar3 * 4,0,0x134);
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar4 + iVar3;
    puVar2 = (undefined4 *)param_1[1];
    for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar2; puVar5 = puVar5 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar5;
      }
      puVar4 = puVar4 + 1;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
  }
  return (uint)this;
}

/* ref: FUN_00b589f0 */
uint F_00b589f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb589f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = *(uint *)((int)this + 0x14);
    puVar3 = this;
    if (3 < uVar2) {
      puVar3 = *(undefined4 * PTR32 *)this;
    }
    if (puVar3 <= param_1) {
      pvVar1 = this;
      if (3 < uVar2) {
        pvVar1 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined4 *)GEN_TOP(((int)pvVar1 + *(int *)((int)this + 0x10) * 4)))) {
        pvVar1 = this;
        if (3 < uVar2) {
          pvVar1 = *(undefined * PTR32 *)this;
        }
        uVar2 = F_005ce350(this,this,(int)param_1 - (int)((int)(uintptr_t)pvVar1) >> 2,param_2);
        return uVar2;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_2) {
    F_0042f810(this,param_2,*(undefined4 *)((int)this + 0x10));
    if (param_2 == 0) {
      return (uint)this;
    }
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (3 < *(uint *)((int)this + 0x14)) {
      **(undefined4 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined4 *)this = 0;
    return (uint)this;
  }
  pvVar1 = this;
  if (3 < *(uint *)((int)this + 0x14)) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  puVar3 = param_1;
  uVar2 = param_2;
  do {
    *((undefined4 *)GEN_TOP((((int)pvVar1 - (int)param_1) + (int)puVar3))) = *puVar3;
    puVar3 = puVar3 + 1;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  *(uint *)((int)this + 0x10) = param_2;
  if (*(uint *)((int)this + 0x14) < 4) {
    *(undefined4 *)((int)this + param_2 * 4) = 0;
    return (uint)this;
  }
  *(undefined4 *)(*(int *)this + param_2 * 4) = 0;
  return (uint)this;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00b58af0 */
unsigned int F_00b58af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x54) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00b58b20 */
unsigned int F_00b58b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58b20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b58b50 */
uint F_00b58b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58b50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x54);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00b58b90 */
uint F_00b58b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb58b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  
  iVar1 = param_2;
  if ((param_2 != param_3) && (param_3 != param_4)) {
    F_00b58560(param_2,param_3,param_4,0,0);
    iVar1 = param_2 + (param_4 - param_3 >> 2) * 4;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: Component::Xml::DOM_Attr::vf0 */
uint F_00b58be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f1364));
  F_00b56410(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Xml::DOM_Document::vf0 */
uint F_00b58c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f130c));
  F_00b56410(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Xml::DOM_Text::vf0 */
uint F_00b58c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f1390));
  F_00b56410(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Xml::DOM_CDATASection::vf0 */
uint F_00b58ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f13bc));
  F_00b56410(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Xml::DOM_Comment::vf0 */
uint F_00b58ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f13e8));
  F_00b56410(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Xml::DOM_Node::vf0 */
uint F_00b58d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b56410(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b58d40 */
uint F_00b58d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b58970(this,param_1);
  return (uint)this;
}

/* ref: Component::Xml::DOM_Element::vf0 */
uint F_00b58d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b56600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b58d90 */
uint F_00b58d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x14) = 3;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)this = 0;
  F_00b589f0(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00b58dc0 */
unsigned int F_00b58dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x54)) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00b58df0 */
uint F_00b58df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x134);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x134);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00b58ea0 */
uint F_00b58ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58ea0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x54);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00b58ee0 */
uint F_00b58ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xb58ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x54)) {
      F_0042c880(this_00);
    }
    F_00406ad0(*(undefined4 *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00b58f20 */
uint F_00b58f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b58df0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b58df0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b58f90 */
uint F_00b58f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  
  if (0x30c30c3 < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (uVar2 < param_1) {
    (*(uint *)(gen_frame + 0x8)) = 0;
    if (param_1 != 0) {
      uVar2 = F_004069f0(param_1 * 0x54);
      (*(uint *)(gen_frame + 0x8)) = uVar2;
      if (uVar2 == 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
    }
    F_00b58ea0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),(*(uint *)(gen_frame + 0x8)));
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = *(undefined * PTR32 *)this;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = pvVar1;
    iVar3 = (int)pvVar1 - (int)this_00;
    if (this_00 != (undefined *)0x0) {
      if (this_00 != pvVar1) {
        do {
          F_0042c880(this_00);
          this_00 = (undefined *)((int)this_00 + 0x54);
        } while (this_00 != (*(undefined * PTR32 *)(gen_frame + 0x4)));
      }
      F_00406ad0(*(undefined4 *)this);
    }
    uVar2 = param_1 * 0x54 + (*(uint *)(gen_frame + 0x8));
    *(uint *)((int)this + 8) = uVar2;
    *(uint *)((int)this + 4) = (iVar3 / 0x54) * 0x54 + (*(uint *)(gen_frame + 0x8));
    *(uint *)this = (*(uint *)(gen_frame + 0x8));
  }
  return uVar2;
}

/* ref: FUN_00b59070 */
uint F_00b59070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 4) == *(int *)((int)this + 8)) {
    F_00b58f20(this,1);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar1;
}

/* ref: FUN_00b590a0 */
uint F_00b590a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb590a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x54)) {
      F_0042c880(this_00);
    }
    F_00406ad0(*(undefined4 *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00b590e0 */
uint F_00b590e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb590e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b58f20(this,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b58f20(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00b59150 */
uint F_00b59150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x54;
  if (0x30c30c3U - param_1 < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (uVar1 < uVar2) {
    if (0x30c30c3 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00b58f90(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00b58f90(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00b591e0 */
uint F_00b591e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb591e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)this;
  if (*(int *)((int)this + 4) == *(int *)((int)this + 8)) {
    F_00b58f20(this,1);
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    **(undefined4 * PTR32 *)((int)this + 4) = *param_3;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  iVar2 = *(int *)((int)this + 4);
  iVar3 = (param_2 - iVar1 >> 2) * 4;
  iVar1 = iVar2 + -4;
  iVar4 = *(int *)this + iVar3;
  if ((iVar4 != iVar1) && (iVar1 != iVar2)) {
    F_00b58560(iVar4,iVar1,iVar2,0,0);
  }
  *param_1 = *(int *)this + iVar3;
  return (uint)param_1;
}

/* ref: FUN_00b59250 */
uint F_00b59250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59250u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  if (0 < (int)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0]) & 0xfffffffcU)) {
    uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + -4)));
    F_00b590e0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]));
    return uVar1;
  }
  F_00b590e0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]));
  return 0;
}

/* ref: FUN_00b59290 */
unsigned int F_00b59290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00b59150(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00b59150(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
  return 0;
}

/* ref: FUN_00b59310 */
uint F_00b59310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb59310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)this;
  if (*(int *)((int)this + 4) == *(int *)((int)this + 8)) {
    F_00b58f20(this,1);
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    **(undefined4 * PTR32 *)((int)this + 4) = *param_3;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  iVar2 = *(int *)((int)this + 4);
  iVar3 = (param_2 - iVar1 >> 2) * 4;
  iVar1 = iVar2 + -4;
  iVar4 = *(int *)this + iVar3;
  if ((iVar4 != iVar1) && (iVar1 != iVar2)) {
    F_00b58560(iVar4,iVar1,iVar2,0,0);
  }
  *param_1 = *(int *)this + iVar3;
  return (uint)param_1;
}

/* ref: FUN_00b59380 */
uint F_00b59380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b56b60((undefined *)((int)this + 0xcc),param_1);
  return uVar1;
}

/* ref: Client::System::Scheduler::Object::InclusiveObject::vf0 */
uint F_00b593c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb593c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b593f0 */
uint F_00b593f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb593f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  return param_1;
}

/* ref: FUN_00b59410 */
byte F_00b59410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59410u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x14) == param_2;
}

/* ref: FUN_00b59560 */
unsigned int F_00b59560(float gen_a0)
{
  GEN_ENTER(0xb59560u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b595a0 */
uint F_00b595a0(void)
{
  GEN_ENTER(0xb595a0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = (uint)REFG(undefined4 * PTR32, 0x14c4e78);
  if (REFG(undefined4 * PTR32, 0x14c4e78) == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[6] = 0;
      *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10f14a0));
      *(undefined2 *)(puVar1 + 5) = 1;
      REFG(undefined4 * PTR32, 0x14c4e78) = puVar1;
      return (uint)puVar1;
    }
    uVar2 = 0;
  }
  REFG(undefined4 * PTR32, 0x14c4e78) = (undefined4 *)uVar2;
  return uVar2;
}

/* ref: FUN_00b595f0 */
uint F_00b595f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb595f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x404) = *(int *)(param_1 + 0x404) + 1;
  }
  return param_1;
}

/* ref: FUN_00b59610 */
unsigned int F_00b59610(unsigned int gen_a0)
{
  GEN_ENTER(0xb59610u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b5aa40(REFG(undefined4, 0x14c4e84),param_1);
  return 0;
}

/* ref: FUN_00b59620 */
byte F_00b59620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    uVar2 = F_00bbaea0(this_00,param_1);
    if ((char)uVar2 != '\0') break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20);
  }
  bVar1 = F_00bc3c50(this_00);
  return bVar1;
}

/* ref: FUN_00b59660 */
uint F_00b59660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    uVar1 = F_00bbaea0(this_00,param_1);
    if ((char)uVar1 != '\0') break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20);
  }
  return (uint)this_00;
}

/* ref: FUN_00b596a0 */
uint F_00b596a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb596a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  uint uVar1;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
  F_00bbadf0(((undefined1 *)(gen_frame + 0x8)),param_1,0);
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    uVar1 = F_00bbaea0(this_00,((undefined1 *)(gen_frame + 0x8)));
    if ((char)uVar1 != '\0') break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20);
  }
  return (uint)this_00;
}

/* ref: FUN_00b596f0 */
uint F_00b596f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb596f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  uint uVar1;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
  F_00bbacc0(((undefined1 *)(gen_frame + 0x8)),param_1);
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    uVar1 = F_00bbaea0(this_00,((undefined1 *)(gen_frame + 0x8)));
    if (((char)uVar1 != '\0') && ((char)param_2 == *(char *)((int)this_00 + 0x3f9))) break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20);
  }
  return (uint)this_00;
}

/* ref: FUN_00b59750 */
uint F_00b59750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb59750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  uint uVar1;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
  F_00bbacc0(((undefined1 *)(gen_frame + 0x8)),param_1);
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    uVar1 = F_00bbaea0(this_00,((undefined1 *)(gen_frame + 0x8)));
    if (((char)uVar1 != '\0') && ((char)param_2 == *(char *)((int)this_00 + 0x3f9))) break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20);
  }
  F_00bc4480(this_00,param_1);
  return (uint)this_00;
}

/* ref: FUN_00b597c0 */
uint F_00b597c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb597c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    if (((((*(byte *)(uVar1 + 0x3fc) & 1) == 0) && (*(char *)(uVar1 + 0x12) == '\0')) &&
        (*(int *)(uVar1 + 0x14) == param_1)) && (*(char *)(uVar1 + 0x3f9) == '\0')) break;
    uVar1 = *(uint *)(uVar1 + 0x20);
  }
  return uVar1;
}

/* ref: FUN_00b59800 */
unsigned int F_00b59800(unsigned int gen_a0)
{
  GEN_ENTER(0xb59800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  for (iVar1 = *(int *)(in_ecx + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    *(uint *)(iVar1 + 0x3fc) = *(uint *)(iVar1 + 0x3fc) & 0xfffffffb;
  }
  return 0;
}

/* ref: FUN_00b59820 */
unsigned int F_00b59820(unsigned int gen_a0)
{
  GEN_ENTER(0xb59820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 4); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20)) {
    if ((*(uint *)((int)this_00 + 0x3fc) >> 2 & 1) != 0) {
      F_00bc41c0(this_00);
    }
  }
  return 0;
}

/* ref: FUN_00b59850 */
uint F_00b59850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint in_EAX = 0;
  
  for (piVar1 = *(int * PTR32 *)((int)this + 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1);
  }
  for (piVar1 = *(int * PTR32 *)((int)this + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1);
  }
  return in_EAX;
}

/* ref: FUN_00b598a0 */
uint F_00b598a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb598a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    uVar1 = F_00bbaf90(this_00);
    if (uVar1 == param_1) break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20);
  }
  return (uint)this_00;
}

/* ref: FUN_00b598e0 */
unsigned int F_00b598e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb598e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 4); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20)) {
    if (*(char *)((int)this_00 + 0x460) != '\0') {
      F_00bc3cc0(this_00);
    }
  }
  return 0;
}

/* ref: FUN_00b59910 */
unsigned int F_00b59910(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb59910u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    F_00bc5550(iVar1,param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00b59940 */
uint F_00b59940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 4); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20)) {
    bVar1 = F_00bbad00(this_00);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      bVar1 = F_00bbad60(this_00,param_1);
      in_EAX = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 != 0) {
        in_EAX = F_00bc5100(this_00);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00b59980 */
unsigned int F_00b59980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  byte bVar2;
  
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 4); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x20)) {
    bVar2 = F_00bbad00(pvVar1);
    if ((bVar2 != 0) && (bVar2 = F_00bbad60(pvVar1,param_1), bVar2 != 0)) {
      F_00bc5110(pvVar1);
    }
  }
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 8); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x20)) {
    bVar2 = F_00bbad00(pvVar1);
    if ((bVar2 != 0) && (bVar2 = F_00bbad60(pvVar1,param_1), bVar2 != 0)) {
      F_00bc5110(pvVar1);
    }
  }
  return 0;
}

/* ref: FUN_00b599f0 */
unsigned int F_00b599f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb599f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  byte bVar1;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 4); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20)) {
    bVar1 = F_00bbad00(this_00);
    if ((bVar1 != 0) && (bVar1 = F_00bbad60(this_00,param_1), bVar1 != 0)) {
      F_00bc4070(this_00,0xffffffff);
    }
  }
  return 0;
}

/* ref: FUN_00b59a30 */
byte F_00b59a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * this_00;
  uint uVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) == param_1) {
    uVar3 = F_00bbae30(*(undefined * PTR32 *)((int)this + 0x10));
    if (uVar3 == 0) {
      *(undefined1 *)((int)this + 0x15) = 0;
      return 0;
    }
    this_00 = *(undefined4 * PTR32 *)((int)this + 0xc);
    while (this_00 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)this_00[2];
      F_00bcc8c0(this_00);
      ((code *)*(gen_code32 *)*this_00)(this_00,1);
      this_00 = puVar1;
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x404)));
    if (iVar2 != 0) {
      *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x404))) = iVar2 + -1;
    }
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return 1;
}

/* ref: FUN_00b59aa0 */
byte F_00b59aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xb59aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  byte bVar5;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0xc);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    F_00bcc8c0(puVar3);
    ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    puVar3 = puVar1;
  }
  iVar2 = *(int *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x404) != 0) {
      *(int *)(iVar2 + 0x404) = *(int *)(iVar2 + 0x404) + -1;
    }
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar1[8];
    if (puVar1[0x101] == 0) {
      iVar2 = puVar1[7];
      if (iVar2 == 0) {
        *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
      }
      else {
        *(undefined4 * PTR32 *)(iVar2 + 0x20) = puVar3;
      }
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[7] = iVar2;
      }
      bVar5 = F_00bc3b60(puVar1);
      if (bVar5 == 0) {
        puVar1[7] = 0;
        puVar1[8] = *(undefined4 *)((int)this + 8);
        if (*(int *)((int)this + 8) != 0) {
          *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 0x1c))) = puVar1;
        }
        *(undefined4 * PTR32 *)((int)this + 8) = puVar1;
      }
      else {
        F_00b5aa40(REFG(undefined4, 0x14c4e84),puVar1);
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
    }
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 8);
  while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar1[8];
    bVar5 = F_00bc3b60(puVar1);
    if (bVar5 != 0) {
      iVar2 = puVar1[7];
      iVar4 = puVar1[8];
      if (iVar2 == 0) {
        *(int *)((int)this + 8) = iVar4;
      }
      else {
        *(int *)(iVar2 + 0x20) = iVar4;
      }
      if (iVar4 != 0) {
        *(int *)(iVar4 + 0x1c) = iVar2;
      }
      F_00b5aa40(REFG(undefined4, 0x14c4e84),puVar1);
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if ((*(int *)((int)this + 4) == 0) && (*(int *)((int)this + 8) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b59c20 */
uint F_00b59c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint in_EAX = 0;
  undefined4 * puVar4;
  uint uVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    in_EAX = 0;
    if (puVar4 != (undefined4 *)0x0) {
      while (puVar4 != param_1) {
        puVar4 = (undefined4 *)puVar4[8];
        if (puVar4 == (undefined4 *)0x0) {
          return 0;
        }
      }
      if (param_1[0x101] != 0) {
        uVar5 = param_1[0x101] - 1;
        param_1[0x101] = uVar5;
        if (uVar5 != 0) {
          return uVar5;
        }
      }
      iVar1 = param_1[7];
      iVar2 = param_1[8];
      if (iVar1 == 0) {
        *(int *)((int)this + 4) = iVar2;
      }
      else {
        *(int *)(iVar1 + 0x20) = iVar2;
      }
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x1c) = iVar1;
      }
      bVar3 = F_00bc3b60(param_1);
      if (bVar3 != 0) {
        F_00b5aa40(REFG(undefined4, 0x14c4e84),param_1);
        uVar5 = ((code *)*(gen_code32 *)*param_1)(param_1,1);
        return uVar5;
      }
      in_EAX = F_00b5a380(param_1 + 7,(int)this + 8);
    }
  }
  return in_EAX;
}

/* ref: FUN_00b59cb0 */
unsigned int F_00b59cb0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb59cb0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  bool bVar4;
  undefined4 * in_ecx;
  byte bVar5;
  undefined * pvVar6;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    pvVar6 = *(undefined * PTR32 *)(param_1 + 0xc);
    bVar4 = true;
    if (pvVar6 != (undefined *)0x0) {
      do {
        bVar5 = F_00bcc9f0(pvVar6);
        if (bVar5 == 0) {
          F_00bccaa0(pvVar6);
          bVar4 = false;
        }
        pvVar6 = *(undefined * PTR32 *)((int)pvVar6 + 8);
      } while (pvVar6 != (undefined *)0x0);
      if (!bVar4) goto LAB_00b59d03;
    }
    if (((*(int *)(param_1 + 0xc) == 0) ||
        (pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x14))), pvVar6 == (undefined *)0x0)) ||
       (bVar5 = F_00bc4530(pvVar6), bVar5 != 0)) {
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
  }
LAB_00b59d03: ;
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    F_00bc4c50(iVar1,param_2,param_3);
  }
  puVar2 = *(undefined4 * PTR32 *)(param_1 + 8);
  while (in_ecx = puVar2, in_ecx != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)in_ecx[8];
    F_00bc4c50(in_ecx,param_2,param_3);
    bVar5 = F_00bc3b60(in_ecx);
    if (bVar5 != 0) {
      iVar1 = in_ecx[7];
      iVar3 = in_ecx[8];
      if (iVar1 == 0) {
        *(int *)(param_1 + 8) = iVar3;
      }
      else {
        *(int *)(iVar1 + 0x20) = iVar3;
      }
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x1c) = iVar1;
      }
      F_00b5aa40(REFG(undefined4, 0x14c4e84),in_ecx);
      ((code *)*(gen_code32 *)*in_ecx)(in_ecx,1);
    }
  }
  return 0;
}

/* ref: FUN_00b59d90 */
uint F_00b59d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb59d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = *(uint *)((int)this + 0xc);
  while( true ) {
    if (uVar1 == 0) {
      uVar1 = F_00406b90(0x24,0,0);
      if (uVar1 == 0) {
        this_00 = (undefined *)0x0;
      }
      else {
        this_00 = (undefined *)F_00bcc920(uVar1);
      }
      *(undefined4 *)((int)this_00 + 4) = 0;
      *(undefined4 *)((int)this_00 + 8) = *(undefined4 *)((int)this + 0xc);
      if (*(int *)((int)this + 0xc) != 0) {
        *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4))) = this_00;
      }
      *(undefined * PTR32 *)((int)this + 0xc) = this_00;
      F_00bccac0(this_00,param_1,param_2);
      *(undefined1 *)((int)this_00 + 0xf) = 1;
      return (uint)this_00;
    }
    if (param_1 == *(int *)(uVar1 + 0x10)) break;
    uVar1 = *(uint *)(uVar1 + 8);
  }
  *(undefined1 *)(uVar1 + 0xf) = 1;
  return uVar1;
}

/* ref: FUN_00b59e40 */
uint F_00b59e40(unsigned int gen_a0)
{
  GEN_ENTER(0xb59e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00b59aa0(this);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (this != (undefined *)0x0) {
    uVar2 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  }
  return uVar2;
}

/* ref: FUN_00b59e60 */
uint F_00b59e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * pvVar2;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
  F_00bbadf0(((undefined1 *)(gen_frame + 0x8)),param_1,0);
  pvVar2 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (pvVar2 == (undefined *)0x0) {
      pvVar2 = (undefined *)F_00406b90(0x4a8,0,0);
      if (pvVar2 == (undefined *)0x0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = (undefined *)F_00bc51a0(pvVar2);
      }
      *(undefined4 *)((int)pvVar2 + 0x1c) = 0;
      *(undefined4 *)((int)pvVar2 + 0x20) = *(undefined4 *)((int)this + 4);
      if (*(int *)((int)this + 4) != 0) {
        *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x1c))) = pvVar2;
      }
      *(undefined * PTR32 *)((int)this + 4) = pvVar2;
      *(undefined4 *)((int)pvVar2 + 0x14) = 0;
      *(undefined4 *)((int)pvVar2 + 0x18) = 0;
      F_00bc3b80(pvVar2,param_1);
      return (uint)pvVar2;
    }
    uVar1 = F_00bbaea0(pvVar2,((undefined1 *)(gen_frame + 0x8)));
    if ((char)uVar1 != '\0') break;
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x20);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00b59f00 */
uint F_00b59f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    return 0;
  }
  pvVar2 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (pvVar2 == (undefined *)0x0) {
      pvVar2 = (undefined *)F_00406b90(0x4a8,0,0);
      if (pvVar2 == (undefined *)0x0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = (undefined *)F_00bc51a0(pvVar2);
      }
      *(undefined4 *)((int)pvVar2 + 0x1c) = 0;
      *(undefined4 *)((int)pvVar2 + 0x20) = *(undefined4 *)((int)this + 4);
      if (*(int *)((int)this + 4) != 0) {
        *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x1c))) = pvVar2;
      }
      *(undefined * PTR32 *)((int)this + 4) = pvVar2;
      F_00bccc00(pvVar2,param_1);
      return (uint)pvVar2;
    }
    uVar1 = F_00bbaea0(pvVar2,param_1);
    if ((char)uVar1 != '\0') break;
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x20);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00b59f90 */
uint F_00b59f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (undefined *)F_00406b90(0x4a8,0,0);
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = (undefined *)F_00bc51a0(pvVar1);
  }
  *(undefined4 *)((int)pvVar1 + 0x1c) = 0;
  *(undefined4 *)((int)pvVar1 + 0x20) = *(undefined4 *)((int)this + 4);
  if (*(int *)((int)this + 4) != 0) {
    *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x1c))) = pvVar1;
  }
  *(undefined * PTR32 *)((int)this + 4) = pvVar1;
  F_00bc4480(pvVar1,param_1);
  return (uint)pvVar1;
}

/* ref: FUN_00b59ff0 */
uint F_00b59ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xb59ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pvVar2;
  uint in_EAX = 0;
  uint uVar3;
  
  pvVar1 = *(undefined * PTR32 *)((int)this + 4);
  while (pvVar2 = pvVar1, pvVar2 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)pvVar2 + 0x20);
    if (((*(int *)((int)pvVar2 + 0x18) != 0) && ((*(byte *)((int)pvVar2 + 0x3fc) & 1) == 0)) &&
       (*(char *)((int)pvVar2 + 0x12) == '\0')) {
      uVar3 = F_00bbafd0(pvVar2);
      if (uVar3 != 0) {
        *(byte *)(uVar3 + 100) = *(byte *)(uVar3 + 100) & 0xfe;
      }
      if (((*(uint *)((int)pvVar2 + 0x3fc) & 1) == 0) && (*(int *)((int)pvVar2 + 0x404) != 0)) {
        *(int *)((int)pvVar2 + 0x404) = *(int *)((int)pvVar2 + 0x404) + -1;
      }
      in_EAX = *(uint *)((int)pvVar2 + 0x3fc) | 1;
      *(uint *)((int)pvVar2 + 0x3fc) = in_EAX;
    }
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 8);
  while (pvVar2 = pvVar1, pvVar2 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)pvVar2 + 0x20);
    if (((*(int *)((int)pvVar2 + 0x18) != 0) && ((*(byte *)((int)pvVar2 + 0x3fc) & 1) == 0)) &&
       (*(char *)((int)pvVar2 + 0x12) == '\0')) {
      uVar3 = F_00bbafd0(pvVar2);
      if (uVar3 != 0) {
        *(byte *)(uVar3 + 100) = *(byte *)(uVar3 + 100) & 0xfe;
      }
      if (((*(uint *)((int)pvVar2 + 0x3fc) & 1) == 0) && (*(int *)((int)pvVar2 + 0x404) != 0)) {
        *(int *)((int)pvVar2 + 0x404) = *(int *)((int)pvVar2 + 0x404) + -1;
      }
      in_EAX = *(uint *)((int)pvVar2 + 0x3fc) | 1;
      *(uint *)((int)pvVar2 + 0x3fc) = in_EAX;
    }
  }
  return in_EAX;
}

/* ref: FUN_00b5a0c0 */
uint F_00b5a0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  byte bVar4;
  uint in_EAX = 0;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 * puVar10;
  int iVar11;
  
  pvVar3 = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    uVar5 = F_00a5f290(REFG(void * PTR32, 0x1379694));
    in_EAX = 0;
    if (uVar5 != 0) {
      if ((*(char *)((int)this + 0x15) == '\0') && (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0)) {
        F_00bbadf0(*(undefined * PTR32 *)((int)this + 0x10),(uint)*(ushort *)((int)pvVar3 + 0x88),pvVar3);
      }
      uVar6 = F_00b59e60(this,(uint)*(ushort *)((int)pvVar3 + 0x88));
      if (*(uint *)((int)this + 0x10) != uVar6) {
        puVar10 = *(undefined4 * PTR32 *)((int)this + 0xc);
        while (puVar10 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)puVar10[2];
          F_00bcc8c0(puVar10);
          ((code *)*(gen_code32 *)*puVar10)(puVar10,1);
          puVar10 = puVar2;
        }
        *(undefined4 *)((int)this + 0xc) = 0;
      }
      *(int *)(uVar6 + 0x404) = *(int *)(uVar6 + 0x404) + 1;
      iVar11 = *(int *)((int)this + 0x10);
      if ((iVar11 != 0) && (*(int *)(iVar11 + 0x404) != 0)) {
        *(int *)(iVar11 + 0x404) = *(int *)(iVar11 + 0x404) + -1;
      }
      puVar10 = *(undefined4 * PTR32 *)((int)this + 0xc);
      *(uint *)((int)this + 0x10) = uVar6;
      *(undefined1 *)((int)this + 0x15) = 1;
      if ((puVar10 != (undefined4 *)0x0) && ((char)param_1 != '\0')) {
        do {
          iVar11 = puVar10[1];
          puVar2 = (undefined4 *)puVar10[2];
          if (iVar11 == 0) {
            *(undefined4 * PTR32 *)((int)this + 0xc) = puVar2;
          }
          else {
            *(undefined4 * PTR32 *)(iVar11 + 8) = puVar2;
          }
          if (puVar2 != (undefined4 *)0x0) {
            puVar2[1] = iVar11;
          }
          F_00bcc8c0(puVar10);
          ((code *)*(gen_code32 *)*puVar10)(puVar10,1);
          puVar10 = puVar2;
        } while (puVar2 != (undefined4 *)0x0);
      }
      for (iVar11 = *(int *)((int)this + 0xc); iVar11 != 0; iVar11 = *(int *)(iVar11 + 8)) {
        *(undefined1 *)(iVar11 + 0xf) = 0;
      }
      uVar7 = F_00aafad0();
      iVar11 = 0;
      if (0 < (int)uVar7) {
        do {
          bVar4 = F_00ac3740(&REFG(undefined, 0x14bcf40),iVar11);
          if (bVar4 != 0) {
            uVar8 = F_00ab1ed0(iVar11);
            uVar9 = (uint)*(short *)(uVar8 + 0x1a);
            if (((*(char *)(uVar5 + 0x1688) == '\x05') || (*(char *)(uVar5 + 0x1688) == '\x17')) &&
               (*(byte *)(uVar8 + 0x1e) != 0)) {
              uVar9 = (uint)*(byte *)(uVar8 + 0x1e);
            }
            F_00b59d90(this,uVar9,uVar6);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)uVar7);
      }
      uVar7 = F_00aaffb0();
      iVar11 = 0;
      in_EAX = uVar7;
      if (0 < (int)uVar7) {
        do {
          in_EAX = F_00ab2a20(iVar11);
          if ((in_EAX != 0) && (*(char *)(in_EAX + 0x11) != '\0')) {
            switch((unsigned int)(uintptr_t)(iVar11)) {
            case 0x70: ;
            case 0x71: ;
            case 0x72: ;
              cVar1 = *(char *)(uVar5 + 0x1688);
              in_EAX = CONCAT31((int3)(uVar5 >> 8),cVar1);
              if ((cVar1 == '\x05') || (cVar1 == '\x17')) goto LAB_00b5a294;
              break;
            case 0x76: ;
            case 0x77: ;
            case 0x78: ;
              cVar1 = *(char *)(uVar5 + 0x1688);
              in_EAX = CONCAT31((int3)(in_EAX >> 8),cVar1);
              if ((cVar1 != '\x05') && (cVar1 != '\x17')) goto LAB_00b5a294;
            default: ;
            }
            in_EAX = F_00b59d90(this,iVar11,uVar6);
          }
LAB_00b5a294: ;
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)uVar7);
      }
      puVar10 = *(undefined4 * PTR32 *)((int)this + 0xc);
      while (puVar2 = puVar10, puVar2 != (undefined4 *)0x0) {
        puVar10 = (undefined4 *)puVar2[2];
        if (*(char *)((int)puVar2 + 0xf) == '\0') {
          iVar11 = puVar2[1];
          if (iVar11 == 0) {
            *(undefined4 * PTR32 *)((int)this + 0xc) = puVar10;
          }
          else {
            *(undefined4 * PTR32 *)(iVar11 + 8) = puVar10;
          }
          if (puVar10 != (undefined4 *)0x0) {
            puVar10[1] = iVar11;
          }
          F_00bcc8c0(puVar2);
          in_EAX = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        }
      }
      *(undefined1 *)((int)this + 0x14) = 0;
    }
  }
  return in_EAX;
}

/* ref: FUN_00b5a320 */
uint F_00b5a320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a320u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b5a340 */
uint F_00b5a340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00b5a350 */
uint F_00b5a350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a350u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b5a370 */
uint F_00b5a370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00b5a380 */
uint F_00b5a380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = *param_1;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 0x1c) = (int)this + -0x1c;
  }
  *param_1 = (int)this + -0x1c;
  return (uint)param_1;
}

/* ref: FUN_00b5a3b0 */
unsigned int F_00b5a3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 0x20) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x1c) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b5a3e0 */
uint F_00b5a3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = *param_1;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = (int)this + -4;
  }
  *param_1 = (int)this + -4;
  return (uint)param_1;
}

/* ref: FUN_00b5a410 */
unsigned int F_00b5a410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 8) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Object::ObjectManager::vf0 */
uint F_00b5a440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f14a0));
  F_00b59aa0(this);
  REFG(undefined4, 0x14c4e78) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b5a480 */
uint F_00b5a480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Base::SchedulerState::vf1 */
byte F_00b5a4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a4a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 8);
}

/* ref: Client::System::Scheduler::Resource::SchedulerResourceParser::vf0 */
uint F_00b5a4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f1534));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b5a520 */
byte F_00b5a520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x248) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b5a530 */
unsigned int F_00b5a530(float gen_a0)
{
  GEN_ENTER(0xb5a530u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b5a550 */
uint F_00b5a550(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f153c));
  *(undefined4 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x38));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: FUN_00b5a5a0 */
uint F_00b5a5a0(void)
{
  GEN_ENTER(0xb5a5a0u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14c4e84);
  if (REFG(undefined4, 0x14c4e84) == 0) {
    this = (undefined *)F_00406b90(0x50,0,0);
    if (this != (undefined *)0x0) {
      uVar1 = F_00b5a550(this);
      REFG(undefined4, 0x14c4e84) = uVar1;
      return uVar1;
    }
    uVar1 = 0;
  }
  REFG(undefined4, 0x14c4e84) = uVar1;
  return uVar1;
}

/* ref: FUN_00b5a5d0 */
byte F_00b5a5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a5d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this;
  uint uVar2;
  
  if (*(char *)*param_1 == '\0') {
    return 1;
  }
  this = (undefined *)F_00b5c850(REFG(void * PTR32, 0x14c4e90),param_1);
  if ((this != (undefined *)0x0) &&
     ((uVar2 = *(uint *)((int)this + 0x5c) >> 1, (uVar2 & 1) == 0 || ((uVar2 & 1) == 0)))) {
    bVar1 = F_00bcd860(this);
    return bVar1 == 0;
  }
  return 0;
}

/* ref: FUN_00b5a620 */
uint F_00b5a620(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a620u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  
  puVar2 = param_1;
  if (*(char *)*param_1 != '\0') {
    uVar1 = F_00b5c850(REFG(void * PTR32, 0x14c4e90),param_1);
    puVar2 = (undefined4 *)0x0;
    if (uVar1 != 0) {
      *(uint *)(uVar1 + 0x5c) = *(uint *)(uVar1 + 0x5c) & 0xfffffff7;
      puVar2 = (undefined4 *)F_00b5c650(uVar1);
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00b5a660 */
byte F_00b5a660(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a660u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
  F_00bbadf0(((undefined1 *)(gen_frame + 0x8)),param_1,0);
  bVar1 = F_00b59620(REFG(void * PTR32, 0x14c4e78),((undefined1 *)(gen_frame + 0x8)));
  return bVar1;
}

/* ref: FUN_00b5a6a0 */
byte F_00b5a6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a6a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
  F_00bbadd0(((undefined1 *)(gen_frame + 0x8)),param_1);
  bVar1 = F_00b59620(REFG(void * PTR32, 0x14c4e78),((undefined1 *)(gen_frame + 0x8)));
  return bVar1;
}

/* ref: FUN_00b5a6f0 */
uint F_00b5a6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a6f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 4 + param_2 * 4);
}

/* ref: FUN_00b5a700 */
byte F_00b5a700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb5a700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  byte bVar2;
  
  if ((*param_3 != 0) ||
     (iVar1 = *(int *)((int)this + param_2 * 4 + 4), *param_3 = iVar1, iVar1 != 0)) {
    bVar2 = F_00b68ad0((undefined *)*param_3,param_1,param_4);
    if (bVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b5a740 */
byte F_00b5a740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb5a740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  byte bVar2;
  
  if ((*param_4 != 0) ||
     (iVar1 = *(int *)((int)this + param_3 * 4 + 4), *param_4 = iVar1, iVar1 != 0)) {
    bVar2 = F_00b68b20((undefined *)*param_4,param_1,param_2,param_5);
    if (bVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b5a780 */
byte F_00b5a780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb5a780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  byte bVar2;
  
  if ((*param_3 != 0) ||
     (iVar1 = *(int *)((int)this + param_2 * 4 + 4), *param_3 = iVar1, iVar1 != 0)) {
    bVar2 = F_00b68bc0((undefined *)*param_3,param_1,param_4);
    if (bVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b5a7c0 */
unsigned int F_00b5a7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  
  iVar1 = 6;
  do {
    this = (undefined *)((int)this + 4);
    for (this_00 = *(undefined * PTR32 *)this; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc))
    {
      F_00b68540(this_00);
      F_00b68380(this_00);
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00b5a800 */
byte F_00b5a800(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a800u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * pcVar1;
  byte bVar2;
  undefined * this;
  uint uVar3;
  
  pcVar1 = (char *)*param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x746d62;
  if (*pcVar1 == '\0') {
    return 1;
  }
  this = (undefined *)F_00b5e210(REFG(void * PTR32, 0x14c4e90),param_1,&(*(undefined4 *)(gen_frame + 0x8)),1);
  *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) | 8;
  uVar3 = *(uint *)((int)this + 0x5c) >> 1;
  if (((uVar3 & 1) != 0) && ((uVar3 & 1) != 0)) {
    return 0;
  }
  bVar2 = F_00bcd860(this);
  return bVar2 == 0;
}

/* ref: FUN_00b5a860 */
uint F_00b5a860(unsigned int gen_a0)
{
  GEN_ENTER(0xb5a860u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa60];
  byte bVar1;
  undefined * this;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0xa58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa5c);
  this = (undefined *)F_00b5c850(REFG(void * PTR32, 0x14c4e90),param_1);
  if ((this != (undefined *)0x0) &&
     ((uVar2 = *(uint *)((int)this + 0x5c) >> 1, (uVar2 & 1) == 0 || ((uVar2 & 1) == 0)))) {
    bVar1 = F_00bcd860(this);
    if (bVar1 == 0) {
      F_00b5c440(((undefined1 *)(gen_frame + 0x8)));
      uVar2 = F_00bcd800(this,((undefined1 *)(gen_frame + 0x0)));
      uVar2 = F_00bce080(uVar2);
      F_00c47745((*(uint *)(gen_frame + 0xa58)) ^ (uint)(uint)(gen_frame + 0xa5c));
      return uVar2;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xa58)) ^ (uint)(uint)(gen_frame + 0xa5c));
  return 0;
}

/* ref: FUN_00b5a8f0 */
byte F_00b5a8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa80];
  byte bVar1;
  undefined * this;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0xa78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa7c);
  this = (undefined *)F_00b5c850(REFG(void * PTR32, 0x14c4e90),param_2);
  if ((this != (undefined *)0x0) &&
     ((uVar2 = *(uint *)((int)this + 0x5c) >> 1, (uVar2 & 1) == 0 || ((uVar2 & 1) == 0)))) {
    bVar1 = F_00bcd860(this);
    if (bVar1 == 0) {
      F_00b5c440(((undefined1 *)(gen_frame + 0x28)));
      uVar2 = F_00bcd800(this,((undefined1 *)(gen_frame + 0x20)));
      uVar2 = F_00bcdea0(uVar2);
      if (uVar2 != 0) {
        F_00bccbd0(((undefined1 *)(gen_frame + 0x4)));
        F_00bbadf0(((undefined1 *)(gen_frame + 0x4)),param_1,0);
        uVar2 = F_00bccde0(((undefined1 *)(gen_frame + 0x4)),uVar2,0,0,7);
        if (uVar2 != 0) {
          F_00bccbf0(((undefined1 *)(gen_frame + 0x4)));
          F_00c47745((*(uint *)(gen_frame + 0xa78)) ^ (uint)(uint)(gen_frame + 0xa7c));
          return 1;
        }
        F_00bccbf0(((undefined1 *)(gen_frame + 0x4)));
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xa78)) ^ (uint)(uint)(gen_frame + 0xa7c));
  return 0;
}

/* ref: FUN_00b5a9d0 */
uint F_00b5a9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5a9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  int local_8;
  
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  local_8 = 6;
  do {
    this = (undefined *)((int)this + 4);
    for (this_00 = *(undefined * PTR32 *)this; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc))
    {
      F_00b696f0(this_00,param_1);
    }
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  F_0052ef80(REFG(void * PTR32, 0x1375b00),param_1);
  uVar1 = F_00b59850(REFG(void * PTR32, 0x14c4e78),param_1);
  return uVar1;
}

/* ref: FUN_00b5aa40 */
unsigned int F_00b5aa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5aa40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int in_ecx_00;
  int local_8;
  
  local_8 = 6;
  do {
    in_ecx = in_ecx + 1;
    for (in_ecx_00 = *in_ecx; in_ecx_00 != 0; in_ecx_00 = *(int *)(in_ecx_00 + 0xc)) {
      F_00b68cc0(in_ecx_00,param_2);
    }
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}

/* ref: FUN_00b5aa80 */
uint F_00b5aa80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5aa80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  byte bVar2;
  
  if (((param_1 == *(int *)((int)this + 0x20)) && (*(int *)((int)this + 0x2c) != 0)) &&
     (bVar2 = F_00bbad60(((undefined *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x9a8))),param_1), bVar2 != 0)) {
    return *(uint *)((int)this + 0x2c);
  }
  uVar1 = *(uint *)((int)this + 0x18);
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    bVar2 = F_00bbad60((undefined *)(uVar1 + 0x9a8),param_1);
    if (bVar2 != 0) break;
    uVar1 = *(uint *)(uVar1 + 0xc);
  }
  *(uint *)((int)this + 0x2c) = uVar1;
  *(int *)((int)this + 0x20) = param_1;
  return uVar1;
}

/* ref: FUN_00b5aaf0 */
uint F_00b5aaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5aaf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(int *)((int)this + 0x34) != 0) &&
     (uVar1 = F_00bbaea0(((undefined *)GEN_TOP((*(int *)((int)this + 0x34) + 0x9a8))),param_2),
     (char)uVar1 != '\0')) {
    return *(uint *)((int)this + 0x34);
  }
  uVar1 = *(uint *)((int)this + param_1 * 4 + 4);
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = F_00bbaea0((undefined *)(uVar1 + 0x9a8),param_2);
    if ((char)uVar2 != '\0') break;
    uVar1 = *(uint *)(uVar1 + 0xc);
  }
  *(uint *)((int)this + 0x34) = uVar1;
  *(uint *)((int)this + 0x28) = uVar1 + 0x9a8;
  return uVar1;
}

/* ref: FUN_00b5ab70 */
unsigned int F_00b5ab70(unsigned int gen_a0)
{
  GEN_ENTER(0xb5ab70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  
  iVar1 = 6;
  do {
    this = (undefined *)((int)this + 4);
    for (this_00 = *(undefined * PTR32 *)this; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc))
    {
      F_00b68650(this_00,1);
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00b5aba0 */
uint F_00b5aba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5aba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x1c);
  *(uint *)((int)this + 0x1c) = uVar1 + 1;
  *param_1 = uVar1 & 0x3fffffff | 0x40000000;
  return (uint)param_1;
}

/* ref: FUN_00b5abd0 */
byte F_00b5abd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb5abd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  int iVar1;
  byte bVar2;
  
  if (*param_3 == 0) {
    *param_3 = *(int *)((int)this + param_2 * 4 + 4);
    *param_4 = 0;
    if (*param_3 == 0) {
      return 0;
    }
  }
  do {
    bVar2 = F_00b68a60((undefined *)*param_3,param_1,param_4);
    if (bVar2 != 0) {
      return 1;
    }
    *param_4 = 0;
    iVar1 = *(int *)(*param_3 + 0xc);
    *param_3 = iVar1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00b5ac30 */
byte F_00b5ac30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5ac30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * this_00;
  byte bVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    bVar1 = F_00b68a60(this_00,param_1,param_2);
    if (bVar1 != 0) break;
    *param_2 = 0;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
  }
  return 1;
}

/* ref: FUN_00b5ac70 */
uint F_00b5ac70(unsigned int gen_a0)
{
  GEN_ENTER(0xb5ac70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  undefined4 * puVar4;
  int local_c;
  int * local_8;
  
  piVar3 = (int *)((int)this + 4);
  local_c = 6;
  local_8 = piVar3;
  do {
    puVar4 = (undefined4 *)*local_8;
    if (puVar4 != (undefined4 *)0x0) {
      do {
        iVar1 = puVar4[2];
        puVar2 = (undefined4 *)puVar4[3];
        if (iVar1 == 0) {
          *local_8 = (int)puVar2;
        }
        else {
          *(undefined4 * PTR32 *)(iVar1 + 0xc) = puVar2;
        }
        if (puVar2 != (undefined4 *)0x0) {
          puVar2[2] = iVar1;
        }
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar4)(puVar4,1)));
        puVar4 = puVar2;
      } while (puVar2 != (undefined4 *)0x0);
      *(undefined4 *)((int)this + 0x20) = 0xffffffff;
      *(undefined4 *)((int)this + 0x2c) = 0;
      *(undefined4 *)((int)this + 0x24) = 0;
      *(undefined4 *)((int)this + 0x30) = 0;
      *(undefined4 *)((int)this + 0x28) = 0;
      *(undefined4 *)((int)this + 0x34) = 0;
      *local_8 = 0;
    }
    local_8 = local_8 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  return (uint)piVar3;
}

/* ref: FUN_00b5ad00 */
uint F_00b5ad00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5ad00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined * this_00;
  
  (*(int *)(gen_frame + 0x4)) = 6;
LAB_00b5ad15: ;
  this = (undefined *)((int)this + 4);
  this_00 = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  do {
    if (this_00 == (undefined *)0x0) {
      this_00 = *(undefined * PTR32 *)this;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      goto joined_r0x00b5ad2b;
    }
    while( true ) {
      bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      in_EAX = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) break;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
joined_r0x00b5ad2b: ;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      if (this_00 == (undefined *)0x0) {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        if ((*(int *)(gen_frame + 0x4)) == 0) {
          return in_EAX;
        }
        goto LAB_00b5ad15;
      }
    }
    bVar1 = F_00bd0880((*(undefined * PTR32 *)(gen_frame + 0x8)),3,param_2);
    in_EAX = CONCAT31(extraout_var_00,bVar1);
  } while( true );
}

/* ref: FUN_00b5ad70 */
uint F_00b5ad70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5ad70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b68d80(this_00,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00b5ada0 */
uint F_00b5ada0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5ada0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b68de0(this_00,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00b5add0 */
unsigned int F_00b5add0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5add0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this_00;
  
  (*(int *)(gen_frame + 0x4)) = 6;
LAB_00b5ade5: ;
  this = (undefined *)((int)this + 4);
  this_00 = (undefined *)0x0;
  (*(int *)(gen_frame + 0x8)) = 0;
  do {
    if (this_00 == (undefined *)0x0) {
      this_00 = *(undefined * PTR32 *)this;
      (*(int *)(gen_frame + 0x8)) = 0;
      goto joined_r0x00b5adfb;
    }
    while (bVar1 = F_00b68a60(this_00,param_1,&(*(int *)(gen_frame + 0x8))), bVar1 == 0) {
      (*(int *)(gen_frame + 0x8)) = 0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
joined_r0x00b5adfb: ;
      (*(int *)(gen_frame + 0x8)) = 0;
      if (this_00 == (undefined *)0x0) {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        if ((*(int *)(gen_frame + 0x4)) == 0) {
          return 0;
        }
        goto LAB_00b5ade5;
      }
    }
    *(undefined1 *)((*(int *)(gen_frame + 0x8)) + 0x248) = 1;
  } while( true );
}

/* ref: FUN_00b5ae40 */
uint F_00b5ae40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ae40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b68620(this_00);
  }
  return uVar1;
}

/* ref: FUN_00b5ae60 */
uint F_00b5ae60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5ae60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b684e0(this_00,param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00b5ae90 */
uint F_00b5ae90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ae90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b68540(this_00);
  }
  return uVar1;
}

/* ref: FUN_00b5aeb0 */
uint F_00b5aeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5aeb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b69a60(this_00,param_2);
  }
  return uVar1;
}

/* ref: FUN_00b5aed0 */
uint F_00b5aed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5aed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b68560(this_00,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00b5af00 */
uint F_00b5af00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5af00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b685b0(this_00,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00b5af30 */
uint F_00b5af30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5af30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  undefined4 in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  int iVar3;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  iVar3 = 0;
  do {
    this = (undefined *)((int)this + 4);
    this_00 = *(undefined * PTR32 *)this;
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
    for (; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc)) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      bVar1 = F_00b68a60(this_00,param_1,&(*(int * PTR32 *)(gen_frame + 0x8)));
      in_EAX = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 4))((*(int * PTR32 *)(gen_frame + 0x8)));
        return uVar2;
      }
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

/* ref: FUN_00b5afa0 */
byte F_00b5afa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5afa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b68700(this_00,param_2);
    return uVar1 != 0;
  }
  return 1;
}

/* ref: FUN_00b5afd0 */
uint F_00b5afd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5afd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  uVar2 = F_00b68700(this_00,param_2);
  if (uVar2 == 0) {
    return 1;
  }
  if (uVar2 == 0xffffffff) {
    return 0xffffff00;
  }
  bVar1 = F_00b68760(this_00,param_2);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00b5b020 */
byte F_00b5b020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  
  pvVar2 = (undefined *)F_00b5aa80(this,param_1);
  if ((pvVar2 != (undefined *)0x0) && (uVar3 = F_00b68700(pvVar2,param_2), uVar3 == 0)) {
    return 1;
  }
  pvVar2 = (undefined *)F_00b5aa80(this,param_1);
  if (pvVar2 != (undefined *)0x0) {
    uVar3 = F_00b68700(pvVar2,param_2);
    if (uVar3 == 0) {
      return 1;
    }
    if (uVar3 != 0xffffffff) {
      bVar1 = F_00b687c0(pvVar2,param_2);
      return bVar1;
    }
  }
  return 0;
}

/* ref: FUN_00b5b090 */
uint F_00b5b090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00b5aa80(this,param_1);
  if (pvVar1 != (undefined *)0x0) {
    uVar2 = F_00b68700(pvVar1,param_2);
    if (uVar2 == 0) {
      return 0xffffffff;
    }
  }
  uVar2 = 0xffffffff;
  pvVar1 = (undefined *)F_00b5aa80(this,param_1);
  if (pvVar1 != (undefined *)0x0) {
    uVar2 = F_00b68890(pvVar1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00b5b0f0 */
uint F_00b5b0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar3 = 0;
  do {
    this = (undefined *)((int)this + 4);
    this_00 = *(undefined * PTR32 *)this;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    for (; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc)) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (bVar1 != 0) {
        uVar2 = F_00bcff00((*(undefined * PTR32 *)(gen_frame + 0x8)));
        return uVar2;
      }
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  return 0;
}

/* ref: FUN_00b5b160 */
uint F_00b5b160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint in_ecx;
  undefined3 extraout_var = 0;
  
  in_ecx = F_00b5aa80(this,param_1);
  if (in_ecx != 0) {
    bVar1 = F_00b68840(in_ecx,param_2);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00b5b190 */
uint F_00b5b190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb5b190u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b5aa80(param_1,param_2);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00b688d0(uVar1,param_3,param_4);
  }
  return uVar2;
}

/* ref: FUN_00b5b1c0 */
uint F_00b5b1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb5b1c0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b5aa80(param_1,param_2);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00b68920(uVar1,param_3,param_4);
  }
  return uVar2;
}

/* ref: FUN_00b5b1f0 */
unsigned int F_00b5b1f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb5b1f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this;
  
  (*(int *)(gen_frame + 0x4)) = 6;
LAB_00b5b205: ;
  param_1 = param_1 + 1;
  this = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  do {
    if (this == (undefined *)0x0) {
      this = (undefined *)*param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      goto joined_r0x00b5b21b;
    }
    while (bVar1 = F_00b68a60(this,param_2,&(*(undefined4 *)(gen_frame + 0x8))), bVar1 == 0) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      this = *(undefined * PTR32 *)((int)this + 0xc);
joined_r0x00b5b21b: ;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      if (this == (undefined *)0x0) {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        if ((*(int *)(gen_frame + 0x4)) == 0) {
          return 0;
        }
        goto LAB_00b5b205;
      }
    }
    F_00bcfc00((*(undefined4 *)(gen_frame + 0x8)),param_3);
  } while( true );
}

/* ref: FUN_00b5b260 */
uint F_00b5b260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar2 = 0;
  do {
    this = (undefined *)((int)this + 4);
    this_00 = *(undefined * PTR32 *)this;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    for (; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc)) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (bVar1 != 0) {
        return (uint)(*(undefined * PTR32 *)(gen_frame + 0x8));
      }
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return 0;
}

/* ref: FUN_00b5b2d0 */
uint F_00b5b2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * this_00;
  undefined * this_01;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    this_01 = (undefined *)F_00b68410(this_00);
    if (this_01 != (undefined *)0x0) {
      F_00bc40d0(this_01,param_2);
    }
    bVar1 = F_00b689c0(this_00,param_2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b5b310 */
uint F_00b5b310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5b310u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 uVar1;
  byte bVar2;
  undefined * pvVar3;
  undefined3 extraout_var = 0;
  undefined * this_00;
  
  pvVar3 = (undefined *)F_00b5aa80((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[1]));
  uVar1 = (*(undefined4 *)&gen_args[3]);
  (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)0x0;
  this_00 = pvVar3;
  while ((this_00 != (undefined *)0x0 || (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))), this_00 != (undefined *)0x0)
         )) {
    bVar2 = F_00b68ad0(this_00,(*(undefined4 *)&gen_args[2]),&(*(undefined * PTR32 *)&gen_args[1]));
    if (bVar2 == 0) {
      return CONCAT31(extraout_var,bVar2);
    }
    pvVar3 = (undefined *)F_00bc3440((*(undefined * PTR32 *)&gen_args[1]),2,uVar1,0);
  }
  return (uint)pvVar3;
}

/* ref: FUN_00b5b370 */
uint F_00b5b370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b5aa80(this,param_1);
  if (uVar1 != 0) {
    return *(uint *)(uVar1 + 0x18);
  }
  return 0;
}

/* ref: FUN_00b5b390 */
uint F_00b5b390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5b390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 uVar1;
  uint in_ecx;
  undefined4 * puVar2;
  
  in_ecx = F_00b5aa80(this,param_2);
  if ((in_ecx != 0) && (param_3 < *(uint *)(in_ecx + 0x18))) {
    puVar2 = (undefined4 *)F_00b68c10(in_ecx,param_3);
    uVar1 = *puVar2;
    param_1[1] = puVar2[1];
    *param_1 = uVar1;
    return (uint)param_1;
  }
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_00b5b3e0 */
unsigned int F_00b5b3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5b3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (this_00 != (undefined *)0x0) {
    while( true ) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (bVar1 != 0) break;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
      if (this_00 == (undefined *)0x0) {
        return 0;
      }
    }
    F_00bd0c80((*(undefined * PTR32 *)(gen_frame + 0x8)),param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00b5b440 */
unsigned int F_00b5b440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (this_00 != (undefined *)0x0) {
    while( true ) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (bVar1 != 0) break;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
      if (this_00 == (undefined *)0x0) {
        return 0;
      }
    }
    F_00bcfad0((*(undefined * PTR32 *)(gen_frame + 0x8)),param_2);
  }
  return 0;
}

/* ref: FUN_00b5b4a0 */
uint F_00b5b4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5b4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  undefined * pvVar2;
  undefined3 extraout_var = 0;
  undefined * this_00;
  
  pvVar2 = (undefined *)F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),2,(*(undefined * PTR32 *)&gen_args[2]));
  (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)0x0;
  this_00 = pvVar2;
  while ((this_00 != (undefined *)0x0 || (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))), this_00 != (undefined *)0x0))
        ) {
    bVar1 = F_00b68b20(this_00,(*(undefined4 *)&gen_args[1]),0xffffffff,&(*(undefined * PTR32 *)&gen_args[2]));
    if (bVar1 == 0) {
      return CONCAT31(extraout_var,bVar1);
    }
    pvVar2 = (undefined *)F_00bcfad0((*(undefined * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  }
  return (uint)pvVar2;
}

/* ref: FUN_00b5b500 */
uint F_00b5b500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5b500u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  undefined * pvVar2;
  undefined3 extraout_var = 0;
  undefined * this_00;
  
  pvVar2 = (undefined *)F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),2,(*(undefined * PTR32 *)&gen_args[2]));
  (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)0x0;
  this_00 = pvVar2;
  while ((this_00 != (undefined *)0x0 || (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))), this_00 != (undefined *)0x0))
        ) {
    bVar1 = F_00b68bc0(this_00,(*(undefined4 *)&gen_args[1]),&(*(undefined * PTR32 *)&gen_args[2]));
    if (bVar1 == 0) {
      return CONCAT31(extraout_var,bVar1);
    }
    pvVar2 = (undefined *)F_00bcfad0((*(undefined * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  }
  return (uint)pvVar2;
}

/* ref: FUN_00b5b550 */
unsigned int F_00b5b550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this_00;
  
  (*(int *)(gen_frame + 0x4)) = 6;
LAB_00b5b565: ;
  this = (undefined *)((int)this + 4);
  this_00 = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  do {
    if (this_00 == (undefined *)0x0) {
      this_00 = *(undefined * PTR32 *)this;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      goto joined_r0x00b5b57b;
    }
    while (bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8))), bVar1 == 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
joined_r0x00b5b57b: ;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      if (this_00 == (undefined *)0x0) {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        if ((*(int *)(gen_frame + 0x4)) == 0) {
          return 0;
        }
        goto LAB_00b5b565;
      }
    }
    F_00bd0910((*(undefined * PTR32 *)(gen_frame + 0x8)));
  } while( true );
}

/* ref: FUN_00b5b5c0 */
byte F_00b5b5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 1;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    if (bVar1 != 0) break;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
  }
  if (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) != '\0') {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b5b620 */
byte F_00b5b620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b620u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  undefined * this_00;
  
  this_00 = (undefined *)F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),2,(*(undefined4 *)&gen_args[2]));
  (*(undefined4 *)&gen_args[2]) = 0;
  if ((this_00 != (undefined *)0x0) || (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))), this_00 != (undefined *)0x0)) {
    bVar1 = F_00b68b20(this_00,(*(undefined4 *)&gen_args[1]),0xffffffff,&(*(undefined4 *)&gen_args[2]));
    if (bVar1 != 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00b5b670 */
byte F_00b5b670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b670u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  undefined * this_00;
  
  this_00 = (undefined *)F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),2,(*(undefined4 *)&gen_args[2]));
  (*(undefined4 *)&gen_args[2]) = 0;
  if ((this_00 != (undefined *)0x0) || (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))), this_00 != (undefined *)0x0)) {
    bVar1 = F_00b68bc0(this_00,(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]));
    if (bVar1 != 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00b5b6c0 */
byte F_00b5b6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  (*(int *)(gen_frame + 0x4)) = 0;
LAB_00b5b6d1: ;
  this = (undefined *)((int)this + 4);
  this_00 = (undefined *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  do {
    if (this_00 == (undefined *)0x0) {
      this_00 = *(undefined * PTR32 *)this;
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      goto joined_r0x00b5b6e1;
    }
    while (bVar1 = F_00b68a60(this_00,param_1,&(*(int * PTR32 *)(gen_frame + 0x8))), bVar1 == 0) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
joined_r0x00b5b6e1: ;
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      if (this_00 == (undefined *)0x0) {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
        if (5 < (*(int *)(gen_frame + 0x4))) {
          return 0;
        }
        goto LAB_00b5b6d1;
      }
    }
    if ((*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 0xd) != '\0') &&
       (uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8))), (char)uVar2 == '\0')) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00b5b740 */
byte F_00b5b740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
    bVar1 = F_00b68a60(this_00,param_1,&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (bVar1 != 0) break;
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
  }
  if (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 0xd) == '\0') {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)));
  if ((char)uVar2 != '\0') {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b5b7a0 */
byte F_00b5b7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b7a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  
  this_00 = (undefined *)F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),2,(*(int * PTR32 *)&gen_args[2]));
  (*(int * PTR32 *)&gen_args[2]) = (int *)0x0;
  do {
    if ((this_00 == (undefined *)0x0) && (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))), this_00 == (undefined *)0x0))
    {
      return 0;
    }
    bVar1 = F_00b68b20(this_00,(*(undefined4 *)&gen_args[1]),0xffffffff,&(*(int * PTR32 *)&gen_args[2]));
    if (bVar1 == 0) {
      return 0;
    }
  } while ((*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0xd))) == '\0') ||
          (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x10))))((*(int * PTR32 *)&gen_args[2])), (char)uVar2 != '\0'));
  return 1;
}

/* ref: FUN_00b5b810 */
byte F_00b5b810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b810u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  
  this_00 = (undefined *)F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),2,(*(int * PTR32 *)&gen_args[2]));
  (*(int * PTR32 *)&gen_args[2]) = (int *)0x0;
  do {
    if ((this_00 == (undefined *)0x0) && (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))), this_00 == (undefined *)0x0))
    {
      return 0;
    }
    bVar1 = F_00b68bc0(this_00,(*(undefined4 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[2]));
    if (bVar1 == 0) {
      return 0;
    }
  } while ((*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0xd))) == '\0') ||
          (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x10))))((*(int * PTR32 *)&gen_args[2])), (char)uVar2 != '\0'));
  return 1;
}

/* ref: FUN_00b5b880 */
uint F_00b5b880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined * this_00;
  
  (*(int *)(gen_frame + 0x4)) = 6;
LAB_00b5b895: ;
  this = (undefined *)((int)this + 4);
  this_00 = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  do {
    if (this_00 == (undefined *)0x0) {
      this_00 = *(undefined * PTR32 *)this;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      goto joined_r0x00b5b8ab;
    }
    while( true ) {
      bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      in_EAX = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) break;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
joined_r0x00b5b8ab: ;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      if (this_00 == (undefined *)0x0) {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        if ((*(int *)(gen_frame + 0x4)) == 0) {
          return in_EAX;
        }
        goto LAB_00b5b895;
      }
    }
    in_EAX = F_00bc3440((*(undefined * PTR32 *)(gen_frame + 0x8)),2,param_2,0);
  } while( true );
}

/* ref: FUN_00b5b8f0 */
unsigned int F_00b5b8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5b8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (this_00 != (undefined *)0x0) {
    while( true ) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (bVar1 != 0) break;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
      if (this_00 == (undefined *)0x0) {
        return 0;
      }
    }
    F_00bc3440((*(undefined * PTR32 *)(gen_frame + 0x8)),2,param_2,0);
  }
  return 0;
}

/* ref: FUN_00b5b950 */
unsigned int F_00b5b950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * pvVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  pvVar2 = *(undefined * PTR32 *)((int)this + 8);
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  if (pvVar2 != (undefined *)0x0) {
    while( true ) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      bVar1 = F_00b68a60(pvVar2,param_1,&(*(int * PTR32 *)(gen_frame + 0x8)));
      if (bVar1 != 0) break;
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0xc);
      if (pvVar2 == (undefined *)0x0) {
        return 0;
      }
    }
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 100))((*(int * PTR32 *)(gen_frame + 0x8)))));
    F_00bc36e0(pvVar2);
  }
  return 0;
}

/* ref: FUN_00b5b9b0 */
unsigned int F_00b5b9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5b9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (this_00 != (undefined *)0x0) {
    while( true ) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      bVar1 = F_00b68a60(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (bVar1 != 0) break;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0xc);
      if (this_00 == (undefined *)0x0) {
        return 0;
      }
    }
    F_00bc1f20((*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: FUN_00b5ba00 */
uint F_00b5ba00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ba00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint in_ecx;
  
  uVar1 = F_00b596a0(REFG(void * PTR32, 0x14c4e78),param_1);
  if (uVar1 != 0) {
    F_00bc3ba0(uVar1);
  }
  in_ecx = F_00b5aa80(this,param_1);
  uVar1 = 0;
  if (in_ecx != 0) {
    uVar1 = F_00b68c40(in_ecx);
  }
  return uVar1;
}

/* ref: FUN_00b5ba40 */
uint F_00b5ba40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ba40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00b596a0(REFG(void * PTR32, 0x14c4e78),param_1);
  if (pvVar1 != (undefined *)0x0) {
    F_00bc4380(pvVar1);
  }
  pvVar1 = (undefined *)F_00b5aa80(this,param_1);
  uVar2 = 0;
  if (pvVar1 != (undefined *)0x0) {
    uVar2 = F_00b68c80(pvVar1);
  }
  return uVar2;
}

/* ref: FUN_00b5ba80 */
byte F_00b5ba80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ba80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined * this_00;
  
  this_00 = (undefined *)F_00b5aa80(this,param_1);
  if (this_00 != (undefined *)0x0) {
    bVar1 = F_00b69af0(this_00);
    return bVar1;
  }
  return 1;
}

/* ref: FUN_00b5bab0 */
uint F_00b5bab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5bab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
  F_00bbacc0(((undefined1 *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00b5a9d0(this,((undefined1 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_00b5bae0 */
uint F_00b5bae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5bae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
  F_00bbadd0(((undefined1 *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00b5a9d0(this,((undefined1 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_00b5bb10 */
unsigned int F_00b5bb10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5bb10u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * this;
  byte bVar4;
  int * piVar5;
  int local_8;
  
  local_8 = 6;
  piVar5 = param_1;
  do {
    piVar5 = piVar5 + 1;
    for (iVar1 = *piVar5; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      F_00b698f0(iVar1,param_2,param_3);
    }
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  param_2 = 8.40779e-45;
  piVar5 = param_1;
  do {
    piVar5 = piVar5 + 1;
    puVar2 = (undefined4 *)*piVar5;
    while (this = puVar2, this != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)this[3];
      bVar4 = F_00b69050(this);
      if (bVar4 != 0) {
        iVar1 = this[2];
        iVar3 = this[3];
        if (iVar1 == 0) {
          *piVar5 = iVar3;
        }
        else {
          *(int *)(iVar1 + 0xc) = iVar3;
        }
        if (iVar3 != 0) {
          *(int *)(iVar3 + 8) = iVar1;
        }
        if ((undefined4 *)param_1[0xb] == this) {
          param_1[8] = -1;
          param_1[0xb] = 0;
        }
        if ((undefined4 *)param_1[0xc] == this) {
          param_1[9] = 0;
          param_1[0xc] = 0;
        }
        if ((undefined4 *)param_1[0xd] == this) {
          param_1[10] = 0;
          param_1[0xd] = 0;
        }
        ((code *)*(gen_code32 *)*this)(this,1);
      }
    }
    param_2 = gen_bits2f((int)gen_fl2bits(param_2) + -1);
  } while (param_2 != 0.0);
  return 0;
}

/* ref: FUN_00b5bbf0 */
uint F_00b5bbf0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5bbf0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 uVar1;
  byte bVar2;
  undefined * pvVar3;
  undefined3 extraout_var = 0;
  undefined * this;
  
  pvVar3 = (undefined *)F_00b5aa80((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]));
  uVar1 = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 *)&gen_args[2]) = 0;
  this = pvVar3;
  while ((this != (undefined *)0x0 || (this = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))), this != (undefined *)0x0))) {
    bVar2 = F_00b68ad0(this,uVar1,&(*(undefined4 *)&gen_args[2]));
    if (bVar2 == 0) {
      return CONCAT31(extraout_var,bVar2);
    }
    pvVar3 = (undefined *)F_00bd1550((*(undefined4 *)&gen_args[2]),(*(float *)&gen_args[1]));
  }
  return (uint)pvVar3;
}

/* ref: FUN_00b5bc50 */
uint F_00b5bc50(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb5bc50u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined * this;
  
  (*(int *)(gen_frame + 0x4)) = 6;
LAB_00b5bc65: ;
  param_1 = param_1 + 1;
  this = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  do {
    if (this == (undefined *)0x0) {
      this = (undefined *)*param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      goto joined_r0x00b5bc7b;
    }
    while( true ) {
      bVar1 = F_00b68a60(this,param_2,&(*(undefined4 *)(gen_frame + 0x8)));
      in_EAX = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) break;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      this = *(undefined * PTR32 *)((int)this + 0xc);
joined_r0x00b5bc7b: ;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      if (this == (undefined *)0x0) {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        if ((*(int *)(gen_frame + 0x4)) == 0) {
          return in_EAX;
        }
        goto LAB_00b5bc65;
      }
    }
    in_EAX = F_00bd1550((*(undefined4 *)(gen_frame + 0x8)),param_3);
  } while( true );
}

/* ref: FUN_00b5bcc0 */
unsigned int F_00b5bcc0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb5bcc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this;
  
  (*(int *)(gen_frame + 0x8)) = param_1;
  this = *(undefined * PTR32 *)(param_1 + 8);
  (*(int *)(gen_frame + 0x8)) = 0;
  if (this != (undefined *)0x0) {
    while( true ) {
      (*(int *)(gen_frame + 0x8)) = 0;
      bVar1 = F_00b68a60(this,param_2,&(*(int *)(gen_frame + 0x8)));
      if (bVar1 != 0) break;
      (*(int *)(gen_frame + 0x8)) = 0;
      this = *(undefined * PTR32 *)((int)this + 0xc);
      if (this == (undefined *)0x0) {
        return 0;
      }
    }
    F_00bd1550((*(int *)(gen_frame + 0x8)),param_3);
  }
  return 0;
}

/* ref: FUN_00b5bd20 */
uint F_00b5bd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5bd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00406b90(0x9f8,0,0);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00b68450(uVar2,param_1);
  }
  *(undefined4 *)(uVar2 + 8) = 0;
  *(undefined4 *)(uVar2 + 0xc) = *(undefined4 *)((int)this + param_1 * 4 + 4);
  iVar1 = *(int *)((int)this + param_1 * 4 + 4);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 8) = uVar2;
  }
  *(uint *)((int)this + param_1 * 4 + 4) = uVar2;
  return uVar2;
}

/* ref: FUN_00b5bd80 */
unsigned int F_00b5bd80(unsigned int gen_a0)
{
  GEN_ENTER(0xb5bd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f153c));
  F_00b5ac70(this);
  REFG(undefined4, 0x14c4e84) = 0;
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x38));
  return 0;
}

/* ref: FUN_00b5bdb0 */
uint F_00b5bdb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5bdb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b5ac70(this);
  if (this != (undefined *)0x0) {
    uVar1 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  }
  return uVar1;
}

/* ref: FUN_00b5bdd0 */
uint F_00b5bdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5bdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b5aa80(this,param_1);
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 0x9f4) = 1;
    return uVar1;
  }
  uVar1 = F_00406b90(0x9f8,0,0);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00b68450(uVar1,5);
  }
  *(undefined4 *)(uVar1 + 8) = 0;
  *(undefined4 *)(uVar1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  if (*(int *)((int)this + 0x18) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 8))) = uVar1;
  }
  *(uint *)((int)this + 0x18) = uVar1;
  F_00bbadb0(uVar1 + 0x9a8,param_1,0);
  *(undefined1 *)(uVar1 + 0x9f4) = 1;
  return uVar1;
}

/* ref: FUN_00b5be60 */
uint F_00b5be60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb5be60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint uVar1;
  undefined * this_00;
  
  this_00 = (undefined *)F_00b5bdd0(this,param_2);
  uVar1 = *(uint *)((int)this + 0x1c);
  *(uint *)((int)this + 0x1c) = uVar1 + 1;
  *param_1 = uVar1 & 0x3fffffff | 0x40000000;
  F_00b69120(this_00,param_1,param_3,param_4,param_5,param_6,0);
  return (uint)param_1;
}

/* ref: FUN_00b5beb0 */
uint F_00b5beb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5beb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00b5b260(this,param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1);
  return uVar2;
}

/* ref: FUN_00b5bee0 */
uint F_00b5bee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5bee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  if (this_00 == (undefined *)0x0) {
    uVar1 = F_00406b90(0x9f8,0,0);
    if (uVar1 == 0) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = (undefined *)F_00b68450(uVar1,1);
    }
    *(undefined4 *)((int)this_00 + 8) = 0;
    *(undefined4 *)((int)this_00 + 0xc) = *(undefined4 *)((int)this + 8);
    if (*(int *)((int)this + 8) != 0) {
      *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 8))) = this_00;
    }
    *(undefined * PTR32 *)((int)this + 8) = this_00;
  }
  uVar1 = *(uint *)((int)this + 0x1c);
  *(uint *)((int)this + 0x1c) = uVar1 + 1;
  *param_1 = uVar1 & 0x3fffffff | 0x40000000;
  F_00b69380(this_00,param_1,param_2,param_3);
  return (uint)param_1;
}

/* ref: FUN_00b5bf60 */
uint F_00b5bf60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xb5bf60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  undefined * this_00;
  
  this_00 = param_3;
  if (param_3 == (undefined *)0x0) {
    this_00 = (undefined *)F_00b5aaf0(this,5,param_4);
    if (this_00 == (undefined *)0x0) {
      this_00 = (undefined *)F_00b5aaf0(this,2,param_4);
      if (this_00 == (undefined *)0x0) {
        this_00 = (undefined *)F_00b5bd20(this,2);
        F_00bbb060((undefined *)((int)this_00 + 0x9a8),param_4);
      }
    }
  }
  uVar1 = *(uint *)((int)this + 0x1c);
  *(uint *)((int)this + 0x1c) = uVar1 + 1;
  *param_1 = uVar1 & 0x3fffffff | 0x40000000;
  F_00b693d0(this_00,param_1,param_2,param_4,param_5,param_6,param_7);
  return (uint)param_1;
}

/* ref: FUN_00b5bff0 */
uint F_00b5bff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xb5bff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[12];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  uint uVar1;
  undefined4 uVar2;
  undefined * this_00;
  
  uVar2 = (*(undefined4 *)&gen_args[4]);
  if (*(*(int * PTR32 *)&gen_args[2]) != 0x424c4d54) {
    uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = uVar1 + 1;
    *(*(uint * PTR32 *)&gen_args[1]) = uVar1 & 0x3fffffff | 0x40000000;
    return (uint)(*(uint * PTR32 *)&gen_args[1]);
  }
  this_00 = (*(undefined * PTR32 *)&gen_args[3]);
  if ((*(undefined * PTR32 *)&gen_args[3]) == (undefined *)0x0) {
    this_00 = (undefined *)F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),5,(*(undefined4 *)&gen_args[4]));
    if (this_00 == (undefined *)0x0) {
      this_00 = (undefined *)F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),2,uVar2);
      if (this_00 == (undefined *)0x0) {
        this_00 = (undefined *)F_00b5bd20((*(undefined * PTR32 *)&gen_args[0]),2);
        F_00bbb060((undefined *)((int)this_00 + 0x9a8),uVar2);
      }
    }
  }
  (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) & 0x3fffffff | 0x40000000)));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 1;
  F_00b69440(this_00,&(*(undefined * PTR32 *)&gen_args[3]),(*(int * PTR32 *)&gen_args[2]),uVar2,(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[9]),(*(undefined4 *)&gen_args[10]),
               (*(undefined4 *)&gen_args[11]));
  *(*(uint * PTR32 *)&gen_args[1]) = (uint)(*(undefined * PTR32 *)&gen_args[3]);
  return (uint)(*(uint * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00b5c0c0 */
uint F_00b5c0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined * this_00;
  
  uVar1 = F_00bbac80(((undefined1 *)(gen_frame + 0x18)));
  if (param_1 != 0) {
    F_00bbadd0(((undefined1 *)(gen_frame + 0x18)),param_1);
    this_00 = (undefined *)F_00b5aaf0(this,3,((undefined1 *)(gen_frame + 0x18)));
    if (this_00 != (undefined *)0x0) {
      F_00b69a60(this_00,0);
    }
    F_00bbac80(((undefined1 *)(gen_frame + 0x4)));
    F_00bbadd0(((undefined1 *)(gen_frame + 0x4)),param_1);
    uVar1 = F_00b5a9d0(this,((undefined1 *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_00b5c120 */
uint F_00b5c120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8)
{
  GEN_ENTER(0xb5c120u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  memcpy(&gen_args[8], &gen_a8, sizeof gen_a8);
  undefined4 uVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[3]);
  if ((*(int *)&gen_args[2]) != 0) {
    uVar2 = F_00b5aaf0((*(undefined * PTR32 *)&gen_args[0]),3,(*(uint *)&gen_args[3]));
    if (uVar2 == 0) {
      uVar2 = F_00406b90(0x9f8,0,0);
      if (uVar2 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = F_00b68450(uVar2,3);
      }
      *(undefined4 *)(uVar2 + 8) = 0;
      *(undefined4 *)(uVar2 + 0xc) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != 0) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 8))) = uVar2;
      }
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar2;
      F_00bbb060((undefined *)(uVar2 + 0x9a8),uVar1);
    }
    (*(uint *)&gen_args[3]) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) & 0x3fffffff | 0x40000000;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 1;
    in_EAX = F_00b694c0(uVar2,&(*(uint *)&gen_args[3]),(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[2]),uVar1,(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),
                          (*(float *)&gen_args[8]));
  }
  return in_EAX;
}

/* ref: FUN_00b5c1e0 */
uint F_00b5c1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int iVar2;
  int iVar3;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x18)));
  F_00bbadf0(((undefined1 *)(gen_frame + 0x18)),param_1,0);
  uVar1 = F_00bbaf90(((undefined1 *)(gen_frame + 0x18)));
  if (uVar1 != 0) {
    iVar2 = uVar1 + 0x16c0;
    iVar3 = 3;
    do {
      if (iVar2 != 0) {
        F_00bbac80(((undefined1 *)(gen_frame + 0x4)));
        F_00bbadd0(((undefined1 *)(gen_frame + 0x4)),iVar2);
        F_00b5a9d0(this,((undefined1 *)(gen_frame + 0x4)));
      }
      iVar2 = iVar2 + 0x7a0;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar1 = F_00b5a9d0(this,((undefined1 *)(gen_frame + 0x18)));
  return uVar1;
}

/* ref: FUN_00b5c260 */
uint F_00b5c260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8)
{
  GEN_ENTER(0xb5c260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  float param_9 = (float)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint in_EAX = 0;
  
  if (param_3 != 0) {
    F_00bbac80(((undefined1 *)(gen_frame + 0x4)));
    F_00bbac80(((undefined1 *)(gen_frame + 0x18)));
    F_00bbadd0(((undefined1 *)(gen_frame + 0x4)),param_4);
    F_00bbadf0(((undefined1 *)(gen_frame + 0x18)),param_5,0);
    in_EAX = F_00b5c120(param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x18)),param_6,param_7,param_8,param_9)
    ;
  }
  return in_EAX;
}

/* ref: FUN_00b5c2e0 */
byte F_00b5c2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c2e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00bbadb0(in_ecx + 0x9a8,param_2,0);
  return bVar1;
}

/* ref: FUN_00b5c300 */
uint F_00b5c300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00bbad60((undefined *)((int)this + 0x9a8),param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00b5c310 */
unsigned int F_00b5c310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bbb060((undefined *)((int)this + 0x9a8),param_1);
  return 0;
}

/* ref: FUN_00b5c330 */
uint F_00b5c330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bbaea0((undefined *)((int)this + 0x9a8),param_1);
  return uVar1;
}

/* ref: FUN_00b5c3b0 */
uint F_00b5c3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c3b0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b5c3d0 */
uint F_00b5c3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c3d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00b5c3e0 */
uint F_00b5c3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5c3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  *(uint *)this = param_1 & 0x3fffffff | param_2 << 0x1e;
  return (uint)this;
}

/* ref: FUN_00b5c440 */
uint F_00b5c440(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0x27;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f1534));
  puVar1 = (undefined4 *)((int)this + 0x48);
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(undefined2 *)(puVar1 + 0xb) = 1;
    *(undefined1 *)((int)puVar1 + 0x2e) = 0;
    puVar1 = puVar1 + 0x10;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return (uint)this;
}

/* ref: FUN_00b5c490 */
uint F_00b5c490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = *param_1;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 8) = (int)this + -8;
  }
  *param_1 = (int)this + -8;
  return (uint)param_1;
}

/* ref: FUN_00b5c4c0 */
unsigned int F_00b5c4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = iVar1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::ActionTimelineManager::vf0 */
uint F_00b5c4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f153c));
  F_00b5ac70(this);
  REFG(undefined4, 0x14c4e84) = 0;
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b5c540 */
uint F_00b5c540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00b5c560 */
uint F_00b5c560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b5c570 */
uint F_00b5c570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a1;
  *(LPCRITICAL_SECTION *)this = param_1;
  gen_imp_EnterCriticalSection(param_1);
  return (uint)this;
}

/* ref: FUN_00b5c5a0 */
unsigned int F_00b5c5a0(float gen_a0)
{
  GEN_ENTER(0xb5c5a0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b5c5c0 */
uint F_00b5c5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f2de8));
  *(undefined4 *)((int)this + 4) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined1 *)((int)this + 0x78) = 0;
  *(undefined2 *)((int)this + 0x20) = 1;
  return (uint)this;
}

/* ref: FUN_00b5c5f0 */
uint F_00b5c5f0(void)
{
  GEN_ENTER(0xb5c5f0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = (uint)REFG(undefined4 * PTR32, 0x14c4e90);
  if (REFG(undefined4 * PTR32, 0x14c4e90) == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)F_00406b90(0x7c,0,0);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10f2de8));
      puVar1[1] = 0;
      gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 2));
      puVar1[0x1d] = 0;
      *(undefined1 *)(puVar1 + 0x1e) = 0;
      *(undefined2 *)(puVar1 + 8) = 1;
      REFG(undefined4 * PTR32, 0x14c4e90) = puVar1;
      return (uint)puVar1;
    }
    uVar2 = 0;
  }
  REFG(undefined4 * PTR32, 0x14c4e90) = (undefined4 *)uVar2;
  return uVar2;
}

/* ref: FUN_00b5c650 */
uint F_00b5c650(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c650u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  
  if (param_1 != (undefined *)0x0) {
    in_EAX = F_00bcd4b0(param_1);
  }
  return in_EAX;
}

/* ref: FUN_00b5c670 */
byte F_00b5c670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x20) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b5c680 */
byte F_00b5c680(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(char *)((int)this + 0x20) == '\0') {
    return 1;
  }
  bVar1 = F_005e1640();
  return bVar1 != 0;
}

/* ref: FUN_00b5c6a0 */
uint F_00b5c6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c6a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  do {
    if (*param_1 == **((int * PTR32 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x133b520) + uVar1)))) {
      return (&REFG(undefined4, 0x133b518))[iVar2 * 7];
    }
    uVar1 = uVar1 + 0x1c;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0xd58);
  return 0xffffffff;
}

/* ref: FUN_00b5c6f0 */
uint F_00b5c6f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c6f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  if ((0x79 < param_1) ||
     (puVar2 = &REFG(undefined4, 0x133b518) + param_1 * 7, (&REFG(undefined4, 0x133b518))[param_1 * 7] != param_1)) {
    iVar3 = 0;
    uVar1 = 0;
    do {
      if (*(uint *)((int)&REFG(undefined4, 0x133b518) + uVar1) == param_1) {
        return (uint)(&REFG(undefined4, 0x133b518) + iVar3 * 7);
      }
      uVar1 = uVar1 + 0x1c;
      iVar3 = iVar3 + 1;
    } while (uVar1 < 0xd58);
    puVar2 = (undefined4 *)0x0;
  }
  return (uint)puVar2;
}

/* ref: FUN_00b5c750 */
uint F_00b5c750(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b5c6f0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 0xc);
}

/* ref: FUN_00b5c770 */
byte F_00b5c770(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c770u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b5c6f0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(byte *)(uVar1 + 0x18);
}

/* ref: FUN_00b5c790 */
byte F_00b5c790(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c790u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b5c6f0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(byte *)(uVar1 + 0x19);
}

/* ref: FUN_00b5c7b0 */
uint F_00b5c7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c7b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b5c6f0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(int *)(uVar1 + 4) + 0xfU & 0xfffffff0;
}

/* ref: FUN_00b5c7e0 */
uint F_00b5c7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5c7e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b5c6f0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 0x14);
}

/* ref: FUN_00b5c800 */
uint F_00b5c800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  
  F_00bcd470(((undefined1 *)(gen_frame + 0x4)),param_1);
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    bVar1 = F_00bcd530(this_00,((undefined1 *)(gen_frame + 0x4)));
    if (bVar1 != 0) break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 8);
  }
  return (uint)this_00;
}

/* ref: FUN_00b5c850 */
uint F_00b5c850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5c850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  byte bVar2;
  undefined * this_00;
  
  if (param_1[1] == -1) {
    F_00bcd470(((undefined1 *)(gen_frame + 0x4)),*param_1);
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    if (this_00 != (undefined *)0x0) {
      do {
        bVar2 = F_00bcd530(this_00,((undefined1 *)(gen_frame + 0x4)));
        if (bVar2 != 0) {
          return (uint)this_00;
        }
        this_00 = *(undefined * PTR32 *)((int)this_00 + 8);
      } while (this_00 != (undefined *)0x0);
      return 0;
    }
  }
  else {
    for (uVar1 = *(uint *)((int)this + 4); uVar1 != 0; uVar1 = *(uint *)(uVar1 + 8)) {
      if (*(int *)(uVar1 + 0x50) == param_1[1]) {
        return uVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b5c8c0 */
byte F_00b5c8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5c8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  iVar3 = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  if (*(char *)(*param_1 + (int)param_1) == '\0') {
    F_005ecfa0();
  }
  else {
    if ((char)param_2 == '\0') {
      iVar2 = 0;
      if ((*(byte *)(param_1 + 0x11) & 2) == 0) {
        iVar2 = param_1[1];
      }
      else {
        iVar3 = param_1[1];
      }
      F_005f9b10((char *)(*param_1 + (int)param_1),iVar2,iVar3,param_1 + 0xf);
    }
    F_005f32e0(param_1 + 2);
    *(undefined1 *)((int)this + 0x20) = 1;
  }
  bVar1 = *(byte *)((int)this + 0x20);
  *(undefined1 *)((int)this + 0x21) = 1;
  piVar4 = param_1;
  piVar5 = (int *)((int)this + 0x24);
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  return bVar1;
}

/* ref: FUN_00b5c930 */
unsigned int F_00b5c930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5c930u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  char * pcVar2;
  bool bVar3;
  
  pcVar2 = (char *)(*(uint *)&gen_args[1]);
  if ((*(uint *)&gen_args[1]) == 0) {
    pcVar2 = (char *)((*(int *)&gen_args[0]) + 0x44);
  }
  if (*pcVar2 != '\0') {
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(((float)GEN_TOF(((float10)*(int *)(pcVar2 + 0x18) *
                                       (float10)*(double *)&REFG(undefined, 0x10c3f40)))));
    if (*(int *)(pcVar2 + 8) == 0) {
      F_00b7c110(&REFG(undefined, 0x133e5c0),0,GEN_TOF(gen_bits2f((*(uint *)&gen_args[1]))));
    }
    else {
      F_00b7c0d0(&REFG(undefined, 0x133e5c0),0,(uint)(byte)pcVar2[8],GEN_TOF(gen_bits2f((*(uint *)&gen_args[1]))));
    }
  }
  iVar1 = REFG(int, 0x137104c);
  if ((pcVar2[2] == '\0') ||
     (bVar3 = GEN_ISNAN(*(float *)(pcVar2 + 0x10)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
     (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),1),
     bVar3 == (bVar3 || *(float *)(pcVar2 + 0x10) == *(float *)&REFG(undefined, 0x1088114)))) {
    (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff00;
  }
  if (pcVar2[1] != '\0') {
    if (-1 < *(int *)(pcVar2 + 0xc)) {
      F_0071fa20((undefined *)(REFG(int, 0x137104c) + 0x1210),*(int *)(pcVar2 + 0xc) / 0x3c,
                   *(int *)(pcVar2 + 0xc) % 0x3c,(*(uint *)&gen_args[1]));
      return 0;
    }
    *(undefined4 *)(REFG(int, 0x137104c) + 0x1248) = 0;
    *(undefined4 *)(iVar1 + 0x124c) = 0;
    if (*(char *)(iVar1 + 0x1230) != '\0') {
      *(undefined1 *)(iVar1 + 0x1230) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00b5ca00 */
uint F_00b5ca00(unsigned int gen_a0)
{
  GEN_ENTER(0xb5ca00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x74) != 0) {
    piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),*(int *)((int)this + 0x74));
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      if ((char)uVar2 == '\0') {
        uVar2 = F_0049c160(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
        if (uVar2 == 0x100) {
          uVar2 = 0;
        }
        ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,uVar2 + 1);
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0,0,1);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00b5ca70 */
byte F_00b5ca70(unsigned int gen_a0)
{
  GEN_ENTER(0xb5ca70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x74) != 0) {
    piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),*(int *)((int)this + 0x74));
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      iVar4 = 0;
      if (0 < (int)uVar2) {
        do {
          piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,iVar4)));
          if (piVar3 == (int *)0x0) {
            return 1;
          }
          ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar2);
      }
    }
  }
  return 0;
}

/* ref: FUN_00b5cad0 */
uint F_00b5cad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5cad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint * puVar4;
  uint uVar5;
  byte * pbVar6;
  int iVar7;
  byte * pbVar8;
  bool bVar9;
  int local_8;
  
  if ((*(int *)((int)this + 0x74) != 0) &&
     (piVar2 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),*(int *)((int)this + 0x74)),
     piVar2 != (int *)0x0)) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
    local_8 = 0;
    if (0 < (int)uVar3) {
      do {
        this_00 = (undefined *)F_0052fbd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),
                                       *(undefined4 *)((int)this + 0x74),local_8,0,0);
        if (this_00 != (undefined *)0x0) {
          puVar4 = (uint *)F_00cb0910(this_00,0);
          uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2);
          pbVar8 = param_1;
          if (uVar5 < 3) {
            pbVar6 = (byte *)(*puVar4 + 4);
          }
          else {
            pbVar6 = ((byte *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
          }
          do {
            bVar1 = *pbVar8;
            bVar9 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_00b5cb90: ;
              iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_00b5cb95;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar9 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_00b5cb90;
            pbVar8 = pbVar8 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00b5cb95: ;
          if (iVar7 == 0) {
            puVar4 = (uint *)F_00cb0910(this_00,1);
            uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2);
            if (2 < uVar3) {
              return (*puVar4 & 0xffffff) + (int)puVar4;
            }
            return *puVar4 + 4;
          }
        }
        local_8 = local_8 + 1;
        if ((int)uVar3 <= local_8) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

/* ref: FUN_00b5cbf0 */
uint F_00b5cbf0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5cbf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x74) != 0) {
    piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),*(int *)((int)this + 0x74));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
    }
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x74) != 0) {
    uVar2 = F_00406ad0(*(int *)((int)this + 0x74));
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  return uVar2;
}

/* ref: FUN_00b5cc40 */
uint F_00b5cc40(unsigned int gen_a0)
{
  GEN_ENTER(0xb5cc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x74) != 0) {
    piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),*(int *)((int)this + 0x74));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
    }
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x74) != 0) {
    uVar2 = F_00406ad0(*(int *)((int)this + 0x74));
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  return uVar2;
}

/* ref: FUN_00b5cc90 */
unsigned int F_00b5cc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5cc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(char *)((int)this + 0x21) != '\0') {
    if ((*(char *)((int)this + 0x20) != '\0') && (bVar1 = F_005e1640(), bVar1 == 0)) {
      return 0;
    }
    F_00b5c930(this,0,0);
    *(undefined1 *)(REFG(int, 0x1370c1c) + 5) = 1;
    *(undefined1 *)((int)this + 0x21) = 0;
  }
  return 0;
}

/* ref: FUN_00b5ccd0 */
uint F_00b5ccd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5ccd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa70];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0xa68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa6c);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  (*(undefined4 *)(gen_frame + 0x10)) = param_2;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this_00 = (undefined *)F_00b5c850(this,param_1);
  if (this_00 == (undefined *)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  else {
    F_00bcd3c0(this_00);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    uVar2 = *(uint *)((int)this_00 + 0x5c) >> 1;
    if (((uVar2 & 1) == 0) || ((uVar2 & 1) == 0)) {
      bVar1 = F_00bcd860(this_00);
      if (bVar1 == 0) {
        uVar2 = F_00bcd800(this_00,((undefined1 *)(gen_frame + 0xc)));
        if (uVar2 != 0) {
          F_00b5c440(((undefined1 *)(gen_frame + 0x18)));
          uVar2 = F_00bcdf00(uVar2,(*(undefined4 *)(gen_frame + 0x10)));
          F_00bcd4b0(this_00);
          F_00c47745((*(uint *)(gen_frame + 0xa68)) ^ (uint)(uint)(gen_frame + 0xa6c));
          return uVar2;
        }
      }
    }
    F_00bcd4b0(this_00);
  }
  F_00c47745((*(uint *)(gen_frame + 0xa68)) ^ (uint)(uint)(gen_frame + 0xa6c));
  return 0;
}

/* ref: FUN_00b5cdb0 */
uint F_00b5cdb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5cdb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  
  this_00 = (undefined *)F_00406b90(0x60,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00bcd630(this_00);
  }
  piVar1 = (int *)(uVar3 + 4);
  iVar2 = *(int *)((int)this + 4);
  if (*(int *)((int)this + 4) == 0) {
    *piVar1 = 0;
    *(undefined4 *)(uVar3 + 8) = 0;
    *(uint *)((int)this + 4) = uVar3;
    return uVar3;
  }
  do {
    iVar4 = iVar2;
    iVar2 = *(int *)(iVar4 + 8);
  } while (*(int *)(iVar4 + 8) != 0);
  if (piVar1 != (int *)0x0) {
    *(uint *)(iVar4 + 8) = uVar3;
    *piVar1 = iVar4;
    *(undefined4 *)(uVar3 + 8) = 0;
    return uVar3;
  }
  *(undefined4 *)(iVar4 + 8) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar4;
  *(undefined4 *)(uVar3 + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b5ce20 */
unsigned int F_00b5ce20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5ce20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    *(int *)((int)this + 4) = iVar2;
  }
  else {
    *(int *)(iVar1 + 8) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b5ce50 */
uint F_00b5ce50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xb5ce50u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = (*(undefined4 *)&gen_args[3]);
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[3]))) {
  case 0: ;
  case 7: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x158,0,0);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be32d0(pvVar6);
        goto LAB_00b5ce84;
      }
LAB_00b5cec2: ;
      piVar5 = (int *)0x0;
      goto LAB_00b5ce84;
    }
    piVar5 = (int *)F_00be32d0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 1: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0xa4,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be71f0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be71f0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 2: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be6c60(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be6c60((*(int * PTR32 *)&gen_args[1]));
    break;
  case 3: ;
  case 4: ;
  case 5: ;
  case 8: ;
  case 0xc: ;
  case 0x17: ;
  case 0x19: ;
  case 0x1a: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x90,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be2ce0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be2ce0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 6: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0xb8,0,0);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be4f60(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be4f60((*(int * PTR32 *)&gen_args[1]));
    break;
  case 9: ;
  case 0x27: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x160,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be2420(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be2420((*(int * PTR32 *)&gen_args[1]));
    break;
  case 10: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be6940(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be6940((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0xb: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be6790(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be6790((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0xd: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f19ac));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f19ac));
    break;
  case 0xe: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be2190(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be2190((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0xf: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1acc));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1acc));
    break;
  case 0x10: ;
  case 0x1b: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1bec));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1bec));
    break;
  case 0x11: ;
  case 0x1c: ;
  case 0x3a: ;
  case 0x3b: ;
  case 0x4b: ;
  case 0x68: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x94,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00b5e720(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00b5e720((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x12: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00b5e750(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00b5e750((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x13: ;
  case 0x58: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1f4c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1f4c));
    break;
  case 0x14: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f206c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f206c));
    break;
  case 0x15: ;
  case 0x16: ;
  case 0x32: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00b5e7e0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00b5e7e0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x18: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f22ac));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f22ac));
    break;
  case 0x1d: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x160,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be1aa0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be1aa0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x1e: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0xc0,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be0fd0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be0fd0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x1f: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be06a0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be06a0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x20: ;
  case 0x4a: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00b5e840(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00b5e840((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x21: ;
  case 0x37: ;
  case 0x49: ;
  case 0x6a: ;
  case 0x72: ;
  case 0x75: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f24ec));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f24ec));
    break;
  case 0x22: ;
  case 0x38: ;
  case 0x6b: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00be0340(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00be0340((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x23: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x90,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdfdc0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdfdc0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x24: ;
  case 0x25: ;
  case 0x26: ;
  case 0x34: ;
  case 0x35: ;
  case 0x36: ;
  case 0x67: ;
  case 0x6c: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0xa8,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bde810(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bde810((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x28: ;
  case 0x2a: ;
  case 0x50: ;
  case 0x60: ;
  case 0x6d: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f260c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f260c));
    break;
  case 0x29: ;
  case 0x33: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x90,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00b5e900(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00b5e900((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x2b: ;
  case 0x2c: ;
  case 0x2d: ;
  case 0x2e: ;
  case 0x2f: ;
  case 0x30: ;
  case 0x31: ;
  case 0x44: ;
  case 0x45: ;
  case 0x46: ;
  case 0x71: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f272c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f272c));
    break;
  case 0x39: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bddc60(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bddc60((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x3c: ;
  case 0x3d: ;
  case 0x3e: ;
  case 0x3f: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f296c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f296c));
    break;
  case 0x40: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x94,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdd350(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdd350((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x41: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2a8c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2a8c));
    break;
  case 0x42: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00b5e9e0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00b5e9e0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x43: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2ccc));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2ccc));
    break;
  case 0x47: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2f14));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2f14));
    break;
  case 0x48: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f3154));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f3154));
    break;
  case 0x4c: ;
  case 0x4d: ;
  case 0x4e: ;
  case 0x4f: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0xbc,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdcc00(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdcc00((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x51: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdc930(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdc930((*(int * PTR32 *)&gen_args[1]));
    break;
  default: ;
    return 0;
  case 0x53: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdc7c0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdc7c0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x54: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdc660(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdc660((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x55: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdc5b0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdc5b0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x56: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdc380(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdc380((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x57: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdc040(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdc040((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x59: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdbfa0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdbfa0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x5a: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      piVar5 = (int *)F_00406b90(0x88,0,0x10);
      if (piVar5 != (int *)0x0) {
        F_00bd2d80(piVar5);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2df4));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[1]));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2df4));
    break;
  case 0x5b: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdbf00(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdbf00((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x5c: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdbbc0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdbbc0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x5d: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0xa8,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdb820(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdb820((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x5e: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdb580(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdb580((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x5f: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0xa8,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdb250(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdb250((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x61: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x90,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bdadc0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bdadc0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x62: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bda880(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bda880((*(int * PTR32 *)&gen_args[1]));
    break;
  case 99: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bda4d0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bda4d0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 100: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bda2d0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bda2d0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x65: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bda080(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bda080((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x66: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd9cb0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd9cb0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x69: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd9b40(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd9b40((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x6e: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd9a50(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd9a50((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x6f: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd98d0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd98d0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x70: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0xa0,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bde070(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bde070((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x73: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd9720(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd9720((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x74: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd95f0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd95f0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x76: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd8ac0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd8ac0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x77: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd86c0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd86c0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x78: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x90,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd83b0(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd83b0((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x79: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x88,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd7d30(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd7d30((*(int * PTR32 *)&gen_args[1]));
    break;
  case 0x7a: ;
    if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
      pvVar6 = (undefined *)F_00406b90(0x8c,0,0x10);
      if (pvVar6 != (undefined *)0x0) {
        piVar5 = (int *)F_00bd7a90(pvVar6);
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = (int *)F_00bd7a90((*(int * PTR32 *)&gen_args[1]));
  }
  *(undefined1 *)((int)piVar5 + 0x16) = 1;
LAB_00b5ce84: ;
  piVar5[1] = (*(int *)&gen_args[4]);
  uVar4 = F_00b5c6f0((*(undefined4 *)&gen_args[3]));
  if (uVar4 == 0) {
    uVar8 = 0;
    uVar7 = 0;
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(uVar4 + 0x19);
    uVar2 = *(undefined1 *)(uVar4 + 0x18);
    uVar8 = *(undefined4 *)(uVar4 + 0x14);
    uVar7 = *(undefined4 *)(uVar4 + 0xc);
  }
  (*(undefined4 *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[3]), 1, 3),uVar2);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),uVar1)));
  ((code *)*(gen_code32 *)(*piVar5 + 0x30))
            (piVar5,(*(undefined4 *)&gen_args[2]),uVar3,uVar7,uVar8,(*(undefined4 *)&gen_args[3]),(*(int * PTR32 *)&gen_args[1]),(undefined4)gen_fl2bits((*(float *)&gen_args[5])));
  return (uint)piVar5;
}

/* ref: FUN_00b5e020 */
unsigned int F_00b5e020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5e020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  uint uVar2;
  char * pcVar3;
  
  if (param_1 != (char *)0x0) {
    uVar2 = F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1);
    if (uVar2 != 0) {
      pcVar3 = param_1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (*(int *)((int)this + 0x74) != 0) {
        F_00406ad0(*(int *)((int)this + 0x74));
        *(undefined4 *)((int)this + 0x74) = 0;
      }
      uVar2 = F_00406bb0(pcVar3 + (1 - (int)(param_1 + 1)),0,0);
      *(uint *)((int)this + 0x74) = uVar2;
      F_00c49908(uVar2,pcVar3 + (1 - (int)(param_1 + 1)),param_1);
      F_00b5ca00(this);
    }
  }
  return 0;
}

/* ref: FUN_00b5e0a0 */
unsigned int F_00b5e0a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f2de8));
  if (*(int *)((int)this + 0x74) != 0) {
    piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),*(int *)((int)this + 0x74));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
    }
  }
  if (*(int *)((int)this + 0x74) != 0) {
    F_00406ad0(*(int *)((int)this + 0x74));
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  REFG(undefined4, 0x14c4e90) = 0;
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

/* ref: FUN_00b5e100 */
unsigned int F_00b5e100(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(char *)((int)this + 0x78) == '\0') {
    if (*(int *)((int)this + 0x74) != 0) {
      piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),*(int *)((int)this + 0x74));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
      }
    }
    if (*(int *)((int)this + 0x74) != 0) {
      F_00406ad0(*(int *)((int)this + 0x74));
      *(undefined4 *)((int)this + 0x74) = 0;
    }
    *(undefined1 *)((int)this + 0x78) = 1;
  }
  return 0;
}

/* ref: FUN_00b5e150 */
uint F_00b5e150(unsigned int gen_a0)
{
  GEN_ENTER(0xb5e150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x74) != 0) {
    piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),*(int *)((int)this + 0x74));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
    }
  }
  if (*(int *)((int)this + 0x74) != 0) {
    F_00406ad0(*(int *)((int)this + 0x74));
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  uVar2 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  return uVar2;
}

