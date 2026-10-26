#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_005d09b0 */
unsigned int F_005d09b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x5d09b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int param_7 = (int)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  int param_10 = (int)gen_a9;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_4;
  if ((param_4 != param_7) && (param_7 != param_10)) {
    if ((param_8 == (int *)0x0) ||
       (((int *)*param_8 == (int *)0x0 ||
        (puVar1 = *(undefined4 * PTR32 *)*param_8, puVar1 == (undefined4 *)0x0)))) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1;
    }
    if (((param_5 == (int *)0x0) || ((int *)*param_5 == (int *)0x0)) ||
       (puVar1 = *(undefined4 * PTR32 *)*param_5, puVar1 == (undefined4 *)0x0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar1;
    }
    if (((param_2 == (int *)0x0) || ((int *)*param_2 == (int *)0x0)) ||
       (puVar1 = *(undefined4 * PTR32 *)*param_2, puVar1 == (undefined4 *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
    }
    F_005cc1d0(uVar2,param_4,uVar3,param_7,uVar4,param_10,0,0);
    iVar5 = param_4 + (param_10 - param_7);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar5;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_2;
  }
  return 0;
}

/* ref: FUN_005d0a60 */
unsigned int F_005d0a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x5d0a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int param_7 = (int)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  int param_10 = (int)gen_a9;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_4;
  if ((param_4 != param_7) && (param_7 != param_10)) {
    if ((param_8 == (int *)0x0) ||
       (((int *)*param_8 == (int *)0x0 ||
        (puVar1 = *(undefined4 * PTR32 *)*param_8, puVar1 == (undefined4 *)0x0)))) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1;
    }
    if (((param_5 == (int *)0x0) || ((int *)*param_5 == (int *)0x0)) ||
       (puVar1 = *(undefined4 * PTR32 *)*param_5, puVar1 == (undefined4 *)0x0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar1;
    }
    if (((param_2 == (int *)0x0) || ((int *)*param_2 == (int *)0x0)) ||
       (puVar1 = *(undefined4 * PTR32 *)*param_2, puVar1 == (undefined4 *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
    }
    F_005cc300(uVar2,param_4,uVar3,param_7,uVar4,param_10,0,0);
    iVar5 = param_4 + (param_10 - param_7);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar5;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_2;
  }
  return 0;
}

/* ref: FUN_005d0b10 */
unsigned int F_005d0b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d0b10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_005d0b40 */
uint F_005d0b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d0b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005885a0((int)this + 4,param_1,param_2);
  return uVar1;
}

/* ref: FUN_005d0b60 */
uint F_005d0b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d0b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005885a0((int)this + 0x10,param_1,param_2);
  return uVar1;
}

/* ref: FUN_005d0b80 */
uint F_005d0b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d0b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00588630((int)this + 4,param_1);
  return uVar1;
}

/* ref: FUN_005d0ba0 */
uint F_005d0ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d0ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00588630((int)this + 0x10,param_1);
  return uVar1;
}

/* ref: FUN_005d0be0 */
uint F_005d0be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d0be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00589280(this,param_1);
  return uVar1;
}

/* ref: FUN_005d0bf0 */
uint F_005d0bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d0bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = 0;
  if ((*(int *)((int)this + 0x90) != 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x80))), uVar1 = 0, this_00 != (undefined *)0x0)) {
    uVar1 = F_00583770(this_00,param_1,param_2,param_3,0);
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkTextInputNode::vf0 */
uint F_005d0c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d0c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0xf8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0ef4));
  if (this_00 != (undefined *)0x0) {
    F_005c8de0(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)(this + 0xf8) = 0;
  }
  F_0042c880(this + 0x9c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkNumericInputNode::vf0 */
uint F_005d0c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d0c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0xf8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0ef4));
  if (this_00 != (undefined *)0x0) {
    F_005c8de0(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)(this + 0xf8) = 0;
  }
  F_0042c880(this + 0x9c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  F_00577af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005d0d00 */
uint F_005d0d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d0d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005cdd00(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005d0d30 */
uint F_005d0d30(unsigned int gen_a0)
{
  GEN_ENTER(0x5d0d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_005ca2d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_005d0d70 */
uint F_005d0d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d0d70u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00588cd0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentSlider::vf0 */
uint F_005d0d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d0d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a10ec));
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),0x49,0,this,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  F_0057f460(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf0 */
uint F_005d0de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d0de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00589d40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005d0e10 */
uint F_005d0e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d0e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005cf890(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentWindow::vf0 */
uint F_005d0e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d0e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  F_0057f460(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentDragDrop::vf0 */
uint F_005d0e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d0e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0058a4c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005d0ea0 */
uint F_005d0ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d0ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  param_1[5] = 3;
  param_1[4] = 0;
  *param_1 = 0;
  F_005ce350(param_1,this,param_2,param_3);
  return (uint)param_1;
}

/* ref: FUN_005d0ee0 */
uint F_005d0ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d0ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 3U) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    F_005cfdc0(this,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  uVar4 = uVar3 >> 2;
  if (*(uint *)((int)this + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,400);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) = uVar2;
  }
  uVar4 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4)));
  puVar1 = ((undefined4 *)GEN_TOP((uVar4 + (uVar3 & 3) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar4;
}

/* ref: FUN_005d0f60 */
uint F_005d0f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d0f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  undefined1 * puVar2;
  uint uVar3;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 0xfU) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 0x10U >> 4)) {
    F_005cff40(this,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  puVar1 = *(undefined1 * PTR32 *)((int)this + 8);
  puVar2 = (undefined1 *)(uVar3 >> 4);
  if (puVar1 <= puVar2) {
    puVar2 = puVar2 - (int)puVar1;
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + (int)((int)(uintptr_t)puVar2) * 4))) == 0) {
    puVar1 = (undefined1 *)F_004296a0(0x10,0,400);
    *((undefined1 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + (int)((int)(uintptr_t)puVar2) * 4))) = puVar1;
  }
  puVar2 = ((undefined1 *)GEN_TOP(((uVar3 & 0xf) + *((int *)GEN_TOP((*(int *)((int)this + 4) + (int)((int)(uintptr_t)puVar2) * 4))))));
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = *param_1;
    puVar1 = param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return (uint)puVar1;
}

/* ref: FUN_005d1020 */
unsigned int F_005d1020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d1020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d00f0(this,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar2) / 0x14) * 0x14)));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d00f0(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
      puVar1[3] = param_1[3];
      puVar1[4] = param_1[4];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
  return 0;
}

/* ref: FUN_005d10d0 */
uint F_005d10d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d10d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this != uVar1) {
    uVar1 = F_005c6b30(uVar1,uVar1,*(uint *)this);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_005d10f0 */
unsigned int F_005d10f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d10f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_005d1180 */
uint F_005d1180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d1180u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_005d1230 */
uint F_005d1230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d1230u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_005d12e0 */
unsigned int F_005d12e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d12e0u, gen_a0, gen_a1, 0u, 0u);
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
      F_005d0390(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_005d0390(this,uVar1);
  }
  return 0;
}

/* ref: FUN_005d1360 */
uint F_005d1360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d1360u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_005d1180(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_005d1180(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_005d13d0 */
uint F_005d13d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d13d0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_005d1230(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_005d1230(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_005d1440 */
uint F_005d1440(unsigned int gen_a0)
{
  GEN_ENTER(0x5d1440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0xb0)) {
      F_0042c880((undefined *)((int)this_00 + 0x54));
      F_0042c880(this_00);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0xb0) * 0xb0,0x2c0);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_005d14b0 */
uint F_005d14b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d14b0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_005d1560 */
uint F_005d1560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d1560u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_005d1610 */
uint F_005d1610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d1610u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_005d16c0 */
uint F_005d16c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d16c0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_005d1770 */
uint F_005d1770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d1770u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_005d1820 */
uint F_005d1820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d1820u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_005d18d0 */
uint F_005d18d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d18d0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_005d1980 */
uint F_005d1980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d1980u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_005d1a30 */
uint F_005d1a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d1a30u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_005d1ae0 */
uint F_005d1ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d1ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0xb0;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xb0,0,0x2c0);
    F_005cbe40(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_005d0450(iVar1,*(undefined4 *)((int)this + 4));
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0xb0) * 0xb0,0x2c0);
    }
    *(uint *)((int)this + 4) = ((iVar2 - iVar1) / 0xb0) * 0xb0 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0xb0 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_005d1bc0 */
uint F_005d1bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d1bc0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_005d1c70 */
uint F_005d1c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d1c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x1c,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 6) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
    puVar1[5] = param_1[2];
  }
  return (uint)puVar1;
}

/* ref: FUN_005d1cc0 */
uint F_005d1cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d1cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    uVar2 = iVar1 >> 2;
    if ((int)uVar2 < 0x21) {
LAB_005d1d52: ;
      if (1 < (int)uVar2) {
        uVar2 = F_005c7d60(iVar3,iVar5,param_4,0);
      }
      return uVar2;
    }
    if (iVar4 < 1) {
      if (0x20 < (int)uVar2) {
        if (4 < (int)(iVar5 - iVar3 & 0xfffffffcU)) {
          F_005c7c90(iVar3,iVar5,param_4,0,0);
        }
        uVar2 = F_005cef60(iVar3,iVar5,param_4);
        return uVar2;
      }
      goto LAB_005d1d52;
    }
    F_005ceb90(&(*(int *)(gen_frame + 0x4)),iVar3,iVar5,param_4);
    iVar4 = iVar4 / 2 + (iVar4 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - iVar3 & 0xfffffffcU) < (int)(iVar5 - (*(int *)(gen_frame + 0x8)) & 0xfffffffcU)) {
      F_005d1cc0(iVar3,(*(int *)(gen_frame + 0x4)),iVar4,param_4);
      iVar3 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_005d1cc0((*(int *)(gen_frame + 0x8)),iVar5,iVar4,param_4);
      iVar5 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar5 - iVar3;
  } while( true );
}

/* ref: FUN_005d1db0 */
unsigned int F_005d1db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x5d1db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint param_9 = (uint)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int * piVar6;
  int * piVar7;
  int iVar8;
  
  uVar2 = param_3 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  (*(uint *)(gen_frame + 0x14)) = *(uint *)((int)this + 0x10);
  if (param_6 != param_9) {
    if (uVar2 <= *(uint *)((int)this + 0x10) >> 1) {
      do {
        if (param_4 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *param_4;
        }
        uVar2 = param_6 >> 2;
        if (*(uint *)(iVar8 + 8) <= uVar2) {
          uVar2 = uVar2 - *(uint *)(iVar8 + 8);
        }
        F_005d07b0(this,*((int *)GEN_TOP((*(int *)(iVar8 + 4) + uVar2 * 4))) + (param_6 & 3) * 4);
        param_6 = param_6 + 1;
      } while (param_6 != param_9);
      iVar8 = *(int *)((int)this + 0x10) - (*(uint *)(gen_frame + 0x14));
      piVar7 = *(int * PTR32 *)this;
      piVar3 = (int *)0x0;
      (*(uint *)(gen_frame + 0x14)) = iVar8;
      if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
        piVar3 = *(int * PTR32 *)*piVar7;
      }
      piVar6 = (int *)0x0;
      if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
        piVar6 = *(int * PTR32 *)*piVar3;
      }
      if (((piVar6 == (int *)0x0) || ((int *)*piVar6 == (int *)0x0)) ||
         (puVar1 = *(undefined4 * PTR32 *)*piVar6, puVar1 == (undefined4 *)0x0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *puVar1;
      }
      if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
         (puVar1 = *(undefined4 * PTR32 *)*piVar7, puVar1 == (undefined4 *)0x0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar1;
      }
      F_005cbff0(uVar5,*(int *)((int)this + 0xc),uVar4,iVar8 + *(int *)((int)this + 0xc),param_6);
      piVar7 = (int *)0x0;
      if ((*(int * PTR32 *)this != (int *)0x0) &&
         (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
        piVar7 = (int *)*puVar1;
      }
      piVar3 = (int *)0x0;
      if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
        piVar3 = *(int * PTR32 *)*piVar7;
      }
      piVar7 = (int *)0x0;
      if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
        piVar7 = *(int * PTR32 *)*piVar3;
      }
      uVar4 = 0;
      if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
        uVar4 = *(undefined4 *)*piVar7;
      }
      piVar7 = (int *)0x0;
      if ((*(int * PTR32 *)this != (int *)0x0) &&
         (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
        piVar7 = (int *)*puVar1;
      }
      uVar5 = 0;
      if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
        uVar5 = *(undefined4 *)*piVar7;
      }
      F_005d09b0(((undefined1 *)(gen_frame + 0x8)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar5,0,
                   (*(uint *)(gen_frame + 0x14)) + *(int *)((int)this + 0xc),uVar4,0,
                   (*(uint *)(gen_frame + 0x18)) + *(int *)((int)this + 0xc) + (*(uint *)(gen_frame + 0x14)));
      return 0;
    }
    do {
      if (param_4 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *param_4;
      }
      uVar2 = param_6 >> 2;
      if (*(uint *)(iVar8 + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)(iVar8 + 8);
      }
      F_005d0ee0(this,*((int *)GEN_TOP((*(int *)(iVar8 + 4) + uVar2 * 4))) + (param_6 & 3) * 4);
      param_6 = param_6 + 1;
    } while (param_6 != param_9);
    piVar7 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      piVar7 = (int *)*puVar1;
    }
    uVar4 = 0;
    if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
      uVar4 = *(undefined4 *)*piVar7;
    }
    piVar7 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      piVar7 = (int *)*puVar1;
    }
    uVar5 = 0;
    if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
      uVar5 = *(undefined4 *)*piVar7;
    }
    F_005d09b0(((undefined1 *)(gen_frame + 0x8)),uVar5,0,*(int *)((int)this + 0xc) + (*(uint *)(gen_frame + 0x18)),uVar4,0,
                 (*(uint *)(gen_frame + 0x14)) + *(int *)((int)this + 0xc),*(undefined4 *)this,0,
                 *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc));
  }
  return 0;
}

/* ref: FUN_005d2010 */
unsigned int F_005d2010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x5d2010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint param_9 = (uint)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int * piVar6;
  int * piVar7;
  int iVar8;
  
  uVar2 = param_3 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  (*(uint *)(gen_frame + 0x14)) = *(uint *)((int)this + 0x10);
  if (param_6 != param_9) {
    if (uVar2 <= *(uint *)((int)this + 0x10) >> 1) {
      do {
        if (param_4 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *param_4;
        }
        uVar2 = param_6 >> 4;
        if (*(uint *)(iVar8 + 8) <= uVar2) {
          uVar2 = uVar2 - *(uint *)(iVar8 + 8);
        }
        F_005d0830(this,*((int *)GEN_TOP((*(int *)(iVar8 + 4) + uVar2 * 4))) + (param_6 & 0xf));
        param_6 = param_6 + 1;
      } while (param_6 != param_9);
      iVar8 = *(int *)((int)this + 0x10) - (*(uint *)(gen_frame + 0x14));
      piVar7 = *(int * PTR32 *)this;
      piVar3 = (int *)0x0;
      (*(uint *)(gen_frame + 0x14)) = iVar8;
      if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
        piVar3 = *(int * PTR32 *)*piVar7;
      }
      piVar6 = (int *)0x0;
      if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
        piVar6 = *(int * PTR32 *)*piVar3;
      }
      if (((piVar6 == (int *)0x0) || ((int *)*piVar6 == (int *)0x0)) ||
         (puVar1 = *(undefined4 * PTR32 *)*piVar6, puVar1 == (undefined4 *)0x0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *puVar1;
      }
      if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
         (puVar1 = *(undefined4 * PTR32 *)*piVar7, puVar1 == (undefined4 *)0x0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar1;
      }
      F_005cc070(uVar5,*(int *)((int)this + 0xc),uVar4,iVar8 + *(int *)((int)this + 0xc),param_6);
      piVar7 = (int *)0x0;
      if ((*(int * PTR32 *)this != (int *)0x0) &&
         (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
        piVar7 = (int *)*puVar1;
      }
      piVar3 = (int *)0x0;
      if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
        piVar3 = *(int * PTR32 *)*piVar7;
      }
      piVar7 = (int *)0x0;
      if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
        piVar7 = *(int * PTR32 *)*piVar3;
      }
      uVar4 = 0;
      if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
        uVar4 = *(undefined4 *)*piVar7;
      }
      piVar7 = (int *)0x0;
      if ((*(int * PTR32 *)this != (int *)0x0) &&
         (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
        piVar7 = (int *)*puVar1;
      }
      uVar5 = 0;
      if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
        uVar5 = *(undefined4 *)*piVar7;
      }
      F_005d0a60(((undefined1 *)(gen_frame + 0x8)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar5,0,
                   (*(uint *)(gen_frame + 0x14)) + *(int *)((int)this + 0xc),uVar4,0,
                   (*(uint *)(gen_frame + 0x18)) + *(int *)((int)this + 0xc) + (*(uint *)(gen_frame + 0x14)));
      return 0;
    }
    do {
      if (param_4 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *param_4;
      }
      uVar2 = param_6 >> 4;
      if (*(uint *)(iVar8 + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)(iVar8 + 8);
      }
      F_005d08b0(this,*((int *)GEN_TOP((*(int *)(iVar8 + 4) + uVar2 * 4))) + (param_6 & 0xf));
      param_6 = param_6 + 1;
    } while (param_6 != param_9);
    piVar7 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      piVar7 = (int *)*puVar1;
    }
    uVar4 = 0;
    if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
      uVar4 = *(undefined4 *)*piVar7;
    }
    piVar7 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      piVar7 = (int *)*puVar1;
    }
    uVar5 = 0;
    if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
      uVar5 = *(undefined4 *)*piVar7;
    }
    F_005d0a60(((undefined1 *)(gen_frame + 0x8)),uVar5,0,*(int *)((int)this + 0xc) + (*(uint *)(gen_frame + 0x18)),uVar4,0,
                 (*(uint *)(gen_frame + 0x14)) + *(int *)((int)this + 0xc),*(undefined4 *)this,0,
                 *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc));
  }
  return 0;
}

/* ref: FUN_005d2270 */
uint F_005d2270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2270u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_005d2320 */
uint F_005d2320(unsigned int gen_a0)
{
  GEN_ENTER(0x5d2320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005d0ee0((undefined *)((int)this + 0xf4),(int)this + 0x80);
  uVar1 = F_005d0ee0((undefined *)((int)this + 0x10c),(int)this + 0x84);
  return uVar1;
}

/* ref: FUN_005d2350 */
uint F_005d2350(unsigned int gen_a0)
{
  GEN_ENTER(0x5d2350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  gen_piece_set(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 0, 3, (unsigned long long)(SUB43(this,0)));
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = *(byte *)((int)this + 0x9e) & 1;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP((CONCAT13(*(byte *)((int)this + 0x9e),GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 0, 3)) & 0x1ffffff)));
  uVar1 = F_005d0f60((undefined *)((int)this + 0x124),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  return uVar1;
}

/* ref: FUN_005d2380 */
uint F_005d2380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00588630((int)this + 4,param_1);
  uVar1 = F_00588630((int)this + 0x10,param_1);
  return uVar1;
}

/* ref: FUN_005d23b0 */
unsigned int F_005d23b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d23b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00588690((int)this + 4);
  F_00588690((int)this + 0x10);
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf10 */
uint F_005d23d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d23d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
  *param_1 = (short)uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
  *param_2 = (short)uVar1;
  return uVar1;
}

/* ref: Component::GUI2::AtkUnitBase::vf14 */
ushort F_005d2400(unsigned int gen_a0)
{
  GEN_ENTER(0x5d2400u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x12a);
}

/* ref: Component::GUI2::AtkUnitBase::vf15 */
ushort F_005d2410(unsigned int gen_a0)
{
  GEN_ENTER(0x5d2410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 300);
}

/* ref: Component::GUI2::AtkUnitBase::vf16 */
uint F_005d2420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d2420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  ushort uVar1;
  
  *param_1 = *(undefined2 *)(this + 0x12a);
  uVar1 = *(ushort *)(this + 300);
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: Component::GUI2::AtkUnitBase::vf22 */
uint F_005d2450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d2450u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Component::GUI2::AtkUnitBase::vf23 */
uint F_005d2460(void)
{
  GEN_ENTER(0x5d2460u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf25 */
uint F_005d2470(unsigned int gen_a0)
{
  GEN_ENTER(0x5d2470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
  return uVar1;
}

/* ref: Component::GUI2::AtkUnitBase::vf27 */
unsigned int F_005d2480(void)
{
  GEN_ENTER(0x5d2480u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf28 */
byte F_005d2490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d2490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf29 */
byte F_005d24a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d24a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x10d) != '\0';
}

/* ref: Component::GUI2::AtkUnitBase::vf32 */
byte F_005d24b0(void)
{
  GEN_ENTER(0x5d24b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf33 */
uint F_005d24c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d24c0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  return in_ecx;
}

/* ref: Component::GUI2::AtkUnitBase::vf34 */
unsigned int F_005d24d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d24d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf40 */
uint F_005d24e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d24e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return param_1;
}

/* ref: Component::GUI2::AtkUnitBase::vf41 */
byte F_005d24f0(void)
{
  GEN_ENTER(0x5d24f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf43 */
unsigned int F_005d2500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d2500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf44 */
unsigned int F_005d2510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d2510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf45 */
unsigned int F_005d2520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d2520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf46 */
byte F_005d2530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d2530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Component::GUI2::AtkUnitBase::vf47 */
unsigned int F_005d2540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d2540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf48 */
uint F_005d2550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d2550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf51 */
unsigned int F_005d2560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d2560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf52 */
byte F_005d2570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf53 */
unsigned int F_005d2580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf54 */
unsigned int F_005d2590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d2590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf55 */
unsigned int F_005d25a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d25a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf56 */
unsigned int F_005d25b0(void)
{
  GEN_ENTER(0x5d25b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf57 */
unsigned int F_005d25c0(void)
{
  GEN_ENTER(0x5d25c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf58 */
uint F_005d25d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d25d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this,param_1 + param_3,param_2 + param_4);
  return uVar1;
}

/* ref: Component::GUI2::AtkUnitBase::vf60 */
byte F_005d25f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d25f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf61 */
unsigned int F_005d2600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d2600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf8 */
uint F_005d2610(unsigned int gen_a0)
{
  GEN_ENTER(0x5d2610u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x90) != 0) {
    return (int)*((float *)GEN_TOP((*(int *)(in_ecx + 0x90) + 0x38))) & 0xffff;
  }
  return (uint)*(ushort *)(in_ecx + 0x12a);
}

/* ref: Component::GUI2::AtkUnitBase::vf9 */
uint F_005d2630(unsigned int gen_a0)
{
  GEN_ENTER(0x5d2630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x90) != 0) {
    return (int)*((float *)GEN_TOP((*(int *)(in_ecx + 0x90) + 0x3c))) & 0xffff;
  }
  return (uint)*(ushort *)(in_ecx + 300);
}

/* ref: Component::GUI2::AtkUnitBase::vf12 */
unsigned int F_005d2650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2650u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  bool bVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(param_1 + 0x90);
  *(short *)(param_1 + 0x12a) = (short)param_2;
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x88) & 1) == 0) &&
       (fVar3 = (float10)(int)(short)param_2,
       bVar2 = GEN_ISNAN((float10)*(float *)(iVar1 + 0x38)) || GEN_ISNAN(fVar3),
       bVar2 == (bVar2 || (float10)*(float *)(iVar1 + 0x38) == fVar3))) {
      *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 1;
    }
    *(float *)(iVar1 + 0x38) = (float)(int)(short)param_2;
  }
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf13 */
unsigned int F_005d26b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d26b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  bool bVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(param_1 + 0x90);
  *(short *)(param_1 + 300) = (short)param_2;
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x88) & 1) == 0) &&
       (fVar3 = (float10)(int)(short)param_2,
       bVar2 = GEN_ISNAN((float10)*(float *)(iVar1 + 0x3c)) || GEN_ISNAN(fVar3),
       bVar2 == (bVar2 || (float10)*(float *)(iVar1 + 0x3c) == fVar3))) {
      *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 1;
    }
    *(float *)(iVar1 + 0x3c) = (float)(int)(short)param_2;
  }
  return 0;
}

/* ref: Component::GUI2::AtkDragDropManager::vf0 */
uint F_005d2710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d1c));
  if (*(int *)(this + 0x6c) != 0) {
    F_00583770(((undefined *)GEN_TOP((*(int *)(this + 0x6c) + 0x23c))),0x49,0,this,0);
    *(undefined4 *)(this + 0x6c) = 0;
  }
  F_0042c880(this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkToolTipManager::vf0 */
uint F_005d2760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0058d1f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005d2790 */
uint F_005d2790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00488dc0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005d27c0 */
uint F_005d27c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d27c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0058d4b0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentListItemRenderer::vf23 */
uint F_005d27f0(void)
{
  GEN_ENTER(0x5d27f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_005d2800 */
uint F_005d2800(unsigned int gen_a0)
{
  GEN_ENTER(0x5d2800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: FUN_005d2810 */
byte F_005d2810(unsigned int gen_a0)
{
  GEN_ENTER(0x5d2810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xf0) & 1;
}

/* ref: FUN_005d2820 */
unsigned int F_005d2820(void)
{
  GEN_ENTER(0x5d2820u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_005d2830 */
uint F_005d2830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005d32d0((undefined *)((int)this + -0x130),param_1);
  return uVar1;
}

/* ref: FUN_005d2840 */
uint F_005d2840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d12e0(this,1);
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
      F_005d12e0(this,1);
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

/* ref: FUN_005d28d0 */
uint F_005d28d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d28d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d1360(this,1);
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
      F_005d1360(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_005d2940 */
uint F_005d2940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2940u, gen_a0, gen_a1, 0u, 0u);
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
    F_005d13d0(this,param_1 - uVar2);
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

/* ref: FUN_005d29e0 */
uint F_005d29e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d29e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  uVar1 = (*(uint *)&gen_args[1]);
  uVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0]) >> 3;
  if (uVar2 <= (*(uint *)&gen_args[1])) {
    if (uVar2 < (*(uint *)&gen_args[1])) {
      F_0048a220((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]) - uVar2);
      puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      for (iVar4 = uVar1 - ((int)puVar3 - *(int *)(*(undefined * PTR32 *)&gen_args[0]) >> 3); iVar4 != 0; iVar4 = iVar4 + -1) {
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = (*(undefined4 *)(gen_frame + 0x8));
        }
        F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
        puVar3 = puVar3 + 2;
      }
      uVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) +
              ((*(uint *)&gen_args[1]) - (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0]) >> 3)) * 8;
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar2;
    }
    return uVar2;
  }
  uVar2 = F_00488040((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]),*(int *)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 8,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
  return uVar2;
}

/* ref: FUN_005d2a80 */
uint F_005d2a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2a80u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_005d14b0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_005d14b0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_005d2af0 */
uint F_005d2af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2af0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_005d1560(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_005d1560(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_005d2b60 */
uint F_005d2b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2b60u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_005d1610(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_005d1610(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_005d2bd0 */
uint F_005d2bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2bd0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_005d16c0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_005d16c0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_005d2c40 */
uint F_005d2c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2c40u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_005d1770(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_005d1770(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_005d2cb0 */
uint F_005d2cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2cb0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_005d1820(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_005d1820(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_005d2d20 */
uint F_005d2d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2d20u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_005d18d0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_005d18d0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_005d2d90 */
uint F_005d2d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2d90u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_005d1980(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_005d1980(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_005d2e00 */
uint F_005d2e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2e00u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_005d1a30(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_005d1a30(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_005d2e70 */
unsigned int F_005d2e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xb0;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xb0;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_005d1ae0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_005d1ae0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_005d2f00 */
uint F_005d2f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d2f00u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_005d1bc0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_005d1bc0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_005d2f70 */
uint F_005d2f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d2f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x1c,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 6) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
    puVar1[5] = param_2[2];
  }
  F_005cb720(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_005d2fd0 */
uint F_005d2fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d2fd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005d1cc0(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return uVar1;
}

/* ref: FUN_005d3000 */
unsigned int F_005d3000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x5d3000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int * param_7 = (int *)(uintptr_t)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_7 != (int *)0x0) && ((undefined4 *)*param_7 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_7;
  }
  uVar2 = 0;
  if ((param_4 != (int *)0x0) && ((undefined4 *)*param_4 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_4;
  }
  uVar1 = 0;
  if ((param_1 != (int *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_1;
  }
  F_005d1db0(this,uVar1,0,param_3,uVar2,0,param_6,uVar3,0,param_9,param_9);
  return 0;
}

/* ref: FUN_005d3090 */
unsigned int F_005d3090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x5d3090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int * param_7 = (int *)(uintptr_t)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_7 != (int *)0x0) && ((undefined4 *)*param_7 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_7;
  }
  uVar2 = 0;
  if ((param_4 != (int *)0x0) && ((undefined4 *)*param_4 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_4;
  }
  uVar1 = 0;
  if ((param_1 != (int *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_1;
  }
  F_005d2010(this,uVar1,0,param_3,uVar2,0,param_6,uVar3,0,param_9,param_9);
  return 0;
}

/* ref: FUN_005d3120 */
unsigned int F_005d3120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (*(int *)((int)this + 4) == *(int *)((int)this + 8)) {
    F_005d2af0(this,1);
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_005d3150 */
uint F_005d3150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3150u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_005d2270(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_005d2270(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_005d31c0 */
uint F_005d31c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d31c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0058f730((undefined *)((int)this + 4),param_1,param_2,6);
  return uVar1;
}

/* ref: FUN_005d31e0 */
uint F_005d31e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d31e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0058f7a0((undefined *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: Component::GUI2::AtkUnitBase::vf0 */
uint F_005d31f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d31f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkGroupManager::vf0 */
uint F_005d3220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a0fd8));
  F_00588690(this + 4);
  F_00588690(this + 0x10);
  F_005c87d0(this + 0x10);
  F_005c87d0(this + 4);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkAddonControl::vf0 */
uint F_005d3270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00590cc0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentRadioButton::vf0 */
uint F_005d32a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d32a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00590ed0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentListItemRenderer::vf0 */
uint F_005d32d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d32d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00591270(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005d3300 */
unsigned int F_005d3300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2a80(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2a80(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_005d3370 */
uint F_005d3370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (this != param_1) {
    if (param_1[4] == 0) {
      F_005c4fe0(this);
      return (uint)this;
    }
    if ((uint)param_1[4] <= *(uint *)((int)this + 0x10)) {
      F_005ce4e0(&(*(int * PTR32 *)(gen_frame + 0x4)),*param_1,0,param_1[3],*param_1,0,param_1[4] + param_1[3],
                   *(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc));
      uVar3 = 0;
      if ((*(int * PTR32 *)this != (int *)0x0) &&
         (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
        uVar3 = *puVar1;
      }
      uVar2 = 0;
      if (((*(int * PTR32 *)(gen_frame + 0x4)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0)) {
        uVar2 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x4));
      }
      F_005cdfb0(this,&(*(int * PTR32 *)(gen_frame + 0x4)),uVar2,0,(*(undefined4 *)(gen_frame + 0xc)),uVar3,0,
                   *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc));
      return (uint)this;
    }
    (*(undefined4 *)(gen_frame + 0xc)) = param_1[3];
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)*param_1;
    F_005c5ba0(&(*(int * PTR32 *)(gen_frame + 0x4)),((int * PTR32 *)(gen_frame + 0x10)),*(uint *)((int)this + 0x10));
    uVar3 = 0;
    if ((((int * PTR32 *)(gen_frame + 0x10))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x10))[0])) != (undefined4 *)0x0)) {
      uVar3 = *((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x10))[0]));
    }
    F_005ce4e0(&(*(int * PTR32 *)(gen_frame + 0x4)),*param_1,0,param_1[3],uVar3,0,(*(undefined4 *)(gen_frame + 0x18)),*(undefined4 *)this,0,
                 *(undefined4 *)((int)this + 0xc));
    uVar3 = 0;
    if ((((int * PTR32 *)(gen_frame + 0x10))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x10))[0])) != (undefined4 *)0x0)) {
      uVar3 = *((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x10))[0]));
    }
    uVar2 = 0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      uVar2 = *puVar1;
    }
    F_005d3000(this,uVar2,0,*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc),uVar3,0,(*(undefined4 *)(gen_frame + 0x18))
                 ,*param_1,0,param_1[4] + param_1[3]);
  }
  return (uint)this;
}

/* ref: FUN_005d3530 */
uint F_005d3530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (this != param_1) {
    if (param_1[4] == 0) {
      F_005c5100(this);
      return (uint)this;
    }
    if ((uint)param_1[4] <= *(uint *)((int)this + 0x10)) {
      F_005ce590(&(*(int * PTR32 *)(gen_frame + 0x4)),*param_1,0,param_1[3],*param_1,0,param_1[4] + param_1[3],
                   *(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc));
      uVar3 = 0;
      if ((*(int * PTR32 *)this != (int *)0x0) &&
         (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
        uVar3 = *puVar1;
      }
      uVar2 = 0;
      if (((*(int * PTR32 *)(gen_frame + 0x4)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0)) {
        uVar2 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x4));
      }
      F_005ce140(this,&(*(int * PTR32 *)(gen_frame + 0x4)),uVar2,0,(*(undefined4 *)(gen_frame + 0xc)),uVar3,0,
                   *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc));
      return (uint)this;
    }
    (*(undefined4 *)(gen_frame + 0xc)) = param_1[3];
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)*param_1;
    F_005c5be0(&(*(int * PTR32 *)(gen_frame + 0x4)),((int * PTR32 *)(gen_frame + 0x10)),*(uint *)((int)this + 0x10));
    uVar3 = 0;
    if ((((int * PTR32 *)(gen_frame + 0x10))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x10))[0])) != (undefined4 *)0x0)) {
      uVar3 = *((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x10))[0]));
    }
    F_005ce590(&(*(int * PTR32 *)(gen_frame + 0x4)),*param_1,0,param_1[3],uVar3,0,(*(undefined4 *)(gen_frame + 0x18)),*(undefined4 *)this,0,
                 *(undefined4 *)((int)this + 0xc));
    uVar3 = 0;
    if ((((int * PTR32 *)(gen_frame + 0x10))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x10))[0])) != (undefined4 *)0x0)) {
      uVar3 = *((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x10))[0]));
    }
    uVar2 = 0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      uVar2 = *puVar1;
    }
    F_005d3090(this,uVar2,0,*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc),uVar3,0,(*(undefined4 *)(gen_frame + 0x18))
                 ,*param_1,0,param_1[4] + param_1[3]);
  }
  return (uint)this;
}

/* ref: FUN_005d36f0 */
unsigned int F_005d36f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d36f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2af0(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2af0(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_005d3760 */
unsigned int F_005d3760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2b60(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2b60(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_005d37d0 */
uint F_005d37d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d37d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2bd0(this,1);
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
      F_005d2bd0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_005d3840 */
unsigned int F_005d3840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2c40(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2c40(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_005d38b0 */
unsigned int F_005d38b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d38b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2cb0(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2cb0(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_005d3920 */
unsigned int F_005d3920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2d20(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2d20(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_005d3990 */
unsigned int F_005d3990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2d90(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2d90(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_005d3a00 */
byte F_005d3a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2e00(this,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (byte)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2e00(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (byte)puVar3;
}

/* ref: FUN_005d3a70 */
unsigned int F_005d3a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_005d2e70(this,1);
    }
    uVar2 = ((int)(param_1 - uVar2) / 0xb0) * 0xb0 + *(int *)this;
  }
  else {
    uVar2 = param_1;
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_005d2e70(this,1);
    }
  }
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  if (this_00 != (undefined *)0x0) {
    F_0042cbc0(this_00,uVar2);
    F_0042cbc0((undefined *)((int)this_00 + 0x54),uVar2 + 0x54);
    *(undefined4 *)((int)this_00 + 0xa8) = *(undefined4 *)(uVar2 + 0xa8);
    *(undefined4 *)((int)this_00 + 0xac) = *(undefined4 *)(uVar2 + 0xac);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xb0;
  return 0;
}

/* ref: FUN_005d3b10 */
unsigned int F_005d3b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2f00(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005d2f00(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_005d3b80 */
uint F_005d3b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d3b80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_005d2af0(this,1);
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
    F_005c8080(iVar4,iVar1,iVar2,0,0);
  }
  *param_1 = *(int *)this + iVar3;
  return (uint)param_1;
}

/* ref: FUN_005d3bf0 */
unsigned int F_005d3bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (*(int *)((int)this + 4) == *(int *)((int)this + 8)) {
    F_005d3150(this,1);
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: Component::GUI2::AtkComponentTab::vf0 */
uint F_005d3c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10a1aec));
  F_00590ed0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005d3c50 */
uint F_005d3c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d3c50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_005d2af0(this,1);
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
    F_005c8080(iVar4,iVar1,iVar2,0,0);
  }
  *param_1 = *(int *)this + iVar3;
  return (uint)param_1;
}

/* ref: FUN_005d3cc0 */
uint F_005d3cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d3cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_005d3150(this,1);
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
    F_005cc0f0(iVar4,iVar1,iVar2,0,0);
  }
  *param_1 = *(int *)this + iVar3;
  return (uint)param_1;
}

/* ref: FUN_005d3d30 */
uint F_005d3d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d3d30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_005d3150(this,1);
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
    F_005cc0f0(iVar4,iVar1,iVar2,0,0);
  }
  *param_1 = *(int *)this + iVar3;
  return (uint)param_1;
}

/* ref: FUN_005d3da0 */
unsigned int F_005d3da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)((int)this + 8) == *(int *)((int)this + 0xc)) {
    F_005d3150((int *)((int)this + 4),1);
  }
  if (*(undefined4 * PTR32 *)((int)this + 8) != (undefined4 *)0x0) {
    **(undefined4 * PTR32 *)((int)this + 8) = param_1;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 4;
  iVar2 = *(int *)((int)this + 8);
  iVar3 = *(int *)((int)this + 4);
  iVar1 = iVar2 + -4;
  if ((iVar3 != iVar1) && (iVar1 != iVar2)) {
    F_005cc0f0(iVar3,iVar1,iVar2,0,0);
  }
  return 0;
}

/* ref: FUN_005d3e00 */
uint F_005d3e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3e00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if (in_ecx == 0) {
    uVar1 = F_005997b0(0,param_2);
    return uVar1;
  }
  uVar1 = F_005997b0(*(undefined4 *)(in_ecx + 0x70),param_2);
  return uVar1;
}

/* ref: FUN_005d3e20 */
uint F_005d3e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3e20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005997b0(*(undefined4 *)(in_ecx + 0x90),param_2);
  return uVar1;
}

/* ref: Component::GUI2::AtkUnitBase::vf35 */
unsigned int F_005d3e30(unsigned int gen_a0)
{
  GEN_ENTER(0x5d3e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0xa4);
  if (iVar1 != 0) {
    F_0059b1c0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x18),iVar1,this,0);
    *(int *)(this + 0xa4) = iVar1;
  }
  return 0;
}

/* ref: FUN_005d3e60 */
uint F_005d3e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0059ba30(this,2,param_1,0,0);
  return uVar1;
}

/* ref: FUN_005d3e80 */
uint F_005d3e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0059ba30(this,3,param_1,0,0);
  return uVar1;
}

/* ref: FUN_005d3ea0 */
uint F_005d3ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = 0;
  if ((*(int *)((int)this + 0x6c) != 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x1c))), uVar1 = 0, this_00 != (undefined *)0x0)) {
    uVar1 = F_0059ba30(this_00,2,param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_005d3ed0 */
uint F_005d3ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d3ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = 0;
  if ((*(int *)((int)this + 0x6c) != 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x1c))), uVar1 = 0, this_00 != (undefined *)0x0)) {
    uVar1 = F_0059ba30(this_00,3,param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_005d3f00 */
byte F_005d3f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d3f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_005a0180((int)this + 4,param_1,param_2);
  return bVar1;
}

/* ref: FUN_005d3f20 */
byte F_005d3f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d3f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_005a0180((int)this + 0x10,param_1,param_2);
  return bVar1;
}

/* ref: FUN_005d3f40 */
uint F_005d3f40(unsigned int gen_a0)
{
  GEN_ENTER(0x5d3f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x10a1b64));
  F_00492c50((undefined *)((int)this + 0x350));
  F_00429760(*(undefined4 *)((int)this + 0x350),8,0x2c4);
  *(undefined4 *)((int)this + 0x350) = 0;
  F_0042c880((undefined *)((int)this + 0x2fc));
  F_0042c880((undefined *)((int)this + 0x2a8));
  iVar2 = 1;
  puVar3 = (undefined4 *)((int)this + 0x2a8);
  do {
    puVar4 = puVar3 + -7;
    if (3 < (uint)puVar3[-2]) {
      F_00429760(*puVar4,puVar3[-2] * 4 + 4,0x3c);
    }
    iVar2 = iVar2 + -1;
    puVar3[-2] = 3;
    puVar3[-3] = 0;
    *puVar4 = 0;
    puVar3 = puVar4;
  } while (-1 < iVar2);
  this_00 = (undefined *)((int)this + 0x270);
  iVar2 = 2;
  do {
    this_00 = (undefined *)((int)this_00 + -0x54);
    F_0042c880(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_0042c880((undefined *)((int)this + 0x120));
  F_0042c880((undefined *)((int)this + 0xcc));
  F_005c9860((undefined *)((int)this + 0x74));
  F_00429760(*(undefined4 *)((int)this + 0x74),8,0x2c0);
  *(undefined4 *)((int)this + 0x74) = 0;
  uVar1 = F_00a29530(this);
  return uVar1;
}

/* ref: Component::Text::MacroDecoder::vf1 */
uint F_005d4030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf2 */
uint F_005d4040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf3 */
uint F_005d4050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf20 */
uint F_005d4060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf21 */
uint F_005d4070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf22 */
uint F_005d4080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf23 */
uint F_005d4090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf24 */
uint F_005d40a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d40a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf25 */
uint F_005d40b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d40b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf26 */
uint F_005d40c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d40c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf27 */
uint F_005d40d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d40d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf28 */
uint F_005d40e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d40e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf29 */
uint F_005d40f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d40f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf30 */
uint F_005d4100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf31 */
uint F_005d4110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf32 */
uint F_005d4120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf33 */
uint F_005d4130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf34 */
uint F_005d4140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf35 */
uint F_005d4150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf36 */
uint F_005d4160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf37 */
uint F_005d4170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf38 */
uint F_005d4180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf39 */
uint F_005d4190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf0 */
uint F_005d41a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d41a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005d3f40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkModule::vf37 */
byte F_005d41d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d41d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x20dc8) != 0;
}

/* ref: Component::GUI2::AtkModule::vf41 */
uint F_005d41e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d41e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x2223c) + 0x44))))
                    (this + 0x2223c,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf49 */
unsigned int F_005d4200(void)
{
  GEN_ENTER(0x5d4200u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf50 */
unsigned int F_005d4210(void)
{
  GEN_ENTER(0x5d4210u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf51 */
unsigned int F_005d4220(void)
{
  GEN_ENTER(0x5d4220u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf52 */
unsigned int F_005d4230(void)
{
  GEN_ENTER(0x5d4230u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf53 */
unsigned int F_005d4240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf54 */
byte F_005d4250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d4250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 1;
}

/* ref: Component::GUI2::AtkModule::vf55 */
uint F_005d4260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf56 */
uint F_005d4270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf57 */
byte F_005d4280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf58 */
unsigned int F_005d4290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf59 */
unsigned int F_005d42a0(void)
{
  GEN_ENTER(0x5d42a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf60 */
byte F_005d42b0(void)
{
  GEN_ENTER(0x5d42b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf61 */
unsigned int F_005d42c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d42c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_005d42d0 */
uint F_005d42d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d42d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -8) + 0xec))))
                    ((int)this + -8,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  return uVar1;
}

/* ref: FUN_005d42e0 */
uint F_005d42e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d42e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005d4590((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_005d42f0 */
uint F_005d42f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d42f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005d4590((undefined *)((int)this + -8),param_1);
  return uVar1;
}

/* ref: FUN_005d4300 */
uint F_005d4300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005d46c0((undefined *)((int)this + -0x16c),param_1);
  return uVar1;
}

/* ref: FUN_005d4310 */
uint F_005d4310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005d46c0((undefined *)((int)this + -0x170),param_1);
  return uVar1;
}

/* ref: FUN_005d4320 */
uint F_005d4320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * this_00;
  uint * puVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  puVar1 = param_1 + 4;
  this_00 = (uint *)((int)this + 0x10);
  *this_00 = param_1[4];
  if ((*puVar1 & 0xf) == 9) {
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  else {
    *this_00 = *puVar1 & 0xf;
    *(undefined4 *)((int)this + 0x14) = param_1[5];
  }
  if ((*puVar1 >> 5 & 1) != 0) {
    F_00594f30(this_00,puVar1);
  }
  return (uint)this;
}

/* ref: FUN_005d4380 */
uint F_005d4380(unsigned int gen_a0)
{
  GEN_ENTER(0x5d4380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)(uintptr_t)this) >> 5;
  if ((uVar1 & 1) != 0) {
    uVar1 = F_005a0260(this);
  }
  *(undefined4 *)this = 1;
  return uVar1;
}

/* ref: FUN_005d43a0 */
uint F_005d43a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d43a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 >> 5 & 1) != 0) {
    uVar1 = F_005a0260(this);
    *(undefined1 *)((int)this + 4) = (undefined1)param_1;
    *(undefined4 *)this = 2;
    return uVar1;
  }
  *(undefined1 *)((int)this + 4) = (undefined1)param_1;
  *(undefined4 *)this = 2;
  return uVar1 >> 5;
}

/* ref: FUN_005d43e0 */
uint F_005d43e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d43e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 >> 5 & 1) != 0) {
    uVar1 = F_005a0260(this);
    *(undefined4 *)((int)this + 4) = param_1;
    *(undefined4 *)this = 4;
    return uVar1;
  }
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)this = 4;
  return uVar1 >> 5;
}

/* ref: FUN_005d4420 */
uint F_005d4420(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5d4420u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *param_1 >> 5;
  if ((uVar1 & 1) != 0) {
    uVar1 = F_005a0260(param_1);
  }
  *param_1 = 5;
  param_1[1] = (uint)gen_fl2bits(param_2);
  return uVar1;
}

/* ref: FUN_005d4450 */
uint F_005d4450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 >> 5 & 1) != 0) {
    uVar1 = F_005a0260(this);
    *(undefined4 *)((int)this + 4) = param_1;
    *(undefined4 *)this = 7;
    return uVar1;
  }
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)this = 7;
  return uVar1 >> 5;
}

/* ref: FUN_005d4490 */
uint F_005d4490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 >> 5 & 1) != 0) {
    uVar1 = F_005a0260(this);
    *(undefined4 *)((int)this + 4) = param_1;
    *(undefined4 *)this = 8;
    return uVar1;
  }
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)this = 8;
  return uVar1 >> 5;
}

/* ref: FUN_005d44d0 */
uint F_005d44d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d44d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint * this_00;
  uint * puVar1;
  
  this_00 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar1 = &(*(uint *)&gen_args[1]);
  if (this_00 != puVar1) {
    if ((*this_00 >> 5 & 1) != 0) {
      F_005a0260(this_00);
    }
    puVar1 = (uint *)((*(uint *)&gen_args[1]) & 0xf);
    if (puVar1 != (uint *)0x9) {
      *this_00 = (uint)puVar1;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(undefined4 *)&gen_args[2]);
    }
    if (((*(uint *)&gen_args[1]) >> 5 & 1) != 0) {
      puVar1 = (uint *)F_00594f30(this_00,&(*(uint *)&gen_args[1]));
    }
  }
  if (((*(uint *)&gen_args[1]) >> 5 & 1) != 0) {
    puVar1 = (uint *)F_005a0260(&(*(uint *)&gen_args[1]));
  }
  return (uint)puVar1;
}

/* ref: FUN_005d4530 */
uint F_005d4530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5d4530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint * this_00;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_4;
  this_00 = (uint *)((int)this + 0x10);
  *this_00 = *param_5;
  if ((*param_5 & 0xf) == 9) {
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  else {
    *this_00 = *param_5 & 0xf;
    *(uint *)((int)this + 0x14) = param_5[1];
  }
  if ((*param_5 >> 5 & 1) != 0) {
    F_00594f30(this_00,param_5);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkModule::vf0 */
uint F_005d4590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005a1d20(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005d45c0 */
uint F_005d45c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d45c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * this_00;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if ((param_1 & 2) != 0) {
    iVar1 = *(int *)((int)this + -4);
    iVar3 = iVar1 + -1;
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)((int)this + -4);
    if (-1 < iVar3) {
      puVar4 = (undefined4 *)((int)this + iVar1 * 8 + 4);
      do {
        puVar5 = puVar4 + -2;
        if (((uint)puVar4[-3] >> 5 & 1) != 0) {
          this_00 = (undefined4 *)*puVar5;
          if (this_00 != (undefined4 *)0x0) {
            uVar2 = puVar4[-3] & 0xf;
            if (uVar2 == 9) {
              F_00488040(this_00,((undefined1 *)(gen_frame + 0x4)),*this_00,this_00[1]);
              F_00488dc0(this_00);
              F_00406ad0(this_00);
            }
            else if ((uVar2 == 6) || (uVar2 == 7)) {
              F_00406ad0(this_00);
              *puVar5 = 0;
            }
          }
          *puVar5 = 0;
        }
        iVar3 = iVar3 + -1;
        puVar4[-3] = 0;
        puVar4 = puVar5;
      } while (-1 < iVar3);
    }
    if ((param_1 & 1) != 0) {
      F_00406b30((*(int * PTR32 *)(gen_frame + 0x8)));
    }
    return (uint)(*(int * PTR32 *)(gen_frame + 0x8));
  }
  if ((*(uint *)((int)(uintptr_t)this) >> 5 & 1) != 0) {
    F_005a0260(this);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentTextInput::vf0 */
uint F_005d46c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d46c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005a3b50(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005d46f0 */
uint F_005d46f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d46f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  this_00 = (undefined *)F_00406bd0(0x184,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_00786090(this_00);
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

/* ref: FUN_005d4760 */
unsigned int F_005d4760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4760u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_005d4320(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_005d4780 */
uint F_005d4780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((*(uint *)((int)this + 0x10) >> 5 & 1) != 0) {
    F_005a0260((undefined *)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005d47c0 */
uint F_005d47c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d47c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if (*(char *)((int)this + 0x80) != '\0') {
    in_EAX = F_005aa300(this,1,param_1,9);
  }
  return in_EAX;
}

/* ref: Component::GUI2::AtkUnitBase::vf5 */
uint F_005d47e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d47e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: Component::GUI2::AtkStage::vf1 */
byte F_005d4800(void)
{
  GEN_ENTER(0x5d4800u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_005d4810 */
uint F_005d4810(unsigned int gen_a0)
{
  GEN_ENTER(0x5d4810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  F_0042c880((undefined *)((int)this + 600));
  F_00492c50((undefined *)((int)this + 0x240));
  F_00429760(*(undefined4 *)((int)this + 0x240),8,0x2c4);
  *(undefined4 *)((int)this + 0x240) = 0;
  iVar3 = *(int *)((int)this + 0x23c);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0x10);
    F_00406ad0(iVar3);
    iVar3 = iVar2;
  }
  *(undefined4 *)((int)this + 0x23c) = 0;
  iVar3 = *(int *)((int)this + 0x220);
  if (iVar3 != 0) {
    F_00429760(iVar3,(*(int *)((int)this + 0x228) - iVar3 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c4) = (*(undefined * PTR32 (*)[3])REFP(0x10a1dbc));
  if ((*(uint *)((int)this + 0x1c8) >> 5 & 1) != 0) {
    F_005a0260((undefined *)((int)this + 0x1c8));
  }
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c4) = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  F_0058d1f0((undefined *)((int)this + 0xe0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[1])REFP(0x10a0fd8));
  F_00588690((undefined *)((int)this + 0xc4));
  F_00588690((undefined *)((int)this + 0xd0));
  F_005c87d0((undefined *)((int)this + 0xd0));
  F_005c87d0((undefined *)((int)this + 0xc4));
  puVar1 = (undefined4 *)((int)this + 0x3c);
  *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10a0d1c));
  if (*(int *)((int)this + 0xa8) != 0) {
    F_00583770(((undefined *)GEN_TOP((*(int *)((int)this + 0xa8) + 0x23c))),0x49,0,puVar1,0);
    *(undefined4 *)((int)this + 0xa8) = 0;
  }
  uVar4 = F_0042c880((undefined *)((int)this + 0x50));
  *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  return (uint)uVar4;
}

/* ref: Component::GUI2::AtkDialogue::vf0 */
uint F_005d4970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a1dbc));
  if ((*(uint *)(this + 4) >> 5 & 1) != 0) {
    F_005a0260(this + 4);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005d49c0 */
unsigned int F_005d49c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d49c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_005d4320(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_005d49e0 */
uint F_005d49e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d49e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10) >> 5;
  if ((uVar1 & 1) != 0) {
    uVar1 = F_005a0260((undefined *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return uVar1;
}

/* ref: Component::GUI2::AtkUnitBase::vf6 */
uint F_005d4a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d4a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005b0610(this,param_1,1,param_2);
  return uVar1;
}

/* ref: Component::GUI2::AtkUnitBase::vf7 */
uint F_005d4a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005b0610(this,param_1,1,0);
  return uVar1;
}

/* ref: Component::GUI2::AtkStage::vf0 */
uint F_005d4a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005d4810(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005d4a80 */
uint F_005d4a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_005d0180(this,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0x18,0,400);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + uVar2 * 4);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_005d4320(this_00,param_1);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar1;
}

/* ref: FUN_005d4af0 */
uint F_005d4af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4af0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 5;
  if ((uVar1 & 1) != 0) {
    uVar1 = F_005a0260((undefined *)(param_2 + 0x10));
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  return uVar1;
}

/* ref: FUN_005d4b20 */
unsigned int F_005d4b20(unsigned int gen_a0)
{
  GEN_ENTER(0x5d4b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x10) != 0) {
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4)));
    if ((*(uint *)(iVar2 + 0x10) >> 5 & 1) != 0) {
      F_005a0260((undefined *)(iVar2 + 0x10));
    }
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return 0;
}

/* ref: FUN_005d4b70 */
uint F_005d4b70(unsigned int gen_a0)
{
  GEN_ENTER(0x5d4b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar3 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
    if (*(uint *)((int)this + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)((int)this + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
    uVar3 = *(uint *)(iVar2 + 0x10) >> 5;
    if ((uVar3 & 1) != 0) {
      uVar3 = F_005a0260((undefined *)(iVar2 + 0x10));
    }
    *(undefined4 *)(iVar2 + 0x10) = 0;
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_005d4bc0 */
uint F_005d4bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d4bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * this_00;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar3 = *(int *)((int)this + 0x10);
  while (iVar3 != 0) {
    if (*(int *)((int)this + 0x10) != 0) {
      uVar2 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
      if (*(uint *)((int)this + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)((int)this + 8);
      }
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4)));
      if ((*(uint *)(iVar3 + 0x10) >> 5 & 1) != 0) {
        this_00 = *(undefined4 * PTR32 *)(iVar3 + 0x14);
        if (this_00 != (undefined4 *)0x0) {
          uVar2 = *(uint *)(iVar3 + 0x10) & 0xf;
          if (uVar2 == 9) {
            F_00488040(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*this_00,this_00[1]);
            F_00488dc0(this_00);
            F_00406ad0(this_00);
          }
          else if ((uVar2 == 6) || (uVar2 == 7)) {
            F_00406ad0(this_00);
            *(undefined4 *)(iVar3 + 0x14) = 0;
          }
        }
        *(undefined4 *)(iVar3 + 0x14) = 0;
      }
      *(undefined4 *)(iVar3 + 0x10) = 0;
      piVar1 = (int *)((int)this + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar3 = *(int *)((int)this + 0x10);
  }
  iVar3 = *(int *)((int)this + 8);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))),0x18,400);
    }
  }
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar2 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_005d4cc0 */
uint F_005d4cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d4cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_005d4bc0(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: Component::GUI2::AtkMessageBoxManager::vf0 */
uint F_005d4cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d4cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x30);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a1dd8));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,this);
  }
  F_005d4bc0(this + 0x14);
  F_00429760(*(undefined4 *)(this + 0x14),8,400);
  *(undefined4 *)(this + 0x14) = 0;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005d4d60 */
unsigned int F_005d4d60(float gen_a0)
{
  GEN_ENTER(0x5d4d60u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_005d4d80 */
uint F_005d4d80(unsigned int gen_a0)
{
  GEN_ENTER(0x5d4d80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b79ee0(param_1);
  F_00549810(&REFG(undefined4, 0x1375b90));
  F_00a819c0(&REFG(undefined, 0x14a9e40));
  F_00a4aa50(&REFG(undefined, 0x14a7394));
  uVar1 = F_00ab8440(&REFG(undefined, 0x14b5180),param_1);
  return uVar1;
}

/* ref: FUN_005d4dc0 */
unsigned int F_005d4dc0(void)
{
  GEN_ENTER(0x5d4dc0u, 0u, 0u, 0u, 0u);
  F_00a4aa30(&REFG(undefined, 0x14a7394));
  F_00ab5620(&REFG(undefined4, 0x14bcc80));
  F_00ac2010(&REFG(undefined, 0x14bcf40));
  return 0;
}

/* ref: FUN_005d4de0 */
uint F_005d4de0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d4de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005ecf90();
  F_00ab6700();
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_005d4e10 */
byte F_005d4e10(unsigned int gen_a0)
{
  GEN_ENTER(0x5d4e10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (((REFG(int, 0x1379694) != 0) && (*(int *)(in_ecx + 4) == 2)) &&
     ((REFG(int, 0x14bcc80) == 0 || (REFG(int, 0x14bcc80) == 1)))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_005d4e40 */
byte F_005d4e40(unsigned int gen_a0)
{
  GEN_ENTER(0x5d4e40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab2a20(param_1);
  if ((uVar1 != 0) && (*(char *)(uVar1 + 0x10) != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005d4e70 */
byte F_005d4e70(void)
{
  GEN_ENTER(0x5d4e70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_005d4e80 */
uint F_005d4e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d4e80u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0xc) != 0xd4) goto LAB_005d4ec1;
  uVar1 = *(uint *)(in_ecx + 0x14);
  if (uVar1 < 0x1683f) {
    if (uVar1 == 0x1683e) goto LAB_005d4ef5;
    if ((0x1683d < uVar1) || ((uVar1 < 0x1683a && ((uVar1 < 0x160e2 || (0x160e4 < uVar1))))))
    goto LAB_005d4ec1;
  }
  else if (uVar1 != 0x1683f) {
    if (uVar1 != 0x16840) goto LAB_005d4ec1;
LAB_005d4ef5: ;
    if (param_3 == 0x50) {
      return 0x6b;
    }
    goto LAB_005d4ec1;
  }
  if (param_3 == 0x50) {
    return 0x5e;
  }
LAB_005d4ec1: ;
  if (((param_2 != 0x40fd9b) && (param_2 != 0x4203fb)) && (param_2 != 0x42122e)) {
    return param_3;
  }
  if (param_3 == 0x50) {
    return 0x5e;
  }
  return param_3;
}

/* ref: FUN_005d4f10 */
uint F_005d4f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d4f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = REFG(int, 0x137104c);
  uVar2 = 0;
  if ((char)param_1 == '\0') {
    uVar3 = param_2 * 0x3c + param_3;
    iVar4 = ((((((int)param_2 >> 0x1f) << 4 | param_2 >> 0x1c) - ((int)param_2 >> 0x1f)) -
             (uint)(param_2 * 0x10 < param_2)) * 4 | param_2 * 0xf >> 0x1e) + ((int)param_3 >> 0x1f)
            + (uint)CARRY4(param_2 * 0x3c,param_3);
    uVar2 = uVar3 * 0x3c;
    *(undefined1 *)(REFG(int, 0x137104c) + 0x1240) = 1;
    *(uint *)(iVar1 + 0x1238) = uVar2;
    *(uint *)(iVar1 + 0x123c) =
         (((iVar4 * 0x10 | uVar3 >> 0x1c) - iVar4) - (uint)(uVar3 * 0x10 < uVar3)) * 4 |
         uVar3 * 0xf >> 0x1e;
  }
  else {
    *(undefined4 *)(REFG(int, 0x137104c) + 0x1238) = 0;
    *(undefined4 *)(iVar1 + 0x123c) = 0;
    if (*(char *)(iVar1 + 0x1230) != '\0') {
      *(undefined1 *)(iVar1 + 0x1230) = 0;
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_005d4fa0 */
uint F_005d4fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d4fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint local_c;
  undefined4 local_8;
  
  local_c = CONCAT22((undefined2)param_2,(undefined2)param_1);
  local_8 = CONCAT22((undefined2)param_4,(undefined2)param_3);
  *(uint *)((int)this + 0x34) = local_c;
  *(undefined4 *)((int)this + 0x38) = local_8;
  return local_c;
}

/* ref: FUN_005d4fe0 */
uint F_005d4fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5d4fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  uVar1 = F_00ab1c90((*(uint *)&gen_args[1]));
  uVar2 = 0;
  if (uVar1 != 0) {
    F_00ab6670((uint)*(ushort *)(uVar1 + 0x24));
    F_005f9ab0((*(uint *)(uVar1 + 4) & 0xffffff) + uVar1 + 4,~-(uint)((*(int *)&gen_args[2]) != 0) & (*(uint *)&gen_args[1]),
                 (*(undefined4 *)&gen_args[3]),(*(int *)&gen_args[2]),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34);
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = (*(int *)&gen_args[2]);
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = (undefined1)(*(undefined4 *)&gen_args[4]);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = (*(uint *)&gen_args[1]);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0xffffffff;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = *(undefined1 *)(uVar1 + 0x2a);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 1;
    uVar2 = (uint)*(ushort *)(uVar1 + 0x22);
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = uVar2;
    if ((char)(*(undefined4 *)&gen_args[5]) != '\0') {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar2 = 0;
      if (piVar3 != (int *)0x0) {
        uVar4 = 0x1f;
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
        this_00 = (undefined *)F_00763050(uVar2,uVar4);
        uVar2 = 0;
        if (this_00 != (undefined *)0x0) {
          uVar2 = F_008decc0(this_00,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),
                               *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))));
        }
      }
      uVar1 = 0;
      do {
        if ((((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar1])) != (undefined *)0x0) &&
           (uVar2 = F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar1]))), uVar2 != 0)) {
          F_00b76ca0(uVar2 + 0x1340);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 0x158);
    }
  }
  return uVar2;
}

/* ref: FUN_005d50e0 */
unsigned int F_005d50e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d50e0u, gen_a0, gen_a1, 0u, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  float fVar1;
  byte bVar2;
  uint uVar3;
  undefined * this;
  int * piVar4;
  int iVar5;
  float10 fVar6;
  
  iVar5 = REFG(int, 0x137104c);
  if (*(char *)(REFG(int, 0x137104c) + 8) != '\x01') {
    uVar3 = F_00424810(REFG(int, 0x137104c));
    if (uVar3 != 0) {
      uVar3 = F_00424810(iVar5);
      uVar3 = F_00974710(uVar3);
      *in_ecx = (char)uVar3 != '\0';
    }
    if (*(int *)(in_ecx + 4) == 1) {
      bVar2 = F_005d99e0();
      if (bVar2 != 0) {
        *(undefined4 *)(in_ecx + 8) = *(undefined4 *)(in_ecx + 0x18);
        *(undefined4 *)(in_ecx + 0xc) = *(undefined4 *)(in_ecx + 0x1c);
        *(undefined4 *)(in_ecx + 0x14) = *(undefined4 *)(in_ecx + 0x20);
        in_ecx[4] = '\x02';
        in_ecx[5] = '\0';
        in_ecx[6] = '\0';
        in_ecx[7] = '\0';
      }
    }
    F_005424f0(&REFG(undefined, 0x1375b30));
    F_00b75760(&REFG(undefined4, 0x1375b90),iVar5);
    F_00a64810(&REFG(undefined, 0x14a9a18));
    F_005368d0(&REFG(undefined4, 0x1375b90));
    F_00ab6180(&REFG(undefined1, 0x14b5220));
    F_00a4af10(&REFG(undefined, 0x14a7394));
    F_00ab7ac0(&REFG(undefined4, 0x14bcc80));
    F_00ac8d80(&REFG(undefined, 0x14bcf40));
    F_00ae0b60();
    F_00a47c20(&REFG(undefined, 0x14a4230));
    F_00a63370(&REFG(undefined, 0x14a9728));
    F_00a357a0(&REFG(undefined, 0x14a31e0));
    F_00ab8420(&REFG(undefined, 0x14b5180),in_ebx);
    F_00a4fea0();
    F_00a643d0(&REFG(undefined, 0x14a9a18));
    if (REFG(undefined4, 0x1379694) != (int *)0x0) {
      F_00542f00(&REFG(undefined, 0x1305d00),REFG(undefined4, 0x1379694));
    }
    F_00ae0cc0();
    F_00ae12a0();
    F_00b7a5b0(&REFG(undefined, 0x14c5798));
    F_00ae3d00(&REFG(undefined * PTR32, 0x1338d48));
    F_00b70d80(&REFG(undefined4, 0x1375b90));
    F_00a64400();
    F_00a64740(&REFG(undefined, 0x14a9a18));
    F_00a64420(&REFG(undefined, 0x14a9a18));
    if (REFG(int, 0x1488344) != 0) {
      this = (undefined *)F_006b8c00();
      F_007103a0(this);
    }
    F_00a806e0(&REFG(undefined, 0x14a9e40));
    F_00ab04d0(&REFG(undefined, 0x14b5ef0));
    F_00a66dc0(&REFG(undefined, 0x14aa74c));
    F_00a63780(&REFG(undefined, 0x14a9718));
    piVar4 = (int *)F_005369a0(&REFG(undefined4, 0x1375b90));
    if (piVar4 == (int *)0x0) {
      piVar4 = REFG(undefined4, 0x1379694);
    }
    if ((*in_ecx != '\0') || (*(int *)(REFG(int, 0x1375b00) + 0x28) != 0)) {
      F_00b7c2f0(&REFG(undefined, 0x133e5c0));
      F_00b7c3b0();
    }
    F_00ab8e60();
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0xd4))(piVar4);
      F_00b7add0();
    }
    fVar6 = (float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + (float10)*(float *)(in_ecx + 0x2c);
    fVar1 = (float)fVar6;
    *(float *)(in_ecx + 0x2c) = fVar1;
    if ((float10)1 <= (float10)fVar1) {
      iVar5 = (int)fVar6;
      *(int *)(in_ecx + 0x30) = *(int *)(in_ecx + 0x30) + iVar5;
      *(float *)(in_ecx + 0x2c) = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x2c) - (float10)iVar5)));
    }
  }
  return 0;
}

/* ref: FUN_005d5310 */
uint F_005d5310(void)
{
  GEN_ENTER(0x5d5310u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  uVar2 = F_00aaffb0();
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      uVar3 = F_00ab2a20(uVar4);
      if ((uVar3 != 0) && (*(char *)(uVar3 + 0x10) != '\0')) {
        uVar3 = F_0068eb90(uVar4);
        (*(uint *)(gen_frame + 0x4)) = uVar3;
        (*(uint *)(gen_frame + 0x8)) = uVar4;
        F_00b5a800(&(*(uint *)(gen_frame + 0x4)));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  uVar4 = F_00ab0030();
  uVar3 = 0;
  uVar2 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = F_0068ebc0(uVar3);
      (*(uint *)(gen_frame + 0x8)) = uVar3 + 0x20000;
      (*(uint *)(gen_frame + 0x4)) = uVar2;
      bVar1 = F_00b5a800(&(*(uint *)(gen_frame + 0x4)));
      uVar2 = CONCAT31(extraout_var,bVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return uVar2;
}

/* ref: FUN_005d53a0 */
uint F_005d53a0(void)
{
  GEN_ENTER(0x5d53a0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00aaffb0();
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = F_00ab2a20(uVar3);
      if ((uVar2 != 0) && (*(char *)(uVar2 + 0x10) != '\0')) {
        uVar2 = F_0068eb90(uVar3);
        (*(uint *)(gen_frame + 0x4)) = uVar2;
        (*(uint *)(gen_frame + 0x8)) = uVar3;
        F_00b5a620(&(*(uint *)(gen_frame + 0x4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  uVar3 = F_00ab0030();
  uVar2 = 0;
  uVar1 = 0;
  if (uVar3 != 0) {
    do {
      uVar1 = F_0068ebc0(uVar2);
      (*(uint *)(gen_frame + 0x8)) = uVar2 + 0x20000;
      (*(uint *)(gen_frame + 0x4)) = uVar1;
      uVar1 = F_00b5a620(&(*(uint *)(gen_frame + 0x4)));
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return uVar1;
}

/* ref: FUN_005d5430 */
uint F_005d5430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d5430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  REFG(undefined4, 0x14a31e5) = 0;
  F_00a35600();
  F_00aaf7b0(&REFG(undefined4, 0x14bcc80));
  uVar1 = F_00aaf7d0(&REFG(undefined4, 0x14bcc80));
  uVar2 = CONCAT31((int3)((uint)uVar1 >> 8),(undefined1)param_1);
  *(undefined1 *)((int)this + 0x2a) = (undefined1)param_1;
  uVar3 = 0;
  do {
    if ((((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar3])) != (undefined *)0x0) &&
       (uVar2 = F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar3]))), uVar2 != 0)) {
      F_00b76ca0(uVar2 + 0x1340);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x158);
  return uVar2;
}

/* ref: FUN_005d54a0 */
uint F_005d54a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d54a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  
  uVar2 = F_005d4fe0(this,*(undefined4 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20),0,0,
                       0);
  if (REFG(undefined4, 0x1379694) != (undefined *)0x0) {
    uVar2 = F_00a5feb0(REFG(undefined4, 0x1379694));
    uVar2 = F_005f4a00(uVar2);
  }
  uVar4 = 0;
  do {
    pvVar3 = ((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar4]));
    if (pvVar3 != (undefined *)0x0) {
      uVar2 = F_00a5f290(pvVar3);
      if (uVar2 != 0) {
        pvVar3 = (undefined *)F_00a5f290(pvVar3);
        uVar2 = F_00aa1b00(pvVar3);
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x158);
  uVar4 = 0;
  do {
    piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar4]));
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x88))(piVar1);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x158);
  REFG(undefined4, 0x14a31e5) = 1;
  *(undefined1 *)((int)this + 0x2a) = 0;
  return uVar2;
}

/* ref: FUN_005d5550 */
uint F_005d5550(unsigned int gen_a0)
{
  GEN_ENTER(0x5d5550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x2b) = 1;
  uVar1 = F_005d5430(this,0);
  return uVar1;
}

/* ref: FUN_005d5560 */
uint F_005d5560(unsigned int gen_a0)
{
  GEN_ENTER(0x5d5560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined1 *)((int)this + 0x2b) = 0;
  F_005d54a0(this,0);
  REFG(undefined4, 0x14b0ee0) = 1;
  F_00a6e6a0(&REFG(undefined, 0x14a9e40));
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_005d55a0 */
unsigned int F_005d55a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d55a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(int *)((int)this + 0x20) != param_1) &&
     (*(int *)((int)this + 0x20) = param_1, *(char *)((int)this + 0x2a) == '\0')) {
    F_00b7a240(&REFG(undefined, 0x14c5798));
    F_005d4fe0(this,*(undefined4 *)((int)this + 0x1c),param_1,0,0,0);
  }
  return 0;
}

/* ref: FUN_005d55e0 */
uint F_005d55e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d55e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0071cbd0();
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x29) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  F_00a63f00(&REFG(undefined, 0x14a9a18));
  F_005497c0(&REFG(undefined4, 0x1375b90));
  F_00aaf810(&REFG(undefined1, 0x14b5220));
  F_00a4a9e0(&REFG(undefined, 0x14a7394));
  F_00ab5570(&REFG(undefined4, 0x14bcc80));
  F_00ac2010(&REFG(undefined, 0x14bcf40));
  F_00ae07b0(&REFG(undefined, 0x1336e40));
  F_00a37e70(&REFG(undefined, 0x14a4230));
  F_00a63320(&REFG(undefined, 0x14a9728));
  F_00a352d0(&REFG(undefined, 0x14a31e0));
  F_00aaf920(&REFG(undefined, 0x14b5180));
  F_00a4fa10(&REFG(undefined * PTR32, 0x1334920));
  F_00ae0c90(&REFG(undefined, 0x14c0920));
  F_00ae11e0(&REFG(undefined, 0x14c0878));
  F_00b79d80(&REFG(undefined, 0x14c5798));
  F_00ae33e0(&REFG(undefined * PTR32, 0x1338d48));
  F_00a84610(&REFG(undefined, 0x14a9e40));
  F_00a62780(&REFG(undefined, 0x14a9718));
  F_00aadde0(&REFG(undefined, 0x14b5ef0));
  F_00b7c040(&REFG(undefined, 0x133e5c0));
  F_00ab9130();
  F_00ab51d0();
  F_00a4ffe0();
  uVar1 = F_005d5310();
  return uVar1;
}

/* ref: FUN_005d5710 */
unsigned int F_005d5710(unsigned int gen_a0)
{
  GEN_ENTER(0x5d5710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 4) != 3) {
    *(undefined4 *)((int)this + 4) = 3;
    F_00a64700(&REFG(undefined, 0x14a9a18));
    F_00b6b2b0(&REFG(undefined4, 0x1375b90));
    F_00aaf820();
    F_00a4aa10();
    F_00aaf6a0(&REFG(undefined4, 0x14bcc80));
    F_00ac4a50(&REFG(undefined, 0x14bcf40));
    F_00ae0800(&REFG(undefined, 0x1336e40));
    F_00a36c80(&REFG(undefined, 0x14a4230));
    F_00a62930();
    F_00a35320();
    F_00ab1c70(&REFG(undefined, 0x14b5180));
    F_00a53940(&REFG(undefined * PTR32, 0x1334920));
    F_00ae23b0(&REFG(undefined, 0x14c0920));
    F_00ae3210(&REFG(undefined, 0x14c0878));
    F_00b7a360(&REFG(undefined, 0x14c5798));
    F_00a82f00(&REFG(undefined, 0x14a9e40));
    F_00aade30();
    F_00ab9170();
    F_00ab0d10();
    F_00a50030();
    F_005d53a0();
    F_00710bc0();
    return 0;
  }
  return 0;
}

/* ref: FUN_005d5800 */
byte F_005d5800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d5800u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 5) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005d5840 */
uint F_005d5840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d5840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  return (param_2 + param_1 * 0x3c) * 0x3c - (int)(*(ulonglong *)((int)this + 8) % 0x15180);
}

/* ref: FUN_005d5890 */
uint F_005d5890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d5890u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return (param_1 * 0x3c + param_3) * 0x3c;
}

/* ref: FUN_005d58e0 */
unsigned int F_005d58e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d58e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(char *)(in_ecx + 0x20) != (char)param_2) {
    *(char *)(in_ecx + 0x20) = (char)param_2;
  }
  return 0;
}

/* ref: FUN_005d5900 */
uint F_005d5900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d5900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x2c) = param_2;
  return param_1;
}

/* ref: FUN_005d5920 */
uint F_005d5920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d5920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *(char *)((int)this + 0x30) = (char)param_3;
  if ((char)param_3 != '\0') {
    uVar2 = param_1 * 0x3c + param_2;
    iVar3 = ((((((int)param_1 >> 0x1f) << 4 | param_1 >> 0x1c) - ((int)param_1 >> 0x1f)) -
             (uint)(param_1 * 0x10 < param_1)) * 4 | param_1 * 0xf >> 0x1e) + ((int)param_2 >> 0x1f)
            + (uint)CARRY4(param_1 * 0x3c,param_2);
    uVar1 = (((iVar3 * 0x10 | uVar2 >> 0x1c) - iVar3) - (uint)(uVar2 * 0x10 < uVar2)) * 4 |
            uVar2 * 0xf >> 0x1e;
    *(uint *)((int)this + 0x28) = uVar2 * 0x3c;
    *(uint *)((int)this + 0x2c) = uVar1;
    return uVar1;
  }
  uVar2 = (param_2 + param_1 * 0x3c) * 0x3c;
  uVar1 = (uint)(*(ulonglong *)((int)this + 8) % 0x15180);
  *(uint *)((int)this + 0x2c) = ((int)uVar2 >> 0x1f) - (uint)(uVar2 < uVar1);
  *(uint *)((int)this + 0x28) = uVar2 - uVar1;
  return uVar1;
}

/* ref: FUN_005d59d0 */
unsigned int F_005d59d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d59d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  *(undefined2 *)((int)this + 4) = (undefined2)param_3;
  *(undefined2 *)((int)this + 6) = (undefined2)param_4;
  return 0;
}

/* ref: Client::LayoutEngine::IManagerBase::vf3 */
uint F_005d5a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d5a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
  }
  return uVar1;
}

/* ref: FUN_005d5a90 */
unsigned int F_005d5a90(void)
{
  GEN_ENTER(0x5d5a90u, 0u, 0u, 0u, 0u);
  if (REFG(undefined4, 0x1379cb0) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379cb0) + 8))))(REFG(undefined4, 0x1379cb0));
    return 0;
  }
  return 0;
}

/* ref: Client::LayoutEngine::LayoutWorld::vf2 */
unsigned int F_005d5ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d5ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (REFG(undefined4, 0x1379cb0) != (undefined4 *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x1379cb0))))(REFG(undefined4, 0x1379cb0),1);
    REFG(undefined4, 0x1379cb0) = (undefined4 *)0x0;
  }
  return 0;
}

/* ref: FUN_005d5b00 */
unsigned int F_005d5b00(unsigned int gen_a0)
{
  GEN_ENTER(0x5d5b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x18);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x18) = 0;
    }
  }
  return 0;
}

/* ref: FUN_005d5b50 */
uint F_005d5b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d5b50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2;
}

/* ref: FUN_005d5b70 */
unsigned int F_005d5b70(float gen_a0)
{
  GEN_ENTER(0x5d5b70u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_005d5b90 */
uint F_005d5b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5d5b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a7;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = param_4;
  if (param_7 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x32) = *param_7;
    *(undefined4 *)((int)this + 0x36) = param_7[1];
  }
  uVar1 = F_00513dc0(param_2,(int)this + 0x94,0,0);
  *(uint *)((int)this + 0xd8) = uVar1;
  uVar1 = F_0050b6c0((undefined *)((int)this + 0xc4),param_2);
  *(undefined4 *)((int)this + 0x10) = 1;
  return uVar1;
}

/* ref: FUN_005d5c10 */
byte F_005d5c10(unsigned int gen_a0)
{
  GEN_ENTER(0x5d5c10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x10) == 7;
}

/* ref: FUN_005d5c20 */
uint F_005d5c20(unsigned int gen_a0)
{
  GEN_ENTER(0x5d5c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*((int *)GEN_TOP((*(int *)((int)this + 0x44) + 0x10))) == 4) && (*(int *)((int)this + 0x90) != 0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x90) + 0xc))))(*(int * PTR32 *)((int)this + 0x90));
    return uVar1;
  }
  return (int)this + 0x70;
}

/* ref: FUN_005d5c50 */
uint F_005d5c50(unsigned int gen_a0)
{
  GEN_ENTER(0x5d5c50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x48) + 8)));
}

/* ref: FUN_005d5c60 */
uint F_005d5c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d5c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = (uint)(byte)param_1 * 0xc;
  uVar2 = *(ushort *)((int)this + iVar1 + 0x1bc);
  uVar3 = (uint)uVar2;
  *(ushort *)((int)this + iVar1 + 0x1bc) = uVar2 + 1;
  uVar4 = 0;
  switch((unsigned int)(uintptr_t)((uint)(byte)param_1)) {
  case 1: ;
  case 3: ;
    uVar4 = *(int *)((int)this + iVar1 + 0x1b8) + uVar3 * 0x48;
    goto LAB_005d5cef;
  default: ;
    goto switchD_005d5c8c_caseD_2;
  case 4: ;
  case 0x29: ;
  case 0x2b: ;
    iVar5 = uVar3 * 0xa0;
    break;
  case 5: ;
  case 0x33: ;
  case 0x44: ;
  case 0x45: ;
    iVar5 = uVar3 * 0x60;
    break;
  case 6: ;
  case 0xf: ;
    iVar5 = uVar3 * 0xf0;
    break;
  case 7: ;
    iVar5 = uVar3 * 0xc0;
    break;
  case 8: ;
  case 9: ;
  case 0xc: ;
  case 0xe: ;
  case 0x10: ;
  case 0x2d: ;
  case 0x31: ;
  case 0x48: ;
    iVar5 = uVar3 << 7;
    break;
  case 0xd: ;
  case 0x27: ;
  case 0x2f: ;
    uVar4 = *(int *)((int)this + iVar1 + 0x1b8) + uVar3 * 0x38;
    goto LAB_005d5cef;
  case 0x28: ;
  case 0x39: ;
  case 0x3b: ;
  case 0x43: ;
  case 0x47: ;
    iVar5 = uVar3 * 0x90;
    break;
  case 0x2c: ;
  case 0x3a: ;
  case 0x41: ;
  case 0x42: ;
  case 0x46: ;
    iVar5 = uVar3 * 0x70;
  }
  uVar4 = iVar5 + *(int *)((int)this + iVar1 + 0x1b8);
LAB_005d5cef: ;
  if (uVar4 != 0) {
    *(uint *)(uVar4 + 0x1c) = uVar3;
  }
switchD_005d5c8c_caseD_2: ;
  return uVar4;
}

/* ref: FUN_005d5d70 */
uint F_005d5d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d5d70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xa0 + *(int *)(in_ecx + 0x538);
}

/* ref: FUN_005d5d90 */
uint F_005d5d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d5d90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x80 + *(int *)(in_ecx + 0x53c);
}

/* ref: FUN_005d5db0 */
byte F_005d5db0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d5db0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + uVar1) != (&REFG(undefined1, 0x10a2a28))[uVar1]) {
      return 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 1;
}

/* ref: FUN_005d5de0 */
byte F_005d5de0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d5de0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + uVar1) != (&REFG(undefined1, 0x10a2a30))[uVar1]) {
      return 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 1;
}

/* ref: FUN_005d5e10 */
byte F_005d5e10(unsigned int gen_a0)
{
  GEN_ENTER(0x5d5e10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + uVar1) != (&REFG(undefined1, 0x10a2a38))[uVar1]) {
      return 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 1;
}

/* ref: FUN_005d5e40 */
byte F_005d5e40(unsigned int gen_a0)
{
  GEN_ENTER(0x5d5e40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + uVar1) != (&REFG(undefined1, 0x10a2a20))[uVar1]) {
      return 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 1;
}

/* ref: FUN_005d5e70 */
byte F_005d5e70(unsigned int gen_a0)
{
  GEN_ENTER(0x5d5e70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + uVar1) != (&REFG(undefined1, 0x10a2a18))[uVar1]) {
      return 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 1;
}

/* ref: FUN_005d5ea0 */
uint F_005d5ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d5ea0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x5c))(param_1);
  uVar3 = 0;
  do {
    if (*(char *)(uVar1 + uVar3) != (&REFG(undefined1, 0x10a2a38))[uVar3]) {
      return 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  uVar3 = 0;
  iVar4 = uVar1 + 0xc;
  if (*(uint *)(uVar1 + 8) != 0) {
    do {
      uVar2 = 0;
      while (*(char *)(iVar4 + uVar2) == (&REFG(undefined1, 0x10a2a18))[uVar2]) {
        uVar2 = uVar2 + 1;
        if (3 < uVar2) {
          return iVar4 + 8;
        }
      }
      iVar4 = iVar4 + *(int *)(iVar4 + 4);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(uVar1 + 8));
  }
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf2 */
uint F_005d5fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d5fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf3 */
unsigned int F_005d5fb0(void)
{
  GEN_ENTER(0x5d5fb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_005d5fe0 */
byte F_005d5fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d5fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this);
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this);
    return (byte)uVar1;
  }
  return 1;
}

/* ref: FUN_005d6000 */
uint F_005d6000(unsigned int gen_a0)
{
  GEN_ENTER(0x5d6000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 8) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 8) + 4)));
  }
  return 0;
}

/* ref: FUN_005d6060 */
uint F_005d6060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x14) = uVar1;
  return uVar1;
}

/* ref: FUN_005d60a0 */
uint F_005d60a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d60a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  return param_2 << (('\x04' - (char)param_1) * '\b' & 0x1fU) | param_3;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf14 */
uint F_005d60c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d60c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf15 */
unsigned int F_005d60f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d60f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = REFG(undefined4, 0x1302cf0);
  param_1[1] = REFG(undefined4, 0x1302cf4);
  param_1[2] = REFG(undefined4, 0x1302cf8);
  param_1[3] = REFG(undefined4, 0x1302cfc);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf16 */
uint F_005d6120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302c60));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302c64));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302c68));
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf18 */
unsigned int F_005d6150(unsigned int gen_a0)
{
  GEN_ENTER(0x5d6150u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  ((code *)*(gen_code32 *)(*in_ecx + 0x100))();
  return 0;
}

/* ref: FUN_005d615b */
unsigned int F_005d615b(unsigned int gen_a0)
{
  GEN_ENTER(0x5d615bu, gen_a0, 0u, 0u, 0u);
  code * in_eax = (code *)(uintptr_t)gen_a0;
  (*in_eax)();
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf19 */
unsigned int F_005d6160(void)
{
  GEN_ENTER(0x5d6160u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf20 */
unsigned int F_005d6170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d6170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf26 */
unsigned int F_005d6180(void)
{
  GEN_ENTER(0x5d6180u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf27 */
unsigned int F_005d6190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d6190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf28 */
unsigned int F_005d61a0(void)
{
  GEN_ENTER(0x5d61a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf31 */
unsigned int F_005d61b0(void)
{
  GEN_ENTER(0x5d61b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf32 */
unsigned int F_005d61c0(void)
{
  GEN_ENTER(0x5d61c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf34 */
uint F_005d61d0(void)
{
  GEN_ENTER(0x5d61d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf33 */
uint F_005d61e0(void)
{
  GEN_ENTER(0x5d61e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf35 */
byte F_005d61f0(void)
{
  GEN_ENTER(0x5d61f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf36 */
unsigned int F_005d6200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf47 */
uint F_005d6210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d6210u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xdc))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf49 */
byte F_005d6220(void)
{
  GEN_ENTER(0x5d6220u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf50 */
unsigned int F_005d6230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_005d6240 */
byte F_005d6240(unsigned int gen_a0)
{
  GEN_ENTER(0x5d6240u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((((char)param_1 != '\r') && ((char)param_1 != '/')) && ((char)param_1 != 'A')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_005d6260 */
byte F_005d6260(unsigned int gen_a0)
{
  GEN_ENTER(0x5d6260u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 5: ;
  case 8: ;
  case 9: ;
  case 0xc: ;
  case 0xe: ;
  case 0x10: ;
  case 0x28: ;
  case 0x29: ;
  case 0x2b: ;
  case 0x2c: ;
  case 0x2d: ;
  case 0x31: ;
  case 0x33: ;
  case 0x3a: ;
  case 0x3b: ;
  case 0x42: ;
  case 0x43: ;
  case 0x44: ;
  case 0x45: ;
  case 0x46: ;
  case 0x47: ;
  case 0x48: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_005d62e0 */
uint F_005d62e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d62e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 1: ;
  case 3: ;
    return 0x48;
  case 4: ;
  case 0x29: ;
  case 0x2b: ;
    return 0xa0;
  case 5: ;
  case 0x33: ;
  case 0x44: ;
  case 0x45: ;
    return 0x60;
  case 6: ;
  case 0xf: ;
    uVar1 = 0xf0;
    break;
  case 7: ;
    return 0xc0;
  case 8: ;
  case 9: ;
  case 0xc: ;
  case 0xe: ;
  case 0x10: ;
  case 0x2d: ;
  case 0x31: ;
  case 0x48: ;
    return 0x80;
  case 0xd: ;
  case 0x27: ;
  case 0x2f: ;
    return 0x38;
  case 0x28: ;
  case 0x39: ;
  case 0x3b: ;
  case 0x43: ;
  case 0x47: ;
    return 0x90;
  case 0x2c: ;
  case 0x3a: ;
  case 0x41: ;
  case 0x42: ;
  case 0x46: ;
    return 0x70;
  }
  return uVar1;
}

/* ref: FUN_005d63b0 */
byte F_005d63b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d63b0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((*param_1 != 0) && (*(short *)(*param_1 + 0x12) != 0)) {
    return 0;
  }
  if ((char)param_2 == '\0') {
    if (param_1[6] != 0) {
      return 0;
    }
    if ((char)param_1[2] == '\0') {
      return 0;
    }
    if (param_1[3] != 0) {
      return 0;
    }
  }
  else {
    if (param_1[6] != 2) {
      return 0;
    }
    if ((char)param_1[2] == '\0') {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_005d63f0 */
unsigned int F_005d63f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d63f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10a2ba4));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  return 0;
}

/* ref: Client::LayoutEngine::Terrain::TerrainManager::vf1 */
unsigned int F_005d6420(void)
{
  GEN_ENTER(0x5d6420u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_005d6450 */
unsigned int F_005d6450(unsigned int gen_a0)
{
  GEN_ENTER(0x5d6450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x10);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x10) = 0;
    }
  }
  return 0;
}

/* ref: FUN_005d6480 */
unsigned int F_005d6480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_00c9f290(*(undefined * PTR32 *)((int)this + 0x14),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_005d64a0 */
uint F_005d64a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d64a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a2bac));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 8))))(*(int * PTR32 *)((int)this + 0x10));
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return uVar2;
}

/* ref: FUN_005d6530 */
uint F_005d6530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x60) = param_2;
  return param_2;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf7 */
uint F_005d6540(void)
{
  GEN_ENTER(0x5d6540u, 0u, 0u, 0u, 0u);
  return 0x10a256d;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf27 */
unsigned int F_005d6550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d6550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf28 */
unsigned int F_005d6560(void)
{
  GEN_ENTER(0x5d6560u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf65 */
uint F_005d6570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6570u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  undefined4 * puVar5;
  
  pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xf4))()));
  fVar1 = pfVar4[1];
  fVar2 = *pfVar4;
  fVar3 = pfVar4[2];
  puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xe4))(param_1)));
  *(undefined4 *)param_2 = *puVar5;
  *(undefined4 *)(param_2 + 4) = puVar5[1];
  *(undefined4 *)(param_2 + 8) = puVar5[2];
  *(float *)(param_2 + 0xc) =
       ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                                   ((float10)fVar2 * (float10)fVar2 +
                                   (float10)fVar1 * (float10)fVar1)))))));
  return param_2;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf66 */
unsigned int F_005d65e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d65e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  
  pfVar7 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
  fVar1 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)pfVar7[2] * (float10)pfVar7[2] +
                                      ((float10)*pfVar7 * (float10)*pfVar7 +
                                      (float10)pfVar7[1] * (float10)pfVar7[1])))))));
  pfVar7 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  fVar2 = *pfVar7;
  fVar8 = (float10)fVar1;
  fVar3 = pfVar7[1];
  fVar4 = pfVar7[2];
  pfVar7 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  fVar5 = *pfVar7;
  fVar9 = (float10)fVar1;
  fVar1 = pfVar7[1];
  fVar6 = pfVar7[2];
  *param_1 = (float)((float10)fVar2 - fVar8);
  param_1[1] = (float)((float10)fVar3 - fVar8);
  param_1[2] = (float)((float10)fVar4 - fVar8);
  param_1[4] = (float)(fVar9 + (float10)fVar5);
  param_1[5] = (float)((float10)fVar1 + fVar9);
  param_1[6] = (float)(fVar9 + (float10)fVar6);
  return 0;
}

/* ref: FUN_005d66c0 */
uint F_005d66c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d66c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0xa0) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0xa0));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0xa0) = 0;
  }
  *(undefined1 *)((int)this + 0xc0) = 0;
  return uVar1;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf27 */
unsigned int F_005d66f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d66f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf42 */
unsigned int F_005d6700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf44 */
unsigned int F_005d6710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf67 */
uint F_005d6720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x108))(this,((undefined1 *)(gen_frame + 0x0)));
  F_005fec10(param_1,&REFG(float, 0x1302d00),uVar1);
  return (uint)param_1;
}

/* ref: FUN_005d6770 */
byte F_005d6770(unsigned int gen_a0)
{
  GEN_ENTER(0x5d6770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if ((((*(byte *)(in_ecx + 0x20) & 1) == 0) && (bVar1 = *(byte *)(in_ecx + 0x28) & 0xf, bVar1 != 9)
      ) && (bVar1 != 8)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005d6860 */
byte F_005d6860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d6860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)((int)this + 0x9c) == 0) {
    return 0;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x20))))
                    (*(int * PTR32 *)((int)this + 0x9c),param_1,param_2);
  return (byte)uVar1;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf1 */
unsigned int F_005d6890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d6890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf3 */
unsigned int F_005d68a0(void)
{
  GEN_ENTER(0x5d68a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf21 */
uint F_005d69a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d69a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)((*(uint *)(in_ecx + 0x30) & 0xc0000000) != 0);
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf22 */
byte F_005d69b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d69b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((*(uint *)(this + 0x30) & 0xc0000000) != 0) {
    bVar1 = F_00b5b5c0(REFG(undefined4, 0x14c4e84),this + 0x30);
    return bVar1;
  }
  return 1;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf57 */
uint F_005d69d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d69d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0xe4))))
                    (*(int * PTR32 *)(this + 0x34),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf59 */
uint F_005d69e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d69e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0xec))))
                    (*(int * PTR32 *)(this + 0x34),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf61 */
uint F_005d69f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d69f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0xf4))))
                    (*(int * PTR32 *)(this + 0x34),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf63 */
uint F_005d6a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d6a00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0xfc))))
                    (*(int * PTR32 *)(this + 0x34),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: FUN_005d6a10 */
unsigned int F_005d6a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6a10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x10a2bb4));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = uVar1;
  in_ecx[6] = 0;
  return 0;
}

/* ref: FUN_005d6a50 */
unsigned int F_005d6a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a2bb4));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = 0;
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGActionController::vf2 */
unsigned int F_005d6aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGActionController::vf1 */
unsigned int F_005d6ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_005d6ad0 */
unsigned int F_005d6ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0xc) = 3;
  *(undefined4 *)((int)this + 0x1c) = 3;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x10);
  if (4 < *(int *)((int)this + 0x24)) {
    *(undefined4 *)((int)this + 0x24) = 1;
  }
  return 0;
}

/* ref: FUN_005d6b20 */
unsigned int F_005d6b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 0x5c);
  iVar2 = 4;
  do {
    if (*piVar1 != 0) {
      ((code *)*(gen_code32 *)(*(int *)*piVar1 + 0x90))((int *)*piVar1,param_1);
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_005d6b50 */
unsigned int F_005d6b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6b50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = uVar1;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x10a2be0));
  return 0;
}

/* ref: FUN_005d6b90 */
unsigned int F_005d6b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a2be0));
  return 0;
}

/* ref: FUN_005d6be0 */
uint F_005d6be0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d6be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00c48350((undefined *)((int)this + 0x1c),0,0x34);
  *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302cf0);
  *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302cf4);
  *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302cf8);
  *(uint *)((int)this + 0x5c) = REFG(undefined4, 0x1302cfc);
  *(undefined4 *)((int)this + 0x60) = REFG(undefined4, 0x1302cf0);
  *(undefined4 *)((int)this + 100) = REFG(undefined4, 0x1302cf4);
  *(undefined4 *)((int)this + 0x68) = REFG(undefined4, 0x1302cf8);
  *(uint *)((int)this + 0x6c) = REFG(undefined4, 0x1302cfc);
  *(undefined4 *)((int)this + 0x70) = REFG(undefined4, 0x1302cf0);
  *(undefined4 *)((int)this + 0x74) = REFG(undefined4, 0x1302cf4);
  *(undefined4 *)((int)this + 0x78) = REFG(undefined4, 0x1302cf8);
  uVar1 = REFG(undefined4, 0x1302cfc);
  *(uint *)((int)this + 0x7c) = REFG(undefined4, 0x1302cfc);
  return uVar1;
}

/* ref: FUN_005d6c60 */
byte F_005d6c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6c60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(undefined4 *)(param_1 + 0xc) = 5;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 3;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 4);
  *(float *)(param_1 + 0x24) = ((float)GEN_TOF(ABS((float10)*(float *)(param_2 + 8))));
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0xc);
  *(bool *)(param_1 + 0x35) = *(char *)(param_2 + 0x11) != '\0';
  *(bool *)(param_1 + 0x36) = *(char *)(param_2 + 0x16) != '\0';
  if (0.0 < *(float *)(param_2 + 8)) {
    *(undefined1 *)(param_1 + 0x34) = 1;
    return 1;
  }
  *(undefined1 *)(param_1 + 0x34) = 0;
  return 0;
}

/* ref: FUN_005d6cd0 */
unsigned int F_005d6cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = uVar1;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x10a2c0c));
  return 0;
}

/* ref: FUN_005d6d10 */
unsigned int F_005d6d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a2c0c));
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGMovePathActionController::vf8 */
byte F_005d6da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d6da0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  bool bVar1;
  
  if (param_2 == 8) {
    bVar1 = REFG(float, 0x1087f04) <= *(float *)(in_ecx + 0x24);
    *(undefined4 *)(in_ecx + 0xc) = 8;
    if (bVar1) {
      *(undefined4 *)(in_ecx + 0x24) = 0;
    }
    return 1;
  }
  if (param_2 != 9) {
    return 0;
  }
  *(undefined4 *)(in_ecx + 0xc) = 9;
  return 1;
}

/* ref: FUN_005d6e10 */
byte F_005d6e10(float gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5d6e10u, 0u, 0u, 0u, gen_a3);
  float in_xmm2 = (float)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm7 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = *(float *)(param_4 + 8);
  if (GEN_ISNAN(fVar1) != (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
    return 0;
  }
  fVar2 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_5 / (float10)*(float *)(param_4 + 0xc)))) +
                 (float10)*(float *)param_4)));
  fVar4 = (float10)fVar2;
  *(float *)param_4 = fVar2;
  fVar3 = (float10)1;
  if (fVar3 <= fVar4) {
    *(undefined4 *)param_4 = 0;
  }
  fVar5 = F_00c4cde0(0.0,in_xmm2,in_xmm3,in_xmm7,
                       (float10)(float)((float10)*(float *)param_4 *
                                        (float10)*(float *)&REFG(undefined, 0x131f3dc) -
                                       (float10)*(double *)&REFG(undefined, 0x1080228)));
  *(float *)(param_4 + 4) = (float)((float10)(float)fVar5 * (float10)fVar1);
  return (!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar3)) && !(fVar4 < fVar3);
}

/* ref: FUN_005d6e5b */
byte F_005d6e5b(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d6e5bu, gen_a0, 0u, 0u, 0u);
  float * in_esi = (float *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  int in_ebp = (int)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  float10 fVar1;
  
  *in_esi = in_xmm1;
  *(float *)(in_ebp + 8) =
       (float)((float10)*in_esi * (float10)*(float *)&REFG(undefined, 0x131f3dc) -
              (float10)*(double *)&REFG(undefined, 0x1080228));
  fVar1 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)*(float *)(in_ebp + 8));
  *(float *)(in_ebp + 8) = (float)fVar1;
  in_esi[1] = ((float)GEN_TOF(((float10)*(float *)(in_ebp + 8) * (float10)*(float *)(in_ebp + -4))));
  return 1;
}

/* ref: FUN_005d6e90 */
unsigned int F_005d6e90(unsigned int gen_a0)
{
  GEN_ENTER(0x5d6e90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x70) = 0;
  *(undefined4 *)(in_ecx + 0x74) = 0;
  *(undefined4 *)(in_ecx + 0x78) = 0;
  *(undefined4 *)(in_ecx + 0x7c) = 0;
  *(undefined4 *)(in_ecx + 0x80) = 0;
  *(undefined4 *)(in_ecx + 0x84) = 0;
  *(undefined4 *)(in_ecx + 0x88) = 0;
  *(undefined4 *)(in_ecx + 0x8c) = 0;
  *(undefined4 *)(in_ecx + 0x90) = 0;
  *(undefined4 *)(in_ecx + 0x94) = 0;
  *(undefined4 *)(in_ecx + 0x98) = 0;
  *(undefined4 *)(in_ecx + 0x9c) = 0;
  *(undefined4 *)(in_ecx + 0xa0) = 0;
  *(undefined4 *)(in_ecx + 0xa4) = 0;
  *(undefined4 *)(in_ecx + 0xa8) = 0;
  *(undefined4 *)(in_ecx + 0xac) = 0;
  *(undefined4 *)(in_ecx + 0xb0) = 0;
  *(undefined4 *)(in_ecx + 0xb4) = 0;
  *(undefined4 *)(in_ecx + 0xb8) = 0;
  *(undefined4 *)(in_ecx + 0xbc) = 0;
  *(undefined4 *)(in_ecx + 0xc0) = 0;
  *(undefined4 *)(in_ecx + 0xc4) = 0;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::LayerManager::vf1 */
uint F_005d6f10(unsigned int gen_a0)
{
  GEN_ENTER(0x5d6f10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 8) = 0xffff;
  *(undefined2 *)(in_ecx + 0x10) = 0xffff;
  return 0xffff;
}

/* ref: Client::LayoutEngine::Layer::LayerManager::vf3 */
uint F_005d6f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d6f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
  }
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf7 */
uint F_005d6f80(void)
{
  GEN_ENTER(0x5d6f80u, 0u, 0u, 0u, 0u);
  return 0x10a257a;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf24 */
uint F_005d6f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d6f90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf25 */
unsigned int F_005d6fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d6fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf26 */
unsigned int F_005d6fb0(void)
{
  GEN_ENTER(0x5d6fb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf27 */
unsigned int F_005d6fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d6fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf28 */
unsigned int F_005d6fd0(void)
{
  GEN_ENTER(0x5d6fd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_005d6fe0 */
uint F_005d6fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d6fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
  if (uVar1 != 0xffffffff) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x30) + 0xf0)));
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf21 */
byte F_005d7010(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
  return uVar1 != 0xffffffff;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf48 */
uint F_005d7030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d7030u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xbc))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf53 */
uint F_005d7040(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5d7040u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x5c))(param_1)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,(undefined4)gen_fl2bits(param_2));
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x11c))(param_1);
  if ((uVar2 != 0xffffffff) && (*(int * PTR32 *)(param_1[0xc] + 0xf0) != (int *)0x0)) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1[0xc] + 0xf0) + 0xd4))))((undefined4)gen_fl2bits(param_2));
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf58 */
unsigned int F_005d70a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d70a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
  if (uVar1 != 0xffffffff) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 0x40))))(*(int * PTR32 *)(this + 0x30));
  }
  *(undefined4 *)(this + 0x40) = *param_1;
  *(undefined4 *)(this + 0x44) = param_1[1];
  *(undefined4 *)(this + 0x48) = param_1[2];
  return 0;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf60 */
uint F_005d70f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d70f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x11c))))((*(int * PTR32 *)&gen_args[0]));
  uVar1 = (*(uint *)&gen_args[1]);
  if (uVar2 != 0xffffffff) {
    F_00a1e160(&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]));
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[0xc])) + 0x48))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[0xc])));
  }
  (*(int * PTR32 *)&gen_args[0])[0x14] = *(int *)uVar1;
  (*(int * PTR32 *)&gen_args[0])[0x15] = *(int *)(uVar1 + 4);
  uVar2 = *(uint *)(uVar1 + 8);
  (*(int * PTR32 *)&gen_args[0])[0x16] = uVar2;
  (*(int * PTR32 *)&gen_args[0])[0x17] = *(int *)(uVar1 + 0xc);
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf62 */
unsigned int F_005d7150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf64 */
uint F_005d7160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xe8))(this,param_1);
  ((code *)*(gen_code32 *)(*(int *)this + 0xf0))(this,param_1 + 0x10);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf8))(this,param_1 + 0x20);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf71 */
uint F_005d71a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d71a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x30) != 0) {
    uVar1 = F_00a1b740(*(int *)(in_ecx + 0x30));
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf7 */
uint F_005d71f0(void)
{
  GEN_ENTER(0x5d71f0u, 0u, 0u, 0u, 0u);
  return 0x10a257b;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf24 */
uint F_005d7200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d7200u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf25 */
unsigned int F_005d7210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d7210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf69 */
unsigned int F_005d7220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d7220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf26 */
unsigned int F_005d7230(void)
{
  GEN_ENTER(0x5d7230u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf27 */
unsigned int F_005d7240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d7240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf28 */
unsigned int F_005d7250(void)
{
  GEN_ENTER(0x5d7250u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf48 */
uint F_005d7260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d7260u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xbc))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf64 */
uint F_005d7270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xe8))(this,param_1);
  ((code *)*(gen_code32 *)(*(int *)this + 0xf0))(this,param_1 + 0x10);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf8))(this,param_1 + 0x20);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf28 */
unsigned int F_005d7300(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x30);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if (*(int *)(this + 0x1c) == -1) {
      puVar2 = *(undefined4 * PTR32 *)(this + 0x30);
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
    *(undefined4 *)(this + 0x30) = 0;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf36 */
unsigned int F_005d7330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)(this + 0x34) != (undefined *)0x0) {
    F_00c9f290(*(undefined * PTR32 *)(this + 0x34),param_1);
    return 0;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf53 */
unsigned int F_005d7350(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5d7350u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 0x30) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x30) + 0x68))))((undefined4)gen_fl2bits(param_2));
  }
  return 0;
}

/* ref: FUN_005d7370 */
uint F_005d7370(void)
{
  GEN_ENTER(0x5d7370u, 0u, 0u, 0u, 0u);
  if ((*(uint *)&REFG(undefined, 0x1379d40) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1379d40) = *(uint *)&REFG(undefined, 0x1379d40) | 1;
    REFG(float, 0x1379d30) = 0;
    REFG(float, 0x1379d34) = 0;
    REFG(float, 0x1379d38) = 0;
    REFG(float, 0x1379d3c) = 0;
  }
  return 0x1379d30;
}

/* ref: FUN_005d73b0 */
uint F_005d73b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d73b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2c3c));
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf28 */
uint F_005d7420(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(this + 0x30) != 0) {
    if (*(int *)(this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    F_0068fad0(*((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0x48) + 8))),*(int *)(this + 0x30));
    uVar1 = F_00a1b5f0(this + 0x30);
  }
  return uVar1;
}

/* ref: FUN_005d7450 */
uint F_005d7450(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2d54));
  *(undefined4 *)((int)this + 0x30) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf28 */
uint F_005d74c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d74c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(this + 0x30) != 0) {
    if (*(int *)(this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    F_0068b500(*((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0x48) + 8))),*(int *)(this + 0x30));
    uVar1 = F_00a1b620(this + 0x30);
  }
  return uVar1;
}

/* ref: FUN_005d74f0 */
uint F_005d74f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d74f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2e6c));
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = REFG(undefined4, 0x1302e54);
  *(undefined4 *)((int)this + 0x3c) = REFG(undefined4, 0x1302e58);
  *(undefined4 *)((int)this + 0x40) = REFG(undefined4, 0x1302e5c);
  *(undefined4 *)((int)this + 0x44) = REFG(undefined4, 0x1302e60);
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf7 */
uint F_005d7580(void)
{
  GEN_ENTER(0x5d7580u, 0u, 0u, 0u, 0u);
  return 0x10a2696;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf28 */
unsigned int F_005d7590(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x30);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if (*(int *)(this + 0x1c) == -1) {
      puVar2 = *(undefined4 * PTR32 *)(this + 0x30);
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
    *(undefined4 *)(this + 0x30) = 0;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf48 */
uint F_005d75c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d75c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xbc))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf8 */
uint F_005d7650(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x30) != 0) {
    uVar1 = F_00690020(*(int *)(in_ecx + 0x30));
    return uVar1;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf19 */
unsigned int F_005d7660(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x30) != (undefined *)0x0) {
    uVar1 = F_0068b710(*(undefined * PTR32 *)(this + 0x30));
    if ((char)uVar1 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 200))))(*(int * PTR32 *)(this + 0x30));
      this[0x8c] = (undefined1)((byte)this[0x8c] | 8);
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf20 */
unsigned int F_005d7690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d7690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x30);
  if ((piVar1 != (int *)0x0) && (((byte)this[0x8c] & 8) != 0)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xcc))(piVar1);
    this[0x8c] = (undefined1)((byte)this[0x8c] & 0xf7);
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf27 */
uint F_005d76c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d76c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  code * pcVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *((uint *)GEN_TOP((*(int *)(this + 8) + 4)));
  }
  if ((*(char *)(uVar2 + 0x55) == '\0') && (((byte)this[0x20] & 2) != 0)) {
    uVar2 = F_00a1e4c0(*param_2,"Client.LayoutEngine.Layer.VfxLayoutInstance");
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x100);
    *(uint *)(this + 0x30) = uVar2;
    uVar2 = (*pcVar1)(this,param_1);
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf28 */
unsigned int F_005d7710(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x30);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x30);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x30) = 0;
    }
  }
  return 0;
}

/* ref: FUN_005d7740 */
uint F_005d7740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7740u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  float10 fVar2;
  
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)param_2;
  uVar1 = param_2;
  if (*(int *)(param_1 + 0x30) != 0) {
    fVar2 = (float10)*(double *)&REFG(undefined, 0x1088100);
    uVar1 = (uint)*(byte *)param_2;
    F_0068b780(*(int *)(param_1 + 0x30),(float)((float10)uVar1 / fVar2),
                 ((float)GEN_TOF(((float10)*(byte *)(param_2 + 1) / fVar2))),
                 ((float)GEN_TOF(((float10)*(byte *)(param_2 + 2) / fVar2))),
                 ((float)GEN_TOF(((float10)*(byte *)(param_2 + 3) / fVar2))));
  }
  return uVar1;
}

/* ref: FUN_005d77c0 */
uint F_005d77c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d77c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 in_EAX = 0;
  uint uVar1;
  float10 fVar2;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(undefined1)param_2);
  *(undefined1 *)(param_1 + 0x8a) = (undefined1)param_4;
  *(undefined1 *)(param_1 + 0x88) = (undefined1)param_2;
  *(byte *)(param_1 + 0x89) = (byte)param_3;
  *(byte *)(param_1 + 0x8b) = (byte)param_5;
  if (*(int *)(param_1 + 0x30) != 0) {
    fVar2 = (float10)*(double *)&REFG(undefined, 0x1088100);
    uVar1 = param_2 & 0xff;
    F_0068b780(*(int *)(param_1 + 0x30),(float)((float10)uVar1 / fVar2),
                 (float)((float10)(byte)param_3 / fVar2),((float)GEN_TOF(((float10)(param_4 & 0xff) / fVar2))),
                 (float)((float10)(byte)param_5 / fVar2));
  }
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf44 */
uint F_005d7860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7860u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * piVar1;
  byte * pbVar2;
  byte * pbVar3;
  byte * pbVar4;
  float10 fVar5;
  
  piVar1 = (int *)(param_1 + 0x30);
  if (*piVar1 != 0) {
    pbVar2 = (byte *)(param_1 + 0x8b);
    pbVar3 = (byte *)(param_1 + 0x8a);
    fVar5 = (float10)*(double *)&REFG(undefined, 0x1088100);
    pbVar4 = (byte *)(param_1 + 0x89);
    param_1 = (uint)*(byte *)(param_1 + 0x88);
    F_0068b780(*piVar1,((float)GEN_TOF((((float10)param_1 / fVar5) * (float10)*(float *)param_2))),
                 ((float)GEN_TOF((((float10)*pbVar4 / fVar5) * (float10)*(float *)(param_2 + 4)))),
                 ((float)GEN_TOF((((float10)*pbVar3 / fVar5) * (float10)*(float *)(param_2 + 8)))),
                 ((float)GEN_TOF(((float10)*(float *)(param_2 + 0xc) * ((float10)*pbVar2 / fVar5)))));
  }
  return param_1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf48 */
uint F_005d7900(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((((byte)this[0x2b] & 8) != 0) && (*(undefined * PTR32 *)(this + 0x30) != (undefined *)0x0)) {
    uVar1 = F_0068b710(*(undefined * PTR32 *)(this + 0x30));
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf50 */
uint F_005d7920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  this[0x8c] = (undefined1)((byte)this[0x8c] ^ ((byte)this[0x8c] ^ (byte)param_1) & 1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,param_1);
  if (*(undefined * PTR32 *)(this + 0x30) != (undefined *)0x0) {
    uVar1 = F_0068b710(*(undefined * PTR32 *)(this + 0x30));
    if ((byte)param_1 == 0) {
      if ((char)uVar1 != '\0') {
        uVar1 = F_0068b730(*(undefined4 *)(this + 0x30),(float)(float10)0);
      }
    }
    else if ((char)uVar1 == '\0') {
      uVar1 = F_00699cb0(*(undefined4 *)(this + 0x30),(float)(float10)0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf54 */
uint F_005d7990(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5d7990u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int in_ecx;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 local_8;
  
  bVar1 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar2 = param_2 != *(float *)&REFG(undefined, 0x1088114);
  bVar3 = param_2 < *(float *)&REFG(undefined, 0x1088114);
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)param_1) >> 8),(!GEN_ISNAN(param_2) && !bVar1) && (!bVar3 && bVar2));
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 200))(param_1,local_8);
  in_ecx = param_1[0xc];
  if (in_ecx != 0) {
    if ((!GEN_ISNAN(param_2) && !bVar1) && (!bVar3 && bVar2)) {
      F_0068b7c0(in_ecx,param_2);
      return uVar4;
    }
    F_0068b7c0(in_ecx,(float)(float10)1);
  }
  return uVar4;
}

/* ref: FUN_005d79f0 */
uint F_005d79f0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d79f0u, gen_a0, 0u, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = *(gen_code32 *)(*param_1 + 0xe0);
  *(byte *)(param_1 + 0x23) = *(byte *)(param_1 + 0x23) | 1;
  uVar2 = (*pcVar1)(param_1,1);
  if (param_1[0xc] != 0) {
    F_0068b7c0(param_1[0xc],(float)(float10)1);
    if ((char)param_3 != '\0') {
      uVar2 = F_00699b70((undefined *)param_1[0xc]);
      return uVar2;
    }
    uVar2 = F_00699cb0(param_1[0xc],param_2);
  }
  return uVar2;
}

/* ref: FUN_005d7a50 */
unsigned int F_005d7a50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5d7a50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if ((*(int *)(param_1 + 0x30) != 0) && ((*(byte *)(param_1 + 0x8c) & 1) != 0)) {
    F_0068b730(*(int *)(param_1 + 0x30),param_2);
  }
  *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) & 0xfe;
  return 0;
}

/* ref: FUN_005d7a80 */
uint F_005d7a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (param_1 == 1) {
    *(byte *)((int)this + 0x8c) = *(byte *)((int)this + 0x8c) & 0xfe;
  }
  uVar1 = param_1;
  if (*(undefined * PTR32 *)((int)this + 0x30) != (undefined *)0x0) {
    F_0068b6f0(*(undefined * PTR32 *)((int)this + 0x30),0,param_1);
    uVar1 = 0xffffffff;
  }
  *(short *)((int)this + 0x8e) = (short)uVar1;
  return uVar1;
}

/* ref: FUN_005d7ac0 */
uint F_005d7ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a309c));
  *(undefined4 *)((int)this + 0x30) = 0;
  return (uint)this;
}

