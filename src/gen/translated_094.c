#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00956730 */
uint F_00956730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x956730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  undefined * this;
  int iVar2;
  
  F_0042c880((undefined *)(param_2 + 0xb8));
  F_0042c880((undefined *)(param_2 + 0x60));
  this = (undefined *)(param_2 + 0x60);
  iVar2 = 9;
  do {
    this = (undefined *)((int)this + -8);
    uVar1 = F_005a2670(this);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_009567c0 */
unsigned int F_009567c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9567c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 3) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
  }
  return 0;
}

/* ref: FUN_009567f0 */
unsigned int F_009567f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9567f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 6) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
  }
  return 0;
}

/* ref: FUN_00956820 */
unsigned int F_00956820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x956820u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 4) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
  }
  return 0;
}

/* ref: FUN_00956850 */
unsigned int F_00956850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x956850u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
        *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(iVar2 + 0xc + (int)puVar1);
      }
      puVar1 = (undefined4 *)((int)puVar1 + 0xd);
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_009568a0 */
unsigned int F_009568a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9568a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = *(undefined2 *)(iVar2 + (int)puVar1);
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(iVar2 + 2 + (int)puVar1);
      }
      puVar1 = (undefined2 *)((int)puVar1 + 3);
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_009568f0 */
unsigned int F_009568f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9568f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00956940 */
unsigned int F_00956940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x956940u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00956990 */
unsigned int F_00956990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x956990u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_009569e0 */
unsigned int F_009569e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9569e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    F_0042cbc0(param_2 + 1,param_3 + 1);
    param_2[0x16] = param_3[0x16];
    F_0042cbc0(param_2 + 0x17,param_3 + 0x17);
    param_2[0x2c] = param_3[0x2c];
  }
  return 0;
}

/* ref: FUN_00956a20 */
unsigned int F_00956a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x956a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
    *(undefined4 *)((int)param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
  }
  return 0;
}

/* ref: FUN_00956a50 */
uint F_00956a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x956a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_0042cbc0(param_2 + 2,param_3 + 2);
    uVar1 = param_3[0x17];
    param_2[0x17] = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00956b70 */
uint F_00956b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x956b70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
        bVar3 = *(int *)((*(int *)&gen_args[2]) + 0xc) < (int)puVar2[3];
      }
      else {
        bVar3 = *(int *)((*(int *)&gen_args[2]) + 0xc) <= (int)puVar2[3];
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
      puVar2 = (undefined4 *)F_0094d230((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_009172d0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((int)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(int *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_0094d230((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x18,400);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00956c50 */
uint F_00956c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x956c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  bool bVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar6 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  cVar1 = *(char *)((int)puVar6 + 0x39);
  bVar2 = true;
  gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar4 = (*(int *)(gen_frame + 0x8));
  do {
    if (cVar1 != '\0') {
      (*(undefined4 * PTR32 *)&gen_args[3]) = puVar3;
      if (bVar2) {
        if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
          puVar6 = (undefined4 *)F_0094d460((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,(*(int *)&gen_args[2]));
          *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar6;
          *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00917330(&(*(undefined4 * PTR32 *)&gen_args[3]));
      }
      puVar6 = (*(undefined4 * PTR32 *)&gen_args[3]);
      if (((uint)(*(undefined4 * PTR32 *)&gen_args[3])[5] <= *(uint *)((*(int *)&gen_args[2]) + 0x14)) &&
         (((uint)(*(undefined4 * PTR32 *)&gen_args[3])[5] < *(uint *)((*(int *)&gen_args[2]) + 0x14) ||
          ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[4] < *(uint *)((*(int *)&gen_args[2]) + 0x10))))) {
        puVar6 = (undefined4 *)F_0094d460((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),iVar4,puVar3,(*(int *)&gen_args[2]));
        *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar6;
        *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
      F_00429760((*(int *)&gen_args[2]),0x40,400);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar6;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)iVar4 >> 8)));
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      if (((uint)puVar6[5] < *(uint *)((*(int *)&gen_args[2]) + 0x14)) ||
         (((uint)puVar6[5] <= *(uint *)((*(int *)&gen_args[2]) + 0x14) &&
          ((uint)puVar6[4] <= *(uint *)((*(int *)&gen_args[2]) + 0x10))))) {
        bVar2 = false;
        (*(int *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3) << 8;
        goto LAB_00956cc3;
      }
      puVar5 = (undefined4 *)*puVar6;
      bVar2 = true;
      (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
    }
    else {
      if ((*(uint *)((*(int *)&gen_args[2]) + 0x14) < (uint)puVar6[5]) ||
         ((*(uint *)((*(int *)&gen_args[2]) + 0x14) <= (uint)puVar6[5] &&
          (*(uint *)((*(int *)&gen_args[2]) + 0x10) <= (uint)puVar6[4])))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      bVar2 = !bVar2;
      (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (bVar2) {
        puVar5 = (undefined4 *)*puVar6;
      }
      else {
LAB_00956cc3: ;
        puVar5 = (undefined4 *)puVar6[2];
      }
    }
    cVar1 = *(char *)((int)puVar5 + 0x39);
    puVar3 = puVar6;
    puVar6 = puVar5;
    iVar4 = (*(int *)(gen_frame + 0x8));
  } while( true );
}

/* ref: FUN_00956d70 */
uint F_00956d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x956d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00956d80 */
uint F_00956d80(unsigned int gen_a0)
{
  GEN_ENTER(0x956d80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)(param_1 + 100));
  uVar1 = F_0042c880((undefined *)(param_1 + 0xc));
  return (uint)uVar1;
}

/* ref: FUN_00956da0 */
uint F_00956da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x956da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  bool bVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar6 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  cVar1 = *(char *)((int)puVar6 + 0x21);
  bVar2 = true;
  gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar4 = (*(int *)(gen_frame + 0x8));
  do {
    if (cVar1 != '\0') {
      (*(undefined4 * PTR32 *)&gen_args[3]) = puVar3;
      if (bVar2) {
        if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
          puVar6 = (undefined4 *)F_0094d690((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,(*(int *)&gen_args[2]));
          *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar6;
          *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00917390(&(*(undefined4 * PTR32 *)&gen_args[3]));
      }
      puVar6 = (*(undefined4 * PTR32 *)&gen_args[3]);
      if (((uint)(*(undefined4 * PTR32 *)&gen_args[3])[5] <= *(uint *)((*(int *)&gen_args[2]) + 0x14)) &&
         (((uint)(*(undefined4 * PTR32 *)&gen_args[3])[5] < *(uint *)((*(int *)&gen_args[2]) + 0x14) ||
          ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[4] < *(uint *)((*(int *)&gen_args[2]) + 0x10))))) {
        puVar6 = (undefined4 *)F_0094d690((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),iVar4,puVar3,(*(int *)&gen_args[2]));
        *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar6;
        *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
      F_00429760((*(int *)&gen_args[2]),0x28,400);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar6;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)iVar4 >> 8)));
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      if (((uint)puVar6[5] < *(uint *)((*(int *)&gen_args[2]) + 0x14)) ||
         (((uint)puVar6[5] <= *(uint *)((*(int *)&gen_args[2]) + 0x14) &&
          ((uint)puVar6[4] <= *(uint *)((*(int *)&gen_args[2]) + 0x10))))) {
        bVar2 = false;
        (*(int *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3) << 8;
        goto LAB_00956e13;
      }
      puVar5 = (undefined4 *)*puVar6;
      bVar2 = true;
      (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
    }
    else {
      if ((*(uint *)((*(int *)&gen_args[2]) + 0x14) < (uint)puVar6[5]) ||
         ((*(uint *)((*(int *)&gen_args[2]) + 0x14) <= (uint)puVar6[5] &&
          (*(uint *)((*(int *)&gen_args[2]) + 0x10) <= (uint)puVar6[4])))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      bVar2 = !bVar2;
      (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (bVar2) {
        puVar5 = (undefined4 *)*puVar6;
      }
      else {
LAB_00956e13: ;
        puVar5 = (undefined4 *)puVar6[2];
      }
    }
    cVar1 = *(char *)((int)puVar5 + 0x21);
    puVar3 = puVar6;
    puVar6 = puVar5;
    iVar4 = (*(int *)(gen_frame + 0x8));
  } while( true );
}

/* ref: FUN_00956ec0 */
uint F_00956ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x956ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
        bVar3 = *(int *)((*(int *)&gen_args[2]) + 0xc) < (int)puVar2[3];
      }
      else {
        bVar3 = *(int *)((*(int *)&gen_args[2]) + 0xc) <= (int)puVar2[3];
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
      puVar2 = (undefined4 *)F_0094d8c0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00917270(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((int)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(int *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_0094d8c0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x18,400);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00956fa0 */
uint F_00956fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x956fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00956fb0 */
uint F_00956fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x956fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00956fc0 */
uint F_00956fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x956fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x110,0,400);
  puVar1[1] = param_2;
  *puVar1 = param_1;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    F_0091dea0(puVar1 + 2,param_3);
  }
  return (uint)puVar1;
}

/* ref: FUN_00957000 */
uint F_00957000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x957000u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  this_00 = (undefined *)F_00406bd0(0x844,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_0088e3c0(this_00);
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

/* ref: FUN_00957070 */
uint F_00957070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x957070u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    piVar2 = (int *)F_0094eff0(this,param_1,param_2,param_3);
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

/* ref: FUN_00957100 */
unsigned int F_00957100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x957100u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00957130 */
uint F_00957130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x957130u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined * this;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar1;
  this = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    uVar1 = F_0042b630(((undefined1 *)(gen_frame + 0x4)));
    if (this != (undefined *)0x0) {
      F_0042cbc0(this,uVar1);
    }
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar1 = (uint)uVar3;
    this = (undefined *)((int)this + 0x54);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00957190 */
uint F_00957190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x957190u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  undefined1 * puVar2;
  int iVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar1 = param_1;
  if (param_2 != 0) {
    puVar2 = (undefined1 *)(param_1 + 4);
    iVar3 = param_2;
    do {
      F_0042b630(((byte *)(gen_frame + 0x10)));
      if (puVar2 != &REFG(undefined, 0x4)) {
        *(undefined2 *)(puVar2 + -4) = (*(undefined2 *)(gen_frame + 0x8));
        puVar2[1] = (*(undefined1 *)(gen_frame + 0xd));
        *puVar2 = (*(undefined1 *)(gen_frame + 0xc));
        *(undefined2 *)(puVar2 + -2) = (*(undefined2 *)(gen_frame + 0xa));
        puVar2[2] = (*(undefined1 *)(gen_frame + 0xe));
        puVar2[3] = (*(undefined1 *)(gen_frame + 0xf));
        F_0042cbc0(puVar2 + 4,((byte *)(gen_frame + 0x10)));
        *(undefined4 *)(puVar2 + 0x58) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 84));
      }
      uVar4 = F_0042c880(((byte *)(gen_frame + 0x10)));
      uVar1 = (uint)uVar4;
      puVar2 = puVar2 + 0x60;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar1;
}

/* ref: FUN_00957220 */
unsigned int F_00957220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x957220u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc + (int)puVar1);
      }
      puVar1 = puVar1 + 4;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957260 */
unsigned int F_00957260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957260u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0x15;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_009572a0 */
unsigned int F_009572a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9572a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 in_ECX = 0;
  
  F_0094f190(param_1,param_2,param_3,param_4,0,in_ECX);
  return 0;
}

/* ref: FUN_009572d0 */
unsigned int F_009572d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9572d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc + (int)puVar1);
      }
      puVar1 = puVar1 + 4;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957310 */
unsigned int F_00957310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957310u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957340 */
uint F_00957340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x957340u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined * this;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar1;
  this = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    uVar1 = F_0042b630(((undefined1 *)(gen_frame + 0x4)));
    if (this != (undefined *)0x0) {
      F_0042cbc0(this,uVar1);
    }
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar1 = (uint)uVar3;
    this = (undefined *)((int)this + 0x54);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_009573a0 */
unsigned int F_009573a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9573a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009573d0 */
unsigned int F_009573d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9573d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00957410 */
unsigned int F_00957410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957410u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00957440 */
unsigned int F_00957440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x957440u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00957470 */
unsigned int F_00957470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957470u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009574a0 */
unsigned int F_009574a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9574a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009574d0 */
unsigned int F_009574d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9574d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00957500 */
unsigned int F_00957500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x957500u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00957530 */
unsigned int F_00957530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x68) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00957560 */
unsigned int F_00957560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x6c) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00957590 */
unsigned int F_00957590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957590u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0xd;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_009575d0 */
unsigned int F_009575d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9575d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00957600 */
uint F_00957600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957600u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00957640 */
unsigned int F_00957640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x54) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00957670 */
unsigned int F_00957670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957670u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009576a0 */
unsigned int F_009576a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9576a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009576d0 */
uint F_009576d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9576d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0094f4f0(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00957700 */
unsigned int F_00957700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x957700u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x60) {
    F_0042c880((undefined *)(iVar1 + 8));
  }
  return 0;
}

/* ref: FUN_00957730 */
unsigned int F_00957730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x957730u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = (undefined *)(param_1 + 0x18);
    do {
      F_0042c880((undefined *)((int)this + 0x68));
      F_00560340(this);
      iVar1 = (int)this + 0xbc;
      this = (undefined *)((int)this + 0xd4);
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957770 */
unsigned int F_00957770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x957770u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc + (int)puVar1);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10 + (int)puVar1);
      }
      puVar1 = puVar1 + 5;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_009577c0 */
unsigned int F_009577c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9577c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc + (int)puVar1);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10 + (int)puVar1);
      }
      puVar1 = puVar1 + 5;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957810 */
unsigned int F_00957810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957810u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957840 */
unsigned int F_00957840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957840u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957870 */
unsigned int F_00957870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957870u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_009578a0 */
unsigned int F_009578a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9578a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_009578d0 */
unsigned int F_009578d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9578d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957900 */
unsigned int F_00957900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x957900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 in_ECX = 0;
  
  F_0094f6d0(param_1,param_2,param_3,param_4,0,in_ECX);
  return 0;
}

/* ref: FUN_00957930 */
unsigned int F_00957930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957930u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957960 */
unsigned int F_00957960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957960u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957990 */
unsigned int F_00957990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957990u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_009579d0 */
unsigned int F_009579d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9579d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00957a00 */
unsigned int F_00957a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957a00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957a40 */
unsigned int F_00957a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x957a40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = (undefined *)(param_1 + 0x14);
    do {
      F_0042c880((undefined *)((int)this + 0x54));
      F_0042c880(this);
      iVar1 = (int)this + 0xac;
      this = (undefined *)((int)this + 0xc0);
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00957a80 */
unsigned int F_00957a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x957a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 in_ECX = 0;
  
  F_0094f850(param_1,param_2,param_3,param_4,0,in_ECX);
  return 0;
}

/* ref: FUN_00957ab0 */
uint F_00957ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x957ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  puVar1 = (undefined4 *)puVar2[1];
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar1 + 0x15) == '\0') {
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
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
  puVar2 = (undefined4 *)F_0094eb30((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00957b20 */
uint F_00957b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x957b20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  puVar1 = (undefined4 *)puVar2[1];
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar1 + 0x15) == '\0') {
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
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
  puVar2 = (undefined4 *)F_0094ed70((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00957b90 */
uint F_00957b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957b90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (param_2 - param_1) / 0x14;
  if (1 < (int)uVar1) {
    uVar1 = F_0094f9c0(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00957bd0 */
uint F_00957bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957bd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (param_2 - param_1) / 0x14;
  if (1 < (int)uVar1) {
    uVar1 = F_0094fb50(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00957c10 */
uint F_00957c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957c10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if (8 < (int)(param_2 - param_1 & 0xfffffff8)) {
    uVar1 = F_0094fcb0(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00957c40 */
unsigned int F_00957c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0094fd80(param_1,param_2,param_3,0);
  return 0;
}

/* ref: FUN_00957c60 */
uint F_00957c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957c60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (param_2 - param_1) / 0x6c;
  if (1 < (int)uVar1) {
    uVar1 = F_0094fe60(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00957ca0 */
uint F_00957ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0094ff20(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00957cc0 */
uint F_00957cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957cc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (param_2 - param_1) / 0x68;
  if (1 < (int)uVar1) {
    uVar1 = F_009500a0(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00957d00 */
uint F_00957d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00950150(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00957d20 */
uint F_00957d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957d20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if (4 < (int)(param_2 - param_1 & 0xfffffffc)) {
    uVar1 = F_009502c0(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00957d50 */
uint F_00957d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00950370(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00957d70 */
unsigned int F_00957d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00957d90 */
unsigned int F_00957d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00957db0 */
uint F_00957db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957db0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if (8 < (int)(param_2 - param_1 & 0xfffffff8)) {
    uVar1 = F_00950440(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00957de0 */
uint F_00957de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957de0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (param_2 - param_1) / 0xc;
  if (1 < (int)uVar1) {
    uVar1 = F_00950550(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00957e20 */
uint F_00957e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    puVar2 = param_3 + 2;
    puVar3 = param_2 + 2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return (uint)param_2;
}

/* ref: FUN_00957e50 */
uint F_00957e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957e50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if (4 < (int)(param_2 - param_1 & 0xfffffffc)) {
    uVar1 = F_00950750(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00957e80 */
uint F_00957e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00950800(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00957ea0 */
uint F_00957ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957ea0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if (4 < (int)(param_2 - param_1 & 0xfffffffc)) {
    uVar1 = F_009508c0(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00957ed0 */
uint F_00957ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00950970(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00957ef0 */
uint F_00957ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957ef0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if (4 < (int)(param_2 - param_1 & 0xfffffffc)) {
    uVar1 = F_00950a30(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00957f20 */
uint F_00957f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00950ae0(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00957f40 */
uint F_00957f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957f40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if (4 < (int)(param_2 - param_1 & 0xfffffffc)) {
    uVar1 = F_00950ba0(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00957f70 */
uint F_00957f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00950c50(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00957f90 */
uint F_00957f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957f90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (param_2 - param_1) / 0x18;
  if (1 < (int)uVar1) {
    uVar1 = F_00950d60(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00957fd0 */
unsigned int F_00957fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00950ea0(param_1,param_2,param_3,0);
  return 0;
}

/* ref: FUN_00957ff0 */
uint F_00957ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x957ff0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (param_2 - param_1) / 0xc;
  if (1 < (int)uVar1) {
    uVar1 = F_00951010(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00958030 */
uint F_00958030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x958030u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if (0x10 < (int)(param_2 - param_1 & 0xfffffff0)) {
    uVar1 = F_00951170(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00958060 */
uint F_00958060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x958060u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (param_2 - param_1) / 0xc;
  if (1 < (int)uVar1) {
    uVar1 = F_009512c0(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_009580a0 */
uint F_009580a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9580a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if (0x10 < (int)(param_2 - param_1 & 0xfffffff0)) {
    uVar1 = F_00951420(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_009580d0 */
uint F_009580d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9580d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 2);
  }
  return (uint)param_2;
}

/* ref: FUN_009580f0 */
uint F_009580f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9580f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (param_2 - param_1) / 0x14;
  if (1 < (int)uVar1) {
    uVar1 = F_00951590(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00958130 */
unsigned int F_00958130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x958130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00940a10(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00958150 */
unsigned int F_00958150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x958150u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00958180 */
uint F_00958180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x958180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * this;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 0x16;
    this = param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,puVar2 + -0x16);
        *(undefined4 *)((int)this + 0x54) = puVar2[-1];
        *(undefined4 *)((int)this + 0x58) = *puVar2;
        *(undefined4 *)((int)this + 0x5c) = puVar2[1];
        *(undefined4 *)((int)this + 0x60) = puVar2[2];
        *(undefined1 *)((int)this + 100) = *(undefined1 *)(puVar2 + 3);
      }
      puVar1 = puVar2 + 4;
      this = (undefined *)((int)this + 0x68);
      puVar2 = puVar2 + 0x1a;
    } while (puVar1 != param_2);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_009581e0 */
uint F_009581e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9581e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * this;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 0x16;
    this = param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,puVar2 + -0x16);
        *(undefined4 *)((int)this + 0x54) = puVar2[-1];
        *(undefined4 *)((int)this + 0x58) = *puVar2;
        *(undefined4 *)((int)this + 0x5c) = puVar2[1];
        *(undefined4 *)((int)this + 0x60) = puVar2[2];
        *(undefined4 *)((int)this + 100) = puVar2[3];
        *(undefined4 *)((int)this + 0x68) = puVar2[4];
      }
      puVar1 = puVar2 + 5;
      this = (undefined *)((int)this + 0x6c);
      puVar2 = puVar2 + 0x1b;
    } while (puVar1 != param_2);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_00958250 */
unsigned int F_00958250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x958250u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    iVar3 = param_1 - (int)param_3;
    puVar2 = param_3;
    do {
      uVar1 = *(undefined4 *)(iVar3 + 4 + (int)puVar2);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
        puVar2[1] = uVar1;
      }
      puVar2 = puVar2 + 2;
    } while (iVar3 + (int)puVar2 != param_2);
  }
  return 0;
}

/* ref: FUN_00958290 */
uint F_00958290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x958290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar2 = param_3;
    puVar3 = param_1 + 2;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d38));
        puVar2[1] = puVar3[-1];
        puVar2[2] = *puVar3;
      }
      puVar1 = puVar3 + 1;
      puVar2 = puVar2 + 3;
      puVar3 = puVar3 + 3;
    } while (puVar1 != param_2);
    return (uint)puVar2;
  }
  return (uint)param_3;
}

/* ref: FUN_009582d0 */
uint F_009582d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9582d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar2 = param_3;
    puVar3 = param_1 + 2;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d48));
        puVar2[1] = puVar3[-1];
        puVar2[2] = *puVar3;
        puVar2[3] = puVar3[1];
        puVar2[4] = puVar3[2];
        *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(puVar3 + 3);
      }
      puVar1 = puVar3 + 4;
      puVar2 = puVar2 + 6;
      puVar3 = puVar3 + 6;
    } while (puVar1 != param_2);
    return (uint)puVar2;
  }
  return (uint)param_3;
}

/* ref: FUN_00958330 */
uint F_00958330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x958330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar2 = param_3;
    puVar3 = param_1 + 2;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d58));
        puVar2[1] = puVar3[-1];
        puVar2[2] = *puVar3;
        puVar2[3] = puVar3[1];
      }
      puVar1 = puVar3 + 2;
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
    } while (puVar1 != param_2);
    return (uint)puVar2;
  }
  return (uint)param_3;
}

/* ref: FUN_00958380 */
uint F_00958380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x958380u, gen_a0, gen_a1, gen_a2, 0u);
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
      *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    }
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_009583c0 */
uint F_009583c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9583c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar4 = param_3 + 8;
    puVar2 = param_3;
    puVar3 = param_1 + 8;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = puVar3[-8];
        puVar4[-7] = puVar3[-7];
        puVar4[-6] = puVar3[-6];
        puVar4[-5] = puVar3[-5];
        puVar4[-4] = puVar3[-4];
        puVar4[-3] = puVar3[-3];
        puVar4[-2] = puVar3[-2];
        puVar4[-1] = puVar3[-1];
        *puVar4 = *puVar3;
        puVar4[1] = puVar3[1];
        F_0042cbc0(puVar4 + 2,puVar3 + 2);
        puVar4[0x17] = puVar3[0x17];
        F_0042cbc0(puVar4 + 0x18,puVar3 + 0x18);
      }
      puVar1 = puVar3 + 0x2d;
      puVar2 = puVar2 + 0x35;
      puVar4 = puVar4 + 0x35;
      puVar3 = puVar3 + 0x35;
    } while (puVar1 != param_2);
    return (uint)puVar2;
  }
  return (uint)param_3;
}

/* ref: FUN_00958470 */
unsigned int F_00958470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x958470u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009584a0 */
uint F_009584a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9584a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    puVar3 = param_3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = puVar2[-2];
        puVar3[1] = puVar2[-1];
        puVar3[2] = *puVar2;
        puVar3[3] = puVar2[1];
        puVar3[4] = puVar2[2];
        F_0042cbc0(puVar3 + 5,puVar2 + 3);
        F_0042cbc0(puVar3 + 0x1a,puVar2 + 0x18);
        puVar3[0x2f] = puVar2[0x2d];
      }
      puVar1 = puVar2 + 0x2e;
      puVar3 = puVar3 + 0x30;
      puVar2 = puVar2 + 0x30;
    } while (puVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00958520 */
unsigned int F_00958520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x958520u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00958550 */
uint F_00958550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x958550u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (param_3 - param_1) / 0x14;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0x14 + param_1;
    F_009517c0(param_1,iVar1,iVar2 * 0x28 + param_1,param_4);
    F_009517c0(param_2 + iVar2 * -0x14,param_2,iVar2 * 0x14 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0x14;
    F_009517c0(param_3 + iVar2 * -0x28,iVar3,param_3,param_4);
    uVar4 = F_009517c0(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_009517c0(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_00958600 */
unsigned int F_00958600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x958600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  char cVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if ((param_1 != param_2) && (puVar6 = param_1 + 5, puVar6 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      uVar1 = puVar6[1];
      (*(undefined4 *)(gen_frame + 0xc)) = puVar6[2];
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar6;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x10)) = puVar6[3];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar6[4];
      uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),param_1);
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      puVar2 = puVar6;
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar4 = (char)uVar5;
        while (cVar4 != '\0') {
          *puVar2 = *puVar3;
          puVar2[1] = puVar3[1];
          puVar2[2] = puVar3[2];
          puVar2[3] = puVar3[3];
          puVar2[4] = puVar3[4];
          uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),puVar3 + -5);
          puVar2 = puVar3;
          puVar3 = puVar3 + -5;
          cVar4 = (char)uVar5;
        }
        *puVar2 = (*(undefined4 *)(gen_frame + 0x4));
        puVar2[1] = (*(undefined4 *)(gen_frame + 0x8));
        puVar2[2] = (*(undefined4 *)(gen_frame + 0xc));
        puVar2[3] = (*(undefined4 *)(gen_frame + 0x10));
        puVar2[4] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        for (; param_1 != puVar2; puVar2 = puVar2 + -5) {
          *puVar2 = puVar2[-5];
          puVar2[1] = puVar2[-4];
          puVar2[2] = puVar2[-3];
          puVar2[3] = puVar2[-2];
          puVar2[4] = puVar2[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0x4));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x8));
        param_1[2] = (*(undefined4 *)(gen_frame + 0xc));
        param_1[3] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[4] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 5;
      puVar6 = puVar6 + 5;
    } while (puVar6 != param_2);
  }
  return 0;
}

/* ref: FUN_00958720 */
uint F_00958720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x958720u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (param_3 - param_1) / 0x14;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0x14 + param_1;
    F_00951910(param_1,iVar1,iVar2 * 0x28 + param_1,param_4);
    F_00951910(param_2 + iVar2 * -0x14,param_2,iVar2 * 0x14 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0x14;
    F_00951910(param_3 + iVar2 * -0x28,iVar3,param_3,param_4);
    uVar4 = F_00951910(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_00951910(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_009587d0 */
unsigned int F_009587d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9587d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  char cVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if ((param_1 != param_2) && (puVar6 = param_1 + 5, puVar6 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      uVar1 = puVar6[1];
      (*(undefined4 *)(gen_frame + 0xc)) = puVar6[2];
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar6;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x10)) = puVar6[3];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar6[4];
      uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),param_1);
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      puVar2 = puVar6;
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar4 = (char)uVar5;
        while (cVar4 != '\0') {
          *puVar2 = *puVar3;
          puVar2[1] = puVar3[1];
          puVar2[2] = puVar3[2];
          puVar2[3] = puVar3[3];
          puVar2[4] = puVar3[4];
          uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),puVar3 + -5);
          puVar2 = puVar3;
          puVar3 = puVar3 + -5;
          cVar4 = (char)uVar5;
        }
        *puVar2 = (*(undefined4 *)(gen_frame + 0x4));
        puVar2[1] = (*(undefined4 *)(gen_frame + 0x8));
        puVar2[2] = (*(undefined4 *)(gen_frame + 0xc));
        puVar2[3] = (*(undefined4 *)(gen_frame + 0x10));
        puVar2[4] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        for (; param_1 != puVar2; puVar2 = puVar2 + -5) {
          *puVar2 = puVar2[-5];
          puVar2[1] = puVar2[-4];
          puVar2[2] = puVar2[-3];
          puVar2[3] = puVar2[-2];
          puVar2[4] = puVar2[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0x4));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x8));
        param_1[2] = (*(undefined4 *)(gen_frame + 0xc));
        param_1[3] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[4] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 5;
      puVar6 = puVar6 + 5;
    } while (puVar6 != param_2);
  }
  return 0;
}

/* ref: FUN_009588f0 */
uint F_009588f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9588f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_3 - param_1 >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 8 + param_1;
    F_00951a60(param_1,iVar1,iVar2 * 0x10 + param_1,param_4);
    F_00951a60(param_2 + iVar2 * -8,param_2,iVar2 * 8 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -8;
    F_00951a60(param_3 + iVar2 * -0x10,iVar3,param_3,param_4);
    uVar4 = F_00951a60(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_00951a60(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_00958990 */
uint F_00958990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x958990u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (param_3 - param_1) / 0x6c;
  if (iVar1 < 0x29) {
    uVar3 = (*param_4)(param_2,param_1);
    if ((char)uVar3 != '\0') {
      F_009415a0(param_2,param_1);
    }
    uVar3 = (*param_4)(param_3,param_2);
    if ((char)uVar3 != '\0') {
      F_009415a0(param_3,param_2);
    }
    uVar3 = (*param_4)(param_2,param_1);
    if ((char)uVar3 != '\0') {
      uVar3 = F_009415a0(param_2,param_1);
    }
  }
  else {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar5 = iVar2 * 0x6c;
    iVar1 = iVar5 + param_1;
    uVar3 = (*param_4)(iVar1,param_1);
    if ((char)uVar3 != '\0') {
      F_009415a0(iVar1,param_1);
    }
    uVar3 = (*param_4)(iVar2 * 0xd8 + param_1,iVar1);
    if ((char)uVar3 != '\0') {
      F_009415a0(iVar2 * 0xd8 + param_1,iVar1);
    }
    uVar3 = (*param_4)(iVar1,param_1);
    if ((char)uVar3 != '\0') {
      F_009415a0(iVar1,param_1);
    }
    iVar4 = param_2 + iVar2 * -0x6c;
    uVar3 = (*param_4)(param_2,iVar4);
    if ((char)uVar3 != '\0') {
      F_009415a0(param_2,iVar4);
    }
    uVar3 = (*param_4)(iVar5 + param_2,param_2);
    if ((char)uVar3 != '\0') {
      F_009415a0(iVar5 + param_2,param_2);
    }
    uVar3 = (*param_4)(param_2,iVar4);
    if ((char)uVar3 != '\0') {
      F_009415a0(param_2,iVar4);
    }
    iVar5 = param_3 + iVar2 * -0x6c;
    iVar2 = param_3 + iVar2 * -0xd8;
    uVar3 = (*param_4)(iVar5,iVar2);
    if ((char)uVar3 != '\0') {
      F_009415a0(iVar5,iVar2);
    }
    uVar3 = (*param_4)(param_3,iVar5);
    if ((char)uVar3 != '\0') {
      F_009415a0(param_3,iVar5);
    }
    uVar3 = (*param_4)(iVar5,iVar2);
    if ((char)uVar3 != '\0') {
      F_009415a0(iVar5,iVar2);
    }
    uVar3 = (*param_4)(param_2,iVar1);
    if ((char)uVar3 != '\0') {
      F_009415a0(param_2,iVar1);
    }
    uVar3 = (*param_4)(iVar5,param_2);
    if ((char)uVar3 != '\0') {
      F_009415a0(iVar5,param_2);
    }
    uVar3 = (*param_4)(param_2,iVar1);
    if ((char)uVar3 != '\0') {
      uVar3 = F_009415a0(param_2,iVar1);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00958b90 */
uint F_00958b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x958b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (param_3 - param_1) / 0x68;
  if (iVar1 < 0x29) {
    uVar3 = (*param_4)(param_2,param_1);
    if ((char)uVar3 != '\0') {
      F_00941760(param_2,param_1);
    }
    uVar3 = (*param_4)(param_3,param_2);
    if ((char)uVar3 != '\0') {
      F_00941760(param_3,param_2);
    }
    uVar3 = (*param_4)(param_2,param_1);
    if ((char)uVar3 != '\0') {
      uVar3 = F_00941760(param_2,param_1);
    }
  }
  else {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar5 = iVar2 * 0x68;
    iVar1 = iVar5 + param_1;
    uVar3 = (*param_4)(iVar1,param_1);
    if ((char)uVar3 != '\0') {
      F_00941760(iVar1,param_1);
    }
    uVar3 = (*param_4)(iVar2 * 0xd0 + param_1,iVar1);
    if ((char)uVar3 != '\0') {
      F_00941760(iVar2 * 0xd0 + param_1,iVar1);
    }
    uVar3 = (*param_4)(iVar1,param_1);
    if ((char)uVar3 != '\0') {
      F_00941760(iVar1,param_1);
    }
    iVar4 = param_2 + iVar2 * -0x68;
    uVar3 = (*param_4)(param_2,iVar4);
    if ((char)uVar3 != '\0') {
      F_00941760(param_2,iVar4);
    }
    uVar3 = (*param_4)(iVar5 + param_2,param_2);
    if ((char)uVar3 != '\0') {
      F_00941760(iVar5 + param_2,param_2);
    }
    uVar3 = (*param_4)(param_2,iVar4);
    if ((char)uVar3 != '\0') {
      F_00941760(param_2,iVar4);
    }
    iVar5 = param_3 + iVar2 * -0x68;
    iVar2 = param_3 + iVar2 * -0xd0;
    uVar3 = (*param_4)(iVar5,iVar2);
    if ((char)uVar3 != '\0') {
      F_00941760(iVar5,iVar2);
    }
    uVar3 = (*param_4)(param_3,iVar5);
    if ((char)uVar3 != '\0') {
      F_00941760(param_3,iVar5);
    }
    uVar3 = (*param_4)(iVar5,iVar2);
    if ((char)uVar3 != '\0') {
      F_00941760(iVar5,iVar2);
    }
    uVar3 = (*param_4)(param_2,iVar1);
    if ((char)uVar3 != '\0') {
      F_00941760(param_2,iVar1);
    }
    uVar3 = (*param_4)(iVar5,param_2);
    if ((char)uVar3 != '\0') {
      F_00941760(iVar5,param_2);
    }
    uVar3 = (*param_4)(param_2,iVar1);
    if ((char)uVar3 != '\0') {
      uVar3 = F_00941760(param_2,iVar1);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00958d90 */
uint F_00958d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x958d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 4 + param_1;
    F_00951ba0(param_1,iVar1,iVar2 * 8 + param_1,param_4);
    F_00951ba0(param_2 + iVar2 * -4,param_2,iVar2 * 4 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -4;
    F_00951ba0(param_3 + iVar2 * -8,iVar3,param_3,param_4);
    uVar4 = F_00951ba0(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_00951ba0(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00958e30 */
unsigned int F_00958e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x958e30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00958e50 */
uint F_00958e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x958e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_3 - param_1 >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 8 + param_1;
    F_00951c00(param_1,iVar1,iVar2 * 0x10 + param_1,param_4);
    F_00951c00(param_2 + iVar2 * -8,param_2,iVar2 * 8 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -8;
    F_00951c00(param_3 + iVar2 * -0x10,iVar3,param_3,param_4);
    uVar4 = F_00951c00(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_00951c00(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_00958ef0 */
unsigned int F_00958ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x958ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  char cVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if ((param_1 != param_2) && (puVar6 = param_1 + 2, puVar6 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = param_1;
    do {
      uVar1 = puVar6[1];
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar6;
      (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
      uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),param_1);
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
      puVar2 = puVar6;
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
        cVar4 = (char)uVar5;
        while (cVar4 != '\0') {
          *puVar2 = *puVar3;
          puVar2[1] = puVar3[1];
          uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),puVar3 + -2);
          puVar2 = puVar3;
          puVar3 = puVar3 + -2;
          cVar4 = (char)uVar5;
        }
        *puVar2 = (*(undefined4 *)(gen_frame + 0x0));
        puVar2[1] = (*(undefined4 *)(gen_frame + 0x4));
      }
      else {
        for (; param_1 != puVar2; puVar2 = puVar2 + -2) {
          *puVar2 = puVar2[-2];
          puVar2[1] = puVar2[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0x0));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 2;
      puVar6 = puVar6 + 2;
    } while (puVar6 != param_2);
  }
  return 0;
}

/* ref: FUN_00958fc0 */
uint F_00958fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x958fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (param_3 - param_1) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0xc + param_1;
    F_00951cb0(param_1,iVar1,iVar2 * 0x18 + param_1,param_4);
    F_00951cb0(param_2 + iVar2 * -0xc,param_2,iVar2 * 0xc + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0xc;
    F_00951cb0(param_3 + iVar2 * -0x18,iVar3,param_3,param_4);
    uVar4 = F_00951cb0(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_00951cb0(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_00959070 */
unsigned int F_00959070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x959070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  char cVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if ((param_1 != param_2) && (puVar7 = param_1 + 3, puVar7 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      (*(undefined4 *)(gen_frame + 0xc)) = *puVar7;
      (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
      uVar6 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),param_1);
      puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      puVar3 = puVar7;
      if ((char)uVar6 == '\0') {
        uVar6 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar5 = (char)uVar6;
        while (cVar5 != '\0') {
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          puVar3[2] = puVar4[2];
          uVar6 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),puVar4 + -3);
          puVar3 = puVar4;
          puVar4 = puVar4 + -3;
          cVar5 = (char)uVar6;
        }
        *puVar3 = (*(undefined4 *)(gen_frame + 0xc));
        puVar3[1] = (*(undefined4 *)(gen_frame + 0x10));
        puVar3[2] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        for (; param_1 != puVar3; puVar3 = puVar3 + -3) {
          *puVar3 = puVar3[-3];
          puVar3[1] = puVar3[-2];
          puVar3[2] = puVar3[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0xc));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[2] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 3;
      puVar7 = puVar7 + 3;
    } while (puVar7 != param_2);
  }
  return 0;
}

/* ref: FUN_00959150 */
uint F_00959150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x959150u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (param_3 - param_1) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0xc + param_1;
    F_00951d90(param_1,iVar1,iVar2 * 0x18 + param_1,param_4);
    F_00951d90(param_2 + iVar2 * -0xc,param_2,iVar2 * 0xc + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0xc;
    F_00951d90(param_3 + iVar2 * -0x18,iVar3,param_3,param_4);
    uVar4 = F_00951d90(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_00951d90(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_00959200 */
uint F_00959200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x959200u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  uint uVar9;
  
  uVar4 = (param_2 - param_1) / 0xc;
  uVar5 = (int)uVar4 / 2;
  uVar7 = uVar5;
  if (0 < (int)uVar5) {
    uVar9 = uVar5 * 2 + 2;
    puVar8 = (undefined4 *)(param_1 + 8 + uVar5 * 0xc);
    do {
      uVar5 = uVar5 - 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar8 + -3;
      uVar3 = puVar8[-3];
      (*(undefined4 *)(gen_frame + 0xc)) = puVar8[-4];
      (*(uint *)(gen_frame + 0x14)) = uVar9 - 2;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d38));
      (*(undefined4 *)(gen_frame + 0x10)) = uVar3;
      uVar7 = uVar5;
      for (uVar9 = uVar9 - 2; (int)uVar9 < (int)uVar4; uVar9 = uVar9 * 2 + 2) {
        iVar1 = param_1 + uVar9 * 0xc;
        uVar6 = (*param_3)(iVar1,iVar1 + -0xc);
        if ((char)uVar6 != '\0') {
          uVar9 = uVar9 - 1;
        }
        iVar1 = param_1 + uVar9 * 0xc;
        iVar2 = param_1 + uVar7 * 0xc;
        *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
        uVar7 = uVar9;
      }
      if (uVar9 == uVar4) {
        iVar1 = param_1 + uVar7 * 0xc;
        *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + -8 + uVar4 * 0xc);
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + uVar4 * 0xc + -4);
        uVar7 = uVar4 - 1;
      }
      uVar7 = F_00942ba0(param_1,uVar7,uVar5,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)),param_3);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
      puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      uVar9 = (*(uint *)(gen_frame + 0x14));
    } while (0 < (int)uVar5);
  }
  return uVar7;
}

/* ref: FUN_00959300 */
unsigned int F_00959300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x959300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  char cVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = puVar4 + 3, puVar4 != param_2) {
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d38));
      (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
      uVar7 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_1);
      if ((char)uVar7 == '\0') {
        uVar7 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),puVar4 + -3);
        cVar6 = (char)uVar7;
        puVar5 = puVar4 + -3;
        puVar8 = puVar4;
        while (puVar3 = puVar5, cVar6 != '\0') {
          puVar8[1] = puVar3[1];
          puVar8[2] = puVar3[2];
          uVar7 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),puVar3 + -3);
          puVar5 = puVar3 + -3;
          puVar8 = puVar3;
          cVar6 = (char)uVar7;
        }
        puVar8[1] = (*(undefined4 *)(gen_frame + 0x4));
        puVar8[2] = (*(undefined4 *)(gen_frame + 0x8));
      }
      else {
        if (param_1 != puVar4) {
          puVar8 = puVar4 + 5;
          do {
            puVar8[-4] = puVar8[-7];
            puVar5 = puVar8 + -8;
            puVar8[-3] = puVar8[-6];
            puVar8 = puVar8 + -3;
          } while (puVar5 != param_1);
        }
        param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
        param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
      }
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
    }
  }
  return 0;
}

/* ref: FUN_009593d0 */
uint F_009593d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9593d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (param_3 - param_1) / 0x18;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0x18 + param_1;
    F_00951ef0(param_1,iVar1,iVar2 * 0x30 + param_1,param_4);
    F_00951ef0(param_2 + iVar2 * -0x18,param_2,iVar2 * 0x18 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0x18;
    F_00951ef0(param_3 + iVar2 * -0x30,iVar3,param_3,param_4);
    uVar4 = F_00951ef0(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_00951ef0(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_00959480 */
uint F_00959480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x959480u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (param_2 - param_1) / 0x18;
  uVar2 = iVar1 - (iVar1 >> 0x1f);
  iVar4 = iVar1 / 2;
  if (0 < iVar4) {
    iVar3 = param_1 + 8 + iVar4 * 0x18;
    do {
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar3 + -0x1c);
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar3 + -0x18);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar3 + -0x14);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(iVar3 + -0x10);
      (*(undefined1 *)(gen_frame + 0x18)) = *(undefined1 *)(iVar3 + -0xc);
      iVar4 = iVar4 + -1;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d48));
      uVar2 = F_00952020(param_1,iVar4,iVar1,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),param_3);
      iVar3 = iVar3 + -0x18;
    } while (0 < iVar4);
  }
  return uVar2;
}

/* ref: FUN_00959510 */
uint F_00959510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x959510u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_2;
  uVar7 = param_1;
  if (param_1 != param_2) {
    while (uVar3 = uVar7 + 0x18, uVar3 != param_2) {
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(uVar7 + 0x24);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(uVar7 + 0x1c);
      uVar2 = *(undefined4 *)(uVar7 + 0x28);
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(uVar7 + 0x20);
      uVar1 = *(undefined1 *)(uVar7 + 0x2c);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d48));
      (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
      (*(undefined1 *)(gen_frame + 0x18)) = uVar1;
      uVar6 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),param_1);
      if ((char)uVar6 == '\0') {
        uVar6 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),uVar7);
        cVar5 = (char)uVar6;
        uVar4 = uVar3;
        while (uVar6 = uVar7, cVar5 != '\0') {
          *(undefined4 *)(uVar4 + 4) = *(undefined4 *)(uVar6 + 4);
          *(undefined4 *)(uVar4 + 8) = *(undefined4 *)(uVar6 + 8);
          *(undefined4 *)(uVar4 + 0xc) = *(undefined4 *)(uVar6 + 0xc);
          *(undefined4 *)(uVar4 + 0x10) = *(undefined4 *)(uVar6 + 0x10);
          *(undefined1 *)(uVar4 + 0x14) = *(undefined1 *)(uVar6 + 0x14);
          uVar7 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),uVar6 - 0x18);
          cVar5 = (char)uVar7;
          uVar7 = uVar6 - 0x18;
          uVar4 = uVar6;
        }
        *(undefined4 *)(uVar4 + 4) = (*(undefined4 *)(gen_frame + 0x8));
        *(undefined4 *)(uVar4 + 8) = (*(undefined4 *)(gen_frame + 0xc));
        uVar6 = CONCAT31((int3)((uint)(*(undefined4 *)(gen_frame + 0xc)) >> 8),(*(undefined1 *)(gen_frame + 0x18)));
        *(undefined4 *)(uVar4 + 0xc) = (*(undefined4 *)(gen_frame + 0x10));
        *(undefined4 *)(uVar4 + 0x10) = (*(undefined4 *)(gen_frame + 0x14));
        *(undefined1 *)(uVar4 + 0x14) = (*(undefined1 *)(gen_frame + 0x18));
        uVar7 = uVar3;
      }
      else {
        F_00942d00(param_1,uVar3,uVar7 + 0x30,param_1);
        *(undefined4 *)(param_1 + 4) = (*(undefined4 *)(gen_frame + 0x8));
        *(undefined4 *)(param_1 + 8) = (*(undefined4 *)(gen_frame + 0xc));
        uVar6 = CONCAT31((int3)((uint)(*(undefined4 *)(gen_frame + 0xc)) >> 8),(*(undefined1 *)(gen_frame + 0x18)));
        *(undefined4 *)(param_1 + 0xc) = (*(undefined4 *)(gen_frame + 0x10));
        *(undefined4 *)(param_1 + 0x10) = (*(undefined4 *)(gen_frame + 0x14));
        *(undefined1 *)(param_1 + 0x14) = (*(undefined1 *)(gen_frame + 0x18));
        uVar7 = uVar3;
      }
    }
  }
  return uVar6;
}

/* ref: FUN_00959620 */
uint F_00959620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x959620u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_3 - param_1 >> 4;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0x10 + param_1;
    F_00952100(param_1,iVar1,iVar2 * 0x20 + param_1,param_4);
    F_00952100(param_2 + iVar2 * -0x10,param_2,iVar2 * 0x10 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0x10;
    F_00952100(param_3 + iVar2 * -0x20,iVar3,param_3,param_4);
    uVar4 = F_00952100(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_00952100(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_009596c0 */
uint F_009596c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9596c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  uint uVar9;
  
  uVar7 = param_2 - param_1 >> 4;
  uVar3 = (int)(uVar7 - (param_2 - param_1 >> 0x1f)) >> 1;
  uVar6 = uVar3;
  if (0 < (int)uVar3) {
    uVar9 = uVar3 * 2 + 2;
    puVar8 = (undefined4 *)(param_1 + 8 + uVar3 * 0x10);
    do {
      (*(undefined4 *)(gen_frame + 0x8)) = puVar8[-5];
      uVar3 = uVar3 - 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar8 + -4;
      uVar2 = puVar8[-3];
      (*(undefined4 *)(gen_frame + 0xc)) = puVar8[-4];
      (*(uint *)(gen_frame + 0x14)) = uVar9 - 2;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d58));
      (*(undefined4 *)(gen_frame + 0x10)) = uVar2;
      uVar6 = uVar3;
      for (uVar9 = uVar9 - 2; (int)uVar9 < (int)uVar7; uVar9 = uVar9 * 2 + 2) {
        iVar4 = uVar9 * 0x10 + param_1;
        uVar5 = (*param_3)(iVar4,iVar4 + -0x10);
        if ((char)uVar5 != '\0') {
          uVar9 = uVar9 - 1;
        }
        iVar4 = param_1 + uVar6 * 0x10;
        *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 4 + uVar9 * 0x10);
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 8 + uVar9 * 0x10);
        *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(param_1 + 0xc + uVar9 * 0x10);
        uVar6 = uVar9;
      }
      if (uVar9 == uVar7) {
        iVar4 = param_1 + uVar6 * 0x10;
        iVar1 = param_1 + -0x10 + uVar7 * 0x10;
        *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + -0xc + uVar7 * 0x10);
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar1 + 8);
        *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
        uVar6 = uVar7 - 1;
      }
      uVar6 = F_00942d50(param_1,uVar6,uVar3,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),param_3);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
      puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      uVar9 = (*(uint *)(gen_frame + 0x14));
    } while (0 < (int)uVar3);
  }
  return uVar6;
}

/* ref: FUN_009597d0 */
uint F_009597d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9597d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  char cVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  puVar7 = param_2;
  puVar3 = param_1;
  if (param_1 != param_2) {
    while (puVar3 = puVar3 + 4, puVar3 != param_2) {
      puVar7 = (undefined4 *)puVar3[2];
      uVar1 = puVar3[3];
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)puVar3[1];
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d58));
      (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar7;
      (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
      uVar6 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1);
      if ((char)uVar6 == '\0') {
        uVar6 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),puVar3 + -4);
        cVar5 = (char)uVar6;
        puVar4 = puVar3 + -4;
        puVar7 = puVar3;
        while (puVar2 = puVar4, cVar5 != '\0') {
          puVar7[1] = puVar2[1];
          puVar7[2] = puVar2[2];
          puVar7[3] = puVar2[3];
          uVar6 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),puVar2 + -4);
          puVar4 = puVar2 + -4;
          puVar7 = puVar2;
          cVar5 = (char)uVar6;
        }
        puVar7[1] = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
        puVar7[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
        puVar7[3] = (*(undefined4 *)(gen_frame + 0x18));
      }
      else {
        if (param_1 != puVar3) {
          puVar7 = puVar3 + 6;
          do {
            puVar7[-5] = puVar7[-9];
            puVar7[-4] = puVar7[-8];
            puVar4 = puVar7 + -10;
            puVar7[-3] = puVar7[-7];
            puVar7 = puVar7 + -4;
          } while (puVar4 != param_1);
        }
        param_1[1] = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
        param_1[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
        param_1[3] = (*(undefined4 *)(gen_frame + 0x18));
        (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
      }
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
    }
  }
  return (uint)puVar7;
}

/* ref: FUN_009598c0 */
uint F_009598c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9598c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 4 + param_1;
    F_009522b0(param_1,iVar1,iVar2 * 8 + param_1,param_4);
    F_009522b0(param_2 + iVar2 * -4,param_2,iVar2 * 4 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -4;
    F_009522b0(param_3 + iVar2 * -8,iVar3,param_3,param_4);
    uVar4 = F_009522b0(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_009522b0(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_00959960 */
uint F_00959960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x959960u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 4 + param_1;
    F_00952310(param_1,iVar1,iVar2 * 8 + param_1,param_4);
    F_00952310(param_2 + iVar2 * -4,param_2,iVar2 * 4 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -4;
    F_00952310(param_3 + iVar2 * -8,iVar3,param_3,param_4);
    uVar4 = F_00952310(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_00952310(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_00959a00 */
uint F_00959a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x959a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 4 + param_1;
    F_00952370(param_1,iVar1,iVar2 * 8 + param_1,param_4);
    F_00952370(param_2 + iVar2 * -4,param_2,iVar2 * 4 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -4;
    F_00952370(param_3 + iVar2 * -8,iVar3,param_3,param_4);
    uVar4 = F_00952370(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_00952370(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_00959aa0 */
uint F_00959aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x959aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 4 + param_1;
    F_009523d0(param_1,iVar1,iVar2 * 8 + param_1,param_4);
    F_009523d0(param_2 + iVar2 * -4,param_2,iVar2 * 4 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -4;
    F_009523d0(param_3 + iVar2 * -8,iVar3,param_3,param_4);
    uVar4 = F_009523d0(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_009523d0(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_00959b40 */
uint F_00959b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x959b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = uVar1;
  }
  return (uint)param_2;
}

/* ref: FUN_00959b60 */
uint F_00959b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x959b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (param_3 - param_1) / 0x18;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0x18 + param_1;
    F_00952430(param_1,iVar1,iVar2 * 0x30 + param_1,param_4);
    F_00952430(param_2 + iVar2 * -0x18,param_2,iVar2 * 0x18 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0x18;
    F_00952430(param_3 + iVar2 * -0x30,iVar3,param_3,param_4);
    uVar4 = F_00952430(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_00952430(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_00959c10 */
uint F_00959c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x959c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (param_3 - param_1) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0xc + param_1;
    F_00952580(param_1,iVar1,iVar2 * 0x18 + param_1,param_4);
    F_00952580(param_2 + iVar2 * -0xc,param_2,iVar2 * 0xc + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0xc;
    F_00952580(param_3 + iVar2 * -0x18,iVar3,param_3,param_4);
    uVar4 = F_00952580(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_00952580(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_00959cc0 */
unsigned int F_00959cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x959cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  char cVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if ((param_1 != param_2) && (puVar7 = param_1 + 3, puVar7 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      (*(undefined4 *)(gen_frame + 0xc)) = *puVar7;
      (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
      uVar6 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),param_1);
      puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      puVar3 = puVar7;
      if ((char)uVar6 == '\0') {
        uVar6 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar5 = (char)uVar6;
        while (cVar5 != '\0') {
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          puVar3[2] = puVar4[2];
          uVar6 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),puVar4 + -3);
          puVar3 = puVar4;
          puVar4 = puVar4 + -3;
          cVar5 = (char)uVar6;
        }
        *puVar3 = (*(undefined4 *)(gen_frame + 0xc));
        puVar3[1] = (*(undefined4 *)(gen_frame + 0x10));
        puVar3[2] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        for (; param_1 != puVar3; puVar3 = puVar3 + -3) {
          *puVar3 = puVar3[-3];
          puVar3[1] = puVar3[-2];
          puVar3[2] = puVar3[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0xc));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[2] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 3;
      puVar7 = puVar7 + 3;
    } while (puVar7 != param_2);
  }
  return 0;
}

/* ref: FUN_00959da0 */
uint F_00959da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x959da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_3 - param_1 >> 4;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0x10 + param_1;
    F_00952660(param_1,iVar1,iVar2 * 0x20 + param_1,param_4);
    F_00952660(param_2 + iVar2 * -0x10,param_2,iVar2 * 0x10 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0x10;
    F_00952660(param_3 + iVar2 * -0x20,iVar3,param_3,param_4);
    uVar4 = F_00952660(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_00952660(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_00959e40 */
unsigned int F_00959e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x959e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  char cVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if ((param_1 != param_2) && (puVar6 = param_1 + 4, puVar6 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      uVar1 = puVar6[2];
      (*(undefined4 *)(gen_frame + 0xc)) = puVar6[1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar6;
      (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x14)) = puVar6[3];
      uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x8)),param_1);
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      puVar2 = puVar6;
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar4 = (char)uVar5;
        while (cVar4 != '\0') {
          *puVar2 = *puVar3;
          puVar2[1] = puVar3[1];
          puVar2[2] = puVar3[2];
          puVar2[3] = puVar3[3];
          uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x8)),puVar3 + -4);
          puVar2 = puVar3;
          puVar3 = puVar3 + -4;
          cVar4 = (char)uVar5;
        }
        *puVar2 = (*(undefined4 *)(gen_frame + 0x8));
        puVar2[1] = (*(undefined4 *)(gen_frame + 0xc));
        puVar2[2] = (*(undefined4 *)(gen_frame + 0x10));
        puVar2[3] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        for (; param_1 != puVar2; puVar2 = puVar2 + -4) {
          *puVar2 = puVar2[-4];
          puVar2[1] = puVar2[-3];
          puVar2[2] = puVar2[-2];
          puVar2[3] = puVar2[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0x8));
        param_1[1] = (*(undefined4 *)(gen_frame + 0xc));
        param_1[2] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[3] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 4;
      puVar6 = puVar6 + 4;
    } while (puVar6 != param_2);
  }
  return 0;
}

/* ref: FUN_00959f40 */
uint F_00959f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x959f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (param_3 - param_1) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0xc + param_1;
    F_00952780(param_1,iVar1,iVar2 * 0x18 + param_1,param_4);
    F_00952780(param_2 + iVar2 * -0xc,param_2,iVar2 * 0xc + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0xc;
    F_00952780(param_3 + iVar2 * -0x18,iVar3,param_3,param_4);
    uVar4 = F_00952780(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_00952780(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_00959ff0 */
unsigned int F_00959ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x959ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  char cVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if ((param_1 != param_2) && (puVar7 = param_1 + 3, puVar7 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      (*(undefined4 *)(gen_frame + 0xc)) = *puVar7;
      (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
      uVar6 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),param_1);
      puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      puVar3 = puVar7;
      if ((char)uVar6 == '\0') {
        uVar6 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar5 = (char)uVar6;
        while (cVar5 != '\0') {
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          puVar3[2] = puVar4[2];
          uVar6 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),puVar4 + -3);
          puVar3 = puVar4;
          puVar4 = puVar4 + -3;
          cVar5 = (char)uVar6;
        }
        *puVar3 = (*(undefined4 *)(gen_frame + 0xc));
        puVar3[1] = (*(undefined4 *)(gen_frame + 0x10));
        puVar3[2] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        for (; param_1 != puVar3; puVar3 = puVar3 + -3) {
          *puVar3 = puVar3[-3];
          puVar3[1] = puVar3[-2];
          puVar3[2] = puVar3[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0xc));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[2] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 3;
      puVar7 = puVar7 + 3;
    } while (puVar7 != param_2);
  }
  return 0;
}

/* ref: FUN_0095a0d0 */
uint F_0095a0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95a0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_3 - param_1 >> 4;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0x10 + param_1;
    F_00952860(param_1,iVar1,iVar2 * 0x20 + param_1,param_4);
    F_00952860(param_2 + iVar2 * -0x10,param_2,iVar2 * 0x10 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0x10;
    F_00952860(param_3 + iVar2 * -0x20,iVar3,param_3,param_4);
    uVar4 = F_00952860(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_00952860(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_0095a170 */
unsigned int F_0095a170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95a170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  char cVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if ((param_1 != param_2) && (puVar6 = param_1 + 4, puVar6 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      uVar1 = puVar6[2];
      (*(undefined4 *)(gen_frame + 0xc)) = puVar6[1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar6;
      (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x14)) = puVar6[3];
      uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x8)),param_1);
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      puVar2 = puVar6;
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar4 = (char)uVar5;
        while (cVar4 != '\0') {
          *puVar2 = *puVar3;
          puVar2[1] = puVar3[1];
          puVar2[2] = puVar3[2];
          puVar2[3] = puVar3[3];
          uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x8)),puVar3 + -4);
          puVar2 = puVar3;
          puVar3 = puVar3 + -4;
          cVar4 = (char)uVar5;
        }
        *puVar2 = (*(undefined4 *)(gen_frame + 0x8));
        puVar2[1] = (*(undefined4 *)(gen_frame + 0xc));
        puVar2[2] = (*(undefined4 *)(gen_frame + 0x10));
        puVar2[3] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        for (; param_1 != puVar2; puVar2 = puVar2 + -4) {
          *puVar2 = puVar2[-4];
          puVar2[1] = puVar2[-3];
          puVar2[2] = puVar2[-2];
          puVar2[3] = puVar2[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0x8));
        param_1[1] = (*(undefined4 *)(gen_frame + 0xc));
        param_1[2] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[3] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 4;
      puVar6 = puVar6 + 4;
    } while (puVar6 != param_2);
  }
  return 0;
}

/* ref: FUN_0095a270 */
uint F_0095a270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95a270u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (param_3 - param_1) / 0x14;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0x14 + param_1;
    F_00952980(param_1,iVar1,iVar2 * 0x28 + param_1,param_4);
    F_00952980(param_2 + iVar2 * -0x14,param_2,iVar2 * 0x14 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0x14;
    F_00952980(param_3 + iVar2 * -0x28,iVar3,param_3,param_4);
    uVar4 = F_00952980(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_00952980(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_0095a320 */
unsigned int F_0095a320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95a320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  char cVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if ((param_1 != param_2) && (puVar6 = param_1 + 5, puVar6 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      uVar1 = puVar6[1];
      (*(undefined4 *)(gen_frame + 0xc)) = puVar6[2];
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar6;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x10)) = puVar6[3];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar6[4];
      uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),param_1);
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      puVar2 = puVar6;
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar4 = (char)uVar5;
        while (cVar4 != '\0') {
          *puVar2 = *puVar3;
          puVar2[1] = puVar3[1];
          puVar2[2] = puVar3[2];
          puVar2[3] = puVar3[3];
          puVar2[4] = puVar3[4];
          uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),puVar3 + -5);
          puVar2 = puVar3;
          puVar3 = puVar3 + -5;
          cVar4 = (char)uVar5;
        }
        *puVar2 = (*(undefined4 *)(gen_frame + 0x4));
        puVar2[1] = (*(undefined4 *)(gen_frame + 0x8));
        puVar2[2] = (*(undefined4 *)(gen_frame + 0xc));
        puVar2[3] = (*(undefined4 *)(gen_frame + 0x10));
        puVar2[4] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        for (; param_1 != puVar2; puVar2 = puVar2 + -5) {
          *puVar2 = puVar2[-5];
          puVar2[1] = puVar2[-4];
          puVar2[2] = puVar2[-3];
          puVar2[3] = puVar2[-2];
          puVar2[4] = puVar2[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0x4));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x8));
        param_1[2] = (*(undefined4 *)(gen_frame + 0xc));
        param_1[3] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[4] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 5;
      puVar6 = puVar6 + 5;
    } while (puVar6 != param_2);
  }
  return 0;
}

/* ref: FUN_0095a440 */
uint F_0095a440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00952ad0(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_0095a460 */
uint F_0095a460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00952b50(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_0095a480 */
uint F_0095a480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + -4);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 + -8);
  *(undefined4 *)(param_2 + -8) = *param_1;
  *(undefined4 *)(param_2 + -4) = param_1[1];
  uVar1 = F_009414b0(param_1,0,(param_2 - (int)param_1) + -8 >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
  return uVar1;
}

/* ref: FUN_0095a4d0 */
uint F_0095a4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00952c20(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_0095a4f0 */
uint F_0095a4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00952ce0(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_0095a510 */
uint F_0095a510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a510u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)((*(int *)&gen_args[1]) + -4);
  *(undefined4 *)((*(int *)&gen_args[1]) + -4) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_00941920((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 + -4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_0095a550 */
uint F_0095a550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + -4);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 + -8);
  *(undefined4 *)(param_2 + -8) = *param_1;
  *(undefined4 *)(param_2 + -4) = param_1[1];
  uVar1 = F_00941a40(param_1,0,(param_2 - (int)param_1) + -8 >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
  return uVar1;
}

/* ref: FUN_0095a5a0 */
uint F_0095a5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a5a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 + -8);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(param_2 + -0xc);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + -4);
  *(undefined4 *)(param_2 + -0xc) = *param_1;
  *(undefined4 *)(param_2 + -8) = param_1[1];
  *(undefined4 *)(param_2 + -4) = param_1[2];
  uVar1 = F_00941b40(param_1,0,((param_2 - (int)param_1) + -0xc) / 0xc,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar1;
}

/* ref: FUN_0095a600 */
uint F_0095a600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a600u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)((*(int *)&gen_args[1]) + -4);
  *(undefined4 *)((*(int *)&gen_args[1]) + -4) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_00941d30((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 + -4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_0095a640 */
uint F_0095a640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a640u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)((*(int *)&gen_args[1]) + -4);
  *(undefined4 *)((*(int *)&gen_args[1]) + -4) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_00941e40((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 + -4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_0095a680 */
uint F_0095a680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a680u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)((*(int *)&gen_args[1]) + -4);
  *(undefined4 *)((*(int *)&gen_args[1]) + -4) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_00941f50((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 + -4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_0095a6c0 */
uint F_0095a6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a6c0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)((*(int *)&gen_args[1]) + -4);
  *(undefined4 *)((*(int *)&gen_args[1]) + -4) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_00942060((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 + -4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_0095a700 */
uint F_0095a700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00952f90(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_0095a720 */
uint F_0095a720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 + -8);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(param_2 + -0xc);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + -4);
  *(undefined4 *)(param_2 + -0xc) = *param_1;
  *(undefined4 *)(param_2 + -8) = param_1[1];
  *(undefined4 *)(param_2 + -4) = param_1[2];
  uVar1 = F_00942380(param_1,0,((param_2 - (int)param_1) + -0xc) / 0xc,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar1;
}

/* ref: FUN_0095a780 */
uint F_0095a780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + -0xc);
  uVar1 = *(undefined4 *)(param_2 + -4);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + -0x10);
  (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + -8);
  *(undefined4 *)(param_2 + -0x10) = *param_1;
  *(undefined4 *)(param_2 + -0xc) = param_1[1];
  *(undefined4 *)(param_2 + -8) = param_1[2];
  *(undefined4 *)(param_2 + -4) = param_1[3];
  uVar2 = F_009424d0(param_1,0,(param_2 - (int)param_1) + -0x10 >> 4,&(*(undefined4 *)(gen_frame + 0xc)),param_3);
  return uVar2;
}

/* ref: FUN_0095a7e0 */
uint F_0095a7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 + -8);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(param_2 + -0xc);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + -4);
  *(undefined4 *)(param_2 + -0xc) = *param_1;
  *(undefined4 *)(param_2 + -8) = param_1[1];
  *(undefined4 *)(param_2 + -4) = param_1[2];
  uVar1 = F_00942640(param_1,0,((param_2 - (int)param_1) + -0xc) / 0xc,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar1;
}

/* ref: FUN_0095a840 */
uint F_0095a840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + -0xc);
  uVar1 = *(undefined4 *)(param_2 + -4);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + -0x10);
  (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + -8);
  *(undefined4 *)(param_2 + -0x10) = *param_1;
  *(undefined4 *)(param_2 + -0xc) = param_1[1];
  *(undefined4 *)(param_2 + -8) = param_1[2];
  *(undefined4 *)(param_2 + -4) = param_1[3];
  uVar2 = F_00942790(param_1,0,(param_2 - (int)param_1) + -0x10 >> 4,&(*(undefined4 *)(gen_frame + 0xc)),param_3);
  return uVar2;
}

/* ref: FUN_0095a8a0 */
uint F_0095a8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a8a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_009531a0(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_0095a8c0 */
uint F_0095a8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a8c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + -4);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 + -8);
  *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + -4) = *(undefined4 *)(param_1 + 8);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d38));
  uVar1 = F_00951e10(param_1,0,((param_2 - param_1) + -0xc) / 0xc,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_3);
  return uVar1;
}

/* ref: FUN_0095a920 */
uint F_0095a920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95a920u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + -0x10);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + -0x14);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + -8);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + -0xc);
  (*(undefined1 *)(gen_frame + 0x18)) = *(undefined1 *)(param_2 + -4);
  *(undefined4 *)(param_2 + -0x14) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + -0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_1 + 0x10);
  *(undefined1 *)(param_2 + -4) = *(undefined1 *)(param_1 + 0x14);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d48));
  uVar1 = F_00952020(param_1,0,((param_2 - param_1) + -0x18) / 0x18,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),param_3);
  return uVar1;
}

/* ref: FUN_0095a9a0 */
uint F_0095a9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95a9a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + -0xc);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + -8);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + -4);
  *(undefined4 *)(param_2 + -0xc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + -4) = *(undefined4 *)(param_1 + 0xc);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d58));
  uVar1 = F_009521b0(param_1,0,(param_2 - param_1) + -0x10 >> 4,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),param_3);
  return uVar1;
}

/* ref: Client::UI2::AddonScreenInfoChild::IconLoader::vf0 */
uint F_0095aa10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95aa10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060(this + 4);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0095aa40 */
uint F_0095aa40(unsigned int gen_a0)
{
  GEN_ENTER(0x95aa40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d6bdc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060((undefined *)((int)this + 0x1a4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanyBase::vf0 */
uint F_0095aa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95aa70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d6bdc));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060(this + 0x1a4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0095aac0 */
uint F_0095aac0(unsigned int gen_a0)
{
  GEN_ENTER(0x95aac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d6cec));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d8) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060((undefined *)((int)this + 0x1dc));
  F_0058d4b0((undefined *)((int)this + 0x1a8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonImageLocationTitleBase::vf0 */
uint F_0095ab00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95ab00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d6cec));
  *(undefined * PTR32 * PTR32 *)(this + 0x1d8) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060(this + 0x1dc);
  F_0058d4b0(this + 0x1a8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0095ab50 */
uint F_0095ab50(unsigned int gen_a0)
{
  GEN_ENTER(0x95ab50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10d6dfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 400) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060((undefined *)((int)this + 0x194));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonTextMonsterNoteBase::vf68 */
unsigned int F_0095ab80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95ab80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::AddonTextMonsterNoteBase::vf0 */
uint F_0095ab90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95ab90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10d6dfc));
  *(undefined * PTR32 * PTR32 *)(this + 400) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060(this + 0x194);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0095ac00 */
unsigned int F_0095ac00(unsigned int gen_a0)
{
  GEN_ENTER(0x95ac00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int local_8;
  
  local_8 = 100;
  do {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    cVar1 = *(char *)((int)piVar2 + 0x15);
    while (cVar1 == '\0') {
      F_00946da0(this,piVar2[2]);
      piVar3 = (int *)*piVar2;
      F_00429760(piVar2,0x18,400);
      piVar2 = piVar3;
      cVar1 = *(char *)((int)piVar3 + 0x15);
    }
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    this = (undefined *)((int)this + 0x10);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}

/* ref: Client::UI2::Agent::AgentCutSceneReplay::vf2 */
uint F_0095ac70(unsigned int gen_a0)
{
  GEN_ENTER(0x95ac70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00877d70(this,0);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentLinkshell::vf2 */
uint F_0095ac80(unsigned int gen_a0)
{
  GEN_ENTER(0x95ac80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0087cf00(this,0);
  return uVar1;
}

/* ref: FUN_0095ac90 */
uint F_0095ac90(unsigned int gen_a0)
{
  GEN_ENTER(0x95ac90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_0042c880((undefined *)((int)this + 0x28));
  F_009465f0((undefined *)((int)this + 0xc));
  uVar3 = F_00429760(*(undefined4 *)((int)this + 0xc),8,400);
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

/* ref: Client::UI2::Agent::AgentGrandCompanySupply::vf0 */
uint F_0095ad00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95ad00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d47bc));
  F_0082acb0(this);
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

/* ref: FUN_0095ad60 */
uint F_0095ad60(unsigned int gen_a0)
{
  GEN_ENTER(0x95ad60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d6bdc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060((undefined *)((int)this + 0x1a4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompany0::vf0 */
uint F_0095ad90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95ad90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d6bdc));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060(this + 0x1a4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0095ade0 */
uint F_0095ade0(unsigned int gen_a0)
{
  GEN_ENTER(0x95ade0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d6bdc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060((undefined *)((int)this + 0x1a4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompany1::vf0 */
uint F_0095ae10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95ae10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d6bdc));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060(this + 0x1a4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0095ae60 */
uint F_0095ae60(unsigned int gen_a0)
{
  GEN_ENTER(0x95ae60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d717c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a8) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060((undefined *)((int)this + 0x1ac));
  F_00954140((undefined *)((int)this + 400));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonImage::vf0 */
uint F_0095aea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95aea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d717c));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a8) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060(this + 0x1ac);
  F_00954140(this + 400);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0095aef0 */
uint F_0095aef0(unsigned int gen_a0)
{
  GEN_ENTER(0x95aef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d6cec));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d8) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060((undefined *)((int)this + 0x1dc));
  F_0058d4b0((undefined *)((int)this + 0x1a8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonImageLocationTitle::vf0 */
uint F_0095af30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95af30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d6cec));
  *(undefined * PTR32 * PTR32 *)(this + 0x1d8) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060(this + 0x1dc);
  F_0058d4b0(this + 0x1a8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0095af80 */
uint F_0095af80(unsigned int gen_a0)
{
  GEN_ENTER(0x95af80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d6cec));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d8) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060((undefined *)((int)this + 0x1dc));
  F_0058d4b0((undefined *)((int)this + 0x1a8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonImageLocationTitleShort::vf0 */
uint F_0095afc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95afc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d6cec));
  *(undefined * PTR32 * PTR32 *)(this + 0x1d8) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060(this + 0x1dc);
  F_0058d4b0(this + 0x1a8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0095b010 */
uint F_0095b010(unsigned int gen_a0)
{
  GEN_ENTER(0x95b010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d74ac));
  *(undefined * PTR32 * PTR32 *)((int)this + 400) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060((undefined *)((int)this + 0x194));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonLevelUp::vf0 */
uint F_0095b040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95b040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d74ac));
  *(undefined * PTR32 * PTR32 *)(this + 400) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060(this + 0x194);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0095b090 */
uint F_0095b090(unsigned int gen_a0)
{
  GEN_ENTER(0x95b090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10d6dfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 400) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060((undefined *)((int)this + 0x194));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonTextMonsterNote0::vf0 */
uint F_0095b0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95b0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10d6dfc));
  *(undefined * PTR32 * PTR32 *)(this + 400) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060(this + 0x194);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0095b110 */
uint F_0095b110(unsigned int gen_a0)
{
  GEN_ENTER(0x95b110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10d6dfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 400) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060((undefined *)((int)this + 0x194));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonTextMonsterNote1::vf0 */
uint F_0095b140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95b140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10d6dfc));
  *(undefined * PTR32 * PTR32 *)(this + 400) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060(this + 0x194);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0095b190 */
uint F_0095b190(unsigned int gen_a0)
{
  GEN_ENTER(0x95b190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10d6dfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 400) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060((undefined *)((int)this + 0x194));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonTextMonsterNote2::vf0 */
uint F_0095b1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95b1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10d6dfc));
  *(undefined * PTR32 * PTR32 *)(this + 400) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060(this + 0x194);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMonsterNote::vf0 */
uint F_0095b210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95b210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d6ad4));
  *(undefined * PTR32 * PTR32 *)(this + 0x82c) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0095b2d0 */
uint F_0095b2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x95b2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0095b310 */
uint F_0095b310(unsigned int gen_a0)
{
  GEN_ENTER(0x95b310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_009546c0(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x137);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_0095b340 */
uint F_0095b340(unsigned int gen_a0)
{
  GEN_ENTER(0x95b340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00954780(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_0095b370 */
uint F_0095b370(unsigned int gen_a0)
{
  GEN_ENTER(0x95b370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0095b3b0 */
uint F_0095b3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95b3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0x14,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
    piVar3[3] = param_1[1];
    piVar3[4] = param_1[2];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_0095b420 */
uint F_0095b420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95b420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0x14,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_0095b470 */
uint F_0095b470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95b470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_0095b4d0 */
uint F_0095b4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95b4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_0095b520 */
uint F_0095b520(unsigned int gen_a0)
{
  GEN_ENTER(0x95b520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  ulonglong uVar2;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)this));
  if (piVar1 != *(int * PTR32 *)this) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    uVar2 = F_00429760(piVar1,0xc,400);
    piVar1 = (int *)uVar2;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return (uint)piVar1;
}

/* ref: FUN_0095b550 */
uint F_0095b550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95b550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_0095b5b0 */
uint F_0095b5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95b5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar1;
  }
  uVar2 = *(int *)((int)this + 0xc) + param_1;
  if (((piVar4 == (int *)0x0) || ((int *)*piVar4 == (int *)0x0)) ||
     (piVar4 = *(int * PTR32 *)*piVar4, piVar4 == (int *)0x0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar4;
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    return *((uint *)GEN_TOP((*(int *)(iVar3 + 4) + (uVar2 - *(uint *)(iVar3 + 8)) * 4)));
  }
  return *((uint *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4)));
}

/* ref: FUN_0095b600 */
uint F_0095b600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95b600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_0095b670 */
uint F_0095b670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95b670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
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
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_0095b6e0 */
uint F_0095b6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x95b6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00954ba0(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_0095b760 */
uint F_0095b760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95b760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00928c60(this,param_2);
  if (uVar1 != *(uint *)((int)this + 4)) {
    if ((*(uint *)(uVar1 + 0x14) <= param_2[1]) &&
       ((param_2[1] != *(uint *)(uVar1 + 0x14) || (*(uint *)(uVar1 + 0x10) <= *param_2)))) {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  *param_1 = *(uint *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_0095b7f0 */
uint F_0095b7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95b7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_0095b850 */
uint F_0095b850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95b850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_0095b8a0 */
uint F_0095b8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95b8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00954d60(this,*(undefined4 *)this,param_1);
  return uVar1;
}

/* ref: FUN_0095b8c0 */
uint F_0095b8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95b8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0x18,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_0095b910 */
uint F_0095b910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95b910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0x14,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
    piVar3[3] = param_1[1];
    piVar3[4] = param_1[2];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_0095b980 */
uint F_0095b980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95b980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0x14,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_0095b9d0 */
uint F_0095b9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95b9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_0042c880(param_2 + 4);
    F_00429760(param_2,0x6c,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_0095ba20 */
uint F_0095ba20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95ba20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_0042c880(param_2 + 2);
    F_00429760(param_2,100,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_0095ba70 */
uint F_0095ba70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95ba70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_0042c880(param_2 + 4);
    F_00429760(param_2,0x68,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_0095bac0 */
unsigned int F_0095bac0(unsigned int gen_a0)
{
  GEN_ENTER(0x95bac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_0095baf0 */
unsigned int F_0095baf0(unsigned int gen_a0)
{
  GEN_ENTER(0x95baf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_0095bb20 */
uint F_0095bb20(unsigned int gen_a0)
{
  GEN_ENTER(0x95bb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0095bb60 */
unsigned int F_0095bb60(unsigned int gen_a0)
{
  GEN_ENTER(0x95bb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_0095bb90 */
uint F_0095bb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95bb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
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
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_0095bc00 */
uint F_0095bc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95bc00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_0095bc60 */
uint F_0095bc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95bc60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_0095bcb0 */
uint F_0095bcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95bcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_0095bd10 */
uint F_0095bd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95bd10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_0095bde0 */
uint F_0095bde0(unsigned int gen_a0)
{
  GEN_ENTER(0x95bde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00955290(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0095be30 */
uint F_0095be30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x95be30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00956530(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar6,0,param_4,
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
    F_009565b0(((undefined1 *)(gen_frame + 0xc)),uVar6,0,param_7,*(undefined4 *)this,0,
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

/* ref: FUN_0095bfc0 */
uint F_0095bfc0(unsigned int gen_a0)
{
  GEN_ENTER(0x95bfc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00955350(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0095bfe0 */
uint F_0095bfe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x95bfe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar4 = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  if (this != (undefined *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)this;
  }
  (*(int *)(gen_frame + 0x20)) = param_4;
  if (this != (undefined *)0x0) {
    piVar4 = *(int * PTR32 *)this;
  }
  uVar3 = param_4 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x24)) = uVar3;
  (*(int *)(gen_frame + 0x28)) = param_7 - param_4;
  (*(int *)(gen_frame + 0x14)) = param_7;
  uVar6 = 0;
  if (uVar3 < (uint)((*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - param_7)) {
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*piVar4;
    }
    uVar5 = 0;
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar5 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    F_00956630(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar5,0,param_4,
                 uVar6,0,param_7);
    while ((*(int *)(gen_frame + 0x28)) != 0) {
      if (*(int *)((int)this + 0x10) != 0) {
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4)));
        F_0042c880((undefined *)(iVar1 + 100));
        F_0042c880((undefined *)(iVar1 + 0x10));
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
        if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        piVar4 = (int *)((int)this + 0x10);
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + -1;
    }
  }
  else {
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    uVar5 = 0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      uVar5 = *(undefined4 *)*piVar4;
    }
    F_009566b0(((undefined1 *)(gen_frame + 0xc)),uVar5,0,param_7,*(undefined4 *)this,0,
                 *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10),uVar6,0,param_4);
    while ((*(int *)(gen_frame + 0x28)) != 0) {
      if (*(int *)((int)this + 0x10) != 0) {
        uVar3 = *(int *)((int)this + 0xc) + -1 + *(int *)((int)this + 0x10);
        if (*(uint *)((int)this + 8) <= uVar3) {
          uVar3 = uVar3 - *(uint *)((int)this + 8);
        }
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
        F_0042c880((undefined *)(iVar1 + 100));
        F_0042c880((undefined *)(iVar1 + 0x10));
        piVar4 = (int *)((int)this + 0x10);
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + -1;
    }
  }
  iVar1 = *(int *)((int)this + 0xc);
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x24)) + iVar1;
  if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar4;
  }
  return (uint)param_1;
}

/* ref: FUN_0095c1c0 */
uint F_0095c1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x95c1c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *(int *)((int)this + 0x10);
  while (iVar3 != 0) {
    if (*(int *)((int)this + 0x10) != 0) {
      uVar2 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
      if (*(uint *)((int)this + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)((int)this + 8);
      }
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4)));
      F_0042c880((undefined *)(iVar3 + 100));
      F_0042c880((undefined *)(iVar3 + 0x10));
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
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))),200,400);
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

/* ref: FUN_0095c260 */
uint F_0095c260(unsigned int gen_a0)
{
  GEN_ENTER(0x95c260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  ulonglong uVar6;
  
  piVar5 = *(int * PTR32 *)this;
  piVar4 = (int *)*piVar5;
  *piVar5 = (int)piVar5;
  uVar2 = *(uint *)this;
  *(uint *)(uVar2 + 4) = uVar2;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar4 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar4;
      F_0042c880(piVar4 + 0x2e);
      piVar5 = piVar4 + 0x18;
      F_0042c880(piVar5);
      iVar3 = 9;
      do {
        piVar5 = piVar5 + -2;
        F_005a2670(piVar5);
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      uVar6 = F_00429760(piVar4,0x110,400);
      uVar2 = (uint)uVar6;
      piVar4 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return uVar2;
}

/* ref: FUN_0095c2e0 */
uint F_0095c2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95c2e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  uint * puVar2;
  int * piVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  piVar3 = (int *)F_004296a0(0x6c,0,400);
  *piVar3 = param_1;
  piVar3[1] = uVar1;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_2;
    piVar3[3] = param_2[1];
    F_0042cbc0(piVar3 + 4,param_2 + 2);
    piVar3[0x19] = param_2[0x17];
    piVar3[0x1a] = param_2[0x18];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(param_1 + 4) = (uint)piVar3;
  puVar2 = (uint *)piVar3[1];
  *puVar2 = (uint)piVar3;
  return (uint)puVar2;
}

/* ref: FUN_0095c390 */
uint F_0095c390(unsigned int gen_a0)
{
  GEN_ENTER(0x95c390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1 & 0xfffffff0,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0095c3e0 */
unsigned int F_0095c3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x95c3e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x54) * 0x54,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_0095c440 */
unsigned int F_0095c440(unsigned int gen_a0)
{
  GEN_ENTER(0x95c440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_0095c490 */
uint F_0095c490(unsigned int gen_a0)
{
  GEN_ENTER(0x95c490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00955490(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0095c4b0 */
uint F_0095c4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x95c4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00955530(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0095c4e0 */
uint F_0095c4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x95c4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1 & 0xfffffff0,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0095c530 */
uint F_0095c530(unsigned int gen_a0)
{
  GEN_ENTER(0x95c530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0x2c0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0095c570 */
uint F_0095c570(unsigned int gen_a0)
{
  GEN_ENTER(0x95c570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_009555d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0095c590 */
unsigned int F_0095c590(unsigned int gen_a0)
{
  GEN_ENTER(0x95c590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x10) != 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4)));
    F_0042c880((undefined *)((int)this_00 + 0x54));
    F_0042c880(this_00);
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

/* ref: FUN_0095c5e0 */
uint F_0095c5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95c5e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_00955670(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00953740(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_0095c680 */
unsigned int F_0095c680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95c680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 3) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
  }
  return 0;
}

/* ref: FUN_0095c6b0 */
unsigned int F_0095c6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95c6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 6) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
  }
  return 0;
}

/* ref: FUN_0095c6e0 */
unsigned int F_0095c6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95c6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 4) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
  }
  return 0;
}

/* ref: FUN_0095c770 */
uint F_0095c770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95c770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xbc,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
    F_0042cbc0(puVar1 + 3,param_3 + 1);
    puVar1[0x18] = param_3[0x16];
    F_0042cbc0(puVar1 + 0x19,param_3 + 0x17);
    puVar1[0x2e] = param_3[0x2c];
  }
  return (uint)puVar1;
}

/* ref: FUN_0095c7e0 */
uint F_0095c7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x95c7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  ulonglong uVar4;
  
  piVar1 = *(int * PTR32 *)this;
  piVar3 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  uVar2 = *(uint *)this;
  *(uint *)(uVar2 + 4) = uVar2;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar3 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar3;
      F_0042c880(piVar3 + 4);
      uVar4 = F_00429760(piVar3,0x6c,400);
      uVar2 = (uint)uVar4;
      piVar3 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return uVar2;
}

/* ref: FUN_0095c830 */
uint F_0095c830(unsigned int gen_a0)
{
  GEN_ENTER(0x95c830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  ulonglong uVar4;
  
  piVar1 = *(int * PTR32 *)this;
  piVar3 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  uVar2 = *(uint *)this;
  *(uint *)(uVar2 + 4) = uVar2;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar3 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar3;
      F_0042c880(piVar3 + 2);
      uVar4 = F_00429760(piVar3,100,400);
      uVar2 = (uint)uVar4;
      piVar3 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return uVar2;
}

/* ref: FUN_0095c880 */
uint F_0095c880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95c880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(100,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 2,param_3);
    puVar1[0x17] = *(undefined4 *)(param_3 + 0x54);
    puVar1[0x18] = *(undefined4 *)(param_3 + 0x58);
  }
  return (uint)puVar1;
}

/* ref: FUN_0095c8d0 */
uint F_0095c8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x95c8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  ulonglong uVar4;
  
  piVar1 = *(int * PTR32 *)this;
  piVar3 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  uVar2 = *(uint *)this;
  *(uint *)(uVar2 + 4) = uVar2;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar3 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar3;
      F_0042c880(piVar3 + 4);
      uVar4 = F_00429760(piVar3,0x68,400);
      uVar2 = (uint)uVar4;
      piVar3 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return uVar2;
}

/* ref: FUN_0095c920 */
uint F_0095c920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95c920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x68,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    F_0042cbc0(puVar1 + 4,param_3 + 2);
    puVar1[0x19] = param_3[0x17];
  }
  return (uint)puVar1;
}

/* ref: FUN_0095ca60 */
uint F_0095ca60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x95ca60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    this_01 = (int *)F_00957000(this_00,param_1,param_2,param_3);
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

/* ref: FUN_0095cbf0 */
uint F_0095cbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x95cbf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  uint uVar1;
  uint uVar2;
  
  if ((*(char *)((int)this + 0x34) == '\0') || (*(int *)((int)this + 0x18) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_00957070(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x14))),param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*(int *)((int)this + 0x18) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this,uVar1,param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*(int *)(uVar2 + 4) != 0)) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 4) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0095cc70 */
unsigned int F_0095cc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95cc70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0095cca0 */
uint F_0095cca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95cca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined * this;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar1;
  this = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    uVar1 = F_0042b630(((undefined1 *)(gen_frame + 0x4)));
    if (this != (undefined *)0x0) {
      F_0042cbc0(this,uVar1);
    }
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar1 = (uint)uVar3;
    this = (undefined *)((int)this + 0x54);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_0095cd00 */
uint F_0095cd00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95cd00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00957190(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_0095cd30 */
uint F_0095cd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95cd30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  F_0042c880((undefined *)(param_2 + 100));
  uVar1 = F_0042c880((undefined *)(param_2 + 0xc));
  return (uint)uVar1;
}

/* ref: FUN_0095cd50 */
unsigned int F_0095cd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95cd50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00957220(param_1,param_2,param_3,(int)this + 0xc);
  return 0;
}

/* ref: FUN_0095cd70 */
unsigned int F_0095cd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95cd70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0x15;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0095cdb0 */
unsigned int F_0095cdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95cdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_0094f190(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return 0;
}

/* ref: FUN_0095cde0 */
unsigned int F_0095cde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95cde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_009572d0(param_1,param_2,param_3,(int)this + 0xc);
  return 0;
}

/* ref: FUN_0095ce00 */
unsigned int F_0095ce00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95ce00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0095ce40 */
uint F_0095ce40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95ce40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined * this;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar1;
  this = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    uVar1 = F_0042b630(((undefined1 *)(gen_frame + 0x4)));
    if (this != (undefined *)0x0) {
      F_0042cbc0(this,uVar1);
    }
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar1 = (uint)uVar3;
    this = (undefined *)((int)this + 0x54);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_0095cea0 */
unsigned int F_0095cea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95cea0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0095ced0 */
unsigned int F_0095ced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95ced0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0095cf10 */
unsigned int F_0095cf10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95cf10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0095cf40 */
unsigned int F_0095cf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95cf40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0095cf70 */
unsigned int F_0095cf70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95cf70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0095cfa0 */
unsigned int F_0095cfa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95cfa0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0095cfd0 */
unsigned int F_0095cfd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95cfd0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0095d000 */
unsigned int F_0095d000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95d000u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_0095d030 */
unsigned int F_0095d030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x68) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_0095d060 */
unsigned int F_0095d060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x6c) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_0095d090 */
unsigned int F_0095d090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d090u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0xd;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_0095d0d0 */
unsigned int F_0095d0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_0095d100 */
uint F_0095d100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d100u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_0095d140 */
unsigned int F_0095d140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x54) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_0095d170 */
unsigned int F_0095d170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d170u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0095d1a0 */
unsigned int F_0095d1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95d1a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0095d1d0 */
uint F_0095d1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95d1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_0094f4f0(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_0095d200 */
unsigned int F_0095d200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95d200u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x60) {
    F_0042c880((undefined *)(iVar1 + 8));
  }
  return 0;
}

/* ref: FUN_0095d230 */
unsigned int F_0095d230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95d230u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = (undefined *)(param_1 + 0x18);
    do {
      F_0042c880((undefined *)((int)this + 0x68));
      F_00560340(this);
      iVar1 = (int)this + 0xbc;
      this = (undefined *)((int)this + 0xd4);
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0095d270 */
unsigned int F_0095d270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95d270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00957770(param_1,param_2,param_3,(int)this + 0xc);
  return 0;
}

/* ref: FUN_0095d290 */
unsigned int F_0095d290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95d290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_009577c0(param_1,param_2,param_3,(int)this + 0xc);
  return 0;
}

/* ref: FUN_0095d2b0 */
unsigned int F_0095d2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d2b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0095d2f0 */
unsigned int F_0095d2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d2f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0095d330 */
unsigned int F_0095d330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d330u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0095d370 */
unsigned int F_0095d370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d370u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0095d3b0 */
unsigned int F_0095d3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d3b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0095d3f0 */
unsigned int F_0095d3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95d3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_0094f6d0(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return 0;
}

/* ref: FUN_0095d420 */
unsigned int F_0095d420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d420u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0095d460 */
unsigned int F_0095d460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d460u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0095d4a0 */
unsigned int F_0095d4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d4a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0095d4e0 */
unsigned int F_0095d4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d4e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0095d510 */
unsigned int F_0095d510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d510u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0095d550 */
unsigned int F_0095d550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95d550u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = (undefined *)(param_1 + 0x14);
    do {
      F_0042c880((undefined *)((int)this + 0x54));
      F_0042c880(this);
      iVar1 = (int)this + 0xac;
      this = (undefined *)((int)this + 0xc0);
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0095d590 */
unsigned int F_0095d590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95d590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_0094f850(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return 0;
}

/* ref: FUN_0095d5c0 */
uint F_0095d5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  int * this_00;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_0042c880(param_2 + 0x2e);
    F_0042c880(param_2 + 0x18);
    this_00 = param_2 + 0x18;
    iVar2 = 9;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    F_00429760(param_2,0x110,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
    *param_1 = iVar1;
    return (uint)param_1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_0095d650 */
uint F_0095d650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95d650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint * puVar2;
  int * piVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  piVar3 = (int *)F_004296a0(0x110,0,400);
  piVar3[1] = uVar1;
  *piVar3 = param_1;
  if (piVar3 + 2 != (int *)0x0) {
    F_0091dea0(piVar3 + 2,param_2);
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(param_1 + 4) = (uint)piVar3;
  puVar2 = (uint *)piVar3[1];
  *puVar2 = (uint)piVar3;
  return (uint)puVar2;
}

/* ref: FUN_0095d6d0 */
uint F_0095d6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95d6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  this_00 = (undefined *)F_00406bd0(0xa1c,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008a9260(this_00);
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

/* ref: FUN_0095d740 */
uint F_0095d740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95d740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,400);
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

/* ref: FUN_0095d790 */
uint F_0095d790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95d790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,400);
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

/* ref: FUN_0095d7e0 */
uint F_0095d7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95d7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar1 = (undefined4 *)F_004296a0(0x40,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0xe) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
    puVar1[5] = param_1[1];
    puVar3 = param_1 + 2;
    puVar4 = puVar1 + 6;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_0095d840 */
uint F_0095d840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95d840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x28,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
    puVar1[5] = param_1[1];
    *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_1 + 2);
  }
  return (uint)puVar1;
}

/* ref: FUN_0095d890 */
uint F_0095d890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95d890u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  this_01 = (undefined4 *)F_008a3fa0(this_00);
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

/* ref: FUN_0095d900 */
uint F_0095d900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95d900u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  this_00 = (undefined *)F_00406bd0(0x1b0,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008a3f00(this_00);
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

/* ref: FUN_0095d970 */
uint F_0095d970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95d970u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  this_00 = (undefined *)F_00406bd0(0x1b0,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008a3f50(this_00);
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

/* ref: FUN_0095d9e0 */
uint F_0095d9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95d9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined4 *)F_00406bd0(0x1f0,0,uVar1,uVar2);
  if (this_00 != (undefined4 *)0x0) {
    F_008a4080(this_00);
    *this_00 = (*(undefined * PTR32 (*)[67])REFP(0x10d728c));
    F_005a8d00(this_00,param_2,param_3);
    uVar1 = F_0057fac0(this,this_00,param_1);
    if (uVar1 != 0) {
      return (uint)this_00;
    }
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
  }
  return 0;
}

/* ref: FUN_0095da50 */
uint F_0095da50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95da50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined4 *)F_00406bd0(0x1f0,0,uVar1,uVar2);
  if (this_00 != (undefined4 *)0x0) {
    F_008a4080(this_00);
    *this_00 = (*(undefined * PTR32 (*)[67])REFP(0x10d739c));
    F_005a8d00(this_00,param_2,param_3);
    uVar1 = F_0057fac0(this,this_00,param_1);
    if (uVar1 != 0) {
      return (uint)this_00;
    }
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
  }
  return 0;
}

/* ref: FUN_0095dac0 */
uint F_0095dac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95dac0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  this_01 = (undefined4 *)F_008a41b0(this_00);
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

/* ref: FUN_0095db30 */
uint F_0095db30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95db30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined4 *)F_00406bd0(0x1a4,0,uVar1,uVar2);
  if (this_00 != (undefined4 *)0x0) {
    F_008a4250(this_00);
    *this_00 = (*(undefined * PTR32 (*)[69])REFP(0x10d75bc));
    this_00[0x68] = 0;
    F_005a8d00(this_00,param_2,param_3);
    uVar1 = F_0057fac0(this,this_00,param_1);
    if (uVar1 != 0) {
      return (uint)this_00;
    }
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
  }
  return 0;
}

/* ref: FUN_0095dbb0 */
uint F_0095dbb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95dbb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_008a4250(this_00);
    *this_00 = (*(undefined * PTR32 (*)[69])REFP(0x10d76d4));
    this_00[0x68] = 0;
    this_00[0x69] = 0;
    F_005a8d00(this_00,param_2,param_3);
    uVar1 = F_0057fac0(this,this_00,param_1);
    if (uVar1 != 0) {
      return (uint)this_00;
    }
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
  }
  return 0;
}

/* ref: FUN_0095dc30 */
uint F_0095dc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95dc30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_008a4250(this_00);
    *this_00 = (*(undefined * PTR32 (*)[69])REFP(0x10d77ec));
    this_00[0x68] = 0;
    this_00[0x69] = 0;
    F_005a8d00(this_00,param_2,param_3);
    uVar1 = F_0057fac0(this,this_00,param_1);
    if (uVar1 != 0) {
      return (uint)this_00;
    }
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
  }
  return 0;
}

/* ref: FUN_0095dcb0 */
uint F_0095dcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x95dcb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  uint uVar1;
  byte * pbVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  uVar1 = param_1;
  if (param_2 != 0) {
    pbVar2 = (byte *)(param_1 + 0x20);
    iVar3 = param_2;
    do {
      F_0056c270(((byte *)(gen_frame + 0x1c)));
      F_0042b630(((undefined1 *)(gen_frame + 0x84)));
      if (pbVar2 != &REFG(undefined, 0x20)) {
        *(undefined4 *)(pbVar2 + -0x20) = (*(undefined4 *)(gen_frame + 0x4));
        *(undefined4 *)(pbVar2 + -0x1c) = (*(undefined4 *)(gen_frame + 0x8));
        *(undefined4 *)(pbVar2 + -0x18) = (*(undefined4 *)(gen_frame + 0xc));
        *(undefined4 *)(pbVar2 + -0x14) = (*(undefined4 *)(gen_frame + 0x10));
        *(undefined4 *)(pbVar2 + -0x10) = (*(undefined4 *)(gen_frame + 0x14));
        *(undefined4 *)(pbVar2 + -0xc) = (*(undefined4 *)(gen_frame + 0x18));
        *(undefined4 *)(pbVar2 + -8) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x1c)) + 0));
        *(undefined4 *)(pbVar2 + -4) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x1c)) + 4));
        *(undefined4 *)(pbVar2 + 4) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x1c)) + 12));
        *(undefined4 *)pbVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x1c)) + 8));
        F_0042cbc0(pbVar2 + 8,((undefined1 *)(gen_frame + 0x2c)));
        *(undefined4 *)(pbVar2 + 0x5c) = (*(undefined4 *)(gen_frame + 0x80));
        F_0042cbc0(pbVar2 + 0x60,((undefined1 *)(gen_frame + 0x84)));
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x84)));
      uVar1 = F_00560340(((byte *)(gen_frame + 0x1c)));
      pbVar2 = pbVar2 + 0xd4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return uVar1;
}

/* ref: FUN_0095ddb0 */
unsigned int F_0095ddb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95ddb0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0095dde0 */
uint F_0095dde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95dde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00958180(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_0095de10 */
uint F_0095de10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95de10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_009581e0(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_0095de40 */
unsigned int F_0095de40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95de40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    iVar3 = param_1 - (int)param_3;
    puVar2 = param_3;
    do {
      uVar1 = *(undefined4 *)(iVar3 + 4 + (int)puVar2);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
        puVar2[1] = uVar1;
      }
      puVar2 = puVar2 + 2;
    } while (iVar3 + (int)puVar2 != param_2);
  }
  return 0;
}

/* ref: FUN_0095de80 */
uint F_0095de80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95de80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00958290(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_0095deb0 */
uint F_0095deb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95deb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_009582d0(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_0095dee0 */
uint F_0095dee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95dee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00958330(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_0095df10 */
uint F_0095df10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95df10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,iVar1 + (int)this);
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_0095df50 */
uint F_0095df50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95df50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_009583c0(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_0095df80 */
unsigned int F_0095df80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95df80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0095dfb0 */
uint F_0095dfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95dfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_009584a0(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_0095dfe0 */
unsigned int F_0095dfe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95dfe0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0095e020 */
uint F_0095e020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95e020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar10 = param_2 + (((int)param_3 - (int)param_2) / 0x28) * 5;
  F_00958550(param_2,puVar10,param_3 + -5,param_4);
  puVar1 = puVar10;
  while (puVar9 = puVar1, param_2 < puVar9) {
    puVar1 = puVar9 + -5;
    uVar7 = (*param_4)(puVar1,puVar9);
    if (((char)uVar7 != '\0') || (uVar7 = (*param_4)(puVar9,puVar1), (char)uVar7 != '\0')) break;
  }
  do {
    puVar10 = puVar10 + 5;
    puVar1 = puVar10;
    local_c = puVar9;
    puVar12 = puVar9;
    if (param_3 <= puVar10) break;
    uVar7 = (*param_4)(puVar10,puVar9);
    if (((char)uVar7 != '\0') || (uVar7 = (*param_4)(puVar9,puVar10), (char)uVar7 != '\0')) break;
  } while( true );
joined_r0x0095e0cb: ;
  puVar13 = puVar9;
  puVar11 = local_c;
  if (param_3 <= puVar1) {
joined_r0x0095e14b: ;
    while (puVar8 = puVar9, param_2 < puVar9) {
      local_8 = puVar13 + -5;
      uVar7 = (*param_4)(local_8,puVar12);
      if ((char)uVar7 == '\0') {
        uVar7 = (*param_4)(puVar12,local_8);
        puVar8 = puVar11;
        if ((char)uVar7 != '\0') break;
        uVar2 = puVar12[-4];
        uVar3 = puVar12[-3];
        uVar4 = puVar12[-5];
        uVar5 = puVar12[-1];
        uVar6 = puVar12[-2];
        puVar12[-5] = *local_8;
        puVar12[-4] = puVar13[-4];
        puVar12[-3] = puVar13[-3];
        puVar12[-2] = puVar13[-2];
        puVar12[-1] = puVar13[-1];
        *local_8 = uVar4;
        puVar13[-4] = uVar2;
        puVar13[-3] = uVar3;
        puVar13[-2] = uVar6;
        puVar13[-1] = uVar5;
        puVar12 = puVar12 + -5;
      }
      puVar9 = puVar11 + -5;
      puVar13 = local_8;
      puVar11 = puVar9;
    }
    if (puVar8 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar12;
        param_1[1] = puVar10;
        return (uint)param_1;
      }
      if (puVar10 != puVar1) {
        uVar2 = puVar12[1];
        uVar3 = *puVar12;
        uVar4 = puVar12[2];
        uVar5 = puVar12[3];
        uVar6 = puVar12[4];
        *puVar12 = *puVar10;
        puVar12[1] = puVar10[1];
        puVar12[2] = puVar10[2];
        puVar12[3] = puVar10[3];
        puVar12[4] = puVar10[4];
        *puVar10 = uVar3;
        puVar10[1] = uVar2;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        puVar10[4] = uVar6;
      }
      uVar2 = *puVar12;
      uVar3 = puVar12[1];
      uVar4 = puVar12[2];
      uVar5 = puVar12[3];
      uVar6 = puVar12[4];
      *puVar12 = *puVar1;
      puVar12[1] = puVar1[1];
      puVar12[2] = puVar1[2];
      puVar12[3] = puVar1[3];
      puVar12[4] = puVar1[4];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar1[4] = uVar6;
      puVar9 = puVar8;
      puVar10 = puVar10 + 5;
      puVar1 = puVar1 + 5;
      local_c = puVar11;
      puVar12 = puVar12 + 5;
    }
    else {
      puVar9 = puVar8 + -5;
      local_c = puVar9;
      if (puVar1 == param_3) {
        puVar13 = puVar12 + -5;
        if (puVar9 != puVar13) {
          uVar2 = puVar8[-4];
          uVar3 = *puVar9;
          uVar4 = puVar8[-3];
          uVar5 = puVar8[-2];
          uVar6 = puVar8[-1];
          *puVar9 = *puVar13;
          puVar8[-4] = puVar12[-4];
          puVar8[-3] = puVar12[-3];
          puVar8[-2] = puVar12[-2];
          puVar8[-1] = puVar12[-1];
          *puVar13 = uVar3;
          puVar12[-4] = uVar2;
          puVar12[-3] = uVar4;
          puVar12[-2] = uVar5;
          puVar12[-1] = uVar6;
        }
        uVar2 = puVar12[-4];
        uVar3 = *puVar13;
        uVar4 = puVar12[-3];
        uVar5 = puVar12[-2];
        uVar6 = puVar12[-1];
        puVar11 = puVar10 + -5;
        *puVar13 = *puVar11;
        puVar12[-4] = puVar10[-4];
        puVar12[-3] = puVar10[-3];
        puVar12[-2] = puVar10[-2];
        puVar12[-1] = puVar10[-1];
        *puVar11 = uVar3;
        puVar10[-4] = uVar2;
        puVar10[-3] = uVar4;
        puVar10[-2] = uVar5;
        puVar10[-1] = uVar6;
        puVar10 = puVar11;
        puVar12 = puVar13;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        uVar6 = puVar1[4];
        *puVar1 = *puVar9;
        puVar1[1] = puVar8[-4];
        puVar1[2] = puVar8[-3];
        puVar1[3] = puVar8[-2];
        puVar1[4] = puVar8[-1];
        *puVar9 = uVar3;
        puVar8[-4] = uVar2;
        puVar8[-3] = uVar4;
        puVar8[-2] = uVar5;
        puVar8[-1] = uVar6;
        puVar1 = puVar1 + 5;
      }
    }
    goto joined_r0x0095e0cb;
  }
  uVar7 = (*param_4)(puVar12,puVar1);
  if ((char)uVar7 == '\0') {
    uVar7 = (*param_4)(puVar1,puVar12);
    puVar9 = local_c;
    puVar13 = local_c;
    if ((char)uVar7 != '\0') goto joined_r0x0095e14b;
    uVar2 = puVar10[1];
    uVar3 = *puVar10;
    uVar4 = puVar10[2];
    uVar5 = puVar10[3];
    uVar6 = puVar10[4];
    *puVar10 = *puVar1;
    puVar10[1] = puVar1[1];
    puVar10[2] = puVar1[2];
    puVar10[3] = puVar1[3];
    puVar10[4] = puVar1[4];
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    puVar10 = puVar10 + 5;
    puVar1[4] = uVar6;
  }
  puVar9 = local_c;
  puVar1 = puVar1 + 5;
  goto joined_r0x0095e0cb;
}

/* ref: FUN_0095e410 */
unsigned int F_0095e410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95e410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00958600(param_1,param_2,param_3,0);
  return 0;
}

/* ref: FUN_0095e430 */
uint F_0095e430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95e430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar10 = param_2 + (((int)param_3 - (int)param_2) / 0x28) * 5;
  F_00958720(param_2,puVar10,param_3 + -5,param_4);
  puVar1 = puVar10;
  while (puVar9 = puVar1, param_2 < puVar9) {
    puVar1 = puVar9 + -5;
    uVar7 = (*param_4)(puVar1,puVar9);
    if (((char)uVar7 != '\0') || (uVar7 = (*param_4)(puVar9,puVar1), (char)uVar7 != '\0')) break;
  }
  do {
    puVar10 = puVar10 + 5;
    puVar1 = puVar10;
    local_c = puVar9;
    puVar12 = puVar9;
    if (param_3 <= puVar10) break;
    uVar7 = (*param_4)(puVar10,puVar9);
    if (((char)uVar7 != '\0') || (uVar7 = (*param_4)(puVar9,puVar10), (char)uVar7 != '\0')) break;
  } while( true );
joined_r0x0095e4db: ;
  puVar13 = puVar9;
  puVar11 = local_c;
  if (param_3 <= puVar1) {
joined_r0x0095e55b: ;
    while (puVar8 = puVar9, param_2 < puVar9) {
      local_8 = puVar13 + -5;
      uVar7 = (*param_4)(local_8,puVar12);
      if ((char)uVar7 == '\0') {
        uVar7 = (*param_4)(puVar12,local_8);
        puVar8 = puVar11;
        if ((char)uVar7 != '\0') break;
        uVar2 = puVar12[-4];
        uVar3 = puVar12[-3];
        uVar4 = puVar12[-5];
        uVar5 = puVar12[-1];
        uVar6 = puVar12[-2];
        puVar12[-5] = *local_8;
        puVar12[-4] = puVar13[-4];
        puVar12[-3] = puVar13[-3];
        puVar12[-2] = puVar13[-2];
        puVar12[-1] = puVar13[-1];
        *local_8 = uVar4;
        puVar13[-4] = uVar2;
        puVar13[-3] = uVar3;
        puVar13[-2] = uVar6;
        puVar13[-1] = uVar5;
        puVar12 = puVar12 + -5;
      }
      puVar9 = puVar11 + -5;
      puVar13 = local_8;
      puVar11 = puVar9;
    }
    if (puVar8 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar12;
        param_1[1] = puVar10;
        return (uint)param_1;
      }
      if (puVar10 != puVar1) {
        uVar2 = puVar12[1];
        uVar3 = *puVar12;
        uVar4 = puVar12[2];
        uVar5 = puVar12[3];
        uVar6 = puVar12[4];
        *puVar12 = *puVar10;
        puVar12[1] = puVar10[1];
        puVar12[2] = puVar10[2];
        puVar12[3] = puVar10[3];
        puVar12[4] = puVar10[4];
        *puVar10 = uVar3;
        puVar10[1] = uVar2;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        puVar10[4] = uVar6;
      }
      uVar2 = *puVar12;
      uVar3 = puVar12[1];
      uVar4 = puVar12[2];
      uVar5 = puVar12[3];
      uVar6 = puVar12[4];
      *puVar12 = *puVar1;
      puVar12[1] = puVar1[1];
      puVar12[2] = puVar1[2];
      puVar12[3] = puVar1[3];
      puVar12[4] = puVar1[4];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar1[4] = uVar6;
      puVar9 = puVar8;
      puVar10 = puVar10 + 5;
      puVar1 = puVar1 + 5;
      local_c = puVar11;
      puVar12 = puVar12 + 5;
    }
    else {
      puVar9 = puVar8 + -5;
      local_c = puVar9;
      if (puVar1 == param_3) {
        puVar13 = puVar12 + -5;
        if (puVar9 != puVar13) {
          uVar2 = puVar8[-4];
          uVar3 = *puVar9;
          uVar4 = puVar8[-3];
          uVar5 = puVar8[-2];
          uVar6 = puVar8[-1];
          *puVar9 = *puVar13;
          puVar8[-4] = puVar12[-4];
          puVar8[-3] = puVar12[-3];
          puVar8[-2] = puVar12[-2];
          puVar8[-1] = puVar12[-1];
          *puVar13 = uVar3;
          puVar12[-4] = uVar2;
          puVar12[-3] = uVar4;
          puVar12[-2] = uVar5;
          puVar12[-1] = uVar6;
        }
        uVar2 = puVar12[-4];
        uVar3 = *puVar13;
        uVar4 = puVar12[-3];
        uVar5 = puVar12[-2];
        uVar6 = puVar12[-1];
        puVar11 = puVar10 + -5;
        *puVar13 = *puVar11;
        puVar12[-4] = puVar10[-4];
        puVar12[-3] = puVar10[-3];
        puVar12[-2] = puVar10[-2];
        puVar12[-1] = puVar10[-1];
        *puVar11 = uVar3;
        puVar10[-4] = uVar2;
        puVar10[-3] = uVar4;
        puVar10[-2] = uVar5;
        puVar10[-1] = uVar6;
        puVar10 = puVar11;
        puVar12 = puVar13;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        uVar6 = puVar1[4];
        *puVar1 = *puVar9;
        puVar1[1] = puVar8[-4];
        puVar1[2] = puVar8[-3];
        puVar1[3] = puVar8[-2];
        puVar1[4] = puVar8[-1];
        *puVar9 = uVar3;
        puVar8[-4] = uVar2;
        puVar8[-3] = uVar4;
        puVar8[-2] = uVar5;
        puVar8[-1] = uVar6;
        puVar1 = puVar1 + 5;
      }
    }
    goto joined_r0x0095e4db;
  }
  uVar7 = (*param_4)(puVar12,puVar1);
  if ((char)uVar7 == '\0') {
    uVar7 = (*param_4)(puVar1,puVar12);
    puVar9 = local_c;
    puVar13 = local_c;
    if ((char)uVar7 != '\0') goto joined_r0x0095e55b;
    uVar2 = puVar10[1];
    uVar3 = *puVar10;
    uVar4 = puVar10[2];
    uVar5 = puVar10[3];
    uVar6 = puVar10[4];
    *puVar10 = *puVar1;
    puVar10[1] = puVar1[1];
    puVar10[2] = puVar1[2];
    puVar10[3] = puVar1[3];
    puVar10[4] = puVar1[4];
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    puVar10 = puVar10 + 5;
    puVar1[4] = uVar6;
  }
  puVar9 = local_c;
  puVar1 = puVar1 + 5;
  goto joined_r0x0095e4db;
}

/* ref: FUN_0095e820 */
unsigned int F_0095e820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95e820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_009587d0(param_1,param_2,param_3,0);
  return 0;
}

/* ref: FUN_0095e840 */
uint F_0095e840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95e840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar9 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 3) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1) * 2;
  F_009588f0(param_2,puVar9,param_3 + -2,param_4);
  puVar1 = puVar9;
  while (puVar6 = puVar1, param_2 < puVar6) {
    puVar1 = puVar6 + -2;
    uVar5 = (*param_4)(puVar1,puVar6);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(puVar6,puVar1), (char)uVar5 != '\0')) break;
  }
  do {
    puVar9 = puVar9 + 2;
    puVar1 = puVar9;
    puVar7 = puVar9;
    local_c = puVar6;
    puVar10 = puVar6;
    if (param_3 <= puVar9) break;
    uVar5 = (*param_4)(puVar9,puVar6);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(puVar6,puVar9), (char)uVar5 != '\0')) break;
  } while( true );
joined_r0x0095e8d5: ;
  puVar11 = puVar6;
  puVar4 = local_c;
  local_8 = puVar7;
  if (param_3 <= puVar1) {
joined_r0x0095e91f: ;
    while (puVar7 = puVar6, param_2 < puVar6) {
      puVar8 = puVar11 + -2;
      uVar5 = (*param_4)(puVar8,puVar10);
      puVar7 = puVar10;
      puVar9 = local_8;
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_4)(puVar10,puVar8);
        puVar7 = puVar4;
        if ((char)uVar5 != '\0') break;
        uVar2 = puVar10[-2];
        uVar3 = puVar10[-1];
        puVar7 = puVar10 + -2;
        *puVar7 = *puVar8;
        puVar10[-1] = puVar11[-1];
        *puVar8 = uVar2;
        puVar11[-1] = uVar3;
      }
      puVar6 = puVar4 + -2;
      puVar11 = puVar8;
      puVar10 = puVar7;
      puVar4 = puVar6;
    }
    if (puVar7 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar10;
        param_1[1] = puVar9;
        return (uint)param_1;
      }
      if (puVar9 != puVar1) {
        uVar2 = puVar10[1];
        uVar3 = *puVar10;
        *puVar10 = *puVar9;
        puVar10[1] = puVar9[1];
        *puVar9 = uVar3;
        puVar9[1] = uVar2;
      }
      uVar2 = *puVar10;
      uVar3 = puVar10[1];
      *puVar10 = *puVar1;
      puVar10[1] = puVar1[1];
      puVar9 = puVar9 + 2;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar6 = puVar7;
      puVar1 = puVar1 + 2;
      puVar7 = puVar9;
      local_c = puVar4;
      puVar10 = puVar10 + 2;
    }
    else {
      puVar6 = puVar7 + -2;
      local_c = puVar6;
      if (puVar1 == param_3) {
        puVar11 = puVar10 + -2;
        if (puVar6 != puVar11) {
          uVar2 = puVar7[-1];
          uVar3 = *puVar6;
          *puVar6 = *puVar11;
          puVar7[-1] = puVar10[-1];
          *puVar11 = uVar3;
          puVar10[-1] = uVar2;
        }
        uVar2 = puVar10[-1];
        uVar3 = *puVar11;
        puVar7 = puVar9 + -2;
        *puVar11 = *puVar7;
        puVar10[-1] = puVar9[-1];
        *puVar7 = uVar3;
        puVar9[-1] = uVar2;
        puVar9 = puVar7;
        puVar10 = puVar11;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        *puVar1 = *puVar6;
        puVar1[1] = puVar7[-1];
        *puVar6 = uVar3;
        puVar7[-1] = uVar2;
        puVar1 = puVar1 + 2;
        puVar7 = local_8;
      }
    }
    goto joined_r0x0095e8d5;
  }
  uVar5 = (*param_4)(puVar10,puVar1);
  if ((char)uVar5 == '\0') {
    uVar5 = (*param_4)(puVar1,puVar10);
    puVar6 = local_c;
    puVar11 = local_c;
    local_8 = puVar9;
    if ((char)uVar5 != '\0') goto joined_r0x0095e91f;
    uVar2 = puVar9[1];
    uVar3 = *puVar9;
    *puVar9 = *puVar1;
    puVar9[1] = puVar1[1];
    puVar9 = puVar9 + 2;
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
  }
  puVar6 = local_c;
  puVar1 = puVar1 + 2;
  puVar7 = puVar9;
  goto joined_r0x0095e8d5;
}

/* ref: FUN_0095ea60 */
uint F_0095ea60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95ea60u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_c;
  uint local_8;
  
  uVar5 = ((int)(param_3 - param_2) / 0xd8) * 0x6c + param_2;
  F_00958990(param_2,uVar5,param_3 - 0x6c,param_4);
  uVar1 = uVar5;
  while (local_8 = uVar1, param_2 < local_8) {
    uVar1 = local_8 - 0x6c;
    uVar2 = (*param_4)(uVar1,local_8);
    if (((char)uVar2 != '\0') || (uVar2 = (*param_4)(local_8,uVar1), (char)uVar2 != '\0')) break;
  }
  do {
    uVar5 = uVar5 + 0x6c;
    uVar1 = uVar5;
    uVar2 = uVar5;
    uVar6 = local_8;
    if (param_3 <= uVar5) break;
    uVar3 = (*param_4)(uVar5,local_8);
    if (((char)uVar3 != '\0') || (uVar3 = (*param_4)(local_8,uVar5), (char)uVar3 != '\0')) break;
  } while( true );
joined_r0x0095eb13: ;
  uVar3 = local_8;
  local_c = uVar2;
  if (param_3 <= uVar1) {
joined_r0x0095eb4d: ;
    for (; param_2 < local_8; local_8 = local_8 - 0x6c) {
      uVar3 = uVar3 - 0x6c;
      uVar2 = (*param_4)(uVar3,uVar6);
      uVar5 = local_c;
      if ((char)uVar2 == '\0') {
        uVar2 = (*param_4)(uVar6,uVar3);
        if ((char)uVar2 != '\0') break;
        uVar6 = uVar6 - 0x6c;
        F_009415a0(uVar6,uVar3);
      }
    }
    if (local_8 == param_2) {
      if (uVar1 == param_3) {
        *param_1 = uVar6;
        param_1[1] = uVar5;
        return (uint)param_1;
      }
      if (uVar5 != uVar1) {
        F_009415a0(uVar6,uVar5);
      }
      uVar5 = uVar5 + 0x6c;
      F_009415a0(uVar6,uVar1);
      uVar1 = uVar1 + 0x6c;
      uVar2 = uVar5;
      uVar6 = uVar6 + 0x6c;
    }
    else {
      local_8 = local_8 - 0x6c;
      if (uVar1 == param_3) {
        uVar6 = uVar6 - 0x6c;
        if (local_8 != uVar6) {
          F_009415a0(local_8,uVar6);
        }
        uVar5 = uVar5 - 0x6c;
        F_009415a0(uVar6,uVar5);
        uVar2 = uVar5;
      }
      else {
        F_009415a0(uVar1,local_8);
        uVar1 = uVar1 + 0x6c;
        uVar2 = local_c;
      }
    }
    goto joined_r0x0095eb13;
  }
  uVar4 = (*param_4)(uVar6,uVar1);
  uVar2 = uVar5;
  if ((char)uVar4 == '\0') {
    uVar2 = (*param_4)(uVar1,uVar6);
    local_c = uVar5;
    if ((char)uVar2 != '\0') goto joined_r0x0095eb4d;
    uVar2 = uVar5 + 0x6c;
    F_009415a0(uVar5,uVar1);
  }
  uVar5 = uVar2;
  uVar1 = uVar1 + 0x6c;
  goto joined_r0x0095eb13;
}

/* ref: FUN_0095ec20 */
uint F_0095ec20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95ec20u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_c;
  uint local_8;
  
  uVar5 = ((int)(param_3 - param_2) / 0xd0) * 0x68 + param_2;
  F_00958b90(param_2,uVar5,param_3 - 0x68,param_4);
  uVar1 = uVar5;
  while (local_8 = uVar1, param_2 < local_8) {
    uVar1 = local_8 - 0x68;
    uVar2 = (*param_4)(uVar1,local_8);
    if (((char)uVar2 != '\0') || (uVar2 = (*param_4)(local_8,uVar1), (char)uVar2 != '\0')) break;
  }
  do {
    uVar5 = uVar5 + 0x68;
    uVar1 = uVar5;
    uVar2 = uVar5;
    uVar6 = local_8;
    if (param_3 <= uVar5) break;
    uVar3 = (*param_4)(uVar5,local_8);
    if (((char)uVar3 != '\0') || (uVar3 = (*param_4)(local_8,uVar5), (char)uVar3 != '\0')) break;
  } while( true );
joined_r0x0095ecd3: ;
  uVar3 = local_8;
  local_c = uVar2;
  if (param_3 <= uVar1) {
joined_r0x0095ed0d: ;
    for (; param_2 < local_8; local_8 = local_8 - 0x68) {
      uVar3 = uVar3 - 0x68;
      uVar2 = (*param_4)(uVar3,uVar6);
      uVar5 = local_c;
      if ((char)uVar2 == '\0') {
        uVar2 = (*param_4)(uVar6,uVar3);
        if ((char)uVar2 != '\0') break;
        uVar6 = uVar6 - 0x68;
        F_00941760(uVar6,uVar3);
      }
    }
    if (local_8 == param_2) {
      if (uVar1 == param_3) {
        *param_1 = uVar6;
        param_1[1] = uVar5;
        return (uint)param_1;
      }
      if (uVar5 != uVar1) {
        F_00941760(uVar6,uVar5);
      }
      uVar5 = uVar5 + 0x68;
      F_00941760(uVar6,uVar1);
      uVar1 = uVar1 + 0x68;
      uVar2 = uVar5;
      uVar6 = uVar6 + 0x68;
    }
    else {
      local_8 = local_8 - 0x68;
      if (uVar1 == param_3) {
        uVar6 = uVar6 - 0x68;
        if (local_8 != uVar6) {
          F_00941760(local_8,uVar6);
        }
        uVar5 = uVar5 - 0x68;
        F_00941760(uVar6,uVar5);
        uVar2 = uVar5;
      }
      else {
        F_00941760(uVar1,local_8);
        uVar1 = uVar1 + 0x68;
        uVar2 = local_c;
      }
    }
    goto joined_r0x0095ecd3;
  }
  uVar4 = (*param_4)(uVar6,uVar1);
  uVar2 = uVar5;
  if ((char)uVar4 == '\0') {
    uVar2 = (*param_4)(uVar1,uVar6);
    local_c = uVar5;
    if ((char)uVar2 != '\0') goto joined_r0x0095ed0d;
    uVar2 = uVar5 + 0x68;
    F_00941760(uVar5,uVar1);
  }
  uVar5 = uVar2;
  uVar1 = uVar1 + 0x68;
  goto joined_r0x0095ecd3;
}

/* ref: FUN_0095ede0 */
uint F_0095ede0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95ede0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * local_8;
  
  puVar6 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 2) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1);
  F_00958d90(param_2,puVar6,param_3 + -1,param_4);
  puVar5 = puVar6;
  while (((param_2 < puVar5 && (uVar3 = (*param_4)(puVar5[-1],*puVar5), (char)uVar3 == '\0')) &&
         (uVar3 = (*param_4)(*puVar5,puVar5[-1]), (char)uVar3 == '\0'))) {
    puVar5 = puVar5 + -1;
  }
  do {
    puVar6 = puVar6 + 1;
    puVar2 = puVar6;
    puVar4 = puVar5;
    if ((param_3 <= puVar6) || (uVar3 = (*param_4)(*puVar6,*puVar5), (char)uVar3 != '\0')) break;
    uVar3 = (*param_4)(*puVar5,*puVar6);
  } while ((char)uVar3 == '\0');
joined_r0x0095ee83: ;
  do {
    if (puVar6 < param_3) {
      uVar3 = (*param_4)(*puVar5,*puVar6);
      local_8 = puVar2;
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar6,*puVar5);
        if ((char)uVar3 != '\0') goto joined_r0x0095eec3;
        local_8 = puVar2 + 1;
        uVar1 = *puVar2;
        *puVar2 = *puVar6;
        *puVar6 = uVar1;
      }
      puVar6 = puVar6 + 1;
      puVar2 = local_8;
      goto joined_r0x0095ee83;
    }
joined_r0x0095eec3: ;
    for (; param_2 < puVar4; puVar4 = puVar4 + -1) {
      uVar3 = (*param_4)(puVar4[-1],*puVar5);
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar5,puVar4[-1]);
        if ((char)uVar3 != '\0') break;
        uVar1 = puVar5[-1];
        puVar5 = puVar5 + -1;
        *puVar5 = puVar4[-1];
        puVar4[-1] = uVar1;
      }
    }
    if (puVar4 == param_2) {
      if (puVar6 == param_3) {
        *param_1 = puVar5;
        param_1[1] = puVar2;
        return (uint)param_1;
      }
      if (puVar2 != puVar6) {
        uVar1 = *puVar5;
        *puVar5 = *puVar2;
        *puVar2 = uVar1;
      }
      uVar1 = *puVar5;
      *puVar5 = *puVar6;
      puVar5 = puVar5 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
      puVar2 = puVar2 + 1;
    }
    else {
      puVar4 = puVar4 + -1;
      if (puVar6 == param_3) {
        puVar5 = puVar5 + -1;
        if (puVar4 != puVar5) {
          uVar1 = *puVar4;
          *puVar4 = *puVar5;
          *puVar5 = uVar1;
        }
        uVar1 = *puVar5;
        *puVar5 = puVar2[-1];
        puVar2[-1] = uVar1;
        puVar2 = puVar2 + -1;
      }
      else {
        uVar1 = *puVar6;
        *puVar6 = *puVar4;
        *puVar4 = uVar1;
        puVar6 = puVar6 + 1;
      }
    }
  } while( true );
}

/* ref: FUN_0095ef90 */
uint F_0095ef90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x95ef90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,400);
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

/* ref: FUN_0095efe0 */
uint F_0095efe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95efe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar9 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 3) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1) * 2;
  F_00958e50(param_2,puVar9,param_3 + -2,param_4);
  puVar1 = puVar9;
  while (puVar6 = puVar1, param_2 < puVar6) {
    puVar1 = puVar6 + -2;
    uVar5 = (*param_4)(puVar1,puVar6);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(puVar6,puVar1), (char)uVar5 != '\0')) break;
  }
  do {
    puVar9 = puVar9 + 2;
    puVar1 = puVar9;
    puVar7 = puVar9;
    local_c = puVar6;
    puVar10 = puVar6;
    if (param_3 <= puVar9) break;
    uVar5 = (*param_4)(puVar9,puVar6);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(puVar6,puVar9), (char)uVar5 != '\0')) break;
  } while( true );
joined_r0x0095f075: ;
  puVar11 = puVar6;
  puVar4 = local_c;
  local_8 = puVar7;
  if (param_3 <= puVar1) {
joined_r0x0095f0bf: ;
    while (puVar7 = puVar6, param_2 < puVar6) {
      puVar8 = puVar11 + -2;
      uVar5 = (*param_4)(puVar8,puVar10);
      puVar7 = puVar10;
      puVar9 = local_8;
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_4)(puVar10,puVar8);
        puVar7 = puVar4;
        if ((char)uVar5 != '\0') break;
        uVar2 = puVar10[-2];
        uVar3 = puVar10[-1];
        puVar7 = puVar10 + -2;
        *puVar7 = *puVar8;
        puVar10[-1] = puVar11[-1];
        *puVar8 = uVar2;
        puVar11[-1] = uVar3;
      }
      puVar6 = puVar4 + -2;
      puVar11 = puVar8;
      puVar10 = puVar7;
      puVar4 = puVar6;
    }
    if (puVar7 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar10;
        param_1[1] = puVar9;
        return (uint)param_1;
      }
      if (puVar9 != puVar1) {
        uVar2 = puVar10[1];
        uVar3 = *puVar10;
        *puVar10 = *puVar9;
        puVar10[1] = puVar9[1];
        *puVar9 = uVar3;
        puVar9[1] = uVar2;
      }
      uVar2 = *puVar10;
      uVar3 = puVar10[1];
      *puVar10 = *puVar1;
      puVar10[1] = puVar1[1];
      puVar9 = puVar9 + 2;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar6 = puVar7;
      puVar1 = puVar1 + 2;
      puVar7 = puVar9;
      local_c = puVar4;
      puVar10 = puVar10 + 2;
    }
    else {
      puVar6 = puVar7 + -2;
      local_c = puVar6;
      if (puVar1 == param_3) {
        puVar11 = puVar10 + -2;
        if (puVar6 != puVar11) {
          uVar2 = puVar7[-1];
          uVar3 = *puVar6;
          *puVar6 = *puVar11;
          puVar7[-1] = puVar10[-1];
          *puVar11 = uVar3;
          puVar10[-1] = uVar2;
        }
        uVar2 = puVar10[-1];
        uVar3 = *puVar11;
        puVar7 = puVar9 + -2;
        *puVar11 = *puVar7;
        puVar10[-1] = puVar9[-1];
        *puVar7 = uVar3;
        puVar9[-1] = uVar2;
        puVar9 = puVar7;
        puVar10 = puVar11;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        *puVar1 = *puVar6;
        puVar1[1] = puVar7[-1];
        *puVar6 = uVar3;
        puVar7[-1] = uVar2;
        puVar1 = puVar1 + 2;
        puVar7 = local_8;
      }
    }
    goto joined_r0x0095f075;
  }
  uVar5 = (*param_4)(puVar10,puVar1);
  if ((char)uVar5 == '\0') {
    uVar5 = (*param_4)(puVar1,puVar10);
    puVar6 = local_c;
    puVar11 = local_c;
    local_8 = puVar9;
    if ((char)uVar5 != '\0') goto joined_r0x0095f0bf;
    uVar2 = puVar9[1];
    uVar3 = *puVar9;
    *puVar9 = *puVar1;
    puVar9[1] = puVar1[1];
    puVar9 = puVar9 + 2;
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
  }
  puVar6 = local_c;
  puVar1 = puVar1 + 2;
  puVar7 = puVar9;
  goto joined_r0x0095f075;
}

/* ref: FUN_0095f200 */
unsigned int F_0095f200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95f200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00958ef0(param_1,param_2,param_3,0);
  return 0;
}

/* ref: FUN_0095f220 */
uint F_0095f220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95f220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar10 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  F_00958fc0(param_2,puVar10,param_3 + -3,param_4);
  puVar1 = puVar10;
  while (puVar7 = puVar1, param_2 < puVar7) {
    puVar1 = puVar7 + -3;
    uVar6 = (*param_4)(puVar1,puVar7);
    if (((char)uVar6 != '\0') || (uVar6 = (*param_4)(puVar7,puVar1), (char)uVar6 != '\0')) break;
  }
  do {
    puVar10 = puVar10 + 3;
    puVar1 = puVar10;
    puVar8 = puVar10;
    local_c = puVar7;
    puVar11 = puVar7;
    if (param_3 <= puVar10) break;
    uVar6 = (*param_4)(puVar10,puVar7);
    if (((char)uVar6 != '\0') || (uVar6 = (*param_4)(puVar7,puVar10), (char)uVar6 != '\0')) break;
  } while( true );
joined_r0x0095f2d3: ;
  puVar12 = puVar7;
  puVar5 = local_c;
  local_8 = puVar8;
  if (param_3 <= puVar1) {
joined_r0x0095f32f: ;
    while (puVar8 = puVar7, param_2 < puVar7) {
      puVar9 = puVar12 + -3;
      uVar6 = (*param_4)(puVar9,puVar11);
      puVar8 = puVar11;
      puVar10 = local_8;
      if ((char)uVar6 == '\0') {
        uVar6 = (*param_4)(puVar11,puVar9);
        puVar8 = puVar5;
        if ((char)uVar6 != '\0') break;
        uVar2 = puVar11[-1];
        uVar3 = puVar11[-3];
        uVar4 = puVar11[-2];
        puVar8 = puVar11 + -3;
        *puVar8 = *puVar9;
        puVar11[-2] = puVar12[-2];
        puVar11[-1] = puVar12[-1];
        *puVar9 = uVar3;
        puVar12[-2] = uVar4;
        puVar12[-1] = uVar2;
      }
      puVar7 = puVar5 + -3;
      puVar12 = puVar9;
      puVar11 = puVar8;
      puVar5 = puVar7;
    }
    if (puVar8 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar11;
        param_1[1] = puVar10;
        return (uint)param_1;
      }
      if (puVar10 != puVar1) {
        uVar2 = puVar11[1];
        uVar3 = *puVar11;
        uVar4 = puVar11[2];
        *puVar11 = *puVar10;
        puVar11[1] = puVar10[1];
        puVar11[2] = puVar10[2];
        *puVar10 = uVar3;
        puVar10[1] = uVar2;
        puVar10[2] = uVar4;
      }
      uVar2 = *puVar11;
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      *puVar11 = *puVar1;
      puVar11[1] = puVar1[1];
      puVar11[2] = puVar1[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar10 = puVar10 + 3;
      puVar1[2] = uVar4;
      puVar7 = puVar8;
      puVar1 = puVar1 + 3;
      puVar8 = puVar10;
      local_c = puVar5;
      puVar11 = puVar11 + 3;
    }
    else {
      puVar7 = puVar8 + -3;
      local_c = puVar7;
      if (puVar1 == param_3) {
        puVar12 = puVar11 + -3;
        if (puVar7 != puVar12) {
          uVar2 = puVar8[-2];
          uVar3 = *puVar7;
          uVar4 = puVar8[-1];
          *puVar7 = *puVar12;
          puVar8[-2] = puVar11[-2];
          puVar8[-1] = puVar11[-1];
          *puVar12 = uVar3;
          puVar11[-2] = uVar2;
          puVar11[-1] = uVar4;
        }
        uVar2 = puVar11[-2];
        uVar3 = *puVar12;
        uVar4 = puVar11[-1];
        puVar8 = puVar10 + -3;
        *puVar12 = *puVar8;
        puVar11[-2] = puVar10[-2];
        puVar11[-1] = puVar10[-1];
        *puVar8 = uVar3;
        puVar10[-2] = uVar2;
        puVar10[-1] = uVar4;
        puVar10 = puVar8;
        puVar11 = puVar12;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        uVar4 = puVar1[2];
        *puVar1 = *puVar7;
        puVar1[1] = puVar8[-2];
        puVar1[2] = puVar8[-1];
        *puVar7 = uVar3;
        puVar8[-2] = uVar2;
        puVar8[-1] = uVar4;
        puVar1 = puVar1 + 3;
        puVar8 = local_8;
      }
    }
    goto joined_r0x0095f2d3;
  }
  uVar6 = (*param_4)(puVar11,puVar1);
  if ((char)uVar6 == '\0') {
    uVar6 = (*param_4)(puVar1,puVar11);
    puVar7 = local_c;
    puVar12 = local_c;
    local_8 = puVar10;
    if ((char)uVar6 != '\0') goto joined_r0x0095f32f;
    uVar2 = puVar10[1];
    uVar3 = *puVar10;
    uVar4 = puVar10[2];
    *puVar10 = *puVar1;
    puVar10[1] = puVar1[1];
    puVar10[2] = puVar1[2];
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar10 = puVar10 + 3;
    puVar1[2] = uVar4;
  }
  puVar7 = local_c;
  puVar1 = puVar1 + 3;
  puVar8 = puVar10;
  goto joined_r0x0095f2d3;
}

/* ref: FUN_0095f4e0 */
unsigned int F_0095f4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95f4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00959070(param_1,param_2,param_3,0);
  return 0;
}

/* ref: FUN_0095f500 */
uint F_0095f500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95f500u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 * local_c;
  uint local_8;
  
  uVar8 = param_2 + ((int)(param_3 - param_2) / 0x18) * 0xc;
  F_00959150(param_2,uVar8,param_3 - 0xc,param_4);
  uVar1 = uVar8;
  while (uVar6 = uVar1, param_2 < uVar6) {
    uVar1 = uVar6 - 0xc;
    uVar4 = (*param_4)(uVar1,uVar6);
    if (((char)uVar4 != '\0') || (uVar4 = (*param_4)(uVar6,uVar1), (char)uVar4 != '\0')) break;
  }
  do {
    uVar8 = uVar8 + 0xc;
    uVar1 = uVar8;
    local_8 = uVar6;
    uVar4 = uVar6;
    if (param_3 <= uVar8) break;
    uVar5 = (*param_4)(uVar8,uVar6);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(uVar6,uVar8), (char)uVar5 != '\0')) break;
  } while( true );
joined_r0x0095f5a3: ;
  if (param_3 <= uVar1) {
LAB_0095f5eb: ;
    if (param_2 < uVar6) {
      local_c = (undefined4 *)(uVar6 - 4);
      uVar5 = uVar4;
      do {
        uVar6 = (*param_4)(local_c + -2,uVar5);
        uVar4 = uVar5;
        if ((char)uVar6 == '\0') {
          uVar7 = (*param_4)(uVar5,local_c + -2);
          uVar6 = local_8;
          if ((char)uVar7 != '\0') break;
          uVar2 = *(undefined4 *)(uVar5 - 4);
          uVar3 = *(undefined4 *)(uVar5 - 8);
          uVar4 = uVar5 - 0xc;
          *(undefined4 *)(uVar5 - 8) = local_c[-1];
          *(undefined4 *)(uVar5 - 4) = *local_c;
          local_c[-1] = uVar3;
          *local_c = uVar2;
        }
        uVar6 = local_8 - 0xc;
        local_c = local_c + -3;
        uVar5 = uVar4;
        local_8 = uVar6;
      } while (param_2 < uVar6);
    }
    if (uVar6 == param_2) {
      if (uVar1 == param_3) {
        *param_1 = uVar4;
        param_1[1] = uVar8;
        return (uint)param_1;
      }
      if (uVar8 != uVar1) {
        uVar2 = *(undefined4 *)(uVar4 + 8);
        uVar3 = *(undefined4 *)(uVar4 + 4);
        *(undefined4 *)(uVar4 + 4) = *(undefined4 *)(uVar8 + 4);
        *(undefined4 *)(uVar4 + 8) = *(undefined4 *)(uVar8 + 8);
        *(undefined4 *)(uVar8 + 4) = uVar3;
        *(undefined4 *)(uVar8 + 8) = uVar2;
      }
      uVar2 = *(undefined4 *)(uVar4 + 4);
      uVar3 = *(undefined4 *)(uVar4 + 8);
      *(undefined4 *)(uVar4 + 4) = *(undefined4 *)(uVar1 + 4);
      *(undefined4 *)(uVar4 + 8) = *(undefined4 *)(uVar1 + 8);
      *(undefined4 *)(uVar1 + 4) = uVar2;
      *(undefined4 *)(uVar1 + 8) = uVar3;
      uVar8 = uVar8 + 0xc;
      uVar1 = uVar1 + 0xc;
      uVar4 = uVar4 + 0xc;
    }
    else {
      uVar5 = uVar6 - 0xc;
      local_8 = uVar5;
      if (uVar1 == param_3) {
        if (uVar5 != uVar4 - 0xc) {
          uVar2 = *(undefined4 *)(uVar6 - 4);
          uVar3 = *(undefined4 *)(uVar6 - 8);
          *(undefined4 *)(uVar6 - 8) = *(undefined4 *)(uVar4 - 8);
          *(undefined4 *)(uVar6 - 4) = *(undefined4 *)(uVar4 - 4);
          *(undefined4 *)(uVar4 - 8) = uVar3;
          *(undefined4 *)(uVar4 - 4) = uVar2;
        }
        uVar2 = *(undefined4 *)(uVar4 - 4);
        uVar3 = *(undefined4 *)(uVar4 - 8);
        *(undefined4 *)(uVar4 - 8) = *(undefined4 *)(uVar8 - 8);
        *(undefined4 *)(uVar4 - 4) = *(undefined4 *)(uVar8 - 4);
        *(undefined4 *)(uVar8 - 8) = uVar3;
        *(undefined4 *)(uVar8 - 4) = uVar2;
        uVar6 = uVar5;
        uVar8 = uVar8 - 0xc;
        uVar4 = uVar4 - 0xc;
      }
      else {
        uVar2 = *(undefined4 *)(uVar1 + 8);
        uVar3 = *(undefined4 *)(uVar1 + 4);
        *(undefined4 *)(uVar1 + 4) = *(undefined4 *)(uVar6 - 8);
        *(undefined4 *)(uVar1 + 8) = *(undefined4 *)(uVar6 - 4);
        *(undefined4 *)(uVar6 - 8) = uVar3;
        *(undefined4 *)(uVar6 - 4) = uVar2;
        uVar6 = uVar5;
        uVar1 = uVar1 + 0xc;
      }
    }
    goto joined_r0x0095f5a3;
  }
  uVar6 = (*param_4)(uVar4,uVar1);
  if ((char)uVar6 == '\0') {
    uVar5 = (*param_4)(uVar1,uVar4);
    uVar6 = local_8;
    if ((char)uVar5 != '\0') goto LAB_0095f5eb;
    uVar2 = *(undefined4 *)(uVar8 + 8);
    uVar3 = *(undefined4 *)(uVar8 + 4);
    *(undefined4 *)(uVar8 + 4) = *(undefined4 *)(uVar1 + 4);
    *(undefined4 *)(uVar8 + 8) = *(undefined4 *)(uVar1 + 8);
    uVar8 = uVar8 + 0xc;
    *(undefined4 *)(uVar1 + 4) = uVar3;
    *(undefined4 *)(uVar1 + 8) = uVar2;
  }
  uVar6 = local_8;
  uVar1 = uVar1 + 0xc;
  goto joined_r0x0095f5a3;
}

/* ref: FUN_0095f750 */
uint F_0095f750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95f750u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (param_2 - param_1) / 0xc;
  if (1 < (int)uVar1) {
    uVar1 = F_00959200(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_0095f790 */
unsigned int F_0095f790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95f790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00959300(param_1,param_2,param_3,0);
  return 0;
}

/* ref: FUN_0095f7b0 */
uint F_0095f7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95f7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_c;
  undefined4 * local_8;
  
  uVar11 = param_2 + ((int)(param_3 - param_2) / 0x30) * 0x18;
  F_009593d0(param_2,uVar11,param_3 - 0x18,param_4);
  uVar1 = uVar11;
  while (uVar9 = uVar1, param_2 < uVar9) {
    uVar1 = uVar9 - 0x18;
    uVar7 = (*param_4)(uVar1,uVar9);
    if (((char)uVar7 != '\0') || (uVar7 = (*param_4)(uVar9,uVar1), (char)uVar7 != '\0')) break;
  }
  do {
    uVar11 = uVar11 + 0x18;
    uVar1 = uVar11;
    local_c = uVar9;
    uVar7 = uVar9;
    if (param_3 <= uVar11) break;
    uVar8 = (*param_4)(uVar11,uVar9);
    if (((char)uVar8 != '\0') || (uVar8 = (*param_4)(uVar9,uVar11), (char)uVar8 != '\0')) break;
  } while( true );
joined_r0x0095f863: ;
  if (param_3 <= uVar1) {
LAB_0095f8ee: ;
    if (param_2 < uVar9) {
      local_8 = (undefined4 *)(uVar9 - 0x10);
      uVar8 = uVar7;
      do {
        uVar9 = (*param_4)(local_8 + -2,uVar8);
        uVar7 = uVar8;
        if ((char)uVar9 == '\0') {
          uVar10 = (*param_4)(uVar8,local_8 + -2);
          uVar9 = local_c;
          if ((char)uVar10 != '\0') break;
          uVar3 = *(undefined4 *)(uVar8 - 0xc);
          uVar4 = *(undefined4 *)(uVar8 - 0x10);
          uVar5 = *(undefined4 *)(uVar8 - 0x14);
          uVar7 = uVar8 - 0x18;
          uVar6 = *(undefined4 *)(uVar8 - 8);
          uVar2 = *(undefined1 *)(uVar8 - 4);
          *(undefined4 *)(uVar8 - 0x14) = local_8[-1];
          *(undefined4 *)(uVar8 - 0x10) = *local_8;
          *(undefined4 *)(uVar8 - 0xc) = local_8[1];
          *(undefined4 *)(uVar8 - 8) = local_8[2];
          *(undefined1 *)(uVar8 - 4) = *(undefined1 *)(local_8 + 3);
          local_8[-1] = uVar5;
          local_8[1] = uVar3;
          *local_8 = uVar4;
          local_8[2] = uVar6;
          *(undefined1 *)(local_8 + 3) = uVar2;
        }
        uVar9 = local_c - 0x18;
        local_8 = local_8 + -6;
        uVar8 = uVar7;
        local_c = uVar9;
      } while (param_2 < uVar9);
    }
    if (uVar9 == param_2) {
      if (uVar1 == param_3) {
        *param_1 = uVar7;
        param_1[1] = uVar11;
        return (uint)param_1;
      }
      if (uVar11 != uVar1) {
        uVar3 = *(undefined4 *)(uVar7 + 8);
        uVar4 = *(undefined4 *)(uVar7 + 4);
        uVar5 = *(undefined4 *)(uVar7 + 0xc);
        uVar6 = *(undefined4 *)(uVar7 + 0x10);
        uVar2 = *(undefined1 *)(uVar7 + 0x14);
        *(undefined4 *)(uVar7 + 4) = *(undefined4 *)(uVar11 + 4);
        *(undefined4 *)(uVar7 + 8) = *(undefined4 *)(uVar11 + 8);
        *(undefined4 *)(uVar7 + 0xc) = *(undefined4 *)(uVar11 + 0xc);
        *(undefined4 *)(uVar7 + 0x10) = *(undefined4 *)(uVar11 + 0x10);
        *(undefined1 *)(uVar7 + 0x14) = *(undefined1 *)(uVar11 + 0x14);
        *(undefined4 *)(uVar11 + 4) = uVar4;
        *(undefined4 *)(uVar11 + 0xc) = uVar5;
        *(undefined4 *)(uVar11 + 8) = uVar3;
        *(undefined4 *)(uVar11 + 0x10) = uVar6;
        *(undefined1 *)(uVar11 + 0x14) = uVar2;
      }
      uVar3 = *(undefined4 *)(uVar7 + 4);
      uVar4 = *(undefined4 *)(uVar7 + 8);
      uVar5 = *(undefined4 *)(uVar7 + 0xc);
      uVar6 = *(undefined4 *)(uVar7 + 0x10);
      uVar2 = *(undefined1 *)(uVar7 + 0x14);
      *(undefined4 *)(uVar7 + 4) = *(undefined4 *)(uVar1 + 4);
      *(undefined4 *)(uVar7 + 8) = *(undefined4 *)(uVar1 + 8);
      *(undefined4 *)(uVar7 + 0xc) = *(undefined4 *)(uVar1 + 0xc);
      *(undefined4 *)(uVar7 + 0x10) = *(undefined4 *)(uVar1 + 0x10);
      *(undefined1 *)(uVar7 + 0x14) = *(undefined1 *)(uVar1 + 0x14);
      *(undefined4 *)(uVar1 + 4) = uVar3;
      *(undefined4 *)(uVar1 + 8) = uVar4;
      *(undefined4 *)(uVar1 + 0xc) = uVar5;
      *(undefined4 *)(uVar1 + 0x10) = uVar6;
      *(undefined1 *)(uVar1 + 0x14) = uVar2;
      uVar11 = uVar11 + 0x18;
      uVar1 = uVar1 + 0x18;
      uVar7 = uVar7 + 0x18;
    }
    else {
      uVar8 = uVar9 - 0x18;
      local_c = uVar8;
      if (uVar1 == param_3) {
        if (uVar8 != uVar7 - 0x18) {
          uVar3 = *(undefined4 *)(uVar9 - 0x10);
          uVar4 = *(undefined4 *)(uVar9 - 0x14);
          uVar5 = *(undefined4 *)(uVar9 - 0xc);
          uVar6 = *(undefined4 *)(uVar9 - 8);
          uVar2 = *(undefined1 *)(uVar9 - 4);
          *(undefined4 *)(uVar9 - 0x14) = *(undefined4 *)(uVar7 - 0x14);
          *(undefined4 *)(uVar9 - 0x10) = *(undefined4 *)(uVar7 - 0x10);
          *(undefined4 *)(uVar9 - 0xc) = *(undefined4 *)(uVar7 - 0xc);
          *(undefined4 *)(uVar9 - 8) = *(undefined4 *)(uVar7 - 8);
          *(undefined1 *)(uVar9 - 4) = *(undefined1 *)(uVar7 - 4);
          *(undefined4 *)(uVar7 - 0x14) = uVar4;
          *(undefined4 *)(uVar7 - 0xc) = uVar5;
          *(undefined4 *)(uVar7 - 0x10) = uVar3;
          *(undefined4 *)(uVar7 - 8) = uVar6;
          *(undefined1 *)(uVar7 - 4) = uVar2;
        }
        uVar3 = *(undefined4 *)(uVar7 - 0x10);
        uVar4 = *(undefined4 *)(uVar7 - 0x14);
        uVar5 = *(undefined4 *)(uVar7 - 0xc);
        uVar6 = *(undefined4 *)(uVar7 - 8);
        uVar2 = *(undefined1 *)(uVar7 - 4);
        *(undefined4 *)(uVar7 - 0x14) = *(undefined4 *)(uVar11 - 0x14);
        *(undefined4 *)(uVar7 - 0x10) = *(undefined4 *)(uVar11 - 0x10);
        *(undefined4 *)(uVar7 - 0xc) = *(undefined4 *)(uVar11 - 0xc);
        *(undefined4 *)(uVar7 - 8) = *(undefined4 *)(uVar11 - 8);
        *(undefined1 *)(uVar7 - 4) = *(undefined1 *)(uVar11 - 4);
        *(undefined4 *)(uVar11 - 0x14) = uVar4;
        *(undefined4 *)(uVar11 - 0xc) = uVar5;
        *(undefined4 *)(uVar11 - 0x10) = uVar3;
        *(undefined4 *)(uVar11 - 8) = uVar6;
        *(undefined1 *)(uVar11 - 4) = uVar2;
        uVar9 = uVar8;
        uVar11 = uVar11 - 0x18;
        uVar7 = uVar7 - 0x18;
      }
      else {
        uVar3 = *(undefined4 *)(uVar1 + 8);
        uVar4 = *(undefined4 *)(uVar1 + 4);
        uVar5 = *(undefined4 *)(uVar1 + 0xc);
        uVar6 = *(undefined4 *)(uVar1 + 0x10);
        uVar2 = *(undefined1 *)(uVar1 + 0x14);
        *(undefined4 *)(uVar1 + 4) = *(undefined4 *)(uVar9 - 0x14);
        *(undefined4 *)(uVar1 + 8) = *(undefined4 *)(uVar9 - 0x10);
        *(undefined4 *)(uVar1 + 0xc) = *(undefined4 *)(uVar9 - 0xc);
        *(undefined4 *)(uVar1 + 0x10) = *(undefined4 *)(uVar9 - 8);
        *(undefined1 *)(uVar1 + 0x14) = *(undefined1 *)(uVar9 - 4);
        *(undefined4 *)(uVar9 - 0x14) = uVar4;
        *(undefined4 *)(uVar9 - 0xc) = uVar5;
        *(undefined4 *)(uVar9 - 0x10) = uVar3;
        *(undefined4 *)(uVar9 - 8) = uVar6;
        *(undefined1 *)(uVar9 - 4) = uVar2;
        uVar9 = uVar8;
        uVar1 = uVar1 + 0x18;
      }
    }
    goto joined_r0x0095f863;
  }
  uVar9 = (*param_4)(uVar7,uVar1);
  if ((char)uVar9 == '\0') {
    uVar8 = (*param_4)(uVar1,uVar7);
    uVar9 = local_c;
    if ((char)uVar8 != '\0') goto LAB_0095f8ee;
    uVar3 = *(undefined4 *)(uVar11 + 8);
    uVar4 = *(undefined4 *)(uVar11 + 4);
    uVar5 = *(undefined4 *)(uVar11 + 0xc);
    uVar6 = *(undefined4 *)(uVar11 + 0x10);
    uVar2 = *(undefined1 *)(uVar11 + 0x14);
    *(undefined4 *)(uVar11 + 4) = *(undefined4 *)(uVar1 + 4);
    *(undefined4 *)(uVar11 + 8) = *(undefined4 *)(uVar1 + 8);
    *(undefined4 *)(uVar11 + 0xc) = *(undefined4 *)(uVar1 + 0xc);
    *(undefined4 *)(uVar11 + 0x10) = *(undefined4 *)(uVar1 + 0x10);
    *(undefined1 *)(uVar11 + 0x14) = *(undefined1 *)(uVar1 + 0x14);
    *(undefined4 *)(uVar1 + 4) = uVar4;
    *(undefined4 *)(uVar1 + 8) = uVar3;
    uVar11 = uVar11 + 0x18;
    *(undefined4 *)(uVar1 + 0xc) = uVar5;
    *(undefined4 *)(uVar1 + 0x10) = uVar6;
    *(undefined1 *)(uVar1 + 0x14) = uVar2;
  }
  uVar9 = local_c;
  uVar1 = uVar1 + 0x18;
  goto joined_r0x0095f863;
}

/* ref: FUN_0095fc00 */
uint F_0095fc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95fc00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (param_2 - param_1) / 0x18;
  if (1 < (int)uVar1) {
    uVar1 = F_00959480(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_0095fc40 */
uint F_0095fc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95fc40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00959510(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_0095fc60 */
uint F_0095fc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95fc60u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 * local_c;
  uint local_8;
  
  uVar9 = (((int)(param_3 - param_2) >> 4) - ((int)(param_3 - param_2) >> 0x1f) >> 1) * 0x10 +
          param_2;
  F_00959620(param_2,uVar9,param_3 - 0x10,param_4);
  uVar1 = uVar9;
  while (uVar7 = uVar1, param_2 < uVar7) {
    uVar1 = uVar7 - 0x10;
    uVar5 = (*param_4)(uVar1,uVar7);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(uVar7,uVar1), (char)uVar5 != '\0')) break;
  }
  do {
    uVar9 = uVar9 + 0x10;
    uVar1 = uVar9;
    local_8 = uVar7;
    uVar5 = uVar7;
    if (param_3 <= uVar9) break;
    uVar6 = (*param_4)(uVar9,uVar7);
    if (((char)uVar6 != '\0') || (uVar6 = (*param_4)(uVar7,uVar9), (char)uVar6 != '\0')) break;
  } while( true );
joined_r0x0095fcf3: ;
  if (param_3 <= uVar1) {
LAB_0095fd4d: ;
    if (param_2 < uVar7) {
      local_c = (undefined4 *)(uVar7 - 8);
      uVar6 = uVar5;
      do {
        uVar7 = (*param_4)(local_c + -2,uVar6);
        uVar5 = uVar6;
        if ((char)uVar7 == '\0') {
          uVar8 = (*param_4)(uVar6,local_c + -2);
          uVar7 = local_8;
          if ((char)uVar8 != '\0') break;
          uVar2 = *(undefined4 *)(uVar6 - 4);
          uVar3 = *(undefined4 *)(uVar6 - 8);
          uVar4 = *(undefined4 *)(uVar6 - 0xc);
          uVar5 = uVar6 - 0x10;
          *(undefined4 *)(uVar6 - 0xc) = local_c[-1];
          *(undefined4 *)(uVar6 - 8) = *local_c;
          *(undefined4 *)(uVar6 - 4) = local_c[1];
          local_c[-1] = uVar4;
          *local_c = uVar3;
          local_c[1] = uVar2;
        }
        uVar7 = local_8 - 0x10;
        local_c = local_c + -4;
        uVar6 = uVar5;
        local_8 = uVar7;
      } while (param_2 < uVar7);
    }
    if (uVar7 == param_2) {
      if (uVar1 == param_3) {
        *param_1 = uVar5;
        param_1[1] = uVar9;
        return (uint)param_1;
      }
      if (uVar9 != uVar1) {
        uVar2 = *(undefined4 *)(uVar5 + 8);
        uVar3 = *(undefined4 *)(uVar5 + 4);
        uVar4 = *(undefined4 *)(uVar5 + 0xc);
        *(undefined4 *)(uVar5 + 4) = *(undefined4 *)(uVar9 + 4);
        *(undefined4 *)(uVar5 + 8) = *(undefined4 *)(uVar9 + 8);
        *(undefined4 *)(uVar5 + 0xc) = *(undefined4 *)(uVar9 + 0xc);
        *(undefined4 *)(uVar9 + 4) = uVar3;
        *(undefined4 *)(uVar9 + 8) = uVar2;
        *(undefined4 *)(uVar9 + 0xc) = uVar4;
      }
      uVar2 = *(undefined4 *)(uVar5 + 4);
      uVar3 = *(undefined4 *)(uVar5 + 8);
      uVar4 = *(undefined4 *)(uVar5 + 0xc);
      *(undefined4 *)(uVar5 + 4) = *(undefined4 *)(uVar1 + 4);
      *(undefined4 *)(uVar5 + 8) = *(undefined4 *)(uVar1 + 8);
      *(undefined4 *)(uVar5 + 0xc) = *(undefined4 *)(uVar1 + 0xc);
      *(undefined4 *)(uVar1 + 4) = uVar2;
      *(undefined4 *)(uVar1 + 8) = uVar3;
      *(undefined4 *)(uVar1 + 0xc) = uVar4;
      uVar9 = uVar9 + 0x10;
      uVar1 = uVar1 + 0x10;
      uVar5 = uVar5 + 0x10;
    }
    else {
      uVar6 = uVar7 - 0x10;
      local_8 = uVar6;
      if (uVar1 == param_3) {
        if (uVar6 != uVar5 - 0x10) {
          uVar2 = *(undefined4 *)(uVar7 - 8);
          uVar3 = *(undefined4 *)(uVar7 - 0xc);
          uVar4 = *(undefined4 *)(uVar7 - 4);
          *(undefined4 *)(uVar7 - 0xc) = *(undefined4 *)(uVar5 - 0xc);
          *(undefined4 *)(uVar7 - 8) = *(undefined4 *)(uVar5 - 8);
          *(undefined4 *)(uVar7 - 4) = *(undefined4 *)(uVar5 - 4);
          *(undefined4 *)(uVar5 - 0xc) = uVar3;
          *(undefined4 *)(uVar5 - 8) = uVar2;
          *(undefined4 *)(uVar5 - 4) = uVar4;
        }
        uVar2 = *(undefined4 *)(uVar5 - 8);
        uVar3 = *(undefined4 *)(uVar5 - 0xc);
        uVar4 = *(undefined4 *)(uVar5 - 4);
        *(undefined4 *)(uVar5 - 0xc) = *(undefined4 *)(uVar9 - 0xc);
        *(undefined4 *)(uVar5 - 8) = *(undefined4 *)(uVar9 - 8);
        *(undefined4 *)(uVar5 - 4) = *(undefined4 *)(uVar9 - 4);
        *(undefined4 *)(uVar9 - 0xc) = uVar3;
        *(undefined4 *)(uVar9 - 8) = uVar2;
        *(undefined4 *)(uVar9 - 4) = uVar4;
        uVar7 = uVar6;
        uVar9 = uVar9 - 0x10;
        uVar5 = uVar5 - 0x10;
      }
      else {
        uVar2 = *(undefined4 *)(uVar1 + 8);
        uVar3 = *(undefined4 *)(uVar1 + 4);
        uVar4 = *(undefined4 *)(uVar1 + 0xc);
        *(undefined4 *)(uVar1 + 4) = *(undefined4 *)(uVar7 - 0xc);
        *(undefined4 *)(uVar1 + 8) = *(undefined4 *)(uVar7 - 8);
        *(undefined4 *)(uVar1 + 0xc) = *(undefined4 *)(uVar7 - 4);
        *(undefined4 *)(uVar7 - 0xc) = uVar3;
        *(undefined4 *)(uVar7 - 8) = uVar2;
        *(undefined4 *)(uVar7 - 4) = uVar4;
        uVar7 = uVar6;
        uVar1 = uVar1 + 0x10;
      }
    }
    goto joined_r0x0095fcf3;
  }
  uVar7 = (*param_4)(uVar5,uVar1);
  if ((char)uVar7 == '\0') {
    uVar6 = (*param_4)(uVar1,uVar5);
    uVar7 = local_8;
    if ((char)uVar6 != '\0') goto LAB_0095fd4d;
    uVar2 = *(undefined4 *)(uVar9 + 8);
    uVar3 = *(undefined4 *)(uVar9 + 4);
    uVar4 = *(undefined4 *)(uVar9 + 0xc);
    *(undefined4 *)(uVar9 + 4) = *(undefined4 *)(uVar1 + 4);
    *(undefined4 *)(uVar9 + 8) = *(undefined4 *)(uVar1 + 8);
    *(undefined4 *)(uVar9 + 0xc) = *(undefined4 *)(uVar1 + 0xc);
    *(undefined4 *)(uVar1 + 4) = uVar3;
    uVar9 = uVar9 + 0x10;
    *(undefined4 *)(uVar1 + 8) = uVar2;
    *(undefined4 *)(uVar1 + 0xc) = uVar4;
  }
  uVar7 = local_8;
  uVar1 = uVar1 + 0x10;
  goto joined_r0x0095fcf3;
}

/* ref: FUN_0095ff30 */
uint F_0095ff30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95ff30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if (0x10 < (int)(param_2 - param_1 & 0xfffffff0)) {
    uVar1 = F_009596c0(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_0095ff60 */
uint F_0095ff60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95ff60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_009597d0(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_0095ff80 */
uint F_0095ff80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x95ff80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * local_8;
  
  puVar6 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 2) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1);
  F_009598c0(param_2,puVar6,param_3 + -1,param_4);
  puVar5 = puVar6;
  while (((param_2 < puVar5 && (uVar3 = (*param_4)(puVar5[-1],*puVar5), (char)uVar3 == '\0')) &&
         (uVar3 = (*param_4)(*puVar5,puVar5[-1]), (char)uVar3 == '\0'))) {
    puVar5 = puVar5 + -1;
  }
  do {
    puVar6 = puVar6 + 1;
    puVar2 = puVar6;
    puVar4 = puVar5;
    if ((param_3 <= puVar6) || (uVar3 = (*param_4)(*puVar6,*puVar5), (char)uVar3 != '\0')) break;
    uVar3 = (*param_4)(*puVar5,*puVar6);
  } while ((char)uVar3 == '\0');
joined_r0x00960023: ;
  do {
    if (puVar6 < param_3) {
      uVar3 = (*param_4)(*puVar5,*puVar6);
      local_8 = puVar2;
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar6,*puVar5);
        if ((char)uVar3 != '\0') goto joined_r0x00960063;
        local_8 = puVar2 + 1;
        uVar1 = *puVar2;
        *puVar2 = *puVar6;
        *puVar6 = uVar1;
      }
      puVar6 = puVar6 + 1;
      puVar2 = local_8;
      goto joined_r0x00960023;
    }
joined_r0x00960063: ;
    for (; param_2 < puVar4; puVar4 = puVar4 + -1) {
      uVar3 = (*param_4)(puVar4[-1],*puVar5);
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar5,puVar4[-1]);
        if ((char)uVar3 != '\0') break;
        uVar1 = puVar5[-1];
        puVar5 = puVar5 + -1;
        *puVar5 = puVar4[-1];
        puVar4[-1] = uVar1;
      }
    }
    if (puVar4 == param_2) {
      if (puVar6 == param_3) {
        *param_1 = puVar5;
        param_1[1] = puVar2;
        return (uint)param_1;
      }
      if (puVar2 != puVar6) {
        uVar1 = *puVar5;
        *puVar5 = *puVar2;
        *puVar2 = uVar1;
      }
      uVar1 = *puVar5;
      *puVar5 = *puVar6;
      puVar5 = puVar5 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
      puVar2 = puVar2 + 1;
    }
    else {
      puVar4 = puVar4 + -1;
      if (puVar6 == param_3) {
        puVar5 = puVar5 + -1;
        if (puVar4 != puVar5) {
          uVar1 = *puVar4;
          *puVar4 = *puVar5;
          *puVar5 = uVar1;
        }
        uVar1 = *puVar5;
        *puVar5 = puVar2[-1];
        puVar2[-1] = uVar1;
        puVar2 = puVar2 + -1;
      }
      else {
        uVar1 = *puVar6;
        *puVar6 = *puVar4;
        *puVar4 = uVar1;
        puVar6 = puVar6 + 1;
      }
    }
  } while( true );
}

/* ref: FUN_00960130 */
uint F_00960130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x960130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * local_8;
  
  puVar6 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 2) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1);
  F_00959960(param_2,puVar6,param_3 + -1,param_4);
  puVar5 = puVar6;
  while (((param_2 < puVar5 && (uVar3 = (*param_4)(puVar5[-1],*puVar5), (char)uVar3 == '\0')) &&
         (uVar3 = (*param_4)(*puVar5,puVar5[-1]), (char)uVar3 == '\0'))) {
    puVar5 = puVar5 + -1;
  }
  do {
    puVar6 = puVar6 + 1;
    puVar2 = puVar6;
    puVar4 = puVar5;
    if ((param_3 <= puVar6) || (uVar3 = (*param_4)(*puVar6,*puVar5), (char)uVar3 != '\0')) break;
    uVar3 = (*param_4)(*puVar5,*puVar6);
  } while ((char)uVar3 == '\0');
joined_r0x009601d3: ;
  do {
    if (puVar6 < param_3) {
      uVar3 = (*param_4)(*puVar5,*puVar6);
      local_8 = puVar2;
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar6,*puVar5);
        if ((char)uVar3 != '\0') goto joined_r0x00960213;
        local_8 = puVar2 + 1;
        uVar1 = *puVar2;
        *puVar2 = *puVar6;
        *puVar6 = uVar1;
      }
      puVar6 = puVar6 + 1;
      puVar2 = local_8;
      goto joined_r0x009601d3;
    }
joined_r0x00960213: ;
    for (; param_2 < puVar4; puVar4 = puVar4 + -1) {
      uVar3 = (*param_4)(puVar4[-1],*puVar5);
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar5,puVar4[-1]);
        if ((char)uVar3 != '\0') break;
        uVar1 = puVar5[-1];
        puVar5 = puVar5 + -1;
        *puVar5 = puVar4[-1];
        puVar4[-1] = uVar1;
      }
    }
    if (puVar4 == param_2) {
      if (puVar6 == param_3) {
        *param_1 = puVar5;
        param_1[1] = puVar2;
        return (uint)param_1;
      }
      if (puVar2 != puVar6) {
        uVar1 = *puVar5;
        *puVar5 = *puVar2;
        *puVar2 = uVar1;
      }
      uVar1 = *puVar5;
      *puVar5 = *puVar6;
      puVar5 = puVar5 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
      puVar2 = puVar2 + 1;
    }
    else {
      puVar4 = puVar4 + -1;
      if (puVar6 == param_3) {
        puVar5 = puVar5 + -1;
        if (puVar4 != puVar5) {
          uVar1 = *puVar4;
          *puVar4 = *puVar5;
          *puVar5 = uVar1;
        }
        uVar1 = *puVar5;
        *puVar5 = puVar2[-1];
        puVar2[-1] = uVar1;
        puVar2 = puVar2 + -1;
      }
      else {
        uVar1 = *puVar6;
        *puVar6 = *puVar4;
        *puVar4 = uVar1;
        puVar6 = puVar6 + 1;
      }
    }
  } while( true );
}

/* ref: FUN_009602e0 */
uint F_009602e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9602e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * local_8;
  
  puVar6 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 2) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1);
  F_00959a00(param_2,puVar6,param_3 + -1,param_4);
  puVar5 = puVar6;
  while (((param_2 < puVar5 && (uVar3 = (*param_4)(puVar5[-1],*puVar5), (char)uVar3 == '\0')) &&
         (uVar3 = (*param_4)(*puVar5,puVar5[-1]), (char)uVar3 == '\0'))) {
    puVar5 = puVar5 + -1;
  }
  do {
    puVar6 = puVar6 + 1;
    puVar2 = puVar6;
    puVar4 = puVar5;
    if ((param_3 <= puVar6) || (uVar3 = (*param_4)(*puVar6,*puVar5), (char)uVar3 != '\0')) break;
    uVar3 = (*param_4)(*puVar5,*puVar6);
  } while ((char)uVar3 == '\0');
joined_r0x00960383: ;
  do {
    if (puVar6 < param_3) {
      uVar3 = (*param_4)(*puVar5,*puVar6);
      local_8 = puVar2;
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar6,*puVar5);
        if ((char)uVar3 != '\0') goto joined_r0x009603c3;
        local_8 = puVar2 + 1;
        uVar1 = *puVar2;
        *puVar2 = *puVar6;
        *puVar6 = uVar1;
      }
      puVar6 = puVar6 + 1;
      puVar2 = local_8;
      goto joined_r0x00960383;
    }
joined_r0x009603c3: ;
    for (; param_2 < puVar4; puVar4 = puVar4 + -1) {
      uVar3 = (*param_4)(puVar4[-1],*puVar5);
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar5,puVar4[-1]);
        if ((char)uVar3 != '\0') break;
        uVar1 = puVar5[-1];
        puVar5 = puVar5 + -1;
        *puVar5 = puVar4[-1];
        puVar4[-1] = uVar1;
      }
    }
    if (puVar4 == param_2) {
      if (puVar6 == param_3) {
        *param_1 = puVar5;
        param_1[1] = puVar2;
        return (uint)param_1;
      }
      if (puVar2 != puVar6) {
        uVar1 = *puVar5;
        *puVar5 = *puVar2;
        *puVar2 = uVar1;
      }
      uVar1 = *puVar5;
      *puVar5 = *puVar6;
      puVar5 = puVar5 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
      puVar2 = puVar2 + 1;
    }
    else {
      puVar4 = puVar4 + -1;
      if (puVar6 == param_3) {
        puVar5 = puVar5 + -1;
        if (puVar4 != puVar5) {
          uVar1 = *puVar4;
          *puVar4 = *puVar5;
          *puVar5 = uVar1;
        }
        uVar1 = *puVar5;
        *puVar5 = puVar2[-1];
        puVar2[-1] = uVar1;
        puVar2 = puVar2 + -1;
      }
      else {
        uVar1 = *puVar6;
        *puVar6 = *puVar4;
        *puVar4 = uVar1;
        puVar6 = puVar6 + 1;
      }
    }
  } while( true );
}

/* ref: FUN_00960490 */
uint F_00960490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x960490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * local_8;
  
  puVar6 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 2) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1);
  F_00959aa0(param_2,puVar6,param_3 + -1,param_4);
  puVar5 = puVar6;
  while (((param_2 < puVar5 && (uVar3 = (*param_4)(puVar5[-1],*puVar5), (char)uVar3 == '\0')) &&
         (uVar3 = (*param_4)(*puVar5,puVar5[-1]), (char)uVar3 == '\0'))) {
    puVar5 = puVar5 + -1;
  }
  do {
    puVar6 = puVar6 + 1;
    puVar2 = puVar6;
    puVar4 = puVar5;
    if ((param_3 <= puVar6) || (uVar3 = (*param_4)(*puVar6,*puVar5), (char)uVar3 != '\0')) break;
    uVar3 = (*param_4)(*puVar5,*puVar6);
  } while ((char)uVar3 == '\0');
joined_r0x00960533: ;
  do {
    if (puVar6 < param_3) {
      uVar3 = (*param_4)(*puVar5,*puVar6);
      local_8 = puVar2;
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar6,*puVar5);
        if ((char)uVar3 != '\0') goto joined_r0x00960573;
        local_8 = puVar2 + 1;
        uVar1 = *puVar2;
        *puVar2 = *puVar6;
        *puVar6 = uVar1;
      }
      puVar6 = puVar6 + 1;
      puVar2 = local_8;
      goto joined_r0x00960533;
    }
joined_r0x00960573: ;
    for (; param_2 < puVar4; puVar4 = puVar4 + -1) {
      uVar3 = (*param_4)(puVar4[-1],*puVar5);
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar5,puVar4[-1]);
        if ((char)uVar3 != '\0') break;
        uVar1 = puVar5[-1];
        puVar5 = puVar5 + -1;
        *puVar5 = puVar4[-1];
        puVar4[-1] = uVar1;
      }
    }
    if (puVar4 == param_2) {
      if (puVar6 == param_3) {
        *param_1 = puVar5;
        param_1[1] = puVar2;
        return (uint)param_1;
      }
      if (puVar2 != puVar6) {
        uVar1 = *puVar5;
        *puVar5 = *puVar2;
        *puVar2 = uVar1;
      }
      uVar1 = *puVar5;
      *puVar5 = *puVar6;
      puVar5 = puVar5 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
      puVar2 = puVar2 + 1;
    }
    else {
      puVar4 = puVar4 + -1;
      if (puVar6 == param_3) {
        puVar5 = puVar5 + -1;
        if (puVar4 != puVar5) {
          uVar1 = *puVar4;
          *puVar4 = *puVar5;
          *puVar5 = uVar1;
        }
        uVar1 = *puVar5;
        *puVar5 = puVar2[-1];
        puVar2[-1] = uVar1;
        puVar2 = puVar2 + -1;
      }
      else {
        uVar1 = *puVar6;
        *puVar6 = *puVar4;
        *puVar4 = uVar1;
        puVar6 = puVar6 + 1;
      }
    }
  } while( true );
}

/* ref: FUN_00960640 */
uint F_00960640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x960640u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00960690 */
uint F_00960690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x960690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  undefined4 * puVar14;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar11 = param_2 + (((int)param_3 - (int)param_2) / 0x30) * 6;
  F_00959b60(param_2,puVar11,param_3 + -6,param_4);
  puVar1 = puVar11;
  while (puVar10 = puVar1, param_2 < puVar10) {
    puVar1 = puVar10 + -6;
    uVar8 = (*param_4)(puVar1,puVar10);
    if (((char)uVar8 != '\0') || (uVar8 = (*param_4)(puVar10,puVar1), (char)uVar8 != '\0')) break;
  }
  do {
    puVar11 = puVar11 + 6;
    puVar1 = puVar11;
    local_c = puVar10;
    puVar13 = puVar10;
    if (param_3 <= puVar11) break;
    uVar8 = (*param_4)(puVar11,puVar10);
    if (((char)uVar8 != '\0') || (uVar8 = (*param_4)(puVar10,puVar11), (char)uVar8 != '\0')) break;
  } while( true );
joined_r0x00960743: ;
  puVar14 = puVar10;
  puVar12 = local_c;
  if (param_3 <= puVar1) {
joined_r0x009607e1: ;
    while (puVar9 = puVar10, param_2 < puVar10) {
      local_8 = puVar14 + -6;
      uVar8 = (*param_4)(local_8,puVar13);
      puVar9 = puVar13;
      if ((char)uVar8 == '\0') {
        uVar8 = (*param_4)(puVar13,local_8);
        puVar9 = puVar12;
        if ((char)uVar8 != '\0') break;
        uVar2 = puVar13[-5];
        uVar3 = puVar13[-4];
        uVar4 = puVar13[-6];
        puVar9 = puVar13 + -6;
        uVar5 = puVar13[-3];
        uVar6 = puVar13[-1];
        uVar7 = puVar13[-2];
        *puVar9 = *local_8;
        puVar13[-5] = puVar14[-5];
        puVar13[-4] = puVar14[-4];
        puVar13[-3] = puVar14[-3];
        puVar13[-2] = puVar14[-2];
        puVar13[-1] = puVar14[-1];
        *local_8 = uVar4;
        puVar14[-5] = uVar2;
        puVar14[-4] = uVar3;
        puVar14[-3] = uVar5;
        puVar14[-2] = uVar7;
        puVar14[-1] = uVar6;
      }
      puVar10 = puVar12 + -6;
      puVar14 = local_8;
      puVar13 = puVar9;
      puVar12 = puVar10;
    }
    if (puVar9 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar13;
        param_1[1] = puVar11;
        return (uint)param_1;
      }
      if (puVar11 != puVar1) {
        uVar2 = puVar13[1];
        uVar3 = *puVar13;
        uVar4 = puVar13[2];
        uVar5 = puVar13[3];
        uVar6 = puVar13[4];
        uVar7 = puVar13[5];
        *puVar13 = *puVar11;
        puVar13[1] = puVar11[1];
        puVar13[2] = puVar11[2];
        puVar13[3] = puVar11[3];
        puVar13[4] = puVar11[4];
        puVar13[5] = puVar11[5];
        *puVar11 = uVar3;
        puVar11[1] = uVar2;
        puVar11[2] = uVar4;
        puVar11[3] = uVar5;
        puVar11[4] = uVar6;
        puVar11[5] = uVar7;
      }
      uVar2 = *puVar13;
      uVar3 = puVar13[1];
      uVar4 = puVar13[2];
      uVar5 = puVar13[3];
      uVar6 = puVar13[4];
      uVar7 = puVar13[5];
      *puVar13 = *puVar1;
      puVar13[1] = puVar1[1];
      puVar13[2] = puVar1[2];
      puVar13[3] = puVar1[3];
      puVar13[4] = puVar1[4];
      puVar13[5] = puVar1[5];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar10 = puVar9;
      puVar11 = puVar11 + 6;
      puVar1 = puVar1 + 6;
      local_c = puVar12;
      puVar13 = puVar13 + 6;
    }
    else {
      puVar10 = puVar9 + -6;
      local_c = puVar10;
      if (puVar1 == param_3) {
        puVar14 = puVar13 + -6;
        if (puVar10 != puVar14) {
          uVar2 = puVar9[-5];
          uVar3 = *puVar10;
          uVar4 = puVar9[-4];
          uVar5 = puVar9[-3];
          uVar6 = puVar9[-2];
          uVar7 = puVar9[-1];
          *puVar10 = *puVar14;
          puVar9[-5] = puVar13[-5];
          puVar9[-4] = puVar13[-4];
          puVar9[-3] = puVar13[-3];
          puVar9[-2] = puVar13[-2];
          puVar9[-1] = puVar13[-1];
          *puVar14 = uVar3;
          puVar13[-5] = uVar2;
          puVar13[-4] = uVar4;
          puVar13[-3] = uVar5;
          puVar13[-2] = uVar6;
          puVar13[-1] = uVar7;
        }
        uVar2 = puVar13[-5];
        uVar3 = *puVar14;
        uVar4 = puVar13[-4];
        uVar5 = puVar13[-3];
        uVar6 = puVar13[-2];
        puVar12 = puVar11 + -6;
        uVar7 = puVar13[-1];
        *puVar14 = *puVar12;
        puVar13[-5] = puVar11[-5];
        puVar13[-4] = puVar11[-4];
        puVar13[-3] = puVar11[-3];
        puVar13[-2] = puVar11[-2];
        puVar13[-1] = puVar11[-1];
        *puVar12 = uVar3;
        puVar11[-5] = uVar2;
        puVar11[-4] = uVar4;
        puVar11[-3] = uVar5;
        puVar11[-2] = uVar6;
        puVar11[-1] = uVar7;
        puVar11 = puVar12;
        puVar13 = puVar14;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        uVar6 = puVar1[4];
        uVar7 = puVar1[5];
        *puVar1 = *puVar10;
        puVar1[1] = puVar9[-5];
        puVar1[2] = puVar9[-4];
        puVar1[3] = puVar9[-3];
        puVar1[4] = puVar9[-2];
        puVar1[5] = puVar9[-1];
        *puVar10 = uVar3;
        puVar9[-5] = uVar2;
        puVar9[-4] = uVar4;
        puVar9[-3] = uVar5;
        puVar9[-2] = uVar6;
        puVar9[-1] = uVar7;
        puVar1 = puVar1 + 6;
      }
    }
    goto joined_r0x00960743;
  }
  uVar8 = (*param_4)(puVar13,puVar1);
  if ((char)uVar8 == '\0') {
    uVar8 = (*param_4)(puVar1,puVar13);
    puVar10 = local_c;
    puVar14 = local_c;
    if ((char)uVar8 != '\0') goto joined_r0x009607e1;
    uVar2 = puVar11[1];
    uVar3 = *puVar11;
    uVar4 = puVar11[2];
    uVar5 = puVar11[3];
    uVar6 = puVar11[4];
    uVar7 = puVar11[5];
    *puVar11 = *puVar1;
    puVar11[1] = puVar1[1];
    puVar11[2] = puVar1[2];
    puVar11[3] = puVar1[3];
    puVar11[4] = puVar1[4];
    puVar11[5] = puVar1[5];
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    puVar1[4] = uVar6;
    puVar11 = puVar11 + 6;
    puVar1[5] = uVar7;
  }
  puVar10 = local_c;
  puVar1 = puVar1 + 6;
  goto joined_r0x00960743;
}

/* ref: FUN_00960b40 */
uint F_00960b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x960b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar10 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  F_00959c10(param_2,puVar10,param_3 + -3,param_4);
  puVar1 = puVar10;
  while (puVar7 = puVar1, param_2 < puVar7) {
    puVar1 = puVar7 + -3;
    uVar6 = (*param_4)(puVar1,puVar7);
    if (((char)uVar6 != '\0') || (uVar6 = (*param_4)(puVar7,puVar1), (char)uVar6 != '\0')) break;
  }
  do {
    puVar10 = puVar10 + 3;
    puVar1 = puVar10;
    puVar8 = puVar10;
    local_c = puVar7;
    puVar11 = puVar7;
    if (param_3 <= puVar10) break;
    uVar6 = (*param_4)(puVar10,puVar7);
    if (((char)uVar6 != '\0') || (uVar6 = (*param_4)(puVar7,puVar10), (char)uVar6 != '\0')) break;
  } while( true );
joined_r0x00960bf3: ;
  puVar12 = puVar7;
  puVar5 = local_c;
  local_8 = puVar8;
  if (param_3 <= puVar1) {
joined_r0x00960c4f: ;
    while (puVar8 = puVar7, param_2 < puVar7) {
      puVar9 = puVar12 + -3;
      uVar6 = (*param_4)(puVar9,puVar11);
      puVar8 = puVar11;
      puVar10 = local_8;
      if ((char)uVar6 == '\0') {
        uVar6 = (*param_4)(puVar11,puVar9);
        puVar8 = puVar5;
        if ((char)uVar6 != '\0') break;
        uVar2 = puVar11[-1];
        uVar3 = puVar11[-3];
        uVar4 = puVar11[-2];
        puVar8 = puVar11 + -3;
        *puVar8 = *puVar9;
        puVar11[-2] = puVar12[-2];
        puVar11[-1] = puVar12[-1];
        *puVar9 = uVar3;
        puVar12[-2] = uVar4;
        puVar12[-1] = uVar2;
      }
      puVar7 = puVar5 + -3;
      puVar12 = puVar9;
      puVar11 = puVar8;
      puVar5 = puVar7;
    }
    if (puVar8 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar11;
        param_1[1] = puVar10;
        return (uint)param_1;
      }
      if (puVar10 != puVar1) {
        uVar2 = puVar11[1];
        uVar3 = *puVar11;
        uVar4 = puVar11[2];
        *puVar11 = *puVar10;
        puVar11[1] = puVar10[1];
        puVar11[2] = puVar10[2];
        *puVar10 = uVar3;
        puVar10[1] = uVar2;
        puVar10[2] = uVar4;
      }
      uVar2 = *puVar11;
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      *puVar11 = *puVar1;
      puVar11[1] = puVar1[1];
      puVar11[2] = puVar1[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar10 = puVar10 + 3;
      puVar1[2] = uVar4;
      puVar7 = puVar8;
      puVar1 = puVar1 + 3;
      puVar8 = puVar10;
      local_c = puVar5;
      puVar11 = puVar11 + 3;
    }
    else {
      puVar7 = puVar8 + -3;
      local_c = puVar7;
      if (puVar1 == param_3) {
        puVar12 = puVar11 + -3;
        if (puVar7 != puVar12) {
          uVar2 = puVar8[-2];
          uVar3 = *puVar7;
          uVar4 = puVar8[-1];
          *puVar7 = *puVar12;
          puVar8[-2] = puVar11[-2];
          puVar8[-1] = puVar11[-1];
          *puVar12 = uVar3;
          puVar11[-2] = uVar2;
          puVar11[-1] = uVar4;
        }
        uVar2 = puVar11[-2];
        uVar3 = *puVar12;
        uVar4 = puVar11[-1];
        puVar8 = puVar10 + -3;
        *puVar12 = *puVar8;
        puVar11[-2] = puVar10[-2];
        puVar11[-1] = puVar10[-1];
        *puVar8 = uVar3;
        puVar10[-2] = uVar2;
        puVar10[-1] = uVar4;
        puVar10 = puVar8;
        puVar11 = puVar12;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        uVar4 = puVar1[2];
        *puVar1 = *puVar7;
        puVar1[1] = puVar8[-2];
        puVar1[2] = puVar8[-1];
        *puVar7 = uVar3;
        puVar8[-2] = uVar2;
        puVar8[-1] = uVar4;
        puVar1 = puVar1 + 3;
        puVar8 = local_8;
      }
    }
    goto joined_r0x00960bf3;
  }
  uVar6 = (*param_4)(puVar11,puVar1);
  if ((char)uVar6 == '\0') {
    uVar6 = (*param_4)(puVar1,puVar11);
    puVar7 = local_c;
    puVar12 = local_c;
    local_8 = puVar10;
    if ((char)uVar6 != '\0') goto joined_r0x00960c4f;
    uVar2 = puVar10[1];
    uVar3 = *puVar10;
    uVar4 = puVar10[2];
    *puVar10 = *puVar1;
    puVar10[1] = puVar1[1];
    puVar10[2] = puVar1[2];
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar10 = puVar10 + 3;
    puVar1[2] = uVar4;
  }
  puVar7 = local_c;
  puVar1 = puVar1 + 3;
  puVar8 = puVar10;
  goto joined_r0x00960bf3;
}

/* ref: FUN_00960e00 */
unsigned int F_00960e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x960e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00959cc0(param_1,param_2,param_3,0);
  return 0;
}

/* ref: FUN_00960e20 */
uint F_00960e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x960e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar11 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 4) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                      1) * 4;
  F_00959da0(param_2,puVar11,param_3 + -4,param_4);
  puVar1 = puVar11;
  while (puVar8 = puVar1, param_2 < puVar8) {
    puVar1 = puVar8 + -4;
    uVar7 = (*param_4)(puVar1,puVar8);
    if (((char)uVar7 != '\0') || (uVar7 = (*param_4)(puVar8,puVar1), (char)uVar7 != '\0')) break;
  }
  do {
    puVar11 = puVar11 + 4;
    puVar1 = puVar11;
    puVar9 = puVar11;
    local_c = puVar8;
    puVar12 = puVar8;
    if (param_3 <= puVar11) break;
    uVar7 = (*param_4)(puVar11,puVar8);
    if (((char)uVar7 != '\0') || (uVar7 = (*param_4)(puVar8,puVar11), (char)uVar7 != '\0')) break;
  } while( true );
joined_r0x00960eb5: ;
  puVar13 = puVar8;
  puVar6 = local_c;
  local_8 = puVar9;
  if (param_3 <= puVar1) {
joined_r0x00960f23: ;
    while (puVar9 = puVar8, param_2 < puVar8) {
      puVar10 = puVar13 + -4;
      uVar7 = (*param_4)(puVar10,puVar12);
      puVar9 = puVar12;
      puVar11 = local_8;
      if ((char)uVar7 == '\0') {
        uVar7 = (*param_4)(puVar12,puVar10);
        puVar9 = puVar6;
        if ((char)uVar7 != '\0') break;
        uVar2 = puVar12[-2];
        uVar3 = puVar12[-4];
        uVar4 = puVar12[-3];
        puVar9 = puVar12 + -4;
        uVar5 = puVar12[-1];
        *puVar9 = *puVar10;
        puVar12[-3] = puVar13[-3];
        puVar12[-2] = puVar13[-2];
        puVar12[-1] = puVar13[-1];
        *puVar10 = uVar3;
        puVar13[-3] = uVar4;
        puVar13[-2] = uVar2;
        puVar13[-1] = uVar5;
      }
      puVar8 = puVar6 + -4;
      puVar13 = puVar10;
      puVar12 = puVar9;
      puVar6 = puVar8;
    }
    if (puVar9 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar12;
        param_1[1] = puVar11;
        return (uint)param_1;
      }
      if (puVar11 != puVar1) {
        uVar2 = puVar12[1];
        uVar3 = *puVar12;
        uVar4 = puVar12[2];
        uVar5 = puVar12[3];
        *puVar12 = *puVar11;
        puVar12[1] = puVar11[1];
        puVar12[2] = puVar11[2];
        puVar12[3] = puVar11[3];
        *puVar11 = uVar3;
        puVar11[1] = uVar2;
        puVar11[2] = uVar4;
        puVar11[3] = uVar5;
      }
      uVar2 = *puVar12;
      uVar3 = puVar12[1];
      uVar4 = puVar12[2];
      uVar5 = puVar12[3];
      *puVar12 = *puVar1;
      puVar12[1] = puVar1[1];
      puVar12[2] = puVar1[2];
      puVar12[3] = puVar1[3];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar11 = puVar11 + 4;
      puVar1[3] = uVar5;
      puVar8 = puVar9;
      puVar1 = puVar1 + 4;
      puVar9 = puVar11;
      local_c = puVar6;
      puVar12 = puVar12 + 4;
    }
    else {
      puVar8 = puVar9 + -4;
      local_c = puVar8;
      if (puVar1 == param_3) {
        puVar13 = puVar12 + -4;
        if (puVar8 != puVar13) {
          uVar2 = puVar9[-3];
          uVar3 = *puVar8;
          uVar4 = puVar9[-2];
          uVar5 = puVar9[-1];
          *puVar8 = *puVar13;
          puVar9[-3] = puVar12[-3];
          puVar9[-2] = puVar12[-2];
          puVar9[-1] = puVar12[-1];
          *puVar13 = uVar3;
          puVar12[-3] = uVar2;
          puVar12[-2] = uVar4;
          puVar12[-1] = uVar5;
        }
        uVar2 = puVar12[-3];
        uVar3 = *puVar13;
        uVar4 = puVar12[-2];
        puVar9 = puVar11 + -4;
        uVar5 = puVar12[-1];
        *puVar13 = *puVar9;
        puVar12[-3] = puVar11[-3];
        puVar12[-2] = puVar11[-2];
        puVar12[-1] = puVar11[-1];
        *puVar9 = uVar3;
        puVar11[-3] = uVar2;
        puVar11[-2] = uVar4;
        puVar11[-1] = uVar5;
        puVar11 = puVar9;
        puVar12 = puVar13;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *puVar1 = *puVar8;
        puVar1[1] = puVar9[-3];
        puVar1[2] = puVar9[-2];
        puVar1[3] = puVar9[-1];
        *puVar8 = uVar3;
        puVar9[-3] = uVar2;
        puVar9[-2] = uVar4;
        puVar9[-1] = uVar5;
        puVar1 = puVar1 + 4;
        puVar9 = local_8;
      }
    }
    goto joined_r0x00960eb5;
  }
  uVar7 = (*param_4)(puVar12,puVar1);
  if ((char)uVar7 == '\0') {
    uVar7 = (*param_4)(puVar1,puVar12);
    puVar8 = local_c;
    puVar13 = local_c;
    local_8 = puVar11;
    if ((char)uVar7 != '\0') goto joined_r0x00960f23;
    uVar2 = puVar11[1];
    uVar3 = *puVar11;
    uVar4 = puVar11[2];
    uVar5 = puVar11[3];
    *puVar11 = *puVar1;
    puVar11[1] = puVar1[1];
    puVar11[2] = puVar1[2];
    puVar11[3] = puVar1[3];
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar4;
    puVar11 = puVar11 + 4;
    puVar1[3] = uVar5;
  }
  puVar8 = local_c;
  puVar1 = puVar1 + 4;
  puVar9 = puVar11;
  goto joined_r0x00960eb5;
}

/* ref: FUN_00961150 */
unsigned int F_00961150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x961150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00959e40(param_1,param_2,param_3,0);
  return 0;
}

/* ref: FUN_00961170 */
uint F_00961170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x961170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar10 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  F_00959f40(param_2,puVar10,param_3 + -3,param_4);
  puVar1 = puVar10;
  while (puVar7 = puVar1, param_2 < puVar7) {
    puVar1 = puVar7 + -3;
    uVar6 = (*param_4)(puVar1,puVar7);
    if (((char)uVar6 != '\0') || (uVar6 = (*param_4)(puVar7,puVar1), (char)uVar6 != '\0')) break;
  }
  do {
    puVar10 = puVar10 + 3;
    puVar1 = puVar10;
    puVar8 = puVar10;
    local_c = puVar7;
    puVar11 = puVar7;
    if (param_3 <= puVar10) break;
    uVar6 = (*param_4)(puVar10,puVar7);
    if (((char)uVar6 != '\0') || (uVar6 = (*param_4)(puVar7,puVar10), (char)uVar6 != '\0')) break;
  } while( true );
joined_r0x00961223: ;
  puVar12 = puVar7;
  puVar5 = local_c;
  local_8 = puVar8;
  if (param_3 <= puVar1) {
joined_r0x0096127f: ;
    while (puVar8 = puVar7, param_2 < puVar7) {
      puVar9 = puVar12 + -3;
      uVar6 = (*param_4)(puVar9,puVar11);
      puVar8 = puVar11;
      puVar10 = local_8;
      if ((char)uVar6 == '\0') {
        uVar6 = (*param_4)(puVar11,puVar9);
        puVar8 = puVar5;
        if ((char)uVar6 != '\0') break;
        uVar2 = puVar11[-1];
        uVar3 = puVar11[-3];
        uVar4 = puVar11[-2];
        puVar8 = puVar11 + -3;
        *puVar8 = *puVar9;
        puVar11[-2] = puVar12[-2];
        puVar11[-1] = puVar12[-1];
        *puVar9 = uVar3;
        puVar12[-2] = uVar4;
        puVar12[-1] = uVar2;
      }
      puVar7 = puVar5 + -3;
      puVar12 = puVar9;
      puVar11 = puVar8;
      puVar5 = puVar7;
    }
    if (puVar8 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar11;
        param_1[1] = puVar10;
        return (uint)param_1;
      }
      if (puVar10 != puVar1) {
        uVar2 = puVar11[1];
        uVar3 = *puVar11;
        uVar4 = puVar11[2];
        *puVar11 = *puVar10;
        puVar11[1] = puVar10[1];
        puVar11[2] = puVar10[2];
        *puVar10 = uVar3;
        puVar10[1] = uVar2;
        puVar10[2] = uVar4;
      }
      uVar2 = *puVar11;
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      *puVar11 = *puVar1;
      puVar11[1] = puVar1[1];
      puVar11[2] = puVar1[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar10 = puVar10 + 3;
      puVar1[2] = uVar4;
      puVar7 = puVar8;
      puVar1 = puVar1 + 3;
      puVar8 = puVar10;
      local_c = puVar5;
      puVar11 = puVar11 + 3;
    }
    else {
      puVar7 = puVar8 + -3;
      local_c = puVar7;
      if (puVar1 == param_3) {
        puVar12 = puVar11 + -3;
        if (puVar7 != puVar12) {
          uVar2 = puVar8[-2];
          uVar3 = *puVar7;
          uVar4 = puVar8[-1];
          *puVar7 = *puVar12;
          puVar8[-2] = puVar11[-2];
          puVar8[-1] = puVar11[-1];
          *puVar12 = uVar3;
          puVar11[-2] = uVar2;
          puVar11[-1] = uVar4;
        }
        uVar2 = puVar11[-2];
        uVar3 = *puVar12;
        uVar4 = puVar11[-1];
        puVar8 = puVar10 + -3;
        *puVar12 = *puVar8;
        puVar11[-2] = puVar10[-2];
        puVar11[-1] = puVar10[-1];
        *puVar8 = uVar3;
        puVar10[-2] = uVar2;
        puVar10[-1] = uVar4;
        puVar10 = puVar8;
        puVar11 = puVar12;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        uVar4 = puVar1[2];
        *puVar1 = *puVar7;
        puVar1[1] = puVar8[-2];
        puVar1[2] = puVar8[-1];
        *puVar7 = uVar3;
        puVar8[-2] = uVar2;
        puVar8[-1] = uVar4;
        puVar1 = puVar1 + 3;
        puVar8 = local_8;
      }
    }
    goto joined_r0x00961223;
  }
  uVar6 = (*param_4)(puVar11,puVar1);
  if ((char)uVar6 == '\0') {
    uVar6 = (*param_4)(puVar1,puVar11);
    puVar7 = local_c;
    puVar12 = local_c;
    local_8 = puVar10;
    if ((char)uVar6 != '\0') goto joined_r0x0096127f;
    uVar2 = puVar10[1];
    uVar3 = *puVar10;
    uVar4 = puVar10[2];
    *puVar10 = *puVar1;
    puVar10[1] = puVar1[1];
    puVar10[2] = puVar1[2];
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar10 = puVar10 + 3;
    puVar1[2] = uVar4;
  }
  puVar7 = local_c;
  puVar1 = puVar1 + 3;
  puVar8 = puVar10;
  goto joined_r0x00961223;
}

/* ref: FUN_00961430 */
unsigned int F_00961430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x961430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00959ff0(param_1,param_2,param_3,0);
  return 0;
}

/* ref: FUN_00961450 */
uint F_00961450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x961450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar11 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 4) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                      1) * 4;
  F_0095a0d0(param_2,puVar11,param_3 + -4,param_4);
  puVar1 = puVar11;
  while (puVar8 = puVar1, param_2 < puVar8) {
    puVar1 = puVar8 + -4;
    uVar7 = (*param_4)(puVar1,puVar8);
    if (((char)uVar7 != '\0') || (uVar7 = (*param_4)(puVar8,puVar1), (char)uVar7 != '\0')) break;
  }
  do {
    puVar11 = puVar11 + 4;
    puVar1 = puVar11;
    puVar9 = puVar11;
    local_c = puVar8;
    puVar12 = puVar8;
    if (param_3 <= puVar11) break;
    uVar7 = (*param_4)(puVar11,puVar8);
    if (((char)uVar7 != '\0') || (uVar7 = (*param_4)(puVar8,puVar11), (char)uVar7 != '\0')) break;
  } while( true );
joined_r0x009614e5: ;
  puVar13 = puVar8;
  puVar6 = local_c;
  local_8 = puVar9;
  if (param_3 <= puVar1) {
joined_r0x00961553: ;
    while (puVar9 = puVar8, param_2 < puVar8) {
      puVar10 = puVar13 + -4;
      uVar7 = (*param_4)(puVar10,puVar12);
      puVar9 = puVar12;
      puVar11 = local_8;
      if ((char)uVar7 == '\0') {
        uVar7 = (*param_4)(puVar12,puVar10);
        puVar9 = puVar6;
        if ((char)uVar7 != '\0') break;
        uVar2 = puVar12[-2];
        uVar3 = puVar12[-4];
        uVar4 = puVar12[-3];
        puVar9 = puVar12 + -4;
        uVar5 = puVar12[-1];
        *puVar9 = *puVar10;
        puVar12[-3] = puVar13[-3];
        puVar12[-2] = puVar13[-2];
        puVar12[-1] = puVar13[-1];
        *puVar10 = uVar3;
        puVar13[-3] = uVar4;
        puVar13[-2] = uVar2;
        puVar13[-1] = uVar5;
      }
      puVar8 = puVar6 + -4;
      puVar13 = puVar10;
      puVar12 = puVar9;
      puVar6 = puVar8;
    }
    if (puVar9 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar12;
        param_1[1] = puVar11;
        return (uint)param_1;
      }
      if (puVar11 != puVar1) {
        uVar2 = puVar12[1];
        uVar3 = *puVar12;
        uVar4 = puVar12[2];
        uVar5 = puVar12[3];
        *puVar12 = *puVar11;
        puVar12[1] = puVar11[1];
        puVar12[2] = puVar11[2];
        puVar12[3] = puVar11[3];
        *puVar11 = uVar3;
        puVar11[1] = uVar2;
        puVar11[2] = uVar4;
        puVar11[3] = uVar5;
      }
      uVar2 = *puVar12;
      uVar3 = puVar12[1];
      uVar4 = puVar12[2];
      uVar5 = puVar12[3];
      *puVar12 = *puVar1;
      puVar12[1] = puVar1[1];
      puVar12[2] = puVar1[2];
      puVar12[3] = puVar1[3];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar11 = puVar11 + 4;
      puVar1[3] = uVar5;
      puVar8 = puVar9;
      puVar1 = puVar1 + 4;
      puVar9 = puVar11;
      local_c = puVar6;
      puVar12 = puVar12 + 4;
    }
    else {
      puVar8 = puVar9 + -4;
      local_c = puVar8;
      if (puVar1 == param_3) {
        puVar13 = puVar12 + -4;
        if (puVar8 != puVar13) {
          uVar2 = puVar9[-3];
          uVar3 = *puVar8;
          uVar4 = puVar9[-2];
          uVar5 = puVar9[-1];
          *puVar8 = *puVar13;
          puVar9[-3] = puVar12[-3];
          puVar9[-2] = puVar12[-2];
          puVar9[-1] = puVar12[-1];
          *puVar13 = uVar3;
          puVar12[-3] = uVar2;
          puVar12[-2] = uVar4;
          puVar12[-1] = uVar5;
        }
        uVar2 = puVar12[-3];
        uVar3 = *puVar13;
        uVar4 = puVar12[-2];
        puVar9 = puVar11 + -4;
        uVar5 = puVar12[-1];
        *puVar13 = *puVar9;
        puVar12[-3] = puVar11[-3];
        puVar12[-2] = puVar11[-2];
        puVar12[-1] = puVar11[-1];
        *puVar9 = uVar3;
        puVar11[-3] = uVar2;
        puVar11[-2] = uVar4;
        puVar11[-1] = uVar5;
        puVar11 = puVar9;
        puVar12 = puVar13;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *puVar1 = *puVar8;
        puVar1[1] = puVar9[-3];
        puVar1[2] = puVar9[-2];
        puVar1[3] = puVar9[-1];
        *puVar8 = uVar3;
        puVar9[-3] = uVar2;
        puVar9[-2] = uVar4;
        puVar9[-1] = uVar5;
        puVar1 = puVar1 + 4;
        puVar9 = local_8;
      }
    }
    goto joined_r0x009614e5;
  }
  uVar7 = (*param_4)(puVar12,puVar1);
  if ((char)uVar7 == '\0') {
    uVar7 = (*param_4)(puVar1,puVar12);
    puVar8 = local_c;
    puVar13 = local_c;
    local_8 = puVar11;
    if ((char)uVar7 != '\0') goto joined_r0x00961553;
    uVar2 = puVar11[1];
    uVar3 = *puVar11;
    uVar4 = puVar11[2];
    uVar5 = puVar11[3];
    *puVar11 = *puVar1;
    puVar11[1] = puVar1[1];
    puVar11[2] = puVar1[2];
    puVar11[3] = puVar1[3];
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar4;
    puVar11 = puVar11 + 4;
    puVar1[3] = uVar5;
  }
  puVar8 = local_c;
  puVar1 = puVar1 + 4;
  puVar9 = puVar11;
  goto joined_r0x009614e5;
}

/* ref: FUN_00961780 */
unsigned int F_00961780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x961780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0095a170(param_1,param_2,param_3,0);
  return 0;
}

/* ref: FUN_009617a0 */
uint F_009617a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9617a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar10 = param_2 + (((int)param_3 - (int)param_2) / 0x28) * 5;
  F_0095a270(param_2,puVar10,param_3 + -5,param_4);
  puVar1 = puVar10;
  while (puVar9 = puVar1, param_2 < puVar9) {
    puVar1 = puVar9 + -5;
    uVar7 = (*param_4)(puVar1,puVar9);
    if (((char)uVar7 != '\0') || (uVar7 = (*param_4)(puVar9,puVar1), (char)uVar7 != '\0')) break;
  }
  do {
    puVar10 = puVar10 + 5;
    puVar1 = puVar10;
    local_c = puVar9;
    puVar12 = puVar9;
    if (param_3 <= puVar10) break;
    uVar7 = (*param_4)(puVar10,puVar9);
    if (((char)uVar7 != '\0') || (uVar7 = (*param_4)(puVar9,puVar10), (char)uVar7 != '\0')) break;
  } while( true );
joined_r0x0096184b: ;
  puVar13 = puVar9;
  puVar11 = local_c;
  if (param_3 <= puVar1) {
joined_r0x009618cb: ;
    while (puVar8 = puVar9, param_2 < puVar9) {
      local_8 = puVar13 + -5;
      uVar7 = (*param_4)(local_8,puVar12);
      if ((char)uVar7 == '\0') {
        uVar7 = (*param_4)(puVar12,local_8);
        puVar8 = puVar11;
        if ((char)uVar7 != '\0') break;
        uVar2 = puVar12[-4];
        uVar3 = puVar12[-3];
        uVar4 = puVar12[-5];
        uVar5 = puVar12[-1];
        uVar6 = puVar12[-2];
        puVar12[-5] = *local_8;
        puVar12[-4] = puVar13[-4];
        puVar12[-3] = puVar13[-3];
        puVar12[-2] = puVar13[-2];
        puVar12[-1] = puVar13[-1];
        *local_8 = uVar4;
        puVar13[-4] = uVar2;
        puVar13[-3] = uVar3;
        puVar13[-2] = uVar6;
        puVar13[-1] = uVar5;
        puVar12 = puVar12 + -5;
      }
      puVar9 = puVar11 + -5;
      puVar13 = local_8;
      puVar11 = puVar9;
    }
    if (puVar8 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar12;
        param_1[1] = puVar10;
        return (uint)param_1;
      }
      if (puVar10 != puVar1) {
        uVar2 = puVar12[1];
        uVar3 = *puVar12;
        uVar4 = puVar12[2];
        uVar5 = puVar12[3];
        uVar6 = puVar12[4];
        *puVar12 = *puVar10;
        puVar12[1] = puVar10[1];
        puVar12[2] = puVar10[2];
        puVar12[3] = puVar10[3];
        puVar12[4] = puVar10[4];
        *puVar10 = uVar3;
        puVar10[1] = uVar2;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        puVar10[4] = uVar6;
      }
      uVar2 = *puVar12;
      uVar3 = puVar12[1];
      uVar4 = puVar12[2];
      uVar5 = puVar12[3];
      uVar6 = puVar12[4];
      *puVar12 = *puVar1;
      puVar12[1] = puVar1[1];
      puVar12[2] = puVar1[2];
      puVar12[3] = puVar1[3];
      puVar12[4] = puVar1[4];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar1[4] = uVar6;
      puVar9 = puVar8;
      puVar10 = puVar10 + 5;
      puVar1 = puVar1 + 5;
      local_c = puVar11;
      puVar12 = puVar12 + 5;
    }
    else {
      puVar9 = puVar8 + -5;
      local_c = puVar9;
      if (puVar1 == param_3) {
        puVar13 = puVar12 + -5;
        if (puVar9 != puVar13) {
          uVar2 = puVar8[-4];
          uVar3 = *puVar9;
          uVar4 = puVar8[-3];
          uVar5 = puVar8[-2];
          uVar6 = puVar8[-1];
          *puVar9 = *puVar13;
          puVar8[-4] = puVar12[-4];
          puVar8[-3] = puVar12[-3];
          puVar8[-2] = puVar12[-2];
          puVar8[-1] = puVar12[-1];
          *puVar13 = uVar3;
          puVar12[-4] = uVar2;
          puVar12[-3] = uVar4;
          puVar12[-2] = uVar5;
          puVar12[-1] = uVar6;
        }
        uVar2 = puVar12[-4];
        uVar3 = *puVar13;
        uVar4 = puVar12[-3];
        uVar5 = puVar12[-2];
        uVar6 = puVar12[-1];
        puVar11 = puVar10 + -5;
        *puVar13 = *puVar11;
        puVar12[-4] = puVar10[-4];
        puVar12[-3] = puVar10[-3];
        puVar12[-2] = puVar10[-2];
        puVar12[-1] = puVar10[-1];
        *puVar11 = uVar3;
        puVar10[-4] = uVar2;
        puVar10[-3] = uVar4;
        puVar10[-2] = uVar5;
        puVar10[-1] = uVar6;
        puVar10 = puVar11;
        puVar12 = puVar13;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        uVar6 = puVar1[4];
        *puVar1 = *puVar9;
        puVar1[1] = puVar8[-4];
        puVar1[2] = puVar8[-3];
        puVar1[3] = puVar8[-2];
        puVar1[4] = puVar8[-1];
        *puVar9 = uVar3;
        puVar8[-4] = uVar2;
        puVar8[-3] = uVar4;
        puVar8[-2] = uVar5;
        puVar8[-1] = uVar6;
        puVar1 = puVar1 + 5;
      }
    }
    goto joined_r0x0096184b;
  }
  uVar7 = (*param_4)(puVar12,puVar1);
  if ((char)uVar7 == '\0') {
    uVar7 = (*param_4)(puVar1,puVar12);
    puVar9 = local_c;
    puVar13 = local_c;
    if ((char)uVar7 != '\0') goto joined_r0x009618cb;
    uVar2 = puVar10[1];
    uVar3 = *puVar10;
    uVar4 = puVar10[2];
    uVar5 = puVar10[3];
    uVar6 = puVar10[4];
    *puVar10 = *puVar1;
    puVar10[1] = puVar1[1];
    puVar10[2] = puVar1[2];
    puVar10[3] = puVar1[3];
    puVar10[4] = puVar1[4];
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    puVar10 = puVar10 + 5;
    puVar1[4] = uVar6;
  }
  puVar9 = local_c;
  puVar1 = puVar1 + 5;
  goto joined_r0x0096184b;
}

/* ref: FUN_00961b90 */
unsigned int F_00961b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x961b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0095a320(param_1,param_2,param_3,0);
  return 0;
}

/* ref: FUN_00961bb0 */
unsigned int F_00961bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x961bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = param_2 - (int)param_1;
  if (1 < iVar2 / 0x14) {
    puVar3 = (undefined4 *)(param_2 + -0x14);
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = puVar3[1];
      uVar1 = puVar3[3];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x10)) = puVar3[2];
      *puVar3 = *param_1;
      (*(undefined4 *)(gen_frame + 0x18)) = puVar3[4];
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
      F_009411c0(param_1,0,(iVar2 + -0x14) / 0x14,&(*(undefined4 *)(gen_frame + 0x8)),param_3);
      puVar3 = puVar3 + -5;
      iVar2 = (int)puVar3 + (0x14 - (int)param_1);
    } while (1 < iVar2 / 0x14);
  }
  return 0;
}

/* ref: FUN_00961c70 */
unsigned int F_00961c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x961c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = param_2 - (int)param_1;
  if (1 < iVar2 / 0x14) {
    puVar3 = (undefined4 *)(param_2 + -0x14);
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = puVar3[1];
      uVar1 = puVar3[3];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x10)) = puVar3[2];
      *puVar3 = *param_1;
      (*(undefined4 *)(gen_frame + 0x18)) = puVar3[4];
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
      F_00941350(param_1,0,(iVar2 + -0x14) / 0x14,&(*(undefined4 *)(gen_frame + 0x8)),param_3);
      puVar3 = puVar3 + -5;
      iVar2 = (int)puVar3 + (0x14 - (int)param_1);
    } while (1 < iVar2 / 0x14);
  }
  return 0;
}

/* ref: FUN_00961d30 */
unsigned int F_00961d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x961d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = param_2 - (int)param_1;
  if (8 < (int)(uVar2 & 0xfffffff8)) {
    puVar3 = (undefined4 *)(param_2 + -8);
    do {
      uVar1 = puVar3[1];
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar3;
      *puVar3 = *param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      puVar3[1] = param_1[1];
      F_009414b0(param_1,0,(int)(uVar2 - 8) >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
      puVar3 = puVar3 + -2;
      uVar2 = (int)puVar3 + (8 - (int)param_1);
    } while (8 < (int)(uVar2 & 0xfffffff8));
  }
  return 0;
}

/* ref: FUN_00961da0 */
uint F_00961da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x961da0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  for (iVar2 = param_2 - param_1; 1 < iVar2 / 0x6c; iVar2 = iVar2 + -0x6c) {
    F_00952c20(param_1,iVar1,param_3,0);
    iVar1 = iVar1 + -0x6c;
  }
  return iVar2 / 0x6c;
}

/* ref: FUN_00961e00 */
uint F_00961e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x961e00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  for (iVar2 = param_2 - param_1; 1 < iVar2 / 0x68; iVar2 = iVar2 + -0x68) {
    F_00952ce0(param_1,iVar1,param_3,0);
    iVar1 = iVar1 + -0x68;
  }
  return iVar2 / 0x68;
}

/* ref: FUN_00961e60 */
uint F_00961e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x961e60u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (*(undefined4 *)&gen_args[2]);
  uVar1 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    (*(int *)&gen_args[1]) = *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4)))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
    F_00941920((*(undefined4 * PTR32 *)&gen_args[0]),0,(int)(uVar1 - 4) >> 2,&(*(int *)&gen_args[1]),uVar2);
    uVar1 = uVar1 - 4;
  }
  return uVar1;
}

/* ref: FUN_00961ec0 */
unsigned int F_00961ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x961ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = param_2 - (int)param_1;
  if (8 < (int)(uVar2 & 0xfffffff8)) {
    puVar3 = (undefined4 *)(param_2 + -8);
    do {
      uVar1 = puVar3[1];
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar3;
      *puVar3 = *param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      puVar3[1] = param_1[1];
      F_00941a40(param_1,0,(int)(uVar2 - 8) >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
      puVar3 = puVar3 + -2;
      uVar2 = (int)puVar3 + (8 - (int)param_1);
    } while (8 < (int)(uVar2 & 0xfffffff8));
  }
  return 0;
}

/* ref: FUN_00961f30 */
unsigned int F_00961f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x961f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = param_2 - (int)param_1;
  if (1 < iVar2 / 0xc) {
    puVar3 = (undefined4 *)(param_2 + -0xc);
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = puVar3[1];
      uVar1 = *param_1;
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar3;
      *puVar3 = uVar1;
      (*(undefined4 *)(gen_frame + 0x8)) = puVar3[2];
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      F_00941b40(param_1,0,(iVar2 + -0xc) / 0xc,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      puVar3 = puVar3 + -3;
      iVar2 = (int)puVar3 + (0xc - (int)param_1);
    } while (1 < iVar2 / 0xc);
  }
  return 0;
}

/* ref: FUN_00961fd0 */
uint F_00961fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x961fd0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (*(undefined4 *)&gen_args[2]);
  uVar1 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    (*(int *)&gen_args[1]) = *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4)))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
    F_00941d30((*(undefined4 * PTR32 *)&gen_args[0]),0,(int)(uVar1 - 4) >> 2,&(*(int *)&gen_args[1]),uVar2);
    uVar1 = uVar1 - 4;
  }
  return uVar1;
}

/* ref: FUN_00962030 */
uint F_00962030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x962030u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (*(undefined4 *)&gen_args[2]);
  uVar1 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    (*(int *)&gen_args[1]) = *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4)))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
    F_00941e40((*(undefined4 * PTR32 *)&gen_args[0]),0,(int)(uVar1 - 4) >> 2,&(*(int *)&gen_args[1]),uVar2);
    uVar1 = uVar1 - 4;
  }
  return uVar1;
}

/* ref: FUN_00962090 */
uint F_00962090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x962090u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (*(undefined4 *)&gen_args[2]);
  uVar1 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    (*(int *)&gen_args[1]) = *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4)))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
    F_00941f50((*(undefined4 * PTR32 *)&gen_args[0]),0,(int)(uVar1 - 4) >> 2,&(*(int *)&gen_args[1]),uVar2);
    uVar1 = uVar1 - 4;
  }
  return uVar1;
}

/* ref: FUN_009620f0 */
uint F_009620f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9620f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (*(undefined4 *)&gen_args[2]);
  uVar1 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    (*(int *)&gen_args[1]) = *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4)))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
    F_00942060((*(undefined4 * PTR32 *)&gen_args[0]),0,(int)(uVar1 - 4) >> 2,&(*(int *)&gen_args[1]),uVar2);
    uVar1 = uVar1 - 4;
  }
  return uVar1;
}

/* ref: FUN_00962150 */
unsigned int F_00962150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x962150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = param_2 - (int)param_1;
  if (1 < iVar2 / 0x18) {
    puVar3 = (undefined4 *)(param_2 + -0x18);
    do {
      uVar1 = puVar3[1];
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      (*(undefined4 *)(gen_frame + 0xc)) = puVar3[2];
      (*(undefined4 *)(gen_frame + 0x10)) = puVar3[3];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar3[4];
      *puVar3 = *param_1;
      (*(undefined4 *)(gen_frame + 0x18)) = puVar3[5];
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
      puVar3[5] = param_1[5];
      F_009421e0(param_1,0,(iVar2 + -0x18) / 0x18,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
      puVar3 = puVar3 + -6;
      iVar2 = (int)puVar3 + (0x18 - (int)param_1);
    } while (1 < iVar2 / 0x18);
  }
  return 0;
}

/* ref: FUN_00962220 */
unsigned int F_00962220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x962220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = param_2 - (int)param_1;
  if (1 < iVar2 / 0xc) {
    puVar3 = (undefined4 *)(param_2 + -0xc);
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = puVar3[1];
      uVar1 = *param_1;
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar3;
      *puVar3 = uVar1;
      (*(undefined4 *)(gen_frame + 0x8)) = puVar3[2];
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      F_00942380(param_1,0,(iVar2 + -0xc) / 0xc,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      puVar3 = puVar3 + -3;
      iVar2 = (int)puVar3 + (0xc - (int)param_1);
    } while (1 < iVar2 / 0xc);
  }
  return 0;
}

/* ref: FUN_009622c0 */
unsigned int F_009622c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9622c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = param_2 - (int)param_1;
  if (0x10 < (int)(uVar2 & 0xfffffff0)) {
    puVar3 = (undefined4 *)(param_2 + -0x10);
    do {
      uVar1 = puVar3[1];
      (*(undefined4 *)(gen_frame + 0xc)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x14)) = puVar3[2];
      *puVar3 = *param_1;
      (*(undefined4 *)(gen_frame + 0x18)) = puVar3[3];
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      F_009424d0(param_1,0,(int)(uVar2 - 0x10) >> 4,&(*(undefined4 *)(gen_frame + 0xc)),param_3);
      puVar3 = puVar3 + -4;
      uVar2 = (int)puVar3 + (0x10 - (int)param_1);
    } while (0x10 < (int)(uVar2 & 0xfffffff0));
  }
  return 0;
}

/* ref: FUN_00962350 */
unsigned int F_00962350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x962350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = param_2 - (int)param_1;
  if (1 < iVar2 / 0xc) {
    puVar3 = (undefined4 *)(param_2 + -0xc);
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = puVar3[1];
      uVar1 = *param_1;
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar3;
      *puVar3 = uVar1;
      (*(undefined4 *)(gen_frame + 0x8)) = puVar3[2];
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      F_00942640(param_1,0,(iVar2 + -0xc) / 0xc,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      puVar3 = puVar3 + -3;
      iVar2 = (int)puVar3 + (0xc - (int)param_1);
    } while (1 < iVar2 / 0xc);
  }
  return 0;
}

/* ref: FUN_009623f0 */
unsigned int F_009623f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9623f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = param_2 - (int)param_1;
  if (0x10 < (int)(uVar2 & 0xfffffff0)) {
    puVar3 = (undefined4 *)(param_2 + -0x10);
    do {
      uVar1 = puVar3[1];
      (*(undefined4 *)(gen_frame + 0xc)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x14)) = puVar3[2];
      *puVar3 = *param_1;
      (*(undefined4 *)(gen_frame + 0x18)) = puVar3[3];
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      F_00942790(param_1,0,(int)(uVar2 - 0x10) >> 4,&(*(undefined4 *)(gen_frame + 0xc)),param_3);
      puVar3 = puVar3 + -4;
      uVar2 = (int)puVar3 + (0x10 - (int)param_1);
    } while (0x10 < (int)(uVar2 & 0xfffffff0));
  }
  return 0;
}

/* ref: FUN_00962480 */
unsigned int F_00962480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x962480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = param_2 - (int)param_1;
  if (1 < iVar2 / 0x14) {
    puVar3 = (undefined4 *)(param_2 + -0x14);
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = puVar3[1];
      uVar1 = puVar3[3];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x10)) = puVar3[2];
      *puVar3 = *param_1;
      (*(undefined4 *)(gen_frame + 0x18)) = puVar3[4];
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
      F_00942920(param_1,0,(iVar2 + -0x14) / 0x14,&(*(undefined4 *)(gen_frame + 0x8)),param_3);
      puVar3 = puVar3 + -5;
      iVar2 = (int)puVar3 + (0x14 - (int)param_1);
    } while (1 < iVar2 / 0x14);
  }
  return 0;
}

/* ref: FUN_00962540 */
uint F_00962540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x962540u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + -4);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 + -8);
  *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + -4) = *(undefined4 *)(param_1 + 8);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d38));
  uVar1 = F_00951e10(param_1,0,((param_2 - param_1) + -0xc) / 0xc,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_3);
  return uVar1;
}

/* ref: FUN_009625a0 */
uint F_009625a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9625a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0095a920(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_009625c0 */
uint F_009625c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9625c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + -0xc);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + -8);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + -4);
  *(undefined4 *)(param_2 + -0xc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + -4) = *(undefined4 *)(param_1 + 0xc);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d58));
  uVar1 = F_009521b0(param_1,0,(param_2 - param_1) + -0x10 >> 4,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),param_3);
  return uVar1;
}

/* ref: FUN_00962620 */
uint F_00962620(unsigned int gen_a0)
{
  GEN_ENTER(0x962620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[32])REFP(0x10d7c0c));
  iVar1 = *(int *)((int)this + 0x1d4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x1dc) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  iVar1 = *(int *)((int)this + 0x1c4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x1cc) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  iVar1 = *(int *)((int)this + 0x1b4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x1bc) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  uVar2 = F_005cf210(this);
  return uVar2;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf15 */
byte F_009626f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9626f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x205);
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf16 */
byte F_00962700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x962700u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x205) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf29 */
byte F_00962710(unsigned int gen_a0)
{
  GEN_ENTER(0x962710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x1e4) != 0;
}

