#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00a8fa40 */
uint F_00a8fa40(unsigned int gen_a0)
{
  GEN_ENTER(0xa8fa40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00928100(this);
  return (uint)this;
}

/* ref: FUN_00a8fa50 */
uint F_00a8fa50(unsigned int gen_a0)
{
  GEN_ENTER(0xa8fa50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00928170(this);
  return (uint)this;
}

/* ref: FUN_00a8fa60 */
uint F_00a8fa60(unsigned int gen_a0)
{
  GEN_ENTER(0xa8fa60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 1) * 2,0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a8faa0 */
uint F_00a8faa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa8faa0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00a8fb00 */
uint F_00a8fb00(unsigned int gen_a0)
{
  GEN_ENTER(0xa8fb00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a8fc50 */
uint F_00a8fc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8fc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0xe1);
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
    cVar1 = *(char *)((int)puVar4 + 0xe1);
  }
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00a8fce0 */
uint F_00a8fce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8fce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a8b750(this,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00a8fd00 */
uint F_00a8fd00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa8fd00u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00a8fd50 */
uint F_00a8fd50(unsigned int gen_a0)
{
  GEN_ENTER(0xa8fd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a8fd90 */
uint F_00a8fd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8fd90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar4 = puVar3;
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        if ((*(char *)((int)puVar3 + 0x15) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if (*(char *)((int)puVar3 + 0x15) == '\0') {
    puVar1 = (undefined4 *)*puVar3;
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  if (*(char *)((int)puVar1 + 0x15) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00a8fe60 */
uint F_00a8fe60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8fe60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a8fe70 */
uint F_00a8fe70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8fe70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00a8fef0 */
uint F_00a8fef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8fef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x29) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x29) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00a8ff30 */
uint F_00a8ff30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8ff30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00a8df70(this,param_1,param_2);
  return param_1;
}

/* ref: FUN_00a8ff50 */
uint F_00a8ff50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8ff50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a8ff70 */
uint F_00a8ff70(unsigned int gen_a0)
{
  GEN_ENTER(0xa8ff70u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0xc,800);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,800);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00a8fff0 */
uint F_00a8fff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8fff0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3 * -0x34;
  return (uint)param_2;
}

/* ref: FUN_00a90010 */
uint F_00a90010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a90020 */
uint F_00a90020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00a90060 */
uint F_00a90060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa90060u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar2 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_00a8f670(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar2 != param_3) {
    param_2 = piVar2;
    if (*(char *)((int)piVar2 + 0x15) == '\0') {
      param_2 = (int *)piVar2[2];
      if (*(char *)((int)param_2 + 0x15) == '\0') {
        cVar1 = *(char *)(*param_2 + 0x15);
        piVar3 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          param_2 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x15);
        piVar4 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar3 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar3 = param_2;
        }
      }
    }
    F_00a8e1c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar2);
    piVar2 = param_2;
  }
  *param_1 = piVar2;
  return (uint)param_1;
}

/* ref: FUN_00a90100 */
uint F_00a90100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90100u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a90160 */
unsigned int F_00a90160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (this != param_1) {
    F_00955670(this);
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)((int)param_1 + 4) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
    *(undefined4 *)((int)param_1 + 8) = uVar1;
  }
  return 0;
}

/* ref: FUN_00a901a0 */
uint F_00a901a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa901a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_00a901c0 */
unsigned int F_00a901c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa901c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_00a8ecb0(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: FUN_00a90200 */
uint F_00a90200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa90200u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar3 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) < (uint)puVar2[3];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) <= (uint)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00a8e920((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00a89070(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00a8e920((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x18,0x191);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a902e0 */
unsigned int F_00a902e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa902e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00a8e790(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00a90300 */
unsigned int F_00a90300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa90300u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
        param_3[1] = *(undefined4 *)(iVar1 + 4 + (int)param_3);
        param_3[2] = *(undefined4 *)(iVar1 + 8 + (int)param_3);
        param_3[3] = *(undefined4 *)(iVar1 + 0xc + (int)param_3);
        param_3[4] = *(undefined4 *)(iVar1 + 0x10 + (int)param_3);
      }
      param_3 = param_3 + 5;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90350 */
unsigned int F_00a90350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90350u, gen_a0, gen_a1, gen_a2, 0u);
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
        param_3[2] = *(undefined4 *)(iVar1 + 8 + (int)param_3);
      }
      param_3 = param_3 + 3;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90390 */
unsigned int F_00a90390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90390u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  for (; param_1 != param_2; param_1 = (undefined *)((int)param_1 + 0x11c)) {
    F_0042c880((undefined *)((int)param_1 + 0xbc));
    F_0042c880((undefined *)((int)param_1 + 0x60));
    F_0042c880(param_1);
  }
  return 0;
}

/* ref: FUN_00a903d0 */
unsigned int F_00a903d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa903d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a90400 */
unsigned int F_00a90400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90400u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a90430 */
unsigned int F_00a90430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90430u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a90460 */
unsigned int F_00a90460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90460u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a90490 */
uint F_00a90490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa90490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined2 * puVar1;
  undefined2 * puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 0x54;
    do {
      F_0042ccf0(param_3,puVar2 + -0x54);
      F_0042ccf0((undefined *)((int)param_3 + 0x54),puVar2 + -0x2a);
      *(undefined2 *)((int)param_3 + 0xa8) = *puVar2;
      *(undefined2 *)((int)param_3 + 0xaa) = puVar2[1];
      *(undefined4 *)((int)param_3 + 0xac) = *(undefined4 *)(puVar2 + 2);
      F_00a8cc10((undefined *)((int)param_3 + 0xb0),puVar2 + 4);
      *(undefined4 *)((int)param_3 + 0x25d4) = *(undefined4 *)(puVar2 + 0x1296);
      *(undefined4 *)((int)param_3 + 0x25d8) = *(undefined4 *)(puVar2 + 0x1298);
      *(undefined4 *)((int)param_3 + 0x25dc) = *(undefined4 *)(puVar2 + 0x129a);
      *(undefined2 *)((int)param_3 + 0x25e0) = puVar2[0x129c];
      *(undefined4 *)((int)param_3 + 0x25e4) = *(undefined4 *)(puVar2 + 0x129e);
      *(undefined4 *)((int)param_3 + 0x25e8) = *(undefined4 *)(puVar2 + 0x12a0);
      *(undefined4 *)((int)param_3 + 0x25ec) = *(undefined4 *)(puVar2 + 0x12a2);
      *(undefined4 *)((int)param_3 + 0x25f0) = *(undefined4 *)(puVar2 + 0x12a4);
      *(undefined4 *)((int)param_3 + 0x25f4) = *(undefined4 *)(puVar2 + 0x12a6);
      *(undefined4 *)((int)param_3 + 0x25f8) = *(undefined4 *)(puVar2 + 0x12a8);
      *(undefined4 *)((int)param_3 + 0x25fc) = *(undefined4 *)(puVar2 + 0x12aa);
      *(undefined4 *)((int)param_3 + 0x2600) = *(undefined4 *)(puVar2 + 0x12ac);
      *(undefined4 *)((int)param_3 + 0x2604) = *(undefined4 *)(puVar2 + 0x12ae);
      *(undefined4 *)((int)param_3 + 0x2608) = *(undefined4 *)(puVar2 + 0x12b0);
      *(undefined4 *)((int)param_3 + 0x260c) = *(undefined4 *)(puVar2 + 0x12b2);
      *(undefined4 *)((int)param_3 + 0x2610) = *(undefined4 *)(puVar2 + 0x12b4);
      *(undefined1 *)((int)param_3 + 0x2614) = *(undefined1 *)(puVar2 + 0x12b6);
      *(undefined1 *)((int)param_3 + 0x2615) = *(undefined1 *)((int)puVar2 + 0x256d);
      *(undefined1 *)((int)param_3 + 0x2616) = *(undefined1 *)(puVar2 + 0x12b7);
      *(undefined1 *)((int)param_3 + 0x2617) = *(undefined1 *)((int)puVar2 + 0x256f);
      *(undefined4 *)((int)param_3 + 0x2618) = *(undefined4 *)(puVar2 + 0x12b8);
      *(undefined4 *)((int)param_3 + 0x261c) = *(undefined4 *)(puVar2 + 0x12ba);
      *(undefined4 *)((int)param_3 + 0x2620) = *(undefined4 *)(puVar2 + 0x12bc);
      puVar1 = puVar2 + 0x12be;
      param_3 = (undefined *)((int)param_3 + 0x2624);
      puVar2 = puVar2 + 0x1312;
    } while (puVar1 != param_2);
    return (uint)param_3;
  }
  return (uint)param_3;
}

/* ref: FUN_00a90640 */
unsigned int F_00a90640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90640u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a90670 */
unsigned int F_00a90670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90670u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a906b0 */
unsigned int F_00a906b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa906b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a906e0 */
unsigned int F_00a906e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa906e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a90710 */
unsigned int F_00a90710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90710u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  for (; param_1 != param_2; param_1 = (undefined *)((int)param_1 + 0x88)) {
    F_0042c880(param_1);
  }
  return 0;
}

/* ref: FUN_00a90740 */
uint F_00a90740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90740u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_00a88c70(param_3,iVar1 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x11c);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00a90780 */
unsigned int F_00a90780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90780u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = (undefined *)(param_1 + 4);
    do {
      F_0042c880((undefined *)((int)this + 0x54));
      F_0042c880(this);
      iVar1 = (int)this + 0x118;
      this = (undefined *)((int)this + 0x11c);
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a907c0 */
unsigned int F_00a907c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa907c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined * pvVar2;
  
  for (; param_1 != param_2; param_1 = (undefined *)((int)param_1 + 0x2624)) {
    iVar1 = 0x17;
    pvVar2 = (undefined *)((int)param_1 + 0x25d8);
    do {
      F_0042c880((undefined *)((int)pvVar2 + -0x134));
      F_0042c880((undefined *)((int)pvVar2 + -0x18c));
      iVar1 = iVar1 + -1;
      pvVar2 = (undefined *)((int)pvVar2 + -0x18c);
    } while (-1 < iVar1);
    F_0042c880((undefined *)((int)param_1 + 0x54));
    F_0042c880(param_1);
  }
  return 0;
}

/* ref: FUN_00a90820 */
unsigned int F_00a90820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90820u, gen_a0, gen_a1, gen_a2, 0u);
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
        for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_3 = param_3 + 0xd;
    } while (iVar2 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90860 */
uint F_00a90860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa90860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a8f250(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00a90890 */
unsigned int F_00a90890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 1);
  }
  return 0;
}

/* ref: FUN_00a908b0 */
uint F_00a908b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa908b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (param_3 != (undefined *)0x0) {
      F_00a88c70(param_3,param_1);
    }
    param_1 = param_1 + 0x11c;
    param_3 = (undefined *)((int)param_3 + 0x11c);
  } while (param_1 != param_2);
  return (uint)param_3;
}

/* ref: FUN_00a908f0 */
unsigned int F_00a908f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa908f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = *(undefined2 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90920 */
unsigned int F_00a90920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90920u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a90950 */
uint F_00a90950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90950u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (param_3 != (undefined *)0x0) {
      F_00a88bf0(param_3,param_1);
    }
    param_1 = param_1 + 0x88;
    param_3 = (undefined *)((int)param_3 + 0x88);
  } while (param_1 != param_2);
  return (uint)param_3;
}

/* ref: FUN_00a90990 */
uint F_00a90990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa90990u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 0x58;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar2 + -0x58);
        F_0042cbc0(param_3 + 1,iVar2 + -0x54);
        F_0042cbc0(param_3 + 0x16,iVar2);
        param_3[0x2b] = *(undefined4 *)(iVar2 + 0x54);
        param_3[0x2c] = *(undefined4 *)(iVar2 + 0x58);
        param_3[0x2d] = *(undefined4 *)(iVar2 + 0x5c);
        puVar3 = (undefined4 *)(iVar2 + 0x60);
        puVar4 = param_3 + 0x2e;
        for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        param_3[0x46] = *(undefined4 *)(iVar2 + 0xc0);
      }
      param_3 = param_3 + 0x47;
      iVar1 = iVar2 + 0xc4;
      iVar2 = iVar2 + 0x11c;
    } while (iVar1 != param_2);
    return (uint)param_3;
  }
  return (uint)param_3;
}

/* ref: FUN_00a90a30 */
unsigned int F_00a90a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = (int)param_1 - (int)param_3;
    do {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = param_3[iVar1];
      }
      param_3 = param_3 + 1;
    } while (param_3 + iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90a60 */
uint F_00a90a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa90a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a8f380(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00a90a90 */
uint F_00a90a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90a90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 - param_1) / 0x11c;
}

/* ref: FUN_00a90ab0 */
uint F_00a90ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90ab0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 - param_1) / 0x11c;
}

/* ref: FUN_00a90ad0 */
unsigned int F_00a90ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = uVar1;
  }
  return 0;
}

/* ref: FUN_00a90af0 */
unsigned int F_00a90af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a8e790(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00a90b10 */
uint F_00a90b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa90b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a8f490(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00a90b40 */
uint F_00a90b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_00a90b90 */
uint F_00a90b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa90b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * this;
  undefined * this_00;
  undefined * pvVar7;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  uVar2 = ((int)param_3 - (int)param_1) / 0x11c;
  uVar1 = (param_2 - (int)param_1) / 0x11c;
  uVar5 = uVar1;
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  while (uVar4 = uVar5, uVar4 != 0) {
    uVar5 = (int)(*(uint *)(gen_frame + 0x8)) % (int)uVar4;
    (*(uint *)(gen_frame + 0x8)) = uVar4;
  }
  if (((int)(*(uint *)(gen_frame + 0x8)) < (int)uVar2) && (0 < (int)(*(uint *)(gen_frame + 0x8)))) {
    pvVar6 = (undefined *)((*(uint *)(gen_frame + 0x8)) * 0x11c + (int)param_1);
    do {
      pvVar7 = (undefined *)((int)pvVar6 + uVar1 * 0x11c);
      this = pvVar6;
      this_00 = param_1;
      if (pvVar7 != param_3) {
        this_00 = pvVar7;
      }
      do {
        F_00a88c70(((undefined1 *)(gen_frame + 0xc)),this);
        F_00a89650(this,this_00);
        F_00a89650(this_00,((undefined1 *)(gen_frame + 0xc)));
        F_0042c880(((undefined1 *)(gen_frame + 0xc8)));
        F_0042c880(((undefined1 *)(gen_frame + 0x6c)));
        F_0042c880(((undefined1 *)(gen_frame + 0xc)));
        iVar3 = ((int)param_3 - (int)this_00) / 0x11c;
        if ((int)uVar1 < iVar3) {
          pvVar7 = (undefined *)((int)this_00 + uVar1 * 0x11c);
        }
        else {
          pvVar7 = ((undefined *)GEN_TOP(((uVar1 - iVar3) * 0x11c + (int)param_1)));
        }
        this = this_00;
        this_00 = pvVar7;
      } while (pvVar7 != pvVar6);
      pvVar6 = (undefined *)((int)pvVar6 + -0x11c);
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) - 1;
    } while (0 < (int)(*(uint *)(gen_frame + 0x8)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_00a90d20 */
uint F_00a90d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa90d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * this;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  uVar2 = ((int)param_3 - (int)param_1) / 0x11c;
  uVar1 = (param_2 - (int)param_1) / 0x11c;
  uVar4 = uVar1;
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  while (uVar3 = uVar4, uVar3 != 0) {
    uVar4 = (int)(*(uint *)(gen_frame + 0x8)) % (int)uVar3;
    (*(uint *)(gen_frame + 0x8)) = uVar3;
  }
  if (((int)(*(uint *)(gen_frame + 0x8)) < (int)uVar2) && (0 < (int)(*(uint *)(gen_frame + 0x8)))) {
    puVar6 = param_1 + (*(uint *)(gen_frame + 0x8)) * 0x47;
    do {
      this = puVar6;
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
      if (puVar6 + uVar1 * 0x47 != param_3) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar6 + uVar1 * 0x47;
      }
      do {
        (*(undefined4 *)(gen_frame + 0xc)) = *this;
        F_0042cbc0(((undefined1 *)(gen_frame + 0x10)),this + 1);
        F_0042cbc0(((undefined1 *)(gen_frame + 0x64)),this + 0x16);
        (*(undefined4 *)(gen_frame + 0xbc)) = this[0x2c];
        (*(undefined4 *)(gen_frame + 0xb8)) = this[0x2b];
        (*(undefined4 *)(gen_frame + 0x124)) = this[0x46];
        (*(undefined4 *)(gen_frame + 0xc0)) = this[0x2d];
        puVar7 = this + 0x2e;
        puVar8 = ((undefined4 *)(gen_frame + 0xc4));
        for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        F_00a896f0(this,(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
        F_00a896f0((*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0xc)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x10)));
        iVar5 = ((int)param_3 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4))) / 0x11c;
        if ((int)uVar1 < iVar5) {
          puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar1 * 0x47;
        }
        else {
          puVar7 = param_1 + (uVar1 - iVar5) * 0x47;
        }
        this = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar7;
      } while (puVar7 != puVar6);
      puVar6 = puVar6 + -0x47;
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) - 1;
    } while (0 < (int)(*(uint *)(gen_frame + 0x8)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_00a90f20 */
unsigned int F_00a90f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90f20u, gen_a0, gen_a1, gen_a2, 0u);
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
        for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_3 = param_3 + 0xd;
    } while (iVar2 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90f60 */
uint F_00a90f60(unsigned int gen_a0)
{
  GEN_ENTER(0xa90f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte bVar2;
  char cVar3;
  int * piVar4;
  byte bVar5;
  byte bVar6;
  int * piVar7;
  int * piVar8;
  int iVar9;
  byte bVar10;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  bVar6 = 0;
  piVar8 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)));
  bVar10 = 0;
  bVar5 = 0;
  if (piVar8 != *(int * PTR32 *)((int)this + 4)) {
    do {
      iVar9 = piVar8[4] * 0x34 + *(int *)(piVar8[3] + 0x5c);
      bVar1 = *(byte *)(iVar9 + 0xc);
      bVar2 = *(byte *)(iVar9 + 0xd);
      if ((bVar10 < bVar1) || ((bVar1 == bVar10 && (bVar10 = bVar5, bVar6 < bVar2)))) {
        *(int *)((int)this + 0x10) = piVar8[3];
        *(int *)((int)this + 0x14) = piVar8[4];
        bVar10 = bVar1;
        bVar5 = bVar1;
        bVar6 = bVar2;
      }
      if (*(char *)((int)piVar8 + 0x15) == '\0') {
        piVar4 = (int *)piVar8[2];
        if (*(char *)((int)piVar4 + 0x15) == '\0') {
          cVar3 = *(char *)(*piVar4 + 0x15);
          piVar8 = piVar4;
          piVar4 = (int *)*piVar4;
          while (cVar3 == '\0') {
            cVar3 = *(char *)(*piVar4 + 0x15);
            piVar8 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar3 = *(char *)(piVar8[1] + 0x15);
          piVar7 = (int *)piVar8[1];
          piVar4 = piVar8;
          while ((piVar8 = piVar7, cVar3 == '\0' && (piVar4 == (int *)piVar8[2]))) {
            cVar3 = *(char *)(piVar8[1] + 0x15);
            piVar7 = (int *)piVar8[1];
            piVar4 = piVar8;
          }
        }
      }
    } while (piVar8 != *(int * PTR32 *)((int)this + 4));
  }
  return (uint)piVar8;
}

/* ref: FUN_00a91010 */
uint F_00a91010(unsigned int gen_a0)
{
  GEN_ENTER(0xa91010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 1) * 2,0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a91050 */
uint F_00a91050(unsigned int gen_a0)
{
  GEN_ENTER(0xa91050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a91090 */
unsigned int F_00a91090(unsigned int gen_a0)
{
  GEN_ENTER(0xa91090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00a910c0 */
uint F_00a910c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa910c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0xe1);
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
    cVar1 = *(char *)((int)puVar4 + 0xe1);
  }
  if ((puVar2 != *(undefined4 * PTR32 *)((int)this + 4)) &&
     (bVar3 = F_0042c7c0(param_2,puVar2 + 3), bVar3 == 0)) {
    *param_1 = puVar2;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00a91150 */
uint F_00a91150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  uint uVar1;
  uint uVar2;
  
  (*(int *)(gen_frame + 0xb0)) = param_2;
  uVar1 = F_00a8b750(this,param_2);
  if (uVar1 != *(uint *)((int)this + 4)) {
    (*(int *)(gen_frame + 0xb0)) = uVar1 + 0xc;
    F_0042cbc0(((undefined1 *)(gen_frame + 0xc0)),uVar1 + 0xc);
    (*(int *)(gen_frame + 0xb0)) = param_2;
    F_0042cbc0(((undefined1 *)(gen_frame + 0x114)),param_2);
    (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = ((undefined1 *)(gen_frame + 0xc0));
    (*(undefined4 *)(gen_frame + 0x58)) = 0xa91198;
    F_0042cbc0((gen_frame + 0x60),((undefined1 *)(gen_frame + 0xc0)));
    F_0042cbc0((gen_frame + 0xc),((undefined1 *)(gen_frame + 0x114)));
    uVar2 = F_00a67e30((*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),
                         (*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),
                         (*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x50)),
                         (*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x60)));
    (*(int *)(gen_frame + 0xb0)) = 0xa911bb;
    F_0042c880(((undefined1 *)(gen_frame + 0x114)));
    (*(int *)(gen_frame + 0xb0)) = 0xa911c6;
    F_0042c880(((undefined1 *)(gen_frame + 0xc0)));
    if ((char)uVar2 == '\0') {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  (*(uint *)(gen_frame + 0x168)) = *(uint *)((int)this + 4);
  *param_1 = *(uint *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00a91200 */
uint F_00a91200(unsigned int gen_a0)
{
  GEN_ENTER(0xa91200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a91240 */
uint F_00a91240(unsigned int gen_a0)
{
  GEN_ENTER(0xa91240u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a91270 */
uint F_00a91270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00a8fd90(this,param_1,param_2);
  return param_1;
}

/* ref: FUN_00a912a0 */
uint F_00a912a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa912a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x29) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x29) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00a91310 */
uint F_00a91310(unsigned int gen_a0)
{
  GEN_ENTER(0xa91310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a8ff70(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a91340 */
uint F_00a91340(unsigned int gen_a0)
{
  GEN_ENTER(0xa91340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((int)this + 0xc);
  iVar2 = 0;
  if (*(int * PTR32 *)this != (int *)0x0) {
    iVar2 = **(int * PTR32 *)this;
  }
  if (*(uint *)(iVar2 + 8) <= uVar1) {
    return *((uint *)GEN_TOP((*(int *)(iVar2 + 4) + (uVar1 - *(uint *)(iVar2 + 8)) * 4)));
  }
  return *((uint *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4)));
}

/* ref: FUN_00a91380 */
uint F_00a91380(unsigned int gen_a0)
{
  GEN_ENTER(0xa91380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a90060(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a913b0 */
unsigned int F_00a913b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa913b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x14) * 0x14,0x191);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00a91410 */
unsigned int F_00a91410(unsigned int gen_a0)
{
  GEN_ENTER(0xa91410u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a91460 */
uint F_00a91460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa91460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar2 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 4) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  if (this != param_1) {
    F_00955670(this);
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)((int)param_1 + 4) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
    *(undefined4 *)((int)param_1 + 8) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00a914d0 */
unsigned int F_00a914d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa914d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00a90300(param_1,param_2,param_3,(int)this + 0xc);
  return 0;
}

/* ref: FUN_00a914f0 */
unsigned int F_00a914f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa914f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a8e790(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00a91510 */
unsigned int F_00a91510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a8e790(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00a91530 */
unsigned int F_00a91530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91530u, gen_a0, gen_a1, gen_a2, 0u);
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
        param_3[2] = *(undefined4 *)(iVar1 + 8 + (int)param_3);
      }
      param_3 = param_3 + 3;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91570 */
unsigned int F_00a91570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa91570u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  for (; param_1 != param_2; param_1 = (undefined *)((int)param_1 + 0x11c)) {
    F_0042c880((undefined *)((int)param_1 + 0xbc));
    F_0042c880((undefined *)((int)param_1 + 0x60));
    F_0042c880(param_1);
  }
  return 0;
}

/* ref: FUN_00a915b0 */
unsigned int F_00a915b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa915b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a915e0 */
unsigned int F_00a915e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa915e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a91610 */
unsigned int F_00a91610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91610u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a91640 */
unsigned int F_00a91640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa91640u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a91670 */
uint F_00a91670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a90490(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00a91690 */
unsigned int F_00a91690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91690u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a916c0 */
unsigned int F_00a916c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa916c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a91700 */
unsigned int F_00a91700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91700u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a91730 */
unsigned int F_00a91730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa91730u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a91760 */
unsigned int F_00a91760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa91760u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  for (; param_1 != param_2; param_1 = (undefined *)((int)param_1 + 0x88)) {
    F_0042c880(param_1);
  }
  return 0;
}

/* ref: FUN_00a91790 */
uint F_00a91790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91790u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_00a88c70(param_3,iVar1 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x11c);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00a917d0 */
unsigned int F_00a917d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa917d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = (undefined *)(param_1 + 4);
    do {
      F_0042c880((undefined *)((int)this + 0x54));
      F_0042c880(this);
      iVar1 = (int)this + 0x118;
      this = (undefined *)((int)this + 0x11c);
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91810 */
unsigned int F_00a91810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_00a907c0(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: FUN_00a91830 */
unsigned int F_00a91830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91830u, gen_a0, gen_a1, gen_a2, 0u);
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
        for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_3 = param_3 + 0xd;
    } while (iVar2 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91870 */
uint F_00a91870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa91870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a8f250(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_00a918a0 */
uint F_00a918a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa918a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,0x191);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 1);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a918f0 */
uint F_00a918f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa918f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_00a88c70(param_3,iVar1 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x11c);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00a91930 */
unsigned int F_00a91930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91930u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = *(undefined2 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91960 */
unsigned int F_00a91960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91960u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a91990 */
uint F_00a91990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91990u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_00a88bf0(param_3,iVar1 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x88);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00a919d0 */
uint F_00a919d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa919d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a90990(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00a91a00 */
unsigned int F_00a91a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = (int)param_1 - (int)param_3;
    do {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = param_3[iVar1];
      }
      param_3 = param_3 + 1;
    } while (param_3 + iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91a30 */
uint F_00a91a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa91a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a8f380(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_00a91a60 */
uint F_00a91a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa91a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar2 = *(undefined4 *)((int)this + 4);
  puVar2[1] = *(undefined4 *)((int)this + 4);
  puVar2[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar2 + 5) = 0;
  uVar1 = param_1[1];
  if (puVar2 + 3 != (undefined4 *)0x0) {
    puVar2[3] = *param_1;
    puVar2[4] = uVar1;
  }
  return (uint)puVar2;
}

/* ref: FUN_00a91ab0 */
uint F_00a91ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91ab0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (param_3 != (undefined *)0x0) {
      F_00a8e790(param_3,param_1);
    }
    param_1 = param_1 + 0x2624;
    param_3 = (undefined *)((int)param_3 + 0x2624);
  } while (param_1 != param_2);
  return (uint)param_3;
}

/* ref: FUN_00a91af0 */
uint F_00a91af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa91af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a8f490(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_00a91b20 */
uint F_00a91b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint * local_8;
  
  local_8 = *(uint * PTR32 *)((int)this + 4);
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    puVar1 = (uint *)F_004296a0(0x18,0,800);
    *puVar1 = *(uint *)((int)this + 4);
    puVar1[1] = *(uint *)((int)this + 4);
    puVar1[2] = *(uint *)((int)this + 4);
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != (uint *)0x0) {
      puVar1[3] = param_1[3];
      puVar1[4] = param_1[4];
    }
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_1 + 5);
    if (*(char *)((int)local_8 + 0x15) != '\0') {
      local_8 = puVar1;
    }
    uVar2 = F_00a91b20(this,(undefined4 *)*param_1,(uint)puVar1);
    *puVar1 = uVar2;
    uVar2 = F_00a91b20(this,(undefined4 *)param_1[2],(uint)puVar1);
    puVar1[2] = uVar2;
  }
  return (uint)local_8;
}

/* ref: FUN_00a91bc0 */
uint F_00a91bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a90b90(param_1,param_2,param_3,0,0);
  return uVar1;
}

/* ref: FUN_00a91be0 */
uint F_00a91be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a90d20(param_1,param_2,param_3,0,0);
  return uVar1;
}

/* ref: FUN_00a91c00 */
unsigned int F_00a91c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91c00u, gen_a0, gen_a1, gen_a2, 0u);
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
        for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_3 = param_3 + 0xd;
    } while (iVar2 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91c50 */
uint F_00a91c50(unsigned int gen_a0)
{
  GEN_ENTER(0xa91c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 1) * 2,0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a91c90 */
uint F_00a91c90(unsigned int gen_a0)
{
  GEN_ENTER(0xa91c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_0042c880((undefined *)((int)this + 100));
  F_0042c880((undefined *)((int)this + 0x10));
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 1) * 2,0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a91cf0 */
uint F_00a91cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xa91cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: Client::Game::UI::ScenarioTextReader::vf0 */
uint F_00a91d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa91d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a71520(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a91d60 */
uint F_00a91d60(unsigned int gen_a0)
{
  GEN_ENTER(0xa91d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a90060(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a91da0 */
unsigned int F_00a91da0(unsigned int gen_a0)
{
  GEN_ENTER(0xa91da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x14) * 0x14,0x191);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00a91df0 */
unsigned int F_00a91df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa91df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x14) < param_1) {
    uVar3 = F_004296a0(param_1 * 0x14,0,0x191);
    F_00a90300(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x14) * 0x14,0x191);
    }
    *(uint *)((int)this + 8) = param_1 * 0x14 + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0x14) * 0x14;
    *(uint *)this = uVar3;
  }
  return 0;
}

/* ref: FUN_00a91ec0 */
unsigned int F_00a91ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xa91ec0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a91f10 */
unsigned int F_00a91f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa91f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0xc) < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,400);
    F_00a91530(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,400);
    }
    *(uint *)((int)this + 8) = param_1 * 0xc + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0xc) * 0xc;
    *(uint *)this = uVar3;
  }
  return 0;
}

/* ref: FUN_00a91fd0 */
uint F_00a91fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa91fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00a8e660(param_3,*(undefined4 *)((int)this + 4),param_2);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a92000 */
unsigned int F_00a92000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa92000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x14;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_00a91df0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00a91df0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00a92090 */
unsigned int F_00a92090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa92090u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  for (; param_1 != param_2; param_1 = (undefined *)((int)param_1 + 0x11c)) {
    F_0042c880((undefined *)((int)param_1 + 0xbc));
    F_0042c880((undefined *)((int)param_1 + 0x60));
    F_0042c880(param_1);
  }
  return 0;
}

/* ref: FUN_00a920d0 */
uint F_00a920d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa920d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00a92090(*(int *)this,*(undefined4 *)((int)this + 4));
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x11c) * 0x11c,800
                        );
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a92130 */
uint F_00a92130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa92130u, gen_a0, gen_a1, 0u, 0u);
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
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,800);
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,800);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00a922a0 */
uint F_00a922a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa922a0u, gen_a0, gen_a1, 0u, 0u);
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
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,800);
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,800);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00a92410 */
uint F_00a92410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa92410u, gen_a0, gen_a1, 0u, 0u);
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
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,800);
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,800);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00a92590 */
unsigned int F_00a92590(unsigned int gen_a0)
{
  GEN_ENTER(0xa92590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x34) * 0x34,800);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00a925e0 */
uint F_00a925e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa925e0u, gen_a0, gen_a1, 0u, 0u);
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
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,800);
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,800);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00a92750 */
uint F_00a92750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa92750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 3) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2[2] = param_3[2];
      puVar2 = puVar2 + 3;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a927a0 */
unsigned int F_00a927a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa927a0u, gen_a0, gen_a1, 0u, 0u);
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
      F_00a91f10(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00a91f10(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00a92820 */
unsigned int F_00a92820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa92820u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  for (; param_1 != param_2; param_1 = (undefined *)((int)param_1 + 0x88)) {
    F_0042c880(param_1);
  }
  return 0;
}

/* ref: FUN_00a92850 */
uint F_00a92850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa92850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x11c;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x11c,0,800);
    F_00a91790(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00a92090(*(int *)this,*(undefined4 *)((int)this + 4));
      F_00429760(*(undefined4 *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x11c) * 0x11c,
                   800);
    }
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0x11c) * 0x11c + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x11c + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a92930 */
unsigned int F_00a92930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa92930u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = (undefined *)(param_1 + 4);
    do {
      F_0042c880((undefined *)((int)this + 0x54));
      F_0042c880(this);
      iVar1 = (int)this + 0x118;
      this = (undefined *)((int)this + 0x11c);
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a92970 */
unsigned int F_00a92970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00a907c0(param_1,param_2,(int)this + 0xc,param_2);
  return 0;
}

/* ref: FUN_00a92990 */
uint F_00a92990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa92990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  puVar3 = ((undefined4 *)GEN_TOP(((*(int *)((int)this + 8) - *(int *)this) / 0x34)));
  if (puVar3 < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 0x34,0,800);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar1; puVar4 = puVar4 + 0xd) {
      if (puVar6 != (undefined4 *)0x0) {
        puVar7 = puVar4;
        puVar8 = puVar6;
        for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar6 = puVar6 + 0xd;
    }
    iVar5 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar5 != 0) {
      F_00429760(iVar5,((*(int *)((int)this + 8) - iVar5) / 0x34) * 0x34,800);
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + ((iVar2 - iVar5) / 0x34) * 0xd;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar3 + (int)((int)(uintptr_t)param_1) * 0xd;
    *(undefined4 * PTR32 *)this = puVar3;
  }
  return (uint)puVar3;
}

/* ref: FUN_00a92a70 */
uint F_00a92a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa92a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar2 = (param_1[1] - *param_1) / 0x11c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar2 != 0) {
    iVar2 = iVar2 * 0x11c;
    uVar1 = F_004296a0(iVar2,0,800);
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 8) = iVar2 + uVar1;
    uVar1 = F_00a8f250(*param_1,param_1[1],uVar1,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00a92b00 */
uint F_00a92b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,0x191);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_2 + 1);
  }
  F_00a90200(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a92b60 */
uint F_00a92b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92b60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_00a88c70(param_3,iVar1 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x11c);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00a92ba0 */
unsigned int F_00a92ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92ba0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = *(undefined2 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00a92bd0 */
unsigned int F_00a92bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92bd0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a92c00 */
uint F_00a92c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92c00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_00a88bf0(param_3,iVar1 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x88);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00a92c40 */
uint F_00a92c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa92c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a90990(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00a92c70 */
unsigned int F_00a92c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = (int)param_1 - (int)param_3;
    do {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = param_3[iVar1];
      }
      param_3 = param_3 + 1;
    } while (param_3 + iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a92ca0 */
uint F_00a92ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92ca0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar3 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar3 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  *(undefined2 *)(puVar3 + 5) = 0;
  uVar2 = (*(uint * PTR32 *)&gen_args[2])[1];
  puVar1 = puVar3 + 3;
  if (puVar1 != (uint *)0x0) {
    *puVar1 = *(*(uint * PTR32 *)&gen_args[2]);
    puVar3[4] = uVar2;
  }
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(uint * PTR32 *)&gen_args[2]) = ((uint *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(uint * PTR32 *)&gen_args[2]), 1, 3),1)));
  if (*(char *)((int)puVar5[1] + 0x15) == '\0') {
    puVar4 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar4;
      (*(uint * PTR32 *)&gen_args[2]) = ((uint *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(uint * PTR32 *)&gen_args[2]), 1, 3),*puVar1 < (uint)puVar5[3])));
      if (*puVar1 < (uint)puVar5[3]) {
        puVar4 = (undefined4 *)*puVar5;
      }
      else {
        puVar4 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar4 + 0x15) == '\0');
  }
  puVar3 = (undefined4 *)F_0094eb30((*(undefined * PTR32 *)&gen_args[0]),&(*(uint * PTR32 *)&gen_args[2]),(*(uint * PTR32 *)&gen_args[2]),puVar5,puVar3);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a92d40 */
uint F_00a92d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92d40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_00a8e790(param_3,iVar1 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x2624);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00a92d80 */
uint F_00a92d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa92d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  if ((param_2 != param_3) && (param_3 != param_4)) {
    F_00a90b90(param_2,param_3,param_4,0,0);
    param_2 = param_2 + ((param_4 - param_3) / 0x11c) * 0x11c;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a92dd0 */
uint F_00a92dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa92dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  if ((param_2 != param_3) && (param_3 != param_4)) {
    F_00a90d20(param_2,param_3,param_4,0,0);
    param_2 = param_2 + ((param_4 - param_3) / 0x11c) * 0x11c;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a92e20 */
uint F_00a92e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa92e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar3 = (param_1[1] - *param_1) / 0x34;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar3 != 0) {
    puVar2 = (undefined4 *)F_004296a0(iVar3 * 0x34,0,800);
    *(undefined4 * PTR32 *)this = puVar2;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar2 + iVar3 * 0xd;
    puVar1 = (undefined4 *)param_1[1];
    for (puVar4 = (undefined4 *)*param_1; puVar4 != puVar1; puVar4 = puVar4 + 0xd) {
      if (puVar2 != (undefined4 *)0x0) {
        puVar5 = puVar4;
        puVar6 = puVar2;
        for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      puVar2 = puVar2 + 0xd;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  return (uint)this;
}

/* ref: FUN_00a92ec0 */
unsigned int F_00a92ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa92ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  
  iVar2 = *(int *)((int)this + 4);
  uVar7 = F_00a91b20(this,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4))),iVar2);
  *(uint *)(iVar2 + 4) = uVar7;
  piVar3 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x15) != '\0') {
    *piVar3 = (int)piVar3;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    return 0;
  }
  cVar1 = *(char *)(*piVar4 + 0x15);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0x15);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0x15);
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*(int *)(iVar5 + 8) + 0x15)));
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = iVar2;
  return 0;
}

/* ref: FUN_00a92f40 */
uint F_00a92f40(unsigned int gen_a0)
{
  GEN_ENTER(0xa92f40u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 4);
  F_0042b630(in_ecx + 0x19);
  in_ecx[0x2e] = 0;
  in_ecx[0x2f] = 0;
  *(undefined2 *)(in_ecx + 0x30) = 0;
  *(undefined1 *)((int)in_ecx + 0xc2) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00a92f80 */
uint F_00a92f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa92f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined * pvVar4;
  
  if ((param_1 & 2) == 0) {
    F_0042c880((undefined *)((int)this + 100));
    F_0042c880((undefined *)((int)this + 0x10));
    iVar3 = *(int *)this;
    if (iVar3 != 0) {
      F_00429760(iVar3,(*(int *)((int)this + 8) - iVar3 >> 1) * 2,0);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
    return (uint)this;
  }
  piVar1 = (int *)((int)this + -4);
  iVar3 = *piVar1 + -1;
  if (-1 < iVar3) {
    pvVar4 = (undefined *)(*piVar1 * 0xc4 + 0x10 + (int)this);
    do {
      F_0042c880((undefined *)((int)pvVar4 + -0x70));
      F_0042c880((undefined *)((int)pvVar4 + -0xc4));
      iVar2 = *(int *)((int)pvVar4 + -0xd4);
      if (iVar2 != 0) {
        F_00429760(iVar2,(*(int *)((int)pvVar4 + -0xcc) - iVar2 >> 1) * 2,0);
      }
      iVar3 = iVar3 + -1;
      *(undefined4 *)((int)pvVar4 + -0xd4) = 0;
      *(undefined4 *)((int)pvVar4 + -0xd0) = 0;
      *(undefined4 *)((int)pvVar4 + -0xcc) = 0;
      pvVar4 = (undefined *)((int)pvVar4 + -0xc4);
    } while (-1 < iVar3);
  }
  if ((param_1 & 1) != 0) {
    F_00406b30(piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_00a93070 */
unsigned int F_00a93070(unsigned int gen_a0)
{
  GEN_ENTER(0xa93070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x14) * 0x14,0x191);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00a930d0 */
unsigned int F_00a930d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa930d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a93120 */
uint F_00a93120(unsigned int gen_a0)
{
  GEN_ENTER(0xa93120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a90060(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a93160 */
uint F_00a93160(unsigned int gen_a0)
{
  GEN_ENTER(0xa93160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = F_0042c880((undefined *)((int)this + 0x10));
  uVar2 = (uint)uVar3;
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x14) * 0x14,0x191);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a93200 */
unsigned int F_00a93200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa93200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00a92000(this,1);
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
      F_00a92000(this,1);
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

/* ref: FUN_00a932b0 */
uint F_00a932b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa932b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this != uVar1) {
    uVar1 = F_00a8e660(uVar1,uVar1,*(uint *)this);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a932e0 */
unsigned int F_00a932e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa932e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x34) * 0x34,800);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00a93330 */
uint F_00a93330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa93330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar2 = param_2;
  puVar3 = param_2;
  while (puVar3 = puVar3 + 0xd, puVar3 != puVar1) {
    puVar5 = puVar2 + 0xd;
    puVar6 = puVar3;
    puVar7 = puVar2;
    for (iVar4 = 0xd; puVar2 = puVar5, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -0x34;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a93380 */
uint F_00a93380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa93380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00a925e0(this,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) == 0) {
    uVar2 = F_004296a0(0xc,0,800);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) = uVar2;
  }
  uVar2 = *(uint *)((int)this + 4);
  puVar1 = *(undefined4 * PTR32 *)(uVar2 + uVar3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    uVar2 = param_1[2];
    puVar1[2] = uVar2;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar2;
}

/* ref: FUN_00a933f0 */
unsigned int F_00a933f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa933f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00a927a0(this,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar2) / 0xc) * 0xc)));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00a927a0(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
  return 0;
}

/* ref: FUN_00a934c0 */
uint F_00a934c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa934c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x88)) {
      F_0042c880(this_00);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x88) * 0x88,0x191);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00a93520 */
uint F_00a93520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa93520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00a8c970(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    F_00a92090(uVar1,*(undefined4 *)((int)this + 4));
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a93570 */
uint F_00a93570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa93570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x11c;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x11c;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a92850(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a92850(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a93600 */
uint F_00a93600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa93600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  if (param_2 != param_3) {
    uVar3 = F_00a8ca30(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    uVar2 = *(uint *)((int)this + 4);
    if (uVar3 != uVar2) {
      this_00 = (undefined *)(uVar3 + 4);
      do {
        F_0042c880((undefined *)((int)this_00 + 0x54));
        F_0042c880(this_00);
        uVar1 = (int)this_00 + 0x118;
        this_00 = (undefined *)((int)this_00 + 0x11c);
      } while (uVar1 != uVar2);
    }
    *(uint *)((int)this + 4) = uVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a93680 */
uint F_00a93680(unsigned int gen_a0)
{
  GEN_ENTER(0xa93680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    iVar1 = *(int *)((int)this + 4);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x11c) {
      F_0042c880((undefined *)(iVar2 + 0x58));
      F_0042c880((undefined *)(iVar2 + 4));
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x11c) * 0x11c,800);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00a936f0 */
uint F_00a936f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa936f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00a90490(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    F_00a907c0(uVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a93740 */
uint F_00a93740(unsigned int gen_a0)
{
  GEN_ENTER(0xa93740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00a907c0(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x2624) * 0x2624,
                         800);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a937b0 */
uint F_00a937b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa937b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar3 = param_3 + 0xd;
      puVar5 = puVar2 + 0xd;
      puVar6 = param_3;
      puVar7 = puVar2;
      for (iVar4 = 0xd; puVar2 = puVar5, param_3 = puVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a93800 */
uint F_00a93800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa93800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x34;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x34;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a92990(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a92990(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a93890 */
uint F_00a93890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa93890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * puVar1;
  int iVar2;
  int iVar3;
  undefined2 * puVar4;
  undefined2 * puVar5;
  undefined2 * puVar6;
  
  if (((undefined2 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 1))) < param_1) {
    puVar4 = (undefined2 *)F_004296a0((int)((int)(uintptr_t)param_1) * 2,0,0);
    puVar1 = *(undefined2 * PTR32 *)((int)this + 4);
    puVar6 = puVar4;
    for (puVar5 = *(undefined2 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      F_00429760(iVar2,(*(int *)((int)this + 8) - iVar2 >> 1) * 2,0);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined2 * PTR32 *)this = puVar4;
    *(undefined2 * PTR32 *)((int)this + 8) = param_1;
    *(undefined2 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a93930 */
uint F_00a93930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa93930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar4 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,800);
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
      F_00429760(iVar2,(*(int *)((int)this + 8) - iVar2 >> 2) * 4,800);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = param_1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return (uint)param_1;
}

/* ref: FUN_00a939e0 */
uint F_00a939e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa939e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x88;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x88,0,0x191);
    F_00a92c00(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != (undefined *)0x0) {
      for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x88)) {
        F_0042c880(this_00);
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x88) * 0x88,0x191);
    }
    *(uint *)((int)this + 4) = (((int)pvVar1 - iVar2) / 0x88) * 0x88 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x88 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a93ae0 */
uint F_00a93ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa93ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x11c;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x11c,0,800);
    F_00a90990(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00a92930(*(int *)this,*(undefined4 *)((int)this + 4));
      F_00429760(*(undefined4 *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x11c) * 0x11c,
                   800);
    }
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0x11c) * 0x11c + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x11c + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a93bc0 */
uint F_00a93bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa93bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  int iVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  
  if (((undefined1 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)this))) < param_1) {
    puVar4 = (undefined1 *)F_004296a0(param_1,0,800);
    puVar1 = *(undefined1 * PTR32 *)((int)this + 4);
    puVar6 = puVar4;
    for (puVar5 = *(undefined1 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      F_00429760(iVar2,*(int *)((int)this + 8) - iVar2,800);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined1 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2);
    *(undefined1 * PTR32 *)this = puVar4;
    *(undefined1 * PTR32 *)((int)this + 8) = param_1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a93c50 */
uint F_00a93c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa93c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  F_0042cbc0((undefined *)((int)this + 8),param_1 + 2);
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  F_00a92a70((undefined *)((int)this + 0x60),param_1 + 0x18);
  F_00a92a70((undefined *)((int)this + 0x70),param_1 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a93ca0 */
uint F_00a93ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa93ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00a91460(this,param_1);
  return (uint)this;
}

/* ref: FUN_00a93cc0 */
uint F_00a93cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa93cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00a92ca0(this,((undefined1 *)(gen_frame + 0x4)),param_2);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00a93ce0 */
uint F_00a93ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa93ce0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_00a8e790(param_3,iVar1 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x2624);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00a93d20 */
uint F_00a93d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa93d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar2 = (param_1[1] - *param_1) / 0x11c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar2 != 0) {
    iVar2 = iVar2 * 0x11c;
    uVar1 = F_004296a0(iVar2,0,800);
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 8) = iVar2 + uVar1;
    uVar1 = F_00a8f380(*param_1,param_1[1],uVar1,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00a93db0 */
uint F_00a93db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa93db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar2 = (param_1[1] - *param_1) / 0x88;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar2 != 0) {
    iVar2 = iVar2 * 0x88;
    uVar1 = F_004296a0(iVar2,0,0x191);
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 8) = iVar2 + uVar1;
    uVar1 = F_00a8f490(*param_1,param_1[1],uVar1,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00a93e40 */
uint F_00a93e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa93e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 == *(uint *)((int)this + 8)) {
    uVar1 = F_00a93570(this,1);
  }
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    uVar1 = F_00a88c70(*(undefined * PTR32 *)((int)this + 4),param_1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
  return uVar1;
}

/* ref: FUN_00a93e80 */
uint F_00a93e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa93e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  F_0042cbc0((undefined *)((int)this + 8),param_1 + 2);
  F_00a92e20((undefined *)((int)this + 0x5c),param_1 + 0x17);
  *(undefined1 *)((int)this + 0x6c) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined1 *)((int)this + 0x6d) = *(undefined1 *)((int)param_1 + 0x6d);
  return (uint)this;
}

/* ref: FUN_00a93ec0 */
uint F_00a93ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa93ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  F_00a92ec0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00a93f10 */
unsigned int F_00a93f10(unsigned int gen_a0)
{
  GEN_ENTER(0xa93f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00a92f80(*(undefined * PTR32 *)this,3);
    *(undefined4 *)this = 0;
  }
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 6) = 0;
  return 0;
}

/* ref: FUN_00a93f40 */
uint F_00a93f40(unsigned int gen_a0)
{
  GEN_ENTER(0xa93f40u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 4);
  return (uint)in_ecx;
}

/* ref: FUN_00a93f60 */
uint F_00a93f60(unsigned int gen_a0)
{
  GEN_ENTER(0xa93f60u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  F_0042b630(in_ecx + 2);
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  *(undefined2 *)(in_ecx + 0x1b) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00a93f90 */
uint F_00a93f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa93f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  F_0042cc20((undefined *)((int)this + 8),param_1,REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x6c) = 0;
  return (uint)this;
}

/* ref: FUN_00a93fd0 */
uint F_00a93fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa93fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)((int)this + 0x5c);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 100) - iVar1) / 0x34) * 0x34,800);
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  uVar2 = F_0042c880((undefined *)((int)this + 8));
  return (uint)uVar2;
}

/* ref: FUN_00a94030 */
uint F_00a94030(unsigned int gen_a0)
{
  GEN_ENTER(0xa94030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a920d0((undefined *)((int)this + 0x70));
  F_00a920d0((undefined *)((int)this + 0x60));
  uVar1 = F_0042c880((undefined *)((int)this + 8));
  return (uint)uVar1;
}

/* ref: FUN_00a94050 */
uint F_00a94050(unsigned int gen_a0)
{
  GEN_ENTER(0xa94050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a920d0((undefined *)((int)this + 0xc4));
  F_00a920d0((undefined *)((int)this + 0xb4));
  F_0042c880((undefined *)((int)this + 0x5c));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00a94080 */
uint F_00a94080(unsigned int gen_a0)
{
  GEN_ENTER(0xa94080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a940c0 */
uint F_00a940c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa940c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x18,800);
  return (uint)uVar1;
}

/* ref: Client::Game::UI::Telepo::vf0 */
uint F_00a94100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa94100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a72750(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a94140 */
uint F_00a94140(unsigned int gen_a0)
{
  GEN_ENTER(0xa94140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_0074d820(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a94160 */
unsigned int F_00a94160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa94160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a93570(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a88c70(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x11c) * 0x11c + *(int *)this
                  );
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a93570(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a88c70(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
  return 0;
}

/* ref: FUN_00a941f0 */
unsigned int F_00a941f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa941f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)this != iVar1) {
    uVar2 = F_00a8c970(iVar1,iVar1,*(int *)this,this);
    F_00a92090(uVar2,*(undefined4 *)((int)this + 4));
    *(uint *)((int)this + 4) = uVar2;
  }
  return 0;
}

/* ref: FUN_00a94240 */
uint F_00a94240(unsigned int gen_a0)
{
  GEN_ENTER(0xa94240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a93600(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a94270 */
unsigned int F_00a94270(unsigned int gen_a0)
{
  GEN_ENTER(0xa94270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)this != iVar1) {
    uVar2 = F_00a90490(iVar1,iVar1,*(int *)this,this);
    F_00a907c0(uVar2,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    *(uint *)((int)this + 4) = uVar2;
  }
  return 0;
}

/* ref: FUN_00a942b0 */
uint F_00a942b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa942b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * in_EAX;
  int iVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar2) && (in_EAX = *(undefined4 * PTR32 *)this, in_EAX <= param_1)) {
    iVar1 = (int)param_1 - (int)in_EAX;
    in_EAX = (undefined4 *)(iVar1 * 0x4ec4ec4f);
    if (puVar2 == *(undefined4 * PTR32 *)((int)this + 8)) {
      in_EAX = (undefined4 *)F_00a93800(this,1);
    }
    param_1 = ((undefined4 *)GEN_TOP(((iVar1 / 0x34) * 0x34 + *(int *)this)));
  }
  else if (puVar2 == *(undefined4 * PTR32 *)((int)this + 8)) {
    in_EAX = (undefined4 *)F_00a93800(this,1);
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x34;
  return (uint)in_EAX;
}

/* ref: FUN_00a94320 */
unsigned int F_00a94320(unsigned int gen_a0)
{
  GEN_ENTER(0xa94320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = *(int *)this;
  }
  return 0;
}

/* ref: FUN_00a94370 */
uint F_00a94370(unsigned int gen_a0)
{
  GEN_ENTER(0xa94370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a920d0((undefined *)((int)this + 0xc4));
  F_00a920d0((undefined *)((int)this + 0xb4));
  F_0042c880((undefined *)((int)this + 0x5c));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00a943a0 */
uint F_00a943a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa943a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a93680((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00a943c0 */
uint F_00a943c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa943c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a94400 */
uint F_00a94400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa94400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 1;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 1;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00a93890(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00a93890(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00a94470 */
uint F_00a94470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa94470u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00a93930(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00a93930(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00a944e0 */
unsigned int F_00a944e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa944e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x88;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x88;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_00a939e0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00a939e0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00a94570 */
uint F_00a94570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa94570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x11c;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x11c;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a93ae0(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a93ae0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a94600 */
uint F_00a94600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa94600u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00a93bc0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00a93bc0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00a94660 */
uint F_00a94660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa94660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  *(undefined4 *)((int)this + 0x58) = param_2[1];
  F_0042cbc0((undefined *)((int)this + 0x5c),param_2 + 2);
  *(undefined4 *)((int)this + 0xb0) = param_2[0x17];
  F_00a92a70((undefined *)((int)this + 0xb4),param_2 + 0x18);
  F_00a92a70((undefined *)((int)this + 0xc4),param_2 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a946c0 */
uint F_00a946c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa946c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x2624;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x2624,0,800);
    F_00a93ce0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00a907c0(iVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,uVar3);
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x2624) * 0x2624,800);
    }
    *(uint *)((int)this + 4) = ((iVar2 - iVar1) / 0x2624) * 0x2624 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x2624 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a947a0 */
uint F_00a947a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa947a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = *param_1;
  F_00a91460((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_00a947c0 */
unsigned int F_00a947c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa947c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a94570(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a88d10(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x11c) * 0x11c + *(int *)this
                  );
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a94570(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a88d10(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
  return 0;
}

/* ref: FUN_00a94850 */
uint F_00a94850(unsigned int gen_a0)
{
  GEN_ENTER(0xa94850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)((int)this + 100);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0x6c) - iVar1) / 0x34) * 0x34,800);
  }
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  uVar2 = F_0042c880((undefined *)((int)this + 0x10));
  return (uint)uVar2;
}

/* ref: FUN_00a948b0 */
uint F_00a948b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa948b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a948f0 */
uint F_00a948f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa948f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  *(undefined4 *)((int)this + 0x58) = param_2[1];
  F_0042cbc0((undefined *)((int)this + 0x5c),param_2 + 2);
  *(undefined4 *)((int)this + 0xb0) = param_2[0x17];
  F_00a92a70((undefined *)((int)this + 0xb4),param_2 + 0x18);
  F_00a92a70((undefined *)((int)this + 0xc4),param_2 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a94950 */
uint F_00a94950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa94950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)this;
  if (*(int *)((int)this + 4) == *(int *)((int)this + 8)) {
    F_00a93570(this,1);
  }
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00a88c70(*(undefined * PTR32 *)((int)this + 4),param_3);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
  iVar4 = ((param_2 - iVar1) / 0x11c) * 0x11c;
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + -0x11c;
  iVar3 = *(int *)this + iVar4;
  if ((iVar3 != iVar1) && (iVar1 != iVar2)) {
    F_00a90b90(iVar3,iVar1,iVar2,0,0);
  }
  *param_1 = *(int *)this + iVar4;
  return (uint)param_1;
}

/* ref: FUN_00a949d0 */
uint F_00a949d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa949d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  F_00a93db0((undefined *)((int)this + 4),param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00a94a00 */
uint F_00a94a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa94a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 == *(uint *)((int)this + 8)) {
    uVar1 = F_00a94570(this,1);
  }
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    uVar1 = F_00a88d10(*(undefined * PTR32 *)((int)this + 4),param_1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
  return uVar1;
}

/* ref: FUN_00a94a40 */
uint F_00a94a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa94a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  F_00a92ec0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00a94a90 */
unsigned int F_00a94a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa94a90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    F_0042cbc0(param_1 + 2,param_2 + 2);
    F_00a92e20(param_1 + 0x17,param_2 + 0x17);
    *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
    *(undefined1 *)((int)param_1 + 0x6d) = *(undefined1 *)((int)param_2 + 0x6d);
  }
  return 0;
}

/* ref: FUN_00a94ae0 */
uint F_00a94ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa94ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  F_0042cbc0((undefined *)((int)this + 0x5c),param_1 + 0x5c);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  F_00a92a70((undefined *)((int)this + 0xb4),param_1 + 0xb4);
  F_00a92a70((undefined *)((int)this + 0xc4),param_1 + 0xc4);
  return (uint)this;
}

/* ref: FUN_00a94b40 */
uint F_00a94b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa94b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  F_00a93d20((undefined *)((int)this + 0x54),param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00a94b70 */
uint F_00a94b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa94b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x15))) = 1;
  F_00a92ec0((undefined *)((int)this + 4),param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00a94bd0 */
uint F_00a94bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa94bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  *(undefined4 *)((int)this + 0x58) = param_2[1];
  F_0042cbc0((undefined *)((int)this + 0x5c),param_2 + 2);
  *(undefined4 *)((int)this + 0xb0) = param_2[0x17];
  F_00a92a70((undefined *)((int)this + 0xb4),param_2 + 0x18);
  F_00a92a70((undefined *)((int)this + 0xc4),param_2 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a94c50 */
uint F_00a94c50(unsigned int gen_a0)
{
  GEN_ENTER(0xa94c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * pvVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0042e430((undefined *)((int)this + 4),&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)((int)this + 0x58),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0xac) = 0;
  F_0042e430((undefined *)((int)this + 0xb0),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined2 *)((int)this + 0x114) = 0;
  F_0074d820((undefined4 *)((int)this + 0x118),&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x118),
               *(undefined4 *)((int)this + 0x11c));
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined2 *)((int)this + 300) = 0;
  *(undefined1 *)((int)this + 0x12e) = 0;
  *(undefined2 *)((int)this + 0x2d0) = 0;
  *(undefined1 *)((int)this + 0x2d2) = 0;
  *(undefined4 *)((int)this + 0x130) = 0xefe4;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  F_0042e430((undefined *)((int)this + 0x144),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  F_0042e430((undefined *)((int)this + 0x1a4),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  F_0042e430((undefined *)((int)this + 0x200),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x254) = 0;
  F_0042e430((undefined *)((int)this + 600),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined1 *)((int)this + 0x13c) = 1;
  *(undefined1 *)((int)this + 700) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined1 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  pvVar2 = (undefined *)((int)this + 0x2d8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x5;
  do {
    *(undefined4 *)((int)pvVar2 + -4) = 0;
    *(undefined4 *)((int)pvVar2 + 0x54) = 0;
    F_0042e430(pvVar2,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)pvVar2 + 0x58) = 0;
    *(undefined4 *)((int)pvVar2 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar2 + 0x60) = 0;
    *(undefined1 *)((int)pvVar2 + 100) = 0;
    pvVar2 = (undefined *)((int)pvVar2 + 0x6c);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
  } while ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0);
  pvVar2 = (undefined *)((int)this + 0x4f4);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x5;
  do {
    *(undefined4 *)((int)pvVar2 + -4) = 0;
    *(undefined4 *)((int)pvVar2 + 0x54) = 0;
    F_0042e430(pvVar2,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)pvVar2 + 0x58) = 0;
    *(undefined4 *)((int)pvVar2 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar2 + 0x60) = 0;
    *(undefined1 *)((int)pvVar2 + 100) = 0;
    pvVar2 = (undefined *)((int)pvVar2 + 0x6c);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
  } while ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0);
  pvVar2 = (undefined *)((int)this + 0x710);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x4;
  do {
    *(undefined4 *)((int)pvVar2 + -4) = 0;
    *(undefined4 *)((int)pvVar2 + 0x54) = 0;
    F_0042e430(pvVar2,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)pvVar2 + 0x58) = 0;
    *(undefined4 *)((int)pvVar2 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar2 + 0x60) = 0;
    *(undefined1 *)((int)pvVar2 + 100) = 0;
    pvVar2 = (undefined *)((int)pvVar2 + 0x6c);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
  } while ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0);
  *(undefined4 *)((int)this + 0x8c8) = 0;
  *(undefined2 *)((int)this + 0x9ac) = 0;
  *(undefined4 *)((int)this + 0x8bc) = 0;
  *(undefined4 *)((int)this + 0x8c0) = 0;
  *(undefined4 *)((int)this + 0x8c4) = 0;
  *(undefined2 *)((int)this + 0x8cc) = 0;
  *(undefined1 *)((int)this + 0x8ce) = 0;
  *(undefined4 *)((int)this + 0x9b0) = 0;
  F_0042e430((undefined *)((int)this + 0x9b4),&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)((int)this + 0xa08),&REFG(undefined1, 0x107fc63));
  uVar1 = F_0042e430((undefined *)((int)this + 0xa5c),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0xab0) = 0;
  *(undefined4 *)((int)this + 0x8d0) = 0;
  *(undefined4 *)((int)this + 0x8d4) = 0;
  *(undefined4 *)((int)this + 0x8d8) = 0;
  *(undefined4 *)((int)this + 0x8dc) = 0;
  *(undefined1 *)((int)this + 0x8e8) = 0;
  *(undefined4 *)((int)this + 0x8ec) = 0;
  *(undefined4 *)((int)this + 0x8e4) = 0;
  return uVar1;
}

/* ref: FUN_00a94ee0 */
unsigned int F_00a94ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xa94ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  iVar1 = *(int *)((int)this + 100);
  if (*(int *)((int)this + 0x60) != iVar1) {
    uVar2 = F_00a8c970(iVar1,iVar1,*(int *)((int)this + 0x60),this);
    F_00a92090(uVar2,*(undefined4 *)((int)this + 100));
    *(uint *)((int)this + 100) = uVar2;
  }
  return 0;
}

/* ref: FUN_00a94f20 */
unsigned int F_00a94f20(unsigned int gen_a0)
{
  GEN_ENTER(0xa94f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  iVar1 = *(int *)((int)this + 0x74);
  if (*(int *)((int)this + 0x70) != iVar1) {
    uVar2 = F_00a8c970(iVar1,iVar1,*(int *)((int)this + 0x70),this);
    F_00a92090(uVar2,*(undefined4 *)((int)this + 0x74));
    *(uint *)((int)this + 0x74) = uVar2;
  }
  return 0;
}

/* ref: FUN_00a94f60 */
uint F_00a94f60(unsigned int gen_a0)
{
  GEN_ENTER(0xa94f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0042e430((undefined *)((int)this + 4),&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)((int)this + 0x58),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0xac) = 0;
  F_0042e430((undefined *)((int)this + 0xb0),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined2 *)((int)this + 0x114) = 0;
  F_0074d820((undefined4 *)((int)this + 0x118),&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x118),
               *(undefined4 *)((int)this + 0x11c));
  iVar3 = *(int *)((int)this + 0x128);
  if (iVar3 != *(int *)((int)this + 300)) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    F_00c46e20(iVar3,*(int *)((int)this + 300),0);
    *(int *)((int)this + 300) = (int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + iVar3;
  }
  *(undefined1 *)((int)this + 0x138) = 1;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined2 *)((int)this + 0x140) = 0;
  *(undefined1 *)((int)this + 0x142) = 0;
  *(undefined2 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x56c) = 0;
  *(undefined4 *)((int)this + 0x570) = 0xffffffff;
  *(undefined4 *)((int)this + 0x154) = 0;
  pvVar2 = (undefined *)((int)this + 0x160);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x5;
  do {
    *(undefined4 *)((int)pvVar2 + -4) = 0;
    *(undefined4 *)((int)pvVar2 + 0x54) = 0;
    F_0042e430(pvVar2,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)pvVar2 + 0x58) = 0;
    *(undefined4 *)((int)pvVar2 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar2 + 0x60) = 0;
    pvVar2 = (undefined *)((int)pvVar2 + 0x68);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
  } while ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0);
  pvVar2 = (undefined *)((int)this + 0x368);
  iVar3 = 5;
  do {
    *(undefined4 *)((int)pvVar2 + -4) = 0;
    *(undefined4 *)((int)pvVar2 + 0x54) = 0;
    uVar1 = F_0042e430(pvVar2,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)pvVar2 + 0x58) = 0;
    *(undefined4 *)((int)pvVar2 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar2 + 0x60) = 0;
    pvVar2 = (undefined *)((int)pvVar2 + 0x68);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_00a950c0 */
unsigned int F_00a950c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa950c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 0x11c) = 0;
  iVar1 = *(int *)((int)this + 0x124);
  if (*(int *)((int)this + 0x120) != iVar1) {
    uVar2 = F_00a90490(iVar1,iVar1,*(int *)((int)this + 0x120),this);
    F_00a907c0(uVar2,*(undefined4 *)((int)this + 0x124),(int)this + 300,this);
    *(uint *)((int)this + 0x124) = uVar2;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  return 0;
}

/* ref: FUN_00a951d0 */
uint F_00a951d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa951d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x18) - iVar1 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar2 = F_0074d8a0(this);
  return uVar2;
}

/* ref: FUN_00a95220 */
uint F_00a95220(unsigned int gen_a0)
{
  GEN_ENTER(0xa95220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  
  F_0042c880((undefined *)((int)this + 0xa5c));
  F_0042c880((undefined *)((int)this + 0xa08));
  F_0042c880((undefined *)((int)this + 0x9b4));
  F_0042c880((undefined *)((int)this + 0x958));
  F_0042c880((undefined *)((int)this + 0x8f4));
  iVar1 = 3;
  pvVar2 = (undefined *)((int)this + 0x8c0);
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x6c);
    F_0042c880(pvVar2);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 4;
  pvVar2 = (undefined *)((int)this + 0x710);
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x6c);
    F_0042c880(pvVar2);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 4;
  pvVar2 = (undefined *)((int)this + 0x4f4);
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x6c);
    F_0042c880(pvVar2);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_0042c880((undefined *)((int)this + 600));
  F_0042c880((undefined *)((int)this + 0x200));
  F_0042c880((undefined *)((int)this + 0x1a4));
  F_0042c880((undefined *)((int)this + 0x144));
  F_0074d8a0((undefined *)((int)this + 0x118));
  F_0042c880((undefined *)((int)this + 0xb0));
  F_0042c880((undefined *)((int)this + 0x58));
  uVar3 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar3;
}

/* ref: FUN_00a95320 */
uint F_00a95320(unsigned int gen_a0)
{
  GEN_ENTER(0xa95320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a93680((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00a95340 */
uint F_00a95340(unsigned int gen_a0)
{
  GEN_ENTER(0xa95340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a920d0((undefined *)((int)this + 0xc4));
  F_00a920d0((undefined *)((int)this + 0xb4));
  F_0042c880((undefined *)((int)this + 0x5c));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00a95380 */
uint F_00a95380(unsigned int gen_a0)
{
  GEN_ENTER(0xa95380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  
  iVar1 = 4;
  pvVar2 = (undefined *)((int)this + 0x570);
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x68);
    F_0042c880(pvVar2);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 4;
  pvVar2 = (undefined *)((int)this + 0x368);
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x68);
    F_0042c880(pvVar2);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = *(int *)((int)this + 0x128);
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 0x130) - iVar1,800);
  }
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  F_0074d8a0((undefined *)((int)this + 0x118));
  F_0042c880((undefined *)((int)this + 0xb0));
  F_0042c880((undefined *)((int)this + 0x58));
  uVar3 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar3;
}

/* ref: FUN_00a95420 */
uint F_00a95420(unsigned int gen_a0)
{
  GEN_ENTER(0xa95420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a95480 */
unsigned int F_00a95480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa95480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * puVar1;
  undefined2 * puVar2;
  
  puVar1 = *(undefined2 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined2 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined2 * PTR32 *)((int)this + 8)) {
      F_00a94400(this,1);
    }
    if (*(undefined2 * PTR32 *)((int)this + 4) != (undefined2 *)0x0) {
      **(undefined2 * PTR32 *)((int)this + 4) =
           *((undefined2 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 1) * 2)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 2;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined2 * PTR32 *)((int)this + 8)) {
      F_00a94400(this,1);
    }
    if (*(undefined2 * PTR32 *)((int)this + 4) != (undefined2 *)0x0) {
      **(undefined2 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 2;
  return 0;
}

/* ref: FUN_00a954f0 */
unsigned int F_00a954f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa954f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00a94470(this,1);
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
      F_00a94470(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_00a95560 */
unsigned int F_00a95560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa95560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a944e0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a88bf0(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x88) * 0x88 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x88;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a944e0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a88bf0(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x88;
  return 0;
}

/* ref: FUN_00a955f0 */
unsigned int F_00a955f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa955f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00751cb0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00751cb0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
  return 0;
}

/* ref: FUN_00a95670 */
unsigned int F_00a95670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa95670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00751cb0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00751cb0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
  return 0;
}

/* ref: FUN_00a956f0 */
uint F_00a956f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa956f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (this != param_1) {
    uVar3 = (param_1[1] - *param_1) / 0x11c;
    if (uVar3 == 0) {
      iVar5 = *(int *)((int)this + 4);
      if (*(int *)this != iVar5) {
        uVar3 = F_00a8c970(iVar5,iVar5,*(int *)this,0);
        F_00a92090(uVar3,*(undefined4 *)((int)this + 4));
        *(uint *)((int)this + 4) = uVar3;
        return (uint)this;
      }
    }
    else {
      iVar5 = *(int *)this;
      uVar1 = (*(int *)((int)this + 4) - iVar5) / 0x11c;
      if (uVar3 <= uVar1) {
        uVar3 = F_00a8c870(*param_1,param_1[1],iVar5,uVar3);
        F_00a92090(uVar3,*(undefined4 *)((int)this + 4));
        *(int *)((int)this + 4) = ((param_1[1] - *param_1) / 0x11c) * 0x11c + *(int *)this;
        return (uint)this;
      }
      if ((uint)((*(int *)((int)this + 8) - iVar5) / 0x11c) < uVar3) {
        if (iVar5 != 0) {
          F_00a92090(iVar5,*(undefined4 *)((int)this + 4));
          F_00a86d90(*(int *)this,(*(int *)((int)this + 8) - *(int *)this) / 0x11c);
        }
        bVar2 = F_00a8d860(this,(param_1[1] - *param_1) / 0x11c);
        if (bVar2 == 0) {
          return (uint)this;
        }
        uVar6 = *(undefined4 *)this;
        iVar5 = param_1[1];
        iVar4 = *param_1;
      }
      else {
        iVar4 = uVar1 * 0x11c + *param_1;
        F_00a8c870(*param_1,iVar4,iVar5,iVar4);
        uVar6 = *(undefined4 *)((int)this + 4);
        iVar5 = param_1[1];
      }
      uVar3 = F_00a92b60(iVar4,iVar5,uVar6);
      *(uint *)((int)this + 4) = uVar3;
    }
  }
  return (uint)this;
}

/* ref: FUN_00a95890 */
uint F_00a95890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa95890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (in_EAX = *(uint *)this, in_EAX <= param_1)) {
    iVar2 = param_1 - in_EAX;
    in_EAX = iVar2 * -0x193d4bb7;
    if (uVar1 == *(uint *)((int)this + 8)) {
      in_EAX = F_00a94570(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      uVar1 = F_00a88d10(*(undefined * PTR32 *)((int)this + 4),(iVar2 / 0x11c) * 0x11c + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
      return uVar1;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      in_EAX = F_00a94570(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      in_EAX = F_00a88d10(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
  return in_EAX;
}

/* ref: FUN_00a95920 */
unsigned int F_00a95920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa95920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  undefined1 * puVar2;
  
  puVar1 = *(undefined1 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined1 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_00a94600(this,1);
    }
    if (*(undefined1 * PTR32 *)((int)this + 4) != (undefined1 *)0x0) {
      **(undefined1 * PTR32 *)((int)this + 4) = param_1[*(int *)this - (int)puVar2];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_00a94600(this,1);
    }
    if (*(undefined1 * PTR32 *)((int)this + 4) != (undefined1 *)0x0) {
      **(undefined1 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00a95980 */
uint F_00a95980(unsigned int gen_a0)
{
  GEN_ENTER(0xa95980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a920d0((undefined *)((int)this + 0xc4));
  F_00a920d0((undefined *)((int)this + 0xb4));
  F_0042c880((undefined *)((int)this + 0x5c));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00a959b0 */
uint F_00a959b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa959b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a93680((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00a959d0 */
uint F_00a959d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa959d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a95a10 */
uint F_00a95a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa95a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  *(undefined4 *)((int)this + 0x58) = param_2[1];
  F_0042cbc0((undefined *)((int)this + 0x5c),param_2 + 2);
  *(undefined4 *)((int)this + 0xb0) = param_2[0x17];
  F_00a92a70((undefined *)((int)this + 0xb4),param_2 + 0x18);
  F_00a92a70((undefined *)((int)this + 0xc4),param_2 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a95a70 */
unsigned int F_00a95a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa95a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x2624;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x2624;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_00a946c0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00a946c0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00a95b00 */
uint F_00a95b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa95b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = *param_1;
  F_00a91460((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_00a95b20 */
unsigned int F_00a95b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa95b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    F_00a93680(this);
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return 0;
}

/* ref: FUN_00a95b60 */
uint F_00a95b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa95b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00a94950(this,param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_00a95b80 */
uint F_00a95b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa95b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  *(undefined4 *)((int)this + 0x58) = param_2[1];
  F_0042cbc0((undefined *)((int)this + 0x5c),param_2 + 2);
  *(undefined4 *)((int)this + 0xb0) = param_2[0x17];
  F_00a92a70((undefined *)((int)this + 0xb4),param_2 + 0x18);
  F_00a92a70((undefined *)((int)this + 0xc4),param_2 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a95be0 */
uint F_00a95be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa95be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a920d0((undefined *)((int)this + 0xc4));
  F_00a920d0((undefined *)((int)this + 0xb4));
  F_0042c880((undefined *)((int)this + 0x5c));
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a95c30 */
uint F_00a95c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa95c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a93680((undefined *)((int)this + 0x54));
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a95c60 */
uint F_00a95c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa95c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 100);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0x6c) - iVar1) / 0x34) * 0x34,800);
  }
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  F_0042c880((undefined *)((int)this + 0x10));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a95cd0 */
uint F_00a95cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa95cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  F_00429760(*(undefined4 *)((int)this + 8),0x18,800);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a95d20 */
uint F_00a95d20(unsigned int gen_a0)
{
  GEN_ENTER(0xa95d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a95d60 */
uint F_00a95d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa95d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)this;
  if (*(int *)((int)this + 4) == *(int *)((int)this + 8)) {
    F_00a94570(this,1);
  }
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00a88d10(*(undefined * PTR32 *)((int)this + 4),param_3);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
  iVar4 = ((param_2 - iVar1) / 0x11c) * 0x11c;
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + -0x11c;
  iVar3 = *(int *)this + iVar4;
  if ((iVar3 != iVar1) && (iVar1 != iVar2)) {
    F_00a90d20(iVar3,iVar1,iVar2,0,0);
  }
  *param_1 = *(int *)this + iVar4;
  return (uint)param_1;
}

/* ref: FUN_00a95de0 */
uint F_00a95de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa95de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = *param_2;
  F_00a93db0((undefined *)((int)this + 8),param_2 + 2);
  return (uint)this;
}

/* ref: FUN_00a95e10 */
unsigned int F_00a95e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa95e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_0042cbc0(param_2 + 2,param_3 + 2);
    F_00a92e20(param_2 + 0x17,param_3 + 0x17);
    *(undefined1 *)(param_2 + 0x1b) = *(undefined1 *)(param_3 + 0x1b);
    *(undefined1 *)((int)param_2 + 0x6d) = *(undefined1 *)((int)param_3 + 0x6d);
  }
  return 0;
}

/* ref: FUN_00a95e60 */
uint F_00a95e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa95e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  F_00a92ec0(this,param_1);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return (uint)this;
}

/* ref: FUN_00a95ec0 */
uint F_00a95ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa95ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  F_0042cbc0((undefined *)((int)this + 0x5c),param_1 + 0x5c);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  F_00a92a70((undefined *)((int)this + 0xb4),param_1 + 0xb4);
  F_00a92a70((undefined *)((int)this + 0xc4),param_1 + 0xc4);
  return (uint)this;
}

/* ref: FUN_00a95f20 */
uint F_00a95f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa95f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  F_00a93d20((undefined *)((int)this + 0x54),param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00a95f50 */
uint F_00a95f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa95f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x15))) = 1;
  F_00a92ec0((undefined *)((int)this + 4),param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00a95fb0 */
uint F_00a95fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa95fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x15))) = 1;
  F_00a92ec0((undefined *)((int)this + 4),param_1 + 1);
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  return (uint)this;
}

/* ref: FUN_00a96020 */
uint F_00a96020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa96020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = param_1[2];
  F_00a93db0((undefined *)((int)this + 8),param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00a96050 */
uint F_00a96050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa96050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  F_0042cbc0((undefined *)((int)this + 0x5c),param_1 + 0x5c);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  F_00a92a70((undefined *)((int)this + 0xb4),param_1 + 0xb4);
  F_00a92a70((undefined *)((int)this + 0xc4),param_1 + 0xc4);
  return (uint)this;
}

/* ref: FUN_00a960b0 */
uint F_00a960b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa960b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x15))) = 1;
  F_00a92ec0((undefined *)((int)this + 4),param_2);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_2 + 0x14);
  return (uint)this;
}

/* ref: FUN_00a96120 */
uint F_00a96120(unsigned int gen_a0)
{
  GEN_ENTER(0xa96120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  int local_c;
  undefined4 * local_8;
  
  F_0042b630((int)this + 4);
  F_0042b630((int)this + 0x58);
  F_0042b630((int)this + 0xb0);
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  F_0042b630((int)this + 0x144);
  F_0042b630((int)this + 0x1a4);
  F_0042b630((int)this + 0x200);
  F_0042b630((int)this + 600);
  local_8 = (undefined4 *)((int)this + 0x2d4);
  local_c = 4;
  pvVar1 = (undefined *)((int)this + 0x2d8);
  do {
    F_0042b630(pvVar1);
    *local_8 = 0;
    *(undefined4 *)((int)pvVar1 + 0x54) = 0;
    F_0042e430(pvVar1,&REFG(undefined1, 0x107fc63));
    local_8 = local_8 + 0x1b;
    *(undefined4 *)((int)pvVar1 + 0x58) = 0;
    *(undefined4 *)((int)pvVar1 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar1 + 0x60) = 0;
    *(undefined1 *)((int)pvVar1 + 100) = 0;
    pvVar1 = (undefined *)((int)pvVar1 + 0x6c);
    local_c = local_c + -1;
  } while (-1 < local_c);
  local_8 = (undefined4 *)((int)this + 0x4f0);
  local_c = 4;
  pvVar1 = (undefined *)((int)this + 0x4f4);
  do {
    F_0042b630(pvVar1);
    *local_8 = 0;
    *(undefined4 *)((int)pvVar1 + 0x54) = 0;
    F_0042e430(pvVar1,&REFG(undefined1, 0x107fc63));
    local_8 = local_8 + 0x1b;
    *(undefined4 *)((int)pvVar1 + 0x58) = 0;
    *(undefined4 *)((int)pvVar1 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar1 + 0x60) = 0;
    *(undefined1 *)((int)pvVar1 + 100) = 0;
    pvVar1 = (undefined *)((int)pvVar1 + 0x6c);
    local_c = local_c + -1;
  } while (-1 < local_c);
  local_8 = (undefined4 *)((int)this + 0x70c);
  local_c = 3;
  pvVar1 = (undefined *)((int)this + 0x710);
  do {
    F_0042b630(pvVar1);
    *local_8 = 0;
    *(undefined4 *)((int)pvVar1 + 0x54) = 0;
    F_0042e430(pvVar1,&REFG(undefined1, 0x107fc63));
    local_8 = local_8 + 0x1b;
    *(undefined4 *)((int)pvVar1 + 0x58) = 0;
    *(undefined4 *)((int)pvVar1 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar1 + 0x60) = 0;
    *(undefined1 *)((int)pvVar1 + 100) = 0;
    pvVar1 = (undefined *)((int)pvVar1 + 0x6c);
    local_c = local_c + -1;
  } while (-1 < local_c);
  F_0071db50((undefined *)((int)this + 0x8bc));
  F_0042b630((int)this + 0x9b4);
  F_0042b630((int)this + 0xa08);
  F_0042b630((int)this + 0xa5c);
  F_00a84ef0((undefined *)((int)this + 0x8bc));
  F_00a94c50(this);
  return (uint)this;
}

/* ref: FUN_00a962b0 */
unsigned int F_00a962b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa962b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  iVar1 = *(int *)((int)this + 100);
  if (*(int *)((int)this + 0x60) != iVar1) {
    uVar2 = F_00a8c970(iVar1,iVar1,*(int *)((int)this + 0x60),this);
    F_00a92090(uVar2,*(undefined4 *)((int)this + 100));
    *(uint *)((int)this + 100) = uVar2;
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  iVar1 = *(int *)((int)this + 0x74);
  if (*(int *)((int)this + 0x70) != iVar1) {
    uVar2 = F_00a8c970(iVar1,iVar1,*(int *)((int)this + 0x70),this);
    F_00a92090(uVar2,*(undefined4 *)((int)this + 0x74));
    *(uint *)((int)this + 0x74) = uVar2;
  }
  return 0;
}

/* ref: FUN_00a96330 */
uint F_00a96330(unsigned int gen_a0)
{
  GEN_ENTER(0xa96330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  int local_c;
  undefined4 * local_8;
  
  F_0042b630((int)this + 4);
  F_0042b630((int)this + 0x58);
  F_0042b630((int)this + 0xb0);
  local_8 = (undefined4 *)((int)this + 0x15c);
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  local_c = 4;
  pvVar1 = (undefined *)((int)this + 0x160);
  do {
    F_0042b630(pvVar1);
    *local_8 = 0;
    *(undefined4 *)((int)pvVar1 + 0x54) = 0;
    F_0042e430(pvVar1,&REFG(undefined1, 0x107fc63));
    local_8 = local_8 + 0x1a;
    *(undefined4 *)((int)pvVar1 + 0x58) = 0;
    *(undefined4 *)((int)pvVar1 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar1 + 0x60) = 0;
    pvVar1 = (undefined *)((int)pvVar1 + 0x68);
    local_c = local_c + -1;
  } while (-1 < local_c);
  local_8 = (undefined4 *)((int)this + 0x364);
  local_c = 4;
  pvVar1 = (undefined *)((int)this + 0x368);
  do {
    F_0042b630(pvVar1);
    *local_8 = 0;
    *(undefined4 *)((int)pvVar1 + 0x54) = 0;
    F_0042e430(pvVar1,&REFG(undefined1, 0x107fc63));
    local_8 = local_8 + 0x1a;
    *(undefined4 *)((int)pvVar1 + 0x58) = 0;
    *(undefined4 *)((int)pvVar1 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar1 + 0x60) = 0;
    pvVar1 = (undefined *)((int)pvVar1 + 0x68);
    local_c = local_c + -1;
  } while (-1 < local_c);
  F_00a94f60(this);
  return (uint)this;
}

/* ref: FUN_00a96440 */
uint F_00a96440(unsigned int gen_a0)
{
  GEN_ENTER(0xa96440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a93680((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00a96460 */
uint F_00a96460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa96460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  F_0042ccf0((undefined *)((int)this + 8),param_1 + 2);
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  F_00a956f0((undefined *)((int)this + 0x60),param_1 + 0x18);
  F_00a956f0((undefined *)((int)this + 0x70),param_1 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a964c0 */
unsigned int F_00a964c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa964c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a95a70(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a8e790(*(undefined * PTR32 *)((int)this + 4),
                   ((int)(param_1 - uVar2) / 0x2624) * 0x2624 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x2624;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a95a70(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a8e790(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x2624;
  return 0;
}

/* ref: FUN_00a96550 */
uint F_00a96550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa96550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (this != param_1) {
    F_00a93680(this);
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a96590 */
uint F_00a96590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa96590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(undefined4 *)(gen_frame + 0x5c)) = param_3[1];
  (*(undefined4 *)(gen_frame + 0x58)) = *param_3;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x60)),param_3 + 2);
  (*(undefined4 *)(gen_frame + 0xb4)) = param_3[0x17];
  F_00a92a70(((undefined1 *)(gen_frame + 0xb8)),param_3 + 0x18);
  F_00a92a70(((undefined1 *)(gen_frame + 0xc8)),param_3 + 0x1c);
  uVar1 = F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_2);
  F_0042cbc0(param_1,uVar1);
  *(undefined4 *)((int)param_1 + 0x54) = (*(undefined4 *)(gen_frame + 0x58));
  *(undefined4 *)((int)param_1 + 0x58) = (*(undefined4 *)(gen_frame + 0x5c));
  F_0042cbc0((undefined *)((int)param_1 + 0x5c),((undefined1 *)(gen_frame + 0x60)));
  *(undefined4 *)((int)param_1 + 0xb0) = (*(undefined4 *)(gen_frame + 0xb4));
  F_00a92a70((undefined *)((int)param_1 + 0xb4),((undefined1 *)(gen_frame + 0xb8)));
  F_00a92a70((undefined *)((int)param_1 + 0xc4),((undefined1 *)(gen_frame + 0xc8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00a920d0(((undefined1 *)(gen_frame + 0xc8)));
  F_00a920d0(((undefined1 *)(gen_frame + 0xb8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)param_1;
}

/* ref: FUN_00a96680 */
uint F_00a96680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa96680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00a95d60(this,param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_00a966a0 */
uint F_00a966a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa966a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = *param_2;
  F_00a93db0((undefined *)((int)this + 8),param_2 + 2);
  return (uint)this;
}

/* ref: FUN_00a966d0 */
uint F_00a966d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa966d0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a920d0((undefined *)((int)param_1 + 0xc4));
  F_00a920d0((undefined *)((int)param_1 + 0xb4));
  F_0042c880((undefined *)((int)param_1 + 0x5c));
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00a96710 */
uint F_00a96710(unsigned int gen_a0)
{
  GEN_ENTER(0xa96710u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a93680((undefined *)((int)param_1 + 0x54));
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00a96730 */
uint F_00a96730(unsigned int gen_a0)
{
  GEN_ENTER(0xa96730u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)(param_1 + 0x6c) - iVar1) / 0x34) * 0x34,800);
  }
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  uVar2 = F_0042c880((undefined *)(param_1 + 0x10));
  return (uint)uVar2;
}

/* ref: FUN_00a96790 */
uint F_00a96790(unsigned int gen_a0)
{
  GEN_ENTER(0xa96790u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[0]);
  F_0095c5e0((undefined *)((*(int *)&gen_args[0]) + 4),&(*(int *)&gen_args[0]),**(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 8),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 8));
  uVar2 = F_00429760(*(undefined4 *)(iVar1 + 8),0x18,800);
  return (uint)uVar2;
}

/* ref: FUN_00a967d0 */
uint F_00a967d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa967d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a934c0((undefined *)((int)this + 8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a96800 */
uint F_00a96800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa96800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  F_00429760(*(undefined4 *)((int)this + 8),0x18,800);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a96850 */
uint F_00a96850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa96850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * this_00;
  
  F_0042cbc0(this,param_1);
  this_00 = (undefined4 *)((int)this + 0x54);
  *this_00 = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  if (this_00 != param_2) {
    F_00a93680(this_00);
    *this_00 = *param_2;
    *(undefined4 *)((int)this + 0x58) = param_2[1];
    *(undefined4 *)((int)this + 0x5c) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a968a0 */
uint F_00a968a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa968a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x78,0,800);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    F_0042cbc0(puVar1 + 4,param_3 + 2);
    F_00a92e20(puVar1 + 0x19,param_3 + 0x17);
    *(undefined1 *)(puVar1 + 0x1d) = *(undefined1 *)(param_3 + 0x1b);
    *(undefined1 *)((int)puVar1 + 0x75) = *(undefined1 *)((int)param_3 + 0x6d);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a96910 */
uint F_00a96910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa96910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x15))) = 1;
  F_00a92ec0((undefined *)((int)this + 4),param_2);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_2 + 0x14);
  return (uint)this;
}

/* ref: FUN_00a96980 */
unsigned int F_00a96980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa96980u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00a95ec0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00a969a0 */
unsigned int F_00a969a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa969a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    F_00a93d20((undefined *)((int)param_1 + 0x54),param_2 + 0x54);
  }
  return 0;
}

/* ref: FUN_00a969d0 */
unsigned int F_00a969d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa969d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[3] = 0;
    uVar1 = F_004296a0(0x18,0,800);
    param_1[2] = uVar1;
    *(uint *)uVar1 = uVar1;
    *(undefined4 *)(param_1[2] + 4) = param_1[2];
    *(undefined4 *)(param_1[2] + 8) = param_1[2];
    *(undefined1 *)(param_1[2] + 0x14) = 1;
    *(undefined1 *)(param_1[2] + 0x15) = 1;
    F_00a92ec0(param_1 + 1,param_2 + 1);
  }
  return 0;
}

/* ref: FUN_00a96a30 */
uint F_00a96a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa96a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = param_1[2];
  F_00a93db0((undefined *)((int)this + 8),param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00a96a60 */
uint F_00a96a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa96a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00a95fb0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00a96a80 */
uint F_00a96a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa96a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00a960b0(this,param_1,param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00a96aa0 */
uint F_00a96aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa96aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * this_00;
  
  F_0042cbc0(this,param_1);
  this_00 = (undefined4 *)((int)this + 0x54);
  *this_00 = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  if (this_00 != param_2) {
    F_00a93680(this_00);
    *this_00 = *param_2;
    *(undefined4 *)((int)this + 0x58) = param_2[1];
    *(undefined4 *)((int)this + 0x5c) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a96af0 */
unsigned int F_00a96af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa96af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00a969d0(param_2,param_3);
  return 0;
}

/* ref: FUN_00a96b10 */
uint F_00a96b10(unsigned int gen_a0)
{
  GEN_ENTER(0xa96b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630((int)this + 8);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  F_00a962b0(this);
  return (uint)this;
}

/* ref: FUN_00a96b40 */
uint F_00a96b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa96b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * this_00;
  
  F_0042cbc0(this,param_1);
  this_00 = (undefined4 *)((int)this + 0x54);
  *this_00 = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  if (this_00 != param_2) {
    F_00a93680(this_00);
    *this_00 = *param_2;
    *(undefined4 *)((int)this + 0x58) = param_2[1];
    *(undefined4 *)((int)this + 0x5c) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a96b90 */
uint F_00a96b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa96b90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  F_00a920d0((undefined *)((int)param_2 + 0xc4));
  F_00a920d0((undefined *)((int)param_2 + 0xb4));
  F_0042c880((undefined *)((int)param_2 + 0x5c));
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00a96bc0 */
uint F_00a96bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa96bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a968a0(param_1,*(undefined4 *)(param_1 + 4),param_2);
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(param_1 + 4) = uVar1;
  **(uint * PTR32 *)(uVar1 + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00a96c10 */
uint F_00a96c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa96c10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)(param_2 + 100);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)(param_2 + 0x6c) - iVar1) / 0x34) * 0x34,800);
  }
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0x68) = 0;
  *(undefined4 *)(param_2 + 0x6c) = 0;
  uVar2 = F_0042c880((undefined *)(param_2 + 0x10));
  return (uint)uVar2;
}

/* ref: FUN_00a96c70 */
uint F_00a96c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa96c70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  F_00a93680((undefined *)((int)param_2 + 0x54));
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00a96c90 */
uint F_00a96c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa96c90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  F_0095c5e0((undefined *)((*(int *)&gen_args[1]) + 4),&(*(int *)&gen_args[1]),**(undefined4 * PTR32 *)((*(int *)&gen_args[1]) + 8),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[1]) + 8));
  uVar2 = F_00429760(*(undefined4 *)(iVar1 + 8),0x18,800);
  return (uint)uVar2;
}

/* ref: FUN_00a96cc0 */
uint F_00a96cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa96cc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a934c0((undefined *)(param_1 + 8));
  return uVar1;
}

/* ref: FUN_00a96ce0 */
uint F_00a96ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xa96ce0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[0]);
  F_0095c5e0((undefined *)((*(int *)&gen_args[0]) + 4),&(*(int *)&gen_args[0]),**(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 8),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 8));
  uVar2 = F_00429760(*(undefined4 *)(iVar1 + 8),0x18,800);
  return (uint)uVar2;
}

/* ref: FUN_00a96d20 */
uint F_00a96d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa96d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * this_00;
  
  F_0042cbc0(this,param_1);
  this_00 = (undefined4 *)((int)this + 0x54);
  *this_00 = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  if (this_00 != param_2) {
    F_00a93680(this_00);
    *this_00 = *param_2;
    *(undefined4 *)((int)this + 0x58) = param_2[1];
    *(undefined4 *)((int)this + 0x5c) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a96d70 */
uint F_00a96d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa96d70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00a920d0(param_4 + 0x34);
    F_00a920d0(param_4 + 0x30);
    F_0042c880(param_4 + 0x1a);
    F_0042c880(param_4 + 3);
    F_00429760(param_4,0xe4,800);
                    
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
      goto LAB_00a96e08;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_00a96e08;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_00a96e08: ;
  cVar1 = *(char *)(param_4[1] + 0xe0);
  piVar6 = param_4;
  do {
    if (cVar1 != '\0') {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0xe0))) = 1;
      *param_1 = param_4;
      return (uint)param_1;
    }
    piVar3 = (int *)piVar6[1];
    piVar5 = (int *)piVar3[1];
    if (piVar3 == (int *)*piVar5) {
      iVar4 = piVar5[2];
      if (*(char *)(iVar4 + 0xe0) != '\0') {
        if (piVar6 == (int *)piVar3[2]) {
          piVar6 = (int *)piVar3[2];
          piVar3[2] = *piVar6;
          if (*(char *)(*piVar6 + 0xe1) == '\0') {
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
        *(undefined1 *)(piVar6[1] + 0xe0) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0xe0))) = 0;
        piVar3 = *(int * PTR32 *)(piVar6[1] + 4);
        piVar5 = (int *)*piVar3;
        *piVar3 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xe1) == '\0') {
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
        goto LAB_00a96f78;
      }
LAB_00a96ef4: ;
      *(undefined1 *)(piVar3 + 0x38) = 1;
      *(undefined1 *)(iVar4 + 0xe0) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0xe0))) = 0;
      piVar6 = *(int * PTR32 *)(piVar6[1] + 4);
    }
    else {
      iVar4 = *piVar5;
      if (*(char *)(iVar4 + 0xe0) == '\0') goto LAB_00a96ef4;
      if (piVar6 == (int *)*piVar3) {
        F_00a8b140(this,piVar3);
        piVar6 = piVar3;
      }
      *(undefined1 *)(piVar6[1] + 0xe0) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0xe0))) = 0;
      piVar3 = *(int * PTR32 *)(piVar6[1] + 4);
      piVar5 = (int *)piVar3[2];
      piVar3[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xe1) == '\0') {
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
LAB_00a96f78: ;
      piVar3[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar6[1] + 0xe0);
  } while( true );
}

/* ref: FUN_00a96fb0 */
uint F_00a96fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa96fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00a93680(param_4 + 0x18);
    F_0042c880(param_4 + 3);
    F_00429760(param_4,0x74,800);
                    
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
      goto LAB_00a9702b;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_00a9702b;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_00a9702b: ;
  cVar1 = *(char *)(param_4[1] + 0x70);
  piVar3 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar4 + 0x70) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar3[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar4 = piVar6[2];
      if (*(char *)(iVar4 + 0x70) == '\0') {
        *(undefined1 *)(piVar5 + 0x1c) = 1;
        *(undefined1 *)(iVar4 + 0x70) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x70))) = 0;
        piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
      }
      else {
        if (piVar3 == (int *)piVar5[2]) {
          piVar3 = (int *)piVar5[2];
          piVar5[2] = *piVar3;
          if (*(char *)(*piVar3 + 0x71) == '\0') {
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
        *(undefined1 *)(piVar3[1] + 0x70) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x70))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x71) == '\0') {
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
LAB_00a971bd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*(char *)(iVar4 + 0x70) != '\0') {
        if (piVar3 == (int *)*piVar5) {
          iVar4 = *piVar5;
          *piVar5 = *(int *)(iVar4 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar4 + 8) + 0x71))) == '\0') {
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
        *(undefined1 *)(piVar3[1] + 0x70) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x70))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x71) == '\0') {
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
        goto LAB_00a971bd;
      }
      *(undefined1 *)(piVar5 + 0x1c) = 1;
      *(undefined1 *)(iVar4 + 0x70) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x70))) = 0;
      piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
    }
    cVar1 = *(char *)(piVar3[1] + 0x70);
  } while( true );
}

/* ref: FUN_00a971f0 */
uint F_00a971f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa971f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  piVar4 = (*(int * PTR32 *)&gen_args[4]);
  if (0xfffffffd < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    F_0095c5e0((*(int * PTR32 *)&gen_args[4]) + 4,&(*(undefined4 *)&gen_args[2]),*((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[5])),((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[5])));
    F_00429760(piVar4[5],0x18,800);
    F_00429760(piVar4,0x24,800);
                    
    F_00c4579a("map/set<T> too long");
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 1;
  (*(int * PTR32 *)&gen_args[4])[1] = (int)(*(undefined4 * PTR32 *)&gen_args[3]);
  if ((*(undefined4 * PTR32 *)&gen_args[3]) == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1] = (*(int * PTR32 *)&gen_args[4]);
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(int * PTR32 *)&gen_args[4]);
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = (*(int * PTR32 *)&gen_args[4]);
  }
  else if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
    (*(undefined4 * PTR32 *)&gen_args[3])[2] = (*(int * PTR32 *)&gen_args[4]);
    if ((*(undefined4 * PTR32 *)&gen_args[3]) == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = (*(int * PTR32 *)&gen_args[4]);
    }
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[4]);
    if ((*(undefined4 * PTR32 *)&gen_args[3]) == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (int)(*(int * PTR32 *)&gen_args[4]);
    }
  }
  cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[4])[1] + 0x20)));
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[4]);
      *(undefined1 *)(iVar2 + 0x20) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x20) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *(undefined1 *)(iVar2 + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x21) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x21) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00a9740d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x20) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x21) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00a9740d;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *(undefined1 *)(iVar2 + 0x20) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x20);
  } while( true );
}

/* ref: FUN_00a97440 */
uint F_00a97440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa97440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00a96910(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00a97460 */
uint F_00a97460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa97460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  ulonglong uVar1;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_3);
  (*(undefined4 *)(gen_frame + 0x5c)) = *(undefined4 *)(param_3 + 0x58);
  (*(undefined4 *)(gen_frame + 0x58)) = *(undefined4 *)(param_3 + 0x54);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x60)),param_3 + 0x5c);
  (*(undefined4 *)(gen_frame + 0xb4)) = *(undefined4 *)(param_3 + 0xb0);
  F_00a92a70(((undefined1 *)(gen_frame + 0xb8)),param_3 + 0xb4);
  F_00a92a70(((undefined1 *)(gen_frame + 0xc8)),param_3 + 0xc4);
  if (param_2 != (undefined *)0x0) {
    F_00a95ec0(param_2,((undefined1 *)(gen_frame + 0x4)));
  }
  F_00a920d0(((undefined1 *)(gen_frame + 0xc8)));
  F_00a920d0(((undefined1 *)(gen_frame + 0xb8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)uVar1;
}

/* ref: FUN_00a97510 */
unsigned int F_00a97510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa97510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a95ec0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00a97530 */
unsigned int F_00a97530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa97530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    F_00a93d20((undefined *)((int)param_2 + 0x54),param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00a97560 */
unsigned int F_00a97560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa97560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00a969d0(param_2,param_3);
  return 0;
}

/* ref: FUN_00a97580 */
uint F_00a97580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa97580u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *param_2;
    param_1[2] = param_2[2];
    uVar1 = F_00a93db0(param_1 + 4,param_2 + 4);
  }
  return uVar1;
}

/* ref: FUN_00a975b0 */
unsigned int F_00a975b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa975b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00a95fb0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00a975d0 */
uint F_00a975d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa975d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  undefined4 * this_00;
  
  puVar1 = (undefined4 *)(param_1 + 0x54);
  F_0042cbc0(this,param_1);
  this_00 = (undefined4 *)((int)this + 0x54);
  *this_00 = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  if (this_00 != puVar1) {
    F_00a93680(this_00);
    *this_00 = *puVar1;
    *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a97620 */
uint F_00a97620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa97620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *param_3;
    param_2[2] = param_3[2];
    uVar1 = F_00a93db0(param_2 + 4,param_3 + 4);
  }
  return uVar1;
}

/* ref: FUN_00a97650 */
uint F_00a97650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa97650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a969d0(puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a976a0 */
uint F_00a976a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa976a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  int * piVar8;
  undefined * pvVar9;
  
  piVar4 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0xe1))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00910a90(&(*(int * PTR32 *)&gen_args[2]));
  piVar7 = (int *)*piVar4;
  if (*(char *)((int)piVar7 + 0xe1) == '\0') {
    piVar8 = piVar7;
    if ((*(char *)(piVar4[2] + 0xe1) == '\0') && (piVar8 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar4)) {
      piVar7[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar4;
      piVar7 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar4[2]) {
        piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar8 + 0xe1) == '\0') {
          piVar8[1] = (int)piVar7;
        }
        *piVar7 = (int)piVar8;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar4[2];
        *(int * PTR32 *)(piVar4[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar4) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar4[1];
        if ((int *)*puVar2 == piVar4) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar4[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0x38];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x38))) = (char)piVar4[0x38];
      *(char *)(piVar4 + 0x38) = (char)iVar1;
      goto LAB_00a977df;
    }
  }
  else {
    piVar8 = (int *)piVar4[2];
  }
  piVar7 = (int *)piVar4[1];
  if (*(char *)((int)piVar8 + 0xe1) == '\0') {
    piVar8[1] = (int)piVar7;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar4) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar8;
  }
  else if ((int *)*piVar7 == piVar4) {
    *piVar7 = (int)piVar8;
  }
  else {
    piVar7[2] = (int)piVar8;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar4) {
    piVar5 = piVar7;
    if (*(char *)((int)piVar8 + 0xe1) == '\0') {
      piVar5 = (int *)F_00910a40(piVar8);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar5;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar4) {
    if (*(char *)((int)piVar8 + 0xe1) == '\0') {
      uVar6 = F_00a86dd0(piVar8);
      *(uint *)(iVar1 + 8) = uVar6;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar7;
    }
  }
LAB_00a977df: ;
  if ((char)piVar4[0x38] == '\x01') {
    if (piVar8 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar5 = piVar7;
        if ((char)piVar8[0x38] != '\x01') break;
        piVar7 = (int *)*piVar5;
        if (piVar8 == piVar7) {
          piVar7 = (int *)piVar5[2];
          if ((char)piVar7[0x38] == '\0') {
            *(undefined1 *)(piVar7 + 0x38) = 1;
            *(undefined1 *)(piVar5 + 0x38) = 0;
            F_00a8d8c0((*(undefined * PTR32 *)&gen_args[0]),piVar5);
            piVar7 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar7 + 0xe1) == '\0') {
            if ((*(char *)(*piVar7 + 0xe0) != '\x01') || (*(char *)(piVar7[2] + 0xe0) != '\x01')) {
              if (*(char *)(piVar7[2] + 0xe0) == '\x01') {
                *(undefined1 *)(*piVar7 + 0xe0) = 1;
                *(undefined1 *)(piVar7 + 0x38) = 0;
                F_00a8b140((*(undefined * PTR32 *)&gen_args[0]),piVar7);
                piVar7 = (int *)piVar5[2];
              }
              *(char *)(piVar7 + 0x38) = (char)piVar5[0x38];
              *(undefined1 *)(piVar5 + 0x38) = 1;
              *(undefined1 *)(piVar7[2] + 0xe0) = 1;
              F_00a8d8c0((*(undefined * PTR32 *)&gen_args[0]),piVar5);
              break;
            }
LAB_00a978ec: ;
            *(undefined1 *)(piVar7 + 0x38) = 0;
          }
        }
        else {
          if ((char)piVar7[0x38] == '\0') {
            *(undefined1 *)(piVar7 + 0x38) = 1;
            *(undefined1 *)(piVar5 + 0x38) = 0;
            F_00a8b140((*(undefined * PTR32 *)&gen_args[0]),piVar5);
            piVar7 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar7 + 0xe1) == '\0') {
            if ((*(char *)(piVar7[2] + 0xe0) == '\x01') && (*(char *)(*piVar7 + 0xe0) == '\x01'))
            goto LAB_00a978ec;
            if (*(char *)(*piVar7 + 0xe0) == '\x01') {
              *(undefined1 *)(piVar7[2] + 0xe0) = 1;
              *(undefined1 *)(piVar7 + 0x38) = 0;
              F_00a8d8c0((*(undefined * PTR32 *)&gen_args[0]),piVar7);
              piVar7 = (int *)*piVar5;
            }
            *(char *)(piVar7 + 0x38) = (char)piVar5[0x38];
            *(undefined1 *)(piVar5 + 0x38) = 1;
            *(undefined1 *)(*piVar7 + 0xe0) = 1;
            F_00a8b140((*(undefined * PTR32 *)&gen_args[0]),piVar5);
            break;
          }
        }
        piVar7 = (int *)piVar5[1];
        piVar8 = piVar5;
      } while (piVar5 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar8 + 0x38) = 1;
  }
  pvVar9 = (undefined *)piVar4[0x34];
  if (pvVar9 != (undefined *)0x0) {
    pvVar3 = (undefined *)piVar4[0x35];
    for (; pvVar9 != pvVar3; pvVar9 = (undefined *)((int)pvVar9 + 0x11c)) {
      F_0042c880((undefined *)((int)pvVar9 + 0xbc));
      F_0042c880((undefined *)((int)pvVar9 + 0x60));
      F_0042c880(pvVar9);
    }
    F_00429760(piVar4[0x34],((piVar4[0x36] - piVar4[0x34]) / 0x11c) * 0x11c,800);
  }
  piVar4[0x34] = 0;
  piVar4[0x35] = 0;
  piVar4[0x36] = 0;
  pvVar9 = (undefined *)piVar4[0x30];
  if (pvVar9 != (undefined *)0x0) {
    pvVar3 = (undefined *)piVar4[0x31];
    for (; pvVar9 != pvVar3; pvVar9 = (undefined *)((int)pvVar9 + 0x11c)) {
      F_0042c880((undefined *)((int)pvVar9 + 0xbc));
      F_0042c880((undefined *)((int)pvVar9 + 0x60));
      F_0042c880(pvVar9);
    }
    F_00429760(piVar4[0x30],((piVar4[0x32] - piVar4[0x30]) / 0x11c) * 0x11c,800);
  }
  piVar4[0x30] = 0;
  piVar4[0x31] = 0;
  piVar4[0x32] = 0;
  F_0042c880(piVar4 + 0x1a);
  F_0042c880(piVar4 + 3);
  F_00429760(piVar4,0xe4,800);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a97ab0 */
uint F_00a97ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa97ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = F_00a968a0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(iVar1 + 4) = uVar2;
  **(uint * PTR32 *)(uVar2 + 4) = uVar2;
  return uVar2;
}

/* ref: FUN_00a97b00 */
uint F_00a97b00(unsigned int gen_a0)
{
  GEN_ENTER(0xa97b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  ulonglong uVar5;
  
  piVar1 = *(int * PTR32 *)this;
  piVar4 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  uVar3 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar4 != *(int * PTR32 *)this) {
    do {
      iVar2 = piVar4[0x19];
      piVar1 = (int *)*piVar4;
      if (iVar2 != 0) {
        F_00429760(iVar2,((piVar4[0x1b] - iVar2) / 0x34) * 0x34,800);
      }
      piVar4[0x19] = 0;
      piVar4[0x1a] = 0;
      piVar4[0x1b] = 0;
      F_0042c880(piVar4 + 4);
      uVar5 = F_00429760(piVar4,0x78,800);
      uVar3 = (uint)uVar5;
      piVar4 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return uVar3;
}

/* ref: FUN_00a97b90 */
unsigned int F_00a97b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa97b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  
  cVar1 = *(char *)((int)param_1 + 0xe1);
  while (cVar1 == '\0') {
    F_00a97b90(this,(int *)param_1[2]);
    piVar2 = (int *)*param_1;
    pvVar4 = (undefined *)param_1[0x34];
    if (pvVar4 != (undefined *)0x0) {
      pvVar3 = (undefined *)param_1[0x35];
      for (; pvVar4 != pvVar3; pvVar4 = (undefined *)((int)pvVar4 + 0x11c)) {
        F_0042c880((undefined *)((int)pvVar4 + 0xbc));
        F_0042c880((undefined *)((int)pvVar4 + 0x60));
        F_0042c880(pvVar4);
      }
      F_00429760(param_1[0x34],((param_1[0x36] - param_1[0x34]) / 0x11c) * 0x11c,800);
    }
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    pvVar4 = (undefined *)param_1[0x30];
    if (pvVar4 != (undefined *)0x0) {
      pvVar3 = (undefined *)param_1[0x31];
      for (; pvVar4 != pvVar3; pvVar4 = (undefined *)((int)pvVar4 + 0x11c)) {
        F_0042c880((undefined *)((int)pvVar4 + 0xbc));
        F_0042c880((undefined *)((int)pvVar4 + 0x60));
        F_0042c880(pvVar4);
      }
      F_00429760(param_1[0x30],((param_1[0x32] - param_1[0x30]) / 0x11c) * 0x11c,800);
    }
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    F_0042c880(param_1 + 0x1a);
    F_0042c880(param_1 + 3);
    F_00429760(param_1,0xe4,800);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xe1);
  }
  return 0;
}

/* ref: FUN_00a97d20 */
unsigned int F_00a97d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa97d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x71);
  while (cVar1 == '\0') {
    F_00a97d20(this,(int *)param_1[2]);
    piVar2 = (int *)*param_1;
    F_00a93680(param_1 + 0x18);
    F_0042c880(param_1 + 3);
    F_00429760(param_1,0x74,800);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x71);
  }
  return 0;
}

/* ref: FUN_00a97d90 */
uint F_00a97d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa97d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * this_00;
  
  F_0042cbc0(this,param_1);
  this_00 = (undefined4 *)((int)this + 0x54);
  *this_00 = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  if (this_00 != param_2) {
    F_00a93680(this_00);
    *this_00 = *param_2;
    *(undefined4 *)((int)this + 0x58) = param_2[1];
    *(undefined4 *)((int)this + 0x5c) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a97de0 */
uint F_00a97de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa97de0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x71))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_009283d0(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x71) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x71) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x71) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0x1c];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x1c))) = (char)piVar3[0x1c];
      *(char *)(piVar3 + 0x1c) = (char)iVar1;
      goto LAB_00a97efa;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x71) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x71) == '\0') {
      piVar4 = (int *)F_00912c80(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x71) == '\0') {
      uVar5 = F_00a883e0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00a97efa: ;
  if ((char)piVar3[0x1c] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x1c] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[0x1c] == '\0') {
            *(undefined1 *)(piVar6 + 0x1c) = 1;
            *(undefined1 *)(piVar4 + 0x1c) = 0;
            F_00a8bf20((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x71) == '\0') {
            if ((*(char *)(*piVar6 + 0x70) != '\x01') || (*(char *)(piVar6[2] + 0x70) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x70) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x70) = 1;
                *(undefined1 *)(piVar6 + 0x1c) = 0;
                F_00a8bf80((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 0x1c) = (char)piVar4[0x1c];
              *(undefined1 *)(piVar4 + 0x1c) = 1;
              *(undefined1 *)(piVar6[2] + 0x70) = 1;
              F_00a8bf20((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00a97fb8: ;
            *(undefined1 *)(piVar6 + 0x1c) = 0;
          }
        }
        else {
          if ((char)piVar6[0x1c] == '\0') {
            *(undefined1 *)(piVar6 + 0x1c) = 1;
            *(undefined1 *)(piVar4 + 0x1c) = 0;
            F_00a8bf80((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x71) == '\0') {
            if ((*(char *)(piVar6[2] + 0x70) == '\x01') && (*(char *)(*piVar6 + 0x70) == '\x01'))
            goto LAB_00a97fb8;
            if (*(char *)(*piVar6 + 0x70) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x70) = 1;
              *(undefined1 *)(piVar6 + 0x1c) = 0;
              F_00a8bf20((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 0x1c) = (char)piVar4[0x1c];
            *(undefined1 *)(piVar4 + 0x1c) = 1;
            *(undefined1 *)(*piVar6 + 0x70) = 1;
            F_00a8bf80((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x1c) = 1;
  }
  F_00a93680(piVar3 + 0x18);
  F_0042c880(piVar3 + 3);
  F_00429760(piVar3,0x74,800);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a98050 */
uint F_00a98050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa98050u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int * piVar7;
  
  piVar6 = (*(int * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x21))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[2]);
  F_00a886d0(&(*(int * PTR32 *)&gen_args[2]));
  piVar5 = (int *)*piVar6;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar6[2] + 0x21) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar6)) {
      piVar5[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar6;
      piVar5 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar6[2]) {
        piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x21) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar6[2];
        *(int * PTR32 *)(piVar6[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
        *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar1 = (undefined4 *)piVar6[1];
        if ((int *)*puVar1 == piVar6) {
          *puVar1 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar1[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar6[1];
      iVar2 = (*(int * PTR32 *)&gen_args[2])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 8))) = (char)piVar6[8];
      *(char *)(piVar6 + 8) = (char)iVar2;
      goto LAB_00a9816a;
    }
  }
  else {
    piVar7 = (int *)piVar6[2];
  }
  piVar5 = (int *)piVar6[1];
  if (*(char *)((int)piVar7 + 0x21) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = piVar7;
  }
  else if ((int *)*piVar5 == piVar6) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) == piVar6) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      piVar3 = (int *)F_00a88630(piVar7);
    }
    **(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) = piVar3;
  }
  (*(int *)(gen_frame + 0x0)) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4);
  if (*(int * PTR32 *)((*(int *)(gen_frame + 0x0)) + 8) == piVar6) {
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      uVar4 = F_00a88610(piVar7);
      *(uint *)((*(int *)(gen_frame + 0x0)) + 8) = uVar4;
    }
    else {
      *(int * PTR32 *)((*(int *)(gen_frame + 0x0)) + 8) = piVar5;
    }
  }
LAB_00a9816a: ;
  if ((char)(*(int * PTR32 *)(gen_frame + 0x4))[8] == '\x01') {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4)))) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[8] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00a8c0c0(this_00,piVar6);
            piVar5 = (int *)piVar6[2];
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x21) == '\0') {
            if ((*(char *)(*piVar5 + 0x20) != '\x01') || (*(char *)(piVar5[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x20) = 1;
                *(undefined1 *)(piVar5 + 8) = 0;
                F_00a8c120(this_00,piVar5);
                piVar5 = (int *)piVar6[2];
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 8) = (char)piVar6[8];
              *(undefined1 *)(piVar6 + 8) = 1;
              *(undefined1 *)(piVar5[2] + 0x20) = 1;
              F_00a8c0c0(this_00,piVar6);
              break;
            }
LAB_00a98228: ;
            *(undefined1 *)(piVar5 + 8) = 0;
          }
        }
        else {
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00a8c120(this_00,piVar6);
            piVar5 = (int *)*piVar6;
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x21) == '\0') {
            if ((*(char *)(piVar5[2] + 0x20) == '\x01') && (*(char *)(*piVar5 + 0x20) == '\x01'))
            goto LAB_00a98228;
            if (*(char *)(*piVar5 + 0x20) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x20) = 1;
              *(undefined1 *)(piVar5 + 8) = 0;
              F_00a8c0c0(this_00,piVar5);
              piVar5 = (int *)*piVar6;
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 8) = (char)piVar6[8];
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(*piVar5 + 0x20) = 1;
            F_00a8c120(this_00,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 4) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  F_0095c5e0((*(int * PTR32 *)(gen_frame + 0x4)) + 4,&(*(int *)(gen_frame + 0x0)),*(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5],(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5]);
  F_00429760(piVar6[5],0x18,800);
  F_00429760(piVar6,0x24,800);
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) != 0) {
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a982d0 */
unsigned int F_00a982d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa982d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x21)));
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  while (cVar1 == '\0') {
    F_00a982d0((*(undefined * PTR32 *)&gen_args[0]),(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_0095c5e0(piVar3 + 4,&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)piVar3[5],(undefined4 *)piVar3[5]);
    F_00429760(piVar3[5],0x18,800);
    F_00429760(piVar3,0x24,800);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return 0;
}

/* ref: FUN_00a98340 */
uint F_00a98340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa98340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 * this;
  undefined4 * puVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  puVar1 = (undefined4 *)F_00a93d20(((undefined1 *)(gen_frame + 0x4)),param_3);
  uVar2 = F_0042cbc0(((undefined1 *)(gen_frame + 0x14)),param_2);
  F_0042cbc0(param_1,uVar2);
  this = (undefined4 *)((int)param_1 + 0x54);
  *this = 0;
  *(undefined4 *)((int)param_1 + 0x58) = 0;
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  if (this != puVar1) {
    F_00a93680(this);
    *this = *puVar1;
    *(undefined4 *)((int)param_1 + 0x58) = puVar1[1];
    *(undefined4 *)((int)param_1 + 0x5c) = puVar1[2];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00a93680(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)param_1;
}

/* ref: FUN_00a983d0 */
uint F_00a983d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa983d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00a96910(param_1,param_2,param_3);
  return (uint)param_1;
}

/* ref: FUN_00a983f0 */
uint F_00a983f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa983f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  F_0095c5e0((undefined *)((*(int *)&gen_args[1]) + 4),&(*(int *)&gen_args[1]),**(undefined4 * PTR32 *)((*(int *)&gen_args[1]) + 8),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[1]) + 8));
  uVar2 = F_00429760(*(undefined4 *)(iVar1 + 8),0x18,800);
  return (uint)uVar2;
}

/* ref: FUN_00a98420 */
uint F_00a98420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa98420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a934c0((undefined *)(param_2 + 8));
  return uVar1;
}

/* ref: FUN_00a98430 */
uint F_00a98430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa98430u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined * this_00;
  
  puVar4 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  this_00 = (undefined *)((*(int *)&gen_args[2]) + 0xc);
  cVar1 = *(char *)((int)puVar4 + 0xe1);
  bVar3 = 1;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      bVar3 = F_0042c7c0(this_00,puVar4 + 3);
    }
    else {
      bVar3 = F_0042c7c0(puVar4 + 3,this_00);
      bVar3 = bVar3 == 0;
    }
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined4 *)(gen_frame + 0x8)) >> 8)));
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
    if (bVar3 == 0) {
      puVar5 = (undefined4 *)puVar4[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar4;
    }
    puVar2 = puVar4;
    puVar4 = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0xe1);
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != 0) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar4 = (undefined4 *)F_00a96d70((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar4;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00a88e60(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar4 = (*(undefined4 * PTR32 *)&gen_args[3]);
  bVar3 = F_0042c7c0((*(undefined4 * PTR32 *)&gen_args[3]) + 3,this_00);
  if (bVar3 != 0) {
    puVar4 = (undefined4 *)F_00a96d70((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar4;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00a920d0((undefined *)((*(int *)&gen_args[2]) + 0xd0));
  F_00a920d0((undefined *)((*(int *)&gen_args[2]) + 0xc0));
  F_0042c880((undefined *)((*(int *)&gen_args[2]) + 0x68));
  F_0042c880(this_00);
  F_00429760((*(int *)&gen_args[2]),0xe4,800);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar4;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a98560 */
uint F_00a98560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa98560u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  int * piVar1;
  int * piVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  piVar2 = (*(int * PTR32 *)&gen_args[3]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  this_00 = (*(int * PTR32 *)&gen_args[3]) + 3;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) {
    F_00a96d70((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    bVar3 = F_0042c7c0(this_00,(*(int * PTR32 *)&gen_args[2]) + 3);
    if (bVar3 != 0) {
      F_00a96d70((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    bVar3 = F_0042c7c0((undefined *)(piVar1[2] + 0xc),this_00);
    if (bVar3 != 0) {
      F_00a96d70((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    bVar3 = F_0042c7c0(this_00,(*(int * PTR32 *)&gen_args[2]) + 3);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00a88e60(&(*(int * PTR32 *)&gen_args[3]));
      bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[3]) + 3,this_00);
      if (bVar3 != 0) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0xe1))) == '\0') {
          F_00a96d70((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00a96d70((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[2]) + 3,this_00);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00910a90(&(*(int * PTR32 *)&gen_args[3]));
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) ||
         (bVar3 = F_0042c7c0(this_00,(*(int * PTR32 *)&gen_args[3]) + 3), bVar3 != 0)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0xe1))) == '\0') {
          F_00a96d70((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00a96d70((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar4 = (undefined4 *)F_00a98430((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar4;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a98710 */
uint F_00a98710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa98710u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  char cVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined * this_00;
  char cVar5;
  
  puVar4 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  this_00 = (undefined *)((*(int *)&gen_args[2]) + 0xc);
  cVar1 = *(char *)((int)puVar4 + 0x71);
  cVar5 = '\x01';
  (*(undefined * PTR32 *)(gen_frame + 0x164)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x168)) + 0)) = 1;
  (*(undefined4 *)(gen_frame + 0x168)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x168)), 1, 3),1);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  while (cVar1 == '\0') {
    (*(undefined4 * PTR32 *)(gen_frame + 0x160)) = puVar4;
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = puVar4 + 3;
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)0xa987b3;
      F_0042cbc0(((undefined1 *)(gen_frame + 0x10c)),puVar4 + 3);
      (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = this_00;
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)0xa987bf;
      F_0042cbc0(((undefined1 *)(gen_frame + 0xb8)),this_00);
      (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = ((undefined1 *)(gen_frame + 0x10c));
      (*(undefined4 *)(gen_frame + 0x50)) = 0xa987cd;
      F_0042cbc0((gen_frame + 0x58),((undefined1 *)(gen_frame + 0x10c)));
      F_0042cbc0((gen_frame + 0x4),((undefined1 *)(gen_frame + 0xb8)));
      uVar3 = F_00a67e30((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                           (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),
                           (*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),
                           (*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x50)),(*(undefined1 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)));
      (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa987f6;
      F_0042c880(((undefined1 *)(gen_frame + 0xb8)));
      (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa987fe;
      F_0042c880(((undefined1 *)(gen_frame + 0x10c)));
      cVar5 = (char)uVar3;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = this_00;
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)0xa98755;
      F_0042cbc0(((undefined1 *)(gen_frame + 0xb8)),this_00);
      (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = puVar4 + 3;
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)0xa98761;
      F_0042cbc0(((undefined1 *)(gen_frame + 0x10c)),puVar4 + 3);
      (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = ((undefined1 *)(gen_frame + 0xb8));
      (*(undefined4 *)(gen_frame + 0x50)) = 0xa98772;
      F_0042cbc0((gen_frame + 0x58),((undefined1 *)(gen_frame + 0xb8)));
      F_0042cbc0((gen_frame + 0x4),((undefined1 *)(gen_frame + 0x10c)));
      uVar3 = F_00a67e30((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                           (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),
                           (*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),
                           (*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x50)),(*(undefined1 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)));
      (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa98795;
      F_0042c880(((undefined1 *)(gen_frame + 0x10c)));
      (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa987a0;
      F_0042c880(((undefined1 *)(gen_frame + 0xb8)));
      cVar5 = (char)uVar3 == '\0';
    }
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x168)) + 0)) = cVar5;
    (*(undefined4 *)(gen_frame + 0x168)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x168)), 1, 3),cVar5);
    if (cVar5 == '\0') {
      puVar4 = (undefined4 *)puVar4[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
    puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x160));
    cVar1 = *(char *)((int)puVar4 + 0x71);
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (cVar5 != '\0') {
    if (puVar2 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x164)) + 4)))) {
      (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)(*(int *)&gen_args[2]);
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = puVar2;
      (*(int *)(gen_frame + 0xa0)) = 1;
      goto LAB_00a98835;
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa9885a;
    F_00a88f00(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar4 = (*(undefined4 * PTR32 *)&gen_args[3]);
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = this_00;
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)0xa98866;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x10c)),this_00);
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = puVar4 + 3;
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)0xa98875;
  F_0042cbc0(((undefined1 *)(gen_frame + 0xb8)),(*(undefined4 * PTR32 *)(gen_frame + 0xa8)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = ((undefined1 *)(gen_frame + 0x10c));
  (*(undefined4 *)(gen_frame + 0x50)) = 0xa98883;
  F_0042cbc0((gen_frame + 0x58),((undefined1 *)(gen_frame + 0x10c)));
  F_0042cbc0((gen_frame + 0x4),((undefined1 *)(gen_frame + 0xb8)));
  uVar3 = F_00a67e30((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),
                       (*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),
                       (*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x50)),(*(undefined1 * PTR32 *)(gen_frame + 0x54))
                       ,(*(undefined4 *)(gen_frame + 0x58)));
  (*(undefined4 * PTR32 *)&gen_args[3]) = ((undefined4 *)GEN_TOP(CONCAT13((char)uVar3,GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[3]), 0, 3))));
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa988ad;
  F_0042c880(((undefined1 *)(gen_frame + 0xb8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa988b5;
  F_0042c880(((undefined1 *)(gen_frame + 0x10c)));
  if ((*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[3]) + 3)))) == '\0') {
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa988d4;
    F_00a93680((undefined *)((*(int *)&gen_args[2]) + 0x60));
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa988db;
    F_0042c880(this_00);
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0x320;
    (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)0x74;
    (*(int *)(gen_frame + 0xa0)) = (*(int *)&gen_args[2]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)0xa988eb;
    F_00429760((*(int *)&gen_args[2]),0x74,800);
    *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar4;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)(*(int *)&gen_args[2]);
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = puVar2;
  (*(int *)(gen_frame + 0xa0)) = (*(undefined4 *)(gen_frame + 0x168));
LAB_00a98835: ;
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)(*(int *)&gen_args[2]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = &(*(undefined4 * PTR32 *)&gen_args[3]);
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = puVar2;
  puVar4 = (undefined4 *)F_00a96fb0((*(undefined * PTR32 *)(gen_frame + 0x164)),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(int *)(gen_frame + 0xa0)),puVar2,(*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar4;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a98900 */
uint F_00a98900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa98900u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int * piVar1;
  int * piVar2;
  int * piVar3;
  byte bVar4;
  undefined4 * puVar5;
  
  piVar3 = (*(int * PTR32 *)&gen_args[3]);
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  piVar1 = (*(int * PTR32 *)&gen_args[3]) + 3;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) {
    (*(int * PTR32 *)(gen_frame + 0xa4)) = (*(int * PTR32 *)&gen_args[3]);
    (*(int * PTR32 *)(gen_frame + 0xa0)) = piVar2;
    (*(undefined1 * PTR32 *)(gen_frame + 0x9c)) = (undefined1 *)0x1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)&gen_args[1]);
    (*(undefined4 *)(gen_frame + 0x94)) = 0xa98927;
    F_00a96fb0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar2,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar2) {
    (*(int * PTR32 *)(gen_frame + 0x50)) = (*(int * PTR32 *)&gen_args[2]) + 3;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0xa98947;
    F_0042cbc0((gen_frame + 0x54),(*(int * PTR32 *)&gen_args[2]) + 3);
    F_0042cbc0((gen_frame + 0x0),piVar1);
    bVar4 = F_00a8a560((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                         (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                         (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(int * PTR32 *)(gen_frame + 0x50)),
                         (*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),
                         (*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),
                         (*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)),(*(undefined1 * PTR32 *)(gen_frame + 0x9c)),(*(int * PTR32 *)(gen_frame + 0xa0)),(*(int * PTR32 *)(gen_frame + 0xa4)));
    if (bVar4 != 0) {
      (*(int * PTR32 *)(gen_frame + 0xa4)) = piVar3;
      (*(int * PTR32 *)(gen_frame + 0xa0)) = (*(int * PTR32 *)&gen_args[2]);
      (*(undefined1 * PTR32 *)(gen_frame + 0x9c)) = (undefined1 *)0x1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)&gen_args[1]);
      (*(undefined4 *)(gen_frame + 0x94)) = 0xa98973;
      F_00a96fb0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar3);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar2) {
    (*(int * PTR32 *)&gen_args[3]) = (int *)(piVar2[2] + 0xc);
    (*(int * PTR32 *)(gen_frame + 0x50)) = piVar1;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0xa98993;
    F_0042cbc0((gen_frame + 0x54),piVar1);
    F_0042cbc0((gen_frame + 0x0),(*(int * PTR32 *)&gen_args[3]));
    bVar4 = F_00a8a560((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                         (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                         (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(int * PTR32 *)(gen_frame + 0x50)),
                         (*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),
                         (*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),
                         (*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)),(*(undefined1 * PTR32 *)(gen_frame + 0x9c)),(*(int * PTR32 *)(gen_frame + 0xa0)),(*(int * PTR32 *)(gen_frame + 0xa4)));
    if (bVar4 != 0) {
      (*(int * PTR32 *)(gen_frame + 0xa0)) = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8)));
      (*(int * PTR32 *)(gen_frame + 0xa4)) = piVar3;
      (*(undefined1 * PTR32 *)(gen_frame + 0x9c)) = (undefined1 *)0x0;
      (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)&gen_args[1]);
      (*(undefined4 *)(gen_frame + 0x94)) = 0xa989c5;
      F_00a96fb0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)(gen_frame + 0xa0)),piVar3);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x50)) = (*(int * PTR32 *)&gen_args[2]) + 3;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0xa989db;
    F_0042cbc0((gen_frame + 0x54),(*(int * PTR32 *)&gen_args[2]) + 3);
    F_0042cbc0((gen_frame + 0x0),piVar1);
    bVar4 = F_00a8a560((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                         (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                         (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(int * PTR32 *)(gen_frame + 0x50)),
                         (*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),
                         (*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),
                         (*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)),(*(undefined1 * PTR32 *)(gen_frame + 0x9c)),(*(int * PTR32 *)(gen_frame + 0xa0)),(*(int * PTR32 *)(gen_frame + 0xa4)));
    if (bVar4 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      (*(int * PTR32 *)(gen_frame + 0xa4)) = (int *)0xa989ff;
      F_00a88f00(&(*(int * PTR32 *)&gen_args[3]));
      (*(int * PTR32 *)(gen_frame + 0x50)) = piVar1;
      (*(undefined4 *)(gen_frame + 0x4c)) = 0xa98a0a;
      F_0042cbc0((gen_frame + 0x54),piVar1);
      F_0042cbc0((gen_frame + 0x0),(*(int * PTR32 *)&gen_args[3]) + 3);
      bVar4 = F_00a8a560((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                           (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                           (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(int * PTR32 *)(gen_frame + 0x50)),
                           (*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),
                           (*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),
                           (*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)),(*(undefined1 * PTR32 *)(gen_frame + 0x9c)),(*(int * PTR32 *)(gen_frame + 0xa0)),(*(int * PTR32 *)(gen_frame + 0xa4))
                          );
      if (bVar4 != 0) {
        (*(int * PTR32 *)(gen_frame + 0xa4)) = piVar3;
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0x71))) == '\0') {
          (*(int * PTR32 *)(gen_frame + 0xa0)) = (*(int * PTR32 *)&gen_args[2]);
          (*(undefined1 * PTR32 *)(gen_frame + 0x9c)) = (undefined1 *)0x1;
          (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)&gen_args[1]);
          (*(undefined4 *)(gen_frame + 0x94)) = 0xa98a58;
          F_00a96fb0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar3);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        (*(int * PTR32 *)(gen_frame + 0xa0)) = (*(int * PTR32 *)&gen_args[3]);
        (*(undefined1 * PTR32 *)(gen_frame + 0x9c)) = (undefined1 *)0x0;
        (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)&gen_args[1]);
        (*(undefined4 *)(gen_frame + 0x94)) = 0xa98a41;
        F_00a96fb0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar3);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    (*(int * PTR32 *)(gen_frame + 0x50)) = piVar1;
    (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
    (*(undefined4 *)(gen_frame + 0x4c)) = 0xa98a74;
    F_0042cbc0((gen_frame + 0x54),piVar1);
    F_0042cbc0((gen_frame + 0x0),(*(int * PTR32 *)&gen_args[3]) + 3);
    bVar4 = F_00a8a560((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                         (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                         (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(int * PTR32 *)(gen_frame + 0x50)),
                         (*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),
                         (*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),
                         (*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)),(*(undefined1 * PTR32 *)(gen_frame + 0x9c)),(*(int * PTR32 *)(gen_frame + 0xa0)),(*(int * PTR32 *)(gen_frame + 0xa4)));
    if (bVar4 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      (*(int * PTR32 *)(gen_frame + 0xa4)) = (int *)0xa98a9e;
      F_009283d0(&(*(int * PTR32 *)&gen_args[3]));
      if ((*(int * PTR32 *)&gen_args[3]) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
        (*(int * PTR32 *)(gen_frame + 0x50)) = (*(int * PTR32 *)&gen_args[3]) + 3;
        (*(undefined4 *)(gen_frame + 0x4c)) = 0xa98ab4;
        F_0042cbc0((gen_frame + 0x54),(*(int * PTR32 *)&gen_args[3]) + 3);
        F_0042cbc0((gen_frame + 0x0),piVar1);
        bVar4 = F_00a8a560((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                             (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                             (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(int * PTR32 *)(gen_frame + 0x50)),
                             (*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),
                             (*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),
                             (*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)),(*(undefined1 * PTR32 *)(gen_frame + 0x9c)),(*(int * PTR32 *)(gen_frame + 0xa0)),
                             (*(int * PTR32 *)(gen_frame + 0xa4)));
        if (bVar4 == 0) goto LAB_00a98b09;
      }
      (*(int * PTR32 *)(gen_frame + 0xa4)) = piVar3;
      if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x71))) == '\0') {
        (*(int * PTR32 *)(gen_frame + 0xa0)) = (*(int * PTR32 *)&gen_args[3]);
        (*(undefined1 * PTR32 *)(gen_frame + 0x9c)) = (undefined1 *)0x1;
        (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)&gen_args[1]);
        (*(undefined4 *)(gen_frame + 0x94)) = 0xa98afe;
        F_00a96fb0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar3);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
      (*(int * PTR32 *)(gen_frame + 0xa0)) = (*(int * PTR32 *)&gen_args[2]);
      (*(undefined1 * PTR32 *)(gen_frame + 0x9c)) = (undefined1 *)0x0;
      (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)&gen_args[1]);
      (*(undefined4 *)(gen_frame + 0x94)) = 0xa98ae8;
      F_00a96fb0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar3);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
LAB_00a98b09: ;
  (*(int * PTR32 *)(gen_frame + 0xa4)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0xa0)) = piVar3;
  (*(undefined1 * PTR32 *)(gen_frame + 0x9c)) = ((undefined1 *)(gen_frame + 0xb4));
  (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (undefined4 *)0xa98b17;
  puVar5 = (undefined4 *)F_00a98710((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0xb4)),piVar3,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a98b30 */
uint F_00a98b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa98b30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00a934c0(param_4 + 5);
    F_00429760(param_4,0x28,0x191);
                    
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
      goto LAB_00a98ba6;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_00a98ba6;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_00a98ba6: ;
  cVar1 = *(char *)(param_4[1] + 0x24);
  piVar3 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar4 + 0x24) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar3[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar4 = piVar6[2];
      if (*(char *)(iVar4 + 0x24) == '\0') {
        *(undefined1 *)(piVar5 + 9) = 1;
        *(undefined1 *)(iVar4 + 0x24) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x24))) = 0;
        piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
      }
      else {
        if (piVar3 == (int *)piVar5[2]) {
          piVar3 = (int *)piVar5[2];
          piVar5[2] = *piVar3;
          if (*(char *)(*piVar3 + 0x25) == '\0') {
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
        *(undefined1 *)(piVar3[1] + 0x24) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x24))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x25) == '\0') {
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
LAB_00a98d31: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*(char *)(iVar4 + 0x24) != '\0') {
        if (piVar3 == (int *)*piVar5) {
          iVar4 = *piVar5;
          *piVar5 = *(int *)(iVar4 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar4 + 8) + 0x25))) == '\0') {
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
        *(undefined1 *)(piVar3[1] + 0x24) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x24))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x25) == '\0') {
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
        goto LAB_00a98d31;
      }
      *(undefined1 *)(piVar5 + 9) = 1;
      *(undefined1 *)(iVar4 + 0x24) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x24))) = 0;
      piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
    }
    cVar1 = *(char *)(piVar3[1] + 0x24);
  } while( true );
}

/* ref: FUN_00a98d60 */
uint F_00a98d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa98d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  piVar4 = (*(int * PTR32 *)&gen_args[4]);
  if (0xfffffffd < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    F_0095c5e0((*(int * PTR32 *)&gen_args[4]) + 4,&(*(undefined4 *)&gen_args[2]),*((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[5])),((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[5])));
    F_00429760(piVar4[5],0x18,800);
    F_00429760(piVar4,0x2c,800);
                    
    F_00c4579a("map/set<T> too long");
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 1;
  (*(int * PTR32 *)&gen_args[4])[1] = (int)(*(undefined4 * PTR32 *)&gen_args[3]);
  if ((*(undefined4 * PTR32 *)&gen_args[3]) == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1] = (*(int * PTR32 *)&gen_args[4]);
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(int * PTR32 *)&gen_args[4]);
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = (*(int * PTR32 *)&gen_args[4]);
  }
  else if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
    (*(undefined4 * PTR32 *)&gen_args[3])[2] = (*(int * PTR32 *)&gen_args[4]);
    if ((*(undefined4 * PTR32 *)&gen_args[3]) == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = (*(int * PTR32 *)&gen_args[4]);
    }
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[4]);
    if ((*(undefined4 * PTR32 *)&gen_args[3]) == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (int)(*(int * PTR32 *)&gen_args[4]);
    }
  }
  cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[4])[1] + 0x28)));
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[4]);
      *(undefined1 *)(iVar2 + 0x28) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x28) == '\0') {
        *(undefined1 *)(piVar5 + 10) = 1;
        *(undefined1 *)(iVar2 + 0x28) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x28))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x29) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x28) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x28))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x29) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00a98f7d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x28) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x29))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x28) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x28))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x29) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00a98f7d;
      }
      *(undefined1 *)(piVar5 + 10) = 1;
      *(undefined1 *)(iVar2 + 0x28) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x28))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x28);
  } while( true );
}

/* ref: FUN_00a98fb0 */
uint F_00a98fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa98fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  bool bVar4;
  
  iVar1 = (*(int *)&gen_args[2]);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar4 = true;
  (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),1);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar4 = *(uint *)(iVar1 + 0xc) < (uint)puVar3[3];
      }
      else {
        bVar4 = *(uint *)(iVar1 + 0xc) <= (uint)puVar3[3];
      }
      (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),bVar4);
      if (bVar4 == false) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar3;
  if (bVar4 != false) {
    if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar3 = (undefined4 *)F_00a971f0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,iVar1);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00a88fe0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)(iVar1 + 0xc)) {
    puVar3 = (undefined4 *)F_00a971f0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(int *)&gen_args[2]),puVar3,iVar1);
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_0095c5e0((undefined *)(iVar1 + 0x10),&(*(undefined4 * PTR32 *)&gen_args[3]),**(undefined4 * PTR32 *)(iVar1 + 0x14),
               *(undefined4 * PTR32 *)(iVar1 + 0x14));
  F_00429760(*(undefined4 *)(iVar1 + 0x14),0x18,800);
  F_00429760(iVar1,0x24,800);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a990b0 */
uint F_00a990b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa990b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xe4,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x38) = 0;
  F_00a97460((int)this + 0xd,puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a99100 */
uint F_00a99100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa99100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xe4,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x38) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_00a95ec0(puVar1 + 3,param_1);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a99150 */
uint F_00a99150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa99150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x74,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 3,param_1);
    F_00a93d20(puVar1 + 0x18,param_1 + 0x54);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a991b0 */
uint F_00a991b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa991b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a969d0(puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a99200 */
uint F_00a99200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa99200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 * puVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  puVar1 = (undefined4 *)(param_3 + 0x54);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_3);
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  if (&(*(undefined4 *)(gen_frame + 0x58)) != puVar1) {
    F_00a93680(&(*(undefined4 *)(gen_frame + 0x58)));
    (*(undefined4 *)(gen_frame + 0x58)) = *puVar1;
    (*(undefined4 *)(gen_frame + 0x5c)) = *(undefined4 *)(param_3 + 0x58);
    (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)(param_3 + 0x5c);
    *puVar1 = 0;
    *(undefined4 *)(param_3 + 0x58) = 0;
    *(undefined4 *)(param_3 + 0x5c) = 0;
  }
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,((undefined1 *)(gen_frame + 0x4)));
    F_00a93d20((undefined *)((int)param_2 + 0x54),&(*(undefined4 *)(gen_frame + 0x58)));
  }
  F_00a93680(&(*(undefined4 *)(gen_frame + 0x58)));
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar2;
}

/* ref: FUN_00a992a0 */
uint F_00a992a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa992a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  ulonglong uVar3;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[2]);
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]) + 1;
  (*(undefined4 *)(gen_frame + 0x0)) = *(*(undefined4 * PTR32 *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)F_004296a0(0x18,0,800);
  *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
  (*(undefined4 * PTR32 *)(gen_frame + 0x8))[1] = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
  (*(undefined4 * PTR32 *)(gen_frame + 0x8))[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
  *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 5) = 1;
  *(undefined1 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 0x15) = 1;
  F_00a92ec0(((undefined1 *)(gen_frame + 0x4)),puVar1);
  (*(undefined4 *)(gen_frame + 0x18)) = puVar2[6];
  (*(undefined4 *)(gen_frame + 0x14)) = puVar2[5];
  if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
    F_00a95fb0((*(undefined * PTR32 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x0)));
  }
  F_0095c5e0(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 * PTR32 *)&gen_args[2]),*(*(undefined4 * PTR32 *)(gen_frame + 0x8)),(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  uVar3 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x8)),0x18,800);
  return (uint)uVar3;
}

/* ref: FUN_00a99340 */
uint F_00a99340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa99340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *param_3;
    param_2[2] = param_3[2];
    uVar1 = F_00a93db0(param_2 + 4,param_3 + 4);
  }
  return uVar1;
}

/* ref: FUN_00a99370 */
uint F_00a99370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa99370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x28,0,0x191);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 9) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 3) = *param_1;
    *(undefined2 *)(puVar1 + 4) = param_1[2];
    F_00a93db0(puVar1 + 5,param_1 + 4);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a993d0 */
uint F_00a993d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa993d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint * local_8;
  
  local_8 = *(uint * PTR32 *)((int)this + 4);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    puVar1 = (uint *)F_004296a0(0x24,0,800);
    *puVar1 = *(uint *)((int)this + 4);
    puVar1[1] = *(uint *)((int)this + 4);
    puVar1[2] = *(uint *)((int)this + 4);
    *(undefined2 *)(puVar1 + 8) = 0;
    F_00a969d0(puVar1 + 3,param_1 + 3);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_1 + 8);
    if (*(char *)((int)local_8 + 0x21) != '\0') {
      local_8 = puVar1;
    }
    uVar2 = F_00a993d0(this,(undefined4 *)*param_1,(uint)puVar1);
    *puVar1 = uVar2;
    uVar2 = F_00a993d0(this,(undefined4 *)param_1[2],(uint)puVar1);
    puVar1[2] = uVar2;
  }
  return (uint)local_8;
}

/* ref: FUN_00a99470 */
uint F_00a99470(unsigned int gen_a0)
{
  GEN_ENTER(0xa99470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined * this_00;
  undefined4 * puVar5;
  int * piVar6;
  
  *(undefined4 *)this = 0;
  piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = this;
  if (piVar6 != *(int * PTR32 *)((int)this + 8)) {
    do {
      piVar6[0x18] = 0;
      iVar2 = piVar6[0x31];
      if (piVar6[0x30] != iVar2) {
        this_00 = (undefined *)F_00a8c970(iVar2,iVar2,piVar6[0x30],(*(undefined4 * PTR32 *)(gen_frame + 0x10)));
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = this_00;
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)piVar6[0x31];
        if (this_00 != (undefined *)piVar6[0x31]) {
          do {
            F_0042c880((undefined *)((int)this_00 + 0xbc));
            F_0042c880((undefined *)((int)this_00 + 0x60));
            F_0042c880(this_00);
            this_00 = (undefined *)((int)this_00 + 0x11c);
            this = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
          } while (this_00 != (*(undefined * PTR32 *)(gen_frame + 0x18)));
        }
        piVar6[0x31] = (int)(*(undefined * PTR32 *)(gen_frame + 0x14));
      }
      puVar5 = (undefined4 *)(piVar6[0x19] + piVar6[0x18]);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)F_00a976a0((undefined4 *)((int)this + 4),((undefined1 *)(gen_frame + 0xc)),piVar6);
        piVar6 = (undefined4 *)*puVar5;
      }
      else if (*(char *)((int)piVar6 + 0xe1) == '\0') {
        puVar3 = (undefined4 *)piVar6[2];
        if (*(char *)((int)puVar3 + 0xe1) == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0xe1);
          puVar5 = (undefined4 *)*puVar3;
          while (piVar6 = puVar3, cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar5 + 0xe1);
            puVar3 = puVar5;
            puVar5 = (undefined4 *)*puVar5;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0xe1);
          puVar4 = (undefined4 *)piVar6[1];
          puVar3 = piVar6;
          while ((puVar5 = puVar4, piVar6 = puVar5, cVar1 == '\0' &&
                 (puVar3 == (undefined4 *)puVar5[2]))) {
            cVar1 = *(char *)((int)puVar5[1] + 0xe1);
            puVar4 = (undefined4 *)puVar5[1];
            puVar3 = puVar5;
          }
        }
      }
    } while (piVar6 != *(undefined4 * PTR32 *)((int)this + 8));
    *(undefined4 *)this = *(undefined4 *)((int)this + 0xc);
    return (uint)puVar5;
  }
  *(uint *)this = *(uint *)((int)this + 0xc);
  return *(uint *)((int)this + 0xc);
}

/* ref: FUN_00a995a0 */
uint F_00a995a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa995a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined * this_00;
  undefined4 * puVar5;
  int * piVar6;
  
  *(undefined4 *)this = 0;
  piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = this;
  if (piVar6 != *(int * PTR32 *)((int)this + 8)) {
    do {
      piVar6[0x2f] = 0;
      piVar6[0x19] = 0;
      iVar2 = piVar6[0x35];
      if (piVar6[0x34] != iVar2) {
        this_00 = (undefined *)F_00a8c970(iVar2,iVar2,piVar6[0x34],(*(undefined4 * PTR32 *)(gen_frame + 0x10)));
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = this_00;
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)piVar6[0x35];
        if (this_00 != (undefined *)piVar6[0x35]) {
          do {
            F_0042c880((undefined *)((int)this_00 + 0xbc));
            F_0042c880((undefined *)((int)this_00 + 0x60));
            F_0042c880(this_00);
            this_00 = (undefined *)((int)this_00 + 0x11c);
            this = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
          } while (this_00 != (*(undefined * PTR32 *)(gen_frame + 0x18)));
        }
        piVar6[0x35] = (int)(*(undefined * PTR32 *)(gen_frame + 0x14));
      }
      puVar5 = (undefined4 *)(piVar6[0x19] + piVar6[0x18]);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)F_00a976a0((undefined4 *)((int)this + 4),((undefined1 *)(gen_frame + 0xc)),piVar6);
        piVar6 = (undefined4 *)*puVar5;
      }
      else if (*(char *)((int)piVar6 + 0xe1) == '\0') {
        puVar3 = (undefined4 *)piVar6[2];
        if (*(char *)((int)puVar3 + 0xe1) == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0xe1);
          puVar5 = (undefined4 *)*puVar3;
          while (piVar6 = puVar3, cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar5 + 0xe1);
            puVar3 = puVar5;
            puVar5 = (undefined4 *)*puVar5;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0xe1);
          puVar4 = (undefined4 *)piVar6[1];
          puVar3 = piVar6;
          while ((puVar5 = puVar4, piVar6 = puVar5, cVar1 == '\0' &&
                 (puVar3 == (undefined4 *)puVar5[2]))) {
            cVar1 = *(char *)((int)puVar5[1] + 0xe1);
            puVar4 = (undefined4 *)puVar5[1];
            puVar3 = puVar5;
          }
        }
      }
    } while (piVar6 != *(undefined4 * PTR32 *)((int)this + 8));
    *(undefined4 *)this = *(undefined4 *)((int)this + 0xc);
    return (uint)puVar5;
  }
  *(uint *)this = *(uint *)((int)this + 0xc);
  return *(uint *)((int)this + 0xc);
}

/* ref: FUN_00a996d0 */
uint F_00a996d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa996d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a97b90(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a99700 */
uint F_00a99700(unsigned int gen_a0)
{
  GEN_ENTER(0xa99700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a97d20(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a99730 */
uint F_00a99730(unsigned int gen_a0)
{
  GEN_ENTER(0xa99730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a97b00(this);
  uVar1 = F_00429760(*(undefined4 *)this,0x78,800);
  return (uint)uVar1;
}

/* ref: FUN_00a99750 */
unsigned int F_00a99750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa99750u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x29)));
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  while (cVar1 == '\0') {
    F_00a99750((*(undefined * PTR32 *)&gen_args[0]),(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_0095c5e0(piVar3 + 4,&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)piVar3[5],(undefined4 *)piVar3[5]);
    F_00429760(piVar3[5],0x18,800);
    F_00429760(piVar3,0x2c,800);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x29);
  }
  return 0;
}

/* ref: FUN_00a997c0 */
uint F_00a997c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa997c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00a97b90(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xe1) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0xe1) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xe1);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xe1);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xe1);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xe1);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a976a0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a99890 */
uint F_00a99890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa99890u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00a97d20(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x71) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0x71) == '\0') {
        cVar1 = *(char *)(*param_2 + 0x71);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x71);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x71);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x71);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a97de0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a99950 */
uint F_00a99950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa99950u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int * piVar7;
  
  piVar6 = (*(int * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x29))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[2]);
  F_00a884e0(&(*(int * PTR32 *)&gen_args[2]));
  piVar5 = (int *)*piVar6;
  if (*(char *)((int)piVar5 + 0x29) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar6[2] + 0x29) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar6)) {
      piVar5[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar6;
      piVar5 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar6[2]) {
        piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x29) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar6[2];
        *(int * PTR32 *)(piVar6[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
        *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar1 = (undefined4 *)piVar6[1];
        if ((int *)*puVar1 == piVar6) {
          *puVar1 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar1[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar6[1];
      iVar2 = (*(int * PTR32 *)&gen_args[2])[10];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 10))) = (char)piVar6[10];
      *(char *)(piVar6 + 10) = (char)iVar2;
      goto LAB_00a99a6a;
    }
  }
  else {
    piVar7 = (int *)piVar6[2];
  }
  piVar5 = (int *)piVar6[1];
  if (*(char *)((int)piVar7 + 0x29) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = piVar7;
  }
  else if ((int *)*piVar5 == piVar6) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) == piVar6) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x29) == '\0') {
      piVar3 = (int *)F_00a88160(piVar7);
    }
    **(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) = piVar3;
  }
  (*(int *)(gen_frame + 0x0)) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4);
  if (*(int * PTR32 *)((*(int *)(gen_frame + 0x0)) + 8) == piVar6) {
    if (*(char *)((int)piVar7 + 0x29) == '\0') {
      uVar4 = F_00a88140(piVar7);
      *(uint *)((*(int *)(gen_frame + 0x0)) + 8) = uVar4;
    }
    else {
      *(int * PTR32 *)((*(int *)(gen_frame + 0x0)) + 8) = piVar5;
    }
  }
LAB_00a99a6a: ;
  if ((char)(*(int * PTR32 *)(gen_frame + 0x4))[10] == '\x01') {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4)))) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[10] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[10] == '\0') {
            *(undefined1 *)(piVar5 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            F_00a8bb80(this_00,piVar6);
            piVar5 = (int *)piVar6[2];
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x29) == '\0') {
            if ((*(char *)(*piVar5 + 0x28) != '\x01') || (*(char *)(piVar5[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x28) = 1;
                *(undefined1 *)(piVar5 + 10) = 0;
                F_00a8bbe0(this_00,piVar5);
                piVar5 = (int *)piVar6[2];
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 10) = (char)piVar6[10];
              *(undefined1 *)(piVar6 + 10) = 1;
              *(undefined1 *)(piVar5[2] + 0x28) = 1;
              F_00a8bb80(this_00,piVar6);
              break;
            }
LAB_00a99b28: ;
            *(undefined1 *)(piVar5 + 10) = 0;
          }
        }
        else {
          if ((char)piVar5[10] == '\0') {
            *(undefined1 *)(piVar5 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            F_00a8bbe0(this_00,piVar6);
            piVar5 = (int *)*piVar6;
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x29) == '\0') {
            if ((*(char *)(piVar5[2] + 0x28) == '\x01') && (*(char *)(*piVar5 + 0x28) == '\x01'))
            goto LAB_00a99b28;
            if (*(char *)(*piVar5 + 0x28) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x28) = 1;
              *(undefined1 *)(piVar5 + 10) = 0;
              F_00a8bb80(this_00,piVar5);
              piVar5 = (int *)*piVar6;
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 10) = (char)piVar6[10];
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(*piVar5 + 0x28) = 1;
            F_00a8bbe0(this_00,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 4) + 4))));
    }
    *(undefined1 *)(piVar7 + 10) = 1;
  }
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  F_0095c5e0((*(int * PTR32 *)(gen_frame + 0x4)) + 4,&(*(int *)(gen_frame + 0x0)),*(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5],(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5]);
  F_00429760(piVar6[5],0x18,800);
  F_00429760(piVar6,0x2c,800);
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) != 0) {
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a99bd0 */
uint F_00a99bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa99bd0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x25))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00928170(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x25) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x25) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x25) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[9];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 9))) = (char)piVar3[9];
      *(char *)(piVar3 + 9) = (char)iVar1;
      goto LAB_00a99cea;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x25) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x25) == '\0') {
      piVar4 = (int *)F_00912b90(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x25) == '\0') {
      uVar5 = F_00a88320(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00a99cea: ;
  if ((char)piVar3[9] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[9] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[9] == '\0') {
            *(undefined1 *)(piVar6 + 9) = 1;
            *(undefined1 *)(piVar4 + 9) = 0;
            F_00a8bd30((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x25) == '\0') {
            if ((*(char *)(*piVar6 + 0x24) != '\x01') || (*(char *)(piVar6[2] + 0x24) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x24) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x24) = 1;
                *(undefined1 *)(piVar6 + 9) = 0;
                F_00a882c0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 9) = (char)piVar4[9];
              *(undefined1 *)(piVar4 + 9) = 1;
              *(undefined1 *)(piVar6[2] + 0x24) = 1;
              F_00a8bd30((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00a99da8: ;
            *(undefined1 *)(piVar6 + 9) = 0;
          }
        }
        else {
          if ((char)piVar6[9] == '\0') {
            *(undefined1 *)(piVar6 + 9) = 1;
            *(undefined1 *)(piVar4 + 9) = 0;
            F_00a882c0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x25) == '\0') {
            if ((*(char *)(piVar6[2] + 0x24) == '\x01') && (*(char *)(*piVar6 + 0x24) == '\x01'))
            goto LAB_00a99da8;
            if (*(char *)(*piVar6 + 0x24) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x24) = 1;
              *(undefined1 *)(piVar6 + 9) = 0;
              F_00a8bd30((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 9) = (char)piVar4[9];
            *(undefined1 *)(piVar4 + 9) = 1;
            *(undefined1 *)(*piVar6 + 0x24) = 1;
            F_00a882c0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 9) = 1;
  }
  F_00a934c0(piVar3 + 5);
  F_00429760(piVar3,0x28,0x191);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a99e30 */
unsigned int F_00a99e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa99e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  undefined * pvVar3;
  undefined * this_00;
  
  cVar1 = *(char *)((int)param_1 + 0x25);
  while (cVar1 == '\0') {
    F_00a99e30(this,(int *)param_1[2]);
    this_00 = (undefined *)param_1[5];
    piVar2 = (int *)*param_1;
    if (this_00 != (undefined *)0x0) {
      pvVar3 = (undefined *)param_1[6];
      for (; this_00 != pvVar3; this_00 = (undefined *)((int)this_00 + 0x88)) {
        F_0042c880(this_00);
      }
      F_00429760(param_1[5],((param_1[7] - param_1[5]) / 0x88) * 0x88,0x191);
    }
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    F_00429760(param_1,0x28,0x191);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x25);
  }
  return 0;
}

/* ref: FUN_00a99ef0 */
uint F_00a99ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xa99ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a982d0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a99f20 */
unsigned int F_00a99f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa99f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (this != param_1) {
    F_00a982d0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)((int)param_1 + 4) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
    *(undefined4 *)((int)param_1 + 8) = uVar1;
  }
  return 0;
}

/* ref: FUN_00a99f80 */
uint F_00a99f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa99f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xe4,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x38) = 0;
  F_00a97460((int)this + 0xd,puVar1 + 3,param_2);
  F_00a98430(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a99fe0 */
uint F_00a99fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa99fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xe4,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x38) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_00a95ec0(puVar1 + 3,param_3);
  }
  F_00a98560(this,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00a9a040 */
uint F_00a9a040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9a040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x74,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 3,param_3);
    F_00a93d20(puVar1 + 0x18,param_3 + 0x54);
  }
  F_00a98900(this,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00a9a0b0 */
uint F_00a9a0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9a0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar3 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x25) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(ushort *)((*(int *)&gen_args[2]) + 0xc) < *(ushort *)(puVar2 + 3);
      }
      else {
        bVar3 = *(ushort *)((*(int *)&gen_args[2]) + 0xc) <= *(ushort *)(puVar2 + 3);
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x25) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00a98b30((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00a891e0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if (*((ushort *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[3]) + 3))) < *(ushort *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00a98b30((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00a934c0((undefined *)((*(int *)&gen_args[2]) + 0x14));
  F_00429760((*(int *)&gen_args[2]),0x28,0x191);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a9a1a0 */
uint F_00a9a1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9a1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  bool bVar4;
  
  iVar1 = (*(int *)&gen_args[2]);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar4 = true;
  (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),1);
  if (*(char *)((int)puVar3[1] + 0x29) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar4 = *(uint *)(iVar1 + 0xc) < (uint)puVar3[3];
      }
      else {
        bVar4 = *(uint *)(iVar1 + 0xc) <= (uint)puVar3[3];
      }
      (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),bVar4);
      if (bVar4 == false) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar2 + 0x29) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar3;
  if (bVar4 != false) {
    if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar3 = (undefined4 *)F_00a98d60((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,iVar1);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00a89120(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)(iVar1 + 0xc)) {
    puVar3 = (undefined4 *)F_00a98d60((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(int *)&gen_args[2]),puVar3,iVar1);
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_0095c5e0((undefined *)(iVar1 + 0x10),&(*(undefined4 * PTR32 *)&gen_args[3]),**(undefined4 * PTR32 *)(iVar1 + 0x14),
               *(undefined4 * PTR32 *)(iVar1 + 0x14));
  F_00429760(*(undefined4 *)(iVar1 + 0x14),0x18,800);
  F_00429760(iVar1,0x2c,800);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a9a2a0 */
uint F_00a9a2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9a2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[3]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) {
    F_00a971f0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)(*(int * PTR32 *)&gen_args[2])[3]) {
      F_00a971f0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    if (*(uint *)(piVar1[2] + 0xc) < (uint)(*(int * PTR32 *)&gen_args[3])[3]) {
      F_00a971f0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,piVar1[2],(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)(*(int * PTR32 *)&gen_args[2])[3]) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00a88fe0(&(*(int * PTR32 *)&gen_args[3]));
      if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)piVar2[3]) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0x21))) != '\0') {
          F_00a971f0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00a971f0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    if ((uint)(*(int * PTR32 *)&gen_args[2])[3] < (uint)piVar2[3]) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00a886d0(&(*(int * PTR32 *)&gen_args[3]));
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) || ((uint)piVar2[3] < (uint)(*(int * PTR32 *)&gen_args[3])[3])) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x21))) != '\0') {
          F_00a971f0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00a971f0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar3 = (undefined4 *)F_00a98fb0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a9a400 */
uint F_00a9a400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9a400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x74,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  F_00a99200((int)this + 0xd,puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a9a450 */
uint F_00a9a450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9a450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x2c,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 10) = 0;
  F_00a992a0((int)this + 0xd,puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a9a4a0 */
uint F_00a9a4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9a4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x28,0,0x191);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 9) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 3) = *param_1;
    *(undefined2 *)(puVar1 + 4) = param_1[2];
    F_00a93db0(puVar1 + 5,param_1 + 4);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a9a500 */
uint F_00a9a500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9a500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint * local_8;
  
  local_8 = *(uint * PTR32 *)((int)this + 4);
  if (*(char *)((int)param_1 + 0x25) == '\0') {
    puVar1 = (uint *)F_004296a0(0x28,0,0x191);
    *puVar1 = *(uint *)((int)this + 4);
    puVar1[1] = *(uint *)((int)this + 4);
    puVar1[2] = *(uint *)((int)this + 4);
    *(undefined2 *)(puVar1 + 9) = 0;
    if (puVar1 + 3 != (uint *)0x0) {
      *(undefined2 *)(puVar1 + 3) = *(undefined2 *)(param_1 + 3);
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(param_1 + 4);
      F_00a93db0(puVar1 + 5,param_1 + 5);
    }
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_1 + 9);
    if (*(char *)((int)local_8 + 0x25) != '\0') {
      local_8 = puVar1;
    }
    uVar2 = F_00a9a500(this,(undefined4 *)*param_1,(uint)puVar1);
    *puVar1 = uVar2;
    uVar2 = F_00a9a500(this,(undefined4 *)param_1[2],(uint)puVar1);
    puVar1[2] = uVar2;
  }
  return (uint)local_8;
}

/* ref: FUN_00a9a5b0 */
unsigned int F_00a9a5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9a5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  
  iVar2 = *(int *)((int)this + 4);
  uVar7 = F_00a993d0(this,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4))),iVar2);
  *(uint *)(iVar2 + 4) = uVar7;
  piVar3 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x21) != '\0') {
    *piVar3 = (int)piVar3;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    return 0;
  }
  cVar1 = *(char *)(*piVar4 + 0x21);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0x21);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0x21);
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*(int *)(iVar5 + 8) + 0x21)));
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = iVar2;
  return 0;
}

/* ref: FUN_00a9a670 */
uint F_00a9a670(unsigned int gen_a0)
{
  GEN_ENTER(0xa9a670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined4 *)this = 0;
  F_00a93600((undefined4 *)((int)this + 8),&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 8),
               *(undefined4 *)((int)this + 0xc));
  F_00a97d20((undefined *)((int)this + 0x18),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 4))) = *(int *)((int)this + 0x1c);
  *(undefined4 *)*(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  uVar1 = *(uint *)((int)this + 0x1c);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00a9a6d0 */
uint F_00a9a6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9a6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  char cVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  byte bVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x168)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x16c);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0xe1);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 3,(*(undefined * PTR32 *)(gen_frame + 0x10)));
    if (bVar4 == 0) {
      puVar5 = (undefined4 *)*(*(undefined4 * PTR32 *)(gen_frame + 0xc));
    }
    else {
      puVar5 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0xc))[2];
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar2;
    }
    puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0xe1);
  }
  if ((puVar2 != *(undefined4 * PTR32 *)((int)this + 4)) &&
     (bVar4 = F_0042c7c0((*(undefined * PTR32 *)(gen_frame + 0x10)),puVar2 + 3), bVar4 == 0)) {
    F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
    return (uint)(puVar2 + 0x18);
  }
  F_0042b630(((undefined1 *)(gen_frame + 0xf0)));
  (*(undefined4 *)(gen_frame + 0x148)) = 0;
  (*(undefined4 *)(gen_frame + 0x14c)) = 0;
  (*(undefined4 *)(gen_frame + 0x150)) = 0;
  (*(undefined4 *)(gen_frame + 0x158)) = 0;
  (*(undefined4 *)(gen_frame + 0x15c)) = 0;
  (*(undefined4 *)(gen_frame + 0x160)) = 0;
  F_00a962b0(&(*(undefined4 *)(gen_frame + 0xe8)));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x14)),(*(undefined * PTR32 *)(gen_frame + 0x10)));
  (*(undefined4 *)(gen_frame + 0x6c)) = (*(undefined4 *)(gen_frame + 0xec));
  (*(undefined4 *)(gen_frame + 0x68)) = (*(undefined4 *)(gen_frame + 0xe8));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x70)),((undefined1 *)(gen_frame + 0xf0)));
  (*(undefined4 *)(gen_frame + 0xc4)) = (*(undefined4 *)(gen_frame + 0x144));
  F_00a92a70(((undefined1 *)(gen_frame + 0xc8)),&(*(undefined4 *)(gen_frame + 0x148)));
  F_00a92a70(((undefined1 *)(gen_frame + 0xd8)),&(*(undefined4 *)(gen_frame + 0x158)));
  puVar5 = (undefined4 *)F_004296a0(0xe4,0,800);
  *puVar5 = *(undefined4 *)((int)this + 4);
  puVar5[1] = *(undefined4 *)((int)this + 4);
  puVar5[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar5 + 0x38) = 0;
  if (puVar5 + 3 != (undefined4 *)0x0) {
    F_00a95ec0(puVar5 + 3,((undefined1 *)(gen_frame + 0x14)));
  }
  F_00a98560(this,&(*(undefined * PTR32 *)(gen_frame + 0x10)),puVar2,puVar5);
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  F_00a920d0(((undefined1 *)(gen_frame + 0xd8)));
  F_00a920d0(((undefined1 *)(gen_frame + 0xc8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x70)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00a920d0(&(*(undefined4 *)(gen_frame + 0x158)));
  F_00a920d0(&(*(undefined4 *)(gen_frame + 0x148)));
  F_0042c880(((undefined1 *)(gen_frame + 0xf0)));
  F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
  return (int)pvVar3 + 0x60;
}

/* ref: FUN_00a9a8b0 */
uint F_00a9a8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9a8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  uint uVar1;
  undefined4 * puVar2;
  
  (*(uint *)(gen_frame + 0x188)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18c);
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)param_1;
  (*(uint *)(gen_frame + 0xa4)) = 0xa9a8d1;
  (*(uint *)(gen_frame + 0x11c)) = F_00a8b750(this,param_1);
  if ((*(uint *)(gen_frame + 0x11c)) != *(uint *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)((*(uint *)(gen_frame + 0x11c)) + 0xc);
    (*(uint *)(gen_frame + 0xa4)) = 0xa9a8e7;
    F_0042cbc0(((undefined1 *)(gen_frame + 0x134)),(*(uint *)(gen_frame + 0x11c)) + 0xc);
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)param_1;
    (*(uint *)(gen_frame + 0xa4)) = 0xa9a8f3;
    F_0042cbc0(((undefined1 *)(gen_frame + 0xb8)),param_1);
    (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = ((undefined1 *)(gen_frame + 0x134));
    (*(undefined4 *)(gen_frame + 0x50)) = 0xa9a901;
    F_0042cbc0((gen_frame + 0x58),((undefined1 *)(gen_frame + 0x134)));
    F_0042cbc0((gen_frame + 0x4),((undefined1 *)(gen_frame + 0xb8)));
    uVar1 = F_00a67e30((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                         (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),
                         (*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),
                         (*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x50)),(*(undefined1 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)));
    (*(char *)(gen_frame + 0x123)) = (char)uVar1;
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa9a92b;
    F_0042c880(((undefined1 *)(gen_frame + 0xb8)));
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa9a933;
    F_0042c880(((undefined1 *)(gen_frame + 0x134)));
    if ((*(char *)(gen_frame + 0x123)) == '\0') {
      uVar1 = (*(uint *)(gen_frame + 0x11c)) + 0x60;
      F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
      return uVar1;
    }
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)param_1;
  (*(uint *)(gen_frame + 0xa4)) = 0xa9a945;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x124)),param_1);
  (*(undefined4 *)(gen_frame + 0x178)) = 0;
  (*(undefined4 *)(gen_frame + 0x17c)) = 0;
  (*(undefined4 *)(gen_frame + 0x180)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa9a956;
  F_00a93680(&(*(undefined4 *)(gen_frame + 0x178)));
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0x320;
  (*(uint *)(gen_frame + 0xa4)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0xa0)) = (uint *)0x74;
  (*(undefined4 *)(gen_frame + 0x178)) = 0;
  (*(undefined4 *)(gen_frame + 0x17c)) = 0;
  (*(undefined4 *)(gen_frame + 0x180)) = 0;
  (*(undefined4 *)(gen_frame + 0x10c)) = 0;
  (*(undefined4 *)(gen_frame + 0x110)) = 0;
  (*(undefined4 *)(gen_frame + 0x114)) = 0;
  puVar2 = (undefined4 *)F_004296a0(0x74,0,800);
  *puVar2 = *(undefined4 *)((int)this + 4);
  puVar2[1] = *(undefined4 *)((int)this + 4);
  puVar2[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar2 + 0x1c) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)((undefined1 *)(gen_frame + 0x124));
    (*(uint *)(gen_frame + 0xa4)) = 0xa9a99f;
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x124)));
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = &(*(undefined4 *)(gen_frame + 0x178));
    (*(uint *)(gen_frame + 0xa4)) = 0xa9a9ab;
    F_00a93d20(puVar2 + 0x18,&(*(undefined4 *)(gen_frame + 0x178)));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = puVar2;
  (*(uint *)(gen_frame + 0xa4)) = (*(uint *)(gen_frame + 0x11c));
  (*(uint * PTR32 *)(gen_frame + 0xa0)) = &(*(uint *)(gen_frame + 0x11c));
  F_00a98900(this,&(*(uint *)(gen_frame + 0x11c)),(*(uint *)(gen_frame + 0x11c)),puVar2);
  uVar1 = (*(uint *)(gen_frame + 0x11c));
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa9a9c6;
  F_00a93680(&(*(undefined4 *)(gen_frame + 0x178)));
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa9a9ce;
  F_0042c880(((undefined1 *)(gen_frame + 0x124)));
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa9a9d6;
  F_00a93680(&(*(undefined4 *)(gen_frame + 0x10c)));
  F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
  return uVar1 + 0x60;
}

/* ref: FUN_00a9aa10 */
uint F_00a9aa10(unsigned int gen_a0)
{
  GEN_ENTER(0xa9aa10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a99750(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a9aa40 */
uint F_00a9aa40(unsigned int gen_a0)
{
  GEN_ENTER(0xa9aa40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a997c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a9aa60 */
uint F_00a9aa60(unsigned int gen_a0)
{
  GEN_ENTER(0xa9aa60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a99890(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a9aa80 */
uint F_00a9aa80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9aa80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00a99750(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x29) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0x29) == '\0') {
        cVar1 = *(char *)(*param_2 + 0x29);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x29);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x29);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x29);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a99950(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a9ab40 */
uint F_00a9ab40(unsigned int gen_a0)
{
  GEN_ENTER(0xa9ab40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a9aa80(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a9ab60 */
uint F_00a9ab60(unsigned int gen_a0)
{
  GEN_ENTER(0xa9ab60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a99e30(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a9ab90 */
uint F_00a9ab90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9ab90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00a982d0(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0x21) == '\0') {
        cVar1 = *(char *)(*param_2 + 0x21);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x21);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x21);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a98050(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a9ac50 */
uint F_00a9ac50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ac50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar2 = F_004296a0(0x24,0,800);
  *(uint *)((int)this + 4) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x21))) = 1;
  if (this != param_1) {
    F_00a982d0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)((int)param_1 + 4) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
    *(undefined4 *)((int)param_1 + 8) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00a9ace0 */
uint F_00a9ace0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9ace0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x74,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  F_00a99200((int)this + 0xd,puVar1 + 3,param_2);
  F_00a98710(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a9ad40 */
uint F_00a9ad40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9ad40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x2c,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 10) = 0;
  F_00a992a0((int)this + 0xd,puVar1 + 3,param_2);
  F_00a9a1a0(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a9ada0 */
uint F_00a9ada0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9ada0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x28,0,0x191);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 9) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 3) = *param_2;
    *(undefined2 *)(puVar1 + 4) = param_2[2];
    F_00a93db0(puVar1 + 5,param_2 + 4);
  }
  F_00a9a0b0(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a9ae10 */
uint F_00a9ae10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9ae10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a969d0(puVar1 + 3,param_3);
  F_00a9a2a0(this,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00a9ae70 */
unsigned int F_00a9ae70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ae70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  
  iVar2 = *(int *)((int)this + 4);
  uVar7 = F_00a9a500(this,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4))),iVar2);
  *(uint *)(iVar2 + 4) = uVar7;
  piVar3 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x25) != '\0') {
    *piVar3 = (int)piVar3;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    return 0;
  }
  cVar1 = *(char *)(*piVar4 + 0x25);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0x25);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0x25);
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*(int *)(iVar5 + 8) + 0x25)));
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = iVar2;
  return 0;
}

/* ref: FUN_00a9aef0 */
uint F_00a9aef0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9aef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a997c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0xe4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9af30 */
uint F_00a9af30(unsigned int gen_a0)
{
  GEN_ENTER(0xa9af30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a99890(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x74,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9af70 */
uint F_00a9af70(unsigned int gen_a0)
{
  GEN_ENTER(0xa9af70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9aa80(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x2c,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9afb0 */
uint F_00a9afb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9afb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00a8df70((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_00a8ecb0((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_00a9aa80((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00a9b010 */
uint F_00a9b010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9b010u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  puVar1 = (*(uint * PTR32 *)&gen_args[1]);
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar5;
  if (*(char *)((int)puVar5[1] + 0x21) == '\0') {
    puVar3 = (undefined4 *)puVar5[1];
    do {
      if ((uint)puVar3[3] < *(*(uint * PTR32 *)&gen_args[1])) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar3;
        puVar2 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puVar5 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) && ((uint)puVar5[3] <= *(*(uint * PTR32 *)&gen_args[1]))) {
    return (uint)(puVar5 + 4);
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)F_004296a0(0x18,0,800);
  *(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[1] = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
  *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + 5) = 1;
  *(undefined1 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + 0x15) = 1;
  uVar4 = *puVar1;
  F_00a91460(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x18)));
  puVar3 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar3 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  *(undefined2 *)(puVar3 + 8) = 0;
  if (puVar3 + 3 != (uint *)0x0) {
    puVar3[3] = uVar4;
    puVar3[6] = 0;
    uVar4 = F_004296a0(0x18,0,800);
    puVar3[5] = uVar4;
    *(uint *)uVar4 = uVar4;
    *(undefined4 *)(puVar3[5] + 4) = puVar3[5];
    *(undefined4 *)(puVar3[5] + 8) = puVar3[5];
    *(undefined1 *)(puVar3[5] + 0x14) = 1;
    *(undefined1 *)(puVar3[5] + 0x15) = 1;
    F_00a92ec0(puVar3 + 4,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x28));
  }
  F_00a9a2a0((*(undefined * PTR32 *)&gen_args[0]),&(*(uint * PTR32 *)&gen_args[1]),puVar5,puVar3);
  puVar1 = (*(uint * PTR32 *)&gen_args[1]);
  F_0095c5e0(((undefined1 *)(gen_frame + 0x8)),&(*(uint * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xc)),0x18,800);
  F_0095c5e0(((undefined1 *)(gen_frame + 0x18)),&(*(uint * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),(*(undefined4 * PTR32 *)(gen_frame + 0x1c)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x1c)),0x18,800);
  return (uint)(puVar1 + 4);
}

/* ref: FUN_00a9b1a0 */
uint F_00a9b1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9b1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00a99e30(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x25) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0x25) == '\0') {
        cVar1 = *(char *)(*param_2 + 0x25);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x25);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x25);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x25);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a99bd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a9b260 */
uint F_00a9b260(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a9ab90(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a9b280 */
uint F_00a9b280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9b280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x24,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x21))) = 1;
  F_00a9a5b0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00a9b2d0 */
uint F_00a9b2d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a997c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0xe4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9b310 */
uint F_00a9b310(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a99890(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x74,800);
  return (uint)uVar1;
}

