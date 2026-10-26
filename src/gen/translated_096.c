#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::UI2::AddonScreenText::vf0 */
uint F_0096d800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96d800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0096d7a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0096d830 */
uint F_0096d830(unsigned int gen_a0)
{
  GEN_ENTER(0x96d830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d8994));
  F_0095c830((undefined *)((int)this + 400));
  F_00429760(*(undefined4 *)((int)this + 400),100,400);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonWideText::vf0 */
uint F_0096d870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96d870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d8994));
  F_0095c830(this + 400);
  F_00429760(*(undefined4 *)(this + 400),100,400);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0096d8d0 */
uint F_0096d8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x96d8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d8aa4));
  F_0095c8d0((undefined *)((int)this + 0x1a4));
  F_00429760(*(undefined4 *)((int)this + 0x1a4),0x68,400);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x194) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060((undefined *)((int)this + 0x198));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonTextAchievementUnlocked::vf0 */
uint F_0096d920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96d920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d8aa4));
  F_0095c8d0(this + 0x1a4);
  F_00429760(*(undefined4 *)(this + 0x1a4),0x68,400);
  *(undefined * PTR32 * PTR32 *)(this + 0x194) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060(this + 0x198);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0096d9a0 */
unsigned int F_0096d9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x96d9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x14) * 0x14,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_0096d9f0 */
uint F_0096d9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x96d9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 0x40);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x48) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  iVar1 = *(int *)((int)this + 0x30);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0x38) - iVar1) / 0xc) * 0xc,400);
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  iVar1 = *(int *)((int)this + 0x20);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x28) - iVar1 >> 3) * 8,400);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  iVar1 = *(int *)((int)this + 0x10);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0x18) - iVar1 >> 3) * 8,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0096db00 */
uint F_0096db00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96db00u, gen_a0, gen_a1, 0u, 0u);
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
    F_005d2e00(this,param_1 - uVar2);
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

/* ref: FUN_0096db90 */
uint F_0096db90(unsigned int gen_a0)
{
  GEN_ENTER(0x96db90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_0096dbd0 */
unsigned int F_0096dbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96dbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00969650(this,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP(((((int)param_1 - (int)puVar2) / 0x34) * 0x34 + *(int *)this)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00969650(this,1);
    }
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x34;
  return 0;
}

/* ref: FUN_0096dc40 */
unsigned int F_0096dc40(unsigned int gen_a0)
{
  GEN_ENTER(0x96dc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = *(int *)this;
  }
  return 0;
}

/* ref: FUN_0096dca0 */
uint F_0096dca0(unsigned int gen_a0)
{
  GEN_ENTER(0x96dca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_009696e0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0096dcd0 */
uint F_0096dcd0(unsigned int gen_a0)
{
  GEN_ENTER(0x96dcd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_009697c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0096dcf0 */
uint F_0096dcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96dcf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009698a0(this,param_1);
  return uVar1;
}

/* ref: FUN_0096dd00 */
uint F_0096dd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96dd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  uVar1 = *(uint *)((int)this + 4);
  uVar3 = (int)(uVar1 - *(int *)this) / 0xd;
  if (param_1 < uVar3) {
    uVar4 = *(int *)this + param_1 * 0xd;
    if (uVar4 != uVar1) {
      *(uint *)((int)this + 4) = uVar4;
      return uVar1;
    }
  }
  else if (uVar3 < param_1) {
    F_00969920(this,param_1 - uVar3);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar2 = param_1 - ((int)puVar5 - *(int *)this) / 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
      }
      puVar5 = (undefined4 *)((int)puVar5 + 0xd);
    }
    uVar3 = (*(int *)((int)this + 4) - *(int *)this) / 0xd;
    *(uint *)((int)this + 4) = (param_1 - uVar3) * 0xd + *(int *)((int)this + 4);
  }
  return uVar3;
}

/* ref: FUN_0096dde0 */
uint F_0096dde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96dde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined2 * puVar4;
  
  uVar1 = *(uint *)((int)this + 4);
  uVar3 = (int)(uVar1 - *(int *)this) / 3;
  if (param_1 < uVar3) {
    uVar3 = *(int *)this + param_1 * 3;
    if (uVar3 != uVar1) {
      *(uint *)((int)this + 4) = uVar3;
      return uVar1;
    }
  }
  else if (uVar3 < param_1) {
    F_009699b0(this,param_1 - uVar3);
    puVar4 = *(undefined2 * PTR32 *)((int)this + 4);
    for (iVar2 = param_1 - ((int)puVar4 - *(int *)this) / 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
        *(undefined1 *)(puVar4 + 1) = 0;
      }
      puVar4 = (undefined2 *)((int)puVar4 + 3);
    }
    uVar3 = (*(int *)((int)this + 4) - *(int *)this) / 3;
    *(uint *)((int)this + 4) = *(int *)((int)this + 4) + (param_1 - uVar3) * 3;
  }
  return uVar3;
}

/* ref: FUN_0096dec0 */
uint F_0096dec0(unsigned int gen_a0)
{
  GEN_ENTER(0x96dec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00969a30(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0096dee0 */
uint F_0096dee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96dee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  uVar3 = *(uint *)((int)this + 4);
  uVar1 = (int)(uVar3 - *(int *)this) >> 3;
  if (param_1 < uVar1) {
    uVar5 = *(int *)this + param_1 * 8;
    if (uVar5 == uVar3) {
      return uVar1;
    }
  }
  else {
    if (param_1 <= uVar1) {
      return uVar1;
    }
    F_00969b00(this,param_1 - uVar1);
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar2 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 3); iVar2 != 0; iVar2 = iVar2 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      puVar4 = puVar4 + 2;
    }
    uVar3 = *(uint *)((int)this + 4);
    uVar5 = uVar3 + (param_1 - ((int)(uVar3 - *(int *)this) >> 3)) * 8;
  }
  *(uint *)((int)this + 4) = uVar5;
  return uVar3;
}

/* ref: FUN_0096df70 */
uint F_0096df70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96df70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  uVar3 = *(uint *)((int)this + 4);
  uVar1 = (int)(uVar3 - *(int *)this) >> 3;
  if (param_1 < uVar1) {
    uVar5 = *(int *)this + param_1 * 8;
    if (uVar5 == uVar3) {
      return uVar1;
    }
  }
  else {
    if (param_1 <= uVar1) {
      return uVar1;
    }
    F_00969b70(this,param_1 - uVar1);
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar2 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 3); iVar2 != 0; iVar2 = iVar2 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      puVar4 = puVar4 + 2;
    }
    uVar3 = *(uint *)((int)this + 4);
    uVar5 = uVar3 + (param_1 - ((int)(uVar3 - *(int *)this) >> 3)) * 8;
  }
  *(uint *)((int)this + 4) = uVar5;
  return uVar3;
}

/* ref: FUN_0096e000 */
uint F_0096e000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96e000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  uVar2 = *(uint *)((int)this + 4);
  uVar4 = (int)(uVar2 - *(int *)this) / 0xc;
  if (param_1 < uVar4) {
    uVar4 = *(int *)this + param_1 * 0xc;
    if (uVar4 == uVar2) {
      return param_1 * 3;
    }
  }
  else {
    if (param_1 <= uVar4) {
      return uVar4;
    }
    F_00969be0(this,param_1 - uVar4);
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar1 = param_1 - ((int)puVar3 - *(int *)this) / 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar3 = puVar3 + 3;
    }
    uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xc;
    uVar4 = *(int *)((int)this + 4) + (param_1 - uVar2) * 0xc;
  }
  *(uint *)((int)this + 4) = uVar4;
  return uVar2;
}

/* ref: FUN_0096e0e0 */
uint F_0096e0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x96e0e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00969c60(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0096e100 */
uint F_0096e100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96e100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00969d50(this,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0x14) * 0x14)));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00969d50(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
  return (uint)puVar3;
}

/* ref: FUN_0096e1b0 */
uint F_0096e1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96e1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00969de0(this,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0x14) * 0x14)));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00969de0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
  return (uint)puVar3;
}

/* ref: FUN_0096e260 */
uint F_0096e260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96e260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2cb0(this,1);
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
      F_005d2cb0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_0096e2d0 */
uint F_0096e2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96e2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar4 = (undefined4 *)F_00969e70(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)this;
      *puVar1 = *(undefined4 *)(iVar2 + iVar5 * 8);
      uVar3 = *(uint *)(iVar2 + 4 + iVar5 * 8);
      puVar1[1] = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00969e70(this,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return (uint)puVar4;
}

/* ref: FUN_0096e350 */
uint F_0096e350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96e350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar4 = (undefined4 *)F_00969ee0(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)this;
      *puVar1 = *(undefined4 *)(iVar2 + iVar5 * 8);
      uVar3 = *(uint *)(iVar2 + 4 + iVar5 * 8);
      puVar1[1] = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00969ee0(this,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return (uint)puVar4;
}

/* ref: FUN_0096e3d0 */
uint F_0096e3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96e3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar4 = (undefined4 *)F_00969f50(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)this;
      *puVar1 = *(undefined4 *)(iVar2 + iVar5 * 8);
      uVar3 = *(uint *)(iVar2 + 4 + iVar5 * 8);
      puVar1[1] = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00969f50(this,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return (uint)puVar4;
}

/* ref: FUN_0096e450 */
uint F_0096e450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96e450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar4 = (undefined4 *)F_00969fc0(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)this;
      *puVar1 = *(undefined4 *)(iVar2 + iVar5 * 8);
      uVar3 = *(uint *)(iVar2 + 4 + iVar5 * 8);
      puVar1[1] = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00969fc0(this,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return (uint)puVar4;
}

/* ref: FUN_0096e4d0 */
uint F_0096e4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96e4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar4 = (undefined4 *)F_0096a030(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)this;
      *puVar1 = *(undefined4 *)(iVar2 + iVar5 * 8);
      uVar3 = *(uint *)(iVar2 + 4 + iVar5 * 8);
      puVar1[1] = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0096a030(this,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return (uint)puVar4;
}

/* ref: FUN_0096e550 */
uint F_0096e550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96e550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0096a0a0(this,1);
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
      F_0096a0a0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_0096e5c0 */
uint F_0096e5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96e5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0096a110(this,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0x18) * 0x18)));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      puVar2[5] = puVar1[5];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0096a110(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
      puVar3[5] = param_1[5];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  return (uint)puVar3;
}

/* ref: FUN_0096e680 */
uint F_0096e680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96e680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar4 = (undefined4 *)F_0096a1a0(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)this;
      *puVar1 = *(undefined4 *)(iVar2 + iVar5 * 8);
      uVar3 = *(uint *)(iVar2 + 4 + iVar5 * 8);
      puVar1[1] = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0096a1a0(this,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return (uint)puVar4;
}

/* ref: FUN_0096e700 */
uint F_0096e700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96e700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar4 = (undefined4 *)F_0096a210(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)this;
      *puVar1 = *(undefined4 *)(iVar2 + iVar5 * 8);
      uVar3 = *(uint *)(iVar2 + 4 + iVar5 * 8);
      puVar1[1] = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0096a210(this,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return (uint)puVar4;
}

/* ref: FUN_0096e780 */
uint F_0096e780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96e780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0096a280(this,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0xc) * 0xc)));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0096a280(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
  return (uint)puVar3;
}

/* ref: FUN_0096e810 */
uint F_0096e810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96e810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0096a300(this,1);
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
      F_0096a300(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_0096e880 */
uint F_0096e880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96e880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0096a370(this,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0xc) * 0xc)));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0096a370(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
  return (uint)puVar3;
}

/* ref: FUN_0096e920 */
uint F_0096e920(unsigned int gen_a0)
{
  GEN_ENTER(0x96e920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_0096a3f0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0096e940 */
unsigned int F_0096e940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96e940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0096a550(this,1);
    }
    pvVar3 = *(undefined * PTR32 *)((int)this + 4);
    iVar4 = ((int)(param_1 - uVar2) / 0x68) * 0x68 + *(int *)this;
    if (pvVar3 != (undefined *)0x0) {
      F_0042cbc0(pvVar3,iVar4);
      *(undefined4 *)((int)pvVar3 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
      *(undefined4 *)((int)pvVar3 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
      *(undefined4 *)((int)pvVar3 + 0x5c) = *(undefined4 *)(iVar4 + 0x5c);
      *(undefined4 *)((int)pvVar3 + 0x60) = *(undefined4 *)(iVar4 + 0x60);
      *(undefined1 *)((int)pvVar3 + 100) = *(undefined1 *)(iVar4 + 100);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x68;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0096a550(this,1);
    }
    pvVar3 = *(undefined * PTR32 *)((int)this + 4);
    if (pvVar3 != (undefined *)0x0) {
      F_0042cbc0(pvVar3,param_1);
      *(undefined4 *)((int)pvVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)((int)pvVar3 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)((int)pvVar3 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
      *(undefined4 *)((int)pvVar3 + 0x60) = *(undefined4 *)(param_1 + 0x60);
      *(undefined1 *)((int)pvVar3 + 100) = *(undefined1 *)(param_1 + 100);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x68;
  return 0;
}

/* ref: FUN_0096ea00 */
uint F_0096ea00(unsigned int gen_a0)
{
  GEN_ENTER(0x96ea00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * this_00;
  
  pvVar2 = *(undefined * PTR32 *)((int)this + 4);
  if (*(undefined * PTR32 *)this != pvVar2) {
    pvVar1 = (undefined *)F_0093fe20(pvVar2,pvVar2,*(undefined * PTR32 *)this,this);
    pvVar2 = *(undefined * PTR32 *)((int)this + 4);
    for (this_00 = pvVar1; this_00 != pvVar2; this_00 = (undefined *)((int)this_00 + 0x68)) {
      F_0042c880(this_00);
    }
    *(undefined * PTR32 *)((int)this + 4) = pvVar1;
    pvVar2 = this;
  }
  return (uint)pvVar2;
}

/* ref: FUN_0096ea50 */
unsigned int F_0096ea50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96ea50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0096a650(this,1);
    }
    uVar2 = ((int)(param_1 - uVar2) / 0x6c) * 0x6c + *(int *)this;
  }
  else {
    uVar2 = param_1;
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0096a650(this,1);
    }
  }
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  if (this_00 != (undefined *)0x0) {
    F_0042cbc0(this_00,uVar2);
    *(undefined4 *)((int)this_00 + 0x54) = *(undefined4 *)(uVar2 + 0x54);
    *(undefined4 *)((int)this_00 + 0x58) = *(undefined4 *)(uVar2 + 0x58);
    *(undefined4 *)((int)this_00 + 0x5c) = *(undefined4 *)(uVar2 + 0x5c);
    *(undefined4 *)((int)this_00 + 0x60) = *(undefined4 *)(uVar2 + 0x60);
    *(undefined4 *)((int)this_00 + 100) = *(undefined4 *)(uVar2 + 100);
    *(undefined4 *)((int)this_00 + 0x68) = *(undefined4 *)(uVar2 + 0x68);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x6c;
  return 0;
}

/* ref: FUN_0096eae0 */
uint F_0096eae0(unsigned int gen_a0)
{
  GEN_ENTER(0x96eae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * this_00;
  
  pvVar2 = *(undefined * PTR32 *)((int)this + 4);
  if (*(undefined * PTR32 *)this != pvVar2) {
    pvVar1 = (undefined *)F_0093fe80(pvVar2,pvVar2,*(undefined * PTR32 *)this,this);
    pvVar2 = *(undefined * PTR32 *)((int)this + 4);
    for (this_00 = pvVar1; this_00 != pvVar2; this_00 = (undefined *)((int)this_00 + 0x6c)) {
      F_0042c880(this_00);
    }
    *(undefined * PTR32 *)((int)this + 4) = pvVar1;
    pvVar2 = this;
  }
  return (uint)pvVar2;
}

/* ref: FUN_0096eb30 */
uint F_0096eb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96eb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0096a6e0(this,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0x18) * 0x18)));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      puVar2[5] = puVar1[5];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0096a6e0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
      puVar3[5] = param_1[5];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  return (uint)puVar3;
}

/* ref: FUN_0096ebf0 */
uint F_0096ebf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96ebf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_0096a770(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0096a770(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096ec60 */
uint F_0096ec60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96ec60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x54;
  if ((*(uint *)&gen_args[1]) < uVar2) {
    uVar2 = F_00487650((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]) * 0x54 + *(int *)(*(undefined * PTR32 *)&gen_args[0]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    return uVar2;
  }
  if (uVar2 < (*(uint *)&gen_args[1])) {
    F_00488ca0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]) - uVar2);
    F_0095ce40(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar1 - (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x54,0,
                 (int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc);
    uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x54;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (uVar1 - uVar2) * 0x54 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  return uVar2;
}

/* ref: FUN_0096ed10 */
uint F_0096ed10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96ed10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xc;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0096a830(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0096a830(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096ed90 */
uint F_0096ed90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96ed90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0096a930(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0096a930(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096ee20 */
uint F_0096ee20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96ee20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 4;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_0096aa30(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0096aa30(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096ee90 */
uint F_0096ee90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96ee90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x58;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x58;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0096aaf0(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0096aaf0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096ef20 */
uint F_0096ef20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96ef20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x54;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0096abe0(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0096abe0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096efb0 */
uint F_0096efb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96efb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x60;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x60;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0096acd0(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0096acd0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096f040 */
uint F_0096f040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96f040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xd4;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xd4;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0096add0(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0096add0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096f0d0 */
uint F_0096f0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96f0d0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_0096aeb0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0096aeb0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096f140 */
uint F_0096f140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96f140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xc0;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc0;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0096af60(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0096af60(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096f1d0 */
unsigned int F_0096f1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f1d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0096bc90(param_1,param_2,(param_2 - param_1) / 0x14,param_3);
  return 0;
}

/* ref: FUN_0096f210 */
unsigned int F_0096f210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f210u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0096bdd0(param_1,param_2,(param_2 - param_1) / 0x14,param_3);
  return 0;
}

/* ref: FUN_0096f250 */
unsigned int F_0096f250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f250u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0096bf10(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return 0;
}

/* ref: FUN_0096f280 */
uint F_0096f280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f280u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0096c000(param_1,param_2,(param_2 - param_1) / 0x6c,param_3);
  return uVar1;
}

/* ref: FUN_0096f2c0 */
uint F_0096f2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f2c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0096c140(param_1,param_2,(param_2 - param_1) / 0x68,param_3);
  return uVar1;
}

/* ref: FUN_0096f300 */
uint F_0096f300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f300u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0096c280(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return uVar1;
}

/* ref: FUN_0096f330 */
unsigned int F_0096f330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f330u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0096c370(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return 0;
}

/* ref: FUN_0096f360 */
unsigned int F_0096f360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f360u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0096c460(param_1,param_2,(param_2 - param_1) / 0xc,param_3);
  return 0;
}

/* ref: FUN_0096f3a0 */
uint F_0096f3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f3a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0096c5a0(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return uVar1;
}

/* ref: FUN_0096f3d0 */
uint F_0096f3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f3d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0096c690(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return uVar1;
}

/* ref: FUN_0096f400 */
uint F_0096f400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f400u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0096c780(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return uVar1;
}

/* ref: FUN_0096f430 */
uint F_0096f430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f430u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0096c870(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return uVar1;
}

/* ref: FUN_0096f460 */
unsigned int F_0096f460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f460u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0096c960(param_1,param_2,(param_2 - param_1) / 0x18,param_3);
  return 0;
}

/* ref: FUN_0096f4a0 */
unsigned int F_0096f4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f4a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0096caa0(param_1,param_2,(param_2 - param_1) / 0xc,param_3);
  return 0;
}

/* ref: FUN_0096f4e0 */
unsigned int F_0096f4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f4e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0096cbe0(param_1,param_2,param_2 - param_1 >> 4,param_3);
  return 0;
}

/* ref: FUN_0096f510 */
unsigned int F_0096f510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f510u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0096ccd0(param_1,param_2,(param_2 - param_1) / 0xc,param_3);
  return 0;
}

/* ref: FUN_0096f550 */
unsigned int F_0096f550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f550u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0096ce10(param_1,param_2,param_2 - param_1 >> 4,param_3);
  return 0;
}

/* ref: FUN_0096f580 */
unsigned int F_0096f580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x96f580u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0096cf00(param_1,param_2,(param_2 - param_1) / 0x14,param_3);
  return 0;
}

/* ref: FUN_0096f5c0 */
unsigned int F_0096f5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96f5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    F_00966cc0(param_1 + 2,param_2 + 2);
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  }
  return 0;
}

/* ref: FUN_0096f600 */
uint F_0096f600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96f600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x500,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008c1830(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0096f670 */
uint F_0096f670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96f670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x278,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008be870(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0096f6e0 */
uint F_0096f6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96f6e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x3bc,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008bf710(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0096f750 */
uint F_0096f750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96f750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x280,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008c02f0(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0096f7c0 */
uint F_0096f7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96f7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x1c8,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008c05f0(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0096f830 */
uint F_0096f830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96f830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x1b8,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008c06b0(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0096f8a0 */
uint F_0096f8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96f8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x49a8,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008c1ce0(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0096f910 */
uint F_0096f910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96f910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x6a48,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008c0770(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0096f980 */
uint F_0096f980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96f980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x7210,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008c0950(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0096f9f0 */
uint F_0096f9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96f9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x4b04,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008c0a80(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0096fa60 */
uint F_0096fa60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96fa60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(10000,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008c0b60(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0096fad0 */
unsigned int F_0096fad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96fad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 / 0xc;
    if (iVar1 < 0x21) {
LAB_0096fba2: ;
      if (1 < iVar1) {
        F_00959300(iVar2,iVar4,param_4,0);
      }
      return 0;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (iVar4 - iVar2) / 0xc) {
          F_00959200(iVar2,iVar4,param_4,0,0);
        }
        F_009673d0(iVar2,iVar4,param_4);
        return 0;
      }
      goto LAB_0096fba2;
    }
    F_0095f500(&(*(int *)(gen_frame + 0x4)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if (((*(int *)(gen_frame + 0x4)) - iVar2) / 0xc < (iVar4 - (*(int *)(gen_frame + 0x8))) / 0xc) {
      F_0096fad0(iVar2,(*(int *)(gen_frame + 0x4)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_0096fad0((*(int *)(gen_frame + 0x8)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_0096fc10 */
uint F_0096fc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96fc10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_2 - param_1;
  iVar3 = param_1;
  iVar5 = param_2;
  iVar4 = param_3;
  do {
    uVar1 = iVar2 / 0x18;
    if ((int)uVar1 < 0x21) {
LAB_0096fce5: ;
      if (1 < (int)uVar1) {
        uVar1 = F_00959510(iVar3,iVar5,param_4,0);
      }
      return uVar1;
    }
    if (iVar4 < 1) {
      if (0x20 < (int)uVar1) {
        if (1 < (iVar5 - iVar3) / 0x18) {
          F_00959480(iVar3,iVar5,param_4,0,0);
        }
        uVar1 = F_00967480(iVar3,iVar5,param_4);
        return uVar1;
      }
      goto LAB_0096fce5;
    }
    F_0095f7b0(&(*(int *)(gen_frame + 0x4)),iVar3,iVar5,param_4);
    iVar4 = iVar4 / 2 + (iVar4 / 2) / 2;
    if (((*(int *)(gen_frame + 0x4)) - iVar3) / 0x18 < (iVar5 - (*(int *)(gen_frame + 0x8))) / 0x18) {
      F_0096fc10(iVar3,(*(int *)(gen_frame + 0x4)),iVar4,param_4);
      iVar3 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_0096fc10((*(int *)(gen_frame + 0x8)),iVar5,iVar4,param_4);
      iVar5 = (*(int *)(gen_frame + 0x4));
    }
    iVar2 = iVar5 - iVar3;
  } while( true );
}

/* ref: FUN_0096fd50 */
uint F_0096fd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96fd50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2 - param_1;
  iVar3 = param_1;
  iVar5 = param_2;
  iVar4 = param_3;
  do {
    uVar2 = iVar1 >> 4;
    if ((int)uVar2 < 0x21) {
LAB_0096fde2: ;
      if (1 < (int)uVar2) {
        uVar2 = F_009597d0(iVar3,iVar5,param_4,0);
      }
      return uVar2;
    }
    if (iVar4 < 1) {
      if (0x20 < (int)uVar2) {
        if (0x10 < (int)(iVar5 - iVar3 & 0xfffffff0U)) {
          F_009596c0(iVar3,iVar5,param_4,0,0);
        }
        uVar2 = F_00967560(iVar3,iVar5,param_4);
        return uVar2;
      }
      goto LAB_0096fde2;
    }
    F_0095fc60(&(*(int *)(gen_frame + 0x4)),iVar3,iVar5,param_4);
    iVar4 = iVar4 / 2 + (iVar4 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - iVar3 & 0xfffffff0U) < (int)(iVar5 - (*(int *)(gen_frame + 0x8)) & 0xfffffff0U)) {
      F_0096fd50(iVar3,(*(int *)(gen_frame + 0x4)),iVar4,param_4);
      iVar3 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_0096fd50((*(int *)(gen_frame + 0x8)),iVar5,iVar4,param_4);
      iVar5 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar5 - iVar3;
  } while( true );
}

/* ref: FUN_0096fe40 */
uint F_0096fe40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96fe40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x5ec,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008bf0b0(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0096feb0 */
uint F_0096feb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96feb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x1a0,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008bf190(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0096ff20 */
uint F_0096ff20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96ff20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x1b4,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008bf2f0(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0096ff90 */
uint F_0096ff90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96ff90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x1ac,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008beea0(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_00970000 */
uint F_00970000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970000u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)(param_2 + 0x10) - iVar1 >> 3) * 8,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  return uVar2;
}

/* ref: FUN_00970050 */
unsigned int F_00970050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x970050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_00966cc0(param_2 + 2,param_3 + 2);
    *(undefined1 *)(param_2 + 6) = *(undefined1 *)(param_3 + 6);
  }
  return 0;
}

/* ref: FUN_00970080 */
uint F_00970080(unsigned int gen_a0)
{
  GEN_ENTER(0x970080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x96;
  uVar1 = F_0096a3f0((undefined *)((int)this + 0x2da0),&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x2da0),
                       *(undefined4 *)((int)this + 0x2da4));
  return uVar1;
}

/* ref: FUN_009700c0 */
uint F_009700c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9700c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  int iVar5;
  ulonglong uVar6;
  int local_8;
  
  local_8 = 0x13;
  puVar3 = (undefined4 *)((int)this + 0x3680);
  do {
    iVar5 = puVar3[-6];
    if (iVar5 != 0) {
      F_00429760(iVar5,((puVar3[-4] - iVar5) / 0xc) * 0xc,400);
    }
    local_8 = local_8 + -1;
    puVar3[-6] = 0;
    puVar3[-5] = 0;
    puVar3[-4] = 0;
    puVar3 = puVar3 + -6;
  } while (-1 < local_8);
  F_0096d330((undefined *)((int)this + 0x2e58));
  F_0042c880((undefined *)((int)this + 0x2e04));
  F_0042c880((undefined *)((int)this + 0x2db0));
  pvVar4 = (undefined *)((int)this + 0x2da0);
  F_0096a470(pvVar4);
  iVar5 = 0x4a0;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -8);
    F_005a2670(pvVar4);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  pvVar4 = (undefined *)((int)this + 0x898);
  iVar5 = 2;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x54);
    F_0042c880(pvVar4);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_0042c880((undefined *)((int)this + 0x410));
  F_0042c880((undefined *)((int)this + 0x3b8));
  pvVar4 = (undefined *)((int)this + 0x3b4);
  iVar5 = 8;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x60);
    uVar6 = F_0042c880(pvVar4);
    uVar2 = (uint)uVar6;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentMonsterNote::vf0 */
uint F_009701f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9701f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  F_004876d0(this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentRepair::vf0 */
uint F_00970250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0096d470(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMaterialize::vf0 */
uint F_00970280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008bd600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMateriaAttach::vf0 */
uint F_009702b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9702b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008bd720(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentColorant::vf0 */
uint F_009702e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9702e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008bd820(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentBait::vf0 */
uint F_00970310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0096d5f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCreditPlayer::vf48 */
byte F_00970340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x970340u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return *(int *)(in_ecx + 0x3a0) == 3;
}

/* ref: Client::UI2::AddonScreenInfo::vf0 */
uint F_00970350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008be990(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonActionBarBase::vf65 */
unsigned int F_00970380(void)
{
  GEN_ENTER(0x970380u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonToDoList::vf0 */
uint F_00970390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008bf7f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMainCross::vf0 */
uint F_009703c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9703c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008bf860(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyCrestEditor::vf0 */
uint F_009703f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9703f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008c03d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyCrestColor::vf0 */
uint F_00970420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008c0650(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyCrestSymbolColor::vf0 */
uint F_00970450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008c0710(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMaterialize::vf0 */
uint F_00970480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008c07f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMateriaAttach::vf0 */
uint F_009704b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9704b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008c0a10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMateriaBroker::vf0 */
uint F_009704e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9704e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008c0b10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonColorantEquipmentSelector::vf0 */
uint F_00970510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d93c4));
  this_00 = this + 10000;
  iVar1 = 99;
  do {
    this_00 = this_00 + -0x60;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_004876d0(this + 0x180);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonAreaMap::vf0 */
uint F_00970570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008c1b20(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonRepair::vf0 */
uint F_009705a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9705a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008c1db0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonAchievement::vf0 */
uint F_009705d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9705d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d96c4));
  F_0096d9f0(this + 0x22c);
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  *(undefined * PTR32 * PTR32 *)(this + 0x214) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSupportMain::vf0 */
uint F_00970620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x180);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d38cc));
  if (this_00 != (undefined *)0x0) {
    F_009629c0(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)(this + 0x180) = 0;
  }
  F_0042c880(this + 0x184);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00970680 */
uint F_00970680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar4 = (undefined4 *)F_0096ebf0(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)this;
      *puVar1 = *(undefined4 *)(iVar2 + iVar5 * 8);
      uVar3 = *(uint *)(iVar2 + 4 + iVar5 * 8);
      puVar1[1] = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0096ebf0(this,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return (uint)puVar4;
}

/* ref: FUN_00970700 */
uint F_00970700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  F_0096ec60(this,param_1);
  return (uint)this;
}

/* ref: FUN_00970720 */
uint F_00970720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar3 = *(uint *)this, uVar3 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_0096ed10(this,1);
    }
    iVar1 = *(int *)this + ((int)(param_1 - uVar3) / 0xc) * 0xc;
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar5 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d38));
      puVar4[1] = *(undefined4 *)(iVar1 + 4);
      puVar4[2] = *(undefined4 *)(iVar1 + 8);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
      return (uint)puVar4;
    }
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_0096ed10(this,1);
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d38));
      puVar5[1] = *(undefined4 *)(param_1 + 4);
      puVar5[2] = *(undefined4 *)(param_1 + 8);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
  return (uint)puVar5;
}

/* ref: FUN_009707c0 */
uint F_009707c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9707c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar3 = *(uint *)this, uVar3 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_0096ed90(this,1);
    }
    iVar1 = *(int *)this + ((int)(param_1 - uVar3) / 0x18) * 0x18;
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar5 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d48));
      puVar4[1] = *(undefined4 *)(iVar1 + 4);
      puVar4[2] = *(undefined4 *)(iVar1 + 8);
      puVar4[3] = *(undefined4 *)(iVar1 + 0xc);
      puVar4[4] = *(undefined4 *)(iVar1 + 0x10);
      *(undefined1 *)(puVar4 + 5) = *(undefined1 *)(iVar1 + 0x14);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
      return (uint)puVar4;
    }
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_0096ed90(this,1);
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d48));
      puVar5[1] = *(undefined4 *)(param_1 + 4);
      puVar5[2] = *(undefined4 *)(param_1 + 8);
      puVar5[3] = *(undefined4 *)(param_1 + 0xc);
      puVar5[4] = *(undefined4 *)(param_1 + 0x10);
      *(undefined1 *)(puVar5 + 5) = *(undefined1 *)(param_1 + 0x14);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  return (uint)puVar5;
}

/* ref: FUN_00970880 */
uint F_00970880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0096ee20(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    iVar5 = (param_1 - uVar2 & 0xfffffff0) + *(int *)this;
    puVar4 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d58));
      puVar3[1] = *(undefined4 *)(iVar5 + 4);
      puVar3[2] = *(undefined4 *)(iVar5 + 8);
      puVar3[3] = *(undefined4 *)(iVar5 + 0xc);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x10;
      return (uint)puVar3;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0096ee20(this,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d58));
      puVar4[1] = *(undefined4 *)(param_1 + 4);
      puVar4[2] = *(undefined4 *)(param_1 + 8);
      puVar4[3] = *(undefined4 *)(param_1 + 0xc);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x10;
  return (uint)puVar4;
}

/* ref: FUN_00970910 */
unsigned int F_00970910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0096ee90(this,1);
    }
    pvVar3 = *(undefined * PTR32 *)((int)this + 4);
    iVar4 = ((int)(param_1 - uVar2) / 0x58) * 0x58 + *(int *)this;
    if (pvVar3 != (undefined *)0x0) {
      F_0042cbc0(pvVar3,iVar4);
      *(undefined4 *)((int)pvVar3 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x58;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0096ee90(this,1);
    }
    pvVar3 = *(undefined * PTR32 *)((int)this + 4);
    if (pvVar3 != (undefined *)0x0) {
      F_0042cbc0(pvVar3,param_1);
      *(undefined4 *)((int)pvVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x58;
  return 0;
}

/* ref: FUN_009709a0 */
uint F_009709a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9709a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x54;
  if ((*(uint *)&gen_args[1]) < uVar2) {
    uVar2 = F_009697c0((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]) * 0x54 + *(int *)(*(undefined * PTR32 *)&gen_args[0]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    return uVar2;
  }
  if (uVar2 < (*(uint *)&gen_args[1])) {
    F_0096ef20((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]) - uVar2);
    F_0095cca0(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar1 - (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x54,0,
                 (int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc);
    uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x54;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (uVar1 - uVar2) * 0x54 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  return uVar2;
}

/* ref: FUN_00970a50 */
uint F_00970a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar1 = *(uint *)this, uVar1 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      uVar2 = F_0048a220(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      uVar2 = F_00560a60(*(undefined * PTR32 *)((int)this + 4),
                           *(int *)this + ((int)(param_1 - uVar1) >> 3) * 8);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return uVar2;
    }
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      uVar2 = F_0048a220(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      uVar2 = F_00560a60(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return uVar2;
}

/* ref: FUN_00970ac0 */
uint F_00970ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970ac0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x60;
  if ((*(uint *)&gen_args[1]) < uVar2) {
    uVar2 = F_00969a30((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]) * 0x60 + *(int *)(*(undefined * PTR32 *)&gen_args[0]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    return uVar2;
  }
  if (uVar2 < (*(uint *)&gen_args[1])) {
    F_0096efb0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]) - uVar2);
    F_00957190(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar1 - (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x60,0,
                 (int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,0,(*(uint *)&gen_args[1]));
    uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x60;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (uVar1 - uVar2) * 0x60 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  return uVar2;
}

/* ref: FUN_00970b70 */
uint F_00970b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970b70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0xd4;
  if ((*(uint *)&gen_args[1]) < uVar2) {
    uVar2 = F_00969c60((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]) * 0xd4 + *(int *)(*(undefined * PTR32 *)&gen_args[0]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    return uVar2;
  }
  if (uVar2 < (*(uint *)&gen_args[1])) {
    F_0096f040((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]) - uVar2);
    F_0095dcb0(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar1 - (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0xd4,0,
                 (int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,0,(*(uint *)&gen_args[1]));
    uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0xd4;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (uVar1 - uVar2) * 0xd4 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  return uVar2;
}

/* ref: FUN_00970c20 */
uint F_00970c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0096f0d0(this,1);
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
      F_0096f0d0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00970c90 */
unsigned int F_00970c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x970c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0096f140(this,1);
    }
    F_0094c920((int)this + 0xc,*(undefined4 *)((int)this + 4),
                 ((int)(param_1 - uVar2) / 0xc0) * 0xc0 + *(int *)this);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc0;
    return 0;
  }
  if (uVar1 == *(uint *)((int)this + 8)) {
    F_0096f140(this,1);
  }
  F_0094c980((int)this + 0xc,*(undefined4 *)((int)this + 4),param_1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc0;
  return 0;
}

/* ref: FUN_00970d20 */
uint F_00970d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x970d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0096f600(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00970eb0 */
uint F_00970eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x970eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0096f670(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00971040 */
uint F_00971040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x971040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0096f6e0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009711d0 */
uint F_009711d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9711d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0096f750(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00971360 */
uint F_00971360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x971360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0096f7c0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009714f0 */
uint F_009714f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9714f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0096f830(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00971680 */
uint F_00971680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x971680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0096f8a0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00971810 */
uint F_00971810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x971810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0096f910(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009719a0 */
uint F_009719a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9719a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0096f980(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00971b30 */
uint F_00971b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x971b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0096f9f0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00971cc0 */
uint F_00971cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x971cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0096fa60(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00971e50 */
unsigned int F_00971e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x971e50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0096fad0(param_1,param_2,(param_2 - param_1) / 0xc,param_3);
  return 0;
}

/* ref: FUN_00971e90 */
uint F_00971e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x971e90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0096fc10(param_1,param_2,(param_2 - param_1) / 0x18,param_3);
  return uVar1;
}

/* ref: FUN_00971ed0 */
uint F_00971ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x971ed0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0096fd50(param_1,param_2,param_2 - param_1 >> 4,param_3);
  return uVar1;
}

/* ref: FUN_00971f00 */
uint F_00971f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x971f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0096fe40(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_00971f90 */
uint F_00971f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x971f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0096feb0(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_00972020 */
uint F_00972020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x972020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0096ff20(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_009720b0 */
uint F_009720b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9720b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0096ff90(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_00972140 */
unsigned int F_00972140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x972140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_00966cc0(param_2 + 2,param_3 + 2);
    *(undefined1 *)(param_2 + 6) = *(undefined1 *)(param_3 + 6);
  }
  return 0;
}

/* ref: FUN_00972170 */
unsigned int F_00972170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x972170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_00966cc0(param_2 + 2,param_3 + 2);
    *(undefined1 *)(param_2 + 6) = *(undefined1 *)(param_3 + 6);
  }
  return 0;
}

/* ref: FUN_009721a0 */
uint F_009721a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9721a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined4 *)F_00406bd0(0x1b4,0,uVar1,uVar2);
  if (this_00 != (undefined4 *)0x0) {
    F_008cc7b0(this_00,0,0x10);
    *this_00 = (*(undefined * PTR32 (*)[71])REFP(0x10d9b74));
    F_0055e2a0(this_00,0x4000010,1);
    F_005a8d00(this_00,param_2,param_3);
    uVar1 = F_0057fac0(this,this_00,param_1);
    if (uVar1 != 0) {
      return (uint)this_00;
    }
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
  }
  return 0;
}

/* ref: FUN_00972220 */
uint F_00972220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x972220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined4 *)F_00406bd0(0x1ac,0,uVar1,uVar2);
  if (this_00 != (undefined4 *)0x0) {
    F_008cc7b0(this_00,0,0x10);
    *this_00 = (*(undefined * PTR32 (*)[71])REFP(0x10d9c94));
    F_0055e2a0(this_00,0x4000010,1);
    F_005a8d00(this_00,param_2,param_3);
    uVar1 = F_0057fac0(this,this_00,param_1);
    if (uVar1 != 0) {
      return (uint)this_00;
    }
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
  }
  return 0;
}

/* ref: FUN_009722a0 */
uint F_009722a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9722a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined4 *)F_00406bd0(0x1ac,0,uVar1,uVar2);
  if (this_00 != (undefined4 *)0x0) {
    F_008cc7b0(this_00,0,0x10);
    *this_00 = (*(undefined * PTR32 (*)[71])REFP(0x10d9db4));
    this_00[0x6a] = 0;
    F_0055e2a0(this_00,0x4000010,1);
    F_005a8d00(this_00,param_2,param_3);
    uVar1 = F_0057fac0(this,this_00,param_1);
    if (uVar1 != 0) {
      return (uint)this_00;
    }
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
  }
  return 0;
}

/* ref: FUN_00972330 */
uint F_00972330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x972330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined4 *)F_00406bd0(0x1a8,0,uVar1,uVar2);
  if (this_00 != (undefined4 *)0x0) {
    F_008cc7b0(this_00,0,0x10);
    *(byte *)(this_00 + 0x3e) = *(byte *)(this_00 + 0x3e) | 0x80;
    *(byte *)((int)this_00 + 0xfb) = *(byte *)((int)this_00 + 0xfb) | 0x48;
    *(byte *)((int)this_00 + 0xf9) = *(byte *)((int)this_00 + 0xf9) | 2;
    *this_00 = (*(undefined * PTR32 (*)[71])REFP(0x10d9ff4));
    F_005a8d00(this_00,param_2,param_3);
    uVar1 = F_0057fac0(this,this_00,param_1);
    if (uVar1 != 0) {
      return (uint)this_00;
    }
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
  }
  return 0;
}

/* ref: FUN_009723c0 */
uint F_009723c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9723c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x530,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008cc990(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_00972430 */
uint F_00972430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x972430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x4a4,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008cca80(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_009724a0 */
uint F_009724a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9724a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x4e0,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008d0ca0(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_00972510 */
uint F_00972510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x972510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x544,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008cb8d0(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_00972580 */
uint F_00972580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x972580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x450,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008cbb80(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_009725f0 */
uint F_009725f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9725f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  ulonglong uVar5;
  
  piVar3 = param_1;
  if (param_1 != param_2) {
    piVar4 = param_1 + 2;
    do {
      iVar2 = *piVar4;
      piVar3 = (int *)0x0;
      if (iVar2 != 0) {
        uVar5 = F_00429760(iVar2,(piVar4[2] - iVar2 >> 3) * 8,400);
        piVar3 = (int *)uVar5;
      }
      *piVar4 = 0;
      piVar4[1] = 0;
      piVar4[2] = 0;
      piVar1 = piVar4 + 6;
      piVar4 = piVar4 + 8;
    } while (piVar1 != param_2);
  }
  return (uint)piVar3;
}

/* ref: FUN_00972640 */
uint F_00972640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x972640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_1;
  puVar2 = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      F_00966cc0(puVar2 + 2,puVar1 + 2);
      *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(puVar1 + 6);
    }
    puVar1 = puVar1 + 8;
    puVar2 = puVar2 + 8;
  } while (puVar1 != param_2);
  return (uint)puVar2;
}

/* ref: Client::UI2::Agent::AgentAchievement::vf0 */
uint F_00972690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x972690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009700c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009726c0 */
uint F_009726c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9726c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = F_004876d0((undefined *)((int)this + 0x10));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentLoot::vf0 */
uint F_00972700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x972700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  F_004876d0(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::vf0 */
uint F_00972760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x972760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008c4980(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCreditPlayer::vf0 */
uint F_00972790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x972790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008cba70(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCreditScroll::vf0 */
uint F_009727c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9727c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008cbd50(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonActionBarBase::vf0 */
uint F_009727f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9727f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10d9a54));
  F_00969ce0(this + 0x18c);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonActionBar::vf0 */
uint F_00972830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x972830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10d9a54));
  F_00969ce0(this + 0x18c);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonActionBarHorizontal::vf0 */
uint F_00972870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x972870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10d9a54));
  F_00969ce0(this + 0x18c);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonActionBarVertical::vf0 */
uint F_009728b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9728b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10d9a54));
  F_00969ce0(this + 0x18c);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonActionCross::vf0 */
uint F_009728f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9728f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10d9ed4));
  F_0055b840();
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10d9a54));
  F_00969ce0(this + 0x18c);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonActionBarCombo::vf0 */
uint F_00972940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x972940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10d9a54));
  F_00969ce0(this + 0x18c);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00972980 */
uint F_00972980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x972980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009721a0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00972b10 */
uint F_00972b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x972b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00972220(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00972ca0 */
uint F_00972ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x972ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009722a0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00972e30 */
uint F_00972e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x972e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00972330(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00972fc0 */
uint F_00972fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x972fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009723c0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00973150 */
uint F_00973150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x973150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00972430(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009732e0 */
uint F_009732e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9732e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009724a0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00973470 */
uint F_00973470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x973470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00972510(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00973600 */
uint F_00973600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x973600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00972580(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00973790 */
uint F_00973790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x973790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_009725f0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_009737b0 */
uint F_009737b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9737b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00972640(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_009737e0 */
uint F_009737e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9737e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_009725f0(param_1,param_2,(int)this + 0xc,param_2);
  return uVar1;
}

/* ref: FUN_00973800 */
uint F_00973800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x973800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00972640(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00973830 */
uint F_00973830(unsigned int gen_a0)
{
  GEN_ENTER(0x973830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_009725f0(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xffffffe0,400);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00973890 */
uint F_00973890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x973890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 5) < param_1) {
    iVar3 = param_1 * 0x20;
    uVar4 = F_004296a0(iVar3,0,400);
    F_00972640(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar4,(int)this + 0xc,0,iVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    uVar5 = 0;
    if (iVar2 != 0) {
      F_009725f0(iVar2,iVar1,(int)this + 0xc,iVar3);
      uVar6 = F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xffffffe0,400);
      uVar5 = (uint)uVar6;
    }
    *(uint *)((int)this + 4) = (iVar1 - iVar2 & 0xffffffe0U) + uVar4;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = iVar3 + uVar4;
  }
  return uVar5;
}

/* ref: Client::UI2::Agent::AgentMaterialize::vf14 */
unsigned int F_00973940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x973940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((char)uVar1 != '\0') || (*(int *)(this + 0x10) != 0)) {
    F_008e9cb0(this);
  }
  return 0;
}

/* ref: FUN_00973960 */
unsigned int F_00973960(unsigned int gen_a0)
{
  GEN_ENTER(0x973960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  if (*(int *)((int)this + 0x14) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x14),0);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    F_008c9200(this);
    *(undefined4 *)((int)this + 0xc) = 2;
    F_008e0390(this,1);
  }
  return 0;
}

/* ref: FUN_009739b0 */
uint F_009739b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9739b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_009725f0(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xffffffe0,400);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00973a10 */
uint F_00973a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x973a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 5;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 5;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00973890(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00973890(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00973a80 */
uint F_00973a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x973a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00973b50((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00973a90 */
uint F_00973a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x973a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00973b50((undefined *)((int)this + -8),param_1);
  return uVar1;
}

/* ref: FUN_00973aa0 */
uint F_00973aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x973aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00973b50((undefined *)((int)this + -0x22d30),param_1);
  return uVar1;
}

/* ref: FUN_00973ab0 */
uint F_00973ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x973ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar5 = *(undefined4 * PTR32 *)this, puVar5 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar3 = (undefined4 *)F_00973a10(this,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar5 = ((undefined4 *)GEN_TOP((((int)param_1 - (int)puVar5 & 0xffffffe0U) + *(int *)this)));
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar5;
      puVar2[1] = puVar5[1];
      uVar4 = F_00966cc0(puVar2 + 2,puVar5 + 2);
      uVar1 = *(undefined1 *)(puVar5 + 6);
      *(undefined1 *)(puVar2 + 6) = uVar1;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x20;
      return CONCAT31((int3)(uVar4 >> 8),uVar1);
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar3 = (undefined4 *)F_00973a10(this,1);
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *param_1;
      puVar5[1] = param_1[1];
      puVar3 = (undefined4 *)F_00966cc0(puVar5 + 2,param_1 + 2);
      *(undefined1 *)(puVar5 + 6) = *(undefined1 *)(param_1 + 6);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x20;
  return (uint)puVar3;
}

/* ref: Client::UI2::RaptureAtkModule::vf0 */
uint F_00973b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x973b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008ed970(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMateriaAttach::vf14 */
uint F_00973b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x973b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((char)uVar1 != '\0') || (*(int *)(this + 0x10) != 0)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    if (((char)uVar1 != '\0') &&
       ((uVar1 = *(uint *)(this + 0xc), (int)uVar1 < 6 || (7 < (int)uVar1)))) {
      *(undefined4 *)(this + 0x30) = 0xffffffff;
      *(undefined4 *)(this + 0x2c) = 0xffffffff;
      this[0x91] = (undefined1)0x1;
      uVar1 = F_008ecca0(this);
    }
  }
  return uVar1;
}

/* ref: FUN_00973bd0 */
uint F_00973bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x973bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00974240((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00973be0 */
uint F_00973be0(unsigned int gen_a0)
{
  GEN_ENTER(0x973be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  undefined * this_00;
  
  F_004876d0((undefined *)((int)this + 0x658));
  F_0042c880((undefined *)((int)this + 0x604));
  F_0042c880((undefined *)((int)this + 0x5b0));
  F_0042c880((undefined *)((int)this + 0x55c));
  F_0042c880((undefined *)((int)this + 0x508));
  F_00492c50((undefined *)((int)this + 0x4f0));
  F_00429760(*(undefined4 *)((int)this + 0x4f0),8,0x2c4);
  *(undefined4 *)((int)this + 0x4f0) = 0;
  iVar3 = *(int *)((int)this + 0x4e0);
  if (iVar3 != 0) {
    F_00429760(iVar3,(*(int *)((int)this + 0x4e8) - iVar3 >> 3) * 8,0x2c0);
  }
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4e4) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  F_00964ea0((undefined *)((int)this + 0x4d0));
  this_00 = (undefined *)((int)this + 0x4d0);
  iVar3 = 9;
  do {
    this_00 = (undefined *)((int)this_00 + -0x68);
    F_0042c880(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00964e10((undefined *)((int)this + 0xb0));
  F_00964e10((undefined *)((int)this + 0xa0));
  F_00964e10((undefined *)((int)this + 0x90));
  F_00964e10((undefined *)((int)this + 0x80));
  F_00964e10((undefined *)((int)this + 0x70));
  F_00964e10((undefined *)((int)this + 0x60));
  F_00964e10((undefined *)((int)this + 0x50));
  F_00964e10((undefined *)((int)this + 0x40));
  uVar1 = F_00964e10((undefined *)((int)this + 0x30));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: FUN_00973d40 */
uint F_00973d40(unsigned int gen_a0)
{
  GEN_ENTER(0x973d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_00492c50((undefined *)((int)this + 0x28));
  F_00429760(*(undefined4 *)((int)this + 0x28),8,0x2c4);
  *(undefined4 *)((int)this + 0x28) = 0;
  F_009463f0((undefined *)((int)this + 0x10));
  uVar3 = F_00429760(*(undefined4 *)((int)this + 0x10),8,400);
  uVar2 = (uint)uVar3;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00973dc0 */
uint F_00973dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x973dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00969840((undefined *)((int)this + 0x1ae0));
  F_0042c880((undefined *)((int)this + 0x1a8c));
  iVar3 = *(int *)((int)this + 0x1a7c);
  if (iVar3 != 0) {
    F_00429760(iVar3,((*(int *)((int)this + 0x1a84) - iVar3) / 0x34) * 0x34,400);
  }
  *(undefined4 *)((int)this + 0x1a7c) = 0;
  *(undefined4 *)((int)this + 0x1a80) = 0;
  *(undefined4 *)((int)this + 0x1a84) = 0;
  iVar3 = *(int *)((int)this + 0x1a6c);
  if (iVar3 != 0) {
    F_00429760(iVar3,((*(int *)((int)this + 0x1a74) - iVar3) / 0x34) * 0x34,400);
  }
  *(undefined4 *)((int)this + 0x1a6c) = 0;
  *(undefined4 *)((int)this + 0x1a70) = 0;
  *(undefined4 *)((int)this + 0x1a74) = 0;
  iVar3 = 0xf;
  pvVar4 = (undefined *)((int)this + 0x18dc);
  do {
    F_0042c880((undefined *)((int)pvVar4 + -0x5c));
    F_0042c880((undefined *)((int)pvVar4 + -0xb0));
    iVar3 = iVar3 + -1;
    pvVar4 = (undefined *)((int)pvVar4 + -0xb0);
  } while (-1 < iVar3);
  F_00492c50((undefined *)((int)this + 0xda0));
  F_00429760(*(undefined4 *)((int)this + 0xda0),8,0x2c4);
  *(undefined4 *)((int)this + 0xda0) = 0;
  F_0042c880((undefined *)((int)this + 0xd4c));
  F_0042c880((undefined *)((int)this + 0xcf8));
  pvVar4 = (undefined *)((int)this + 0xcec);
  iVar3 = 1;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x54);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar4 = (undefined *)((int)this + 0xc44);
  iVar3 = 1;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x54);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar4 = (undefined *)((int)this + 0xb9c);
  iVar3 = 1;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x54);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_0042c880((undefined *)((int)this + 0xaa0));
  iVar3 = 7;
  pvVar4 = (undefined *)((int)this + 0xa28);
  do {
    F_0042c880((undefined *)((int)pvVar4 + -0x5c));
    F_0042c880((undefined *)((int)pvVar4 + -0xb0));
    iVar3 = iVar3 + -1;
    pvVar4 = (undefined *)((int)pvVar4 + -0xb0);
  } while (-1 < iVar3);
  F_00955290((undefined *)((int)this + 0x420),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x424),
               *(undefined4 * PTR32 *)((int)this + 0x424));
  F_00429760(*(undefined4 *)((int)this + 0x424),0x18,400);
  F_0042c880((undefined *)((int)this + 0x3c0));
  F_0042c880((undefined *)((int)this + 0x36c));
  F_0042c880((undefined *)((int)this + 0x318));
  F_0042c880((undefined *)((int)this + 0x280));
  F_00a4b160((undefined *)((int)this + 0xd4));
  uVar5 = F_0042c880((undefined *)((int)this + 0x70));
  uVar2 = (uint)uVar5;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentItemDetail::vf2 */
unsigned int F_00974010(void)
{
  GEN_ENTER(0x974010u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::Agent::AgentActionDetail::vf2 */
unsigned int F_00974020(void)
{
  GEN_ENTER(0x974020u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00974030 */
uint F_00974030(unsigned int gen_a0)
{
  GEN_ENTER(0x974030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10da4b4));
  F_00492c50((undefined *)((int)this + 0x28));
  uVar3 = F_00429760(*(undefined4 *)((int)this + 0x28),8,0x2c4);
  uVar2 = (uint)uVar3;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentActionDetail::vf0 */
uint F_009740a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9740a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00974030(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009740d0 */
uint F_009740d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9740d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_00492c50((undefined *)((int)this + 0x10));
  uVar3 = F_00429760(*(undefined4 *)((int)this + 0x10),8,0x2c4);
  uVar2 = (uint)uVar3;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00974130 */
uint F_00974130(unsigned int gen_a0)
{
  GEN_ENTER(0x974130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_00492c50((undefined *)((int)this + 0xc));
  uVar3 = F_00429760(*(undefined4 *)((int)this + 0xc),8,0x2c4);
  uVar2 = (uint)uVar3;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf22 */
uint F_00974190(unsigned int gen_a0)
{
  GEN_ENTER(0x974190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1fb4);
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf23 */
unsigned int F_009741a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9741a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf24 */
unsigned int F_009741b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9741b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf25 */
uint F_009741c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9741c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1fd8) = param_2;
  return param_2;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf27 */
byte F_009741d0(void)
{
  GEN_ENTER(0x9741d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf30 */
uint F_009741e0(void)
{
  GEN_ENTER(0x9741e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf32 */
unsigned int F_009741f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9741f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf37 */
unsigned int F_00974200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00974210 */
uint F_00974210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00974420((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00974220 */
uint F_00974220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00974420((undefined *)((int)this + -0x10),param_1);
  return uVar1;
}

/* ref: FUN_00974230 */
uint F_00974230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00974420((undefined *)((int)this + -0x14),param_1);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentConfigKey::vf0 */
uint F_00974240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008ef040(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentActionMenu::vf0 */
uint F_00974270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00973be0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentContentsFinder::vf0 */
uint F_009742a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9742a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008ef5e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentHowToNotice::vf0 */
uint F_009742d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9742d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00973d40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentHUD::vf0 */
uint F_00974300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00973dc0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentItemDetail::vf0 */
uint F_00974330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008f0200(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentReturn::vf0 */
uint F_00974360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009740d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentTeleport::vf0 */
uint F_00974390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00974130(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf0 */
uint F_009743c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9743c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008f0650(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCreate::vf0 */
uint F_009743f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9743f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10da644));
  F_008f0650(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentLobby::vf0 */
uint F_00974420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008f0980(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf0 */
uint F_00974450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10da764));
  F_008f0650(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf0 */
uint F_00974480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10da81c));
  F_008f0650(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009744e0 */
uint F_009744e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9744e0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_009744f0 */
uint F_009744f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9744f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0042cbc0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00974510 */
uint F_00974510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974510u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_004142d0(in_ecx,param_2);
  return in_ecx;
}

/* ref: Application::Network::PacketReceiverCallbackInterface::vf0 */
uint F_00974550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10da8f4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00974660 */
uint F_00974660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2a8) = param_2;
  return param_2;
}

/* ref: FUN_00974670 */
uint F_00974670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2ac) = param_2;
  return param_2;
}

/* ref: FUN_009746b0 */
uint F_009746b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9746b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  uVar1 = param_1[0xb];
  *(uint *)((int)this + 0x2c) = uVar1;
  return uVar1;
}

/* ref: FUN_00974700 */
unsigned int F_00974700(unsigned int gen_a0)
{
  GEN_ENTER(0x974700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c30630(*(undefined * PTR32 *)((int)this + 4));
  return 0;
}

/* ref: FUN_00974710 */
uint F_00974710(unsigned int gen_a0)
{
  GEN_ENTER(0x974710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(int *)(in_ecx + 4) != 0) {
    bVar1 = F_00c2bff0(*(int *)(in_ecx + 4));
    return CONCAT31(extraout_var,bVar1);
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00974740 */
uint F_00974740(unsigned int gen_a0)
{
  GEN_ENTER(0x974740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    uVar1 = F_00c2c000(*(undefined * PTR32 *)((int)this + 4));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00974760 */
unsigned int F_00974760(unsigned int gen_a0)
{
  GEN_ENTER(0x974760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00c2e910(*(undefined * PTR32 *)((int)this + 4));
    return 0;
  }
  return 0;
}

/* ref: FUN_00974770 */
uint F_00974770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    uVar1 = F_00c2f4b0(*(undefined * PTR32 *)((int)this + 4),param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00974790 */
byte F_00974790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    bVar1 = F_00c2bcf0(*(undefined * PTR32 *)((int)this + 4),param_1);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_009747b0 */
byte F_009747b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9747b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    bVar1 = F_00c2e990(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_009747d0 */
byte F_009747d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9747d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(int *)(in_ecx + 4) != 0) {
    bVar1 = F_00c2bd30(*(int *)(in_ecx + 4),param_2);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_009747f0 */
byte F_009747f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9747f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if (*(int *)((int)this + 4) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c) ^ (uint)(uint)(gen_frame + 0x10c));
    return 0;
  }
  if ((char)param_6 != '\0') {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x60)),param_3);
    F_0042cbc0(((undefined1 *)(gen_frame + 0xc)),param_2);
    F_0042cbc0(((undefined1 *)(gen_frame + 0xb4)),param_1);
    bVar1 = F_00c2cdb0(*(undefined * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0xb4)),((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x60)),param_4,param_5);
    F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
    F_0042c880(((undefined1 *)(gen_frame + 0xc)));
    F_0042c880(((undefined1 *)(gen_frame + 0x60)));
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return bVar1;
  }
  F_0042cbc0(((undefined1 *)(gen_frame + 0xb4)),param_3);
  F_0042cbc0(((undefined1 *)(gen_frame + 0xc)),param_2);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x60)),param_1);
  bVar1 = F_00c2cc10(*(undefined * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0xb4)),param_4,param_5);
  F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return bVar1;
}

/* ref: FUN_00974950 */
uint F_00974950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x974950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    bVar1 = F_00c2cf70(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5);
    return CONCAT31(extraout_var,bVar1);
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00974980 */
byte F_00974980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x974980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    bVar1 = F_00c2d1d0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_009749b0 */
byte F_009749b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9749b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    bVar1 = F_00c2d0a0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_009749e0 */
byte F_009749e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9749e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)this + 4) != 0) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_1);
    bVar1 = F_00c2e290(*(undefined * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x4)),param_2,param_3,param_4);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_00974a60 */
byte F_00974a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x974a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)this + 4) != 0) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_2);
    bVar1 = F_00c2d3b0(*(undefined * PTR32 *)((int)this + 4),param_1,((undefined1 *)(gen_frame + 0x4)),param_3,param_4,param_5);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_00974ae0 */
byte F_00974ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x974ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    bVar1 = F_00c2d570(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00974b20 */
byte F_00974b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x974b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    bVar1 = F_00c2e2b0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00974b60 */
byte F_00974b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x974b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)this + 4) != 0) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_4);
    bVar1 = F_00c2d730(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x4)),param_5,param_6,
                         param_7);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_00974bf0 */
byte F_00974bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x974bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)this + 4) != 0) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_4);
    bVar1 = F_00c2d8e0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x4)),param_5,param_6)
    ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_00974c70 */
byte F_00974c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x974c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)this + 4) != 0) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_4);
    bVar1 = F_00c2da80(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x4)),param_5,param_6)
    ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_00974cf0 */
byte F_00974cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x974cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)this + 4) != 0) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_5);
    bVar1 = F_00c2dc20(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,((undefined1 *)(gen_frame + 0x4)),param_6,
                         param_7);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_00974d70 */
byte F_00974d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x974d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00c2c040(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3);
  }
  return 1;
}

/* ref: FUN_00974da0 */
byte F_00974da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x974da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00c2c060(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3);
  }
  return 1;
}

/* ref: FUN_00974dd0 */
byte F_00974dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x974dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00c2c080(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3);
  }
  return 1;
}

/* ref: FUN_00974e00 */
byte F_00974e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x974e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00c2c0a0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3);
  }
  return 1;
}

/* ref: FUN_00974e30 */
byte F_00974e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x974e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00c2c0c0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3);
  }
  return 1;
}

/* ref: FUN_00974e60 */
byte F_00974e60(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x974e60u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)(param_1 + 4) != 0) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_7);
    F_00c2b430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_4,param_5,param_6,((undefined1 *)(gen_frame + 0x4)),
                 param_8);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: FUN_00974ee0 */
byte F_00974ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x974ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)this + 4) != 0) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_3);
    F_00c2b5d0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,((undefined1 *)(gen_frame + 0x4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: FUN_00974f40 */
byte F_00974f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x974f40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if (*(int *)((int)this + 4) != 0) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x0)),param_2);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x54)),param_1);
    F_00c2b700(*(undefined * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x54)));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return 1;
}

/* ref: FUN_00974fc0 */
byte F_00974fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x974fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)this + 4) != 0) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_1);
    F_00c2b8c0(*(undefined * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: FUN_00975010 */
byte F_00975010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x975010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00c2b9f0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2);
  }
  return 1;
}

/* ref: FUN_00975030 */
byte F_00975030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x975030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00c2ba80(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3);
  }
  return 1;
}

/* ref: FUN_00975060 */
byte F_00975060(unsigned int gen_a0)
{
  GEN_ENTER(0x975060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00c2bb20(*(undefined * PTR32 *)((int)this + 4));
  }
  return 1;
}

/* ref: FUN_00975070 */
byte F_00975070(unsigned int gen_a0)
{
  GEN_ENTER(0x975070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    bVar1 = F_00c2bba0(*(undefined * PTR32 *)((int)this + 4));
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00975080 */
byte F_00975080(unsigned int gen_a0)
{
  GEN_ENTER(0x975080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    bVar1 = F_00c2bc20(*(undefined * PTR32 *)((int)this + 4));
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00975090 */
uint F_00975090(unsigned int gen_a0)
{
  GEN_ENTER(0x975090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 4) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 4) + 0x358)));
  }
  return 0;
}

/* ref: FUN_009750b0 */
uint F_009750b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9750b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 4) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 4) + 0x35c)));
  }
  return 0;
}

/* ref: FUN_009750d0 */
uint F_009750d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9750d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 4) != 0) {
    return (int)*((float *)GEN_TOP((*(int *)(in_ecx + 4) + 0x3b8)));
  }
  return 0;
}

/* ref: FUN_009750f0 */
uint F_009750f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9750f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 4);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x2a8) = param_2;
  }
  return uVar1;
}

/* ref: FUN_00975110 */
uint F_00975110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975110u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 4);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x2ac) = param_2;
  }
  return uVar1;
}

/* ref: FUN_00975140 */
uint F_00975140(unsigned int gen_a0)
{
  GEN_ENTER(0x975140u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10da92c));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00975170 */
byte F_00975170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x975170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 * puVar4;
  bool bVar5;
  
  (*(uint *)(gen_frame + 0x388)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38c);
  iVar1 = *(int *)((int)this + 4);
  ((byte *)(gen_frame + 0x4))[0] = 0;
  ((byte *)(gen_frame + 0x4))[1] = 0;
  ((byte *)(gen_frame + 0x4))[2] = 0;
  ((byte *)(gen_frame + 0x4))[3] = 0;
  bVar5 = false;
  if (iVar1 == 0) {
    F_0042b630(((undefined1 *)(gen_frame + 0xb8)));
    F_0042b630(((undefined1 *)(gen_frame + 0x110)));
    F_0042b630(((undefined1 *)(gen_frame + 0x174)));
    F_0042b630(((undefined1 *)(gen_frame + 0x1c8)));
    F_0042b630(((char * PTR32 *)(gen_frame + 0x220)));
    F_0042b630(((char * PTR32 *)(gen_frame + 0x274)));
    F_0042b630(((undefined1 *)(gen_frame + 0x2c8)));
    uVar3 = F_00414500(param_2,0x23);
    (*(undefined4 *)(gen_frame + 0xb4)) = *(undefined4 *)(uVar3 + 0x14);
    uVar3 = F_00414500(param_2,0x22);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x334)),*(undefined4 *)(uVar3 + 0x14));
    F_0042ccf0(((undefined1 *)(gen_frame + 0xb8)),((undefined1 *)(gen_frame + 0x334)));
    F_0042c880(((undefined1 *)(gen_frame + 0x334)));
    uVar3 = F_00414500(param_2,0x25);
    (*(undefined4 *)(gen_frame + 0x10c)) = *(undefined4 *)(uVar3 + 0x14);
    uVar3 = F_00414500(param_2,0x24);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x334)),*(undefined4 *)(uVar3 + 0x14));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x110)),((undefined1 *)(gen_frame + 0x334)));
    F_0042c880(((undefined1 *)(gen_frame + 0x334)));
    uVar3 = F_00414500(param_2,0x26);
    (*(undefined4 *)(gen_frame + 0x164)) = *(undefined4 *)(uVar3 + 0x14);
    uVar3 = F_00414500(param_2,0x27);
    (*(undefined4 *)(gen_frame + 0x168)) = *(undefined4 *)(uVar3 + 0x14);
    uVar3 = F_00414500(param_2,0x28);
    (*(undefined4 *)(gen_frame + 0x16c)) = *(undefined4 *)(uVar3 + 0x14);
    uVar3 = F_00414500(param_2,0x29);
    (*(undefined4 *)(gen_frame + 0x170)) = *(undefined4 *)(uVar3 + 0x14);
    uVar3 = F_00414500(param_2,0x2b);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x334)),*(undefined4 *)(uVar3 + 0x14));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x1c8)),((undefined1 *)(gen_frame + 0x334)));
    F_0042c880(((undefined1 *)(gen_frame + 0x334)));
    uVar3 = F_00414500(param_2,0x2c);
    (*(undefined4 *)(gen_frame + 0x21c)) = *(undefined4 *)(uVar3 + 0x14);
    uVar3 = F_00414500(param_2,0x2e);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x334)),*(undefined4 *)(uVar3 + 0x14));
    F_0042ccf0(((char * PTR32 *)(gen_frame + 0x220)),((undefined1 *)(gen_frame + 0x334)));
    F_0042c880(((undefined1 *)(gen_frame + 0x334)));
    uVar3 = F_00414500(param_2,0x32);
    bVar5 = *(int *)(uVar3 + 0x14) == 0;
    if (bVar5) {
      uVar3 = F_00414500(param_2,0x2f);
      uVar3 = F_0042cbc0(((undefined1 *)(gen_frame + 0x60)),*(undefined4 *)(uVar3 + 0x14));
    }
    else {
      uVar3 = F_0042cc20(((byte *)(gen_frame + 0x4)) + 8,&REFG(undefined, 0x10da8e0),REFG(undefined4, 0x108cc50));
    }
    F_0042cbc0(((undefined1 *)(gen_frame + 0x334)),uVar3);
    F_0042ccf0(((char * PTR32 *)(gen_frame + 0x274)),((undefined1 *)(gen_frame + 0x334)));
    F_0042c880(((undefined1 *)(gen_frame + 0x334)));
    if (bVar5) {
      F_0042c880(((undefined1 *)(gen_frame + 0x60)));
    }
    else {
      F_0042c880(((byte *)(gen_frame + 0x4)) + 8);
    }
    uVar3 = F_00414500(param_2,0x33);
    (*(undefined4 *)(gen_frame + 0x32c)) = *(undefined4 *)(uVar3 + 0x14);
    uVar3 = F_00414500(param_2,0x34);
    (*(undefined4 *)(gen_frame + 0x330)) = *(undefined4 *)(uVar3 + 0x14);
    uVar3 = F_00414500(param_2,0x35);
    (*(undefined4 *)(gen_frame + 0x324)) = *(undefined4 *)(uVar3 + 0x14);
    uVar3 = F_00414500(param_2,0x36);
    (*(undefined4 *)(gen_frame + 0x328)) = *(undefined4 *)(uVar3 + 0x14);
    F_0042e170(((undefined1 *)(gen_frame + 0x334)),L"00000");
    bVar2 = F_0042b660(((char * PTR32 *)(gen_frame + 0x220)),((undefined1 *)(gen_frame + 0x334)));
    if ((bVar2 == 0) || (((byte *)(gen_frame + 0x4))[7] = 1, *((char * PTR32 *)(gen_frame + 0x274))[0] != '\0')) {
      ((byte *)(gen_frame + 0x4))[7] = 0;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x334)));
    if (((byte *)(gen_frame + 0x4))[7] == 0) {
      if ((*((char * PTR32 *)(gen_frame + 0x220))[0] == '\0') || ((*(undefined1 *)(gen_frame + 0x320)) = 1, *((char * PTR32 *)(gen_frame + 0x274))[0] == '\0')) {
        (*(undefined1 *)(gen_frame + 0x320)) = 0;
      }
    }
    else {
      (*(undefined1 *)(gen_frame + 0x320)) = 1;
    }
    uVar3 = F_00414500(param_2,0x30);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x334)),*(undefined4 *)(uVar3 + 0x14));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x2c8)),((undefined1 *)(gen_frame + 0x334)));
    F_0042c880(((undefined1 *)(gen_frame + 0x334)));
    (*(undefined4 *)(gen_frame + 0x31c)) = 0;
    this_00 = (undefined *)F_00406b90(0x3f0,0,0);
    if (this_00 == (undefined *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00c2ec70(this_00,&(*(undefined4 *)(gen_frame + 0xb4)));
    }
    *(uint *)((int)this + 4) = uVar3;
    puVar4 = (undefined4 *)F_00406b90(0x10,0,0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = (*(undefined * PTR32 (*)[3])REFP(0x10da8f4));
      F_00ba5190(puVar4 + 1,this);
      *puVar4 = (*(undefined * PTR32 (*)[3])REFP(0x10da91c));
      puVar4[1] = (*(undefined * PTR32 (*)[2])REFP(0x10da910));
      puVar4[2] = (*(undefined * PTR32 (*)[2])REFP(0x10da904));
    }
    *(undefined4 * PTR32 *)((int)this + 8) = puVar4;
    F_00c2b160(*(undefined * PTR32 *)((int)this + 4),puVar4);
    F_0042c880(((undefined1 *)(gen_frame + 0x2c8)));
    F_0042c880(((char * PTR32 *)(gen_frame + 0x274)));
    F_0042c880(((char * PTR32 *)(gen_frame + 0x220)));
    F_0042c880(((undefined1 *)(gen_frame + 0x1c8)));
    F_0042c880(((undefined1 *)(gen_frame + 0x174)));
    F_0042c880(((undefined1 *)(gen_frame + 0x110)));
    F_0042c880(((undefined1 *)(gen_frame + 0xb8)));
    bVar5 = *(int *)((int)this + 4) == 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x388)) ^ (uint)(uint)(gen_frame + 0x38c));
  return !bVar5;
}

/* ref: FUN_00975570 */
unsigned int F_00975570(unsigned int gen_a0)
{
  GEN_ENTER(0x975570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined4 * puVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00c2e7f0(*(undefined * PTR32 *)((int)this + 4));
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    if (this_00 != (undefined *)0x0) {
      F_00c2ef00(this_00);
      F_00406ad0(this_00);
      *(undefined4 *)((int)this + 4) = 0;
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
    *(undefined4 *)((int)this + 4) = 0;
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 8) = 0;
    }
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return 0;
}

/* ref: FUN_009755c0 */
byte F_009755c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9755c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
    F_004142d0(&(*(undefined4 * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)&gen_args[1]));
    F_00c2b3a0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  }
  return 1;
}

/* ref: FUN_009755f0 */
unsigned int F_009755f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9755f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    F_00c2e1f0(this_00,&(*(undefined4 *)(gen_frame + 0xc)));
    *param_1 = (*(undefined4 *)(gen_frame + 0xc));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x10));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x14));
    param_1[3] = (*(undefined4 *)(gen_frame + 0x18));
    param_1[4] = (*(undefined4 *)(gen_frame + 0x1c));
    param_1[5] = (*(undefined4 *)(gen_frame + 0x20));
    param_1[6] = (*(undefined4 *)(gen_frame + 0x24));
    param_1[7] = (*(undefined4 *)(gen_frame + 0x28));
    param_1[8] = (*(undefined4 *)(gen_frame + 0x2c));
    param_1[9] = (*(undefined4 *)(gen_frame + 0x30));
    param_1[10] = (*(undefined4 *)(gen_frame + 0x34));
    param_1[0xb] = (*(undefined4 *)(gen_frame + 0x38));
  }
  return 0;
}

/* ref: FUN_00975680 */
uint F_00975680(unsigned int gen_a0)
{
  GEN_ENTER(0x975680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x30c)));
  }
  uVar1 = F_0046ff40();
  return (uint)(uVar1 / 1000);
}

/* ref: FUN_009756b0 */
ulonglong F_009756b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9756b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    return (ulonglong)*(uint *)(iVar1 + 0x30c) * 1000 + (ulonglong)*(uint *)(iVar1 + 0x310);
  }
  uVar2 = F_0046ff40();
  return uVar2 & 0xffffffff;
}

/* ref: FUN_009756e0 */
uint F_009756e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9756e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10da8f4));
  F_00ba5190(in_ecx + 1,param_2);
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10da91c));
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x10da910));
  in_ecx[2] = (*(undefined * PTR32 (*)[2])REFP(0x10da904));
  return (uint)in_ecx;
}

/* ref: FUN_00975720 */
unsigned int F_00975720(unsigned int gen_a0)
{
  GEN_ENTER(0x975720u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10da91c));
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x10da910));
  in_ecx[2] = (*(undefined * PTR32 (*)[2])REFP(0x10da904));
  F_00ba51c0(in_ecx + 1);
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10da8f4));
  return 0;
}

/* ref: Client::Network::NetworkModulePacketReceiverCallback::vf1 */
uint F_00975750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x975750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 4))))
                    (this + 4,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Network::NetworkModulePacketReceiverCallback::vf2 */
uint F_00975760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x975760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 8) + 4))))
                    (this + 8,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Network::NetworkModulePacketReceiverCallback::vf0 */
uint F_00975770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10da91c));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x10da910));
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x10da904));
  F_00ba51c0(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10da8f4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009757b0 */
uint F_009757b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9757b0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 4);
  F_0042b630(in_ecx + 0x5c);
  F_0042b630(in_ecx + 0xc0);
  F_0042b630(in_ecx + 0x114);
  F_0042b630(in_ecx + 0x16c);
  F_0042b630(in_ecx + 0x1c0);
  F_0042b630(in_ecx + 0x214);
  return in_ecx;
}

/* ref: FUN_00975800 */
uint F_00975800(unsigned int gen_a0)
{
  GEN_ENTER(0x975800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x214));
  F_0042c880((undefined *)((int)this + 0x1c0));
  F_0042c880((undefined *)((int)this + 0x16c));
  F_0042c880((undefined *)((int)this + 0x114));
  F_0042c880((undefined *)((int)this + 0xc0));
  F_0042c880((undefined *)((int)this + 0x5c));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: FUN_00975850 */
uint F_00975850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c2ef00(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00975880 */
uint F_00975880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00975770((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00975890 */
uint F_00975890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00975770((undefined *)((int)this + -8),param_1);
  return uVar1;
}

/* ref: Client::Network::NetworkModuleProxy::vf0 */
uint F_009758d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9758d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10da92c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00975900 */
unsigned int F_00975900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975900u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0x65;
  puVar1 = param_1;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00975920 */
unsigned int F_00975920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0xb;
  puVar1 = param_1;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00975940 */
unsigned int F_00975940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0x125;
  puVar1 = param_1;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00975960 */
uint F_00975960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975960u, gen_a0, gen_a1, 0u, 0u);
  int * in_edx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *in_edx;
  iVar2 = iVar1 + 1;
  *in_edx = iVar2;
  if (0x1f < iVar2) {
    *in_edx = 0;
  }
  return iVar1 * 0x194 + param_2;
}

/* ref: FUN_00975980 */
uint F_00975980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975980u, gen_a0, gen_a1, 0u, 0u);
  int * in_edx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *in_edx;
  iVar2 = iVar1 + 1;
  *in_edx = iVar2;
  if (0x1f < iVar2) {
    *in_edx = 0;
  }
  return iVar1 * 0x2c + param_2;
}

/* ref: FUN_009759a0 */
uint F_009759a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9759a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_edx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *in_edx;
  iVar2 = iVar1 + 1;
  *in_edx = iVar2;
  if (0x1f < iVar2) {
    *in_edx = 0;
  }
  return iVar1 * 0x494 + param_2;
}

/* ref: FUN_009759f0 */
uint F_009759f0(void)
{
  GEN_ENTER(0x9759f0u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  iVar1 = REFG(int, 0x1493c1c) * 0x2c;
  REFG(int, 0x1493c1c) = REFG(int, 0x1493c1c) + 1;
  if (0x1f < REFG(int, 0x1493c1c)) {
    REFG(int, 0x1493c1c) = 0;
  }
  return (uint)(&REFG(undefined, 0x1496ea8) + iVar1);
}

/* ref: FUN_00975a50 */
uint F_00975a50(unsigned int gen_a0)
{
  GEN_ENTER(0x975a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  HANDLE pvVar1;
  
  F_00509590(this);
  F_004cefe0((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10da978));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10da95c));
  gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  *(DWORD *)((int)this + 0x20) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  *(LONG *)((int)this + 0x24) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  *(undefined8 *)((int)this + 0x30) = 0;
  *(DWORD *)((int)this + 0x28) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  *(LONG *)((int)this + 0x2c) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x38) = pvVar1;
  F_004cf0c0((undefined *)((int)this + 0x48),4,0x21,0);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) =
       (*(undefined * PTR32 (*)[1])REFP(0x10da944));
  F_004cf0c0((undefined *)((int)this + 0x6c),4,0x21,0);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) =
       (*(undefined * PTR32 (*)[1])REFP(0x10da94c));
  F_004cf0c0((undefined *)((int)this + 0x90),4,0x21,0);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) =
       (*(undefined * PTR32 (*)[1])REFP(0x10da954));
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  *(DWORD *)((int)this + 0x28) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  *(LONG *)((int)this + 0x2c) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
  LOCK();
  *(undefined4 *)((int)this + 0xb4) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((int)this + 0xb8) = 0;
  UNLOCK();
  return (uint)this;
}

/* ref: FUN_00975b50 */
uint F_00975b50(unsigned int gen_a0)
{
  GEN_ENTER(0x975b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10da978));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10da95c));
  *(undefined4 *)((int)this + 0x90) =
       (*(undefined * PTR32 (*)[1])REFP(0x10da954));
  F_004cf160((undefined4 *)((int)this + 0x90));
  *(undefined4 *)((int)this + 0x6c) =
       (*(undefined * PTR32 (*)[1])REFP(0x10da94c));
  F_004cf160((undefined4 *)((int)this + 0x6c));
  *(undefined4 *)((int)this + 0x48) =
       (*(undefined * PTR32 (*)[1])REFP(0x10da944));
  F_004cf160((undefined4 *)((int)this + 0x48));
  gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x38));
  F_004cf880((undefined *)((int)this + 4));
  uVar1 = F_005095f0(this);
  return uVar1;
}

/* ref: FUN_00975bb0 */
uint F_00975bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x975bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(uint *)((int)this + 0x44) = (uint)(*(int *)(REFG(int, 0x137104c) + 0x127c) != 0);
  uVar1 = F_004cf9e0((undefined *)((int)this + 4),0,0,0,"Input Thread");
  *(undefined4 *)((int)this + 0x3c) = 0;
  return uVar1;
}

/* ref: FUN_00975bf0 */
uint F_00975bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x975bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  
  if (*(int *)((int)this + 0x40) == 0) {
    in_EAX = gen_imp_SetEvent(*(HANDLE *)((int)this + 0x38));
  }
  return in_EAX;
}

/* ref: FUN_00975c10 */
uint F_00975c10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x975c10u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  
  F_006b89d0(REFG(undefined4, 0x1488338),param_2,param_3,param_4,param_5);
  if (*(int *)(param_1 + 0x44) == 0) {
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[8] = 0;
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    puVar2 = param_3 + 9;
    for (iVar1 = 0x5c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00975c70 */
uint F_00975c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x975c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint * puVar4;
  
  puVar1 = (undefined4 *)((int)this + 0xb4);
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = *puVar1;
  UNLOCK();
  *param_1 = uVar2;
  puVar4 = (uint *)((int)this + 0xb8);
  LOCK();
  uVar3 = *puVar4;
  *puVar4 = *puVar4;
  UNLOCK();
  *param_2 = uVar3;
  return uVar3;
}

/* ref: FUN_00975ca0 */
uint F_00975ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x975ca0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b8a2f0(*param_1,param_1[1]);
  return uVar1;
}

/* ref: FUN_00975cc0 */
byte F_00975cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x975cc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((((*(uint *)(param_1 + 0x14) & 0xffff) == 0) && ((*(uint *)(param_1 + 0x18) & 0xffff) == 0))
     && ((*(uint *)(param_1 + 0x1c) & 0xffff) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00975cf0 */
byte F_00975cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x975cf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((((*(byte *)(param_1 + 0x10) & 0x1f) == 0) && ((*(byte *)(param_1 + 0x18) & 0x1f) == 0)) &&
     ((*(byte *)(param_1 + 0x1c) & 0x1f) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00975d10 */
byte F_00975d10(unsigned int gen_a0)
{
  GEN_ENTER(0x975d10u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  return *param_1 != '\0';
}

/* ref: FUN_00975d20 */
byte F_00975d20(unsigned int gen_a0)
{
  GEN_ENTER(0x975d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x3c) == 0) {
    *(undefined4 *)((int)this + 0x3c) = 1;
    if (*(int *)((int)this + 0x40) == 0) {
      gen_imp_SetEvent(*(HANDLE *)((int)this + 0x38));
    }
    return 0;
  }
  return *(int *)((int)this + 0x40) != 0;
}

/* ref: FUN_00975d50 */
uint F_00975d50(unsigned int gen_a0)
{
  GEN_ENTER(0x975d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x680];
  float fVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int * piVar7;
  int * piVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  undefined * pvVar12;
  int iVar13;
  uint * puVar14;
  char * pcVar15;
  uint * puVar16;
  int * piVar17;
  
  (*(uint *)(gen_frame + 0x678)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x67c);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  F_00976f30(((uint *)(gen_frame + 0x4b8)));
  F_00a1b190(((int *)(gen_frame + 0x64c)));
  F_00a1b0d0(((char *)(gen_frame + 0x24)));
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0xc)));
  uVar4 = (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.HighPart;
  uVar3 = (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.LowPart;
  DVar11 = (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.LowPart - *(uint *)((int)this + 0x28);
  iVar13 = ((*(LARGE_INTEGER *)(gen_frame + 0xc)).s.HighPart - *(int *)((int)this + 0x2c)) -
           (uint)((*(LARGE_INTEGER *)(gen_frame + 0xc)).s.LowPart < *(uint *)((int)this + 0x28));
  (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.LowPart = DVar11;
  (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.HighPart = iVar13;
  *(undefined4 *)((int)this + 0x28) = uVar3;
  *(undefined4 *)((int)this + 0x2c) = uVar4;
  fVar1 = ((float)GEN_TOF(((float10)(longlong)CONCAT44(iVar13,DVar11) /
                 (float10)*(longlong *)((int)this + 0x20))));
  (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.HighPart = (LONG)gen_fl2bits(fVar1);
  F_006b89d0(REFG(undefined4, 0x1488338),fVar1,((uint *)(gen_frame + 0x4b8)),((int *)(gen_frame + 0x64c)),((char *)(gen_frame + 0x24)));
  if (*(int *)((int)this + 0x44) == 0) {
    ((uint *)(gen_frame + 0x4b8))[4] = 0;
    ((uint *)(gen_frame + 0x4b8))[5] = 0;
    ((uint *)(gen_frame + 0x4b8))[6] = 0;
    ((uint *)(gen_frame + 0x4b8))[7] = 0;
    ((uint *)(gen_frame + 0x4b8))[8] = 0;
    ((uint *)(gen_frame + 0x4b8))[0] = 0;
    ((uint *)(gen_frame + 0x4b8))[1] = 0;
    ((uint *)(gen_frame + 0x4b8))[2] = 0;
    ((uint *)(gen_frame + 0x4b8))[3] = 0;
    puVar14 = ((uint *)(gen_frame + 0x4b8)) + 9;
    for (iVar13 = 0x5c; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
  }
  pvVar12 = (undefined *)((int)this + 0x48);
  uVar5 = F_004cf460(pvVar12);
  if ((int)uVar5 < 0x20) {
    if ((((((uint *)(gen_frame + 0x4b8))[5] & 0xffff) == 0) && ((((uint *)(gen_frame + 0x4b8))[6] & 0xffff) == 0)) &&
       ((((uint *)(gen_frame + 0x4b8))[7] & 0xffff) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((uVar5 == 0) || (bVar2)) {
      iVar13 = REFG(int, 0x1493c18) * 0x194;
      REFG(int, 0x1493c18) = REFG(int, 0x1493c18) + 1;
      if (0x1f < REFG(int, 0x1493c18)) {
        REFG(int, 0x1493c18) = 0;
      }
      puVar6 = (undefined4 *)F_004cf260(pvVar12,&(*(undefined4 *)(gen_frame + 0x14)));
      *puVar6 = &REFG(undefined, 0x1493c28) + iVar13;
      puVar14 = ((uint *)(gen_frame + 0x4b8));
      puVar16 = (uint *)(&REFG(undefined, 0x1493c28) + iVar13);
      for (iVar9 = 0x65; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar16 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
      }
      F_004cf2e0(pvVar12,(*(undefined4 *)(gen_frame + 0x14)));
    }
  }
  pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  uVar5 = F_004cf460((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x6c));
  (*(bool *)(gen_frame + 0x1b)) = uVar5 == 0;
  if (((((*(byte *)(gen_frame + 0x65c)) & 0x1f) != 0) || (((*(uint *)(gen_frame + 0x664)) & 0x1f) != 0)) ||
     ((*(char *)(gen_frame + 0x23)) = '\0', ((*(byte *)(gen_frame + 0x668)) & 0x1f) != 0)) {
    (*(char *)(gen_frame + 0x23)) = '\x01';
  }
  if (((uVar5 == 0) || ((*(char *)(gen_frame + 0x23)) != '\0')) || (((int *)(gen_frame + 0x64c))[2] != 0)) {
    if ((int)uVar5 < 0x1f) {
      iVar13 = REFG(int, 0x1493c1c) * 0x2c;
      REFG(int, 0x1493c1c) = REFG(int, 0x1493c1c) + 1;
      if (0x1f < REFG(int, 0x1493c1c)) {
        REFG(int, 0x1493c1c) = 0;
      }
      puVar6 = (undefined4 *)F_004cf260((undefined *)((int)pvVar12 + 0x6c),&(*(undefined4 *)(gen_frame + 0x14)));
      *puVar6 = &REFG(undefined, 0x1496ea8) + iVar13;
      piVar8 = ((int *)(gen_frame + 0x64c));
      piVar17 = (int *)(&REFG(undefined, 0x1496ea8) + iVar13);
      for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar17 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar17 = piVar17 + 1;
      }
      F_004cf2e0((undefined *)((int)pvVar12 + 0x6c),(*(undefined4 *)(gen_frame + 0x14)));
    }
    else {
      uVar10 = (*(uint *)(gen_frame + 0x664)) & 0x1f;
      if (uVar5 == 0x1f) {
        if (uVar10 != 0) {
          piVar7 = (int *)F_009759f0();
          puVar6 = (undefined4 *)F_004cf260((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x6c),&(*(undefined4 *)(gen_frame + 0x14)));
          *puVar6 = piVar7;
          piVar8 = ((int *)(gen_frame + 0x64c));
          piVar17 = piVar7;
          for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
            *piVar17 = *piVar8;
            piVar8 = piVar8 + 1;
            piVar17 = piVar17 + 1;
          }
          LOCK();
          *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0xbc) = piVar7;
          UNLOCK();
          F_004cf2e0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x6c),(*(undefined4 *)(gen_frame + 0x14)));
        }
      }
      else if (uVar10 != 0) {
        piVar8 = (int *)((int)pvVar12 + 0xbc);
        LOCK();
        iVar13 = *piVar8;
        *piVar8 = *piVar8;
        UNLOCK();
        if (iVar13 != 0) {
          uVar5 = *(uint *)(iVar13 + 0x18) & 0x1f;
          if (uVar5 != uVar10) {
            *(uint *)(iVar13 + 0x18) = *(uint *)(iVar13 + 0x18) | uVar5 | uVar10;
          }
        }
      }
    }
  }
  pvVar12 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x90);
  uVar5 = F_004cf460(pvVar12);
  if (((int)uVar5 < 0x20) && ((uVar5 == 0 || (((char *)(gen_frame + 0x24))[0] != '\0')))) {
    iVar13 = REFG(int, 0x1493c20) * 0x494;
    REFG(int, 0x1493c20) = REFG(int, 0x1493c20) + 1;
    if (0x1f < REFG(int, 0x1493c20)) {
      REFG(int, 0x1493c20) = 0;
    }
    puVar6 = (undefined4 *)F_004cf260(pvVar12,&(*(undefined4 *)(gen_frame + 0x14)));
    *puVar6 = &REFG(undefined, 0x1497428) + iVar13;
    pcVar15 = ((char *)(gen_frame + 0x24));
    puVar6 = (undefined4 *)(&REFG(undefined, 0x1497428) + iVar13);
    for (iVar9 = 0x125; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar6 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      puVar6 = puVar6 + 1;
    }
    F_004cf2e0(pvVar12,(*(undefined4 *)(gen_frame + 0x14)));
  }
  LOCK();
  *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0xb4) = ((int *)(gen_frame + 0x64c))[0];
  UNLOCK();
  puVar6 = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0xb8);
  LOCK();
  *puVar6 = ((int *)(gen_frame + 0x64c))[1];
  UNLOCK();
  F_00c47745((*(uint *)(gen_frame + 0x678)) ^ (uint)(uint)(gen_frame + 0x67c));
  return (uint)puVar6;
}

/* ref: FUN_009760b0 */
byte F_009760b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9760b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  undefined4 * puVar2;
  undefined * this_02;
  int iVar3;
  undefined4 * puVar4;
  
  this_00 = (undefined *)((int)this + 0x6c);
  this_01 = (undefined *)((int)this + 0x48);
  this_02 = (undefined *)((int)this + 0x90);
  uVar1 = F_004cf460(this_01);
  if (0 < (int)uVar1) {
    puVar2 = (undefined4 *)F_004cf3c0(this_01,&(*(undefined4 *)(gen_frame + 0x8)));
    puVar2 = (undefined4 *)*puVar2;
    puVar4 = param_1;
    for (iVar3 = 0x65; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    F_004cf410(this_01,(*(undefined4 *)(gen_frame + 0x8)));
  }
  uVar1 = F_004cf460(this_00);
  if (0 < (int)uVar1) {
    puVar2 = (undefined4 *)F_004cf3c0(this_00,&(*(undefined4 *)(gen_frame + 0x8)));
    puVar2 = (undefined4 *)*puVar2;
    puVar4 = param_2;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    F_004cf410(this_00,(*(undefined4 *)(gen_frame + 0x8)));
    if (((*(byte *)(param_2 + 4) & 0x1f) != 0) || ((*(byte *)(param_2 + 6) & 0x1f) != 0)) {
      F_00b8a2f0(*param_2,param_2[1]);
    }
  }
  uVar1 = F_004cf460(this_02);
  if (0 < (int)uVar1) {
    puVar2 = (undefined4 *)F_004cf3c0(this_02,&(*(undefined4 *)(gen_frame + 0x8)));
    puVar2 = (undefined4 *)*puVar2;
    puVar4 = param_3;
    for (iVar3 = 0x125; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    F_004cf410(this_02,(*(undefined4 *)(gen_frame + 0x8)));
  }
  return 1;
}

/* ref: FUN_00976190 */
uint F_00976190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x680];
  float fVar1;
  bool bVar2;
  uint uVar3;
  undefined4 * puVar4;
  DWORD DVar5;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int iVar9;
  uint * puVar10;
  int * piVar11;
  char * pcVar12;
  uint * puVar13;
  int * piVar14;
  
  (*(uint *)(gen_frame + 0x678)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x67c);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  do {
    F_00976f30(((uint *)(gen_frame + 0x4b8)));
    F_00a1b190(((int *)(gen_frame + 0x64c)));
    F_00a1b0d0(((char *)(gen_frame + 0x24)));
    gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
    iVar7 = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart - *(uint *)((int)this + 0x24);
    iVar9 = ((*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart - *(int *)((int)this + 0x28)) -
            (uint)((*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart < *(uint *)((int)this + 0x24));
    (*(int *)(gen_frame + 0x8)) = iVar7;
    (*(int *)(gen_frame + 0xc)) = iVar9;
    *(DWORD *)((int)this + 0x24) = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart;
    *(LONG *)((int)this + 0x28) = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart;
    fVar1 = ((float)GEN_TOF(((float10)(longlong)CONCAT44(iVar9,iVar7) /
                   (float10)*(longlong *)((int)this + 0x1c))));
    (*(float *)(gen_frame + 0x10)) = fVar1;
    F_006b89d0(REFG(undefined4, 0x1488338),fVar1,((uint *)(gen_frame + 0x4b8)),((int *)(gen_frame + 0x64c)),((char *)(gen_frame + 0x24)));
    if (*(int *)((int)this + 0x40) == 0) {
      ((uint *)(gen_frame + 0x4b8))[4] = 0;
      ((uint *)(gen_frame + 0x4b8))[5] = 0;
      ((uint *)(gen_frame + 0x4b8))[6] = 0;
      ((uint *)(gen_frame + 0x4b8))[7] = 0;
      ((uint *)(gen_frame + 0x4b8))[8] = 0;
      ((uint *)(gen_frame + 0x4b8))[0] = 0;
      ((uint *)(gen_frame + 0x4b8))[1] = 0;
      ((uint *)(gen_frame + 0x4b8))[2] = 0;
      ((uint *)(gen_frame + 0x4b8))[3] = 0;
      puVar10 = ((uint *)(gen_frame + 0x4b8)) + 9;
      for (iVar7 = 0x5c; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    uVar3 = F_004cf460((undefined *)((int)this + 0x44));
    if ((int)uVar3 < 0x20) {
      if ((((((uint *)(gen_frame + 0x4b8))[5] & 0xffff) == 0) && ((((uint *)(gen_frame + 0x4b8))[6] & 0xffff) == 0)) &&
         ((((uint *)(gen_frame + 0x4b8))[7] & 0xffff) == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((uVar3 == 0) || (bVar2)) {
        iVar7 = REFG(int, 0x1493c18) * 0x194;
        REFG(int, 0x1493c18) = REFG(int, 0x1493c18) + 1;
        if (0x1f < REFG(int, 0x1493c18)) {
          REFG(int, 0x1493c18) = 0;
        }
        puVar4 = (undefined4 *)F_004cf260((undefined *)((int)this + 0x44),&(*(undefined4 *)(gen_frame + 0x1c)));
        *puVar4 = &REFG(undefined, 0x1493c28) + iVar7;
        puVar10 = ((uint *)(gen_frame + 0x4b8));
        puVar13 = (uint *)(&REFG(undefined, 0x1493c28) + iVar7);
        for (iVar9 = 0x65; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar13 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar13 = puVar13 + 1;
        }
        F_004cf2e0((undefined *)((int)this + 0x44),(*(undefined4 *)(gen_frame + 0x1c)));
      }
    }
    uVar3 = F_004cf460((undefined *)((int)this + 0x68));
    (*(bool *)(gen_frame + 0x1b)) = uVar3 == 0;
    if (((((*(byte *)(gen_frame + 0x65c)) & 0x1f) != 0) || (((*(uint *)(gen_frame + 0x664)) & 0x1f) != 0)) ||
       ((*(char *)(gen_frame + 0x23)) = '\0', ((*(byte *)(gen_frame + 0x668)) & 0x1f) != 0)) {
      (*(char *)(gen_frame + 0x23)) = '\x01';
    }
    if (((uVar3 == 0) || ((*(char *)(gen_frame + 0x23)) != '\0')) || (((int *)(gen_frame + 0x64c))[2] != 0)) {
      if ((int)uVar3 < 0x1f) {
        iVar7 = REFG(int, 0x1493c1c) * 0x2c;
        REFG(int, 0x1493c1c) = REFG(int, 0x1493c1c) + 1;
        if (0x1f < REFG(int, 0x1493c1c)) {
          REFG(int, 0x1493c1c) = 0;
        }
        puVar4 = (undefined4 *)F_004cf260((undefined *)((int)this + 0x68),&(*(undefined4 *)(gen_frame + 0x1c)));
        *puVar4 = &REFG(undefined, 0x1496ea8) + iVar7;
        piVar8 = ((int *)(gen_frame + 0x64c));
        piVar11 = (int *)(&REFG(undefined, 0x1496ea8) + iVar7);
        for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar11 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar11 = piVar11 + 1;
        }
        F_004cf2e0((undefined *)((int)this + 0x68),(*(undefined4 *)(gen_frame + 0x1c)));
      }
      else {
        uVar6 = (*(uint *)(gen_frame + 0x664)) & 0x1f;
        if (uVar3 == 0x1f) {
          if (uVar6 != 0) {
            iVar7 = REFG(int, 0x1493c1c) * 0x2c;
            REFG(int, 0x1493c1c) = REFG(int, 0x1493c1c) + 1;
            piVar8 = (int *)(&REFG(undefined, 0x1496ea8) + iVar7);
            if (0x1f < REFG(int, 0x1493c1c)) {
              REFG(int, 0x1493c1c) = 0;
            }
            puVar4 = (undefined4 *)F_004cf260((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x68),&(*(undefined4 *)(gen_frame + 0x1c)));
            *puVar4 = piVar8;
            piVar11 = ((int *)(gen_frame + 0x64c));
            piVar14 = piVar8;
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              *piVar14 = *piVar11;
              piVar11 = piVar11 + 1;
              piVar14 = piVar14 + 1;
            }
            LOCK();
            *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0xb8) = piVar8;
            UNLOCK();
            F_004cf2e0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x68),(*(undefined4 *)(gen_frame + 0x1c)));
            this = (*(undefined * PTR32 *)(gen_frame + 0x14));
          }
        }
        else if (uVar6 != 0) {
          piVar8 = (int *)((int)this + 0xb8);
          LOCK();
          iVar7 = *piVar8;
          *piVar8 = *piVar8;
          UNLOCK();
          if (iVar7 != 0) {
            uVar3 = *(uint *)(iVar7 + 0x18) & 0x1f;
            if (uVar3 != uVar6) {
              *(uint *)(iVar7 + 0x18) = *(uint *)(iVar7 + 0x18) | uVar3 | uVar6;
            }
          }
        }
      }
    }
    uVar3 = F_004cf460((undefined *)((int)this + 0x8c));
    if (((int)uVar3 < 0x20) && ((uVar3 == 0 || (((char *)(gen_frame + 0x24))[0] != '\0')))) {
      iVar7 = REFG(int, 0x1493c20) * 0x494;
      REFG(int, 0x1493c20) = REFG(int, 0x1493c20) + 1;
      if (0x1f < REFG(int, 0x1493c20)) {
        REFG(int, 0x1493c20) = 0;
      }
      puVar4 = (undefined4 *)F_004cf260((undefined *)((int)this + 0x8c),&(*(undefined4 *)(gen_frame + 0x1c)));
      *puVar4 = &REFG(undefined, 0x1497428) + iVar7;
      pcVar12 = ((char *)(gen_frame + 0x24));
      puVar4 = (undefined4 *)(&REFG(undefined, 0x1497428) + iVar7);
      for (iVar9 = 0x125; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar4 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        puVar4 = puVar4 + 1;
      }
      F_004cf2e0((undefined *)((int)this + 0x8c),(*(undefined4 *)(gen_frame + 0x1c)));
    }
    LOCK();
    *(int *)((int)this + 0xb0) = ((int *)(gen_frame + 0x64c))[0];
    UNLOCK();
    LOCK();
    *(int *)((int)this + 0xb4) = ((int *)(gen_frame + 0x64c))[1];
    UNLOCK();
    DVar5 = gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 0x34),0xffffffff);
  } while (*(int *)((int)this + 0x38) == 0);
  *(undefined4 *)((int)this + 0x3c) = 1;
  F_00c47745((*(uint *)(gen_frame + 0x678)) ^ (uint)(uint)(gen_frame + 0x67c));
  return DVar5;
}

/* ref: FUN_00976540 */
uint F_00976540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf0c0(this,4,param_1,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10da944));
  return (uint)this;
}

/* ref: FUN_00976570 */
uint F_00976570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004cf260(this,param_1);
  return uVar1;
}

/* ref: FUN_00976580 */
unsigned int F_00976580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf2e0(this,param_1);
  return 0;
}

/* ref: FUN_00976590 */
uint F_00976590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004cf3c0(this,param_1);
  return uVar1;
}

/* ref: FUN_009765a0 */
unsigned int F_009765a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9765a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf410(this,param_1);
  return 0;
}

/* ref: FUN_009765c0 */
uint F_009765c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9765c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf0c0(this,4,param_1,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10da94c));
  return (uint)this;
}

/* ref: FUN_009765f0 */
uint F_009765f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9765f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004cf260(this,param_1);
  return uVar1;
}

/* ref: FUN_00976600 */
unsigned int F_00976600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf2e0(this,param_1);
  return 0;
}

/* ref: FUN_00976610 */
uint F_00976610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004cf3c0(this,param_1);
  return uVar1;
}

/* ref: FUN_00976620 */
unsigned int F_00976620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf410(this,param_1);
  return 0;
}

/* ref: FUN_00976640 */
uint F_00976640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf0c0(this,4,param_1,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10da954));
  return (uint)this;
}

/* ref: FUN_00976670 */
uint F_00976670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004cf260(this,param_1);
  return uVar1;
}

/* ref: FUN_00976680 */
unsigned int F_00976680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf2e0(this,param_1);
  return 0;
}

/* ref: FUN_00976690 */
uint F_00976690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004cf3c0(this,param_1);
  return uVar1;
}

/* ref: FUN_009766a0 */
unsigned int F_009766a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9766a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf410(this,param_1);
  return 0;
}

/* ref: ITQueue_VPadData_Input_System_Client_InputThread::vf0 */
uint F_009766c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9766c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10da944));
  F_004cf160(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: ITQueue_VMouseData_Input_System_Client_InputThread::vf0 */
uint F_009766f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9766f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10da94c));
  F_004cf160(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: ITQueue_VKeyboardData_Input_System_Client_InputThread::vf0 */
uint F_00976720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10da954));
  F_004cf160(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00976750 */
uint F_00976750(unsigned int gen_a0)
{
  GEN_ENTER(0x976750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  uVar3 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
  uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  uVar4 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  bVar5 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart < *(uint *)((int)this + 8);
  iVar1 = *(int *)((int)this + 0xc);
  (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart - *(uint *)((int)this + 8);
  (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart = ((*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart - iVar1) - (uint)bVar5;
  *(undefined4 *)((int)this + 8) = uVar2;
  *(undefined4 *)((int)this + 0xc) = uVar3;
  return uVar4;
}

/* ref: FUN_009767a0 */
uint F_009767a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9767a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(uint *)((*(int *)&gen_args[0]) + 0x10) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_009767b0 */
uint F_009767b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9767b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(uint *)((*(int *)&gen_args[0]) + 0x1c) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_009767c0 */
uint F_009767c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9767c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(uint *)((*(int *)&gen_args[0]) + 0x1c) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_009767e0 */
uint F_009767e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9767e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009767f0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_009767f0 */
uint F_009767f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9767f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00975b50(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00976820 */
unsigned int F_00976820(float gen_a0)
{
  GEN_ENTER(0x976820u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00976840 */
uint F_00976840(unsigned int gen_a0)
{
  GEN_ENTER(0x976840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00406b90(0x198,0,0);
  if (uVar1 != 0) {
    uVar1 = F_00aca8c0(uVar1);
    *(uint *)((int)this + 0x18) = uVar1;
    uVar1 = F_00ac9f90();
    return uVar1;
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar1 = F_00ac9f90();
  return uVar1;
}

/* ref: FUN_00976880 */
uint F_00976880(unsigned int gen_a0)
{
  GEN_ENTER(0x976880u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00aca160(param_1);
  return uVar1;
}

/* ref: FUN_00976890 */
uint F_00976890(unsigned int gen_a0)
{
  GEN_ENTER(0x976890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    uVar1 = F_00aca930(*(undefined * PTR32 *)((int)this + 0x18));
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_009768c0 */
byte F_009768c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9768c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  bVar1 = F_00acb3c0(*(undefined * PTR32 *)((int)this + 0x18),param_1,param_2,param_3,param_4,0);
  return bVar1;
}

/* ref: FUN_009768f0 */
byte F_009768f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9768f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_00acb6d0(*(undefined * PTR32 *)((int)this + 0x18),param_1,param_2);
  return bVar1;
}

/* ref: FUN_00976910 */
byte F_00976910(unsigned int gen_a0)
{
  GEN_ENTER(0x976910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00aca130(*(undefined * PTR32 *)((int)this + 0x18));
  return bVar1;
}

/* ref: FUN_00976940 */
uint F_00976940(void)
{
  GEN_ENTER(0x976940u, 0u, 0u, 0u, 0u);
  return 0xfa000;
}

/* ref: FUN_00976950 */
unsigned int F_00976950(unsigned int gen_a0)
{
  GEN_ENTER(0x976950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x18) != 0) {
    F_00acd450();
    this_00 = *(undefined * PTR32 *)((int)this + 0x18);
    if (this_00 != (undefined *)0x0) {
      F_00ac9ed0(this_00);
      F_00406ad0(this_00);
      *(undefined4 *)((int)this + 0x18) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00976990 */
unsigned int F_00976990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x976990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)((int)this + 0x26b4) != 0) {
    uVar1 = F_00aca150(param_1);
    ((code *)*(gen_code32 *)((int)this + 0x26b0))
              (*(undefined4 *)((int)this + 0x26b4),(int)this + 0x26b8,uVar1,param_2);
  }
  return 0;
}

/* ref: FUN_009769d0 */
byte F_009769d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9769d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10daa0c),REFG(undefined4, 0x108cc50));
  uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x54)),"CharacharConfig",REFG(undefined4, 0x108cc50));
  bVar1 = F_00acb3c0(*(undefined * PTR32 *)((int)this + 0x18),param_1,param_2,uVar3,uVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return bVar1;
}

/* ref: FUN_00976a60 */
byte F_00976a60(unsigned int gen_a0)
{
  GEN_ENTER(0x976a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined * this_00;
  byte bVar2;
  
  if (*(undefined * PTR32 *)((int)this + 0x18) == (undefined *)0x0) {
    return 1;
  }
  if (REFG(char, 0x14a06a8) == '\0') {
    F_0041d240(*(undefined * PTR32 *)((int)this + 0x10));
    uVar1 = *(undefined4 *)((int)this + 0x10);
    this_00 = *(undefined * PTR32 *)((int)this + 0x18);
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x9127c0));
    (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x976880));
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    bVar2 = F_00acb340(this_00,uVar1,&(*(gen_code32 *)(gen_frame + 0xc)),0);
    if (bVar2 == 0) {
      return 1;
    }
    REFG(char, 0x14a06a8) = '\x01';
  }
  else {
    bVar2 = F_00aca130(*(undefined * PTR32 *)((int)this + 0x18));
    if (bVar2 == 0) {
      F_00aca160(*(undefined * PTR32 *)((int)this + 0x18));
      bVar2 = F_00ac9fa0(*(undefined4 *)((int)this + 0x18));
      if (bVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00976af0 */
byte F_00976af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x976af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined * this_00;
  byte bVar2;
  
  bVar2 = F_00aca130(*(undefined * PTR32 *)((int)this + 0x18));
  if (bVar2 == 0) {
    uVar1 = *(undefined4 *)((int)this + 0x10);
    (*(gen_code32 *)(gen_frame + 0x14)) = (code *)0x0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    this_00 = *(undefined * PTR32 *)((int)this + 0x18);
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x976ef0));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
    (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x976990));
    bVar2 = F_00acb340(this_00,uVar1,&(*(gen_code32 *)(gen_frame + 0xc)),0);
    if (bVar2 != 0) {
      *(undefined4 *)((int)this + 0x26b0) = *param_1;
      *(undefined4 *)((int)this + 0x26b4) = param_1[1];
      *(undefined4 *)((int)this + 0x26b8) = param_1[2];
      *(undefined4 *)((int)this + 0x26bc) = param_1[3];
      *(undefined4 *)((int)this + 0x26c0) = param_2;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00976b80 */
byte F_00976b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x976b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined * this_00;
  byte bVar2;
  
  bVar2 = F_00aca130(*(undefined * PTR32 *)((int)this + 0x18));
  if (bVar2 == 0) {
    uVar1 = *(undefined4 *)((int)this + 0x10);
    (*(gen_code32 *)(gen_frame + 0x14)) = (code *)0x0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    this_00 = *(undefined * PTR32 *)((int)this + 0x18);
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x976ef0));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
    (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x976990));
    bVar2 = F_00acb0a0(this_00,uVar1,&(*(gen_code32 *)(gen_frame + 0xc)),0);
    if (bVar2 != 0) {
      *(undefined4 *)((int)this + 0x26b0) = *param_1;
      *(undefined4 *)((int)this + 0x26b4) = param_1[1];
      *(undefined4 *)((int)this + 0x26b8) = param_1[2];
      *(undefined4 *)((int)this + 0x26bc) = param_1[3];
      *(undefined4 *)((int)this + 0x26c0) = param_2;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00976c10 */
byte F_00976c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x976c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  byte bVar1;
  
  bVar1 = F_00aca130(*(undefined * PTR32 *)((int)this + 0x18));
  if (bVar1 == 0) {
    (*(gen_code32 *)(gen_frame + 0x14)) = (code *)0x0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    this_00 = *(undefined * PTR32 *)((int)this + 0x18);
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x976ef0));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
    (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x976990));
    bVar1 = F_00acb660(this_00,param_1,param_2,param_3,param_4,&(*(gen_code32 *)(gen_frame + 0xc)),0,0);
    if (bVar1 != 0) {
      *(undefined4 *)((int)this + 0x26b0) = *param_5;
      *(undefined4 *)((int)this + 0x26b4) = param_5[1];
      *(undefined4 *)((int)this + 0x26b8) = param_5[2];
      *(undefined4 *)((int)this + 0x26bc) = param_5[3];
      *(undefined4 *)((int)this + 0x26c0) = param_6;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00976cb0 */
byte F_00976cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x976cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  byte bVar1;
  
  bVar1 = F_00aca130(*(undefined * PTR32 *)((int)this + 0x18));
  if (bVar1 == 0) {
    (*(gen_code32 *)(gen_frame + 0x14)) = (code *)0x0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    this_00 = *(undefined * PTR32 *)((int)this + 0x18);
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x976ef0));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
    (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x976990));
    bVar1 = F_00acbaa0(this_00,param_1,param_2,&(*(gen_code32 *)(gen_frame + 0xc)),0);
    if (bVar1 != 0) {
      *(undefined4 *)((int)this + 0x26b0) = *param_3;
      *(undefined4 *)((int)this + 0x26b4) = param_3[1];
      *(undefined4 *)((int)this + 0x26b8) = param_3[2];
      *(undefined4 *)((int)this + 0x26bc) = param_3[3];
      *(undefined4 *)((int)this + 0x26c0) = param_4;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00976d40 */
byte F_00976d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x976d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  byte bVar1;
  
  bVar1 = F_00aca130(*(undefined * PTR32 *)((int)this + 0x18));
  if (bVar1 != 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x26b0) = *param_3;
  *(undefined4 *)((int)this + 0x26b4) = param_3[1];
  *(undefined4 *)((int)this + 0x26b8) = param_3[2];
  *(undefined4 *)((int)this + 0x26bc) = param_3[3];
  *(undefined4 *)((int)this + 0x26c0) = param_4;
  this_00 = *(undefined * PTR32 *)((int)this + 0x18);
  (*(gen_code32 *)(gen_frame + 0x14)) = (code *)0x0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x976ef0));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x976990));
  bVar1 = F_00acab80(this_00,param_1,param_2,&(*(gen_code32 *)(gen_frame + 0xc)),0);
  return bVar1;
}

/* ref: FUN_00976dd0 */
byte F_00976dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x976dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10daa0d),REFG(undefined4, 0x108cc50));
  uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x54)),"CharacharConfig",REFG(undefined4, 0x108cc50));
  bVar1 = F_00976c10(this,param_1,param_2,uVar3,uVar2,param_3,param_4);
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return bVar1;
}

/* ref: FUN_00976e70 */
uint F_00976e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ac9ed0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00976ea0 */
uint F_00976ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00976ec0 */
uint F_00976ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x976ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(undefined4 *)((int)this + 4),(int)this + 8,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00976ef0 */
uint F_00976ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x976ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00976f10 */
uint F_00976f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x976f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x976ef0));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00976f30 */
uint F_00976f30(unsigned int gen_a0)
{
  GEN_ENTER(0x976f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar2 = (undefined4 *)((int)this + 0x24);
  for (iVar1 = 0x5c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00976f60 */
byte F_00976f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1 - (int)this;
  while ((*(int *)this == *(int *)(iVar2 + (int)this) && (*(int *)this == 0))) {
    iVar1 = iVar1 + 1;
    this = (undefined *)((int)this + 4);
    if (3 < iVar1) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00976fa0 */
byte F_00976fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((((*(int *)((int)this + 0x10) == *(int *)(param_1 + 0x10)) &&
       (*(int *)((int)this + 0x14) == *(int *)(param_1 + 0x14))) &&
      (*(int *)((int)this + 0x18) == *(int *)(param_1 + 0x18))) &&
     (*(int *)((int)this + 0x1c) == *(int *)(param_1 + 0x1c))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00976fe0 */
uint F_00976fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x976fe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined4 *)(in_ecx + 0x18) = 0;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  return 0;
}

/* ref: FUN_00977000 */
unsigned int F_00977000(unsigned int gen_a0)
{
  GEN_ENTER(0x977000u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  return 0;
}

/* ref: FUN_00977010 */
uint F_00977010(unsigned int gen_a0)
{
  GEN_ENTER(0x977010u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00977020 */
uint F_00977020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977020u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  *(uint *)((*(int *)&gen_args[0]) + 0x10) = *(uint *)((*(int *)&gen_args[0]) + 0x10) & (*(uint *)&gen_args[1]);
  *(uint *)((*(int *)&gen_args[0]) + 0x14) = *(uint *)((*(int *)&gen_args[0]) + 0x14) & (*(uint *)&gen_args[1]);
  *(uint *)((*(int *)&gen_args[0]) + 0x18) = *(uint *)((*(int *)&gen_args[0]) + 0x18) & (*(uint *)&gen_args[1]);
  *(uint *)((*(int *)&gen_args[0]) + 0x1c) = *(uint *)((*(int *)&gen_args[0]) + 0x1c) & (*(uint *)&gen_args[1]);
  return (*(uint *)&gen_args[1]);
}

/* ref: Apricot::Engine::Data::Interface::IModel::vf0 */
uint F_00977050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd1f4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ITexture::vf0 */
uint F_00977090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd200));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009770d0 */
uint F_009770d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9770d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 * 8 + 4;
}

/* ref: Apricot::Engine::Data::Interface::IFunctionCurve::vf0 */
uint F_009770f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9770f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IValueFunctionCurve::vf0 */
uint F_00977130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IPointBinder::vf0 */
uint F_00977170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd244));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ILinearBinder::vf0 */
uint F_009771b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9771b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd250));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ISplineBinder::vf0 */
uint F_009771f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9771f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd25c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ICameraBinder::vf0 */
uint F_00977230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd268));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IAxis3Parameter::vf0 */
uint F_00977270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IRgbFunctionCurve::vf0 */
uint F_009772b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9772b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IColorFunctionCurve::vf0 */
uint F_009772f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9772f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IBindPointProperty::vf0 */
uint F_00977330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10dd2b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IBinder::vf0 */
uint F_00977370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10dd2ec));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IScheduler::vf0 */
uint F_009773b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9773b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd320));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ITimeline::vf0 */
uint F_009773f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9773f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10dd338));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IValue::vf0 */
uint F_00977430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10dd358));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IPointEmitter::vf0 */
uint F_00977470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10dd36c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IConeEmitter::vf0 */
uint F_009774b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9774b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10dd374));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IConeModelEmitter::vf0 */
uint F_009774f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9774f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10dd39c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ISphereModelEmitter::vf0 */
uint F_00977530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10dd3cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ICylinderModelEmitter::vf0 */
uint F_00977570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10dd3f8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IModelEmitter::vf0 */
uint F_009775b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9775b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10dd428));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IEmitter::vf0 */
uint F_009775f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9775f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[38])REFP(0x10dd44c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00977640 */
unsigned int F_00977640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x977640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  code * pcVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  uVar4 = 0;
  puVar3 = param_1;
  if (param_2 != 0) {
    do {
      pcVar1 = (code *)*puVar3;
      piVar2 = puVar3 + 2;
      if (pcVar1 < (code *)0x4372494d) {
        if (pcVar1 == (code *)0x4372494c) {
          *(short *)((int)this + 0xbc) = (short)*piVar2;
        }
        else if (pcVar1 < (code *)0x52495a) {
          if (pcVar1 == (code *)0x524959) {
            *(int *)((int)this + 0x4c) = *piVar2;
          }
          else if (pcVar1 < (code *)0x43724a) {
            if (pcVar1 == (code *)0x437249) {
              *(char *)((int)this + 0xc9) = (char)*piVar2;
            }
            else if (&REFG(undefined, 0x43415a) < pcVar1) {
              if (pcVar1 == (code *)0x434758) {
                *(int *)((int)this + 0x18) = *piVar2;
              }
              else if (pcVar1 == (code *)0x434759) {
                *(int *)((int)this + 0x1c) = *piVar2;
              }
              else if (pcVar1 == (code *)0x43475a) {
                *(int *)((int)this + 0x20) = *piVar2;
              }
            }
            else if (pcVar1 == (code *)&REFG(undefined, 0x43415a)) {
              *(int *)((int)this + 0x14) = *piVar2;
            }
            else if (pcVar1 == (code *)0x5343) {
              *(int *)((int)this + 0x34) = *piVar2;
            }
            else if (pcVar1 == (code *)0x434158) {
              *(int *)((int)this + 0xc) = *piVar2;
            }
            else if (pcVar1 == (code *)&REFG(undefined, 0x434159)) {
              *(int *)((int)this + 0x10) = *piVar2;
            }
          }
          else if (pcVar1 < (code *)0x524259) {
            if (pcVar1 == (code *)0x524258) {
              *(int *)((int)this + 0x60) = *piVar2;
            }
            else if (pcVar1 == (code *)0x524158) {
              *(int *)((int)this + 0x54) = *piVar2;
            }
            else if (pcVar1 == (code *)0x524159) {
              *(int *)((int)this + 0x58) = *piVar2;
            }
            else if (pcVar1 == (code *)0x52415a) {
              *(int *)((int)this + 0x5c) = *piVar2;
            }
          }
          else if (pcVar1 == (code *)0x524259) {
            *(int *)((int)this + 100) = *piVar2;
          }
          else if (pcVar1 == (code *)0x52425a) {
            *(int *)((int)this + 0x68) = *piVar2;
          }
          else if (pcVar1 == (code *)0x524958) {
            *(int *)((int)this + 0x48) = *piVar2;
          }
        }
        else if (((code *)REFP(0x534559)) < pcVar1) {
          if (pcVar1 < (code *)0x43724159) {
            if (pcVar1 == (code *)0x43724158) {
              *(int *)this = *piVar2;
            }
            else if (pcVar1 == (code *)0x426c6b4e) {
              *(char *)((int)this + 0xbe) = (char)*piVar2;
            }
            else if (pcVar1 == (code *)0x43436e74) {
              *(short *)((int)this + 0xb8) = (short)*piVar2;
            }
            else if (pcVar1 == (code *)0x436f6c73) {
              *(int *)((int)this + 0xa8) = *piVar2;
              *(undefined4 *)((int)this + 0xac) = puVar3[3];
              *(undefined4 *)((int)this + 0xb0) = puVar3[4];
              *(undefined4 *)((int)this + 0xb4) = puVar3[5];
            }
          }
          else if (pcVar1 == (code *)0x43724159) {
            *(int *)((int)this + 4) = *piVar2;
          }
          else if (pcVar1 == (code *)0x4372415a) {
            *(int *)((int)this + 8) = *piVar2;
          }
          else if (pcVar1 == (code *)0x43724943) {
            *(short *)((int)this + 0xba) = (short)*piVar2;
          }
        }
        else if (pcVar1 == ((code *)REFP(0x534559))) {
          *(int *)((int)this + 0x30) = *piVar2;
        }
        else if (pcVar1 < (code *)0x52565b) {
          if (pcVar1 == (code *)0x52565a) {
            *(int *)((int)this + 0x74) = *piVar2;
          }
          else if (pcVar1 == (code *)0x52495a) {
            *(int *)((int)this + 0x50) = *piVar2;
          }
          else if (pcVar1 == (code *)0x525658) {
            *(int *)((int)this + 0x6c) = *piVar2;
          }
          else if (pcVar1 == (code *)0x525659) {
            *(int *)((int)this + 0x70) = *piVar2;
          }
        }
        else if (pcVar1 == (code *)0x534258) {
          *(int *)((int)this + 0x24) = *piVar2;
        }
        else if (pcVar1 == (code *)0x534259) {
          *(int *)((int)this + 0x28) = *piVar2;
        }
        else if (pcVar1 == (code *)&REFG(undefined, 0x534558)) {
          *(int *)((int)this + 0x2c) = *piVar2;
        }
      }
      else if (pcVar1 < (code *)0x53525832) {
        if (pcVar1 == (code *)0x53525831) {
          *(int *)((int)this + 0x3c) = *piVar2;
        }
        else if (pcVar1 < (code *)0x4c4c6179) {
          if (pcVar1 == (code *)0x4c4c6178) {
            *(int *)((int)this + 0x9c) = *piVar2;
          }
          else if (pcVar1 < (code *)0x46726d74) {
            if (pcVar1 == (code *)0x46726d73) {
              *(int *)((int)this + 0xa0) = *piVar2;
              *(undefined4 *)((int)this + 0xa4) = puVar3[3];
            }
            else if (pcVar1 == (code *)0x43724952) {
              *(char *)((int)this + 0xca) = (char)*piVar2;
            }
            else if (pcVar1 == (code *)0x466c7452) {
              *(int *)((int)this + 0x88) = *piVar2;
            }
            else if (pcVar1 == (code *)0x466c7453) {
              *(int *)((int)this + 0x8c) = *piVar2;
            }
          }
          else if (pcVar1 == (code *)0x494a4d4e) {
            *(char *)((int)this + 199) = (char)*piVar2;
          }
          else if (pcVar1 == (code *)0x49524430) {
            *(int *)((int)this + 0x80) = *piVar2;
          }
          else if (pcVar1 == (code *)0x49524431) {
            *(int *)((int)this + 0x84) = *piVar2;
          }
        }
        else if (pcVar1 < (code *)0x53424455) {
          if (pcVar1 == (code *)0x53424454) {
            *(char *)((int)this + 0xc1) = (char)*piVar2;
          }
          else if (pcVar1 == (code *)0x4c4c696e) {
            *(int *)((int)this + 0x98) = *piVar2;
          }
          else if (pcVar1 == (code *)0x50767458) {
            *(int *)((int)this + 0x90) = *piVar2;
          }
          else if (pcVar1 == (code *)0x50767459) {
            *(int *)((int)this + 0x94) = *piVar2;
          }
        }
        else if (pcVar1 == (code *)0x53494454) {
          *(char *)((int)this + 0xbf) = (char)*piVar2;
        }
        else if (pcVar1 == (code *)0x53495054) {
          *(char *)((int)this + 0xc0) = (char)*piVar2;
        }
        else if (pcVar1 == (code *)0x53525830) {
          *(int *)((int)this + 0x38) = *piVar2;
        }
      }
      else if (pcVar1 < (code *)0x56424d4f) {
        if (pcVar1 == (code *)0x56424d4e) {
          *(char *)((int)this + 200) = (char)*piVar2;
        }
        else if (pcVar1 < (code *)0x55764357) {
          if (pcVar1 == (code *)0x55764356) {
            *(char *)((int)this + 0xc3) = (char)*piVar2;
          }
          else if (pcVar1 == (code *)0x53525930) {
            *(int *)((int)this + 0x40) = *piVar2;
          }
          else if (pcVar1 == (code *)0x53525931) {
            *(int *)((int)this + 0x44) = *piVar2;
          }
          else if (pcVar1 == (code *)0x55764355) {
            *(char *)((int)this + 0xc2) = (char)*piVar2;
          }
        }
        else if (pcVar1 == (code *)0x55764976) {
          *(char *)((int)this + 0xc4) = (char)*piVar2;
        }
        else if (pcVar1 == (code *)0x55764c43) {
          *(char *)((int)this + 0xc6) = (char)*piVar2;
        }
        else if (pcVar1 == (code *)0x55764e52) {
          *(char *)((int)this + 0xc5) = (char)*piVar2;
        }
      }
      else if (pcVar1 < (code *)0x6243724f) {
        if (pcVar1 == (code *)0x6243724e) {
          *(bool *)((int)this + 0xcb) = *piVar2 != 0;
        }
        else if (pcVar1 == (code *)0x564d6178) {
          *(int *)((int)this + 0x7c) = *piVar2;
        }
        else if (pcVar1 == (code *)0x564d696e) {
          *(int *)((int)this + 0x78) = *piVar2;
        }
        else if (pcVar1 == (code *)0x62426e50) {
          *(bool *)((int)this + 0xce) = *piVar2 != 0;
        }
      }
      else if (pcVar1 == (code *)0x62525556) {
        *(bool *)((int)this + 0xcc) = *piVar2 != 0;
      }
      else if (pcVar1 == (code *)0x6253524c) {
        *(bool *)((int)this + 0xcd) = *piVar2 != 0;
      }
      else if (pcVar1 == (code *)0x62536e50) {
        *(bool *)((int)this + 0xcf) = *piVar2 != 0;
      }
      uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
      puVar3 = ((undefined4 *)GEN_TOP(((int)piVar2 + (puVar3[1] + 3 & 0xfffffffc))));
    } while (uVar4 < param_2);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Interface::ILineParticle::vf0 */
uint F_00977ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd4e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IPowderParticle::vf0 */
uint F_00977be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10dd500));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IWindmillParticle::vf0 */
uint F_00977c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IQuadParticle::vf0 */
uint F_00977c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10dd520));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IPolygonParticle::vf0 */
uint F_00977ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd528));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ILaserParticle::vf0 */
uint F_00977ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dd534));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

