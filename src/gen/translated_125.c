#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00b01650 */
unsigned int F_00b01650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01650u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00b01680 */
unsigned int F_00b01680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01680u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00b016b0 */
uint F_00b016b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb016b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x135);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b01730 */
uint F_00b01730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b01750 */
uint F_00b01750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00b01770 */
uint F_00b01770(unsigned int gen_a0)
{
  GEN_ENTER(0xb01770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x135);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b017b0 */
uint F_00b017b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb017b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_00b017f0 */
uint F_00b017f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb017f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 - param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_00b01830 */
unsigned int F_00b01830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; 0 < iVar2; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b01860 */
uint F_00b01860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xb01860u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_00b01470(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_00b018e0 */
uint F_00b018e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xb018e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_00b01520(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_00b01960 */
uint F_00b01960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb01960u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00b019b0 */
uint F_00b019b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb019b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00b01a10 */
unsigned int F_00b01a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01a10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00b01a40 */
unsigned int F_00b01a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01a40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b01a70 */
unsigned int F_00b01a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01a70u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b01a90 */
unsigned int F_00b01a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01a90u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00b01ac0 */
unsigned int F_00b01ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01ac0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00b01af0 */
uint F_00b01af0(unsigned int gen_a0)
{
  GEN_ENTER(0xb01af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 0x18) - iVar1,0x135);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x135);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b01b50 */
uint F_00b01b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  if (*(uint *)((int)this + 0x10) <= param_1) {
                    
    F_00c457e7("invalid deque<T> subscript");
  }
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar2;
  }
  uVar1 = *(int *)((int)this + 0xc) + param_1;
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int * PTR32 *)*piVar3, piVar3 == (int *)0x0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar3;
  }
  uVar4 = uVar1 >> 2;
  if (*(uint *)(iVar5 + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(iVar5 + 8);
  }
  return *((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar4 * 4))) + (uVar1 & 3) * 4;
}

/* ref: FUN_00b01bc0 */
uint F_00b01bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb01bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar2;
  }
  uVar1 = (*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - 1;
  if (((piVar4 == (int *)0x0) || ((int *)*piVar4 == (int *)0x0)) ||
     (piVar4 = *(int * PTR32 *)*piVar4, piVar4 == (int *)0x0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar4;
  }
  uVar3 = uVar1 >> 2;
  if (*(uint *)(iVar5 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(iVar5 + 8);
  }
  return *((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar3 * 4))) + (uVar1 & 3) * 4;
}

/* ref: FUN_00b01c10 */
uint F_00b01c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xb01c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar5 = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  if (this != (undefined *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)this;
  }
  (*(int *)(gen_frame + 0x20)) = param_4;
  if (this != (undefined *)0x0) {
    piVar5 = *(int * PTR32 *)this;
  }
  uVar4 = param_4 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  (*(int *)(gen_frame + 0x28)) = param_7 - param_4;
  (*(int *)(gen_frame + 0x14)) = param_7;
  uVar7 = 0;
  if (uVar4 < (uint)((*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - param_7)) {
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*piVar5;
    }
    uVar6 = 0;
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    F_00b01860(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar6,0,param_4,
                 uVar7,0,param_7);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if (iVar2 != 0) {
          *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
          if ((uint)(*(int *)((int)this + 8) * 4) <= *(uint *)((int)this + 0xc)) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
          iVar2 = iVar2 + -1;
          if (iVar2 == 0) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  else {
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    uVar6 = 0;
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*piVar5;
    }
    F_00b018e0(((undefined1 *)(gen_frame + 0xc)),uVar6,0,param_7,*(undefined4 *)this,0,
                 *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10),uVar7,0,param_4);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if ((iVar2 != 0) && (iVar2 = iVar2 + -1, iVar2 == 0)) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  iVar2 = *(int *)((int)this + 0xc);
  piVar5 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar5 = (int *)*puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x24)) + iVar2;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar5;
  }
  return (uint)param_1;
}

/* ref: FUN_00b01da0 */
unsigned int F_00b01da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01da0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00b01dd0 */
unsigned int F_00b01dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01dd0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b01e00 */
uint F_00b01e00(unsigned int gen_a0)
{
  GEN_ENTER(0xb01e00u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00b01e30 */
unsigned int F_00b01e30(unsigned int gen_a0)
{
  GEN_ENTER(0xb01e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b01e60 */
unsigned int F_00b01e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01e60u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b01e80 */
unsigned int F_00b01e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01e80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00b01eb0 */
unsigned int F_00b01eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01eb0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00b01ee0 */
uint F_00b01ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (0x3fffffff - uVar6 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= 0x3fffffff - uVar7)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc) >> 2;
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x2c2);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x2c2);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00b02060 */
uint F_00b02060(unsigned int gen_a0)
{
  GEN_ENTER(0xb02060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  uVar3 = *(uint *)((int)this + 0x14);
  uVar2 = *(uint *)((int)this + 0x10);
  if (uVar2 != uVar3) {
    uVar3 = F_00c46e20(uVar2,uVar3,0);
    *(uint *)((int)this + 0x14) = uVar2;
  }
  return uVar3;
}

/* ref: FUN_00b020b0 */
uint F_00b020b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb020b0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x135);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x135);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00b02160 */
unsigned int F_00b02160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb02160u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00b02190 */
uint F_00b02190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(byte *)((int)this + 0xc) & 3) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    F_00b01ee0(this,1);
  }
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)this + 8) * 4;
  }
  uVar4 = iVar3 - 1;
  uVar5 = uVar4 >> 2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0x2c2);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) = uVar2;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) + (uVar4 & 3) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(uint *)((int)this + 0xc) = uVar4;
  return (uint)puVar1;
}

/* ref: FUN_00b02210 */
uint F_00b02210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar6 = *(uint *)((int)this + 0x10);
  uVar2 = uVar6;
  if (uVar6 <= param_1) {
    while (uVar2 < param_1) {
      if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 3U) == 0) &&
         (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
        F_00b01ee0(this,1);
      }
      uVar2 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc);
      uVar6 = uVar2 >> 2;
      if (*(uint *)((int)this + 8) <= uVar6) {
        uVar6 = uVar6 - *(uint *)((int)this + 8);
      }
      if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar6 * 4))) == 0) {
        uVar3 = F_004296a0(0x10,0,0x2c2);
        *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar6 * 4))) = uVar3;
      }
      uVar6 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar6 * 4)));
      puVar1 = ((undefined4 *)GEN_TOP((uVar6 + (uVar2 & 3) * 4)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
      uVar2 = *(uint *)((int)this + 0x10);
    }
    return uVar6;
  }
  uVar8 = 0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    uVar8 = *puVar1;
  }
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar1;
  }
  piVar5 = (int *)0x0;
  if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
    piVar5 = *(int * PTR32 *)*piVar4;
  }
  uVar7 = 0;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    uVar7 = *(undefined4 *)*piVar5;
  }
  uVar2 = F_00b01c10(this,((undefined1 *)(gen_frame + 0x0)),uVar7,0,param_1 + *(int *)((int)this + 0xc),uVar8,0,
                       *(int *)((int)this + 0xc) + uVar6);
  return uVar2;
}

/* ref: FUN_00b02320 */
uint F_00b02320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02320u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined1 *)F_004296a0(param_1,0,0x135);
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
      F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x135);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined1 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1);
    *(undefined1 * PTR32 *)this = puVar3;
    *(undefined1 * PTR32 *)((int)this + 8) = puVar5;
  }
  return (uint)puVar5;
}

/* ref: FUN_00b023b0 */
uint F_00b023b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb023b0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00b02320(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b02320(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b02410 */
uint F_00b02410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02410u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00b020b0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b020b0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b02480 */
uint F_00b02480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  if (param_1 != 0) {
    F_00b02320((undefined4 *)((int)this + 0x10),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00b024b0 */
uint F_00b024b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb024b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 * puVar4;
  
  iVar3 = *(int *)((int)this + 4);
  uVar2 = *(uint *)this;
  if (param_1 < iVar3 - uVar2) {
    iVar1 = uVar2 + param_1;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *(int *)((int)this + 4) = iVar1;
    }
  }
  else if (iVar3 - uVar2 < param_1) {
    F_00b023b0(this,(uVar2 - iVar3) + param_1);
    puVar4 = *(undefined1 * PTR32 *)((int)this + 4);
    for (iVar3 = (*(int *)this - (int)puVar4) + param_1; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    *(uint *)((int)this + 4) = *(int *)this + param_1;
    return *(int *)this + param_1;
  }
  return uVar2;
}

/* ref: FUN_00b02520 */
uint F_00b02520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b02410(this,1);
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
      F_00b02410(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00b02590 */
uint F_00b02590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb02590u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  iVar1 = (*(int *)&gen_args[2]) + iVar3;
  F_00b024b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),iVar1);
  F_00c46aa0(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + iVar3,(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[2]));
  (*(int *)&gen_args[2]) = iVar1;
  uVar2 = F_00b02520((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[2]));
  return uVar2;
}

/* ref: Component::Log::LogModule::vf0 */
uint F_00b025e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb025e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b004a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b02610 */
unsigned int F_00b02610(float gen_a0)
{
  GEN_ENTER(0xb02610u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b02630 */
byte F_00b02630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb02630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if ((char)param_1 != '\0') {
    puVar3 = (undefined4 *)&REFG(undefined, 0x10ec5b4);
    if (param_5 != (undefined4 *)0x0) {
      puVar3 = param_5;
    }
    this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (this != (undefined *)0x0) {
      (*(undefined4 *)(gen_frame + 0x20)) = param_3;
      (*(undefined4 *)(gen_frame + 0x28)) = param_2;
      (*(undefined4 *)(gen_frame + 0x24)) = param_4;
      (*(undefined1 *)(gen_frame + 0x2d)) = (undefined1)param_6;
      (*(char *)(gen_frame + 0x2c)) = (char)param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x12a;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
      puVar4 = ((undefined4 *)(gen_frame + 0x2e));
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      bVar1 = F_00974da0(this,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
      if (bVar1 != 0) {
        F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
        return 1;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: FUN_00b02710 */
uint F_00b02710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02710u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  bVar1 = *(byte *)(param_2 + 0xc);
  uVar3 = bVar1 - 2;
  if (0xe < uVar3) {
    return uVar3;
  }
  uVar3 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xb027e0) + bVar1 + 2)));
  switch((unsigned int)(uintptr_t)(bVar1)) {
  case 2: ;
    uVar5 = 0;
    break;
  default: ;
    goto switchD_00b02745_caseD_3;
  case 0xb: ;
    uVar5 = 5;
    break;
  case 0xc: ;
    uVar5 = 3;
    break;
  case 0xe: ;
    uVar5 = 7;
    break;
  case 0xf: ;
  case 0x10: ;
    uVar5 = 0xd;
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
  piVar4 = (int *)F_00435440(uVar3,uVar5);
  uVar3 = 0;
  if (((piVar4 != (int *)0x0) &&
      (uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4,param_2), *(char *)(param_2 + 0xc) == '\x02'))
     && (uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4), 1 < uVar3)) {
    uVar5 = 1;
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
    piVar2 = (int *)F_00435440(uVar3,uVar5);
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    if (0 < piVar2[6]) {
      piVar2[6] = piVar2[6] + -1;
    }
    uVar3 = F_0042e430(piVar2 + 9,&REFG(undefined1, 0x107fc63));
  }
switchD_00b02745_caseD_3: ;
  return uVar3;
}

/* ref: FUN_00b02800 */
uint F_00b02800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02800u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 8;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    piVar1 = (int *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,1);
    }
  }
  return uVar2;
}

/* ref: FUN_00b02840 */
uint F_00b02840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    iVar5 = param_2[4];
    if (iVar5 == 0) {
      uVar4 = 0x50;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      F_0046a630(pvVar2,uVar4);
    }
    else {
      ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      F_0046b5e0(iVar5);
    }
    uVar4 = 8;
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    pvVar2 = (undefined *)F_00435440(uVar3,uVar4);
    if (pvVar2 != (undefined *)0x0) {
      F_00436380(pvVar2,(uint)*(byte *)(param_2 + 5));
      F_004363a0(pvVar2,param_2[2],param_2[3]);
      F_004363d0(pvVar2,*param_2,param_2[1]);
      F_00436400(pvVar2,(uint)*(byte *)((int)param_2 + 0x15));
      F_00440970(pvVar2,(int)param_2 + 0x16);
    }
    uVar4 = 0;
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    pvVar2 = (undefined *)F_00435440(uVar3,uVar4);
    if (pvVar2 != (undefined *)0x0) {
      F_00439b70(pvVar2,param_2);
    }
    uVar4 = 3;
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    pvVar2 = (undefined *)F_00435440(uVar3,uVar4);
    if (pvVar2 != (undefined *)0x0) {
      F_00445020(pvVar2,param_2);
    }
    uVar4 = 0xb;
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    pvVar2 = (undefined *)F_00435440(uVar3,uVar4);
    uVar3 = 0;
    if (pvVar2 != (undefined *)0x0) {
      uVar3 = F_0044ab60(pvVar2,param_2);
    }
  }
  return uVar3;
}

/* ref: FUN_00b02940 */
uint F_00b02940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 8;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      F_00436380(this,(uint)*(byte *)(param_2 + 4));
      F_004363a0(this,param_2[2],param_2[3]);
      F_004363d0(this,*param_2,param_2[1]);
      F_00436400(this,(uint)*(byte *)((int)param_2 + 0x11));
      uVar2 = F_00440970(this,(int)param_2 + 0x12);
    }
  }
  return uVar2;
}

/* ref: FUN_00b029c0 */
uint F_00b029c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb029c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 8;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00436430(this,*param_2,param_2 + 1);
    }
  }
  return uVar2;
}

/* ref: FUN_00b02a00 */
uint F_00b02a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02a00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  int * this;
  undefined * this_00;
  ulonglong uVar7;
  undefined4 uVar8;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[1]);
  uVar1 = *((ushort *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1)));
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  piVar4 = piVar3;
  if ((piVar3 != (int *)0x0) && ((*(undefined4 * PTR32 *)&gen_args[1])[7] == 0)) {
    piVar4 = (*(undefined4 * PTR32 *)&gen_args[1]) + 6;
    (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(((uint)(*(undefined4 * PTR32 *)&gen_args[1]) & 0xffffff00)));
    uVar5 = (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    gen_piece_set(&(*(undefined4 * PTR32 *)&gen_args[1]), 1, 3, (unsigned long long)(SUB43(puVar2,1)));
    if (*piVar4 == 0xd1) {
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[1]), 1, 3),1)));
      uVar5 = (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    else if (*piVar4 == 0xd2) {
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(((uint)GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[1]), 1, 3) << 8)));
      uVar5 = (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)uVar5;
    if (uVar1 == 2) {
      uVar8 = 2;
      uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x44))(piVar3);
      pvVar6 = (undefined *)F_00435440(uVar5,uVar8);
      uVar8 = 3;
      uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x44))(piVar3);
      this = (int *)F_00435440(uVar5,uVar8);
      piVar4 = this;
      if ((pvVar6 != (undefined *)0x0) && (this != (int *)0x0)) {
        this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x44))(piVar3)));
        uVar7 = F_0043f9f0(this_00);
        if ((puVar2[4] == (int)uVar7) && (puVar2[5] == (int)(uVar7 >> 0x20))) {
          F_00439280(pvVar6,*puVar2,puVar2[1],(*(undefined4 * PTR32 *)&gen_args[1]));
        }
        uVar7 = F_004396b0(this);
        piVar4 = (int *)uVar7;
        if ((piVar4 == (int *)puVar2[2]) && ((int)(uVar7 >> 0x20) == puVar2[3])) {
          piVar4 = (int *)F_00439950(this,puVar2[4],puVar2[5],(*(undefined4 * PTR32 *)&gen_args[1]));
        }
      }
    }
    else {
      piVar4 = (int *)(uVar1 - 3);
      if (piVar4 == (int *)0x0) {
        uVar8 = 0xb;
        uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x44))(piVar3);
        pvVar6 = (undefined *)F_00435440(uVar5,uVar8);
        piVar4 = (int *)0x0;
        if (pvVar6 != (undefined *)0x0) {
          uVar5 = F_004364f0(pvVar6,*puVar2,puVar2[1]);
          return uVar5;
        }
      }
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00b02b20 */
uint F_00b02b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02b20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this;
  int * piVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  piVar4 = piVar2;
  if (piVar2 != (int *)0x0) {
    bVar1 = *param_2;
    if (((bVar1 & 1) != 0) || (bVar1 == 0)) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ec5b5),REFG(undefined4, 0x108cc50));
      uVar8 = 0;
      uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)),param_2 + 1,REFG(undefined4, 0x108cc50));
      puVar7 = ((undefined1 *)(gen_frame + 0x54));
      uVar6 = 3;
      this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
      F_00459b00(this,uVar6,puVar7,uVar3,uVar8);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)));
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x54)));
      piVar4 = (int *)uVar5;
    }
    if ((bVar1 & 4) != 0) {
      piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xe4))(piVar2,param_2 + 1,5,1,1)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (uint)piVar4;
}

/* ref: FUN_00b02be0 */
uint F_00b02be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02be0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this;
  int * piVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  piVar4 = piVar2;
  if (piVar2 != (int *)0x0) {
    bVar1 = *param_2;
    if (((bVar1 & 1) != 0) || (bVar1 == 0)) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ec5b6),REFG(undefined4, 0x108cc50));
      uVar8 = 0;
      uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)),param_2 + 1,REFG(undefined4, 0x108cc50));
      puVar7 = ((undefined1 *)(gen_frame + 0x54));
      uVar6 = 3;
      this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
      F_00459b00(this,uVar6,puVar7,uVar3,uVar8);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)));
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x54)));
      piVar4 = (int *)uVar5;
    }
    if ((bVar1 & 4) != 0) {
      piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xe4))(piVar2,param_2 + 1,5,1,1)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (uint)piVar4;
}

/* ref: FUN_00b02ca0 */
uint F_00b02ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined * this;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1)));
    uVar2 = F_00435460(this,uVar3,uVar4);
  }
  return uVar2;
}

/* ref: FUN_00b02cd0 */
uint F_00b02cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  undefined * this;
  ulonglong uVar4;
  undefined4 uVar5;
  uint * puVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  
  ((uint *)(gen_frame + 0xc8))[8] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar2 == (int *)0x0) goto LAB_00b02e58;
  uVar3 = *param_2;
  uVar1 = param_2[1];
  if ((uVar3 & uVar1) == 0xffffffff) {
    puVar6 = param_2 + 2;
    uVar3 = 0xffffffff;
    if ((char)*puVar6 == '\0') goto LAB_00b02e58;
    F_0042cc20(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ec5c6),REFG(undefined4, 0x108cc50));
LAB_00b02e1c: ;
    uVar8 = 0;
    uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)),puVar6,REFG(undefined4, 0x108cc50));
    puVar7 = ((undefined1 *)(gen_frame + 0x54));
    uVar5 = 0x39;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
  }
  else {
    if ((char)param_2[2] == '\0') {
      ((uint *)(gen_frame + 0xc8))[0] = 0;
      ((uint *)(gen_frame + 0xc8))[1] = 0;
      ((uint *)(gen_frame + 0xc8))[2] = 0;
      ((uint *)(gen_frame + 0xc8))[3] = 0;
      ((uint *)(gen_frame + 0xc8))[4] = 0;
      ((uint *)(gen_frame + 0xc8))[5] = 0;
      ((uint *)(gen_frame + 0xc8))[6] = 0;
      ((uint *)(gen_frame + 0xc8))[7] = 0;
      F_00c472af(((uint *)(gen_frame + 0xc8)),0x20,&REFG(undefined, 0x10ec5c0),uVar3,uVar1);
      F_0042cc20(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ec5c5),REFG(undefined4, 0x108cc50));
      puVar6 = ((uint *)(gen_frame + 0xc8));
      goto LAB_00b02e1c;
    }
    F_00c48350(((undefined1 *)(gen_frame + 0xa8)),0,0x40);
    F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x40,"%llu %s",uVar3,uVar1,param_2 + 2);
    F_0042cc20(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ec5b7),REFG(undefined4, 0x108cc50));
    uVar8 = 0;
    uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0xa8)),REFG(undefined4, 0x108cc50));
    puVar7 = ((undefined1 *)(gen_frame + 0x54));
    uVar5 = 0x39;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x39,puVar7,uVar3,uVar8)));
  }
  F_00459b00(this,uVar5,puVar7,uVar3,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  uVar3 = (uint)uVar4;
LAB_00b02e58: ;
  F_00c47745(((uint *)(gen_frame + 0xc8))[8] ^ (uint)(uint)(gen_frame + 0xec));
  return uVar3;
}

/* ref: FUN_00b02e70 */
uint F_00b02e70(unsigned int gen_a0)
{
  GEN_ENTER(0xb02e70u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 0;
  if (piVar1 != (int *)0x0) {
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1)));
    uVar5 = F_00435450(pvVar2);
    if (((uint)uVar5 & 0x800) == 0x800) {
      uVar4 = 0x800;
    }
    else {
      iVar7 = *param_1;
      if (iVar7 == 0) {
        uVar8 = 0xffffffff;
        uVar4 = (uint)(*(byte *)((int)param_1 + 5) & 1);
        iVar3 = (int)param_1 + 6;
        uVar6 = 1;
        pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
        uVar4 = F_0046acc0(pvVar2,uVar6,iVar3,uVar4,iVar7,uVar8);
        return uVar4;
      }
      ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      uVar4 = F_0046b5e0(iVar7);
    }
  }
  return uVar4;
}

/* ref: FUN_00b02ef0 */
uint F_00b02ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xb02ef0u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1)));
    uVar6 = F_00435450(pvVar2);
    uVar3 = *param_1;
    if (uVar3 == 0) {
      uVar8 = 1;
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      piVar4 = (int *)F_00435440(uVar3,uVar8);
      uVar3 = 0;
      if (piVar4 != (int *)0x0) {
        if (((uVar6 & 0x800) == 0) && (*(char *)((int)param_1 + 5) == '\0')) {
          uVar9 = 0xffffffff;
          uVar3 = (uint)(*(byte *)((int)param_1 + 6) & 1);
          uVar7 = 0;
          iVar5 = (int)param_1 + 7;
          uVar8 = 0x3f;
          pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
          F_0046acc0(pvVar2,uVar8,iVar5,uVar3,uVar7,uVar9);
        }
        ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
        if (0 < piVar4[6]) {
          piVar4[6] = piVar4[6] + -1;
        }
        uVar3 = F_0042e430(piVar4 + 9,&REFG(undefined1, 0x107fc63));
      }
    }
    else if ((uVar6 & 0x800) == 0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      uVar3 = F_0046b5e0(uVar3);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00b02fe0 */
uint F_00b02fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xb02fe0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  int * this;
  undefined * pvVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar9 = 1;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (int *)F_00435440(uVar2,uVar9);
    uVar2 = 0;
    if (this != (int *)0x0) {
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1)));
      uVar5 = F_00435450(pvVar3);
      uVar2 = *(byte *)(param_1 + 0xe) - 1;
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 0: ;
        if (this[6] == 0) {
          if ((uVar5 & 0x800) == 0) {
            uVar8 = 0xffffffff;
            uVar2 = (uint)(*(byte *)(param_1 + 0xf) & 1);
            uVar7 = 0;
            iVar4 = param_1 + 0x10;
            uVar9 = 3;
            pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
            F_0046acc0(pvVar3,uVar9,iVar4,uVar2,uVar7,uVar8);
          }
          ((code *)*(gen_code32 *)(*this + 4))(this,param_1,1);
          uVar2 = F_00b06f80(this + 5,param_1 + 0x10,*(undefined4 *)(param_1 + 8));
          return uVar2;
        }
        break;
      case 1: ;
        uVar6 = F_00438660(this,param_1 + 0x10);
        uVar2 = 0;
        if (uVar6 != 0) {
          if ((uVar5 & 0x800) == 0) {
            uVar8 = 0xffffffff;
            uVar2 = (uint)(*(byte *)(param_1 + 0xf) & 1);
            uVar7 = 0;
            iVar4 = param_1 + 0x10;
            uVar9 = 2;
            pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
            F_0046acc0(pvVar3,uVar9,iVar4,uVar2,uVar7,uVar8);
          }
          ((code *)*(gen_code32 *)(*this + 8))(this,param_1,1);
          uVar2 = F_0046e8b0(this + 5);
          return uVar2;
        }
        break;
      case 2: ;
        uVar2 = ((code *)*(gen_code32 *)(*this + 8))(this,param_1,1);
        return uVar2;
      case 4: ;
        uVar2 = 0;
        if ((uVar5 & 0x800) == 0) {
          uVar8 = 0xffffffff;
          uVar2 = (uint)(*(byte *)(param_1 + 0xf) & 1);
          uVar7 = 0;
          iVar4 = param_1 + 0x10;
          uVar9 = 0x3e;
          pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
          uVar2 = F_0046acc0(pvVar3,uVar9,iVar4,uVar2,uVar7,uVar8);
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00b03190 */
uint F_00b03190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03190u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  int * piVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  int * piVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  piVar3 = piVar2;
  if ((piVar2 != (int *)0x0) && (*(int *)(param_2 + 4) != 0)) {
    uVar4 = 0xb;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2)));
    bVar1 = F_00435480(this,uVar4);
    piVar3 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
    if (bVar1 == 0) {
      uVar4 = *(undefined4 *)(param_2 + 4);
      ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
      piVar3 = (int *)F_0046b5e0(uVar4);
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_00b031e0 */
uint F_00b031e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb031e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ebx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int * this;
  undefined * pvVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  uVar13 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
  this = (int *)F_00435440(uVar3,uVar13);
  if (this == (int *)0x0) {
    return 0;
  }
  pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2)));
  uVar6 = F_00435450(pvVar4);
  if (((uint)uVar6 & 0x800) == 0x800) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)param_3 + 0x12))) {
    case 3: ;
    case 5: ;
    case 7: ;
    case 0xd: ;
      F_0044e4e0(this);
      goto switchD_00b03254_caseD_8;
    case 4: ;
      iVar5 = param_3[3];
      iVar11 = param_3[2];
      break;
    case 6: ;
    case 0xc: ;
      iVar5 = param_3[1];
      iVar11 = *param_3;
      break;
    default: ;
      goto switchD_00b03254_caseD_8;
    }
    F_00453e40(this,iVar11,iVar5);
switchD_00b03254_caseD_8: ;
    uVar3 = ((code *)*(gen_code32 *)(*this + 0x18))(this);
    if ((uVar3 == 1) && (*(char *)((int)param_3 + 0x12) == '\0')) {
      return 1;
    }
    uVar3 = ((code *)*(gen_code32 *)(*this + 0x10))(this);
    return uVar3;
  }
  pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2)));
  uVar6 = F_0043f9f0(pvVar4);
  iVar5 = (int)uVar6;
  uVar3 = -(uint)((char)param_3[5] != '\0') & (uint)(param_3 + 5);
  (*(uint *)(gen_frame + 0xc)) = -(uint)((char)param_3[0xd] != '\0') & (uint)(param_3 + 0xd);
  (*(uint *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x10)), 1, 3),(char)param_3[4]) & 0xffffff01;
  (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),*(undefined1 *)((int)param_3 + 0x11)) & 0xffffff01;
  if (*(char *)((int)param_3 + 0x12) != '\x0f') {
    if ((*param_3 != 0 || param_3[1] != 0) && (uVar3 == 0)) {
      uVar3 = F_00453f00(this,*param_3,param_3[1]);
      bVar1 = F_00453ea0(this,*param_3,param_3[1]);
      (*(uint *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x10)), 1, 3),bVar1) & 0xffffff01;
    }
    if ((param_3[2] != 0 || param_3[3] != 0) && ((*(uint *)(gen_frame + 0xc)) == 0)) {
      (*(uint *)(gen_frame + 0xc)) = F_00453f00(this,param_3[2],param_3[3]);
      bVar1 = F_00453ea0(this,param_3[2],param_3[3]);
      (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),bVar1) & 0xffffff01;
    }
  }
  (*(int *)(gen_frame + 0x8)) = (int)(uVar6 >> 0x20);
  uVar9 = (*(uint *)(gen_frame + 0x10));
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)param_3 + 0x12))) {
  case 1: ;
    if ((param_3[2] == iVar5) && (param_3[3] == (*(int *)(gen_frame + 0x8)))) {
      if (uVar3 == 0) break;
      uVar13 = 0x3d;
      goto LAB_00b03602;
    }
    if ((*(uint *)(gen_frame + 0xc)) == 0) break;
    uVar12 = 0xffffffff;
    uVar10 = 0;
    uVar13 = 0x3c;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x3c,(*(uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)),0,0xffffffff)));
    uVar3 = (*(uint *)(gen_frame + 0xc));
    uVar9 = (*(uint *)(gen_frame + 0x14));
    goto LAB_00b0360b;
  case 2: ;
    if ((param_3[2] == iVar5) && (param_3[3] == (*(int *)(gen_frame + 0x8)))) {
LAB_00b033c7: ;
      if (uVar3 == 0) break;
      uVar13 = 0x41;
    }
    else {
      if ((*param_3 == iVar5) && (param_3[1] == (*(int *)(gen_frame + 0x8)))) {
        if ((*(uint *)(gen_frame + 0xc)) == 0) break;
        uVar12 = 0xffffffff;
        uVar10 = 0;
        uVar13 = 0x40;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x40,(*(uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)),0,0xffffffff)));
        uVar3 = (*(uint *)(gen_frame + 0xc));
        uVar9 = (*(uint *)(gen_frame + 0x14));
        goto LAB_00b0360b;
      }
      if ((*(uint *)(gen_frame + 0xc)) == 0) break;
      uVar13 = 0x42;
      uVar3 = (*(uint *)(gen_frame + 0xc));
      uVar9 = (*(uint *)(gen_frame + 0x14));
    }
    goto LAB_00b03602;
  case 3: ;
    if ((*param_3 == iVar5) && (param_3[1] == (*(int *)(gen_frame + 0x8)))) {
      uVar13 = 0x48;
    }
    else {
      uVar13 = 0x49;
    }
    goto LAB_00b03543;
  case 4: ;
    if ((*param_3 == iVar5) && (param_3[1] == (*(int *)(gen_frame + 0x8)))) {
      if ((*(uint *)(gen_frame + 0xc)) != 0) {
        uVar12 = 0xffffffff;
        uVar10 = 0;
        uVar13 = 0x43;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x43,(*(uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)),0,0xffffffff)));
        uVar3 = (*(uint *)(gen_frame + 0xc));
        uVar9 = (*(uint *)(gen_frame + 0x14));
LAB_00b0347f: ;
        F_0046acc0(pvVar4,uVar13,uVar3,uVar9,uVar10,uVar12);
      }
    }
    else if ((*(uint *)(gen_frame + 0xc)) != 0) {
      uVar12 = 0xffffffff;
      uVar10 = 0;
      uVar13 = 0x45;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
      uVar3 = (*(uint *)(gen_frame + 0xc));
      uVar9 = (*(uint *)(gen_frame + 0x14));
      goto LAB_00b0347f;
    }
    F_00453e40(this,param_3[2],param_3[3]);
    break;
  case 5: ;
    goto joined_r0x00b034df;
  case 6: ;
    if (uVar3 != 0) {
      uVar12 = 0xffffffff;
      uVar10 = 0;
      uVar13 = 0x45;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
      F_0046acc0(pvVar4,uVar13,uVar3,(*(uint *)(gen_frame + 0x10)),uVar10,uVar12);
    }
    F_00453e40(this,*param_3,param_3[1]);
    break;
  case 7: ;
    uVar3 = (*(uint *)(gen_frame + 0xc));
    uVar9 = (*(uint *)(gen_frame + 0x14));
joined_r0x00b034df: ;
    if (uVar3 != 0) {
      uVar12 = 0xffffffff;
      uVar10 = 0;
      uVar13 = 0x44;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
      F_0046acc0(pvVar4,uVar13,uVar3,uVar9,uVar10,uVar12);
    }
    F_0044e4e0(this);
    break;
  case 10: ;
    if (uVar3 != 0) {
      uVar12 = 0xffffffff;
      uVar10 = 0;
      uVar13 = 0x54;
      uVar7 = uVar3;
      uVar8 = (*(uint *)(gen_frame + 0x10));
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
      F_0046acc0(pvVar4,uVar13,uVar7,uVar8,uVar10,uVar12);
    }
    if (param_3[2] == 0 && param_3[3] == 0) break;
    if (uVar6 == CONCAT44(param_3[3],param_3[2])) goto LAB_00b033c7;
    if ((*(uint *)(gen_frame + 0xc)) == 0) break;
    uVar12 = 0xffffffff;
    uVar10 = 0;
    uVar13 = 0x42;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x42,(*(uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)),0,0xffffffff)));
    uVar3 = (*(uint *)(gen_frame + 0xc));
    uVar9 = (*(uint *)(gen_frame + 0x14));
    goto LAB_00b0360b;
  case 0xb: ;
    if ((uVar6 == 0) || (((iVar5 == *param_3 && ((*(int *)(gen_frame + 0x8)) == param_3[1])) || (uVar3 == 0)))) break;
    uVar13 = 0x55;
    goto LAB_00b03602;
  case 0xc: ;
    if ((uVar3 != 0) && ((*(uint *)(gen_frame + 0xc)) != 0)) {
      uVar13 = 0x47;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
      F_0046acc0(pvVar4,uVar13,uVar3,(*(uint *)(gen_frame + 0x10)),(*(uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)));
    }
    F_00453e40(this,*param_3,param_3[1]);
    break;
  case 0xd: ;
    uVar13 = 0x46;
LAB_00b03543: ;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046a630(pvVar4,uVar13);
    F_0044e4e0(this);
    break;
  case 0xf: ;
    uVar3 = F_00439b10(this,*param_3,param_3[1],(uint)*(byte *)(param_3 + 2));
    if (uVar3 == 0) break;
    uVar9 = 0;
    uVar3 = uVar3 + 0x1c;
    uVar13 = 0x45;
LAB_00b03602: ;
    uVar12 = 0xffffffff;
    uVar10 = 0;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
LAB_00b0360b: ;
    F_0046acc0(pvVar4,uVar13,uVar3,uVar9,uVar10,uVar12);
  }
  uVar3 = ((code *)*(gen_code32 *)(*this + 0x18))(this);
  if ((uVar3 == 1) && (*(char *)((int)param_3 + 0x12) == '\0')) {
    return 1;
  }
  uVar3 = ((code *)*(gen_code32 *)(*this + 0x10))(this);
  return uVar3;
}

/* ref: FUN_00b036a0 */
uint F_00b036a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb036a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined * this;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar6 = 4;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    piVar3 = (int *)F_00435440(uVar2,uVar6);
    iVar4 = *(int *)(param_2 + 0x28);
    if (iVar4 == 0) {
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,param_2,1);
      }
      uVar7 = 0xffffffff;
      uVar2 = (uint)(*(byte *)(param_2 + 0x2c) & 1);
      uVar5 = 0;
      iVar4 = param_2 + 8;
      uVar6 = 8;
      this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      uVar2 = F_0046acc0(this,uVar6,iVar4,uVar2,uVar5,uVar7);
    }
    else {
      ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      uVar2 = F_0046b5e0(iVar4);
    }
    if (piVar3 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3,param_1,param_2);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00b03740 */
uint F_00b03740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined * this;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar6 = 4;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    piVar3 = (int *)F_00435440(uVar2,uVar6);
    iVar4 = *(int *)(param_2 + 0x28);
    if (iVar4 == 0) {
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,param_2,1);
      }
      uVar7 = 0xffffffff;
      uVar2 = (uint)(*(byte *)(param_2 + 0x2c) & 1);
      uVar5 = 0;
      iVar4 = param_2 + 8;
      uVar6 = 9;
      this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      uVar2 = F_0046acc0(this,uVar6,iVar4,uVar2,uVar5,uVar7);
    }
    else {
      ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      uVar2 = F_0046b5e0(iVar4);
    }
    if (piVar3 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3,param_1,param_2);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00b037e0 */
uint F_00b037e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb037e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 4;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    piVar1 = (int *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03820 */
uint F_00b03820(unsigned int gen_a0)
{
  GEN_ENTER(0xb03820u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    iVar6 = *param_1;
    if (iVar6 != 0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      uVar3 = F_0046b5e0(iVar6);
      return uVar3;
    }
    uVar7 = 0xffffffff;
    uVar3 = (uint)(*(byte *)((int)param_1 + 5) & 1);
    uVar4 = 10;
    iVar5 = (int)param_1 + 6;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046acc0(pvVar2,uVar4,iVar5,uVar3,iVar6,uVar7);
    uVar4 = 5;
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    pvVar2 = (undefined *)F_00435440(uVar3,uVar4);
    uVar3 = 0;
    if (pvVar2 != (undefined *)0x0) {
      uVar3 = F_00437d60(pvVar2,(int)param_1 + 6);
    }
  }
  return uVar3;
}

/* ref: FUN_00b03a90 */
uint F_00b03a90(unsigned int gen_a0)
{
  GEN_ENTER(0xb03a90u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined * pvVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar8 = 5;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar8);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = *(byte *)((int)param_1 + 0xe) - 1;
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 0: ;
        uVar7 = 0xffffffff;
        uVar2 = (uint)(*(byte *)((int)param_1 + 0xf) & 1);
        uVar6 = 0;
        puVar5 = param_1 + 4;
        uVar8 = 0xb;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
        F_0046acc0(pvVar3,uVar8,puVar5,uVar2,uVar6,uVar7);
        F_00b06f80((undefined *)((int)this + 0x20),param_1 + 4,0);
        uVar2 = F_00437f10(this,param_1 + 4,*param_1,param_1[1]);
        return uVar2;
      case 1: ;
        uVar7 = 0xffffffff;
        uVar2 = (uint)(*(byte *)((int)param_1 + 0xf) & 1);
        uVar6 = 0;
        puVar5 = param_1 + 4;
        uVar8 = 0x53;
        puVar4 = puVar5;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
        F_0046acc0(pvVar3,uVar8,puVar4,uVar2,uVar6,uVar7);
        F_0044b000(this,puVar5);
        uVar2 = F_00438230(this,puVar5);
        return uVar2;
      case 3: ;
        uVar7 = 0xffffffff;
        uVar2 = (uint)(*(byte *)((int)param_1 + 0xf) & 1);
        uVar6 = 0;
        uVar8 = 0x4e;
        puVar5 = param_1 + 4;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
        F_0046acc0(pvVar3,uVar8,puVar5,uVar2,uVar6,uVar7);
        uVar2 = F_004380d0(this,param_1 + 4,*param_1,param_1[1]);
        return uVar2;
      case 4: ;
        uVar2 = F_00438230(this,param_1 + 4);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00b03cb0 */
uint F_00b03cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 2;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    piVar1 = (int *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,8);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03d00 */
uint F_00b03d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03d00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  short * param_2 = (short *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar4 = 7;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    pvVar3 = (undefined *)F_00435440(uVar2,uVar4);
    uVar2 = 0;
    if (pvVar3 != (undefined *)0x0) {
      uVar2 = F_00445df0(pvVar3,(int)*param_2);
    }
    if (-1 < *param_2) {
      uVar4 = 0x51;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      uVar2 = F_0046a630(pvVar3,uVar4);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03d60 */
uint F_00b03d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03d60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 6;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    piVar1 = (int *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03da0 */
uint F_00b03da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb03da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ebx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint in_ecx;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 6;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    in_ecx = F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (in_ecx != 0) {
      uVar2 = F_0044b210(in_ecx,in_ebx,param_3);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03de0 */
uint F_00b03de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03de0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 6;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00438c40(this,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03e20 */
uint F_00b03e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03e20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 9;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00464170(this,*param_2,(uint)*(byte *)(param_2 + 2),
                           (uint)*(byte *)((int)param_2 + 9),(uint)*(byte *)((int)param_2 + 10),
                           param_2[1]);
    }
    iVar4 = param_2[1];
    if (iVar4 != 0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      uVar2 = F_0046b5e0(iVar4);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03e90 */
uint F_00b03e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03e90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 9;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    piVar1 = (int *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03ed0 */
uint F_00b03ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 9;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_004389d0(this,param_2,8);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03f10 */
uint F_00b03f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03f10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 9;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00467370(this,param_2 + 4,0x14);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03f50 */
uint F_00b03f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03f50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 9;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_004645b0(this,param_2 + 8,0x14);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03f90 */
uint F_00b03f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03f90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 10;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    piVar1 = (int *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03fd0 */
uint F_00b03fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb03fd0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined * this;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    iVar5 = *param_1;
    if (iVar5 == 0) {
      uVar6 = 0xffffffff;
      uVar3 = (uint)(*(byte *)((int)param_1 + 5) & 1);
      iVar2 = (int)param_1 + 6;
      uVar4 = 0xbe4;
      this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      uVar3 = F_0046acc0(this,uVar4,iVar2,uVar3,iVar5,uVar6);
      return uVar3;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    uVar3 = F_0046b5e0(iVar5);
  }
  return uVar3;
}

/* ref: FUN_00b04030 */
uint F_00b04030(unsigned int gen_a0)
{
  GEN_ENTER(0xb04030u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined * this_00;
  undefined * pvVar3;
  undefined * this_01;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  pvVar3 = (undefined *)0x0;
  if (piVar1 != (int *)0x0) {
    iVar4 = *param_1;
    if (iVar4 != 0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      uVar2 = F_0046b5e0(iVar4);
      return uVar2;
    }
    uVar6 = 0xb;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar6);
    uVar6 = 0xe;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this_00 = (undefined *)F_00435440(uVar2,uVar6);
    pvVar3 = this_00;
    if ((this != (undefined *)0x0) && (this_00 != (undefined *)0x0)) {
      if (*(byte *)((int)param_1 + 5) == 0) {
        uVar8 = 9;
        iVar4 = (int)param_1 + 7;
        uVar7 = 0xffffffff;
        uVar5 = 0;
        uVar6 = 0xbe6;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
        F_0046acc0(pvVar3,uVar6,uVar5,uVar7,iVar4,uVar8);
        pvVar3 = (undefined *)F_004370f0(this_00);
      }
      else {
        pvVar3 = ((undefined *)GEN_TOP((*(byte *)((int)param_1 + 5) - 1)));
        if (pvVar3 == (undefined *)0x0) {
          uVar7 = 9;
          uVar5 = 0xffffffff;
          uVar6 = 0xbe5;
          iVar4 = (int)param_1 + 7;
          this_01 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
          F_0046acc0(this_01,uVar6,pvVar3,uVar5,iVar4,uVar7);
          F_004370f0(this_00);
          F_00441300(this,2);
          uVar2 = F_004368e0(this,(int)param_1 + 7);
          return uVar2;
        }
      }
    }
  }
  return (uint)pvVar3;
}

/* ref: FUN_00b04120 */
uint F_00b04120(unsigned int gen_a0)
{
  GEN_ENTER(0xb04120u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint in_ecx;
  undefined * this;
  undefined * pvVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  pvVar3 = (undefined *)0x0;
  if (piVar1 != (int *)0x0) {
    uVar7 = 0xb;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    uVar2 = F_00435440(uVar2,uVar7);
    uVar7 = 0xe;
    in_ecx = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(in_ecx,uVar7);
    pvVar3 = this;
    if ((uVar2 != 0) && (this != (undefined *)0x0)) {
      pvVar3 = ((undefined *)GEN_TOP((*(byte *)((int)param_1 + 0xe) - 1)));
      switch((unsigned int)(uintptr_t)(pvVar3)) {
      case (undefined *)0x0: ;
        uVar5 = F_004370e0(this);
        pvVar3 = ((undefined *)GEN_TOP(((uint)uVar5 | (uint)(uVar5 >> 0x20))));
        if (pvVar3 == (undefined *)0x0) {
          uVar8 = 9;
          puVar4 = param_1 + 4;
          uVar9 = 0xffffffff;
          uVar6 = 0;
          uVar7 = 0xbed;
          pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
          F_0046acc0(pvVar3,uVar7,uVar6,uVar9,puVar4,uVar8);
          uVar2 = F_00442850(this,*param_1,param_1[1],param_1 + 4,param_1[2]);
          return uVar2;
        }
        break;
      case (undefined *)0x1: ;
        uVar5 = F_004370e0(this);
        pvVar3 = (undefined *)0x0;
        if (uVar5 != 0) {
          puVar4 = param_1 + 4;
          if (*(char *)(param_1 + 4) == '\0') {
            puVar4 = (undefined4 *)F_0042a990((int)this + 0x1c);
          }
          uVar8 = 9;
          uVar9 = 0xffffffff;
          uVar6 = 0;
          uVar7 = 0xbea;
          pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
          F_0046acc0(pvVar3,uVar7,uVar6,uVar9,puVar4,uVar8);
          uVar2 = F_004370f0(this);
          return uVar2;
        }
        break;
      case (undefined *)0x3: ;
        uVar9 = 0xffffffff;
        uVar2 = (uint)(*(byte *)((int)param_1 + 0xf) & 1);
        uVar6 = 0;
        uVar7 = 0xbee;
        puVar4 = param_1 + 4;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
        F_0046acc0(pvVar3,uVar7,puVar4,uVar2,uVar6,uVar9);
        uVar2 = F_004428f0(this,param_1 + 4,(uint)*(byte *)((int)param_1 + 0xd));
        return uVar2;
      case (undefined *)0x4: ;
        uVar9 = 0xffffffff;
        uVar2 = (uint)(*(byte *)((int)param_1 + 0xf) & 1);
        uVar6 = 0;
        puVar4 = param_1 + 4;
        uVar7 = 0xbef;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
        pvVar3 = (undefined *)F_0046acc0(pvVar3,uVar7,puVar4,uVar2,uVar6,uVar9);
      }
    }
  }
  return (uint)pvVar3;
}

/* ref: FUN_00b042b0 */
uint F_00b042b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb042b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined * this;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    iVar5 = *param_1;
    if (iVar5 == 0) {
      uVar6 = 0xffffffff;
      uVar3 = (uint)(*(byte *)((int)param_1 + 5) & 1);
      iVar2 = (int)param_1 + 6;
      uVar4 = 0x75c;
      this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      uVar3 = F_0046acc0(this,uVar4,iVar2,uVar3,iVar5,uVar6);
      return uVar3;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    uVar3 = F_0046b5e0(iVar5);
  }
  return uVar3;
}

/* ref: FUN_00b04310 */
uint F_00b04310(unsigned int gen_a0)
{
  GEN_ENTER(0xb04310u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  undefined * this;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  piVar4 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    iVar5 = *param_1;
    if (iVar5 != 0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      uVar2 = F_0046b5e0(iVar5);
      return uVar2;
    }
    uVar8 = 0xb;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    pvVar3 = (undefined *)F_00435440(uVar2,uVar8);
    uVar8 = 0xc;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    piVar4 = (int *)F_00435440(uVar2,uVar8);
    if ((pvVar3 != (undefined *)0x0) && (piVar4 != (int *)0x0)) {
      if (*(byte *)((int)param_1 + 5) == 0) {
        uVar10 = 9;
        iVar5 = (int)param_1 + 7;
        uVar9 = 0xffffffff;
        uVar6 = 0;
        uVar8 = 0x760;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
        F_0046acc0(pvVar3,uVar8,uVar6,uVar9,iVar5,uVar10);
      }
      else {
        iVar5 = *(byte *)((int)param_1 + 5) - 1;
        if (iVar5 == 0) {
          uVar9 = 9;
          uVar6 = 0xffffffff;
          uVar8 = 0x75e;
          iVar7 = (int)param_1 + 7;
          this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
          F_0046acc0(this,uVar8,iVar5,uVar6,iVar7,uVar9);
          F_00441300(pvVar3,4);
          F_004368e0(pvVar3,(int)param_1 + 7);
          F_00436510();
        }
      }
      ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
      if (0 < piVar4[6]) {
        piVar4[6] = piVar4[6] + -1;
      }
      piVar4 = (int *)F_0042e430(piVar4 + 9,&REFG(undefined1, 0x107fc63));
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00b04420 */
uint F_00b04420(unsigned int gen_a0)
{
  GEN_ENTER(0xb04420u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  int * this;
  int * piVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 * puVar6;
  undefined * this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  piVar5 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    uVar8 = 0xb;
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
    pvVar4 = (undefined *)F_00435440(uVar3,uVar8);
    uVar8 = 0xc;
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
    this = (int *)F_00435440(uVar3,uVar8);
    piVar5 = this;
    if ((pvVar4 != (undefined *)0x0) && (this != (int *)0x0)) {
      piVar5 = ((int *)GEN_TOP((*(byte *)((int)param_1 + 0xe) - 1)));
      switch((unsigned int)(uintptr_t)(piVar5)) {
      case (int *)0x0: ;
        bVar1 = F_00442f20(this,*param_1,param_1[1]);
        piVar5 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
        if (bVar1 == 0) {
          uVar9 = 9;
          uVar10 = 0xffffffff;
          uVar7 = 0;
          uVar8 = 0x75d;
          puVar6 = param_1 + 4;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
          F_0046acc0(pvVar4,uVar8,uVar7,uVar10,puVar6,uVar9);
          ((code *)*(gen_code32 *)(*this + 4))(this,param_1,1);
          uVar3 = F_00b06f80(this + 5,param_1 + 4,param_1[2]);
          return uVar3;
        }
        break;
      case (int *)0x1: ;
        bVar1 = F_00442f20(this,*param_1,param_1[1]);
        piVar5 = ((int *)GEN_TOP(CONCAT31(extraout_var_00,bVar1)));
        if (bVar1 != 0) {
          puVar6 = param_1 + 4;
          if (*(char *)(param_1 + 4) == '\0') {
            puVar6 = (undefined4 *)F_0042a990(this + 9);
          }
          uVar9 = 9;
          uVar10 = 0xffffffff;
          uVar7 = 0;
          uVar8 = 0x767;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
          F_0046acc0(pvVar4,uVar8,uVar7,uVar10,puVar6,uVar9);
          ((code *)*(gen_code32 *)(*this + 8))(this,param_1,1);
          uVar3 = F_0046e8b0(this + 5);
          return uVar3;
        }
        break;
      case (int *)0x3: ;
        uVar10 = 0xffffffff;
        uVar3 = (uint)(*(byte *)((int)param_1 + 0xf) & 1);
        uVar7 = 0;
        puVar6 = param_1 + 4;
        uVar8 = 0x75f;
        this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
        F_0046acc0(this_00,uVar8,puVar6,uVar3,uVar7,uVar10);
        uVar3 = F_00467280(pvVar4,*param_1,param_1[1]);
        return uVar3;
      case (int *)0x4: ;
        uVar10 = 0xffffffff;
        uVar3 = (uint)(*(byte *)((int)param_1 + 0xf) & 1);
        uVar7 = 0;
        puVar6 = param_1 + 4;
        uVar8 = 0x761;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
        piVar5 = (int *)F_0046acc0(pvVar4,uVar8,puVar6,uVar3,uVar7,uVar10);
      }
    }
  }
  return (uint)piVar5;
}

/* ref: FUN_00b045d0 */
uint F_00b045d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb045d0u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint * puVar4;
  undefined4 uVar5;
  
  if (((param_1 != (char *)0x0) && (*param_1 == ' ')) && (param_1[1] != '\0')) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar2 != (int *)0x0) {
      uVar5 = 0xb;
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
      uVar3 = F_00435440(uVar3,uVar5);
      if (uVar3 != 0) {
        bVar1 = F_004369a0(param_1);
        if (bVar1 != 0x11) {
          puVar4 = (uint *)F_00ab4160((uint)bVar1);
          if (puVar4 != (uint *)0x0) {
            return (*puVar4 & 0xffffff) + (int)puVar4;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00b04640 */
uint F_00b04640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb04640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00453610(this,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b04680 */
uint F_00b04680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb04680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xe;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    piVar1 = (int *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,1);
    }
  }
  return uVar2;
}

/* ref: FUN_00b046c0 */
uint F_00b046c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb046c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00436680(this,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b04700 */
uint F_00b04700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb04700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00453970(this,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b04740 */
uint F_00b04740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb04740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  char * this;
  undefined * this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this = (char *)0x0;
  if (piVar1 != (int *)0x0) {
    uVar6 = 0xb;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (char *)F_00435440(uVar2,uVar6);
    if (this != (char *)0x0) {
      if (*param_2 == '\x01') {
        this = param_2 + 1;
        if (param_2[1] != '\0') {
          uVar5 = 9;
          uVar4 = 0xffffffff;
          uVar3 = 0;
          uVar6 = 0xc0f;
          this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
          this = (char *)F_0046acc0(this_00,uVar6,uVar3,uVar4,this,uVar5);
        }
      }
      else if (*param_2 == '\x02') {
        uVar2 = F_004366d0(this,param_2 + 1);
        return uVar2;
      }
    }
  }
  return (uint)this;
}

/* ref: FUN_00b047b0 */
uint F_00b047b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb047b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00440af0(this,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b047f0 */
uint F_00b047f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb047f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00436730(this,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b04830 */
uint F_00b04830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb04830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00440b80(this,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b04870 */
uint F_00b04870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb04870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_004367a0(this,param_2 + 1);
    }
  }
  return uVar2;
}

/* ref: FUN_00b048b0 */
uint F_00b048b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb048b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00453a20(this,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b048f0 */
uint F_00b048f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb048f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00436830(this,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b04930 */
uint F_00b04930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb04930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(byte *)(param_2 + 4) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00b02e70(param_2);
    return uVar1;
  case 1: ;
    uVar1 = F_00b03820(param_2);
    return uVar1;
  case 3: ;
    uVar1 = F_00b03fd0(param_2);
    return uVar1;
  case 4: ;
    uVar1 = F_00b042b0(param_2);
  }
  return uVar1;
}

/* ref: FUN_00b04990 */
uint F_00b04990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb04990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(byte *)(param_2 + 4) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00b02ef0(param_2);
    return uVar1;
  case 1: ;
    uVar1 = F_00b038a0(param_2);
    return uVar1;
  case 3: ;
    uVar1 = F_00b04030(param_2);
    return uVar1;
  case 4: ;
    uVar1 = F_00b04310(param_2);
  }
  return uVar1;
}

/* ref: FUN_00b049f0 */
uint F_00b049f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb049f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(byte *)(param_2 + 0xc) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00b02fe0(param_2);
    return uVar1;
  case 1: ;
    uVar1 = F_00b03a90(param_2);
    return uVar1;
  case 3: ;
    uVar1 = F_00b04120(param_2);
    return uVar1;
  case 4: ;
    uVar1 = F_00b04420(param_2);
  }
  return uVar1;
}

/* ref: FUN_00b05490 */
uint F_00b05490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb05490u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  (*(int * PTR32 *)(gen_frame + 0x1c)) = param_2;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  piVar3 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    iVar5 = param_2[0x11];
    if (iVar5 != 0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      uVar2 = F_0046b5e0(iVar5);
      F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0));
      return uVar2;
    }
    uVar7 = 6;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    piVar3 = (int *)F_00435440(uVar2,uVar7);
    (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar3;
    if (piVar3 != (int *)0x0) {
      iVar5 = *param_2;
      if (iVar5 == 0xfa) {
        uVar7 = 0x19;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
        piVar3 = (int *)F_0046a630(pvVar4,uVar7);
      }
      else {
        if (iVar5 == 0xfb) {
          uVar7 = 0x1a;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
          F_0046a630(pvVar4,uVar7);
          iVar5 = param_2[4];
          (*(int *)(gen_frame + 0x34)) = param_2[3];
          (*(int *)(gen_frame + 0x30)) = param_2[2];
          (*(int *)(gen_frame + 0x38)) = iVar5;
          uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x2c)) + 8))((*(int * PTR32 *)(gen_frame + 0x2c)),&(*(int *)(gen_frame + 0x30)),1);
          F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0));
          return uVar2;
        }
        if (iVar5 == 0xff) {
          uVar2 = F_00438cf0(piVar3,param_2[2],param_2[3],param_2[4],&(*(undefined4 *)(gen_frame + 0x20)));
          (*(uint *)(gen_frame + 0x18)) = uVar2;
          piVar3 = (int *)0x0;
          if (uVar2 != 0) {
            F_004816e0(((undefined4 *)(gen_frame + 0x0)));
            piVar3 = (int *)(uVar2 + 0xc);
            (*(int *)(gen_frame + 0x24)) = 0;
            (*(int * PTR32 *)(gen_frame + 0x28)) = (*(int * PTR32 *)(gen_frame + 0x1c)) + 5;
            do {
              if ((*piVar3 != 0) && (*piVar3 == *(*(int * PTR32 *)(gen_frame + 0x28)))) {
                F_00492c50(((undefined4 *)(gen_frame + 0x0)));
                iVar5 = *piVar3;
                (*(int *)(gen_frame + 0xe0)) = 0;
                (*(int *)(gen_frame + 0xe0)) = iVar5;
                (*(undefined1 *)(gen_frame + 0xe8)) = 0;
                (*(int * PTR32 *)(gen_frame + 0xe4)) = &(*(int *)(gen_frame + 0xe0));
                F_00493b50(((undefined4 *)(gen_frame + 0x0)),&(*(int *)(gen_frame + 0xe0)));
                F_004917c0(&(*(int *)(gen_frame + 0xe0)));
                iVar5 = piVar3[1];
                (*(int *)(gen_frame + 0xd4)) = 0;
                (*(int *)(gen_frame + 0xd4)) = iVar5;
                (*(undefined1 *)(gen_frame + 0xdc)) = 0;
                (*(int * PTR32 *)(gen_frame + 0xd8)) = &(*(int *)(gen_frame + 0xd4));
                F_00493b50(((undefined4 *)(gen_frame + 0x0)),&(*(int *)(gen_frame + 0xd4)));
                F_004917c0(&(*(int *)(gen_frame + 0xd4)));
                puVar8 = ((undefined4 *)(gen_frame + 0x0));
                uVar7 = 0x1b;
                pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
                F_0046aa70(pvVar4,uVar7,puVar8);
                F_00438e70((*(int * PTR32 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x20)),(*(int *)(gen_frame + 0x24)));
              }
              (*(int * PTR32 *)(gen_frame + 0x28)) = (*(int * PTR32 *)(gen_frame + 0x28)) + 2;
              iVar5 = (*(int *)(gen_frame + 0x24)) + 1;
              piVar3 = piVar3 + 2;
              (*(int *)(gen_frame + 0x24)) = iVar5;
            } while (iVar5 < 5);
            iVar5 = *(int *)((*(uint *)(gen_frame + 0x18)) + 0x38);
            if ((iVar5 != 0) && (iVar5 == (*(int * PTR32 *)(gen_frame + 0x1c))[0x10])) {
              uVar7 = 0x1c;
              pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
              F_0046a6b0(pvVar4,uVar7,iVar5);
              F_00438f10((*(int * PTR32 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x20)));
            }
            F_00492c50(((undefined4 *)(gen_frame + 0x0)));
            uVar6 = F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
            F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0));
            return (uint)uVar6;
          }
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0));
  return (uint)piVar3;
}

/* ref: FUN_00b05750 */
uint F_00b05750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb05750u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar6 = 9;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    pvVar3 = (undefined *)F_00435440(uVar2,uVar6);
    if (pvVar3 != (undefined *)0x0) {
      F_004387b0(pvVar3,*param_2,param_2[1]);
    }
    iVar7 = param_2[1];
    if (iVar7 != 0) {
      if (iVar7 == 0x23bf) {
        uVar6 = *param_2;
        uVar5 = 0x23bf;
      }
      else {
        if (iVar7 != 0x23c0) {
          ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
          uVar2 = F_0046b5e0(iVar7);
          F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
          return uVar2;
        }
        uVar6 = *param_2;
        uVar5 = 0x23c0;
      }
      ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      uVar2 = F_0046b630(uVar5,uVar6);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar2;
    }
    if (*(char *)(param_2 + 3) == '\0') {
      uVar6 = *param_2;
      uVar5 = 0x2df;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      uVar2 = F_0046a6b0(pvVar3,uVar5,uVar6);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar2;
    }
    F_004816e0(((undefined4 *)(gen_frame + 0x8)));
    F_00492c50(((undefined4 *)(gen_frame + 0x8)));
    uVar6 = *param_2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = &(*(undefined4 *)(gen_frame + 0x20));
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = uVar6;
    (*(undefined1 *)(gen_frame + 0x28)) = 0;
    F_00493b50(((undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x20)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x20)));
    uVar6 = param_2[2];
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = uVar6;
    (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x2c));
    (*(undefined1 *)(gen_frame + 0x34)) = 0;
    F_00493b50(((undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x2c)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x2c)));
    puVar8 = ((undefined4 *)(gen_frame + 0x8));
    uVar6 = 0x2de;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046aa70(pvVar3,uVar6,puVar8);
    F_00492c50(((undefined4 *)(gen_frame + 0x8)));
    uVar4 = F_00429760(((undefined4 *)(gen_frame + 0x8))[0],8,0x2c4);
    uVar2 = (uint)uVar4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: FUN_00b058e0 */
uint F_00b058e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb058e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined * pvVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 * PTR32 * ppuVar11;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar6 = 0;
  if (piVar5 != (int *)0x0) {
    uVar10 = 9;
    uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0x44))(piVar5);
    uVar6 = F_00435440(uVar6,uVar10);
    if (uVar6 != 0) {
      F_004387a0((uint)*(byte *)(param_2 + 4));
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
    puVar7 = (undefined4 *)F_004296a0(8,0,0x2c4);
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
    }
    *puVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
    if (*(char *)(param_2 + 4) == '\x01') {
      bVar1 = *(byte *)((int)param_2 + 0x11);
      (*(uint * PTR32 *)(gen_frame + 0x44)) = &(*(uint *)(gen_frame + 0x40));
      (*(uint *)(gen_frame + 0x40)) = 0;
      (*(uint *)(gen_frame + 0x40)) = (uint)bVar1;
      (*(undefined1 *)(gen_frame + 0x48)) = 0;
      F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x40)));
      F_004917c0(&(*(uint *)(gen_frame + 0x40)));
      uVar10 = *param_2;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = uVar10;
      (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = &(*(undefined4 *)(gen_frame + 0x34));
      (*(undefined1 *)(gen_frame + 0x3c)) = 0;
      F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x34)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x34)));
      uVar10 = param_2[1];
      (*(undefined4 *)(gen_frame + 0x4c)) = 0;
      (*(undefined4 *)(gen_frame + 0x4c)) = uVar10;
      (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x4c));
      (*(undefined1 *)(gen_frame + 0x54)) = 0;
      F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x4c)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x4c)));
      uVar10 = param_2[2];
      (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = uVar10;
      (*(undefined1 *)(gen_frame + 0x24)) = 0;
      F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x1c)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x1c)));
      iVar2 = param_2[2];
      iVar3 = param_2[1];
      iVar4 = param_2[3];
      (*(int *)(gen_frame + 0x28)) = 0;
      (*(int *)(gen_frame + 0x28)) = iVar2 * iVar3 - iVar4;
      (*(int * PTR32 *)(gen_frame + 0x2c)) = &(*(int *)(gen_frame + 0x28));
      (*(undefined1 *)(gen_frame + 0x30)) = 0;
      F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x28)));
      F_004917c0(&(*(int *)(gen_frame + 0x28)));
      uVar10 = 0x2e9;
      uVar6 = F_00ab24a0(*param_2);
      if ((uVar6 != 0) && (*(int *)(uVar6 + 0x28) == 1)) {
        uVar10 = 0x2ec;
      }
      ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
      pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5)));
      F_0046aa70(pvVar8,uVar10,ppuVar11);
    }
    else if (*(char *)(param_2 + 4) == '\x02') {
      uVar6 = (uint)*(byte *)((int)param_2 + 0x11);
      uVar10 = 0x180;
      pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5)));
      F_0046a6b0(pvVar8,uVar10,uVar6);
    }
    F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
    uVar9 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
    uVar6 = (uint)uVar9;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar6;
}

/* ref: FUN_00b05ac0 */
uint F_00b05ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb05ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  ulonglong uVar1;
  byte bVar2;
  char cVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  byte * pbVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar5 = 0;
  if (piVar4 != (int *)0x0) {
    uVar11 = 9;
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4);
    pvVar6 = (undefined *)F_00435440(uVar5,uVar11);
    uVar5 = 0;
    if (pvVar6 != (undefined *)0x0) {
      bVar2 = (byte)((uint)param_2[3] >> 0x18);
      ((byte *)(gen_frame + 0x4))[0x18] = bVar2 >> 7;
      bVar8 = bVar2 & 0xf;
      (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = (undefined4 *)param_2[2];
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x94)) + 0)) = bVar8;
      (*(uint *)(gen_frame + 0x94)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x94)), 1, 3),bVar2) & 0xffffff0f;
      if (param_2[4] == 0) {
        F_00438a90(pvVar6,*param_2,param_2[1],(*(uint *)(gen_frame + 0x94)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 24)));
      }
      uVar1 = (ulonglong)(uint)*(byte *)(param_2 + 5) / 10;
      uVar5 = (uint)uVar1;
      uVar7 = (uint)*(byte *)(param_2 + 5) % 10;
      cVar3 = (char)uVar1;
      if (uVar7 == 1) {
        if ((param_2[4] == 0) && (cVar3 == '\x01')) {
          F_004816e0(((byte *)(gen_frame + 0x4)));
          uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x20)),&REFG(undefined, 0x10ec5c7),REFG(undefined4, 0x108cc50));
          F_004918c0(((undefined1 *)(gen_frame + 0x74)),uVar5);
          F_00493b50(((byte *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x74)));
          F_004917c0(((undefined1 *)(gen_frame + 0x74)));
          F_0042c880(((undefined1 *)(gen_frame + 0x20)));
          uVar5 = (*(uint *)(gen_frame + 0x94));
          (*(undefined4 *)(gen_frame + 0x8c)) = 0;
          (*(undefined4 *)(gen_frame + 0x8c)) = 0;
          (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = &(*(undefined4 *)(gen_frame + 0x8c));
          (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x94)) + 0)) = 0;
          (*(uint *)(gen_frame + 0x94)) = uVar5 & 0xffffff00;
          F_00493b50(((byte *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8c)));
          F_004917c0(&(*(undefined4 *)(gen_frame + 0x8c)));
          (*(uint *)(gen_frame + 0x80)) = 0;
          (*(uint *)(gen_frame + 0x80)) = (uint)bVar8;
          (*(uint * PTR32 *)(gen_frame + 0x84)) = &(*(uint *)(gen_frame + 0x80));
          (*(undefined1 *)(gen_frame + 0x88)) = 0;
          F_00493b50(((byte *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x80)));
          F_004917c0(&(*(uint *)(gen_frame + 0x80)));
          pbVar10 = ((byte *)(gen_frame + 0x4));
          uVar11 = 0x18c;
          pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
          F_0046aa70(pvVar6,uVar11,pbVar10);
          uVar5 = F_00493180(((byte *)(gen_frame + 0x4)));
        }
      }
      else if (uVar7 == 3) {
        iVar9 = param_2[4];
        if (iVar9 != 0) {
          ((code *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4);
          uVar5 = F_0046b5e0(iVar9);
          F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
          return uVar5;
        }
        if ((param_2[2] != 0 || param_2[3] != 0) && (((byte *)(gen_frame + 0x4))[0x18] == 1)) {
          uVar5 = (uint)bVar8;
          if (cVar3 != '\x01') {
            uVar11 = 0x18e;
            pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
            uVar5 = F_0046a6b0(pvVar6,uVar11,uVar5);
            F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
            return uVar5;
          }
          uVar11 = 0x1f2;
          pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
          uVar5 = F_0046a6b0(pvVar6,uVar11,uVar5);
          F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
          return uVar5;
        }
      }
      else if (uVar7 == 4) {
        iVar9 = param_2[4];
        if (iVar9 != 0) {
          ((code *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4);
          uVar5 = F_0046b5e0(iVar9);
          F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
          return uVar5;
        }
        if ((param_2[2] != 0 || param_2[3] != 0) && (((byte *)(gen_frame + 0x4))[0x18] == 0)) {
          uVar5 = (uint)bVar8;
          if (cVar3 != '\x01') {
            uVar11 = 399;
            pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
            uVar5 = F_0046a6b0(pvVar6,uVar11,uVar5);
            F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
            return uVar5;
          }
          uVar11 = 499;
          pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
          uVar5 = F_0046a6b0(pvVar6,uVar11,uVar5);
          F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
          return uVar5;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar5;
}

/* ref: FUN_00b05d70 */
uint F_00b05d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb05d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  char cVar1;
  undefined8 uVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  ushort * puVar7;
  uint uVar8;
  undefined * pvVar9;
  ulonglong uVar10;
  ushort * puVar11;
  ushort * puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined1 * puVar17;
  
  (*(uint *)(gen_frame + 0x248)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24c);
  F_0042b630(((undefined1 *)(gen_frame + 0x17c)));
  puVar12 = param_2 + 0xd;
  F_0042e430(((undefined1 *)(gen_frame + 0x17c)),puVar12);
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar4 == (int *)0x0) goto LAB_00b06ed9;
  uVar14 = 0xb;
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4);
  pvVar6 = (undefined *)F_00435440(uVar5,uVar14);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar6;
  uVar14 = 0xc;
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4);
  puVar7 = (ushort *)F_00435440(uVar5,uVar14);
  (*(ushort * PTR32 *)(gen_frame + 0x24)) = puVar7;
  uVar14 = 0xd;
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4);
  uVar5 = F_00435440(uVar5,uVar14);
  uVar14 = 0xe;
  uVar8 = ((code *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4);
  pvVar6 = (undefined *)F_00435440(uVar8,uVar14);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar6;
  if (((((*(undefined * PTR32 *)(gen_frame + 0x28)) == (undefined *)0x0) || ((*(ushort * PTR32 *)(gen_frame + 0x24)) == (ushort *)0x0)) || (uVar5 == 0)) ||
     (pvVar6 == (undefined *)0x0)) goto LAB_00b06ed9;
  iVar15 = *(int *)(param_2 + 10);
  if (iVar15 != 0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4);
    F_0046b5e0(iVar15);
  }
  pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4)));
  F_0043f9f0(pvVar6);
  (*(ushort * PTR32 *)(gen_frame + 0x24)) = (ushort *)(uint)*param_2;
  F_004816e0(((undefined1 *)(gen_frame + 0x8)));
  F_00492c50(((undefined1 *)(gen_frame + 0x8)));
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x28));
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_2 + 8))) {
  case 1: ;
    if (*(int *)(param_2 + 10) == 0) {
      uVar14 = 0xbe1;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046a630(pvVar6,uVar14);
      pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      F_004368e0((*(undefined * PTR32 *)(gen_frame + 0x28)),puVar12);
      F_00441300(pvVar6,2);
    }
    F_00437150(*(undefined4 *)(param_2 + 10));
    break;
  case 2: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        bVar3 = F_00436880((*(undefined * PTR32 *)(gen_frame + 0x28)));
        if (bVar3 < 3) {
          uVar14 = 0xbe7;
          pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
          F_0046a630(pvVar6,uVar14);
        }
        else {
          uVar16 = 9;
          uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
          puVar7 = param_2 + 0x24;
          uVar14 = 0x762;
          pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
          F_0046acc0(pvVar6,uVar14,puVar7,uVar5,puVar12,uVar16);
        }
      }
      pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      bVar3 = F_00436880((*(undefined * PTR32 *)(gen_frame + 0x28)));
      if (bVar3 < 3) {
        F_00442a80((*(undefined * PTR32 *)(gen_frame + 0x20)),*(undefined4 *)(param_2 + 10));
      }
      else {
        F_00453830(pvVar6,*(undefined4 *)(param_2 + 10));
      }
    }
    else {
      bVar3 = F_00436880((*(undefined * PTR32 *)(gen_frame + 0x28)));
      if (bVar3 < 3) {
        bVar3 = F_00436890(pvVar6);
        if (bVar3 != 0) {
          bVar3 = *(byte *)((int)param_2 + 0x19);
          uVar14 = 0xbf0;
          goto LAB_00b05fc3;
        }
      }
      else {
        bVar3 = *(byte *)((int)param_2 + 0x19);
        uVar14 = 0x763;
LAB_00b05fc3: ;
        uVar5 = (uint)(bVar3 & 1);
        puVar12 = param_2 + 0x24;
        uVar13 = 0xffffffff;
        uVar16 = 0;
        pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046acc0(pvVar9,uVar14,puVar12,uVar5,uVar16,uVar13);
      }
      bVar3 = F_00436880(pvVar6);
      if (bVar3 < 3) {
        F_00442af0((*(undefined * PTR32 *)(gen_frame + 0x20)),*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6),
                     param_2 + 0x24);
      }
      else {
        F_004672f0(pvVar6,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
      }
    }
    break;
  case 3: ;
    (*(ushort * PTR32 *)(gen_frame + 0x24)) = param_2 + 0x24;
    if ((char)param_2[0x24] == '\0') {
      uVar13 = 0;
      uVar16 = 0;
      uVar14 = 0x3c4;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4)));
      puVar7 = (ushort *)F_0043bd00(pvVar6,uVar14,uVar16,uVar13);
      (*(ushort * PTR32 *)(gen_frame + 0x24)) = puVar7;
    }
    pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x28));
    cVar1 = (char)param_2[0xc];
    if (cVar1 == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        bVar3 = F_00436880((*(undefined * PTR32 *)(gen_frame + 0x28)));
        uVar16 = 0xffffffff;
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        uVar14 = 0;
        if (bVar3 < 3) {
          uVar13 = 0xbe8;
        }
        else {
          uVar13 = 0x764;
        }
        puVar12 = (*(ushort * PTR32 *)(gen_frame + 0x24));
        pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046acc0(pvVar9,uVar13,puVar12,uVar5,uVar14,uVar16);
      }
      bVar3 = F_00436880(pvVar6);
      if (bVar3 < 3) {
        F_00442b10((*(undefined * PTR32 *)(gen_frame + 0x20)),*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6),
                     param_2 + 0x24,*(undefined4 *)(param_2 + 10));
      }
      else {
        F_0044e490(pvVar6,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6),
                     *(undefined4 *)(param_2 + 10));
      }
    }
    else {
      if (cVar1 == '\v') {
        bVar3 = F_00436880((*(undefined * PTR32 *)(gen_frame + 0x28)));
        if (bVar3 < 3) {
          uVar14 = 0xbf1;
          pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
          F_0046a630(pvVar6,uVar14);
        }
        else {
          bVar3 = *(byte *)((int)param_2 + 0x19);
          uVar16 = 9;
          uVar14 = 0x765;
LAB_00b0613d: ;
          uVar5 = (uint)(bVar3 & 1);
          puVar7 = (*(ushort * PTR32 *)(gen_frame + 0x24));
          pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
          F_0046acc0(pvVar6,uVar14,puVar7,uVar5,puVar12,uVar16);
        }
      }
      else if ((cVar1 == '\f') && (bVar3 = F_00436880((*(undefined * PTR32 *)(gen_frame + 0x28))), 2 < bVar3)) {
        bVar3 = *(byte *)((int)param_2 + 0x19);
        uVar16 = 0xffffffff;
        puVar12 = (ushort *)0x0;
        uVar14 = 0x766;
        goto LAB_00b0613d;
      }
      pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      bVar3 = F_00436880((*(undefined * PTR32 *)(gen_frame + 0x28)));
      if (bVar3 < 3) {
        F_00442b30((*(undefined * PTR32 *)(gen_frame + 0x20)),*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6),
                     param_2 + 0x24);
      }
      else {
        F_00453890(pvVar6,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
      }
    }
    break;
  case 4: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar16 = 9;
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar7 = param_2 + 0x24;
        uVar14 = 0x759;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046acc0(pvVar6,uVar14,puVar7,uVar5,puVar12,uVar16);
      }
      F_00436520((*(undefined * PTR32 *)(gen_frame + 0x28)),*(undefined4 *)(param_2 + 10));
    }
    break;
  case 5: ;
    puVar7 = (ushort *)F_00b045d0(puVar12);
    if (puVar7 == (ushort *)0x0) {
      puVar7 = puVar12;
    }
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar16 = 9;
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar12 = param_2 + 0x24;
        uVar14 = 0xc08;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046acc0(pvVar6,uVar14,puVar12,uVar5,puVar7,uVar16);
      }
      F_00436540((*(undefined * PTR32 *)(gen_frame + 0x28)),*(undefined4 *)(param_2 + 10));
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar12 = param_2 + 0x24;
      uVar14 = 0xc10;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046acc0(pvVar6,uVar14,puVar12,uVar5,puVar7,uVar16);
      F_00436580((*(undefined * PTR32 *)(gen_frame + 0x28)));
    }
    break;
  case 6: ;
    puVar7 = (ushort *)F_00b045d0(puVar12);
    if (puVar7 == (ushort *)0x0) {
      puVar7 = puVar12;
    }
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar16 = 9;
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar12 = param_2 + 0x24;
        uVar14 = 0xbfe;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046acc0(pvVar6,uVar14,puVar12,uVar5,puVar7,uVar16);
      }
      F_0044a490((*(undefined * PTR32 *)(gen_frame + 0x28)),(uint)(byte)param_2[4],*(undefined4 *)(param_2 + 10));
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar12 = param_2 + 0x24;
      uVar14 = 0xc04;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046acc0(pvVar6,uVar14,puVar12,uVar5,puVar7,uVar16);
      F_0044a550((*(undefined * PTR32 *)(gen_frame + 0x28)),(uint)(byte)param_2[4]);
    }
    break;
  case 7: ;
    if (*(int *)(param_2 + 10) == 0) {
      puVar7 = (ushort *)F_00b045d0(puVar12);
      if (puVar7 == (ushort *)0x0) {
        puVar7 = puVar12;
      }
      uVar14 = 9;
      puVar12 = param_2 + 0x24;
      if ((char)param_2[0xc] == '\n') {
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        uVar16 = 0xbfc;
        puVar11 = puVar12;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046acc0(pvVar6,uVar16,puVar11,uVar5,puVar7,uVar14);
        F_0044a780((*(undefined * PTR32 *)(gen_frame + 0x28)),puVar12,(uint)(byte)param_2[4],(uint)(byte)param_2[0xc]);
      }
      else {
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        uVar16 = 0xc02;
        puVar11 = puVar12;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046acc0(pvVar6,uVar16,puVar11,uVar5,puVar7,uVar14);
        F_0044a870((*(undefined * PTR32 *)(gen_frame + 0x28)),puVar12,(uint)(byte)param_2[4],(uint)(byte)param_2[0xc]);
      }
    }
    break;
  case 8: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar16 = 9;
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar7 = param_2 + 0x24;
        uVar14 = 0xbff;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046acc0(pvVar6,uVar14,puVar7,uVar5,puVar12,uVar16);
      }
      F_004365b0((*(undefined * PTR32 *)(gen_frame + 0x28)),*(undefined4 *)(param_2 + 10));
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar7 = param_2 + 0x24;
      uVar14 = 0xc05;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046acc0(pvVar6,uVar14,puVar7,uVar5,puVar12,uVar16);
      F_004365f0((*(undefined * PTR32 *)(gen_frame + 0x28)));
    }
    break;
  case 9: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar16 = 9;
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar7 = param_2 + 0x24;
        uVar14 = 0xc00;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046acc0(pvVar6,uVar14,puVar7,uVar5,puVar12,uVar16);
      }
      F_0044a600((*(undefined * PTR32 *)(gen_frame + 0x28)),(uint)(byte)param_2[4],*(undefined4 *)(param_2 + 10));
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar7 = param_2 + 0x24;
      uVar14 = 0xc06;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046acc0(pvVar6,uVar14,puVar7,uVar5,puVar12,uVar16);
      F_0044a6c0((*(undefined * PTR32 *)(gen_frame + 0x28)),(uint)(byte)param_2[4]);
    }
    break;
  case 10: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar14 = 0xc01;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046a630(pvVar6,uVar14);
      }
      F_00436620((*(undefined * PTR32 *)(gen_frame + 0x28)),*(undefined4 *)(param_2 + 10));
    }
    else {
      uVar13 = 0xffffffff;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      uVar16 = 0;
      puVar12 = param_2 + 0x24;
      uVar14 = 0xc07;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046acc0(pvVar6,uVar14,puVar12,uVar5,uVar16,uVar13);
      F_00436650((*(undefined * PTR32 *)(gen_frame + 0x28)));
    }
    break;
  case 0xb: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) != 0) break;
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar7 = param_2 + 0x24;
      (*(ushort * PTR32 *)(gen_frame + 0x24)) = puVar7;
      uVar14 = 0xbe3;
      puVar11 = puVar12;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046acc0(pvVar6,uVar14,puVar7,uVar5,puVar11,uVar16);
      bVar3 = *(byte *)((int)param_2 + 0x19);
      uVar14 = 0xbe2;
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar7 = param_2 + 0x24;
      (*(ushort * PTR32 *)(gen_frame + 0x24)) = puVar7;
      uVar14 = 0xbf5;
      puVar11 = puVar12;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046acc0(pvVar6,uVar14,puVar7,uVar5,puVar11,uVar16);
      bVar3 = *(byte *)((int)param_2 + 0x19);
      uVar14 = 0xbf4;
    }
    uVar5 = (uint)(bVar3 & 1);
    uVar16 = 9;
    puVar7 = (*(ushort * PTR32 *)(gen_frame + 0x24));
    pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
    F_0046acc0(pvVar6,uVar14,puVar7,uVar5,puVar12,uVar16);
    F_00441300((*(undefined * PTR32 *)(gen_frame + 0x28)),3);
    F_00442980((*(undefined * PTR32 *)(gen_frame + 0x20)));
    uVar16 = 1;
    uVar14 = 0xc34;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
    F_0046a6b0(pvVar6,uVar14,uVar16);
    break;
  case 0xc: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar14 = 0xbe9;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046a630(pvVar6,uVar14);
      }
      F_00442bf0((*(undefined * PTR32 *)(gen_frame + 0x20)),*(undefined4 *)(param_2 + 10));
    }
    else {
      uVar13 = 0xffffffff;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      uVar16 = 0;
      puVar12 = param_2 + 0x24;
      uVar14 = 0xbfb;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046acc0(pvVar6,uVar14,puVar12,uVar5,uVar16,uVar13);
      F_00442c60((*(undefined * PTR32 *)(gen_frame + 0x20)));
    }
    break;
  case 0xd: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar14 = 0xc09;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046a630(pvVar6,uVar14);
      }
      F_00436700((*(undefined * PTR32 *)(gen_frame + 0x28)),*(undefined4 *)(param_2 + 10));
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar7 = param_2 + 0x24;
      uVar14 = 0xc0b;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046acc0(pvVar6,uVar14,puVar7,uVar5,puVar12,uVar16);
    }
    break;
  case 0xe: ;
    puVar7 = (ushort *)F_00b045d0(puVar12);
    if (puVar7 == (ushort *)0x0) {
      puVar7 = puVar12;
    }
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar16 = 9;
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar12 = param_2 + 0x24;
        uVar14 = 0xbfd;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046acc0(pvVar6,uVar14,puVar12,uVar5,puVar7,uVar16);
      }
      F_0044a280((*(undefined * PTR32 *)(gen_frame + 0x28)),*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6),
                   *(undefined4 *)(param_2 + 10));
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar12 = param_2 + 0x24;
      uVar14 = 0xc03;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046acc0(pvVar6,uVar14,puVar12,uVar5,puVar7,uVar16);
      F_0044a340((*(undefined * PTR32 *)(gen_frame + 0x28)),*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
    }
    break;
  case 0xf: ;
    if ((char)param_2[0xc] == '\n') {
      F_004368e0((*(undefined * PTR32 *)(gen_frame + 0x28)),puVar12);
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar7 = param_2 + 0x24;
      (*(ushort * PTR32 *)(gen_frame + 0x24)) = puVar7;
      uVar14 = 0xc0d;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046acc0(pvVar6,uVar14,puVar7,uVar5,puVar12,uVar16);
      F_004670f0((*(undefined * PTR32 *)(gen_frame + 0x28)),(*(ushort * PTR32 *)(gen_frame + 0x24)),(uint)(ushort)(param_2[4] + 1));
    }
    break;
  case 0x10: ;
    uVar16 = 9;
    uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
    puVar7 = param_2 + 0x24;
    (*(ushort * PTR32 *)(gen_frame + 0x24)) = puVar7;
    uVar14 = 0xc0e;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
    F_0046acc0(pvVar6,uVar14,puVar7,uVar5,puVar12,uVar16);
    F_004671b0((*(undefined * PTR32 *)(gen_frame + 0x28)),(*(ushort * PTR32 *)(gen_frame + 0x24)));
    break;
  case 0x13: ;
    uVar14 = 9;
    puVar7 = puVar12;
    if ((char)param_2[0xc] == '\n') {
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar11 = param_2 + 0x24;
      uVar16 = 0xc40;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,0xc40,puVar11,uVar5,puVar12,9)));
    }
    else {
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar11 = param_2 + 0x24;
      uVar16 = 0xc41;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
    }
    F_0046acc0(pvVar6,uVar16,puVar11,uVar5,puVar7,uVar14);
    F_00436800((*(undefined * PTR32 *)(gen_frame + 0x28)),puVar12);
    break;
  case 0x14: ;
    uVar14 = *(undefined4 *)(param_2 + 4);
    uVar13 = 0xc33;
    uVar16 = uVar14;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
    F_0046a6b0(pvVar6,uVar13,uVar16);
    uVar5 = F_00ab4190(uVar14);
    if (uVar5 != 0) {
      puVar12 = (ushort *)(uVar5 + 8);
      (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)0x3;
      do {
        uVar5 = (uint)*puVar12;
        if (*puVar12 != 0) {
          uVar16 = 0xc34;
          pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
          F_0046a6b0(pvVar6,uVar16,uVar5);
        }
        puVar12 = puVar12 + 1;
        pvVar6 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) - 1);
        (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar6;
      } while (pvVar6 != (undefined *)0x0);
    }
    F_00453af0((*(undefined * PTR32 *)(gen_frame + 0x28)),uVar14);
    break;
  case 0x15: ;
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar14 = *(undefined4 *)(param_2 + 4);
    (*(undefined4 * PTR32 *)(gen_frame + 0x210)) = &(*(undefined4 *)(gen_frame + 0x20c));
    (*(undefined4 *)(gen_frame + 0x20c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20c)) = (int)((ulonglong)uVar2 >> 0x20);
    (*(undefined1 *)(gen_frame + 0x214)) = 0;
    F_00493bc0(((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x20c)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x20c)));
    (*(undefined4 *)(gen_frame + 0x230)) = 0;
    (*(undefined4 *)(gen_frame + 0x230)) = uVar14;
    (*(undefined4 * PTR32 *)(gen_frame + 0x234)) = &(*(undefined4 *)(gen_frame + 0x230));
    (*(undefined1 *)(gen_frame + 0x238)) = 0;
    F_00493bc0(((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x230)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x230)));
    puVar17 = ((undefined1 *)(gen_frame + 0x8));
    uVar16 = 0xc35;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
    F_0046aa70(pvVar6,uVar16,puVar17);
    F_00453bd0((*(undefined * PTR32 *)(gen_frame + 0x28)),uVar14);
    break;
  case 0x17: ;
    if (*(int *)(param_2 + 10) == 0) {
      if ((char)param_2[0xc] == '\n') {
        uVar14 = *(undefined4 *)(param_2 + 4);
        uVar16 = 0x75a;
      }
      else {
        uVar14 = *(undefined4 *)(param_2 + 4);
        uVar16 = 0x75b;
      }
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046a6b0(pvVar6,uVar16,uVar14);
      F_00453c20((*(undefined * PTR32 *)(gen_frame + 0x28)),*(undefined4 *)(param_2 + 4),*(undefined4 *)param_2,
                   *(undefined4 *)(param_2 + 2));
    }
    break;
  case 0x18: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar14 = 0xc46;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046a630(pvVar6,uVar14);
      }
      F_004367d0((*(undefined * PTR32 *)(gen_frame + 0x28)),*(undefined4 *)(param_2 + 10));
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar7 = param_2 + 0x24;
      uVar14 = 0xc47;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046acc0(pvVar6,uVar14,puVar7,uVar5,puVar12,uVar16);
    }
    break;
  case 0x19: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar14 = 0xc42;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046a630(pvVar6,uVar14);
      }
      F_0044a960((*(undefined * PTR32 *)(gen_frame + 0x28)),*(undefined4 *)(param_2 + 10),(uint)(byte)param_2[0xc]);
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar7 = param_2 + 0x24;
      uVar14 = 0xc43;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046acc0(pvVar6,uVar14,puVar7,uVar5,puVar12,uVar16);
      F_0044a960((*(undefined * PTR32 *)(gen_frame + 0x28)),*(undefined4 *)(param_2 + 10),(uint)(byte)param_2[0xc]);
    }
    break;
  case 0x1a: ;
    uVar14 = 0xc49;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
    F_0046a630(pvVar6,uVar14);
    F_00453aa0((*(undefined * PTR32 *)(gen_frame + 0x28)));
    break;
  case 0x1b: ;
    if ((short)(*(ushort * PTR32 *)(gen_frame + 0x24)) != 0) {
      if ((char)param_2[0xc] == '\n') {
        if (*(int *)(param_2 + 10) == 0) {
          uVar5 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
          uVar14 = 0xc3c;
          pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
          F_0046a6b0(pvVar6,uVar14,uVar5);
        }
      }
      else {
        puVar12 = param_2 + 0x24;
        uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x80)),puVar12,REFG(undefined4, 0x108cc50));
        F_004918c0(((undefined1 *)(gen_frame + 0x1f4)),uVar5);
        F_00493b50(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x1f4)));
        F_004917c0(((undefined1 *)(gen_frame + 0x1f4)));
        F_0042c880(((undefined1 *)(gen_frame + 0x80)));
        (*(uint *)(gen_frame + 0x218)) = 0;
        (*(uint *)(gen_frame + 0x218)) = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
        (*(uint * PTR32 *)(gen_frame + 0x21c)) = &(*(uint *)(gen_frame + 0x218));
        (*(undefined1 *)(gen_frame + 0x220)) = 0;
        F_00493b50(((undefined1 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x218)));
        F_004917c0(&(*(uint *)(gen_frame + 0x218)));
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar17 = ((undefined1 *)(gen_frame + 0x8));
        uVar14 = 0xc3d;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046ad60(pvVar6,uVar14,puVar12,uVar5,puVar17);
      }
      F_00453cb0((*(undefined * PTR32 *)(gen_frame + 0x28)),*(undefined4 *)(param_2 + 10),(uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff);
    }
    break;
  case 0x1c: ;
    if ((short)(*(ushort * PTR32 *)(gen_frame + 0x24)) != 0) {
      if ((char)param_2[0xc] == '\n') {
        if (*(int *)(param_2 + 10) == 0) {
          uVar5 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
          uVar14 = 0xc3e;
          pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
          F_0046a6b0(pvVar6,uVar14,uVar5);
        }
      }
      else {
        puVar12 = param_2 + 0x24;
        uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x2c)),puVar12,REFG(undefined4, 0x108cc50));
        F_004918c0(((undefined1 *)(gen_frame + 0x1d0)),uVar5);
        F_00493b50(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x1d0)));
        F_004917c0(((undefined1 *)(gen_frame + 0x1d0)));
        F_0042c880(((undefined1 *)(gen_frame + 0x2c)));
        (*(uint *)(gen_frame + 0x200)) = 0;
        (*(uint *)(gen_frame + 0x200)) = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
        (*(uint * PTR32 *)(gen_frame + 0x204)) = &(*(uint *)(gen_frame + 0x200));
        (*(undefined1 *)(gen_frame + 0x208)) = 0;
        F_00493b50(((undefined1 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x200)));
        F_004917c0(&(*(uint *)(gen_frame + 0x200)));
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar17 = ((undefined1 *)(gen_frame + 0x8));
        uVar14 = 0xc3f;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046ad60(pvVar6,uVar14,puVar12,uVar5,puVar17);
      }
      F_00453d00((*(undefined * PTR32 *)(gen_frame + 0x28)),*(undefined4 *)(param_2 + 10),(uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff);
    }
    break;
  case 0x1d: ;
    if ((short)(*(ushort * PTR32 *)(gen_frame + 0x24)) != 0) {
      if ((char)param_2[0xc] == '\n') {
        if (*(int *)(param_2 + 10) == 0) {
          uVar5 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
          uVar14 = 0xc38;
          uVar8 = uVar5;
          pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
          F_0046a6b0(pvVar6,uVar14,uVar8);
          goto LAB_00b06d49;
        }
      }
      else {
        puVar12 = param_2 + 0x24;
        uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x128)),puVar12,REFG(undefined4, 0x108cc50));
        F_004918c0(((undefined1 *)(gen_frame + 0x1dc)),uVar5);
        F_00493b50(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x1dc)));
        F_004917c0(((undefined1 *)(gen_frame + 0x1dc)));
        F_0042c880(((undefined1 *)(gen_frame + 0x128)));
        (*(uint *)(gen_frame + 0x224)) = 0;
        (*(uint *)(gen_frame + 0x224)) = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
        (*(uint * PTR32 *)(gen_frame + 0x228)) = &(*(uint *)(gen_frame + 0x224));
        (*(undefined1 *)(gen_frame + 0x22c)) = 0;
        F_00493b50(((undefined1 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x224)));
        F_004917c0(&(*(uint *)(gen_frame + 0x224)));
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar17 = ((undefined1 *)(gen_frame + 0x8));
        uVar14 = 0xc39;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046ad60(pvVar6,uVar14,puVar12,uVar5,puVar17);
        uVar5 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
LAB_00b06d49: ;
        uVar14 = 0xc36;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046a6b0(pvVar6,uVar14,uVar5);
      }
      F_00453d50((*(undefined * PTR32 *)(gen_frame + 0x28)),*(undefined4 *)(param_2 + 10),(uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff);
    }
    break;
  case 0x1e: ;
    if ((short)(*(ushort * PTR32 *)(gen_frame + 0x24)) != 0) {
      if ((char)param_2[0xc] == '\n') {
        if (*(int *)(param_2 + 10) == 0) {
          uVar5 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
          uVar14 = 0xc3a;
          pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
          F_0046a6b0(pvVar6,uVar14,uVar5);
        }
      }
      else {
        puVar12 = param_2 + 0x24;
        uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),puVar12,REFG(undefined4, 0x108cc50));
        F_004918c0(((undefined1 *)(gen_frame + 0x1e8)),uVar5);
        F_00493b50(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x1e8)));
        F_004917c0(((undefined1 *)(gen_frame + 0x1e8)));
        F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
        (*(uint *)(gen_frame + 0x23c)) = 0;
        (*(uint *)(gen_frame + 0x23c)) = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
        (*(uint * PTR32 *)(gen_frame + 0x240)) = &(*(uint *)(gen_frame + 0x23c));
        (*(undefined1 *)(gen_frame + 0x244)) = 0;
        F_00493b50(((undefined1 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x23c)));
        F_004917c0(&(*(uint *)(gen_frame + 0x23c)));
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar17 = ((undefined1 *)(gen_frame + 0x8));
        uVar14 = 0xc3b;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046ad60(pvVar6,uVar14,puVar12,uVar5,puVar17);
      }
      F_00453da0((*(undefined * PTR32 *)(gen_frame + 0x28)),*(undefined4 *)(param_2 + 10),(uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff);
    }
    break;
  case 0x20: ;
    if ((*(int *)(param_2 + 10) == 0) && ((short)(*(ushort * PTR32 *)(gen_frame + 0x24)) != 0)) {
      uVar5 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
      uVar14 = 0xc37;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046a6b0(pvVar6,uVar14,uVar5);
    }
    F_00453df0((*(undefined * PTR32 *)(gen_frame + 0x28)),*(undefined4 *)(param_2 + 10),(uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff);
    break;
  case 0x21: ;
    F_0046b680((*(undefined * PTR32 *)(gen_frame + 0x28)),(uint)(byte)param_2[4]);
    break;
  case 0x22: ;
    F_0044aa20((*(undefined * PTR32 *)(gen_frame + 0x28)));
  }
  F_00493180(((undefined1 *)(gen_frame + 0x8)));
LAB_00b06ed9: ;
  uVar10 = F_0042c880(((undefined1 *)(gen_frame + 0x17c)));
  F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c));
  return (uint)uVar10;
}

/* ref: FUN_00b06f80 */
uint F_00b06f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb06f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 * puVar1;
  uint uVar2;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1 = param_1;
  if (param_1 == (undefined1 *)0x0) {
    puVar1 = &REFG(undefined1, 0x107fc63);
  }
  F_0042e430((undefined *)((int)this + 0x10),puVar1);
  *(int *)((int)this + 8) = param_2 + -1;
  *(undefined1 *)((int)this + 0xc) = 1;
  uVar2 = F_0043f8b0(0x3b);
  return uVar2;
}

/* ref: FUN_00b06fc0 */
uint F_00b06fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb06fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a6;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined1 *)((int)this + 0x25) = (undefined1)param_5;
  *(undefined4 *)this = 0x12a;
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined1 *)((int)this + 0x24) = (undefined1)param_4;
  puVar2 = param_6;
  puVar3 = (undefined4 *)((int)this + 0x26);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00b07020 */
unsigned int F_00b07020(float gen_a0)
{
  GEN_ENTER(0xb07020u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b07040 */
unsigned int F_00b07040(float gen_a0)
{
  GEN_ENTER(0xb07040u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf1 */
unsigned int F_00b07060(unsigned int gen_a0)
{
  GEN_ENTER(0xb07060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a79840(&REFG(undefined4, 0x14b11f8),this);
  F_006bd1c0((undefined *)this);
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf156 */
uint F_00b07080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb07080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)(param_1 + 0x8f) = *(byte *)(param_1 + 0x8f) | 4;
  return param_1;
}

/* ref: FUN_00b070a0 */
uint F_00b070a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb070a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  if ((param_1 == 0) || (uVar1 = param_1, *((short *)GEN_TOP((*(int *)(param_1 + 0x1d4) + 2))) != -0x7fe6)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00b070c0 */
uint F_00b070c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb070c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  if ((param_1 == 0) || (uVar1 = param_1, *((short *)GEN_TOP((*(int *)(param_1 + 0x1d4) + 2))) != -0x7fe6)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00b070e0 */
byte F_00b070e0(void)
{
  GEN_ENTER(0xb070e0u, 0u, 0u, 0u, 0u);
  return REFG(int, 0x14c0cf8) != 0;
}

/* ref: FUN_00b070f0 */
uint F_00b070f0(void)
{
  GEN_ENTER(0xb070f0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x14c0cf8);
}

/* ref: FUN_00b07100 */
uint F_00b07100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb07100u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1379694);
  if ((REFG(int, 0x1379694) != 0) && (*(char *)(REFG(int, 0x1379694) + 0x18a) == '\x10')) {
    uVar2 = 0;
    do {
      if (param_1 == *(int *)((int)&REFG(undefined4, 0x10ecd3c) + uVar2)) {
        return uVar2;
      }
      uVar2 = uVar2 + 4;
    } while (uVar2 < 0xc);
  }
  F_006b8c00();
  if (param_2 == 0) {
    uVar2 = F_006c5f80(param_1,iVar1,param_3);
    return uVar2;
  }
  uVar2 = F_006c5fb0(param_1,param_2,iVar1,param_3);
  return uVar2;
}

/* ref: FUN_00b07170 */
uint F_00b07170(unsigned int gen_a0)
{
  GEN_ENTER(0xb07170u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint in_EAX = 0;
  
  if (REFG(short, 0x14ab148) != 0) {
    in_EAX = F_00a51200(0x58,param_1 & 0xffff,0,0,0);
  }
  return in_EAX;
}

/* ref: FUN_00b071a0 */
uint F_00b071a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb071a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x21c);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (REFG(short, 0x14ab148) != 0) {
      uVar2 = F_00a51200(0x58,(uint)*(ushort *)(iVar1 + 0x18),0,0,0);
      return uVar2;
    }
    uVar2 = F_00a51200(0x58,(uint)*(ushort *)(iVar1 + 0x18),1,0,0);
  }
  return uVar2;
}

/* ref: FUN_00b071e0 */
ushort F_00b071e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb071e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x230) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00b07200 */
uint F_00b07200(unsigned int gen_a0)
{
  GEN_ENTER(0xb07200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if ((REFG(undefined4, 0x1379694) != 0) && (*(char *)(REFG(undefined4, 0x1379694) + 0x18a) != '\x10')) {
    F_006b8c00();
    uVar1 = F_006c6500(param_1);
    return uVar1;
  }
  return REFG(undefined4, 0x1379694);
}

/* ref: FUN_00b07230 */
uint F_00b07230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb07230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = 0;
  puVar2 = (uint *)((int)this + 0x24);
  do {
    if (puVar2[1] == 0) {
      *puVar2 = param_1;
      puVar2[1] = param_2;
      puVar2[2] = 0;
      return param_1;
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 3;
  } while (uVar1 < 0x20);
  *(uint *)((int)this + 0x24) = param_1;
  *(uint *)((int)this + 0x28) = param_2;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return param_2;
}

/* ref: FUN_00b07290 */
uint F_00b07290(unsigned int gen_a0)
{
  GEN_ENTER(0xb07290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x1c);
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x18);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1c);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  return uVar3;
}

/* ref: FUN_00b072d0 */
uint F_00b072d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb072d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined * PTR32 *)((int)this + 0x14);
  uVar1 = (uint)*(ushort *)((int)this_00 + 0x54);
  if ((uVar1 == 4) || (uVar1 = uVar1 - 6, uVar1 == 0)) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
    uVar1 = F_006f3a50(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
  }
  return uVar1;
}

/* ref: FUN_00b07320 */
uint F_00b07320(unsigned int gen_a0)
{
  GEN_ENTER(0xb07320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0xe0000000;
  *(undefined4 *)((int)this + 8) = 0;
  F_0042b630((int)this + 0x10);
  F_00a6a7a0((undefined *)((int)this + 100),0,0);
  *(undefined1 *)((int)this + 0x98) = 0;
  return (uint)this;
}

/* ref: FUN_00b07360 */
unsigned int F_00b07360(unsigned int gen_a0)
{
  GEN_ENTER(0xb07360u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*param_1)(param_1,1);
  }
  return 0;
}

/* ref: FUN_00b07380 */
byte F_00b07380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb07380u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  uVar1 = F_00ab3de0(param_1);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 0x20) != 0)) {
    piVar2 = (int *)F_005f3270(0x31,*(int *)(uVar1 + 0x20),0);
    if (piVar2 != (int *)0x0) {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xe4))(piVar2)));
      *param_2 = *puVar3;
      param_2[1] = puVar3[1];
      param_2[2] = puVar3[2];
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b073e0 */
byte F_00b073e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb073e0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00a5f290(param_1);
  }
  uVar2 = F_00ab21d0(0x22);
  if ((uVar1 != 0) && (uVar2 != 0)) {
    return *((byte *)GEN_TOP((*(byte *)(uVar1 + 0x1688) + 4 + uVar2)));
  }
  return 0;
}

/* ref: FUN_00b07420 */
byte F_00b07420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb07420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = F_00a5f290(param_1);
    if (uVar1 != 0) {
      return *(byte *)(uVar1 + 0x1689) < *(byte *)((int)this + 0x321);
    }
  }
  return 1;
}

/* ref: FUN_00b07460 */
byte F_00b07460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb07460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = F_00a5f290(param_1);
    if (uVar1 != 0) {
      return *(byte *)((int)this + 0x322) < *(byte *)(uVar1 + 0x1689);
    }
  }
  return 1;
}

/* ref: FUN_00b074a0 */
uint F_00b074a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb074a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  uint uVar1;
  byte bVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x54);
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 1: ;
    *(undefined4 *)(param_3 + 4) = 2;
    *(uint *)(param_3 + 0x60) = (uint)*(byte *)(param_2 + 0x2fa + (int)this);
    *param_3 = 1;
    return (uint)param_3;
  case 2: ;
  case 0xb: ;
    param_3[0x5d] = uVar1 != 0xb;
    *(undefined4 *)(param_3 + 4) = 6;
    if (param_2 < 3) {
      uVar1 = (uint)*(byte *)(param_2 + 0x300 + (int)this);
      *(uint *)(param_3 + 0x60) = uVar1;
      bVar2 = *(byte *)((int)this + 0x2fe);
      *param_3 = 1;
      *(uint *)(param_3 + 100) = (uint)bVar2;
      return uVar1;
    }
    *(undefined4 *)(param_3 + 0x60) = 0;
    bVar2 = *(byte *)((int)this + 0x2fe);
    *param_3 = 1;
    *(uint *)(param_3 + 100) = (uint)bVar2;
    return 0;
  case 3: ;
  case 0xc: ;
    param_3[0x5d] = uVar1 != 0xc;
    *(undefined4 *)(param_3 + 4) = 6;
    if (param_2 < 3) {
      bVar2 = *(byte *)(param_2 + 0x300 + (int)this);
    }
    else {
      bVar2 = 0;
    }
    uVar1 = (uint)bVar2;
    *(uint *)(param_3 + 0x60) = uVar1;
    bVar2 = *(byte *)((int)this + 0x2ff);
    *param_3 = 1;
    *(uint *)(param_3 + 100) = (uint)bVar2;
  default: ;
    return uVar1;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0x2b: ;
  case 0x2c: ;
  case 0x2d: ;
    break;
  }
  if (uVar1 - 0x2b < 3) {
    param_3[0x5d] = 0;
  }
  *(undefined4 *)(param_3 + 4) = 6;
  if (param_2 < 3) {
    bVar2 = *(byte *)(param_2 + 0x300 + (int)this);
  }
  else {
    bVar2 = 0;
  }
  *(uint *)(param_3 + 0x60) = (uint)bVar2;
  if (param_2 < 3) {
    uVar1 = (uint)*(byte *)(param_2 + 0x303 + (int)this);
    *(uint *)(param_3 + 100) = uVar1;
    *param_3 = 1;
    return uVar1;
  }
  *(undefined4 *)(param_3 + 100) = 0;
  *param_3 = 1;
  return 0;
}

/* ref: FUN_00b07630 */
uint F_00b07630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb07630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (((param_2 != 0) && (*(char *)((int)this + 800) == '\x02')) &&
     (*(byte *)((int)this + 0x2f9) != 0)) {
    uVar1 = *(undefined4 *)((int)this + 0x314);
    param_1[1] = (uint)*(byte *)((int)this + 0x2f9);
    *param_1 = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00b07670 */
uint F_00b07670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb07670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar1 == 3) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x2f8))) {
    case 2: ;
    case 8: ;
    case 9: ;
      if (param_1[0x1d] == *(int *)((int)this + 0x14)) {
        return 0xed3c;
      }
      break;
    case 7: ;
      if (param_1[0x1d] == *(int *)((int)this + 0x10)) {
        return 0xeabd;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b076f0 */
byte F_00b076f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb076f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  this_00 = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00a5f290(REFG(void * PTR32, 0x1379694));
  }
  uVar2 = F_00ab21d0(0x22);
  if (((uVar1 != 0) && (uVar2 != 0)) && (*((char *)GEN_TOP((*(byte *)(uVar1 + 0x1688) + 4 + uVar2))) != '\0'))
  {
    if (((this_00 != (undefined *)0x0) && (uVar1 = F_00a5f290(this_00), uVar1 != 0)) &&
       (*(byte *)(uVar1 + 0x1689) <= *(byte *)((int)this + 0x322))) {
      return 0;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00b07760 */
uint F_00b07760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb07760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006fec60(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[158])REFP(0x10ecd7c));
  *(undefined4 *)((int)this + 0x32c) = 0;
  *(undefined4 *)((int)this + 0x330) = 0;
  *(undefined * PTR32 *)(REFG(int, 0x14c0cf8) + 0x218) = this;
  return (uint)this;
}

/* ref: FUN_00b077a0 */
uint F_00b077a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb077a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *in_ecx = (*(undefined * PTR32 (*)[158])REFP(0x10ecd7c));
  *(undefined4 *)(REFG(int, 0x14c0cf8) + 0x218) = 0;
  if (in_ecx[0xcc] != 0) {
    piVar1 = (int *)in_ecx[0xcb];
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,in_ecx[0xcc]);
    }
    puVar2 = (undefined4 *)in_ecx[0xcc];
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      in_ecx[0xcc] = 0;
    }
  }
  in_ecx[0xcb] = 0;
  uVar3 = F_006fed10(in_ecx,in_edi);
  return uVar3;
}

/* ref: Client::Game::Fate::FateDirector::vf43 */
uint F_00b07810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb07810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if ((1 < (int)uVar2) && (((int)uVar2 < 4 || (uVar2 == 7)))) {
    uVar2 = F_00a51200(0x59,param_1[0x1d],0,0,0);
  }
  if ((short)param_1[0x3a] != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if ((((uVar2 == 2) && (param_1[0x47] == 0)) && (param_1[0x39] == *(int *)(this + 8))) &&
       (((param_1[0x3b] != 0 || (param_1[0x3c] != 0)) &&
        ((uVar2 = F_00a5f290(param_1), uVar2 != 0 && (REFG(void * PTR32, 0x1379694) != (undefined *)0x0)))))) {
      bVar1 = F_00aa1800(REFG(void * PTR32, 0x1379694),uVar2);
      if (bVar1 == 0) {
        uVar3 = 0xa4;
      }
      else {
        uVar3 = 0xa3;
      }
      F_00ab4370(uVar3,uVar2,uVar2,0,0);
    }
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c0))(this,param_1);
    if (uVar2 != 0) {
      *(byte *)((int)param_1 + 0x8f) = *(byte *)((int)param_1 + 0x8f) | 4;
    }
  }
  return uVar2;
}

/* ref: FUN_00b078e0 */
ushort F_00b078e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb078e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  *(ushort *)(REFG(int, 0x14c0cf8) + 0x230) = (ushort)param_1;
  return (ushort)param_1;
}

/* ref: FUN_00b07930 */
byte F_00b07930(unsigned int gen_a0)
{
  GEN_ENTER(0xb07930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x21c) != (undefined *)0x0) {
    bVar1 = F_00b076f0(*(undefined * PTR32 *)((int)this + 0x21c));
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00b07950 */
uint F_00b07950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb07950u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  int * this;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  int * piVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  float fVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar2 = param_2;
  if (param_3 != (uint *)0x0) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),(*param_3 & 0xffffff) + (int)param_3,REFG(undefined4, 0x108cc50));
    if (((param_1 != -0x20000000) &&
        (this = (int *)F_00a35490(&REFG(undefined4, 0x14a31f0),param_1), this != (int *)0x0)) &&
       (uVar2 = ((code *)*(gen_code32 *)(*this + 0x68))(this), (char)uVar2 != '\0')) {
      uVar2 = F_006b8c00();
      uVar2 = F_006d7400((undefined *)(uVar2 + 0x100));
      uVar3 = F_00a5f290(this);
      if ((uVar3 != uVar2) && (REFG(int, 0x1488344) != 0)) {
        pvVar4 = (undefined *)F_006b8c00();
        piVar5 = (int *)F_006de750(pvVar4);
        if (piVar5 != this) {
          piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
          if (piVar5 != (int *)0x0) {
            if ((param_3[3] & 4) == 0) {
              if ((param_3[3] & 1) != 0) {
                uVar11 = 0;
                puVar9 = ((undefined1 *)(gen_frame + 0x4));
                uVar8 = 0x44;
                pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5)));
                F_00459b00(pvVar4,uVar8,param_2,puVar9,uVar11);
              }
            }
            else {
              uVar2 = param_3[2];
              iVar1 = *piVar5;
              uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
              uVar6 = F_0042a990(param_2);
              ((code *)*(gen_code32 *)(iVar1 + 0x108))(piVar5,uVar6,uVar3,uVar2);
            }
          }
          if (((param_3[3] & 2) != 0) && (uVar2 = F_00a5f290(this), uVar2 != 0)) {
            uVar3 = (uint)*(byte *)((int)param_3 + 0xd);
            fVar10 = gen_bits2f(param_3[1]);
            uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
            F_00bc5d20(uVar2 + 0x15dc,uVar6,fVar10,uVar3);
          }
        }
      }
    }
    uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = (uint)uVar7;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00b07ac0 */
uint F_00b07ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xb07ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  float * pfVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  uVar7 = 0;
  puVar2 = (undefined4 *)(*(int *)this + -2);
  (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)0x0;
  if (puVar2 == (undefined4 *)0x0) {
    if (*(int *)((int)this + 4) != -0x20000000) {
      do {
        piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar7]));
        if (((piVar1 != (int *)0x0) && (piVar1[0x1d] == *(int *)((int)this + 4))) &&
           (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1), (char)uVar3 != '\0')) {
          (*(int * PTR32 *)(gen_frame + 0x68)) = piVar1;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x158);
    }
    if (*(int *)((int)this + 8) != 0) {
      uVar7 = 0;
      do {
        piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar7]));
        if (((piVar1 != (int *)0x0) && (piVar1[0x1e] == *(int *)((int)this + 8))) &&
           (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1), (char)uVar3 != '\0')) break;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x158);
    }
    if ((*(int * PTR32 *)(gen_frame + 0x68)) == (int *)0x0) {
      *(byte *)((int)this + 0x98) = *(byte *)((int)this + 0x98) & 0xfe;
    }
    else {
      *(byte *)((int)this + 0x98) = *(byte *)((int)this + 0x98) | 1;
    }
    if ((*(byte *)((int)this + 0x98) & 1) != 0) {
      pfVar4 = (float *)F_00a5feb0((*(int * PTR32 *)(gen_frame + 0x68)));
      uVar7 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x68)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x68)));
      F_0042e430((undefined *)((int)this + 0x10),uVar7);
      puVar5 = (undefined4 *)
               F_00a6a710(((undefined1 *)(gen_frame + 0x34)),0,(undefined *)((int)this + 0x10),*(undefined4 *)((int)this + 0xc),
                            *pfVar4,pfVar4[1],pfVar4[2],(float)(float10)0,(uint)REFG(undefined2, 0x1379c78),0,0,0,
                            0xff);
      puVar2 = puVar5;
      puVar8 = (undefined4 *)((int)this + 100);
      for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar8 = puVar8 + 1;
      }
      return (uint)puVar5;
    }
    puVar2 = (undefined4 *)F_00a6a7a0(((undefined1 *)(gen_frame + 0x0)),0,0);
    puVar8 = puVar2;
    puVar5 = (undefined4 *)((int)this + 100);
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00b07c00 */
uint F_00b07c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb07c00u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * this;
  
  this = (undefined4 *)F_00406b90(0x338,0,0);
  if (this != (undefined4 *)0x0) {
    F_006fec60(this,param_1 & 0xffff | 0x801a0000,param_2);
    *this = (*(undefined * PTR32 (*)[158])REFP(0x10ecd7c));
    this[0xcb] = 0;
    this[0xcc] = 0;
    *(undefined4 * PTR32 *)(REFG(int, 0x14c0cf8) + 0x218) = this;
    return (uint)this;
  }
  return 0;
}

/* ref: FUN_00b07c70 */
uint F_00b07c70(unsigned int gen_a0)
{
  GEN_ENTER(0xb07c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  undefined * pvVar1;
  undefined4 * puVar2;
  int * piVar3;
  float * pfVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  (*(byte *)(gen_frame + 0x5f)) = (byte)(*(uint *)((int)this + 0x1c) >> 10) & 1;
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x340);
  (*(undefined * PTR32 *)(gen_frame + 0x58)) = this;
  if (puVar2 == (undefined4 *)0xe0000000) {
    piVar3 = (int *)F_005f3270(0x31,*(undefined4 *)((int)this + 0x318),0);
    puVar2 = (undefined4 *)0x0;
    if (piVar3 == (int *)0x0) goto LAB_00b07d7a;
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 0x40;
    pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xf4))(piVar3)));
    (*(float *)(gen_frame + 0x40)) = *pfVar4;
    (*(float *)(gen_frame + 0x44)) = pfVar4[1];
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xe4))(piVar3)));
    *(undefined4 *)((int)this + 0x330) = *puVar2;
    *(undefined4 *)((int)this + 0x334) = puVar2[1];
    *(undefined4 *)((int)this + 0x338) = puVar2[2];
    *(float *)((int)this + 0x344) = (*(float *)(gen_frame + 0x40));
    *(float *)((int)this + 0x34c) = (*(float *)(gen_frame + 0x44));
    *(float *)((int)this + 0x348) = (float)((float10)(*(float *)(gen_frame + 0x40)) * (float10)(*(float *)(gen_frame + 0x40)));
  }
  else {
    if (puVar2 == (undefined4 *)0xe0000000) goto LAB_00b07d7a;
    pvVar1 = (undefined *)F_00a354d0(&REFG(undefined4, 0x14a31f0),puVar2,0);
    puVar2 = (undefined4 *)0x0;
    if (pvVar1 == (undefined *)0x0) goto LAB_00b07d7a;
    puVar2 = (undefined4 *)F_00a5feb0(pvVar1);
    *(undefined4 *)((int)this + 0x330) = *puVar2;
    *(undefined4 *)((int)this + 0x334) = puVar2[1];
    *(undefined4 *)((int)this + 0x338) = puVar2[2];
  }
  (*(byte *)(gen_frame + 0x5f)) = 1;
LAB_00b07d7a: ;
  if (*(uint *)&REFG(undefined2, 0x1379c78) == 0) {
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xffffffbf;
    return (uint)puVar2;
  }
  if ((*(byte *)(gen_frame + 0x5f)) != 0) {
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffbff;
    *(undefined4 *)((int)this + 0x4b8) = 1;
    *(undefined4 *)((int)this + 0x4c4) = 0xec69;
    (*(int *)(gen_frame + 0x54)) = (int)this + 0x9c;
    uVar5 = F_0042a990((int)this + 0x9c);
    F_0042e430((undefined *)((int)this + 0x4c8),uVar5);
    *(undefined4 *)((int)this + 0x4c0) = 0;
    puVar2 = (undefined4 *)
             F_00a6a710(((undefined1 *)(gen_frame + 0xc)),0,(undefined *)((int)this + 0x4c8),*(undefined4 *)((int)this + 0x4c4),
                          *(float *)((int)this + 0x330),*(float *)((int)this + 0x334),
                          *(float *)((int)this + 0x338),*(float *)((int)this + 0x344),
                          *(uint *)&REFG(undefined2, 0x1379c78) & 0xffff,0,0,0,0xff);
    pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x58));
    puVar7 = (undefined4 *)((int)this + 0x51c);
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x554) = 1;
    *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x560) = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x310);
    this_00 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x564);
    uVar5 = F_0042a990((*(int *)(gen_frame + 0x54)));
    F_0042e430(this_00,uVar5);
    *(undefined4 *)((int)pvVar1 + 0x55c) = 0;
    puVar2 = (undefined4 *)
             F_00a6a710(((undefined1 *)(gen_frame + 0xc)),0,this_00,*(undefined4 *)((int)pvVar1 + 0x560),
                          *(float *)((int)pvVar1 + 0x330),*(float *)((int)pvVar1 + 0x334),
                          *(float *)((int)pvVar1 + 0x338),(float)(float10)0,
                          *(uint *)&REFG(undefined2, 0x1379c78) & 0xffff,0,0,0,0xff);
    puVar7 = puVar2;
    puVar8 = (undefined4 *)((int)pvVar1 + 0x5b8);
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00b07f50 */
byte F_00b07f50(unsigned int gen_a0)
{
  GEN_ENTER(0xb07f50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (((*(uint *)(in_ecx + 0x1c) >> 7 & 1) != 0) &&
     ((*(char *)(in_ecx + 0x2f8) == '\x02' || (*(char *)(in_ecx + 0x2f8) == '\b')))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b07f80 */
uint F_00b07f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xb07f80u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *(undefined4 *)(in_ecx + 0x340) = param_2;
  *(undefined4 *)(in_ecx + 0x330) = *param_3;
  *(undefined4 *)(in_ecx + 0x334) = param_3[1];
  *(undefined4 *)(in_ecx + 0x338) = param_3[2];
  *(float *)(in_ecx + 0x344) = param_4;
  *(float *)(in_ecx + 0x34c) = param_5;
  *(float *)(in_ecx + 0x348) = (float)((float10)param_4 * (float10)param_4);
  *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) | 0x404;
  return (uint)param_3;
}

/* ref: FUN_00b07fe0 */
uint F_00b07fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb07fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 != param_1) {
    if (uVar1 != 0xe0000000) {
      uVar1 = F_00a35490(&REFG(undefined4, 0x14a31f0),uVar1);
      if (uVar1 != 0) {
        *(byte *)(uVar1 + 0x8f) = *(byte *)(uVar1 + 0x8f) | 4;
      }
    }
    *(uint *)((int)this + 0x10) = param_1;
    if (param_1 == 0xe0000000) {
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(uint *)(gen_frame + 0x10)) = param_1;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
      F_00a6a7a0(((undefined1 *)(gen_frame + 0x70)),0,0);
      (*(undefined1 *)(gen_frame + 0xa4)) = 0;
      F_00b0c920((undefined *)((int)this + 0x5f0),&(*(undefined4 *)(gen_frame + 0xc)));
      uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
      uVar1 = (uint)uVar2;
    }
    else {
      *(byte *)((int)this + 0x688) = *(byte *)((int)this + 0x688) & 0xfe;
      *(undefined4 *)((int)this + 0x5f0) = 2;
      *(undefined4 *)((int)this + 0x5fc) = 0xec2a;
      *(uint *)((int)this + 0x5f4) = param_1;
      uVar1 = F_00a35490(&REFG(undefined4, 0x14a31f0),param_1);
      if (uVar1 != 0) {
        *(byte *)(uVar1 + 0x8f) = *(byte *)(uVar1 + 0x8f) | 4;
      }
    }
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 0x100;
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar1;
}

/* ref: FUN_00b080e0 */
uint F_00b080e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb080e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(uint *)(gen_frame + 0xa8)) = uVar2;
  if (*(int *)((int)this + 0x14) != param_1) {
    *(int *)((int)this + 0x14) = param_1;
    if (param_1 == -0x20000000) {
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(int *)(gen_frame + 0x10)) = param_1;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
      F_00a6a7a0(((undefined1 *)(gen_frame + 0x70)),0,0);
      (*(undefined1 *)(gen_frame + 0xa4)) = 0;
      F_00b0c920((undefined *)((int)this + 0x68c),&(*(undefined4 *)(gen_frame + 0xc)));
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
      uVar2 = (uint)uVar5;
    }
    else {
      *(byte *)((int)this + 0x724) = *(byte *)((int)this + 0x724) & 0xfe;
      *(undefined4 *)((int)this + 0x68c) = 2;
      *(undefined4 *)((int)this + 0x698) = 0xec60;
      *(int *)((int)this + 0x690) = param_1;
      piVar3 = &REFG(undefined4, 0x14a31f4);
      uVar4 = 2;
      do {
        if ((((uVar4 - 2 < 0x158) && (iVar1 = piVar3[-1], iVar1 != 0)) &&
            (*(short *)(iVar1 + 0xe8) == *(short *)((int)this + 0x18))) &&
           (*(int *)(iVar1 + 0x74) == param_1)) {
          *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 4;
        }
        if (((uVar4 - 1 < 0x158) && (iVar1 = *piVar3, iVar1 != 0)) &&
           ((*(short *)(iVar1 + 0xe8) == *(short *)((int)this + 0x18) &&
            (*(int *)(iVar1 + 0x74) == param_1)))) {
          *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 4;
        }
        if (((uVar4 < 0x158) && (iVar1 = piVar3[1], iVar1 != 0)) &&
           ((*(short *)(iVar1 + 0xe8) == *(short *)((int)this + 0x18) &&
            (*(int *)(iVar1 + 0x74) == param_1)))) {
          *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 4;
        }
        if ((((uVar4 + 1 < 0x158) && (iVar1 = piVar3[2], iVar1 != 0)) &&
            (*(short *)(iVar1 + 0xe8) == *(short *)((int)this + 0x18))) &&
           (*(int *)(iVar1 + 0x74) == param_1)) {
          *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 4;
        }
        uVar2 = uVar4 + 2;
        piVar3 = piVar3 + 4;
        uVar4 = uVar4 + 4;
      } while (uVar2 < 0x158);
    }
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 0x200;
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar2;
}

/* ref: FUN_00b08260 */
byte F_00b08260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb08260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  code * pcVar4;
  undefined * this_00;
  undefined4 * puVar5;
  int * piVar6;
  
  if (*(int *)((int)this + 0x318) == 0) {
    return 0;
  }
  if ((*(uint *)((int)this + 0x1c) >> 2 & 1) != 0) {
    if ((*(int *)((int)this + 0x340) == -0x20000000) ||
       (this_00 = (undefined *)F_00a35490(&REFG(undefined4, 0x14a31f0),*(int *)((int)this + 0x340)),
       this_00 == (undefined *)0x0)) {
      *param_1 = *(undefined4 *)((int)this + 0x330);
      param_1[1] = *(undefined4 *)((int)this + 0x334);
      param_1[2] = *(undefined4 *)((int)this + 0x338);
    }
    else {
      puVar5 = (undefined4 *)F_00a5feb0(this_00);
      *param_1 = *puVar5;
      param_1[1] = puVar5[1];
      param_1[2] = puVar5[2];
    }
    uVar1 = *(undefined4 *)((int)this + 0x34c);
    uVar2 = *(undefined4 *)((int)this + 0x344);
    *param_2 = uVar2;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    return 1;
  }
  piVar6 = (int *)F_005f3270(0x31,*(int *)((int)this + 0x318),0);
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0xe4))(piVar6)));
  iVar3 = *piVar6;
  *param_1 = *puVar5;
  param_1[1] = puVar5[1];
  pcVar4 = *(gen_code32 *)(iVar3 + 0xf4);
  param_1[2] = puVar5[2];
  puVar5 = ((undefined4 *)GEN_TOP((*pcVar4)(piVar6)));
  *param_2 = *puVar5;
  param_2[1] = puVar5[1];
  param_2[2] = puVar5[2];
  return 1;
}

/* ref: FUN_00b08360 */
uint F_00b08360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb08360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 4)) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 2;
  }
  return (uint)piVar1;
}

/* ref: FUN_00b08390 */
uint F_00b08390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb08390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 4)) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 2;
  }
  return (uint)piVar1;
}

/* ref: FUN_00b083c0 */
uint F_00b083c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb083c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  int * piVar5;
  
  piVar5 = *(int * PTR32 *)((int)this + 0x220);
  uVar2 = 0;
  if (piVar5 != *(int * PTR32 *)((int)this + 0x224)) {
    do {
      iVar4 = *piVar5;
      puVar3 = (undefined4 *)(uVar2 * 0x10 + param_1);
      if (((param_2 == uVar2) || (*(char *)(iVar4 + 800) != '\x02')) ||
         (bVar1 = *(byte *)(iVar4 + 0x2f9), bVar1 == 0)) {
        iVar4 = 0;
      }
      else {
        *puVar3 = *(undefined4 *)(iVar4 + 0x314);
        puVar3[1] = (uint)bVar1;
        iVar4 = 1;
      }
      piVar5 = piVar5 + 1;
      uVar2 = uVar2 + iVar4;
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x224));
  }
  return uVar2;
}

/* ref: FUN_00b08430 */
unsigned int F_00b08430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb08430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x1b4);
  if (piVar1 != *(int * PTR32 *)((int)this + 0x1b8)) {
    while (*piVar1 != param_1) {
      piVar1 = piVar1 + 0x12;
      if (piVar1 == *(int * PTR32 *)((int)this + 0x1b8)) {
        return 0;
      }
    }
    *piVar1 = -0x20000000;
  }
  return 0;
}

/* ref: FUN_00b08460 */
byte F_00b08460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb08460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  int in_ecx_00;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)(in_ecx + 0x220);
  piVar1 = *(int * PTR32 *)(in_ecx + 0x224);
  while( true ) {
    if (piVar3 == piVar1) {
      return 0;
    }
    in_ecx_00 = *piVar3;
    if (((*(uint *)(in_ecx_00 + 0x1c) >> 7 & 1) != 0) &&
       (((*(char *)(in_ecx_00 + 0x2f8) == '\x02' || (*(char *)(in_ecx_00 + 0x2f8) == '\b')) &&
        (uVar2 = F_00b0c820(in_ecx_00,param_2), (char)uVar2 != '\0')))) break;
    piVar3 = piVar3 + 1;
  }
  return 1;
}

/* ref: FUN_00b084c0 */
uint F_00b084c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb084c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (puVar1 == *(uint * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
    if (*(short *)(*puVar1 + 0x18) == (short)param_1) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}

/* ref: FUN_00b084f0 */
uint F_00b084f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb084f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (puVar1 == *(uint * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
    if (*(short *)(*puVar1 + 0x18) == (short)param_1) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}

/* ref: FUN_00b08520 */
byte F_00b08520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb08520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined4 * puVar6;
  
  piVar5 = *(int * PTR32 *)((int)this + 0x220);
  do {
    if (piVar5 == *(int * PTR32 *)((int)this + 0x224)) {
LAB_00b08546: ;
      uVar4 = F_00ab3de0(param_1);
      if (((uVar4 != 0) && (*(int *)(uVar4 + 0x20) != 0)) &&
         (piVar5 = (int *)F_005f3270(0x31,*(int *)(uVar4 + 0x20),0), piVar5 != (int *)0x0)) {
        puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0xe4))(piVar5)));
        *param_2 = *puVar6;
        param_2[1] = puVar6[1];
        param_2[2] = puVar6[2];
        return 1;
      }
      return 0;
    }
    iVar3 = *piVar5;
    if (*(short *)(iVar3 + 0x18) == (short)param_1) {
      if ((*(uint *)(iVar3 + 0x1c) >> 7 & 1) != 0) {
        uVar1 = *(undefined4 *)(iVar3 + 0x334);
        uVar2 = *(undefined4 *)(iVar3 + 0x338);
        *param_2 = *(undefined4 *)(iVar3 + 0x330);
        param_2[1] = uVar1;
        param_2[2] = uVar2;
        return 1;
      }
      goto LAB_00b08546;
    }
    piVar5 = piVar5 + 1;
  } while( true );
}

/* ref: FUN_00b085e0 */
uint F_00b085e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb085e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x220);
  if (piVar2 != *(int * PTR32 *)((int)this + 0x224)) {
    while (iVar1 = *piVar2, *(short *)(iVar1 + 0x18) != (short)param_1) {
      piVar2 = piVar2 + 1;
      if (piVar2 == *(int * PTR32 *)((int)this + 0x224)) {
        return (uint)piVar2;
      }
    }
    *(undefined4 *)(iVar1 + 0x20) = param_2;
    *(undefined4 *)(iVar1 + 0x24) = param_3;
    *(int * PTR32 *)(iVar1 + 0x28) = param_4;
    *(undefined4 *)(iVar1 + 0x2c) = param_5;
    piVar2 = param_4;
  }
  return (uint)piVar2;
}

/* ref: FUN_00b08630 */
uint F_00b08630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb08630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint in_EAX = 0;
  uint * puVar6;
  float10 fVar7;
  float10 fVar8;
  
  puVar6 = *(uint * PTR32 *)((int)this + 0x220);
  if (puVar6 != *(uint * PTR32 *)((int)this + 0x224)) {
    while( true ) {
      in_EAX = *puVar6;
      if (*(short *)(in_EAX + 0x18) == *param_1) break;
      puVar6 = puVar6 + 1;
      if (puVar6 == *(uint * PTR32 *)((int)this + 0x224)) {
        return in_EAX;
      }
    }
    iVar1 = *(int *)(param_1 + 6);
    uVar4 = param_1[4];
    fVar7 = (float10)*(double *)&REFG(undefined, 0x10928e8);
    uVar5 = param_1[5];
    iVar2 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 10);
    *(undefined4 *)(in_EAX + 0x340) = *(undefined4 *)(param_1 + 2);
    *(float *)(in_EAX + 0x330) = (float)((float10)iVar1 * fVar7);
    *(float *)(in_EAX + 0x334) = (float)((float10)iVar2 * fVar7);
    *(float *)(in_EAX + 0x338) = (float)((float10)iVar3 * fVar7);
    fVar8 = (float10)(float)((float10)uVar4 * fVar7);
    *(float *)(in_EAX + 0x344) = (float)((float10)uVar4 * fVar7);
    *(float *)(in_EAX + 0x348) = (float)(fVar8 * fVar8);
    *(float *)(in_EAX + 0x34c) = (float)((float10)uVar5 * fVar7);
    *(uint *)(in_EAX + 0x1c) = *(uint *)(in_EAX + 0x1c) | 0x404;
  }
  return in_EAX;
}

/* ref: FUN_00b08710 */
uint F_00b08710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb08710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
    if (*(short *)((int)*puVar1 + 0x18) == *(short *)(param_1 + 0xe8)) break;
    puVar1 = puVar1 + 1;
  }
  uVar2 = F_00b07670((undefined *)*puVar1,param_1);
  return uVar2;
}

/* ref: FUN_00b08760 */
byte F_00b08760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb08760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (piVar2 == *(int * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
    iVar1 = *piVar2;
    if (*(short *)(iVar1 + 0x18) == (short)param_1) break;
    piVar2 = piVar2 + 1;
  }
  if ((param_2 != (undefined *)0x0) && (uVar3 = F_00a5f290(param_2), uVar3 != 0)) {
    return *(byte *)(uVar3 + 0x1689) <= *(byte *)(iVar1 + 0x322);
  }
  return 0;
}

/* ref: FUN_00b087d0 */
uint F_00b087d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb087d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
    if (*(short *)(*piVar1 + 0x18) == (short)param_1) break;
    piVar1 = piVar1 + 1;
  }
  return *(uint *)(*piVar1 + 0x20);
}

/* ref: FUN_00b08810 */
ulonglong F_00b08810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb08810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (piVar2 == *(int * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
    iVar1 = *piVar2;
    if (*(short *)(iVar1 + 0x18) == (short)param_1) break;
    piVar2 = piVar2 + 1;
  }
  return CONCAT44(*(int *)(iVar1 + 0x2c) + *(int *)(iVar1 + 0x24) +
                  (uint)CARRY4(*(uint *)(iVar1 + 0x28),*(uint *)(iVar1 + 0x20)),
                  *(uint *)(iVar1 + 0x28) + *(uint *)(iVar1 + 0x20));
}

/* ref: FUN_00b08860 */
byte F_00b08860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb08860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
    if (*(short *)(*piVar1 + 0x18) == (short)param_1) break;
    piVar1 = piVar1 + 1;
  }
  return *(byte *)(*piVar1 + 0x321);
}

/* ref: FUN_00b088a0 */
byte F_00b088a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb088a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
    if (*(short *)(*piVar1 + 0x18) == (short)param_1) break;
    piVar1 = piVar1 + 1;
  }
  return *(byte *)(*piVar1 + 0x322);
}

/* ref: FUN_00b088e0 */
byte F_00b088e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb088e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (piVar2 == *(int * PTR32 *)((int)this + 0x224)) {
      return 1;
    }
    iVar1 = *piVar2;
    if (*(short *)(iVar1 + 0x18) == (short)param_1) break;
    piVar2 = piVar2 + 1;
  }
  if ((*(uint *)(iVar1 + 0x1c) >> 7 & 1) == 0) {
    return 1;
  }
  if ((*(char *)(iVar1 + 0x2f8) != '\x02') && (*(char *)(iVar1 + 0x2f8) != '\b')) {
    return 1;
  }
  return 1 - (*(byte *)(iVar1 + 0x322) < *(byte *)(param_2 + 0x1689));
}

/* ref: FUN_00b08980 */
unsigned int F_00b08980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb08980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  short sVar2;
  int iVar3;
  uint * puVar4;
  uint uVar5;
  undefined1 * puVar6;
  
  puVar4 = param_1;
  *(undefined1 *)((int)this + 0x321) = *(undefined1 *)((int)param_1 + 0x3d);
  *(undefined1 *)((int)this + 0x322) = *(undefined1 *)((int)param_1 + 0x3e);
  *(uint *)((int)this + 0x30c) = param_1[9];
  *(uint *)((int)this + 0x310) = param_1[10];
  *(char *)((int)this + 800) = (char)param_1[0xf];
  *(uint *)((int)this + 0x31c) = param_1[0xb];
  *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xffffffef;
  *(uint *)((int)this + 0x318) = param_1[8];
  F_0042e430((undefined *)((int)this + 0x9c),(*param_1 & 0xffffff) + (int)param_1);
  F_0042e430((undefined *)((int)this + 0xf0),(int)param_1 + (param_1[1] & 0xffffff) + 4);
  F_0042e430((undefined *)((int)this + 0x144),(int)param_1 + (param_1[2] & 0xffffff) + 8);
  *(undefined * PTR32 *)((int)this + 0x2e8) = (undefined *)((int)this + 0xf0);
  if (*(char *)((int)this + 800) == '\x02') {
    *(uint *)((int)this + 0x314) = param_1[6];
  }
  uVar5 = param_1[4];
  puVar1 = param_1 + 5;
  ((int *)(gen_frame + 0x8))[0] = (int)param_1 + (param_1[3] & 0xffffff) + 0xc;
  ((int *)(gen_frame + 0x8))[1] = (int)param_1 + (uVar5 & 0xffffff) + 0x10;
  param_1 = (uint *)((int)param_1 + 0x36);
  ((int *)(gen_frame + 0x8))[2] = (*puVar1 & 0xffffff) + (int)puVar1;
  ((int *)(gen_frame + 0x8))[3] = 0;
  ((int *)(gen_frame + 0x8))[4] = 0;
  puVar6 = (undefined1 *)((int)this + 0x3a6);
  do {
    sVar2 = *(short *)param_1;
    *(short *)(puVar6 + -2) = sVar2;
    if ((sVar2 == 0) || (iVar3 = ((int *)(gen_frame + 0x8))[(int)(((int *)(gen_frame + 0x8))[4])], iVar3 == 0)) {
      *puVar6 = 0;
      uVar5 = ((int *)(gen_frame + 0x8))[4];
    }
    else {
      *puVar6 = 1;
      F_0042e430(puVar6 + -0x56,iVar3);
      uVar5 = ((int *)(gen_frame + 0x8))[4];
    }
    param_1 = (uint *)((int)param_1 + 2);
    puVar6 = puVar6 + 0x58;
    ((int *)(gen_frame + 0x8))[4] = uVar5 + 1;
  } while (uVar5 + 1 < 4);
  F_0042e430((undefined *)((int)this + 0x198),(*puVar4 & 0xffffff) + (int)puVar4);
  *(undefined4 *)((int)this + 0x330) = 0;
  *(undefined4 *)((int)this + 0x334) = 0;
  *(undefined4 *)((int)this + 0x338) = 0;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xffffffbf;
  if (*(int *)((int)this + 0x318) != 0) {
    F_00b07c70(this);
  }
  *(undefined1 *)((int)this + 0x323) = *(undefined1 *)((int)puVar4 + 0x3f);
  *(char *)((int)this + 0x324) = (char)puVar4[0x10];
  *(undefined1 *)((int)this + 0x325) = *(undefined1 *)((int)puVar4 + 0x41);
  if (*(char *)((int)puVar4 + 0x42) == '\0') {
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 0x800;
  }
  else {
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffff7ff;
  }
  if (*(char *)((int)puVar4 + 0x42) == '\0') {
    *(byte *)((int)this + 0x54e) = *(byte *)((int)this + 0x54e) | 2;
    *(byte *)((int)this + 0x5ea) = *(byte *)((int)this + 0x5ea) | 2;
    *(byte *)((int)this + 0x686) = *(byte *)((int)this + 0x686) | 2;
    *(byte *)((int)this + 0x722) = *(byte *)((int)this + 0x722) | 2;
  }
  return 0;
}

/* ref: FUN_00b08b80 */
uint F_00b08b80(unsigned int gen_a0)
{
  GEN_ENTER(0xb08b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_8;
  
  uVar4 = *(uint *)((int)this + 0x1c) >> 7;
  if (((uVar4 & 1) != 0) &&
     ((*(byte *)((int)this + 0x2f8) == 2 || (uVar4 = *(byte *)((int)this + 0x2f8) - 8, uVar4 == 0)))
     ) {
    uVar4 = *(uint *)((int)this + 0x20);
    uVar5 = *(uint *)((int)this + 0x28);
    iVar1 = *(int *)((int)this + 0x24);
    iVar2 = *(int *)(REFG(int, 0x14c0cf8) + 0x218);
    iVar3 = *(int *)((int)this + 0x2c);
    *(uint *)(iVar2 + 0x2f0) = uVar5 + uVar4;
    *(int *)(iVar2 + 0x2ec) = iVar1;
    *(uint *)(iVar2 + 0x2e8) = uVar4;
    *(uint *)(iVar2 + 0x2f4) = iVar3 + iVar1 + (uint)CARRY4(uVar5,uVar4);
    *((uint *)GEN_TOP((*(int *)(iVar2 + 0x2f8) + 0x60))) = (uint)*(byte *)((int)this + 0x2fd);
    uVar5 = 0;
    uVar4 = (int)this + 0x350;
    local_8 = 0;
    do {
      if (*(char *)(uVar4 + 0x56) != '\0') {
        F_00b074a0(this,uVar4,local_8,uVar5 + 0x140 + *(int *)(iVar2 + 0x2f8));
      }
      local_8 = local_8 + 1;
      uVar4 = uVar4 + 0x58;
      uVar5 = uVar5 + 0x140;
    } while (uVar5 < 0x500);
  }
  return uVar4;
}

/* ref: FUN_00b08c50 */
uint F_00b08c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb08c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*(char *)((int)this + 800) == '\x02') && (*(int *)((int)this + 0x314) != 0)) {
    cVar1 = *(char *)((int)this + 0x2f9);
    uVar2 = *param_1;
    *(undefined4 *)((int)this + 0x2f9) = uVar2;
    if (cVar1 != (char)uVar2) {
      REFG(undefined4, 0x14a458f) = 1;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x2f9) = *param_1;
  }
  uVar3 = REFG(undefined4, 0x14c0cf8);
  if (*(undefined * PTR32 *)(REFG(undefined4, 0x14c0cf8) + 0x21c) == this) {
    uVar3 = F_00b08b80(this);
    F_00a69750(&REFG(undefined4, 0x14b11f8));
  }
  return uVar3;
}

/* ref: FUN_00b08cb0 */
uint F_00b08cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb08cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  undefined1 * puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x14c0cf8) + 0x218);
  uVar2 = F_0042a990((int)this + 0x9c);
  F_006f7250(this_00,uVar2);
  iVar3 = *(int *)((int)this + 0x2e8);
  if (iVar3 == 0) {
    iVar3 = (int)this + 0x48;
  }
  uVar2 = F_0042a990(iVar3);
  F_0042e430((undefined *)((int)this_00 + 0x23c),uVar2);
  *(undefined4 *)((int)this_00 + 0x3c) = *(undefined4 *)((int)this + 0x30c);
  *(uint *)((int)this_00 + 0x310) = (uint)*(byte *)((int)this + 0x321);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  F_00ab3e10(3,((undefined1 *)(gen_frame + 0x4)));
  puVar1 = *(undefined1 * PTR32 *)((int)this_00 + 0x2f8);
  *(undefined4 *)(puVar1 + 4) = 5;
  F_0042ccf0(puVar1 + 8,((undefined1 *)(gen_frame + 0x4)));
  *puVar1 = 1;
  uVar2 = 0x140;
  iVar3 = (int)this + 0x350;
  do {
    if (*(char *)(iVar3 + 0x56) == '\0') {
      *((undefined1 *)GEN_TOP((uVar2 + *(int *)((int)this_00 + 0x2f8)))) = 0;
    }
    else {
      F_0042ccf0(((undefined *)GEN_TOP((uVar2 + 8 + *(int *)((int)this_00 + 0x2f8)))),iVar3);
      *((undefined1 *)GEN_TOP((uVar2 + *(int *)((int)this_00 + 0x2f8)))) = 1;
    }
    uVar2 = uVar2 + 0x140;
    iVar3 = iVar3 + 0x58;
  } while (uVar2 < 0x640);
  F_00b08b80(this);
  F_00a69750(&REFG(undefined4, 0x14b11f8));
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar4;
}

/* ref: FUN_00b08dc0 */
uint F_00b08dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb08dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  float * pfVar7;
  undefined * pvVar8;
  int * piVar9;
  bool bVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  
  if ((char)param_1 != *(char *)((int)this + 0x2f8)) {
    (*(float *)(gen_frame + 0x3c)) = 2.8026e-45;
    piVar9 = &REFG(undefined4, 0x14a31f4);
    do {
      if ((((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) - 2U < 0x158) && (iVar4 = piVar9[-1], iVar4 != 0)) &&
         (*(short *)(iVar4 + 0xe8) == *(short *)((int)this + 0x18))) {
        if ((*(int *)((int)this + 0x10) == -0x20000000) ||
           (*(int *)((int)this + 0x10) != *(int *)(iVar4 + 0x74))) {
          if ((*(int *)((int)this + 0x14) != -0x20000000) &&
             (*(int *)((int)this + 0x14) == *(int *)(iVar4 + 0x74))) {
            *(byte *)(iVar4 + 0x8f) = *(byte *)(iVar4 + 0x8f) | 4;
          }
        }
        else {
          *(byte *)(iVar4 + 0x8f) = *(byte *)(iVar4 + 0x8f) | 4;
        }
      }
      if (((((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) - 1U < 0x158) && (iVar4 = *piVar9, iVar4 != 0)) &&
          (*(short *)(iVar4 + 0xe8) == *(short *)((int)this + 0x18))) &&
         (((*(int *)((int)this + 0x10) != -0x20000000 &&
           (*(int *)((int)this + 0x10) == *(int *)(iVar4 + 0x74))) ||
          ((*(int *)((int)this + 0x14) != -0x20000000 &&
           (*(int *)((int)this + 0x14) == *(int *)(iVar4 + 0x74))))))) {
        *(byte *)(iVar4 + 0x8f) = *(byte *)(iVar4 + 0x8f) | 4;
      }
      if (((((uint)gen_fl2bits((*(float *)(gen_frame + 0x3c))) < 0x158) && (iVar4 = piVar9[1], iVar4 != 0)) &&
          (*(short *)(iVar4 + 0xe8) == *(short *)((int)this + 0x18))) &&
         (((*(int *)((int)this + 0x10) != -0x20000000 &&
           (*(int *)((int)this + 0x10) == *(int *)(iVar4 + 0x74))) ||
          ((*(int *)((int)this + 0x14) != -0x20000000 &&
           (*(int *)((int)this + 0x14) == *(int *)(iVar4 + 0x74))))))) {
        *(byte *)(iVar4 + 0x8f) = *(byte *)(iVar4 + 0x8f) | 4;
      }
      if (((((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 1U < 0x158) && (iVar4 = piVar9[2], iVar4 != 0)) &&
          (*(short *)(iVar4 + 0xe8) == *(short *)((int)this + 0x18))) &&
         (((*(int *)((int)this + 0x10) != -0x20000000 &&
           (*(int *)((int)this + 0x10) == *(int *)(iVar4 + 0x74))) ||
          ((*(int *)((int)this + 0x14) != -0x20000000 &&
           (*(int *)((int)this + 0x14) == *(int *)(iVar4 + 0x74))))))) {
        *(byte *)(iVar4 + 0x8f) = *(byte *)(iVar4 + 0x8f) | 4;
      }
      uVar6 = (int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 2;
      piVar9 = piVar9 + 4;
      (*(float *)(gen_frame + 0x3c)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 4);
    } while (uVar6 < 0x158);
  }
  *(char *)((int)this + 0x2f8) = (char)param_1;
  if ((((char)param_1 == '\b') && (**(char * PTR32 *)((int)this + 0x144) != '\0')) &&
     (*(int *)((int)this + 0x2e8) = (int)this + 0x144, *((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) == this
     )) {
    iVar4 = *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x218)));
    uVar6 = F_0042a990((int)this + 0x144);
    F_0042e430((undefined *)(iVar4 + 0x23c),uVar6);
    F_00a69750(&REFG(undefined4, 0x14b11f8));
  }
  cVar3 = *(char *)((int)this + 0x2f8);
  if (cVar3 == '\x02') {
    bVar5 = F_00b08260(this,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x0)));
    if ((bVar5 != 0) && (REFG(void * PTR32, 0x1379694) != (undefined *)0x0)) {
      pfVar7 = (float *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar7 - (float10)(*(float *)(gen_frame + 0x10)));
      (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar7[1] - (float10)(*(float *)(gen_frame + 0x14)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar7[2] - (float10)(*(float *)(gen_frame + 0x18)));
      fVar12 = (float10)(float)((float10)pfVar7[2] - (float10)(*(float *)(gen_frame + 0x18)));
      fVar13 = (float10)(float)((float10)*pfVar7 - (float10)(*(float *)(gen_frame + 0x10)));
      fVar1 = (float)(fVar13 * fVar13 + fVar12 * fVar12);
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x3c)) = fVar2;
      if ((float10)fVar1 < (float10)fVar2) {
        fVar1 = ((float)GEN_TOF(ABS((float10)(float)((float10)pfVar7[1] - (float10)(*(float *)(gen_frame + 0x14))))));
        (*(float *)(gen_frame + 0x3c)) = fVar1;
        fVar12 = (float10)fVar1;
        fVar13 = (float10)(*(float *)(gen_frame + 0x4));
        bVar11 = (GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12;
        bVar10 = !(fVar12 <= fVar13);
        goto LAB_00b09027;
      }
      goto LAB_00b09029;
    }
  }
  else {
    bVar10 = cVar3 == '\x06';
    bVar11 = cVar3 == '\a';
LAB_00b09027: ;
    if (bVar10 || bVar11) {
LAB_00b09029: ;
      if (REFG(short, 0x14ab148) != 0) {
        F_00a51200(0x58,(uint)*(ushort *)((int)this + 0x18),0,0,0);
      }
    }
  }
  if (*(byte *)((int)this + 0x2f8) == 4) {
    pvVar8 = (undefined *)0x0;
    if ((*(byte *)((int)this + 0x1c) & 1) == 0) goto LAB_00b0909a;
    bVar5 = *(byte *)((int)this + 0x324);
  }
  else {
    pvVar8 = ((undefined *)GEN_TOP((*(byte *)((int)this + 0x2f8) - 5)));
    if ((pvVar8 != (undefined *)0x0) || ((*(byte *)((int)this + 0x1c) & 1) == 0)) goto LAB_00b0909a;
    bVar5 = *(byte *)((int)this + 0x325);
  }
  if (((bVar5 != 0) && (pvVar8 = REFG(void * PTR32, 0x1379694), REFG(void * PTR32, 0x1379694) != (undefined *)0x0)) &&
     (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0x18a))) != '\x10')) {
    F_006b8c00();
    pvVar8 = (undefined *)F_006c6500((uint)bVar5);
  }
LAB_00b0909a: ;
  if ((*(uint *)((int)this + 0x1c) >> 7 & 1) != 0) {
    if (*(byte *)((int)this + 0x2f8) == 2) {
      return 0;
    }
    pvVar8 = ((undefined *)GEN_TOP((*(byte *)((int)this + 0x2f8) - 8)));
    if (pvVar8 == (undefined *)0x0) {
      return 0;
    }
  }
  if ((*(byte *)((int)this + 0x1c) & 1) != 0) {
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffffe;
    pvVar8 = REFG(void * PTR32, 0x14c0cf8);
    *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x232))) = *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x232))) + -1;
  }
  return (uint)pvVar8;
}

/* ref: FUN_00b090e0 */
unsigned int F_00b090e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb090e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if (param_3 == 0xb3) {
        F_00b08980(this,*((undefined4 *)GEN_TOP((*(int *)(param_1 + uVar1 * 4) + 4))));
        *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 0x80;
        F_00a51200(0x55,(uint)*(ushort *)((int)this + 0x18),0,0,0);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00b09140 */
uint F_00b09140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb09140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c4d027((undefined *)((int)this + 0x2fd),0xd,param_1,0xd);
  if (*(undefined * PTR32 *)(REFG(int, 0x14c0cf8) + 0x21c) == this) {
    uVar1 = F_00b08b80(this);
    F_00a69750(&REFG(undefined4, 0x14b11f8));
  }
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf122 */
uint F_00b09190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb09190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar1 = F_00b083c0(REFG(void * PTR32, 0x14c0cf8),param_1,param_2);
  if (uVar1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0xc);
    uVar3 = uVar1;
    do {
      *puVar2 = **(undefined4 * PTR32 *)(this + 0x1d4);
      puVar2 = puVar2 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf112 */
uint F_00b091d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb091d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(REFG(int, 0x14c0cf8) + 0x220);
  while( true ) {
    if (puVar1 == *(undefined4 * PTR32 *)(REFG(int, 0x14c0cf8) + 0x224)) {
      return 0;
    }
    if (*(short *)((int)*puVar1 + 0x18) == *(short *)(param_1 + 0xe8)) break;
    puVar1 = puVar1 + 1;
  }
  uVar2 = F_00b07670((undefined *)*puVar1,param_1);
  return uVar2;
}

/* ref: FUN_00b09220 */
uint F_00b09220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb09220u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(REFG(int, 0x14c0cf8) + 0x220);
  if (puVar1 != *(undefined4 * PTR32 *)(REFG(int, 0x14c0cf8) + 0x224)) {
    while (*(short *)((int)*puVar1 + 0x18) != (short)param_1) {
      puVar1 = puVar1 + 1;
      if (puVar1 == *(undefined4 * PTR32 *)(REFG(int, 0x14c0cf8) + 0x224)) {
        return (uint)puVar1;
      }
    }
    puVar1 = (undefined4 *)F_00b07fe0((undefined *)*puVar1,param_2);
  }
  return (uint)puVar1;
}

/* ref: FUN_00b09260 */
uint F_00b09260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb09260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(REFG(int, 0x14c0cf8) + 0x220);
  if (puVar1 != *(undefined4 * PTR32 *)(REFG(int, 0x14c0cf8) + 0x224)) {
    while (*(short *)((int)*puVar1 + 0x18) != (short)param_1) {
      puVar1 = puVar1 + 1;
      if (puVar1 == *(undefined4 * PTR32 *)(REFG(int, 0x14c0cf8) + 0x224)) {
        return (uint)puVar1;
      }
    }
    puVar1 = (undefined4 *)F_00b080e0((undefined *)*puVar1,param_2);
  }
  return (uint)puVar1;
}

/* ref: FUN_00b092a0 */
uint F_00b092a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb092a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x220);
  if (puVar1 != *(undefined4 * PTR32 *)((int)this + 0x224)) {
    while (*(short *)((int)*puVar1 + 0x18) != (short)param_1) {
      puVar1 = puVar1 + 1;
      if (puVar1 == *(undefined4 * PTR32 *)((int)this + 0x224)) {
        return (uint)puVar1;
      }
    }
    puVar1 = (undefined4 *)F_00b08dc0((undefined *)*puVar1,param_2);
  }
  return (uint)puVar1;
}

/* ref: FUN_00b092e0 */
uint F_00b092e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb092e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short sVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  sVar1 = *(short *)(param_1 + 0xe8);
  if ((sVar1 != 0) && (uVar3 = F_00a62220(param_1), (char)uVar3 != '\0')) {
    for (piVar4 = *(int * PTR32 *)((int)this + 0x220); piVar4 != *(int * PTR32 *)((int)this + 0x224);
        piVar4 = piVar4 + 1) {
      iVar2 = *piVar4;
      if (*(short *)(iVar2 + 0x18) == sVar1) {
        if ((*(uint *)(iVar2 + 0x1c) >> 7 & 1) == 0) {
          return 0;
        }
        if ((*(char *)(iVar2 + 0x2f8) != '\x02') && (*(char *)(iVar2 + 0x2f8) != '\b')) {
          return 0;
        }
        return 0xf05a;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b09350 */
uint F_00b09350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb09350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  
  *(undefined * PTR32 *)((int)this + 0x21c) = param_1;
  if (param_1 != (undefined *)0x0) {
    F_00b08cb0(param_1);
    uVar1 = *(uint *)((int)this + 0x218);
    if (REFG(undefined4, 0x14b11f8) == uVar1) {
      uVar1 = F_00a79840(&REFG(undefined4, 0x14b11f8),uVar1);
    }
    F_00a69770(&REFG(undefined4, 0x14b11f8));
    return uVar1;
  }
  F_00a69780(&REFG(undefined4, 0x14b11f8));
  return in_EAX;
}

/* ref: FUN_00b093a0 */
uint F_00b093a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb093a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x220);
  if (puVar1 != *(undefined4 * PTR32 *)((int)this + 0x224)) {
    while (*(short *)((int)*puVar1 + 0x18) != (short)param_1) {
      puVar1 = puVar1 + 1;
      if (puVar1 == *(undefined4 * PTR32 *)((int)this + 0x224)) {
        return (uint)puVar1;
      }
    }
    puVar1 = (undefined4 *)F_00b08c50((undefined *)*puVar1,param_2);
  }
  return (uint)puVar1;
}

/* ref: FUN_00b093e0 */
uint F_00b093e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb093e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * this_00;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x220);
  if (puVar1 != *(undefined4 * PTR32 *)((int)this + 0x224)) {
    while (this_00 = (undefined *)*puVar1, *(short *)((int)this_00 + 0x18) != (short)param_1) {
      puVar1 = puVar1 + 1;
      if (puVar1 == *(undefined4 * PTR32 *)((int)this + 0x224)) {
        return (uint)puVar1;
      }
    }
    puVar1 = (undefined4 *)F_00c4d027((undefined *)((int)this_00 + 0x2fd),0xd,param_2,0xd);
    if (*(undefined * PTR32 *)(REFG(int, 0x14c0cf8) + 0x21c) == this_00) {
      puVar1 = (undefined4 *)F_00b08b80(this_00);
      F_00a69750(&REFG(undefined4, 0x14b11f8));
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_00b09450 */
uint F_00b09450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb09450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  puVar2 = *(uint * PTR32 *)((int)this + 0x220);
  if (puVar2 != *(uint * PTR32 *)((int)this + 0x224)) {
    do {
      uVar1 = *puVar2;
      if (*(short *)(uVar1 + 0x18) == (short)param_1) {
        if (*(uint *)((int)this + 0x21c) == uVar1) {
          *(undefined4 *)((int)this + 0x21c) = 0;
          F_00a69780(&REFG(undefined4, 0x14b11f8));
        }
        F_00c46e20(puVar2,puVar2 + 1,(*(int *)((int)this + 0x224) - (int)(puVar2 + 1) >> 2) * 4);
        *(int *)((int)this + 0x224) = *(int *)((int)this + 0x224) + -4;
        return uVar1;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(uint * PTR32 *)((int)this + 0x224));
  }
  return 0;
}

/* ref: FUN_00b094e0 */
uint F_00b094e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb094e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ecff8));
  if (((*(char *)((int)this + 800) == '\x02') && (*(int *)((int)this + 0x314) != 0)) &&
     (*(char *)((int)this + 0x2f9) != '\0')) {
    *(undefined4 *)((int)this + 0x2f9) = 0;
    REFG(undefined4, 0x14a458f) = 1;
  }
  if ((*(byte *)((int)this + 0x1c) & 1) != 0) {
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffffe;
    if (REFG(int, 0x14c0cf8) != 0) {
      *(char *)(REFG(int, 0x14c0cf8) + 0x232) = *(char *)(REFG(int, 0x14c0cf8) + 0x232) + -1;
    }
  }
  if (*(int *)((int)this + 0x4b4) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x4b0);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x4b4));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x4b4);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x4b4) = 0;
    }
  }
  if ((*(uint *)((int)this + 0x1c) >> 4 & 1) != 0) {
    F_00ab6920();
  }
  iVar3 = 3;
  pvVar4 = (undefined *)((int)this + 0x738);
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x9c);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar4 = (undefined *)((int)this + 0x4b0);
  iVar3 = 3;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x58);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar4 = (undefined *)((int)this + 0x2e8);
  iVar3 = 7;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x54);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00b0e900((undefined *)((int)this + 0x30));
  uVar5 = F_00429760(*(undefined4 *)((int)this + 0x30),8,0x321);
  *(undefined4 *)((int)this + 0x30) = 0;
  return (uint)uVar5;
}

/* ref: FUN_00b09600 */
uint F_00b09600(unsigned int gen_a0)
{
  GEN_ENTER(0xb09600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  
  *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xffffffdf;
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb3);
  *(uint *)((int)this + 0x4b0) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0xb3);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10ecd64));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xb090e0));
  }
  *(undefined4 * PTR32 *)((int)this + 0x4b4) = this_00;
  F_00cb4540(this_00,0,(uint)*(ushort *)((int)this + 0x18));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4b0) + 0x48))))
            (*(int * PTR32 *)((int)this + 0x4b0),*(undefined4 *)((int)this + 0x4b4));
  *(undefined4 *)((int)this + 0x10) = 0xe0000000;
  *(undefined4 *)((int)this + 0x14) = 0xe0000000;
  return 0xe0000000;
}

/* ref: FUN_00b096a0 */
byte F_00b096a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb096a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)));
  uVar1 = F_00b0f140(((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),0,
                       *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),0,iVar2,
                       &(*(undefined4 *)&gen_args[1]));
  return *(int *)(uVar1 + 8) != iVar2;
}

/* ref: FUN_00b09710 */
uint F_00b09710(unsigned int gen_a0)
{
  GEN_ENTER(0xb09710u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00b09450(REFG(void * PTR32, 0x14c0cf8),param_1);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  return uVar2;
}

/* ref: FUN_00b09740 */
byte F_00b09740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb09740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  
  piVar6 = *(int * PTR32 *)((int)this + 0x220);
  do {
    if (piVar6 == *(int * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
    iVar2 = *piVar6;
    uVar4 = *(uint *)(iVar2 + 0x3c);
    piVar1 = *(int * PTR32 *)(iVar2 + 0x30);
    uVar5 = *(int *)(iVar2 + 0x40) + uVar4;
    if ((((piVar1 == (int *)0x0) || (piVar1 == (int *)0x0)) || ((int *)*piVar1 == (int *)0x0)) ||
       (piVar1 = *(int * PTR32 *)*piVar1, piVar1 == (int *)0x0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if (uVar4 != uVar5) {
      do {
        uVar3 = uVar4 >> 2;
        if (*(uint *)(iVar2 + 8) <= uVar3) {
          uVar3 = uVar3 - *(uint *)(iVar2 + 8);
        }
      } while ((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar3 * 4))) + (uVar4 & 3) * 4))) != param_1) &&
              (uVar4 = uVar4 + 1, uVar4 != uVar5));
      if (uVar4 != uVar5) {
        return 1;
      }
    }
    piVar6 = piVar6 + 1;
  } while( true );
}

/* ref: FUN_00b097f0 */
uint F_00b097f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb097f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  ulonglong uVar6;
  
  piVar5 = *(int * PTR32 *)((int)this + 4);
  if (piVar5 != *(int * PTR32 *)((int)this + 8)) {
    do {
      if (*piVar5 != 0) {
        piVar1 = *(int * PTR32 *)this;
        if (piVar1 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*piVar5);
        }
        puVar2 = (undefined4 *)*piVar5;
        if (puVar2 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
          *piVar5 = 0;
        }
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != *(int * PTR32 *)((int)this + 8));
  }
  iVar3 = *(int *)((int)this + 4);
  if (iVar3 != *(int *)((int)this + 8)) {
    F_00c46e20(iVar3,*(int *)((int)this + 8),0);
    *(int *)((int)this + 8) = iVar3;
  }
  piVar5 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar5 != *(int * PTR32 *)((int)this + 0x18)) {
    do {
      if (*piVar5 != 0) {
        piVar1 = *(int * PTR32 *)this;
        if (piVar1 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*piVar5);
        }
        puVar2 = (undefined4 *)*piVar5;
        if (puVar2 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
          *piVar5 = 0;
        }
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x18));
  }
  iVar3 = *(int *)((int)this + 0x14);
  if (iVar3 != *(int *)((int)this + 0x18)) {
    F_00c46e20(iVar3,*(int *)((int)this + 0x18),0);
    *(int *)((int)this + 0x18) = iVar3;
  }
  iVar3 = *(int *)((int)this + 0x14);
  if (iVar3 != 0) {
    F_00429760(iVar3,(*(int *)((int)this + 0x1c) - iVar3 >> 2) * 4,0x321);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  iVar3 = *(int *)((int)this + 4);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar6 = F_00429760(iVar3,(*(int *)((int)this + 0xc) - iVar3 >> 2) * 4,0x321);
    uVar4 = (uint)uVar6;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar4;
}

/* ref: FUN_00b09920 */
uint F_00b09920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb09920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ecff8));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x18) = (undefined2)param_1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  puVar3 = (undefined4 *)((int)this + 0x30);
  *puVar3 = 0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x321);
  *puVar3 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar3 = puVar3;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  iVar2 = (int)this + 0x48;
  param_1 = 7;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x54;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  *(undefined4 *)((int)this + 0x2e8) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined1 *)((int)this + 0x2f8) = 0;
  *(undefined4 *)((int)this + 0x30c) = 0;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined4 *)((int)this + 800) = 0;
  *(undefined1 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x340) = 0xe0000000;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  iVar2 = (int)this + 0x350;
  param_1 = 3;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x58;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  *(undefined4 *)((int)this + 0x4b0) = 0;
  *(undefined4 *)((int)this + 0x4b4) = 0;
  puVar3 = (undefined4 *)((int)this + 0x4b8);
  param_1 = 3;
  do {
    *puVar3 = 0;
    puVar3[1] = 0xe0000000;
    puVar3[2] = 0;
    F_0042b630(puVar3 + 4);
    F_00a6a7a0(puVar3 + 0x19,0,0);
    *(undefined1 *)(puVar3 + 0x26) = 0;
    puVar3 = puVar3 + 0x27;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  *(undefined4 *)((int)this + 0x2f9) = 0;
  *(undefined4 *)((int)this + 0x2fd) = 0;
  *(undefined4 *)((int)this + 0x301) = 0;
  *(undefined4 *)((int)this + 0x305) = 0;
  *(undefined1 *)((int)this + 0x309) = 0;
  return (uint)this;
}

/* ref: FUN_00b09ab0 */
byte F_00b09ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb09ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 800) != '\x02') {
    return 1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (((1 < (int)uVar2) && (3 < (int)uVar2)) && (uVar2 == 7)) {
    bVar1 = F_00b096a0(this,param_1[0x1d]);
    return bVar1 == 0;
  }
  return 1;
}

/* ref: FUN_00b09b10 */
byte F_00b09b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb09b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if ((short)param_1[0x3a] == 0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x220);
    if (puVar3 != *(undefined4 * PTR32 *)((int)this + 0x224)) {
      while ((((this_00 = (undefined *)*puVar3, *(char *)((int)this_00 + 800) != '\x02' ||
               (uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), (int)uVar2 < 2)) || ((int)uVar2 < 4))
             || ((uVar2 != 7 || (bVar1 = F_00b096a0(this_00,param_1[0x1d]), bVar1 == 0))))) {
        puVar3 = puVar3 + 1;
        if (puVar3 == *(undefined4 * PTR32 *)((int)this + 0x224)) {
          return 1;
        }
      }
      return 0;
    }
  }
  else {
    for (puVar3 = *(undefined4 * PTR32 *)((int)this + 0x220); puVar3 != *(undefined4 * PTR32 *)((int)this + 0x224)
        ; puVar3 = puVar3 + 1) {
      if (*(short *)((int)*puVar3 + 0x18) == (short)param_1[0x3a]) {
        bVar1 = F_00b09ab0((undefined *)*puVar3,param_1);
        return bVar1;
      }
    }
  }
  return 1;
}

/* ref: FUN_00b09be0 */
uint F_00b09be0(unsigned int gen_a0)
{
  GEN_ENTER(0xb09be0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * pvVar1;
  
  pvVar1 = (undefined *)F_00406b90(0x730,0,0);
  if (pvVar1 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_00b09920(pvVar1,param_1);
    F_00b09600(pvVar1);
    return (uint)pvVar1;
  }
  F_00b09600((undefined *)0x0);
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf116 */
byte F_00b09c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb09c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00b09b10(REFG(void * PTR32, 0x14c0cf8),param_1);
  return bVar1;
}

/* ref: FUN_00b09c30 */
uint F_00b09c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb09c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)this;
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar3 != piVar1) {
    while (piVar2 = piVar3, *piVar3 != param_1) {
      piVar3 = piVar3 + 2;
      if (piVar3 == piVar1) {
        return (uint)piVar3;
      }
    }
    while (piVar3 = piVar3 + 2, piVar3 != piVar1) {
      *piVar2 = *piVar3;
      piVar2[1] = piVar3[1];
      piVar2 = piVar2 + 2;
    }
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -8;
  }
  return (uint)piVar3;
}

/* ref: FUN_00b09cd0 */
uint F_00b09cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb09cd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40)));
  uVar1 = F_00b0f4a0(((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),0,
                       *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),0,iVar3,
                       &(*(uint *)&gen_args[1]));
  if (*(int *)(uVar1 + 8) == iVar3) {
    if (2 < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40)))) {
      piVar2 = (int *)F_00b0f700(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))));
      if (*piVar2 == -0x20000000) {
        uVar1 = 0;
      }
      else {
        uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*piVar2,0);
      }
      if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) != 0) &&
         (iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) + -1, *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = iVar3, iVar3 == 0))
      {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
      }
      if (uVar1 != 0) {
        *(byte *)(uVar1 + 0x8f) = *(byte *)(uVar1 + 0x8f) | 8;
      }
    }
    F_00b0fbe0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(uint *)&gen_args[1]));
    uVar1 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != 0xe0000000) {
      uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0),(*(uint *)&gen_args[1]),0);
      if (uVar1 != 0) {
        *(byte *)(uVar1 + 0x8f) = *(byte *)(uVar1 + 0x8f) | 8;
      }
    }
  }
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf45 */
unsigned int F_00b09da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb09da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar2 = ((int *)GEN_TOP(REFG(int * PTR32, 0x14c0cf8)[1]));
  piVar4 = ((int *)GEN_TOP(*REFG(int * PTR32, 0x14c0cf8)));
  piVar1 = REFG(int * PTR32, 0x14c0cf8) + 1;
  if (piVar4 != piVar2) {
    while (piVar3 = piVar4, *piVar4 != *(int *)(param_1 + 0x74)) {
      piVar4 = piVar4 + 2;
      if (piVar4 == piVar2) {
        return 0;
      }
    }
    while (piVar3 = piVar3 + 2, piVar3 != piVar2) {
      *piVar4 = *piVar3;
      piVar4[1] = piVar3[1];
      piVar4 = piVar4 + 2;
    }
    *piVar1 = *piVar1 + -8;
  }
  return 0;
}

/* ref: FUN_00b09e00 */
uint F_00b09e00(unsigned int gen_a0)
{
  GEN_ENTER(0xb09e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  F_00b0fab0((undefined4 *)((int)this + 0x14),0x20);
  F_00b0fab0((undefined *)((int)this + 0x24),0x20);
  F_00c48350((undefined *)((int)this + 0x34),0,0x180);
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  F_0042b630((int)this + 0x1c4);
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined2 *)((int)this + 0x230) = 0;
  *(undefined1 *)((int)this + 0x232) = 0;
  F_00b100f0((undefined *)((int)this + 0x1b4),8);
  return (uint)this;
}

/* ref: FUN_00b09eb0 */
uint F_00b09eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb09eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  ulonglong uVar6;
  
  piVar5 = *(int * PTR32 *)((int)this + 0x220);
  if (piVar5 != *(int * PTR32 *)((int)this + 0x224)) {
    do {
      puVar3 = (undefined4 *)*piVar5;
      if (puVar3 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x224));
  }
  iVar1 = *(int *)((int)this + 0x220);
  if (iVar1 != *(int *)((int)this + 0x224)) {
    F_00c46e20(iVar1,*(int *)((int)this + 0x224),0);
    *(int *)((int)this + 0x224) = iVar1;
  }
  iVar1 = *(int *)((int)this + 0x220);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x228) - iVar1 >> 2) * 4,0x321);
  }
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  F_0042c880((undefined *)((int)this + 0x1c4));
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x1b4);
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1b8);
    for (; puVar3 != puVar2; puVar3 = puVar3 + 0x12) {
      *puVar3 = 0xe0000000;
    }
    F_00429760(*(int *)((int)this + 0x1b4),
                 ((*(int *)((int)this + 0x1bc) - *(int *)((int)this + 0x1b4)) / 0x48) * 0x48,0x321);
  }
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  F_00b097f0((undefined *)((int)this + 0x10));
  iVar1 = *(int *)this;
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar6 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0x321);
    uVar4 = (uint)uVar6;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00b0a000 */
uint F_00b0a000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0a000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)this; piVar1 != *(int * PTR32 *)((int)this + 4); piVar1 = piVar1 + 2) {
    if (*piVar1 == param_1) goto LAB_00b0a036;
  }
  ((int *)(gen_frame + 0x4))[0] = param_1;
  F_00b10060(this,((int *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 4) + -8)));
  if (piVar1 != (int *)0x0) {
LAB_00b0a036: ;
    *(undefined1 *)(piVar1 + 1) = (undefined1)param_2;
  }
  return (uint)piVar1;
}

/* ref: FUN_00b0a050 */
uint F_00b0a050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0a050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x220);
  if (puVar1 != *(undefined4 * PTR32 *)((int)this + 0x224)) {
    while (*(short *)((int)*puVar1 + 0x18) != (short)param_1) {
      puVar1 = puVar1 + 1;
      if (puVar1 == *(undefined4 * PTR32 *)((int)this + 0x224)) {
        return (uint)puVar1;
      }
    }
    puVar1 = (undefined4 *)F_00b09cd0((undefined *)*puVar1,param_2);
  }
  return (uint)puVar1;
}

/* ref: FUN_00b0a090 */
uint F_00b0a090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb0a090u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  
  uVar6 = 0;
  if ((*(uint *)&gen_args[2]) != 0) {
    do {
      if ((*(int *)&gen_args[3]) == 0xc3) {
        F_00b07950(*(undefined4 *)((*(int *)&gen_args[4]) + 0x1c),(*(int *)&gen_args[4]) + 0x20,
                     *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + uVar6 * 4) + 4))));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (*(uint *)&gen_args[2]));
  }
  for (piVar5 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      (piVar5 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) && (*piVar5 != (*(int *)&gen_args[4]))); piVar5 = piVar5 + 1) {
  }
  F_00c46e20(piVar5,piVar5 + 1,(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - (int)(piVar5 + 1) >> 2) * 4);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -4;
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
  if ((&(*(int *)&gen_args[4]) < puVar1) && (puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))), puVar2 <= &(*(int *)&gen_args[4]))) {
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)))) {
      iVar3 = (int)puVar1 - (int)((int)(uintptr_t)puVar2) >> 2;
      if (iVar3 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar3 + 1;
      uVar6 = (int)*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) - (int)((int)(uintptr_t)puVar2) >> 2;
      if (uVar6 < uVar4) {
        if (-(uVar6 >> 1) - 1 < uVar6) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar6 + (uVar6 >> 1);
        }
        if (uVar6 < uVar4) {
          uVar6 = uVar4;
        }
        F_00b0fab0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),uVar6);
      }
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
    piVar5 = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) + ((int)&(*(int *)&gen_args[4]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)))
      ;
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 4;
      return (uint)puVar1;
    }
  }
  else {
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)))) {
      iVar3 = (int)puVar1 - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) >> 2;
      if (iVar3 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar4 = iVar3 + 1;
      uVar6 = (int)*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) >> 2;
      if (uVar6 < uVar4) {
        if (-(uVar6 >> 1) - 1 < uVar6) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar6 + (uVar6 >> 1);
        }
        if (uVar6 < uVar4) {
          uVar6 = uVar4;
        }
        F_00b0fab0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),uVar6);
      }
    }
    piVar5 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
    if (piVar5 != (int *)0x0) {
      *piVar5 = (*(int *)&gen_args[4]);
    }
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 4;
  return (uint)piVar5;
}

/* ref: FUN_00b0a1e0 */
unsigned int F_00b0a1e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0a1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  int * piVar3;
  int iVar4;
  undefined4 * PTR32 * ppuVar5;
  undefined4 * PTR32 * ppuVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  
  piVar7 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar7 != *(int * PTR32 *)((int)this + 0x18)) {
    do {
      if (*piVar7 != 0) {
        piVar3 = *(int * PTR32 *)this;
        if (piVar3 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,*piVar7);
        }
        puVar9 = (undefined4 *)*piVar7;
        if (puVar9 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar9)(puVar9,1);
          *piVar7 = 0;
        }
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != *(int * PTR32 *)((int)this + 0x18));
  }
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  iVar4 = *(int *)((int)this + 0x14);
  if (iVar4 != *(int *)((int)this + 0x18)) {
    F_00c46e20(iVar4,*(int *)((int)this + 0x18),0);
    *(int *)((int)this + 0x18) = iVar4;
  }
  (*(uint *)(gen_frame + 0x4)) = 0x24;
  do {
    if (*(int *)((*(uint *)(gen_frame + 0x4)) + 4 + (int)this) != 0) {
      if (*(int *)((*(uint *)(gen_frame + 0x4)) + (int)this) != -0x20000000) {
        piVar7 = (int *)F_00a35490(&REFG(undefined4, 0x14a31f0),*(int *)((*(uint *)(gen_frame + 0x4)) + (int)this));
        if (piVar7 != (int *)0x0) {
          uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0x68))(piVar7);
          if ((char)uVar8 != '\0') {
            if (*(int *)this == 0) {
              uVar8 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xc3);
              *(uint *)this = uVar8;
            }
            puVar9 = (undefined4 *)F_00406b90(0x74,0,0);
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              F_00cb4700(puVar9,1,0xc3);
              puVar9[5] = 1;
              puVar9[6] = this;
              *puVar9 = (*(undefined * PTR32 (*)[2])REFP(0x10ecd70));
              F_0042b630(puVar9 + 8);
            }
            ppuVar5 = *(undefined4 * PTR32 * PTR32 *)((int)this + 8);
            (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar9;
            if (&(*(undefined4 * PTR32 *)(gen_frame + 0x8)) < ppuVar5) {
              ppuVar6 = *(undefined4 * PTR32 * PTR32 *)((int)this + 4);
              if (&(*(undefined4 * PTR32 *)(gen_frame + 0x8)) < ppuVar6) goto LAB_00b0a34d;
              if (ppuVar5 == *(undefined4 * PTR32 * PTR32 *)((int)this + 0xc)) {
                F_00b0fd10((undefined *)((int)this + 4),1);
              }
              if (*(undefined4 * PTR32 *)((int)this + 8) != (undefined4 *)0x0) {
                **(undefined4 * PTR32 *)((int)this + 8) =
                     *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + ((int)&(*(undefined4 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppuVar6) >> 2) * 4)));
              }
            }
            else {
LAB_00b0a34d: ;
              if (ppuVar5 == *(undefined4 * PTR32 * PTR32 *)((int)this + 0xc)) {
                F_00b0fd10((undefined *)((int)this + 4),1);
              }
              if (*(undefined4 * PTR32 *)((int)this + 8) != (undefined4 *)0x0) {
                **(undefined4 * PTR32 *)((int)this + 8) = puVar9;
              }
            }
            *(int *)((int)this + 8) = *(int *)((int)this + 8) + 4;
            puVar9[7] = *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + (int)this);
            uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7);
            F_0042e430(puVar9 + 8,uVar8);
            F_00cb4540(puVar9,0,*(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 4 + (int)this));
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x48))))(*(int * PTR32 *)this,puVar9);
            *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 4 + (int)this) = 0;
            goto LAB_00b0a3d0;
          }
        }
      }
      fVar2 = ((float)GEN_TOF(((float10)fVar1 + (float10)*(float *)((*(uint *)(gen_frame + 0x4)) + 8 + (int)this))));
      *(float *)((*(uint *)(gen_frame + 0x4)) + 8 + (int)this) = fVar2;
      if ((float10)*(float *)&REFG(undefined, 0x10ecd14) <= (float10)fVar2) {
        *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 4 + (int)this) = 0;
      }
    }
LAB_00b0a3d0: ;
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 0xc;
    if (0x1a3 < (*(uint *)(gen_frame + 0x4))) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b0a3f0 */
unsigned int F_00b0a3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0a3f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  byte * pbVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint * this_00;
  int iVar5;
  uint uVar6;
  uint local_8;
  
  this_00 = (*(uint * PTR32 *)&gen_args[1]);
  uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) >> 7;
  if (((uVar6 & 1) == 0) ||
     ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2f8))) != '\x02' && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2f8))) != '\b')))) {
    if (((uVar6 & 1) != 0) && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2f8))) == '\a')) {
      *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x684))) = *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
      iVar1 = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x654;
      *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x686))) =
           *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x686))) ^
           ((char)(*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) >> 0xb) * '\x02' ^ *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x686)))) & 2;
      puVar3 = ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1]));
      if ((&(*(uint * PTR32 *)&gen_args[1]) < puVar3) && (puVar4 = ((undefined4 *)GEN_TOP(*(*(uint * PTR32 *)&gen_args[1]))), puVar4 <= &(*(uint * PTR32 *)&gen_args[1]))) {
        if (puVar3 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[2]))) {
          (*(uint * PTR32 *)&gen_args[1]) = (uint *)iVar1;
          F_00b0fe90(this_00,1);
        }
        if ((undefined4 *)this_00[1] != (undefined4 *)0x0) {
          *(undefined4 *)this_00[1] =
               *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint * PTR32 *)&gen_args[1]) - (int)((int)(uintptr_t)puVar4) >> 2) * 4)));
          this_00[1] = this_00[1] + 4;
          return 0;
        }
      }
      else {
        if (puVar3 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[2]))) {
          (*(uint * PTR32 *)&gen_args[1]) = (uint *)iVar1;
          F_00b0fe90(this_00,1);
        }
        if ((int *)this_00[1] != (int *)0x0) {
          *(int *)this_00[1] = iVar1;
        }
      }
      this_00[1] = this_00[1] + 4;
    }
    return 0;
  }
  local_8 = 0;
  do {
    iVar5 = *((int *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10ecffc) + local_8))) * 0x9c;
    *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar5 + 0x54c))) = *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
    iVar1 = (int)(*(undefined * PTR32 *)&gen_args[0]) + iVar5 + 0x51c;
    pbVar2 = ((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar5 + 0x54e)));
    *pbVar2 = *pbVar2 ^ ((char)(*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) >> 0xb) * '\x02' ^
                        *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar5 + 0x54e)))) & 2;
    puVar3 = (undefined4 *)this_00[1];
    (*(uint * PTR32 *)&gen_args[1]) = (uint *)iVar1;
    if (&(*(uint * PTR32 *)&gen_args[1]) < puVar3) {
      puVar4 = (undefined4 *)*this_00;
      if (&(*(uint * PTR32 *)&gen_args[1]) < puVar4) goto LAB_00b0a49d;
      if (puVar3 == (undefined4 *)this_00[2]) {
        F_00b0fe90(this_00,1);
      }
      if ((undefined4 *)this_00[1] != (undefined4 *)0x0) {
        *(undefined4 *)this_00[1] =
             *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint * PTR32 *)&gen_args[1]) - (int)((int)(uintptr_t)puVar4) >> 2) * 4)));
      }
    }
    else {
LAB_00b0a49d: ;
      if (puVar3 == (undefined4 *)this_00[2]) {
        F_00b0fe90(this_00,1);
      }
      if ((int *)this_00[1] != (int *)0x0) {
        *(int *)this_00[1] = iVar1;
      }
    }
    this_00[1] = this_00[1] + 4;
    local_8 = local_8 + 4;
    if (0xb < local_8) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b0a580 */
unsigned int F_00b0a580(void)
{
  GEN_ENTER(0xb0a580u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  if (REFG(undefined4, 0x14c0cf8) == 0) {
    this = (undefined *)F_00406b90(0x234,0,0);
    if (this != (undefined *)0x0) {
      uVar1 = F_00b09e00(this);
      REFG(undefined4, 0x14c0cf8) = uVar1;
      return 0;
    }
    REFG(undefined4, 0x14c0cf8) = 0;
  }
  return 0;
}

/* ref: FUN_00b0a830 */
uint F_00b0a830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0a830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  (*(int *)(gen_frame + 0xc)) = 0;
  F_00b0fc60(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = *(undefined4 * PTR32 *)((int)this + 0x220);
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != *(undefined4 * PTR32 *)((int)this + 0x224)) {
    do {
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
      this_00 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18));
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (*(undefined4 * PTR32 *)(gen_frame + 0x8))) {
        F_00c46e20((*(undefined4 * PTR32 *)(gen_frame + 0x4)),(*(undefined4 * PTR32 *)(gen_frame + 0x8)),0);
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar3;
      }
      F_00b0a3f0(this_00,&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (*(undefined4 * PTR32 *)(gen_frame + 0x8))) {
        do {
          puVar5 = (undefined4 *)*puVar3;
          if ((((puVar5 != (undefined4 *)0x0) && ((*(byte *)((int)puVar5 + 0x32) & 1) == 0)) &&
              (puVar5[2] != 0)) && (*(short *)(puVar5 + 8) == (short)param_1)) {
            puVar6 = (undefined4 *)param_2[1];
            if ((puVar5 < puVar6) && (puVar1 = (undefined4 *)*param_2, puVar1 <= puVar5)) {
              if (puVar6 == (undefined4 *)param_2[2]) {
                F_00969650(param_2,1);
              }
              puVar5 = ((undefined4 *)GEN_TOP(((((int)puVar5 - (int)puVar1) / 0x34) * 0x34 + *param_2)));
            }
            else if (puVar6 == (undefined4 *)param_2[2]) {
              F_00969650(param_2,1);
            }
            if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
              puVar6 = (undefined4 *)param_2[1];
              for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              }
            }
            param_2[1] = param_2[1] + 0x34;
          }
          puVar3 = puVar3 + 1;
        } while (puVar3 != (*(undefined4 * PTR32 *)(gen_frame + 0x8)));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 1;
    } while ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x224));
  }
  uVar2 = 0;
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0) {
    uVar7 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),((*(int *)(gen_frame + 0xc)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x4))) >> 2) * 4,0x321);
    uVar2 = (uint)uVar7;
  }
  return uVar2;
}

/* ref: FUN_00b0a980 */
uint F_00b0a980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0a980u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(int *)&gen_args[1]) != 0) {
    for (piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x220))); piVar1 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x224)));
        piVar1 = piVar1 + 1) {
      if (*(short *)(*piVar1 + 0x18) == *(short *)((*(int *)&gen_args[1]) + 0x18)) {
        return (uint)piVar1;
      }
    }
    uVar2 = F_00b10470(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x220))),&(*(int *)&gen_args[1]));
  }
  return uVar2;
}

/* ref: FUN_00b0a9d0 */
unsigned int F_00b0a9d0(void)
{
  GEN_ENTER(0xb0a9d0u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  
  pvVar1 = REFG(void * PTR32, 0x14c0cf8);
  if (REFG(void * PTR32, 0x14c0cf8) != (undefined *)0x0) {
    F_00b09eb0(REFG(void * PTR32, 0x14c0cf8));
    F_00406ad0(pvVar1);
    REFG(void * PTR32, 0x14c0cf8) = (undefined *)0x0;
  }
  return 0;
}

/* ref: FUN_00b0aa00 */
uint F_00b0aa00(unsigned int gen_a0)
{
  GEN_ENTER(0xb0aa00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  
  pvVar1 = (undefined *)F_00406b90(0x730,0,0);
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = (undefined *)F_00b09920(pvVar1,param_1);
  }
  uVar2 = F_00b09600(pvVar1);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
  if (pvVar1 != (undefined *)0x0) {
    for (piVar3 = *(int * PTR32 *)(REFG(int, 0x14c0cf8) + 0x220); piVar3 != *(int * PTR32 *)(REFG(int, 0x14c0cf8) + 0x224);
        piVar3 = piVar3 + 1) {
      if (*(short *)(*piVar3 + 0x18) == *(short *)((int)pvVar1 + 0x18)) {
        return (uint)piVar3;
      }
    }
    uVar2 = F_00b10470((undefined *)(REFG(int, 0x14c0cf8) + 0x220),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return uVar2;
}

/* ref: FUN_00b0aa80 */
uint F_00b0aa80(void)
{
  GEN_ENTER(0xb0aa80u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  ulonglong uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  piVar1 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_00b07100(0x81b,REFG(undefined4, 0x1379694),&(*(int * PTR32 *)(gen_frame + 0x4)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
  uVar2 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  return (uint)uVar2;
}

/* ref: FUN_00b0ab00 */
uint F_00b0ab00(unsigned int gen_a0)
{
  GEN_ENTER(0xb0ab00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if ((*(uint *)&REFG(undefined, 0x14c0d20) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14c0d20) = *(uint *)&REFG(undefined, 0x14c0d20) | 1;
    REFG(undefined4 * PTR32, 0x14c0d08) = (undefined4 *)0x0;
    puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
    REFG(undefined4 * PTR32, 0x14c0d08) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    *REFG(undefined4 * PTR32, 0x14c0d08) = &REFG(undefined4 * PTR32, 0x14c0d08);
    *(undefined4 *)&REFG(undefined, 0x14c0d0c) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d10) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d14) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d18) = 0;
    F_00c47de6(((code *)REFP(0x107c7d0)));
  }
  iVar1 = REFG(int, 0x1379694);
  if ((REFG(int, 0x1379694) != 0) && (*(char *)(REFG(int, 0x1379694) + 0x18a) == '\x10')) {
    uVar3 = 0;
    do {
      if (param_1 == *(int *)((int)&REFG(undefined4, 0x10ecd3c) + uVar3)) {
        return uVar3;
      }
      uVar3 = uVar3 + 4;
    } while (uVar3 < 0xc);
  }
  F_006b8c00();
  uVar3 = F_006c5f80(param_1,iVar1,&REFG(undefined4 * PTR32, 0x14c0d08));
  return uVar3;
}

/* ref: FUN_00b0abc0 */
byte F_00b0abc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0abc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  
  for (piVar5 = *(int * PTR32 *)this; piVar5 != *(int * PTR32 *)((int)this + 4); piVar5 = piVar5 + 2) {
    if (*piVar5 == param_1[0x1d]) {
      if ((*(byte *)(piVar5 + 1) & 2) == 0) goto LAB_00b0ac82;
      piVar4 = *(int * PTR32 *)((int)this + 0x220);
      goto joined_r0x00b0ac43;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar2 != 7) {
    return 0;
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x220);
  if (puVar3 == *(undefined4 * PTR32 *)((int)this + 0x224)) {
    return 0;
  }
  while (this_00 = (undefined *)*puVar3, *(short *)((int)this_00 + 0x18) != (short)param_1[0x3a]) {
    puVar3 = puVar3 + 1;
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
  }
  if (*(char *)((int)this_00 + 800) != '\x02') {
    return 0;
  }
  bVar1 = F_00b0d9e0(this_00,REFG(void * PTR32, 0x1379694));
  if (bVar1 != 0) {
    return 1;
  }
  goto LAB_00b0acb3;
joined_r0x00b0ac43: ;
  if (piVar4 == *(int * PTR32 *)((int)this + 0x224)) goto LAB_00b0ac54;
  iVar6 = *piVar4;
  if (*(short *)(iVar6 + 0x18) == (short)param_1[0x3a]) goto LAB_00b0ac56;
  piVar4 = piVar4 + 1;
  goto joined_r0x00b0ac43;
LAB_00b0ac54: ;
  iVar6 = 0;
LAB_00b0ac56: ;
  if ((iVar6 == 0) ||
     (((REFG(void * PTR32, 0x1379694) != (undefined *)0x0 && (uVar2 = F_00a5f290(REFG(void * PTR32, 0x1379694)), uVar2 != 0)) &&
      (*(byte *)(uVar2 + 0x1689) <= *(byte *)(iVar6 + 0x322))))) {
LAB_00b0ac82: ;
    return *(byte *)(piVar5 + 1) & 1;
  }
LAB_00b0acb3: ;
  F_00b0ab00(0x81a);
  return 0;
}

/* ref: FUN_00b0acd0 */
uint F_00b0acd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0acd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  undefined4 * puVar5;
  float * pfVar6;
  uint uVar7;
  undefined * pvVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  
  if ((*(uint *)&REFG(undefined, 0x14c0d3c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14c0d3c) = *(uint *)&REFG(undefined, 0x14c0d3c) | 1;
    REFG(undefined4 * PTR32, 0x14c0d24) = (undefined4 *)0x0;
    puVar5 = (undefined4 *)F_004296a0(8,0,0x2c4);
    REFG(undefined4 * PTR32, 0x14c0d24) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
    }
    *REFG(undefined4 * PTR32, 0x14c0d24) = &REFG(undefined4 * PTR32, 0x14c0d24);
    *(undefined4 *)&REFG(undefined, 0x14c0d28) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d2c) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d30) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d34) = 0;
    F_00c47de6(((code *)REFP(0x107c800)));
  }
  if (((*(uint *)((int)this + 0x1c) >> 7 & 1) != 0) &&
     (((*(uint *)((int)this + 0x1c) >> 6 & 1) == 0 || (*(int *)((int)this + 0x340) != -0x20000000)))
     ) {
    F_00b07c70(this);
  }
  pvVar8 = (undefined *)((int)this + 0x4b8);
  (*(float *)(gen_frame + 0x38)) = 5.60519e-45;
  do {
    F_00b07ac0(pvVar8);
    pvVar8 = (undefined *)((int)pvVar8 + 0x9c);
    fVar1 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x38))) + -1);
    (*(float *)(gen_frame + 0x38)) = fVar1;
  } while (fVar1 != 0.0);
  if (*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) == this) {
    F_00b08b80(this);
  }
  fVar1 = *(float *)((int)this + 0x2f4);
  (*(float *)(gen_frame + 0x30)) = fVar1;
  if (0.0 < fVar1) {
    *(float *)((int)this + 0x2f4) =
         ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
  }
  (*(float *)(gen_frame + 0x20)) = 0.0;
  (*(float *)(gen_frame + 0x24)) = 0.0;
  (*(float *)(gen_frame + 0x28)) = 0.0;
  (*(float *)(gen_frame + 0x0)) = 0.0;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  bVar4 = F_00b08260(this,&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x0)));
  if ((bVar4 == 0) || (REFG(void * PTR32, 0x1379694) == (undefined *)0x0)) goto LAB_00b0b100;
  (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)*(double *)&REFG(undefined, 0x1090718));
  fVar9 = (float10)(float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)*(double *)&REFG(undefined, 0x1090718));
  (*(float *)(gen_frame + 0x38)) = (float)(fVar9 * fVar9);
  pfVar6 = (float *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar6 - (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)pfVar6[1] - (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)pfVar6[2] - (float10)(*(float *)(gen_frame + 0x28)));
  fVar9 = (float10)(float)((float10)*pfVar6 - (float10)(*(float *)(gen_frame + 0x20)));
  fVar10 = (float10)(float)((float10)pfVar6[2] - (float10)(*(float *)(gen_frame + 0x28)));
  fVar1 = (float)(fVar10 * fVar10 + fVar9 * fVar9);
  (*(float *)(gen_frame + 0x30)) = fVar1;
  pvVar8 = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0))))));
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = pvVar8;
  if ((float10)fVar1 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar8)))) {
    (*(char *)(gen_frame + 0x3f)) = '\x01';
    pvVar8 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)(float)((float10)pfVar6[1] - (float10)(*(float *)(gen_frame + 0x24)))))))));
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = pvVar8;
    if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar8))) < (float10)(*(float *)(gen_frame + 0x4)))) goto LAB_00b0ae93;
  }
  else {
LAB_00b0ae93: ;
    (*(char *)(gen_frame + 0x3f)) = '\0';
  }
  if ((*(byte *)((int)this + 0x1c) & 1) == 0) {
    if ((*(char *)(gen_frame + 0x3f)) != '\0') {
      F_00a51200(0x57,(uint)*(ushort *)((int)this + 0x18),0,0,0);
      *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 1;
      *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x232))) = *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x232))) + '\x01';
    }
  }
  else {
    if (((*(uint *)((int)this + 0x1c) >> 7 & 1) != 0) &&
       ((*(char *)((int)this + 0x2f8) == '\x02' || (*(char *)((int)this + 0x2f8) == '\b')))) {
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = REFG(void * PTR32, 0x1379694);
      if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = F_00a5f290(REFG(void * PTR32, 0x1379694));
      }
      if (*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) == 0) {
        F_00b09350(REFG(void * PTR32, 0x14c0cf8),this);
        *(undefined4 *)((int)this + 0x2ec) = 0;
        *(undefined4 *)((int)this + 0x2f0) = 0;
        if ((*(uint *)((int)this + 0x1c) >> 5 & 1) == 0) {
          F_00b07200((uint)*(byte *)((int)this + 0x323));
          *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 0x20;
        }
      }
      if (((uVar7 != 0) && (*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) == this)) &&
         ((*(uint *)((int)this + 0x2ec) != (uint)*(byte *)(uVar7 + 0x1688) ||
          (*(uint *)((int)this + 0x2f0) != (uint)*(byte *)(uVar7 + 0x1689))))) {
        *(uint *)((int)this + 0x2ec) = (uint)*(byte *)(uVar7 + 0x1688);
        *(uint *)((int)this + 0x2f0) = (uint)*(byte *)(uVar7 + 0x1689);
        if (*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) == this) {
          F_00a69750(&REFG(undefined4, 0x14b11f8));
        }
        bVar4 = F_00b073e0((*(undefined * PTR32 *)(gen_frame + 0x34)));
        pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x34));
        if (bVar4 != 0) {
          bVar4 = F_00b07420(this,(*(undefined * PTR32 *)(gen_frame + 0x34)));
          if (bVar4 == 0) {
            bVar4 = F_00b07460(this,pvVar8);
            if (bVar4 == 0) goto LAB_00b0afc0;
            uVar11 = 0x816;
          }
          else {
            uVar11 = 0x7ea;
          }
          F_00b0ab00(uVar11);
        }
      }
    }
LAB_00b0afc0: ;
    if ((*(char *)(gen_frame + 0x3f)) == '\0') {
      *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffffe;
      *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x232))) = *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x232))) + -1;
      if ((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) != 0) && (REFG(short, 0x14ab148) != 0)) {
        F_00a51200(0x58,(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) + 0x18))),0,0,0);
      }
      if (*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) == this) {
        *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) = 0;
        F_00a69780(&REFG(undefined4, 0x14b11f8));
      }
    }
  }
  if (((*(uint *)((int)this + 0x1c) >> 7 & 1) != 0) &&
     ((*(char *)((int)this + 0x2f8) == '\x02' || (*(char *)((int)this + 0x2f8) == '\b')))) {
    if (((float10)(*(float *)(gen_frame + 0x30)) < (float10)(*(float *)(gen_frame + 0x38))) &&
       ((*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x14))))),
       (float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x14))))) < (float10)(*(float *)(gen_frame + 0x4)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((*(uint *)((int)this + 0x1c) >> 3 & 1) == 0) {
      if ((bVar3) &&
         (*(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 8,
         *(float *)((int)this + 0x2f4) <= 0.0)) {
        F_00a6e080(&REFG(undefined, 0x14a9e40),0x40,0,0);
        if ((*(byte *)((int)this + 0x1c) & 1) == 0) {
          F_00b0ab00(0x7d1);
          *(undefined4 *)((int)this + 0x2f4) = REFG(float, 0x10ec654);
        }
      }
    }
    else if (!bVar3) {
      *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffff7;
    }
  }
LAB_00b0b100: ;
  if ((((*(uint *)((int)this + 0x1c) >> 7 & 1) == 0) ||
      ((*(char *)((int)this + 0x2f8) != '\x02' && (*(char *)((int)this + 0x2f8) != '\b')))) &&
     (*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) == this)) {
    *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) = 0;
    F_00a69780(&REFG(undefined4, 0x14b11f8));
  }
  uVar7 = *(uint *)((int)this + 0x1c) >> 7;
  if (((uVar7 & 1) != 0) &&
     ((*(byte *)((int)this + 0x2f8) == 2 || (uVar7 = *(byte *)((int)this + 0x2f8) - 8, uVar7 == 0)))
     ) {
    uVar7 = *(uint *)((int)this + 0x306);
    bVar3 = false;
    if ((uVar7 != 0) && (*(uint *)((int)this + 0x31c) != uVar7)) {
      *(uint *)((int)this + 0x31c) = uVar7;
      bVar3 = true;
    }
    if (*(int *)((int)this + 0x31c) != 0) {
      uVar7 = *(uint *)((int)this + 0x1c) >> 4;
      bVar4 = (byte)uVar7;
      if (*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) == this) {
        uVar2 = uVar7 & 1;
        uVar7 = uVar7 & 0xffffff01;
        if ((uVar2 == 0) || (bVar3)) {
          if ((bVar4 & 1 & (byte)uVar7) != 0) {
            F_00ab6920();
          }
          *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 0x10;
          uVar7 = F_00ab6890(*(undefined4 *)((int)this + 0x31c));
        }
      }
      else if ((uVar7 & 1) != 0) {
        *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xffffffef;
        uVar7 = F_00ab6920();
        return uVar7;
      }
    }
  }
  return uVar7;
}

/* ref: Client::Game::Fate::FateDirector::vf5 */
byte F_00b0b1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0b1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00b0abc0(REFG(void * PTR32, 0x14c0cf8),param_1);
  return bVar1;
}

/* ref: FUN_00b0b1f0 */
uint F_00b0b1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0b1f0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  undefined4 * puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *puVar1 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = param_1;
    (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x1c)));
    if (((*(uint * PTR32 *)(gen_frame + 0x20)) != (uint *)0x0) && (((*(char *)(gen_frame + 0x24)) != '\0' && ((*(char *)(gen_frame + 0x24)) == '\x01')))) {
      this = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
      if (*(int *)((int)this + 0x54) < 1) {
        F_0042c880(this);
        F_00406ad0(this);
      }
    }
    if (param_2 < 2) {
      uVar2 = 0x817;
    }
    else {
      (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x1c)) = 0;
      uVar2 = 0x818;
      (*(uint *)(gen_frame + 0x1c)) = param_2;
      (*(char *)(gen_frame + 0x24)) = '\0';
      F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x1c)));
      F_004917c0(&(*(uint *)(gen_frame + 0x1c)));
    }
    F_00b07100(uVar2,REFG(undefined4, 0x1379694),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  }
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar3 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar3;
}

/* ref: FUN_00b0b310 */
uint F_00b0b310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0b310u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 * PTR32 * ppuVar9;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *puVar1 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x1c)) = param_1;
  (*(int * PTR32 *)(gen_frame + 0x20)) = &(*(int *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar5 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar5) {
    uVar5 = uVar5 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar5 * 4) == 0) {
    uVar2 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar5 * 4) = uVar2;
  }
  pvVar4 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar5 * 4);
  if (pvVar4 != (undefined *)0x0) {
    F_00492f50(pvVar4,&(*(int *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(int * PTR32 *)(gen_frame + 0x20)) != (int *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar4 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
    if (*(int *)((int)pvVar4 + 0x54) < 1) {
      F_0042c880(pvVar4);
      F_00406ad0(pvVar4);
    }
  }
  if (param_2 == 1) {
    uVar6 = 0x7da;
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x20)) = &(*(int *)(gen_frame + 0x1c));
    (*(int *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x1c)) = param_2;
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x1c)));
    if ((((*(int * PTR32 *)(gen_frame + 0x20)) != (int *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar4 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
      if (*(int *)((int)pvVar4 + 0x54) < 1) {
        F_0042c880(pvVar4);
        F_00406ad0(pvVar4);
      }
    }
    uVar6 = 0x7db;
  }
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  ppuVar9 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  uVar8 = REFG(undefined4, 0x1379694);
  pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
  F_0046ab30(pvVar4,uVar6,uVar8,ppuVar9);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar7 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar7;
}

/* ref: FUN_00b0b4a0 */
uint F_00b0b4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0b4a0u, gen_a0, 0u, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  ushort * puVar7;
  int iVar8;
  bool bVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  int * PTR32 * ppiVar12;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  bVar9 = (param_1[1] & 1) == 1;
  uVar6 = 0;
  (*(undefined1 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0)) = bVar9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = ((undefined4 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)), 1, 3),bVar9)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(char *)(gen_frame + 0x2b)) = '\0';
  puVar7 = param_1 + 10;
  (*(int *)(gen_frame + 0x8)) = 4;
  do {
    if (*(int *)puVar7 != 0) {
      if (*(int *)(puVar7 + 2) == 0) {
        (*(char *)(gen_frame + 0x2b)) = '\x01';
      }
      else {
        uVar6 = *(undefined4 *)puVar7;
        (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(puVar7 + 2);
        F_00b0b1f0(uVar6,*(undefined4 *)(puVar7 + 2));
      }
    }
    puVar7 = puVar7 + 4;
    iVar8 = (*(int *)(gen_frame + 0x8)) + -1;
    (*(int *)(gen_frame + 0x8)) = iVar8;
  } while (iVar8 != 0);
  if ((*(char *)(gen_frame + 0x2b)) != '\0') {
    F_00b0aa80();
  }
  iVar8 = *(int *)(param_1 + 8);
  if (iVar8 == 0) {
    iVar8 = -1;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  ((code *)*(gen_code32 *)(*piVar2 + 200))
            (piVar2,(uint)*param_1,(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(uint)*(byte *)((int)param_1 + 3),
             *(int *)(param_1 + 4) + *(int *)(param_1 + 2),*(undefined4 *)(param_1 + 6),iVar8,uVar6,
             (*(undefined4 *)(gen_frame + 0xc)));
  uVar3 = F_00a6e080(&REFG(undefined, 0x14a9e40),0x42,0,0);
  if (*(int *)(param_1 + 6) != 0) {
    (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
    piVar2 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x10)) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x10));
    (*(int *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x20)) = 0;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar6 = *(undefined4 *)(param_1 + 6);
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = uVar6;
    (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x2c));
    (*(char *)(gen_frame + 0x34)) = '\0';
    if ((*(uint *)(gen_frame + 0x18)) <= (*(int *)(gen_frame + 0x20)) + 1U) {
      F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x10)),1);
    }
    uVar3 = (*(int *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x1c));
    if ((*(uint *)(gen_frame + 0x18)) <= uVar3) {
      uVar3 = uVar3 - (*(uint *)(gen_frame + 0x18));
    }
    if (*(int *)((*(int *)(gen_frame + 0x14)) + uVar3 * 4) == 0) {
      uVar4 = F_004296a0(0xc,0,0x2c4);
      *(uint *)((*(int *)(gen_frame + 0x14)) + uVar3 * 4) = uVar4;
    }
    puVar1 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x14)) + uVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(puVar1 + 2) = 0xff;
      if (((*(char *)(gen_frame + 0x34)) != -1) && (puVar1 != &(*(undefined4 *)(gen_frame + 0x2c)))) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar1;
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (*(undefined4 * PTR32 *)(gen_frame + 0x30));
        if ((*(char *)(gen_frame + 0x34)) == '\0') {
          F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
        }
        else if ((*(char *)(gen_frame + 0x34)) == '\x01') {
          F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
        }
      }
    }
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x34)) != '\0')) && ((*(char *)(gen_frame + 0x34)) == '\x01')) {
      pvVar5 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x30));
      *(int *)((int)pvVar5 + 0x54) = *(int *)((int)pvVar5 + 0x54) + -1;
      if (*(int *)((int)pvVar5 + 0x54) < 1) {
        F_0042c880(pvVar5);
        F_00406ad0(pvVar5);
      }
    }
    ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x10));
    uVar11 = 0x4ea;
    uVar6 = REFG(undefined4, 0x1379694);
    pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046ab30(pvVar5,uVar11,uVar6,ppiVar12);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x10)));
    uVar10 = F_00429760((*(int * PTR32 *)(gen_frame + 0x10)),8,0x2c4);
    uVar3 = (uint)uVar10;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar3;
}

/* ref: FUN_00b0b6d0 */
uint F_00b0b6d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0b6d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 == 1) {
    uVar1 = F_00b0ab00(0x7e1);
  }
  else {
    uVar1 = param_1 - 2;
    if (uVar1 == 0) {
      uVar1 = F_00b0ab00(0x7e9);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b0b700 */
uint F_00b0b700(unsigned int gen_a0)
{
  GEN_ENTER(0xb0b700u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    uVar1 = F_00b0ab00(0x819);
  }
  return uVar1;
}

/* ref: FUN_00b0b720 */
uint F_00b0b720(unsigned int gen_a0)
{
  GEN_ENTER(0xb0b720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int in_ecx;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 0x220);
  if (puVar4 != *(undefined4 * PTR32 *)((int)this + 0x224)) {
    do {
      F_00b0acd0((undefined *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined4 * PTR32 *)((int)this + 0x224));
  }
  F_00b0a1e0((undefined *)((int)this + 0x10));
  uVar1 = *(ushort *)((int)this + 0x230);
  piVar2 = (int *)(uint)uVar1;
  if ((uVar1 != 0) &&
     (piVar2 = *(int * PTR32 *)((int)this + 0x220), piVar2 != *(int * PTR32 *)((int)this + 0x224))) {
    while (in_ecx = *piVar2, *(ushort *)(in_ecx + 0x18) != uVar1) {
      piVar2 = piVar2 + 1;
      if (piVar2 == *(int * PTR32 *)((int)this + 0x224)) {
        return (uint)piVar2;
      }
    }
    piVar2 = ((int *)GEN_TOP((*(uint *)(in_ecx + 0x1c) >> 7)));
    if (((uint)piVar2 & 1) != 0) {
      piVar2 = (int *)0x0;
      if (((*(byte *)(in_ecx + 0x2f8) == 2) ||
          (piVar2 = ((int *)GEN_TOP((*(byte *)(in_ecx + 0x2f8) - 8))), piVar2 == (int *)0x0)) &&
         (REFG(void * PTR32, 0x1379694) != (undefined *)0x0)) {
        uVar3 = F_00a5feb0(REFG(void * PTR32, 0x1379694));
        piVar2 = (int *)F_00b0c820(in_ecx,uVar3);
        if (((char)piVar2 == '\0') && (REFG(short, 0x14ab148) != 0)) {
          piVar2 = (int *)F_00b07170((uint)*(ushort *)((int)this + 0x230));
          *(undefined2 *)((int)this + 0x230) = 0;
        }
      }
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00b0b7e0 */
byte F_00b0b7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0b7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  char cVar1;
  byte bVar2;
  int * piVar3;
  uint * puVar4;
  uint uVar5;
  float * pfVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  int iVar11;
  undefined4 uVar12;
  undefined * pvVar13;
  undefined4 uVar14;
  
  (*(uint *)(gen_frame + 0x18c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x190);
  for (piVar3 = *(int * PTR32 *)(REFG(int, 0x14c0cf8) + 0x220); piVar3 != *(int * PTR32 *)(REFG(int, 0x14c0cf8) + 0x224);
      piVar3 = piVar3 + 1) {
    if (*(short *)(*piVar3 + 0x18) == *(short *)((int)this + 4)) {
      (*(int *)(gen_frame + 0x24)) = *piVar3;
      goto LAB_00b0b841;
    }
  }
  (*(int *)(gen_frame + 0x24)) = 0;
LAB_00b0b841: ;
  if ((*(int *)((int)this + 0x10) != 0) && (*(uint *)((int)this + 8) < *(uint *)((int)this + 0xc)))
  {
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
    piVar3 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar3;
    if (piVar3 != (int *)0x0) {
      *piVar3 = 0;
      piVar3[1] = 0;
    }
    *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x8));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    puVar4 = ((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa0 + *(int *)((int)this + 8) * 4)));
    F_0042cc20(((char * PTR32 *)(gen_frame + 0xe8)),(*puVar4 & 0xffffff) + (int)puVar4,REFG(undefined4, 0x108cc50));
    (*(int * PTR32 *)(gen_frame + 0x2c)) = ((int *)GEN_TOP((*(int *)((int)this + 0x10) + *(int *)((int)this + 8) * 0x14)));
    (*(char *)(gen_frame + 0x36)) = '\x01';
    ((int *)(gen_frame + 0x160))[2] = 0;
    (*(undefined1 *)(gen_frame + 0x170)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x16c)) = ((int *)(gen_frame + 0x160)) + 2;
    if ((*(int *)(gen_frame + 0x24)) == 0) {
      ((int *)(gen_frame + 0x160))[2] = 0;
    }
    else {
      ((int *)(gen_frame + 0x160))[2] = (uint)*(byte *)((*(int *)(gen_frame + 0x24)) + 0x321);
    }
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x8)),((int *)(gen_frame + 0x160)) + 2);
    F_004917c0(((int *)(gen_frame + 0x160)) + 2);
    if ((*(int *)((int)this + 8) + 1U < *(uint *)((int)this + 0xc)) &&
       ((cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 0x10) + (*(int *)((int)this + 8) * 5 + 5) * 4 + 0x11
                          ))), cVar1 == '\0' || (cVar1 == '\x04')))) {
      (*(char *)(gen_frame + 0x36)) = '\0';
    }
    if ((*((char * PTR32 *)(gen_frame + 0xe8))[0] != '\0') &&
       (piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x58))), piVar3 != (int *)0x0)) {
      puVar4 = (uint *)F_00ab3f40((*(int * PTR32 *)(gen_frame + 0x2c))[1]);
      iVar11 = *piVar3;
      ((uint *)(gen_frame + 0x184))[0] = *puVar4;
      uVar5 = ((code *)*(gen_code32 *)(iVar11 + 0xb8))(piVar3);
      if ((char)uVar5 != '\0') {
        (*(undefined * PTR32 *)(gen_frame + 0x20)) = REFG(void * PTR32, 0x1379694);
        iVar11 = (*(int * PTR32 *)(gen_frame + 0x2c))[4];
        pfVar6 = (float *)0x0;
        (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)0x0;
        (*(float *)(gen_frame + 0x4)) = 0.0;
        (*(char *)(gen_frame + 0x37)) = '\0';
        if ((char)iVar11 == '\x01') {
          (*(char *)(gen_frame + 0x37)) = '\x01';
        }
        else if ((char)iVar11 == '\x02') {
          ((int *)(gen_frame + 0x160))[0] = 0;
          ((int *)(gen_frame + 0x160))[1] = 0;
          (*(char *)(gen_frame + 0x37)) = '\x01';
          ((int *)(gen_frame + 0x160))[2] = GEN_FLT_TO(((int *)(gen_frame + 0x160))[2], REFG(float, 0x1087f04));
          uVar5 = F_00a5feb0(piVar3);
          uVar7 = F_00a5feb0((*(undefined * PTR32 *)(gen_frame + 0x20)));
          F_0046f4a0(((uint *)(gen_frame + 0x140)),uVar7,uVar5);
          fVar10 = F_00aae7a0(((uint *)(gen_frame + 0x140)),((int *)(gen_frame + 0x160)));
          (*(float *)(gen_frame + 0x30)) = gen_bits2f(piVar3[8]);
          fVar8 = ((float10)GEN_TOD(gen_bits2f(piVar3[8])));
          fVar9 = (float10)fVar10;
          if (fVar8 < fVar9) {
            (*(float *)(gen_frame + 0x30)) = (float)(fVar9 - fVar8);
            fVar10 = ((float)GEN_TOF((((float10)(float)(fVar9 - fVar8) * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                            (float10)*(double *)&REFG(undefined, 0x1080228))));
            (*(float *)(gen_frame + 0x30)) = fVar10;
            if (!((float10)*(float *)&REFG(undefined, 0x10ec5cc) < (float10)fVar10)) goto LAB_00b0ba89;
LAB_00b0bac5: ;
            fVar10 = F_00a5ffa0(piVar3,(*(undefined * PTR32 *)(gen_frame + 0x20)));
            (*(float *)(gen_frame + 0x4)) = fVar10;
            pfVar6 = &(*(float *)(gen_frame + 0x4));
          }
          else {
LAB_00b0ba89: ;
            pfVar6 = (*(float * PTR32 *)(gen_frame + 0x28));
            if (fVar9 < fVar8) {
              (*(float *)(gen_frame + 0x30)) = (float)(fVar8 - fVar9);
              fVar10 = ((float)GEN_TOF((((float10)(float)(fVar8 - fVar9) * (float10)*(double *)&REFG(undefined, 0x1080220))
                              / (float10)*(double *)&REFG(undefined, 0x1080228))));
              (*(float *)(gen_frame + 0x30)) = fVar10;
              if ((float10)*(float *)&REFG(undefined, 0x10ec5cc) < (float10)fVar10) goto LAB_00b0bac5;
            }
          }
        }
        iVar11 = *(*(int * PTR32 *)(gen_frame + 0x2c));
        if (iVar11 == 0) {
          if (pfVar6 != (float *)0x0) {
            uVar14 = 0;
            uVar12 = 1;
            iVar11 = 0x30f;
            uVar5 = F_00a5f290(piVar3);
            goto LAB_00b0bb3b;
          }
        }
        else {
          uVar14 = 0;
          uVar12 = 1;
          uVar5 = F_00a5f290(piVar3);
LAB_00b0bb3b: ;
          F_006d4be0(uVar5,iVar11,pfVar6,uVar12,uVar14);
        }
        if ((*(char *)(gen_frame + 0x37)) != '\0') {
          uVar12 = 1;
          pvVar13 = (*(undefined * PTR32 *)(gen_frame + 0x20));
          uVar5 = F_00a5f290(piVar3);
          F_006da750(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))),uVar5,pvVar13,uVar12);
        }
      }
      cVar1 = *(char *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x11);
      if ((cVar1 == '\0') || (cVar1 == '\x04')) {
        if (*((char * PTR32 *)(gen_frame + 0xe8))[0] != '\0') {
          F_00710cb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))),*(int *)((int)this + 0x14),
                       ((char * PTR32 *)(gen_frame + 0xe8)),&(*(int * PTR32 *)(gen_frame + 0x8)),piVar3,(uint)((*(char *)(gen_frame + 0x36)) == '\0'),(*(int * PTR32 *)(gen_frame + 0x2c))[3],0x3d,0,
                       ((uint *)(gen_frame + 0x184))[0],(*(int * PTR32 *)(gen_frame + 0x2c))[2],0,(uint)*(byte *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x12),
                       (uint)((*(int * PTR32 *)(gen_frame + 0x2c))[1] == 1));
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
          goto LAB_00b0bc6f;
        }
      }
      else if ((cVar1 == '\x06') && (*((char * PTR32 *)(gen_frame + 0xe8))[0] != '\0')) {
        F_0042b630(((undefined1 *)(gen_frame + 0x90)));
        F_0042b630(((undefined1 *)(gen_frame + 0x38)));
        F_00ab0230(3,((undefined1 *)(gen_frame + 0x90)));
        F_00ab0230(4,((undefined1 *)(gen_frame + 0x38)));
        F_00710e70(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))),*(int *)((int)this + 0x14),((char * PTR32 *)(gen_frame + 0xe8)),
                     &(*(int * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x90)),((undefined1 *)(gen_frame + 0x38)),1,0,0);
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
        F_0042c880(((undefined1 *)(gen_frame + 0x38)));
        F_0042c880(((undefined1 *)(gen_frame + 0x90)));
        goto LAB_00b0bc6f;
      }
    }
    uVar5 = ((uint *)(gen_frame + 0x184))[0];
    if (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x11) == '\x05') {
      if (((*(int *)(gen_frame + 0x24)) != 0) && (*(char *)((*(int *)(gen_frame + 0x24)) + 800) == '\x02')) {
        iVar11 = *(int *)((*(int *)(gen_frame + 0x24)) + 0x314);
        if (iVar11 != 0) {
          ((int *)(gen_frame + 0x160))[0] = iVar11;
          ((uint *)(gen_frame + 0x140))[0] = (uint)*(byte *)((*(int *)(gen_frame + 0x24)) + 0x2f9);
          (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x184))[0] + 0)) = 0;
          ((uint *)(gen_frame + 0x184))[0] = uVar5 & 0xffffff00;
        }
        uVar5 = (uint)(iVar11 != 0);
        F_00ba07c0(&REFG(undefined, 0x14b0f2c),((int *)(gen_frame + 0x160)),((uint *)(gen_frame + 0x140)),((uint *)(gen_frame + 0x184)),uVar5,
                     *(undefined4 *)((int)this + 0x14));
        if ((uVar5 != 0) && (bVar2 = F_00ba05d0(&REFG(undefined, 0x14b0f2c)), bVar2 != 0)) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x38)),&REFG(undefined, 0x10ec68b),REFG(undefined4, 0x108cc50));
          F_0042cc20(((undefined1 *)(gen_frame + 0x90)),&REFG(undefined, 0x10ec69b),REFG(undefined4, 0x108cc50));
          F_00ab0230(0x18f48,((undefined1 *)(gen_frame + 0x38)));
          F_00ab0230(0x18f49,((undefined1 *)(gen_frame + 0x90)));
          F_006b8c00();
          F_006c64b0(5,((undefined1 *)(gen_frame + 0x38)),((undefined1 *)(gen_frame + 0x90)),1);
          F_0042c880(((undefined1 *)(gen_frame + 0x90)));
          F_0042c880(((undefined1 *)(gen_frame + 0x38)));
LAB_00b0bc6f: ;
          F_0042c880(((char * PTR32 *)(gen_frame + 0xe8)));
          F_00493180(&(*(int * PTR32 *)(gen_frame + 0x8)));
          F_00c47745((*(uint *)(gen_frame + 0x18c)) ^ (uint)(uint)(gen_frame + 0x190));
          return 1;
        }
      }
      F_0042c880(((char * PTR32 *)(gen_frame + 0xe8)));
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
      F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
      goto LAB_00b0bcd9;
    }
    F_0042c880(((char * PTR32 *)(gen_frame + 0xe8)));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
    F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
LAB_00b0bcd9: ;
  F_00c47745((*(uint *)(gen_frame + 0x18c)) ^ (uint)(uint)(gen_frame + 0x190));
  return 0;
}

/* ref: FUN_00b0be20 */
uint F_00b0be20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb0be20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  int * piVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  int iVar4;
  
  for (piVar2 = *(int * PTR32 *)(REFG(int, 0x14c0cf8) + 0x220); piVar2 != *(int * PTR32 *)(REFG(int, 0x14c0cf8) + 0x224);
      piVar2 = piVar2 + 1) {
    iVar4 = *piVar2;
    if (*(short *)(iVar4 + 0x18) == *(short *)((int)this + 4)) goto LAB_00b0be52;
  }
  iVar4 = 0;
LAB_00b0be52: ;
  if ((short)param_1 == 2) {
    if (((iVar4 == 0) || (*(char *)(iVar4 + 800) != '\x02')) || ((char)param_2 != '\0'))
    goto LAB_00b0be8e;
    *(undefined4 *)((int)this + 8) = 4;
    *(undefined4 *)((int)this + 0xc) = 6;
  }
  else if ((short)param_1 != 5) goto LAB_00b0be8e;
  bVar1 = F_00b0b7e0(this);
  if (bVar1 != 0) {
    return CONCAT31(extraout_var,bVar1);
  }
LAB_00b0be8e: ;
  uVar3 = F_006f3a50(*(undefined * PTR32 *)((int)this + 0x14),0,0);
  return uVar3;
}

/* ref: FUN_00b0bea0 */
uint F_00b0bea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0bea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  if (param_1 != -2) {
    if (param_1 != -1) {
      bVar1 = F_00b0b7e0(this);
      if (bVar1 != 0) {
        return CONCAT31(extraout_var,bVar1);
      }
    }
    bVar1 = F_00b0b7e0(this);
    if (bVar1 != 0) {
      return CONCAT31(extraout_var_00,bVar1);
    }
  }
  uVar2 = F_006f3a50(*(undefined * PTR32 *)((int)this + 0x14),0,0);
  return uVar2;
}

/* ref: FUN_00b0bee0 */
uint F_00b0bee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0bee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined4 uVar3;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x14);
  if (param_1 == -2) {
    F_006f3a50(this_00,0,0);
    uVar2 = F_006f3a50(*(undefined * PTR32 *)((int)this + 0x14),0,0);
    return uVar2;
  }
  if (*(short *)((int)this_00 + 0x54) != 3) {
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 8) = 4;
      *(undefined4 *)((int)this + 0xc) = 6;
      uVar2 = F_006bcfc0(this_00,2,0,0);
      return uVar2;
    }
    *(undefined4 *)((int)this + 8) = 6;
    *(undefined4 *)((int)this + 0xc) = 8;
    uVar2 = F_006bcfc0(this_00,3,0,0);
    return uVar2;
  }
  if (param_1 == 0) {
    if (*(int *)this == 3) {
      if (*(int *)((int)this_00 + 0x58) == 0) {
        uVar3 = 0xe0000000;
      }
      else {
        uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0x58) + 0x74)));
      }
      F_00a51200(0x54,*(undefined4 *)((int)this + 4),uVar3,0,0);
    }
    *(undefined4 *)((int)this + 8) = 4;
    *(undefined4 *)((int)this + 0xc) = 6;
  }
  else {
    *(undefined4 *)((int)this + 8) = 6;
    *(undefined4 *)((int)this + 0xc) = 8;
  }
  bVar1 = F_00b0b7e0(this);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    uVar2 = F_006f3a50(*(undefined * PTR32 *)((int)this + 0x14),0,0);
  }
  return uVar2;
}

/* ref: FUN_00b0bfc0 */
uint F_00b0bfc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0bfc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined * this_00;
  undefined * this_01;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  uint uVar6;
  
  ((uint *)(gen_frame + 0x0))[10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (param_1 == 0) {
    uVar6 = 0;
    this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d5);
    uVar4 = *(uint *)((int)this_00 + 0xc);
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        this_01 = (undefined *)F_00a37da0(this_00,uVar5);
        if (uVar6 < 10) {
          if (*(char *)((int)this_01 + 6) == '\0') {
            uVar3 = *(uint *)((int)this_01 + 8);
            if ((*(byte *)((int)this_01 + 0x14) & 1) != 0) {
              uVar3 = uVar3 + 1000000;
            }
          }
          else {
            pvVar2 = (undefined *)F_00a3a860(this_01);
            uVar3 = F_0046e5e0(pvVar2);
          }
          if (uVar3 != 0) {
            if (*(char *)((int)this_01 + 6) == '\0') {
              uVar3 = *(uint *)((int)this_01 + 8);
              if ((*(byte *)((int)this_01 + 0x14) & 1) != 0) {
                uVar3 = uVar3 + 1000000;
              }
            }
            else {
              pvVar2 = (undefined *)F_00a3a860(this_01);
              uVar3 = F_0046e5e0(pvVar2);
            }
            ((uint *)(gen_frame + 0x0))[(int)(uVar6)] = uVar3;
            uVar3 = F_00a3a8a0(this_01);
            ((uint *)(gen_frame + 0x0))[(int)(uVar6 + 1)] = uVar3;
            uVar6 = uVar6 + 2;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
    F_00a36310(this_00);
    uVar4 = F_006bcfc0(*(undefined * PTR32 *)((int)this + 0x14),0,((uint *)(gen_frame + 0x0)),uVar6);
    F_00c47745(((uint *)(gen_frame + 0x0))[10] ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar4;
  }
  if (param_1 != -2) {
    *(undefined4 *)((int)this + 8) = 6;
    *(undefined4 *)((int)this + 0xc) = 8;
    bVar1 = F_00b0b7e0(this);
    uVar4 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) goto LAB_00b0c0cb;
  }
  uVar4 = F_006f3a50(*(undefined * PTR32 *)((int)this + 0x14),0,0);
LAB_00b0c0cb: ;
  F_00c47745(((uint *)(gen_frame + 0x0))[10] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_00b0c0e0 */
uint F_00b0c0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint * puVar4;
  undefined4 * puVar5;
  undefined3 extraout_var = 0;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar3 = F_006b8c00();
  if (*(int *)(uVar3 + 0x124) == 0) {
    uVar3 = 0;
  }
  else {
    puVar4 = (uint *)F_007512b0((undefined *)(uVar3 + 0x114));
    uVar3 = *puVar4;
  }
  if (uVar3 == *(uint *)((int)this + 0x14)) {
    *(undefined4 *)((int)this + 0x10) = param_1;
    *(undefined4 *)((int)this + 0xc) = 0;
    uVar3 = 0xa0;
    do {
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      puVar5 = (undefined4 *)
               F_0042cc20(((undefined1 *)(gen_frame + 0x4)),(*((uint *)GEN_TOP((*(int *)((int)this + 0x10) + uVar3))) & 0xffffff) +
                                     *(int *)((int)this + 0x10) + uVar3,REFG(undefined4, 0x108cc50));
      cVar1 = *(char *)*puVar5;
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      if (cVar1 == '\0') break;
      uVar3 = uVar3 + 4;
    } while (uVar3 < 0xc0);
    bVar2 = F_00b0b7e0(this);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      uVar3 = F_006f3a50(*(undefined * PTR32 *)((int)this + 0x14),0,0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_00b0c1a0 */
uint F_00b0c1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0c1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  int * piVar8;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar4 = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (param_2 != 0) {
    do {
      if (param_3 == 0xdd) {
        uVar2 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + (*(uint *)(gen_frame + 0x0)) * 4) + 4)));
        uVar4 = F_006b8c00();
        if (*(int *)(uVar4 + 0x124) == 0) {
          iVar7 = 0;
        }
        else {
          piVar8 = (int *)0x0;
          if ((*(int * PTR32 *)(uVar4 + 0x114) != (int *)0x0) &&
             (puVar6 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)(uVar4 + 0x114))), puVar6 != (undefined4 *)0x0)) {
            piVar8 = (int *)*puVar6;
          }
          uVar4 = (*(int *)(uVar4 + 0x124) + *(int *)(uVar4 + 0x120)) - 1;
          if (((piVar8 == (int *)0x0) || ((int *)*piVar8 == (int *)0x0)) ||
             (piVar8 = *(int * PTR32 *)*piVar8, piVar8 == (int *)0x0)) {
            iVar7 = 0;
          }
          else {
            iVar7 = *piVar8;
          }
          uVar5 = uVar4 >> 2;
          if (*(uint *)(iVar7 + 8) <= uVar5) {
            uVar5 = uVar5 - *(uint *)(iVar7 + 8);
          }
          iVar7 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar7 + 4) + uVar5 * 4))) + (uVar4 & 3) * 4)));
        }
        if (iVar7 == *(int *)((int)this + 0x14)) {
          *(undefined4 *)((int)this + 0x10) = uVar2;
          *(undefined4 *)((int)this + 0xc) = 0;
          uVar4 = 0xa0;
          do {
            *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
            puVar6 = (undefined4 *)
                     F_0042cc20(((undefined1 *)(gen_frame + 0x4)),(*((uint *)GEN_TOP((*(int *)((int)this + 0x10) + uVar4))) & 0xffffff
                                           ) + *(int *)((int)this + 0x10) + uVar4,REFG(undefined4, 0x108cc50));
            cVar1 = *(char *)*puVar6;
            F_0042c880(((undefined1 *)(gen_frame + 0x4)));
            if (cVar1 == '\0') break;
            uVar4 = uVar4 + 4;
          } while (uVar4 < 0xc0);
          bVar3 = F_00b0b7e0(this);
          if (bVar3 == 0) {
            F_006f3a50(*(undefined * PTR32 *)((int)this + 0x14),0,0);
          }
        }
      }
      uVar4 = (*(uint *)(gen_frame + 0x0)) + 1;
      (*(uint *)(gen_frame + 0x0)) = uVar4;
    } while (uVar4 < param_2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar4;
}

/* ref: FUN_00b0c2d0 */
uint F_00b0c2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (*(int *)((int)this + 0x1c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x18);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x1c));
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x1c);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
  }
  *(undefined4 *)((int)this + 8) = 0;
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xdd);
  *(uint *)((int)this + 0x18) = uVar2;
  puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar3,1,0xdd);
    puVar3[5] = 1;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10ecd58));
    puVar3[6] = this;
    puVar3[7] = ((code *)REFP(0xb0c1a0));
  }
  *(undefined4 * PTR32 *)((int)this + 0x1c) = puVar3;
  F_00cb4540(puVar3,0,param_1);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c));
  return uVar2;
}

/* ref: FUN_00b0c390 */
uint F_00b0c390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb0c390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  *(uint *)this = param_3 & 0xffff;
  *(undefined * PTR32 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 4) = *param_4;
  iVar1 = REFG(int, 0x1379694);
  switch((unsigned int)(uintptr_t)(param_3 & 0xffff)) {
  case 1: ;
  case 2: ;
  case 3: ;
  case 5: ;
    uVar3 = F_00b0c2d0(this,param_4[1]);
    return uVar3;
  case 4: ;
  case 6: ;
    if ((REFG(int, 0x1379694) != 0) && (param_2 != 0)) {
      uVar3 = F_006b8c00();
      this_00 = (undefined *)(uVar3 + 0x100);
      if ((*(int *)(uVar3 + 0x124) != 0) &&
         (piVar2 = (int *)F_007512b0((undefined *)(uVar3 + 0x114)), *piVar2 != 0)) {
        F_006da800(this_00,iVar1,1,0);
        F_006da800(this_00,iVar1,0,0);
      }
      F_006df030(this_00,iVar1,param_2,0);
      uVar3 = F_006f1bb0(this_00,iVar1);
      if ((char)uVar3 != '\0') {
        return uVar3;
      }
      uVar3 = F_00b072d0(this);
      return uVar3;
    }
  }
  uVar3 = F_006f3a50(param_1,0,0);
  return uVar3;
}

/* ref: FUN_00b0c470 */
byte F_00b0c470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c470u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x5d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b0c480 */
uint F_00b0c480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0c480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006f3a50(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00b0c490 */
uint F_00b0c490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x310) = param_2;
  return param_2;
}

/* ref: FUN_00b0c4a0 */
uint F_00b0c4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00b0c4d0 */
byte F_00b0c4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c4d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b0c4e0 */
uint F_00b0c4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c4e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_00b0c500 */
uint F_00b0c500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042e430((undefined *)((int)this + 0x20),param_1);
  return uVar1;
}

/* ref: FUN_00b0c530 */
ushort F_00b0c530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x30) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00b0c540 */
byte F_00b0c540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (((char)param_2 == '\0') * '\x02' ^ *(byte *)(in_ecx + 0x32)) & 2;
  *(byte *)(in_ecx + 0x32) = *(byte *)(in_ecx + 0x32) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00b0c560 */
uint F_00b0c560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0c560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = (undefined1)param_2;
  *(undefined4 *)((int)this + 8) = *param_3;
  *(undefined4 *)((int)this + 0xc) = param_3[1];
  *(undefined4 *)((int)this + 0x10) = param_3[2];
  F_00a6a6c0((undefined *)((int)this + 0x14));
  return (uint)this;
}

/* ref: FUN_00b0c5c0 */
uint F_00b0c5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c5c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  param_2[1] = *(undefined4 *)(in_ecx + 0xc);
  param_2[2] = *(undefined4 *)(in_ecx + 0x10);
  return (uint)param_2;
}

/* ref: FUN_00b0c630 */
uint F_00b0c630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c630u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x218) = param_2;
  return param_2;
}

/* ref: FUN_00b0c670 */
unsigned int F_00b0c670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(byte *)(in_ecx + 0x98) = *(byte *)(in_ecx + 0x98) | 1;
    return 0;
  }
  *(byte *)(in_ecx + 0x98) = *(byte *)(in_ecx + 0x98) & 0xfe;
  return 0;
}

/* ref: FUN_00b0c690 */
byte F_00b0c690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (((char)param_2 != '\0') * '\x02' ^ *(byte *)(in_ecx + 0x96)) & 2;
  *(byte *)(in_ecx + 0x96) = *(byte *)(in_ecx + 0x96) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00b0c710 */
byte F_00b0c710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0x2fa + in_ecx);
}

/* ref: FUN_00b0c730 */
byte F_00b0c730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c730u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 3) {
    return *(byte *)(param_2 + 0x300 + in_ecx);
  }
  return 0;
}

/* ref: FUN_00b0c750 */
byte F_00b0c750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c750u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 3) {
    return *(byte *)(param_2 + 0x303 + in_ecx);
  }
  return 0;
}

/* ref: FUN_00b0c780 */
uint F_00b0c780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x330);
  param_2[1] = *(undefined4 *)(in_ecx + 0x334);
  param_2[2] = *(undefined4 *)(in_ecx + 0x338);
  return (uint)param_2;
}

/* ref: FUN_00b0c7c0 */
uint F_00b0c7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb0c7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x24) = param_2;
  *(uint *)((int)this + 0x28) = param_3;
  *(undefined4 *)((int)this + 0x2c) = param_4;
  return param_3;
}

/* ref: FUN_00b0c820 */
uint F_00b0c820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c820u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint in_EAX = 0;
  float10 fVar1;
  float10 fVar2;
  
  if ((!(0.0 < *(float *)(in_ecx + 0x344))) || (!(0.0 < *(float *)(in_ecx + 0x34c)))) {
    return in_EAX & 0xffffff00;
  }
  fVar1 = (float10)((float)GEN_TOF(((float10)param_2[2] - (float10)*(float *)(in_ecx + 0x338))));
  fVar2 = (float10)((float)GEN_TOF(((float10)*param_2 - (float10)*(float *)(in_ecx + 0x330))));
  if (((float10)(float)(fVar2 * fVar2 + fVar1 * fVar1) < (float10)*(float *)(in_ecx + 0x348)) &&
     ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)param_2[1] - (float10)*(float *)(in_ecx + 0x334)
                                          )))))) < (float10)*(float *)(in_ecx + 0x34c))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0c8e0 */
uint F_00b0c8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0c8e0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_00b0c920 */
uint F_00b0c920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  F_0042ccf0((undefined *)((int)this + 0x10),param_1 + 4);
  puVar2 = param_1 + 0x19;
  puVar3 = (undefined4 *)((int)this + 100);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)((int)this + 0x98) = *(undefined1 *)(param_1 + 0x26);
  return (uint)this;
}

/* ref: FUN_00b0c980 */
uint F_00b0c980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0c980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00cb4700(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ecd4c));
  *(undefined4 *)((int)this + 0x18) = param_1;
  return (uint)this;
}

/* ref: FUN_00b0ca10 */
uint F_00b0ca10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb0ca10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ecd58));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFateEvent_Fate_Game_Client_Game::vf1 */
uint F_00b0ca50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0ca50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00b0ca70 */
uint F_00b0ca70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb0ca70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ecd64))
  ;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFateContext_Fate_Game_Client_Game::vf1 */
uint F_00b0cab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0cab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: SheetWaiter_VFateMessage_Fate_Game_Client_Game::vf0 */
uint F_00b0cad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b0cb40 */
uint F_00b0cb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cb40u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0cba0 */
uint F_00b0cba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cba0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0cbd0 */
uint F_00b0cbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0cc00 */
uint F_00b0cc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cc00u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0cc90 */
uint F_00b0cc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cc90u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0ccf0 */
uint F_00b0ccf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ccf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x48,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0cd20 */
uint F_00b0cd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cd20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x48,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0cd50 */
uint F_00b0cd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cd50u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0cde0 */
uint F_00b0cde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cde0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0ce10 */
uint F_00b0ce10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ce10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0ce20 */
uint F_00b0ce20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ce20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0ce70 */
uint F_00b0ce70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ce70u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0ced0 */
uint F_00b0ced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ced0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0cf00 */
uint F_00b0cf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cf00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0cfe0 */
uint F_00b0cfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d070 */
uint F_00b0d070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d0c0 */
uint F_00b0d0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d100 */
uint F_00b0d100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d100u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0d130 */
uint F_00b0d130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d180 */
uint F_00b0d180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d1c0 */
uint F_00b0d1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d1e0 */
uint F_00b0d1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d230 */
uint F_00b0d230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d230u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00b0d260 */
uint F_00b0d260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d260u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0d290 */
uint F_00b0d290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d2c0 */
uint F_00b0d2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d2c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0d300 */
uint F_00b0d300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d300u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0d350 */
uint F_00b0d350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d350u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_00b0d360 */
uint F_00b0d360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 8;
  return (uint)this;
}

/* ref: FUN_00b0d380 */
uint F_00b0d380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d380u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x48;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d3a0 */
uint F_00b0d3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d3b0 */
uint F_00b0d3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d3c0 */
uint F_00b0d3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d3d0 */
uint F_00b0d3d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d3e0 */
uint F_00b0d3e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d3f0 */
uint F_00b0d3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d400 */
uint F_00b0d400(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d400u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d410 */
uint F_00b0d410(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d410u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d450 */
uint F_00b0d450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00b0d470 */
unsigned int F_00b0d470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00b0d490 */
unsigned int F_00b0d490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d490u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00b0d4b0 */
uint F_00b0d4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b0d4d0 */
uint F_00b0d4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b0d510 */
uint F_00b0d510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d510u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00b0d530 */
unsigned int F_00b0d530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00b0d560 */
unsigned int F_00b0d560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d560u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00b0d580 */
uint F_00b0d580(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d580u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d590 */
uint F_00b0d590(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d590u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d5b0 */
uint F_00b0d5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d5b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0d5f0 */
uint F_00b0d5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d5f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d600 */
uint F_00b0d600(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d620 */
uint F_00b0d620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d620u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0d6a0 */
uint F_00b0d6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d6a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0d6e0 */
uint F_00b0d6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d700 */
uint F_00b0d700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d700u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(in_ecx + 8) = param_3;
  return in_ecx;
}

/* ref: FUN_00b0d710 */
uint F_00b0d710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d710u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(in_ecx + 8) = param_3;
  return in_ecx;
}

/* ref: FUN_00b0d760 */
uint F_00b0d760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00b0d780 */
byte F_00b0d780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00b0d7b0 */
uint F_00b0d7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d7b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d7e0 */
uint F_00b0d7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d7e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d810 */
uint F_00b0d810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b0d830 */
uint F_00b0d830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b0d880 */
uint F_00b0d880(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d890 */
uint F_00b0d890(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d890u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d8a0 */
uint F_00b0d8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0d8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00cb4700(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ecd70));
  F_0042b630((int)this + 0x20);
  return (uint)this;
}

/* ref: FUN_00b0d8e0 */
uint F_00b0d8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0042c880((undefined *)((int)this + 0x20));
  uVar1 = F_00cb4870(this);
  return uVar1;
}

/* ref: Client::Game::Fate::FateMessage::ExdWaiter::vf0 */
uint F_00b0d900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this + 0x20);
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Fate::FateDirector::vf143 */
unsigned int F_00b0d940(void)
{
  GEN_ENTER(0xb0d940u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf153 */
unsigned int F_00b0d950(void)
{
  GEN_ENTER(0xb0d950u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf154 */
unsigned int F_00b0d960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf155 */
unsigned int F_00b0d970(void)
{
  GEN_ENTER(0xb0d970u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf147 */
byte F_00b0d980(void)
{
  GEN_ENTER(0xb0d980u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf157 */
byte F_00b0d990(void)
{
  GEN_ENTER(0xb0d990u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf52 */
byte F_00b0d9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::Game::Fate::FateDirector::vf100 */
uint F_00b0d9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined * PTR32 *)(this + 0x328);
  uVar1 = (uint)*(ushort *)((int)this_00 + 0x54);
  if ((uVar1 == 4) || (uVar1 = uVar1 - 6, uVar1 == 0)) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
    uVar1 = F_006f3a50(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
  }
  return uVar1;
}

/* ref: FUN_00b0d9e0 */
byte F_00b0d9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = F_00a5f290(param_1);
    if (uVar1 != 0) {
      return *(byte *)(uVar1 + 0x1689) <= *(byte *)((int)this + 0x322);
    }
  }
  return 0;
}

/* ref: FUN_00b0da30 */
uint F_00b0da30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0da30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = F_00a5f290(param_1);
    if (uVar1 != 0) {
      return (uint)(*(byte *)((int)this + 0x322) < *(byte *)(uVar1 + 0x1689));
    }
  }
  return 1;
}

/* ref: FUN_00b0da80 */
uint F_00b0da80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0da80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0da90 */
uint F_00b0da90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0da90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0daa0 */
uint F_00b0daa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0daa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0dab0 */
uint F_00b0dab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0dac0 */
unsigned int F_00b0dac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0dac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  if (0xb < param_1) {
                    
    F_00c457e7("invalid bitset<N> position");
  }
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  puVar1 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4)));
  if ((char)param_2 != '\0') {
    *puVar1 = *puVar1 | uVar2;
    return 0;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return 0;
}

/* ref: FUN_00b0db00 */
unsigned int F_00b0db00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0db00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  
  if (0xb < param_1) {
                    
    F_00c457e7("invalid bitset<N> position");
  }
  puVar1 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4)));
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  return 0;
}

/* ref: FUN_00b0db40 */
uint F_00b0db40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0db40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (0xb < param_1) {
                    
    F_00c457e7("invalid bitset<N> position");
  }
  return (uint)((1 << ((byte)param_1 & 0x1f) & *((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4)))) != 0);
}

/* ref: FUN_00b0dc40 */
byte F_00b0dc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dc40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_00b0dc60 */
byte F_00b0dc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: CallbackSheetWaiter_VFateEvent_Fate_Game_Client_Game::vf0 */
uint F_00b0dc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFateContext_Fate_Game_Client_Game::vf0 */
uint F_00b0dcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b0dd80 */
uint F_00b0dd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0dd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0dd90 */
byte F_00b0dd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0ddb0 */
uint F_00b0ddb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ddb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0ddc0 */
byte F_00b0ddc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ddc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0dde0 */
uint F_00b0dde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0dde0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0ddf0 */
byte F_00b0ddf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ddf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0de40 */
uint F_00b0de40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0de40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0de50 */
byte F_00b0de50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0de50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0de70 */
uint F_00b0de70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0de70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0de80 */
byte F_00b0de80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0de80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0ded0 */
uint F_00b0ded0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ded0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00b0df10 */
uint F_00b0df10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0df10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b0df50 */
uint F_00b0df50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0df50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_00b0df80 */
uint F_00b0df80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0df80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0df90 */
uint F_00b0df90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0df90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x48;
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

/* ref: FUN_00b0dfe0 */
uint F_00b0dfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dfe0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b0e030 */
uint F_00b0e030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e040 */
uint F_00b0e040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e040u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b0e070 */
uint F_00b0e070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e070u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) - param_2;
  return in_ecx;
}

/* ref: FUN_00b0e080 */
uint F_00b0e080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 8;
  return (uint)this;
}

/* ref: FUN_00b0e0a0 */
uint F_00b0e0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e0a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x48;
  return (uint)in_ecx;
}

/* ref: FUN_00b0e0c0 */
uint F_00b0e0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e0e0 */
uint F_00b0e0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e100 */
uint F_00b0e100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e100u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00b0e130 */
unsigned int F_00b0e130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00b0e150 */
unsigned int F_00b0e150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00b0e170 */
uint F_00b0e170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e190 */
uint F_00b0e190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e1b0 */
uint F_00b0e1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e1b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0e1e0 */
uint F_00b0e1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e210 */
uint F_00b0e210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00b0e270 */
unsigned int F_00b0e270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00b0e2a0 */
uint F_00b0e2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e2a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0e2e0 */
uint F_00b0e2e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0e2e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0e2f0 */
uint F_00b0e2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e300 */
uint F_00b0e300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e300u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return param_1;
}

/* ref: FUN_00b0e310 */
uint F_00b0e310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e310u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return param_1;
}

/* ref: FUN_00b0e320 */
unsigned int F_00b0e320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
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

/* ref: _Uninitialized_move<>_00b0e350 */
unsigned int F_00b0e350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
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
    puVar5 = puVar1 + 0x12;
    puVar3 = puVar2 + 0x12;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 0x12; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00b0e380 */
uint F_00b0e380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)((int)this + 8);
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b0e3f0 */
byte F_00b0e3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) != *(int *)(param_1 + 4);
}

/* ref: FUN_00b0e410 */
uint F_00b0e410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00b0e440 */
uint F_00b0e440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)this = 0xe0000000;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b0e470 */
uint F_00b0e470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e490 */
uint F_00b0e490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e4b0 */
uint F_00b0e4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e4f0 */
uint F_00b0e4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Client::Game::Fate::FateDirector::vf0 */
uint F_00b0e520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e520u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_00b077a0(in_ecx,in_edi);
  if ((param_3 & 1) != 0) {
    F_00406ad0(in_ecx);
  }
  return in_ecx;
}

/* ref: FUN_00b0e560 */
unsigned int F_00b0e560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) | 1;
    return 0;
  }
  *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) & 0xfffffffe;
  return 0;
}

/* ref: FUN_00b0e590 */
unsigned int F_00b0e590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) | 8;
    return 0;
  }
  *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) & 0xfffffff7;
  return 0;
}

/* ref: FUN_00b0e5c0 */
unsigned int F_00b0e5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e5c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) | 0x10;
    return 0;
  }
  *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) & 0xffffffef;
  return 0;
}

/* ref: FUN_00b0e5f0 */
unsigned int F_00b0e5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e5f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) | 0x20;
    return 0;
  }
  *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) & 0xffffffdf;
  return 0;
}

/* ref: FUN_00b0e630 */
uint F_00b0e630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e630u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e640 */
uint F_00b0e640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e640u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0e660 */
uint F_00b0e660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e670 */
uint F_00b0e670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0e690 */
uint F_00b0e690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e6a0 */
uint F_00b0e6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e6a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0e6c0 */
uint F_00b0e6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e6d0 */
uint F_00b0e6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e6d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

