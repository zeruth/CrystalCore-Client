#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
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
unsigned int F_00b0e470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b0e490 */
unsigned int F_00b0e490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b0e4b0 */
unsigned int F_00b0e4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b0e4f0 */
unsigned int F_00b0e4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
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

/* ref: FUN_00b0e6e0 */
uint F_00b0e6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e6e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b0e700 */
uint F_00b0e700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e700u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b0e740 */
byte F_00b0e740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e760 */
byte F_00b0e760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e780 */
byte F_00b0e780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e7b0 */
uint F_00b0e7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e7c0 */
uint F_00b0e7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e7c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0e7d0 */
byte F_00b0e7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e7f0 */
byte F_00b0e7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e810 */
uint F_00b0e810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e810u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e830 */
uint F_00b0e830(unsigned int gen_a0)
{
  GEN_ENTER(0xb0e830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0e870 */
uint F_00b0e870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e880 */
uint F_00b0e880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e8a0 */
uint F_00b0e8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0e8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0e8e0 */
unsigned int F_00b0e8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e8e0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  if (param_2 != 0) {
    *in_ecx = *in_ecx & 0xfff;
  }
  return 0;
}

/* ref: FUN_00b0e900 */
uint F_00b0e900(unsigned int gen_a0)
{
  GEN_ENTER(0xb0e900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)((int)this + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)((int)this + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,0x321);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x321);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b0e9c0 */
uint F_00b0e9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0e9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x321);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00b0e9f0 */
uint F_00b0e9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0e9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0ea30 */
unsigned int F_00b0ea30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ea30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return 0;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return 0;
}

/* ref: FUN_00b0ea70 */
unsigned int F_00b0ea70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ea70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_00b0eaa0 */
uint F_00b0eaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0eaa0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * -8;
  return (uint)in_ecx;
}

/* ref: FUN_00b0eac0 */
uint F_00b0eac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0eac0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * -0x48;
  return (uint)in_ecx;
}

/* ref: FUN_00b0eae0 */
uint F_00b0eae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0eae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  if (param_2 != param_3) {
    do {
      if (*param_2 == *param_4) break;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0eb10 */
unsigned int F_00b0eb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0eb10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3 = param_3 + 2;
  }
  return 0;
}

/* ref: _Uninitialized_move<>_00b0eb40 */
unsigned int F_00b0eb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0eb40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  while (param_1 != param_2) {
    puVar3 = param_1 + 0x12;
    puVar1 = param_3 + 0x12;
    puVar4 = param_1;
    puVar5 = param_3;
    for (iVar2 = 0x12; param_1 = puVar3, param_3 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00b0eb70 */
uint F_00b0eb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb0eb70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  uint uVar1;
  
  if (param_3 != param_5) {
    do {
      uVar1 = param_3 >> 2;
      if (*(uint *)(param_2 + 8) <= uVar1) {
        uVar1 = uVar1 - *(uint *)(param_2 + 8);
      }
    } while ((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 4) + uVar1 * 4))) + (param_3 & 3) * 4))) != *param_6)
            && (param_3 = param_3 + 1, param_3 != param_5));
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return (uint)param_1;
}

/* ref: FUN_00b0ebc0 */
uint F_00b0ebc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0ebc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (param_2 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = param_4;
    return (uint)param_1;
  }
  *param_1 = *param_2;
  param_1[1] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00b0ebf0 */
uint F_00b0ebf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb0ebf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  uint uVar1;
  
  if (param_3 != param_5) {
    do {
      uVar1 = param_3 >> 2;
      if (*(uint *)(param_2 + 8) <= uVar1) {
        uVar1 = uVar1 - *(uint *)(param_2 + 8);
      }
    } while ((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 4) + uVar1 * 4))) + (param_3 & 3) * 4))) != *param_6)
            && (param_3 = param_3 + 1, param_3 != param_5));
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return (uint)param_1;
}

/* ref: FUN_00b0ec40 */
uint F_00b0ec40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ec40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b0ec80 */
unsigned int F_00b0ec80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ec80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return 0;
}

/* ref: FUN_00b0ecb0 */
unsigned int F_00b0ecb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0ece0 */
unsigned int F_00b0ece0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ece0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_3 = param_3 + 2;
  }
  return 0;
}

/* ref: FUN_00b0ed10 */
uint F_00b0ed10(unsigned int gen_a0)
{
  GEN_ENTER(0xb0ed10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0xe0000000;
  return (uint)param_1;
}

/* ref: FUN_00b0ed20 */
unsigned int F_00b0ed20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ed20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return 0;
}

/* ref: FUN_00b0ed50 */
unsigned int F_00b0ed50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ed50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return 0;
}

/* ref: FUN_00b0ed80 */
unsigned int F_00b0ed80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ed80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return 0;
}

/* ref: FUN_00b0edb0 */
uint F_00b0edb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0edb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0edf0 */
uint F_00b0edf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0edf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0ee30 */
uint F_00b0ee30(unsigned int gen_a0)
{
  GEN_ENTER(0xb0ee30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0ee70 */
uint F_00b0ee70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ee70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0ef00 */
uint F_00b0ef00(unsigned int gen_a0)
{
  GEN_ENTER(0xb0ef00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00b0e900(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x321);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00b0ef30 */
uint F_00b0ef30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ef30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b0ef50 */
uint F_00b0ef50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ef50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b0ef70 */
uint F_00b0ef70(unsigned int gen_a0)
{
  GEN_ENTER(0xb0ef70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0efb0 */
uint F_00b0efb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0efb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00b0f010 */
uint F_00b0f010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0f010u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00b0f070 */
uint F_00b0f070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * -8;
  return (uint)param_1;
}

/* ref: FUN_00b0f090 */
uint F_00b0f090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f090u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3 * -0x48;
  return (uint)param_2;
}

/* ref: FUN_00b0f0b0 */
uint F_00b0f0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0f0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00b0f110 */
unsigned int F_00b0f110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_00b0f140 */
uint F_00b0f140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xb0f140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  byte * pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((param_5 == (int *)0x0) || ((int *)*param_5 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_5, puVar1 == (undefined4 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  if (((param_2 == (int *)0x0) || ((int *)*param_2 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_2, puVar1 == (undefined4 *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  pbVar2 = (byte *)F_00b0ebf0(((byte *)(gen_frame + 0xc)) + 8,uVar4,param_4,uVar3,param_7,param_8);
  uVar3 = *(undefined4 *)(pbVar2 + 4);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = *(undefined4 *)pbVar2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar3;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b0f1d0 */
uint F_00b0f1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0f1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (param_2 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = param_4;
    return (uint)param_1;
  }
  *param_1 = *param_2;
  param_1[1] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00b0f210 */
unsigned int F_00b0f210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f210u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f240 */
unsigned int F_00b0f240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f240u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0f270 */
unsigned int F_00b0f270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f270u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
        param_3[1] = *(undefined4 *)(iVar1 + 4 + (int)param_3);
      }
      param_3 = param_3 + 2;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f2a0 */
unsigned int F_00b0f2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f2a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f2d0 */
unsigned int F_00b0f2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f2d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f300 */
uint F_00b0f300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = 0xe0000000;
  return (uint)param_2;
}

/* ref: FUN_00b0f310 */
unsigned int F_00b0f310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f310u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f380 */
uint F_00b0f380(unsigned int gen_a0)
{
  GEN_ENTER(0xb0f380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00b0e900(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x321);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00b0f3b0 */
unsigned int F_00b0f3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0f3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b0f400 */
unsigned int F_00b0f400(unsigned int gen_a0)
{
  GEN_ENTER(0xb0f400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b0f460 */
unsigned int F_00b0f460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f460u, gen_a0, gen_a1, gen_a2, 0u);
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
  return 0;
}

/* ref: FUN_00b0f4a0 */
uint F_00b0f4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xb0f4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  byte * pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((param_5 == (int *)0x0) || ((int *)*param_5 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_5, puVar1 == (undefined4 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  if (((param_2 == (int *)0x0) || ((int *)*param_2 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_2, puVar1 == (undefined4 *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  pbVar2 = (byte *)F_00b0eb70(((byte *)(gen_frame + 0xc)) + 8,uVar4,param_4,uVar3,param_7,param_8);
  uVar3 = *(undefined4 *)(pbVar2 + 4);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = *(undefined4 *)pbVar2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar3;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b0f540 */
unsigned int F_00b0f540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f540u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f570 */
unsigned int F_00b0f570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0f5a0 */
unsigned int F_00b0f5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f5a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
        param_3[1] = *(undefined4 *)(iVar1 + 4 + (int)param_3);
      }
      param_3 = param_3 + 2;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f5e0 */
unsigned int F_00b0f5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f5e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f610 */
unsigned int F_00b0f610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f610u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f640 */
unsigned int F_00b0f640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  for (; param_1 != param_2; param_1 = param_1 + 0x12) {
    *param_1 = 0xe0000000;
  }
  return 0;
}

/* ref: FUN_00b0f660 */
unsigned int F_00b0f660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f660u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f690 */
unsigned int F_00b0f690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x12) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_3 = param_3 + 0x12;
  }
  return 0;
}

/* ref: Client::Game::Fate::FateContext::vf0 */
uint F_00b0f6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b094e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b0f700 */
uint F_00b0f700(unsigned int gen_a0)
{
  GEN_ENTER(0xb0f700u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00b0f760 */
uint F_00b0f760(unsigned int gen_a0)
{
  GEN_ENTER(0xb0f760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0f7a0 */
uint F_00b0f7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f7a0u, gen_a0, gen_a1, 0u, 0u);
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
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x321);
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x321);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00b0f920 */
uint F_00b0f920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    iVar3 = param_1 * 8;
    uVar4 = F_004296a0(iVar3,0,0x321);
    F_00b0f5a0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar4);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0x321);
    }
    param_1 = uVar4 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = iVar3 + uVar4;
    *(uint *)((int)this + 4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00b0f9c0 */
unsigned int F_00b0f9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f9c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f9f0 */
unsigned int F_00b0f9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f9f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0fa20 */
unsigned int F_00b0fa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fa20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  for (; param_1 != param_2; param_1 = param_1 + 0x12) {
    *param_1 = 0xe0000000;
  }
  return 0;
}

/* ref: FUN_00b0fa40 */
unsigned int F_00b0fa40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0fa40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0fa70 */
unsigned int F_00b0fa70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0fa70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(iVar2 + (int)param_3);
        puVar4 = param_3;
        for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_3 = param_3 + 0x12;
    } while (iVar2 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0fab0 */
uint F_00b0fab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar4 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x321);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      F_00429760(iVar2,(*(int *)((int)this + 8) - iVar2 >> 2) * 4,0x321);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = param_1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return (uint)param_1;
}

/* ref: FUN_00b0fb60 */
uint F_00b0fb60(unsigned int gen_a0)
{
  GEN_ENTER(0xb0fb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0fba0 */
uint F_00b0fba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0fba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar3 = param_2;
  puVar2 = param_2;
  while (puVar2 = puVar2 + 2, puVar2 != puVar1) {
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3 = puVar3 + 2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -8;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0fbe0 */
unsigned int F_00b0fbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(byte *)((int)this + 0xc) & 3) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    F_00b0f7a0(this,1);
  }
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)this + 8) * 4;
  }
  uVar4 = iVar3 - 1;
  uVar5 = uVar4 >> 2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0x321);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) = uVar2;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) + (uVar4 & 3) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(uint *)((int)this + 0xc) = uVar4;
  return 0;
}

/* ref: FUN_00b0fc60 */
uint F_00b0fc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar4 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x321);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      F_00429760(iVar2,(*(int *)((int)this + 8) - iVar2 >> 2) * 4,0x321);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = param_1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return (uint)param_1;
}

/* ref: FUN_00b0fd10 */
uint F_00b0fd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fd10u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00b0fab0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b0fab0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b0fd80 */
uint F_00b0fd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fd80u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00b0f920(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b0f920(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b0fdf0 */
unsigned int F_00b0fdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  for (; param_1 != param_2; param_1 = param_1 + 0x12) {
    *param_1 = 0xe0000000;
  }
  return 0;
}

/* ref: FUN_00b0fe20 */
uint F_00b0fe20(unsigned int gen_a0)
{
  GEN_ENTER(0xb0fe20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  uVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (; puVar2 != puVar1; puVar2 = puVar2 + 0x12) {
      *puVar2 = 0xe0000000;
    }
    uVar4 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x48) * 0x48,0x321
                        );
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b0fe90 */
uint F_00b0fe90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fe90u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00b0fc60(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b0fc60(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b0ff00 */
uint F_00b0ff00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ff00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar4 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x321);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      F_00429760(iVar2,(*(int *)((int)this + 8) - iVar2 >> 2) * 4,0x321);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = param_1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return (uint)param_1;
}

/* ref: FUN_00b0ffb0 */
unsigned int F_00b0ffb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ffb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(iVar2 + (int)param_3);
        puVar4 = param_3;
        for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_3 = param_3 + 0x12;
    } while (iVar2 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0fff0 */
unsigned int F_00b0fff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b0fd10(this,1);
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
      F_00b0fd10(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_00b10060 */
uint F_00b10060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10060u, gen_a0, gen_a1, 0u, 0u);
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
      puVar4 = (undefined4 *)F_00b0fd80(this,1);
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
      F_00b0fd80(this,1);
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

/* ref: FUN_00b100f0 */
unsigned int F_00b100f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb100f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x48) < param_1) {
    puVar1 = (undefined4 *)F_004296a0(param_1 * 0x48,0,0x321);
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar5 = puVar1;
    for (puVar2 = *(undefined4 * PTR32 *)this; puVar2 != puVar3; puVar2 = puVar2 + 0x12) {
      if (puVar5 != (undefined4 *)0x0) {
        puVar6 = puVar2;
        puVar7 = puVar5;
        for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      puVar5 = puVar5 + 0x12;
    }
    puVar3 = *(undefined4 * PTR32 *)this;
    iVar4 = *(int *)((int)this + 4) - (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
      for (; puVar3 != puVar2; puVar3 = puVar3 + 0x12) {
        *puVar3 = 0xe0000000;
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x48) * 0x48,0x321);
    }
    *(undefined4 * PTR32 *)((int)this + 8) = puVar1 + param_1 * 0x12;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar1 + (iVar4 / 0x48) * 0x12;
    *(undefined4 * PTR32 *)this = puVar1;
  }
  return 0;
}

/* ref: FUN_00b10200 */
unsigned int F_00b10200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b0fe90(this,1);
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
      F_00b0fe90(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_00b10270 */
uint F_00b10270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb10270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    while (param_3 != puVar1) {
      puVar3 = param_3 + 0x12;
      puVar5 = puVar2 + 0x12;
      puVar6 = param_3;
      puVar7 = puVar2;
      for (iVar4 = 0x12; puVar2 = puVar5, param_3 = puVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (puVar6 = puVar2; puVar6 != puVar1; puVar6 = puVar6 + 0x12) {
      *puVar6 = 0xe0000000;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b102e0 */
unsigned int F_00b102e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb102e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x48;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x48;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_00b100f0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00b100f0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00b10370 */
uint F_00b10370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10370u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00b0ff00(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b0ff00(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b103e0 */
unsigned int F_00b103e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb103e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b102e0(this,1);
    }
    param_1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0x48) * 0x48)));
  }
  else if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
    F_00b102e0(this,1);
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x48;
  return 0;
}

/* ref: FUN_00b10450 */
uint F_00b10450(unsigned int gen_a0)
{
  GEN_ENTER(0xb10450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00b10270(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00b10470 */
uint F_00b10470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b10370(this,1);
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
      F_00b10370(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: Client::Game::Fate::FateMessage::ExdWaiter::vf1 */
unsigned int F_00b104e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb104e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00b0a090(*(undefined * PTR32 *)(this + 0x18),param_2,param_1,param_3,this);
  return 0;
}

/* ref: FUN_00b10500 */
uint F_00b10500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b09eb0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Fate::FateDirector::vf27 */
uint F_00b10530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb10530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00b0be20(this + 0x314,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf53 */
uint F_00b10540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 != -2) {
    if ((param_1 != -1) && (uVar1 = F_00b0b7e0(this + 0x314), (char)uVar1 != '\0')) {
      return uVar1;
    }
    uVar1 = F_00b0b7e0(this + 0x314);
    if ((char)uVar1 != '\0') {
      return uVar1;
    }
  }
  uVar1 = F_006f3a50(*(undefined * PTR32 *)(this + 0x328),0,0);
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf55 */
uint F_00b10580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb10580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b0bee0(this + 0x314,param_1,param_2);
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf59 */
uint F_00b10590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb10590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b0bfc0(this + 0x314,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf24 */
uint F_00b105a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb105a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00b0c390(this + 0x314,this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b105d0 */
uint F_00b105d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb105d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed00c));
  uVar1 = F_00406b30(*(undefined4 *)((int)this + 8));
  return (uint)uVar1;
}

/* ref: FUN_00b105f0 */
uint F_00b105f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb105f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * _Dst;
  gen_size32 _Size;
  
  *(undefined2 *)((int)this + 4) = (undefined2)param_1;
  *(undefined2 *)((int)this + 6) = (undefined2)param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed00c));
  *(undefined2 *)((int)this + 0xc) = 0x3440;
  _Size = (int)*(short *)((int)this + 6) * (int)*(short *)((int)this + 4);
  _Dst = (undefined *)F_00406bb0(_Size,0,0);
  if (_Dst != (undefined *)0x0) {
    if (-1 < (int)(_Size - 1)) {
      F_00c48350(_Dst,0,_Size);
    }
    *(undefined * PTR32 *)((int)this + 8) = _Dst;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00b10660 */
uint F_00b10660(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb10660u, gen_a0, 0u, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  fVar4 = (float10)*(double *)&REFG(undefined, 0x10943d8);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1094788);
  iVar3 = *(short *)(param_1 + 4) * param_4;
  local_8 = 0;
  local_c = 0;
  uVar2 = 1;
  if (*(short *)(param_1 + 4) < 1) {
    return 0;
  }
  do {
    if ((param_3 & uVar2) == 0) {
      local_10 = (undefined1)(int)TRUNC(((float10)0 * fVar4) * fVar5);
      *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + iVar3))) = local_10;
    }
    else {
      uVar1 = (uint)*((byte *)GEN_TOP((*(int *)(param_1 + 8) + iVar3))) +
              ((int)TRUNC(((float10)param_2 * fVar4) * fVar5) & 0xffU);
      if (0xff < uVar1) {
        uVar1 = 0xff;
      }
      *((byte *)GEN_TOP((*(int *)(param_1 + 8) + iVar3))) = (byte)uVar1;
      if (*(byte *)(param_1 + 0xc) < (byte)uVar1) {
        local_8 = local_8 | uVar2;
        *((undefined1 *)GEN_TOP((iVar3 + *(int *)(param_1 + 8)))) = *(undefined1 *)(param_1 + 0xd);
      }
    }
    local_c = local_c + 1;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    iVar3 = iVar3 + 1;
  } while (local_c < *(short *)(param_1 + 4));
  return local_8;
}

/* ref: FUN_00b10770 */
unsigned int F_00b10770(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb10770u, gen_a0, 0u, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 local_8;
  
  fVar4 = (float10)*(double *)&REFG(undefined, 0x10943d8);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1094788);
  iVar3 = 0;
  if (*(short *)((*(int *)&gen_args[0]) + 4) < 1) {
    return 0;
  }
  do {
    if ((*(uint *)((*(int *)&gen_args[2]) + iVar3 * 4) & (*(uint *)&gen_args[3])) == 0) {
      local_8 = (undefined1)(int)TRUNC(((float10)0 * fVar4) * fVar5);
      *((undefined1 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 8) + iVar3))) = local_8;
    }
    else {
      uVar2 = (uint)*((byte *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 8) + iVar3))) +
              ((int)TRUNC(((float10)(*(float *)&gen_args[1]) * fVar4) * fVar5) & 0xffU);
      if (0xff < uVar2) {
        uVar2 = 0xff;
      }
      *((byte *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 8) + iVar3))) = (byte)uVar2;
      if (*(byte *)((*(int *)&gen_args[0]) + 0xc) < (byte)uVar2) {
        puVar1 = (uint *)((*(int *)&gen_args[2]) + iVar3 * 4);
        *puVar1 = *puVar1 | (*(uint *)&gen_args[4]);
        *((undefined1 *)GEN_TOP((iVar3 + *(int *)((*(int *)&gen_args[0]) + 8)))) = *(undefined1 *)((*(int *)&gen_args[0]) + 0xd);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < *(short *)((*(int *)&gen_args[0]) + 4));
  return 0;
}

/* ref: FUN_00b10870 */
uint F_00b10870(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb10870u, gen_a0, 0u, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = (int)TRUNC(((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                     (float10)*(double *)&REFG(undefined, 0x1094788)) & 0xff;
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *in_ecx = (char)uVar1;
  return uVar1;
}

/* ref: FUN_00b108d0 */
uint F_00b108d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb108d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  undefined1 local_8;
  
  uVar1 = (uint)TRUNC(((float10)*(double *)&REFG(undefined, 0x10943d8) *
                      (float10)((float)GEN_TOF(((float10)(param_2 & 0xff) / (float10)*(double *)&REFG(undefined, 0x10943d8)
                                      )))) * (float10)*(double *)&REFG(undefined, 0x1094788));
  local_8 = (undefined1)uVar1;
  if (0xff < (uVar1 & 0xff)) {
    local_8 = 0xff;
  }
  *param_1 = local_8;
  return (uint)param_1;
}

/* ref: FUN_00b10930 */
uint F_00b10930(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb10930u, gen_a0, 0u, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  undefined1 local_8;
  
  uVar1 = (uint)TRUNC(((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                      (float10)*(double *)&REFG(undefined, 0x1094788));
  local_8 = (undefined1)uVar1;
  if (0xff < (uVar1 & 0xff)) {
    local_8 = 0xff;
  }
  *in_ecx = local_8;
  return (uint)in_ecx;
}

/* ref: FUN_00b10990 */
unsigned int F_00b10990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)*param_1 + (uint)*(byte *)this;
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *(char *)this = (char)uVar1;
  return 0;
}

/* ref: FUN_00b109c0 */
uint F_00b109c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb109c0u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  return (uint)(*param_2 < *in_ecx);
}

/* ref: FUN_00b109e0 */
uint F_00b109e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb109e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)this = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00b109f0 */
uint F_00b109f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb109f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (int)TRUNC(((float10)(byte)param_1 * (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                     (float10)*(double *)&REFG(undefined, 0x1094788)) & 0xff;
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *(char *)this = (char)uVar1;
  return uVar1;
}

/* ref: Client::System::Input::RepeatCounter::vf0 */
uint F_00b10a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed00c));
  F_00406b30(*(undefined4 *)(this + 8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b10a80 */
uint F_00b10a80(unsigned int gen_a0)
{
  GEN_ENTER(0xb10a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  undefined * puVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed038));
  if (REFG(int, 0x14c0d40) == 0) {
    uVar6 = 0;
    puVar5 = &REFG(int, 0x14c0d40);
    puVar4 = &REFG(undefined, 0x1081724);
    uVar3 = 0x800;
    pHVar1 = gen_imp_GetModuleHandleA((LPCSTR)0x0);
    iVar2 = gen_imp_DirectInput8Create(pHVar1,uVar3,puVar4,puVar5,uVar6);
    if (iVar2 < 0) {
      REFG(int, 0x14c0d40) = 0;
      gen_imp_MessageBoxA((HWND)0x0,"DirectInput8Create failed","INFO",0);
      return (uint)this;
    }
  }
  *(int *)&REFG(undefined, 0x14c0d44) = *(int *)&REFG(undefined, 0x14c0d44) + 1;
  return (uint)this;
}

/* ref: FUN_00b10af0 */
unsigned int F_00b10af0(unsigned int gen_a0)
{
  GEN_ENTER(0xb10af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed038));
  *(int *)&REFG(undefined, 0x14c0d44) = *(int *)&REFG(undefined, 0x14c0d44) + -1;
  if ((*(int *)&REFG(undefined, 0x14c0d44) == 0) && (REFG(undefined4, 0x14c0d40) != (int *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14c0d40) + 8))))(REFG(undefined4, 0x14c0d40));
    REFG(undefined4, 0x14c0d40) = (int *)0x0;
  }
  return 0;
}

/* ref: Client::System::Input::InputDevice::vf0 */
uint F_00b10b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed038));
  *(int *)&REFG(undefined, 0x14c0d44) = *(int *)&REFG(undefined, 0x14c0d44) + -1;
  if ((*(int *)&REFG(undefined, 0x14c0d44) == 0) && (REFG(undefined4, 0x14c0d40) != (int *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14c0d40) + 8))))(REFG(undefined4, 0x14c0d40));
    REFG(undefined4, 0x14c0d40) = (int *)0x0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b10b70 */
uint F_00b10b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  HMODULE hModule;
  FARPROC pFVar1;
  uint uVar2;
  
  gen_imp_ImmDisableTextFrameService(0xffffffff);
  hModule = gen_imp_LoadLibraryA("imm32.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = gen_imp_GetProcAddress(hModule,"ImmDisableTextFrameService");
    if (pFVar1 != (FARPROC)0x0) {
      ((code *)pFVar1)(0xffffffff);
    }
    gen_imp_FreeLibrary(hModule);
  }
  if (*(int *)((int)this + 4) == 0) {
    uVar2 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x11555c0),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x10ed068),&(*(int * PTR32 *)(gen_frame + 0x4)));
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x4)) = *(int * PTR32 *)((int)this + 4);
  }
  uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x24))((*(int * PTR32 *)(gen_frame + 0x4)),param_1,0,&(*(int * PTR32 *)(gen_frame + 0x8)));
  if ((-1 < (int)uVar2) && (uVar2 = 0, (*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0)) {
    uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
  }
  return uVar2;
}

/* ref: Client::System::Input::CUIElementSink::vf1 */
uint F_00b10c10(unsigned int gen_a0)
{
  GEN_ENTER(0xb10c10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 4) + 1;
  *(uint *)(param_1 + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00b10c30 */
byte F_00b10c30(unsigned int gen_a0)
{
  GEN_ENTER(0xb10c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc))))
                    (*(undefined4 * PTR32 *)((int)this + 0xc),&REFG(undefined, 0x10ed088),&(*(int * PTR32 *)(gen_frame + 0x8)));
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0xc))
                      ((*(int * PTR32 *)(gen_frame + 0x8)),&REFG(undefined, 0x10ed078),this,(undefined4 *)((int)this + 0x10));
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      return 1;
    }
    *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: FUN_00b10ca0 */
unsigned int F_00b10ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xb10ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x10) != -1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc))))
                      (*(undefined4 * PTR32 *)((int)this + 0xc),&REFG(undefined, 0x10ed088),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x10));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    }
  }
  return 0;
}

/* ref: FUN_00b10cf0 */
uint F_00b10cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x8)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc))))
                    (*(undefined4 * PTR32 *)((int)this + 0xc),&REFG(undefined, 0x10ed098),&(*(int * PTR32 *)(gen_frame + 0x4)));
  if (-1 < (int)uVar1) {
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x4)),param_1,&(*(uint *)(gen_frame + 0x8)));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)));
  }
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: Client::System::Input::CCiceroEventSink::vf1 */
uint F_00b10d40(unsigned int gen_a0)
{
  GEN_ENTER(0xb10d40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 8) + 1;
  *(uint *)(param_1 + 8) = uVar1;
  return uVar1;
}

/* ref: Client::System::Input::CCiceroEventSink::vf3 */
uint F_00b10d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10d60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Input::CCiceroEventSink::vf4 */
uint F_00b10d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Input::CCiceroEventSink::vf6 */
uint F_00b10d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10d80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Input::CCiceroEventSink::vf7 */
uint F_00b10d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10d90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00b10da0 */
unsigned int F_00b10da0(unsigned int gen_a0)
{
  GEN_ENTER(0xb10da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x1c) != -1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x10))))
                      (*(undefined4 * PTR32 *)((int)this + 0x10),&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x1c));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    }
  }
  return 0;
}

/* ref: FUN_00b10df0 */
unsigned int F_00b10df0(unsigned int gen_a0)
{
  GEN_ENTER(0xb10df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x20) != -1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x18))))
                      (*(undefined4 * PTR32 *)((int)this + 0x18),&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x20));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x20) = 0xffffffff;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 8))))(*(int * PTR32 *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return 0;
}

/* ref: FUN_00b10e50 */
unsigned int F_00b10e50(unsigned int gen_a0)
{
  GEN_ENTER(0xb10e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ed0ac));
  if (*(int *)((int)this + 0x10) != -1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc))))
                      (*(undefined4 * PTR32 *)((int)this + 0xc),&REFG(undefined, 0x10ed088),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x10));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    }
  }
  return 0;
}

/* ref: Client::System::Input::CUIElementSink::vf0 */
uint F_00b10ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb10ea0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  uVar1 = F_004011f0(param_2,&REFG(undefined, 0x1082374));
  if ((uVar1 == 0) && (uVar1 = F_004011f0(param_2,&REFG(undefined, 0x10ed078)), uVar1 == 0)) {
    *param_3 = 0;
    return 0x80004002;
  }
  *param_3 = param_1;
  if (param_1 == (int *)0x0) {
    return 0x80004002;
  }
  ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  return 0;
}

/* ref: Client::System::Input::CUIElementSink::vf5 */
uint F_00b10f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10f10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  uVar3 = (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[3])))))(((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[3])),&REFG(undefined, 0x10ed098),&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x18))))((*(int * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]));
  }
  piVar2 = (*(int * PTR32 *)(gen_frame + 0x8));
  if ((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) {
    (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
    uVar3 = ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x8)))((*(int * PTR32 *)(gen_frame + 0x8)),&REFG(undefined, 0x10ed0c4),&(*(int * PTR32 *)&gen_args[1]));
    if (-1 < (int)uVar3) {
      ((code *)*(gen_code32 *)(*(int *)piVar1[2] + 0x10))((int *)piVar1[2]);
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    }
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    return 0;
  }
  return 0x80070057;
}

/* ref: FUN_00b10fb0 */
uint F_00b10fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb10fb0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  code * pcVar6;
  uint uVar7;
  undefined * puVar8;
  
  uVar7 = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))))
                    (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),&REFG(undefined, 0x10ed098),&(*(int * PTR32 *)(gen_frame + 0x14)));
  if (-1 < (int)uVar4) {
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x14)),(*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)(gen_frame + 0x10)));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))((*(int * PTR32 *)(gen_frame + 0x14)));
  }
  piVar3 = (*(int * PTR32 *)(gen_frame + 0x10));
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((*(int * PTR32 *)(gen_frame + 0x10)) != (int *)0x0) {
    *(*(undefined4 * PTR32 *)&gen_args[2]) = 0;
    (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
    uVar4 = ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x10)))((*(int * PTR32 *)(gen_frame + 0x10)),&REFG(undefined, 0x10ed0c4),&(*(int * PTR32 *)&gen_args[1]));
    if (-1 < (int)uVar4) {
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x28))))((*(int * PTR32 *)&gen_args[1]),puVar2);
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x24))))((*(int * PTR32 *)&gen_args[1]),&(*(uint *)(gen_frame + 0x18)));
      if ((*(uint *)(gen_frame + 0x18)) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))))))(*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(uint *)(gen_frame + 0x18)));
        uVar4 = 0;
        if ((*(uint *)(gen_frame + 0x18)) != 0) {
          do {
            uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x2c))))((*(int * PTR32 *)&gen_args[1]),uVar4,&(*(undefined * PTR32 *)(gen_frame + 0xc)));
            piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
            if ((int)uVar5 < 0) {
              pcVar6 = *(gen_code32 *)(*piVar1 + 4);
              uVar7 = uVar7 + 1;
              puVar8 = &REFG(undefined, 0x10ed064);
            }
            else {
              pcVar6 = *(gen_code32 *)(*piVar1 + 4);
              puVar8 = (*(undefined * PTR32 *)(gen_frame + 0xc));
            }
            (*pcVar6)(piVar1,puVar8);
            uVar4 = uVar4 + 1;
          } while (uVar4 < (*(uint *)(gen_frame + 0x18)));
        }
        if (uVar7 == (*(uint *)(gen_frame + 0x18))) {
          (*(uint *)(gen_frame + 0x18)) = 0;
          *(*(undefined4 * PTR32 *)&gen_args[2]) = 0;
        }
      }
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    }
    ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
  }
  return (*(uint *)(gen_frame + 0x18));
}

/* ref: Client::System::Input::CCiceroEventSink::vf0 */
uint F_00b110d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb110d0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  int * piVar2;
  
  if (param_3 == (int *)0x0) {
    return 0x80070057;
  }
  uVar1 = F_004011f0(param_2,&REFG(undefined, 0x1082374));
  if ((uVar1 == 0) && (uVar1 = F_004011f0(param_2,&REFG(undefined, 0x1155bd0)), uVar1 == 0)) {
    uVar1 = F_004011f0(param_2,&REFG(undefined, 0x1155a40));
    if (uVar1 == 0) {
      *param_3 = 0;
      return 0x80004002;
    }
    *param_3 = (int)param_1;
  }
  else {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_1 + 1;
    }
    *param_3 = (int)piVar2;
  }
  if (*param_3 == 0) {
    return 0x80004002;
  }
  ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  return 0;
}

/* ref: FUN_00b11160 */
byte F_00b11160(unsigned int gen_a0)
{
  GEN_ENTER(0xb11160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)((int)this + 0x1c);
  if (*(int *)((int)this + 0x1c) != -1) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x10))))
                      (*(undefined4 * PTR32 *)((int)this + 0x10),&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar2) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),*puVar1);
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      *puVar1 = 0xffffffff;
    }
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x10))))
                    (*(undefined4 * PTR32 *)((int)this + 0x10),&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x4)));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x4)),&REFG(undefined, 0x1155a40),this,puVar1);
    if (-1 < (int)uVar2) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)));
      return 1;
    }
    *puVar1 = 0xffffffff;
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_00b11210 */
byte F_00b11210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb11210u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) != -1) {
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))))))
                      (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x4)));
    if (-1 < (int)uVar5) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x4)),*puVar1);
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)));
      *puVar1 = 0xffffffff;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  }
  piVar2 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
  (*(byte *)(gen_frame + 0xb)) = 0;
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x18))))((*(int * PTR32 *)&gen_args[1]),piVar2);
  if (-1 < (int)uVar5) {
    puVar3 = (undefined4 *)*piVar2;
    if (puVar3 == (undefined4 *)0x0) {
      return 1;
    }
    uVar5 = ((code *)*(gen_code32 *)*puVar3)(puVar3,&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)&gen_args[1]));
    if (-1 < (int)uVar5) {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1155bd0),(int)(*(undefined * PTR32 *)&gen_args[0]) + 4,puVar1);
      if ((int)uVar5 < 0) {
        *puVar1 = 0xffffffff;
      }
      else {
        (*(byte *)(gen_frame + 0xb)) = 1;
      }
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
      if ((*(byte *)(gen_frame + 0xb)) != 0) {
        return (*(byte *)(gen_frame + 0xb));
      }
    }
  }
  piVar4 = (int *)*piVar2;
  if (piVar4 == (int *)0x0) {
    return (*(byte *)(gen_frame + 0xb));
  }
  ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
  *piVar2 = 0;
  return (*(byte *)(gen_frame + 0xb));
}

/* ref: FUN_00b11310 */
uint F_00b11310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ed0ac));
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::System::Input::CUIElementSink::vf2 */
uint F_00b11340(unsigned int gen_a0)
{
  GEN_ENTER(0xb11340u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  piVar1 = (*(int * PTR32 *)&gen_args[0]) + 1;
  *piVar1 = *piVar1 + -1;
  uVar3 = (*(int * PTR32 *)&gen_args[0])[1];
  if (*piVar1 == 0) {
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[6])REFP(0x10ed0ac));
    if ((*(int * PTR32 *)&gen_args[0])[4] != -1) {
      uVar3 = (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[3])))))
                        (((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[3])),&REFG(undefined, 0x10ed088),&(*(int * PTR32 *)&gen_args[0]));
      if (-1 < (int)uVar3) {
        ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]),piVar2[4]);
        ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]));
        piVar2[4] = -1;
      }
    }
    F_00406ad0(piVar2);
    uVar3 = 0;
  }
  return uVar3;
}

/* ref: Client::System::Input::CUIElementSink::vf3 */
uint F_00b113b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb113b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  *(*(undefined4 * PTR32 *)&gen_args[2]) = 0;
  uVar1 = F_00b10fb0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 * PTR32 *)&gen_args[2]));
  if (uVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(undefined4 * PTR32 *)&gen_args[2]));
    return 0;
  }
  return 0x80070057;
}

/* ref: Client::System::Input::CUIElementSink::vf4 */
uint F_00b11400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb11400u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00b10fb0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]));
  if (uVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(undefined4 *)&gen_args[1]),uVar1 - 1)
    ;
    return 0;
  }
  return 0x80070057;
}

/* ref: Client::System::Input::CCiceroEventSink::vf5 */
uint F_00b11440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00b11210(param_1,param_2);
  return 0;
}

/* ref: FUN_00b114f0 */
byte F_00b114f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb114f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPVOID * ppv;
  LPVOID pvVar1;
  byte bVar2;
  HRESULT HVar3;
  uint uVar4;
  undefined4 * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 8) != 0) {
    return 1;
  }
  HVar3 = gen_imp_CoInitialize((LPVOID)0x0);
  if (HVar3 < 0) {
    F_00b10b70(this,param_1);
    return 0;
  }
  if (param_2 == 0) {
    F_00b10b70(this,param_1);
    gen_imp_CoUninitialize();
    return 0;
  }
  ppv = (LPVOID *)((int)this + 4);
  HVar3 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x11555c0),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x10ed0d4),ppv);
  if (-1 < HVar3) {
    uVar4 = ((code *)*(gen_code32 *)(*(int *)*ppv + 0x38))(*ppv,&(*(undefined * PTR32 *)(gen_frame + 0x8)),4);
    if (-1 < (int)uVar4) {
      this_00 = (undefined4 *)F_00406b90(0x14,0,0);
      if (this_00 == (undefined4 *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        pvVar1 = *ppv;
        *this_00 = (*(undefined * PTR32 (*)[6])REFP(0x10ed0ac));
        this_00[1] = 1;
        this_00[2] = param_2;
        this_00[3] = pvVar1;
        this_00[4] = 0xffffffff;
      }
      *(undefined4 * PTR32 *)((int)this + 8) = this_00;
      bVar2 = F_00b10c30(this_00);
      if (bVar2 != 0) {
        return 1;
      }
    }
    F_00b10b70(this,param_1);
    F_00b11460(this);
    return 0;
  }
  F_00b10b70(this,param_1);
  gen_imp_CoUninitialize();
  return 0;
}

/* ref: FUN_00b11610 */
uint F_00b11610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb11610u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(int * PTR32 *)&gen_args[3]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = (*(undefined4 *)&gen_args[2]);
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[8])REFP(0x10ed0fc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(undefined * PTR32 (*)[4])REFP(0x10ed0e8));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 1;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 7;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  F_00b11160((*(undefined * PTR32 *)&gen_args[0]));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),&(*(int * PTR32 *)&gen_args[3]));
  if ((-1 < (int)uVar1) && ((*(int * PTR32 *)&gen_args[3]) != (int *)0x0)) {
    F_00b11210((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[3]));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 8))))((*(int * PTR32 *)&gen_args[3]));
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00b11690 */
unsigned int F_00b11690(unsigned int gen_a0)
{
  GEN_ENTER(0xb11690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10ed0fc));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[4])REFP(0x10ed0e8));
  if (*(int *)((int)this + 0x20) != -1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x18))))
                      (*(undefined4 * PTR32 *)((int)this + 0x18),&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x20));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x20) = 0xffffffff;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 8))))(*(int * PTR32 *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  if (*(int *)((int)this + 0x1c) != -1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x10))))
                      (*(undefined4 * PTR32 *)((int)this + 0x10),&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x1c));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    }
  }
  if (7 < *(uint *)((int)this + 0x38)) {
    F_00406ad0(*(undefined4 *)((int)this + 0x24));
  }
  *(undefined4 *)((int)this + 0x38) = 7;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined2 *)((int)this + 0x24) = 0;
  return 0;
}

/* ref: Client::System::Input::CCiceroEventSink::vf2 */
uint F_00b11760(unsigned int gen_a0)
{
  GEN_ENTER(0xb11760u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)((int)param_1 + 8);
  *piVar1 = *piVar1 + -1;
  uVar2 = *(uint *)((int)param_1 + 8);
  if (*piVar1 == 0) {
    F_00b11690(param_1);
    F_00406ad0(param_1);
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00b11790 */
uint F_00b11790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x38))(param_1,param_2,&(*(int *)(gen_frame + 0x4)));
  while ((uVar1 == 0 && ((*(int *)(gen_frame + 0x4)) == 0))) {
    (*(int *)(gen_frame + 0x0)) = 0xff;
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,param_2,1,((undefined2 *)(gen_frame + 0x8)),0xff,&(*(int *)(gen_frame + 0x0)));
    if (-1 < (int)uVar1) {
      ((undefined2 *)(gen_frame + 0x8))[(*(int *)(gen_frame + 0x0))] = 0;
      F_00b124c0((undefined *)((int)this + 0x24),((undefined2 *)(gen_frame + 0x8)),(*(int *)(gen_frame + 0x0)));
    }
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x38))(param_1,param_2,&(*(int *)(gen_frame + 0x4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return uVar1;
}

/* ref: FUN_00b11840 */
uint F_00b11840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  puVar3 = (undefined4 *)((int)this + 0x24);
  (*(uint *)(gen_frame + 0x30)) = 7;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined2 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar2 & 0xffff0000;
  F_00b123c0(((uint *)(gen_frame + 0x1c)),puVar3,0,0xffffffff);
  *(undefined4 *)((int)this + 0x34) = 0;
  puVar1 = puVar3;
  if (7 < *(uint *)((int)this + 0x38)) {
    puVar1 = (undefined4 *)*puVar3;
  }
  *(undefined2 *)puVar1 = 0;
  uVar2 = ((code *)*(gen_code32 *)*param_1)(param_1,&REFG(undefined, 0x1155ad0),&(*(int * PTR32 *)(gen_frame + 0xc)));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x10))((*(int * PTR32 *)(gen_frame + 0xc)),&(*(int * PTR32 *)(gen_frame + 0x18)));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x18)),1,&(*(int * PTR32 *)(gen_frame + 0x14)),0);
      while (uVar2 == 0) {
        uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x14)),&(*(int * PTR32 *)(gen_frame + 0x10)));
        if (-1 < (int)uVar2) {
          F_00b11790(this,(*(int * PTR32 *)(gen_frame + 0x10)),param_2);
          ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 8))((*(int * PTR32 *)(gen_frame + 0x10)));
        }
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))((*(int * PTR32 *)(gen_frame + 0x14)));
        uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x18)),1,&(*(int * PTR32 *)(gen_frame + 0x14)),0);
      }
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 8))((*(int * PTR32 *)(gen_frame + 0x18)));
    }
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 8))((*(int * PTR32 *)(gen_frame + 0xc)));
  }
  if (7 < *(uint *)((int)this + 0x38)) {
    puVar3 = (undefined4 *)*puVar3;
  }
  uVar2 = F_00b11d00(((uint *)(gen_frame + 0x1c)),0,(*(undefined4 *)(gen_frame + 0x2c)),puVar3,*(undefined4 *)((int)this + 0x34));
  if (7 < (*(uint *)(gen_frame + 0x30))) {
    uVar2 = F_00406ad0(((uint *)(gen_frame + 0x1c))[0]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: FUN_00b11980 */
uint F_00b11980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb11980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c);
  F_00b11840((undefined *)(param_1 + -4),param_2,param_3);
  uVar1 = ((code *)*(gen_code32 *)(*param_4 + 0x10))(param_4,1,0,0,&(*(int * PTR32 *)(gen_frame + 0x10)));
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x10)),1,&(*(int * PTR32 *)(gen_frame + 0x14)),0);
    while (uVar1 == 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x38))((*(int * PTR32 *)(gen_frame + 0x14)),param_3,&(*(int *)(gen_frame + 0x8)));
      while ((uVar1 == 0 && ((*(int *)(gen_frame + 0x8)) == 0))) {
        (*(int *)(gen_frame + 0xc)) = 0xff;
        uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x14)),param_3,1,((undefined2 *)(gen_frame + 0x18)),0xff,&(*(int *)(gen_frame + 0xc)));
        if (-1 < (int)uVar1) {
          ((undefined2 *)(gen_frame + 0x18))[(*(int *)(gen_frame + 0xc))] = 0;
        }
        uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x38))((*(int * PTR32 *)(gen_frame + 0x14)),param_3,&(*(int *)(gen_frame + 0x8)));
      }
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))((*(int * PTR32 *)(gen_frame + 0x14)));
      uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x10)),1,&(*(int * PTR32 *)(gen_frame + 0x14)),0);
    }
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 8))((*(int * PTR32 *)(gen_frame + 0x10)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
  return 0;
}

/* ref: FUN_00b11ae0 */
uint F_00b11ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11ae0u, gen_a0, gen_a1, gen_a2, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_1 != *param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  return (-(uint)(*param_1 < *param_2) & 0xfffffffe) + 1;
}

/* ref: FUN_00b11b50 */
uint F_00b11b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11b50u, gen_a0, gen_a1, gen_a2, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_1 != *param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  return (-(uint)(*param_1 < *param_2) & 0xfffffffe) + 1;
}

/* ref: FUN_00b11c00 */
uint F_00b11c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb11c00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00b11c20 */
byte F_00b11c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb11c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  
  if (param_1 != (undefined *)0x0) {
    pvVar1 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar1 = *(undefined * PTR32 *)this;
    }
    if (pvVar1 <= param_1) {
      pvVar1 = this;
      if (7 < *(uint *)((int)this + 0x14)) {
        pvVar1 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP(((int)pvVar1 + *(int *)((int)this + 0x10) * 2)))) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b11c80 */
uint F_00b11c80(unsigned int gen_a0)
{
  GEN_ENTER(0xb11c80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x80000000) && (uVar1 = F_004069f0(param_1 * 2), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00b11d00 */
uint F_00b11d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb11d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  ushort * puVar2;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar1 = *(uint *)((int)this + 0x10) - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  uVar1 = param_2;
  if (param_4 <= param_2) {
    uVar1 = param_4;
  }
  if (7 < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  puVar2 = (ushort *)((int)this + param_1 * 2);
  do {
    if (uVar1 == 0) {
LAB_00b11d66: ;
      if (param_4 <= param_2) {
        return (uint)(param_2 != param_4);
      }
      return 0xffffffff;
    }
    if (*puVar2 != *param_3) {
      uVar1 = (-(uint)(*puVar2 < *param_3) & 0xfffffffe) + 1;
      if (uVar1 != 0) {
        return uVar1;
      }
      goto LAB_00b11d66;
    }
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
    uVar1 = uVar1 - 1;
  } while( true );
}

/* ref: FUN_00b11da0 */
unsigned int F_00b11da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb11da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)((int)this + 0x10) = param_1;
  if (7 < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  *(undefined2 *)((int)this + param_1 * 2) = 0;
  return 0;
}

/* ref: FUN_00b11dd0 */
uint F_00b11dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb11dd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x80000000) && (uVar1 = F_004069f0(param_1 * 2), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00b11e20 */
uint F_00b11e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb11e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ed0ac));
  if (*(int *)((int)this + 0x10) != -1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc))))
                      (*(undefined4 * PTR32 *)((int)this + 0xc),&REFG(undefined, 0x10ed088),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x10));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    }
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b11eb0 */
uint F_00b11eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb11eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1 + 4;
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  uVar2 = F_00b11d00(this,0,*(undefined4 *)((int)this + 0x10),param_1,*puVar1);
  return uVar2;
}

/* ref: FUN_00b11ee0 */
unsigned int F_00b11ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (((char)param_1 != '\0') && (7 < *(uint *)((int)this + 0x14))) {
    uVar1 = *(undefined4 *)this;
    if (param_2 != 0) {
      F_00c46aa0(this,uVar1,param_2 * 2);
    }
    F_00406ad0(uVar1);
  }
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined2 *)((int)this + param_2 * 2) = 0;
  return 0;
}

/* ref: FUN_00b11f30 */
uint F_00b11f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar2 = *(uint *)((int)this + 0x10) - param_1;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (param_2 != 0) {
    pvVar4 = this;
    pvVar1 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar1 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((undefined *)((int)pvVar4 + param_1 * 2),((undefined *)GEN_TOP(((int)pvVar1 + (param_1 + param_2) * 2))),
               (uVar2 - param_2) * 2);
    iVar3 = *(int *)((int)this + 0x10) - param_2;
    *(int *)((int)this + 0x10) = iVar3;
    if (7 < *(uint *)((int)this + 0x14)) {
      *(undefined2 *)(*(int *)this + iVar3 * 2) = 0;
      return (uint)this;
    }
    *(undefined2 *)((int)this + iVar3 * 2) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00b11fc0 */
uint F_00b11fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  
  uVar5 = param_1 | 7;
  if (uVar5 < 0x7fffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar3 = uVar1 >> 1;
    param_1 = uVar5;
    if ((uVar5 / 3 < uVar3) && (param_1 = uVar3 + uVar1, 0x7ffffffe - uVar3 < uVar1)) {
      param_1 = 0x7ffffffe;
    }
  }
  uVar5 = param_1 + 1;
  pvVar4 = (undefined *)0x0;
  if ((uVar5 != 0) &&
     ((0x7fffffff < uVar5 || (pvVar4 = (undefined *)F_004069f0(uVar5 * 2), pvVar4 == (undefined *)0x0)))) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  }
  if (param_2 != 0) {
    pvVar2 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar2 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(pvVar4,pvVar2,param_2 * 2);
  }
  if (7 < *(uint *)((int)this + 0x14)) {
    F_00406ad0(*(undefined4 *)this);
  }
  *(undefined * PTR32 *)this = pvVar4;
  *(uint *)((int)this + 0x14) = param_1;
  *(int *)((int)this + 0x10) = param_2;
  if (7 < param_1) {
    this = pvVar4;
  }
  *(undefined2 *)((int)this + param_2 * 2) = 0;
  return 0;
}

/* ref: FUN_00b120e0 */
uint F_00b120e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb120e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x3f);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_00b12110 */
uint F_00b12110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb12110u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2 + 4;
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  uVar2 = F_00b11d00(param_1,0,*(undefined4 *)((int)param_1 + 0x10),param_2,*puVar1);
  return (uint)(uVar2 == 0);
}

/* ref: FUN_00b12140 */
unsigned int F_00b12140(unsigned int gen_a0)
{
  GEN_ENTER(0xb12140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (7 < *(uint *)((int)this + 0x14)) {
    F_00406ad0(*(undefined4 *)this);
  }
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)this = 0;
  return 0;
}

/* ref: FUN_00b12170 */
uint F_00b12170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb12170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (0x7ffffffe < param_1) {
                    
    F_00c4579a("string too long");
  }
  uVar1 = *(uint *)((int)this + 0x14);
  if (uVar1 < param_1) {
    F_00b11fc0(this,param_1,*(undefined4 *)((int)this + 0x10));
    return (uint)(param_1 != 0);
  }
  if (((char)param_2 != '\0') && (param_1 < 8)) {
    uVar3 = *(uint *)((int)this + 0x10);
    if (param_1 < *(uint *)((int)this + 0x10)) {
      uVar3 = param_1;
    }
    if (7 < uVar1) {
      uVar2 = *(undefined4 *)this;
      if (uVar3 != 0) {
        F_00c46aa0(this,uVar2,uVar3 * 2);
      }
      F_00406ad0(uVar2);
    }
    *(uint *)((int)this + 0x10) = uVar3;
    *(undefined4 *)((int)this + 0x14) = 7;
    *(undefined2 *)((int)this + uVar3 * 2) = 0;
    return (uint)(param_1 != 0);
  }
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (7 < uVar1) {
      this = *(undefined * PTR32 *)this;
    }
    *(undefined2 *)this = 0;
  }
  return (uint)(param_1 != 0);
}

/* ref: FUN_00b12230 */
uint F_00b12230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb12230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b10d40(param_1 + -4);
  return uVar1;
}

/* ref: FUN_00b12240 */
uint F_00b12240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb12240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b110d0(param_1 + -4,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00b12250 */
uint F_00b12250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb12250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b11690(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b12280 */
uint F_00b12280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb12280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7("invalid string position");
  }
  uVar2 = param_1[4] - param_2;
  if (uVar2 < param_3) {
    param_3 = uVar2;
  }
  iVar1 = *(int *)((int)this + 0x10);
  if (-iVar1 - 1U <= param_3) {
                    
    F_00c4579a("string too long");
  }
  if (param_3 != 0) {
    uVar2 = iVar1 + param_3;
    if (0x7ffffffe < uVar2) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar2) {
      F_00b11fc0(this,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (7 < *(uint *)((int)this + 0x14)) {
        **(undefined2 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined2 *)this = 0;
      return (uint)this;
    }
    if (7 < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    pvVar3 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(((undefined *)GEN_TOP(((int)pvVar3 + *(int *)((int)this + 0x10) * 2))),(int)param_1 + param_2 * 2,
               param_3 * 2);
    *(uint *)((int)this + 0x10) = uVar2;
    if (7 < *(uint *)((int)this + 0x14)) {
      *(undefined2 *)(*(int *)this + uVar2 * 2) = 0;
      return (uint)this;
    }
    *(undefined2 *)((int)this + uVar2 * 2) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00b12390 */
uint F_00b12390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb12390u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2 + 4;
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  uVar2 = F_00b11d00(param_1,0,*(undefined4 *)((int)param_1 + 0x10),param_2,*puVar1);
  return (uint)(uVar2 != 0);
}

/* ref: FUN_00b123c0 */
uint F_00b123c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb123c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7("invalid string position");
  }
  uVar3 = param_1[4] - param_2;
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  if (this == param_1) {
    F_00b11f30(this,uVar3 + param_2,0xffffffff);
    F_00b11f30(this,0,param_2);
    return (uint)this;
  }
  if (0x7ffffffe < uVar3) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < uVar3) {
    F_00b11fc0(this,uVar3,*(undefined4 *)((int)this + 0x10));
    if (uVar3 == 0) {
      return (uint)this;
    }
  }
  else if (uVar3 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (7 < *(uint *)((int)this + 0x14)) {
      **(undefined2 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined2 *)this = 0;
    return (uint)this;
  }
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  pvVar2 = this;
  if (7 < *(uint *)((int)this + 0x14)) {
    pvVar2 = *(undefined * PTR32 *)this;
  }
  iVar1 = uVar3 * 2;
  F_00c46aa0(pvVar2,(int)param_1 + param_2 * 2,iVar1);
  *(uint *)((int)this + 0x10) = uVar3;
  if (*(uint *)((int)this + 0x14) < 8) {
    *(undefined2 *)(iVar1 + (int)this) = 0;
    return (uint)this;
  }
  *(undefined2 *)(iVar1 + *(int *)this) = 0;
  return (uint)this;
}

/* ref: FUN_00b124c0 */
uint F_00b124c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb124c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 != (undefined *)0x0) {
    uVar2 = *(uint *)((int)this + 0x14);
    pvVar3 = this;
    if (7 < uVar2) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    if (pvVar3 <= param_1) {
      pvVar3 = this;
      if (7 < uVar2) {
        pvVar3 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP(((int)pvVar3 + *(int *)((int)this + 0x10) * 2)))) {
        pvVar3 = this;
        if (7 < uVar2) {
          pvVar3 = *(undefined * PTR32 *)this;
        }
        uVar2 = F_00b12280(this,this,(int)param_1 - (int)((int)(uintptr_t)pvVar3) >> 1,param_2);
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
    if (0x7ffffffe < uVar2) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar2) {
      F_00b11fc0(this,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (7 < *(uint *)((int)this + 0x14)) {
        **(undefined2 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined2 *)this = 0;
      return (uint)this;
    }
    pvVar3 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(((undefined *)GEN_TOP(((int)pvVar3 + *(int *)((int)this + 0x10) * 2))),param_1,param_2 * 2);
    *(uint *)((int)this + 0x10) = uVar2;
    if (7 < *(uint *)((int)this + 0x14)) {
      *(undefined2 *)(*(int *)this + uVar2 * 2) = 0;
      return (uint)this;
    }
    *(undefined2 *)((int)this + uVar2 * 2) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00b125e0 */
uint F_00b125e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb125e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b11760(param_1 + -4);
  return uVar1;
}

/* ref: FUN_00b125f0 */
uint F_00b125f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb125f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)this = 0;
  F_00b123c0(this,param_1,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00b12630 */
uint F_00b12630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb12630u, gen_a0, gen_a1, gen_a2, 0u);
  DWORD in_eax = (DWORD)gen_a0;
  int * in_esi = (int *)(uintptr_t)gen_a1;
  HIMC param_3 = (HIMC)gen_a2;
  uint uVar1;
  DWORD dwBufLen;
  GEN_LPANY lpCandList;
  DWORD DVar2;
  undefined * PTR32 * ppuVar3;
  int iVar4;
  uint local_8;
  
  dwBufLen = gen_imp_ImmGetCandidateListW(param_3,in_eax,(GEN_LPANY)0x0,0);
  if (dwBufLen != 0) {
    lpCandList = (GEN_LPANY)F_00406a50(dwBufLen);
    *in_esi = (int)lpCandList;
    DVar2 = gen_imp_ImmGetCandidateListW(param_3,in_eax,lpCandList,dwBufLen);
    if (DVar2 != 0) {
      ((code *)REFG(gen_code32, 0x14c0d54))(*(undefined4 *)(*in_esi + 8));
      local_8 = 0;
      if (*(int *)(*in_esi + 8) != 0) {
        iVar4 = 0x18;
        do {
          uVar1 = *(uint *)(iVar4 + *in_esi);
          if (uVar1 < dwBufLen) {
            ppuVar3 = (undefined * PTR32 *)(*in_esi + uVar1);
          }
          else {
            ppuVar3 = &REFG(undefined * PTR32, 0x10ed11c);
          }
          ((code *)REFG(gen_code32, 0x14c0d58))(ppuVar3);
          local_8 = local_8 + 1;
          iVar4 = iVar4 + 4;
        } while (local_8 < *(uint *)(*in_esi + 8));
      }
      REFG(undefined4, 0x14c0d68) = dwBufLen;
      return dwBufLen;
    }
  }
  return 0;
}

/* ref: FUN_00b126f0 */
uint F_00b126f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb126f0u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (REFG(int, 0x14c0d68) == 0) {
    uVar2 = 0;
    if (in_eax != 0) {
      uVar1 = F_00b12630(0,&(*(int *)(gen_frame + 0x8)),in_eax);
      uVar2 = 0;
      if (uVar1 != 0) {
        ((code *)REFG(gen_code32, 0x14c0d5c))(*(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0xc));
        uVar3 = F_00406b30((*(int *)(gen_frame + 0x8)));
        return (uint)uVar3;
      }
    }
  }
  else {
    uVar2 = ((code *)REFG(gen_code32, 0x14c0d64))();
    REFG(int, 0x14c0d68) = 0;
    if (in_eax != 0) {
      uVar1 = F_00b12630(0,&(*(int *)(gen_frame + 0x8)),in_eax);
      uVar2 = 0;
      if (uVar1 != 0) {
        ((code *)REFG(gen_code32, 0x14c0d5c))(*(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0xc));
        uVar3 = F_00406b30((*(int *)(gen_frame + 0x8)));
        uVar2 = (uint)uVar3;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00b12780 */
uint F_00b12780(unsigned int gen_a0)
{
  GEN_ENTER(0xb12780u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (REFG(int, 0x14c0d68) != 0) {
    uVar1 = 0;
    if (in_eax != 0) {
      uVar2 = F_00b12630(0,&(*(int *)(gen_frame + 0x8)),in_eax);
      uVar1 = 0;
      if (uVar2 != 0) {
        ((code *)REFG(gen_code32, 0x14c0d60))(*(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0xc),*(int *)((*(int *)(gen_frame + 0x8)) + 8) + -1);
        uVar3 = F_00406b30((*(int *)(gen_frame + 0x8)));
        uVar1 = (uint)uVar3;
      }
    }
    return uVar1;
  }
  uVar1 = F_00b126f0(in_eax);
  return uVar1;
}

/* ref: FUN_00b127d0 */
unsigned int F_00b127d0(void)
{
  GEN_ENTER(0xb127d0u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x14c0d68) != 0) {
    ((code *)REFG(gen_code32, 0x14c0d64))();
    REFG(int, 0x14c0d68) = 0;
  }
  return 0;
}

/* ref: FUN_00b127f0 */
uint F_00b127f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb127f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  HIMC param_2 = (HIMC)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  LONG LVar1;
  int iVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_2 != (HIMC)0x0) {
    if (param_3 < 0x110) {
      if (param_3 != 0x10f) {
        if (param_3 == 0x51) {
          ((code *)REFG(gen_code32, 0x14c0d48))();
          *param_6 = 1;
          F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
          return 0;
        }
        if (param_3 != 0x10d) {
          if (param_3 == 0x10e) {
            if (REFG(char, 0x14c0d6c) == '\0') {
              ((code *)REFG(gen_code32, 0x14c0d50))(&REFG(undefined, 0x10ed120));
            }
            REFG(char, 0x14c0d6c) = 0;
            *param_6 = 1;
            F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
            return 0;
          }
          goto LAB_00b12a29;
        }
      }
      if ((*param_5 & 0x800) != 0) {
        LVar1 = gen_imp_ImmGetCompositionStringW(param_2,0x800,((undefined2 *)(gen_frame + 0x408)),0x1ff);
        if (LVar1 < 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = LVar1 >> 1;
        }
        ((undefined2 *)(gen_frame + 0x408))[iVar2] = 0;
        ((code *)REFG(gen_code32, 0x14c0d50))(((undefined2 *)(gen_frame + 0x408)));
        REFG(char, 0x14c0d6c) = '\x01';
      }
      if ((*param_5 & 8) != 0) {
        LVar1 = gen_imp_ImmGetCompositionStringW(param_2,8,((undefined2 *)(gen_frame + 0x8)),0x1ff);
        if (LVar1 < 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = LVar1 >> 1;
        }
        ((undefined2 *)(gen_frame + 0x8))[uVar3] = 0;
        LVar1 = gen_imp_ImmGetCompositionStringW(param_2,0x10,((undefined1 *)(gen_frame + 0x608)),0x1ff);
        ((undefined1 *)(gen_frame + 0x608))[(LVar1 < 0) - 1 & uVar3] = 0;
        LVar1 = gen_imp_ImmGetCompositionStringW(param_2,0x80,(LPVOID)0x0,0);
        ((code *)REFG(gen_code32, 0x14c0d4c))(((undefined2 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x608)),uVar3,LVar1);
        REFG(char, 0x14c0d6c) = '\0';
      }
      *param_6 = 1;
      F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
      return 0;
    }
    if (param_3 == 0x281) {
      *param_5 = *param_5 & 0x3ffffff0;
    }
    else if (param_3 == 0x282) {
      if (param_4 == 3) {
        if (((char *)REFP(0x133a324))[0x16] != '\0') {
          F_00b12780(param_2);
        }
        *param_6 = 1;
        F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
        return 0;
      }
      if (param_4 == 4) {
        if (((char *)REFP(0x133a324))[0x16] != '\0') {
          F_00b127d0();
        }
        *param_6 = 1;
        F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
        return 0;
      }
      if (param_4 == 5) {
        if (((char *)REFP(0x133a324))[0x16] != '\0') {
          F_00b126f0(param_2);
        }
        *param_6 = 1;
        F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
        return 0;
      }
    }
  }
LAB_00b12a29: ;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return 0;
}

/* ref: FUN_00b12aa0 */
uint F_00b12aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb12aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10ed128));
  F_00b105f0((undefined *)((int)this + 4),0xa0,1);
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10ed150));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10ed148));
  return (uint)this;
}

/* ref: Client::System::Input::KeyboardDevice::vf2 */
unsigned int F_00b12ae0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb12ae0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  F_00b10770(param_1 + 4,param_2,&REFG(undefined4, 0x14c0d74),1,8);
  iVar2 = 8;
  uVar3 = REFG(undefined4, 0x14c1200);
  do {
    if ((*(byte *)(&REFG(undefined4, 0x14c0d74) + iVar2) & 8) != 0) {
      uVar1 = uVar3 + 1 & 0x3f;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = CONCAT11((char)iVar2,8);
      if (REFG(undefined4, 0x14c11fc) != uVar1) {
        *(undefined4 *)(&REFG(undefined, 0x14c0ff4) + uVar3 * 8) = (*(undefined4 *)(gen_frame + 0x4));
        *(undefined4 *)(&REFG(undefined, 0x14c0ff8) + REFG(undefined4, 0x14c1200) * 8) = 0;
        uVar3 = uVar1;
        REFG(undefined4, 0x14c1200) = uVar1;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xa0);
  return 0;
}

/* ref: Client::System::Input::KeyboardDevice::vf5 */
unsigned int F_00b12b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb12b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = 0xe;
  if ((char)param_1 != '\0') {
    uVar1 = 0xf;
  }
  REFG(undefined4, 0x14c0d70) = 0;
  REFG(undefined4, 0x14c11fc) = 0;
  REFG(undefined4, 0x14c1200) = 0;
  puVar2 = &REFG(undefined4, 0x14c0d74);
  do {
    *puVar2 = *puVar2 & ~uVar1;
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x14c0ff4);
  return 0;
}

/* ref: Client::System::Input::KeyboardDevice::vf6 */
unsigned int F_00b12ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb12ba0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  if ((byte)((byte)(*(undefined4 *)&gen_args[1]) + 0x80) < 0x20) {
    (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) = ((char *)REFP(0x133a3ad))[(byte)(*(undefined4 *)&gen_args[1]) + 3];
  }
  gen_imp_MapVirtualKeyA((uint)(byte)(*(undefined4 *)&gen_args[1]),0);
  switch((unsigned int)(uintptr_t)((uint)(byte)(*(undefined4 *)&gen_args[1]))) {
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
  case 0x24: ;
  case 0x25: ;
  case 0x26: ;
  case 0x27: ;
  case 0x28: ;
  case 0x2d: ;
  case 0x2e: ;
  case 0x6f: ;
  case 0x90: ;
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 1;
  (*(DWORD *)((char *)((undefined *)(gen_frame + 0x4)))) = 1;
  (*(ushort *)(gen_frame + 0x24)) = (ushort)(byte)(*(undefined4 *)&gen_args[1]);
  (*(WORD *)(((char *)((undefined *)(gen_frame + 0x4)) + 4))) = (ushort)(byte)(*(undefined4 *)&gen_args[1]);
  (*(undefined2 *)(gen_frame + 0x26)) = 0;
  (*((WORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x4)) + 4) + 2))))) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*((DWORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x4)) + 4) + 12))))) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*((DWORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x4)) + 4) + 8))))) = 0;
  (*((LONG *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x4)) + 4) + 4))))) = 4;
  (*(undefined4 *)(gen_frame + 0x28)) = 6;
  gen_imp_SendInput(2,((undefined *)(gen_frame + 0x4)),0x1c);
  return 0;
}

/* ref: FUN_00b12cc0 */
unsigned int F_00b12cc0(void)
{
  GEN_ENTER(0xb12cc0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0x21;
  uVar2 = REFG(undefined4, 0x14c1200);
  do {
    if (((&REFG(undefined4, 0x14c0d74))[iVar3] & 1) != 0) {
      (&REFG(undefined4, 0x14c0d74))[iVar3] = (&REFG(undefined4, 0x14c0d74))[iVar3] & 0xfffffffe | 4;
      uVar1 = REFG(undefined4, 0x14c1200) + 1 & 0x3f;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = CONCAT11((char)iVar3,2);
      uVar2 = REFG(undefined4, 0x14c1200);
      if (REFG(undefined4, 0x14c11fc) != uVar1) {
        *(undefined4 *)(&REFG(undefined, 0x14c0ff4) + REFG(undefined4, 0x14c1200) * 8) = (*(undefined4 *)(gen_frame + 0x4));
        *(undefined4 *)(&REFG(undefined, 0x14c0ff8) + REFG(undefined4, 0x14c1200) * 8) = 0;
        uVar2 = uVar1;
        REFG(undefined4, 0x14c1200) = uVar1;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x29);
  iVar3 = 0x60;
  do {
    if (((&REFG(undefined4, 0x14c0d74))[iVar3] & 1) != 0) {
      (&REFG(undefined4, 0x14c0d74))[iVar3] = (&REFG(undefined4, 0x14c0d74))[iVar3] & 0xfffffffe | 4;
      uVar1 = REFG(undefined4, 0x14c1200) + 1 & 0x3f;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = CONCAT11((char)iVar3,2);
      uVar2 = REFG(undefined4, 0x14c1200);
      if (REFG(undefined4, 0x14c11fc) != uVar1) {
        *(undefined4 *)(&REFG(undefined, 0x14c0ff4) + REFG(undefined4, 0x14c1200) * 8) = (*(undefined4 *)(gen_frame + 0x4));
        *(undefined4 *)(&REFG(undefined, 0x14c0ff8) + REFG(undefined4, 0x14c1200) * 8) = 0;
        uVar2 = uVar1;
        REFG(undefined4, 0x14c1200) = uVar1;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x6a);
  if ((REFG(undefined4, 0x14c0f2c) & 1) != 0) {
    REFG(undefined4, 0x14c0f2c) = REFG(undefined4, 0x14c0f2c) & 0xfffffffe | 4;
    uVar1 = uVar2 + 1 & 0x3f;
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 2)),0x6e02);
    if (REFG(undefined4, 0x14c11fc) != uVar1) {
      *(undefined4 *)(&REFG(undefined, 0x14c0ff4) + uVar2 * 8) = (*(undefined4 *)(gen_frame + 0x4));
      *(undefined4 *)(&REFG(undefined, 0x14c0ff8) + REFG(undefined4, 0x14c1200) * 8) = 0;
      REFG(undefined4, 0x14c1200) = uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00b12df0 */
unsigned int F_00b12df0(void)
{
  GEN_ENTER(0xb12df0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (((&REFG(undefined4, 0x14c0d74))[iVar2] & 1) != 0) {
      (&REFG(undefined4, 0x14c0d74))[iVar2] = (&REFG(undefined4, 0x14c0d74))[iVar2] & 0xfffffffe | 4;
      uVar1 = REFG(undefined4, 0x14c1200) + 1 & 0x3f;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = CONCAT11((char)iVar2,2);
      if (REFG(undefined4, 0x14c11fc) != uVar1) {
        *(undefined4 *)(&REFG(undefined, 0x14c0ff4) + REFG(undefined4, 0x14c1200) * 8) = (*(undefined4 *)(gen_frame + 0x4));
        *(undefined4 *)(&REFG(undefined, 0x14c0ff8) + REFG(undefined4, 0x14c1200) * 8) = 0;
        REFG(undefined4, 0x14c1200) = uVar1;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xa0);
  return 0;
}

/* ref: FUN_00b12e60 */
uint F_00b12e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb12e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  ushort uVar1;
  uint uVar2;
  undefined1 uVar3;
  byte bVar4;
  BOOL BVar5;
  bool bVar6;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  if (param_2 < 0x101) {
    if (param_2 == 0x100) {
switchD_00b12eb4_caseD_104: ;
      if ((param_4 & 0x40000000) == 0) {
        if ((0xef < param_3) || (bVar4 = (&REFG(undefined, 0x133a340))[param_3], bVar4 == 0)) {
          bVar4 = 1;
        }
        if (((&REFG(undefined4, 0x14c0d74))[bVar4] & 1) == 0) {
          if (bVar4 != 1) {
            (&REFG(undefined4, 0x14c0d74))[bVar4] = (&REFG(undefined4, 0x14c0d74))[bVar4] | 3;
          }
          (*(uint *)(gen_frame + 0xc)) = 0;
          if (((((0x40 < bVar4) && (bVar4 < 0x5b)) || ((0x2f < bVar4 && (bVar4 < 0x3a)))) ||
              (((0x5f < bVar4 && (bVar4 < 0x6a)) || (bVar4 == 0x20)))) &&
             (((BVar5 = gen_imp_GetKeyboardState(((BYTE *)(gen_frame + 0x10))), BVar5 != 0 && (((*(byte *)(gen_frame + 0x21)) & 0x80) == 0)) &&
              (((*(byte *)(gen_frame + 0x22)) & 0x80) == 0)))) {
            gen_imp_ToAscii(param_3,(int)param_4 >> 0x10 & 0xff,((BYTE *)(gen_frame + 0x10)),(LPWORD)&(*(uint *)(gen_frame + 0xc)),0);
          }
          (*(uint *)(gen_frame + 0x114)) = (*(uint *)(gen_frame + 0xc)) & 0xffff;
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 0)) = 1;
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 1)) = bVar4;
          (*(ushort *)(gen_frame + 0x110)) = CONCAT11(bVar4,1);
          F_00b132a0(&REFG(undefined, 0x14c0ff4),&(*(ushort *)(gen_frame + 0x110)));
          REFG(undefined4, 0x14c0d70) = 1;
        }
        if ((bVar4 == 0x10) || (bVar4 == 0x80)) {
          F_00b12cc0();
        }
        if ((bVar4 == 0xd) || (bVar4 == 0x1b)) {
          *(uint *)&REFG(undefined, 0x14c0db4) = *(uint *)&REFG(undefined, 0x14c0db4) & 0xfffffffe;
          *(uint *)&REFG(undefined, 0x14c0dbc) = *(uint *)&REFG(undefined, 0x14c0dbc) & 0xfffffffe;
          *(uint *)&REFG(undefined, 0x14c0db8) = *(uint *)&REFG(undefined, 0x14c0db8) & 0xfffffffe;
          F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
          return 0;
        }
      }
      goto switchD_00b12eb4_caseD_103;
    }
    if (param_2 != 6) goto switchD_00b12eb4_caseD_103;
    bVar6 = (short)param_3 == 0;
LAB_00b1314b: ;
    if (!bVar6) goto switchD_00b12eb4_caseD_103;
  }
  else {
    if (0x211 < param_2) {
      bVar6 = param_2 == 0x231;
      goto LAB_00b1314b;
    }
    if (param_2 != 0x211) {
      switch((unsigned int)(uintptr_t)(param_2)) {
      case 0x101: ;
      case 0x105: ;
        bVar4 = F_00b13280(param_3);
        if (bVar4 == 0) {
          bVar4 = 1;
        }
        else if (bVar4 == 0x2c) {
          *(uint *)&REFG(undefined, 0x14c0e24) = *(uint *)&REFG(undefined, 0x14c0e24) | 2;
          (*(ushort *)(gen_frame + 0x110)) = 0x2c01;
          (*(uint *)(gen_frame + 0x114)) = 0;
          F_00b132a0(&REFG(undefined, 0x14c0ff4),&(*(ushort *)(gen_frame + 0x110)));
          REFG(undefined4, 0x14c0d70) = 1;
        }
        if (((&REFG(undefined4, 0x14c0d74))[bVar4] & 1) != 0) {
          (&REFG(undefined4, 0x14c0d74))[bVar4] = (&REFG(undefined4, 0x14c0d74))[bVar4] & 0xfffffffe | 4;
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 0)) = 2;
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 1)) = bVar4;
          (*(ushort *)(gen_frame + 0x110)) = CONCAT11(bVar4,2);
          (*(uint *)(gen_frame + 0x114)) = 0;
          F_00b132a0(&REFG(undefined, 0x14c0ff4),&(*(ushort *)(gen_frame + 0x110)));
          F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
          return 0;
        }
        break;
      case 0x102: ;
      case 0x106: ;
        (*(uint *)(gen_frame + 0xc)) = 0;
        F_0042ad80(param_3,&(*(uint *)(gen_frame + 0xc)));
        uVar2 = (*(uint *)(gen_frame + 0x114));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 0)) = (byte)(*(uint *)(gen_frame + 0xc));
        if ((*(uint *)(gen_frame + 0xc)) < 0x100) {
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 1)) = 0;
          (*(ushort *)(gen_frame + 0x110)) = (ushort)(byte)(*(uint *)(gen_frame + 0xc));
        }
        else {
          uVar3 = (undefined1)((*(uint *)(gen_frame + 0xc)) >> 8);
          (*(ushort *)(gen_frame + 0x110)) = (ushort)(*(uint *)(gen_frame + 0xc));
          uVar1 = (*(ushort *)(gen_frame + 0x110));
          (*(ushort *)(gen_frame + 0x110)) = uVar1;
          if ((*(uint *)(gen_frame + 0xc)) < 0x10000) {
            (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 1)) = uVar3;
            (*(undefined1 *)(gen_frame + 0x112)) = 0;
          }
          else {
            (*(undefined1 *)(gen_frame + 0x112)) = (undefined1)((*(uint *)(gen_frame + 0xc)) >> 0x10);
            if ((*(uint *)(gen_frame + 0xc)) < 0x1000000) {
              (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 1)) = uVar3;
              (*(undefined1 *)(gen_frame + 0x113)) = 0;
            }
            else {
              (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 1)) = uVar3;
              (*(undefined1 *)(gen_frame + 0x113)) = (char)((*(uint *)(gen_frame + 0xc)) >> 0x18);
              (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x114)) + 0)) = 0;
              (*(uint *)(gen_frame + 0x114)) = uVar2 & 0xffffff00;
            }
          }
        }
        bVar4 = F_0042a800(&(*(ushort *)(gen_frame + 0x110)),REFG(undefined4, 0x108cc50));
        if (bVar4 != 0) {
          ((undefined2 *)(gen_frame + 0x4))[0] = 4;
          (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0xc));
          F_00b132a0(&REFG(undefined, 0x14c0ff4),((undefined2 *)(gen_frame + 0x4)));
          REFG(undefined4, 0x14c0d70) = 1;
          F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
          return 0;
        }
        break;
      case 0x104: ;
        goto switchD_00b12eb4_caseD_104;
      }
      goto switchD_00b12eb4_caseD_103;
    }
  }
  F_00b12df0();
switchD_00b12eb4_caseD_103: ;
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return 0;
}

/* ref: Client::System::Input::KeyboardDeviceInterface::vf0 */
uint F_00b13250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb13250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10ed128));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b13280 */
byte F_00b13280(unsigned int gen_a0)
{
  GEN_ENTER(0xb13280u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (0xef < param_1) {
    return 0;
  }
  return (&REFG(undefined, 0x133a340))[param_1];
}

/* ref: FUN_00b132a0 */
unsigned int F_00b132a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb132a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x20c);
  uVar2 = iVar1 + 1U & 0x3f;
  if (*(uint *)((int)this + 0x208) != uVar2) {
    *(undefined4 *)((int)this + iVar1 * 8) = *param_1;
    *(undefined4 *)((int)this + iVar1 * 8 + 4) = param_1[1];
    *(uint *)((int)this + 0x20c) = uVar2;
  }
  return 0;
}

/* ref: FUN_00b132e0 */
uint F_00b132e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb132e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b13300((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: Client::System::Input::KeyboardDevice::vf4 */
uint F_00b132f0(void)
{
  GEN_ENTER(0xb132f0u, 0u, 0u, 0u, 0u);
  return 0x14c0d70;
}

/* ref: FUN_00b133e0 */
byte F_00b133e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb133e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (&REFG(undefined, 0x133a588))[(byte)param_1];
}

/* ref: FUN_00b133f0 */
uint F_00b133f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb133f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
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
  undefined1 auVar19 [16];
  
  fVar3 = *param_5;
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  uVar7 = 0;
  uVar8 = 0;
  if (param_4 != 0) {
    pfVar9 = (float *)(param_3 + 0x20);
    do {
      fVar15 = ((pfVar9[-8] * fVar3 + pfVar9[-4]) + *pfVar9 * fVar4) + pfVar9[4] * fVar5;
      fVar16 = ((pfVar9[-7] * fVar3 + pfVar9[-3]) + pfVar9[1] * fVar4) + pfVar9[5] * fVar5;
      fVar17 = ((pfVar9[-6] * fVar3 + pfVar9[-2]) + pfVar9[2] * fVar4) + pfVar9[6] * fVar5;
      fVar18 = ((pfVar9[-5] * fVar3 + pfVar9[-1]) + pfVar9[3] * fVar4) + pfVar9[7] * fVar5;
      fVar11 = ((pfVar9[8] * fVar3 + pfVar9[0xc]) + pfVar9[0x10] * fVar4) + pfVar9[0x14] * fVar5;
      fVar12 = ((pfVar9[9] * fVar3 + pfVar9[0xd]) + pfVar9[0x11] * fVar4) + pfVar9[0x15] * fVar5;
      fVar13 = ((pfVar9[10] * fVar3 + pfVar9[0xe]) + pfVar9[0x12] * fVar4) + pfVar9[0x16] * fVar5;
      fVar14 = ((pfVar9[0xb] * fVar3 + pfVar9[0xf]) + pfVar9[0x13] * fVar4) + pfVar9[0x17] * fVar5;
      (*(undefined4 *)((char *)&auVar19 + 4)) = -(uint)(fVar6 < fVar12);
      (*(undefined4 *)((char *)&auVar19 + 0)) = -(uint)(fVar6 < fVar11);
      (*(undefined4 *)((char *)&auVar19 + 8)) = -(uint)(fVar6 < fVar13);
      (*(undefined4 *)((char *)&auVar19 + 12)) = -(uint)(fVar6 < fVar14);
      (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)(fVar6 < fVar16);
      (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)(fVar6 < fVar15);
      (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)(fVar6 < fVar17);
      (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)(fVar6 < fVar18);
      undefined1 gen_vt0[16]; gen_v16_or(gen_vt0, &(auVar19), &(auVar2));
      iVar10 = gen_movmskps(gen_vt0);
      if (iVar10 == 0) {
        (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(fVar12 < 0.0 - fVar6 && fVar16 < 0.0 - fVar6);
        (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(fVar11 < 0.0 - fVar6 && fVar15 < 0.0 - fVar6);
        (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(fVar13 < 0.0 - fVar6 && fVar17 < 0.0 - fVar6);
        (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(fVar14 < 0.0 - fVar6 && fVar18 < 0.0 - fVar6);
        iVar10 = gen_movmskps(&(auVar1));
        if (iVar10 == 0xf) {
          *(undefined1 *)(uVar7 + param_1) = 3;
        }
        else {
          *(undefined1 *)(uVar7 + param_1) = 1;
        }
        *(char *)(uVar7 + param_2) = (char)uVar8;
        uVar7 = uVar7 + 1;
      }
      pfVar9 = pfVar9 + 0x20;
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_4);
  }
  return uVar7;
}

/* ref: FUN_00b134f0 */
uint F_00b134f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb134f0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  undefined4 in_ECX = 0;
  int iVar7;
  undefined4 in_EDX = 0;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  
  fVar11 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  fVar12 = ((*param_1 * fVar11 + param_1[4]) + param_1[8] * fVar3) + param_1[0xc] * fVar4;
  fVar13 = ((param_1[1] * fVar11 + param_1[5]) + param_1[9] * fVar3) + param_1[0xd] * fVar4;
  fVar14 = ((param_1[2] * fVar11 + param_1[6]) + param_1[10] * fVar3) + param_1[0xe] * fVar4;
  fVar15 = ((param_1[3] * fVar11 + param_1[7]) + param_1[0xb] * fVar3) + param_1[0xf] * fVar4;
  fVar8 = ((param_1[0x10] * fVar11 + param_1[0x14]) + param_1[0x18] * fVar3) + param_1[0x1c] * fVar4
  ;
  fVar9 = ((param_1[0x11] * fVar11 + param_1[0x15]) + param_1[0x19] * fVar3) + param_1[0x1d] * fVar4
  ;
  fVar10 = ((param_1[0x12] * fVar11 + param_1[0x16]) + param_1[0x1a] * fVar3) +
           param_1[0x1e] * fVar4;
  fVar11 = ((param_1[0x13] * fVar11 + param_1[0x17]) + param_1[0x1b] * fVar3) +
           param_1[0x1f] * fVar4;
  (*(undefined4 *)((char *)&auVar16 + 4)) = -(uint)(fVar5 < fVar9);
  (*(undefined4 *)((char *)&auVar16 + 0)) = -(uint)(fVar5 < fVar8);
  (*(undefined4 *)((char *)&auVar16 + 8)) = -(uint)(fVar5 < fVar10);
  (*(undefined4 *)((char *)&auVar16 + 12)) = -(uint)(fVar5 < fVar11);
  (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)(fVar5 < fVar13);
  (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)(fVar5 < fVar12);
  (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)(fVar5 < fVar14);
  (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)(fVar5 < fVar15);
  undefined1 gen_vt0[16]; gen_v16_or(gen_vt0, &(auVar16), &(auVar2));
  iVar7 = gen_movmskps(gen_vt0);
  uVar6 = 0;
  if (iVar7 == 0) {
    (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(fVar9 < 0.0 - fVar5 && fVar13 < 0.0 - fVar5);
    (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(fVar8 < 0.0 - fVar5 && fVar12 < 0.0 - fVar5);
    (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(fVar10 < 0.0 - fVar5 && fVar14 < 0.0 - fVar5);
    (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(fVar11 < 0.0 - fVar5 && fVar15 < 0.0 - fVar5);
    iVar7 = gen_movmskps(&(auVar1));
    uVar6 = (uint)(iVar7 == 0xf) * 2 + 1;
  }
  return uVar6;
}

/* ref: FUN_00b13590 */
uint F_00b13590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb13590u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined4 in_EDX = 0;
  int iVar5;
  undefined1 auVar6 [16];
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
  
  fVar10 = *param_2;
  fVar15 = param_2[1];
  fVar16 = param_2[2];
  fVar11 = ((*param_1 * fVar10 + param_1[4]) + param_1[8] * fVar15) + param_1[0xc] * fVar16;
  fVar12 = ((param_1[1] * fVar10 + param_1[5]) + param_1[9] * fVar15) + param_1[0xd] * fVar16;
  fVar13 = ((param_1[2] * fVar10 + param_1[6]) + param_1[10] * fVar15) + param_1[0xe] * fVar16;
  fVar14 = ((param_1[3] * fVar10 + param_1[7]) + param_1[0xb] * fVar15) + param_1[0xf] * fVar16;
  fVar22 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar7 = ((param_1[0x10] * fVar10 + param_1[0x14]) + param_1[0x18] * fVar15) +
          param_1[0x1c] * fVar16;
  fVar8 = ((param_1[0x11] * fVar10 + param_1[0x15]) + param_1[0x19] * fVar15) +
          param_1[0x1d] * fVar16;
  fVar9 = ((param_1[0x12] * fVar10 + param_1[0x16]) + param_1[0x1a] * fVar15) +
          param_1[0x1e] * fVar16;
  fVar10 = ((param_1[0x13] * fVar10 + param_1[0x17]) + param_1[0x1b] * fVar15) +
           param_1[0x1f] * fVar16;
  fVar15 = (gen_bits2f((uint)gen_fl2bits(param_1[8]) & *(uint *)&REFG(undefined, 0x10ed1b0)) * fVar3 +
           gen_bits2f((uint)gen_fl2bits(*param_1) & *(uint *)&REFG(undefined, 0x10ed1b0)) * fVar22) +
           gen_bits2f((uint)gen_fl2bits(param_1[0xc]) & *(uint *)&REFG(undefined, 0x10ed1b0)) * fVar4;
  fVar16 = (gen_bits2f((uint)gen_fl2bits(param_1[9]) & *(uint *)&REFG(undefined, 0x10ed1b4)) * fVar3 +
           gen_bits2f((uint)gen_fl2bits(param_1[1]) & *(uint *)&REFG(undefined, 0x10ed1b4)) * fVar22) +
           gen_bits2f((uint)gen_fl2bits(param_1[0xd]) & *(uint *)&REFG(undefined, 0x10ed1b4)) * fVar4;
  fVar17 = (gen_bits2f((uint)gen_fl2bits(param_1[10]) & *(uint *)&REFG(undefined, 0x10ed1b8)) * fVar3 +
           gen_bits2f((uint)gen_fl2bits(param_1[2]) & *(uint *)&REFG(undefined, 0x10ed1b8)) * fVar22) +
           gen_bits2f((uint)gen_fl2bits(param_1[0xe]) & *(uint *)&REFG(undefined, 0x10ed1b8)) * fVar4;
  fVar18 = (gen_bits2f((uint)gen_fl2bits(param_1[0xb]) & *(uint *)&REFG(undefined, 0x10ed1bc)) * fVar3 +
           gen_bits2f((uint)gen_fl2bits(param_1[3]) & *(uint *)&REFG(undefined, 0x10ed1bc)) * fVar22) +
           gen_bits2f((uint)gen_fl2bits(param_1[0xf]) & *(uint *)&REFG(undefined, 0x10ed1bc)) * fVar4;
  fVar19 = (gen_bits2f((uint)gen_fl2bits(param_1[0x18]) & *(uint *)&REFG(undefined, 0x10ed1b0)) * fVar3 +
           gen_bits2f((uint)gen_fl2bits(param_1[0x10]) & *(uint *)&REFG(undefined, 0x10ed1b0)) * fVar22) +
           gen_bits2f((uint)gen_fl2bits(param_1[0x1c]) & *(uint *)&REFG(undefined, 0x10ed1b0)) * fVar4;
  fVar20 = (gen_bits2f((uint)gen_fl2bits(param_1[0x19]) & *(uint *)&REFG(undefined, 0x10ed1b4)) * fVar3 +
           gen_bits2f((uint)gen_fl2bits(param_1[0x11]) & *(uint *)&REFG(undefined, 0x10ed1b4)) * fVar22) +
           gen_bits2f((uint)gen_fl2bits(param_1[0x1d]) & *(uint *)&REFG(undefined, 0x10ed1b4)) * fVar4;
  fVar21 = (gen_bits2f((uint)gen_fl2bits(param_1[0x1a]) & *(uint *)&REFG(undefined, 0x10ed1b8)) * fVar3 +
           gen_bits2f((uint)gen_fl2bits(param_1[0x12]) & *(uint *)&REFG(undefined, 0x10ed1b8)) * fVar22) +
           gen_bits2f((uint)gen_fl2bits(param_1[0x1e]) & *(uint *)&REFG(undefined, 0x10ed1b8)) * fVar4;
  fVar22 = (gen_bits2f((uint)gen_fl2bits(param_1[0x1b]) & *(uint *)&REFG(undefined, 0x10ed1bc)) * fVar3 +
           gen_bits2f((uint)gen_fl2bits(param_1[0x13]) & *(uint *)&REFG(undefined, 0x10ed1bc)) * fVar22) +
           gen_bits2f((uint)gen_fl2bits(param_1[0x1f]) & *(uint *)&REFG(undefined, 0x10ed1bc)) * fVar4;
  (*(undefined4 *)((char *)&auVar6 + 4)) = -(uint)(fVar20 < fVar8);
  (*(undefined4 *)((char *)&auVar6 + 0)) = -(uint)(fVar19 < fVar7);
  (*(undefined4 *)((char *)&auVar6 + 8)) = -(uint)(fVar21 < fVar9);
  (*(undefined4 *)((char *)&auVar6 + 12)) = -(uint)(fVar22 < fVar10);
  (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)(fVar16 < fVar12);
  (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)(fVar15 < fVar11);
  (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)(fVar17 < fVar13);
  (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)(fVar18 < fVar14);
  undefined1 gen_vt0[16]; gen_v16_or(gen_vt0, &(auVar6), &(auVar2));
  iVar5 = gen_movmskps(gen_vt0);
  if (iVar5 != 0) {
    return 0;
  }
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(fVar8 < 0.0 - fVar20 && fVar12 < 0.0 - fVar16);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(fVar7 < 0.0 - fVar19 && fVar11 < 0.0 - fVar15);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(fVar9 < 0.0 - fVar21 && fVar13 < 0.0 - fVar17);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(fVar10 < 0.0 - fVar22 && fVar14 < 0.0 - fVar18);
  iVar5 = gen_movmskps(&(auVar1));
  return (uint)(iVar5 == 0xf) * 2 + 1;
}

/* ref: FUN_00b136d0 */
uint F_00b136d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb136d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00bcb490(*(undefined * PTR32 *)((int)this + 0x3930),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00b136e0 */
uint F_00b136e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb136e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bcb5b0(*(undefined * PTR32 *)((int)this + 0x3930),param_1);
  return uVar1;
}

/* ref: FUN_00b13770 */
uint F_00b13770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb13770u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  
  LOCK();
  uVar1 = *param_2;
  if (param_3 == uVar1) {
    *param_2 = param_1;
    uVar1 = param_3;
  }
  UNLOCK();
  return uVar1;
}

/* ref: FUN_00b13780 */
unsigned int F_00b13780(unsigned int gen_a0)
{
  GEN_ENTER(0xb13780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  
  in_ecx = *(int *)((int)this + 0x3930);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed1ec));
  if (in_ecx != 0) {
    F_00bcabf0(in_ecx);
    F_00406ad0(in_ecx);
    *(undefined4 *)((int)this + 0x3930) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38bc) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ed1e4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3854) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ed1dc));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10ed1c4));
  return 0;
}

/* ref: FUN_00b13810 */
uint F_00b13810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb13810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  LOCK();
  UNLOCK();
  if ((char)param_1 == '\0') {
    if (REFG(undefined4, 0x14c1284) < 3) {
      return REFG(undefined4, 0x14c1284);
    }
  }
  else if (REFG(undefined4, 0x14c1284) == 0) {
    return 0;
  }
  do {
    uVar4 = 0;
    puVar2 = &REFG(undefined4, 0x14c1a10);
    uVar3 = 0;
    do {
      LOCK();
      puVar1 = (undefined4 *)*puVar2;
      if (puVar1 == (undefined4 *)0x2) {
        *puVar2 = 3;
        puVar1 = (undefined4 *)0x2;
      }
      UNLOCK();
      if (puVar1 == (undefined4 *)0x2) {
        puVar1 = &REFG(undefined4, 0x14c1284);
        LOCK();
        REFG(undefined4, 0x14c1284) = REFG(undefined4, 0x14c1284) - 1;
        UNLOCK();
        ((int *)(gen_frame + 0xc))[uVar4] = (int)puVar2;
        uVar4 = uVar4 + 1;
        if (2 < uVar4) break;
      }
      uVar3 = uVar3 + 0x50;
      puVar2 = puVar2 + 0x14;
    } while (uVar3 < 0x4b0);
    if (uVar4 != 0) {
      puVar1 = (undefined4 *)
               F_00a1a340(*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x392c),((int *)(gen_frame + 0xc)),uVar4,
                            *(undefined4 *)(((int *)(gen_frame + 0xc))[0] + 0x24));
    }
    if (((char)param_1 == '\0') || (uVar4 == 0)) {
      return (uint)puVar1;
    }
  } while( true );
}

/* ref: FUN_00b13ab0 */
unsigned int F_00b13ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb13ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  iVar2 = *(int *)((int)this + 0x10);
  uVar1 = *(ushort *)(param_3 + 0xff0);
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = 0;
      if (param_1 != 0) {
        puVar4 = ((undefined4 *)GEN_TOP((iVar2 + (uint)*((ushort *)GEN_TOP((param_3 + 0xf00 + (uVar5 & 0xffff) * 2))) * 0x10)));
        do {
          *puVar4 = *(undefined4 *)(param_2 + uVar3 * 4);
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar3 < param_1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return 0;
}

/* ref: FUN_00b13b20 */
uint F_00b13b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb13b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  uint * puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  iVar4 = *(int *)((int)this + 0x10);
  uVar3 = *(ushort *)(param_5 + 0xff0);
  uVar6 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (uVar3 != 0) {
    do {
      uVar9 = (*(uint *)(gen_frame + 0xc)) & 0xffff;
      iVar7 = uVar9 * 0x10 + param_5;
      uVar6 = F_00b133f0(((byte *)(gen_frame + 0x58)),((byte *)(gen_frame + 0x18)),param_1,param_4,iVar7);
      if (uVar6 != 0) {
        iVar5 = (uint)*(ushort *)(param_5 + 0xf00 + uVar9 * 2) * 4;
        (*(uint *)(gen_frame + 0x14)) = 0;
        if (uVar6 != 0) {
          do {
            bVar2 = ((byte *)(gen_frame + 0x18))[(*(uint *)(gen_frame + 0x14))];
            if (((byte *)(gen_frame + 0x58))[(*(uint *)(gen_frame + 0x14))] == 1) {
              uVar10 = (uint)bVar2;
              uVar8 = F_00b13590(uVar10 * 0x80 + param_1,iVar7,(uVar9 + 0x78) * 0x10 + param_5);
              if ((char)uVar8 != '\0') {
                puVar1 = ((uint *)GEN_TOP((iVar4 + ((uint)*(byte *)(uVar10 + param_2) + iVar5) * 4)));
                *puVar1 = *puVar1 | (uVar8 & 0xff) << (*(byte *)(uVar10 + param_3) & 0x1f);
              }
            }
            else {
              puVar1 = ((uint *)GEN_TOP((iVar4 + ((uint)*(byte *)((uint)bVar2 + param_2) + iVar5) * 4)));
              *puVar1 = *puVar1 | (uint)((byte *)(gen_frame + 0x58))[(*(uint *)(gen_frame + 0x14))] <<
                                  (*(byte *)((uint)bVar2 + param_3) & 0x1f);
            }
            (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 1;
          } while ((*(uint *)(gen_frame + 0x14)) < uVar6);
        }
      }
      uVar6 = (*(uint *)(gen_frame + 0xc)) + 1;
      (*(uint *)(gen_frame + 0xc)) = uVar6;
    } while (uVar6 < uVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar6;
}

/* ref: FUN_00b13cc0 */
unsigned int F_00b13cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb13cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  code * pcVar2;
  float * pfVar3;
  short * this_00;
  uint uVar4;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_18 = 0;
  local_1c = 0;
  do {
    uVar1 = *((uint *)GEN_TOP((local_1c + *(int *)((int)this + 0xc))));
    if (uVar1 != 0) {
      uVar4 = 0;
      local_14 = 1;
      do {
        if ((((local_14 & uVar1) != 0) &&
            (this_00 = ((short *)GEN_TOP(((local_18 + uVar4) * 0x10 + *(int *)((int)this + 8)))),
            *this_00 != -1)) &&
           (pcVar2 = *(gen_code32 *)(&REFG(undefined, 0x133a560) + (uint)*(byte *)(this_00 + 1) * 4),
           pcVar2 != (code *)0x0)) {
          pfVar3 = (float *)F_00b81f10(this_00);
          (*pcVar2)(*(undefined4 *)(this_00 + 2),
                    (undefined4)
                    gen_fl2bits(((float)GEN_TOF(((float10)(float)((float10)pfVar3[2] - (float10)param_1[2]) *
                                        (float10)(float)((float10)pfVar3[2] - (float10)param_1[2]) +
                                       ((float10)(float)((float10)pfVar3[1] - (float10)param_1[1]) *
                                        (float10)(float)((float10)pfVar3[1] - (float10)param_1[1]) +
                                       (float10)(float)((float10)*pfVar3 - (float10)*param_1) *
                                       (float10)(float)((float10)*pfVar3 - (float10)*param_1)))))));
        }
        uVar4 = uVar4 + 1;
        local_14 = local_14 << 1 | (uint)((int)local_14 < 0);
      } while (uVar4 < 0x20);
    }
    local_18 = local_18 + 0x20;
    local_1c = local_1c + 4;
  } while (local_1c < 0xa00);
  return 0;
}

/* ref: FUN_00b13dc0 */
unsigned int F_00b13dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb13dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  float * pfVar4;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  if (*(char *)((int)this + 6) != '\0') {
    uVar1 = *(undefined4 *)((int)this + param_1 * 4 + 0x18);
    local_18 = 0;
    local_20 = 0;
    do {
      uVar2 = *((uint *)GEN_TOP((local_20 + *(int *)((int)this + 0xc))));
      if (uVar2 != 0) {
        local_1c = 0;
        local_14 = 1;
        do {
          if ((local_14 & uVar2) != 0) {
            iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + (param_1 + (local_18 + local_1c) * 4) * 4)))
            ;
            if (iVar3 != 0) {
              this_00 = ((undefined *)GEN_TOP(((local_18 + local_1c) * 0x10 + *(int *)((int)this + 8))));
              pfVar4 = (float *)F_00b81f10(this_00);
              ((code *)*(gen_code32 *)(&REFG(undefined, 0x133a4e8) + (uint)*(byte *)((int)this_00 + 2) * 4))
                        (*(undefined4 *)((int)this_00 + 4),uVar1,iVar3,
                         (undefined4)
                         gen_fl2bits(((float)GEN_TOF(((float10)(float)((float10)pfVar4[2] -
                                                             (float10)param_2[2]) *
                                             (float10)(float)((float10)pfVar4[2] -
                                                             (float10)param_2[2]) +
                                            ((float10)(float)((float10)pfVar4[1] -
                                                             (float10)param_2[1]) *
                                             (float10)(float)((float10)pfVar4[1] -
                                                             (float10)param_2[1]) +
                                            (float10)(float)((float10)*pfVar4 - (float10)*param_2) *
                                            (float10)(float)((float10)*pfVar4 - (float10)*param_2)))))
                                    ));
            }
          }
          local_1c = local_1c + 1;
          local_14 = local_14 << 1 | (uint)((int)local_14 < 0);
        } while (local_1c < 0x20);
      }
      local_18 = local_18 + 0x20;
      local_20 = local_20 + 4;
    } while (local_20 < 0xa00);
  }
  return 0;
}

/* ref: FUN_00b13ef0 */
uint F_00b13ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xb13ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed1ec));
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3854) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ed1dc));
  *(undefined4 *)((int)this + 0x3858) = 0;
  *(undefined4 *)((int)this + 0x385c) = 0;
  *(undefined4 *)((int)this + 0x3860) = 0;
  *(undefined4 *)((int)this + 0x3864) = 0;
  *(undefined4 *)((int)this + 0x3868) = 0;
  *(undefined4 *)((int)this + 0x386c) = 0;
  *(undefined4 *)((int)this + 0x38b0) = 0;
  *(undefined4 *)((int)this + 0x38b4) = 0;
  *(undefined4 *)((int)this + 0x38b8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38bc) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ed1e4));
  *(undefined4 *)((int)this + 0x38c0) = 0;
  *(undefined4 *)((int)this + 0x38c4) = 0;
  *(undefined4 *)((int)this + 0x38c8) = 0;
  *(undefined4 *)((int)this + 0x38cc) = 0;
  *(undefined4 *)((int)this + 0x38d0) = 0;
  *(undefined4 *)((int)this + 0x38d4) = 0;
  *(undefined4 *)((int)this + 0x3918) = 0;
  *(undefined4 *)((int)this + 0x391c) = 0;
  *(undefined4 *)((int)this + 0x3920) = 0;
  *(undefined4 *)((int)this + 0x392c) = 0;
  uVar1 = F_00406b90(0x320120,0,0);
  if (uVar1 != 0) {
    uVar1 = F_00bcab40(uVar1);
    *(uint *)((int)this + 0x3930) = uVar1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x3930) = 0;
  return (uint)this;
}

/* ref: FUN_00b13fd0 */
byte F_00b13fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb13fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (uint *)((int)this + 0x3860);
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (uVar2 < *(uint *)((int)this + 0x385c)) {
    iVar4 = *(int *)((int)this + 0x3858) + uVar2 * 0x14;
  }
  else {
    iVar4 = 0;
  }
  iVar3 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  *(int *)(iVar3 + 0x1c0) = iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  puVar1 = (uint *)((int)this + 0x38c8);
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (*(uint *)((int)this + 0x38c4) <= uVar2) {
    *(undefined4 *)(iVar3 + 0x1c4) = 0;
    return 0;
  }
  iVar4 = *(int *)((int)this + 0x38c0) + uVar2 * 0x14;
  *(int *)(iVar3 + 0x1c4) = iVar4;
  return iVar4 != 0;
}

/* ref: FUN_00b14060 */
uint F_00b14060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb14060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  
  puVar5 = *(uint * PTR32 *)((int)this + 0xc);
  uVar4 = 0;
  do {
    uVar1 = *puVar5;
    if (uVar1 != 0xffffffff) {
      uVar3 = 0;
      do {
        uVar2 = 1 << ((byte)uVar3 & 0x1f);
        if ((uVar1 & uVar2) == 0) {
          *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + uVar4 * 4))) = uVar2 | uVar1;
          uVar4 = (uVar3 + uVar4 * 0x20) * 0x10 + *(int *)((int)this + 8);
          F_00b81e80(uVar4);
          *(char *)(uVar4 + 2) = (char)param_1;
          if ((char)param_1 != '\x02') {
            *(ushort *)(uVar4 + 0xe) = *(ushort *)(uVar4 + 0xe) & 0x7fff;
            return uVar4;
          }
          *(ushort *)(uVar4 + 0xe) = *(ushort *)(uVar4 + 0xe) | 0x8000;
          return uVar4;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x20);
    }
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar4 < 0x280);
  return 0;
}

/* ref: FUN_00b14100 */
unsigned int F_00b14100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb14100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 - *(int *)((int)this + 8) >> 4;
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xc) + (uVar2 >> 5) * 4)));
  *puVar1 = *puVar1 & ~(1 << ((byte)uVar2 & 0x1f));
  if (*param_1 != -1) {
    F_00bcb350(*(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930),param_1,(uint)*(byte *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00b14160 */
unsigned int F_00b14160(unsigned int gen_a0)
{
  GEN_ENTER(0xb14160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  F_00bcb9f0(*(undefined * PTR32 *)((int)this + 0x3930),(uint)*(byte *)((int)this + 4));
  if (*(char *)((int)this + 5) != '\0') {
    iVar1 = *(int *)(REFG(int, 0x137127c) + 0x66f4) + 0x90;
    F_0062e660((undefined *)(REFG(int, 0x137127c) + 0xaf90),iVar1);
    F_00b13cc0(this,iVar1);
    *(undefined1 *)((int)this + 5) = 0;
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_00b141b0 */
uint F_00b141b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb141b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined4 local_8;
  
  uVar2 = 0;
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*(char *)((int)this + 4));
  if (((*(char *)((int)this + 4) == '\0') && ((char)param_1[1] != '\x06')) && (-1 < param_1[7])) {
    uVar1 = F_00bcacd0(*(undefined * PTR32 *)((int)this + 0x3930),param_2);
    uVar2 = (uint)uVar1;
  }
  if (*param_1 == -1) {
    uVar2 = F_00bcb0b0(*(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930),uVar2,param_1,param_2,local_8);
    return uVar2;
  }
  uVar1 = F_00bcb330(*(undefined * PTR32 *)((int)this + 0x3930),param_1);
  if ((ushort)uVar2 == uVar1) {
    uVar2 = F_00bcb290(*(undefined * PTR32 *)((int)this + 0x3930),(uint)uVar1,param_1,param_2,local_8);
    return uVar2;
  }
  F_00bcb350(*(undefined * PTR32 *)((int)this + 0x3930),param_1,local_8);
  uVar2 = F_00bcb0b0(*(undefined * PTR32 *)((int)this + 0x3930),uVar2,param_1,param_2,local_8);
  return uVar2;
}

/* ref: FUN_00b14280 */
uint F_00b14280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb14280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined4 local_8;
  
  uVar2 = 0;
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*(char *)((int)this + 4));
  if (((*(char *)((int)this + 4) == '\0') && ((char)param_1[1] != '\x06')) && (-1 < param_1[7])) {
    uVar1 = F_00bcaee0(*(undefined * PTR32 *)((int)this + 0x3930),param_2);
    uVar2 = (uint)uVar1;
  }
  if (*param_1 == -1) {
    uVar2 = F_00bcb180(*(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930),uVar2,param_1,param_2,local_8);
    return uVar2;
  }
  uVar1 = F_00bcb330(*(undefined * PTR32 *)((int)this + 0x3930),param_1);
  if ((ushort)uVar2 == uVar1) {
    uVar2 = F_00bcb2e0(*(undefined * PTR32 *)((int)this + 0x3930),(uint)uVar1,param_1,param_2,local_8);
    return uVar2;
  }
  F_00bcb350(*(undefined * PTR32 *)((int)this + 0x3930),param_1,local_8);
  uVar2 = F_00bcb180(*(undefined * PTR32 *)((int)this + 0x3930),uVar2,param_1,param_2,local_8);
  return uVar2;
}

/* ref: FUN_00b14350 */
uint F_00b14350(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb14350u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  byte bVar1;
  undefined4 uVar2;
  code * pcVar3;
  uint uVar4;
  ushort * puVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  
  uVar4 = param_2 * 0x10;
  bVar1 = *((byte *)GEN_TOP((*(int *)(param_1 + 8) + 2 + uVar4)));
  uVar2 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 4 + uVar4)));
  pcVar3 = *(gen_code32 *)(&REFG(undefined, 0x133a510) + (uint)bVar1 * 4);
  if (pcVar3 != (code *)0x0) {
    if (bVar1 == 3) {
      puVar5 = ((ushort *)GEN_TOP((uVar4 + *(int *)(param_1 + 8))));
      pfVar6 = ((float *)GEN_TOP((((uint)*puVar5 * 0x100 + 8 + (uint)*(byte *)((int)puVar5 + 3)) * 0x10 +
                        *(int *)(param_1 + 0x3930))));
      fVar7 = (float10)((float)GEN_TOF(((float10)*pfVar6 - (float10)*(float *)(REFG(int, 0x13712a4) + 0x50))));
      fVar8 = (float10)((float)GEN_TOF(((float10)pfVar6[2] - (float10)*(float *)(REFG(int, 0x13712a4) + 0x58))));
      uVar4 = (*pcVar3)(uVar2,(undefined4)gen_fl2bits((float)(fVar8 * fVar8 + fVar7 * fVar7)));
      return uVar4;
    }
    uVar4 = (*pcVar3)(uVar2,(undefined4)gen_fl2bits(param_3));
  }
  return uVar4;
}

/* ref: FUN_00b14410 */
unsigned int F_00b14410(unsigned int gen_a0)
{
  GEN_ENTER(0xb14410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int local_1c;
  int local_18;
  ushort * local_14;
  
  uVar26 = REFG(float, 0x10920d0);
  local_1c = *(int *)((int)this + 0x14);
  if (local_1c != 0) {
    local_14 = (ushort *)((int)this + 0x40);
    local_18 = 0;
    do {
      uVar27 = 0;
      do {
        if ((*local_14 >> ((byte)uVar27 & 0x1f) & 1) != 0) {
          puVar2 = ((undefined4 *)GEN_TOP(((local_18 + uVar27) * 0x60 + 0x2050 + (int)this)));
          uVar3 = puVar2[1];
          uVar4 = puVar2[2];
          uVar5 = puVar2[3];
          uVar6 = puVar2[4];
          uVar7 = puVar2[5];
          uVar8 = puVar2[6];
          uVar9 = puVar2[7];
          uVar10 = puVar2[8];
          uVar11 = puVar2[9];
          uVar12 = puVar2[10];
          uVar13 = puVar2[0xb];
          uVar14 = puVar2[0xc];
          uVar15 = puVar2[0xd];
          uVar16 = puVar2[0xe];
          uVar17 = puVar2[0xf];
          uVar18 = puVar2[0x10];
          uVar19 = puVar2[0x11];
          uVar20 = puVar2[0x12];
          uVar21 = puVar2[0x13];
          uVar22 = puVar2[0x14];
          uVar23 = puVar2[0x15];
          puVar1 = ((undefined4 *)GEN_TOP(((local_18 + uVar27) * 0x80 + 0x50 + (int)this)));
          uVar24 = puVar2[0x16];
          uVar25 = puVar2[0x17];
          *puVar1 = *puVar2;
          puVar1[1] = uVar6;
          puVar1[2] = uVar10;
          puVar1[3] = uVar14;
          puVar1[8] = uVar3;
          puVar1[9] = uVar7;
          puVar1[10] = uVar11;
          puVar1[0xb] = uVar15;
          puVar1[0xc] = uVar4;
          puVar1[0xd] = uVar8;
          puVar1[0xe] = uVar12;
          puVar1[0xf] = uVar16;
          puVar1[4] = uVar5 ^ uVar26;
          puVar1[5] = uVar9 ^ uVar26;
          puVar1[6] = uVar13 ^ uVar26;
          puVar1[7] = uVar17 ^ uVar26;
          puVar1[0x10] = uVar18;
          puVar1[0x11] = uVar22;
          puVar1[0x12] = uVar18;
          puVar1[0x13] = uVar22;
          puVar1[0x18] = uVar19;
          puVar1[0x19] = uVar23;
          puVar1[0x1a] = uVar19;
          puVar1[0x1b] = uVar23;
          puVar1[0x1c] = uVar20;
          puVar1[0x1d] = uVar24;
          puVar1[0x1e] = uVar20;
          puVar1[0x1f] = uVar24;
          puVar1[0x14] = uVar21 ^ uVar26;
          puVar1[0x15] = uVar25 ^ uVar26;
          puVar1[0x16] = uVar21 ^ uVar26;
          puVar1[0x17] = uVar25 ^ uVar26;
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 < 0x10);
      local_14 = local_14 + 1;
      local_18 = local_18 + 0x10;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return 0;
}

/* ref: FUN_00b14670 */
unsigned int F_00b14670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb14670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  ushort uVar1;
  int * piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint local_1c;
  uint local_18;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    iVar3 = *(int *)((int)this + 0x3850);
    uVar11 = *(uint *)((int)this + iVar3 * 4 + 0x28);
    uVar4 = *(undefined4 *)((int)this + iVar3 * 4 + 0x18);
    iVar5 = *(int *)((int)this + 0x10);
    if ((uVar11 & 1) != 0) {
      param_1 = (int *)0x0;
      uVar8 = piVar2[1] - *piVar2 >> 2;
      if (uVar8 != 0) {
        do {
          iVar6 = *(int *)(*piVar2 + (int)((int)(uintptr_t)param_1) * 4);
          uVar1 = *(ushort *)(iVar6 + 0xff0);
          local_1c = 0;
          iVar12 = iVar6;
          if (uVar1 != 0) {
            do {
              uVar9 = (uint)*(ushort *)(iVar6 + 0xf00 + local_1c * 2);
              iVar7 = (iVar3 + uVar9 * 4) * 4;
              if (*((int *)GEN_TOP((iVar7 + *(int *)((int)this + 0x10)))) != 0) {
                iVar10 = uVar9 * 0x10 + *(int *)((int)this + 8);
                ((code *)*(gen_code32 *)(&REFG(undefined, 0x133a4c0) + (uint)*(byte *)(iVar10 + 2) * 4))
                          (*(undefined4 *)(iVar10 + 4),uVar4,iVar7 + iVar5,iVar12,iVar12 + 0x780);
              }
              local_1c = local_1c + 1;
              iVar12 = iVar12 + 0x10;
            } while (local_1c < uVar1);
          }
          param_1 = (int *)((int)param_1 + 1);
        } while (param_1 < uVar8);
      }
    }
    if ((uVar11 & 2) != 0) {
      param_1 = (int *)0x0;
      uVar8 = piVar2[5] - piVar2[4] >> 2;
      if (uVar8 != 0) {
        do {
          iVar6 = *(int *)(piVar2[4] + (int)((int)(uintptr_t)param_1) * 4);
          uVar1 = *(ushort *)(iVar6 + 0xff0);
          local_18 = 0;
          iVar12 = iVar6;
          if (uVar1 != 0) {
            do {
              uVar9 = (uint)*(ushort *)(iVar6 + 0xf00 + local_18 * 2);
              iVar7 = (iVar3 + uVar9 * 4) * 4;
              if (*((int *)GEN_TOP((iVar7 + *(int *)((int)this + 0x10)))) != 0) {
                iVar10 = uVar9 * 0x10 + *(int *)((int)this + 8);
                ((code *)*(gen_code32 *)(&REFG(undefined, 0x133a4c0) + (uint)*(byte *)(iVar10 + 2) * 4))
                          (*(undefined4 *)(iVar10 + 4),uVar4,iVar7 + iVar5,iVar12,iVar12 + 0x780);
              }
              local_18 = local_18 + 1;
              iVar12 = iVar12 + 0x10;
            } while (local_18 < uVar1);
          }
          param_1 = (int *)((int)param_1 + 1);
        } while (param_1 < uVar8);
      }
    }
    if ((uVar11 & 4) != 0) {
      param_1 = (int *)0x0;
      uVar11 = piVar2[9] - piVar2[8] >> 2;
      if (uVar11 != 0) {
        do {
          iVar6 = *(int *)(piVar2[8] + (int)((int)(uintptr_t)param_1) * 4);
          uVar1 = *(ushort *)(iVar6 + 0xff0);
          local_1c = 0;
          iVar12 = iVar6;
          if (uVar1 != 0) {
            do {
              uVar8 = (uint)*(ushort *)(iVar6 + 0xf00 + local_1c * 2);
              iVar7 = (iVar3 + uVar8 * 4) * 4;
              if (*((int *)GEN_TOP((iVar7 + *(int *)((int)this + 0x10)))) != 0) {
                iVar10 = uVar8 * 0x10 + *(int *)((int)this + 8);
                ((code *)*(gen_code32 *)(&REFG(undefined, 0x133a4c0) + (uint)*(byte *)(iVar10 + 2) * 4))
                          (*(undefined4 *)(iVar10 + 4),uVar4,iVar7 + iVar5,iVar12,iVar12 + 0x780);
              }
              local_1c = local_1c + 1;
              iVar12 = iVar12 + 0x10;
            } while (local_1c < uVar1);
          }
          param_1 = (int *)((int)param_1 + 1);
        } while (param_1 < uVar11);
      }
    }
  }
  return 0;
}

/* ref: FUN_00b14900 */
uint F_00b14900(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb14900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm5 = (float)gen_a2;
  float in_xmm6 = (float)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  int iVar2;
  float * PTR32 * ppfVar3;
  float * pfVar4;
  undefined3 extraout_var = 0;
  undefined * pvVar5;
  uint uVar6;
  int iVar7;
  float * pfVar8;
  int * piVar9;
  float10 fVar10;
  float10 fVar11;
  
  (*(int *)(gen_frame + 0x64)) = in_ecx;
  (*(float *)(gen_frame + 0x48)) = *(float *)(REFG(int, 0x137127c) + 0x66f4);
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = REFG(undefined4, 0x1487c58);
  (*(float *)(gen_frame + 0x54)) = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x48))) + 0xac);
  fVar10 = (float10)*(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x48))) + 0xac);
  piVar9 = (int *)*param_5;
  pfVar8 = (float *)param_5[1];
  (*(int * PTR32 *)(gen_frame + 0x58)) = piVar9;
  (*(float *)(gen_frame + 0x60)) = REFG(float, 0x1094880);
  if ((float10)1 < fVar10) {
    if (*(char *)((int)gen_fl2bits((*(float *)(gen_frame + 0x48))) + 0xb8) == '\0') {
      (*(float * PTR32 *)(gen_frame + 0x50)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(float * PTR32 *)(gen_frame + 0x5c)) = *(float * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x48))) + 0xa8);
      (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x48))) + 0xa4) *
                                   (float10)REFG(double, 0x1088108)))))));
      fVar10 = F_00c4d590(in_xmm3,in_xmm5,in_xmm6,(float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x4c))))));
      (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar10)));
      ppfVar3 = &(*(float * PTR32 *)(gen_frame + 0x50));
      if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x5c))))) < (float10)1)) {
        ppfVar3 = &(*(float * PTR32 *)(gen_frame + 0x5c));
      }
      fVar10 = (float10)(*(float *)(gen_frame + 0x54));
      (*(float * PTR32 *)(gen_frame + 0x5c)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppfVar3))) * (fVar10 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x4c))))))
                                   ))))));
      fVar11 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x5c)))));
      fVar11 = fVar11 * fVar11;
    }
    else {
      (*(float * PTR32 *)(gen_frame + 0x50)) = *(float * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x48))) + 0xb4);
      (*(float * PTR32 *)(gen_frame + 0x4c)) = (*(float * PTR32 *)(gen_frame + 0x50));
      (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x48))) + 0xa8) *
                                   (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x50)))))))))));
      fVar11 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x4c)))));
      fVar11 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x50))))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x50))))) + fVar11 * fVar11;
    }
    (*(float * PTR32 *)(gen_frame + 0x5c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar11)));
    (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)(fVar10 * fVar10 + (float10)(float)fVar11))));
    (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x4c)))))))))));
    pfVar4 = &(*(float *)(gen_frame + 0x60));
    (*(float *)(gen_frame + 0x54)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x4c))))) * (float10)*(double *)&REFG(undefined, 0x109cb28));
    if (!((double)(*(float *)(gen_frame + 0x54)) < REFG(double, 0x10944b8))) {
      pfVar4 = &(*(float *)(gen_frame + 0x54));
    }
    (*(float *)(gen_frame + 0x60)) = *pfVar4;
  }
  fVar10 = (float10)(*(float *)(gen_frame + 0x60));
  (*(float * PTR32 *)(gen_frame + 0x5c)) = (float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x48))) + 0x90U);
  (*(float *)(gen_frame + 0x20)) = (float)(fVar10 + (float10)pfVar8[4]);
  (*(float *)(gen_frame + 0x10)) = (float)(fVar10 + (float10)pfVar8[4]);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar8[5] + fVar10);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)pfVar8[5] + fVar10);
  (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar8[6] + fVar10);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)pfVar8[6] + fVar10);
  (*(float *)(gen_frame + 0x30)) = (float)((float10)*pfVar8 - fVar10);
  (*(float *)(gen_frame + 0x34)) = (float)((float10)pfVar8[1] - fVar10);
  (*(float *)(gen_frame + 0x38)) = (float)((float10)pfVar8[2] - fVar10);
  (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar8 - fVar10);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)pfVar8[1] - fVar10);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)pfVar8[2] - fVar10);
  (*(byte *)(gen_frame + 0x6f)) = F_00b16570(&(*(float *)(gen_frame + 0x0)),(int)gen_fl2bits((*(float *)(gen_frame + 0x48))) + 0x90U);
  pvVar5 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,(*(byte *)(gen_frame + 0x6f)))));
  if ((char)piVar9[0xf] != '\0') {
    if ((*(byte *)(gen_frame + 0x6f)) == 0) {
      pvVar5 = (undefined *)F_00b7e680((*(undefined * PTR32 *)(gen_frame + 0x68)),piVar9 + 0x10,pfVar8);
    }
    else {
      pvVar5 = (undefined *)F_00b7e120((*(undefined * PTR32 *)(gen_frame + 0x68)),piVar9 + 0x10);
    }
    if (((*(ushort *)((int)piVar9 + 0x46) >> 0xe & 1) != 0) &&
       (pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x68)), *(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x801a) != '\0')) {
      return (uint)(*(undefined * PTR32 *)(gen_frame + 0x68));
    }
  }
  if (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x8019) != '\0') {
    (*(float *)(gen_frame + 0x40)) = gen_bits2f(piVar9[1] - *piVar9 >> 2);
    (*(float * PTR32 *)(gen_frame + 0x4c)) = (float *)0x0;
    if ((*(float *)(gen_frame + 0x40)) != 0.0) {
      do {
        iVar2 = *(int *)(*piVar9 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x4c))) * 4);
        (*(float * PTR32 *)(gen_frame + 0x44)) = (float *)(uint)*(ushort *)(iVar2 + 0xff0);
        (*(float * PTR32 *)(gen_frame + 0x50)) = (float *)0x0;
        if ((float *)(uint)*(ushort *)(iVar2 + 0xff0) != (float *)0x0) {
          do {
            uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x50)) & 0xffff;
            iVar7 = (uint)*(ushort *)(iVar2 + 0xf00 + uVar6 * 2) * 0x10;
            (*(float *)(gen_frame + 0x54)) = gen_bits2f(*(int *)((*(int *)(gen_frame + 0x64)) + 8) + 8 + iVar7);
            if (*((short *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x64)) + 8) + 0xe + iVar7))) < 0) {
              if (((*((uint *)GEN_TOP((iVar7 + *(int *)((*(int *)(gen_frame + 0x64)) + 0x10)))) & 0x3000000) == 0) &&
                 ((*(ushort *)((int)gen_fl2bits((*(float *)(gen_frame + 0x54))) + 6) >> 0xe & 1) == 0)) {
LAB_00b14c2f: ;
                F_00b7e120((*(undefined * PTR32 *)(gen_frame + 0x68)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x54))));
              }
              else {
                iVar7 = uVar6 * 0x10 + iVar2;
                pfVar8 = ((float *)GEN_TOP(((uVar6 + 0x78) * 0x10 + iVar2)));
                (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)*(*(float * PTR32 *)(gen_frame + 0x5c)) - (float10)*(float *)(uVar6 * 0x10 + iVar2)
                                   )));
                (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[1] - (float10)*(float *)(iVar7 + 4))));
                (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[2] - (float10)*(float *)(iVar7 + 8))));
                if ((*(byte *)(gen_frame + 0x6f)) != 0) {
                  fVar1 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x20)))));
                  (*(float *)(gen_frame + 0x48)) = fVar1;
                  fVar10 = (float10)(*(float *)(gen_frame + 0x60));
                  (*(float *)(gen_frame + 0x48)) = (float)(fVar10 + (float10)*pfVar8);
                  if ((float10)fVar1 < (float10)(float)(fVar10 + (float10)*pfVar8)) {
                    fVar1 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x24)))));
                    (*(float *)(gen_frame + 0x48)) = fVar1;
                    (*(float *)(gen_frame + 0x48)) = (float)((float10)pfVar8[1] + fVar10);
                    if ((float10)fVar1 < (float10)(float)((float10)pfVar8[1] + fVar10)) {
                      fVar1 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x28)))));
                      (*(float *)(gen_frame + 0x48)) = fVar1;
                      (*(float *)(gen_frame + 0x48)) = (float)((float10)pfVar8[2] + fVar10);
                      if ((float10)fVar1 < (float10)(float)((float10)pfVar8[2] + fVar10))
                      goto LAB_00b14c2f;
                    }
                  }
                }
                F_00b7e5a0((*(undefined * PTR32 *)(gen_frame + 0x68)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x54))),iVar7,pfVar8);
              }
            }
            (*(float * PTR32 *)(gen_frame + 0x50)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x50)) + 1);
            piVar9 = (*(int * PTR32 *)(gen_frame + 0x58));
          } while ((*(float * PTR32 *)(gen_frame + 0x50)) < (*(float * PTR32 *)(gen_frame + 0x44)));
        }
        (*(float * PTR32 *)(gen_frame + 0x4c)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x4c)) + 1);
      } while ((*(float * PTR32 *)(gen_frame + 0x4c)) < (uint)gen_fl2bits((*(float *)(gen_frame + 0x40))));
    }
    (*(float *)(gen_frame + 0x48)) = gen_bits2f(piVar9[5] - piVar9[4] >> 2);
    (*(float *)(gen_frame + 0x54)) = 0.0;
    if ((*(float *)(gen_frame + 0x48)) != 0.0) {
      do {
        iVar2 = *(int *)(piVar9[4] + (int)gen_fl2bits((*(float *)(gen_frame + 0x54))) * 4);
        (*(float * PTR32 *)(gen_frame + 0x44)) = (float *)(uint)*(ushort *)(iVar2 + 0xff0);
        (*(float * PTR32 *)(gen_frame + 0x50)) = (float *)0x0;
        if ((float *)(uint)*(ushort *)(iVar2 + 0xff0) != (float *)0x0) {
          do {
            uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x50)) & 0xffff;
            iVar7 = (uint)*(ushort *)(iVar2 + 0xf00 + uVar6 * 2) * 0x10;
            (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x64)) + 8) + 8 + iVar7)));
            if (*((short *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x64)) + 8) + 0xe + iVar7))) < 0) {
              if (((*((uint *)GEN_TOP((iVar7 + *(int *)((*(int *)(gen_frame + 0x64)) + 0x10)))) & 0x3000000) == 0) &&
                 ((*(ushort *)((int)(*(float * PTR32 *)(gen_frame + 0x4c)) + 6) >> 0xe & 1) == 0)) {
LAB_00b14d94: ;
                F_00b7e120((*(undefined * PTR32 *)(gen_frame + 0x68)),(*(float * PTR32 *)(gen_frame + 0x4c)));
              }
              else {
                iVar7 = uVar6 * 0x10 + iVar2;
                pfVar8 = ((float *)GEN_TOP(((uVar6 + 0x78) * 0x10 + iVar2)));
                (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)*(*(float * PTR32 *)(gen_frame + 0x5c)) - (float10)*(float *)(uVar6 * 0x10 + iVar2)
                                   )));
                (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[1] - (float10)*(float *)(iVar7 + 4))));
                (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[2] - (float10)*(float *)(iVar7 + 8))));
                if ((*(byte *)(gen_frame + 0x6f)) != 0) {
                  fVar1 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x20)))));
                  (*(float *)(gen_frame + 0x40)) = fVar1;
                  fVar10 = (float10)(*(float *)(gen_frame + 0x60));
                  (*(float *)(gen_frame + 0x40)) = (float)(fVar10 + (float10)*pfVar8);
                  if ((float10)fVar1 < (float10)(float)(fVar10 + (float10)*pfVar8)) {
                    fVar1 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x24)))));
                    (*(float *)(gen_frame + 0x40)) = fVar1;
                    (*(float *)(gen_frame + 0x40)) = (float)((float10)pfVar8[1] + fVar10);
                    if ((float10)fVar1 < (float10)(float)((float10)pfVar8[1] + fVar10)) {
                      fVar1 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x28)))));
                      (*(float *)(gen_frame + 0x40)) = fVar1;
                      (*(float *)(gen_frame + 0x40)) = (float)((float10)pfVar8[2] + fVar10);
                      if ((float10)fVar1 < (float10)(float)((float10)pfVar8[2] + fVar10))
                      goto LAB_00b14d94;
                    }
                  }
                }
                F_00b7e5a0((*(undefined * PTR32 *)(gen_frame + 0x68)),(*(float * PTR32 *)(gen_frame + 0x4c)),iVar7,pfVar8);
              }
            }
            (*(float * PTR32 *)(gen_frame + 0x50)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x50)) + 1);
            piVar9 = (*(int * PTR32 *)(gen_frame + 0x58));
          } while ((*(float * PTR32 *)(gen_frame + 0x50)) < (*(float * PTR32 *)(gen_frame + 0x44)));
        }
        (*(float *)(gen_frame + 0x54)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x54))) + 1);
      } while ((uint)gen_fl2bits((*(float *)(gen_frame + 0x54))) < (uint)gen_fl2bits((*(float *)(gen_frame + 0x48))));
    }
    (*(float *)(gen_frame + 0x48)) = gen_bits2f(piVar9[9] - piVar9[8] >> 2);
    (*(float *)(gen_frame + 0x54)) = 0.0;
    pvVar5 = (undefined *)0x0;
    if ((*(float *)(gen_frame + 0x48)) != 0.0) {
      do {
        iVar2 = *(int *)(piVar9[8] + (int)gen_fl2bits((*(float *)(gen_frame + 0x54))) * 4);
        (*(float * PTR32 *)(gen_frame + 0x44)) = (float *)(uint)*(ushort *)(iVar2 + 0xff0);
        (*(float * PTR32 *)(gen_frame + 0x50)) = (float *)0x0;
        pvVar5 = (undefined *)0x0;
        if ((float *)(uint)*(ushort *)(iVar2 + 0xff0) != (float *)0x0) {
          do {
            uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x50)) & 0xffff;
            iVar7 = (uint)*(ushort *)(iVar2 + 0xf00 + uVar6 * 2) * 0x10;
            pvVar5 = ((undefined *)GEN_TOP((iVar7 + 8 + *(int *)((*(int *)(gen_frame + 0x64)) + 8))));
            (*(float * PTR32 *)(gen_frame + 0x4c)) = pvVar5;
            if (*((short *)GEN_TOP((iVar7 + 0xe + *(int *)((*(int *)(gen_frame + 0x64)) + 8)))) < 0) {
              if (((*((uint *)GEN_TOP((iVar7 + *(int *)((*(int *)(gen_frame + 0x64)) + 0x10)))) & 0x3000000) == 0) &&
                 ((*(ushort *)((int)pvVar5 + 6) >> 0xe & 1) == 0)) {
LAB_00b14ef8: ;
                pvVar5 = (undefined *)F_00b7e120((*(undefined * PTR32 *)(gen_frame + 0x68)),pvVar5);
              }
              else {
                iVar7 = uVar6 * 0x10 + iVar2;
                pfVar8 = ((float *)GEN_TOP(((uVar6 + 0x78) * 0x10 + iVar2)));
                (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)*(*(float * PTR32 *)(gen_frame + 0x5c)) - (float10)*(float *)(uVar6 * 0x10 + iVar2)
                                   )));
                (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[1] - (float10)*(float *)(iVar7 + 4))));
                (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[2] - (float10)*(float *)(iVar7 + 8))));
                if ((*(byte *)(gen_frame + 0x6f)) != 0) {
                  fVar1 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x20)))));
                  (*(float *)(gen_frame + 0x40)) = fVar1;
                  fVar10 = (float10)(*(float *)(gen_frame + 0x60));
                  (*(float *)(gen_frame + 0x40)) = (float)(fVar10 + (float10)*pfVar8);
                  if ((float10)fVar1 < (float10)(float)(fVar10 + (float10)*pfVar8)) {
                    fVar1 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x24)))));
                    (*(float *)(gen_frame + 0x40)) = fVar1;
                    (*(float *)(gen_frame + 0x40)) = (float)((float10)pfVar8[1] + fVar10);
                    if ((float10)fVar1 < (float10)(float)((float10)pfVar8[1] + fVar10)) {
                      fVar1 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x28)))));
                      (*(float *)(gen_frame + 0x40)) = fVar1;
                      (*(float *)(gen_frame + 0x40)) = (float)((float10)pfVar8[2] + fVar10);
                      if ((float10)fVar1 < (float10)(float)((float10)pfVar8[2] + fVar10))
                      goto LAB_00b14ef8;
                    }
                  }
                }
                pvVar5 = (undefined *)F_00b7e5a0((*(undefined * PTR32 *)(gen_frame + 0x68)),pvVar5,iVar7,pfVar8);
              }
            }
            (*(float * PTR32 *)(gen_frame + 0x50)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x50)) + 1);
            piVar9 = (*(int * PTR32 *)(gen_frame + 0x58));
          } while ((*(float * PTR32 *)(gen_frame + 0x50)) < (*(float * PTR32 *)(gen_frame + 0x44)));
        }
        (*(float *)(gen_frame + 0x54)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x54))) + 1);
      } while ((uint)gen_fl2bits((*(float *)(gen_frame + 0x54))) < (uint)gen_fl2bits((*(float *)(gen_frame + 0x48))));
    }
  }
  return (uint)pvVar5;
}

/* ref: FUN_00b14f40 */
unsigned int F_00b14f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb14f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  ushort uVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  uint local_20;
  uint local_1c;
  uint local_14;
  uint local_10;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    bVar10 = (param_1[1] & 0x3000000U) != 0;
    if ((*(char *)(REFG(int, 0x1487c58) + 0x8019) == '\0') || (bVar5 = true, !bVar10)) {
      bVar5 = false;
    }
    *(ushort *)((int)piVar2 + 0x46) =
         (ushort)*(byte *)(piVar2 + 0xf) << 0xf | *(ushort *)((int)piVar2 + 0x46) & 0x7fff;
    if ((bVar10) || ((param_1[1] & 0xfcffffffU) != 0)) {
      iVar3 = *(int *)((int)this + 0x10);
      uVar6 = piVar2[1] - *piVar2 >> 2;
      local_14 = 0;
      if (uVar6 != 0) {
        do {
          iVar4 = *(int *)(*piVar2 + local_14 * 4);
          uVar1 = *(ushort *)(iVar4 + 0xff0);
          local_1c = 0;
          local_10 = iVar4;
          if (uVar1 != 0) {
            do {
              iVar9 = (uint)*(ushort *)(iVar4 + 0xf00 + local_1c * 2) * 0x10;
              uVar7 = *((uint *)GEN_TOP((iVar9 + *(int *)((int)this + 0x10))));
              if (uVar7 != 0) {
                iVar8 = *(int *)((int)this + 8) + iVar9;
                if ((((bVar5) && ((uVar7 & 0x3000000) != 0)) && (*(short *)(iVar8 + 0xe) < 0)) &&
                   (F_00bcc650((undefined *)(iVar8 + 8)), (*(ushort *)(iVar8 + 0xe) >> 0xe & 1) != 0))
                {
                  uVar7 = uVar7 & 0xfcffffff;
                  *((uint *)GEN_TOP((iVar9 + *(int *)((int)this + 0x10)))) = uVar7;
                }
                if (uVar7 != 0) {
                  ((code *)*(gen_code32 *)(&REFG(undefined, 0x133a4c0) + (uint)*(byte *)(iVar8 + 2) * 4))
                            (*(undefined4 *)(iVar8 + 4),0x1e,iVar9 + iVar3,local_10,local_10 + 0x780
                            );
                }
              }
              local_10 = local_10 + 0x10;
              local_1c = local_1c + 1;
            } while (local_1c < uVar1);
          }
          local_14 = local_14 + 1;
        } while (local_14 < uVar6);
      }
      uVar6 = piVar2[5] - piVar2[4] >> 2;
      local_10 = 0;
      if (uVar6 != 0) {
        do {
          iVar4 = *(int *)(piVar2[4] + local_10 * 4);
          uVar1 = *(ushort *)(iVar4 + 0xff0);
          local_20 = 0;
          local_14 = iVar4;
          if (uVar1 != 0) {
            do {
              iVar9 = (uint)*(ushort *)(iVar4 + 0xf00 + local_20 * 2) * 0x10;
              uVar7 = *((uint *)GEN_TOP((iVar9 + *(int *)((int)this + 0x10))));
              if (uVar7 != 0) {
                iVar8 = *(int *)((int)this + 8) + iVar9;
                if (((bVar5) && ((uVar7 & 0x3000000) != 0)) &&
                   ((*(short *)(iVar8 + 0xe) < 0 &&
                    (F_00bcc650((undefined *)(iVar8 + 8)), (*(ushort *)(iVar8 + 0xe) >> 0xe & 1) != 0))
                   )) {
                  uVar7 = uVar7 & 0xfcffffff;
                  *((uint *)GEN_TOP((iVar9 + *(int *)((int)this + 0x10)))) = uVar7;
                }
                if (uVar7 != 0) {
                  ((code *)*(gen_code32 *)(&REFG(undefined, 0x133a4c0) + (uint)*(byte *)(iVar8 + 2) * 4))
                            (*(undefined4 *)(iVar8 + 4),0x1e,iVar9 + iVar3,local_14,local_14 + 0x780
                            );
                }
              }
              local_14 = local_14 + 0x10;
              local_20 = local_20 + 1;
            } while (local_20 < uVar1);
          }
          local_10 = local_10 + 1;
        } while (local_10 < uVar6);
      }
      uVar6 = piVar2[9] - piVar2[8] >> 2;
      local_10 = 0;
      if (uVar6 != 0) {
        do {
          iVar4 = *(int *)(piVar2[8] + local_10 * 4);
          uVar1 = *(ushort *)(iVar4 + 0xff0);
          local_20 = 0;
          local_14 = iVar4;
          if (uVar1 != 0) {
            do {
              iVar9 = (uint)*((ushort *)GEN_TOP((iVar4 + 0xf00 + (local_20 & 0xffff) * 2))) * 0x10;
              uVar7 = *((uint *)GEN_TOP((iVar9 + *(int *)((int)this + 0x10))));
              if (uVar7 != 0) {
                iVar8 = *(int *)((int)this + 8) + iVar9;
                if (((bVar5) && ((uVar7 & 0x3000000) != 0)) &&
                   ((*(short *)(iVar8 + 0xe) < 0 &&
                    (F_00bcc650((undefined *)(iVar8 + 8)), (*(ushort *)(iVar8 + 0xe) >> 0xe & 1) != 0))
                   )) {
                  uVar7 = uVar7 & 0xfcffffff;
                  *((uint *)GEN_TOP((iVar9 + *(int *)((int)this + 0x10)))) = uVar7;
                }
                if (uVar7 != 0) {
                  ((code *)*(gen_code32 *)(&REFG(undefined, 0x133a4c0) + (uint)*(byte *)(iVar8 + 2) * 4))
                            (*(undefined4 *)(iVar8 + 4),0x1e,iVar9 + iVar3,local_14,local_14 + 0x780
                            );
                }
              }
              local_14 = local_14 + 0x10;
              local_20 = local_20 + 1;
            } while (local_20 < uVar1);
          }
          local_10 = local_10 + 1;
        } while (local_10 < uVar6);
      }
    }
  }
  return 0;
}

/* ref: FUN_00b152d0 */
unsigned int F_00b152d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb152d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  ushort uVar2;
  undefined * this;
  short * this_00;
  
  F_00bcac30(*(undefined4 *)(param_1 + 0x3930),param_2);
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  do {
    (*(uint *)(gen_frame + 0x24)) = *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x28)) + *(int *)(param_1 + 0xc))));
    if ((*(uint *)(gen_frame + 0x24)) != 0) {
      (*(uint *)(gen_frame + 0x2c)) = 0;
      (*(uint *)(gen_frame + 0x34)) = 1;
      do {
        if ((((*(uint *)(gen_frame + 0x34)) & (*(uint *)(gen_frame + 0x24))) != 0) &&
           (this_00 = ((short *)GEN_TOP((((*(int *)(gen_frame + 0x30)) + (*(uint *)(gen_frame + 0x2c))) * 0x10 + *(int *)(param_1 + 8)))),
           *this_00 != -1)) {
          F_00b81f30(this_00,((undefined1 *)(gen_frame + 0x0)));
          cVar1 = *(char *)(param_1 + 4);
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x3c)) + 0)) = cVar1;
          (*(undefined4 *)(gen_frame + 0x3c)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x3c)), 1, 3),cVar1);
          (*(uint *)(gen_frame + 0x38)) = 0;
          if ((cVar1 == '\0') && (((char)this_00[1] != '\x06' && (-1 < this_00[7])))) {
            uVar2 = F_00bcaee0(*(undefined * PTR32 *)(param_1 + 0x3930),((undefined1 *)(gen_frame + 0x0)));
            (*(uint *)(gen_frame + 0x38)) = (uint)uVar2;
          }
          if (*this_00 == -1) {
            this = *(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930);
          }
          else {
            uVar2 = F_00bcb330(*(undefined * PTR32 *)(param_1 + 0x3930),this_00);
            if ((ushort)(*(uint *)(gen_frame + 0x38)) == uVar2) {
              F_00bcb2e0(*(undefined * PTR32 *)(param_1 + 0x3930),(uint)uVar2,this_00,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x3c)));
              goto LAB_00b15412;
            }
            F_00bcb350(*(undefined * PTR32 *)(param_1 + 0x3930),this_00,(*(undefined4 *)(gen_frame + 0x3c)));
            this = *(undefined * PTR32 *)(param_1 + 0x3930);
          }
          F_00bcb180(this,(*(uint *)(gen_frame + 0x38)),this_00,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x3c)));
        }
LAB_00b15412: ;
        (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) + 1;
        (*(uint *)(gen_frame + 0x34)) = (*(uint *)(gen_frame + 0x34)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x34)) < 0);
      } while ((*(uint *)(gen_frame + 0x2c)) < 0x20);
    }
    (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 0x20;
    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 4;
    if (0x9ff < (*(uint *)(gen_frame + 0x28))) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b15450 */
byte F_00b15450(unsigned int gen_a0)
{
  GEN_ENTER(0xb15450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined1 * puVar6;
  undefined * puVar7;
  uint uVar8;
  int iVar9;
  undefined4 * in_ecx;
  undefined4 uVar10;
  
  puVar2 = (undefined4 *)F_00406bb0(0x50004,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0x5000;
    puVar2 = puVar2 + 1;
    iVar9 = 0x4fff;
    in_ecx = puVar2;
    do {
      F_00b81eb0(in_ecx);
      in_ecx = in_ecx + 4;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  uVar10 = 0x80;
  *(undefined4 * PTR32 *)((int)this + 8) = puVar2;
  uVar3 = F_00406520();
  pvVar4 = (undefined *)F_00406c00(0x50000,0,uVar3,uVar10);
  *(undefined * PTR32 *)((int)this + 0x10) = pvVar4;
  F_00c48350(pvVar4,0,0x50000);
  pvVar4 = (undefined *)F_00406bb0(0xa00,0,0);
  *(undefined * PTR32 *)((int)this + 0xc) = pvVar4;
  F_00c48350(pvVar4,0,0xa00);
  bVar1 = F_00bcb620(*(undefined4 *)((int)this + 0x3930),5,REFG(float, 0x10a0d94));
  if (bVar1 != 0) {
    uVar5 = (uint)**(ushort * PTR32 *)((int)this + 0x3930);
    iVar9 = *((int *)GEN_TOP((*(ushort * PTR32 *)((int)this + 0x3930) + 2)));
    uVar3 = (uint)REFG(undefined2, 0x14c1ec2);
    if (uVar3 != 0) {
      puVar6 = (undefined1 *)(iVar9 + 0x3c);
      uVar8 = uVar3;
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 0x48;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (uVar3 < uVar5) {
      puVar6 = (undefined1 *)(iVar9 + 0x3c + uVar3 * 0x48);
      iVar9 = uVar5 - uVar3;
      do {
        *puVar6 = 1;
        puVar6 = puVar6 + 0x48;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    bVar1 = F_00b17620((undefined *)((int)this + 0x3854),*(undefined4 *)(REFG(int, 0x1370b90) + 0x24));
    if (((bVar1 != 0) &&
        (bVar1 = F_00b17900((undefined *)((int)this + 0x38bc),*(undefined4 *)(REFG(int, 0x1370b90) + 0x24)),
        bVar1 != 0)) && (bVar1 = F_00b13fd0(this), bVar1 != 0)) {
      uVar10 = *(undefined4 *)((int)this + 0x10);
      REFG(undefined4, 0x14c1280) = 0;
      REFG(undefined4, 0x14c1284) = 0;
      *(undefined4 *)&REFG(undefined, 0x14c1288) = 0;
      puVar7 = &REFG(undefined, 0x14c1290);
      puVar2 = &REFG(undefined4, 0x14c1a20);
      iVar9 = 0xf;
      do {
        puVar2[-4] = 0;
        *puVar2 = 0;
        puVar2[8] = 0;
        puVar2[-3] = puVar7;
        puVar2[-2] = this;
        puVar2[-1] = uVar10;
        puVar7 = puVar7 + 0x80;
        puVar2 = puVar2 + 0x14;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b155e0 */
uint F_00b155e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb155e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + -4)));
    iVar2 = *piVar1;
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      F_00b81e70();
    }
    F_00406b30(piVar1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406b30(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  F_00b17a60((undefined *)((int)this + 0x38bc));
  F_00b17780((undefined *)((int)this + 0x3854));
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar3 = F_00bcb930(*(undefined * PTR32 *)((int)this + 0x3930));
  return uVar3;
}

/* ref: FUN_00b15680 */
int F_00b15680(void)
{
  GEN_ENTER(0xb15680u, 0u, 0u, 0u, 0u);
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  int local_8;
  
  LOCK();
  UNLOCK();
  iVar3 = REFG(int, 0x14c1280);
  if (REFG(int, 0x14c1280) != 0) {
    puVar7 = &REFG(undefined4, 0x14c1a20);
    local_8 = 0xf;
    do {
      LOCK();
      iVar3 = puVar7[-4];
      if (iVar3 == 4) {
        puVar7[-4] = 5;
        iVar3 = 4;
      }
      UNLOCK();
      if (iVar3 == 4) {
        if (puVar7[8] != 0) {
          iVar3 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1c4)));
          if (7 < *(uint *)(iVar3 + 8)) {
            if (*(uint * PTR32 *)(iVar3 + 0x10) != (uint *)0x0) {
              **(uint * PTR32 *)(iVar3 + 0x10) = *(uint *)(iVar3 + 8);
            }
            uVar1 = F_00b17de0(*(undefined * PTR32 *)(iVar3 + 0xc));
            *(uint *)(iVar3 + 0x10) = uVar1;
            *(uint *)(iVar3 + 4) = uVar1 + 0x10;
            *(undefined4 *)(iVar3 + 8) = 0;
          }
          puVar2 = ((undefined4 *)GEN_TOP((*(int *)(iVar3 + 8) * 0x20 + *(int *)(iVar3 + 4))));
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
          iVar3 = puVar7[0xd];
          *puVar2 = puVar7[8];
          if (iVar3 != 0) {
            puVar4 = puVar7 + 9;
            iVar6 = iVar3;
            puVar5 = puVar2;
            do {
              puVar5 = puVar5 + 1;
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          puVar2[5] = iVar3;
        }
        *puVar7 = 0;
        puVar7[8] = 0;
        LOCK();
        puVar7[-4] = 0;
        UNLOCK();
        LOCK();
        UNLOCK();
        iVar3 = REFG(int, 0x14c1280);
        REFG(int, 0x14c1280) = REFG(int, 0x14c1280) + -1;
      }
      puVar7 = puVar7 + 0x14;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return iVar3;
}

/* ref: FUN_00b15770 */
unsigned int F_00b15770(unsigned int gen_a0)
{
  GEN_ENTER(0xb15770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  int * piVar8;
  uint local_8;
  
  puVar1 = *(ushort * PTR32 *)((int)this + 0x3930);
  local_8 = (uint)*puVar1;
  iVar2 = *(int *)((int)this + 0x38);
  iVar3 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1c0)));
  if (local_8 != 0) {
    iVar7 = 0;
    piVar8 = ((int *)GEN_TOP((*(int *)(puVar1 + 2) + 0x14)));
    do {
      if (((piVar8[4] - piVar8[3] >> 2) + (*piVar8 - piVar8[-1] >> 2) +
           (piVar8[-4] - piVar8[-5] >> 2) != 0) &&
         (((char)piVar8[10] == '\0' || (*(short *)((int)piVar8 + 0x32) < 0)))) {
        if (7 < *(uint *)(iVar3 + 8)) {
          if (*(uint * PTR32 *)(iVar3 + 0x10) != (uint *)0x0) {
            **(uint * PTR32 *)(iVar3 + 0x10) = *(uint *)(iVar3 + 8);
          }
          uVar5 = F_00b17d60(*(undefined * PTR32 *)(iVar3 + 0xc));
          *(uint *)(iVar3 + 0x10) = uVar5;
          *(uint *)(iVar3 + 4) = uVar5 + 0x10;
          *(undefined4 *)(iVar3 + 8) = 0;
        }
        iVar4 = *(int *)(iVar3 + 8);
        *(int *)(iVar3 + 8) = iVar4 + 1;
        piVar6 = ((int *)GEN_TOP((iVar4 * 0x20 + *(int *)(iVar3 + 4))));
        *piVar6 = (int)(piVar8 + -5);
        piVar6[1] = *(int *)(puVar1 + 4) + iVar7;
        piVar6[2] = -1;
        piVar6[4] = iVar2;
        piVar6[3] = 1;
      }
      piVar8 = piVar8 + 0x12;
      iVar7 = iVar7 + 0x20;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  F_00b17830((undefined *)((int)this + 0x3854),this,((code *)REFP(0xb14900)),1);
  return 0;
}

/* ref: FUN_00b15880 */
uint F_00b15880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb15880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x12100];
  float * pfVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint * puVar5;
  uint uVar6;
  uint * puVar7;
  int iVar8;
  uint * puVar9;
  undefined1 * in_ecx;
  
  (*(uint *)(gen_frame + 0x120ec)) = 0xb158a0;
  (*(uint *)(gen_frame + 0x120ec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  pfVar1 = (float *)param_1[1];
  (*(undefined4 * PTR32 *)(gen_frame + 0x10038)) = param_1;
  (*(int * PTR32 *)(gen_frame + 0x10020)) = (int *)*param_1;
  (*(uint *)(gen_frame + 0x10024)) = param_1[4];
  (*(undefined * PTR32 *)(gen_frame + 0x1002c)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10034)) = (undefined4 *)param_1[3];
  (*(undefined4 * PTR32 *)(gen_frame + 0x10030)) = (undefined4 *)0x0;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    uVar6 = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) = (undefined4 *)0x0;
    ((uint *)(gen_frame + 0x12040))[0] = 0;
    (*(ushort * PTR32 *)(gen_frame + 0x10028)) = (ushort *)((int)this + 0x40);
    (*(uint *)(gen_frame + 0x1001c)) = (uint)*(ushort *)((int)this + 0x40);
    while( true ) {
      do {
        if (((ushort)(*(uint *)(gen_frame + 0x1001c)) >> ((byte)uVar6 & 0x1f) & 1) != 0) {
          (*(float *)(gen_frame + 0x10000)) = (*pfVar1 + pfVar1[4]) * *(float *)&REFG(undefined, 0x10ed1f0);
          (*(float *)(gen_frame + 0x10004)) = (pfVar1[1] + pfVar1[5]) * *(float *)&REFG(undefined, 0x10ed1f4);
          (*(float *)(gen_frame + 0x10008)) = (pfVar1[2] + pfVar1[6]) * *(float *)&REFG(undefined, 0x10ed1f8);
          (*(float *)(gen_frame + 0x1000c)) = (pfVar1[3] + pfVar1[7]) * *(float *)&REFG(undefined, 0x10ed1fc);
          ((float *)(gen_frame + 0x12050))[0] = pfVar1[4] - (*(float *)(gen_frame + 0x10000));
          ((float *)(gen_frame + 0x12050))[1] = pfVar1[5] - (*(float *)(gen_frame + 0x10004));
          ((float *)(gen_frame + 0x12050))[2] = pfVar1[6] - (*(float *)(gen_frame + 0x10008));
          ((float *)(gen_frame + 0x12050))[3] = pfVar1[7] - (*(float *)(gen_frame + 0x1000c));
          uVar3 = F_00b13590(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) + uVar6) * 0x80 + 0x50 + (int)(*(undefined * PTR32 *)(gen_frame + 0x1002c)),&(*(float *)(gen_frame + 0x10000))
                               ,((float *)(gen_frame + 0x12050)));
          if ((uVar3 == 3) || (uVar3 == 1)) {
            ((uint *)(gen_frame + 0x12040))[(int)(*(undefined4 * PTR32 *)(gen_frame + 0x10030))] =
                 ((uint *)(gen_frame + 0x12040))[(int)(*(undefined4 * PTR32 *)(gen_frame + 0x10030))] | uVar3 << ((byte)uVar6 * '\x02' & 0x1f);
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x10);
      (*(ushort * PTR32 *)(gen_frame + 0x10028)) = (*(ushort * PTR32 *)(gen_frame + 0x10028)) + 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) + 4;
      (*(undefined4 * PTR32 *)(gen_frame + 0x10030)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10030)) + 1);
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x10034)) <= (*(undefined4 * PTR32 *)(gen_frame + 0x10030))) break;
      uVar6 = 0;
      ((uint *)(gen_frame + 0x12040))[(int)(*(undefined4 * PTR32 *)(gen_frame + 0x10030))] = 0;
      (*(uint *)(gen_frame + 0x1001c)) = (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10028));
    }
  }
  uVar6 = 0;
  puVar4 = (undefined4 *)0x0;
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x10034)) != (undefined4 *)0x0) {
    do {
      uVar6 = uVar6 | ((uint *)(gen_frame + 0x12040))[(int)puVar4];
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (puVar4 < (*(undefined4 * PTR32 *)(gen_frame + 0x10034)));
    if (uVar6 != 0) {
      iVar8 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1c4)));
      if (7 < *(uint *)(iVar8 + 8)) {
        if (*(uint * PTR32 *)(iVar8 + 0x10) != (uint *)0x0) {
          **(uint * PTR32 *)(iVar8 + 0x10) = *(uint *)(iVar8 + 8);
        }
        uVar6 = F_00b17de0(*(undefined * PTR32 *)(iVar8 + 0xc));
        *(uint *)(iVar8 + 0x10) = uVar6;
        *(uint *)(iVar8 + 4) = uVar6 + 0x10;
        *(undefined4 *)(iVar8 + 8) = 0;
      }
      puVar5 = ((uint *)GEN_TOP((*(int *)(iVar8 + 8) * 0x20 + *(int *)(iVar8 + 4))));
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      *puVar5 = (uint)(*(int * PTR32 *)(gen_frame + 0x10020));
      puVar7 = ((uint *)(gen_frame + 0x12040));
      puVar9 = puVar5;
      for (puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x10034)); puVar9 = puVar9 + 1, puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)((int)puVar4 + -1)) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
      }
      puVar5[5] = (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x10034));
    }
  }
  ((uint *)(gen_frame + 0x12040))[0] = ((uint *)(gen_frame + 0x12040))[0] & (*(undefined4 * PTR32 *)(gen_frame + 0x10038))[2];
  uVar6 = 0;
  puVar4 = (undefined4 *)0x0;
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x10034)) != (undefined4 *)0x0) {
    do {
      uVar6 = uVar6 | ((uint *)(gen_frame + 0x12040))[(int)puVar4];
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (puVar4 < (*(undefined4 * PTR32 *)(gen_frame + 0x10034)));
    if (uVar6 != 0) {
      iVar8 = 0;
      ((float *)(gen_frame + 0x12050))[0] = 0.0;
      ((float *)(gen_frame + 0x12050))[1] = 0.0;
      ((float *)(gen_frame + 0x12050))[2] = 0.0;
      ((float *)(gen_frame + 0x12050))[3] = 0.0;
      (*(undefined4 * PTR32 *)(gen_frame + 0x10030)) = (undefined4 *)0x0;
      (*(ushort * PTR32 *)(gen_frame + 0x10028)) = (ushort *)0x0;
      do {
        (*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) = (undefined4 *)0x0;
        (*(undefined4 * PTR32 *)(gen_frame + 0x10038)) = (undefined4 *)((uint *)(gen_frame + 0x12040))[(int)(*(undefined4 * PTR32 *)(gen_frame + 0x10030))];
        in_ecx = ((undefined1 *)(gen_frame + 0x10040)) + iVar8 * 0x80;
        do {
          uVar6 = 3 << ((char)(*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) * '\x02' & 0x1fU);
          if (((uint)(*(undefined4 * PTR32 *)(gen_frame + 0x10038)) & uVar6) != 0) {
            if (((uint)(*(undefined4 * PTR32 *)(gen_frame + 0x10038)) & uVar6) == uVar6) {
              ((float *)(gen_frame + 0x12050))[(int)(*(undefined4 * PTR32 *)(gen_frame + 0x10030))] =
                   gen_bits2f((uint)gen_fl2bits(((float *)(gen_frame + 0x12050))[(int)(*(undefined4 * PTR32 *)(gen_frame + 0x10030))]) | uVar6);
            }
            else {
              F_00b16f80(in_ecx,((int)(*(ushort * PTR32 *)(gen_frame + 0x10028)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x1003c))) * 0x80 + 0x50 +
                                  (int)(*(undefined * PTR32 *)(gen_frame + 0x1002c)));
              ((char *)(gen_frame + 0x120a8))[iVar8] = (char)(*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) * '\x02';
              ((undefined1 *)(gen_frame + 0x12068))[iVar8] = (*(undefined1 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x10030)) + 0));
              iVar8 = iVar8 + 1;
              in_ecx = in_ecx + 0x80;
            }
          }
          piVar2 = (*(int * PTR32 *)(gen_frame + 0x10020));
          (*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) + 1);
        } while ((*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) < (undefined4 *)0x10);
        (*(ushort * PTR32 *)(gen_frame + 0x10028)) = (*(ushort * PTR32 *)(gen_frame + 0x10028)) + 8;
        (*(undefined4 * PTR32 *)(gen_frame + 0x10030)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10030)) + 1);
      } while ((*(undefined4 * PTR32 *)(gen_frame + 0x10030)) < (*(undefined4 * PTR32 *)(gen_frame + 0x10034)));
      puVar4 = (undefined4 *)
               ((uint)gen_fl2bits(((float *)(gen_frame + 0x12050))[3]) | (uint)gen_fl2bits(((float *)(gen_frame + 0x12050))[2]) |
                (uint)gen_fl2bits(((float *)(gen_frame + 0x12050))[1]) | (uint)gen_fl2bits(((float *)(gen_frame + 0x12050))[0]));
      if (puVar4 != (undefined4 *)0x0) {
        if (((*(uint *)(gen_frame + 0x10024)) & 1) != 0) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) = (undefined4 *)0x0;
          (*(undefined4 * PTR32 *)(gen_frame + 0x10038)) = (undefined4 *)((*(int * PTR32 *)(gen_frame + 0x10020))[1] - *(*(int * PTR32 *)(gen_frame + 0x10020)) >> 2);
          puVar4 = (undefined4 *)0x0;
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x10038)) != (undefined4 *)0x0) {
            do {
              F_00b13ab0((*(undefined * PTR32 *)(gen_frame + 0x1002c)),(*(undefined4 * PTR32 *)(gen_frame + 0x10034)),((float *)(gen_frame + 0x12050)),
                           *(undefined4 *)(*piVar2 + (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x1003c))) * 4));
              puVar4 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) + 1);
              (*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) = puVar4;
            } while (puVar4 < (*(undefined4 * PTR32 *)(gen_frame + 0x10038)));
          }
        }
        if (((*(uint *)(gen_frame + 0x10024)) & 2) != 0) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) = (undefined4 *)0x0;
          (*(undefined4 * PTR32 *)(gen_frame + 0x10038)) = (undefined4 *)(piVar2[5] - piVar2[4] >> 2);
          puVar4 = (undefined4 *)0x0;
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x10038)) != (undefined4 *)0x0) {
            do {
              F_00b13ab0((*(undefined * PTR32 *)(gen_frame + 0x1002c)),(*(undefined4 * PTR32 *)(gen_frame + 0x10034)),((float *)(gen_frame + 0x12050)),
                           *(undefined4 *)(piVar2[4] + (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x1003c))) * 4));
              puVar4 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) + 1);
              (*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) = puVar4;
            } while (puVar4 < (*(undefined4 * PTR32 *)(gen_frame + 0x10038)));
          }
        }
        if (((*(uint *)(gen_frame + 0x10024)) & 4) != 0) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) = (undefined4 *)0x0;
          (*(undefined4 * PTR32 *)(gen_frame + 0x10038)) = (undefined4 *)(piVar2[9] - piVar2[8] >> 2);
          puVar4 = (undefined4 *)0x0;
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x10038)) != (undefined4 *)0x0) {
            do {
              F_00b13ab0((*(undefined * PTR32 *)(gen_frame + 0x1002c)),(*(undefined4 * PTR32 *)(gen_frame + 0x10034)),((float *)(gen_frame + 0x12050)),
                           *(undefined4 *)(piVar2[8] + (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x1003c))) * 4));
              puVar4 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) + 1);
              (*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) = puVar4;
            } while (puVar4 < (*(undefined4 * PTR32 *)(gen_frame + 0x10038)));
          }
        }
      }
      if (iVar8 != 0) {
        if (((*(uint *)(gen_frame + 0x10024)) & 1) != 0) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) = (undefined4 *)0x0;
          (*(undefined4 * PTR32 *)(gen_frame + 0x10038)) = (undefined4 *)(piVar2[1] - *piVar2 >> 2);
          puVar4 = (undefined4 *)0x0;
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x10038)) != (undefined4 *)0x0) {
            do {
              F_00b13b20((*(undefined * PTR32 *)(gen_frame + 0x1002c)),((undefined1 *)(gen_frame + 0x10040)),((undefined1 *)(gen_frame + 0x12068)),((char *)(gen_frame + 0x120a8)),iVar8,
                           *(undefined4 *)(*piVar2 + (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x1003c))) * 4),(*(undefined4 * PTR32 *)(gen_frame + 0x10034)));
              puVar4 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) + 1);
              (*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) = puVar4;
            } while (puVar4 < (*(undefined4 * PTR32 *)(gen_frame + 0x10038)));
          }
        }
        if (((*(uint *)(gen_frame + 0x10024)) & 2) != 0) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) = (undefined4 *)0x0;
          (*(undefined4 * PTR32 *)(gen_frame + 0x10038)) = (undefined4 *)(piVar2[5] - piVar2[4] >> 2);
          puVar4 = (undefined4 *)0x0;
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x10038)) != (undefined4 *)0x0) {
            do {
              F_00b13b20((*(undefined * PTR32 *)(gen_frame + 0x1002c)),((undefined1 *)(gen_frame + 0x10040)),((undefined1 *)(gen_frame + 0x12068)),((char *)(gen_frame + 0x120a8)),iVar8,
                           *(undefined4 *)(piVar2[4] + (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x1003c))) * 4),(*(undefined4 * PTR32 *)(gen_frame + 0x10034)));
              puVar4 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) + 1);
              (*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) = puVar4;
            } while (puVar4 < (*(undefined4 * PTR32 *)(gen_frame + 0x10038)));
          }
        }
        if (((*(uint *)(gen_frame + 0x10024)) & 4) != 0) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) = (undefined4 *)0x0;
          (*(undefined4 * PTR32 *)(gen_frame + 0x10038)) = (undefined4 *)(piVar2[9] - piVar2[8] >> 2);
          puVar4 = (undefined4 *)0x0;
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x10038)) != (undefined4 *)0x0) {
            do {
              F_00b13b20((*(undefined * PTR32 *)(gen_frame + 0x1002c)),((undefined1 *)(gen_frame + 0x10040)),((undefined1 *)(gen_frame + 0x12068)),((char *)(gen_frame + 0x120a8)),iVar8,
                           *(undefined4 *)(piVar2[8] + (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x1003c))) * 4),(*(undefined4 * PTR32 *)(gen_frame + 0x10034)));
              puVar4 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) + 1);
              (*(undefined4 * PTR32 *)(gen_frame + 0x1003c)) = puVar4;
            } while (puVar4 < (*(undefined4 * PTR32 *)(gen_frame + 0x10038)));
          }
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x120ec)) ^ (uint)(uint)(gen_frame + 0x0));
  return (uint)puVar4;
}

/* ref: FUN_00b15e50 */
uint F_00b15e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb15e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    F_00b13810(this,1);
  }
  uVar1 = F_00b15880(this,param_1);
  return uVar1;
}

/* ref: FUN_00b15e80 */
unsigned int F_00b15e80(unsigned int gen_a0)
{
  GEN_ENTER(0xb15e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  ushort * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  ushort * puVar9;
  uint local_24;
  int local_c;
  int local_8;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x392c);
  puVar1 = *(ushort * PTR32 *)((int)this + 0x3930);
  uVar7 = (uint)*puVar1;
  iVar2 = *(int *)((int)this + 0x38);
  iVar3 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1c0)));
  uVar8 = 0;
  local_24 = (uint)(longlong)TRUNC((double)uVar7 * REFG(double, 0x1088108));
  if (uVar7 != 0) {
    local_8 = 0;
    puVar9 = ((ushort *)GEN_TOP((*(int *)(puVar1 + 2) + 0x46)));
    do {
      if ((*(int *)(puVar9 + -0x11) - *(int *)(puVar9 + -0x13) >> 2) +
          (*(int *)(puVar9 + -0x19) - *(int *)(puVar9 + -0x1b) >> 2) +
          (*(int *)(puVar9 + -0x21) - *(int *)(puVar9 + -0x23) >> 2) == 0) {
        *puVar9 = *puVar9 & 0x7fff;
      }
      else {
        local_c = -1;
        if (((char)puVar9[-5] != '\0') && (F_00bcc650(puVar9 + -3), (*puVar9 >> 0xe & 1) != 0)) {
          local_c = -0x3000001;
        }
        *puVar9 = *puVar9 & 0x7fff;
        if (7 < *(uint *)(iVar3 + 8)) {
          if (*(uint * PTR32 *)(iVar3 + 0x10) != (uint *)0x0) {
            **(uint * PTR32 *)(iVar3 + 0x10) = *(uint *)(iVar3 + 8);
          }
          uVar5 = F_00b17d60(*(undefined * PTR32 *)(iVar3 + 0xc));
          *(uint *)(iVar3 + 0x10) = uVar5;
          *(uint *)(iVar3 + 4) = uVar5 + 0x10;
          *(undefined4 *)(iVar3 + 8) = 0;
        }
        iVar4 = *(int *)(iVar3 + 8);
        *(int *)(iVar3 + 8) = iVar4 + 1;
        piVar6 = ((int *)GEN_TOP((iVar4 * 0x20 + *(int *)(iVar3 + 4))));
        *piVar6 = (int)(puVar9 + -0x23);
        piVar6[1] = *(int *)(puVar1 + 4) + local_8;
        piVar6[2] = local_c;
        piVar6[4] = iVar2;
        piVar6[3] = 1;
        piVar6[5] = (uint)(uVar8 < local_24) * (uVar8 + 1 & 7);
      }
      local_8 = local_8 + 0x20;
      uVar8 = uVar8 + 1;
      puVar9 = puVar9 + 0x24;
    } while (uVar8 < uVar7);
  }
  F_00b17830((undefined *)((int)this + 0x3854),this,((code *)REFP(0xb15e50)),1);
  if (this_00 != (undefined *)0x0) {
    F_00b13810(this,1);
    F_00b15680();
    uVar7 = 0;
    while (*(int *)((int)&REFG(undefined4, 0x14c1a10) + uVar7) == 0) {
      uVar7 = uVar7 + 0x50;
      if (0x4af < uVar7) {
        return 0;
      }
    }
    F_00b1af80(this_00);
    F_00b15680();
  }
  return 0;
}

/* ref: FUN_00b16040 */
unsigned int F_00b16040(unsigned int gen_a0)
{
  GEN_ENTER(0xb16040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined * this_00;
  ushort * puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  uint uVar10;
  uint local_24;
  int local_c;
  
  uVar1 = *(undefined4 *)((int)this + 0x38);
  this_00 = *(undefined * PTR32 *)((int)this + 0x392c);
  puVar2 = *(ushort * PTR32 *)((int)this + 0x3930);
  uVar3 = *(undefined4 *)((int)this + 0x14);
  uVar6 = (uint)*puVar2;
  iVar4 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1c0)));
  uVar10 = 0;
  local_24 = (uint)(longlong)TRUNC((double)uVar6 * REFG(double, 0x1088108));
  if (uVar6 != 0) {
    piVar7 = ((int *)GEN_TOP((*(int *)(puVar2 + 2) + 0x24)));
    local_c = 0;
    do {
      if ((piVar7[-4] - piVar7[-5] >> 2) + (*piVar7 - piVar7[-1] >> 2) +
          (piVar7[-8] - piVar7[-9] >> 2) != 0) {
        if (7 < *(uint *)(iVar4 + 8)) {
          if (*(uint * PTR32 *)(iVar4 + 0x10) != (uint *)0x0) {
            **(uint * PTR32 *)(iVar4 + 0x10) = *(uint *)(iVar4 + 8);
          }
          uVar8 = F_00b17d60(*(undefined * PTR32 *)(iVar4 + 0xc));
          *(uint *)(iVar4 + 0x10) = uVar8;
          *(uint *)(iVar4 + 4) = uVar8 + 0x10;
          *(undefined4 *)(iVar4 + 8) = 0;
        }
        iVar5 = *(int *)(iVar4 + 8);
        *(int *)(iVar4 + 8) = iVar5 + 1;
        puVar9 = ((undefined4 *)GEN_TOP((iVar5 * 0x20 + *(int *)(iVar4 + 4))));
        *puVar9 = piVar7 + -9;
        puVar9[1] = *(int *)(puVar2 + 4) + local_c;
        puVar9[3] = uVar3;
        puVar9[4] = uVar1;
        puVar9[2] = 0xffffffff;
        puVar9[5] = (uint)(uVar10 < local_24) * (uVar10 + 1 & 7);
      }
      piVar7 = piVar7 + 0x12;
      local_c = local_c + 0x20;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar6);
  }
  F_00b17830((undefined *)((int)this + 0x3854),this,((code *)REFP(0xb15e50)),1);
  if (this_00 != (undefined *)0x0) {
    F_00b13810(this,1);
    F_00b15680();
    uVar6 = 0;
    while (*(int *)((int)&REFG(undefined4, 0x14c1a10) + uVar6) == 0) {
      uVar6 = uVar6 + 0x50;
      if (0x4af < uVar6) {
        return 0;
      }
    }
    F_00b1af80(this_00);
    F_00b15680();
  }
  return 0;
}

/* ref: FUN_00b161d0 */
unsigned int F_00b161d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb161d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char cVar1;
  
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) != '\0') {
    cVar1 = '\0';
    if ((char)(*(undefined4 *)&gen_args[1]) != '\0') {
      cVar1 = *(char *)(REFG(int, 0x1487c58) + 0x8018);
    }
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3850))) = (*(int *)&gen_args[2]);
    (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),(*(int *)&gen_args[2]) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) + -1);
    if (cVar1 != '\0') {
      F_00b17b10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38bc))),(*(undefined * PTR32 *)&gen_args[0]),((code *)REFP(0xb14f40)),(*(undefined4 *)&gen_args[1]));
      F_00b15770((*(undefined * PTR32 *)&gen_args[0]));
      return 0;
    }
    F_00b17b10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38bc))),(*(undefined * PTR32 *)&gen_args[0]),((code *)REFP(0xb14670)),(*(undefined4 *)&gen_args[1]));
  }
  return 0;
}

/* ref: FUN_00b16250 */
unsigned int F_00b16250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  bool bVar1;
  int iVar2;
  uint uVar3;
  gen_v16 * pauVar4;
  uint * puVar5;
  gen_v16 * pauVar6;
  int local_20;
  int local_1c;
  int * local_18;
  ushort * local_c;
  
  if (*(char *)((int)this + 6) != '\0') {
    local_20 = *(int *)((int)this + 0x14);
    if (local_20 != 0) {
      local_c = (ushort *)((int)this + 0x40);
      local_18 = (int *)((int)this + 0x18);
      local_1c = 0;
      do {
        puVar5 = (uint *)(*local_18 * 0x358 + 0x20 + REFG(int, 0x137127c));
        uVar3 = 0;
        do {
          if (((*puVar5 & 1) == 0) || ((*puVar5 >> 1 & 1) == 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          *local_c = ~(1 << ((byte)uVar3 & 0x1f)) & *local_c | (ushort)bVar1 << ((byte)uVar3 & 0x1f)
          ;
          if (bVar1) {
            F_00662250((local_1c + uVar3) * 0x60 + 0x2050 + (int)this,puVar5[5] + 0xc0);
          }
          uVar3 = uVar3 + 1;
          puVar5 = puVar5 + 0xd;
        } while (uVar3 < 0x10);
        local_18 = local_18 + 1;
        local_c = local_c + 1;
        local_1c = local_1c + 0x10;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
    F_00b14410(this);
    pauVar4 = *(undefined1 (**) [16])((int)this + 0x10);
    GEN_V16_SET(*pauVar4, 0x0);
    pauVar6 = pauVar4 + 1;
    for (iVar2 = 0x13ffc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)*pauVar6 = *(undefined4 *)*pauVar4;
      pauVar4 = (gen_v16 *)(*pauVar4 + 4);
      pauVar6 = (gen_v16 *)(*pauVar6 + 4);
    }
    if ((char)param_1 != '\0') {
      F_00b15e80(this);
      return 0;
    }
    F_00b16040(this);
  }
  return 0;
}

/* ref: FUN_00b16390 */
uint F_00b16390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bcabf0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b16470 */
byte F_00b16470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_00b164e0 */
byte F_00b164e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb164e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_00b16530 */
uint F_00b16530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb16530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b16550 */
uint F_00b16550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb16550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b16570 */
byte F_00b16570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16570u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((!((float10)param_1[4] < (float10)*(float *)param_2) &&
       !((float10)*(float *)param_2 < (float10)*param_1)) &&
     (!((float10)param_1[5] < (float10)*(float *)(param_2 + 4)) &&
      !((float10)*(float *)(param_2 + 4) < (float10)param_1[1]))) {
    if ((float10)param_1[6] < (float10)*(float *)(param_2 + 8)) {
      return 0;
    }
    return !((float10)*(float *)(param_2 + 8) < (float10)param_1[2]);
  }
  return 0;
}

/* ref: FUN_00b16a60 */
uint F_00b16a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16a60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(ushort)param_2 * 0x10 + in_ecx;
}

/* ref: FUN_00b16a80 */
uint F_00b16a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16a80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return ((ushort)param_2 + 0x78) * 0x10 + in_ecx;
}

/* ref: FUN_00b16ac0 */
ushort F_00b16ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16ac0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(ushort *)(in_ecx + 0xf00 + (uint)(ushort)param_2 * 2);
}

/* ref: FUN_00b16b50 */
byte F_00b16b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16b50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x3c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b16b80 */
uint F_00b16b80(unsigned int gen_a0)
{
  GEN_ENTER(0xb16b80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (uint)*(ushort *)(&REFG(undefined, 0x14c1ec0) + (uint)(byte)param_1 * 2);
}

/* ref: FUN_00b16bb0 */
uint F_00b16bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16bb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *(int *)(in_ecx + 8);
}

/* ref: FUN_00b16bc0 */
uint F_00b16bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb16bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return (uint)((param_1 * 0x100 + 8 + (uint)(byte)param_2) * 0x10 + (int)this);
}

/* ref: FUN_00b16c00 */
uint F_00b16c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16c00u, gen_a0, gen_a1, 0u, 0u);
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
  uVar1 = param_1[7];
  *(uint *)((int)this + 0x1c) = uVar1;
  return uVar1;
}

/* ref: FUN_00b16c50 */
unsigned int F_00b16c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb16c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined4 *)this = param_1;
  uVar2 = 0;
  puVar1 = this;
  if (param_3 != 0) {
    do {
      puVar1[1] = *(undefined4 *)(param_2 + uVar2 * 4);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < param_3);
  }
  *(uint *)((int)this + 0x14) = param_3;
  return 0;
}

/* ref: FUN_00b16cb0 */
uint F_00b16cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16cb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 - *(int *)(in_ecx + 8) >> 4;
}

/* ref: FUN_00b16cc0 */
uint F_00b16cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16cc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *(int *)(in_ecx + 8);
}

/* ref: FUN_00b16cd0 */
uint F_00b16cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb16cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return (param_1 * 0x100 + 8 + (uint)(byte)param_2) * 0x10 + *(int *)((int)this + 0x3930);
}

/* ref: FUN_00b16d10 */
uint F_00b16d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16d10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x28 + param_2 * 4);
}

/* ref: FUN_00b16d40 */
uint F_00b16d40(unsigned int gen_a0)
{
  GEN_ENTER(0xb16d40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 * 4;
}

/* ref: FUN_00b16d50 */
uint F_00b16d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16d50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + param_2 * 4;
}

/* ref: FUN_00b16d60 */
uint F_00b16d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb16d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + (param_1 + param_2 * 4) * 4)));
}

/* ref: FUN_00b16d80 */
uint F_00b16d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb16d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 + param_2 * 4;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + uVar1 * 4))) = param_3;
  return uVar1;
}

/* ref: FUN_00b16dd0 */
uint F_00b16dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16dd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: Singleton_VCullingManager_Culling_Graphics_Client_Graphics::vf0 */
uint F_00b16e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10ed1c4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b16e60 */
unsigned int F_00b16e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb16e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar3 = (int)this + 0x10;
  puVar1 = (undefined4 *)((int)this + 0x7a0);
  iVar2 = 0xf;
  do {
    puVar1[-4] = 0;
    *puVar1 = 0;
    puVar1[8] = 0;
    puVar1[-3] = iVar3;
    puVar1[-2] = param_1;
    puVar1[-1] = param_2;
    iVar3 = iVar3 + 0x80;
    puVar1 = puVar1 + 0x14;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00b16eb0 */
uint F_00b16eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb16eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = 0;
  piVar3 = (int *)((int)this + 0x790);
  while( true ) {
    LOCK();
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      *piVar3 = 1;
      iVar1 = 0;
    }
    UNLOCK();
    if (iVar1 == 0) break;
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 0x14;
    if (0xe < uVar2) {
      return 0;
    }
  }
  LOCK();
  *(int *)this = *(int *)this + 1;
  UNLOCK();
  return (int)this + uVar2 * 0x50 + 0x790;
}

/* ref: FUN_00b16f10 */
uint F_00b16f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if ((param_1 & 2) == 0) {
    F_00b81e70();
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this + -4);
    iVar1 = *(int *)this;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      F_00b81e70();
    }
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_00b16f80 */
unsigned int F_00b16f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb16f80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  in_ecx[0xe] = param_2[0xe];
  in_ecx[0xf] = param_2[0xf];
  in_ecx[0x10] = param_2[0x10];
  in_ecx[0x11] = param_2[0x11];
  in_ecx[0x12] = param_2[0x12];
  in_ecx[0x13] = param_2[0x13];
  in_ecx[0x14] = param_2[0x14];
  in_ecx[0x15] = param_2[0x15];
  in_ecx[0x16] = param_2[0x16];
  in_ecx[0x17] = param_2[0x17];
  in_ecx[0x18] = param_2[0x18];
  in_ecx[0x19] = param_2[0x19];
  in_ecx[0x1a] = param_2[0x1a];
  in_ecx[0x1b] = param_2[0x1b];
  in_ecx[0x1c] = param_2[0x1c];
  in_ecx[0x1d] = param_2[0x1d];
  in_ecx[0x1e] = param_2[0x1e];
  in_ecx[0x1f] = param_2[0x1f];
  return 0;
}

/* ref: FUN_00b17090 */
unsigned int F_00b17090(unsigned int gen_a0)
{
  GEN_ENTER(0xb17090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x110 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 8;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar8 = (uVar7 & 0x1f) * 0x110;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  uVar5 = *(uint *)(iVar8 + iVar4);
  puVar1 = (uint *)((int)this + 100);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,uVar7 * 0x20 + iVar8 + 0x10 + iVar4);
    puVar1 = (uint *)((int)this + 100);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_00b17160 */
uint F_00b17160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb17160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xb16530));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00b17180 */
unsigned int F_00b17180(unsigned int gen_a0)
{
  GEN_ENTER(0xb17180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x110 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 8;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar8 = (uVar7 & 0x1f) * 0x110;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  uVar5 = *(uint *)(iVar8 + iVar4);
  puVar1 = (uint *)((int)this + 100);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,uVar7 * 0x20 + iVar8 + 0x10 + iVar4);
    puVar1 = (uint *)((int)this + 100);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_00b17250 */
uint F_00b17250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb17250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xb16550));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00b17270 */
uint F_00b17270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb17270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(char *)((int)this + 2) = (char)param_1;
  if ((char)param_1 != '\x02') {
    *(ushort *)((int)this + 0xe) = *(ushort *)((int)this + 0xe) & 0x7fff;
    return 0x7fff;
  }
  *(ushort *)((int)this + 0xe) = *(ushort *)((int)this + 0xe) | 0x8000;
  return 0;
}

/* ref: FUN_00b172d0 */
uint F_00b172d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb172d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 4);
}

/* ref: FUN_00b172e0 */
uint F_00b172e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb172e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x10) + param_2 * 4)));
}

/* ref: FUN_00b172f0 */
uint F_00b172f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb172f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x20) + param_2 * 4)));
}

/* ref: FUN_00b17310 */
uint F_00b17310(unsigned int gen_a0)
{
  GEN_ENTER(0xb17310u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b17330 */
uint F_00b17330(unsigned int gen_a0)
{
  GEN_ENTER(0xb17330u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b173c0 */
uint F_00b173c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb173c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b173e0 */
uint F_00b173e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb173e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b17400 */
uint F_00b17400(unsigned int gen_a0)
{
  GEN_ENTER(0xb17400u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b17420 */
uint F_00b17420(unsigned int gen_a0)
{
  GEN_ENTER(0xb17420u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b17440 */
uint F_00b17440(unsigned int gen_a0)
{
  GEN_ENTER(0xb17440u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b17460 */
uint F_00b17460(unsigned int gen_a0)
{
  GEN_ENTER(0xb17460u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b17480 */
uint F_00b17480(unsigned int gen_a0)
{
  GEN_ENTER(0xb17480u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b174a0 */
uint F_00b174a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb174a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b17500 */
unsigned int F_00b17500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb17500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b17090(this);
  return 0;
}

/* ref: FUN_00b17550 */
unsigned int F_00b17550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb17550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b17180(this);
  return 0;
}

/* ref: FUN_00b17560 */
uint F_00b17560(unsigned int gen_a0)
{
  GEN_ENTER(0xb17560u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b17580 */
uint F_00b17580(unsigned int gen_a0)
{
  GEN_ENTER(0xb17580u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1,0x10);
  return uVar1;
}

/* ref: JobSystem_VCullingManager_Culling_Graphics_Client_UCullingJobOpt::vf0 */
uint F_00b175c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb175c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10ed1dc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),this);
  }
  return (uint)this;
}

/* ref: JobSystem_VCullingManager_Culling_Graphics_Client_UCallbackJobOpt::vf0 */
uint F_00b175f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb175f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10ed1e4));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),this);
  }
  return (uint)this;
}

/* ref: FUN_00b17620 */
byte F_00b17620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb17620u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * PTR32 * ppiVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int * piVar7;
  int * piVar8;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x2;
  ppiVar1 = &(*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) < 3) {
    ppiVar1 = &(*(int * PTR32 *)(gen_frame + 0x18));
  }
  piVar8 = *ppiVar1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar8;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[1]) = piVar8;
  if (piVar8 == (int *)0x0) {
    puVar2 = (uint *)F_00406a50(4);
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)(REFG(int, 0x1371270) + 4);
    (*(int *)(gen_frame + 0x14)) = *(*(int * PTR32 *)(gen_frame + 0x18));
    uVar5 = -(uint)((int)(ZEXT48(piVar8) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar8) * 0x14);
    puVar2 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 8))
                               ((*(int * PTR32 *)(gen_frame + 0x18)),-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0x10)));
    piVar8 = (*(int * PTR32 *)&gen_args[1]);
  }
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = (uint)piVar8;
    puVar2 = puVar3;
    piVar7 = piVar8;
    while (piVar7 = (int *)((int)piVar7 - 1), -1 < (int)piVar7) {
      *puVar2 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10ed1d4));
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar3;
  if (piVar8 != (int *)0x0) {
    iVar6 = 0;
    piVar7 = piVar8;
    do {
      iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + iVar6;
      iVar6 = iVar6 + 0x14;
      piVar7 = (int *)((int)piVar7 - 1);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 8;
      *(undefined * PTR32 *)(iVar4 + 0xc) = (*(undefined * PTR32 *)&gen_args[0]);
      *(undefined4 *)(iVar4 + 0x10) = 0;
    } while (piVar7 != (int *)0x0);
  }
  this_00 = (undefined *)F_00406b90(0x78,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0xb16530));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xb17500));
    uVar5 = F_004a0c60(this_00,&(*(gen_code32 *)(gen_frame + 0x4)),0,(int)piVar8 - 1);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  return 1;
}

/* ref: FUN_00b17780 */
uint F_00b17780(unsigned int gen_a0)
{
  GEN_ENTER(0xb17780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  piVar5 = (int *)((int)this + 0x1c);
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar4 = *(int *)((int)this + 8);
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)((int)this + 4);
      *(undefined4 *)(uVar3 + 0x10 + iVar2) = 0;
      *(undefined4 *)(uVar3 + 0xc + iVar2) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 + -1);
    uVar3 = (uint)uVar6;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b17830 */
unsigned int F_00b17830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb17830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar2)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    F_004a1460(REFG(undefined4, 0x13728ac),*(undefined4 *)((int)this + 0x10));
    F_00b17090(this);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10));
  }
  iVar4 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar2 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar2 + 8 + iVar4) = 8;
    *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if ((char)param_3 != '\0') {
    piVar5 = (int *)((int)this + 0x1c);
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return 0;
}

/* ref: FUN_00b17900 */
byte F_00b17900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb17900u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * PTR32 * ppiVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int * piVar7;
  int * piVar8;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x2;
  ppiVar1 = &(*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) < 3) {
    ppiVar1 = &(*(int * PTR32 *)(gen_frame + 0x18));
  }
  piVar8 = *ppiVar1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar8;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[1]) = piVar8;
  if (piVar8 == (int *)0x0) {
    puVar2 = (uint *)F_00406a50(4);
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)(REFG(int, 0x1371270) + 4);
    (*(int *)(gen_frame + 0x14)) = *(*(int * PTR32 *)(gen_frame + 0x18));
    uVar5 = -(uint)((int)(ZEXT48(piVar8) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar8) * 0x14);
    puVar2 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 8))
                               ((*(int * PTR32 *)(gen_frame + 0x18)),-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0x10)));
    piVar8 = (*(int * PTR32 *)&gen_args[1]);
  }
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = (uint)piVar8;
    puVar2 = puVar3;
    piVar7 = piVar8;
    while (piVar7 = (int *)((int)piVar7 - 1), -1 < (int)piVar7) {
      *puVar2 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10ed1cc));
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar3;
  if (piVar8 != (int *)0x0) {
    iVar6 = 0;
    piVar7 = piVar8;
    do {
      iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + iVar6;
      iVar6 = iVar6 + 0x14;
      piVar7 = (int *)((int)piVar7 - 1);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 8;
      *(undefined * PTR32 *)(iVar4 + 0xc) = (*(undefined * PTR32 *)&gen_args[0]);
      *(undefined4 *)(iVar4 + 0x10) = 0;
    } while (piVar7 != (int *)0x0);
  }
  this_00 = (undefined *)F_00406b90(0x78,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0xb16550));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xb17550));
    uVar5 = F_004a0c60(this_00,&(*(gen_code32 *)(gen_frame + 0x4)),0,(int)piVar8 - 1);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  return 1;
}

/* ref: FUN_00b17a60 */
uint F_00b17a60(unsigned int gen_a0)
{
  GEN_ENTER(0xb17a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  piVar5 = (int *)((int)this + 0x1c);
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar4 = *(int *)((int)this + 8);
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)((int)this + 4);
      *(undefined4 *)(uVar3 + 0x10 + iVar2) = 0;
      *(undefined4 *)(uVar3 + 0xc + iVar2) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 + -1);
    uVar3 = (uint)uVar6;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b17b10 */
unsigned int F_00b17b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb17b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar2)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    F_004a1460(REFG(undefined4, 0x13728ac),*(undefined4 *)((int)this + 0x10));
    F_00b17180(this);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10));
  }
  iVar4 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar2 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar2 + 8 + iVar4) = 8;
    *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if ((char)param_3 != '\0') {
    piVar5 = (int *)((int)this + 0x1c);
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return 0;
}

/* ref: JobQueue_JobSystem_VCullingManager_Culling_Graphics_Client::vf0 */
uint F_00b17be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb17be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_1 & 2) != 0) {
    iVar2 = *(int *)((int)this + -4);
    uVar1 = (int)this - 4;
    puVar3 = (undefined4 *)((int)this + iVar2 * 0x14);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      puVar3 = puVar3 + -5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10ed1d4));
    }
    if (((param_1 & 1) != 0) && (uVar1 != 0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),uVar1);
    }
    return uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10ed1d4));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),this);
  }
  return (uint)this;
}

/* ref: JobQueue_JobSystem_VCullingManager_Culling_Graphics_Client::vf0_00b17c50 */
uint F_00b17c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb17c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_1 & 2) != 0) {
    iVar2 = *(int *)((int)this + -4);
    uVar1 = (int)this - 4;
    puVar3 = (undefined4 *)((int)this + iVar2 * 0x14);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      puVar3 = puVar3 + -5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10ed1cc));
    }
    if (((param_1 & 1) != 0) && (uVar1 != 0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),uVar1);
    }
    return uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10ed1cc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),this);
  }
  return (uint)this;
}

/* ref: FUN_00b17cc0 */
uint F_00b17cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb17cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1;
      UNLOCK();
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),0x2200,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  LOCK();
  uVar4 = *puVar2;
  *puVar2 = uVar5;
  UNLOCK();
  return uVar4;
}

/* ref: FUN_00b17d10 */
uint F_00b17d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb17d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1;
      UNLOCK();
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),0x2200,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  LOCK();
  uVar4 = *puVar2;
  *puVar2 = uVar5;
  UNLOCK();
  return uVar4;
}

/* ref: FUN_00b17d60 */
uint F_00b17d60(unsigned int gen_a0)
{
  GEN_ENTER(0xb17d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = (uint *)((int)this + 0x5c);
  LOCK();
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar6 = uVar3 >> 5;
  if (*(int *)((int)this + uVar6 * 4 + 0x1c) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = (int *)((int)this + uVar6 * 4 + 0x1c);
      do {
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2;
        UNLOCK();
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x110 + *(int *)((int)this + uVar6 * 4 + 0x1c);
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),0x2200,0x10)
    ;
    LOCK();
    *(uint *)((int)this + uVar6 * 4 + 0x1c) = uVar5;
    UNLOCK();
  }
  return (uVar3 & 0x1f) * 0x110 + *(int *)((int)this + uVar6 * 4 + 0x1c);
}

/* ref: FUN_00b17de0 */
uint F_00b17de0(unsigned int gen_a0)
{
  GEN_ENTER(0xb17de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = (uint *)((int)this + 0x5c);
  LOCK();
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar6 = uVar3 >> 5;
  if (*(int *)((int)this + uVar6 * 4 + 0x1c) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = (int *)((int)this + uVar6 * 4 + 0x1c);
      do {
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2;
        UNLOCK();
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x110 + *(int *)((int)this + uVar6 * 4 + 0x1c);
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),0x2200,0x10)
    ;
    LOCK();
    *(uint *)((int)this + uVar6 * 4 + 0x1c) = uVar5;
    UNLOCK();
  }
  return (uVar3 & 0x1f) * 0x110 + *(int *)((int)this + uVar6 * 4 + 0x1c);
}

/* ref: FUN_00b17e60 */
uint F_00b17e60(unsigned int gen_a0)
{
  GEN_ENTER(0xb17e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (7 < *(uint *)((int)this + 8)) {
    if (*(uint * PTR32 *)((int)this + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)((int)this + 0x10) = *(uint *)((int)this + 8);
    }
    uVar2 = F_00b17de0(*(undefined * PTR32 *)((int)this + 0xc));
    *(uint *)((int)this + 0x10) = uVar2;
    *(uint *)((int)this + 4) = uVar2 + 0x10;
    *(undefined4 *)((int)this + 8) = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 8) = iVar1 + 1;
  return iVar1 * 0x20 + *(int *)((int)this + 4);
}

/* ref: FUN_00b17ea0 */
uint F_00b17ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xb17ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (7 < *(uint *)((int)this + 8)) {
    if (*(uint * PTR32 *)((int)this + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)((int)this + 0x10) = *(uint *)((int)this + 8);
    }
    uVar2 = F_00b17d60(*(undefined * PTR32 *)((int)this + 0xc));
    *(uint *)((int)this + 0x10) = uVar2;
    *(uint *)((int)this + 4) = uVar2 + 0x10;
    *(undefined4 *)((int)this + 8) = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 8) = iVar1 + 1;
  return iVar1 * 0x20 + *(int *)((int)this + 4);
}

/* ref: FUN_00b17ee0 */
uint F_00b17ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb17ee0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  byte * pbVar19;
  uint uVar20;
  
  uVar20 = param_1 >> 0x10;
  uVar3 = param_1 & 0xffff;
  if (param_3 == 1) {
    uVar3 = uVar3 + *param_2;
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    uVar20 = uVar20 + uVar3;
    if (0xfff0 < uVar20) {
      uVar20 = uVar20 - 0xfff1;
    }
    return uVar20 << 0x10 | uVar3;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar3 = uVar3 + *param_2;
      param_2 = param_2 + 1;
      uVar20 = uVar20 + uVar3;
    }
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    return ((uVar20 / 0xfff1) * 0xf + uVar20) * 0x10000 | uVar3;
  }
  pbVar19 = param_2;
  if (0x15af < param_3) {
    param_2 = (byte *)(param_3 / 0x15b0);
    do {
      param_3 = param_3 - 0x15b0;
      iVar1 = 0x15b;
      do {
        iVar4 = uVar3 + *pbVar19;
        iVar5 = iVar4 + (uint)pbVar19[1];
        iVar6 = iVar5 + (uint)pbVar19[2];
        iVar7 = iVar6 + (uint)pbVar19[3];
        iVar8 = iVar7 + (uint)pbVar19[4];
        iVar9 = iVar8 + (uint)pbVar19[5];
        iVar10 = iVar9 + (uint)pbVar19[6];
        iVar11 = iVar10 + (uint)pbVar19[7];
        iVar12 = iVar11 + (uint)pbVar19[8];
        iVar13 = iVar12 + (uint)pbVar19[9];
        iVar14 = iVar13 + (uint)pbVar19[10];
        iVar15 = iVar14 + (uint)pbVar19[0xb];
        iVar16 = iVar15 + (uint)pbVar19[0xc];
        iVar17 = iVar16 + (uint)pbVar19[0xd];
        iVar18 = iVar17 + (uint)pbVar19[0xe];
        uVar3 = iVar18 + (uint)pbVar19[0xf];
        uVar20 = uVar20 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12 +
                 iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
        pbVar19 = pbVar19 + 0x10;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      uVar3 = uVar3 % 0xfff1;
      uVar20 = uVar20 % 0xfff1;
      param_2 = (byte *)((int)param_2 - 1);
    } while (param_2 != (byte *)0x0);
  }
  if (param_3 != 0) {
    if (0xf < param_3) {
      uVar2 = param_3 >> 4;
      do {
        iVar1 = uVar3 + *pbVar19;
        iVar4 = iVar1 + (uint)pbVar19[1];
        iVar5 = iVar4 + (uint)pbVar19[2];
        iVar6 = iVar5 + (uint)pbVar19[3];
        iVar7 = iVar6 + (uint)pbVar19[4];
        iVar8 = iVar7 + (uint)pbVar19[5];
        iVar9 = iVar8 + (uint)pbVar19[6];
        iVar10 = iVar9 + (uint)pbVar19[7];
        iVar11 = iVar10 + (uint)pbVar19[8];
        iVar12 = iVar11 + (uint)pbVar19[9];
        iVar13 = iVar12 + (uint)pbVar19[10];
        iVar14 = iVar13 + (uint)pbVar19[0xb];
        iVar15 = iVar14 + (uint)pbVar19[0xc];
        iVar16 = iVar15 + (uint)pbVar19[0xd];
        iVar17 = iVar16 + (uint)pbVar19[0xe];
        uVar3 = iVar17 + (uint)pbVar19[0xf];
        param_3 = param_3 - 0x10;
        uVar20 = uVar20 + iVar1 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                 iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar3;
        pbVar19 = pbVar19 + 0x10;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar3 = uVar3 + *pbVar19;
      pbVar19 = pbVar19 + 1;
      uVar20 = uVar20 + uVar3;
    }
    uVar3 = uVar3 % 0xfff1;
    uVar20 = uVar20 % 0xfff1;
  }
  return uVar20 << 0x10 | uVar3;
}

/* ref: FUN_00b18150 */
uint F_00b18150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb18150u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_1 & 0xffff) * (param_3 % 0xfff1);
  uVar1 = (param_1 & 0xffff) + 0xfff0 + (param_2 & 0xffff);
  uVar3 = uVar3 + 0xfff1 +
          (((param_1 >> 0x10) + (uVar3 / 0xfff1) * -0xfff1 + (param_2 >> 0x10)) - param_3 % 0xfff1);
  uVar2 = uVar1;
  if ((0xfff1 < uVar1) && (uVar2 = uVar1 - 0xfff1, 0xfff1 < uVar2)) {
    uVar2 = uVar1 - 0x1ffe2;
  }
  if (0x1ffe2 < uVar3) {
    uVar3 = uVar3 - 0x1ffe2;
  }
  if (0xfff1 < uVar3) {
    uVar3 = uVar3 - 0xfff1;
  }
  return uVar3 << 0x10 | uVar2;
}

/* ref: FUN_00b181f0 */
uint F_00b181f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb181f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = param_4;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = param_3;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) = *(undefined4 *)param_2;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  uVar1 = F_004cb5f0(((byte *)(gen_frame + 0x4)),param_5,"1.2.3",0x38);
  if (uVar1 == 0) {
    uVar2 = F_004c9b60(((byte *)(gen_frame + 0x4)),4);
    if (uVar2 == 1) {
      *(undefined4 *)param_2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20));
      uVar1 = F_004ca370(((byte *)(gen_frame + 0x4)));
    }
    else {
      F_004ca370(((byte *)(gen_frame + 0x4)));
      uVar1 = 0xfffffffb;
      if (uVar2 != 0) {
        return uVar2;
      }
    }
  }
  return uVar1;
}

/* ref: FUN_00b18290 */
uint F_00b18290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb18290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b181f0(param_1,param_2,param_3,param_4,0xffffffff);
  return uVar1;
}

/* ref: FUN_00b182b0 */
uint F_00b182b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb182b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (param_1 >> 0xc) + 0xb + (param_1 >> 0xe) + param_1;
}

/* ref: FUN_00b182e0 */
uint F_00b182e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb182e0u, gen_a0, 0u, 0u, 0u);
  int in_edx = (int)gen_a0;
  undefined2 * puVar1;
  int iVar2;
  
  puVar1 = (undefined2 *)(in_edx + 0x94);
  iVar2 = 0x11e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(in_edx + 0x988);
  iVar2 = 0x1e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(in_edx + 0xa7c);
  iVar2 = 0x13;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined2 *)(in_edx + 0x494) = 1;
  *(undefined4 *)(in_edx + 0x16ac) = 0;
  *(undefined4 *)(in_edx + 0x16a8) = 0;
  *(undefined4 *)(in_edx + 0x16b0) = 0;
  *(undefined4 *)(in_edx + 0x16a0) = 0;
  return 0;
}

/* ref: FUN_00b18360 */
ulonglong F_00b18360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb18360u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int in_edi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = *(int *)(in_eax + 0x1450);
  iVar3 = *(int *)(in_eax + 0xb5c + param_3 * 4);
  iVar6 = param_3 * 2;
  bVar8 = SBORROW4(iVar6,iVar7);
  iVar5 = iVar6 - iVar7;
  if (iVar7 < iVar6) {
    *(int *)(in_eax + 0xb5c + param_3 * 4) = iVar3;
    return CONCAT44(iVar7,in_eax);
  }
  while( true ) {
    iVar7 = iVar6;
    if (bVar8 != iVar5 < 0) {
      iVar5 = *(int *)(in_eax + 0xb60 + iVar6 * 4);
      uVar1 = *(ushort *)(in_edi + iVar5 * 4);
      uVar2 = *((ushort *)GEN_TOP((in_edi + *(int *)(in_eax + 0xb5c + iVar6 * 4) * 4)));
      if ((uVar1 < uVar2) ||
         ((uVar1 == uVar2 &&
          (*(byte *)(iVar5 + 0x1458 + in_eax) <=
           *((byte *)GEN_TOP((*(int *)(in_eax + 0xb5c + iVar6 * 4) + 0x1458 + in_eax))))))) {
        iVar7 = iVar6 + 1;
      }
    }
    iVar5 = *(int *)(in_eax + 0xb5c + iVar7 * 4);
    uVar1 = *(ushort *)(in_edi + iVar3 * 4);
    uVar2 = *(ushort *)(in_edi + iVar5 * 4);
    if ((uVar1 < uVar2) ||
       ((uVar1 == uVar2 &&
        (*(byte *)(iVar3 + 0x1458 + in_eax) <= *(byte *)(iVar5 + 0x1458 + in_eax))))) break;
    *(int *)(in_eax + 0xb5c + param_3 * 4) = iVar5;
    iVar4 = *(int *)(in_eax + 0x1450);
    iVar6 = iVar7 * 2;
    bVar8 = SBORROW4(iVar6,iVar4);
    iVar5 = iVar6 - iVar4;
    param_3 = iVar7;
    if (iVar4 < iVar6) {
      *(int *)(in_eax + 0xb5c + iVar7 * 4) = iVar3;
      return CONCAT44(iVar4,in_eax);
    }
  }
  *(int *)(in_eax + 0xb5c + param_3 * 4) = iVar3;
  return CONCAT44(iVar3,in_eax);
}

/* ref: FUN_00b18440 */
unsigned int F_00b18440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb18440u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int * in_ecx = (int *)(uintptr_t)gen_a1;
  short sVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  short * psVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ushort * puVar15;
  int local_18;
  int local_14;
  int * local_10;
  int local_c;
  
  iVar2 = in_ecx[1];
  iVar3 = *in_ecx;
  piVar4 = (int *)in_ecx[2];
  iVar9 = *piVar4;
  iVar5 = piVar4[1];
  iVar6 = piVar4[2];
  uVar11 = piVar4[4];
  *(undefined4 *)(in_eax + 0xb3c) = 0;
  *(undefined4 *)(in_eax + 0xb40) = 0;
  *(undefined4 *)(in_eax + 0xb44) = 0;
  *(undefined4 *)(in_eax + 0xb48) = 0;
  *(undefined4 *)(in_eax + 0xb4c) = 0;
  *(undefined4 *)(in_eax + 0xb50) = 0;
  *(undefined4 *)(in_eax + 0xb54) = 0;
  *(undefined4 *)(in_eax + 0xb58) = 0;
  *((undefined2 *)GEN_TOP((iVar3 + 2 + *((int *)GEN_TOP((in_eax + 0xb5c + *(int *)(in_eax + 0x1454) * 4))) * 4))) = 0;
  iVar12 = 0;
  iVar7 = *(int *)(in_eax + 0x1454) + 1;
  local_c = 0;
  if (iVar7 < 0x23d) {
    local_10 = (int *)(in_eax + 0xb5c + iVar7 * 4);
    local_18 = 0x23d - iVar7;
    local_14 = iVar7 + local_18;
    do {
      iVar7 = *local_10;
      uVar8 = *((ushort *)GEN_TOP((iVar3 + 2 + (uint)*(ushort *)(iVar3 + 2 + iVar7 * 4) * 4))) + 1;
      if ((int)uVar11 < (int)uVar8) {
        iVar12 = iVar12 + 1;
        uVar8 = uVar11;
        local_c = iVar12;
      }
      *(short *)(iVar3 + 2 + iVar7 * 4) = (short)uVar8;
      if (iVar7 <= iVar2) {
        psVar10 = (short *)(in_eax + 0xb3c + uVar8 * 2);
        *psVar10 = *psVar10 + 1;
        iVar13 = 0;
        if (iVar6 <= iVar7) {
          iVar13 = *((int *)GEN_TOP((iVar5 + (iVar7 - iVar6) * 4)));
        }
        uVar14 = (uint)*(ushort *)(iVar3 + iVar7 * 4);
        *(int *)(in_eax + 0x16a8) = *(int *)(in_eax + 0x16a8) + (uVar8 + iVar13) * uVar14;
        iVar12 = local_c;
        if (iVar9 != 0) {
          *(int *)(in_eax + 0x16ac) =
               *(int *)(in_eax + 0x16ac) +
               ((uint)*(ushort *)(iVar9 + 2 + iVar7 * 4) + iVar13) * uVar14;
        }
      }
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    if (iVar12 != 0) {
      puVar15 = (ushort *)(in_eax + 0xb3c + uVar11 * 2);
      do {
        iVar9 = uVar11 - 1;
        psVar10 = (short *)(in_eax + 0xb3c + iVar9 * 2);
        sVar1 = *(short *)(in_eax + 0xb3c + iVar9 * 2);
        while (sVar1 == 0) {
          psVar10 = psVar10 + -1;
          iVar9 = iVar9 + -1;
          sVar1 = *psVar10;
        }
        psVar10 = (short *)(in_eax + 0xb3e + iVar9 * 2);
        *psVar10 = *psVar10 + 2;
        psVar10 = (short *)(in_eax + 0xb3c + iVar9 * 2);
        *psVar10 = *psVar10 + -1;
        *puVar15 = *puVar15 - 1;
        iVar12 = iVar12 + -2;
      } while (0 < iVar12);
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar8 = (uint)*puVar15;
        if (uVar8 != 0) {
          iVar9 = in_eax + 0xb5c + local_14 * 4;
          local_10 = (int *)uVar8;
          do {
            iVar5 = *(int *)(iVar9 + -4);
            local_14 = local_14 + -1;
            iVar9 = iVar9 + -4;
            if (iVar5 <= iVar2) {
              uVar8 = (uint)*(ushort *)(iVar3 + 2 + iVar5 * 4);
              if (uVar8 != uVar11) {
                *(int *)(in_eax + 0x16a8) =
                     *(int *)(in_eax + 0x16a8) +
                     (uVar11 - uVar8) * (uint)*(ushort *)(iVar3 + iVar5 * 4);
                *(short *)(iVar3 + 2 + iVar5 * 4) = (short)uVar11;
              }
              uVar8 = (int)local_10 - 1;
              local_10 = (int *)uVar8;
            }
          } while (uVar8 != 0);
        }
        puVar15 = puVar15 + -1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b18640 */
unsigned int F_00b18640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb18640u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  short * psVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_10;
  uint local_c;
  ushort * local_8;
  
  uVar2 = *(ushort *)(in_ecx + 2);
  iVar4 = 0;
  local_c = 0xffffffff;
  iVar3 = 7;
  iVar7 = 4;
  if (uVar2 == 0) {
    iVar3 = 0x8a;
    iVar7 = 3;
  }
  *(undefined2 *)(in_ecx + 6 + in_eax * 4) = 0xffff;
  if (-1 < in_eax) {
    local_8 = (ushort *)(in_ecx + 6);
    local_10 = in_eax + 1;
    uVar5 = (uint)uVar2;
    do {
      uVar6 = (uint)*local_8;
      iVar4 = iVar4 + 1;
      if ((iVar3 <= iVar4) || (uVar5 != uVar6)) {
        if (iVar4 < iVar7) {
          psVar1 = (short *)(param_3 + 0xa7c + uVar5 * 4);
          *psVar1 = *psVar1 + (short)iVar4;
        }
        else if (uVar5 == 0) {
          if (iVar4 < 0xb) {
            *(short *)(param_3 + 0xac0) = *(short *)(param_3 + 0xac0) + 1;
          }
          else {
            *(short *)(param_3 + 0xac4) = *(short *)(param_3 + 0xac4) + 1;
          }
        }
        else {
          if (uVar5 != local_c) {
            psVar1 = (short *)(param_3 + 0xa7c + uVar5 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_3 + 0xabc) = *(short *)(param_3 + 0xabc) + 1;
        }
        iVar4 = 0;
        local_c = uVar5;
        if (uVar6 == 0) {
          iVar3 = 0x8a;
          iVar7 = 3;
        }
        else if (uVar5 == uVar6) {
          iVar3 = 6;
          iVar7 = 3;
        }
        else {
          iVar3 = 7;
          iVar7 = 4;
        }
      }
      local_8 = local_8 + 2;
      local_10 = local_10 + -1;
      uVar5 = uVar6;
    } while (local_10 != 0);
  }
  return 0;
}

/* ref: FUN_00b18720 */
unsigned int F_00b18720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb18720u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int in_edx = (int)gen_a2;
  byte bVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_1c;
  uint local_18;
  ushort * local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_18 = 0xffffffff;
  iVar2 = 7;
  local_c = 4;
  if (*(ushort *)(in_edx + 2) == 0) {
    iVar2 = 0x8a;
    local_c = 3;
  }
  if (-1 < in_ecx) {
    local_14 = (ushort *)(in_edx + 6);
    local_1c = in_ecx + 1;
    iVar4 = 0;
    local_10 = (uint)*(ushort *)(in_edx + 2);
    do {
      uVar5 = (uint)*local_14;
      local_8 = iVar4 + 1;
      if ((iVar2 <= local_8) || (local_10 != uVar5)) {
        if (local_8 < local_c) {
          do {
            uVar6 = (uint)*(ushort *)(in_eax + 0xa7e + local_10 * 4);
            iVar2 = *(int *)(in_eax + 0x16bc);
            if ((int)(0x10 - uVar6) < iVar2) {
              uVar3 = *(ushort *)(in_eax + 0xa7c + local_10 * 4);
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                   *(undefined1 *)(in_eax + 0x16b8);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                   *(undefined1 *)(in_eax + 0x16b9);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              iVar2 = *(int *)(in_eax + 0x16bc) + -0x10;
              *(ushort *)(in_eax + 0x16b8) =
                   uVar3 >> (0x10U - (char)*(int *)(in_eax + 0x16bc) & 0x1f);
            }
            else {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) |
                   *(short *)(in_eax + 0xa7c + local_10 * 4) << ((byte)iVar2 & 0x1f);
            }
            local_8 = local_8 + -1;
            *(uint *)(in_eax + 0x16bc) = iVar2 + uVar6;
          } while (local_8 != 0);
        }
        else if (local_10 == 0) {
          if (local_8 < 0xb) {
            uVar6 = (uint)*(ushort *)(in_eax + 0xac2);
            bVar1 = (byte)*(int *)(in_eax + 0x16bc);
            if ((int)(0x10 - uVar6) < *(int *)(in_eax + 0x16bc)) {
              uVar3 = *(ushort *)(in_eax + 0xac0);
              *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar3 << (bVar1 & 0x1f);
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                   *(undefined1 *)(in_eax + 0x16b8);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                   *(undefined1 *)(in_eax + 0x16b9);
              iVar2 = *(int *)(in_eax + 0x16bc);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *(uint *)(in_eax + 0x16bc) = iVar2 + -0x10 + uVar6;
              *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
            }
            else {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | *(short *)(in_eax + 0xac0) << (bVar1 & 0x1f);
              *(uint *)(in_eax + 0x16bc) = *(int *)(in_eax + 0x16bc) + uVar6;
            }
            iVar2 = *(int *)(in_eax + 0x16bc);
            uVar3 = (ushort)(iVar4 + -2);
            if (iVar2 < 0xe) {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
              iVar2 = iVar2 + 3;
LAB_00b18c49: ;
              *(int *)(in_eax + 0x16bc) = iVar2;
            }
            else {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                   *(undefined1 *)(in_eax + 0x16b8);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                   *(undefined1 *)(in_eax + 0x16b9);
              iVar2 = *(int *)(in_eax + 0x16bc);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *(int *)(in_eax + 0x16bc) = iVar2 + -0xd;
              *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
            }
          }
          else {
            uVar6 = (uint)*(ushort *)(in_eax + 0xac6);
            bVar1 = (byte)*(int *)(in_eax + 0x16bc);
            if ((int)(0x10 - uVar6) < *(int *)(in_eax + 0x16bc)) {
              uVar3 = *(ushort *)(in_eax + 0xac4);
              *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar3 << (bVar1 & 0x1f);
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                   *(undefined1 *)(in_eax + 0x16b8);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                   *(undefined1 *)(in_eax + 0x16b9);
              iVar2 = *(int *)(in_eax + 0x16bc);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *(uint *)(in_eax + 0x16bc) = iVar2 + -0x10 + uVar6;
              *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
            }
            else {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | *(short *)(in_eax + 0xac4) << (bVar1 & 0x1f);
              *(uint *)(in_eax + 0x16bc) = *(int *)(in_eax + 0x16bc) + uVar6;
            }
            iVar2 = *(int *)(in_eax + 0x16bc);
            uVar3 = (ushort)(iVar4 + -10);
            if (iVar2 < 10) {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
              iVar2 = iVar2 + 7;
              goto LAB_00b18c49;
            }
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                 *(undefined1 *)(in_eax + 0x16b8);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                 *(undefined1 *)(in_eax + 0x16b9);
            iVar2 = *(int *)(in_eax + 0x16bc);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            *(int *)(in_eax + 0x16bc) = iVar2 + -9;
            *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
          }
        }
        else {
          if (local_10 != local_18) {
            uVar6 = (uint)*(ushort *)(in_eax + 0xa7e + local_10 * 4);
            bVar1 = (byte)*(int *)(in_eax + 0x16bc);
            local_8 = iVar4;
            if ((int)(0x10 - uVar6) < *(int *)(in_eax + 0x16bc)) {
              uVar3 = *(ushort *)(in_eax + 0xa7c + local_10 * 4);
              *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar3 << (bVar1 & 0x1f);
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                   *(undefined1 *)(in_eax + 0x16b8);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                   *(undefined1 *)(in_eax + 0x16b9);
              iVar2 = *(int *)(in_eax + 0x16bc);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *(uint *)(in_eax + 0x16bc) = iVar2 + -0x10 + uVar6;
              *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
            }
            else {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) |
                   *(short *)(in_eax + 0xa7c + local_10 * 4) << (bVar1 & 0x1f);
              *(uint *)(in_eax + 0x16bc) = *(int *)(in_eax + 0x16bc) + uVar6;
            }
          }
          uVar6 = (uint)*(ushort *)(in_eax + 0xabe);
          iVar2 = *(int *)(in_eax + 0x16bc);
          if ((int)(0x10 - uVar6) < iVar2) {
            uVar3 = *(ushort *)(in_eax + 0xabc);
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                 *(undefined1 *)(in_eax + 0x16b8);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                 *(undefined1 *)(in_eax + 0x16b9);
            iVar2 = *(int *)(in_eax + 0x16bc);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            *(uint *)(in_eax + 0x16bc) = iVar2 + -0x10 + uVar6;
            *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
          }
          else {
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | *(short *)(in_eax + 0xabc) << ((byte)iVar2 & 0x1f);
            *(uint *)(in_eax + 0x16bc) = iVar2 + uVar6;
          }
          iVar2 = *(int *)(in_eax + 0x16bc);
          uVar3 = (ushort)(local_8 + -3);
          if (iVar2 < 0xf) {
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
            iVar2 = iVar2 + 2;
            goto LAB_00b18c49;
          }
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
               *(undefined1 *)(in_eax + 0x16b8);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
               *(undefined1 *)(in_eax + 0x16b9);
          iVar2 = *(int *)(in_eax + 0x16bc);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *(int *)(in_eax + 0x16bc) = iVar2 + -0xe;
          *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
        }
        local_8 = 0;
        local_18 = local_10;
        if (uVar5 == 0) {
          iVar2 = 0x8a;
          local_c = 3;
        }
        else if (local_10 == uVar5) {
          iVar2 = 6;
          local_c = 3;
        }
        else {
          iVar2 = 7;
          local_c = 4;
        }
      }
      local_14 = local_14 + 2;
      local_1c = local_1c + -1;
      iVar4 = local_8;
      local_10 = uVar5;
    } while (local_1c != 0);
  }
  return 0;
}

/* ref: FUN_00b18ca0 */
unsigned int F_00b18ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb18ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_esi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = *(int *)(in_esi + 0x16bc);
  uVar2 = (short)param_2 - 0x101;
  if (iVar3 < 0xc) {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *(int *)(in_esi + 0x16bc) = iVar3 + 5;
  }
  else {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b8);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b9);
    iVar3 = *(int *)(in_esi + 0x16bc);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *(int *)(in_esi + 0x16bc) = iVar3 + -0xb;
    *(ushort *)(in_esi + 0x16b8) = uVar2 >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = *(int *)(in_esi + 0x16bc);
  uVar2 = (short)param_3 - 1;
  if (iVar3 < 0xc) {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *(int *)(in_esi + 0x16bc) = iVar3 + 5;
  }
  else {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b8);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b9);
    iVar3 = *(int *)(in_esi + 0x16bc);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *(int *)(in_esi + 0x16bc) = iVar3 + -0xb;
    *(ushort *)(in_esi + 0x16b8) = uVar2 >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = *(int *)(in_esi + 0x16bc);
  uVar2 = (short)param_4 - 4;
  if (iVar3 < 0xd) {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *(int *)(in_esi + 0x16bc) = iVar3 + 4;
  }
  else {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b8);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b9);
    iVar3 = *(int *)(in_esi + 0x16bc);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *(int *)(in_esi + 0x16bc) = iVar3 + -0xc;
    *(ushort *)(in_esi + 0x16b8) = uVar2 >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = 0;
  if (0 < param_4) {
    do {
      iVar1 = *(int *)(in_esi + 0x16bc);
      if (iVar1 < 0xe) {
        *(ushort *)(in_esi + 0x16b8) =
             *(ushort *)(in_esi + 0x16b8) |
             *(short *)(in_esi + 0xa7e + (uint)(byte)(&REFG(undefined1, 0x10ed27c))[iVar3] * 4) <<
             ((byte)iVar1 & 0x1f);
        *(int *)(in_esi + 0x16bc) = iVar1 + 3;
      }
      else {
        uVar2 = *(ushort *)(in_esi + 0xa7e + (uint)(byte)(&REFG(undefined1, 0x10ed27c))[iVar3] * 4);
        *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar1 & 0x1f);
        *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
             *(undefined1 *)(in_esi + 0x16b8);
        *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
        *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
             *(undefined1 *)(in_esi + 0x16b9);
        *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
        *(ushort *)(in_esi + 0x16b8) = uVar2 >> (0x10U - (char)*(int *)(in_esi + 0x16bc) & 0x1f);
        *(int *)(in_esi + 0x16bc) = *(int *)(in_esi + 0x16bc) + -0xd;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_4);
  }
  F_00b18720(in_esi,param_2 + -1,in_esi + 0x94);
  F_00b18720(in_esi,param_3 + -1,in_esi + 0x988);
  return 0;
}

/* ref: FUN_00b18ef0 */
uint F_00b18ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb18ef0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  short * psVar1;
  byte bVar2;
  
  *((short *)GEN_TOP((*(int *)(param_1 + 0x16a4) + *(int *)(param_1 + 0x16a0) * 2))) = (short)param_2;
  *((char *)GEN_TOP((*(int *)(param_1 + 0x1698) + *(int *)(param_1 + 0x16a0)))) = (char)param_3;
  *(int *)(param_1 + 0x16a0) = *(int *)(param_1 + 0x16a0) + 1;
  if (param_2 == 0) {
    psVar1 = (short *)(param_1 + 0x94 + param_3 * 4);
    *psVar1 = *psVar1 + 1;
  }
  else {
    *(int *)(param_1 + 0x16b0) = *(int *)(param_1 + 0x16b0) + 1;
    psVar1 = (short *)(param_1 + 0x498 + (uint)(byte)(&REFG(undefined, 0x10eda50))[param_3] * 4);
    *psVar1 = *psVar1 + 1;
    if (param_2 - 1U < 0x100) {
      bVar2 = (&REFG(undefined, 0x10ed84f))[param_2];
    }
    else {
      bVar2 = (&REFG(undefined, 0x10ed950))[param_2 - 1U >> 7];
    }
    psVar1 = (short *)(param_1 + 0x988 + (uint)bVar2 * 4);
    *psVar1 = *psVar1 + 1;
  }
  return (uint)(*(int *)(param_1 + 0x16a0) == *(int *)(param_1 + 0x169c) + -1);
}

/* ref: FUN_00b18f90 */
unsigned int F_00b18f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb18f90u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = 0;
  if (*(int *)(in_eax + 0x16a0) != 0) {
    do {
      uVar4 = (uint)*((ushort *)GEN_TOP((*(int *)(in_eax + 0x16a4) + uVar6 * 2)));
      bVar1 = *((byte *)GEN_TOP((uVar6 + *(int *)(in_eax + 0x1698))));
      uVar8 = (uint)bVar1;
      uVar6 = uVar6 + 1;
      iVar5 = *(int *)(in_eax + 0x16bc);
      bVar3 = (byte)iVar5;
      if (uVar4 == 0) {
        uVar4 = (uint)*(ushort *)(param_2 + 2 + uVar8 * 4);
        if ((int)(0x10 - uVar4) < iVar5) {
          uVar7 = *(ushort *)(param_2 + uVar8 * 4);
          *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar7 << (bVar3 & 0x1f);
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
               *(undefined1 *)(in_eax + 0x16b8);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
               *(undefined1 *)(in_eax + 0x16b9);
          iVar5 = *(int *)(in_eax + 0x16bc);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *(uint *)(in_eax + 0x16bc) = iVar5 + -0x10 + uVar4;
          *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)iVar5 & 0x1f);
        }
        else {
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) | *(short *)(param_2 + uVar8 * 4) << (bVar3 & 0x1f);
          iVar5 = iVar5 + uVar4;
LAB_00b192ce: ;
          *(int *)(in_eax + 0x16bc) = iVar5;
        }
      }
      else {
        uVar9 = (uint)(byte)(&REFG(undefined, 0x10eda50))[uVar8];
        uVar8 = (uint)*(ushort *)(param_2 + 0x406 + uVar9 * 4);
        if ((int)(0x10 - uVar8) < iVar5) {
          uVar7 = *(ushort *)(param_2 + 0x404 + uVar9 * 4);
          *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar7 << (bVar3 & 0x1f);
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
               *(undefined1 *)(in_eax + 0x16b8);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
               *(undefined1 *)(in_eax + 0x16b9);
          iVar5 = *(int *)(in_eax + 0x16bc);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *(uint *)(in_eax + 0x16bc) = iVar5 + -0x10 + uVar8;
          *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)iVar5 & 0x1f);
        }
        else {
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) |
               *(short *)(param_2 + 0x404 + uVar9 * 4) << (bVar3 & 0x1f);
          *(uint *)(in_eax + 0x16bc) = iVar5 + uVar8;
        }
        iVar5 = *(int *)(&REFG(undefined, 0x10ed208) + uVar9 * 4);
        if (iVar5 != 0) {
          uVar7 = (ushort)bVar1 - (short)*(undefined4 *)(&REFG(undefined, 0x10edb50) + uVar9 * 4);
          iVar2 = *(int *)(in_eax + 0x16bc);
          if (0x10 - iVar5 < iVar2) {
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar2 & 0x1f);
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                 *(undefined1 *)(in_eax + 0x16b8);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                 *(undefined1 *)(in_eax + 0x16b9);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            iVar2 = *(int *)(in_eax + 0x16bc) + -0x10;
            *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)*(int *)(in_eax + 0x16bc) & 0x1f)
            ;
          }
          else {
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar2 & 0x1f);
          }
          *(int *)(in_eax + 0x16bc) = iVar2 + iVar5;
        }
        uVar8 = uVar4 - 1;
        if (uVar8 < 0x100) {
          bVar1 = (&REFG(undefined, 0x10ed84f))[uVar4];
        }
        else {
          bVar1 = (&REFG(undefined, 0x10ed950))[uVar8 >> 7];
        }
        uVar4 = (uint)bVar1;
        uVar9 = (uint)*(ushort *)(param_3 + 2 + uVar4 * 4);
        iVar5 = *(int *)(in_eax + 0x16bc);
        if ((int)(0x10 - uVar9) < iVar5) {
          uVar7 = *(ushort *)(param_3 + uVar4 * 4);
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar5 & 0x1f);
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
               *(undefined1 *)(in_eax + 0x16b8);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
               *(undefined1 *)(in_eax + 0x16b9);
          iVar5 = *(int *)(in_eax + 0x16bc);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *(uint *)(in_eax + 0x16bc) = iVar5 + -0x10 + uVar9;
          *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)iVar5 & 0x1f);
        }
        else {
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) |
               *(short *)(param_3 + uVar4 * 4) << ((byte)iVar5 & 0x1f);
          *(uint *)(in_eax + 0x16bc) = iVar5 + uVar9;
        }
        iVar2 = *(int *)(&REFG(undefined, 0x10ed290) + uVar4 * 4);
        if (iVar2 != 0) {
          uVar7 = (short)uVar8 - (short)*(undefined4 *)(&REFG(undefined, 0x10edbc8) + uVar4 * 4);
          iVar5 = *(int *)(in_eax + 0x16bc);
          if (iVar5 <= 0x10 - iVar2) {
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar5 & 0x1f);
            iVar5 = iVar5 + iVar2;
            goto LAB_00b192ce;
          }
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar5 & 0x1f);
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
               *(undefined1 *)(in_eax + 0x16b8);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
               *(undefined1 *)(in_eax + 0x16b9);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)*(int *)(in_eax + 0x16bc) & 0x1f);
          *(int *)(in_eax + 0x16bc) = *(int *)(in_eax + 0x16bc) + -0x10 + iVar2;
        }
      }
    } while (uVar6 < *(uint *)(in_eax + 0x16a0));
  }
  uVar6 = (uint)*(ushort *)(param_2 + 0x402);
  iVar5 = *(int *)(in_eax + 0x16bc);
  if (iVar5 <= (int)(0x10 - uVar6)) {
    *(ushort *)(in_eax + 0x16b8) =
         *(ushort *)(in_eax + 0x16b8) | *(short *)(param_2 + 0x400) << ((byte)iVar5 & 0x1f);
    *(uint *)(in_eax + 0x16bc) = iVar5 + uVar6;
    *(uint *)(in_eax + 0x16b4) = (uint)*(ushort *)(param_2 + 0x402);
    return 0;
  }
  uVar7 = *(ushort *)(param_2 + 0x400);
  *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar5 & 0x1f);
  *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) = *(undefined1 *)(in_eax + 0x16b8)
  ;
  *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
  *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) = *(undefined1 *)(in_eax + 0x16b9)
  ;
  iVar5 = *(int *)(in_eax + 0x16bc);
  *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
  *(uint *)(in_eax + 0x16bc) = iVar5 + -0x10 + uVar6;
  *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)iVar5 & 0x1f);
  *(uint *)(in_eax + 0x16b4) = (uint)*(ushort *)(param_2 + 0x402);
  return 0;
}

/* ref: FUN_00b193a0 */
uint F_00b193a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb193a0u, gen_a0, 0u, 0u, 0u);
  int * in_edx = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = in_edx + 0x25;
  do {
    if ((short)*piVar2 != 0) break;
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar1 < 9);
  if (uVar1 == 9) {
    uVar1 = 0xe;
    piVar2 = in_edx + 0x34;
    while ((short)piVar2[-1] == 0) {
      if ((short)*piVar2 != 0) {
        *(uint *)(*in_edx + 0x2c) = (uint)(uVar1 + 1 == 0x20);
        return uVar1 + 1;
      }
      if ((short)piVar2[1] != 0) {
        *(uint *)(*in_edx + 0x2c) = (uint)(uVar1 + 2 == 0x20);
        return uVar1 + 2;
      }
      if ((short)piVar2[2] != 0) {
        *(uint *)(*in_edx + 0x2c) = (uint)(uVar1 + 3 == 0x20);
        return uVar1 + 3;
      }
      if ((short)piVar2[3] != 0) {
        *(uint *)(*in_edx + 0x2c) = (uint)(uVar1 + 4 == 0x20);
        return uVar1 + 4;
      }
      if ((short)piVar2[4] != 0) {
        uVar1 = uVar1 + 5;
        break;
      }
      uVar1 = uVar1 + 6;
      piVar2 = piVar2 + 6;
      if (0x1f < (int)uVar1) {
        *(uint *)(*in_edx + 0x2c) = (uint)(uVar1 == 0x20);
        return uVar1;
      }
    }
  }
  *(uint *)(*in_edx + 0x2c) = (uint)(uVar1 == 0x20);
  return uVar1;
}

/* ref: FUN_00b19470 */
ushort F_00b19470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb19470u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    uVar3 = param_1 & 1;
    param_2 = param_2 + -1;
    param_1 = param_1 >> 1;
    uVar1 = (uVar2 | uVar3) * 2;
  } while (0 < param_2);
  return (ushort)uVar2 | (ushort)uVar3;
}

/* ref: FUN_00b19490 */
uint F_00b19490(unsigned int gen_a0)
{
  GEN_ENTER(0xb19490u, gen_a0, 0u, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  if (*(int *)(in_eax + 0x16bc) == 0x10) {
    *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
         *(undefined1 *)(in_eax + 0x16b8);
    *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
         *(undefined1 *)(in_eax + 0x16b9);
    *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
    *(undefined2 *)(in_eax + 0x16b8) = 0;
    *(undefined4 *)(in_eax + 0x16bc) = 0;
    return in_eax;
  }
  if (7 < *(int *)(in_eax + 0x16bc)) {
    *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
         *(undefined1 *)(in_eax + 0x16b8);
    *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
    *(int *)(in_eax + 0x16bc) = *(int *)(in_eax + 0x16bc) + -8;
    *(ushort *)(in_eax + 0x16b8) = (ushort)*(byte *)(in_eax + 0x16b9);
  }
  return in_eax;
}

/* ref: FUN_00b19510 */
uint F_00b19510(unsigned int gen_a0)
{
  GEN_ENTER(0xb19510u, gen_a0, 0u, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  if (*(int *)(in_eax + 0x16bc) < 9) {
    if (*(int *)(in_eax + 0x16bc) < 1) goto LAB_00b19554;
    iVar1 = *(int *)(in_eax + 8);
    iVar2 = *(int *)(in_eax + 0x14);
    uVar3 = *(undefined1 *)(in_eax + 0x16b8);
  }
  else {
    *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
         *(undefined1 *)(in_eax + 0x16b8);
    *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
    iVar1 = *(int *)(in_eax + 0x14);
    iVar2 = *(int *)(in_eax + 8);
    uVar3 = *(undefined1 *)(in_eax + 0x16b9);
  }
  *(undefined1 *)(iVar1 + iVar2) = uVar3;
  *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
LAB_00b19554: ;
  *(undefined2 *)(in_eax + 0x16b8) = 0;
  *(undefined4 *)(in_eax + 0x16bc) = 0;
  return in_eax;
}

/* ref: FUN_00b19570 */
uint F_00b19570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb19570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  int in_ecx = (int)gen_a1;
  undefined1 * in_edx = (undefined1 *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  byte bVar2;
  
  uVar1 = F_00b19510(in_eax);
  *(undefined4 *)(uVar1 + 0x16b4) = 8;
  if (param_4 != 0) {
    *((byte *)GEN_TOP((*(int *)(uVar1 + 0x14) + *(int *)(uVar1 + 8)))) = (byte)in_ecx;
    *(int *)(uVar1 + 0x14) = *(int *)(uVar1 + 0x14) + 1;
    bVar2 = (byte)((uint)in_ecx >> 8);
    *((byte *)GEN_TOP((*(int *)(uVar1 + 0x14) + *(int *)(uVar1 + 8)))) = bVar2;
    *(int *)(uVar1 + 0x14) = *(int *)(uVar1 + 0x14) + 1;
    *((byte *)GEN_TOP((*(int *)(uVar1 + 0x14) + *(int *)(uVar1 + 8)))) = ~(byte)in_ecx;
    *(int *)(uVar1 + 0x14) = *(int *)(uVar1 + 0x14) + 1;
    *((byte *)GEN_TOP((*(int *)(uVar1 + 0x14) + *(int *)(uVar1 + 8)))) = ~bVar2;
    *(int *)(uVar1 + 0x14) = *(int *)(uVar1 + 0x14) + 1;
  }
  for (; in_ecx != 0; in_ecx = in_ecx + -1) {
    *((undefined1 *)GEN_TOP((*(int *)(uVar1 + 0x14) + *(int *)(uVar1 + 8)))) = *in_edx;
    *(int *)(uVar1 + 0x14) = *(int *)(uVar1 + 0x14) + 1;
    in_edx = in_edx + 1;
  }
  return uVar1;
}

/* ref: FUN_00b19600 */
uint F_00b19600(unsigned int gen_a0)
{
  GEN_ENTER(0xb19600u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  *(int *)(param_1 + 0xb18) = param_1 + 0x94;
  *(int *)(param_1 + 0xb24) = param_1 + 0x988;
  *(undefined * PTR32 * PTR32 *)(param_1 + 0xb20) = &REFG(undefined * PTR32, 0x133a804);
  *(undefined * PTR32 * PTR32 *)(param_1 + 0xb2c) = &REFG(undefined * PTR32, 0x133a818);
  *(int *)(param_1 + 0xb30) = param_1 + 0xa7c;
  *(undefined * PTR32 *)(param_1 + 0xb38) = &REFG(undefined, 0x133a82c);
  *(undefined2 *)(param_1 + 0x16b8) = 0;
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  *(undefined4 *)(param_1 + 0x16b4) = 8;
  uVar1 = F_00b182e0(param_1);
  return uVar1;
}

/* ref: FUN_00b19670 */
ushort F_00b19670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb19670u, gen_a0, gen_a1, gen_a2, 0u);
  int in_edx = (int)gen_a0;
  int in_ebx = (int)gen_a1;
  int in_edi = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = 0;
  uVar2 = 1;
  do {
    uVar1 = (*(short *)(in_edx + uVar2 * 2 + -2) + uVar1) * 2;
    ((ushort *)(gen_frame + 0xc))[uVar2] = uVar1;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x10);
  iVar4 = 0;
  if (-1 < in_ebx) {
    do {
      uVar3 = (uint)*(ushort *)(in_edi + 2 + iVar4 * 4);
      if (uVar3 != 0) {
        uVar1 = ((ushort *)(gen_frame + 0xc))[uVar3];
        ((ushort *)(gen_frame + 0xc))[uVar3] = uVar1 + 1;
        uVar1 = F_00b19470((uint)uVar1,uVar3);
        uVar2 = (uint)uVar1;
        *(ushort *)(in_edi + iVar4 * 4) = uVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= in_ebx);
  }
  return (ushort)uVar2;
}

/* ref: FUN_00b196d0 */
ushort F_00b196d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb196d0u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  byte bVar2;
  int in_edi;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_c;
  int local_8;
  
  in_edi = *param_2;
  local_c = ((int *)param_2[2])[3];
  iVar7 = *(int *)param_2[2];
  iVar6 = -1;
  iVar5 = 0;
  local_8 = -1;
  *(undefined4 *)(in_esi + 0x1450) = 0;
  *(undefined4 *)(in_esi + 0x1454) = 0x23d;
  if (0 < local_c) {
    do {
      if (*(short *)(in_edi + iVar5 * 4) == 0) {
        *(undefined2 *)(in_edi + 2 + iVar5 * 4) = 0;
      }
      else {
        *(int *)(in_esi + 0x1450) = *(int *)(in_esi + 0x1450) + 1;
        *((int *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1450) * 4))) = iVar5;
        *(undefined1 *)(iVar5 + 0x1458 + in_esi) = 0;
        iVar6 = iVar5;
        local_8 = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_c);
  }
  iVar5 = *(int *)(in_esi + 0x1450);
  while (iVar5 < 2) {
    if (iVar6 < 2) {
      iVar5 = iVar6 + 1;
      iVar6 = iVar5;
    }
    else {
      iVar5 = 0;
    }
    *(int *)(in_esi + 0x1450) = *(int *)(in_esi + 0x1450) + 1;
    *((int *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1450) * 4))) = iVar5;
    *(undefined2 *)(in_edi + iVar5 * 4) = 1;
    *(undefined1 *)(in_esi + 0x1458 + iVar5) = 0;
    *(int *)(in_esi + 0x16a8) = *(int *)(in_esi + 0x16a8) + -1;
    if (iVar7 != 0) {
      *(int *)(in_esi + 0x16ac) =
           *(int *)(in_esi + 0x16ac) - (uint)*(ushort *)(iVar7 + 2 + iVar5 * 4);
    }
    local_8 = iVar6;
    iVar5 = *(int *)(in_esi + 0x1450);
  }
  param_2[1] = iVar6;
  for (iVar7 = *(int *)(in_esi + 0x1450) / 2; 0 < iVar7; iVar7 = iVar7 + -1) {
    F_00b18360(in_esi,in_edi,iVar7);
  }
  do {
    uVar3 = *((undefined4 *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1450) * 4)));
    iVar7 = *(int *)(in_esi + 0xb60);
    *(int *)(in_esi + 0x1450) = *(int *)(in_esi + 0x1450) + -1;
    *(undefined4 *)(in_esi + 0xb60) = uVar3;
    F_00b18360(in_esi,in_edi,1);
    iVar6 = *(int *)(in_esi + 0xb60);
    *(int *)(in_esi + 0x1454) = *(int *)(in_esi + 0x1454) + -1;
    *((int *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1454) * 4))) = iVar7;
    *(int *)(in_esi + 0x1454) = *(int *)(in_esi + 0x1454) + -1;
    *((int *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1454) * 4))) = iVar6;
    *(short *)(in_edi + local_c * 4) =
         *(short *)(in_edi + iVar6 * 4) + *(short *)(in_edi + iVar7 * 4);
    bVar1 = *(byte *)(in_esi + 0x1458 + iVar7);
    bVar2 = *(byte *)(in_esi + 0x1458 + iVar6);
    if (bVar1 < bVar2) {
      bVar1 = bVar2;
    }
    *(byte *)(in_esi + 0x1458 + local_c) = bVar1 + 1;
    *(short *)(in_edi + 2 + iVar6 * 4) = (short)local_c;
    *(short *)(in_edi + 2 + iVar7 * 4) = (short)local_c;
    *(int *)(in_esi + 0xb60) = local_c;
    local_c = local_c + 1;
    F_00b18360(in_esi,in_edi,1);
  } while (1 < *(int *)(in_esi + 0x1450));
  *(int *)(in_esi + 0x1454) = *(int *)(in_esi + 0x1454) + -1;
  *((undefined4 *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1454) * 4))) = *(undefined4 *)(in_esi + 0xb60);
  F_00b18440(in_esi,param_2);
  uVar4 = F_00b19670(in_esi + 0xb3c,local_8,in_edi);
  return uVar4;
}

/* ref: FUN_00b198d0 */
uint F_00b198d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb198d0u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  uint uVar1;
  
  F_00b18640(*(undefined4 *)(in_eax + 0xb1c),in_eax + 0x94,in_eax);
  F_00b18640(*(undefined4 *)(in_eax + 0xb28),in_eax + 0x988,in_eax);
  F_00b196d0(in_eax,in_eax + 0xb30);
  uVar1 = 0x12;
  do {
    if (*(short *)(in_eax + 0xa7e + (uint)(byte)(&REFG(undefined1, 0x10ed27c))[uVar1] * 4) != 0) {
LAB_00b1998b: ;
      *(int *)(in_eax + 0x16a8) = *(int *)(in_eax + 0x16a8) + uVar1 * 3 + 0x11;
      return uVar1;
    }
    if (*(short *)(in_eax + 0xa7e + (uint)(byte)(&REFG(undefined, 0x10ed27b))[uVar1] * 4) != 0) {
      *(int *)(in_eax + 0x16a8) = *(int *)(in_eax + 0x16a8) + (uVar1 - 1) * 3 + 0x11;
      return uVar1 - 1;
    }
    if (*(short *)(in_eax + 0xa7e + (uint)(byte)(&REFG(undefined, 0x10ed27a))[uVar1] * 4) != 0) {
      *(int *)(in_eax + 0x16a8) = *(int *)(in_eax + 0x16a8) + (uVar1 - 2) * 3 + 0x11;
      return uVar1 - 2;
    }
    if (*(short *)(in_eax + 0xa7e + (uint)(byte)(&REFG(undefined, 0x10ed279))[uVar1] * 4) != 0) {
      uVar1 = uVar1 - 3;
      goto LAB_00b1998b;
    }
    uVar1 = uVar1 - 4;
    if ((int)uVar1 < 3) {
      *(int *)(in_eax + 0x16a8) = *(int *)(in_eax + 0x16a8) + uVar1 * 3 + 0x11;
      return uVar1;
    }
  } while( true );
}

/* ref: FUN_00b199a0 */
uint F_00b199a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb199a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x16bc);
  if (0xd < iVar1) {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) | (ushort)param_4 << ((byte)iVar1 & 0x1f);
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)))) =
         *(undefined1 *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)))) =
         *(undefined1 *)(param_1 + 0x16b9);
    iVar1 = *(int *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = iVar1 + -0xd;
    *(ushort *)(param_1 + 0x16b8) = (ushort)param_4 >> (0x10U - (char)iVar1 & 0x1f);
    uVar2 = F_00b19570(param_1,param_3,param_2,1);
    return uVar2;
  }
  *(int *)(param_1 + 0x16bc) = iVar1 + 3;
  *(ushort *)(param_1 + 0x16b8) =
       *(ushort *)(param_1 + 0x16b8) | (ushort)param_4 << ((byte)iVar1 & 0x1f);
  uVar2 = F_00b19570(param_1,param_3,param_2,1);
  return uVar2;
}

/* ref: FUN_00b19a50 */
uint F_00b19a50(unsigned int gen_a0)
{
  GEN_ENTER(0xb19a50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x16bc);
  *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) | 2 << ((byte)iVar1 & 0x1f);
  if (iVar1 < 0xe) {
    *(int *)(param_1 + 0x16bc) = iVar1 + 3;
  }
  else {
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)))) =
         *(undefined1 *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)))) =
         *(undefined1 *)(param_1 + 0x16b9);
    iVar1 = *(int *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = iVar1 + -0xd;
    *(ushort *)(param_1 + 0x16b8) = 2 >> (0x10U - (char)iVar1 & 0x1f);
  }
  iVar1 = *(int *)(param_1 + 0x16bc);
  *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) | 0 << ((byte)iVar1 & 0x1f);
  if (iVar1 < 10) {
    *(int *)(param_1 + 0x16bc) = iVar1 + 7;
  }
  else {
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)))) =
         *(undefined1 *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)))) =
         *(undefined1 *)(param_1 + 0x16b9);
    iVar1 = *(int *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = iVar1 + -9;
    *(ushort *)(param_1 + 0x16b8) = 0 >> (0x10U - (char)iVar1 & 0x1f);
  }
  uVar2 = F_00b19490(param_1);
  iVar1 = *(int *)(uVar2 + 0x16bc);
  if ((*(int *)(uVar2 + 0x16b4) - iVar1) + 0xb < 9) {
    *(ushort *)(uVar2 + 0x16b8) = *(ushort *)(uVar2 + 0x16b8) | 2 << ((byte)iVar1 & 0x1f);
    if (iVar1 < 0xe) {
      *(int *)(uVar2 + 0x16bc) = iVar1 + 3;
    }
    else {
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 8) + *(int *)(uVar2 + 0x14)))) =
           *(undefined1 *)(uVar2 + 0x16b8);
      *(int *)(uVar2 + 0x14) = *(int *)(uVar2 + 0x14) + 1;
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 0x14) + *(int *)(uVar2 + 8)))) =
           *(undefined1 *)(uVar2 + 0x16b9);
      iVar1 = *(int *)(uVar2 + 0x16bc);
      *(int *)(uVar2 + 0x14) = *(int *)(uVar2 + 0x14) + 1;
      *(int *)(uVar2 + 0x16bc) = iVar1 + -0xd;
      *(ushort *)(uVar2 + 0x16b8) = 2 >> (0x10U - (char)iVar1 & 0x1f);
    }
    iVar1 = *(int *)(uVar2 + 0x16bc);
    *(ushort *)(uVar2 + 0x16b8) = *(ushort *)(uVar2 + 0x16b8) | 0 << ((byte)iVar1 & 0x1f);
    if (9 < iVar1) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 8) + *(int *)(uVar2 + 0x14)))) =
           *(undefined1 *)(uVar2 + 0x16b8);
      *(int *)(uVar2 + 0x14) = *(int *)(uVar2 + 0x14) + 1;
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 0x14) + *(int *)(uVar2 + 8)))) =
           *(undefined1 *)(uVar2 + 0x16b9);
      iVar1 = *(int *)(uVar2 + 0x16bc);
      *(int *)(uVar2 + 0x14) = *(int *)(uVar2 + 0x14) + 1;
      *(int *)(uVar2 + 0x16bc) = iVar1 + -9;
      *(ushort *)(uVar2 + 0x16b8) = 0 >> (0x10U - (char)iVar1 & 0x1f);
      uVar2 = F_00b19490(uVar2);
      *(undefined4 *)(uVar2 + 0x16b4) = 7;
      return uVar2;
    }
    *(int *)(uVar2 + 0x16bc) = iVar1 + 7;
    uVar2 = F_00b19490(uVar2);
  }
  *(undefined4 *)(uVar2 + 0x16b4) = 7;
  return uVar2;
}

/* ref: FUN_00b19c50 */
uint F_00b19c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb19c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  if (param_1[0x21] < 1) {
    uVar2 = param_3 + 5;
  }
  else {
    if ((param_3 != 0) && (*(int *)(*param_1 + 0x2c) == 2)) {
      F_00b193a0(param_1);
    }
    F_00b196d0(param_1,param_1 + 0x2c6);
    F_00b196d0(param_1,param_1 + 0x2c9);
    local_8 = F_00b198d0(param_1);
    uVar4 = param_1[0x5aa] + 10U >> 3;
    uVar2 = param_1[0x5ab] + 10U >> 3;
    if (uVar4 < uVar2) goto LAB_00b19cc8;
  }
  uVar4 = uVar2;
LAB_00b19cc8: ;
  if ((uVar4 < param_3 + 4U) || (param_2 == 0)) {
    if ((param_1[0x22] == 4) || (uVar2 == uVar4)) {
      iVar1 = param_1[0x5af];
      uVar3 = (short)param_4 + 2;
      if (iVar1 < 0xe) {
        *(ushort *)(param_1 + 0x5ae) = *(ushort *)(param_1 + 0x5ae) | uVar3 << ((byte)iVar1 & 0x1f);
        param_1[0x5af] = iVar1 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ae) = *(ushort *)(param_1 + 0x5ae) | uVar3 << ((byte)iVar1 & 0x1f);
        *(char *)(param_1[2] + param_1[5]) = (char)param_1[0x5ae];
        param_1[5] = param_1[5] + 1;
        *(undefined1 *)(param_1[5] + param_1[2]) = *(undefined1 *)((int)param_1 + 0x16b9);
        iVar1 = param_1[0x5af];
        param_1[5] = param_1[5] + 1;
        param_1[0x5af] = iVar1 + -0xd;
        *(ushort *)(param_1 + 0x5ae) = uVar3 >> (0x10U - (char)iVar1 & 0x1f);
      }
      F_00b18f90(param_1,&REFG(undefined, 0x10ed358),&REFG(undefined, 0x10ed7d8));
    }
    else {
      iVar1 = param_1[0x5af];
      uVar3 = (short)param_4 + 4;
      if (iVar1 < 0xe) {
        *(ushort *)(param_1 + 0x5ae) = *(ushort *)(param_1 + 0x5ae) | uVar3 << ((byte)iVar1 & 0x1f);
        param_1[0x5af] = iVar1 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ae) = *(ushort *)(param_1 + 0x5ae) | uVar3 << ((byte)iVar1 & 0x1f);
        *(char *)(param_1[2] + param_1[5]) = (char)param_1[0x5ae];
        param_1[5] = param_1[5] + 1;
        *(undefined1 *)(param_1[5] + param_1[2]) = *(undefined1 *)((int)param_1 + 0x16b9);
        iVar1 = param_1[0x5af];
        param_1[5] = param_1[5] + 1;
        param_1[0x5af] = iVar1 + -0xd;
        *(ushort *)(param_1 + 0x5ae) = uVar3 >> (0x10U - (char)iVar1 & 0x1f);
      }
      F_00b18ca0(param_1,param_1[0x2c7] + 1,param_1[0x2ca] + 1,local_8 + 1);
      F_00b18f90(param_1,param_1 + 0x25,param_1 + 0x262);
    }
  }
  else {
    F_00b199a0(param_1,param_2,param_3,param_4);
  }
  uVar2 = F_00b182e0(param_1);
  if (param_4 != 0) {
    uVar2 = F_00b19510(param_1);
  }
  return uVar2;
}

/* ref: FUN_00b19e60 */
uint F_00b19e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb19e60u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint * in_ecx = (uint *)(uintptr_t)gen_a1;
  uint in_edx = (uint)gen_a2;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  
  uVar1 = ~in_eax;
  for (; (in_edx != 0 && (((uint)in_ecx & 3) != 0)); in_ecx = (uint *)((int)in_ecx + 1)) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&REFG(undefined, 0x10edc40) + (((byte)*in_ecx ^ uVar1) & 0xff) * 4);
    in_edx = in_edx - 1;
  }
  if (0x1f < in_edx) {
    uVar3 = in_edx >> 5;
    puVar2 = in_ecx;
    do {
      uVar1 = uVar1 ^ *puVar2;
      uVar1 = *(uint *)(&REFG(undefined, 0x10ee040) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee440) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10edc40) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee840) + (uVar1 & 0xff) * 4) ^ puVar2[1];
      uVar1 = *(uint *)(&REFG(undefined, 0x10ee040) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee440) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10edc40) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee840) + (uVar1 & 0xff) * 4) ^ puVar2[2];
      uVar1 = *(uint *)(&REFG(undefined, 0x10ee040) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee440) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10edc40) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee840) + (uVar1 & 0xff) * 4) ^ puVar2[3];
      uVar1 = *(uint *)(&REFG(undefined, 0x10ee040) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee440) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10edc40) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee840) + (uVar1 & 0xff) * 4) ^ puVar2[4];
      uVar1 = *(uint *)(&REFG(undefined, 0x10ee040) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee440) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10edc40) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee840) + (uVar1 & 0xff) * 4) ^ puVar2[5];
      in_ecx = puVar2 + 8;
      uVar1 = *(uint *)(&REFG(undefined, 0x10ee040) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee440) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10edc40) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee840) + (uVar1 & 0xff) * 4) ^ puVar2[6];
      in_edx = in_edx - 0x20;
      uVar1 = *(uint *)(&REFG(undefined, 0x10ee040) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee440) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10edc40) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee840) + (uVar1 & 0xff) * 4) ^ puVar2[7];
      uVar1 = *(uint *)(&REFG(undefined, 0x10ee040) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee440) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10edc40) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee840) + (uVar1 & 0xff) * 4);
      uVar3 = uVar3 - 1;
      puVar2 = in_ecx;
    } while (uVar3 != 0);
  }
  if (3 < in_edx) {
    uVar3 = in_edx >> 2;
    do {
      uVar1 = uVar1 ^ *in_ecx;
      in_ecx = in_ecx + 1;
      uVar1 = *(uint *)(&REFG(undefined, 0x10ee040) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee440) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x10edc40) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x10ee840) + (uVar1 & 0xff) * 4);
      in_edx = in_edx - 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  for (; in_edx != 0; in_edx = in_edx - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&REFG(undefined, 0x10edc40) + (((byte)*in_ecx ^ uVar1) & 0xff) * 4);
    in_ecx = (uint *)((int)in_ecx + 1);
  }
  return ~uVar1;
}

/* ref: FUN_00b1a430 */
uint F_00b1a430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1a430u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    if ((param_1 & 1) != 0) {
      uVar1 = uVar1 ^ *param_2;
    }
    param_2 = param_2 + 1;
  }
  return uVar1;
}

/* ref: FUN_00b1a450 */
uint F_00b1a450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1a450u, gen_a0, gen_a1, 0u, 0u);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - (int)in_eax;
  iVar2 = 0x20;
  do {
    uVar1 = F_00b1a430(*(undefined4 *)(iVar3 + (int)in_eax),param_2);
    *in_eax = uVar1;
    in_eax = in_eax + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00b1a480 */
uint F_00b1a480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1a480u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    return param_1;
  }
  iVar2 = 1;
  ((int *)(gen_frame + 0x8c))[0] = -0x12477ce0;
  iVar1 = 1;
  do {
    ((int *)(gen_frame + 0x8c))[iVar1] = iVar2;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 * 2;
  } while (iVar1 < 0x20);
  F_00b1a450(((undefined1 *)(gen_frame + 0xc)),((int *)(gen_frame + 0x8c)));
  F_00b1a450(((int *)(gen_frame + 0x8c)),((undefined1 *)(gen_frame + 0xc)));
  do {
    F_00b1a450(((undefined1 *)(gen_frame + 0xc)),((int *)(gen_frame + 0x8c)));
    if ((param_3 & 1) != 0) {
      param_1 = F_00b1a430(param_1,((undefined1 *)(gen_frame + 0xc)));
    }
    if ((int)param_3 >> 1 == 0) break;
    F_00b1a450(((int *)(gen_frame + 0x8c)),((undefined1 *)(gen_frame + 0xc)));
    if (((int)param_3 >> 1 & 1U) != 0) {
      param_1 = F_00b1a430(param_1,((int *)(gen_frame + 0x8c)));
    }
    param_3 = (int)param_3 >> 2;
  } while (param_3 != 0);
  return param_1 ^ param_2;
}

/* ref: FUN_00b1a540 */
uint F_00b1a540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1a540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = F_00b19e60(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00b1a580 */
uint F_00b1a580(unsigned int gen_a0)
{
  GEN_ENTER(0xb1a580u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined * PTR32, 0x10efcc8))[-param_1];
}

/* ref: FUN_00b1a5a0 */
uint F_00b1a5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1a5a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * pvVar1;
  
  pvVar1 = F_00c51787(param_2 * param_3);
  return (uint)pvVar1;
}

/* ref: FUN_00b1a5c0 */
uint F_00b1a5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1a5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint extraout_EAX = 0;
  
  F_00c4c68f(param_2);
  return extraout_EAX;
}

/* ref: FUN_00b1a5e0 */
byte F_00b1a5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb1a5e0u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0x2ee6) {
    if (uVar1 == 0x2ee5) {
      *param_1 = 0x2722;
      return 1;
    }
    if (uVar1 == 0x70) {
      *param_1 = 0xffffffff;
      return 1;
    }
    if (uVar1 == 0x2ee2) {
      *param_1 = 0x2723;
      return 1;
    }
  }
  else if (uVar1 == 0x2ee7) {
    *param_1 = 0x2724;
    return 1;
  }
  return 0;
}

/* ref: FUN_00b1a630 */
unsigned int F_00b1a630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1a630u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte * pbVar1;
  undefined1 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  undefined1 uVar12;
  byte * pbVar13;
  uint uVar14;
  int iVar15;
  undefined1 * puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined1 * puVar20;
  undefined1 * puVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  byte * local_8;
  
  puVar3 = (undefined4 *)param_1[7];
  local_8 = (byte *)(*param_1 + -1);
  uVar19 = puVar3[0xe];
  pbVar1 = local_8 + param_1[1] + -5;
  puVar20 = (undefined1 *)(param_1[3] + -1);
  puVar16 = puVar20 + (param_1[4] - param_2);
  puVar2 = puVar20 + param_1[4] + -0x101;
  iVar4 = puVar3[10];
  uVar5 = puVar3[0xb];
  uVar6 = puVar3[0xc];
  iVar24 = puVar3[0xd];
  iVar7 = puVar3[0x13];
  iVar8 = puVar3[0x14];
  uVar9 = puVar3[0x15];
  uVar10 = puVar3[0x16];
  uVar22 = puVar3[0xf];
LAB_00b1a6b8: ;
  if (uVar22 < 0xf) {
    pbVar13 = local_8 + 1;
    local_8 = local_8 + 2;
    uVar19 = uVar19 + ((uint)*pbVar13 << ((byte)uVar22 & 0x1f)) +
             ((uint)*local_8 << ((byte)uVar22 + 8 & 0x1f));
    uVar22 = uVar22 + 0x10;
  }
  uVar17 = *((uint *)GEN_TOP((iVar7 + ((1 << ((byte)uVar9 & 0x1f)) - 1U & uVar19) * 4)));
  uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
  uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
  cVar11 = (char)uVar17;
  while (cVar11 != '\0') {
    if ((uVar17 & 0x10) != 0) {
      param_2 = uVar17 >> 0x10;
      uVar17 = uVar17 & 0xf;
      if (uVar17 != 0) {
        if (uVar22 < uVar17) {
          local_8 = local_8 + 1;
          uVar19 = uVar19 + ((uint)*local_8 << ((byte)uVar22 & 0x1f));
          uVar22 = uVar22 + 8;
        }
        param_2 = param_2 + ((1 << (sbyte)uVar17) - 1U & uVar19);
        uVar19 = uVar19 >> (sbyte)uVar17;
        uVar22 = uVar22 - uVar17;
      }
      if (uVar22 < 0xf) {
        pbVar13 = local_8 + 1;
        local_8 = local_8 + 2;
        uVar19 = uVar19 + ((uint)*pbVar13 << ((byte)uVar22 & 0x1f)) +
                 ((uint)*local_8 << ((byte)uVar22 + 8 & 0x1f));
        uVar22 = uVar22 + 0x10;
      }
      uVar17 = *((uint *)GEN_TOP((iVar8 + ((1 << ((byte)uVar10 & 0x1f)) - 1U & uVar19) * 4)));
      uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
      uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
      goto joined_r0x00b1a7ba;
    }
    if ((uVar17 & 0x40) != 0) {
      if ((uVar17 & 0x20) == 0) {
        param_1[6] = (int)"invalid literal/length code";
        goto LAB_00b1a9dc;
      }
      *puVar3 = 0xb;
      goto LAB_00b1a9e8;
    }
    uVar17 = *((uint *)GEN_TOP((iVar7 + (((1 << ((byte)uVar17 & 0x1f)) - 1U & uVar19) + (uVar17 >> 0x10)) * 4
                      )));
    uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
    uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
    cVar11 = (char)uVar17;
  }
  uVar12 = (undefined1)(uVar17 >> 0x10);
  goto LAB_00b1a98a;
joined_r0x00b1a7ba: ;
  if ((uVar17 & 0x10) != 0) goto LAB_00b1a7f6;
  if ((uVar17 & 0x40) != 0) {
    param_1[6] = (int)"invalid distance code";
LAB_00b1a9dc: ;
    *puVar3 = 0x1b;
    goto LAB_00b1a9e8;
  }
  uVar17 = *((uint *)GEN_TOP((iVar8 + (((1 << ((byte)uVar17 & 0x1f)) - 1U & uVar19) + (uVar17 >> 0x10)) * 4)));
  uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
  uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
  goto joined_r0x00b1a7ba;
LAB_00b1a7f6: ;
  uVar14 = uVar17 & 0xf;
  uVar23 = uVar22;
  pbVar13 = local_8;
  if (uVar22 < uVar14) {
    uVar23 = uVar22 + 8;
    uVar19 = uVar19 + ((uint)local_8[1] << ((byte)uVar22 & 0x1f));
    pbVar13 = local_8 + 1;
    if (uVar23 < uVar14) {
      uVar19 = uVar19 + ((uint)local_8[2] << ((byte)uVar23 & 0x1f));
      uVar23 = uVar22 + 0x10;
      pbVar13 = local_8 + 2;
    }
  }
  local_8 = pbVar13;
  uVar22 = uVar23 - uVar14;
  uVar23 = (1 << (sbyte)uVar14) - 1U & uVar19;
  uVar19 = uVar19 >> (sbyte)uVar14;
  uVar23 = (uVar17 >> 0x10) + uVar23;
  if ((uint)((int)puVar20 - (int)puVar16) < uVar23) {
    uVar17 = uVar23 - ((int)puVar20 - (int)puVar16);
    if (uVar5 < uVar17) {
      param_1[6] = (int)"invalid distance too far back";
      *puVar3 = 0x1b;
LAB_00b1a9e8: ;
      iVar4 = (int)local_8 - (uVar22 >> 3);
      iVar24 = uVar22 + (uVar22 >> 3) * -8;
      *param_1 = iVar4 + 1;
      param_1[3] = (int)(puVar20 + 1);
      param_1[4] = (int)(puVar2 + (0x101 - (int)puVar20));
      param_1[1] = (int)(pbVar1 + (5 - iVar4));
      puVar3[0xf] = iVar24;
      puVar3[0xe] = uVar19 & (1 << ((byte)iVar24 & 0x1f)) - 1U;
      return 0;
    }
    iVar15 = iVar24 + -1;
    if (uVar6 == 0) {
      iVar15 = iVar15 + (iVar4 - uVar17);
      if (uVar17 < param_2) {
        param_2 = param_2 - uVar17;
        do {
          puVar21 = (undefined1 *)(iVar15 + 1);
          iVar15 = iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar17 = uVar17 - 1;
          *puVar20 = *puVar21;
        } while (uVar17 != 0);
LAB_00b1a8f2: ;
        iVar15 = (int)puVar20 - uVar23;
      }
    }
    else if (uVar6 < uVar17) {
      uVar14 = uVar17 - uVar6;
      iVar15 = iVar15 + (uVar6 - uVar17) + iVar4;
      if (uVar14 < param_2) {
        param_2 = param_2 - uVar14;
        iVar15 = iVar15 - (int)puVar20;
        do {
          puVar21 = puVar20 + iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar14 = uVar14 - 1;
          *puVar20 = *puVar21;
        } while (uVar14 != 0);
        iVar15 = iVar24 + -1;
        if (uVar6 < param_2) {
          param_2 = param_2 - uVar6;
          uVar17 = uVar6;
          do {
            puVar21 = (undefined1 *)(iVar15 + 1);
            iVar15 = iVar15 + 1;
            puVar20 = puVar20 + 1;
            uVar17 = uVar17 - 1;
            *puVar20 = *puVar21;
          } while (uVar17 != 0);
          goto LAB_00b1a8f2;
        }
      }
    }
    else {
      iVar15 = iVar15 + (uVar6 - uVar17);
      if (uVar17 < param_2) {
        param_2 = param_2 - uVar17;
        do {
          puVar21 = (undefined1 *)(iVar15 + 1);
          iVar15 = iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar17 = uVar17 - 1;
          *puVar20 = *puVar21;
        } while (uVar17 != 0);
        goto LAB_00b1a8f2;
      }
    }
    if (2 < param_2) {
      iVar18 = (param_2 - 3) / 3 + 1;
      do {
        param_2 = param_2 - 3;
        puVar20[1] = *(undefined1 *)(iVar15 + 1);
        puVar20[2] = *(undefined1 *)(iVar15 + 2);
        puVar21 = (undefined1 *)(iVar15 + 3);
        iVar15 = iVar15 + 3;
        puVar20 = puVar20 + 3;
        iVar18 = iVar18 + -1;
        *puVar20 = *puVar21;
      } while (iVar18 != 0);
    }
    if (param_2 == 0) goto LAB_00b1a98c;
    puVar20 = puVar20 + 1;
    *puVar20 = *(undefined1 *)(iVar15 + 1);
    if (param_2 < 2) goto LAB_00b1a98c;
    uVar12 = *(undefined1 *)(iVar15 + 2);
  }
  else {
    iVar15 = (int)puVar20 - uVar23;
    do {
      puVar21 = puVar20;
      iVar18 = iVar15;
      puVar21[1] = *(undefined1 *)(iVar18 + 1);
      puVar21[2] = *(undefined1 *)(iVar18 + 2);
      puVar20 = puVar21 + 3;
      *puVar20 = *(undefined1 *)(iVar18 + 3);
      param_2 = param_2 - 3;
      iVar15 = iVar18 + 3;
    } while (2 < param_2);
    if (param_2 == 0) goto LAB_00b1a98c;
    puVar20 = puVar21 + 4;
    *puVar20 = *(undefined1 *)(iVar18 + 4);
    if (param_2 < 2) goto LAB_00b1a98c;
    uVar12 = *(undefined1 *)(iVar18 + 5);
  }
LAB_00b1a98a: ;
  puVar20 = puVar20 + 1;
  *puVar20 = uVar12;
LAB_00b1a98c: ;
  if ((pbVar1 <= local_8) || (puVar2 <= puVar20)) goto LAB_00b1a9e8;
  goto LAB_00b1a6b8;
}

/* ref: FUN_00b1aa40 */
uint F_00b1aa40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb1aa40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  int iVar9;
  int iVar10;
  ushort * puVar11;
  byte bVar12;
  ushort * puVar13;
  
  ((ushort *)(gen_frame + 0x20))[0] = 0;
  ((ushort *)(gen_frame + 0x20))[1] = 0;
  ((ushort *)(gen_frame + 0x20))[2] = 0;
  ((ushort *)(gen_frame + 0x20))[3] = 0;
  ((ushort *)(gen_frame + 0x20))[4] = 0;
  ((ushort *)(gen_frame + 0x20))[5] = 0;
  ((ushort *)(gen_frame + 0x20))[6] = 0;
  ((ushort *)(gen_frame + 0x20))[7] = 0;
  ((ushort *)(gen_frame + 0x20))[8] = 0;
  ((ushort *)(gen_frame + 0x20))[9] = 0;
  ((ushort *)(gen_frame + 0x20))[10] = 0;
  ((ushort *)(gen_frame + 0x20))[0xb] = 0;
  ((ushort *)(gen_frame + 0x20))[0xc] = 0;
  ((ushort *)(gen_frame + 0x20))[0xd] = 0;
  ((ushort *)(gen_frame + 0x20))[0xe] = 0;
  ((ushort *)(gen_frame + 0x20))[0xf] = 0;
  uVar4 = 0;
  if ((*(uint *)&gen_args[2]) != 0) {
    do {
      ((ushort *)(gen_frame + 0x20))[*(ushort *)((*(int *)&gen_args[1]) + uVar4 * 2)] = ((ushort *)(gen_frame + 0x20))[*(ushort *)((*(int *)&gen_args[1]) + uVar4 * 2)] + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (*(uint *)&gen_args[2]));
  }
  (*(uint *)(gen_frame + 0x74)) = *(*(uint * PTR32 *)&gen_args[4]);
  (*(uint *)(gen_frame + 0x70)) = 0xf;
  do {
    if (((ushort *)(gen_frame + 0x20))[(*(uint *)(gen_frame + 0x70))] != 0) break;
    (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) - 1;
  } while ((*(uint *)(gen_frame + 0x70)) != 0);
  if ((*(uint *)(gen_frame + 0x70)) < (*(uint *)(gen_frame + 0x74))) {
    (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x70));
  }
  if ((*(uint *)(gen_frame + 0x70)) == 0) {
    *((undefined4 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[3]))) = 0x140;
    *(*(int * PTR32 *)&gen_args[3]) = *(*(int * PTR32 *)&gen_args[3]) + 4;
    *((undefined4 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[3]))) = 0x140;
    *(*(int * PTR32 *)&gen_args[3]) = *(*(int * PTR32 *)&gen_args[3]) + 4;
    *(*(uint * PTR32 *)&gen_args[4]) = 1;
    return 0;
  }
  (*(uint *)(gen_frame + 0x78)) = 1;
  do {
    if (((ushort *)(gen_frame + 0x20))[(*(uint *)(gen_frame + 0x78))] != 0) break;
    if (((ushort *)(gen_frame + 0x20))[(*(uint *)(gen_frame + 0x78)) + 1] != 0) {
      (*(uint *)(gen_frame + 0x78)) = (*(uint *)(gen_frame + 0x78)) + 1;
      break;
    }
    if (((ushort *)(gen_frame + 0x20))[(*(uint *)(gen_frame + 0x78)) + 2] != 0) {
      (*(uint *)(gen_frame + 0x78)) = (*(uint *)(gen_frame + 0x78)) + 2;
      break;
    }
    if (((ushort *)(gen_frame + 0x20))[(*(uint *)(gen_frame + 0x78)) + 3] != 0) {
      (*(uint *)(gen_frame + 0x78)) = (*(uint *)(gen_frame + 0x78)) + 3;
      break;
    }
    if (((ushort *)(gen_frame + 0x20))[(*(uint *)(gen_frame + 0x78)) + 4] != 0) {
      (*(uint *)(gen_frame + 0x78)) = (*(uint *)(gen_frame + 0x78)) + 4;
      break;
    }
    (*(uint *)(gen_frame + 0x78)) = (*(uint *)(gen_frame + 0x78)) + 5;
  } while ((*(uint *)(gen_frame + 0x78)) < 0x10);
  if ((*(uint *)(gen_frame + 0x74)) < (*(uint *)(gen_frame + 0x78))) {
    (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x78));
  }
  iVar10 = 1;
  uVar4 = 1;
  do {
    iVar10 = iVar10 * 2 - (uint)((ushort *)(gen_frame + 0x20))[uVar4];
    if (iVar10 < 0) {
      return 0xffffffff;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  if ((0 < iVar10) && (((*(int *)&gen_args[0]) == 0 || ((*(uint *)(gen_frame + 0x70)) != 1)))) {
    return 0xffffffff;
  }
  ((ushort *)(gen_frame + 0x0))[1] = 0;
  uVar4 = 2;
  do {
    uVar5 = uVar4 + 2;
    *(short *)((int)((ushort *)(gen_frame + 0x0)) + uVar4 + 2) =
         *(short *)((int)((ushort *)(gen_frame + 0x0)) + uVar4) + *(short *)((int)((ushort *)(gen_frame + 0x20)) + uVar4);
    uVar4 = uVar5;
  } while (uVar5 < 0x1e);
  uVar4 = 0;
  if ((*(uint *)&gen_args[2]) != 0) {
    do {
      if (*(short *)((*(int *)&gen_args[1]) + uVar4 * 2) != 0) {
        (*(ushort * PTR32 *)&gen_args[5])[((ushort *)(gen_frame + 0x0))[*(ushort *)((*(int *)&gen_args[1]) + uVar4 * 2)]] = (ushort)uVar4;
        ((ushort *)(gen_frame + 0x0))[*(ushort *)((*(int *)&gen_args[1]) + uVar4 * 2)] =
             ((ushort *)(gen_frame + 0x0))[*(ushort *)((*(int *)&gen_args[1]) + uVar4 * 2)] + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (*(uint *)&gen_args[2]));
  }
  if ((*(int *)&gen_args[0]) == 0) {
    (*(ushort * PTR32 *)(gen_frame + 0x60)) = (*(ushort * PTR32 *)&gen_args[5]);
    (*(ushort * PTR32 *)(gen_frame + 0x5c)) = (*(ushort * PTR32 *)&gen_args[5]);
    (*(int *)(gen_frame + 0x68)) = 0x13;
  }
  else if ((*(int *)&gen_args[0]) == 1) {
    (*(ushort * PTR32 *)(gen_frame + 0x5c)) = (ushort *)&REFG(undefined, 0x10efb16);
    (*(ushort * PTR32 *)(gen_frame + 0x60)) = (ushort *)&REFG(undefined, 0x10efb56);
    (*(int *)(gen_frame + 0x68)) = 0x100;
  }
  else {
    (*(ushort * PTR32 *)(gen_frame + 0x5c)) = (ushort *)&REFG(undefined, 0x10efd98);
    (*(ushort * PTR32 *)(gen_frame + 0x60)) = (ushort *)&REFG(undefined, 0x10efdd8);
    (*(int *)(gen_frame + 0x68)) = -1;
  }
  (*(int *)(gen_frame + 0x6c)) = *(*(int * PTR32 *)&gen_args[3]);
  (*(uint *)(gen_frame + 0x54)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x4c)) = 1 << ((byte)(*(uint *)(gen_frame + 0x74)) & 0x1f);
  uVar5 = 0;
  uVar4 = 0;
  (*(uint *)(gen_frame + 0x64)) = (*(uint *)(gen_frame + 0x4c));
  (*(uint *)(gen_frame + 0x48)) = (*(uint *)(gen_frame + 0x4c)) - 1;
  if (((*(int *)&gen_args[0]) == 1) && (0x5af < (*(uint *)(gen_frame + 0x4c)))) {
    return 1;
  }
  (*(ushort * PTR32 *)(gen_frame + 0x58)) = (*(ushort * PTR32 *)&gen_args[5]);
  do {
    uVar7 = (*(uint *)(gen_frame + 0x78));
    cVar1 = (char)(*(uint *)(gen_frame + 0x78));
    bVar12 = (byte)uVar4;
    bVar2 = (char)(*(uint *)(gen_frame + 0x78)) - bVar12;
    uVar3 = *(*(ushort * PTR32 *)(gen_frame + 0x58));
    if ((int)(uint)uVar3 < (*(int *)(gen_frame + 0x68))) {
      (*(undefined2 *)((char *)&(*(uint *)&gen_args[2]) + 0)) = (ushort)bVar2 << 8;
LAB_00b1ac9f: ;
      (*(uint *)&gen_args[2]) = CONCAT22(uVar3,(ushort)(*(uint *)&gen_args[2]));
    }
    else {
      if ((int)(uint)uVar3 <= (*(int *)(gen_frame + 0x68))) {
        (*(uint *)&gen_args[2]) = CONCAT31((uint3)bVar2,0x60);
        uVar3 = 0;
        goto LAB_00b1ac9f;
      }
      (*(uint *)&gen_args[2]) = CONCAT22((*(ushort * PTR32 *)(gen_frame + 0x5c))[*(*(ushort * PTR32 *)(gen_frame + 0x58))],CONCAT11(bVar2,(char)(*(ushort * PTR32 *)(gen_frame + 0x60))[*(*(ushort * PTR32 *)(gen_frame + 0x58))]));
    }
    iVar10 = 1 << ((char)(*(uint *)(gen_frame + 0x78)) - bVar12 & 0x1f);
    (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x4c));
    puVar8 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x6c)) + ((uVar5 >> (bVar12 & 0x1f)) + (*(uint *)(gen_frame + 0x4c))) * 4)));
    uVar6 = (*(uint *)(gen_frame + 0x4c));
    do {
      puVar8 = puVar8 - iVar10;
      uVar6 = uVar6 - iVar10;
      *puVar8 = (*(uint *)&gen_args[2]);
    } while (uVar6 != 0);
    for (uVar6 = 1 << ((char)(*(uint *)(gen_frame + 0x78)) - 1U & 0x1f); (uVar5 & uVar6) != 0; uVar6 = uVar6 >> 1) {
    }
    if (uVar6 == 0) {
      (*(uint *)(gen_frame + 0x50)) = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x50)) = (uVar6 - 1 & uVar5) + uVar6;
    }
    uVar5 = (*(uint *)(gen_frame + 0x50));
    puVar11 = (*(ushort * PTR32 *)(gen_frame + 0x58)) + 1;
    puVar13 = ((ushort *)(gen_frame + 0x20)) + (*(uint *)(gen_frame + 0x78));
    *puVar13 = *puVar13 - 1;
    (*(ushort * PTR32 *)(gen_frame + 0x58)) = puVar11;
    if (*puVar13 == 0) {
      if (uVar7 == (*(uint *)(gen_frame + 0x70))) {
        (*(undefined2 *)((char *)&(*(uint *)&gen_args[2]) + 0)) = CONCAT11(cVar1 - bVar12,0x40);
        (*(uint *)&gen_args[2]) = (uint)(ushort)(*(uint *)&gen_args[2]);
        break;
      }
      uVar7 = (uint)*(ushort *)((*(int *)&gen_args[1]) + (uint)*puVar11 * 2);
      (*(uint *)(gen_frame + 0x78)) = uVar7;
    }
    if ((*(uint *)(gen_frame + 0x74)) < uVar7) {
      (*(uint *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x48)) & uVar5;
      if ((*(uint *)(gen_frame + 0x40)) != (*(uint *)(gen_frame + 0x54))) {
        if (uVar4 == 0) {
          uVar4 = (*(uint *)(gen_frame + 0x74));
        }
        (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + (*(uint *)(gen_frame + 0x44)) * 4;
        iVar9 = (*(uint *)(gen_frame + 0x78)) - uVar4;
        uVar7 = uVar4 + iVar9;
        iVar10 = 1 << ((byte)iVar9 & 0x1f);
        if (uVar7 < (*(uint *)(gen_frame + 0x70))) {
          puVar13 = ((ushort *)(gen_frame + 0x20)) + uVar7;
          do {
            uVar3 = *puVar13;
            uVar5 = (*(uint *)(gen_frame + 0x50));
            if ((int)(iVar10 - (uint)uVar3) < 1) break;
            uVar7 = uVar7 + 1;
            iVar9 = iVar9 + 1;
            puVar13 = puVar13 + 1;
            iVar10 = (iVar10 - (uint)uVar3) * 2;
          } while (uVar7 < (*(uint *)(gen_frame + 0x70)));
        }
        (*(uint *)(gen_frame + 0x4c)) = 1 << ((byte)iVar9 & 0x1f);
        (*(uint *)(gen_frame + 0x64)) = (*(uint *)(gen_frame + 0x64)) + (*(uint *)(gen_frame + 0x4c));
        if (((*(int *)&gen_args[0]) == 1) && (0x5af < (*(uint *)(gen_frame + 0x64)))) {
          return 1;
        }
        *((byte *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + (*(uint *)(gen_frame + 0x40)) * 4))) = (byte)iVar9;
        *((undefined1 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 1 + (*(uint *)(gen_frame + 0x40)) * 4))) = (undefined1)(*(uint *)(gen_frame + 0x74));
        *((short *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 2 + (*(uint *)(gen_frame + 0x40)) * 4))) = (short)((*(int *)(gen_frame + 0x6c)) - *(*(int * PTR32 *)&gen_args[3]) >> 2);
        (*(uint *)(gen_frame + 0x54)) = (*(uint *)(gen_frame + 0x40));
      }
    }
  } while( true );
joined_r0x00b1adf3: ;
  if (uVar5 == 0) {
LAB_00b1ae53: ;
    *(*(int * PTR32 *)&gen_args[3]) = *(*(int * PTR32 *)&gen_args[3]) + (*(uint *)(gen_frame + 0x64)) * 4;
    *(*(uint * PTR32 *)&gen_args[4]) = (*(uint *)(gen_frame + 0x74));
    return 0;
  }
  if ((uVar4 != 0) && (((*(uint *)(gen_frame + 0x48)) & uVar5) != (*(uint *)(gen_frame + 0x54)))) {
    (*(int *)(gen_frame + 0x6c)) = *(*(int * PTR32 *)&gen_args[3]);
    uVar4 = 0;
    (*(uint *)(gen_frame + 0x78)) = (*(uint *)(gen_frame + 0x74));
    (*(undefined2 *)((char *)&(*(uint *)&gen_args[2]) + 0)) = CONCAT11((undefined1)(*(uint *)(gen_frame + 0x74)),(undefined1)(*(uint *)&gen_args[2]));
    (*(uint *)&gen_args[2]) = (uint)(ushort)(*(uint *)&gen_args[2]);
    uVar7 = (*(uint *)(gen_frame + 0x74));
  }
  *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x6c)) + (uVar5 >> ((byte)uVar4 & 0x1f)) * 4))) = (*(uint *)&gen_args[2]);
  for (uVar7 = 1 << ((char)uVar7 - 1U & 0x1f); (uVar5 & uVar7) != 0; uVar7 = uVar7 >> 1) {
  }
  if (uVar7 == 0) goto LAB_00b1ae53;
  uVar5 = (uVar5 & uVar7 - 1) + uVar7;
  uVar7 = (*(uint *)(gen_frame + 0x78));
  goto joined_r0x00b1adf3;
}

/* ref: FUN_00b1ae90 */
uint F_00b1ae90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1ae90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  LOCK();
  *(undefined4 *)((int)this + 4) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((int)this + 8) = 0;
  UNLOCK();
  return (uint)this;
}

/* ref: FUN_00b1aec0 */
unsigned int F_00b1aec0(void)
{
  GEN_ENTER(0xb1aec0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00b1aed0 */
byte F_00b1aed0(unsigned int gen_a0)
{
  GEN_ENTER(0xb1aed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)((int)this + 4);
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = *piVar3;
  UNLOCK();
  piVar3 = (int *)((int)this + 8);
  LOCK();
  iVar2 = *piVar3;
  *piVar3 = *piVar3;
  UNLOCK();
  return iVar1 == iVar2;
}

/* ref: FUN_00b1aef0 */
byte F_00b1aef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb1aef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined * PTR32 *)(param_1 + 0x4c) = this;
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  F_00a19cf0(*(undefined * PTR32 *)this,param_1,param_2);
  if (iVar2 == 0xfffffe) {
    LOCK();
    *piVar1 = *piVar1 + -0xffffff;
    UNLOCK();
  }
  return 1;
}

/* ref: FUN_00b1af30 */
uint F_00b1af30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb1af30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined * PTR32 *)(param_1 + 0x4c) = this;
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  F_00a19cf0(*(undefined * PTR32 *)this,param_1,param_2);
  if (iVar2 == 0xfffffe) {
    LOCK();
    *piVar1 = *piVar1 + -0xffffff;
    UNLOCK();
  }
  return 1;
}

/* ref: FUN_00b1af80 */
uint F_00b1af80(unsigned int gen_a0)
{
  GEN_ENTER(0xb1af80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (uint *)((int)this + 4);
  puVar2 = (uint *)((int)this + 8);
  while( true ) {
    LOCK();
    uVar3 = *puVar1;
    *puVar1 = *puVar1;
    UNLOCK();
    LOCK();
    uVar4 = *puVar2;
    *puVar2 = *puVar2;
    UNLOCK();
    if (uVar3 == uVar4) break;
    gen_imp_Sleep(0);
  }
  return uVar3;
}

/* ref: FUN_00b1afb0 */
uint F_00b1afb0(void)
{
  GEN_ENTER(0xb1afb0u, 0u, 0u, 0u, 0u);
  BOOL BVar1;
  _OSVERSIONINFOA _Stack_98;
  uint local_4;
  
  local_4 = REFG(undefined4, 0x134ab78) ^ (uint)&_Stack_98;
  _Stack_98.dwOSVersionInfoSize = 0x94;
  BVar1 = gen_imp_GetVersionExA(&_Stack_98);
  if (BVar1 != 0) {
    F_00c47745(local_4 ^ (uint)&_Stack_98);
    return (uint)(5 < _Stack_98.dwMajorVersion);
  }
  F_00c47745(local_4 ^ (uint)&_Stack_98);
  return 0;
}

/* ref: FUN_00b1b020 */
uint F_00b1b020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb1b020u, gen_a0, gen_a1, gen_a2, gen_a3);
  code * in_ecx = (code *)(uintptr_t)gen_a0;
  byte * in_ebx = (byte *)(uintptr_t)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x1d0];
  uint uVar1;
  HDC hdc;
  int iVar2;
  CHAR aCStack_1a8 [160];
  
  (*(uint *)(gen_frame + 0x1cc)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(gen_code32 *)(gen_frame + 0xc));
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  (*(gen_code32 *)(gen_frame + 0xc)) = param_4;
  in_ebx[0] = 0;
  in_ebx[1] = 0;
  in_ebx[2] = 0;
  in_ebx[3] = 0;
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x24)),0,0x1a8);
  iVar2 = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0x1a8;
  uVar1 = (*in_ecx)(0,0,&(*(undefined4 *)(gen_frame + 0x24)),0);
  while ((uVar1 != 0 && (((*(byte *)(gen_frame + 0xc8)) & 4) == 0))) {
    iVar2 = iVar2 + 1;
    uVar1 = (*in_ecx)(0,iVar2,&(*(undefined4 *)(gen_frame + 0x24)),0);
  }
  hdc = gen_imp_CreateDCA((LPCSTR)0x0,aCStack_1a8,(LPCSTR)0x0,(undefined *)0x0);
  if (hdc != (HDC)0x0) {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 0)) = hdc;
    uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(((byte *)(gen_frame + 0x10)));
    if (-1 < (int)uVar1) {
      gen_imp_DeleteDC(hdc);
      *(undefined4 *)param_3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 4));
      *(undefined4 *)in_ebx = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 16));
      F_00c47745((*(uint *)(gen_frame + 0x1cc)) ^ (uint)&(*(gen_code32 *)(gen_frame + 0xc)));
      return 0;
    }
    gen_imp_DeleteDC(hdc);
  }
  F_00c47745((*(uint *)(gen_frame + 0x1cc)) ^ (uint)&(*(gen_code32 *)(gen_frame + 0xc)));
  return 0x80004005;
}

/* ref: FUN_00b1b120 */
uint F_00b1b120(unsigned int gen_a0)
{
  GEN_ENTER(0xb1b120u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  HDC hdc;
  int iVar1;
  
  ((CHAR *)(gen_frame + 0x0))[0] = '\x10';
  ((CHAR *)(gen_frame + 0x0))[1] = '\0';
  ((CHAR *)(gen_frame + 0x0))[2] = '\0';
  ((CHAR *)(gen_frame + 0x0))[3] = '\0';
  ((CHAR *)(gen_frame + 0x0))[4] = '4';
  ((CHAR *)(gen_frame + 0x0))[5] = '\x01';
  ((CHAR *)(gen_frame + 0x0))[6] = '@';
  ((CHAR *)(gen_frame + 0x0))[7] = '\0';
  ((CHAR *)(gen_frame + 0x0))[8] = '\0';
  ((CHAR *)(gen_frame + 0x0))[9] = '\0';
  ((CHAR *)(gen_frame + 0x0))[10] = '\0';
  ((CHAR *)(gen_frame + 0x0))[0xb] = '\0';
  ((CHAR *)(gen_frame + 0x0))[0xc] = '\0';
  ((CHAR *)(gen_frame + 0x0))[0xd] = '\0';
  ((CHAR *)(gen_frame + 0x0))[0xe] = '\0';
  ((CHAR *)(gen_frame + 0x0))[0xf] = '\0';
  ((CHAR *)(gen_frame + 0x0))[0x10] = '@';
  ((CHAR *)(gen_frame + 0x0))[0x11] = '\0';
  ((CHAR *)(gen_frame + 0x0))[0x12] = '\0';
  ((CHAR *)(gen_frame + 0x0))[0x13] = '\0';
  ((CHAR *)(gen_frame + 0x0))[0x14] = '\x01';
  ((CHAR *)(gen_frame + 0x0))[0x15] = '\0';
  ((CHAR *)(gen_frame + 0x0))[0x16] = '\0';
  ((CHAR *)(gen_frame + 0x0))[0x17] = '\0';
  F_00c48350(((CHAR *)(gen_frame + 0x50)),0,0x140);
  hdc = gen_imp_CreateDCA("DISPLAY",(LPCSTR)0x0,(LPCSTR)0x0,(undefined *)0x0);
  iVar1 = gen_imp_ExtEscape(hdc,0x7306,0x50,((CHAR *)(gen_frame + 0x0)),0x140,((CHAR *)(gen_frame + 0x50)));
  gen_imp_DeleteDC(hdc);
  if (iVar1 == 0) {
    *param_1 = (*(undefined4 *)(gen_frame + 0x54));
    return 1;
  }
  return 0;
}

/* ref: FUN_00b1b1d0 */
uint F_00b1b1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb1b1d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  HMODULE pHVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  uint uVar4;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  ((undefined4 *)(gen_frame + 0x10))[0] = 0;
  pHVar1 = gen_imp_LoadLibraryA("user32.dll");
  (*(HMODULE *)(gen_frame + 0xc)) = pHVar1;
  if (pHVar1 == (HMODULE)0x0) {
    F_00c5181b("ERROR: Could Not Load user32.dll\n");
    return 0;
  }
  (*(FARPROC *)(gen_frame + 0x18)) = gen_imp_GetProcAddress(pHVar1,"EnumDisplayDevicesA");
  if ((*(FARPROC *)(gen_frame + 0x18)) == (FARPROC)0x0) {
    gen_imp_FreeLibrary(pHVar1);
    F_00c5181b("ERROR: Could Not Find Required procs in user32.dll\n");
    return 0;
  }
  pHVar1 = gen_imp_LoadLibraryA("gdi32.dll");
  if (pHVar1 == (HMODULE)0x0) {
    F_00c5181b("ERROR: Could Not Load gdi32.dll\n");
    return 0;
  }
  pFVar2 = gen_imp_GetProcAddress(pHVar1,"D3DKMTEscape");
  pFVar3 = gen_imp_GetProcAddress(pHVar1,"D3DKMTOpenAdapterFromHdc");
  if ((pFVar2 != (FARPROC)0x0) && (pFVar3 != (FARPROC)0x0)) {
    uVar4 = F_00b1b020((*(FARPROC *)(gen_frame + 0x18)),((undefined4 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x8)),pFVar3);
    if (uVar4 == 0) {
      F_00c48350(&(*(undefined4 *)(gen_frame + 0x38)),0,0x218);
      (*(undefined4 *)(gen_frame + 0x10c)) = 0x140;
      (*(undefined4 *)(gen_frame + 0x110)) = 0x140;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = (undefined4 *)0x0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0x80;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0x10000;
      (*(undefined4 *)(gen_frame + 0x40)) = 0x3000003;
      (*(undefined4 *)(gen_frame + 0xb8)) = 0x50;
      (*(undefined4 *)(gen_frame + 0xbc)) = 0x10;
      (*(undefined4 *)(gen_frame + 0xc0)) = 0x400134;
      (*(undefined4 *)(gen_frame + 0xc4)) = 0;
      (*(undefined4 *)(gen_frame + 0xc8)) = 0;
      (*(undefined4 *)(gen_frame + 0xcc)) = 0x40;
      (*(undefined4 *)(gen_frame + 0xd0)) = 1;
      (*(undefined4 *)(gen_frame + 0x1c)) = (*(undefined4 *)(gen_frame + 0x8));
      (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = &(*(undefined4 *)(gen_frame + 0x38));
      (*(undefined4 *)(gen_frame + 0x30)) = 0x218;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      uVar4 = ((code *)pFVar2)(&(*(undefined4 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x1c)));
      if (-1 < (int)uVar4) {
        *param_1 = (*(undefined4 *)(gen_frame + 0x114));
      }
      gen_imp_FreeLibrary((*(HMODULE *)(gen_frame + 0xc)));
      gen_imp_FreeLibrary(pHVar1);
      return (uint)(-1 < (int)uVar4);
    }
    gen_imp_FreeLibrary((*(HMODULE *)(gen_frame + 0xc)));
    gen_imp_FreeLibrary(pHVar1);
    F_00c5181b("ERROR: Could Not Get Primary Adapter Handle\n");
    return 0;
  }
  F_00c5181b("ERROR: \n");
  if (pFVar2 == (FARPROC)0x0) {
    F_00c5181b("\tCould Not Find D3DKMTEscape in gdi32.dll\n");
  }
  if (pFVar3 == (FARPROC)0x0) {
    F_00c5181b("\tCould Not Find D3DKMTOpenAdapterFromHdc in gdi32.dll\n");
  }
  return 0x80004005;
}

/* ref: FUN_00b1b420 */
uint F_00b1b420(void)
{
  GEN_ENTER(0xb1b420u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_00b1afb0();
  if (uVar1 == 1) {
    uVar1 = F_00b1b1d0(&(*(uint *)(gen_frame + 0xc)));
  }
  else {
    uVar1 = F_00b1b120(&(*(uint *)(gen_frame + 0xc)));
  }
  if ((uVar1 == 0) || ((*(uint *)(gen_frame + 0xc)) == 0)) {
    (*(uint *)(gen_frame + 0xc)) = 1;
  }
  return (*(uint *)(gen_frame + 0xc));
}

/* ref: Client::Graphics::DelayedReleaseClassBase::vf4 */
uint F_00b1b460(unsigned int gen_a0)
{
  GEN_ENTER(0xb1b460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  uVar1 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  return uVar1;
}

/* ref: FUN_00b1b490 */
uint F_00b1b490(unsigned int gen_a0)
{
  GEN_ENTER(0xb1b490u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[1] = 1;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x10eff98));
  return (uint)in_ecx;
}

/* ref: Client::Graphics::DelayedReleaseClassBase::vf3 */
unsigned int F_00b1b4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb1b4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pDVar1;
  int iVar2;
  
  pDVar1 = this + 4;
  LOCK();
  iVar2 = *(int *)pDVar1;
  *(int *)pDVar1 = *(int *)pDVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    F_004def50(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x10),this);
  }
  return 0;
}

/* ref: FUN_00b1b4c0 */
unsigned int F_00b1b4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1b4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004def50(*(undefined * PTR32 *)((int)this + 0x10),param_1);
  return 0;
}

/* ref: Client::Graphics::DelayedReleaseClassBase::vf0 */
uint F_00b1b4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1b4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b1b540 */
uint F_00b1b540(void)
{
  GEN_ENTER(0xb1b540u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(uint *)(gen_frame + 0x4)) = F_00b1b7e0(((undefined1 *)(gen_frame + 0x8)));
  if ((*(uint *)(gen_frame + 0x4)) == 0xfffffff2) {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  if ((*(uint *)(gen_frame + 0x4)) == 0) {
    REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
  }
  return (*(uint *)(gen_frame + 0x4));
}

/* ref: FUN_00b1b580 */
unsigned int F_00b1b580(void)
{
  GEN_ENTER(0xb1b580u, 0u, 0u, 0u, 0u);
  if (REFG(char, 0x14c1f44) == '\0') {
    gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14c1ed0));
    REFG(char, 0x14c1f44) = '\x01';
  }
  return 0;
}

/* ref: FUN_00b1b5b0 */
uint F_00b1b5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1b5b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(&REFG(undefined, 0x14c1f04) + param_2 * 8) =
       *((undefined4 *)GEN_TOP((param_1 + *(int *)(param_1 + 0x3c) + 0x58)));
  *(undefined4 *)(&REFG(undefined, 0x14c1f08) + param_2 * 8) = *(undefined4 *)(param_1 + iVar1 + 8);
  return param_2;
}

/* ref: FUN_00b1b600 */
byte F_00b1b600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1b600u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + 4 + *(int *)(param_1 + 0x3c);
  iVar2 = param_1 + 0x18 + *(int *)(param_1 + 0x3c);
  if (*(int *)(iVar2 + 0x40) == 0) {
    if (*(int *)(iVar1 + 4) != *(int *)(&REFG(undefined, 0x14c1f08) + param_2 * 8)) {
      *(undefined4 *)(&REFG(undefined, 0x14c1f04) + param_2 * 8) = *(undefined4 *)(iVar2 + 0x40);
      *(undefined4 *)(&REFG(undefined, 0x14c1f08) + param_2 * 8) = *(undefined4 *)(iVar1 + 4);
      return 1;
    }
  }
  else if (*(int *)(iVar2 + 0x40) != *(int *)(&REFG(undefined, 0x14c1f04) + param_2 * 8)) {
    *(undefined4 *)(&REFG(undefined, 0x14c1f04) + param_2 * 8) = *(undefined4 *)(iVar2 + 0x40);
    *(undefined4 *)(&REFG(undefined, 0x14c1f08) + param_2 * 8) = *(undefined4 *)(iVar1 + 4);
    return 1;
  }
  return 0;
}

/* ref: FUN_00b1b6b0 */
uint F_00b1b6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1b6b0u, gen_a0, gen_a1, 0u, 0u);
  HMODULE param_1 = (HMODULE)gen_a0;
  int param_2 = (int)gen_a1;
  code * pcVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    REFG(undefined4, 0x14c1ef0) = gen_imp_GetProcAddress(param_1,"nvapi_QueryInterface");
    if (REFG(undefined4, 0x14c1ef0) == (FARPROC)0x0) {
      return 0xffffffff;
    }
    pcVar1 = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(&REFG(undefined, 0x150e828))));
    if (pcVar1 == (code *)0x0) {
      REFG(undefined4, 0x14c1ef0) = (FARPROC)0x0;
      return 0xffffffff;
    }
    uVar2 = (*pcVar1)();
    if (uVar2 != 0) {
      REFG(undefined4, 0x14c1ef0) = (FARPROC)0x0;
      return 0xffffffff;
    }
    REFG(undefined4, 0x14c1ef8) = ((code *)REFG(gen_code32, 0x14c1ef0))(0x33c7358c);
    REFG(undefined4, 0x14c1efc) = ((code *)REFG(gen_code32, 0x14c1ef0))(0x593e8644);
    if (((REFG(undefined4, 0x14c1ef8) != 0) && (REFG(undefined4, 0x14c1efc) == 0)) || ((REFG(undefined4, 0x14c1ef8) != 0 && (REFG(undefined4, 0x14c1efc) == 0)))
       ) {
      REFG(undefined4, 0x14c1ef8) = 0;
      REFG(undefined4, 0x14c1efc) = 0;
    }
  }
  else if ((param_2 == 1) &&
          (REFG(undefined4, 0x14c1ef4) = gen_imp_GetProcAddress(param_1,"nvapi_pepQueryInterface"),
          REFG(undefined4, 0x14c1ef4) == (FARPROC)0x0)) {
    gen_imp_FreeLibrary(REFG(undefined4, 0x14c1eec));
    return 0xffffffff;
  }
  *(int *)(&REFG(undefined, 0x14c1f34) + param_2 * 4) = *(int *)(&REFG(undefined, 0x14c1f34) + param_2 * 4) + 1;
  return 0;
}

/* ref: FUN_00b1b7e0 */
uint F_00b1b7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb1b7e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  HMODULE pHVar3;
  uint local_8;
  
  if (REFG(char, 0x14c1f45) == '\0') {
    F_00b1b580();
    local_8 = 0;
    do {
      if (REFG(char, 0x14c1f00) == '\0') {
        REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + 1;
        pHVar3 = gen_imp_GetModuleHandleA("nvapi.dll");
        *param_1 = (int)pHVar3;
        if (*param_1 == 0) {
          gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14c1ed0));
          pHVar3 = gen_imp_GetModuleHandleA("nvapi.dll");
          *param_1 = (int)pHVar3;
          if (*param_1 == 0) {
            pHVar3 = gen_imp_LoadLibraryA("nvapi.dll");
            *param_1 = (int)pHVar3;
            if (*param_1 == 0) {
              REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
              REFG(char, 0x14c1f45) = 1;
              gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14c1ed0));
              return 0xfffffffe;
            }
            uVar2 = F_00b1b6b0(*param_1,0);
            if (uVar2 != 0) {
              REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
              gen_imp_FreeLibrary((HMODULE)*param_1);
              gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14c1ed0));
              return uVar2;
            }
            REFG(int, 0x14c1ee8) = *param_1;
            F_00b1b5b0(*param_1,0);
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14c1ed0));
            return 0xfffffff2;
          }
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14c1ed0));
        }
        bVar1 = F_00b1b600(*param_1,0);
        if (bVar1 == 0) {
          return 0;
        }
        uVar2 = F_00b1b6b0(*param_1,0);
        if (uVar2 != 0) {
          REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
          gen_imp_FreeLibrary((HMODULE)*param_1);
          return uVar2;
        }
        REFG(int, 0x14c1ee8) = *param_1;
        F_00b1b5b0(*param_1,0);
        return 0xfffffff2;
      }
      gen_imp_Sleep(100);
      local_8 = local_8 + 1;
    } while (local_8 < 10);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

/* ref: FUN_00b1b9c0 */
uint F_00b1b9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb1b9c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  HMODULE pHVar1;
  uint uVar2;
  
  F_00b1b580();
  while (REFG(char, 0x14c1f01) != '\0') {
    gen_imp_Sleep(100);
  }
  REFG(int, 0x14c1f28) = REFG(int, 0x14c1f28) + 1;
  pHVar1 = gen_imp_GetModuleHandleA("nvpowerapi.dll");
  *param_1 = (int)pHVar1;
  if (*param_1 == 0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14c1ed0));
    pHVar1 = gen_imp_GetModuleHandleA("nvpowerapi.dll");
    *param_1 = (int)pHVar1;
    if (*param_1 == 0) {
      pHVar1 = gen_imp_LoadLibraryA("nvpowerapi.dll");
      *param_1 = (int)pHVar1;
      if (*param_1 == 0) {
        REFG(int, 0x14c1f28) = REFG(int, 0x14c1f28) + -1;
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14c1ed0));
        return 0xfffffffe;
      }
      uVar2 = F_00b1b6b0(*param_1,1);
      if (uVar2 != 0) {
        REFG(int, 0x14c1f28) = REFG(int, 0x14c1f28) + -1;
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14c1ed0));
        return uVar2;
      }
      REFG(int, 0x14c1eec) = *param_1;
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14c1ed0));
      return 0xfffffff2;
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14c1ed0));
  }
  return 0;
}

/* ref: FUN_00b1bad0 */
uint F_00b1bad0(void)
{
  GEN_ENTER(0xb1bad0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  code * pcVar2;
  
  REFG(undefined1, 0x14c1f00) = 1;
  if ((REFG(undefined4, 0x14c1ee8) == (HMODULE)0x0) || (REFG(undefined4, 0x14c1ef0) == (code *)0x0)) {
    uVar1 = 0xfffffffc;
  }
  else if (REFG(int, 0x14c1f24) == 0) {
    pcVar2 = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd22bdd7e)));
    if (pcVar2 == (code *)0x0) {
      uVar1 = 0xfffffffd;
    }
    else {
      uVar1 = (*pcVar2)();
      if (uVar1 == 0) {
        REFG(undefined4, 0x14c1ef0) = (code *)0x0;
        gen_imp_FreeLibrary(REFG(undefined4, 0x14c1ee8));
        REFG(undefined4, 0x14c1ee8) = (HMODULE)0x0;
        REFG(undefined4, 0x14c1ef8) = 0;
        REFG(undefined4, 0x14c1efc) = 0;
        uVar1 = 0;
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  REFG(undefined1, 0x14c1f00) = 0;
  return uVar1;
}

/* ref: FUN_00b1bba0 */
uint F_00b1bba0(void)
{
  GEN_ENTER(0xb1bba0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(undefined1, 0x14c1f01) = 1;
  if ((REFG(undefined4, 0x14c1eec) == (HMODULE)0x0) || (REFG(int, 0x14c1ef4) == 0)) {
    uVar1 = 0xfffffffc;
  }
  else if (REFG(int, 0x14c1f28) == 0) {
    REFG(int, 0x14c1ef4) = 0;
    gen_imp_FreeLibrary(REFG(undefined4, 0x14c1eec));
    REFG(undefined4, 0x14c1eec) = (HMODULE)0x0;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  REFG(undefined1, 0x14c1f01) = 0;
  return uVar1;
}

/* ref: FUN_00b1bc20 */
uint F_00b1bc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1bc20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1f48) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1f48) != (code *)0x0) && (REFG(int, 0x14c1f4c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1f48) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1f48) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1f48) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6c2d048c)));
      REFG(int, 0x14c1f4c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1f48) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1f48);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6c2d048c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6c2d048c,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1bd80 */
uint F_00b1bd80(unsigned int gen_a0)
{
  GEN_ENTER(0xb1bd80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1f50) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1f50) != (code *)0x0) && (REFG(int, 0x14c1f54) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1f50) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1f50) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1f50) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(REFP(0x01053fa5))));
      REFG(int, 0x14c1f54) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1f50) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1f50);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(REFP(0x01053fa5),&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(REFP(0x01053fa5),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1bed0 */
uint F_00b1bed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1bed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1f58) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1f58) != (code *)0x0) && (REFG(int, 0x14c1f5c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1f58) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1f58) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1f58) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x37d32e69)));
      REFG(int, 0x14c1f5c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1f58) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1f58);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x37d32e69,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x37d32e69,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1c030 */
uint F_00b1c030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1c030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1f60) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1f60) != (code *)0x0) && (REFG(int, 0x14c1f64) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1f60) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1f60) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1f60) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4eca2c10)));
      REFG(int, 0x14c1f64) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1f60) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1f60);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4eca2c10,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4eca2c10,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1c190 */
uint F_00b1c190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1c190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1f68) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1f68) != (code *)0x0) && (REFG(int, 0x14c1f6c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1f68) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1f68) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1f68) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x30c805d5)));
      REFG(int, 0x14c1f6c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1f68) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1f68);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x30c805d5,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x30c805d5,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1c2f0 */
uint F_00b1c2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1c2f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1f70) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1f70) != (code *)0x0) && (REFG(int, 0x14c1f74) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1f70) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1f70) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1f70) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe04f3d86)));
      REFG(int, 0x14c1f74) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1f70) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1f70);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe04f3d86,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe04f3d86,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1c450 */
uint F_00b1c450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1c450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1f78) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1f78) != (code *)0x0) && (REFG(int, 0x14c1f7c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1f78) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1f78) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1f78) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x957d7b6)));
      REFG(int, 0x14c1f7c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1f78) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1f78);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x957d7b6,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x957d7b6,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1c5b0 */
uint F_00b1c5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1c5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1f80) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1f80) != (code *)0x0) && (REFG(int, 0x14c1f84) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1f80) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1f80) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1f80) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6b89e68)));
      REFG(int, 0x14c1f84) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1f80) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1f80);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6b89e68,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6b89e68,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1c710 */
uint F_00b1c710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1c710u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1f88) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1f88) != (code *)0x0) && (REFG(int, 0x14c1f8c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1f88) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1f88) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1f88) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb3bb0772)));
      REFG(int, 0x14c1f8c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1f88) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1f88);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb3bb0772,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb3bb0772,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1c870 */
uint F_00b1c870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1c870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1f90) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1f90) != (code *)0x0) && (REFG(int, 0x14c1f94) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1f90) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1f90) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1f90) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbb9ef1c3)));
      REFG(int, 0x14c1f94) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1f90) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1f90);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbb9ef1c3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbb9ef1c3,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1c9d0 */
uint F_00b1c9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1c9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1f98) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1f98) != (code *)0x0) && (REFG(int, 0x14c1f9c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1f98) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1f98) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1f98) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf951a4d1)));
      REFG(int, 0x14c1f9c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1f98) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1f98);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf951a4d1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf951a4d1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1cb30 */
uint F_00b1cb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1cb30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1fa0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1fa0) != (code *)0x0) && (REFG(int, 0x14c1fa4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1fa0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1fa0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1fa0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2926aaad)));
      REFG(int, 0x14c1fa4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1fa0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1fa0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2926aaad,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2926aaad,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1cc90 */
uint F_00b1cc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1cc90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1fa8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1fa8) != (code *)0x0) && (REFG(int, 0x14c1fac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1fa8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1fa8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1fa8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x774aa982)));
      REFG(int, 0x14c1fac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1fa8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1fa8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x774aa982,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x774aa982,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1cdf0 */
uint F_00b1cdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1cdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1fb0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1fb0) != (code *)0x0) && (REFG(int, 0x14c1fb4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1fb0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1fb0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1fb0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2dc95125)));
      REFG(int, 0x14c1fb4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1fb0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1fb0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2dc95125,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2dc95125,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1cf50 */
uint F_00b1cf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb1cf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1fb8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1fb8) != (code *)0x0) && (REFG(int, 0x14c1fbc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1fb8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1fb8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1fb8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3805ef7a)));
      REFG(int, 0x14c1fbc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1fb8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1fb8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3805ef7a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3805ef7a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1d0b0 */
uint F_00b1d0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb1d0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1fc0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1fc0) != (code *)0x0) && (REFG(int, 0x14c1fc4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1fc0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1fc0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1fc0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x22ed9516)));
      REFG(int, 0x14c1fc4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1fc0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1fc0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x22ed9516,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x22ed9516,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1d210 */
uint F_00b1d210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1d210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1fc8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1fc8) != (code *)0x0) && (REFG(int, 0x14c1fcc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1fc8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1fc8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1fc8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb47a657e)));
      REFG(int, 0x14c1fcc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1fc8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1fc8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb47a657e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb47a657e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

