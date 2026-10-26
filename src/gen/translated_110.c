#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00a2e7a0 */
uint F_00a2e7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2e7a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2e7c0 */
unsigned int F_00a2e7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2e7c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a2e7f0 */
unsigned int F_00a2e7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2e7f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a2e820 */
unsigned int F_00a2e820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2e820u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    puVar2 = (undefined4 *)(param_2 + 0x54);
    puVar3 = (undefined4 *)((int)param_1 + 0x54);
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00a2e850 */
unsigned int F_00a2e850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2e850u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  }
  return 0;
}

/* ref: FUN_00a2e880 */
uint F_00a2e880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2e880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (0xf < *(uint *)((int)this + 0x14)) {
    F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x2c4);
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a2e8d0 */
unsigned int F_00a2e8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2e8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  undefined1 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00a2e900 */
unsigned int F_00a2e900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2e900u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a2e930 */
byte F_00a2e930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2e930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a2e950 */
uint F_00a2e950(unsigned int gen_a0)
{
  GEN_ENTER(0xa2e950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  if (0xf < *(uint *)((int)this + 0x30)) {
    F_00429760(*(undefined4 *)((int)this + 0x1c),*(uint *)((int)this + 0x30) + 1,0x2c4);
  }
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  uVar1 = *(uint *)((int)this + 0x14);
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x2c4);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_00a2e9b0 */
uint F_00a2e9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2e9b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a2e9c0 */
uint F_00a2e9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2e9c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a2e9d0 */
uint F_00a2e9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2e9d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a2e9f0 */
uint F_00a2e9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2e9f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a2ea10 */
uint F_00a2ea10(unsigned int gen_a0)
{
  GEN_ENTER(0xa2ea10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a2d290(this);
  return (uint)this;
}

/* ref: FUN_00a2ea20 */
uint F_00a2ea20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2ea20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a2ea40 */
uint F_00a2ea40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2ea40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a2ea50 */
uint F_00a2ea50(unsigned int gen_a0)
{
  GEN_ENTER(0xa2ea50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a2d330(this);
  return (uint)this;
}

/* ref: FUN_00a2ea60 */
uint F_00a2ea60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa2ea60u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00a2eac0 */
uint F_00a2eac0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2eac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2c4);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a2eb00 */
uint F_00a2eb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa2eb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = *(int *)((int)this + 4) - param_3;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a2eb50 */
uint F_00a2eb50(unsigned int gen_a0)
{
  GEN_ENTER(0xa2eb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x2c4);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a2ebe0 */
uint F_00a2ebe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2ebe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0xa9);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3,param_2);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0xa9);
  }
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00a2ec30 */
uint F_00a2ec30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa2ec30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7("invalid string position");
  }
  uVar2 = param_1[4] - param_2;
  uVar5 = param_3;
  if (uVar2 < param_3) {
    uVar5 = uVar2;
  }
  iVar1 = *(int *)((int)this + 0x10);
  if (-iVar1 - 1U <= uVar5) {
                    
    F_00c4579a("string too long");
  }
  if (uVar5 != 0) {
    uVar2 = iVar1 + uVar5;
    if (uVar2 == 0xffffffff) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar2) {
      F_00a2d420(this,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (0xf < *(uint *)((int)this + 0x14)) {
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined1 *)this = 0;
      return (uint)this;
    }
    puVar4 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar4 = (undefined4 *)*param_1;
    }
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(*(int *)((int)this + 0x10) + (int)pvVar3,(int)puVar4 + param_2,uVar5);
    *(uint *)((int)this + 0x10) = uVar2;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar2) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + uVar2) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a2ed20 */
uint F_00a2ed20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2ed20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x10);
  if (-iVar2 - 1U <= param_1) {
                    
    F_00c4579a("string too long");
  }
  if (param_1 != 0) {
    uVar1 = iVar2 + param_1;
    if (uVar1 == 0xffffffff) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar1) {
      F_00a2d420(this,uVar1,iVar2);
      if (uVar1 == 0) {
        return (uint)this;
      }
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (0xf < *(uint *)((int)this + 0x14)) {
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined1 *)this = 0;
      return (uint)this;
    }
    F_00a2b670(this,*(undefined4 *)((int)this + 0x10),param_1,param_2);
    *(uint *)((int)this + 0x10) = uVar1;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar1) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + uVar1) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a2edd0 */
uint F_00a2edd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa2edd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7("invalid string position");
  }
  uVar3 = param_1[4] - param_2;
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  if (this == param_1) {
    F_00a2d140(this,uVar3 + param_2,0xffffffff);
    F_00a2d140(this,0,param_2);
    return (uint)this;
  }
  if (uVar3 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < uVar3) {
    F_00a2d420(this,uVar3,*(undefined4 *)((int)this + 0x10));
    if (uVar3 == 0) {
      return (uint)this;
    }
  }
  else if (uVar3 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < *(uint *)((int)this + 0x14)) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  pvVar1 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar1,(int)puVar2 + param_2,uVar3);
  *(uint *)((int)this + 0x10) = uVar3;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + uVar3) = 0;
    return (uint)this;
  }
  *(undefined1 *)(*(int *)this + uVar3) = 0;
  return (uint)this;
}

/* ref: FUN_00a2eec0 */
uint F_00a2eec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa2eec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint param_5 = (uint)gen_a5;
  uint uVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  undefined * pvVar5;
  undefined * pvVar6;
  undefined4 * puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if ((uVar1 < param_1) || ((uint)param_3[4] < param_4)) {
                    
    F_00c457e7("invalid string position");
  }
  uVar2 = uVar1 - param_1;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  uVar9 = param_3[4] - param_4;
  uVar10 = param_5;
  if (uVar9 < param_5) {
    uVar10 = uVar9;
  }
  if (uVar1 - param_2 < -uVar10 - 1) {
    uVar2 = uVar2 - param_2;
    uVar1 = (uVar1 - param_2) + uVar10;
    if (*(uint *)((int)this + 0x10) < uVar1) {
      if (uVar1 == 0xffffffff) {
                    
        F_00c4579a("string too long");
      }
      if (*(uint *)((int)this + 0x14) < uVar1) {
        F_00a2d420(this,uVar1,*(uint *)((int)this + 0x10));
      }
      else if (uVar1 == 0) {
        *(undefined4 *)((int)this + 0x10) = 0;
        puVar3 = this;
        if (0xf < *(uint *)((int)this + 0x14)) {
          puVar3 = *(undefined1 * PTR32 *)this;
        }
        *puVar3 = 0;
      }
    }
    if (this == param_3) {
      if (param_2 < uVar10) {
        if (param_1 < param_4) {
          if (param_4 < param_2 + param_1) {
            pvVar5 = this;
            pvVar6 = this;
            if (0xf < *(uint *)((int)this + 0x14)) {
              pvVar5 = *(undefined * PTR32 *)this;
              pvVar6 = *(undefined * PTR32 *)this;
            }
            F_00c46e20((int)pvVar5 + param_1,(int)pvVar6 + param_4,param_2);
            pvVar5 = this;
            pvVar6 = this;
            if (0xf < *(uint *)((int)this + 0x14)) {
              pvVar5 = *(undefined * PTR32 *)this;
              pvVar6 = *(undefined * PTR32 *)this;
            }
            F_00c46e20((int)pvVar5 + uVar10 + param_1,(int)pvVar6 + param_2 + param_1,uVar2);
            pvVar6 = this;
            param_3 = this;
            if (0xf < *(uint *)((int)this + 0x14)) {
              param_3 = *(undefined4 * PTR32 *)this;
              pvVar6 = *(undefined * PTR32 *)this;
            }
            uVar2 = uVar10 - param_2;
            iVar8 = (int)param_3 + uVar10 + param_4;
            iVar4 = (int)pvVar6 + param_2 + param_1;
          }
          else {
            pvVar5 = this;
            pvVar6 = this;
            if (0xf < *(uint *)((int)this + 0x14)) {
              pvVar5 = *(undefined * PTR32 *)this;
              pvVar6 = *(undefined * PTR32 *)this;
            }
            F_00c46e20((int)pvVar5 + uVar10 + param_1,(int)pvVar6 + param_2 + param_1,uVar2);
            if (*(uint *)((int)this + 0x14) < 0x10) {
              iVar8 = (int)this + uVar10 + (param_4 - param_2);
              iVar4 = (int)this + param_1;
              uVar2 = uVar10;
            }
            else {
              iVar8 = (*(int *)this - param_2) + param_4 + uVar10;
              iVar4 = *(int *)this + param_1;
              uVar2 = uVar10;
            }
          }
        }
        else {
          pvVar5 = this;
          pvVar6 = this;
          if (0xf < *(uint *)((int)this + 0x14)) {
            pvVar5 = *(undefined * PTR32 *)this;
            pvVar6 = *(undefined * PTR32 *)this;
          }
          F_00c46e20((int)pvVar5 + uVar10 + param_1,(int)pvVar6 + param_2 + param_1,uVar2);
          if (*(uint *)((int)this + 0x14) < 0x10) {
            iVar8 = (int)this + param_4;
            iVar4 = (int)this + param_1;
            uVar2 = uVar10;
          }
          else {
            iVar8 = *(int *)this + param_4;
            iVar4 = *(int *)this + param_1;
            uVar2 = uVar10;
          }
        }
      }
      else {
        pvVar5 = this;
        pvVar6 = this;
        if (0xf < *(uint *)((int)this + 0x14)) {
          pvVar5 = *(undefined * PTR32 *)this;
          pvVar6 = *(undefined * PTR32 *)this;
        }
        F_00c46e20((int)pvVar5 + param_1,(int)pvVar6 + param_4,uVar10);
        if (*(uint *)((int)this + 0x14) < 0x10) {
          iVar8 = (int)this + param_2 + param_1;
          iVar4 = (int)this + uVar10 + param_1;
        }
        else {
          iVar8 = *(int *)this + param_1 + param_2;
          iVar4 = *(int *)this + param_1 + uVar10;
        }
      }
      F_00c46e20(iVar4,iVar8,uVar2);
    }
    else {
      pvVar5 = this;
      pvVar6 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        pvVar5 = *(undefined * PTR32 *)this;
        pvVar6 = *(undefined * PTR32 *)this;
      }
      F_00c46e20((int)pvVar5 + uVar10 + param_1,(int)pvVar6 + param_2 + param_1,uVar2);
      puVar7 = param_3;
      if (0xf < (uint)param_3[5]) {
        puVar7 = (undefined4 *)*param_3;
      }
      if (*(uint *)((int)this + 0x14) < 0x10) {
        F_00c46aa0((int)this + param_1,(int)puVar7 + param_4,uVar10);
      }
      else {
        F_00c46aa0(*(int *)this + param_1,(int)puVar7 + param_4,uVar10);
      }
    }
    *(uint *)((int)this + 0x10) = uVar1;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar1) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + uVar1) = 0;
    return (uint)this;
  }
                    
  F_00c4579a("string too long");
}

/* ref: FUN_00a2f1e0 */
uint F_00a2f1e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2f1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2c4);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a2f260 */
byte F_00a2f260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2f260u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = (undefined4 *)*param_2;
  }
  uVar2 = F_00a2c090(param_1,0,*(undefined4 *)((int)param_1 + 0x10),puVar1,param_2[4]);
  return (int)uVar2 < 0;
}

/* ref: FUN_00a2f310 */
uint F_00a2f310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2f310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x65);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3,param_2);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x65);
  }
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00a2f350 */
uint F_00a2f350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2f350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 != (undefined *)0x0) {
    uVar2 = *(uint *)((int)this + 0x14);
    pvVar3 = this;
    if (0xf < uVar2) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    if (pvVar3 <= param_1) {
      pvVar3 = this;
      if (0xf < uVar2) {
        pvVar3 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + (int)pvVar3)))) {
        if (0xf < uVar2) {
          uVar2 = F_00a2ec30(this,this,(int)param_1 - *(int *)this,param_2);
          return uVar2;
        }
        uVar2 = F_00a2ec30(this,this,(int)param_1 - (int)this,param_2);
        return uVar2;
      }
    }
  }
  iVar1 = *(int *)((int)this + 0x10);
  if (-iVar1 - 1U <= param_2) {
                    
    F_00c4579a("string too long");
  }
  if (param_2 != 0) {
    uVar2 = iVar1 + param_2;
    if (uVar2 == 0xffffffff) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar2) {
      F_00a2d420(this,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (0xf < *(uint *)((int)this + 0x14)) {
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined1 *)this = 0;
      return (uint)this;
    }
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(*(int *)((int)this + 0x10) + (int)pvVar3,param_1,param_2);
    *(uint *)((int)this + 0x10) = uVar2;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar2) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + uVar2) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a2f470 */
uint F_00a2f470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2f470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = *(uint *)((int)this + 0x14);
    pvVar2 = this;
    if (0xf < uVar1) {
      pvVar2 = *(undefined * PTR32 *)this;
    }
    if (pvVar2 <= param_1) {
      pvVar2 = this;
      if (0xf < uVar1) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + (int)pvVar2)))) {
        if (0xf < uVar1) {
          uVar1 = F_00a2edd0(this,this,(int)param_1 - *(int *)this,param_2);
          return uVar1;
        }
        uVar1 = F_00a2edd0(this,this,(int)param_1 - (int)this,param_2);
        return uVar1;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_2) {
    F_00a2d420(this,param_2,*(undefined4 *)((int)this + 0x10));
    if (param_2 == 0) {
      return (uint)this;
    }
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < *(uint *)((int)this + 0x14)) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  pvVar2 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar2 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar2,param_1,param_2);
  *(uint *)((int)this + 0x10) = param_2;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + param_2) = 0;
    return (uint)this;
  }
  *(undefined1 *)(*(int *)this + param_2) = 0;
  return (uint)this;
}

/* ref: FUN_00a2f570 */
uint F_00a2f570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa2f570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  
  uVar2 = *(uint *)((int)this + 0x10);
  if (uVar2 < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  if (-uVar2 - 1 <= param_2) {
                    
    F_00c4579a("string too long");
  }
  if (param_2 != 0) {
    uVar1 = uVar2 + param_2;
    if (uVar1 == 0xffffffff) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar1) {
      F_00a2d420(this,uVar1,uVar2);
      if (uVar1 == 0) {
        return (uint)this;
      }
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (*(uint *)((int)this + 0x14) < 0x10) {
        *(undefined1 *)this = 0;
        return (uint)this;
      }
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    pvVar4 = this;
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((int)pvVar4 + param_2 + param_1,(int)pvVar3 + param_1,
               *(int *)((int)this + 0x10) - param_1);
    F_00a2b670(this,param_1,param_2,param_3);
    *(uint *)((int)this + 0x10) = uVar1;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar1) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + uVar1) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a2f670 */
uint F_00a2f670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2f670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * local_8;
  
  local_8 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)local_8[1] + 0x59) == '\0') {
    uVar1 = param_1[5];
    uVar2 = param_1[4];
    puVar7 = (undefined4 *)local_8[1];
    do {
      piVar4 = puVar7 + 3;
      puVar6 = param_1;
      if (0xf < uVar1) {
        puVar6 = (undefined4 *)*param_1;
      }
      uVar3 = puVar7[7];
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = uVar2;
      }
      if (0xf < (uint)puVar7[8]) {
        piVar4 = (int *)*piVar4;
      }
      uVar5 = F_0040d320(piVar4,puVar6,uVar5);
      if (uVar5 == 0) {
        if (uVar2 <= uVar3) {
          uVar5 = (uint)(uVar3 != uVar2);
          goto LAB_00a2f6d8;
        }
LAB_00a2f6da: ;
        puVar6 = (undefined4 *)puVar7[2];
      }
      else {
LAB_00a2f6d8: ;
        if ((int)uVar5 < 0) goto LAB_00a2f6da;
        puVar6 = (undefined4 *)*puVar7;
        local_8 = puVar7;
      }
      puVar7 = puVar6;
    } while (*(char *)((int)puVar6 + 0x59) == '\0');
  }
  return (uint)local_8;
}

/* ref: FUN_00a2f700 */
uint F_00a2f700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2f700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a2edd0(this,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00a2f720 */
uint F_00a2f720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2f720u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00a2f730 */
uint F_00a2f730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2f730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00a2f740 */
uint F_00a2f740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa2f740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_0042c880(param_4 + 3);
    F_00429760(param_4,0xac,0x2c4);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    iVar4 = *(int *)((int)this + 4);
  }
  else {
    if ((char)param_2 != '\0') {
      *param_3 = param_4;
      if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
        **(int * PTR32 *)((int)this + 4) = (int)param_4;
      }
      goto LAB_00a2f7ba;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_00a2f7ba;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_00a2f7ba: ;
  cVar1 = *(char *)(param_4[1] + 0xa8);
  piVar6 = param_4;
  do {
    if (cVar1 != '\0') {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0xa8))) = 1;
      *param_1 = param_4;
      return (uint)param_1;
    }
    piVar3 = (int *)piVar6[1];
    piVar5 = (int *)piVar3[1];
    if (piVar3 == (int *)*piVar5) {
      iVar4 = piVar5[2];
      if (*(char *)(iVar4 + 0xa8) != '\0') {
        if (piVar6 == (int *)piVar3[2]) {
          piVar6 = (int *)piVar3[2];
          piVar3[2] = *piVar6;
          if (*(char *)(*piVar6 + 0xa9) == '\0') {
            *(int * PTR32 *)(*piVar6 + 4) = piVar3;
          }
          piVar6[1] = piVar3[1];
          if (piVar3 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          }
          else {
            piVar5 = (int *)piVar3[1];
            if (piVar3 == (int *)*piVar5) {
              *piVar5 = (int)piVar6;
            }
            else {
              piVar5[2] = (int)piVar6;
            }
          }
          *piVar6 = (int)piVar3;
          piVar3[1] = (int)piVar6;
          piVar6 = piVar3;
        }
        *(undefined1 *)(piVar6[1] + 0xa8) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0xa8))) = 0;
        piVar3 = *(int * PTR32 *)(piVar6[1] + 4);
        piVar5 = (int *)*piVar3;
        *piVar3 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xa9) == '\0') {
          *(int * PTR32 *)(piVar5[2] + 4) = piVar3;
        }
        piVar5[1] = piVar3[1];
        if (piVar3 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar5;
          piVar5[2] = (int)piVar3;
        }
        else {
          piVar2 = (int *)piVar3[1];
          if (piVar3 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar3;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar3;
          }
        }
        goto LAB_00a2f928;
      }
LAB_00a2f8a4: ;
      *(undefined1 *)(piVar3 + 0x2a) = 1;
      *(undefined1 *)(iVar4 + 0xa8) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0xa8))) = 0;
      piVar6 = *(int * PTR32 *)(piVar6[1] + 4);
    }
    else {
      iVar4 = *piVar5;
      if (*(char *)(iVar4 + 0xa8) == '\0') goto LAB_00a2f8a4;
      if (piVar6 == (int *)*piVar3) {
        F_00a2d5f0(this,piVar3);
        piVar6 = piVar3;
      }
      *(undefined1 *)(piVar6[1] + 0xa8) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0xa8))) = 0;
      piVar3 = *(int * PTR32 *)(piVar6[1] + 4);
      piVar5 = (int *)piVar3[2];
      piVar3[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xa9) == '\0') {
        *(int * PTR32 *)(*piVar5 + 4) = piVar3;
      }
      piVar5[1] = piVar3[1];
      if (piVar3 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
        *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar5;
      }
      else {
        piVar2 = (int *)piVar3[1];
        if (piVar3 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar3;
LAB_00a2f928: ;
      piVar3[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar6[1] + 0xa8);
  } while( true );
}

/* ref: FUN_00a2f960 */
uint F_00a2f960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa2f960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_0042c880(param_4 + 3);
    F_00429760(param_4,0x68,0x2c4);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    iVar4 = *(int *)((int)this + 4);
  }
  else {
    if ((char)param_2 != '\0') {
      *param_3 = param_4;
      if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
        **(int * PTR32 *)((int)this + 4) = (int)param_4;
      }
      goto LAB_00a2f9d6;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_00a2f9d6;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_00a2f9d6: ;
  cVar1 = *(char *)(param_4[1] + 100);
  piVar3 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar4 + 100) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar3[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar4 = piVar6[2];
      if (*(char *)(iVar4 + 100) == '\0') {
        *(undefined1 *)(piVar5 + 0x19) = 1;
        *(undefined1 *)(iVar4 + 100) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 100))) = 0;
        piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
      }
      else {
        if (piVar3 == (int *)piVar5[2]) {
          piVar3 = (int *)piVar5[2];
          piVar5[2] = *piVar3;
          if (*(char *)(*piVar3 + 0x65) == '\0') {
            *(int * PTR32 *)(*piVar3 + 4) = piVar5;
          }
          piVar3[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar3;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar3;
            }
            else {
              piVar6[2] = (int)piVar3;
            }
          }
          *piVar3 = (int)piVar5;
          piVar5[1] = (int)piVar3;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 100) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 100))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x65) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00a2fb61: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*(char *)(iVar4 + 100) != '\0') {
        if (piVar3 == (int *)*piVar5) {
          iVar4 = *piVar5;
          *piVar5 = *(int *)(iVar4 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar4 + 8) + 0x65))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar4 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar4 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar4;
          }
          else {
            piVar3 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar3[2]) {
              piVar3[2] = iVar4;
            }
            else {
              *piVar3 = iVar4;
            }
          }
          *(int * PTR32 *)(iVar4 + 8) = piVar5;
          piVar5[1] = iVar4;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 100) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 100))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x65) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar2) {
            *piVar2 = (int)piVar6;
          }
          else {
            piVar2[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00a2fb61;
      }
      *(undefined1 *)(piVar5 + 0x19) = 1;
      *(undefined1 *)(iVar4 + 100) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 100))) = 0;
      piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
    }
    cVar1 = *(char *)(piVar3[1] + 100);
  } while( true );
}

/* ref: FUN_00a2fb90 */
unsigned int F_00a2fb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2fb90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a2fbc0 */
unsigned int F_00a2fbc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2fbc0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a2fbf0 */
unsigned int F_00a2fbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2fbf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    puVar2 = (undefined4 *)(param_3 + 0x54);
    puVar3 = (undefined4 *)((int)param_2 + 0x54);
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00a2fc20 */
unsigned int F_00a2fc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2fc20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00a2fc50 */
unsigned int F_00a2fc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2fc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00a2fc80 */
unsigned int F_00a2fc80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2fc80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a2fcb0 */
uint F_00a2fcb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2fcb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1[5];
  if (0xf < uVar1) {
    uVar2 = F_00429760(*param_1,uVar1 + 1,0x2c4);
    uVar1 = (uint)uVar2;
  }
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  return uVar1;
}

/* ref: FUN_00a2fcf0 */
unsigned int F_00a2fcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2fcf0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a2fd30 */
uint F_00a2fd30(unsigned int gen_a0)
{
  GEN_ENTER(0xa2fd30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2c4);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a2fd70 */
uint F_00a2fd70(unsigned int gen_a0)
{
  GEN_ENTER(0xa2fd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x2c4);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a2fdb0 */
uint F_00a2fdb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2fdb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  uVar1 = *(uint *)this;
  if (uVar1 != uVar2) {
    uVar2 = F_00c46e20(uVar1,uVar2,0);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar2;
}

/* ref: FUN_00a2fde0 */
uint F_00a2fde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2fde0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0xa9);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3,param_2);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0xa9);
  }
  if ((puVar2 != *(undefined4 * PTR32 *)((int)this + 4)) &&
     (bVar3 = F_0042c7c0(param_2,puVar2 + 3), bVar3 == 0)) {
    *param_1 = puVar2;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00a2fe70 */
uint F_00a2fe70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2fe70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a2edd0(this,param_1,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00a2fea0 */
uint F_00a2fea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2fea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a2ed20(this,1,param_1);
  return uVar1;
}

/* ref: FUN_00a2fec0 */
uint F_00a2fec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2fec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a2ec30(this,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00a2fee0 */
uint F_00a2fee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa2fee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a2eec0(this,param_1,param_2,param_3,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00a2ff00 */
uint F_00a2ff00(unsigned int gen_a0)
{
  GEN_ENTER(0xa2ff00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2c4);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a2ff40 */
uint F_00a2ff40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2ff40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x65);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3,param_2);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x65);
  }
  if ((puVar2 != *(undefined4 * PTR32 *)((int)this + 4)) &&
     (bVar3 = F_0042c7c0(param_2,puVar2 + 3), bVar3 == 0)) {
    *param_1 = puVar2;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00a2ffc0 */
uint F_00a2ffc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa2ffc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a2edd0(this,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00a30000 */
uint F_00a30000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa30000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00a2f350(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00a30030 */
uint F_00a30030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa30030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00a2f470(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00a30060 */
uint F_00a30060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa30060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  int iVar2;
  
  pvVar1 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_2 - (int)pvVar1;
  }
  F_00a2f570(this,iVar2,1,param_3);
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  *param_1 = (int)this + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00a300b0 */
uint F_00a300b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa300b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a2f670(this,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00a300d0 */
uint F_00a300d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa300d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a2edd0(this,param_1,0,0xffffffff);
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  F_00a2edd0((undefined1 *)((int)this + 0x1c),param_2,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00a30120 */
unsigned int F_00a30120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa30120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x65);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00a30120(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_0042c880(piVar3 + 3);
    F_00429760(piVar3,0x68,0x2c4);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x65);
  }
  return 0;
}

/* ref: FUN_00a30170 */
uint F_00a30170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa30170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a2edd0(this,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00a30190 */
uint F_00a30190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa30190u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0xa9))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00a2beb0(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0xa9) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0xa9) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0xa9) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0x2a];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x2a))) = (char)piVar3[0x2a];
      *(char *)(piVar3 + 0x2a) = (char)iVar1;
      goto LAB_00a302cf;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0xa9) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0xa9) == '\0') {
      piVar4 = (int *)F_00a2bcc0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0xa9) == '\0') {
      uVar5 = F_00a2bc90(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00a302cf: ;
  if ((char)piVar3[0x2a] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x2a] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[0x2a] == '\0') {
            *(undefined1 *)(piVar6 + 0x2a) = 1;
            *(undefined1 *)(piVar4 + 0x2a) = 0;
            F_00a2d590((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0xa9) == '\0') {
            if ((*(char *)(*piVar6 + 0xa8) != '\x01') || (*(char *)(piVar6[2] + 0xa8) != '\x01')) {
              if (*(char *)(piVar6[2] + 0xa8) == '\x01') {
                *(undefined1 *)(*piVar6 + 0xa8) = 1;
                *(undefined1 *)(piVar6 + 0x2a) = 0;
                F_00a2d5f0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 0x2a) = (char)piVar4[0x2a];
              *(undefined1 *)(piVar4 + 0x2a) = 1;
              *(undefined1 *)(piVar6[2] + 0xa8) = 1;
              F_00a2d590((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00a303dc: ;
            *(undefined1 *)(piVar6 + 0x2a) = 0;
          }
        }
        else {
          if ((char)piVar6[0x2a] == '\0') {
            *(undefined1 *)(piVar6 + 0x2a) = 1;
            *(undefined1 *)(piVar4 + 0x2a) = 0;
            F_00a2d5f0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0xa9) == '\0') {
            if ((*(char *)(piVar6[2] + 0xa8) == '\x01') && (*(char *)(*piVar6 + 0xa8) == '\x01'))
            goto LAB_00a303dc;
            if (*(char *)(*piVar6 + 0xa8) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0xa8) = 1;
              *(undefined1 *)(piVar6 + 0x2a) = 0;
              F_00a2d590((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 0x2a) = (char)piVar4[0x2a];
            *(undefined1 *)(piVar4 + 0x2a) = 1;
            *(undefined1 *)(*piVar6 + 0xa8) = 1;
            F_00a2d5f0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x2a) = 1;
  }
  F_0042c880(piVar3 + 3);
  F_00429760(piVar3,0xac,0x2c4);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a30490 */
uint F_00a30490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa30490u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x65))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00a2d330(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x65) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x65) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x65) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0x19];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x19))) = (char)piVar3[0x19];
      *(char *)(piVar3 + 0x19) = (char)iVar1;
      goto LAB_00a305aa;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x65) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x65) == '\0') {
      piVar4 = (int *)F_00a2bbe0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x65) == '\0') {
      uVar5 = F_00a2be50(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00a305aa: ;
  if ((char)piVar3[0x19] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x19] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[0x19] == '\0') {
            *(undefined1 *)(piVar6 + 0x19) = 1;
            *(undefined1 *)(piVar4 + 0x19) = 0;
            F_00a2d790((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x65) == '\0') {
            if ((*(char *)(*piVar6 + 100) != '\x01') || (*(char *)(piVar6[2] + 100) != '\x01')) {
              if (*(char *)(piVar6[2] + 100) == '\x01') {
                *(undefined1 *)(*piVar6 + 100) = 1;
                *(undefined1 *)(piVar6 + 0x19) = 0;
                F_00a2d7f0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 0x19) = (char)piVar4[0x19];
              *(undefined1 *)(piVar4 + 0x19) = 1;
              *(undefined1 *)(piVar6[2] + 100) = 1;
              F_00a2d790((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00a30668: ;
            *(undefined1 *)(piVar6 + 0x19) = 0;
          }
        }
        else {
          if ((char)piVar6[0x19] == '\0') {
            *(undefined1 *)(piVar6 + 0x19) = 1;
            *(undefined1 *)(piVar4 + 0x19) = 0;
            F_00a2d7f0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x65) == '\0') {
            if ((*(char *)(piVar6[2] + 100) == '\x01') && (*(char *)(*piVar6 + 100) == '\x01'))
            goto LAB_00a30668;
            if (*(char *)(*piVar6 + 100) == '\x01') {
              *(undefined1 *)(piVar6[2] + 100) = 1;
              *(undefined1 *)(piVar6 + 0x19) = 0;
              F_00a2d790((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 0x19) = (char)piVar4[0x19];
            *(undefined1 *)(piVar4 + 0x19) = 1;
            *(undefined1 *)(*piVar6 + 100) = 1;
            F_00a2d7f0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x19) = 1;
  }
  F_0042c880(piVar3 + 3);
  F_00429760(piVar3,0x68,0x2c4);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a306f0 */
unsigned int F_00a306f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa306f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0xa9);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00a306f0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_0042c880(piVar3 + 3);
    F_00429760(piVar3,0xac,0x2c4);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xa9);
  }
  return 0;
}

/* ref: FUN_00a30740 */
unsigned int F_00a30740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa30740u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a30770 */
unsigned int F_00a30770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa30770u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a307a0 */
uint F_00a307a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa307a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 * puVar5;
  undefined * this_00;
  undefined4 * puVar6;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  this_00 = (undefined *)((*(int *)&gen_args[2]) + 0xc);
  cVar1 = *(char *)((int)puVar5 + 0xa9);
  bVar4 = 1;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar3 = (*(undefined4 *)(gen_frame + 0x8));
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      bVar4 = F_0042c7c0(this_00,puVar5 + 3);
    }
    else {
      bVar4 = F_0042c7c0(puVar5 + 3,this_00);
      bVar4 = bVar4 == 0;
    }
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)uVar3 >> 8)));
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar4);
    if (bVar4 == 0) {
      puVar6 = (undefined4 *)puVar5[2];
    }
    else {
      puVar6 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    uVar3 = (*(undefined4 *)(gen_frame + 0x8));
    cVar1 = *(char *)((int)puVar6 + 0xa9);
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar4 != 0) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar5 = (undefined4 *)F_00a2f740((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00a2c120(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[3]);
  bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)&gen_args[3]) + 3,this_00);
  if (bVar4 != 0) {
    puVar5 = (undefined4 *)F_00a2f740((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),uVar3,puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_0042c880(this_00);
  F_00429760((*(int *)&gen_args[2]),0xac,0x2c4);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a308b0 */
unsigned int F_00a308b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa308b0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    F_00a2edd0(param_1,param_2,0,0xffffffff);
  }
  return 0;
}

/* ref: FUN_00a308e0 */
uint F_00a308e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa308e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 * puVar5;
  undefined * this_00;
  undefined4 * puVar6;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  this_00 = (undefined *)((*(int *)&gen_args[2]) + 0xc);
  cVar1 = *(char *)((int)puVar5 + 0x65);
  bVar4 = 1;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar3 = (*(undefined4 *)(gen_frame + 0x8));
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      bVar4 = F_0042c7c0(this_00,puVar5 + 3);
    }
    else {
      bVar4 = F_0042c7c0(puVar5 + 3,this_00);
      bVar4 = bVar4 == 0;
    }
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)uVar3 >> 8)));
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar4);
    if (bVar4 == 0) {
      puVar6 = (undefined4 *)puVar5[2];
    }
    else {
      puVar6 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    uVar3 = (*(undefined4 *)(gen_frame + 0x8));
    cVar1 = *(char *)((int)puVar6 + 0x65);
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar4 != 0) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar5 = (undefined4 *)F_00a2f960((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00a2c290(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[3]);
  bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)&gen_args[3]) + 3,this_00);
  if (bVar4 != 0) {
    puVar5 = (undefined4 *)F_00a2f960((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),uVar3,puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_0042c880(this_00);
  F_00429760((*(int *)&gen_args[2]),0x68,0x2c4);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a309e0 */
uint F_00a309e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa309e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a2e950(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a30a10 */
uint F_00a30a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa30a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar1 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x2a) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 3,param_1);
    puVar3 = (undefined4 *)(param_1 + 0x54);
    puVar4 = puVar1 + 0x18;
    for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_00a30a70 */
uint F_00a30a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa30a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x68,0,0x2c4);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x19) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 3,param_1);
    puVar1[0x18] = *(undefined4 *)(param_1 + 0x54);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a30ad0 */
uint F_00a30ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa30ad0u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00a2edd0(this,iVar1,0,0xffffffff);
    iVar1 = iVar1 + 0x1c;
    this = (undefined *)((int)this + 0x1c);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a30b10 */
unsigned int F_00a30b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa30b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00a30b40 */
unsigned int F_00a30b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa30b40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a30b70 */
uint F_00a30b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa30b70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_2[5];
  if (0xf < uVar1) {
    uVar2 = F_00429760(*param_2,uVar1 + 1,0x2c4);
    uVar1 = (uint)uVar2;
  }
  param_2[5] = 0xf;
  param_2[4] = 0;
  *(undefined1 *)param_2 = 0;
  return uVar1;
}

/* ref: FUN_00a30bb0 */
uint F_00a30bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa30bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a2edd0(this,param_1,0,0xffffffff);
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  F_00a2edd0((undefined1 *)((int)this + 0x1c),param_1 + 0x1c,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00a30c00 */
unsigned int F_00a30c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa30c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_00a2edd0(param_2,param_3,0,0xffffffff);
  }
  return 0;
}

/* ref: FUN_00a30c30 */
unsigned int F_00a30c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa30c30u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a30c60 */
uint F_00a30c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa30c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_00a2f470(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (uint)this;
}

/* ref: FUN_00a30ca0 */
uint F_00a30ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa30ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a2ec30(this,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00a30cc0 */
uint F_00a30cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa30cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00a2f350(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00a30cf0 */
uint F_00a30cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa30cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  pvVar3 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  iVar1 = *(int *)((int)this + 0x10) + (int)pvVar3;
  pvVar3 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  if (iVar1 != 0) {
    uVar2 = F_00a2f570(this,iVar1 - (int)pvVar3,1,param_1);
    return uVar2;
  }
  uVar2 = F_00a2f570(this,0,1,param_1);
  return uVar2;
}

/* ref: FUN_00a30d40 */
uint F_00a30d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa30d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  F_00a2edd0(param_1,this,param_2,param_3);
  return (uint)param_1;
}

/* ref: FUN_00a30d70 */
uint F_00a30d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa30d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar1 = F_00a2f670(this,param_2);
  if (uVar1 != *(uint *)((int)this + 4)) {
    puVar2 = (undefined4 *)(uVar1 + 0xc);
    if (0xf < *(uint *)(uVar1 + 0x20)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    uVar3 = F_00a2c090(param_2,0,*(undefined4 *)((int)param_2 + 0x10),puVar2,
                         *(undefined4 *)(uVar1 + 0x1c));
    if (-1 < (int)uVar3) {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  *param_1 = *(uint *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00a30de0 */
uint F_00a30de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa30de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a2edd0(this,param_1,0,0xffffffff);
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  F_00a2edd0((undefined1 *)((int)this + 0x1c),param_2,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00a30e30 */
uint F_00a30e30(unsigned int gen_a0)
{
  GEN_ENTER(0xa30e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a30120(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a30e60 */
uint F_00a30e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa30e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    if (0xf < *(uint *)((int)this + 0x14)) {
      F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x2c4);
    }
    *(undefined4 *)((int)this + 0x14) = 0xf;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined1 *)this = 0;
    if ((uint)param_1[5] < 0x10) {
      F_00c46e20(this,param_1,param_1[4] + 1);
    }
    else {
      *(undefined4 *)this = *param_1;
      *param_1 = 0;
    }
    *(undefined4 *)((int)this + 0x10) = param_1[4];
    *(undefined4 *)((int)this + 0x14) = param_1[5];
    param_1[5] = 0xf;
    param_1[4] = 0;
    *(undefined1 *)param_1 = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a30ef0 */
uint F_00a30ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa30ef0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x2c4);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2c4);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00a30fa0 */
uint F_00a30fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa30fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00a30120(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x65) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x65) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x65);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x65);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x65);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x65);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a30490(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a31060 */
uint F_00a31060(unsigned int gen_a0)
{
  GEN_ENTER(0xa31060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a306f0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a31090 */
uint F_00a31090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar1 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x2a) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 3,param_2);
    puVar3 = (undefined4 *)(param_2 + 0x54);
    puVar4 = puVar1 + 0x18;
    for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  F_00a307a0(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a31110 */
uint F_00a31110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x68,0,0x2c4);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x19) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 3,param_2);
    puVar1[0x18] = *(undefined4 *)(param_2 + 0x54);
  }
  F_00a308e0(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a31180 */
uint F_00a31180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31180u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x1c) {
    F_00a2edd0(this,iVar1,0,0xffffffff);
    this = (undefined *)((int)this + 0x1c);
  }
  return (uint)this;
}

/* ref: FUN_00a311b0 */
unsigned int F_00a311b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa311b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_00a2edd0(param_2,param_3,0,0xffffffff);
  }
  return 0;
}

/* ref: FUN_00a311e0 */
unsigned int F_00a311e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa311e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_00a2edd0(param_2,param_3,0,0xffffffff);
  }
  return 0;
}

/* ref: FUN_00a31210 */
unsigned int F_00a31210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00a31240 */
unsigned int F_00a31240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31240u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a31270 */
uint F_00a31270(unsigned int gen_a0)
{
  GEN_ENTER(0xa31270u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a2e950(param_1);
  return uVar1;
}

/* ref: FUN_00a31280 */
uint F_00a31280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa31280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  ulonglong uVar4;
  
  puVar2 = param_1;
  if (param_1 != param_2) {
    puVar3 = param_1 + 5;
    do {
      puVar2 = (undefined4 *)*puVar3;
      if ((undefined4 *)0xf < puVar2) {
        uVar4 = F_00429760(puVar3[-5],(int)puVar2 + 1,0x2c4);
        puVar2 = (undefined4 *)uVar4;
      }
      *puVar3 = 0xf;
      puVar3[-1] = 0;
      *(undefined1 *)(puVar3 + -5) = 0;
      puVar1 = puVar3 + 2;
      puVar3 = puVar3 + 7;
    } while (puVar1 != param_2);
  }
  return (uint)puVar2;
}

/* ref: FUN_00a312d0 */
uint F_00a312d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa312d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined1 * this;
  int iVar1;
  
  this = param_3;
  iVar1 = param_1;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined1 *)0x0) {
      *(undefined4 *)(this + 0x14) = 0xf;
      *(undefined4 *)(this + 0x10) = 0;
      *this = 0;
      F_00a2edd0(this,iVar1,0,0xffffffff);
    }
    iVar1 = iVar1 + 0x1c;
    this = this + 0x1c;
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a31320 */
uint F_00a31320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa31320u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined1 * this;
  int iVar1;
  
  this = param_3;
  iVar1 = param_1;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined1 *)0x0) {
      *(undefined4 *)(this + 0x14) = 0xf;
      *(undefined4 *)(this + 0x10) = 0;
      *this = 0;
      F_00a2edd0(this,iVar1,0,0xffffffff);
    }
    iVar1 = iVar1 + 0x1c;
    this = this + 0x1c;
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a31370 */
unsigned int F_00a31370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31370u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a313a0 */
uint F_00a313a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa313a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a2edd0(this,param_1,0,0xffffffff);
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  F_00a2edd0((undefined1 *)((int)this + 0x1c),param_1 + 0x1c,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00a313f0 */
uint F_00a313f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa313f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined1 * this;
  
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined1 *)0x0) {
      *(undefined4 *)(this + 0x14) = 0xf;
      *(undefined4 *)(this + 0x10) = 0;
      *this = 0;
      F_00a2edd0(this,param_1,0,0xffffffff);
    }
    param_1 = param_1 + 0x1c;
    this = this + 0x1c;
  } while (param_1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a31440 */
uint F_00a31440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa31440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a30e60(this,param_1);
  return (uint)this;
}

/* ref: FUN_00a31470 */
uint F_00a31470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa31470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a30e60(this,param_1);
  return uVar1;
}

/* ref: FUN_00a31480 */
uint F_00a31480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa31480u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00a30ef0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00a30ef0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00a314f0 */
uint F_00a314f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa314f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a30fa0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a31510 */
uint F_00a31510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa31510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  
  puVar5 = param_1;
  if (((undefined1 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)this))) < param_1) {
    puVar3 = (undefined1 *)F_004296a0(param_1,0,0x2c4);
    puVar5 = *(undefined1 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined1 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x2c4);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined1 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1);
    *(undefined1 * PTR32 *)this = puVar3;
    *(undefined1 * PTR32 *)((int)this + 8) = puVar5;
  }
  return (uint)puVar5;
}

/* ref: FUN_00a315a0 */
uint F_00a315a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa315a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00a306f0(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xa9) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0xa9) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xa9);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xa9);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xa9);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xa9);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a30190(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a31670 */
uint F_00a31670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa31670u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x2c4);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2c4);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00a31720 */
uint F_00a31720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a31280(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00a31740 */
uint F_00a31740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa31740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a2e950(param_2);
  return uVar1;
}

/* ref: FUN_00a31750 */
uint F_00a31750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa31750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00a2e950(param_4 + 3);
    F_00429760(param_4,0x48,0x2c4);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    iVar4 = *(int *)((int)this + 4);
  }
  else {
    if ((char)param_2 != '\0') {
      *param_3 = param_4;
      if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
        **(int * PTR32 *)((int)this + 4) = (int)param_4;
      }
      goto LAB_00a317c6;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_00a317c6;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_00a317c6: ;
  cVar1 = *(char *)(param_4[1] + 0x44);
  piVar3 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar4 + 0x44) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar3[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar4 = piVar6[2];
      if (*(char *)(iVar4 + 0x44) == '\0') {
        *(undefined1 *)(piVar5 + 0x11) = 1;
        *(undefined1 *)(iVar4 + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x44))) = 0;
        piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
      }
      else {
        if (piVar3 == (int *)piVar5[2]) {
          piVar3 = (int *)piVar5[2];
          piVar5[2] = *piVar3;
          if (*(char *)(*piVar3 + 0x45) == '\0') {
            *(int * PTR32 *)(*piVar3 + 4) = piVar5;
          }
          piVar3[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar3;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar3;
            }
            else {
              piVar6[2] = (int)piVar3;
            }
          }
          *piVar3 = (int)piVar5;
          piVar5[1] = (int)piVar3;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x44))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x45) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00a31951: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*(char *)(iVar4 + 0x44) != '\0') {
        if (piVar3 == (int *)*piVar5) {
          iVar4 = *piVar5;
          *piVar5 = *(int *)(iVar4 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar4 + 8) + 0x45))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar4 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar4 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar4;
          }
          else {
            piVar3 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar3[2]) {
              piVar3[2] = iVar4;
            }
            else {
              *piVar3 = iVar4;
            }
          }
          *(int * PTR32 *)(iVar4 + 8) = piVar5;
          piVar5[1] = iVar4;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x44))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x45) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar2) {
            *piVar2 = (int)piVar6;
          }
          else {
            piVar2[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00a31951;
      }
      *(undefined1 *)(piVar5 + 0x11) = 1;
      *(undefined1 *)(iVar4 + 0x44) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x44))) = 0;
      piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
    }
    cVar1 = *(char *)(piVar3[1] + 0x44);
  } while( true );
}

/* ref: FUN_00a31980 */
uint F_00a31980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa31980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a312d0(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00a319b0 */
uint F_00a319b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa319b0u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00a30e60(this,iVar1);
    iVar1 = iVar1 + 0x1c;
    this = (undefined *)((int)this + 0x1c);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a319f0 */
uint F_00a319f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa319f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a31320(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00a31a20 */
uint F_00a31a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa31a20u, gen_a0, gen_a1, 0u, 0u);
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
    puVar4 = (undefined4 *)F_004296a0(iVar3 * 4,0,0x2c4);
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

/* ref: FUN_00a31aa0 */
unsigned int F_00a31aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa31aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    F_00a2edd0(param_1,param_2,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x30) = 0xf;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    param_1[0x1c] = 0;
    F_00a2edd0(param_1 + 0x1c,param_2 + 0x1c,0,0xffffffff);
  }
  return 0;
}

/* ref: FUN_00a31b00 */
uint F_00a31b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa31b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a313f0(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00a31b30 */
uint F_00a31b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa31b30u, gen_a0, gen_a1, 0u, 0u);
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
    F_00a31480(this,param_1 - uVar2);
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

/* ref: FUN_00a31bc0 */
uint F_00a31bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa31bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a30fa0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x68,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a31c00 */
uint F_00a31c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa31c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)this;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)this;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00a31510(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00a31510(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00a31c60 */
uint F_00a31c60(unsigned int gen_a0)
{
  GEN_ENTER(0xa31c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a315a0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a31c80 */
uint F_00a31c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a31280(param_1,param_2,(int)this + 0xc,param_2);
  return uVar1;
}

/* ref: FUN_00a31ca0 */
uint F_00a31ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xa31ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00a31280(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x1c) * 0x1c,0x2c4
                        );
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a31d10 */
uint F_00a31d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa31d10u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00a31670(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00a31670(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00a31d80 */
uint F_00a31d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa31d80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  bool bVar8;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x45))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00a2d290(&(*(int * PTR32 *)&gen_args[2]));
  piVar7 = (int *)*piVar3;
  if (*(char *)((int)piVar7 + 0x45) == '\0') {
    piVar6 = piVar7;
    if ((*(char *)(piVar3[2] + 0x45) == '\0') && (piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar7[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar7 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar6 + 0x45) == '\0') {
          piVar6[1] = (int)piVar7;
        }
        *piVar7 = (int)piVar6;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar1 = (undefined4 *)piVar3[1];
        if ((int *)*puVar1 == piVar3) {
          *puVar1 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar1[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar2 = (*(int * PTR32 *)&gen_args[2])[0x11];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x11))) = (char)piVar3[0x11];
      *(char *)(piVar3 + 0x11) = (char)iVar2;
      goto LAB_00a31e9f;
    }
  }
  else {
    piVar6 = (int *)piVar3[2];
  }
  piVar7 = (int *)piVar3[1];
  if (*(char *)((int)piVar6 + 0x45) == '\0') {
    piVar6[1] = (int)piVar7;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
  }
  else if ((int *)*piVar7 == piVar3) {
    *piVar7 = (int)piVar6;
  }
  else {
    piVar7[2] = (int)piVar6;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar7;
    if (*(char *)((int)piVar6 + 0x45) == '\0') {
      piVar4 = (int *)F_00a2bb50(piVar6);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) == piVar3) {
    if (*(char *)((int)piVar6 + 0x45) == '\0') {
      uVar5 = F_00a2bdf0(piVar6);
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = piVar7;
    }
  }
LAB_00a31e9f: ;
  if ((char)piVar3[0x11] == '\x01') {
    if (piVar6 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        if ((char)piVar6[0x11] != '\x01') break;
        piVar4 = (int *)*piVar7;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar7[2];
          if ((char)piVar4[0x11] == '\0') {
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(piVar7 + 0x11) = 0;
            F_00a2d720((*(undefined * PTR32 *)&gen_args[0]),piVar7);
            piVar4 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar4 + 0x45) == '\0') {
            if ((*(char *)(*piVar4 + 0x44) != '\x01') || (*(char *)(piVar4[2] + 0x44) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x44) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x44) = 1;
                *(undefined1 *)(piVar4 + 0x11) = 0;
                F_00a2bd90((*(undefined * PTR32 *)&gen_args[0]),piVar4);
                piVar4 = (int *)piVar7[2];
              }
              *(char *)(piVar4 + 0x11) = (char)piVar7[0x11];
              *(undefined1 *)(piVar7 + 0x11) = 1;
              *(undefined1 *)(piVar4[2] + 0x44) = 1;
              F_00a2d720((*(undefined * PTR32 *)&gen_args[0]),piVar7);
              break;
            }
LAB_00a31f65: ;
            *(undefined1 *)(piVar4 + 0x11) = 0;
          }
        }
        else {
          if ((char)piVar4[0x11] == '\0') {
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(piVar7 + 0x11) = 0;
            F_00a2bd90((*(undefined * PTR32 *)&gen_args[0]),piVar7);
            piVar4 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar4 + 0x45) == '\0') {
            if ((*(char *)(piVar4[2] + 0x44) == '\x01') && (*(char *)(*piVar4 + 0x44) == '\x01'))
            goto LAB_00a31f65;
            if (*(char *)(*piVar4 + 0x44) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x44) = 1;
              *(undefined1 *)(piVar4 + 0x11) = 0;
              F_00a2d720((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              piVar4 = (int *)*piVar7;
            }
            *(char *)(piVar4 + 0x11) = (char)piVar7[0x11];
            *(undefined1 *)(piVar7 + 0x11) = 1;
            *(undefined1 *)(*piVar4 + 0x44) = 1;
            F_00a2bd90((*(undefined * PTR32 *)&gen_args[0]),piVar7);
            break;
          }
        }
        bVar8 = piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)));
        piVar6 = piVar7;
        piVar7 = (int *)piVar7[1];
      } while (bVar8);
    }
    *(undefined1 *)(piVar6 + 0x11) = 1;
  }
  if (0xf < (uint)piVar3[0xf]) {
    F_00429760(piVar3[10],piVar3[0xf] + 1,0x2c4);
  }
  piVar3[0xf] = 0xf;
  piVar3[0xe] = 0;
  *(undefined1 *)(piVar3 + 10) = 0;
  if (0xf < (uint)piVar3[8]) {
    F_00429760(piVar3[3],piVar3[8] + 1,0x2c4);
  }
  piVar3[8] = 0xf;
  piVar3[7] = 0;
  *(undefined1 *)(piVar3 + 3) = 0;
  F_00429760(piVar3,0x48,0x2c4);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a32040 */
unsigned int F_00a32040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa32040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x45);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00a32040(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    if (0xf < (uint)piVar3[0xf]) {
      F_00429760(piVar3[10],piVar3[0xf] + 1,0x2c4);
    }
    piVar3[0xf] = 0xf;
    piVar3[0xe] = 0;
    *(undefined1 *)(piVar3 + 10) = 0;
    if (0xf < (uint)piVar3[8]) {
      F_00429760(piVar3[3],piVar3[8] + 1,0x2c4);
    }
    piVar3[8] = 0xf;
    piVar3[7] = 0;
    *(undefined1 *)(piVar3 + 3) = 0;
    F_00429760(piVar3,0x48,0x2c4);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x45);
  }
  return 0;
}

/* ref: FUN_00a320e0 */
uint F_00a320e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa320e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a312d0(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_00a32110 */
uint F_00a32110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa32110u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x1c) {
    F_00a30e60(this,iVar1);
    this = (undefined *)((int)this + 0x1c);
  }
  return (uint)this;
}

/* ref: FUN_00a32140 */
uint F_00a32140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa32140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a31320(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00a32170 */
uint F_00a32170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa32170u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  uint uVar9;
  int iVar10;
  undefined4 * puVar11;
  bool bVar12;
  undefined4 uVar13;
  
  puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar12 = true;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar7[1] + 0x45) == '\0') {
    uVar9 = *(uint *)((*(int *)&gen_args[2]) + 0x1c);
    uVar1 = *(uint *)((*(int *)&gen_args[2]) + 0x20);
    puVar11 = (undefined4 *)puVar7[1];
    do {
      puVar7 = puVar11;
      piVar4 = puVar7 + 3;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        uVar2 = puVar7[7];
        if (0xf < (uint)puVar7[8]) {
          piVar4 = (int *)*piVar4;
        }
        uVar5 = *(uint *)((*(int *)&gen_args[2]) + 0x1c);
        if (uVar9 < *(uint *)((*(int *)&gen_args[2]) + 0x1c)) {
          uVar5 = uVar9;
        }
        uVar6 = uVar5;
        if (uVar2 <= uVar5) {
          uVar6 = uVar2;
        }
        if (uVar1 < 0x10) {
          iVar10 = (*(int *)&gen_args[2]) + 0xc;
        }
        else {
          iVar10 = *(int *)((*(int *)&gen_args[2]) + 0xc);
        }
        uVar6 = F_0040d320(iVar10,piVar4,uVar6);
        if (uVar6 == 0) {
          if (uVar5 < uVar2) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)(uVar5 != uVar2);
          }
        }
        bVar12 = (int)uVar6 < 0;
      }
      else {
        if (uVar1 < 0x10) {
          iVar10 = (*(int *)&gen_args[2]) + 0xc;
        }
        else {
          iVar10 = *(int *)((*(int *)&gen_args[2]) + 0xc);
        }
        uVar2 = puVar7[7];
        uVar5 = uVar2;
        if (uVar9 <= uVar2) {
          uVar5 = uVar9;
        }
        if (0xf < (uint)puVar7[8]) {
          piVar4 = (int *)*piVar4;
        }
        uVar5 = F_0040d320(piVar4,iVar10,uVar5);
        if (uVar5 == 0) {
          if (uVar2 < uVar9) {
            bVar12 = false;
            goto LAB_00a3225c;
          }
          uVar5 = (uint)(uVar2 != uVar9);
        }
        bVar12 = -1 < (int)uVar5;
      }
LAB_00a3225c: ;
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar12);
      if (bVar12 == false) {
        puVar11 = (undefined4 *)puVar7[2];
      }
      else {
        puVar11 = (undefined4 *)*puVar7;
      }
    } while (*(char *)((int)puVar11 + 0x45) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar7;
  if (bVar12 != false) {
    if (puVar7 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      uVar13 = 1;
      goto LAB_00a32291;
    }
    F_00a2c220(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar3 = (*(undefined4 * PTR32 *)&gen_args[3]);
  puVar11 = (undefined4 *)((*(int *)&gen_args[2]) + 0xc);
  puVar8 = puVar11;
  if (0xf < *(uint *)((*(int *)&gen_args[2]) + 0x20)) {
    puVar8 = (undefined *)*puVar11;
  }
  uVar9 = F_00a2c090((*(undefined4 * PTR32 *)&gen_args[3]) + 3,0,(*(undefined4 * PTR32 *)&gen_args[3])[7],puVar8,*(undefined4 *)((*(int *)&gen_args[2]) + 0x1c));
  uVar13 = (*(undefined4 *)(gen_frame + 0x8));
  if (-1 < (int)uVar9) {
    F_00a2e950(puVar11);
    F_00429760((*(int *)&gen_args[2]),0x48,0x2c4);
    *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
LAB_00a32291: ;
  puVar7 = (undefined4 *)F_00a31750((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),uVar13,puVar7,(*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar7;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a32320 */
unsigned int F_00a32320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa32320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_00a2edd0(param_2,param_3,0,0xffffffff);
    *(undefined4 *)(param_2 + 0x30) = 0xf;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    param_2[0x1c] = 0;
    F_00a2edd0(param_2 + 0x1c,param_3 + 0x1c,0,0xffffffff);
  }
  return 0;
}

/* ref: FUN_00a32380 */
uint F_00a32380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa32380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a313f0(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_00a323b0 */
uint F_00a323b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa323b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a30fa0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x68,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a323f0 */
uint F_00a323f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa323f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  
  puVar3 = *(undefined1 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined1 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_00a31c00(this,1);
    }
    puVar2 = *(undefined1 * PTR32 *)((int)this + 4);
    puVar3 = (undefined1 *)0x0;
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = param_1[*(int *)this - (int)puVar1];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_00a31c00(this,1);
    }
    puVar3 = *(undefined1 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar3;
}

/* ref: FUN_00a32450 */
uint F_00a32450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa32450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  
  puVar3 = *(undefined1 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined1 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_00a31c00(this,1);
    }
    puVar2 = *(undefined1 * PTR32 *)((int)this + 4);
    puVar3 = (undefined1 *)0x0;
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = param_1[*(int *)this - (int)puVar1];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_00a31c00(this,1);
    }
    puVar3 = *(undefined1 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar3;
}

/* ref: FUN_00a324b0 */
uint F_00a324b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa324b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a315a0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0xac,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a32500 */
uint F_00a32500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa32500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00a31d10(this,1);
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
      F_00a31d10(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00a325b0 */
uint F_00a325b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa325b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = (undefined *)((int)pvVar2 + 0x1c)) {
      F_00a30e60(this_00,pvVar2);
      this_00 = (undefined *)((int)this_00 + 0x1c);
    }
    F_00a31280(this_00,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(undefined * PTR32 *)((int)this + 4) = this_00;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a32620 */
uint F_00a32620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa32620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x1c;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x1c,0,0x2c4);
    F_00a31320(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00a31280(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,uVar3);
      F_00429760(*(undefined4 *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x1c) * 0x1c,
                   0x2c4);
    }
    *(uint *)((int)this + 8) = param_1 * 0x1c + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar1 - iVar2) / 0x1c) * 0x1c;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a32720 */
uint F_00a32720(unsigned int gen_a0)
{
  GEN_ENTER(0xa32720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a32040(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a32750 */
uint F_00a32750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa32750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * this_00;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x48,0,0x2c4);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  this_00 = puVar1 + 3;
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x11) = 0;
  if (this_00 != (undefined4 *)0x0) {
    puVar1[8] = 0xf;
    puVar1[7] = 0;
    *(undefined1 *)this_00 = 0;
    F_00a2edd0(this_00,param_1,0,0xffffffff);
    puVar1[0xf] = 0xf;
    puVar1[0xe] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    F_00a2edd0(puVar1 + 10,param_1 + 0x1c,0,0xffffffff);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a327e0 */
uint F_00a327e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa327e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar1 = (param_1[1] - *param_1) / 0x1c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 0x1c;
    uVar2 = F_004296a0(iVar1,0,0x2c4);
    *(uint *)this = uVar2;
    *(uint *)((int)this + 4) = uVar2;
    *(uint *)((int)this + 8) = iVar1 + uVar2;
    uVar2 = F_00a313f0(*param_1,param_1[1],uVar2,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar2;
  }
  return (uint)this;
}

/* ref: FUN_00a32870 */
uint F_00a32870(unsigned int gen_a0)
{
  GEN_ENTER(0xa32870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a315a0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0xac,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a328d0 */
uint F_00a328d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa328d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x20);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x28) - iVar1 >> 2) * 4,0x2c4);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  F_00a31ca0((undefined *)((int)this + 0x10));
  uVar2 = F_00a31ca0(this);
  return uVar2;
}

/* ref: FUN_00a32920 */
uint F_00a32920(unsigned int gen_a0)
{
  GEN_ENTER(0xa32920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 0x3c);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x44) - iVar1 >> 2) * 4,0x2c4);
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  F_00a31ca0((undefined *)((int)this + 0x2c));
  F_00a31ca0((undefined *)((int)this + 0x1c));
  uVar2 = *(uint *)((int)this + 0x14);
  if (0xf < uVar2) {
    uVar3 = F_00429760(*(undefined4 *)this,uVar2 + 1,0x2c4);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)this = 0;
  return uVar2;
}

/* ref: FUN_00a32990 */
uint F_00a32990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa32990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  if ((param_1 & 2) == 0) {
    F_00a31ca0(this);
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
    return (uint)this;
  }
  iVar1 = *(int *)((int)this + -4);
  piVar3 = (int *)(iVar1 * 0x10 + (int)this);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    puVar4 = (undefined4 *)piVar3[-4];
    piVar5 = piVar3 + -4;
    if (puVar4 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)piVar3[-3];
      for (; puVar4 != puVar2; puVar4 = puVar4 + 7) {
        if (0xf < (uint)puVar4[5]) {
          F_00429760(*puVar4,puVar4[5] + 1,0x2c4);
        }
        puVar4[5] = 0xf;
        puVar4[4] = 0;
        *(undefined1 *)puVar4 = 0;
      }
      F_00429760(*piVar5,((piVar3[-2] - *piVar5) / 0x1c) * 0x1c,0x2c4);
    }
    *piVar5 = 0;
    piVar3[-3] = 0;
    piVar3[-2] = 0;
    piVar3 = piVar5;
  }
  if ((param_1 & 1) != 0) {
    F_00406b30((int)this - 4U);
  }
  return (int)this - 4U;
}

/* ref: FUN_00a32a90 */
uint F_00a32a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa32a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f48));
  F_00a22980(this);
  F_00a30fa0((undefined *)((int)this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  F_00429760(*(undefined4 *)((int)this + 0x10),0x68,0x2c4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a32b40 */
uint F_00a32b40(unsigned int gen_a0)
{
  GEN_ENTER(0xa32b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a325b0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a32b60 */
uint F_00a32b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa32b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x1c;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1c;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a32620(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a32620(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a32bf0 */
uint F_00a32bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa32bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00a32040(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x45) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x45) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x45);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x45);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x45);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x45);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a31d80(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a32cb0 */
uint F_00a32cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa32cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00a32750(this,param_2);
  F_00a32170(this,param_1,uVar1,uVar2);
  return param_1;
}

/* ref: FUN_00a32ce0 */
uint F_00a32ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa32ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00a327e0(this,param_1);
  F_00a327e0((undefined *)((int)this + 0x10),param_1 + 0x10);
  F_00a31a20((undefined *)((int)this + 0x20),param_1 + 0x20);
  return (uint)this;
}

/* ref: FUN_00a32d10 */
uint F_00a32d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa32d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a2edd0(this,param_1,0,0xffffffff);
  F_00a327e0((undefined *)((int)this + 0x1c),param_1 + 0x1c);
  F_00a327e0((undefined *)((int)this + 0x2c),param_1 + 0x2c);
  F_00a31a20((undefined *)((int)this + 0x3c),param_1 + 0x3c);
  return (uint)this;
}

/* ref: FUN_00a32d70 */
uint F_00a32d70(unsigned int gen_a0)
{
  GEN_ENTER(0xa32d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e3fc4));
  F_0042c880((undefined *)((int)this + 0x18));
  F_00a315a0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0xac,0x2c4);
  return (uint)uVar1;
}

/* ref: Component::Text::MacroEncoder::vf0 */
uint F_00a32dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa32dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e3fc4));
  F_0042c880(this + 0x18);
  F_00a315a0(this + 4,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)(this + 8),*(undefined4 * PTR32 *)(this + 8));
  F_00429760(*(undefined4 *)(this + 8),0xac,0x2c4);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a32e30 */
uint F_00a32e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa32e30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  byte bVar6;
  uint uVar7;
  
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[0]) != (*(int * PTR32 *)&gen_args[1])) {
    uVar7 = ((*(int * PTR32 *)&gen_args[1])[1] - *(*(int * PTR32 *)&gen_args[1])) / 0x1c;
    if (uVar7 == 0) {
      (*(int * PTR32 *)&gen_args[1]) = (int *)uVar7;
      F_00a325b0((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    iVar2 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
    uVar4 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - iVar2) / 0x1c;
    if (uVar7 <= uVar4) {
      piVar1 = (*(int * PTR32 *)&gen_args[1]) + 1;
      iVar3 = *(*(int * PTR32 *)&gen_args[1]);
      (*(int * PTR32 *)&gen_args[1]) = (int *)uVar7;
      uVar7 = F_00a31180(iVar3,*piVar1,iVar2);
      F_00a31280(uVar7,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(*(int * PTR32 *)&gen_args[1]));
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = *(int *)(*(undefined * PTR32 *)&gen_args[0]) + ((piVar5[1] - *piVar5) / 0x1c) * 0x1c;
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    if (uVar7 <= (uint)((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - iVar2) / 0x1c)) {
      iVar3 = *(*(int * PTR32 *)&gen_args[1]);
      (*(int * PTR32 *)&gen_args[1]) = (int *)(iVar3 + uVar4 * 0x1c);
      F_00a31180(iVar3,(*(int * PTR32 *)&gen_args[1]),iVar2);
      uVar7 = F_00a312d0((*(int * PTR32 *)&gen_args[1]),piVar5[1],*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(*(int * PTR32 *)&gen_args[1]))
      ;
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar7;
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar7;
    if (iVar2 != 0) {
      F_00a31c80((*(undefined * PTR32 *)&gen_args[0]),iVar2,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
      F_00a2b3f0(*(int *)(*(undefined * PTR32 *)&gen_args[0]),(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x1c);
    }
    bVar6 = F_00a2e0b0((*(undefined * PTR32 *)&gen_args[0]),(piVar5[1] - *piVar5) / 0x1c);
    if (bVar6 != 0) {
      uVar7 = F_00a320e0((*(undefined * PTR32 *)&gen_args[0]),*piVar5,piVar5[1],*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]));
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar7;
    }
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a32fd0 */
unsigned int F_00a32fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa32fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined1 * this_00;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a32b60(this,1);
    }
    uVar1 = *(int *)this + ((int)(param_1 - uVar2) / 0x1c) * 0x1c;
    this_00 = *(undefined1 * PTR32 *)((int)this + 4);
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a32b60(this,1);
    }
    this_00 = *(undefined1 * PTR32 *)((int)this + 4);
    uVar1 = param_1;
  }
  if (this_00 != (undefined1 *)0x0) {
    *(undefined4 *)(this_00 + 0x14) = 0xf;
    *(undefined4 *)(this_00 + 0x10) = 0;
    *this_00 = 0;
    F_00a2edd0(this_00,uVar1,0,0xffffffff);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x1c;
  return 0;
}

/* ref: FUN_00a33060 */
uint F_00a33060(unsigned int gen_a0)
{
  GEN_ENTER(0xa33060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a32bf0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a33080 */
uint F_00a33080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa33080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a32920(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a330b0 */
uint F_00a330b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa330b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a2edd0(this,param_1,0,0xffffffff);
  F_00a327e0((undefined *)((int)this + 0x1c),param_2);
  F_00a327e0((undefined *)((int)this + 0x2c),param_2 + 0x10);
  F_00a31a20((undefined *)((int)this + 0x3c),param_2 + 0x20);
  return (uint)this;
}

/* ref: FUN_00a33110 */
uint F_00a33110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa33110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a2edd0(this,param_1,0,0xffffffff);
  F_00a327e0((undefined *)((int)this + 0x1c),param_1 + 0x1c);
  F_00a327e0((undefined *)((int)this + 0x2c),param_1 + 0x2c);
  F_00a31a20((undefined *)((int)this + 0x3c),param_1 + 0x3c);
  return (uint)this;
}

/* ref: FUN_00a33170 */
uint F_00a33170(unsigned int gen_a0)
{
  GEN_ENTER(0xa33170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a32bf0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x48,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a331b0 */
uint F_00a331b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa331b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a2edd0(this,param_1,0,0xffffffff);
  F_00a327e0((undefined *)((int)this + 0x1c),param_2);
  F_00a327e0((undefined *)((int)this + 0x2c),param_2 + 0x10);
  F_00a31a20((undefined *)((int)this + 0x3c),param_2 + 0x20);
  return (uint)this;
}

/* ref: FUN_00a33210 */
uint F_00a33210(unsigned int gen_a0)
{
  GEN_ENTER(0xa33210u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a32920(param_1);
  return uVar1;
}

/* ref: FUN_00a33220 */
unsigned int F_00a33220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa33220u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    F_00a2edd0(param_1,param_2,0,0xffffffff);
    F_00a327e0(param_1 + 0x1c,param_2 + 0x1c);
    F_00a327e0(param_1 + 0x2c,param_2 + 0x2c);
    F_00a31a20(param_1 + 0x3c,param_2 + 0x3c);
  }
  return 0;
}

/* ref: FUN_00a33280 */
uint F_00a33280(unsigned int gen_a0)
{
  GEN_ENTER(0xa33280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a32bf0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x48,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a33300 */
uint F_00a33300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa33300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a32920(param_2);
  return uVar1;
}

/* ref: FUN_00a33310 */
uint F_00a33310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00a32920(param_4 + 3);
    F_00429760(param_4,0x5c,0x2c4);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    iVar4 = *(int *)((int)this + 4);
  }
  else {
    if ((char)param_2 != '\0') {
      *param_3 = param_4;
      if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
        **(int * PTR32 *)((int)this + 4) = (int)param_4;
      }
      goto LAB_00a33386;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_00a33386;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_00a33386: ;
  cVar1 = *(char *)(param_4[1] + 0x58);
  piVar3 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar4 + 0x58) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar3[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar4 = piVar6[2];
      if (*(char *)(iVar4 + 0x58) == '\0') {
        *(undefined1 *)(piVar5 + 0x16) = 1;
        *(undefined1 *)(iVar4 + 0x58) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x58))) = 0;
        piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
      }
      else {
        if (piVar3 == (int *)piVar5[2]) {
          piVar3 = (int *)piVar5[2];
          piVar5[2] = *piVar3;
          if (*(char *)(*piVar3 + 0x59) == '\0') {
            *(int * PTR32 *)(*piVar3 + 4) = piVar5;
          }
          piVar3[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar3;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar3;
            }
            else {
              piVar6[2] = (int)piVar3;
            }
          }
          *piVar3 = (int)piVar5;
          piVar5[1] = (int)piVar3;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 0x58) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x58))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x59) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00a33511: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*(char *)(iVar4 + 0x58) != '\0') {
        if (piVar3 == (int *)*piVar5) {
          iVar4 = *piVar5;
          *piVar5 = *(int *)(iVar4 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar4 + 8) + 0x59))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar4 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar4 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar4;
          }
          else {
            piVar3 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar3[2]) {
              piVar3[2] = iVar4;
            }
            else {
              *piVar3 = iVar4;
            }
          }
          *(int * PTR32 *)(iVar4 + 8) = piVar5;
          piVar5[1] = iVar4;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 0x58) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x58))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x59) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar2) {
            *piVar2 = (int)piVar6;
          }
          else {
            piVar2[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00a33511;
      }
      *(undefined1 *)(piVar5 + 0x16) = 1;
      *(undefined1 *)(iVar4 + 0x58) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x58))) = 0;
      piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
    }
    cVar1 = *(char *)(piVar3[1] + 0x58);
  } while( true );
}

/* ref: FUN_00a33540 */
unsigned int F_00a33540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa33540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_00a2edd0(param_2,param_3,0,0xffffffff);
    F_00a327e0(param_2 + 0x1c,param_3 + 0x1c);
    F_00a327e0(param_2 + 0x2c,param_3 + 0x2c);
    F_00a31a20(param_2 + 0x3c,param_3 + 0x3c);
  }
  return 0;
}

/* ref: FUN_00a335a0 */
unsigned int F_00a335a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa335a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)((int)param_1 + 0x59);
  piVar4 = param_1;
  while (cVar1 == '\0') {
    F_00a335a0(this,(int *)piVar4[2]);
    iVar2 = piVar4[0x12];
    piVar3 = (int *)*piVar4;
    if (iVar2 != 0) {
      F_00429760(iVar2,(piVar4[0x14] - iVar2 >> 2) * 4,0x2c4);
    }
    piVar4[0x12] = 0;
    piVar4[0x13] = 0;
    piVar4[0x14] = 0;
    if (piVar4[0xe] != 0) {
      F_00a31280(piVar4[0xe],piVar4[0xf],piVar4 + 0x11,param_1);
      F_00429760(piVar4[0xe],((piVar4[0x10] - piVar4[0xe]) / 0x1c) * 0x1c,0x2c4);
    }
    piVar4[0xe] = 0;
    piVar4[0xf] = 0;
    piVar4[0x10] = 0;
    if (piVar4[10] != 0) {
      F_00a31280(piVar4[10],piVar4[0xb],piVar4 + 0xd,param_1);
      F_00429760(piVar4[10],((piVar4[0xc] - piVar4[10]) / 0x1c) * 0x1c,0x2c4);
    }
    piVar4[10] = 0;
    piVar4[0xb] = 0;
    piVar4[0xc] = 0;
    if (0xf < (uint)piVar4[8]) {
      F_00429760(piVar4[3],piVar4[8] + 1,0x2c4);
    }
    piVar4[8] = 0xf;
    piVar4[7] = 0;
    *(undefined1 *)(piVar4 + 3) = 0;
    F_00429760(piVar4,0x5c,0x2c4);
    piVar4 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x59);
  }
  return 0;
}

/* ref: FUN_00a33700 */
uint F_00a33700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa33700u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  bool bVar8;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x59))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00a2bf10(&(*(int * PTR32 *)&gen_args[2]));
  piVar7 = (int *)*piVar3;
  if (*(char *)((int)piVar7 + 0x59) == '\0') {
    piVar6 = piVar7;
    if ((*(char *)(piVar3[2] + 0x59) == '\0') && (piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar7[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar7 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar6 + 0x59) == '\0') {
          piVar6[1] = (int)piVar7;
        }
        *piVar7 = (int)piVar6;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar1 = (undefined4 *)piVar3[1];
        if ((int *)*puVar1 == piVar3) {
          *puVar1 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar1[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar2 = (*(int * PTR32 *)&gen_args[2])[0x16];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x16))) = (char)piVar3[0x16];
      *(char *)(piVar3 + 0x16) = (char)iVar2;
      goto LAB_00a3381f;
    }
  }
  else {
    piVar6 = (int *)piVar3[2];
  }
  piVar7 = (int *)piVar3[1];
  if (*(char *)((int)piVar6 + 0x59) == '\0') {
    piVar6[1] = (int)piVar7;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
  }
  else if ((int *)*piVar7 == piVar3) {
    *piVar7 = (int)piVar6;
  }
  else {
    piVar7[2] = (int)piVar6;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar7;
    if (*(char *)((int)piVar6 + 0x59) == '\0') {
      piVar4 = (int *)F_00a2bd40(piVar6);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) == piVar3) {
    if (*(char *)((int)piVar6 + 0x59) == '\0') {
      uVar5 = F_00a2bd20(piVar6);
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = piVar7;
    }
  }
LAB_00a3381f: ;
  if ((char)piVar3[0x16] == '\x01') {
    if (piVar6 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        if ((char)piVar6[0x16] != '\x01') break;
        piVar4 = (int *)*piVar7;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar7[2];
          if ((char)piVar4[0x16] == '\0') {
            *(undefined1 *)(piVar4 + 0x16) = 1;
            *(undefined1 *)(piVar7 + 0x16) = 0;
            F_00a2d660((*(undefined * PTR32 *)&gen_args[0]),piVar7);
            piVar4 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar4 + 0x59) == '\0') {
            if ((*(char *)(*piVar4 + 0x58) != '\x01') || (*(char *)(piVar4[2] + 0x58) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x58) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x58) = 1;
                *(undefined1 *)(piVar4 + 0x16) = 0;
                F_00a2d6c0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
                piVar4 = (int *)piVar7[2];
              }
              *(char *)(piVar4 + 0x16) = (char)piVar7[0x16];
              *(undefined1 *)(piVar7 + 0x16) = 1;
              *(undefined1 *)(piVar4[2] + 0x58) = 1;
              F_00a2d660((*(undefined * PTR32 *)&gen_args[0]),piVar7);
              break;
            }
LAB_00a338e5: ;
            *(undefined1 *)(piVar4 + 0x16) = 0;
          }
        }
        else {
          if ((char)piVar4[0x16] == '\0') {
            *(undefined1 *)(piVar4 + 0x16) = 1;
            *(undefined1 *)(piVar7 + 0x16) = 0;
            F_00a2d6c0((*(undefined * PTR32 *)&gen_args[0]),piVar7);
            piVar4 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar4 + 0x59) == '\0') {
            if ((*(char *)(piVar4[2] + 0x58) == '\x01') && (*(char *)(*piVar4 + 0x58) == '\x01'))
            goto LAB_00a338e5;
            if (*(char *)(*piVar4 + 0x58) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x58) = 1;
              *(undefined1 *)(piVar4 + 0x16) = 0;
              F_00a2d660((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              piVar4 = (int *)*piVar7;
            }
            *(char *)(piVar4 + 0x16) = (char)piVar7[0x16];
            *(undefined1 *)(piVar7 + 0x16) = 1;
            *(undefined1 *)(*piVar4 + 0x58) = 1;
            F_00a2d6c0((*(undefined * PTR32 *)&gen_args[0]),piVar7);
            break;
          }
        }
        bVar8 = piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)));
        piVar6 = piVar7;
        piVar7 = (int *)piVar7[1];
      } while (bVar8);
    }
    *(undefined1 *)(piVar6 + 0x16) = 1;
  }
  iVar2 = piVar3[0x12];
  if (iVar2 != 0) {
    F_00429760(iVar2,(piVar3[0x14] - iVar2 >> 2) * 4,0x2c4);
  }
  piVar3[0x12] = 0;
  piVar3[0x13] = 0;
  piVar3[0x14] = 0;
  if (piVar3[0xe] != 0) {
    F_00a31280(piVar3[0xe],piVar3[0xf],piVar3 + 0x11,(*(int * PTR32 *)&gen_args[2]));
    F_00429760(piVar3[0xe],((piVar3[0x10] - piVar3[0xe]) / 0x1c) * 0x1c,0x2c4);
  }
  piVar3[0xe] = 0;
  piVar3[0xf] = 0;
  piVar3[0x10] = 0;
  if (piVar3[10] != 0) {
    F_00a31280(piVar3[10],piVar3[0xb],piVar3 + 0xd,(*(int * PTR32 *)&gen_args[2]));
    F_00429760(piVar3[10],((piVar3[0xc] - piVar3[10]) / 0x1c) * 0x1c,0x2c4);
  }
  piVar3[10] = 0;
  piVar3[0xb] = 0;
  piVar3[0xc] = 0;
  if (0xf < (uint)piVar3[8]) {
    F_00429760(piVar3[3],piVar3[8] + 1,0x2c4);
  }
  piVar3[8] = 0xf;
  piVar3[7] = 0;
  *(undefined1 *)(piVar3 + 3) = 0;
  F_00429760(piVar3,0x5c,0x2c4);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a33a70 */
uint F_00a33a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa33a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  uint uVar9;
  int iVar10;
  undefined4 * puVar11;
  bool bVar12;
  undefined4 uVar13;
  
  puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar12 = true;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar7[1] + 0x59) == '\0') {
    uVar9 = *(uint *)((*(int *)&gen_args[2]) + 0x1c);
    uVar1 = *(uint *)((*(int *)&gen_args[2]) + 0x20);
    puVar11 = (undefined4 *)puVar7[1];
    do {
      puVar7 = puVar11;
      piVar4 = puVar7 + 3;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        uVar2 = puVar7[7];
        if (0xf < (uint)puVar7[8]) {
          piVar4 = (int *)*piVar4;
        }
        uVar5 = *(uint *)((*(int *)&gen_args[2]) + 0x1c);
        if (uVar9 < *(uint *)((*(int *)&gen_args[2]) + 0x1c)) {
          uVar5 = uVar9;
        }
        uVar6 = uVar5;
        if (uVar2 <= uVar5) {
          uVar6 = uVar2;
        }
        if (uVar1 < 0x10) {
          iVar10 = (*(int *)&gen_args[2]) + 0xc;
        }
        else {
          iVar10 = *(int *)((*(int *)&gen_args[2]) + 0xc);
        }
        uVar6 = F_0040d320(iVar10,piVar4,uVar6);
        if (uVar6 == 0) {
          if (uVar5 < uVar2) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)(uVar5 != uVar2);
          }
        }
        bVar12 = (int)uVar6 < 0;
      }
      else {
        if (uVar1 < 0x10) {
          iVar10 = (*(int *)&gen_args[2]) + 0xc;
        }
        else {
          iVar10 = *(int *)((*(int *)&gen_args[2]) + 0xc);
        }
        uVar2 = puVar7[7];
        uVar5 = uVar2;
        if (uVar9 <= uVar2) {
          uVar5 = uVar9;
        }
        if (0xf < (uint)puVar7[8]) {
          piVar4 = (int *)*piVar4;
        }
        uVar5 = F_0040d320(piVar4,iVar10,uVar5);
        if (uVar5 == 0) {
          if (uVar2 < uVar9) {
            bVar12 = false;
            goto LAB_00a33b5c;
          }
          uVar5 = (uint)(uVar2 != uVar9);
        }
        bVar12 = -1 < (int)uVar5;
      }
LAB_00a33b5c: ;
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar12);
      if (bVar12 == false) {
        puVar11 = (undefined4 *)puVar7[2];
      }
      else {
        puVar11 = (undefined4 *)*puVar7;
      }
    } while (*(char *)((int)puVar11 + 0x59) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar7;
  if (bVar12 != false) {
    if (puVar7 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      uVar13 = 1;
      goto LAB_00a33b91;
    }
    F_00a2c1c0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar3 = (*(undefined4 * PTR32 *)&gen_args[3]);
  puVar11 = (undefined4 *)((*(int *)&gen_args[2]) + 0xc);
  puVar8 = puVar11;
  if (0xf < *(uint *)((*(int *)&gen_args[2]) + 0x20)) {
    puVar8 = (undefined *)*puVar11;
  }
  uVar9 = F_00a2c090((*(undefined4 * PTR32 *)&gen_args[3]) + 3,0,(*(undefined4 * PTR32 *)&gen_args[3])[7],puVar8,*(undefined4 *)((*(int *)&gen_args[2]) + 0x1c));
  uVar13 = (*(undefined4 *)(gen_frame + 0x8));
  if (-1 < (int)uVar9) {
    F_00a32920(puVar11);
    F_00429760((*(int *)&gen_args[2]),0x5c,0x2c4);
    *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
LAB_00a33b91: ;
  puVar7 = (undefined4 *)F_00a33310((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),uVar13,puVar7,(*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar7;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a33c20 */
uint F_00a33c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa33c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * this_00;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x5c,0,0x2c4);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  this_00 = puVar1 + 3;
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x16) = 0;
  if (this_00 != (undefined4 *)0x0) {
    puVar1[7] = 0;
    puVar1[8] = 0xf;
    *(undefined1 *)this_00 = 0;
    F_00a2edd0(this_00,param_1,0,0xffffffff);
    F_00a327e0(puVar1 + 10,param_1 + 0x1c);
    F_00a327e0(puVar1 + 0xe,param_1 + 0x2c);
    F_00a31a20(puVar1 + 0x12,param_1 + 0x3c);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a33ca0 */
uint F_00a33ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xa33ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a335a0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a33cd0 */
uint F_00a33cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa33cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00a335a0(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x59) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x59) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x59);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x59);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x59);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x59);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a33700(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a33d90 */
uint F_00a33d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa33d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00a33c20(this,param_2);
  F_00a33a70(this,param_1,uVar1,uVar2);
  return param_1;
}

/* ref: Component::Text::MacroDecoder::vf4 */
uint F_00a33dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf5 */
uint F_00a33dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf6 */
uint F_00a33de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf7 */
uint F_00a33df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf8 */
uint F_00a33e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf9 */
uint F_00a33e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf10 */
uint F_00a33e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf13 */
uint F_00a33e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa33e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_00a33e40 */
uint F_00a33e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa33e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a33f00((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00a33e50 */
uint F_00a33e50(unsigned int gen_a0)
{
  GEN_ENTER(0xa33e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a33cd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: Component::Text::MacroDecoder::vf0 */
uint F_00a33e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa33e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a29530(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Text::TextChecker::vf0 */
uint F_00a33ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa33ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x10e4074));
  F_0042c880(this + 0x4c);
  F_00492c50(this + 0x34);
  F_00429760(*(undefined4 *)(this + 0x34),8,0x2c4);
  *(undefined4 *)(this + 0x34) = 0;
  F_00a29530(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Text::TextModule::vf0 */
uint F_00a33f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa33f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a29dc0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a33f30 */
uint F_00a33f30(unsigned int gen_a0)
{
  GEN_ENTER(0xa33f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a33cd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x5c,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a33f70 */
uint F_00a33f70(unsigned int gen_a0)
{
  GEN_ENTER(0xa33f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a33cd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x5c,0x2c4);
  return (uint)uVar1;
}

/* ref: Component::Text::MacroPreProcessor::vf0 */
uint F_00a33ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa33ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a2a960(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a34020 */
uint F_00a34020(unsigned int gen_a0)
{
  GEN_ENTER(0xa34020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10e420c));
  uVar1 = F_00406b30(*(undefined4 *)((int)this + 0x83c));
  return (uint)uVar1;
}

/* ref: FUN_00a34040 */
unsigned int F_00a34040(void)
{
  GEN_ENTER(0xa34040u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00a34060 */
byte F_00a34060(unsigned int gen_a0)
{
  GEN_ENTER(0xa34060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x832);
}

/* ref: FUN_00a34080 */
byte F_00a34080(unsigned int gen_a0)
{
  GEN_ENTER(0xa34080u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x835);
}

/* ref: FUN_00a34090 */
byte F_00a34090(unsigned int gen_a0)
{
  GEN_ENTER(0xa34090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x836);
}

/* ref: FUN_00a340a0 */
unsigned int F_00a340a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa340a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(char *)((int)this + 0x830) != '\0') &&
     ((*(short *)((int)this + 0x828) != 0 || (*(short *)((int)this + 0x82a) != 0)))) {
    F_00a1b170((int)*(short *)((int)this + 0x824),(int)*(short *)((int)this + 0x826));
    *(short *)((int)this + 0x82c) = *(short *)((int)this + 0x82c) + *(short *)((int)this + 0x828);
    *(short *)((int)this + 0x82e) = *(short *)((int)this + 0x82e) + *(short *)((int)this + 0x82a);
  }
  return 0;
}

/* ref: FUN_00a34100 */
uint F_00a34100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa34100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(char *)((int)this + 0x830) != '\0') {
    *(short *)((int)this + 0x82c) = (short)param_1 - *(short *)((int)this + 0x824);
    *(short *)((int)this + 0x82e) = (short)param_2 - *(short *)((int)this + 0x826);
  }
  uVar1 = F_00a1b170(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a34150 */
byte F_00a34150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa34150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  if (param_1 == *(byte *)((int)this + 0x830)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)*(short *)((int)this + 0x828);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = (int)*(short *)((int)this + 0x82a);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00a34190 */
byte F_00a34190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa34190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (*(byte *)(in_ecx + 0x831) & (byte)param_2) != 0;
}

/* ref: FUN_00a341c0 */
ushort F_00a341c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa341c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x82a);
}

/* ref: FUN_00a341f0 */
uint F_00a341f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa341f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a1b070((undefined *)((int)this + 900),param_1,1);
  return param_1;
}

/* ref: FUN_00a34210 */
uint F_00a34210(unsigned int gen_a0)
{
  GEN_ENTER(0xa34210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 900;
}

/* ref: FUN_00a34220 */
uint F_00a34220(unsigned int gen_a0)
{
  GEN_ENTER(0xa34220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x32c;
}

/* ref: FUN_00a34230 */
uint F_00a34230(unsigned int gen_a0)
{
  GEN_ENTER(0xa34230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x198)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  puVar1 = (undefined4 *)F_00976f30(((undefined1 *)(gen_frame + 0x4)));
  puVar3 = puVar1;
  for (iVar2 = 0x65; this = (undefined *)((int)this + 4), iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)this = *puVar3;
    puVar3 = puVar3 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
  return (uint)puVar1;
}

/* ref: FUN_00a34270 */
uint F_00a34270(unsigned int gen_a0)
{
  GEN_ENTER(0xa34270u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00976fe0(in_ecx + 4);
  return uVar1;
}

/* ref: FUN_00a34290 */
uint F_00a34290(unsigned int gen_a0)
{
  GEN_ENTER(0xa34290u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(char *)(in_ecx + 0x837) != '\0') {
    uVar1 = F_00977010(in_ecx + 4);
    return uVar1;
  }
  F_00977000(in_ecx + 4);
  return in_EAX;
}

/* ref: FUN_00a342b0 */
uint F_00a342b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa342b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(char *)(in_ecx + 0x837) != '\0') {
    F_00977000(in_ecx + 4);
    return in_EAX;
  }
  uVar1 = F_00977010(in_ecx + 4);
  return uVar1;
}

/* ref: FUN_00a342d0 */
uint F_00a342d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa342d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a1b1c0((undefined *)((int)this + 0x32c),1,param_1);
  return uVar1;
}

/* ref: FUN_00a342f0 */
unsigned int F_00a342f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa342f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x830) = 0;
  return 0;
}

/* ref: FUN_00a34300 */
uint F_00a34300(unsigned int gen_a0)
{
  GEN_ENTER(0xa34300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x4a0];
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x498)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x49c);
  puVar1 = (undefined4 *)F_00a1b0d0(((undefined1 *)(gen_frame + 0x4)));
  puVar3 = puVar1;
  puVar4 = (undefined4 *)((int)this + 900);
  for (iVar2 = 0x125; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x498)) ^ (uint)(uint)(gen_frame + 0x49c));
  return (uint)puVar1;
}

/* ref: FUN_00a34350 */
uint F_00a34350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa34350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  uint uVar2;
  
  cVar1 = *(char *)(param_1 + 4);
  uVar2 = CONCAT31((int3)((uint)param_1 >> 8),cVar1);
  if ((cVar1 != '\0') && ((byte)(cVar1 + 0x5bU) < 0x10)) {
    uVar2 = F_00977020((int)this + 4,1 << (cVar1 + 0x5bU & 0x1f));
  }
  return uVar2;
}

/* ref: FUN_00a34390 */
uint F_00a34390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa34390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x83c) + param_1 * 0xb)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined1 *)((int)puVar1 + 10) = *(undefined1 *)((int)param_2 + 10);
  if (*(int *)((int)this + 0x848) != 0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x848) + 4))))
                       (*(int * PTR32 *)((int)this + 0x848),param_1,
                        *(int *)((int)this + 0x83c) + param_1 * 0xb)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00a343f0 */
uint F_00a343f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa343f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xb + *(int *)(in_ecx + 0x83c);
}

/* ref: FUN_00a34410 */
uint F_00a34410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa34410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x83c) + param_1 * 0xb)));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 10) = 0;
  if (*(int *)((int)this + 0x848) != 0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x848) + 4))))
                       (*(int * PTR32 *)((int)this + 0x848),param_1,
                        *(int *)((int)this + 0x83c) + param_1 * 0xb)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00a34480 */
unsigned int F_00a34480(unsigned int gen_a0)
{
  GEN_ENTER(0xa34480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x838)) {
    iVar3 = 0;
    do {
      puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x83c) + iVar3)));
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined2 *)(puVar1 + 2) = 0;
      *(undefined1 *)((int)puVar1 + 10) = 0;
      if (*(int *)((int)this + 0x848) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x848) + 4))))
                  (*(int * PTR32 *)((int)this + 0x848),iVar2,*(int *)((int)this + 0x83c) + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xb;
    } while (iVar2 < *(int *)((int)this + 0x838));
  }
  return 0;
}

/* ref: FUN_00a34500 */
byte F_00a34500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa34500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  *(undefined4 *)((int)this + 0x840) = *param_1;
  *(undefined2 *)((int)this + 0x844) = *(undefined2 *)(param_1 + 1);
  bVar1 = *(byte *)((int)param_1 + 6);
  *(byte *)((int)this + 0x846) = bVar1;
  return bVar1;
}

/* ref: FUN_00a34530 */
uint F_00a34530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa34530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)((int)this + 0x838)) {
    iVar3 = *(int *)((int)this + 0x83c);
    do {
      iVar2 = 0;
      do {
        if ((((*(char *)(iVar3 + iVar2) == (char)param_1) &&
             (bVar1 = *(byte *)(iVar3 + 1 + iVar2), bVar1 != (byte)param_2)) &&
            ((*(byte *)((int)this + 0x819) & bVar1) == bVar1)) && ((byte)param_2 < bVar1)) {
          return iVar2 * 0x8000 + local_8;
        }
        iVar2 = iVar2 + 2;
      } while (iVar2 < 4);
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0xb;
    } while (local_8 < *(int *)((int)this + 0x838));
  }
  return 0xffffffff;
}

/* ref: FUN_00a345b0 */
uint F_00a345b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa345b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x838)) {
    iVar2 = *(int *)((int)this + 0x83c);
    do {
      iVar1 = 0;
      do {
        if ((*(char *)(iVar2 + iVar1) == (char)param_1) &&
           (*(char *)(iVar2 + 1 + iVar1) == (char)param_2)) {
          return iVar1 * 0x8000 + iVar3;
        }
        iVar1 = iVar1 + 2;
      } while (iVar1 < 4);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xb;
    } while (iVar3 < *(int *)((int)this + 0x838));
  }
  return 0xffffffff;
}

/* ref: FUN_00a34610 */
uint F_00a34610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa34610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x838)) {
    iVar1 = *(int *)((int)this + 0x83c);
    do {
      iVar2 = 0;
      do {
        if ((*(char *)(iVar1 + iVar2) == (char)param_1) &&
           (*(char *)(iVar1 + 1 + iVar2) == (char)param_2)) {
          *(undefined2 *)(iVar1 + iVar2) = 0;
          if (*(int *)((int)this + 0x848) != 0) {
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x848) + 4))))
                      (*(int * PTR32 *)((int)this + 0x848),iVar3,iVar1);
          }
          return iVar2 * 0x8000 + iVar3;
        }
        iVar2 = iVar2 + 2;
      } while (iVar2 < 4);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0xb;
    } while (iVar3 < *(int *)((int)this + 0x838));
  }
  return 0xffffffff;
}

/* ref: FUN_00a34690 */
uint F_00a34690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa34690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10e420c));
  F_00976f30((undefined *)((int)this + 4));
  F_00976f30((undefined *)((int)this + 0x198));
  F_00a1b190((int)this + 0x32c);
  F_00a1b190((int)this + 0x358);
  F_00a1b0d0((undefined *)((int)this + 900));
  iVar4 = 0;
  *(undefined2 *)((int)this + 0x818) = 0;
  *(undefined4 *)((int)this + 0x830) = 0;
  *(undefined4 *)((int)this + 0x834) = 0;
  *(uint *)((int)this + 0x838) = param_1;
  uVar1 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0xb >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 0xb),0,0);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    iVar3 = param_1 - 1;
    if (-1 < iVar3) {
      iVar2 = uVar1 + 2;
      do {
        *(undefined4 *)(iVar2 + -2) = 0;
        *(undefined4 *)(iVar2 + 2) = 0;
        *(undefined2 *)(iVar2 + 6) = 0;
        *(undefined1 *)(iVar2 + 8) = 0;
        iVar2 = iVar2 + 0xb;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
  }
  *(uint *)((int)this + 0x83c) = uVar1;
  *(undefined4 *)((int)this + 0x848) = 0;
  do {
    *(char *)((int)this + iVar4 + 0x840) = (char)iVar4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 7);
  return (uint)this;
}

/* ref: FUN_00a34760 */
unsigned int F_00a34760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa34760u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x33c))) & (*(uint *)&gen_args[1])) == 0) {
    if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x338))) & (*(uint *)&gen_args[1])) == 0) {
      *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x830))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x830))) & ~(byte)(*(undefined4 *)&gen_args[2]);
    }
  }
  else {
    *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x830))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x830))) | (byte)(*(undefined4 *)&gen_args[2]);
  }
  if (((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x344))) & (*(uint *)&gen_args[1])) != 0) &&
     ((uVar1 = (int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x82c))) >> 0x1f,
      3 < (int)(((int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x82c))) ^ uVar1) - uVar1) ||
      (uVar1 = (int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x82e))) >> 0x1f,
      3 < (int)(((int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x82e))) ^ uVar1) - uVar1))))) {
    *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x831))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x831))) | (byte)(*(undefined4 *)&gen_args[2]);
    return 0;
  }
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x831))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x831))) & ~(byte)(*(undefined4 *)&gen_args[2]);
  return 0;
}

/* ref: FUN_00a347e0 */
byte F_00a347e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa347e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this);
  uVar1 = *(uint *)((int)this + 0x14);
  if ((uVar1 & 0x100) != 0) {
    uVar3 = (uint)(byte)((byte)uVar3 | 1);
  }
  if ((uVar1 & 0x800) != 0) {
    uVar3 = (uint)(byte)((byte)uVar3 | 2);
  }
  if ((uVar1 & 0x200) != 0) {
    uVar3 = (uint)(byte)((byte)uVar3 | 4);
  }
  if ((uVar1 & 0x1000) != 0) {
    uVar3 = (uint)(byte)((byte)uVar3 | 8);
  }
  if ((uVar1 & 0x4000) != 0) {
    uVar3 = (uint)(byte)((byte)uVar3 | 0x80);
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = (uint)(byte)((byte)uVar3 | 0x40);
  }
  bVar2 = (byte)uVar3;
  if (((uVar3 & 4) != 0) && ((uVar3 & 8) != 0)) {
    bVar2 = bVar2 | 0x20;
  }
  return bVar2;
}

/* ref: FUN_00a34840 */
byte F_00a34840(unsigned int gen_a0)
{
  GEN_ENTER(0xa34840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = (*(byte *)((int)this + 0x3c8) & 1) != 0;
  if ((*(byte *)((int)this + 0x3cc) & 1) != 0) {
    bVar1 = bVar1 + 2;
  }
  if ((*(byte *)((int)this + 0x3d0) & 1) != 0) {
    bVar1 = bVar1 + 4;
  }
  return bVar1;
}

/* ref: FUN_00a34870 */
byte F_00a34870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa34870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = param_1 * 0xb + *(int *)((int)this + 0x83c);
  iVar4 = 0;
  do {
    while( true ) {
      if ((3 < iVar4) && (*(char *)(iVar4 + iVar5) == '\0')) {
        return 0;
      }
      bVar1 = *(byte *)(iVar4 + iVar5);
      bVar2 = *(byte *)(iVar4 + 1 + iVar5);
      (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar1);
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (0x9f < bVar1) break;
      if ((((*(byte *)((int)this + (uint)bVar1 * 4 + 0x388) & 1) != 0) &&
          ((*(byte *)((int)this + 0x819) & bVar2) == bVar2)) &&
         (uVar3 = F_00a34530(this,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8))), uVar3 == 0xffffffff)) {
        return 1;
      }
LAB_00a34951: ;
      iVar4 = iVar4 + 2;
    }
    if (0xa4 < bVar1) {
      uVar6 = 1 << (bVar1 + 0x5b & 0x1f);
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar6);
      if (((uVar3 != 0) && (*(byte *)((int)this + 0x818) == bVar2)) ||
         (((*(uint *)((int)this + 0x14) & uVar6) != 0 && (*(byte *)((int)this + 0x818) == bVar2))))
      {
        return 1;
      }
      goto LAB_00a34951;
    }
    if ((*(uint *)((int)this + 0x338) & 1 << (bVar1 + 0x60 & 0x1f)) == 0) goto LAB_00a34951;
    if (*(byte *)((int)this + 0x819) == bVar2) {
      return 1;
    }
    iVar4 = iVar4 + 2;
  } while( true );
}

/* ref: FUN_00a34970 */
byte F_00a34970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa34970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = param_1 * 0xb + *(int *)((int)this + 0x83c);
  iVar4 = 0;
  do {
    while( true ) {
      if ((3 < iVar4) && (*(char *)(iVar4 + iVar5) == '\0')) {
        return 0;
      }
      bVar1 = *(byte *)(iVar4 + iVar5);
      bVar2 = *(byte *)(iVar4 + 1 + iVar5);
      (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar1);
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (0x9f < bVar1) break;
      if ((((*(byte *)((int)this + (uint)bVar1 * 4 + 0x388) & 2) != 0) &&
          ((*(byte *)((int)this + 0x819) & bVar2) == bVar2)) &&
         (uVar3 = F_00a34530(this,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8))), uVar3 == 0xffffffff)) {
        return 1;
      }
LAB_00a34a51: ;
      iVar4 = iVar4 + 2;
    }
    if (0xa4 < bVar1) {
      uVar6 = 1 << (bVar1 + 0x5b & 0x1f);
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,uVar6);
      if (((uVar3 != 0) && (*(byte *)((int)this + 0x818) == bVar2)) ||
         (((*(uint *)((int)this + 0x18) & uVar6) != 0 && (*(byte *)((int)this + 0x818) == bVar2))))
      {
        return 1;
      }
      goto LAB_00a34a51;
    }
    if ((*(uint *)((int)this + 0x33c) & 1 << (bVar1 + 0x60 & 0x1f)) == 0) goto LAB_00a34a51;
    if (*(byte *)((int)this + 0x819) == bVar2) {
      return 1;
    }
    iVar4 = iVar4 + 2;
  } while( true );
}

/* ref: FUN_00a34a70 */
byte F_00a34a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa34a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = param_1 * 0xb + *(int *)((int)this + 0x83c);
  iVar4 = 0;
  do {
    while( true ) {
      if ((3 < iVar4) && (*(char *)(iVar4 + iVar5) == '\0')) {
        return 0;
      }
      bVar1 = *(byte *)(iVar4 + iVar5);
      bVar2 = *(byte *)(iVar4 + 1 + iVar5);
      (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar1);
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (0x9f < bVar1) break;
      if ((((*(byte *)((int)this + (uint)bVar1 * 4 + 0x388) & 8) != 0) &&
          ((*(byte *)((int)this + 0x819) & bVar2) == bVar2)) &&
         (uVar3 = F_00a34530(this,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8))), uVar3 == 0xffffffff)) {
        return 1;
      }
LAB_00a34b51: ;
      iVar4 = iVar4 + 2;
    }
    if (0xa4 < bVar1) {
      uVar6 = 1 << (bVar1 + 0x5b & 0x1f);
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,uVar6);
      if (((uVar3 != 0) && (*(byte *)((int)this + 0x818) == bVar2)) ||
         (((*(uint *)((int)this + 0x20) & uVar6) != 0 && (*(byte *)((int)this + 0x818) == bVar2))))
      {
        return 1;
      }
      goto LAB_00a34b51;
    }
    if ((*(uint *)((int)this + 0x348) & 1 << (bVar1 + 0x60 & 0x1f)) == 0) goto LAB_00a34b51;
    if (*(byte *)((int)this + 0x819) == bVar2) {
      return 1;
    }
    iVar4 = iVar4 + 2;
  } while( true );
}

/* ref: FUN_00a34b70 */
byte F_00a34b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa34b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = param_1 * 0xb + *(int *)((int)this + 0x83c);
  iVar5 = 0;
  do {
    while( true ) {
      if ((3 < iVar5) && (*(char *)(iVar5 + iVar4) == '\0')) {
        return 0;
      }
      bVar1 = *(byte *)(iVar5 + iVar4);
      bVar2 = *(byte *)(iVar5 + 1 + iVar4);
      (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar1);
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (0x9f < bVar1) break;
      if ((((*(byte *)((int)this + (uint)bVar1 * 4 + 0x388) & 1) != 0) &&
          ((*(byte *)((int)this + 0x819) & bVar2) == bVar2)) &&
         (uVar3 = F_00a34530(this,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8))), uVar3 == 0xffffffff)) {
        return 1;
      }
LAB_00a34c28: ;
      iVar5 = iVar5 + 2;
    }
    if (0xa4 < bVar1) {
      uVar6 = 1 << (bVar1 + 0x5b & 0x1f);
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar6);
      if ((uVar3 != 0) || ((*(uint *)((int)this + 0x14) & uVar6) != 0)) {
        return 1;
      }
      goto LAB_00a34c28;
    }
    if ((*(uint *)((int)this + 0x338) & 1 << (bVar1 + 0x60 & 0x1f)) != 0) {
      return 1;
    }
    iVar5 = iVar5 + 2;
  } while( true );
}

/* ref: FUN_00a34c40 */
byte F_00a34c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa34c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = param_1 * 0xb + *(int *)((int)this + 0x83c);
  iVar5 = 0;
  do {
    while( true ) {
      if ((3 < iVar5) && (*(char *)(iVar5 + iVar4) == '\0')) {
        return 0;
      }
      bVar1 = *(byte *)(iVar5 + iVar4);
      bVar2 = *(byte *)(iVar5 + 1 + iVar4);
      (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar1);
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (0x9f < bVar1) break;
      if ((((*(byte *)((int)this + (uint)bVar1 * 4 + 0x388) & 2) != 0) &&
          ((*(byte *)((int)this + 0x819) & bVar2) == bVar2)) &&
         (uVar3 = F_00a34530(this,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8))), uVar3 == 0xffffffff)) {
        return 1;
      }
LAB_00a34cf8: ;
      iVar5 = iVar5 + 2;
    }
    if (0xa4 < bVar1) {
      uVar6 = 1 << (bVar1 + 0x5b & 0x1f);
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,uVar6);
      if ((uVar3 != 0) || ((*(uint *)((int)this + 0x18) & uVar6) != 0)) {
        return 1;
      }
      goto LAB_00a34cf8;
    }
    if ((*(uint *)((int)this + 0x33c) & 1 << (bVar1 + 0x60 & 0x1f)) != 0) {
      return 1;
    }
    iVar5 = iVar5 + 2;
  } while( true );
}

/* ref: FUN_00a34d10 */
byte F_00a34d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa34d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = param_1 * 0xb + *(int *)((int)this + 0x83c);
  iVar5 = 0;
  do {
    while( true ) {
      if ((3 < iVar5) && (*(char *)(iVar5 + iVar4) == '\0')) {
        return 0;
      }
      bVar1 = *(byte *)(iVar5 + iVar4);
      bVar2 = *(byte *)(iVar5 + 1 + iVar4);
      (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar1);
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (0x9f < bVar1) break;
      if ((((*(byte *)((int)this + (uint)bVar1 * 4 + 0x388) & 8) != 0) &&
          ((*(byte *)((int)this + 0x819) & bVar2) == bVar2)) &&
         (uVar3 = F_00a34530(this,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8))), uVar3 == 0xffffffff)) {
        return 1;
      }
LAB_00a34dc8: ;
      iVar5 = iVar5 + 2;
    }
    if (0xa4 < bVar1) {
      uVar6 = 1 << (bVar1 + 0x5b & 0x1f);
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,uVar6);
      if ((uVar3 != 0) || ((*(uint *)((int)this + 0x20) & uVar6) != 0)) {
        return 1;
      }
      goto LAB_00a34dc8;
    }
    if ((*(uint *)((int)this + 0x348) & 1 << (bVar1 + 0x60 & 0x1f)) != 0) {
      return 1;
    }
    iVar5 = iVar5 + 2;
  } while( true );
}

/* ref: FUN_00a34de0 */
byte F_00a34de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa34de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = param_1 * 0xb + *(int *)((int)this + 0x83c);
  iVar3 = 0;
  do {
    while( true ) {
      if ((3 < iVar3) && (*(char *)(iVar3 + iVar4) == '\0')) {
        return 0;
      }
      bVar1 = *(byte *)(iVar3 + iVar4);
      if (0x9f < bVar1) break;
      if ((*(byte *)((int)this + (uint)bVar1 * 4 + 0x388) & 4) != 0) {
        return 1;
      }
LAB_00a34e65: ;
      iVar3 = iVar3 + 2;
    }
    if (0xa4 < bVar1) {
      uVar5 = 1 << (bVar1 + 0x5b & 0x1f);
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,uVar5);
      if ((uVar2 != 0) || ((*(uint *)((int)this + 0x1c) & uVar5) != 0)) {
        return 1;
      }
      goto LAB_00a34e65;
    }
    if ((*(uint *)((int)this + 0x344) & 1 << (bVar1 + 0x60 & 0x1f)) != 0) {
      return 1;
    }
    iVar3 = iVar3 + 2;
  } while( true );
}

/* ref: FUN_00a34e80 */
uint F_00a34e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa34e80u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  undefined1 uVar2;
  
  uVar2 = *((undefined1 *)GEN_TOP(((*(int *)&gen_args[1]) + 0x840 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
  (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),uVar2);
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x837))) != '\0') {
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 3: ;
      uVar2 = 5;
      break;
    case 4: ;
      uVar2 = 6;
      break;
    case 5: ;
      uVar2 = 3;
      break;
    case 6: ;
      uVar2 = 4;
      break;
    default: ;
      goto switchD_00a34ea8_default;
    }
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),uVar2);
  }
switchD_00a34ea8_default: ;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]));
  if (uVar1 == 0) {
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0: ;
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x81c)));
    case 1: ;
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x820)));
    case 2: ;
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x334)));
    case 3: ;
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    case 4: ;
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
    case 5: ;
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
    case 6: ;
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
    default: ;
      uVar1 = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00a34f60 */
uint F_00a34f60(unsigned int gen_a0)
{
  GEN_ENTER(0xa34f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x630];
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x628)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x62c);
  puVar1 = (undefined4 *)F_00976f30(((undefined1 *)(gen_frame + 0x494)));
  puVar4 = this;
  for (iVar3 = 0x65; puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
  }
  F_00a1b1c0((undefined *)((int)this + 0x32c),1,0x1f);
  puVar2 = (undefined4 *)F_00a1b0d0(((undefined1 *)(gen_frame + 0x0)));
  puVar4 = puVar2;
  puVar1 = (undefined4 *)((int)this + 900);
  for (iVar3 = 0x125; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x628)) ^ (uint)(uint)(gen_frame + 0x62c));
  return (uint)puVar2;
}

/* ref: FUN_00a34fd0 */
unsigned int F_00a34fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa34fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(byte *)(iVar2 + param_1) != 0) {
      puVar1 = ((uint *)GEN_TOP(((int)this + (uint)*(byte *)(iVar2 + param_1) * 4 + 0x388)));
      *puVar1 = *puVar1 & 0xfffffff0;
    }
    iVar2 = iVar2 + 2;
  } while (iVar2 < 4);
  return 0;
}

/* ref: FUN_00a35200 */
uint F_00a35200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa35200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  
  puVar1 = (uint *)((int)this + param_1 * 4 + 4);
  *puVar1 = *puVar1 & ~param_2;
  return param_1;
}

/* ref: Client::System::Input::InputData::vf0 */
uint F_00a35220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa35220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10e420c));
  F_00406b30(*(undefined4 *)(this + 0x83c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a352b0 */
unsigned int F_00a352b0(float gen_a0)
{
  GEN_ENTER(0xa352b0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00a352d0 */
unsigned int F_00a352d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa352d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0x158;
  *(undefined4 *)((int)this + 8) = 0x158;
  *(undefined2 *)((int)this + 4) = 0x100;
  puVar1 = (undefined4 *)((int)this + 0xad0);
  do {
    puVar1[-0x2b0] = 0;
    puVar1[-0x158] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x1030) = 0;
  *(undefined4 *)((int)this + 0x1034) = 0;
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00a35320 */
unsigned int F_00a35320(void)
{
  GEN_ENTER(0xa35320u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00a35330 */
uint F_00a35330(unsigned int gen_a0)
{
  GEN_ENTER(0xa35330u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  if (param_1 < 200) {
    uVar1 = (&REFG(undefined4, 0x14a9a1c))[param_1 >> 1];
    if (uVar1 == 0) {
      return 0;
    }
    if ((param_1 & 1) != 0) {
      if ((*(char *)(uVar1 + 0x2e08) == '\0') && (*(char *)(uVar1 + 0x2e09) == '\0')) {
        return *(uint *)(uVar1 + 0x2e04);
      }
      return *(uint *)(uVar1 + 0x2e00);
    }
  }
  else {
    if (param_1 < 0xf4) {
      uVar1 = F_00ae0db0(&REFG(undefined, 0x14c0920),param_1 - 200);
      return uVar1;
    }
    if (param_1 < 0x11c) {
      uVar1 = F_00ae1300(&REFG(undefined, 0x14c0878),param_1 - 0xf4);
      return uVar1;
    }
    uVar1 = F_00b79f30(&REFG(undefined, 0x14c5798),param_1 - 0x11c);
  }
  return uVar1;
}

/* ref: FUN_00a353c0 */
uint F_00a353c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa353c0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if (param_1[1] == param_2[1]) {
    return (-(uint)(*(byte *)(*param_1 + 0x8d) < *(byte *)(*param_2 + 0x8d)) & 0xfffffffe) + 1;
  }
  return param_1[1] - param_2[1];
}

/* ref: FUN_00a35400 */
uint F_00a35400(unsigned int gen_a0)
{
  GEN_ENTER(0xa35400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * this_00;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint * puVar4;
  int local_8;
  
  uVar3 = 0;
  this_00 = (uint *)((int)this + 0x10);
  local_8 = 0;
  puVar4 = (uint *)((int)this + 0xad0);
  puVar2 = this_00;
  do {
    uVar1 = F_00a35330(uVar3);
    *puVar2 = uVar1;
    if (uVar1 != 0) {
      local_8 = local_8 + 1;
      puVar4[-0x158] = uVar1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar3 < 0x158);
  *(int *)((int)this + 0x1030) = local_8;
  *(int *)((int)this + 0x1034) = local_8;
  if (local_8 != 0) {
    F_00a35a90(this_00,0,local_8 + -1);
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x1034) != 0) {
    uVar3 = F_00a35bb0(this_00,0,*(int *)((int)this + 0x1034) + -1);
  }
  return uVar3;
}

/* ref: FUN_00a35490 */
uint F_00a35490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa35490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = *(int *)((int)this + 0x1024) + -1;
  if (-1 < iVar5) {
    do {
      iVar3 = iVar5 + iVar4 >> 1;
      uVar1 = *(uint *)((int)this + iVar3 * 4 + 0xac0);
      uVar2 = *(uint *)(uVar1 + 0x74);
      if (uVar2 < param_1) {
        iVar4 = iVar3 + 1;
      }
      else {
        if (uVar2 <= param_1) {
          return uVar1;
        }
        iVar5 = iVar3 + -1;
      }
    } while (iVar4 <= iVar5);
  }
  return 0;
}

/* ref: FUN_00a354d0 */
uint F_00a354d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa354d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int local_8;
  
  iVar3 = *(int *)((int)this + 0x1020) + -1;
  local_8 = 0;
  if (iVar3 < 0) {
    return 0;
  }
  do {
    iVar4 = iVar3 + local_8 >> 1;
    puVar1 = *(undefined4 * PTR32 *)((int)this + iVar4 * 4 + 0x560);
    uVar5 = ((gen_lcode *)*(gen_code32 *)*puVar1)(puVar1);
    uVar2 = (uint)(uVar5 >> 0x20);
    if (param_2 < uVar2) {
LAB_00a3552f: ;
      iVar3 = iVar4 + -1;
    }
    else {
      if ((param_2 <= uVar2) && (param_1 <= (uint)uVar5)) {
        if (uVar5 <= CONCAT44(param_2,param_1)) {
          return (uint)puVar1;
        }
        goto LAB_00a3552f;
      }
      local_8 = iVar4 + 1;
    }
    if (iVar3 < local_8) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00a35550 */
unsigned int F_00a35550(void)
{
  GEN_ENTER(0xa35550u, 0u, 0u, 0u, 0u);
  F_00a64090(&REFG(undefined, 0x14a9a18));
  F_00ae0d60(&REFG(undefined, 0x14c0920));
  F_00ae2520(&REFG(undefined, 0x14c0878));
  F_00b7a240(&REFG(undefined, 0x14c5798));
  return 0;
}

/* ref: FUN_00a35580 */
unsigned int F_00a35580(unsigned int gen_a0)
{
  GEN_ENTER(0xa35580u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00a64600(&REFG(undefined, 0x14a9a18),param_1);
  F_00ae1380(&REFG(undefined, 0x14c0878),param_1);
  F_00b7a060(&REFG(undefined, 0x14c5798),param_1);
  return 0;
}

/* ref: FUN_00a355b0 */
byte F_00a355b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa355b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00a64690(&REFG(undefined, 0x14a9a18),param_1);
  if (bVar1 != 0) {
    bVar1 = F_00ae1410(&REFG(undefined, 0x14c0878),param_1);
    if (bVar1 != 0) {
      bVar1 = F_00b7a140(&REFG(undefined, 0x14c5798),param_1);
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a35600 */
unsigned int F_00a35600(void)
{
  GEN_ENTER(0xa35600u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar2]));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x158);
  return 0;
}

/* ref: FUN_00a35680 */
uint F_00a35680(unsigned int gen_a0)
{
  GEN_ENTER(0xa35680u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_1 != -0x20000000) {
    uVar2 = 0;
    while ((uVar1 = (&REFG(undefined4, 0x14a31f0))[uVar2], uVar1 == 0 || (*(int *)(uVar1 + 0x74) != param_1))) {
      uVar2 = uVar2 + 1;
      if (0x157 < uVar2) {
        return 0;
      }
    }
  }
  return uVar1;
}

/* ref: FUN_00a356c0 */
uint F_00a356c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa356c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar1 == 8) {
    uVar1 = 0;
    do {
      if (param_1 == ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar1]))) {
        if (uVar1 == 0) {
          return 0;
        }
        if (0x157 < uVar1 - 1) {
          return 0;
        }
        return (&REFG(undefined4, 0x14a31f0))[uVar1 - 1];
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x158);
  }
  return 0;
}

/* ref: FUN_00a35710 */
uint F_00a35710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa35710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a35400(this);
  return uVar1;
}

/* ref: FUN_00a35720 */
uint F_00a35720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa35720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a35400(this);
  return uVar1;
}

/* ref: FUN_00a35730 */
uint F_00a35730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa35730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a35400(this);
  if (*(int *)((int)this + 0xc) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc))))
                      (*(undefined4 * PTR32 *)((int)this + 0xc),param_1);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a35760 */
uint F_00a35760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa35760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 4))))(*(int * PTR32 *)((int)this + 0xc),param_1);
  }
  uVar1 = F_00a35400(this);
  return uVar1;
}

/* ref: FUN_00a35790 */
uint F_00a35790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa35790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a35400(this);
  return uVar1;
}

/* ref: FUN_00a357a0 */
uint F_00a357a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa357a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xae0];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xadc);
  (*(uint *)(gen_frame + 0xad8)) = uVar3;
  *(undefined1 *)((int)this + 4) = 0;
  if (*(char *)((int)this + 5) != '\0') {
    bVar2 = F_005e1600();
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 != 0) {
      bVar2 = F_005d99e0();
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) {
        *(undefined1 *)((int)this + 4) = 1;
        iVar5 = 0x14;
        do {
          if ((*(uint *)this < 0x158) &&
             (piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[*(uint *)this])), piVar1 != (int *)0x0)) {
            ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1);
          }
          *(int *)this = *(int *)this + 1;
          if (0x157 < *(int *)this) {
            *(undefined4 *)this = 0;
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        (*(gen_size32 *)(gen_frame + 0x14)) = 0;
        (*(int *)(gen_frame + 0x8)) = 0;
        (*(int *)(gen_frame + 0xc)) = 0;
        (*(int *)(gen_frame + 0x10)) = 0;
        uVar3 = 0;
        do {
          if ((int)uVar3 < 200) {
            if (0xf3 < (int)uVar3) goto LAB_00a35860;
LAB_00a3586c: ;
            if (((uVar3 < 0x158) && (piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar3])), piVar1 != (int *)0x0))
               && (uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xb8))(piVar1), (char)uVar4 != '\0')) {
              if (*(byte *)((int)piVar1 + 0x8d) < 0x1a) {
                uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
                if (uVar4 == 1) {
                  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
                }
                uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
                if (uVar4 == 2) {
                  (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
                }
                uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
                if (uVar4 == 3) {
                  (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
                }
              }
              ((uint *)(gen_frame + 0x18))[(int)((*(gen_size32 *)(gen_frame + 0x14)) * 2)] = (uint)piVar1;
              ((uint *)(gen_frame + 0x18))[(int)((*(gen_size32 *)(gen_frame + 0x14)) * 2 + 1)] = (uint)*(byte *)(piVar1 + 0x23);
              (*(gen_size32 *)(gen_frame + 0x14)) = (*(gen_size32 *)(gen_frame + 0x14)) + 1;
            }
          }
          else if (0xf3 < (int)uVar3) {
LAB_00a35860: ;
            if (0x11b < (int)uVar3) goto LAB_00a3586c;
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 0x158);
        uVar3 = F_00b070f0();
        F_004ea3a0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25f8),(*(int *)(gen_frame + 0x10)),(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x8)),
                     (uint)(*(char *)(uVar3 + 0x232) != '\0'));
        F_00c4f040(((uint *)(gen_frame + 0x18)),(*(gen_size32 *)(gen_frame + 0x14)),8,((code *)REFP(0xa353c0)));
        uVar4 = *(uint *)((int)this + 8);
        iVar5 = 0;
        iVar6 = 0;
        uVar3 = uVar4;
        if (0 < (int)(*(gen_size32 *)(gen_frame + 0x14))) {
          do {
            if (((iVar5 < (int)uVar4) &&
                (piVar1 = (int *)((uint *)(gen_frame + 0x18))[(int)(iVar6 * 2)], (piVar1[0x47] & 0x102U) == 0)) &&
               ((int)((uint *)(gen_frame + 0x18))[(int)(iVar6 * 2 + 1)] < 0xe)) {
              uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
              iVar5 = iVar5 + 1;
            }
            else {
              uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((uint *)(gen_frame + 0x18))[(int)(iVar6 * 2)] + 0x30))))
                                ((int *)((uint *)(gen_frame + 0x18))[(int)(iVar6 * 2)]);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)(*(gen_size32 *)(gen_frame + 0x14)));
        }
      }
    }
  }
  uVar4 = 200;
  bVar7 = true;
  do {
    if (((bVar7) && (piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar4])), piVar1 != (int *)0x0)) &&
       ((*(byte *)((int)piVar1 + 0x8f) & 0x40) != 0)) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xb8))(piVar1);
      if ((char)uVar3 == '\0') {
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x84))(piVar1);
      }
      else {
        F_00aa0b30(piVar1);
        ((code *)*(gen_code32 *)(*piVar1 + 0x84))(piVar1);
        uVar3 = F_00aa8770(piVar1);
      }
    }
    uVar4 = uVar4 + 1;
    bVar7 = uVar4 < 0x158;
  } while ((int)uVar4 < 0x158);
  F_00c47745((*(uint *)(gen_frame + 0xad8)) ^ (uint)(uint)(gen_frame + 0xadc));
  return uVar3;
}

/* ref: FUN_00a35a90 */
unsigned int F_00a35a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa35a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int local_8;
  
  iVar3 = param_1;
  while (iVar3 < param_2) {
    local_8 = param_2;
    puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + (param_2 + iVar3 >> 1) * 4 + 0x560)));
    uVar7 = ((gen_lcode *)*(gen_code32 *)*puVar6)(puVar6);
    iVar4 = iVar3;
    while( true ) {
      puVar6 = *(undefined4 * PTR32 *)((int)this + iVar4 * 4 + 0x560);
      iVar5 = (int)this + iVar4 * 4 + 0x560;
      uVar8 = ((gen_lcode *)*(gen_code32 *)*puVar6)(puVar6);
      while (uVar8 < uVar7) {
        puVar6 = (undefined4 *)(iVar5 + 4);
        iVar5 = iVar5 + 4;
        iVar4 = iVar4 + 1;
        uVar8 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)*puVar6)))((undefined4 *)*puVar6);
      }
      puVar6 = (undefined4 *)((int)this + local_8 * 4 + 0x560);
      uVar8 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)*puVar6)))((undefined4 *)*puVar6);
      iVar5 = local_8;
      while (uVar7 < uVar8) {
        puVar1 = puVar6 + -1;
        iVar5 = iVar5 + -1;
        puVar6 = puVar6 + -1;
        uVar8 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)*puVar1)))((undefined4 *)*puVar1);
      }
      if (iVar5 <= iVar4) break;
      uVar2 = *(undefined4 *)((int)this + iVar4 * 4 + 0x560);
      *(undefined4 *)((int)this + iVar4 * 4 + 0x560) =
           *(undefined4 *)((int)this + iVar5 * 4 + 0x560);
      *(undefined4 *)((int)this + iVar5 * 4 + 0x560) = uVar2;
      iVar4 = iVar4 + 1;
      local_8 = iVar5 + -1;
    }
    if (iVar3 < iVar4 + -1) {
      F_00a35a90(this,iVar3,iVar4 + -1);
    }
    iVar3 = iVar5 + 1;
  }
  return 0;
}

/* ref: FUN_00a35bb0 */
uint F_00a35bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa35bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_1;
  uVar5 = param_1;
  while ((int)uVar8 < param_2) {
    uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + ((int)(param_2 + uVar8) >> 1) * 4 + 0xac0))) + 0x74)));
    uVar5 = uVar8;
    iVar7 = param_2;
    while( true ) {
      iVar6 = (int)this + uVar5 * 4 + 0xac0;
      uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + uVar5 * 4 + 0xac0) + 0x74)));
      while (uVar3 < uVar2) {
        piVar1 = (int *)(iVar6 + 4);
        iVar6 = iVar6 + 4;
        uVar5 = uVar5 + 1;
        uVar3 = *(uint *)(*piVar1 + 0x74);
      }
      iVar6 = (int)this + iVar7 * 4 + 0xac0;
      uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + iVar7 * 4 + 0xac0) + 0x74)));
      while (uVar2 < uVar3) {
        piVar1 = (int *)(iVar6 + -4);
        iVar6 = iVar6 + -4;
        iVar7 = iVar7 + -1;
        uVar3 = *(uint *)(*piVar1 + 0x74);
      }
      if (iVar7 <= (int)uVar5) break;
      uVar4 = *(undefined4 *)((int)this + uVar5 * 4 + 0xac0);
      *(undefined4 *)((int)this + uVar5 * 4 + 0xac0) =
           *(undefined4 *)((int)this + iVar7 * 4 + 0xac0);
      *(undefined4 *)((int)this + iVar7 * 4 + 0xac0) = uVar4;
      uVar5 = uVar5 + 1;
      iVar7 = iVar7 + -1;
    }
    uVar5 = uVar5 - 1;
    if ((int)uVar8 < (int)uVar5) {
      uVar5 = F_00a35bb0(this,uVar8,uVar5);
    }
    uVar8 = iVar7 + 1;
  }
  return uVar5;
}

/* ref: FUN_00a35c90 */
unsigned int F_00a35c90(float gen_a0)
{
  GEN_ENTER(0xa35c90u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00a35cb0 */
byte F_00a35cb0(void)
{
  GEN_ENTER(0xa35cb0u, 0u, 0u, 0u, 0u);
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x3d);
  if (((bVar1 != 0) && (!(*(float *)&REFG(undefined, 0x1088114) < REFG(float, 0x14bd70c)))) && (uVar2 != 0)) {
    uVar2 = F_00ab1cc0((uint)*(byte *)(uVar2 + 0x2a));
    if (uVar2 != 0) {
      return *(byte *)(uVar2 + 2);
    }
  }
  return 0;
}

/* ref: FUN_00a35d00 */
uint F_00a35d00(unsigned int gen_a0)
{
  GEN_ENTER(0xa35d00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = F_00ab24a0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  if ((REFG(undefined1, 0x14ab0d2) != 0) && (*(char *)(REFG(undefined1, 0x14ab0d2) + 0xc2 + uVar1) != '\0')) {
    if (REFG(char, 0x14ab0d1) == '\0') {
      if (*(char *)(uVar1 + 200) == '\0') {
        return 4;
      }
    }
    else if ((REFG(char, 0x14ab0d1) == '\x01') && (*(char *)(uVar1 + 0xc9) == '\0')) {
      return 4;
    }
    if ((*(char *)(uVar1 + 0xaf) == '\0') || (*(char *)(uVar1 + 0xaf) == REFG(char, 0x14ab29a))) {
      uVar3 = (uint)REFG(undefined1, 0x14ab0d4);
      uVar2 = F_00ab21d0((uint)*(byte *)(uVar1 + 0xac));
      if ((*(char *)(uVar2 + 4 + uVar3) != '\0') &&
         (uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070),uVar3,0),
         (uint)*(byte *)(uVar1 + 0x9f) <= (uVar2 & 0xffff))) {
        return 1;
      }
      iVar4 = 1;
      while ((uVar2 = F_00ab21d0((uint)*(byte *)(uVar1 + 0xac)),
             *(char *)(uVar2 + 4 + iVar4) == '\0' ||
             (uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070),iVar4,0),
             (uVar2 & 0xffff) < (uint)*(byte *)(uVar1 + 0x9f)))) {
        iVar4 = iVar4 + 1;
        if (0x1c < iVar4) {
          uVar1 = F_00ab21d0((uint)*(byte *)(uVar1 + 0xac));
          return (*(char *)(uVar1 + 4 + uVar3) == '\0') + 3;
        }
      }
      uVar1 = F_00ab25a0((uint)*(byte *)(uVar1 + 0xa6));
      return (*(char *)(uVar1 + 4) != '\x01') + 1;
    }
  }
  return 4;
}

/* ref: FUN_00a35e40 */
uint F_00a35e40(unsigned int gen_a0)
{
  GEN_ENTER(0xa35e40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab24a0(param_1);
  if ((uVar1 != 0) && (param_1 != 0)) {
    return *(uint *)(uVar1 + 0x18);
  }
  return 0;
}

/* ref: FUN_00a35e70 */
uint F_00a35e70(unsigned int gen_a0)
{
  GEN_ENTER(0xa35e70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab24a0(param_1);
  if ((uVar1 != 0) && (param_1 != 0)) {
    return *(uint *)(uVar1 + 0x18);
  }
  return 0;
}

/* ref: FUN_00a35ea0 */
byte F_00a35ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xa35ea0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab24a0(param_1);
  if (((uVar1 != 0) && (*(char *)(uVar1 + 0xa7) == '\x01')) && (param_1 - 0xf4241U < 999999)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a35ee0 */
uint F_00a35ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa35ee0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(uint *)(in_ecx + 8) = param_2;
  if ((*(char *)(in_ecx + 6) == '\0') &&
     (((param_2 < 0x1e8481 || (0x1e8909 < param_2)) && ((char)param_3 != '\0')))) {
    if (999999 < param_2) {
      *(byte *)(in_ecx + 0x14) = *(byte *)(in_ecx + 0x14) | 1;
      *(uint *)(in_ecx + 8) = param_2 - 1000000;
      return param_2 - 1000000;
    }
    *(byte *)(in_ecx + 0x14) = *(byte *)(in_ecx + 0x14) & 0xfe;
  }
  return param_2;
}

/* ref: FUN_00a35f30 */
uint F_00a35f30(unsigned int gen_a0)
{
  GEN_ENTER(0xa35f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x12) = 30000;
  *(undefined1 *)((int)this + 0x2f) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  return 0;
}

/* ref: FUN_00a35f80 */
uint F_00a35f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa35f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(uint *)((int)this + 0xc) = param_1;
  if (((param_1 == 0) && (*(undefined4 *)((int)this + 0xc) = 0, *(char *)((int)this + 6) == '\0'))
     && (*(int *)((int)this + 8) != 1)) {
    *(undefined4 *)((int)this + 8) = 0;
  }
  return param_1;
}

/* ref: FUN_00a35fb0 */
byte F_00a35fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa35fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x3c);
  if (iVar3 != 0) {
    this_00 = (undefined *)F_006b8c00();
    piVar1 = (int *)F_006e3240(this_00,iVar3);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      if ((char)uVar2 != '\0') {
        ((code *)*(gen_code32 *)(*piVar1 + 0x1b8))(piVar1,param_1);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a36000 */
byte F_00a36000(unsigned int gen_a0)
{
  GEN_ENTER(0xa36000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = (byte)(((uint)*(ushort *)((int)this + 0x12) * 100) / 30000);
  if ((bVar1 == 0) && (*(ushort *)((int)this + 0x12) != 0)) {
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: FUN_00a36030 */
uint F_00a36030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa36030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_2 < 4) {
    *(undefined4 *)((int)this + 0xc) = 0x19;
  }
  else if (param_2 == 1000) {
    *(undefined4 *)((int)this + 0xc) = 0xe;
  }
  else if (param_2 == 2000) {
    *(undefined4 *)((int)this + 0xc) = 8;
  }
  else {
    if (param_2 != 0x7d1) {
      if (param_2 == 0x7d2) {
        *(undefined4 *)((int)this + 0xc) = 6;
        goto LAB_00a3620a;
      }
      if (param_2 == 0x7d3) {
        *(undefined4 *)((int)this + 0xc) = 0x10;
        goto LAB_00a3620a;
      }
      if (param_2 == 0x7d4) {
        *(undefined4 *)((int)this + 0xc) = 0x5f;
        goto LAB_00a3620a;
      }
      if (param_2 == 0x7d5) {
        *(undefined4 *)((int)this + 0xc) = 6;
        goto LAB_00a3620a;
      }
      if (param_2 == 0x7d6) {
        *(undefined4 *)((int)this + 0xc) = 6;
        goto LAB_00a3620a;
      }
      if (param_2 == 0x7d7) {
        *(undefined4 *)((int)this + 0xc) = 100;
        goto LAB_00a3620a;
      }
      if (param_2 == 0x7d8) {
        *(undefined4 *)((int)this + 0xc) = 0x19;
        goto LAB_00a3620a;
      }
      if (param_2 == 0x7d9) {
        *(undefined4 *)((int)this + 0xc) = 0xe;
        goto LAB_00a3620a;
      }
      if (param_2 == 0x7da) {
        *(undefined4 *)((int)this + 0xc) = 0xa0;
        goto LAB_00a3620a;
      }
      if (param_2 - 10000 < 7) {
        *(undefined4 *)((int)this + 0xc) = 0x19;
        goto LAB_00a3620a;
      }
      if (param_2 == 12000) {
        *(undefined4 *)((int)this + 0xc) = 8;
        goto LAB_00a3620a;
      }
      if (param_2 != 0x2ee1) {
        if (param_2 == 0x2ee2) {
          *(undefined4 *)((int)this + 0xc) = 0x14;
          goto LAB_00a3620a;
        }
        if (param_2 == 11000) {
          *(undefined4 *)((int)this + 0xc) = 0xe;
          goto LAB_00a3620a;
        }
        if (param_2 == 0xdac) {
          *(undefined4 *)((int)this + 0xc) = 0x19;
          goto LAB_00a3620a;
        }
        if (param_2 == 0xd48) {
          *(undefined4 *)((int)this + 0xc) = 9;
          goto LAB_00a3620a;
        }
        if (param_2 == 0xce4) {
          *(undefined4 *)((int)this + 0xc) = 0x19;
          goto LAB_00a3620a;
        }
        if (param_2 - 0xc80 < 10) {
          *(undefined4 *)((int)this + 0xc) = 0x19;
          goto LAB_00a3620a;
        }
        if (param_2 - 20000 < 5) {
          *(undefined4 *)((int)this + 0xc) = 0x32;
          goto LAB_00a3620a;
        }
        if (param_2 == 22000) {
          *(undefined4 *)((int)this + 0xc) = 8;
          goto LAB_00a3620a;
        }
        if (param_2 != 0x55f1) {
          return param_2;
        }
      }
    }
    *(undefined4 *)((int)this + 0xc) = 0x12;
  }
LAB_00a3620a: ;
  uVar3 = *(uint *)((int)this + 0xc);
  lVar1 = (ulonglong)uVar3 * 0x40;
  uVar2 = F_00406bb0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,0);
  if (uVar2 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = uVar3 - 1;
    if (-1 < (int)uVar3) {
      puVar4 = (undefined1 *)(uVar2 + 6);
      do {
        *(undefined2 *)(puVar4 + -2) = 0;
        *(undefined4 *)(puVar4 + -6) = 9999;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 2) = 0;
        *(undefined4 *)(puVar4 + 6) = 0;
        *(undefined4 *)(puVar4 + 0x12) = 0;
        *(undefined4 *)(puVar4 + 0x16) = 0;
        puVar4[0xe] = 0;
        puVar4[0x29] = 0;
        *(undefined4 *)(puVar4 + 0x2a) = 0;
        *(undefined4 *)(puVar4 + 0x36) = 0;
        *(undefined2 *)(puVar4 + 0xc) = 30000;
        *(undefined2 *)(puVar4 + 10) = 0;
        *(undefined4 *)(puVar4 + 0x1a) = 0;
        *(undefined4 *)(puVar4 + 0x1e) = 0;
        *(undefined2 *)(puVar4 + 0x22) = 0;
        *(undefined4 *)(puVar4 + 0x24) = 0;
        puVar4[0x28] = 0;
        *(undefined4 *)(puVar4 + 0x2e) = 0;
        puVar4[0x32] = 0;
        puVar4 = puVar4 + 0x40;
        uVar3 = uVar3 - 1;
      } while (-1 < (int)uVar3);
    }
  }
  *(uint *)this = uVar2;
  if (uVar2 != 0) {
    *(uint *)((int)this + 8) = param_2;
    uVar3 = 0;
    if (0 < *(int *)((int)this + 0xc)) {
      iVar5 = 0;
      do {
        *(undefined4 *)(iVar5 + *(int *)this) = *(undefined4 *)((int)this + 8);
        *(short *)(iVar5 + 4 + *(int *)this) = (short)uVar3;
        uVar3 = uVar3 + 1;
        iVar5 = iVar5 + 0x40;
      } while ((int)uVar3 < *(int *)((int)this + 0xc));
    }
    *(undefined1 *)((int)this + 0x10) = 0;
  }
  return uVar3;
}

/* ref: FUN_00a362e0 */
uint F_00a362e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa362e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00a36310 */
unsigned int F_00a36310(unsigned int gen_a0)
{
  GEN_ENTER(0xa36310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    iVar3 = 0;
    do {
      if (*(int *)((int)this + 8) == 0x7d5) {
        *(undefined1 *)(iVar3 + 6 + *(int *)this) = 0;
      }
      iVar2 = *(int *)this;
      if (iVar2 != 0) {
        *(undefined4 *)(iVar3 + 8 + iVar2) = 0;
        *(undefined4 *)(iVar3 + 0xc + iVar2) = 0;
        *(undefined4 *)(iVar3 + 0x18 + iVar2) = 0;
        *(undefined4 *)(iVar3 + 0x1c + iVar2) = 0;
        *(undefined1 *)(iVar3 + 0x14 + iVar2) = 0;
        *(undefined1 *)(iVar3 + 0x2f + iVar2) = 0;
        *(undefined4 *)(iVar3 + 0x30 + iVar2) = 0;
        *(undefined1 *)(iVar3 + 6 + iVar2) = 0;
        *(undefined4 *)(iVar3 + 0x3c + iVar2) = 0;
        *(undefined2 *)(iVar3 + 0x12 + iVar2) = 30000;
        *(undefined2 *)(iVar3 + 0x10 + iVar2) = 0;
        *(undefined4 *)(iVar3 + 0x20 + iVar2) = 0;
        *(undefined4 *)(iVar3 + 0x24 + iVar2) = 0;
        *(undefined2 *)(iVar3 + 0x28 + iVar2) = 0;
        *(undefined4 *)(iVar3 + 0x2a + iVar2) = 0;
        *(undefined1 *)(iVar3 + 0x2e + iVar2) = 0;
        puVar1 = (undefined4 *)(iVar3 + 0x34 + iVar2);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 0;
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0x40;
    } while (local_8 < *(int *)((int)this + 0xc));
  }
  return 0;
}

/* ref: FUN_00a363c0 */
uint F_00a363c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa363c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (((*(int *)this != 0) && (-1 < param_1)) && (param_1 < *(int *)((int)this + 0xc))) {
    return param_1 * 0x40 + *(int *)this;
  }
  return 0;
}

/* ref: FUN_00a363f0 */
byte F_00a363f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa363f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < *(int *)((int)this + 0xc)) {
      piVar3 = (int *)(iVar1 + 8);
      do {
        if ((*(char *)((int)piVar3 + -2) == '\0') && (*piVar3 == 0)) {
          *param_1 = iVar2 * 0x40 + iVar1;
          return 1;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0x10;
      } while (iVar2 < *(int *)((int)this + 0xc));
    }
  }
  return 0;
}

/* ref: FUN_00a36440 */
uint F_00a36440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa36440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    uVar2 = (uint)(ushort)param_1;
    if ((int)uVar2 < *(int *)((int)this + 0xc)) {
      piVar3 = (int *)(uVar2 * 0x40 + 8 + iVar1);
      do {
        if ((*(char *)((int)piVar3 + -2) == '\0') && (*piVar3 == 0)) {
          return uVar2 * 0x40 + iVar1;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 0x10;
      } while ((int)uVar2 < *(int *)((int)this + 0xc));
    }
  }
  return 0;
}

/* ref: FUN_00a36490 */
uint F_00a36490(unsigned int gen_a0)
{
  GEN_ENTER(0xa36490u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  
  if ((int)param_1 < 0) {
    if (3 < (int)param_1) goto LAB_00a364a6;
    if (4 < (int)param_1) goto LAB_00a364b7;
    if (REFG(int, 0x13342b8) <= (int)param_1) goto LAB_00a364d2;
  }
  else {
    if ((int)param_1 < 4) {
      return param_1;
    }
LAB_00a364a6: ;
    if ((int)param_1 < 5) {
      return param_1 + 0x3e4;
    }
LAB_00a364b7: ;
    if ((int)param_1 < REFG(int, 0x13342b8)) {
      return param_1 + 0x7cb;
    }
LAB_00a364d2: ;
    if ((int)param_1 < REFG(int, 0x13342b8) + 7) {
      return (param_1 - REFG(int, 0x13342b8)) + 10000;
    }
  }
  if ((REFG(int, 0x13342b8) + 7 <= (int)param_1) && ((int)param_1 < REFG(int, 0x13342b8) + 8)) {
    return (param_1 - REFG(int, 0x13342b8)) + 0x2af1;
  }
  if ((REFG(int, 0x13342b8) + 8 <= (int)param_1) && ((int)param_1 < REFG(int, 0x13342b4) + REFG(int, 0x13342b8))) {
    return (param_1 - REFG(int, 0x13342b8)) + 0x2ed8;
  }
  if ((REFG(int, 0x13342b4) + REFG(int, 0x13342b8) <= (int)param_1) &&
     ((int)param_1 < REFG(int, 0x13342b4) + REFG(int, 0x13342b8) + 1)) {
    return ((param_1 - REFG(int, 0x13342b4)) - REFG(int, 0x13342b8)) + 0xdac;
  }
  iVar1 = REFG(int, 0x13342b0) + REFG(int, 0x13342b4) + REFG(int, 0x13342b8);
  if (param_1 == iVar1 - 2U) {
    return 0xce4;
  }
  if (param_1 == iVar1 - 1U) {
    return 0xd48;
  }
  if ((int)param_1 < REFG(int, 0x13342b4) + 1 + REFG(int, 0x13342b8)) {
    if ((int)param_1 < iVar1) goto LAB_00a36594;
  }
  else if ((int)param_1 < iVar1) {
    return ((param_1 - REFG(int, 0x13342b4)) - REFG(int, 0x13342b8)) + 0xc7f;
  }
  if ((int)param_1 < iVar1 + 5) {
    return (((param_1 - REFG(int, 0x13342b0)) - REFG(int, 0x13342b4)) - REFG(int, 0x13342b8)) + 20000;
  }
LAB_00a36594: ;
  if ((iVar1 + 5 <= (int)param_1) &&
     ((int)param_1 < REFG(int, 0x13342ac) + REFG(int, 0x13342b0) + REFG(int, 0x13342b4) + REFG(int, 0x13342b8))) {
    return (((param_1 - REFG(int, 0x13342b0)) - REFG(int, 0x13342b4)) - REFG(int, 0x13342b8)) + 0x55eb;
  }
  return 9999;
}

/* ref: FUN_00a365d0 */
uint F_00a365d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa365d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  uint * puVar2;
  
  bVar1 = F_00a68940(&REFG(undefined1, 0x14ab070));
  if ((byte)((char)param_1 - 1U) < 3) {
    bVar1 = F_00a68920(&REFG(undefined1, 0x14ab070),param_1);
  }
  puVar2 = (uint *)F_00ab3fa0((uint)bVar1);
  if (puVar2 == (uint *)0x0) {
    return 0;
  }
  return *puVar2;
}

/* ref: FUN_00a36610 */
uint F_00a36610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa36610u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((ushort)param_2 < 5) {
    return (short)(ushort)param_2 * 0x40 + 0x1b0 + in_ecx;
  }
  return 0;
}

/* ref: FUN_00a36640 */
byte F_00a36640(unsigned int gen_a0)
{
  GEN_ENTER(0xa36640u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return 1 < *(int *)(in_ecx + 0x334) || REFG(char, 0x14a7375) == '\x01';
}

/* ref: FUN_00a36660 */
byte F_00a36660(unsigned int gen_a0)
{
  GEN_ENTER(0xa36660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x334) < 2) && (REFG(char, 0x14a7375) != '\x01')) {
    return 0;
  }
  return *(byte *)(in_ecx + 0x35c);
}

/* ref: FUN_00a36680 */
uint F_00a36680(unsigned int gen_a0)
{
  GEN_ENTER(0xa36680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x334);
}

/* ref: FUN_00a36690 */
uint F_00a36690(unsigned int gen_a0)
{
  GEN_ENTER(0xa36690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x338);
}

/* ref: FUN_00a366a0 */
uint F_00a366a0(void)
{
  GEN_ENTER(0xa366a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0xc))))(REFG(int * PTR32, 0x1379694));
    return uVar1;
  }
  return 0x10e4aa8;
}

/* ref: FUN_00a366c0 */
uint F_00a366c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa366c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x33c;
}

/* ref: FUN_00a366d0 */
byte F_00a366d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa366d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 1000) {
    return 1;
  }
  return param_1 == 11000;
}

/* ref: FUN_00a366f0 */
byte F_00a366f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa366f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 - 10000U < 7) {
    return 1;
  }
  return param_1 - 12000U < 3;
}

/* ref: FUN_00a36720 */
byte F_00a36720(unsigned int gen_a0)
{
  GEN_ENTER(0xa36720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((param_1 != 0x7d5) && (param_1 != 0x7d2)) && (param_1 != 0x7d7)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a36750 */
byte F_00a36750(unsigned int gen_a0)
{
  GEN_ENTER(0xa36750u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((((param_1 != 0xdac) && (9 < param_1 - 0xc80U)) && (param_1 != 0xce4)) && (param_1 != 0xd48))
  {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a36790 */
byte F_00a36790(unsigned int gen_a0)
{
  GEN_ENTER(0xa36790u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((param_1 != 0x7d1) && (param_1 != 0x2ee1)) && (param_1 != 0x55f1)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a367c0 */
byte F_00a367c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa367c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 == 0x2ee1;
}

/* ref: FUN_00a367d0 */
uint F_00a367d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa367d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *(uint *)((int)this + (short)param_1 * 8 + 0x2340);
}

/* ref: FUN_00a367f0 */
uint F_00a367f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa367f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(short)param_1;
  *(undefined4 *)((int)this + iVar1 * 8 + 0x2340) = param_2;
  *(undefined4 *)((int)this + iVar1 * 8 + 0x2344) = 0;
  uVar2 = F_00a51200(0x20,iVar1,param_2,0,0);
  return uVar2;
}

/* ref: FUN_00a36850 */
uint F_00a36850(unsigned int gen_a0)
{
  GEN_ENTER(0xa36850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)((int)this + 0x2184);
  iVar3 = 8;
  do {
    puVar2[-3] = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0x10000;
    puVar2[1] = 0;
    uVar1 = F_00c49908(puVar2 + 2,0x20,"RETAINER");
    puVar2 = puVar2 + 0xe;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_00a36890 */
byte F_00a36890(unsigned int gen_a0)
{
  GEN_ENTER(0xa36890u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00ab21d0((uint)*(byte *)(param_1 + 0xac));
  if (uVar1 == 0) {
    return 1;
  }
  iVar3 = 0;
  do {
    if (*(char *)(uVar1 + 4 + iVar3) == '\x01') {
      uVar2 = F_00ab21a0(iVar3);
      if (uVar2 == 0) {
        return 1;
      }
      if (*(char *)(uVar2 + 0x45) != '\0') {
        return 0;
      }
    }
    iVar3 = iVar3 + 1;
    if (0x1c < iVar3) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00a368f0 */
byte F_00a368f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa368f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ab21d0((uint)*(byte *)(param_1 + 0xac));
  if (uVar1 == 0) {
    return 0;
  }
  return *(byte *)(uVar1 + 4 + param_2);
}

/* ref: FUN_00a36920 */
byte F_00a36920(unsigned int gen_a0)
{
  GEN_ENTER(0xa36920u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    uVar1 = F_00ab25a0((uint)*(byte *)(param_1 + 0xa6));
    iVar2 = 0;
    do {
      if (*(char *)(uVar1 + 4 + iVar2) == '\x01') goto LAB_00a36952;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xe);
  }
  iVar2 = 0xe;
LAB_00a36952: ;
  return (byte)iVar2;
}

/* ref: FUN_00a36960 */
uint F_00a36960(unsigned int gen_a0)
{
  GEN_ENTER(0xa36960u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (0xd < (byte)param_1) {
    return 9999;
  }
  switch((unsigned int)(uintptr_t)((uint)(byte)param_1)) {
  case 0: ;
    return 0xdac;
  default: ;
    return (byte)param_1 + 0xc7f;
  case 0xb: ;
  case 0xc: ;
    return 0xce4;
  case 0xd: ;
    return 0xd48;
  }
}

/* ref: FUN_00a369d0 */
uint F_00a369d0(void)
{
  GEN_ENTER(0xa369d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if ((REFG(void * PTR32, 0x1379694) != (undefined *)0x0) && (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0x188))) == '\a')) {
    F_00aa2900(REFG(void * PTR32, 0x1379694),0);
  }
  uVar1 = F_00a51200(0x2d,0,0,0,0);
  return uVar1;
}

/* ref: FUN_00a36a00 */
uint F_00a36a00(unsigned int gen_a0)
{
  GEN_ENTER(0xa36a00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if ((REFG(void * PTR32, 0x1379694) != (undefined *)0x0) && (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0x188))) == '\a')) {
    F_00aa2900(REFG(void * PTR32, 0x1379694),0);
  }
  uVar1 = F_00a51200(0x2f,(uint)((char)param_1 != '\0'),0,0,0);
  return uVar1;
}

/* ref: FUN_00a36a40 */
uint F_00a36a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa36a40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a51200(0x31,param_1,param_2,0,0);
  return uVar1;
}

/* ref: FUN_00a36a60 */
uint F_00a36a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa36a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = param_1;
  if ((param_1 != (undefined4 *)0x0) && ((*(char *)((int)param_1 + 6) != '\0' || (param_1[2] != 0)))
     ) {
    puVar1 = (undefined4 *)
             F_00a51200(0x35,*param_1,(int)*(short *)(param_1 + 1),param_2,0);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a36aa0 */
uint F_00a36aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa36aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * pbVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (uint)*(ushort *)(param_1 + 10) * 0x40;
  uVar3 = *(uint *)(param_1 + 0x10);
  *(uint *)((int)this + iVar4 + 0x1b8) = uVar3;
  if ((*(char *)((int)this + iVar4 + 0x1b6) == '\0') && ((uVar3 < 0x1e8481 || (0x1e8909 < uVar3))))
  {
    if (uVar3 < 1000000) {
      pbVar1 = (byte *)((int)this + iVar4 + 0x1c4);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    else {
      pbVar1 = (byte *)((int)this + iVar4 + 0x1c4);
      *pbVar1 = *pbVar1 | 1;
      *(uint *)((int)this + iVar4 + 0x1b8) = uVar3 - 1000000;
    }
  }
  iVar4 = *(int *)(param_1 + 0xc);
  iVar5 = (uint)*(ushort *)(param_1 + 10) * 0x40;
  *(int *)((int)this + iVar5 + 0x1bc) = iVar4;
  if (((iVar4 == 0) &&
      (*(undefined4 *)((int)this + iVar5 + 0x1bc) = 0, *(char *)((int)this + iVar5 + 0x1b6) == '\0')
      ) && (*(int *)((int)this + iVar5 + 0x1b8) != 1)) {
    *(undefined4 *)((int)this + iVar5 + 0x1b8) = 0;
  }
  iVar4 = (uint)*(ushort *)(param_1 + 10) * 0x40;
  *(undefined4 *)(iVar4 + 0x1c8 + (int)this) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar4 + 0x1cc + (int)this) = *(undefined4 *)(param_1 + 0x1c);
  *((undefined1 *)GEN_TOP(((uint)*(ushort *)(param_1 + 10) * 0x40 + 0x1c4 + (int)this))) =
       *(undefined1 *)(param_1 + 0x20);
  *((undefined2 *)GEN_TOP(((*(ushort *)(param_1 + 10) + 7) * 0x40 + (int)this))) =
       *(undefined2 *)(param_1 + 0x24);
  *((undefined2 *)GEN_TOP(((uint)*(ushort *)(param_1 + 10) * 0x40 + 0x1c2 + (int)this))) =
       *(undefined2 *)(param_1 + 0x22);
  *((undefined1 *)GEN_TOP(((uint)*(ushort *)(param_1 + 10) * 0x40 + 0x1df + (int)this))) =
       *(undefined1 *)(param_1 + 0x26);
  *((undefined4 *)GEN_TOP(((uint)*(ushort *)(param_1 + 10) * 0x40 + 0x1e0 + (int)this))) =
       *(undefined4 *)(param_1 + 0x28);
  iVar4 = (uint)*(ushort *)(param_1 + 10) * 0x40;
  *(undefined4 *)(iVar4 + 0x1d0 + (int)this) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar4 + 0x1d4 + (int)this) = *(undefined4 *)(param_1 + 0x30);
  *(undefined2 *)((int)this + iVar4 + 0x1d8) = *(undefined2 *)(param_1 + 0x34);
  puVar2 = ((undefined4 *)GEN_TOP(((uint)*(ushort *)(param_1 + 10) * 0x40 + 0x1da + (int)this)));
  *puVar2 = *(undefined4 *)(param_1 + 0x36);
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_1 + 0x3a);
  puVar2 = ((undefined4 *)GEN_TOP(((uint)*(ushort *)(param_1 + 10) * 0x40 + 0x1e4 + (int)this)));
  *puVar2 = *(undefined4 *)(param_1 + 0x3b);
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_1 + 0x3f);
  return (uint)puVar2;
}

/* ref: FUN_00a36c00 */
uint F_00a36c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa36c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * pbVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (uint)*(ushort *)(param_1 + 6) * 0x40;
  uVar2 = *(uint *)(param_1 + 0x10);
  *(uint *)((int)this + iVar3 + 0x1b8) = uVar2;
  if ((*(char *)(iVar3 + 0x1b6 + (int)this) == '\0') && ((uVar2 < 0x1e8481 || (0x1e8909 < uVar2))))
  {
    if (uVar2 < 1000000) {
      pbVar1 = (byte *)((int)this + iVar3 + 0x1c4);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    else {
      pbVar1 = (byte *)((int)this + iVar3 + 0x1c4);
      *pbVar1 = *pbVar1 | 1;
      *(uint *)((int)this + iVar3 + 0x1b8) = uVar2 - 1000000;
    }
  }
  iVar3 = *(int *)(param_1 + 8);
  uVar2 = (uint)*(ushort *)(param_1 + 6) * 0x40 + 0x1b0 + (int)this;
  *(int *)(uVar2 + 0xc) = iVar3;
  if (((iVar3 == 0) && (*(undefined4 *)(uVar2 + 0xc) = 0, *(char *)(uVar2 + 6) == '\0')) &&
     (*(int *)(uVar2 + 8) != 1)) {
    *(undefined4 *)(uVar2 + 8) = 0;
  }
  return uVar2;
}

/* ref: FUN_00a36c80 */
uint F_00a36c80(unsigned int gen_a0)
{
  GEN_ENTER(0xa36c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar4 = 0;
  do {
    iVar1 = *(int *)this;
    if ((iVar1 != 0) && (*(int *)(iVar4 + iVar1) != 0)) {
      F_00406b30(*(int *)(iVar4 + iVar1));
      *(undefined4 *)(iVar4 + iVar1) = 0;
    }
    iVar4 = iVar4 + 0x20;
  } while (iVar4 < 0x80);
  piVar2 = *(int * PTR32 *)((int)this + 4);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    F_00406b30(*piVar2);
    *piVar2 = 0;
  }
  iVar4 = 0;
  do {
    iVar1 = *(int *)((int)this + 8);
    if ((iVar1 != 0) && (*(int *)(iVar4 + iVar1) != 0)) {
      F_00406b30(*(int *)(iVar4 + iVar1));
      *(undefined4 *)(iVar4 + iVar1) = 0;
    }
    iVar4 = iVar4 + 0x20;
  } while (iVar4 < 0x160);
  iVar4 = 0;
  do {
    iVar1 = *(int *)((int)this + 0xc);
    if ((iVar1 != 0) && (*(int *)(iVar4 + iVar1) != 0)) {
      F_00406b30(*(int *)(iVar4 + iVar1));
      *(undefined4 *)(iVar4 + iVar1) = 0;
    }
    iVar4 = iVar4 + 0x20;
  } while (iVar4 < 0xe0);
  piVar2 = *(int * PTR32 *)((int)this + 0x10);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    F_00406b30(*piVar2);
    *piVar2 = 0;
  }
  iVar4 = 0;
  do {
    iVar1 = *(int *)((int)this + 0x14);
    if ((iVar1 != 0) && (*(int *)(iVar4 + iVar1) != 0)) {
      F_00406b30(*(int *)(iVar4 + iVar1));
      *(undefined4 *)(iVar4 + iVar1) = 0;
    }
    iVar4 = iVar4 + 0x20;
  } while (iVar4 < 0x60);
  piVar2 = *(int * PTR32 *)((int)this + 0x18);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    F_00406b30(*piVar2);
    *piVar2 = 0;
  }
  iVar4 = 0;
  do {
    iVar1 = *(int *)((int)this + 0x1c);
    if ((iVar1 != 0) && (*(int *)(iVar4 + iVar1) != 0)) {
      F_00406b30(*(int *)(iVar4 + iVar1));
      *(undefined4 *)(iVar4 + iVar1) = 0;
    }
    iVar4 = iVar4 + 0x20;
  } while (iVar4 < 0x180);
  iVar4 = 0;
  do {
    iVar1 = *(int *)((int)this + 0x20);
    if ((iVar1 != 0) && (*(int *)(iVar4 + iVar1) != 0)) {
      F_00406b30(*(int *)(iVar4 + iVar1));
      *(undefined4 *)(iVar4 + iVar1) = 0;
    }
    iVar4 = iVar4 + 0x20;
  } while (iVar4 < 0xa0);
  iVar4 = 0;
  do {
    iVar1 = *(int *)((int)this + 0x24);
    if ((iVar1 != 0) && (*(int *)(iVar4 + iVar1) != 0)) {
      F_00406b30(*(int *)(iVar4 + iVar1));
      *(undefined4 *)(iVar4 + iVar1) = 0;
    }
    iVar4 = iVar4 + 0x20;
  } while (iVar4 < 0x40);
  if (*(int *)this != 0) {
    F_00406b30(*(int *)this);
    *(undefined4 *)this = 0;
  }
  if (*(int *)((int)this + 4) != 0) {
    F_00406b30(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    F_00406b30(*(int *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406b30(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  if (*(int *)((int)this + 0x14) != 0) {
    F_00406b30(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if (*(int *)((int)this + 0x18) != 0) {
    F_00406b30(*(int *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  if (*(int *)((int)this + 0x1c) != 0) {
    F_00406b30(*(int *)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  if (*(int *)((int)this + 0x20) != 0) {
    F_00406b30(*(int *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar5 = F_00406b30(*(int *)((int)this + 0x24));
    uVar3 = (uint)uVar5;
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return uVar3;
}

/* ref: FUN_00a36f00 */
uint F_00a36f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa36f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(uint *)((int)this + 0x2ff8) & 1 << ((byte)param_1 & 0x1f)) == 0) {
    return 0;
  }
  return param_1 * 0xd0 + 0x2498 + (int)this;
}

/* ref: FUN_00a36f30 */
uint F_00a36f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa36f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (((*(int *)this != 0) && (*(uint *)((int)this + 4) != 0)) && (*(int *)((int)this + 8) != 0)) {
    if (param_1 < 4) {
      return param_1 * 0x20 + *(int *)this;
    }
    if (param_1 == 1000) {
      return *(uint *)((int)this + 4);
    }
    if (param_1 - 2000 < 0xb) {
      return (param_1 - 2000) * 0x20 + *(int *)((int)this + 8);
    }
    if (param_1 - 10000 < 7) {
      return (param_1 - 10000) * 0x20 + *(int *)((int)this + 0xc);
    }
    if (param_1 == 11000) {
      return *(uint *)((int)this + 0x10);
    }
    if (param_1 - 12000 < 3) {
      return (param_1 - 12000) * 0x20 + *(int *)((int)this + 0x14);
    }
    if (param_1 == 0xdac) {
      return *(uint *)((int)this + 0x18);
    }
    if (param_1 == 0xd48) {
      return *(int *)((int)this + 0x1c) + 0x160;
    }
    if (param_1 == 0xce4) {
      return *(int *)((int)this + 0x1c) + 0x140;
    }
    if (param_1 - 0xc80 < 10) {
      return (param_1 - 0xc80) * 0x20 + *(int *)((int)this + 0x1c);
    }
    if (param_1 - 20000 < 5) {
      return (param_1 - 20000) * 0x20 + *(int *)((int)this + 0x20);
    }
    if (param_1 - 22000 < 2) {
      return (param_1 - 22000) * 0x20 + *(int *)((int)this + 0x24);
    }
  }
  return 0;
}

/* ref: FUN_00a370a0 */
byte F_00a370a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa370a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a36f30(this,param_1);
  return *(byte *)(uVar1 + 0x10);
}

/* ref: FUN_00a370c0 */
uint F_00a370c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa370c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a36f30(this,param_1);
  *(undefined1 *)(uVar1 + 0x10) = (undefined1)param_2;
  return uVar1;
}

/* ref: FUN_00a370f0 */
uint F_00a370f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa370f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a36f30(this,(param_1 & 0xffff) + 1000);
  return uVar1;
}

/* ref: FUN_00a37110 */
uint F_00a37110(unsigned int gen_a0)
{
  GEN_ENTER(0xa37110u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x2338);
}

/* ref: FUN_00a37120 */
uint F_00a37120(unsigned int gen_a0)
{
  GEN_ENTER(0xa37120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0x2178);
  do {
    if (*piVar2 == 0 && piVar2[1] == 0) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0xe;
  } while ((int)uVar1 < 2);
  return 0;
}

/* ref: FUN_00a37140 */
uint F_00a37140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa37140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = param_1;
  if (param_1 - 1 < 8) {
    uVar3 = 0;
    piVar2 = (int *)((int)this + 0x2178);
    uVar1 = param_1;
    while ((*piVar2 == 0 && piVar2[1] == 0 || (uVar1 = uVar1 - 1, uVar1 != 0))) {
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0xe;
      if (7 < (int)uVar3) {
        return uVar1;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00a371d0 */
uint F_00a371d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa371d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  int iVar7;
  
  if (((byte)REFG(undefined2, 0x14b4eb8) & 8) != 0) {
    uVar3 = F_00ab24a0(param_1);
    if (uVar3 == 0) {
      return 0;
    }
    if ((*(short *)(uVar3 + 0x90) == 0) || (*(uint *)(uVar3 + 0x28) < 2)) {
      if (*(char *)(uVar3 + 0xa6) == '\0') {
        if (*(int *)this == 0) {
          return 0;
        }
        if (*(int *)((int)this + 4) == 0) {
          return 0;
        }
        if (*(int *)((int)this + 8) == 0) {
          return 0;
        }
        pvVar1 = (undefined *)(*(int *)this + 0x60);
        if (pvVar1 == (undefined *)0x0) {
          return 0;
        }
        uVar3 = F_00a36440(pvVar1,0);
        if (uVar3 != 0) {
          return uVar3;
        }
      }
    }
    else {
      if (*(int *)this == 0) {
        return 0;
      }
      if (*(int *)((int)this + 4) == 0) {
        return 0;
      }
      if (*(int *)((int)this + 8) == 0) {
        return 0;
      }
      pvVar1 = (undefined *)(*(int *)this + 0x40);
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      uVar3 = F_00a36440(pvVar1,0);
      if (uVar3 != 0) {
        return uVar3;
      }
    }
  }
  iVar7 = 0;
  do {
    piVar4 = (int *)F_00a36f30(this,iVar7);
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      iVar6 = 0;
      if (0 < piVar4[3]) {
        piVar5 = (int *)(iVar2 + 8);
        do {
          if ((*(char *)((int)piVar5 + -2) == '\0') && (*piVar5 == 0)) {
            uVar3 = iVar6 * 0x40 + iVar2;
            if (uVar3 != 0) {
              return uVar3;
            }
            break;
          }
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 0x10;
        } while (iVar6 < piVar4[3]);
      }
    }
    iVar7 = iVar7 + 1;
    if (3 < iVar7) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00a37310 */
uint F_00a37310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa37310u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab24a0(param_1);
  uVar2 = param_2;
  if (((uVar1 != 0) && (param_1 != 0)) &&
     (uVar2 = param_2 / *(uint *)(uVar1 + 0x28), param_2 % *(uint *)(uVar1 + 0x28) != 0)) {
    return uVar2 + 1;
  }
  return uVar2;
}

/* ref: FUN_00a37350 */
uint F_00a37350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa37350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short sVar1;
  int iVar2;
  int * this_00;
  uint uVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  
  uVar6 = 0;
  this_00 = (int *)F_00a36f30(this,param_1);
  if (this_00 == (int *)0x0) {
    return 0;
  }
  uVar3 = F_00a36440(this_00,0);
  if ((uVar3 != 0) && (sVar1 = *(short *)(uVar3 + 4), sVar1 != -1)) {
    iVar2 = *this_00;
    while (uVar6 = uVar6 + 1, iVar2 != 0) {
      uVar3 = (uint)(ushort)(sVar1 + 1);
      if (this_00[3] <= (int)uVar3) {
        return uVar6;
      }
      piVar5 = (int *)(uVar3 * 0x40 + 8 + iVar2);
      while ((*(char *)((int)piVar5 + -2) != '\0' || (*piVar5 != 0))) {
        uVar3 = uVar3 + 1;
        piVar5 = piVar5 + 0x10;
        if (this_00[3] <= (int)uVar3) {
          return uVar6;
        }
      }
      iVar4 = uVar3 * 0x40 + iVar2;
      if (iVar4 == 0) {
        return uVar6;
      }
      sVar1 = *(short *)(iVar4 + 4);
      if (sVar1 == -1) {
        return uVar6;
      }
    }
  }
  return uVar6;
}

/* ref: FUN_00a373e0 */
uint F_00a373e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa373e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 0x13: ;
    return 0x11be;
  case 0x14: ;
    return 0x11bf;
  case 0x15: ;
    return 0x11c0;
  case 0x16: ;
    return 0x11c1;
  case 0x17: ;
    return 0x11c2;
  case 0x18: ;
    return 0x11c3;
  case 0x19: ;
    return 0x11c4;
  default: ;
    return 0;
  case 0x1b: ;
    return 0x11c5;
  case 0x1c: ;
    return 0x11c6;
  }
}

/* ref: FUN_00a374a0 */
uint F_00a374a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa374a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  char * pcVar2;
  
  iVar1 = 0;
  pcVar2 = (char *)((int)this + 0x364);
  while ((*(int *)(pcVar2 + 4) != param_1 || (*pcVar2 != '\0'))) {
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 0x3c;
    if (0x7f < iVar1) {
      return 0;
    }
  }
  return (int)this + iVar1 * 0x3c + 0x364;
}

/* ref: FUN_00a374e0 */
uint F_00a374e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa374e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  char * pcVar2;
  
  iVar1 = 0;
  pcVar2 = (char *)((int)this + 0x364);
  while ((*(int *)(pcVar2 + 8) != param_1 || (*pcVar2 != '\0'))) {
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 0x3c;
    if (0x7f < iVar1) {
      return 0;
    }
  }
  return (int)this + iVar1 * 0x3c + 0x364;
}

/* ref: FUN_00a37520 */
unsigned int F_00a37520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa37520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar2 = (undefined4 *)((int)this + 0x364);
  (*(int *)(gen_frame + 0x48)) = 0x80;
  do {
    if (puVar2[1] == param_1) {
      (*(undefined2 *)(gen_frame + 0x20)) = 0xffff;
      (*(undefined2 *)(gen_frame + 0x34)) = 0xffff;
      (*(undefined1 *)((char *)&((undefined4 *)(gen_frame + 0xc))[0] + 0)) = 1;
      ((undefined4 *)(gen_frame + 0xc))[1] = 0x10000000;
      ((undefined4 *)(gen_frame + 0xc))[2] = 0;
      ((undefined4 *)(gen_frame + 0xc))[3] = 0;
      ((undefined4 *)(gen_frame + 0xc))[4] = 9999;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 9999;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)(gen_frame + 0x44)) = 0;
      puVar3 = ((undefined4 *)(gen_frame + 0xc));
      puVar4 = puVar2;
      for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    puVar2 = puVar2 + 0xf;
    iVar1 = (*(int *)(gen_frame + 0x48)) + -1;
    (*(int *)(gen_frame + 0x48)) = iVar1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00a375a0 */
unsigned int F_00a375a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa375a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = this;
  (*(int *)(gen_frame + 0x48)) = 0x80;
  puVar1 = (undefined4 *)((int)this + 0x364);
  do {
    (*(undefined2 *)(gen_frame + 0x1c)) = 0xffff;
    (*(undefined2 *)(gen_frame + 0x30)) = 0xffff;
    iVar4 = (*(int *)(gen_frame + 0x48)) + -1;
    (*(int *)(gen_frame + 0x48)) = iVar4;
    (*(undefined1 *)((char *)&((undefined4 *)(gen_frame + 0x8))[0] + 0)) = 1;
    ((undefined4 *)(gen_frame + 0x8))[1] = 0x10000000;
    ((undefined4 *)(gen_frame + 0x8))[2] = 0;
    ((undefined4 *)(gen_frame + 0x8))[3] = 0;
    ((undefined4 *)(gen_frame + 0x8))[4] = 9999;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 9999;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    puVar3 = ((undefined4 *)(gen_frame + 0x8));
    puVar5 = puVar1;
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar1 = puVar1 + 0xf;
  } while (iVar4 != 0);
  *(undefined1 *)((int)this + 0x35e) = 0;
  *(undefined1 *)((int)this + 0x35c) = 0;
  puVar1 = (undefined4 *)((int)this + 0x1bc);
  iVar4 = 6;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined1 *)((int)puVar1 + 0x23) = 0;
    puVar1[9] = 0;
    *(undefined1 *)((int)puVar1 + -6) = 0;
    puVar1[0xc] = 0;
    *(undefined2 *)((int)puVar1 + 6) = 30000;
    *(undefined2 *)(puVar1 + 1) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined2 *)(puVar1 + 7) = 0;
    *(undefined4 *)((int)puVar1 + 0x1e) = 0;
    *(undefined1 *)((int)puVar1 + 0x22) = 0;
    puVar1[10] = 0;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    puVar1 = puVar1 + 0x10;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_00a376a0 */
uint F_00a376a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa376a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  short * psVar1;
  int iVar2;
  
  iVar2 = 0x20;
  psVar1 = (short *)((int)this + 0x378);
  do {
    if ((*(int *)(psVar1 + -2) == param_1) && (*psVar1 == (short)param_2)) {
      *(undefined1 *)(psVar1 + 0x12) = 1;
    }
    if ((*(int *)(psVar1 + 8) == param_1) && (psVar1[10] == (short)param_2)) {
      *(undefined1 *)((int)psVar1 + 0x25) = 1;
    }
    if ((*(int *)(psVar1 + 0x1c) == param_1) && (psVar1[0x1e] == (short)param_2)) {
      *(undefined1 *)(psVar1 + 0x30) = 1;
    }
    if ((*(int *)(psVar1 + 0x26) == param_1) && (psVar1[0x28] == (short)param_2)) {
      *(undefined1 *)((int)psVar1 + 0x61) = 1;
    }
    if ((*(int *)(psVar1 + 0x3a) == param_1) && (psVar1[0x3c] == (short)param_2)) {
      *(undefined1 *)(psVar1 + 0x4e) = 1;
    }
    if ((*(int *)(psVar1 + 0x44) == param_1) && (psVar1[0x46] == (short)param_2)) {
      *(undefined1 *)((int)psVar1 + 0x9d) = 1;
    }
    if ((*(int *)(psVar1 + 0x58) == param_1) && (psVar1[0x5a] == (short)param_2)) {
      *(undefined1 *)(psVar1 + 0x6c) = 1;
    }
    if ((*(int *)(psVar1 + 0x62) == param_1) && (psVar1[100] == (short)param_2)) {
      *(undefined1 *)((int)psVar1 + 0xd9) = 1;
    }
    psVar1 = psVar1 + 0x78;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return (uint)psVar1;
}

/* ref: FUN_00a37760 */
unsigned int F_00a37760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa37760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)((int)this + 0x39e);
  iVar2 = 0x80;
  do {
    if (*(int *)(puVar1 + -0x2a) == param_1) {
      *puVar1 = 1;
    }
    if (*(int *)(puVar1 + -0x16) == param_1) {
      puVar1[1] = 1;
    }
    puVar1 = puVar1 + 0x3c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00a37790 */
byte F_00a37790(unsigned int gen_a0)
{
  GEN_ENTER(0xa37790u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x1e8481U < 0x489;
}

/* ref: FUN_00a377b0 */
byte F_00a377b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa377b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 2U < 0x12;
}

/* ref: FUN_00a377d0 */
byte F_00a377d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa377d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x17U < 4;
}

/* ref: FUN_00a377f0 */
uint F_00a377f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa377f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00ab24a0(param_1);
  if (uVar2 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(uVar2 + 0x9f);
  if (bVar1 < 0xb) {
    return 10;
  }
  if (bVar1 < 0x15) {
    return 0x32;
  }
  if (bVar1 < 0x1f) {
    return 100;
  }
  return (-(uint)(0x28 < bVar1) & 0x122) + 0xd2;
}

/* ref: FUN_00a37840 */
uint F_00a37840(unsigned int gen_a0)
{
  GEN_ENTER(0xa37840u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00ab24a0(param_1);
  if (uVar1 != 0) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)(uVar1 + 0xa6))) {
    case 2: ;
    case 0xe: ;
      puVar2 = (uint *)F_00ab4340(8);
      return *puVar2;
    case 3: ;
      puVar2 = (uint *)F_00ab4340(9);
      return *puVar2;
    case 4: ;
    case 0xf: ;
    case 0x10: ;
      puVar2 = (uint *)F_00ab4340(10);
      return *puVar2;
    }
  }
  return 0;
}

/* ref: FUN_00a378d0 */
uint F_00a378d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa378d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x61);
  if (bVar1 == 0) {
    uVar2 = F_00a4a810(&REFG(undefined, 0x14a7360),0x61);
    return uVar2;
  }
  uVar2 = F_00a51200(0x25,param_1,(int)(short)param_2,param_3,(int)(short)param_4);
  return uVar2;
}

/* ref: FUN_00a37920 */
uint F_00a37920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa37920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a51200(0x32,param_1,(int)(short)param_2,(uint)((char)param_3 != '\0'),0);
  return uVar1;
}

/* ref: FUN_00a37950 */
uint F_00a37950(unsigned int gen_a0)
{
  GEN_ENTER(0xa37950u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a51200(0x33,(uint)((char)param_1 != '\0'),0,0,0);
  return uVar1;
}

/* ref: FUN_00a37970 */
uint F_00a37970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa37970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a51200(0x34,param_1,(uint)((char)param_2 != '\0'),0,0);
  return uVar1;
}

/* ref: FUN_00a379a0 */
byte F_00a379a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa379a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = *(int *)((int)this + 0x2178) != 0 || *(int *)((int)this + 0x217c) != 0;
  if (*(int *)((int)this + 0x21b0) != 0 || *(int *)((int)this + 0x21b4) != 0) {
    bVar1 = bVar1 + 1;
  }
  if (*(int *)((int)this + 0x21e8) != 0 || *(int *)((int)this + 0x21ec) != 0) {
    bVar1 = bVar1 + 1;
  }
  if (*(int *)((int)this + 0x2220) != 0 || *(int *)((int)this + 0x2224) != 0) {
    bVar1 = bVar1 + 1;
  }
  if (*(int *)((int)this + 0x2258) != 0 || *(int *)((int)this + 0x225c) != 0) {
    bVar1 = bVar1 + 1;
  }
  if (*(int *)((int)this + 0x2290) != 0 || *(int *)((int)this + 0x2294) != 0) {
    bVar1 = bVar1 + 1;
  }
  if (*(int *)((int)this + 0x22c8) != 0 || *(int *)((int)this + 0x22cc) != 0) {
    bVar1 = bVar1 + 1;
  }
  if (*(int *)((int)this + 0x2300) != 0 || *(int *)((int)this + 0x2304) != 0) {
    bVar1 = bVar1 + 1;
  }
  return bVar1;
}

/* ref: FUN_00a37a90 */
byte F_00a37a90(unsigned int gen_a0)
{
  GEN_ENTER(0xa37a90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0x311e) != '\0') {
    return 0;
  }
  return *(char *)(in_ecx + 0x3088) == '\0';
}

/* ref: FUN_00a37ab0 */
unsigned int F_00a37ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xa37ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x308c) = 0;
  *(undefined4 *)((int)this + 0x3084) = 0;
  *(undefined1 *)((int)this + 0x3088) = 0;
  *(undefined4 *)((int)this + 0x3008) = 0;
  *(undefined4 *)((int)this + 0x300c) = 0;
  *(undefined4 *)((int)this + 0x3018) = 0;
  *(undefined4 *)((int)this + 0x301c) = 0;
  *(undefined1 *)((int)this + 0x3014) = 0;
  *(undefined1 *)((int)this + 0x302f) = 0;
  *(undefined4 *)((int)this + 0x3030) = 0;
  *(undefined1 *)((int)this + 0x3006) = 0;
  *(undefined4 *)((int)this + 0x303c) = 0;
  *(undefined2 *)((int)this + 0x3012) = 30000;
  *(undefined2 *)((int)this + 0x3010) = 0;
  *(undefined4 *)((int)this + 0x3020) = 0;
  *(undefined4 *)((int)this + 0x3024) = 0;
  *(undefined2 *)((int)this + 0x3028) = 0;
  *(undefined4 *)((int)this + 0x302a) = 0;
  *(undefined1 *)((int)this + 0x302e) = 0;
  *(undefined4 *)((int)this + 0x3034) = 0;
  *(undefined1 *)((int)this + 0x3038) = 0;
  *(undefined4 *)((int)this + 0x3048) = 0;
  *(undefined4 *)((int)this + 0x304c) = 0;
  *(undefined4 *)((int)this + 0x3058) = 0;
  *(undefined4 *)((int)this + 0x305c) = 0;
  *(undefined1 *)((int)this + 0x3054) = 0;
  *(undefined2 *)((int)this + 0x3052) = 30000;
  *(undefined1 *)((int)this + 0x306f) = 0;
  *(undefined4 *)((int)this + 0x3070) = 0;
  *(undefined1 *)((int)this + 0x3046) = 0;
  *(undefined4 *)((int)this + 0x307c) = 0;
  *(undefined2 *)((int)this + 0x3050) = 0;
  *(undefined4 *)((int)this + 0x3060) = 0;
  *(undefined4 *)((int)this + 0x3064) = 0;
  *(undefined2 *)((int)this + 0x3068) = 0;
  *(undefined4 *)((int)this + 0x306a) = 0;
  *(undefined1 *)((int)this + 0x306e) = 0;
  *(undefined4 *)((int)this + 0x3074) = 0;
  *(undefined1 *)((int)this + 0x3078) = 0;
  return 0;
}

/* ref: FUN_00a37bc0 */
uint F_00a37bc0(void)
{
  GEN_ENTER(0xa37bc0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00a51200(0x26,0,0,0,0);
  return uVar1;
}

/* ref: FUN_00a37be0 */
uint F_00a37be0(unsigned int gen_a0)
{
  GEN_ENTER(0xa37be0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a51200(0x27,(int)(short)param_1,0,0,0);
  return uVar1;
}

/* ref: FUN_00a37c00 */
byte F_00a37c00(unsigned int gen_a0)
{
  GEN_ENTER(0xa37c00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2487);
}

/* ref: FUN_00a37c10 */
byte F_00a37c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa37c10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2487) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a37c20 */
uint F_00a37c20(unsigned int gen_a0)
{
  GEN_ENTER(0xa37c20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined2 *)(in_ecx + 0x311c) = 0;
  return 0;
}

/* ref: FUN_00a37c30 */
byte F_00a37c30(void)
{
  GEN_ENTER(0xa37c30u, 0u, 0u, 0u, 0u);
  if (((REFG(undefined4, 0x14a7228) & 2) != 0) && (REFG(char, 0x14a6838) == '\x03')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a37c50 */
uint F_00a37c50(unsigned int gen_a0)
{
  GEN_ENTER(0xa37c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  char * pcVar3;
  int iVar4;
  
  piVar2 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d5);
  iVar1 = piVar2[3] + -1;
  iVar4 = 0;
  if (0 < iVar1) {
    pcVar3 = (char *)(*piVar2 + 6);
    do {
      if (((((*piVar2 != 0) && (-1 < iVar4)) && (iVar4 < piVar2[3])) &&
          ((pcVar3 != &REFG(undefined, 0x6) && (*pcVar3 != '\0')))) &&
         (((uint)*(ushort *)(pcVar3 + 4) == *(uint *)this &&
          (*(short *)(pcVar3 + 2) == *(short *)((int)this + 4))))) {
        return (uint)(pcVar3 + -6);
      }
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar3 + 0x40;
    } while (iVar4 < iVar1);
  }
  piVar2 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d2);
  iVar1 = piVar2[3] + -1;
  iVar4 = 0;
  if (0 < iVar1) {
    pcVar3 = (char *)(*piVar2 + 6);
    do {
      if ((((*piVar2 != 0) && (-1 < iVar4)) &&
          ((iVar4 < piVar2[3] &&
           (((pcVar3 != &REFG(undefined, 0x6) && (*pcVar3 != '\0')) &&
            ((uint)*(ushort *)(pcVar3 + 4) == *(uint *)this)))))) &&
         (*(short *)(pcVar3 + 2) == *(short *)((int)this + 4))) {
        return (uint)(pcVar3 + -6);
      }
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar3 + 0x40;
    } while (iVar4 < iVar1);
  }
  piVar2 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d7);
  iVar1 = piVar2[3];
  iVar4 = 0;
  if (0 < iVar1) {
    pcVar3 = (char *)(*piVar2 + 6);
    do {
      if ((((*piVar2 != 0) && (-1 < iVar4)) &&
          ((iVar4 < iVar1 && ((pcVar3 != &REFG(undefined, 0x6) && (*pcVar3 != '\0')))))) &&
         (((uint)*(ushort *)(pcVar3 + 4) == *(uint *)this &&
          (*(short *)(pcVar3 + 2) == *(short *)((int)this + 4))))) {
        return (uint)(pcVar3 + -6);
      }
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar3 + 0x40;
    } while (iVar4 < iVar1);
  }
  return 0;
}

/* ref: FUN_00a37da0 */
uint F_00a37da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa37da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  if (((*(int *)this == 0) || (param_1 < 0)) || (*(int *)((int)this + 0xc) <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1 * 0x40 + *(int *)this;
    if (*(char *)(uVar1 + 6) != '\0') {
      iVar3 = (int)*(short *)(uVar1 + 8);
      piVar2 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)(uVar1 + 10));
      if (((*piVar2 != 0) && (-1 < iVar3)) && (iVar3 < piVar2[3])) {
        return *piVar2 + iVar3 * 0x40;
      }
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00a37e00 */
unsigned int F_00a37e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa37e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*(int *)this != 0) {
    uVar1 = F_00a37da0(this,param_3);
    if (uVar1 != 0) {
      *(uint *)(uVar1 + 8) = param_1;
      if ((*(char *)(uVar1 + 6) == '\0') && ((param_1 < 0x1e8481 || (0x1e8909 < param_1)))) {
        if (param_1 < 1000000) {
          *(byte *)(uVar1 + 0x14) = *(byte *)(uVar1 + 0x14) & 0xfe;
        }
        else {
          *(byte *)(uVar1 + 0x14) = *(byte *)(uVar1 + 0x14) | 1;
          *(uint *)(uVar1 + 8) = param_1 - 1000000;
        }
      }
      *(int *)(uVar1 + 0xc) = param_2;
      if (((param_2 == 0) && (*(undefined4 *)(uVar1 + 0xc) = 0, *(char *)(uVar1 + 6) == '\0')) &&
         (*(int *)(uVar1 + 8) != 1)) {
        *(undefined4 *)(uVar1 + 8) = 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a37e70 */
uint F_00a37e70(unsigned int gen_a0)
{
  GEN_ENTER(0xa37e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined1 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  int local_c;
  int local_8;
  
  *(undefined4 *)((int)this + 0x360) = 0x10000000;
  uVar1 = F_00406bb0(0x80,0,0);
  *(uint *)this = uVar1;
  uVar1 = F_00406bb0(0x20,0,0);
  *(uint *)((int)this + 4) = uVar1;
  uVar1 = F_00406bb0(0x160,0,0);
  *(uint *)((int)this + 8) = uVar1;
  uVar1 = F_00406bb0(0xe0,0,0);
  *(uint *)((int)this + 0xc) = uVar1;
  uVar1 = F_00406bb0(0x20,0,0);
  *(uint *)((int)this + 0x10) = uVar1;
  uVar1 = F_00406bb0(0x60,0,0);
  *(uint *)((int)this + 0x14) = uVar1;
  uVar1 = F_00406bb0(0x20,0,0);
  *(uint *)((int)this + 0x18) = uVar1;
  uVar1 = F_00406bb0(0x180,0,0);
  *(uint *)((int)this + 0x1c) = uVar1;
  uVar1 = F_00406bb0(0xa0,0,0);
  *(uint *)((int)this + 0x20) = uVar1;
  uVar1 = F_00406bb0(0x40,0,0);
  *(uint *)((int)this + 0x24) = uVar1;
  if ((((((*(int *)this != 0) && (*(int *)((int)this + 4) != 0)) && (*(int *)((int)this + 8) != 0))
       && ((*(int *)((int)this + 0xc) != 0 && (*(int *)((int)this + 0x10) != 0)))) &&
      ((*(int *)((int)this + 0x14) != 0 &&
       ((*(int *)((int)this + 0x18) != 0 && (*(int *)((int)this + 0x1c) != 0)))))) &&
     ((*(int *)((int)this + 0x20) != 0 && (uVar1 != 0)))) {
    iVar5 = 0;
    *(undefined4 *)((int)this + 0x28) = 1000;
    iVar3 = 0;
    do {
      F_00a36030((undefined *)(*(int *)this + iVar3),0,iVar5);
      iVar3 = iVar3 + 0x20;
      iVar5 = iVar5 + 1;
    } while (iVar3 < 0x80);
    F_00a36030(*(undefined * PTR32 *)((int)this + 4),1,1000);
    iVar5 = 0;
    iVar3 = 2;
    local_8 = 0xb;
    do {
      F_00a36030(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar5))),iVar3,iVar3 + 0x7ce);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x20;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    iVar5 = 0;
    iVar3 = 0;
    do {
      F_00a36030(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar3))),0xc,iVar5 + 10000);
      iVar3 = iVar3 + 0x20;
      iVar5 = iVar5 + 1;
    } while (iVar3 < 0xe0);
    F_00a36030(*(undefined * PTR32 *)((int)this + 0x10),0xd,11000);
    iVar5 = 0;
    iVar3 = 0xe;
    local_8 = 3;
    do {
      F_00a36030(((undefined *)GEN_TOP((*(int *)((int)this + 0x14) + iVar5))),iVar3,iVar3 + 0x2ed2);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x20;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    F_00a36030(*(undefined * PTR32 *)((int)this + 0x18),0x11,0xdac);
    iVar5 = 0;
    iVar3 = 0;
    do {
      F_00a36030(((undefined *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar3))),0x12,iVar5 + 0xc80);
      iVar3 = iVar3 + 0x20;
      iVar5 = iVar5 + 1;
    } while (iVar3 < 0x140);
    iVar3 = *(int *)((int)this + 0x1c);
    *(undefined4 *)(iVar3 + 0x14c) = 0x19;
    *(undefined4 *)(iVar3 + 0x144) = 0x13;
    uVar1 = F_00406bb0(0x640,0,0);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      iVar5 = 0x18;
      puVar2 = (undefined1 *)(uVar1 + 6);
      do {
        *(undefined2 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[0xe] = 0;
        *(undefined4 *)(puVar2 + -6) = 9999;
        *(undefined4 *)(puVar2 + 2) = 0;
        *(undefined4 *)(puVar2 + 6) = 0;
        *(undefined4 *)(puVar2 + 0x12) = 0;
        *(undefined4 *)(puVar2 + 0x16) = 0;
        *(undefined4 *)(puVar2 + 0x2a) = 0;
        *(undefined4 *)(puVar2 + 0x36) = 0;
        *(undefined2 *)(puVar2 + 0xc) = 30000;
        *(undefined2 *)(puVar2 + 10) = 0;
        puVar2[0x29] = 0;
        *(undefined4 *)(puVar2 + 0x1a) = 0;
        *(undefined4 *)(puVar2 + 0x1e) = 0;
        *(undefined2 *)(puVar2 + 0x22) = 0;
        *(undefined4 *)(puVar2 + 0x24) = 0;
        puVar2[0x28] = 0;
        *(undefined4 *)(puVar2 + 0x2e) = 0;
        puVar2[0x32] = 0;
        puVar2 = puVar2 + 0x40;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
    *(uint *)(iVar3 + 0x140) = uVar1;
    if (uVar1 != 0) {
      *(undefined4 *)(iVar3 + 0x148) = 0xce4;
      local_8 = 0;
      if (0 < *(int *)(iVar3 + 0x14c)) {
        iVar5 = 0;
        do {
          *((undefined4 *)GEN_TOP((iVar5 + *(int *)(iVar3 + 0x140)))) = *(undefined4 *)(iVar3 + 0x148);
          *((short *)GEN_TOP((iVar5 + 4 + *(int *)(iVar3 + 0x140)))) = (short)local_8;
          local_8 = local_8 + 1;
          iVar5 = iVar5 + 0x40;
        } while (local_8 < *(int *)(iVar3 + 0x14c));
      }
      *(undefined1 *)(iVar3 + 0x150) = 0;
    }
    iVar3 = *(int *)((int)this + 0x1c);
    *(undefined4 *)(iVar3 + 0x16c) = 9;
    *(undefined4 *)(iVar3 + 0x164) = 0x14;
    uVar1 = F_00406bb0(0x240,0,0);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      iVar5 = 8;
      puVar2 = (undefined1 *)(uVar1 + 6);
      do {
        *(undefined2 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[0xe] = 0;
        *(undefined4 *)(puVar2 + -6) = 9999;
        *(undefined4 *)(puVar2 + 2) = 0;
        *(undefined4 *)(puVar2 + 6) = 0;
        *(undefined4 *)(puVar2 + 0x12) = 0;
        *(undefined4 *)(puVar2 + 0x16) = 0;
        *(undefined4 *)(puVar2 + 0x2a) = 0;
        *(undefined4 *)(puVar2 + 0x36) = 0;
        *(undefined2 *)(puVar2 + 0xc) = 30000;
        *(undefined2 *)(puVar2 + 10) = 0;
        puVar2[0x29] = 0;
        *(undefined4 *)(puVar2 + 0x1a) = 0;
        *(undefined4 *)(puVar2 + 0x1e) = 0;
        *(undefined2 *)(puVar2 + 0x22) = 0;
        *(undefined4 *)(puVar2 + 0x24) = 0;
        puVar2[0x28] = 0;
        *(undefined4 *)(puVar2 + 0x2e) = 0;
        puVar2[0x32] = 0;
        puVar2 = puVar2 + 0x40;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
    *(uint *)(iVar3 + 0x160) = uVar1;
    if (uVar1 != 0) {
      *(undefined4 *)(iVar3 + 0x168) = 0xd48;
      local_8 = 0;
      if (0 < *(int *)(iVar3 + 0x16c)) {
        iVar5 = 0;
        do {
          *((undefined4 *)GEN_TOP((iVar5 + *(int *)(iVar3 + 0x160)))) = *(undefined4 *)(iVar3 + 0x168);
          *((short *)GEN_TOP((iVar5 + 4 + *(int *)(iVar3 + 0x160)))) = (short)local_8;
          local_8 = local_8 + 1;
          iVar5 = iVar5 + 0x40;
        } while (local_8 < *(int *)(iVar3 + 0x16c));
      }
      *(undefined1 *)(iVar3 + 0x170) = 0;
    }
    local_8 = 0;
    iVar3 = 0;
    do {
      F_00a36030(((undefined *)GEN_TOP((*(int *)((int)this + 0x20) + iVar3))),0x15,local_8 + 20000);
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar3 < 0xa0);
    local_8 = 0;
    iVar3 = 0x16;
    local_c = 2;
    do {
      F_00a36030(((undefined *)GEN_TOP((*(int *)((int)this + 0x24) + local_8))),iVar3,iVar3 + 0x55da);
      local_8 = local_8 + 0x20;
      iVar3 = iVar3 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    *(undefined4 *)((int)this + 0x330) = 0;
    *(undefined4 *)((int)this + 0x334) = 0;
    *(undefined4 *)((int)this + 0x338) = 0;
    *(undefined4 *)((int)this + 0x35c) = 0x100;
    *(undefined4 *)((int)this + 0x2338) = 0xffffffff;
    *(undefined2 *)((int)this + 0x23e0) = 0;
    *(undefined4 *)((int)this + 0x23e4) = 0;
    F_00c48350((undefined *)((int)this + 0x23e8),0,0x70);
    *(undefined4 *)((int)this + 0x2488) = 0;
    *(undefined4 *)((int)this + 0x248c) = 0;
    *(undefined1 *)((int)this + 0x2487) = 0;
    *(undefined4 *)((int)this + 0x2458) = 0;
    *(undefined1 *)((int)this + 0x245c) = 1;
    F_00c48350((undefined *)((int)this + 0x245d),0,0x2a);
    *(undefined4 *)((int)this + 0x2490) = 0;
    *(undefined4 *)((int)this + 0x2494) = 0;
    *(undefined4 *)((int)this + 0x2ff8) = 0;
    F_00c48350((undefined *)((int)this + 0x2498),0,0xb60);
    *(undefined4 *)((int)this + 0x3008) = 0;
    *(undefined4 *)((int)this + 0x300c) = 0;
    *(undefined4 *)((int)this + 0x3018) = 0;
    *(undefined4 *)((int)this + 0x301c) = 0;
    *(undefined1 *)((int)this + 0x3014) = 0;
    *(undefined4 *)((int)this + 0x3010) = 0x75300000;
    *(undefined1 *)((int)this + 0x302f) = 0;
    *(undefined4 *)((int)this + 0x3030) = 0;
    *(undefined1 *)((int)this + 0x3006) = 0;
    *(undefined4 *)((int)this + 0x303c) = 0;
    *(undefined4 *)((int)this + 0x3020) = 0;
    *(undefined4 *)((int)this + 0x3024) = 0;
    *(undefined2 *)((int)this + 0x3028) = 0;
    *(undefined4 *)((int)this + 0x302a) = 0;
    *(undefined1 *)((int)this + 0x302e) = 0;
    *(undefined4 *)((int)this + 0x3034) = 0;
    *(undefined1 *)((int)this + 0x3038) = 0;
    *(undefined4 *)((int)this + 0x3048) = 0;
    *(undefined4 *)((int)this + 0x304c) = 0;
    *(undefined4 *)((int)this + 0x3058) = 0;
    *(undefined4 *)((int)this + 0x305c) = 0;
    *(undefined1 *)((int)this + 0x3054) = 0;
    *(undefined4 *)((int)this + 0x3050) = 0x75300000;
    *(undefined1 *)((int)this + 0x306f) = 0;
    *(undefined4 *)((int)this + 0x3070) = 0;
    *(undefined1 *)((int)this + 0x3046) = 0;
    *(undefined4 *)((int)this + 0x307c) = 0;
    *(undefined4 *)((int)this + 0x3060) = 0;
    *(undefined4 *)((int)this + 0x3064) = 0;
    *(undefined2 *)((int)this + 0x3068) = 0;
    *(undefined4 *)((int)this + 0x306a) = 0;
    *(undefined1 *)((int)this + 0x306e) = 0;
    *(undefined4 *)((int)this + 0x3074) = 0;
    *(undefined1 *)((int)this + 0x3078) = 0;
    *(undefined4 *)((int)this + 0x3080) = 0;
    *(undefined4 *)((int)this + 0x3084) = 0;
    *(undefined1 *)((int)this + 0x3088) = 0;
    *(undefined4 *)((int)this + 0x308c) = 0;
    *(undefined4 *)((int)this + 0x3098) = 0;
    *(undefined4 *)((int)this + 0x309c) = 0;
    *(undefined4 *)((int)this + 0x30a8) = 0;
    *(undefined4 *)((int)this + 0x30ac) = 0;
    *(undefined1 *)((int)this + 0x30a4) = 0;
    *(undefined4 *)((int)this + 0x30a0) = 0x75300000;
    *(undefined1 *)((int)this + 0x30bf) = 0;
    *(undefined4 *)((int)this + 0x30c0) = 0;
    *(undefined1 *)((int)this + 0x3096) = 0;
    *(undefined4 *)((int)this + 0x30cc) = 0;
    *(undefined4 *)((int)this + 0x30b0) = 0;
    *(undefined4 *)((int)this + 0x30b4) = 0;
    *(undefined2 *)((int)this + 0x30b8) = 0;
    *(undefined4 *)((int)this + 0x30ba) = 0;
    *(undefined1 *)((int)this + 0x30be) = 0;
    *(undefined4 *)((int)this + 0x30c4) = 0;
    *(undefined1 *)((int)this + 0x30c8) = 0;
    *(undefined1 *)((int)this + 0x30e4) = 0;
    *(undefined1 *)((int)this + 0x30ff) = 0;
    *(undefined1 *)((int)this + 0x30d6) = 0;
    *(undefined4 *)((int)this + 0x30d8) = 0;
    *(undefined4 *)((int)this + 0x30dc) = 0;
    *(undefined4 *)((int)this + 0x30e8) = 0;
    *(undefined4 *)((int)this + 0x30ec) = 0;
    *(undefined4 *)((int)this + 0x30e0) = 0x75300000;
    *(undefined4 *)((int)this + 0x3100) = 0;
    *(undefined4 *)((int)this + 0x310c) = 0;
    *(undefined4 *)((int)this + 0x30f0) = 0;
    *(undefined4 *)((int)this + 0x30f4) = 0;
    *(undefined2 *)((int)this + 0x30f8) = 0;
    *(undefined4 *)((int)this + 0x30fa) = 0;
    *(undefined1 *)((int)this + 0x30fe) = 0;
    *(undefined4 *)((int)this + 0x3104) = 0;
    *(undefined1 *)((int)this + 0x3108) = 0;
    *(undefined1 *)((int)this + 0x3114) = 0;
    *(undefined1 *)((int)this + 0x311e) = 0;
    *(undefined1 *)((int)this + 0x3124) = 0;
    *(undefined4 *)((int)this + 0x3110) = 0;
    *(undefined4 *)((int)this + 0x3118) = 0;
    *(undefined4 *)((int)this + 0x3120) = 0;
    *(undefined4 *)((int)this + 0x3128) = 0;
    *(undefined2 *)((int)this + 0x311c) = 0;
    *(undefined1 *)(*(int *)this + 0x10) = 1;
    *(undefined1 *)(*(int *)this + 0x30) = 1;
    *(undefined1 *)(*(int *)this + 0x50) = 1;
    *(undefined1 *)(*(int *)this + 0x70) = 1;
    iVar3 = 0;
    do {
      *((undefined1 *)GEN_TOP((iVar3 + 0x10 + *(int *)((int)this + 8)))) = 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar3 < 0x160);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x30))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x50))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x70))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x90))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xb0))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xd0))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x10))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x30))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x50))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x10))) = 1;
    iVar3 = 0;
    do {
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x10 + iVar3))) = 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar3 < 0x180);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x10))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x30))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x50))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x70))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x90))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x24) + 0x10))) = 1;
    uVar1 = *(uint *)((int)this + 0x24);
    *(undefined1 *)(uVar1 + 0x30) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x10))) = 1;
    *(undefined4 *)((int)this + 0x2340) = 0;
    *(undefined4 *)((int)this + 0x2344) = 0;
    puVar4 = (undefined4 *)((int)this + 0x2340);
    puVar6 = (undefined4 *)((int)this + 0x2348);
    for (iVar3 = 0x26; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)((int)this + 0x2174) = 0;
  }
  return uVar1;
}

/* ref: FUN_00a38650 */
byte F_00a38650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa38650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((short)param_1 == 10000) {
    return 1;
  }
  if ((short)param_1 == 0) {
    uVar1 = F_00a36f30(this,1000);
    return *(byte *)(uVar1 + 0x10);
  }
  return 0;
}

/* ref: FUN_00a38690 */
byte F_00a38690(unsigned int gen_a0)
{
  GEN_ENTER(0xa38690u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00ab24a0(param_1);
  if (uVar1 != 0) {
    uVar1 = F_00ab25a0((uint)*(byte *)(uVar1 + 0xa6));
    iVar2 = 0;
    do {
      if (*(char *)(uVar1 + 4 + iVar2) == '\x01') goto LAB_00a386cf;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xe);
  }
  iVar2 = 0xe;
LAB_00a386cf: ;
  return (byte)iVar2;
}

/* ref: FUN_00a386e0 */
uint F_00a386e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa386e0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 * puVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  puVar4 = param_1;
  if ((param_1 != (undefined2 *)0x0) &&
     ((*(char *)(param_1 + 3) != '\0' || (*(int *)(param_1 + 4) != 0)))) {
    (*(undefined2 *)(gen_frame + 0x20)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x24)) = *param_2;
    (*(undefined2 *)(gen_frame + 0x22)) = param_1[2];
    uVar7 = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = param_2[2];
    (*(undefined4 *)(gen_frame + 0x28)) = param_2[1];
    uVar1 = param_2[3];
    uVar2 = param_2[4];
    uVar6 = 0;
    puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
    (*(undefined4 *)(gen_frame + 0x8)) = 0x1a5;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x28;
    (*(undefined4 *)(gen_frame + 0x30)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x34)) = uVar2;
    this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    bVar3 = F_00974e00(this,puVar5,uVar6,uVar7);
    puVar4 = ((undefined2 *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return (uint)puVar4;
}

/* ref: FUN_00a387b0 */
unsigned int F_00a387b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa387b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  undefined * this;
  undefined * pvVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pvVar5 = REFG(void * PTR32, 0x1379694);
  if ((REFG(void * PTR32, 0x1379694) != (undefined *)0x0) && (param_1 != 0)) {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x66);
    if (bVar1 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360),0x66);
      return 0;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar8 = 0x23;
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    piVar4 = (int *)F_00763050(uVar3,uVar8);
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4);
    if ((char)uVar3 != '\0') {
      uVar7 = 0;
      uVar8 = 0x4c4;
      this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
      F_0046ac40(this,uVar8,uVar7,pvVar5);
      return 0;
    }
    fVar6 = F_00a601f0(pvVar5,param_1);
    if ((float10)REFG(float, 0x10a509c) < (float10)fVar6) {
      uVar8 = 0x51e;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
      F_0046a630(pvVar5,uVar8);
      return 0;
    }
    F_00a51200(0x30,*(undefined4 *)(param_1 + 0x74),0,0,0);
  }
  return 0;
}

/* ref: FUN_00a38890 */
uint F_00a38890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa38890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        if ((param_1 == 0x7d6) || (param_3 == 0x7d6)) {
          *(undefined4 *)(puVar1 + 8) = 0x1a;
          *(undefined1 *)((int)this + 0x35c) = 1;
        }
        else {
          *(undefined4 *)(puVar1 + 8) = 8;
        }
        *(int *)(puVar1 + 0x24) = param_3;
        *(short *)(puVar1 + 0x28) = (short)param_4;
        *(int *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51580(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38960 */
uint F_00a38960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa38960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x16;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x18) = param_3;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51650(param_1,param_2,param_3,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38a00 */
uint F_00a38a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa38a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x17;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x18) = param_3;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51720(param_1,param_2,param_3,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38aa0 */
uint F_00a38aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa38aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x2b;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x18) = param_3;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a517f0(param_1,param_2,param_3,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38b40 */
uint F_00a38b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa38b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x18;
        *(undefined4 *)(puVar1 + 0x18) = param_1;
        *(undefined4 *)(puVar1 + 0x2c) = param_1;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52620(param_1,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38bd0 */
uint F_00a38bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa38bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x19;
        *(undefined4 *)(puVar1 + 0x20) = param_1;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a522b0(param_1,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38c60 */
uint F_00a38c60(unsigned int gen_a0)
{
  GEN_ENTER(0xa38c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x19;
        *(undefined4 *)(puVar1 + 0x34) = 3;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52340(3,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38ce0 */
uint F_00a38ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa38ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x1a;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x24) = param_3;
        *(undefined2 *)(puVar1 + 0x28) = (undefined2)param_4;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a523d0(param_1,param_2,param_3,param_4,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38d80 */
uint F_00a38d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa38d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x1c;
        *(short *)(puVar1 + 0x14) = (short)param_1;
        *(short *)(puVar1 + 0x28) = (short)param_1;
        *(undefined4 *)(puVar1 + 0x18) = param_2;
        *(undefined4 *)(puVar1 + 0x2c) = param_2;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a524a0(param_1,param_2,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38e20 */
uint F_00a38e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa38e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x1b;
        *(undefined4 *)(puVar1 + 0x18) = param_1;
        *(undefined4 *)(puVar1 + 0x2c) = param_1;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52560(param_1,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38eb0 */
uint F_00a38eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa38eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x19;
        *(undefined4 *)(puVar1 + 0x34) = 4;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52340(4,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38f30 */
uint F_00a38f30(unsigned int gen_a0)
{
  GEN_ENTER(0xa38f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x19;
        *(undefined4 *)(puVar1 + 0x34) = 7;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52340(7,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a38fb0 */
uint F_00a38fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa38fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x19;
        *(undefined4 *)(puVar1 + 0x34) = 8;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52340(8,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39030 */
uint F_00a39030(unsigned int gen_a0)
{
  GEN_ENTER(0xa39030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x19;
        *(undefined4 *)(puVar1 + 0x34) = 6;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52340(6,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a390b0 */
uint F_00a390b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa390b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x19;
        *(undefined4 *)(puVar1 + 0x34) = 0x12;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52340(0x12,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39130 */
uint F_00a39130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa39130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        if ((param_1 == 0x7d6) || (param_3 == 0x7d6)) {
          *(undefined4 *)(puVar1 + 8) = 0x1a;
          *(undefined1 *)((int)this + 0x35c) = 1;
        }
        else {
          *(undefined4 *)(puVar1 + 8) = 9;
        }
        *(int *)(puVar1 + 0x24) = param_3;
        *(short *)(puVar1 + 0x28) = (short)param_4;
        *(int *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51f70(param_1,param_2,param_3,param_4,param_5,param_6,
                     *(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39200 */
uint F_00a39200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa39200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        if ((param_1 == 0x7d6) || (param_3 == 0x7d6)) {
          *(undefined4 *)(puVar1 + 8) = 0x1a;
          *(undefined1 *)((int)this + 0x35c) = 1;
        }
        else {
          *(undefined4 *)(puVar1 + 8) = 0xc;
        }
        *(int *)(puVar1 + 0x24) = param_3;
        *(short *)(puVar1 + 0x28) = (short)param_4;
        *(int *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52040(param_1,param_2,param_3,param_4,param_5,param_6,
                     *(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a392d0 */
uint F_00a392d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa392d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 0x24) = param_3;
        *(undefined4 *)(puVar1 + 0x18) = param_5;
        *(undefined4 *)(puVar1 + 0x2c) = param_5;
        *(undefined4 *)(puVar1 + 8) = 10;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined2 *)(puVar1 + 0x28) = (undefined2)param_4;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52110(param_1,param_2,param_3,param_4,param_5,param_6,
                     *(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39390 */
uint F_00a39390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa39390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 0x24) = param_3;
        *(undefined4 *)(puVar1 + 0x18) = param_5;
        *(undefined4 *)(puVar1 + 0x2c) = param_5;
        *(undefined4 *)(puVar1 + 8) = 0xb;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined2 *)(puVar1 + 0x28) = (undefined2)param_4;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a521e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     *(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39450 */
uint F_00a39450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa39450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0xd;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(short *)(puVar1 + 0x28) = (short)param_2;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a527b0(param_1,param_2,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a394f0 */
uint F_00a394f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa394f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x14;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52930(param_1);
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39570 */
uint F_00a39570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa39570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x1e;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(short *)(puVar1 + 0x28) = (short)param_2;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a529f0(param_1,param_2,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39610 */
uint F_00a39610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa39610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(undefined4 *)(puVar1 + 0x20) = param_5;
        *(undefined4 *)(puVar1 + 0x10) = param_3;
        *(undefined4 *)(puVar1 + 8) = 0x1f;
        *(short *)(puVar1 + 0x14) = (short)param_4;
        *(undefined2 *)(puVar1 + 0x28) = (undefined2)param_2;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52ab0(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a396c0 */
uint F_00a396c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa396c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(undefined2 *)(puVar1 + 0x28) = (undefined2)param_2;
        *(undefined4 *)(puVar1 + 0x20) = param_5;
        *(undefined4 *)(puVar1 + 0x10) = param_3;
        *(undefined4 *)(puVar1 + 8) = 0x21;
        *(short *)(puVar1 + 0x14) = (short)param_4;
        *(undefined4 *)(puVar1 + 0x2c) = param_6;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52b80(param_1,param_2,param_3,param_4,param_5,param_6,
                     *(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39780 */
uint F_00a39780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa39780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x20;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(short *)(puVar1 + 0x28) = (short)param_2;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a52c50(param_1,param_2,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39820 */
uint F_00a39820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa39820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0xe;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x1c) = param_3;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(short *)(puVar1 + 0x28) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x30) = param_3;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a518c0(param_1,param_2,param_3,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a398c0 */
uint F_00a398c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa398c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0xf;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(undefined4 *)(puVar1 + 0x1c) = param_3;
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(short *)(puVar1 + 0x28) = (short)param_2;
        *(undefined4 *)(puVar1 + 0x30) = param_3;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51990(param_1,param_2,param_3,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39960 */
uint F_00a39960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa39960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x10;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51a60(param_1,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a399f0 */
uint F_00a399f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa399f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x11;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51b20(param_1,*(undefined4 *)((int)this + 0x360));
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39a80 */
uint F_00a39a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa39a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x12;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51be0(*(undefined4 *)((int)this + 0x360),param_1);
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39b00 */
uint F_00a39b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa39b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)((int)this + 0x364);
  do {
    if (*pcVar4 != '\0') {
      puVar1 = (undefined1 *)((int)this + uVar2 * 0x3c + 0x364);
      *puVar1 = 0;
      uVar2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar1 + 8) = 0x13;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)this + 0x360);
        F_00a51ca0(*(undefined4 *)((int)this + 0x360),param_1);
        uVar3 = *(int *)((int)this + 0x360) + 1;
        uVar2 = uVar3 / 0xfffffff;
        *(uint *)((int)this + 0x360) = uVar3 % 0xfffffff | 0x10000000;
      }
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x3c;
  } while ((int)uVar2 < 0x80);
  return uVar2;
}

/* ref: FUN_00a39b80 */
uint F_00a39b80(void)
{
  GEN_ENTER(0xa39b80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00424750(REFG(undefined4, 0x137104c));
  return uVar1;
}

/* ref: FUN_00a39b90 */
uint F_00a39b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa39b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  *(undefined1 *)((int)this + 0x23e0) = *(undefined1 *)(param_2 + 4);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
  *(byte *)(uVar2 + 0x230bf) = *(byte *)(uVar2 + 0x230bf) | 4;
  return uVar2;
}

/* ref: FUN_00a39bc0 */
uint F_00a39bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa39bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18),*(undefined4 *)(param_2 + 0x78));
  if (uVar2 == 0) {
    if ((REFG(void * PTR32, 0x1379694) != (undefined *)0x0) && (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0x188))) == '\a')) {
      F_00aa2900(REFG(void * PTR32, 0x1379694),0);
    }
    uVar2 = F_00a51200(0x2f,0,0,0,0);
    return uVar2;
  }
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar6 = 0;
  uVar5 = 0x4c1;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
  F_0046ac40(pvVar4,uVar5,uVar6,uVar2);
  *(undefined4 *)((int)this + 0x30d8) = 0;
  *(undefined4 *)((int)this + 0x30dc) = 0;
  *(undefined4 *)((int)this + 0x30e8) = 0;
  *(undefined4 *)((int)this + 0x30ec) = 0;
  *(undefined1 *)((int)this + 0x30e4) = 0;
  *(undefined4 *)((int)this + 0x30e0) = 0x75300000;
  *(undefined1 *)((int)this + 0x30ff) = 0;
  *(undefined4 *)((int)this + 0x3100) = 0;
  *(undefined1 *)((int)this + 0x30d6) = 0;
  *(undefined4 *)((int)this + 0x310c) = 0;
  *(undefined4 *)((int)this + 0x30f0) = 0;
  *(undefined4 *)((int)this + 0x30f4) = 0;
  *(undefined2 *)((int)this + 0x30f8) = 0;
  *(undefined4 *)((int)this + 0x30fa) = 0;
  *(undefined1 *)((int)this + 0x30fe) = 0;
  *(undefined4 *)((int)this + 0x3104) = 0;
  *(undefined1 *)((int)this + 0x3108) = 0;
  uVar2 = *(uint *)(param_2 + 0x10);
  *(uint *)((int)this + 0x30d8) = uVar2;
  if ((*(char *)((int)this + 0x30d6) == '\0') && ((uVar2 < 0x1e8481 || (0x1e8909 < uVar2)))) {
    if (uVar2 < 1000000) {
      *(byte *)((int)this + 0x30e4) = *(byte *)((int)this + 0x30e4) & 0xfe;
    }
    else {
      *(byte *)((int)this + 0x30e4) = *(byte *)((int)this + 0x30e4) | 1;
      *(uint *)((int)this + 0x30d8) = uVar2 - 1000000;
    }
  }
  iVar1 = *(int *)(param_2 + 0xc);
  *(int *)((int)this + 0x30dc) = iVar1;
  if (((iVar1 == 0) &&
      (*(undefined4 *)((int)this + 0x30dc) = 0, *(char *)((int)this + 0x30d6) == '\0')) &&
     (*(int *)((int)this + 0x30d8) != 1)) {
    *(undefined4 *)((int)this + 0x30d8) = 0;
  }
  *(undefined4 *)((int)this + 0x30e8) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((int)this + 0x30ec) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)((int)this + 0x30e4) = *(undefined1 *)(param_2 + 0x20);
  *(undefined2 *)((int)this + 0x30e2) = *(undefined2 *)(param_2 + 0x22);
  *(undefined2 *)((int)this + 0x30e0) = *(undefined2 *)(param_2 + 0x24);
  *(undefined1 *)((int)this + 0x30ff) = *(undefined1 *)(param_2 + 0x26);
  *(undefined4 *)((int)this + 0x3100) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((int)this + 0x30f0) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((int)this + 0x30f4) = *(undefined4 *)(param_2 + 0x30);
  *(undefined2 *)((int)this + 0x30f8) = *(undefined2 *)(param_2 + 0x34);
  *(undefined4 *)((int)this + 0x30fa) = *(undefined4 *)(param_2 + 0x36);
  *(undefined1 *)((int)this + 0x30fe) = *(undefined1 *)(param_2 + 0x3a);
  *(undefined4 *)((int)this + 0x3104) = *(undefined4 *)(param_2 + 0x3b);
  *(undefined1 *)((int)this + 0x3108) = *(undefined1 *)(param_2 + 0x3f);
  *(undefined4 *)((int)this + 0x3098) = 0;
  *(undefined4 *)((int)this + 0x309c) = 0;
  *(undefined4 *)((int)this + 0x30a8) = 0;
  *(undefined4 *)((int)this + 0x30ac) = 0;
  *(undefined1 *)((int)this + 0x30a4) = 0;
  *(undefined1 *)((int)this + 0x30bf) = 0;
  *(undefined4 *)((int)this + 0x30c0) = 0;
  *(undefined1 *)((int)this + 0x3096) = 0;
  *(undefined4 *)((int)this + 0x30cc) = 0;
  *(undefined2 *)((int)this + 0x30a2) = 30000;
  *(undefined2 *)((int)this + 0x30a0) = 0;
  *(undefined4 *)((int)this + 0x30b0) = 0;
  *(undefined4 *)((int)this + 0x30b4) = 0;
  *(undefined2 *)((int)this + 0x30b8) = 0;
  *(undefined4 *)((int)this + 0x30ba) = 0;
  *(undefined1 *)((int)this + 0x30be) = 0;
  *(undefined4 *)((int)this + 0x30c4) = 0;
  *(undefined1 *)((int)this + 0x30c8) = 0;
  uVar2 = *(uint *)(param_2 + 0x48);
  *(uint *)((int)this + 0x3098) = uVar2;
  if ((*(char *)((int)this + 0x3096) == '\0') && ((uVar2 < 0x1e8481 || (0x1e8909 < uVar2)))) {
    if (uVar2 < 1000000) {
      *(byte *)((int)this + 0x30a4) = *(byte *)((int)this + 0x30a4) & 0xfe;
    }
    else {
      *(byte *)((int)this + 0x30a4) = *(byte *)((int)this + 0x30a4) | 1;
      *(uint *)((int)this + 0x3098) = uVar2 - 1000000;
    }
  }
  iVar1 = *(int *)(param_2 + 0x44);
  *(int *)((int)this + 0x309c) = iVar1;
  if (((iVar1 == 0) &&
      (*(undefined4 *)((int)this + 0x309c) = 0, *(char *)((int)this + 0x3096) == '\0')) &&
     (*(int *)((int)this + 0x3098) != 1)) {
    *(undefined4 *)((int)this + 0x3098) = 0;
  }
  *(undefined4 *)((int)this + 0x30a8) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((int)this + 0x30ac) = *(undefined4 *)(param_2 + 0x54);
  *(undefined1 *)((int)this + 0x30a4) = *(undefined1 *)(param_2 + 0x58);
  *(undefined2 *)((int)this + 0x30a2) = *(undefined2 *)(param_2 + 0x5a);
  *(undefined2 *)((int)this + 0x30a0) = *(undefined2 *)(param_2 + 0x5c);
  *(undefined1 *)((int)this + 0x30bf) = *(undefined1 *)(param_2 + 0x5e);
  *(undefined4 *)((int)this + 0x30c0) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((int)this + 0x30b0) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)((int)this + 0x30b4) = *(undefined4 *)(param_2 + 0x68);
  *(undefined2 *)((int)this + 0x30b8) = *(undefined2 *)(param_2 + 0x6c);
  *(undefined4 *)((int)this + 0x30ba) = *(undefined4 *)(param_2 + 0x6e);
  *(undefined1 *)((int)this + 0x30be) = *(undefined1 *)(param_2 + 0x72);
  *(undefined4 *)((int)this + 0x30c4) = *(undefined4 *)(param_2 + 0x73);
  *(undefined1 *)((int)this + 0x30c8) = *(undefined1 *)(param_2 + 0x77);
  *(undefined4 *)((int)this + 0x3110) = *(undefined4 *)(param_2 + 0x78);
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar5 = 0x23;
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
  pvVar4 = (undefined *)F_00763050(uVar2,uVar5);
  uVar2 = F_007784a0(pvVar4,(int)this + 0x30d0,(int)this + 0x3090,*(undefined4 *)(param_2 + 0x7c))
  ;
  return uVar2;
}

/* ref: FUN_00a39eb0 */
uint F_00a39eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa39eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar6 = 1;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
    uVar2 = F_00763050(uVar2,uVar6);
    if (uVar2 != 0) {
      ((undefined4 *)(gen_frame + 0x8))[0] = 0;
      ((undefined4 *)(gen_frame + 0x8))[1] = 0;
      ((undefined4 *)(gen_frame + 0x8))[2] = 0;
      ((undefined4 *)(gen_frame + 0x8))[3] = 0;
      ((undefined4 *)(gen_frame + 0x8))[4] = 0;
      ((undefined4 *)(gen_frame + 0x8))[5] = 0;
      (*(undefined2 *)(gen_frame + 0x20)) = 0;
      (*(undefined1 *)(gen_frame + 0x22)) = *param_2;
      (*(undefined4 *)(gen_frame + 0x23)) = 0;
      puVar4 = (undefined4 *)(param_2 + 1);
      puVar5 = ((undefined4 *)(gen_frame + 0x8));
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
      F_00780650(uVar2,((undefined4 *)(gen_frame + 0x8)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_00a39f40 */
uint F_00a39f40(void)
{
  GEN_ENTER(0xa39f40u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc60];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint in_ecx;
  undefined4 * puVar4;
  undefined * this;
  undefined3 extraout_var = 0;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0xc4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc50);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    uVar8 = 1;
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    in_ecx = F_00763050(uVar3,uVar8);
    uVar3 = 0;
    if (in_ecx != 0) {
      puVar4 = (undefined4 *)F_007806c0(in_ecx);
      puVar6 = &(*(undefined4 *)(gen_frame + 0x8));
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = *(undefined2 *)puVar4;
      *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)((int)puVar4 + 2);
      (*(undefined1 *)(gen_frame + 0x40)) = (*(undefined1 *)(gen_frame + 0x22));
      (*(undefined4 *)(gen_frame + 0x28)) = 0x1a6;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0x30;
      puVar4 = &(*(undefined4 *)(gen_frame + 0x8));
      puVar6 = ((undefined4 *)(gen_frame + 0x41));
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      uVar9 = 0;
      uVar8 = 0;
      puVar7 = &(*(undefined4 *)(gen_frame + 0x28));
      *(undefined2 *)puVar6 = *(undefined2 *)puVar4;
      this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      bVar1 = F_00974e00(this,puVar7,uVar8,uVar9);
      uVar3 = CONCAT31(extraout_var,bVar1);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc4c)) ^ (uint)(uint)(gen_frame + 0xc50));
  return uVar3;
}

/* ref: FUN_00a3a020 */
byte F_00a3a020(void)
{
  GEN_ENTER(0xa3a020u, 0u, 0u, 0u, 0u);
  byte bVar1;
  int * piVar2;
  uint in_ecx;
  undefined * this;
  undefined4 uVar3;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x21;
  in_ecx = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  this = (undefined *)F_00763050(in_ecx,uVar3);
  bVar1 = F_008d5350(this);
  return bVar1;
}

/* ref: FUN_00a3a050 */
uint F_00a3a050(void)
{
  GEN_ENTER(0xa3a050u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 0x22;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  pvVar3 = (undefined *)F_00763050(uVar2,uVar4);
  F_008e9cb0(pvVar3);
  uVar4 = 0x23;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  pvVar3 = (undefined *)F_00763050(uVar2,uVar4);
  uVar2 = F_008edf60(pvVar3);
  return uVar2;
}

/* ref: FUN_00a3a0a0 */
uint F_00a3a0a0(void)
{
  GEN_ENTER(0xa3a0a0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x24;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this = (undefined *)F_00763050(uVar2,uVar3);
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  uVar2 = F_008ea1f0(this);
  return uVar2;
}

/* ref: FUN_00a3a0d0 */
uint F_00a3a0d0(void)
{
  GEN_ENTER(0xa3a0d0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x48;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this = (undefined *)F_00763050(uVar2,uVar3);
  uVar2 = F_008a1f90(this);
  return uVar2;
}

/* ref: FUN_00a3a100 */
unsigned int F_00a3a100(void)
{
  GEN_ENTER(0xa3a100u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint in_ecx;
  undefined * this;
  undefined4 uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0x1b;
  in_ecx = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this = (undefined *)F_00763050(in_ecx,uVar2);
  F_00777710(this);
  return 0;
}

/* ref: FUN_00a3a150 */
uint F_00a3a150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3a150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00a36f30(this,param_1);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00a37da0(this_00,param_2);
  return uVar1;
}

/* ref: FUN_00a3a230 */
uint F_00a3a230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa3a230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if (param_1 - 2U < 0x12) {
    this_00 = (undefined *)F_00a36f30(this,0x7d1);
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_00a37da0(this_00,param_1 + -2);
      return uVar1;
    }
  }
  return 0;
}

