#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00c848f0 */
uint F_00c848f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc848f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x14))))(*(int * PTR32 *)(param_1 + 0xc));
  if (uVar1 != *(uint *)(param_1 + 0x10)) {
    return 0x80040203;
  }
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) < param_2) {
    return 1;
  }
  *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
  return 0;
}

/* ref: FUN_00c84940 */
uint F_00c84940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x14))))(*(int * PTR32 *)(param_1 + 0xc));
  *(uint *)(param_1 + 0x10) = uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x18))))(*(int * PTR32 *)(param_1 + 0xc));
  *(uint *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  F_00c8d780((undefined *)(param_1 + 0x18));
  return 0;
}

/* ref: FUN_00c84980 */
uint F_00c84980(unsigned int gen_a0)
{
  GEN_ENTER(0xc84980u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x14))))(*(int * PTR32 *)(param_1 + 0xc));
  *(uint *)(param_1 + 0x10) = uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x18))))(*(int * PTR32 *)(param_1 + 0xc));
  *(uint *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}

/* ref: FUN_00c849d0 */
uint F_00c849d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc849d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x10959c4));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1082374));
    if (uVar1 == 0) {
      *param_3 = 0;
      return 0x80004002;
    }
  }
  uVar1 = F_00c83ae0(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00c84a30 */
unsigned int F_00c84a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  gen_imp_InterlockedIncrement((LONG *)(param_1 + 0x10));
  return 0;
}

/* ref: FUN_00c84a50 */
uint F_00c84a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = gen_imp_InterlockedDecrement(param_1 + 4);
  if ((uVar1 == 0) && (param_1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1,1);
  }
  return uVar1;
}

/* ref: FUN_00c84a80 */
uint F_00c84a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc84a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (param_3 == (undefined4 *)0x0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0x80004003;
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x10))))(*(int * PTR32 *)(param_1 + 8));
  if (uVar3 != *(uint *)(param_1 + 0xc)) {
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0x80040203;
  }
  if (param_4 == (int *)0x0) {
    if (1 < param_2) {
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return 0x80070057;
    }
  }
  else {
    *param_4 = 0;
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  uVar3 = param_2;
  puVar1 = param_3;
  iVar2 = (*(int *)(gen_frame + 0xc));
  do {
    if (uVar3 == 0) {
LAB_00c84b90: ;
      if (param_4 != (int *)0x0) {
        *param_4 = iVar2;
      }
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return (uint)(uVar3 != 0);
    }
    F_00c8e4a0(((undefined4 *)(gen_frame + 0x10)));
    iVar6 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar6 + 1;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x34))))(*(int * PTR32 *)(param_1 + 8),iVar6,((undefined4 *)(gen_frame + 0x10)));
    if (uVar4 != 0) {
LAB_00c84b88: ;
      F_00c8e460(((undefined4 *)(gen_frame + 0x10)));
      goto LAB_00c84b90;
    }
    puVar5 = gen_imp_CoTaskMemAlloc(0x48);
    *puVar1 = puVar5;
    if (puVar5 == (undefined4 *)0x0) goto LAB_00c84b88;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + 1;
    puVar7 = ((undefined4 *)(gen_frame + 0x10));
    for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    }
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    uVar3 = uVar3 - 1;
    F_00c8e460(((undefined4 *)(gen_frame + 0x10)));
  } while( true );
}

/* ref: FUN_00c84bc0 */
uint F_00c84bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc84bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  if (param_2 == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x10))))(*(int * PTR32 *)(param_1 + 8));
  if (uVar1 != *(uint *)(param_1 + 0xc)) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0x80040203;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
  F_00c8e4a0(((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x34))))
                    (*(int * PTR32 *)(param_1 + 8),*(int *)(param_1 + 4) + -1,((undefined1 *)(gen_frame + 0x0)));
  F_00c8e460(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (uint)(uVar1 != 0);
}

/* ref: FUN_00c84c60 */
uint F_00c84c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x10))))(*(int * PTR32 *)(param_1 + 8));
  *(uint *)(param_1 + 0xc) = uVar1;
  return 0;
}

/* ref: FUN_00c84c90 */
unsigned int F_00c84c90(unsigned int gen_a0)
{
  GEN_ENTER(0xc84c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00406ad0(*(undefined4 *)((int)this + 0x14));
  F_00c8e460((undefined *)((int)this + 0x34));
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c84cb0 */
uint F_00c84cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc84cb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x10959a4));
  if (uVar1 != 0) {
    if (param_1 != 0) {
      uVar1 = F_00c83ae0(param_1 + 0xc,param_3);
      return uVar1;
    }
    uVar1 = F_00c83ae0(0,param_3);
    return uVar1;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095b14));
  if (uVar1 == 0) {
    uVar1 = F_00c83bc0(param_1,param_2,param_3);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = F_00c83ae0(param_1 + 0x10,param_3);
    return uVar1;
  }
  uVar1 = F_00c83ae0(0,param_3);
  return uVar1;
}

/* ref: FUN_00c84d50 */
uint F_00c84d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x28) + 0xc)));
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 4))(iVar1,*(int *)(param_1 + 0x28) + 0xc);
  return uVar2;
}

/* ref: FUN_00c84d70 */
uint F_00c84d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc84d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x28) + 0xc)));
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 8))(iVar1,*(int *)(param_1 + 0x28) + 0xc);
  return uVar2;
}

/* ref: FUN_00c84d90 */
uint F_00c84d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc84d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,param_1);
  if ((int)uVar2 < 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
    return uVar2;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,param_2);
  if (uVar2 == 0) {
    *(int * PTR32 *)((int)this + 0x18) = param_1;
    ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,param_2);
    if ((-1 < (int)uVar2) &&
       (uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,(int)this + 0xc,param_2), -1 < (int)uVar2)) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,param_1);
      if (-1 < (int)uVar2) {
        return uVar2;
      }
      ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
    }
  }
  else if (((-1 < (int)uVar2) || (uVar2 == 0x80004005)) || (uVar2 == 0x80070057)) {
    uVar2 = 0x8004022a;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return uVar2;
}

/* ref: FUN_00c84e60 */
uint F_00c84e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc84e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  uVar3 = ((code *)*(gen_code32 *)(*param_3 + 0x14))(param_3);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar3 = ((code *)*(gen_code32 *)(*param_3 + 0xc))(param_3,1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x0)));
  if (uVar3 == 0) {
    do {
      if (((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) ||
         ((param_2 != 0 && (uVar3 = F_00c8e2c0((*(undefined * PTR32 *)(gen_frame + 0x8)),param_2), uVar3 == 0)))) {
        uVar3 = 0x80040207;
      }
      else {
        pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
        uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,param_1);
        if ((int)uVar3 < 0) {
          ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
        }
        else {
          uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,pvVar2);
          if (uVar3 == 0) {
            *(int * PTR32 *)((int)this + 0x18) = param_1;
            ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
            uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,pvVar2);
            if ((-1 < (int)uVar3) &&
               (uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,(int)this + 0xc,pvVar2),
               -1 < (int)uVar3)) {
              uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,param_1);
              if (-1 < (int)uVar3) goto LAB_00c84fa2;
              ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
            }
          }
          else if (((-1 < (int)uVar3) || (uVar3 == 0x80004005)) || (uVar3 == 0x80070057)) {
            uVar3 = 0x8004022a;
          }
          ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
          piVar1 = *(int * PTR32 *)((int)this + 0x18);
          if (piVar1 != (int *)0x0) {
            ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
            *(undefined4 *)((int)this + 0x18) = 0;
          }
        }
        if ((((int)uVar3 < 0) && (-1 < (int)(*(uint *)(gen_frame + 0x4)))) &&
           ((uVar3 != 0x80004005 && ((uVar3 != 0x80070057 && (uVar3 != 0x8004022a)))))) {
          (*(uint *)(gen_frame + 0x4)) = uVar3;
        }
      }
LAB_00c84fa2: ;
      if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0) {
        F_00c8e650((*(undefined * PTR32 *)(gen_frame + 0x8)));
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      }
      if (uVar3 == 0) {
        return 0;
      }
      uVar3 = ((code *)*(gen_code32 *)(*param_3 + 0xc))(param_3,1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x0)));
    } while (uVar3 == 0);
    if ((*(uint *)(gen_frame + 0x4)) != 0) {
      return (*(uint *)(gen_frame + 0x4));
    }
  }
  (*(uint *)(gen_frame + 0x4)) = 0x80040207;
  return 0x80040207;
}

/* ref: FUN_00c85000 */
uint F_00c85000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  if ((param_2 != (undefined *)0x0) && (uVar1 = F_00c8e280(param_2), uVar1 == 0)) {
    uVar1 = F_00c84d90(this,param_1,param_2);
    return uVar1;
  }
  (*(uint *)(gen_frame + 0x0)) = 0x80040207;
  (*(uint *)(gen_frame + 0x4)) = 0;
  do {
    if ((*(uint *)(gen_frame + 0x4)) == *(byte *)((int)this + 0x26)) {
      uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x30))(param_1,&(*(int * PTR32 *)(gen_frame + 0x8)));
    }
    else {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x30))))((int)this + 0xc,&(*(int * PTR32 *)(gen_frame + 0x8)));
    }
    if (-1 < (int)uVar1) {
      uVar1 = F_00c84e60(this,param_1,param_2,(*(int * PTR32 *)(gen_frame + 0x8)));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      if (-1 < (int)uVar1) {
        return 0;
      }
      if (((uVar1 != 0x80004005) && (uVar1 != 0x80070057)) && (uVar1 != 0x8004022a)) {
        (*(uint *)(gen_frame + 0x0)) = uVar1;
      }
    }
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
  } while ((int)(*(uint *)(gen_frame + 0x4)) < 2);
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00c850e0 */
uint F_00c850e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc850e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00c850f0 */
uint F_00c850f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc850f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8e8d0((undefined *)((int)this + 0x34),param_1);
  return uVar1 & (-1 < (int)uVar1) - 1;
}

/* ref: FUN_00c85110 */
uint F_00c85110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85110u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x24))))((*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[1]));
  return ((*(int * PTR32 *)&gen_args[1]) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)))) - 1 & 0x80040208;
}

/* ref: FUN_00c85150 */
uint F_00c85150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85150u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  code * pcVar1;
  uint uVar2;
  
  if ((param_2 == (int *)0x0) || (param_3 == 0)) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x14);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0xc) != 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80040204;
  }
  if ((*((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x14))) != 0) && (*(char *)(param_1 + 0x19) == '\0')) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80040224;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x28))))(param_1 + -0xc,param_2);
  if ((int)uVar2 < 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x2c))))(param_1 + -0xc);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar2;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x20))))(param_1 + -0xc,param_3);
  if (uVar2 == 0) {
    *(int * PTR32 *)(param_1 + 0xc) = param_2;
    ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x24))))(param_1 + -0xc,param_3);
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x30))))(param_1 + -0xc,param_2);
      if (-1 < (int)uVar2) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 8))))(*(int * PTR32 *)(param_1 + 0xc));
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x2c)));
    *(undefined4 *)(param_1 + 0xc) = 0;
    (*pcVar1)(param_1 + -0xc);
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x2c))))(param_1 + -0xc);
    if (((-1 < (int)uVar2) || (uVar2 == 0x80004005)) || (uVar2 == 0x80070057)) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0x8004022a;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return uVar2;
}

/* ref: FUN_00c852b0 */
uint F_00c852b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc852b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (param_1[6] == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x2c))(param_1);
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(int *)param_1[6] + 8))((int *)param_1[6]);
      param_1[6] = 0;
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00c852f0 */
uint F_00c852f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc852f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0xc);
  *param_2 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    return 0;
  }
  return 0x80040209;
}

/* ref: FUN_00c85330 */
uint F_00c85330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85330u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (undefined *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x14);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0xc) != 0) {
    F_00c8e3b0(param_2,param_1 + 0x28);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  F_00c8e260(param_2);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x80040209;
}

/* ref: FUN_00c85390 */
uint F_00c85390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85390u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  return 0;
}

/* ref: FUN_00c853c0 */
uint F_00c853c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc853c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c89740(*(undefined4 *)(param_1 + 8),param_2);
  return uVar1;
}

/* ref: FUN_00c853e0 */
uint F_00c853e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc853e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x20))))(param_1 + -0xc,param_2);
  if ((int)uVar1 < 0) {
    uVar1 = 1;
  }
  return uVar1;
}

/* ref: FUN_00c85410 */
uint F_00c85410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0x8000ffff;
}

/* ref: FUN_00c85420 */
uint F_00c85420(unsigned int gen_a0)
{
  GEN_ENTER(0xc85420u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: FUN_00c85450 */
uint F_00c85450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00c85470 */
uint F_00c85470(unsigned int gen_a0)
{
  GEN_ENTER(0xc85470u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: CBasePin::SetSink */
long F_00c85480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x10);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c854b0 */
uint F_00c854b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc854b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  return 0x80004001;
}

/* ref: FUN_00c854c0 */
uint F_00c854c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, double gen_a5)
{
  GEN_ENTER(0xc854c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  double param_6 = (double)gen_a5;
  *(undefined4 *)(param_1 + 0x74) = param_2;
  *(undefined4 *)(param_1 + 0x78) = param_3;
  *(undefined4 *)(param_1 + 0x7c) = param_4;
  *(undefined4 *)(param_1 + 0x80) = param_5;
  *(double *)(param_1 + 0x84) = param_6;
  return 0;
}

/* ref: FUN_00c85520 */
uint F_00c85520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85520u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x24))))((*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[1]));
  if ((*(int * PTR32 *)&gen_args[1]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)))) {
    return 0x80040208;
  }
  uVar2 = ((code *)*(gen_code32 *)*piVar1)(piVar1,&REFG(undefined, 0x1095aa4),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c);
  return uVar2 & (-1 < (int)uVar2) - 1;
}

/* ref: FUN_00c85570 */
uint F_00c85570(unsigned int gen_a0)
{
  GEN_ENTER(0xc85570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x98) + 8))))(*(int * PTR32 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x9c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  return 0;
}

/* ref: FUN_00c855d0 */
unsigned int F_00c855d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc855d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPVOID * param_1 = (LPVOID *)(uintptr_t)gen_a1;
  gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1085c58),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x1095a74),param_1);
  return 0;
}

/* ref: FUN_00c855f0 */
uint F_00c855f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc855f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  *param_2 = 0;
  (*(undefined8 *)(gen_frame + 0x8)) = 0;
  (*(undefined8 *)(gen_frame + 0x10)) = 0;
  ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,&(*(undefined8 *)(gen_frame + 0x8)));
  if ((int)(*(undefined8 *)(gen_frame + 0x10)) == 0) {
    (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) = 1;
    (*(undefined8 *)(gen_frame + 0x10)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)),1);
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,param_2);
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this,*param_2,&(*(undefined8 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*param_2,0);
      if (-1 < (int)uVar2) goto LAB_00c8566d;
    }
  }
  piVar1 = (int *)*param_2;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *param_2 = 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_2);
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this,*param_2,&(*(undefined8 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*param_2,0);
      if (-1 < (int)uVar2) {
LAB_00c8566d: ;
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
        return 0;
      }
    }
  }
  piVar1 = (int *)*param_2;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *param_2 = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_00c85700 */
uint F_00c85700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc85700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (*(int *)((int)this + 0x98) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x98) + 0x1c))))
                      (*(int * PTR32 *)((int)this + 0x98),param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0x80004002;
}

/* ref: FUN_00c85740 */
uint F_00c85740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x9c) == 0) {
    return 0x80040209;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x18))))(*(int * PTR32 *)((int)this + 0x9c),param_1);
  return uVar1;
}

/* ref: FUN_00c85770 */
uint F_00c85770(unsigned int gen_a0)
{
  GEN_ENTER(0xc85770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x18) == 0) {
    return 0x80040209;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x38))))(*(int * PTR32 *)((int)this + 0x18));
  return uVar1;
}

/* ref: FUN_00c857d0 */
uint F_00c857d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc857d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0x8000ffff;
}

/* ref: FUN_00c857e0 */
uint F_00c857e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc857e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0x8000ffff;
}

/* ref: FUN_00c857f0 */
uint F_00c857f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc857f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0x8000ffff;
}

/* ref: FUN_00c85840 */
uint F_00c85840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, double gen_a5)
{
  GEN_ENTER(0xc85840u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  double param_6 = (double)gen_a5;
  uint uVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0x80040209;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x18) + 0x44))))
                    (*(int * PTR32 *)(param_1 + 0x18),param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00c85880 */
unsigned int F_00c85880(unsigned int gen_a0)
{
  GEN_ENTER(0xc85880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x9c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  F_00406ad0(*(undefined4 *)((int)this + 0x14));
  F_00c8e460((undefined *)((int)this + 0x34));
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c858c0 */
uint F_00c858c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc858c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095aa4));
  if (uVar1 == 0) {
    uVar1 = F_00c84cb0(param_1,param_2,param_3);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = F_00c83ae0(param_1 + 0x98,param_3);
    return uVar1;
  }
  uVar1 = F_00c83ae0(0,param_3);
  return uVar1;
}

/* ref: FUN_00c85920 */
uint F_00c85920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  LPVOID * ppv;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + -0x78);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  ppv = (LPVOID *)(param_1 + 4);
  if (*ppv == (LPVOID)0x0) {
    uVar1 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1085c58),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x1095a74),ppv);
    if ((int)uVar1 < 0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar1;
    }
  }
  *param_2 = *ppv;
  ((code *)*(gen_code32 *)(*(int *)*ppv + 4))(*ppv);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c859a0 */
uint F_00c859a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc859a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + -0x78);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  *(int * PTR32 *)(param_1 + 4) = param_2;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(param_1 + 8) = (undefined1)param_3;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c85a00 */
uint F_00c85a00(unsigned int gen_a0)
{
  GEN_ENTER(0xc85a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x9c);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 8))))(*(int * PTR32 *)((int)this + 0x9c));
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  return 0;
}

/* ref: FUN_00c85a40 */
uint F_00c85a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85a40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
    return 0x80004003;
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + -0x98) + 0x38))))((*(int *)&gen_args[0]) + -0x98);
  if (uVar3 != 0) {
    return uVar3;
  }
  uVar3 = ((code *)*(gen_code32 *)*piVar2)(piVar2,&REFG(undefined, 0x1095a54),&(*(int * PTR32 *)&gen_args[1]));
  if ((int)uVar3 < 0) {
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x10) = 0x30;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x14) = 0;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x30) = 0;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x18) = 0;
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2);
    if (uVar3 == 0) {
      *(uint *)((*(int *)&gen_args[0]) + 0x18) = *(uint *)((*(int *)&gen_args[0]) + 0x18) | 4;
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2);
    if (uVar3 == 0) {
      *(uint *)((*(int *)&gen_args[0]) + 0x18) = *(uint *)((*(int *)&gen_args[0]) + 0x18) | 2;
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2);
    if (uVar3 == 0) {
      *(uint *)((*(int *)&gen_args[0]) + 0x18) = *(uint *)((*(int *)&gen_args[0]) + 0x18) | 1;
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,(*(int *)&gen_args[0]) + 0x20,(*(int *)&gen_args[0]) + 0x28);
    if (-1 < (int)uVar3) {
      *(uint *)((*(int *)&gen_args[0]) + 0x18) = *(uint *)((*(int *)&gen_args[0]) + 0x18) | 0x110;
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x34))(piVar2,(*(int *)&gen_args[0]) + 0x34);
    if (uVar3 == 0) {
      *(uint *)((*(int *)&gen_args[0]) + 0x18) = *(uint *)((*(int *)&gen_args[0]) + 0x18) | 8;
    }
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,(*(int *)&gen_args[0]) + 0x38);
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x2c))(piVar2);
    *(uint *)((*(int *)&gen_args[0]) + 0x1c) = uVar3;
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    *(uint *)((*(int *)&gen_args[0]) + 0x3c) = uVar3;
  }
  else {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x4c))))((*(int * PTR32 *)&gen_args[1]),0x30,(*(int *)&gen_args[0]) + 0x10);
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  if (((*(byte *)((*(int *)&gen_args[0]) + 0x18) & 8) != 0) &&
     (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + -0x98) + 0x20))))
                        ((*(int *)&gen_args[0]) + -0x98,*(undefined4 *)((*(int *)&gen_args[0]) + 0x34)), uVar3 != 0)) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + -0x8c) + 0x38)));
    *(undefined1 *)((*(int *)&gen_args[0]) + -0x74) = 1;
    (*pcVar1)(*(int *)((*(int *)&gen_args[0]) + -0x8c),(*(int *)&gen_args[0]) + -0x8c);
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + -0x70) + 0x44)));
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3,0x8004022a,0);
    }
    return 0x80040200;
  }
  return 0;
}

/* ref: FUN_00c85bb0 */
uint F_00c85bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc85bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  *param_4 = 0;
  iVar2 = param_3;
  while( true ) {
    if (iVar2 < 1) {
      return 0;
    }
    iVar2 = iVar2 + -1;
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,*(undefined4 *)(param_2 + *param_4 * 4));
    if (uVar1 != 0) break;
    *param_4 = *param_4 + 1;
  }
  return uVar1;
}

/* ref: FUN_00c85c00 */
uint F_00c85c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -0x70) + 0x18))))(*(int * PTR32 *)(param_1 + -0x70));
  iVar4 = 0;
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -0x70) + 0x1c))))(*(int * PTR32 *)(param_1 + -0x70),iVar5);
      if (uVar3 == 0) break;
      piVar1 = (int *)(uVar3 + 0xc);
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar3 + 0xc) + 0x24))))(*(int *)(uVar3 + 0xc),piVar1,&(*(int *)(gen_frame + 0x0)));
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if (((*(int *)(gen_frame + 0x0)) == 1) &&
         (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,&(*(int * PTR32 *)(gen_frame + 0x8))), -1 < (int)uVar3)) {
        iVar4 = iVar4 + 1;
        uVar3 = ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x8)))((*(int * PTR32 *)(gen_frame + 0x8)),&REFG(undefined, 0x1095aa4),&(*(int * PTR32 *)(gen_frame + 0x4)));
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
        if ((int)uVar3 < 0) {
          return 0;
        }
        uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x4)));
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)));
        if (uVar3 != 1) {
          return 0;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return (uint)(iVar4 != 0);
}

/* ref: CBaseInputPin::BeginFlush */
long F_00c85cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xc85cd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x14);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x95) = 1;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c85d00 */
uint F_00c85d00(unsigned int gen_a0)
{
  GEN_ENTER(0xc85d00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x14);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c85d30 */
uint F_00c85d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc85d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  return (-(uint)(param_2 != 0) & 0x7fffbffd) + 0x80004003;
}

/* ref: FUN_00c85d80 */
uint F_00c85d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0x80004001;
}

/* ref: FUN_00c85d90 */
uint F_00c85d90(unsigned int gen_a0)
{
  GEN_ENTER(0xc85d90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*((int *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0x14))) == 0) {
    return 0x80040227;
  }
  if (*(char *)(in_ecx + 0xa1) != '\0') {
    return 1;
  }
  return -(uint)(*(char *)(in_ecx + 0x24) != '\0') & 0x8004020b;
}

/* ref: FUN_00c85dc0 */
uint F_00c85dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x2c) != 0) {
    if (*(int *)((int)this + 0x28) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x28) + 0xc;
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2c) + 0xc))))(*(int * PTR32 *)((int)this + 0x2c),iVar2);
    return uVar1;
  }
  uVar1 = 0x80040216;
  if (*(int *)((int)this + 0x18) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x18))))
              (*(undefined4 * PTR32 *)((int)this + 0x18),&REFG(undefined, 0x1095b14),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if ((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) {
      if (*(int *)((int)this + 0x28) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 0x28) + 0xc;
      }
      uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x8)),iVar2);
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
    }
  }
  return uVar1;
}

/* ref: FUN_00c85eb0 */
uint F_00c85eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc85eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095a44));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095a54));
    if (uVar1 == 0) {
      uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1082374));
      if (uVar1 == 0) {
        *param_3 = 0;
        return 0x80004002;
      }
    }
  }
  uVar1 = F_00c83ae0(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00c85f20 */
unsigned int F_00c85f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  gen_imp_InterlockedIncrement((LONG *)(param_1 + 0x44));
  return 0;
}

/* ref: FUN_00c85f40 */
uint F_00c85f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[0x11] == 1) {
    param_1[0x11] = 0;
  }
  else {
    uVar1 = gen_imp_InterlockedDecrement(param_1 + 0x11);
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  if ((*(byte *)(param_1 + 1) & 8) != 0) {
    ((code *)*(gen_code32 *)(*param_1 + 0x38))(param_1,0);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x10] = 0;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1[6] + 0xc) + 0x20))))((int *)(param_1[6] + 0xc),param_1);
  return 0;
}

/* ref: FUN_00c85fa0 */
uint F_00c85fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 < 0) {
    return 0x8004020d;
  }
  *(int *)((int)this + 0x14) = param_2;
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 0;
}

/* ref: FUN_00c85fd0 */
uint F_00c85fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc85fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  return 0;
}

/* ref: FUN_00c85ff0 */
uint F_00c85ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc85ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(param_1 + 0x14);
}

/* ref: FUN_00c86000 */
uint F_00c86000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc86000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint uVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 4) & 0x100) != 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x20);
    param_2[1] = *(undefined4 *)(param_1 + 0x24);
    *param_3 = *(int *)(param_1 + 0x28);
    param_3[1] = *(int *)(param_1 + 0x2c);
    return 0;
  }
  if ((*(uint *)(param_1 + 4) & 0x10) == 0) {
    return 0x80040249;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = *(undefined4 *)(param_1 + 0x24);
  uVar1 = *(uint *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x24);
  *param_3 = uVar1 + 1;
  param_3[1] = iVar2 + (uint)(0xfffffffe < uVar1);
  return 0x40270;
}

/* ref: FUN_00c86070 */
uint F_00c86070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc86070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeef;
    return 0;
  }
  if (param_3 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = *param_2;
    *(undefined4 *)(param_1 + 0x24) = param_2[1];
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff | 0x10;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = param_2[1];
  *(undefined4 *)(param_1 + 0x28) = *param_3;
  uVar1 = param_3[1];
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x110;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return 0;
}

/* ref: FUN_00c860e0 */
uint F_00c860e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc860e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 4) & 0x20) == 0) {
    return 0x80040251;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x30);
  param_2[1] = *(undefined4 *)(param_1 + 0x34);
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x34);
  *param_3 = uVar1 + *(uint *)(param_1 + 0x30);
  param_3[1] = ((int)uVar1 >> 0x1f) + iVar3 + (uint)CARRY4(uVar1,uVar2);
  return 0;
}

/* ref: FUN_00c86120 */
uint F_00c86120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc86120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffdf;
    return 0;
  }
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  *(int *)(param_1 + 0x30) = *param_2;
  *(int *)(param_1 + 0x34) = param_2[1];
  iVar1 = *param_3;
  iVar2 = *param_2;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
  *(int *)(param_1 + 0x38) = iVar1 - iVar2;
  return 0;
}

/* ref: FUN_00c86170 */
uint F_00c86170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc86170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (byte)~*(byte *)(param_1 + 4) & 1;
}

/* ref: FUN_00c86190 */
uint F_00c86190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc86190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    return 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return 0;
}

/* ref: FUN_00c861b0 */
uint F_00c861b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc861b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (byte)~*(byte *)(param_1 + 4) >> 2 & 1;
}

/* ref: FUN_00c861d0 */
uint F_00c861d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc861d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
    return 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffb;
  return 0;
}

/* ref: FUN_00c861f0 */
uint F_00c861f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc861f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (byte)~*(byte *)(param_1 + 4) >> 1 & 1;
}

/* ref: FUN_00c86210 */
uint F_00c86210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc86210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
    return 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffd;
  return 0;
}

/* ref: FUN_00c86230 */
uint F_00c86230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc86230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(param_1 + 0x10);
}

/* ref: FUN_00c86240 */
uint F_00c86240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc86240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if ((param_2 <= *(int *)(param_1 + 0x14)) && (-1 < param_2)) {
    *(int *)(param_1 + 0x10) = param_2;
    return 0;
  }
  return 0x8004020d;
}

/* ref: FUN_00c86270 */
uint F_00c86270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc86270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if ((*(byte *)(param_1 + 4) & 8) == 0) {
    *param_2 = 0;
    return 1;
  }
  uVar1 = F_00c8e6a0(*(undefined4 *)(param_1 + 0x3c));
  *param_2 = uVar1;
  return (-(uint)(uVar1 != 0) & 0x7ff8fff2) + 0x8007000e;
}

/* ref: FUN_00c862b0 */
uint F_00c862b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc862b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    F_00c8e650(*(int *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (param_2 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
    return 0;
  }
  uVar1 = F_00c8e6a0(param_2);
  *(uint *)(param_1 + 0x3c) = uVar1;
  if (uVar1 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
    return 0x8007000e;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
  return 0;
}

/* ref: FUN_00c86310 */
uint F_00c86310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc86310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  if (param_2 != 0) {
    if (param_3 == 0) {
      return 0x80004003;
    }
    uVar1 = param_2;
    if (0x2f < param_2) {
      uVar1 = 0x30;
    }
    (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_1 + 4) & 0xffffffdf;
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_1 + 8);
    (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(param_1 + 0xc);
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(param_1 + 0x14);
    (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_1 + 0x10);
    (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(param_1 + 0x20);
    (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(param_1 + 0x24);
    (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(param_1 + 0x28);
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(param_1 + 0x2c);
    (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(param_1 + 0x40);
    (*(uint *)(gen_frame + 0xc)) = uVar1;
    if ((*(uint *)(param_1 + 4) & 8) == 0) {
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(param_1 + 0x3c);
    }
    F_00c46aa0(param_3,&(*(uint *)(gen_frame + 0xc)),uVar1);
  }
  return 0;
}

/* ref: FUN_00c863c0 */
uint F_00c863c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc863c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  if (3 < param_2) {
    if (param_3 == (uint *)0x0) {
      return 0x80004003;
    }
    uVar1 = *param_3;
    uVar2 = param_2;
    if (uVar1 < param_2) {
      uVar2 = uVar1;
    }
    if (((((0x30 < uVar2) || (0x30 < uVar1)) ||
         ((0xb < uVar2 &&
          (((param_3[2] & 0xfffffe20) != 0 ||
           ((((param_3[2] & 0x10) != 0 && ((*(byte *)(param_1 + 4) & 0x10) == 0)) && (uVar2 < 0x20))
           )))))) ||
        (((0x2b < uVar2 && (param_3[10] != 0)) && (param_3[10] != *(uint *)(param_1 + 0xc))))) ||
       ((0x2f < uVar2 &&
        (((uVar1 = param_3[0xb], uVar1 != 0 && (uVar1 != *(uint *)(param_1 + 0x14))) ||
         ((0xf < uVar2 && ((int)uVar1 < (int)param_3[3])))))))) {
      return 0x80070057;
    }
    if ((0x27 < uVar2) && ((param_3[2] & 8) != 0)) {
      if (param_3[9] == 0) {
        return 0x80004003;
      }
      local_8 = F_00c8e6a0(param_3[9]);
      if (local_8 == 0) {
        return 0x8007000e;
      }
    }
    if (0x23 < uVar2) {
      *(uint *)(param_1 + 0x40) = param_3[8];
    }
    if (uVar2 < 0xc) {
      if (7 < uVar2) {
        *(uint *)(param_1 + 8) = param_3[1];
      }
    }
    else {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0x20 | param_3[2];
      *(uint *)(param_1 + 8) = param_3[1];
    }
    if (0xf < uVar2) {
      *(uint *)(param_1 + 0x10) = param_3[3];
    }
    if (0x1f < uVar2) {
      *(uint *)(param_1 + 0x28) = param_3[6];
      *(uint *)(param_1 + 0x2c) = param_3[7];
    }
    if (0x17 < uVar2) {
      *(uint *)(param_1 + 0x20) = param_3[4];
      *(uint *)(param_1 + 0x24) = param_3[5];
    }
    if ((0x27 < uVar2) && ((param_3[2] & 8) != 0)) {
      if (*(int *)(param_1 + 0x3c) != 0) {
        F_00c8e650(*(int *)(param_1 + 0x3c));
      }
      *(uint *)(param_1 + 0x3c) = local_8;
    }
    if (*(int *)(param_1 + 0x3c) == 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
      return 0;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
  }
  return 0;
}

/* ref: FUN_00c86550 */
unsigned int F_00c86550(unsigned int gen_a0)
{
  GEN_ENTER(0xc86550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[26])REFP(0x1128b60));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[18])REFP(0x1128b18));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128b00));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[4])REFP(0x1128af0));
  if (*(int *)((int)this + 0xbc) != 0) {
    gen_imp_CloseHandle(*(int *)((int)this + 0xbc));
  }
  if (*(int *)((int)this + 0xc0) != 0) {
    gen_imp_CloseHandle(*(int *)((int)this + 0xc0));
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  F_00406ad0(*(undefined4 *)((int)this + 0x14));
  F_00c8e460((undefined *)((int)this + 0x34));
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c865f0 */
uint F_00c865f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc865f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1096124));
  if (uVar1 == 0) {
    uVar1 = F_00c84cb0(param_1,param_2,param_3);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = F_00c83ae0(param_1 + 0xa0,param_3);
    return uVar1;
  }
  uVar1 = F_00c83ae0(0,param_3);
  return uVar1;
}

/* ref: FUN_00c86650 */
uint F_00c86650(unsigned int gen_a0)
{
  GEN_ENTER(0xc86650u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x14);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0xc) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x2c))))(param_1 + -0xc);
  if ((int)uVar1 < 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 8))))(*(int * PTR32 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c866c0 */
unsigned int F_00c866c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc866c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_ResetEvent(*(HANDLE *)((int)this + 0xbc));
  gen_imp_SetEvent(*(HANDLE *)((int)this + 0xc0));
  gen_imp_CloseHandle(*(HANDLE *)((int)this + 0xc0));
  *(undefined4 *)((int)this + 0xc4) = 2;
  *(undefined4 *)((int)this + 0xc0) = 0;
  return 0;
}

/* ref: FUN_00c86700 */
uint F_00c86700(unsigned int gen_a0)
{
  GEN_ENTER(0xc86700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xa4);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0xc4) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 1;
  }
  gen_imp_SetEvent(*(undefined4 *)((int)this + 0xbc));
  if (*(int *)((int)this + 0xc0) != 0) {
    gen_imp_SetEvent(*(int *)((int)this + 0xc0));
    gen_imp_CloseHandle(*(HANDLE *)((int)this + 0xc0));
  }
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c86780 */
uint F_00c86780(unsigned int gen_a0)
{
  GEN_ENTER(0xc86780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xa4);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)((int)this + 0xc4);
  while( true ) {
    if (iVar1 != 2) {
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 1;
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    (*(HANDLE *)(gen_frame + 0x4)) = *(HANDLE *)((int)this + 0xbc);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0xd0);
    DVar2 = gen_imp_WaitForMultipleObjects(2,&(*(HANDLE *)(gen_frame + 0x4)),0,0xffffffff);
    gen_imp_EnterCriticalSection(lpCriticalSection);
    if (DVar2 != 0) break;
    iVar1 = *(int *)((int)this + 0xc4);
  }
  if (DVar2 != 1) {
    if (DVar2 == 0xffffffff) {
      uVar3 = F_00c89410();
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar3;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x8000ffff;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x80040223;
}

/* ref: FUN_00c86840 */
unsigned int F_00c86840(unsigned int gen_a0)
{
  GEN_ENTER(0xc86840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  piVar1 = (int *)((int)this + 0xcc);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(int *)((int)this + 0xc4) != 0)) {
    F_00c866c0(this);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  return 0;
}

/* ref: FUN_00c86880 */
byte F_00c86880(unsigned int gen_a0)
{
  GEN_ENTER(0xc86880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  iVar1 = *(int *)((int)this + 0xcc);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  return iVar1 != 0;
}

/* ref: FUN_00c868b0 */
uint F_00c868b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc868b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0xd4) = param_1;
  *(undefined4 *)((int)this + 0xd0) = param_2;
  return param_1;
}

/* ref: FUN_00c868d0 */
uint F_00c868d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc868d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(HANDLE *)((int)this + 0xd0) != (HANDLE)0x0) && (*(int *)((int)this + 0xd4) != 0)) {
    gen_imp_ResetEvent(*(HANDLE *)((int)this + 0xd0));
    if (*(int *)((int)this + 0x98) == 0) {
      return 0x8004020a;
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x98) + 0x14))))(*(int * PTR32 *)((int)this + 0x98));
    return uVar1;
  }
  return 0x80004005;
}

/* ref: FUN_00c86920 */
uint F_00c86920(unsigned int gen_a0)
{
  GEN_ENTER(0xc86920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  gen_imp_SetEvent(*(HANDLE *)((int)this + 0xd0));
  *(undefined1 *)((int)this + 0x24) = 0;
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  if (piVar1 == (int *)0x0) {
    return 0x8004020a;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
  return uVar2;
}

/* ref: FUN_00c86950 */
uint F_00c86950(unsigned int gen_a0)
{
  GEN_ENTER(0xc86950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_SetEvent(*(HANDLE *)((int)this + 0xd0));
  if (*(int *)((int)this + 0x18) == 0) {
    return 0x80040209;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x3c))))(*(int * PTR32 *)((int)this + 0x18));
  return uVar1;
}

/* ref: FUN_00c86980 */
uint F_00c86980(unsigned int gen_a0)
{
  GEN_ENTER(0xc86980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_ResetEvent(*(HANDLE *)((int)this + 0xd0));
  if (*(int *)((int)this + 0x18) == 0) {
    return 0x80040209;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x40))))(*(int * PTR32 *)((int)this + 0x18));
  return uVar1;
}

/* ref: FUN_00c869b0 */
uint F_00c869b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc869b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (this == (undefined *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)this + 0xc;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x10))))
                    (*(int * PTR32 *)((int)this + 0x18),iVar2,param_1);
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,param_1);
    if (-1 < (int)uVar1) {
      if (*(int *)((int)this + 0x9c) != 0) {
        (*(int *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x14))))(*(int * PTR32 *)((int)this + 0x9c),&(*(undefined4 *)(gen_frame + 0x8)));
        if ((*(int *)(gen_frame + 0x10)) == 0) {
          (*(int *)(gen_frame + 0x10)) = 1;
        }
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x98) + 0x18))))(*(int * PTR32 *)((int)this + 0x98));
        if ((int)uVar1 < 0) goto LAB_00c86a90;
        uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this,*(undefined4 *)((int)this + 0x98),&(*(undefined4 *)(gen_frame + 0x8)))
        ;
        if ((int)uVar1 < 0) goto LAB_00c86a90;
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x98) + 0x14))))(*(int * PTR32 *)((int)this + 0x98));
        if ((int)uVar1 < 0) goto LAB_00c86a90;
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x10))))
                          (*(int * PTR32 *)((int)this + 0x9c),*(undefined4 *)((int)this + 0x98),
                           *(undefined4 *)((int)this + 0xd8));
        if ((int)uVar1 < 0) goto LAB_00c86a90;
      }
      uVar1 = 0;
    }
  }
LAB_00c86a90: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_00c86ab0 */
uint F_00c86ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc86ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((*(int *)((int)this + 0xd4) != 0) && (*(int *)((int)this + 0xd0) != 0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xd4) + 0xc))))
                      (*(int * PTR32 *)((int)this + 0xd4),(int)this + 0xc,0,param_1,0,
                       *(int *)((int)this + 0xd0),2);
    return uVar1;
  }
  return 0x80004005;
}

/* ref: FUN_00c86b00 */
uint F_00c86b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc86b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)((int)this + 0x98);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,*(undefined4 *)((int)this + 0x9c),piVar1);
  if (((-1 < (int)uVar2) && (*((int *)GEN_TOP((*(int *)((int)this + 0x28) + 0x14))) != 0)) && (*piVar1 != 0)) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)*piVar1 + 0x14))((int *)*piVar1);
  }
  return uVar2;
}

/* ref: FUN_00c86b40 */
uint F_00c86b40(unsigned int gen_a0)
{
  GEN_ENTER(0xc86b40u, gen_a0, 0u, 0u, 0u);
  HANDLE param_1 = (HANDLE)gen_a0;
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = gen_imp_WaitForSingleObject(param_1,0xffffffff);
  if (DVar1 == 0) {
    return 0;
  }
  if (DVar1 != 0xffffffff) {
    return 0x8000ffff;
  }
  uVar2 = F_00c89410();
  return uVar2;
}

/* ref: FUN_00c86b70 */
unsigned int F_00c86b70(unsigned int gen_a0)
{
  GEN_ENTER(0xc86b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(HANDLE *)((int)this + 0x30) != (HANDLE)0x0) {
    gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x30));
  }
  if (*(int *)((int)this + 0x58) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 8))))(*(int * PTR32 *)((int)this + 0x58));
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c86bb0 */
uint F_00c86bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc86bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095a74));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095a84));
    if ((uVar1 == 0) || (*(int *)(param_1 + 0x5c) == 0)) {
      uVar1 = F_00c83bc0(param_1,param_2,param_3);
      return uVar1;
    }
  }
  if (param_1 != 0) {
    uVar1 = F_00c83ae0(param_1 + 0xc,param_3);
    return uVar1;
  }
  uVar1 = F_00c83ae0(0,param_3);
  return uVar1;
}

/* ref: FUN_00c86c20 */
uint F_00c86c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc86c20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  LPCRITICAL_SECTION param_2 = (LPCRITICAL_SECTION)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = &(*(undefined * PTR32 *)((char *)(param_2)));
  if (param_2 == (LPCRITICAL_SECTION)0x0) {
    return 0x80004003;
  }
  if (param_3 == (undefined8 *)0x0) {
    return 0x80004003;
  }
  if (param_1 == 0xc) {
    param_2 = (LPCRITICAL_SECTION)0x0;
  }
  else {
    param_2 = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  gen_imp_EnterCriticalSection(param_2);
  *param_3 = 0;
  param_3[1] = 0;
  if (puVar2[2] != 1) {
    gen_imp_LeaveCriticalSection(param_2);
    return 0x8004020e;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    gen_imp_LeaveCriticalSection(param_2);
    return 0x8004020f;
  }
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x20)) {
    gen_imp_LeaveCriticalSection(param_2);
    return 0x80040210;
  }
  uVar1 = puVar2[1];
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)((int)param_3 + 4) = uVar1;
  uVar1 = *puVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)param_3 = uVar1;
  uVar1 = puVar2[2];
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_3 + 1) = uVar1;
  uVar1 = puVar2[3];
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)((int)param_3 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  gen_imp_LeaveCriticalSection(param_2);
  return 0;
}

/* ref: FUN_00c86d10 */
uint F_00c86d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc86d10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (param_1 == 0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  gen_imp_EnterCriticalSection(lpCriticalSection);
  param_2[1] = *(undefined4 *)(param_1 + 0x34);
  *param_2 = *(undefined4 *)(param_1 + 0x2c);
  param_2[2] = *(undefined4 *)(param_1 + 0x38);
  param_2[3] = *(undefined4 *)(param_1 + 0x3c);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c86d70 */
uint F_00c86d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc86d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  int iVar1;
  undefined4 uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  *param_2 = 0;
  while( true ) {
    if (param_1 == 0xc) {
      lpCriticalSection = (LPCRITICAL_SECTION)0x0;
    }
    else {
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
    }
    gen_imp_EnterCriticalSection(lpCriticalSection);
    if (*(int *)(param_1 + 0x44) == 0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0x80040211;
    }
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x1c);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    if (iVar1 != 0) break;
    if ((param_5 & 4) != 0) {
      return 0x8004022e;
    }
    gen_imp_WaitForSingleObject(*(HANDLE *)(param_1 + 0x24),0xffffffff);
  }
  *(undefined4 *)(iVar1 + 0x44) = 1;
  *param_2 = iVar1;
  return 0;
}

/* ref: FUN_00c86e10 */
uint F_00c86e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc86e10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 == 0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x4c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  *(int * PTR32 *)(param_1 + 0x4c) = param_2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c86e60 */
uint F_00c86e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc86e60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 == 0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x20);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c86ea0 */
unsigned int F_00c86ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xc86ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x34) != 0) {
    gen_imp_ReleaseSemaphore(*(HANDLE *)((int)this + 0x30),*(int *)((int)this + 0x34),(LPLONG)0x0);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  return 0;
}

/* ref: FUN_00c86ec0 */
uint F_00c86ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xc86ec0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 == (int *)0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 1);
  }
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_1[0x11] == 0) {
    param_1[0x11] = 1;
    if (param_1[0x12] == 0) {
      uVar1 = ((code *)*(gen_code32 *)(param_1[-3] + 0x14))(param_1 + -3);
      if ((int)uVar1 < 0) {
        param_1[0x11] = 0;
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return uVar1;
      }
      ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    param_1[0x12] = 0;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c86f50 */
uint F_00c86f50(unsigned int gen_a0)
{
  GEN_ENTER(0xc86f50u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  code * pcVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 == (int *)0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 1);
  }
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((param_1[0x11] == 0) && (param_1[0x12] == 0)) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  iVar2 = param_1[8];
  param_1[0x11] = 0;
  iVar1 = param_1[0xc];
  if (iVar1 <= iVar2) {
    pcVar3 = *(gen_code32 *)(param_1[-3] + 0x10);
    param_1[0x12] = 0;
    (*pcVar3)(param_1 + -3);
  }
  else {
    param_1[0x12] = 1;
  }
  if (param_1[10] != 0) {
    gen_imp_ReleaseSemaphore((HANDLE)param_1[9],param_1[10],(LPLONG)0x0);
    param_1[10] = 0;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  if (iVar1 <= iVar2) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  return 0;
}

/* ref: FUN_00c87020 */
unsigned int F_00c87020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc87020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  piVar2 = this;
  if (*(int *)this != 0) {
    while (iVar1 = *piVar2, iVar1 != param_1) {
      piVar2 = (int *)(iVar1 + 0x1c);
      if (*(int *)(iVar1 + 0x1c) == 0) {
        return 0;
      }
    }
    *piVar2 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return 0;
}

/* ref: FUN_00c87060 */
uint F_00c87060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc87060u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION param_3 = (LPCRITICAL_SECTION)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 * puVar4;
  
  puVar4 = (undefined8 *)param_3;
  iVar3 = param_1;
  if (param_3 == (LPCRITICAL_SECTION)0x0) {
    return 0x80004003;
  }
  if (param_1 == 0xc) {
    param_3 = (LPCRITICAL_SECTION)0x0;
  }
  else {
    param_3 = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  gen_imp_EnterCriticalSection(param_3);
  *puVar4 = 0;
  puVar4[1] = 0;
  gen_imp_GetSystemInfo((GEN_LPANY)((byte *)(gen_frame + 0x8)));
  iVar1 = param_2[2];
  if ((iVar1 == 0) || (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)) & iVar1 - 1U) != 0)) {
    gen_imp_LeaveCriticalSection(param_3);
    return 0x8004020e;
  }
  if (*(int *)(param_1 + 0x44) == 1) {
    gen_imp_LeaveCriticalSection(param_3);
    return 0x8004020f;
  }
  if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x30)) {
    gen_imp_LeaveCriticalSection(param_3);
    return 0x80040210;
  }
  param_1 = param_2[1] + param_2[3];
  if (param_1 % iVar1 != 0) {
    param_1 = param_1 + (iVar1 - param_1 % iVar1);
  }
  iVar1 = param_2[3];
  *(int *)(iVar3 + 0x34) = param_1 - iVar1;
  *(int *)((int)puVar4 + 4) = param_1 - iVar1;
  uVar2 = *param_2;
  *(undefined4 *)(iVar3 + 0x2c) = uVar2;
  *(undefined4 *)puVar4 = uVar2;
  uVar2 = param_2[2];
  *(undefined4 *)(iVar3 + 0x38) = uVar2;
  *(undefined4 *)(puVar4 + 1) = uVar2;
  uVar2 = param_2[3];
  *(undefined4 *)(iVar3 + 0x3c) = uVar2;
  *(undefined4 *)((int)puVar4 + 0xc) = uVar2;
  *(undefined4 *)(iVar3 + 0x40) = 1;
  gen_imp_LeaveCriticalSection(param_3);
  return 0;
}

/* ref: FUN_00c87180 */
unsigned int F_00c87180(void)
{
  GEN_ENTER(0xc87180u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c87190 */
unsigned int F_00c87190(unsigned int gen_a0)
{
  GEN_ENTER(0xc87190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  while (piVar1 = *(int * PTR32 *)((int)this + 0x28), piVar1 != (int *)0x0) {
    iVar2 = piVar1[7];
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + -1;
    *(int *)((int)this + 0x28) = iVar2;
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,1);
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  if (*(LPVOID *)((int)this + 0x60) != (LPVOID)0x0) {
    gen_imp_VirtualFree(*(LPVOID *)((int)this + 0x60),0,0x8000);
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  return 0;
}

/* ref: FUN_00c871e0 */
unsigned int F_00c871e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc871e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1128bf4));
  *(undefined4 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[11])REFP(0x1128bc8));
  F_00c86f50((undefined4 *)((int)this + 0xc));
  F_00c87190(this);
  if (*(HANDLE *)((int)this + 0x30) != (HANDLE)0x0) {
    gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x30));
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x58);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c87230 */
uint F_00c87230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc87230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  iVar4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return 1;
  }
  uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0x1c))(param_2);
  if (((param_3 != 0) &&
      (uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0xc))
                         (param_2,(int)*(undefined8 *)*param_1,
                          (int)((ulonglong)*(undefined8 *)*param_1 >> 0x20)), -1 < (int)uVar3)) &&
     (local_8 = 0, param_1[3] != 0)) {
    while (uVar1 = *(undefined8 *)*param_1, uVar2 = ((undefined8 *)*param_1)[1],
          uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0x14))
                            (param_2,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20),(int)uVar2,
                             (int)((ulonglong)uVar2 >> 0x20),*(undefined4 *)(param_1[4] + iVar4)),
          -1 < (int)uVar3) {
      param_3 = 0;
      if (*(int *)(iVar4 + 0x1c + param_1[4]) != 0) {
        do {
          uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0x18))(param_2,(int)*(undefined8 *)*param_1);
          if ((int)uVar3 < 0) goto LAB_00c873ed;
          param_3 = param_3 + 1;
        } while (param_3 < *(uint *)(iVar4 + 0x1c + param_1[4]));
      }
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 0x24;
      if ((uint)param_1[3] <= local_8) break;
    }
  }
LAB_00c873ed: ;
  return -(uint)(uVar3 != 0x80070002) & uVar3;
}

/* ref: FUN_00c87410 */
uint F_00c87410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc87410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined8 * param_4 = (undefined8 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined8 uVar1;
  
  F_00c83b90(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined8 *)((int)this + 0x28) = *param_4;
  uVar1 = param_4[1];
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined8 *)((int)this + 0x30) = uVar1;
  *(undefined4 *)((int)this + 0x38) = param_3;
  *(undefined4 *)((int)this + 0x48) = 1;
  return (uint)this;
}

/* ref: FUN_00c87470 */
uint F_00c87470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc87470u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  short * param_2 = (short *)(uintptr_t)gen_a1;
  short * psVar1;
  short * psVar2;
  short * psVar3;
  int iVar4;
  
  if (param_2 == (short *)0x0) {
    return 0x80004003;
  }
  psVar3 = *(short * PTR32 *)(param_1 + 0x30);
  if (psVar3 == (short *)0x0) {
    *param_2 = 0;
  }
  else {
    iVar4 = 0x80;
    psVar1 = param_2;
    do {
      psVar2 = psVar1;
      if ((iVar4 == -0x7fffff7e) || (*psVar3 == 0)) {
        if (iVar4 == 0) {
          psVar2 = psVar2 + -1;
        }
        *psVar2 = 0;
        goto LAB_00c874dd;
      }
      *psVar2 = *psVar3;
      psVar3 = psVar3 + 1;
      iVar4 = iVar4 + -1;
      psVar1 = psVar2 + 1;
    } while (iVar4 != 0);
    *psVar2 = 0;
  }
LAB_00c874dd: ;
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x34) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x34) + 4))))(*(int * PTR32 *)(param_1 + 0x34));
  }
  return 0;
}

/* ref: FUN_00c87500 */
uint F_00c87500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc87500u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  short * param_3 = (short *)(uintptr_t)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  longlong lVar2;
  uint uVar3;
  short * psVar4;
  int iVar5;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 * PTR32 *)(param_1 + 0x34) = param_2;
  if (param_2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)*param_2)(param_2,&REFG(undefined, 0x1095b54),(undefined4 *)(param_1 + 0x38));
    if (-1 < (int)uVar3) {
      piVar1 = *(int * PTR32 *)(param_1 + 0x38);
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    F_00406ad0(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (param_3 == (short *)0x0) {
LAB_00c875c0: ;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  iVar5 = 0x7fffffff;
  psVar4 = param_3;
  do {
    if (*psVar4 == 0) {
      if (iVar5 != 0) {
        lVar2 = (ulonglong)(0x80000000U - iVar5) * 2;
        uVar3 = F_004069f0(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
        *(uint *)(param_1 + 0x30) = uVar3;
        if (uVar3 == 0) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
          return 0x8007000e;
        }
        F_00c88990(uVar3,0x80000000U - iVar5,param_3);
        goto LAB_00c875c0;
      }
      break;
    }
    psVar4 = psVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x80070057;
}

/* ref: FUN_00c875f0 */
uint F_00c875f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc875f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  HRESULT HVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[-4] + 0x20))))((*(int * PTR32 *)&gen_args[1]) + -4);
  if (uVar1 == 0) {
    return 1;
  }
  gen_imp_CoInitialize((LPVOID)0x0);
  HVar2 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1085688),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x1095ae4),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < HVar2) {
    F_00c87230(uVar1,(*(int * PTR32 *)&gen_args[1]),1);
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
  }
  gen_imp_CoFreeUnusedLibraries();
  gen_imp_CoUninitialize();
  return 0;
}

/* ref: FUN_00c87660 */
uint F_00c87660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc87660u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[-4] + 0x20))))((*(int * PTR32 *)&gen_args[1]) + -4);
  if (uVar1 == 0) {
    return 1;
  }
  gen_imp_CoInitialize((LPVOID)0x0);
  uVar2 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1085688),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x1095ae4),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = F_00c87230(uVar1,(*(int * PTR32 *)&gen_args[1]),0);
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
  }
  gen_imp_CoFreeUnusedLibraries();
  gen_imp_CoUninitialize();
  return -(uint)(uVar2 != 0x80070002) & uVar2;
}

/* ref: FUN_00c876e0 */
uint F_00c876e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc876e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1128a54));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x14) = 1;
  F_00c8d760((int)this + 0x18,0);
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc)));
  ((code *)*(gen_code32 *)(iVar1 + 4))(iVar1,*(int *)((int)this + 0xc) + 0xc);
  if (param_2 == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x14))))(*(int * PTR32 *)((int)this + 0xc));
    *(uint *)((int)this + 0x10) = uVar2;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x18))))(*(int * PTR32 *)((int)this + 0xc));
    *(uint *)((int)this + 8) = uVar2;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  F_00c8d9b0((undefined *)((int)this + 0x18),param_2 + 0x18);
  return (uint)this;
}

/* ref: FUN_00c87770 */
uint F_00c87770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc87770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  if (param_2 == (uint *)0x0) {
    return 0x80004003;
  }
  uVar2 = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x14))))(*(int * PTR32 *)(param_1 + 0xc));
  if (uVar1 != *(uint *)(param_1 + 0x10)) {
    *param_2 = 0;
    return 0x80040203;
  }
  this_00 = (undefined *)F_004069f0(0x30);
  if (this_00 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00c876e0(this_00,*(undefined4 *)(param_1 + 0xc),param_1);
  }
  *param_2 = uVar1;
  if (uVar1 == 0) {
    uVar2 = 0x8007000e;
  }
  return uVar2;
}

/* ref: FUN_00c877e0 */
uint F_00c877e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc877e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  if (param_4 == (uint *)0x0) {
    if (1 < param_2) {
      return 0x80070057;
    }
  }
  else {
    *param_4 = 0;
  }
  local_8 = 0;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x14))))(*(int * PTR32 *)(param_1 + 0xc));
  if (uVar3 != *(uint *)(param_1 + 0x10)) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x14))))(*(int * PTR32 *)(param_1 + 0xc));
    *(uint *)(param_1 + 0x10) = uVar3;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x18))))(*(int * PTR32 *)(param_1 + 0xc));
    *(uint *)(param_1 + 8) = uVar3;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    do {
      iVar2 = *(int *)(param_1 + 4);
      if (*(int *)(param_1 + 8) <= iVar2) break;
      *(int *)(param_1 + 4) = iVar2 + 1;
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x1c))))(*(int * PTR32 *)(param_1 + 0xc),iVar2);
      if (uVar3 == 0) {
        return 0x80040203;
      }
      uVar4 = F_00c8d840((undefined *)(param_1 + 0x18),uVar3);
      if (uVar4 == 0) {
        piVar1 = (int *)(uVar3 + 0xc);
        *param_3 = (int)piVar1;
        ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
        local_8 = local_8 + 1;
        param_3 = param_3 + 1;
        F_00c8d8e0((undefined *)(param_1 + 0x18),uVar3);
      }
    } while (local_8 < param_2);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = local_8;
  }
  return (uint)(param_2 != local_8);
}

/* ref: FUN_00c878e0 */
uint F_00c878e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc878e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  *(int *)((int)this + 8) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1128a74));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 1;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 4))))((int *)(param_1 + 0xc));
  if (param_2 == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8));
    *(uint *)((int)this + 0xc) = uVar1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return (uint)this;
}

/* ref: FUN_00c87940 */
uint F_00c87940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc87940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  if (param_2 == (uint *)0x0) {
    return 0x80004003;
  }
  uVar2 = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x10))))(*(int * PTR32 *)(param_1 + 8));
  if (uVar1 != *(uint *)(param_1 + 0xc)) {
    *param_2 = 0;
    return 0x80040203;
  }
  this_00 = (undefined *)F_004069f0(0x14);
  if (this_00 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00c878e0(this_00,*(undefined4 *)(param_1 + 8),param_1);
  }
  *param_2 = uVar1;
  if (uVar1 == 0) {
    uVar2 = 0x8007000e;
  }
  return uVar2;
}

/* ref: FUN_00c879b0 */
uint F_00c879b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc879b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  short * param_5 = (short *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  longlong lVar1;
  undefined8 uVar2;
  short * psVar3;
  uint uVar4;
  int iVar5;
  
  F_00c83b90(this,param_1,0);
  *(undefined4 *)((int)this + 0x1c) = param_6;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0x28) = param_2;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 1;
  F_00c8e4a0((undefined *)((int)this + 0x34));
  uVar2 = REFG(double, 0x1088130);
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0xffffffff;
  *(undefined4 *)((int)this + 0x8c) = 0x7fffffff;
  *(undefined8 *)((int)this + 0x90) = uVar2;
  if (param_5 != (short *)0x0) {
    iVar5 = 0x7fffffff;
    psVar3 = param_5;
    while (*psVar3 != 0) {
      psVar3 = psVar3 + 1;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        return (uint)this;
      }
    }
    if (iVar5 != 0) {
      lVar1 = (ulonglong)(0x80000000U - iVar5) * 2;
      uVar4 = F_004069f0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
      *(uint *)((int)this + 0x14) = uVar4;
      if (uVar4 != 0) {
        F_00c88990(uVar4,0x80000000U - iVar5,param_5);
      }
    }
  }
  return (uint)this;
}

/* ref: FUN_00c87a90 */
uint F_00c87a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc87a90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x14);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0xc) != 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80040204;
  }
  if ((*((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x14))) != 0) && (*(char *)(param_1 + 0x19) == '\0')) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80040224;
  }
  uVar1 = F_00c85000((undefined *)(param_1 + -0xc),param_2,param_3);
  if ((int)uVar1 < 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x2c))))(param_1 + -0xc);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c87b30 */
uint F_00c87b30(unsigned int gen_a0)
{
  GEN_ENTER(0xc87b30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x14);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x14))) != 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80040224;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0xc) + 0x2c))))(param_1 + -0xc);
    if ((int)uVar1 < 0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar1;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 8))))(*(int * PTR32 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 1;
}

/* ref: FUN_00c87bc0 */
uint F_00c87bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc87bc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  int * piVar3;
  short * psVar4;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1c) + 0xc;
  }
  *param_2 = iVar2;
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar2 = *((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
    ((code *)*(gen_code32 *)(iVar2 + 4))(iVar2,*(int *)(param_1 + 0x1c) + 0xc);
  }
  psVar4 = *(short * PTR32 *)(param_1 + 8);
  if (psVar4 != (short *)0x0) {
    iVar2 = 0x80;
    piVar1 = param_2 + 2;
    while ((piVar3 = piVar1, iVar2 != -0x7fffff7e && (*psVar4 != 0))) {
      *(short *)piVar3 = *psVar4;
      psVar4 = psVar4 + 1;
      iVar2 = iVar2 + -1;
      piVar1 = (int *)((int)piVar3 + 2);
      if (iVar2 == 0) {
        *(short *)piVar3 = 0;
        param_2[1] = *(int *)(param_1 + 0x10);
        return 0;
      }
    }
    if (iVar2 == 0) {
      piVar3 = (int *)((int)piVar3 + -2);
    }
    *(short *)piVar3 = 0;
    param_2[1] = *(int *)(param_1 + 0x10);
    return 0;
  }
  *(undefined2 *)(param_2 + 2) = 0;
  param_2[1] = *(int *)(param_1 + 0x10);
  return 0;
}

/* ref: FUN_00c87c80 */
uint F_00c87c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc87c80u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  puVar1 = (undefined4 *)F_004069f0(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = param_1 + -3;
    *puVar1 = (*(undefined * PTR32 (*)[8])REFP(0x1128a74));
    puVar1[1] = 0;
    puVar1[4] = 1;
    ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)puVar1[2] + 0x10))((int *)puVar1[2]);
    puVar1[3] = uVar2;
  }
  *param_2 = puVar1;
  return (-(uint)(puVar1 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
}

/* ref: FUN_00c87d00 */
uint F_00c87d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc87d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_00c879b0(this,param_1,param_2,param_3,param_4,param_5,1);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  return (uint)this;
}

/* ref: FUN_00c87d40 */
uint F_00c87d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc87d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_00c879b0(this,param_1,param_2,param_3,param_4,param_5,0);
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined2 *)((int)this + 0xa0) = 0;
  F_00c48350((undefined *)((int)this + 0xa8),0,0x30);
  return (uint)this;
}

/* ref: FUN_00c87d90 */
uint F_00c87d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc87d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  HANDLE pvVar1;
  uint uVar2;
  
  F_00c879b0(this,param_1,param_2,param_3,param_4,param_5,1);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[26])REFP(0x1128b60));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[18])REFP(0x1128b18));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1128b00));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[4])REFP(0x1128af0));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xa4));
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,1,1,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0xbc) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = F_00c89410();
    if ((int)uVar2 < 0) {
      *param_4 = uVar2;
    }
    return (uint)this;
  }
  *(undefined1 *)((int)this + 0x25) = 1;
  return (uint)this;
}

/* ref: FUN_00c87e60 */
uint F_00c87e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc87e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HANDLE param_1 = (HANDLE)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  DWORD DVar1;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  uint uVar2;
  GEN_LPANY lpTargetHandle;
  BOOL BVar3;
  DWORD dwOptions;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xa4);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0xc4) == 0) {
    dwOptions = 0;
    BVar3 = 0;
    DVar1 = 2;
    lpTargetHandle = (GEN_LPANY)((int)this + 0xc0);
    hTargetProcessHandle = gen_imp_GetCurrentProcess();
    hSourceProcessHandle = gen_imp_GetCurrentProcess();
    BVar3 = gen_imp_DuplicateHandle(hSourceProcessHandle,param_1,hTargetProcessHandle,lpTargetHandle,DVar1,
                            BVar3,dwOptions);
    if (BVar3 == 0) {
      uVar2 = F_00c89410();
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar2;
    }
    *(undefined4 *)((int)this + 0xc4) = 1;
    DVar1 = gen_imp_GetCurrentThreadId();
    *(DWORD *)((int)this + 200) = DVar1;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
    if ((char)uVar2 == '\0') {
      F_00c866c0(this);
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  DVar1 = gen_imp_GetCurrentThreadId();
  if (*(DWORD *)((int)this + 200) == DVar1) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80040293;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x80040294;
}

/* ref: FUN_00c87f30 */
uint F_00c87f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc87f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x18) == 0) {
    return 0x80040209;
  }
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x18))))
            (*(undefined4 * PTR32 *)((int)this + 0x18),&REFG(undefined, 0x1096114),&(*(int * PTR32 *)(gen_frame + 0x8)));
  if (((*(int * PTR32 *)(gen_frame + 0x8)) == (int *)0x0) ||
     (uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x8)),param_1), uVar1 != 0)) {
    if ((*(int *)((int)this + 0xd4) == 0) || (*(int *)((int)this + 0xd0) == 0)) {
      uVar1 = 0x80004005;
    }
    else {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xd4) + 0xc))))
                        (*(int * PTR32 *)((int)this + 0xd4),(int)this + 0xc,0,param_1,0,
                         *(int *)((int)this + 0xd0),2);
    }
  }
  else {
    uVar1 = F_00c869b0(this,param_1);
    if (-1 < (int)uVar1) {
      if ((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) {
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      }
      return 0;
    }
  }
  if ((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) {
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
  }
  return uVar1;
}

/* ref: FUN_00c88000 */
uint F_00c88000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88000u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  bool bVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  if (param_2 == 0) {
    return 0x80004003;
  }
  if (param_1 != (int *)0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 1);
  }
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(int *)(param_2 + 0x1c) = param_1[7];
  param_1[7] = param_2;
  bVar2 = true;
  param_1[8] = param_1[8] + 1;
  if ((param_1[10] != 0) && (param_1[10] != 0)) {
    gen_imp_ReleaseSemaphore((HANDLE)param_1[9],param_1[10],(LPLONG)0x0);
    param_1[10] = 0;
  }
  if ((param_1[0x12] == 0) || (param_1[8] != param_1[0xc])) {
    bVar2 = false;
  }
  else {
    ((code *)*(gen_code32 *)(param_1[-3] + 0x10))(param_1 + -3);
    param_1[0x12] = 0;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  piVar1 = (int *)param_1[0x13];
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  if (bVar2) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  return 0;
}

/* ref: FUN_00c880c0 */
uint F_00c880c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc880c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined8 * param_4 = (undefined8 *)(uintptr_t)gen_a4;
  F_00c83b90(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined8 *)((int)this + 0x20) = *param_4;
  *(undefined8 *)((int)this + 0x28) = param_4[1];
  *(undefined4 *)((int)this + 0x30) = param_3;
  return (uint)this;
}

/* ref: FUN_00c88110 */
uint F_00c88110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc88110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined8 * param_4 = (undefined8 *)(uintptr_t)gen_a4;
  undefined8 uVar1;
  
  F_00c83b90(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined8 *)((int)this + 0x28) = *param_4;
  uVar1 = param_4[1];
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined8 *)((int)this + 0x30) = uVar1;
  *(undefined4 *)((int)this + 0x38) = param_3;
  *(undefined4 *)((int)this + 0x48) = 1;
  return (uint)this;
}

/* ref: FUN_00c88170 */
uint F_00c88170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88170u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  
  if (param_2 == (uint *)0x0) {
    return 0x80004003;
  }
  this = (undefined *)F_004069f0(0x30);
  if (this == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00c876e0(this,param_1 + -0xc,0);
  }
  *param_2 = uVar1;
  return (-(uint)(uVar1 != 0) & 0x7ff8fff2) + 0x8007000e;
}

/* ref: FUN_00c881c0 */
uint F_00c881c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc881c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[22])REFP(0x1128a98));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(int *)((int)this + 0x10) = param_5;
  *(int *)((int)this + 0x14) = param_5;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  if (param_5 < 0) {
    *param_3 = 0x8004020d;
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00c88210 */
uint F_00c88210(unsigned int gen_a0)
{
  GEN_ENTER(0xc88210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HANDLE hHandle;
  uint uVar1;
  DWORD DVar2;
  
  hHandle = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  if (hHandle == (HANDLE)0x0) {
    uVar1 = F_00c89410();
    return uVar1;
  }
  uVar1 = F_00c87e60(this,hHandle);
  if ((int)uVar1 < 0) {
    gen_imp_CloseHandle(hHandle);
    return uVar1;
  }
  DVar2 = gen_imp_WaitForSingleObject(hHandle,0xffffffff);
  if (DVar2 == 0) {
    gen_imp_CloseHandle(hHandle);
    return 0;
  }
  if (DVar2 != 0xffffffff) {
    gen_imp_CloseHandle(hHandle);
    return 0x8000ffff;
  }
  uVar1 = F_00c89410();
  gen_imp_CloseHandle(hHandle);
  return (-1 < (int)uVar1) - 1 & uVar1;
}

/* ref: FUN_00c882b0 */
uint F_00c882b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, double gen_a6)
{
  GEN_ENTER(0xc882b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  double param_7 = (double)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_00c8e500(((undefined1 *)(gen_frame + 0x0)),param_2,0);
  uVar1 = F_00c87f30(param_1,((undefined1 *)(gen_frame + 0x0)));
  if ((int)uVar1 < 0) {
    F_00c8e460(((undefined1 *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x58))(param_1,param_3,param_4,param_5,param_6);
  F_00c8e460(((undefined1 *)(gen_frame + 0x0)));
  if ((int)uVar1 < 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: FUN_00c88360 */
uint F_00c88360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc88360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  HANDLE pvVar1;
  
  F_00c83b90(this,param_1,param_2);
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = param_5;
  if (param_4 != 0) {
    pvVar1 = gen_imp_CreateSemaphoreA((GEN_LPANY)0x0,0,0x7fffffff,(LPCSTR)0x0);
    *(HANDLE *)((int)this + 0x30) = pvVar1;
    if (pvVar1 == (HANDLE)0x0) {
      *param_3 = 0x8007000e;
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_00c883f0 */
uint F_00c883f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc883f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  HANDLE pvVar1;
  
  F_00c83b90(this,param_1,param_2);
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 1;
  pvVar1 = gen_imp_CreateSemaphoreA((GEN_LPANY)0x0,0,0x7fffffff,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x30) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    *param_3 = 0x8007000e;
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1128bf4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[11])REFP(0x1128bc8));
  return (uint)this;
}

/* ref: FUN_00c88480 */
uint F_00c88480(unsigned int gen_a0)
{
  GEN_ENTER(0xc88480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  longlong lVar2;
  LPVOID pvVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar6;
  
  if (this == (undefined *)0x0) {
    (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)) = (LPCRITICAL_SECTION)0x0;
  }
  else {
    (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)) = (LPCRITICAL_SECTION)((int)this + 0x10);
  }
  lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x8));
  gen_imp_EnterCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
  if (((*(int *)((int)this + 0x38) < 1) || (*(int *)((int)this + 0x40) < 1)) ||
     (*(int *)((int)this + 0x44) < 1)) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80040212;
  }
  if (*(int *)((int)this + 0x4c) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  if (*(int *)((int)this + 0x60) != 0) {
    F_00c87190(this);
  }
  iVar1 = *(int *)((int)this + 0x40);
  if (((iVar1 < 0) || (*(int *)((int)this + 0x48) < 0)) ||
     (lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)), *(int *)((int)this + 0x38) < 0)) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x8007000e;
  }
  iVar6 = *(int *)((int)this + 0x48) + iVar1;
  if (iVar1 <= iVar6) {
    iVar1 = *(int *)((int)this + 0x44);
    iVar5 = iVar6;
    if (((1 < iVar1) && (iVar6 % iVar1 != 0)) &&
       (iVar5 = (iVar1 - iVar6 % iVar1) + iVar6, iVar5 < iVar6)) {
      gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
      return 0x8007000e;
    }
    lVar2 = (longlong)*(int *)((int)this + 0x38) * (longlong)iVar5;
    if (0x7fffffff < lVar2) {
      gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
      return 0x8007000e;
    }
    pvVar3 = gen_imp_VirtualAlloc((LPVOID)0x0,(SIZE_T)lVar2,0x1000,4);
    *(LPVOID *)((int)this + 0x60) = pvVar3;
    if (pvVar3 != (LPVOID)0x0) {
      if (*(int *)((int)this + 0x3c) < *(int *)((int)this + 0x38)) {
        do {
          this_00 = (undefined *)F_004069f0(0x48);
          if ((this_00 == (undefined *)0x0) ||
             (uVar4 = F_00c881c0(this_00,0,this,((undefined1 *)(gen_frame + 0x4)),*(int *)((int)this + 0x48) + (int)pvVar3,
                                   *(undefined4 *)((int)this + 0x40)), uVar4 == 0))
          goto LAB_00c884f4;
          *(undefined4 *)(uVar4 + 0x1c) = *(undefined4 *)((int)this + 0x28);
          *(uint *)((int)this + 0x28) = uVar4;
          *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
          *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x3c) + 1;
          pvVar3 = (LPVOID)((int)pvVar3 + iVar5);
        } while (*(int *)((int)this + 0x3c) < *(int *)((int)this + 0x38));
      }
      *(undefined4 *)((int)this + 0x4c) = 0;
      gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
      return 0;
    }
  }
LAB_00c884f4: ;
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
  return 0x8007000e;
}

/* ref: FUN_00c88630 */
uint F_00c88630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc88630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  HANDLE param_3 = (HANDLE)gen_a3;
  BOOL BVar1;
  uint uVar2;
  undefined * this_00;
  
  if ((param_2 & 0xfffffffe) != 0) {
    return 0x80070057;
  }
  if (((param_2 & 1) != 0) && (param_3 != (HANDLE)0x0)) {
    BVar1 = gen_imp_ResetEvent(param_3);
    if (BVar1 == 0) {
      uVar2 = F_00c89410();
      return uVar2;
    }
  }
  if ((param_2 == 0) && (param_3 != (HANDLE)0x0)) {
    return 0x80070057;
  }
  this_00 = (undefined *)(param_1 + -0xa0);
  if ((param_2 & 1) == 0) {
    uVar2 = F_00c86700(this_00);
    return uVar2 & (-1 < (int)uVar2) - 1;
  }
  if (param_3 == (HANDLE)0x0) {
    uVar2 = F_00c88210(this_00);
    return uVar2 & (-1 < (int)uVar2) - 1;
  }
  uVar2 = F_00c87e60(this_00,param_3);
  return uVar2 & (-1 < (int)uVar2) - 1;
}

/* ref: FUN_00c886e0 */
uint F_00c886e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc886e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_004069f0(100);
  if (this != (undefined *)0x0) {
    uVar1 = F_00c883f0(this,0,param_1,param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00c88770 */
unsigned int F_00c88770(unsigned int gen_a0)
{
  GEN_ENTER(0xc88770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00406ad0(*(undefined4 *)((int)this + 0x14));
  F_00c8e460((undefined *)((int)this + 0x34));
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c887c0 */
uint F_00c887c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc887c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + -8))))
                    (*(undefined4 * PTR32 *)(param_1 + -8),param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c887e0 */
uint F_00c887e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc887e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -8) + 4))))(*(int * PTR32 *)(param_1 + -8));
  return uVar1;
}

/* ref: FUN_00c88800 */
uint F_00c88800(unsigned int gen_a0)
{
  GEN_ENTER(0xc88800u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -8) + 8))))(*(int * PTR32 *)(param_1 + -8));
  return uVar1;
}

/* ref: FUN_00c88830 */
uint F_00c88830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc88830u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + -8))))
                    (*(undefined4 * PTR32 *)(param_1 + -8),param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c88850 */
uint F_00c88850(unsigned int gen_a0)
{
  GEN_ENTER(0xc88850u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -8) + 4))))(*(int * PTR32 *)(param_1 + -8));
  return uVar1;
}

/* ref: FUN_00c88870 */
uint F_00c88870(unsigned int gen_a0)
{
  GEN_ENTER(0xc88870u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -8) + 8))))(*(int * PTR32 *)(param_1 + -8));
  return uVar1;
}

/* ref: FUN_00c88890 */
uint F_00c88890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88890u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00c8d760(in_ecx,param_2);
  return in_ecx;
}

/* ref: FUN_00c888b0 */
uint F_00c888b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc888b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8d8e0(this,param_1);
  return uVar1;
}

/* ref: FUN_00c888c0 */
uint F_00c888c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc888c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8d9b0(this,param_1);
  return uVar1;
}

/* ref: FUN_00c888d0 */
uint F_00c888d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc888d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8d840(this,param_1);
  return uVar1;
}

/* ref: FUN_00c88930 */
uint F_00c88930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc88930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c887c0(param_1 + -4,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c88940 */
uint F_00c88940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c88800(param_1 + -0x94);
  return uVar1;
}

/* ref: FUN_00c88950 */
uint F_00c88950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c887e0(param_1 + -0x94);
  return uVar1;
}

/* ref: FUN_00c88960 */
uint F_00c88960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c88800(param_1 + -4);
  return uVar1;
}

/* ref: FUN_00c88970 */
uint F_00c88970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc88970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c887c0(param_1 + -0x94,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c88980 */
uint F_00c88980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c887e0(param_1 + -4);
  return uVar1;
}

/* ref: FUN_00c88990 */
uint F_00c88990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc88990u, gen_a0, gen_a1, gen_a2, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  short sVar1;
  short * psVar2;
  uint uVar3;
  short * psVar4;
  uint uVar5;
  
  uVar3 = 0;
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar3 = 0x80070057;
  }
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  uVar3 = 0;
  psVar4 = param_1;
  if (param_2 != 0) {
    psVar2 = param_1;
    uVar5 = param_2;
    while ((psVar4 = psVar2, (0x7ffffffe - param_2) + uVar5 != 0 &&
           (sVar1 = *((short *)GEN_TOP(((param_3 - (int)param_1) + (int)psVar4))), sVar1 != 0))) {
      *psVar4 = sVar1;
      uVar5 = uVar5 - 1;
      psVar2 = psVar4 + 1;
      if (uVar5 == 0) {
        *psVar4 = 0;
        return 0x8007007a;
      }
    }
    if (uVar5 != 0) goto LAB_00c88a00;
  }
  psVar4 = psVar4 + -1;
  uVar3 = 0x8007007a;
LAB_00c88a00: ;
  *psVar4 = 0;
  return uVar3;
}

/* ref: FUN_00c88a10 */
uint F_00c88a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc88a10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if ((param_1 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
  }
  else {
    uVar1 = F_00c83e00(param_2,param_1,param_3);
    if (-1 < (int)uVar1) {
      return uVar1;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return uVar1;
}

/* ref: FUN_00c88a70 */
uint F_00c88a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1128a54));
  ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  F_00c8df10((undefined *)((int)this + 0x18));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c88ab0 */
uint F_00c88ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0xc)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1128a74));
  ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c88ae0 */
uint F_00c88ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[22])REFP(0x1128a98));
  if (*(int *)((int)this + 0x3c) != 0) {
    F_00c8e650(*(int *)((int)this + 0x3c));
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c88b20 */
uint F_00c88b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c86550(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c88b60 */
uint F_00c88b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1128bf4));
  *(undefined4 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[11])REFP(0x1128bc8));
  F_00c86f50((undefined4 *)((int)this + 0xc));
  F_00c87190(this);
  if (*(HANDLE *)((int)this + 0x30) != (HANDLE)0x0) {
    gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x30));
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x58);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  F_00c83a60();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c88bd0 */
uint F_00c88bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xc88bd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = param_1;
  if (0 < (int)param_1) {
    uVar1 = param_1 & 0xffff | 0x80070000;
  }
  return uVar1;
}

/* ref: FUN_00c88bf0 */
uint F_00c88bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  DWORD param_1 = (DWORD)gen_a1;
  DWORD DVar1;
  
  DVar1 = gen_imp_WaitForSingleObject(*(HANDLE *)this,param_1);
  return (uint)(DVar1 == 0);
}

/* ref: FUN_00c88ca0 */
uint F_00c88ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc88ca0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  short * in_edx = (short *)(uintptr_t)gen_a1;
  int * in_edi = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = in_ecx;
  do {
    if (iVar2 == 0) {
LAB_00c88cc1: ;
      uVar1 = 0x80070057;
LAB_00c88cc6: ;
      if (in_edi != (int *)0x0) {
        if (-1 < (int)uVar1) {
          *in_edi = in_ecx - iVar2;
          return uVar1;
        }
        *in_edi = 0;
      }
      return uVar1;
    }
    if (*in_edx == 0) {
      if (iVar2 != 0) goto LAB_00c88cc6;
      goto LAB_00c88cc1;
    }
    in_edx = in_edx + 1;
    iVar2 = iVar2 + -1;
  } while( true );
}

/* ref: FUN_00c88ce0 */
uint F_00c88ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88ce0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if ((in_ecx == 0) || (param_2 < in_ecx)) {
    uVar1 = 0x80070057;
  }
  return uVar1;
}

/* ref: FUN_00c88d00 */
uint F_00c88d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc88d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * in_eax = (undefined *)(uintptr_t)gen_a0;
  char * in_ecx = (char *)(uintptr_t)gen_a1;
  char * in_edi = (char *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  uint _Count;
  
  _Count = param_4 - 1;
  uVar2 = 0;
  uVar1 = F_01051c9c(in_edi,_Count,in_ecx,in_eax);
  if (((int)uVar1 < 0) || (_Count < uVar1)) {
    in_edi[_Count] = '\0';
    uVar2 = 0x8007007a;
    uVar1 = _Count;
  }
  else if (uVar1 == _Count) {
    in_edi[_Count] = '\0';
    uVar1 = _Count;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar1;
  }
  return uVar2;
}

/* ref: FUN_00c88d50 */
uint F_00c88d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc88d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  BOOL param_1 = (BOOL)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,param_1,0,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  if (((pvVar1 == (HANDLE)0x0) && (param_2 != (int *)0x0)) && (-1 < *param_2)) {
    *param_2 = -0x7ff8fff2;
  }
  return (uint)this;
}

/* ref: FUN_00c88d90 */
uint F_00c88d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  if (((pvVar1 == (HANDLE)0x0) && (param_1 != (int *)0x0)) && (-1 < *param_1)) {
    *param_1 = -0x7ff8fff2;
  }
  return (uint)this;
}

/* ref: FUN_00c88dd0 */
unsigned int F_00c88dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xc88dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(HANDLE *)this != (HANDLE)0x0) {
    gen_imp_CloseHandle(*(HANDLE *)this);
  }
  return 0;
}

/* ref: FUN_00c88de0 */
uint F_00c88de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  if (((pvVar1 == (HANDLE)0x0) && (param_1 != (int *)0x0)) && (-1 < *param_1)) {
    *param_1 = -0x7ff8fff2;
  }
  return (uint)this;
}

/* ref: FUN_00c88e20 */
uint F_00c88e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  DWORD DVar2;
  uint dwMilliseconds;
  
  uVar1 = param_1;
  dwMilliseconds = param_1;
  if (param_1 != 0xffffffff) {
    DVar2 = gen_imp_timeGetTime();
    param_1 = DVar2;
  }
  while( true ) {
    DVar2 = gen_imp_MsgWaitForMultipleObjects(1,this,0,dwMilliseconds,0x40);
    if (DVar2 != 1) break;
    gen_imp_PeekMessageA(((undefined1 *)(gen_frame + 0x0)),(HWND)0x0,0,0,0);
    if (dwMilliseconds != 0xffffffff) {
      DVar2 = gen_imp_timeGetTime();
      if (DVar2 - param_1 < uVar1) {
        dwMilliseconds = uVar1 - (DVar2 - param_1);
      }
      else {
        dwMilliseconds = 0;
      }
    }
  }
  return (uint)(DVar2 == 0);
}

/* ref: FUN_00c88ea0 */
uint F_00c88ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateEventA(0,1,0,0);
  *(HANDLE *)((int)this + 4) = pvVar1;
  if (((pvVar1 == (HANDLE)0x0) && (param_1 != (int *)0x0)) && (-1 < *param_1)) {
    *param_1 = -0x7ff8fff2;
  }
  pvVar1 = gen_imp_CreateEventA(0,0,0,0);
  *(HANDLE *)((int)this + 8) = pvVar1;
  if (((pvVar1 == (HANDLE)0x0) && (param_1 != (int *)0x0)) && (-1 < *param_1)) {
    *param_1 = -0x7ff8fff2;
  }
  gen_imp_InitializeCriticalSection((int)this + 0x18);
  gen_imp_InitializeCriticalSection((int)this + 0x30);
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)this;
}

/* ref: FUN_00c88f20 */
unsigned int F_00c88f20(unsigned int gen_a0)
{
  GEN_ENTER(0xc88f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HANDLE hHandle;
  
  hHandle = (HANDLE)gen_imp_InterlockedExchange((LONG *)((int)this + 0x14),0);
  if (hHandle != (HANDLE)0x0) {
    gen_imp_WaitForSingleObject(hHandle,0xffffffff);
    gen_imp_CloseHandle(hHandle);
  }
  gen_imp_DeleteCriticalSection((int)this + 0x30);
  gen_imp_DeleteCriticalSection((int)this + 0x18);
  if (*(int *)((int)this + 8) != 0) {
    gen_imp_CloseHandle(*(int *)((int)this + 8));
  }
  if (*(int *)((int)this + 4) != 0) {
    gen_imp_CloseHandle(*(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00c88f80 */
uint F_00c88f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc88f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0x14) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80004005;
  }
  *(undefined4 *)((int)this + 0xc) = param_1;
  gen_imp_SetEvent(*(HANDLE *)((int)this + 4));
  gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 8),0xffffffff);
  uVar1 = *(uint *)((int)this + 0x10);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}

/* ref: FUN_00c88fe0 */
uint F_00c88fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xc88fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 4),0xffffffff);
  return *(uint *)((int)this + 0xc);
}

/* ref: FUN_00c89000 */
uint F_00c89000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  DWORD DVar1;
  
  DVar1 = gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 4),0);
  if (DVar1 != 0) {
    return 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0xc);
  }
  return 1;
}

/* ref: FUN_00c89040 */
unsigned int F_00c89040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x10) = param_1;
  gen_imp_ResetEvent(*(HANDLE *)((int)this + 4));
  gen_imp_SetEvent(*(HANDLE *)((int)this + 8));
  return 0;
}

/* ref: FUN_00c890b0 */
uint F_00c890b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc890b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  gen_imp_CoInitialize((LPVOID)0x0);
  ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  do {
    ((code *)*(gen_code32 *)*param_1)(param_1,&(*(undefined4 *)(gen_frame + 0xc)));
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)));
  } while (uVar1 == 0);
  gen_imp_CoUninitialize();
  return uVar1;
}

/* ref: FUN_00c89120 */
unsigned int F_00c89120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc89120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined1 * puVar3;
  undefined4 * puVar4;
  undefined1 * puVar5;
  undefined4 * puVar6;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)((int)param_2 + param_3))) {
    puVar3 = (undefined1 *)((int)param_2 + param_3);
    puVar5 = (undefined1 *)((int)param_1 + param_3);
    uVar1 = param_3;
    while( true ) {
      puVar5 = puVar5 + -1;
      puVar3 = puVar3 + -1;
      if (uVar1 == 0) break;
      uVar1 = uVar1 - 1;
      *puVar5 = *puVar3;
    }
    return 0;
  }
  uVar2 = param_3 & 3;
  puVar4 = param_2;
  puVar6 = param_1;
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  if (uVar2 != 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  return 0;
}

/* ref: FUN_00c89170 */
uint F_00c89170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc89170u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  uint param_7 = (uint)gen_a6;
  if ((param_7 <= param_6 + param_7) && (param_6 + param_7 <= param_5)) {
    if ((param_7 <= param_3 + param_7) && (param_3 + param_7 <= param_2)) {
      F_00c89120(param_1 + param_3,param_4 + param_6,param_7);
      return 0;
    }
  }
  return 0x80070057;
}

/* ref: FUN_00c891c0 */
uint F_00c891c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc891c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;
  BSTR pOVar1;
  
  pOVar1 = gen_imp_SysAllocString(param_2);
  *param_1 = pOVar1;
  return (-(uint)(pOVar1 != (BSTR)0x0) & 0x7ff8fff2) + 0x8007000e;
}

/* ref: FUN_00c891f0 */
uint F_00c891f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc891f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if ((BSTR)*param_1 == (BSTR)0x0) {
    return 1;
  }
  gen_imp_SysFreeString((BSTR)*param_1);
  return 0;
}

/* ref: FUN_00c89410 */
uint F_00c89410(void)
{
  GEN_ENTER(0xc89410u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = gen_imp_GetLastError();
  if (uVar1 == 0) {
    uVar1 = 0x80004005;
  }
  else if (0 < (int)uVar1) {
    return uVar1 & 0xffff | 0x80070000;
  }
  return uVar1;
}

/* ref: FUN_00c89430 */
uint F_00c89430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89430u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  *param_1 = (int)param_2;
  return (uint)param_2;
}

/* ref: FUN_00c89460 */
uint F_00c89460(void)
{
  GEN_ENTER(0xc89460u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  BOOL BVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  ((byte *)(gen_frame + 0x4))[0] = 0x94;
  ((byte *)(gen_frame + 0x4))[1] = 0;
  ((byte *)(gen_frame + 0x4))[2] = 0;
  ((byte *)(gen_frame + 0x4))[3] = 0;
  BVar1 = gen_imp_GetVersionExA((GEN_LPANY)((byte *)(gen_frame + 0x4)));
  uVar2 = 0;
  if (BVar1 != 0) {
    if ((5 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4))) ||
       ((uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)), (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) == 5 && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) != 0)))) {
      F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
      return CONCAT31((int3)SUB43((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)),1),1);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00c894d0 */
uint F_00c894d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc894d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  HMODULE hModule;
  FARPROC pFVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x80004005;
  hModule = gen_imp_GetModuleHandleA("ole32.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = gen_imp_GetProcAddress(hModule,"CoInitializeEx");
    if (pFVar1 != (FARPROC)0x0) {
      uVar3 = ((code *)pFVar1)(0,4);
    }
  }
  uVar2 = ((code *)*(gen_code32 *)*param_1)(param_1);
  if (-1 < (int)uVar3) {
    gen_imp_CoUninitialize();
  }
  return uVar2;
}

/* ref: FUN_00c89520 */
uint F_00c89520(unsigned int gen_a0)
{
  GEN_ENTER(0xc89520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  HANDLE pvVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0x14) == 0) {
    pvVar1 = gen_imp_CreateThread((GEN_LPANY)0x0,0,((code *)REFP(0xc894d0)),this,0,(LPDWORD)&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    *(HANDLE *)((int)this + 0x14) = pvVar1;
    if (pvVar1 != (HANDLE)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 1;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c89580 */
unsigned int F_00c89580(unsigned int gen_a0)
{
  GEN_ENTER(0xc89580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(HANDLE *)((int)this + 8) != (HANDLE)0x0) {
    gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 8),0xffffffff);
    gen_imp_CloseHandle(*(undefined4 *)((int)this + 8));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)((int)this + 0xc);
  while ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0) {
    uVar1 = F_00c8d7f0(&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    F_00406ad0(uVar1);
  }
  F_00c8d780((undefined *)((int)this + 0xc));
  if (*(int *)((int)this + 0x3c) != 0) {
    gen_imp_CloseHandle(*(int *)((int)this + 0x3c));
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x24));
  F_00c8df10((undefined *)((int)this + 0xc));
  return 0;
}

/* ref: FUN_00c89650 */
uint F_00c89650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 * puVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x24);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  puVar1 = (undefined8 *)F_00c8df70((undefined *)((int)this + 0xc));
  while (puVar1 == (undefined8 *)0x0) {
    *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 1;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 0x3c),0xffffffff);
    gen_imp_EnterCriticalSection(lpCriticalSection);
    puVar1 = (undefined8 *)F_00c8df70((undefined *)((int)this + 0xc));
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  uVar2 = F_00406ad0(puVar1);
  return uVar2;
}

/* ref: FUN_00c896d0 */
uint F_00c896d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc896d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPWSTR param_2 = (LPWSTR)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = F_00c89890(((CHAR *)(gen_frame + 0xc)),0xc,&REFG(undefined, 0x1128c30),param_1);
  if ((int)uVar1 < 0) {
    *param_2 = L'\0';
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar1;
  }
  uVar1 = gen_imp_MultiByteToWideChar(0,0,((CHAR *)(gen_frame + 0xc)),-1,param_2,0xc);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_00c89740 */
uint F_00c89740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89740u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  LPVOID pvVar3;
  int iVar4;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  if ((*(int *)&gen_args[0]) == 0) {
    uVar2 = 0x80070057;
  }
  else {
    uVar2 = F_00c88ca0(50000,(*(int *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[1]));
    if (-1 < (int)uVar2) {
      iVar4 = (int)(*(undefined4 * PTR32 *)&gen_args[1]) * 2;
      goto LAB_00c8978a;
    }
  }
  iVar4 = 0;
LAB_00c8978a: ;
  if (-1 < (int)uVar2) {
    pvVar3 = gen_imp_CoTaskMemAlloc(iVar4 + 2U);
    *puVar1 = pvVar3;
    if (pvVar3 == (LPVOID)0x0) {
      return 0x8007000e;
    }
    F_00c46aa0(pvVar3,(*(int *)&gen_args[0]),iVar4 + 2U);
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00c897c0 */
uint F_00c897c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc897c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  UINT param_1 = (UINT)gen_a0;
  UINT param_2 = (UINT)gen_a1;
  GEN_LPANY param_3 = (GEN_LPANY)gen_a2;
  DWORD_PTR param_4 = (DWORD_PTR)gen_a3;
  uint param_5 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  BOOL BVar1;
  uint MVar2;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  if (REFG(char, 0x15d7651) == '\0') {
    ((byte *)(gen_frame + 0x4))[0] = 0x94;
    ((byte *)(gen_frame + 0x4))[1] = 0;
    ((byte *)(gen_frame + 0x4))[2] = 0;
    ((byte *)(gen_frame + 0x4))[3] = 0;
    BVar1 = gen_imp_GetVersionExA((GEN_LPANY)((byte *)(gen_frame + 0x4)));
    if ((BVar1 == 0) || (((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) < 6 && (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) != 5 || ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) == 0))))))
    {
      REFG(char, 0x15d7650) = '\0';
    }
    else {
      REFG(char, 0x15d7650) = '\x01';
    }
    REFG(char, 0x15d7651) = '\x01';
  }
  if (REFG(char, 0x15d7650) != '\0') {
    param_5 = param_5 | 0x100;
  }
  MVar2 = gen_imp_timeSetEvent(param_1,param_2,param_3,param_4,param_5);
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return MVar2;
}

/* ref: FUN_00c89870 */
uint F_00c89870(unsigned int gen_a0)
{
  GEN_ENTER(0xc89870u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c8d7f0(param_1);
  return uVar1;
}

/* ref: FUN_00c89890 */
uint F_00c89890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc89890u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  uint _Count;
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
  }
  if (-1 < (int)uVar1) {
    _Count = param_2 - 1;
    uVar1 = 0;
    uVar2 = F_01051c9c(param_1,_Count,param_3,((undefined *)&gen_args[3]));
    if (((int)uVar2 < 0) || (_Count < uVar2)) {
      param_1[_Count] = '\0';
      uVar1 = 0x8007007a;
    }
    else if (uVar2 == _Count) {
      param_1[_Count] = '\0';
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00c898f0 */
uint F_00c898f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc898f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = (*(uint *)&gen_args[1]) >> 1;
  (*(uint *)&gen_args[1]) = 0;
  if (((*(int *)&gen_args[0]) == 0) || (0x7fffffff < uVar1)) {
    uVar1 = 0x80070057;
  }
  else {
    uVar1 = F_00c88ca0(uVar1,(*(int *)&gen_args[0]),&(*(uint *)&gen_args[1]));
  }
  if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
    if (-1 < (int)uVar1) {
      *(*(int * PTR32 *)&gen_args[2]) = (*(uint *)&gen_args[1]) * 2;
      return uVar1;
    }
    *(*(int * PTR32 *)&gen_args[2]) = 0;
  }
  return uVar1;
}

/* ref: FUN_00c89940 */
uint F_00c89940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_1,param_2);
  return (uint)(uVar1 == 0);
}

/* ref: CRefTime::CRefTime */
undefined * F_00c89960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  long param_1 = (long)gen_a1;
  *(longlong *)this = (longlong)param_1 * 10000;
  return this;
}

/* ref: FUN_00c89990 */
uint F_00c89990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c899b0 */
uint F_00c899b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc899b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = *(uint *)this;
  *(uint *)this = *(int *)this + uVar2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1[1] + (uint)CARRY4(uVar1,uVar2);
  return (uint)this;
}

/* ref: FUN_00c899f0 */
uint F_00c899f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc899f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00c89a10 */
uint F_00c89a10(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc89a10u, gen_a0, 0u, 0u, 0u);
  longlong * param_1 = (longlong *)(uintptr_t)gen_a0;
  double param_2 = (double)gen_a1;
  *param_1 = (longlong)(param_2 * *(double *)&REFG(double, 0x1087ef0));
  return (uint)param_1;
}

/* ref: COARefTime::operator= */
undefined * F_00c89a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  double * param_1 = (double *)(uintptr_t)gen_a1;
  *(longlong *)this = (longlong)(*param_1 * *(double *)&REFG(double, 0x1087ef0));
  return this;
}

/* ref: FUN_00c89a80 */
uint F_00c89a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c89ab0 */
uint F_00c89ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x1c);
  *param_1 = *(undefined4 *)((int)this + 0x18);
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00c89b20 */
uint F_00c89b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc89b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  bool bVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x60);
  if (piVar1 != (int *)0x0) {
    if (param_3 != 0) {
      if (*(int *)((int)this + 100) == 0) {
        return 0;
      }
      bVar2 = CARRY4(param_1,*(uint *)((int)this + 0x68));
      param_1 = param_1 + *(uint *)((int)this + 0x68);
      param_2 = param_2 + *(int *)((int)this + 0x6c) + (uint)bVar2;
    }
    (*(undefined8 *)(gen_frame + 0x4)) = 0;
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,&(*(undefined8 *)(gen_frame + 0x4)));
    if ((param_2 <= (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4)) + 4))) && ((param_2 < (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4)) + 4)) || (param_1 <= (uint)(*(undefined8 *)(gen_frame + 0x4)))))) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c89ba0 */
uint F_00c89ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c89bc0 */
uint F_00c89bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc89bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  FARPROC pFVar2;
  uint uVar3;
  DWORD DVar4;
  
  if ((*(int * PTR32 *)&gen_args[4]) == (int *)0x0) {
    return 0x80004003;
  }
  *(*(int * PTR32 *)&gen_args[4]) = 0;
  if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
    return 0x8002802b;
  }
  if (*(*(int * PTR32 *)&gen_args[0]) == 0) {
    uVar1 = F_00c83a90();
    if ((uVar1 == 0) || (pFVar2 = gen_imp_GetProcAddress(uVar1,"LoadRegTypeLib"), pFVar2 == (FARPROC)0x0)) {
LAB_00c89c37: ;
      DVar4 = gen_imp_GetLastError();
      return DVar4 | 0x80070000;
    }
    uVar3 = ((code *)pFVar2)(&REFG(undefined, 0x1084cc8),1,0,(*(undefined4 *)&gen_args[3]),&(*(int * PTR32 *)&gen_args[2]));
    if ((int)uVar3 < 0) {
      pFVar2 = gen_imp_GetProcAddress(uVar1,"LoadTypeLib");
      if (pFVar2 == (FARPROC)0x0) goto LAB_00c89c37;
      uVar1 = ((code *)pFVar2)((*(undefined * PTR32 (*)[3])REFP(0x1128c40)),&(*(int * PTR32 *)&gen_args[2]));
      if ((int)uVar1 < 0) {
        return uVar1;
      }
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x18))))((*(int * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[0]));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]));
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  *(*(int * PTR32 *)&gen_args[4]) = *(*(int * PTR32 *)&gen_args[0]);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 4))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))));
  return 0;
}

/* ref: FUN_00c89ca0 */
uint F_00c89ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc89ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  FARPROC pFVar2;
  uint uVar3;
  DWORD DVar4;
  int * piVar5;
  
  piVar5 = (int *)0x0;
  if (*param_1 == 0) {
    uVar1 = F_00c83a90();
    if ((uVar1 == 0) || (pFVar2 = gen_imp_GetProcAddress(uVar1,"LoadRegTypeLib"), pFVar2 == (FARPROC)0x0)) {
LAB_00c89d35: ;
      DVar4 = gen_imp_GetLastError();
      uVar1 = DVar4 | 0x80070000;
    }
    else {
      uVar3 = ((code *)pFVar2)(&REFG(undefined, 0x1084cc8),1,0,param_5,&(*(int * PTR32 *)(gen_frame + 0x8)));
      if ((int)uVar3 < 0) {
        pFVar2 = gen_imp_GetProcAddress(uVar1,"LoadTypeLib");
        if (pFVar2 == (FARPROC)0x0) goto LAB_00c89d35;
        uVar1 = ((code *)pFVar2)((*(undefined * PTR32 (*)[3])REFP(0x1128c40)),&(*(int * PTR32 *)(gen_frame + 0x8)));
        if ((int)uVar1 < 0) {
          return uVar1;
        }
      }
      uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x8)),param_2,param_1);
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      if (-1 < (int)uVar1) goto LAB_00c89d26;
    }
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  else {
LAB_00c89d26: ;
    piVar5 = (int *)*param_1;
    ((code *)*(gen_code32 *)(*piVar5 + 4))(piVar5);
  }
  uVar1 = ((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5,param_3,param_4,param_6);
  ((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5);
  return uVar1;
}

/* ref: FUN_00c89d70 */
uint F_00c89d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc89d70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084ce8));
  if (uVar1 != 0) {
    uVar1 = F_00c83ae0(param_1 + -4,param_3);
    return uVar1;
  }
  uVar1 = F_00c83bc0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c89dc0 */
uint F_00c89dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c89de0 */
uint F_00c89de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc89de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c89bc0(param_1 + 0x10,&REFG(undefined, 0x1084ce8),param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c89e10 */
uint F_00c89e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc89e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00c89ca0(param_1 + 0x10,&REFG(undefined, 0x1084ce8),param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00c89e40 */
uint F_00c89e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc89e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  uint uVar1;
  
  uVar1 = F_00c80fd0(&REFG(undefined, 0x1156560),(*(int * PTR32 *)&gen_args[2]));
  if (uVar1 == 0) {
    return 0x80020001;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]),0,(*(undefined4 *)&gen_args[3]),&(*(int * PTR32 *)&gen_args[2]));
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x2c))))
                      ((*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]));
  }
  return uVar1;
}

/* ref: FUN_00c89ec0 */
uint F_00c89ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc89ec0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084cf8));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d08));
    if (uVar1 == 0) {
      uVar1 = F_00c83bc0(param_1,param_2,param_3);
      return uVar1;
    }
  }
  uVar1 = F_00c83ae0(param_1 + -4,param_3);
  return uVar1;
}

/* ref: FUN_00c89f20 */
uint F_00c89f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89f20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c89f40 */
uint F_00c89f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc89f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c89bc0(param_1 + 0x10,&REFG(undefined, 0x1084cf8),param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c89f70 */
uint F_00c89f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc89f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00c89ca0(param_1 + 0x10,&REFG(undefined, 0x1084cf8),param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00c89fa0 */
uint F_00c89fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc89fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  uint uVar1;
  
  uVar1 = F_00c80fd0(&REFG(undefined, 0x1156560),(*(int * PTR32 *)&gen_args[2]));
  if (uVar1 == 0) {
    return 0x80020001;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]),0,(*(undefined4 *)&gen_args[3]),&(*(int * PTR32 *)&gen_args[2]));
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x2c))))
                      ((*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]));
  }
  return uVar1;
}

/* ref: FUN_00c8a020 */
uint F_00c8a020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8a020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c83b90((undefined *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00c8a050 */
uint F_00c8a050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8a050u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d18));
  if (uVar1 != 0) {
    uVar1 = F_00c83ae0(param_1 + -4,param_3);
    return uVar1;
  }
  uVar1 = F_00c83bc0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8a0a0 */
uint F_00c8a0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8a0a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c8a0c0 */
uint F_00c8a0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc8a0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c89bc0(param_1 + 0x10,&REFG(undefined, 0x1084d18),param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c8a0f0 */
uint F_00c8a0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc8a0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint uVar1;
  
  uVar1 = F_00c89ca0(param_1 + 0x10,&REFG(undefined, 0x1084d18),param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00c8a120 */
uint F_00c8a120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xc8a120u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[10];
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
  uint uVar1;
  
  uVar1 = F_00c80fd0(&REFG(undefined, 0x1156560),(*(int * PTR32 *)&gen_args[3]));
  if (uVar1 == 0) {
    return 0x80020001;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]),0,(*(undefined4 *)&gen_args[4]),&(*(int * PTR32 *)&gen_args[3]));
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 0x2c))))
                      ((*(int * PTR32 *)&gen_args[3]),(*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[9]));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 8))))((*(int * PTR32 *)&gen_args[3]));
  }
  return uVar1;
}

/* ref: FUN_00c8a1a0 */
uint F_00c8a1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8a1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_3 = 0;
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095ac4));
  if (uVar1 != 0) {
    uVar1 = F_00c83ae0(param_1 + -8,param_3);
    return uVar1;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d18));
  if (uVar1 != 0) {
    uVar1 = F_00c83ae0(param_1 + -4,param_3);
    return uVar1;
  }
  uVar1 = F_00c83bc0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8a220 */
uint F_00c8a220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8a220u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  *(*(int * PTR32 *)&gen_args[1]) = 0;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1084d18),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    if (-1 < (int)uVar2) {
      *piVar1 = (int)(*(undefined * PTR32 *)(gen_frame + 0x8));
      return 0;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a290 */
uint F_00c8a290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8a290u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  *(*(int * PTR32 *)&gen_args[1]) = 0;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1095ac4),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    if (-1 < (int)uVar2) {
      *piVar1 = (int)(*(undefined * PTR32 *)(gen_frame + 0x8));
      return 0;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a300 */
uint F_00c8a300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8a300u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a380 */
uint F_00c8a380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8a380u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a400 */
uint F_00c8a400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8a400u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x14))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a480 */
uint F_00c8a480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8a480u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a500 */
uint F_00c8a500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8a500u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x24))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a580 */
uint F_00c8a580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8a580u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a600 */
uint F_00c8a600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8a600u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a680 */
uint F_00c8a680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc8a680u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a710 */
uint F_00c8a710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc8a710u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x38))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a790 */
uint F_00c8a790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8a790u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x3c))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a810 */
uint F_00c8a810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8a810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * param_1 = (code *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x18))))(*(int * PTR32 *)((int)this + 0x18),&(*(int * PTR32 *)(gen_frame + 0x8)));
  if ((int)uVar1 < 0) {
    return 0x80004001;
  }
  uVar1 = ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x8)))((*(int * PTR32 *)(gen_frame + 0x8)),&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x4)));
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
  if ((int)uVar1 < 0) {
    return 0x80004001;
  }
  uVar1 = (*param_1)((*(int * PTR32 *)(gen_frame + 0x4)),param_2);
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_00c8a890 */
uint F_00c8a890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8a890u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x40))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a910 */
uint F_00c8a910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8a910u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[6])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x48))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a990 */
uint F_00c8a990(unsigned int gen_a0, unsigned int gen_a1, double gen_a2)
{
  GEN_ENTER(0xc8a990u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  int * piVar1;
  uint uVar2;
  
  if (GEN_ISNAN((*(double *)&gen_args[2])) != (GEN_ISNAN((*(double *)&gen_args[2])) || (*(double *)&gen_args[2]) == 0.0)) {
    return 0x80070057;
  }
  uVar2 = F_00c8a290((*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[1]));
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x44))))((*(int * PTR32 *)&gen_args[1]));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return uVar2;
}

/* ref: FUN_00c8a9f0 */
uint F_00c8a9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8a9f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[5])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[5])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1084d18),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8aa70 */
uint F_00c8aa70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8aa70u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[5])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[5])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1084d18),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x24))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8ab70 */
uint F_00c8ab70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8ab70u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[5])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[5])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1084d18),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8ac70 */
uint F_00c8ac70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8ac70u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[5])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[5])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1084d18),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x30))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8ad70 */
uint F_00c8ad70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8ad70u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[5])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[5])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1084d18),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x3c))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8adf0 */
uint F_00c8adf0(unsigned int gen_a0, unsigned int gen_a1, double gen_a2)
{
  GEN_ENTER(0xc8adf0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  int * piVar1;
  uint uVar2;
  
  if (GEN_ISNAN((*(double *)&gen_args[2])) != (GEN_ISNAN((*(double *)&gen_args[2])) || (*(double *)&gen_args[2]) == 0.0)) {
    return 0x80070057;
  }
  uVar2 = F_00c8a220((*(int * PTR32 *)&gen_args[1]) + -1,&(*(int * PTR32 *)&gen_args[1]));
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x38))))((*(int * PTR32 *)&gen_args[1]));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return uVar2;
}

/* ref: FUN_00c8ae50 */
uint F_00c8ae50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8ae50u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[5])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[5])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1084d18),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x40))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8aed0 */
uint F_00c8aed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8aed0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[5])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[5])),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1084d18),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x44))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8af50 */
uint F_00c8af50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8af50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x1c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0xc)));
  if ((int)uVar1 < 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  *(undefined4 *)((int)this + 0x38) = (*(undefined4 *)(gen_frame + 0x14));
  *(undefined4 *)((int)this + 0x3c) = (*(undefined4 *)(gen_frame + 0x18));
  *(undefined4 *)((int)this + 0x40) = (*(undefined4 *)(gen_frame + 0xc));
  *(undefined4 *)((int)this + 0x44) = (*(undefined4 *)(gen_frame + 0x10));
  *(undefined4 *)((int)this + 0x48) = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8afc0 */
uint F_00c8afc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc8afc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  *(undefined4 *)((int)this + 0x38) = param_1;
  *(undefined4 *)((int)this + 0x3c) = param_2;
  *(undefined4 *)((int)this + 0x40) = param_3;
  *(undefined4 *)((int)this + 0x44) = param_4;
  *(undefined4 *)((int)this + 0x48) = 0;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return 0;
}

/* ref: FUN_00c8b000 */
uint F_00c8b000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8b000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x1c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0x48) == 1) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80004005;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))
                    (this,param_1,0,*(undefined4 *)((int)this + 0x38),
                     *(undefined4 *)((int)this + 0x3c),&REFG(undefined8, 0x1086498));
  if ((param_2 != 0) && (-1 < (int)uVar1)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))
                      (this,param_2,0,*(undefined4 *)((int)this + 0x40),
                       *(undefined4 *)((int)this + 0x44),&REFG(undefined8, 0x1086498));
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}

/* ref: FUN_00c8b080 */
uint F_00c8b080(unsigned int gen_a0)
{
  GEN_ENTER(0xc8b080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return 0;
}

/* ref: FUN_00c8b0b0 */
uint F_00c8b0b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8b0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (*(int *)((int)this + 0x48) == 1) {
    return 0x80004005;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this,&(*(undefined4 *)(gen_frame + 0x4)));
  if (-1 < (int)uVar1) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x40) = (*(undefined4 *)(gen_frame + 0x4));
    *(undefined4 *)((int)this + 0x44) = (*(undefined4 *)(gen_frame + 0x8));
    *(undefined4 *)((int)this + 0x38) = (*(undefined4 *)(gen_frame + 0x4));
    *(undefined4 *)((int)this + 0x3c) = (*(undefined4 *)(gen_frame + 0x8));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  }
  return uVar1;
}

/* ref: FUN_00c8b110 */
uint F_00c8b110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc8b110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined8 uVar1;
  
  F_00c83b90((undefined *)((int)this + 4),param_1,param_2);
  uVar1 = REFG(double, 0x1088130);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x34) = param_4;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0x3fffffff;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x24);
  *(undefined8 *)((int)this + 0x28) = uVar1;
  *(undefined4 *)((int)this + 0x30) = 0x37;
  return (uint)this;
}

/* ref: FUN_00c8b170 */
uint F_00c8b170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8b170u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095ac4));
  if (uVar1 == 0) {
    uVar1 = F_00c83bc0(param_1,param_2,param_3);
    return uVar1;
  }
  if (param_3 == 0) {
    return 0x80004003;
  }
  uVar1 = F_00c83ae0(param_1 + -4,param_3);
  return uVar1;
}

/* ref: FUN_00c8b1c0 */
uint F_00c8b1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined8, 0x1086498));
  return (uint)(uVar1 == 0);
}

/* ref: FUN_00c8b1f0 */
uint F_00c8b1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined8 *)0x0) {
    return 0x80004003;
  }
  *param_2 = REFG(undefined8, 0x1086498);
  param_2[1] = REFG(undefined8, 0x10864a0);
  return 0;
}

/* ref: FUN_00c8b230 */
uint F_00c8b230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b230u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined8, 0x1086498));
  return (-(uint)(uVar1 != 0) & 0x7ff8ffa9) + 0x80070057;
}

/* ref: FUN_00c8b270 */
uint F_00c8b270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b270u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined8, 0x1086498));
  return (uint)(uVar1 == 0);
}

/* ref: FUN_00c8b2a0 */
uint F_00c8b2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined8 *)0x0) {
    return 0x80004003;
  }
  *param_2 = REFG(undefined8, 0x1086498);
  param_2[1] = REFG(undefined8, 0x10864a0);
  return 0;
}

/* ref: FUN_00c8b2e0 */
uint F_00c8b2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b2e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x34);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 0x14);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8b320 */
uint F_00c8b320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b320u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x34);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = *(undefined4 *)(param_1 + 0x24);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8b370 */
uint F_00c8b370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b370u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x30);
  return 0;
}

/* ref: FUN_00c8b3a0 */
uint F_00c8b3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b3a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  if (param_2 == (uint *)0x0) {
    return 0x80004003;
  }
  return (uint)((~*(uint *)(param_1 + 0x30) & *param_2) != 0);
}

/* ref: FUN_00c8b3d0 */
uint F_00c8b3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc8b3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  uint uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if ((param_3 != 0) && (uVar1 = F_00c80fd0(param_3,&REFG(undefined8, 0x1086498)), uVar1 == 0)) {
    return 0x80070057;
  }
  if ((param_6 != 0) && (uVar1 = F_00c80fd0(param_6,&REFG(undefined8, 0x1086498)), uVar1 == 0)) {
    return 0x80070057;
  }
  *param_2 = param_4;
  param_2[1] = param_5;
  return 0;
}

/* ref: FUN_00c8b440 */
uint F_00c8b440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc8b440u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint * puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_5 & 3;
  uVar4 = param_3 & 3;
  if (param_5 != 0) {
    if (param_4 == (uint *)0x0) {
      return 0x80004003;
    }
    if (uVar5 != param_5) {
      return 0x80070057;
    }
  }
  if (param_3 != 0) {
    if (param_2 == (uint *)0x0) {
      return 0x80004003;
    }
    if ((uVar4 != 1) && (uVar4 != 2)) {
      return 0x80070057;
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[0xd];
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (uVar4 == 1) {
    param_1[6] = *param_2;
    param_1[7] = param_2[1];
  }
  else if (uVar4 == 2) {
    uVar2 = *param_2;
    puVar1 = (uint *)(param_1 + 6);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + uVar2;
    param_1[7] = param_1[7] + param_2[1] + (uint)CARRY4(uVar3,uVar2);
  }
  if (uVar5 == 1) {
    param_1[8] = *param_4;
    param_1[9] = param_4[1];
  }
  else if (uVar5 == 3) {
    uVar3 = *param_4;
    uVar2 = param_4[1];
    param_1[8] = param_1[6] + *param_4;
    param_1[9] = param_1[7] + uVar2 + (uint)CARRY4(param_1[6],uVar3);
  }
  else if (uVar5 == 2) {
    uVar2 = *param_4;
    puVar1 = (uint *)(param_1 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + uVar2;
    param_1[9] = param_1[9] + param_4[1] + (uint)CARRY4(uVar3,uVar2);
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x54))(param_1);
  }
  if (uVar4 != 0) {
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_1);
  }
  return uVar3;
}

/* ref: FUN_00c8b540 */
uint F_00c8b540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8b540u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x18);
    param_2[1] = *(undefined4 *)(param_1 + 0x1c);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x20);
    param_3[1] = *(undefined4 *)(param_1 + 0x24);
  }
  return 0;
}

/* ref: FUN_00c8b570 */
uint F_00c8b570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8b570u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x34);
    gen_imp_EnterCriticalSection(lpCriticalSection);
    *param_3 = *(undefined4 *)(param_1 + 0x10);
    param_3[1] = *(undefined4 *)(param_1 + 0x14);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00c8b5c0 */
uint F_00c8b5c0(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc8b5c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  double param_2 = (double)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[0xd];
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(double *)(param_1 + 10) = param_2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x58))(param_1);
  return uVar1;
}

/* ref: FUN_00c8b600 */
uint F_00c8b600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b600u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (undefined8 *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x34);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = *(undefined8 *)(param_1 + 0x28);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8b640 */
uint F_00c8b640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return 0;
}

/* ref: FUN_00c8b670 */
uint F_00c8b670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b670u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  double * param_2 = (double *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (double *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = (double)*(longlong *)(param_1 + 0x18) / *(double *)&REFG(double, 0x1087ef0);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8b6b0 */
uint F_00c8b6b0(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc8b6b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  double param_2 = (double)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  *(longlong *)(param_1 + 8) = (longlong)(param_2 * *(double *)&REFG(double, 0x1087ef0));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x48))(param_1);
  return uVar1;
}

/* ref: FUN_00c8b6f0 */
uint F_00c8b6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b6f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  double * param_2 = (double *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (double *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = (double)*(longlong *)(param_1 + 0x28) / *(double *)&REFG(double, 0x1087ef0);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8b730 */
uint F_00c8b730(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc8b730u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  double param_2 = (double)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  *(longlong *)(param_1 + 10) = (longlong)(param_2 * *(double *)&REFG(double, 0x1087ef0));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x4c))(param_1);
  return uVar1;
}

/* ref: FUN_00c8b770 */
uint F_00c8b770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(param_2 == 0) * 2 + 0x80004001;
}

/* ref: FUN_00c8b7a0 */
uint F_00c8b7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b7a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (undefined8 *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = *(undefined8 *)(param_1 + 0x30);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8b7e0 */
uint F_00c8b7e0(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc8b7e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  double param_2 = (double)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  *(double *)(param_1 + 0xc) = param_2;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_1);
  return uVar1;
}

/* ref: FUN_00c8b820 */
uint F_00c8b820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b820u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 0xffffffff;
  return 0;
}

/* ref: FUN_00c8b840 */
uint F_00c8b840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 0xffffffff;
  return 0;
}

/* ref: FUN_00c8b860 */
uint F_00c8b860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8b860u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d28));
  if (uVar1 != 0) {
    uVar1 = F_00c83ae0(param_1 + -4,param_3);
    return uVar1;
  }
  uVar1 = F_00c83bc0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8b8b0 */
uint F_00c8b8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c8b8d0 */
uint F_00c8b8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8b8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c89bc0(param_1 + 0x10,&REFG(undefined, 0x1084d28),param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c8b900 */
uint F_00c8b900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc8b900u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00c89ca0(param_1 + 0x10,&REFG(undefined, 0x1084d28),param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00c8b930 */
uint F_00c8b930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc8b930u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  uint uVar1;
  
  uVar1 = F_00c80fd0(&REFG(undefined, 0x1156560),(*(int * PTR32 *)&gen_args[2]));
  if (uVar1 == 0) {
    return 0x80020001;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]),0,(*(undefined4 *)&gen_args[3]),&(*(int * PTR32 *)&gen_args[2]));
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x2c))))
                      ((*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]));
  }
  return uVar1;
}

/* ref: FUN_00c8b9b0 */
uint F_00c8b9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8b9b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d38));
  if (uVar1 != 0) {
    uVar1 = F_00c83ae0(param_1 + -4,param_3);
    return uVar1;
  }
  uVar1 = F_00c83bc0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8ba00 */
uint F_00c8ba00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ba00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c8ba20 */
uint F_00c8ba20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8ba20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c89bc0(param_1 + 0x10,&REFG(undefined, 0x1084d38),param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c8ba50 */
uint F_00c8ba50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc8ba50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00c89ca0(param_1 + 0x10,&REFG(undefined, 0x1084d38),param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00c8ba80 */
uint F_00c8ba80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc8ba80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  uint uVar1;
  
  uVar1 = F_00c80fd0(&REFG(undefined, 0x1156560),(*(int * PTR32 *)&gen_args[2]));
  if (uVar1 == 0) {
    return 0x80020001;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]),0,(*(undefined4 *)&gen_args[3]),&(*(int * PTR32 *)&gen_args[2]));
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x2c))))
                      ((*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]));
  }
  return uVar1;
}

/* ref: FUN_00c8bb00 */
uint F_00c8bb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8bb00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d48));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d58));
    if (uVar1 == 0) {
      uVar1 = F_00c83bc0(param_1,param_2,param_3);
      return uVar1;
    }
  }
  uVar1 = F_00c83ae0(param_1 + -4,param_3);
  return uVar1;
}

/* ref: FUN_00c8bb60 */
uint F_00c8bb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8bb60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c8bb80 */
uint F_00c8bb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8bb80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c89bc0(param_1 + 0x10,&REFG(undefined, 0x1084d48),param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c8bbb0 */
uint F_00c8bbb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc8bbb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00c89ca0(param_1 + 0x10,&REFG(undefined, 0x1084d48),param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00c8bbe0 */
uint F_00c8bbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc8bbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  uint uVar1;
  
  uVar1 = F_00c80fd0(&REFG(undefined, 0x1156560),(*(int * PTR32 *)&gen_args[2]));
  if (uVar1 == 0) {
    return 0x80020001;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]),0,(*(undefined4 *)&gen_args[3]),&(*(int * PTR32 *)&gen_args[2]));
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x2c))))
                      ((*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]));
  }
  return uVar1;
}

/* ref: FUN_00c8bc60 */
uint F_00c8bc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8bc60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  ushort uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  ushort * puVar5;
  undefined2 * puVar6;
  int * piVar7;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(uint *)((int)this + 8) = param_1;
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
  }
  else {
    uVar4 = F_004069f0(-(uint)((int)((ulonglong)param_1 * 0x10 >> 0x20) != 0) |
                         (uint)((ulonglong)param_1 * 0x10));
    *(uint *)this = uVar4;
    if (uVar4 == 0) {
      *(undefined4 *)((int)this + 8) = 0;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0x8007000e;
        return (uint)this;
      }
    }
    else {
      param_1 = 0;
      if (*(int *)((int)this + 8) != 0) {
        piVar7 = (int *)(param_2 + 8);
        do {
          iVar3 = piVar7[-2];
          puVar6 = ((undefined2 *)GEN_TOP(((int)piVar7 + *(int *)this + (-8 - param_2))));
          *puVar6 = (short)iVar3;
          switch((unsigned int)(uintptr_t)((short)iVar3)) {
          case 2: ;
            puVar6[4] = (short)*piVar7;
            break;
          case 3: ;
            *(int *)(puVar6 + 4) = *piVar7;
            break;
          case 4: ;
            *(int *)(puVar6 + 4) = *piVar7;
            break;
          case 5: ;
          case 7: ;
            *(undefined8 *)(puVar6 + 4) = *(undefined8 *)piVar7;
            break;
          case 6: ;
            *(int *)(puVar6 + 4) = *piVar7;
            *(int *)(puVar6 + 6) = piVar7[1];
            break;
          case 8: ;
            if (*piVar7 == 0) {
              *(undefined4 *)(puVar6 + 4) = 0;
            }
            else {
              uVar1 = *(ushort *)(*piVar7 + -2);
              puVar5 = (ushort *)F_004069f0((uVar1 + 1) * 2);
              if (puVar5 == (ushort *)0x0) {
                *(uint *)((int)this + 8) = param_1;
                if (param_3 != (undefined4 *)0x0) {
                  *param_3 = 0x8007000e;
                }
              }
              else {
                *puVar5 = uVar1;
                *(ushort * PTR32 *)(puVar6 + 4) = puVar5 + 1;
                F_00c46aa0(puVar5 + 1,*piVar7,(uint)uVar1 * 2);
              }
            }
            break;
          case 9: ;
          case 0xd: ;
            piVar2 = (int *)*piVar7;
            *(int * PTR32 *)(puVar6 + 4) = piVar2;
            ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
            break;
          case 10: ;
            *(int *)(puVar6 + 4) = *piVar7;
            break;
          case 0xb: ;
            puVar6[4] = (short)*piVar7;
            break;
          case 0x11: ;
            *(char *)(puVar6 + 4) = (char)*piVar7;
          }
          param_1 = param_1 + 1;
          piVar7 = piVar7 + 4;
        } while (param_1 < *(uint *)((int)this + 8));
        return (uint)this;
      }
    }
  }
  return (uint)this;
}

/* ref: FUN_00c8be30 */
uint F_00c8be30(unsigned int gen_a0)
{
  GEN_ENTER(0xc8be30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * psVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(int *)((int)this + 8) != 0) {
    iVar4 = 0;
    do {
      psVar1 = (short *)(iVar4 + *(int *)this);
      sVar2 = *psVar1;
      if (sVar2 == 8) {
        if (*(int *)(psVar1 + 4) != 0) {
          F_00406ad0(*(int *)(psVar1 + 4) + -2);
        }
      }
      else if ((sVar2 == 9) || (sVar2 == 0xd)) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(psVar1 + 4) + 8))))(*(int * PTR32 *)(psVar1 + 4));
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar3 < *(uint *)((int)this + 8));
  }
  uVar3 = F_00406ad0(*(undefined4 *)this);
  return uVar3;
}

/* ref: FUN_00c8be90 */
uint F_00c8be90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8be90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d68));
  if (uVar1 == 0) {
    uVar1 = F_00c83bc0(param_1,param_2,param_3);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = F_00c83ae0(param_1 + 0xc,param_3);
    return uVar1;
  }
  uVar1 = F_00c83ae0(0,param_3);
  return uVar1;
}

/* ref: FUN_00c8bef0 */
uint F_00c8bef0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8bef0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (piVar1 == (int *)0x0) {
    return 0x80040234;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,param_1 + -0xc);
  if (-1 < (int)uVar2) {
    *(undefined4 *)(param_1 + 4) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00c8bf30 */
uint F_00c8bf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8bf30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0x80004001;
}

/* ref: FUN_00c8bf40 */
uint F_00c8bf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8bf40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 4) != 0) {
    return 0x80004004;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  return 0;
}

/* ref: FUN_00c8bf70 */
uint F_00c8bf70(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc8bf70u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  lVar2 = (longlong)((*(double *)&gen_args[1]) * *(double *)&REFG(double, 0x1087ef0));
  iVar1 = *(int *)((*(int *)&gen_args[0]) + 4);
  if (*(int *)(iVar1 + 0x60) != 0) {
    lVar3 = lVar2;
    if (*(int *)((*(int *)&gen_args[0]) + 0x24) != 0) {
      if (*(int *)(iVar1 + 100) == 0) goto LAB_00c8bfe7;
      lVar3 = lVar2 + *(longlong *)(iVar1 + 0x68);
    }
    iVar5 = (int)((ulonglong)lVar3 >> 0x20);
    (*(double *)&gen_args[1]) = 0.0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x60) + 0xc))))(*(int * PTR32 *)(iVar1 + 0x60),&(*(double *)&gen_args[1]));
    if ((iVar5 <= (*(undefined4 *)((char *)&(*(double *)&gen_args[1]) + 4))) && ((iVar5 < (*(undefined4 *)((char *)&(*(double *)&gen_args[1]) + 4)) || ((uint)lVar3 <= (*(undefined4 *)((char *)&(*(double *)&gen_args[1]) + 0)))))) {
      return 0x80040233;
    }
  }
LAB_00c8bfe7: ;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 4) + 0xc))))(*(int * PTR32 *)((*(int *)&gen_args[0]) + 4),(*(int *)&gen_args[0]) + -0xc);
  if (-1 < (int)uVar4) {
    *(longlong *)((*(int *)&gen_args[0]) + 0xc) = lVar2;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 4) + 8))))(*(int * PTR32 *)((*(int *)&gen_args[0]) + 4),(*(int *)&gen_args[0]) + -0xc);
  }
  return uVar4;
}

/* ref: FUN_00c8c020 */
uint F_00c8c020(unsigned int gen_a0)
{
  GEN_ENTER(0xc8c020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  HMODULE hModule;
  FARPROC pFVar1;
  uint uVar2;
  DWORD DVar3;
  int * piVar4;
  
  if (*(int *)((int)this + 0x10) == 0) {
    return 0x80040234;
  }
  piVar4 = (int *)0x0;
  (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)((int)this + 0x20);
  if (*(int *)((int)this + 0x48) == 0) {
    hModule = (HMODULE)F_00c83a90();
    if ((hModule == (HMODULE)0x0) ||
       (pFVar1 = gen_imp_GetProcAddress(hModule,"LoadRegTypeLib"), pFVar1 == (FARPROC)0x0)) {
LAB_00c8c0ce: ;
      DVar3 = gen_imp_GetLastError();
      uVar2 = DVar3 | 0x80070000;
    }
    else {
      uVar2 = ((code *)pFVar1)(&REFG(undefined, 0x1084cc8),1,0,0,&(*(int * PTR32 *)(gen_frame + 0x38)));
      if ((int)uVar2 < 0) {
        pFVar1 = gen_imp_GetProcAddress(hModule,"LoadTypeLib");
        if (pFVar1 == (FARPROC)0x0) goto LAB_00c8c0ce;
        uVar2 = ((code *)pFVar1)((*(undefined * PTR32 (*)[3])REFP(0x1128c40)),&(*(int * PTR32 *)(gen_frame + 0x38)));
        if ((int)uVar2 < 0) {
          return uVar2;
        }
      }
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x30)),(int)this + 0x48);
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 8))((*(int * PTR32 *)(gen_frame + 0x38)));
      if (-1 < (int)uVar2) goto LAB_00c8c0c1;
    }
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  else {
LAB_00c8c0c1: ;
    piVar4 = *(int * PTR32 *)((int)this + 0x48);
    ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x14))))
                    (*(undefined4 * PTR32 *)((int)this + 0x14),*(undefined4 *)((int)this + 0x20),&(*(int * PTR32 *)(gen_frame + 0x34)));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x2c))
                      (piVar4,(*(int * PTR32 *)(gen_frame + 0x34)),*(undefined4 *)((int)this + 0x24),
                       (uint)*(ushort *)((int)this + 0x28),(int)this + 0x34,
                       *(undefined4 *)((int)this + 0x2c),((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x2c)));
    *(uint *)((int)this + 0x4c) = uVar2;
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 8))((*(int * PTR32 *)(gen_frame + 0x34)));
    ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10),this);
    *(undefined4 *)((int)this + 0x10) = 0;
    return uVar2;
  }
  ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
  return uVar2;
}

/* ref: FUN_00c8c160 */
uint F_00c8c160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c83b90((undefined *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00c8c190 */
undefined * F_00c8c190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc8c190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  F_00c83b90((undefined *)((int)this + 8),param_1,param_2);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(int *)((int)this + 0x18) = param_4;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x1128cd0));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[18])REFP(0x1128c88));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[4])REFP(0x1128c74));
  if (param_4 == 0) {
    *param_3 = 0x80004003;
  }
  return this;
}

/* ref: FUN_00c8c1e0 */
uint F_00c8c1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_1,param_2,0);
  if (-1 < (int)uVar1) {
    return 0;
  }
  uVar1 = F_00c8a810(param_1,((code *)REFP(0xc8ceb0)),param_2);
  return uVar1;
}

/* ref: FUN_00c8c220 */
uint F_00c8c220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c8a810(param_1,((code *)REFP(0xc8ce90)),param_2);
  return uVar1;
}

/* ref: FUN_00c8c240 */
uint F_00c8c240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c8a810(param_1,((code *)REFP(0xc8ce80)),param_2);
  return uVar1;
}

/* ref: FUN_00c8c260 */
uint F_00c8c260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c8a810(param_1,((code *)REFP(0xc8cea0)),param_2);
  return uVar1;
}

/* ref: FUN_00c8c280 */
uint F_00c8c280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc8c280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  F_00c83b90((undefined *)((int)this + 8),param_1,param_2);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x1128cd0));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[18])REFP(0x1128c88));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[4])REFP(0x1128c74));
  *(int *)((int)this + 0x18) = param_4;
  if (param_4 == 0) {
    *param_3 = 0x80004003;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x1128d80));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[18])REFP(0x1128d38));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[4])REFP(0x1128d24));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 1;
  return (uint)this;
}

/* ref: FUN_00c8c300 */
uint F_00c8c300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc8c300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined8 uVar1;
  
  F_00c83b90((undefined *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar1 = REFG(double, 0x1088130);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x38) = param_4;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0x7fffffff;
  *(undefined8 *)((int)this + 0x30) = uVar1;
  return (uint)this;
}

/* ref: FUN_00c8c370 */
uint F_00c8c370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c83b90((undefined *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00c8c3a0 */
uint F_00c8c3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c83b90((undefined *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00c8c3d0 */
uint F_00c8c3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, double gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0xc8c3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[15];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  gen_args[7] = gen_a6;
  gen_args[8] = gen_a7;
  gen_args[9] = gen_a8;
  gen_args[10] = gen_a9;
  gen_args[11] = gen_a10;
  gen_args[12] = gen_a11;
  gen_args[13] = gen_a12;
  gen_args[14] = gen_a13;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  double dVar2;
  uint uVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  DWORD DVar5;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)&gen_args[0]);
  F_00c83b90((*(int * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[2]));
  (*(int * PTR32 *)&gen_args[0])[4] = (int)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[0])[5] = (int)(*(int * PTR32 *)&gen_args[4]);
  (*(int * PTR32 *)&gen_args[0])[8] = (*(int *)&gen_args[7]);
  (*(int * PTR32 *)&gen_args[0])[9] = (*(int *)&gen_args[8]);
  *((short *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 10))) = (short)(*(undefined4 *)&gen_args[9]);
  (*(int * PTR32 *)&gen_args[0])[0xb] = (*(int *)&gen_args[12]);
  (*(int * PTR32 *)&gen_args[0])[0xc] = (*(int *)&gen_args[14]);
  *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[4])REFP(0x1128df0));
  (*(int * PTR32 *)&gen_args[0])[3] = (int)(*(undefined * PTR32 (*)[7])REFP(0x1128dd4));
  F_00c8bc60((*(int * PTR32 *)&gen_args[0]) + 0xd,(*(undefined4 *)&gen_args[10]),(*(undefined4 *)&gen_args[11]),(*(uint * PTR32 *)&gen_args[3]));
  dVar2 = (*(double *)&gen_args[5]) * *(double *)&REFG(double, 0x1087ef0);
  piVar1 = (*(int * PTR32 *)&gen_args[0]) + 0x12;
  *piVar1 = 0;
  (*(int * PTR32 *)&gen_args[0])[0x13] = -0x7fffbffc;
  *((longlong *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 6))) = (longlong)dVar2;
  uVar3 = (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5])))))(((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5])),(*(int * PTR32 *)&gen_args[0])[8],&(*(int * PTR32 *)(gen_frame + 0x8)));
  if ((int)uVar3 < 0) goto LAB_00c8c54f;
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
  (*(int * PTR32 *)&gen_args[4]) = (int *)0x0;
  if (*piVar1 == 0) {
    hModule = (HMODULE)F_00c83a90();
    if ((hModule == (HMODULE)0x0) ||
       (pFVar4 = gen_imp_GetProcAddress(hModule,"LoadRegTypeLib"), pFVar4 == (FARPROC)0x0)) {
LAB_00c8c55f: ;
      DVar5 = gen_imp_GetLastError();
      uVar3 = DVar5 | 0x80070000;
    }
    else {
      uVar3 = ((code *)pFVar4)(&REFG(undefined, 0x1084cc8),1,0,0,&(*(int * PTR32 *)&gen_args[2]));
      if ((int)uVar3 < 0) {
        pFVar4 = gen_imp_GetProcAddress(hModule,"LoadTypeLib");
        if (pFVar4 == (FARPROC)0x0) goto LAB_00c8c55f;
        uVar3 = ((code *)pFVar4)((*(undefined * PTR32 (*)[3])REFP(0x1128c40)),&(*(int * PTR32 *)&gen_args[2]));
        if ((int)uVar3 < 0) goto LAB_00c8c56e;
      }
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x18))))((*(int * PTR32 *)&gen_args[2]),(*(int *)&gen_args[7]),piVar1);
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]));
      if (-1 < (int)uVar3) goto LAB_00c8c50e;
    }
    if ((int)uVar3 < 0) {
LAB_00c8c56e: ;
      *(*(uint * PTR32 *)&gen_args[3]) = uVar3;
      return (uint)(*(int * PTR32 *)&gen_args[0]);
    }
  }
  else {
LAB_00c8c50e: ;
    (*(int * PTR32 *)&gen_args[4]) = (int *)*piVar1;
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[4]) + 4))))((*(int * PTR32 *)&gen_args[4]));
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[4]) + 8))))((*(int * PTR32 *)&gen_args[4]));
  if ((short)(*(undefined4 *)&gen_args[9]) == 4) {
    (*(int * PTR32 *)&gen_args[0])[0x10] = 1;
    (*(int * PTR32 *)&gen_args[0])[0x11] = -3;
    (*(int * PTR32 *)&gen_args[0])[0xe] = (int)((*(int * PTR32 *)&gen_args[0]) + 0x11);
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    return (uint)(*(int * PTR32 *)&gen_args[0]);
  }
LAB_00c8c54f: ;
  *(*(uint * PTR32 *)&gen_args[3]) = uVar3;
  return (uint)(*(int * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c8c580 */
uint F_00c8c580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8c580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  F_00c8d760((int)this + 0x20,0);
  F_00c8d760((int)this + 0x38,0);
  F_00c88d50((undefined *)((int)this + 0x50),1,param_1);
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  return (uint)this;
}

/* ref: FUN_00c8c5d0 */
unsigned int F_00c8c5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8c5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)((int)this + 0x20);
  while ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0) {
    uVar2 = F_00c8d7f0(&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar2 + 0xc) + 8))))(*(int *)(uVar2 + 0xc),uVar2 + 0xc);
  }
  F_00c8d780((undefined *)((int)this + 0x20));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)((int)this + 0x38);
  while ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0) {
    uVar2 = F_00c8d7f0(&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar2 + 0xc) + 8))))(*(int *)(uVar2 + 0xc),uVar2 + 0xc);
  }
  F_00c8d780((undefined *)((int)this + 0x38));
  piVar1 = *(int * PTR32 *)((int)this + 0x60);
  if (piVar1 != (int *)0x0) {
    if (*(int *)((int)this + 0x54) != 0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,*(int *)((int)this + 0x54));
      *(undefined4 *)((int)this + 0x54) = 0;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x60) + 8))))(*(int * PTR32 *)((int)this + 0x60));
  }
  F_00c88dd0((undefined *)((int)this + 0x50));
  F_00c8df10((undefined *)((int)this + 0x38));
  F_00c8df10((undefined *)((int)this + 0x20));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

/* ref: FUN_00c8c690 */
uint F_00c8c690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, double gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xc8c690u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  double param_4 = (double)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x8)) = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  (*(uint *)(gen_frame + 0x8)) = 0;
  *param_2 = 0;
  uVar1 = F_004069f0(0x50);
  if (uVar1 != 0) {
    uVar2 = F_00c8c3d0(uVar1,param_1,0,&(*(uint *)(gen_frame + 0x8)),param_3,param_4,param_5,param_6,param_7,param_8,
                         param_9,param_10,param_11,param_12);
    uVar1 = (*(uint *)(gen_frame + 0x8));
    if (uVar2 != 0) {
      *param_2 = uVar2;
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar1;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x8007000e;
}

/* ref: FUN_00c8c740 */
unsigned int F_00c8c740(unsigned int gen_a0)
{
  GEN_ENTER(0xc8c740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)((int)this + 0x60) != 0) {
    gen_imp_ResetEvent(*(HANDLE *)((int)this + 0x50));
    (*(int *)(gen_frame + 0x8)) = 0;
    (*(uint *)(gen_frame + 0x4)) = 0;
    uVar1 = (*(uint *)(gen_frame + 0x4));
    if (*(int *)((int)this + 0x20) != 0) {
      uVar1 = F_00c8d830(*(int *)((int)this + 0x20));
      (*(int *)(gen_frame + 0x8)) = *(int *)(uVar1 + 0x1c);
      uVar1 = *(uint *)(uVar1 + 0x18);
    }
    iVar5 = (*(int *)(gen_frame + 0x8));
    if ((*(int *)((int)this + 100) != 0) && (iVar5 = (*(int *)(gen_frame + 0x8)), *(int *)((int)this + 0x38) != 0)) {
      uVar2 = F_00c8d830(*(int *)((int)this + 0x38));
      uVar4 = *(uint *)(uVar2 + 0x18) + *(uint *)((int)this + 0x68);
      iVar3 = *(int *)(uVar2 + 0x1c) + *(int *)((int)this + 0x6c) +
              (uint)CARRY4(*(uint *)(uVar2 + 0x18),*(uint *)((int)this + 0x68));
      if ((uVar1 == 0 && (*(int *)(gen_frame + 0x8)) == 0) ||
         ((iVar5 = (*(int *)(gen_frame + 0x8)), iVar3 <= (*(int *)(gen_frame + 0x8)) &&
          ((iVar3 < (*(int *)(gen_frame + 0x8)) || (iVar5 = (*(int *)(gen_frame + 0x8)), uVar4 < uVar1)))))) {
        iVar5 = iVar3;
        uVar1 = uVar4;
      }
    }
    if (((-1 < iVar5) && ((0 < iVar5 || (uVar1 != 0)))) &&
       ((uVar1 != *(uint *)((int)this + 0x58) || (iVar5 != *(int *)((int)this + 0x5c))))) {
      if (*(int *)((int)this + 0x54) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x60) + 0x18))))
                  (*(int * PTR32 *)((int)this + 0x60),*(int *)((int)this + 0x54));
        gen_imp_ResetEvent(*(HANDLE *)((int)this + 0x50));
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x60) + 0x10))))
                (*(int * PTR32 *)((int)this + 0x60),uVar1,iVar5,0,0,*(undefined4 *)((int)this + 0x50),
                 (int)this + 0x54);
      *(uint *)((int)this + 0x58) = uVar1;
      *(int *)((int)this + 0x5c) = iVar5;
    }
  }
  return 0;
}

/* ref: FUN_00c8c820 */
uint F_00c8c820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *(undefined4 *)((int)this + 0x6c) = param_2;
  *(undefined4 *)((int)this + 0x68) = param_1;
  *(undefined4 *)((int)this + 100) = 1;
  F_00c8c740(this);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

/* ref: FUN_00c8c860 */
uint F_00c8c860(unsigned int gen_a0)
{
  GEN_ENTER(0xc8c860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *(undefined4 *)((int)this + 100) = 0;
  F_00c8c740(this);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

/* ref: FUN_00c8c890 */
uint F_00c8c890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  DWORD param_2 = (DWORD)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x18)) = lpCriticalSection;
  do {
    gen_imp_EnterCriticalSection(lpCriticalSection);
    uVar4 = 0;
    if (*(int *)((int)this + 0x20) != 0) {
      uVar4 = F_00c8d830(*(int *)((int)this + 0x20));
    }
    if ((*(int *)((int)this + 100) != 0) && (*(int *)((int)this + 0x38) != 0)) {
      uVar1 = F_00c8d830(*(int *)((int)this + 0x38));
      if (uVar4 != 0) {
        iVar3 = *(int *)(uVar1 + 0x1c) + *(int *)((int)this + 0x6c) +
                (uint)CARRY4(*(uint *)(uVar1 + 0x18),*(uint *)((int)this + 0x68));
        if ((*(int *)(uVar4 + 0x1c) < iVar3) ||
           ((*(int *)(uVar4 + 0x1c) <= iVar3 &&
            (*(uint *)(uVar4 + 0x18) <= *(uint *)(uVar1 + 0x18) + *(uint *)((int)this + 0x68)))))
        goto LAB_00c8c8f0;
      }
      uVar4 = uVar1;
    }
LAB_00c8c8f0: ;
    if (uVar4 != 0) {
      uVar1 = *(uint *)(uVar4 + 0x18);
      iVar3 = *(int *)(uVar4 + 0x1c);
      (*(uint *)(gen_frame + 0x10)) = uVar1;
      lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x18));
      if (*(int *)((int)this + 0x60) != 0) {
        if (*(int *)(uVar4 + 0x30) != 0) {
          if (*(int *)((int)this + 100) == 0) goto LAB_00c8c942;
          (*(uint *)(gen_frame + 0x10)) = uVar1 + *(uint *)((int)this + 0x68);
          iVar3 = iVar3 + *(int *)((int)this + 0x6c) +
                  (uint)CARRY4(uVar1,*(uint *)((int)this + 0x68));
        }
        (*(undefined8 *)(gen_frame + 0x8)) = 0;
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x60) + 0xc))))(*(int * PTR32 *)((int)this + 0x60),&(*(undefined8 *)(gen_frame + 0x8)));
        if ((iVar3 < (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4))) ||
           ((lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x18)), iVar3 <= (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4)) && ((*(uint *)(gen_frame + 0x10)) <= (uint)(*(undefined8 *)(gen_frame + 0x8))))))
        {
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar4 + 0xc) + 4))))(*(int *)(uVar4 + 0xc),uVar4 + 0xc);
          *param_1 = uVar4;
          gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x18)));
          return 0;
        }
      }
    }
LAB_00c8c942: ;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    DVar2 = gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 0x50),param_2);
    if (DVar2 != 0) {
      return 0x80004004;
    }
  } while( true );
}

/* ref: FUN_00c8c9a0 */
uint F_00c8c9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8c9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x18)) = (LPCRITICAL_SECTION)((int)this + 8);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  uVar1 = 0;
  if (*(int *)((int)this + 0x38) != 0) {
    uVar1 = F_00c8d830(*(int *)((int)this + 0x38));
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    uVar3 = F_00c8d830(*(int *)((int)this + 0x20));
    if (uVar3 != 0) {
      (*(uint *)(gen_frame + 0x10)) = *(uint *)(uVar3 + 0x18);
      (*(int *)(gen_frame + 0x14)) = *(int *)(uVar3 + 0x1c);
      if (*(int *)((int)this + 0x60) != 0) {
        (*(undefined8 *)(gen_frame + 0x8)) = 0;
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x60) + 0xc))))(*(int * PTR32 *)((int)this + 0x60),&(*(undefined8 *)(gen_frame + 0x8)));
        if (((*(int *)(gen_frame + 0x14)) <= (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4))) &&
           (((*(int *)(gen_frame + 0x14)) < (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4)) || ((*(uint *)(gen_frame + 0x10)) <= (uint)(*(undefined8 *)(gen_frame + 0x8)))))) {
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar3 + 0xc) + 4))))(uVar3 + 0xc);
          *param_3 = uVar3;
          gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x18)));
          return 0;
        }
      }
    }
  }
  if ((uVar1 != 0) &&
     ((*(int *)(uVar1 + 0x1c) <= param_2 &&
      ((*(int *)(uVar1 + 0x1c) < param_2 || (*(uint *)(uVar1 + 0x18) <= param_1)))))) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar1 + 0xc) + 4))))(*(int *)(uVar1 + 0xc),uVar1 + 0xc);
    *param_3 = uVar1;
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x18)));
    return 0;
  }
  if ((*(int *)((int)this + 100) != 0) && (uVar3 != 0)) {
    iVar2 = *(int *)((int)this + 0x6c) + param_2 + (uint)CARRY4(*(uint *)((int)this + 0x68),param_1)
    ;
    if ((*(int *)(uVar3 + 0x1c) <= iVar2) &&
       ((*(int *)(uVar3 + 0x1c) < iVar2 ||
        (*(uint *)(uVar3 + 0x18) <= *(uint *)((int)this + 0x68) + param_1)))) {
      *param_3 = uVar3;
      gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x18)));
      return 0;
    }
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x18)));
  return 0x80040216;
}

/* ref: FUN_00c8cae0 */
uint F_00c8cae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8cae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c83b90((undefined *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00c8cb10 */
uint F_00c8cb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8cb10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c83b90((undefined *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00c8cb40 */
uint F_00c8cb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8cb40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c83b90((undefined *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00c8cb70 */
uint F_00c8cb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 4))))(*(int *)(param_1 + 0xc),param_1 + 0xc);
  this_00 = (int *)((int)this + 0x38);
  if (*(int *)(param_1 + 0x30) == 0) {
    this_00 = (int *)((int)this + 0x20);
  }
  (*(int *)(gen_frame + 0x8)) = *this_00;
  if (*this_00 == 0) {
LAB_00c8cbed: ;
    F_00c8d8e0(this_00,param_1);
  }
  else {
    do {
      uVar1 = F_00c8d830((*(int *)(gen_frame + 0x8)));
      if ((*(int *)(param_1 + 0x1c) < *(int *)(uVar1 + 0x1c)) ||
         ((*(int *)(param_1 + 0x1c) <= *(int *)(uVar1 + 0x1c) &&
          (*(uint *)(param_1 + 0x18) < *(uint *)(uVar1 + 0x18))))) {
        if ((*(int *)(gen_frame + 0x8)) == 0) goto LAB_00c8cbed;
        F_00c8dc50(this_00,(*(int *)(gen_frame + 0x8)),param_1);
        goto LAB_00c8cc00;
      }
      F_00c8d7f0(&(*(int *)(gen_frame + 0x8)));
    } while ((*(int *)(gen_frame + 0x8)) != 0);
    F_00c8d8e0(this_00,param_1);
  }
LAB_00c8cc00: ;
  F_00c8c740(this);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

/* ref: FUN_00c8cc20 */
uint F_00c8cc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  this_00 = (int *)((int)this + 0x38);
  if (*(int *)(param_1 + 0x30) == 0) {
    this_00 = (int *)((int)this + 0x20);
  }
  (*(int *)(gen_frame + 0x8)) = *this_00;
  if (*this_00 == 0) {
LAB_00c8cc83: ;
    uVar1 = 0x80040216;
  }
  else {
    do {
      uVar1 = F_00c8d830((*(int *)(gen_frame + 0x8)));
      if (uVar1 == param_1) {
        if ((*(int *)(gen_frame + 0x8)) == 0) goto LAB_00c8cc83;
        F_00c8d870(this_00,(*(int *)(gen_frame + 0x8)));
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))))(*(int *)(param_1 + 0xc),param_1 + 0xc);
        F_00c8c740(this);
        uVar1 = 0;
        goto LAB_00c8cca8;
      }
      F_00c8d7f0(&(*(int *)(gen_frame + 0x8)));
    } while ((*(int *)(gen_frame + 0x8)) != 0);
    uVar1 = 0x80040216;
  }
LAB_00c8cca8: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return uVar1;
}

/* ref: FUN_00c8ccc0 */
uint F_00c8ccc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ccc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x60);
  if (piVar1 != (int *)0x0) {
    if (*(int *)((int)this + 0x54) != 0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,*(int *)((int)this + 0x54));
      *(undefined4 *)((int)this + 0x54) = 0;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x60) + 8))))(*(int * PTR32 *)((int)this + 0x60));
  }
  *(int * PTR32 *)((int)this + 0x60) = param_1;
  F_00c8c740(this);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

/* ref: FUN_00c8cd60 */
unsigned int F_00c8cd60(unsigned int gen_a0)
{
  GEN_ENTER(0xc8cd60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c8cd90 */
unsigned int F_00c8cd90(unsigned int gen_a0)
{
  GEN_ENTER(0xc8cd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c8ce00 */
uint F_00c8ce00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ce00u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00c8d760(in_ecx,param_2);
  return in_ecx;
}

/* ref: FUN_00c8ce30 */
uint F_00c8ce30(unsigned int gen_a0)
{
  GEN_ENTER(0xc8ce30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c8d7f0(param_1);
  return uVar1;
}

/* ref: FUN_00c8ce40 */
uint F_00c8ce40(unsigned int gen_a0)
{
  GEN_ENTER(0xc8ce40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c8d830(param_1);
  return uVar1;
}

/* ref: FUN_00c8ce50 */
uint F_00c8ce50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ce50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8d870(this,param_1);
  return uVar1;
}

/* ref: FUN_00c8ce60 */
uint F_00c8ce60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8ce60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c8dc50(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c8ce70 */
uint F_00c8ce70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ce70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8d8e0(this,param_1);
  return uVar1;
}

/* ref: FUN_00c8ce80 */
uint F_00c8ce80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc8ce80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x28))
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c8ce90 */
uint F_00c8ce90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc8ce90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x2c))
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c8cea0 */
uint F_00c8cea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc8cea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x4c))
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c8ceb0 */
uint F_00c8ceb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc8ceb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x30))
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c8cee0 */
uint F_00c8cee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8cee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 0xc))))
                    (*(undefined4 * PTR32 *)(param_1 + 0xc),param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8cf00 */
uint F_00c8cf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 4))))(*(int * PTR32 *)(param_1 + 0xc));
  return uVar1;
}

/* ref: FUN_00c8cf20 */
uint F_00c8cf20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cf20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 8))))(*(int * PTR32 *)(param_1 + 0xc));
  return uVar1;
}

/* ref: FUN_00c8cf40 */
uint F_00c8cf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cf40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0x80004005;
}

/* ref: FUN_00c8cf50 */
uint F_00c8cf50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cf50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8cf20(this,param_1 + -4);
  return uVar1;
}

/* ref: FUN_00c8cf60 */
uint F_00c8cf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8cf90((undefined *)((int)this + -8),param_1);
  return uVar1;
}

/* ref: FUN_00c8cf70 */
uint F_00c8cf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8cf00(this,param_1 + -4);
  return uVar1;
}

/* ref: FUN_00c8cf80 */
uint F_00c8cf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8cf80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c8cee0(this,param_1 + -4,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8cf90 */
uint F_00c8cf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cf90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  F_00c83a60();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c8cfd0 */
uint F_00c8cfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8d010((undefined *)((int)this + -8),param_1);
  return uVar1;
}

/* ref: FUN_00c8cfe0 */
unsigned int F_00c8cfe0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8cfe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c8d010 */
uint F_00c8d010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  F_00c83a60();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c8d060 */
uint F_00c8d060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8d060u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + -8))))
                    (*(undefined4 * PTR32 *)(param_1 + -8),param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8d080 */
uint F_00c8d080(unsigned int gen_a0)
{
  GEN_ENTER(0xc8d080u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -8) + 4))))(*(int * PTR32 *)(param_1 + -8));
  return uVar1;
}

/* ref: FUN_00c8d0a0 */
uint F_00c8d0a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8d0a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -8) + 8))))(*(int * PTR32 *)(param_1 + -8));
  return uVar1;
}

/* ref: FUN_00c8d0c0 */
unsigned int F_00c8d0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8d0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x48);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  F_00c8be30((undefined *)((int)this + 0x34));
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c8d0f0 */
uint F_00c8d0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x48);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  F_00c8be30((undefined *)((int)this + 0x34));
  F_00c83a60();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: EnlargedUnsignedDivide */
ulong F_00c8d130(unsigned long long gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8d130u, 0u, gen_a1, gen_a2, 0u);
  _ULARGE_INTEGER param_1; memcpy(&param_1, &gen_a0, sizeof param_1);
  ulong param_2 = (ulong)gen_a1;
  ulong * param_3 = (ulong *)(uintptr_t)gen_a2;
  if (param_3 != (ulong *)0x0) {
    *param_3 = (ulong)((ulonglong)(*(ULONGLONG *)&param_1) % (ulonglong)param_2);
  }
  return (ulong)((ulonglong)(*(ULONGLONG *)&param_1) / (ulonglong)param_2);
}

/* ref: FUN_00c8d160 */
ulonglong F_00c8d160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc8d160u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint param_6 = (uint)gen_a5;
  uint param_7 = (uint)gen_a6;
  uint param_8 = (uint)gen_a7;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  uint local_34;
  uint local_24;
  uint local_1c;
  int iStack_18;
  
  uVar9 = (int)param_2 >> 0x1f;
  uVar13 = (param_1 ^ uVar9) - uVar9;
  uVar9 = ((param_2 ^ uVar9) - uVar9) - (uint)((param_1 ^ uVar9) < uVar9);
  uVar10 = (int)param_4 >> 0x1f;
  uVar15 = (param_3 ^ uVar10) - uVar10;
  uVar2 = (ulonglong)(((param_4 ^ uVar10) - uVar10) - (uint)((param_3 ^ uVar10) < uVar10));
  uVar10 = (int)param_6 >> 0x1f;
  uVar8 = (param_5 ^ uVar10) - uVar10;
  uVar10 = ((param_6 ^ uVar10) - uVar10) - (uint)((param_5 ^ uVar10) < uVar10);
  if (((int)param_2 < 1) && ((int)param_2 < 0)) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  if (((int)param_4 < 1) && ((int)param_4 < 0)) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  bVar18 = (bool)(bVar6 ^ bVar5);
  uVar1 = (ulonglong)uVar13 * (ulonglong)uVar15;
  local_34 = (uint)uVar1;
  uVar1 = uVar2 * uVar13 + (ulonglong)uVar9 * (ulonglong)uVar15 + (uVar1 >> 0x20);
  uVar13 = (uint)uVar1;
  uVar2 = uVar2 * uVar9 + (uVar1 >> 0x20);
  if (param_7 == 0 && param_8 == 0) goto LAB_00c8d2e9;
  if (bVar18) {
    local_24 = -param_7;
    uVar9 = -(param_8 + (param_7 != 0));
    if ((-1 < (int)param_8) && ((0 < (int)param_8 || (param_7 != 0)))) goto LAB_00c8d2cb;
LAB_00c8d25d: ;
    local_1c = 0;
    iStack_18 = 0;
  }
  else {
    local_24 = param_7;
    uVar9 = param_8;
    if ((0 < (int)param_8) || (-1 < (int)param_8)) goto LAB_00c8d25d;
LAB_00c8d2cb: ;
    iStack_18 = -1;
    local_1c = 0xffffffff;
  }
  bVar16 = CARRY4(local_34,local_24);
  local_34 = local_34 + local_24;
  bVar17 = CARRY4(uVar9,uVar13);
  uVar9 = uVar9 + uVar13;
  uVar13 = bVar16 + uVar9;
  uVar9 = (uint)bVar17 + (uint)CARRY4((uint)bVar16,uVar9);
  lVar3 = CONCAT44(iStack_18 + (uint)CARRY4(uVar9,local_1c),uVar9 + local_1c);
  lVar4 = uVar2 + lVar3;
  uVar2 = uVar2 + lVar3;
  if (lVar4 < 0) {
    bVar18 = !bVar18;
    uVar9 = ~local_34;
    local_34 = uVar9 + 1;
    uVar13 = ~uVar13 + (uint)(0xfffffffe < uVar9);
    uVar9 = (uint)(local_34 == 0 && uVar13 == 0);
    uVar2 = CONCAT44(~(uint)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(~(uint)lVar4,uVar9),
                     ~(uint)lVar4 + uVar9);
  }
LAB_00c8d2e9: ;
  if (((int)param_6 < 1) && ((int)param_6 < 0)) {
    bVar18 = !bVar18;
  }
  if (uVar2 < CONCAT44(uVar10,uVar8)) {
    if (uVar2 == 0) {
      uVar2 = CONCAT44(uVar13,local_34) / CONCAT44(uVar10,uVar8);
      if (bVar18) {
        return CONCAT44(-((int)(uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
      }
    }
    else {
      if (uVar10 == 0) {
        uVar1 = CONCAT44((int)uVar2,uVar13);
        uVar2 = CONCAT44((int)(uVar1 % (ulonglong)uVar8),local_34) / (ulonglong)uVar8;
        iVar12 = (int)uVar2;
        iVar14 = (int)(uVar1 / uVar8) + (int)(uVar2 >> 0x20);
        if (bVar18) {
          bVar18 = iVar12 != 0;
          iVar12 = -iVar12;
          iVar14 = -(iVar14 + (uint)bVar18);
        }
        return CONCAT44(iVar14,iVar12);
      }
      param_2 = 0;
      param_1 = 0;
      param_6 = 0x40;
      uVar15 = param_2;
      uVar9 = param_1;
      do {
        uVar15 = uVar15 << 1 | uVar9 >> 0x1f;
        uVar11 = (int)(uVar2 >> 0x20) << 1 | (uint)uVar2 >> 0x1f;
        uVar9 = uVar9 * 2;
        uVar7 = (uint)uVar2 * 2;
        if ((int)uVar13 < 0) {
          uVar7 = uVar7 + 1;
        }
        uVar13 = uVar13 << 1 | local_34 >> 0x1f;
        local_34 = local_34 * 2;
        if ((uVar10 <= uVar11) && ((uVar10 < uVar11 || (uVar8 <= uVar7)))) {
          bVar16 = uVar7 < uVar8;
          uVar7 = uVar7 - uVar8;
          uVar11 = (uVar11 - uVar10) - (uint)bVar16;
          bVar16 = 0xfffffffe < uVar9;
          uVar9 = uVar9 + 1;
          uVar15 = uVar15 + bVar16;
        }
        uVar2 = CONCAT44(uVar11,uVar7);
        param_6 = param_6 + -1;
      } while (param_6 != 0);
      if (bVar18) {
        bVar18 = uVar9 != 0;
        uVar9 = -uVar9;
        uVar15 = -(uVar15 + bVar18);
      }
      uVar2 = CONCAT44(uVar15,uVar9);
    }
    return uVar2;
  }
  if (bVar18) {
    return 0x8000000000000000;
  }
  return 0x7fffffffffffffff;
}

/* ref: FUN_00c8d420 */
uint F_00c8d420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc8d420u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  uVar10 = (int)(*(uint *)&gen_args[1]) >> 0x1f;
  uVar7 = (((*(uint *)&gen_args[1]) ^ uVar10) - uVar10) - (uint)(((*(uint *)&gen_args[0]) ^ uVar10) < uVar10);
  uVar13 = ((*(uint *)&gen_args[2]) ^ (int)(*(uint *)&gen_args[2]) >> 0x1f) - ((int)(*(uint *)&gen_args[2]) >> 0x1f);
  uVar8 = ((*(uint *)&gen_args[3]) ^ (int)(*(uint *)&gen_args[3]) >> 0x1f) - ((int)(*(uint *)&gen_args[3]) >> 0x1f);
  if (((int)(*(uint *)&gen_args[1]) < 1) && ((int)(*(uint *)&gen_args[1]) < 0)) {
    bVar6 = 1;
    bVar4 = 1;
    bVar5 = 1;
  }
  else {
    bVar6 = 0;
    bVar4 = 0;
    bVar5 = 0;
  }
  bVar15 = (int)(*(uint *)&gen_args[2]) < 0;
  bVar2 = (bool)(bVar15 ^ bVar4);
  bVar3 = (bool)(bVar15 ^ bVar5);
  *(longlong *)&(*(uint *)&gen_args[0]) = (ulonglong)(((*(uint *)&gen_args[0]) ^ uVar10) - uVar10) * (ulonglong)uVar13;
  uVar10 = (uint)((ulonglong)*(longlong *)&(*(uint *)&gen_args[0]) >> 0x20);
  if (uVar7 == 0) {
    uVar1 = (ulonglong)uVar10;
  }
  else {
    uVar1 = (ulonglong)uVar7 * (ulonglong)uVar13 + (ulonglong)uVar10;
    *(longlong *)&(*(uint *)&gen_args[0]) = CONCAT44((int)uVar1,(*(uint *)&gen_args[0]));
  }
  if ((*(uint *)&gen_args[4]) != 0) {
    uVar7 = (int)(*(uint *)&gen_args[4]) >> 0x1f;
    if (bVar3) {
      uVar10 = -(*(uint *)&gen_args[4]);
      uVar7 = -(uVar7 + ((*(uint *)&gen_args[4]) != 0));
      bVar14 = (int)(*(uint *)&gen_args[4]) < 1;
    }
    else {
      bVar14 = -1 < (int)(*(uint *)&gen_args[4]);
      uVar10 = (*(uint *)&gen_args[4]);
    }
    (*(uint *)&gen_args[4]) = bVar14 - 1;
    bVar14 = CARRY4((*(uint *)&gen_args[0]),uVar10);
    uVar10 = (*(uint *)&gen_args[0]) + uVar10;
    uVar13 = (uint)uVar1 + uVar7;
    uVar11 = uVar13 + bVar14;
    *(longlong *)&(*(uint *)&gen_args[0]) = CONCAT44(uVar11,uVar10);
    uVar7 = (int)(uVar1 >> 0x20) +
            (uint)CARRY4((uint)uVar1,uVar7) + (uint)CARRY4(uVar13,(uint)bVar14) + (*(uint *)&gen_args[4]);
    uVar1 = CONCAT44(uVar7,uVar11);
    if ((int)uVar7 < 0) {
      bVar2 = !(bool)(bVar15 ^ bVar6);
      uVar10 = ~uVar10;
      iVar9 = uVar10 + 1;
      iVar12 = ~uVar11 + (uint)(0xfffffffe < uVar10);
      uVar1 = CONCAT44(~uVar7,iVar12);
      *(longlong *)&(*(uint *)&gen_args[0]) = CONCAT44(iVar12,iVar9);
      bVar3 = bVar2;
      if (iVar9 == 0 && iVar12 == 0) {
        uVar1 = CONCAT44(~uVar7 + 1,iVar12);
      }
    }
  }
  uVar10 = (uint)(uVar1 >> 0x20);
  uVar7 = (uint)uVar1;
  if ((int)(*(uint *)&gen_args[3]) < 0) {
    bVar3 = !bVar2;
  }
  if (uVar10 < uVar8) {
    if ((uVar10 != 0) || (uVar8 <= uVar7)) {
      uVar7 = (*(uint *)&gen_args[1]);
    }
    uVar7 = (uint)(CONCAT44(uVar7,(int)*(longlong *)&(*(uint *)&gen_args[0])) / (ulonglong)uVar8);
    if (bVar3) {
      uVar7 = -uVar7;
    }
    return uVar7;
  }
  if (!bVar3) {
    return 0xffffffff;
  }
  return 0;
}

/* ref: FUN_00c8d620 */
uint F_00c8d620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d620u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c8d630 */
uint F_00c8d630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d630u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c8d650 */
uint F_00c8d650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d650u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c8d660 */
uint F_00c8d660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00c8d6b0 */
uint F_00c8d6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 4) < *(int *)this) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    *(uint *)((int)this + 8) = param_1;
    return param_1;
  }
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00c8d700 */
uint F_00c8d700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d700u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 0) {
    return *in_ecx;
  }
  return *(uint *)(param_2 + 4);
}

/* ref: FUN_00c8d720 */
uint F_00c8d720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  if (param_2 == (uint *)0x0) {
    return *(uint *)(in_ecx + 4);
  }
  return *param_2;
}

/* ref: FUN_00c8d740 */
unsigned int F_00c8d740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8d740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_00c8d760 */
uint F_00c8d760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d760u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 10;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00c8d780 */
unsigned int F_00c8d780(unsigned int gen_a0)
{
  GEN_ENTER(0xc8d780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00c8d7f0 */
uint F_00c8d7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8d7f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = *(int *)(iVar1 + 4);
  return *(uint *)(iVar1 + 8);
}

/* ref: FUN_00c8d810 */
uint F_00c8d810(unsigned int gen_a0)
{
  GEN_ENTER(0xc8d810u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + 8);
}

/* ref: FUN_00c8d830 */
uint F_00c8d830(unsigned int gen_a0)
{
  GEN_ENTER(0xc8d830u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 8);
}

/* ref: FUN_00c8d840 */
uint F_00c8d840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)this;
  while( true ) {
    uVar1 = uVar2;
    if (uVar1 == 0) {
      return 0;
    }
    if (*(int *)(uVar1 + 8) == param_1) break;
    uVar2 = *(uint *)this;
    if (uVar1 != 0) {
      uVar2 = *(uint *)(uVar1 + 4);
    }
  }
  return uVar1;
}

/* ref: FUN_00c8d870 */
uint F_00c8d870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    *(int *)this = param_1[1];
  }
  else {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  if ((int *)param_1[1] == (int *)0x0) {
    *(int *)((int)this + 4) = *param_1;
  }
  else {
    *(int *)param_1[1] = *param_1;
  }
  uVar1 = param_1[2];
  if (*(int *)((int)this + 0x10) < *(int *)((int)this + 0xc)) {
    param_1[1] = *(int *)((int)this + 0x14);
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    *(int * PTR32 *)((int)this + 0x14) = param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
    return uVar1;
  }
  F_00406ad0(param_1);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  return uVar1;
}

/* ref: FUN_00c8d8e0 */
uint F_00c8d8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = puVar2[1];
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
    *(undefined4 *)((int)this + 0x14) = uVar1;
    if (puVar2 != (undefined4 *)0x0) goto LAB_00c8d90d;
  }
  puVar2 = (undefined4 *)F_004069f0(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
LAB_00c8d90d: ;
  puVar2[2] = param_1;
  puVar2[1] = 0;
  *puVar2 = *(undefined4 *)((int)this + 4);
  if (*(int *)((int)this + 4) == 0) {
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(undefined4 * PTR32 *)this = puVar2;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
    return (uint)puVar2;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = puVar2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  return (uint)puVar2;
}

/* ref: FUN_00c8d950 */
uint F_00c8d950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = puVar2[1];
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
    *(undefined4 *)((int)this + 0x14) = uVar1;
    if (puVar2 != (undefined4 *)0x0) goto LAB_00c8d97d;
  }
  puVar2 = (undefined4 *)F_004069f0(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
LAB_00c8d97d: ;
  puVar2[2] = param_1;
  *puVar2 = 0;
  puVar2[1] = *(undefined4 *)this;
  if (*(undefined4 * PTR32 *)this == (undefined4 *)0x0) {
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
    *(undefined4 * PTR32 *)this = puVar2;
    return (uint)puVar2;
  }
  **(undefined4 * PTR32 *)this = puVar2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *(undefined4 * PTR32 *)this = puVar2;
  return (uint)puVar2;
}

/* ref: FUN_00c8d9b0 */
uint F_00c8d9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  
  iVar1 = *param_1;
  do {
    if (iVar1 == 0) {
      return 1;
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 0x14);
    uVar2 = *(undefined4 *)(iVar1 + 8);
    iVar1 = *(int *)(iVar1 + 4);
    if (puVar4 == (undefined4 *)0x0) {
LAB_00c8d9db: ;
      puVar4 = (undefined4 *)F_004069f0(0xc);
      if (puVar4 == (undefined4 *)0x0) {
        return 0;
      }
    }
    else {
      uVar3 = puVar4[1];
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
      *(undefined4 *)((int)this + 0x14) = uVar3;
      if (puVar4 == (undefined4 *)0x0) goto LAB_00c8d9db;
    }
    puVar4[2] = uVar2;
    puVar4[1] = 0;
    *puVar4 = *(undefined4 *)((int)this + 4);
    if (*(int *)((int)this + 4) == 0) {
      *(undefined4 * PTR32 *)this = puVar4;
    }
    else {
      *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = puVar4;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
  } while( true );
}

/* ref: FUN_00c8da30 */
uint F_00c8da30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8da30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  
  puVar1 = *(undefined4 * PTR32 *)(param_1 + 4);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return 1;
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 0x14);
    uVar2 = puVar1[2];
    if (puVar4 == (undefined4 *)0x0) {
LAB_00c8da59: ;
      puVar4 = (undefined4 *)F_004069f0(0xc);
      if (puVar4 == (undefined4 *)0x0) {
        return 0;
      }
    }
    else {
      uVar3 = puVar4[1];
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
      *(undefined4 *)((int)this + 0x14) = uVar3;
      if (puVar4 == (undefined4 *)0x0) goto LAB_00c8da59;
    }
    puVar4[2] = uVar2;
    *puVar4 = 0;
    puVar4[1] = *(undefined4 *)this;
    if (*(undefined4 * PTR32 *)this == (undefined4 *)0x0) {
      *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
    }
    else {
      **(undefined4 * PTR32 *)this = puVar4;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(undefined4 * PTR32 *)this = puVar4;
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

/* ref: FUN_00c8dab0 */
uint F_00c8dab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8dab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint * puVar2;
  uint uVar3;
  int * piVar4;
  
  if (param_1 == 0) {
    uVar3 = F_00c8d950(this,param_2);
    return uVar3;
  }
  if (param_1 == *(int *)((int)this + 4)) {
    uVar3 = F_00c8d8e0(this,param_2);
    return uVar3;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar4 != (int *)0x0) {
    iVar1 = piVar4[1];
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
    *(int *)((int)this + 0x14) = iVar1;
    if (piVar4 != (int *)0x0) goto LAB_00c8db0b;
  }
  piVar4 = (int *)F_004069f0(0xc);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
LAB_00c8db0b: ;
  piVar4[2] = param_2;
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  *piVar4 = param_1;
  piVar4[1] = (int)puVar2;
  *puVar2 = (uint)piVar4;
  *(int * PTR32 *)(param_1 + 4) = piVar4;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return (uint)piVar4;
}

/* ref: FUN_00c8db30 */
uint F_00c8db30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8db30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  iVar1 = *param_2;
  puVar5 = param_1;
  do {
    if (iVar1 == 0) {
      return 1;
    }
    uVar2 = *(undefined4 *)(iVar1 + 8);
    puVar6 = *(undefined4 * PTR32 *)((int)this + 0x14);
    if (puVar5 == (undefined4 *)0x0) {
      if (puVar6 != (undefined4 *)0x0) {
        uVar3 = puVar6[1];
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
        *(undefined4 *)((int)this + 0x14) = uVar3;
        if (puVar6 == (undefined4 *)0x0) goto LAB_00c8db6e;
LAB_00c8db80: ;
        puVar6[2] = uVar2;
        *puVar6 = 0;
        puVar6[1] = *(undefined4 *)this;
        if (*(undefined4 * PTR32 *)this == (undefined4 *)0x0) {
          *(undefined4 * PTR32 *)((int)this + 4) = puVar6;
          *(undefined4 * PTR32 *)this = puVar6;
        }
        else {
          **(undefined4 * PTR32 *)this = puVar6;
          *(undefined4 * PTR32 *)this = puVar6;
        }
        goto LAB_00c8dc19;
      }
LAB_00c8db6e: ;
      puVar6 = (undefined4 *)F_004069f0(0xc);
      if (puVar6 != (undefined4 *)0x0) goto LAB_00c8db80;
    }
    else {
      if (puVar5 == *(undefined4 * PTR32 *)((int)this + 4)) {
        if (puVar6 == (undefined4 *)0x0) {
LAB_00c8dbb7: ;
          puVar6 = (undefined4 *)F_004069f0(0xc);
          if (puVar6 != (undefined4 *)0x0) goto LAB_00c8dbc5;
          goto LAB_00c8dc1c;
        }
        uVar3 = puVar6[1];
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
        *(undefined4 *)((int)this + 0x14) = uVar3;
        if (puVar6 == (undefined4 *)0x0) goto LAB_00c8dbb7;
LAB_00c8dbc5: ;
        puVar6[2] = uVar2;
        puVar6[1] = 0;
        *puVar6 = *(undefined4 *)((int)this + 4);
        if (*(int *)((int)this + 4) == 0) {
          *(undefined4 * PTR32 *)this = puVar6;
          *(undefined4 * PTR32 *)((int)this + 4) = puVar6;
        }
        else {
          *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = puVar6;
          *(undefined4 * PTR32 *)((int)this + 4) = puVar6;
        }
      }
      else {
        if (puVar6 == (undefined4 *)0x0) {
LAB_00c8dbfb: ;
          puVar6 = (undefined4 *)F_004069f0(0xc);
          if (puVar6 == (undefined4 *)0x0) {
            return 0;
          }
        }
        else {
          uVar3 = puVar6[1];
          *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
          *(undefined4 *)((int)this + 0x14) = uVar3;
          if (puVar6 == (undefined4 *)0x0) goto LAB_00c8dbfb;
        }
        puVar6[2] = uVar2;
        puVar4 = (undefined4 *)puVar5[1];
        *puVar6 = puVar5;
        puVar6[1] = puVar4;
        *puVar4 = puVar6;
        puVar5[1] = puVar6;
      }
LAB_00c8dc19: ;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    }
LAB_00c8dc1c: ;
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    iVar1 = *(int *)(iVar1 + 4);
    puVar5 = puVar6;
  } while( true );
}

/* ref: FUN_00c8dc50 */
uint F_00c8dc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8dc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if (param_1 == (int *)0x0) {
    uVar2 = F_00c8d8e0(this,param_2);
    return uVar2;
  }
  if (param_1 == *(int * PTR32 *)this) {
    uVar2 = F_00c8d950(this,param_2);
    return uVar2;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar3 != (int *)0x0) {
    iVar1 = piVar3[1];
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
    *(int *)((int)this + 0x14) = iVar1;
    if (piVar3 != (int *)0x0) goto LAB_00c8dcaa;
  }
  piVar3 = (int *)F_004069f0(0xc);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
LAB_00c8dcaa: ;
  piVar3[2] = param_2;
  iVar1 = *param_1;
  piVar3[1] = (int)param_1;
  *piVar3 = iVar1;
  *param_1 = (int)piVar3;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return (uint)piVar3;
}

/* ref: FUN_00c8dcd0 */
uint F_00c8dcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8dcd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  puVar1 = *(undefined4 * PTR32 *)(param_2 + 4);
  piVar4 = param_1;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return 1;
    }
    iVar2 = puVar1[2];
    piVar5 = *(int * PTR32 *)((int)this + 0x14);
    if (piVar4 == (int *)0x0) {
      if (piVar5 != (int *)0x0) {
        iVar3 = piVar5[1];
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
        *(int *)((int)this + 0x14) = iVar3;
        if (piVar5 == (int *)0x0) goto LAB_00c8dd0e;
LAB_00c8dd20: ;
        piVar5[2] = iVar2;
        piVar5[1] = 0;
        *piVar5 = *(int *)((int)this + 4);
        if (*(int *)((int)this + 4) == 0) {
          *(int * PTR32 *)this = piVar5;
          *(int * PTR32 *)((int)this + 4) = piVar5;
        }
        else {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar5;
          *(int * PTR32 *)((int)this + 4) = piVar5;
        }
        goto LAB_00c8ddb7;
      }
LAB_00c8dd0e: ;
      piVar5 = (int *)F_004069f0(0xc);
      if (piVar5 != (int *)0x0) goto LAB_00c8dd20;
    }
    else {
      if (piVar4 == *(int * PTR32 *)this) {
        if (piVar5 == (int *)0x0) {
LAB_00c8dd5a: ;
          piVar5 = (int *)F_004069f0(0xc);
          if (piVar5 != (int *)0x0) goto LAB_00c8dd68;
          goto LAB_00c8ddba;
        }
        iVar3 = piVar5[1];
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
        *(int *)((int)this + 0x14) = iVar3;
        if (piVar5 == (int *)0x0) goto LAB_00c8dd5a;
LAB_00c8dd68: ;
        piVar5[2] = iVar2;
        *piVar5 = 0;
        piVar5[1] = *(int *)this;
        if (*(undefined4 * PTR32 *)this == (undefined4 *)0x0) {
          *(int * PTR32 *)((int)this + 4) = piVar5;
          *(int * PTR32 *)this = piVar5;
        }
        else {
          **(undefined4 * PTR32 *)this = piVar5;
          *(int * PTR32 *)this = piVar5;
        }
      }
      else {
        if (piVar5 == (int *)0x0) {
LAB_00c8dd9a: ;
          piVar5 = (int *)F_004069f0(0xc);
          if (piVar5 == (int *)0x0) {
            return 0;
          }
        }
        else {
          iVar3 = piVar5[1];
          *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
          *(int *)((int)this + 0x14) = iVar3;
          if (piVar5 == (int *)0x0) goto LAB_00c8dd9a;
        }
        piVar5[2] = iVar2;
        iVar2 = *piVar4;
        *piVar5 = iVar2;
        piVar5[1] = (int)piVar4;
        *piVar4 = (int)piVar5;
        *(int * PTR32 *)(iVar2 + 4) = piVar5;
      }
LAB_00c8ddb7: ;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    }
LAB_00c8ddba: ;
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    puVar1 = (undefined4 *)*puVar1;
    piVar4 = piVar5;
  } while( true );
}

/* ref: FUN_00c8ddf0 */
uint F_00c8ddf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8ddf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar3 = 0;
    piVar2 = param_1;
    do {
      piVar2 = (int *)*piVar2;
      iVar3 = iVar3 + 1;
    } while (piVar2 != (int *)0x0);
    if (param_2[1] != 0) {
      *(undefined4 *)(param_2[1] + 4) = *(undefined4 *)this;
    }
    if (*(int * PTR32 *)this != (int *)0x0) {
      **(int * PTR32 *)this = param_2[1];
    }
    if (*param_2 == 0) {
      *param_2 = *(int *)this;
    }
    iVar1 = param_1[1];
    *(int *)this = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 4) = 0;
    }
    param_2[1] = (int)param_1;
    if (*(undefined4 * PTR32 *)this != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)this = 0;
    }
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) - iVar3;
    param_2[2] = param_2[2] + iVar3;
  }
  return 1;
}

/* ref: FUN_00c8de60 */
uint F_00c8de60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8de60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar3 = 0;
    piVar2 = param_1;
    do {
      piVar2 = (int *)piVar2[1];
      iVar3 = iVar3 + 1;
    } while (piVar2 != (int *)0x0);
    if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
      *(undefined4 *)*param_2 = *(undefined4 *)((int)this + 4);
    }
    if (*(int *)((int)this + 4) != 0) {
      *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *param_2;
    }
    if (param_2[1] == 0) {
      param_2[1] = *(int *)((int)this + 4);
    }
    iVar1 = *param_1;
    *(int *)((int)this + 4) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)this = 0;
    }
    *param_2 = (int)param_1;
    if (*(int *)((int)this + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
    }
    *param_1 = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) - iVar3;
    param_2[2] = param_2[2] + iVar3;
  }
  return 1;
}

/* ref: FUN_00c8df10 */
unsigned int F_00c8df10(unsigned int gen_a0)
{
  GEN_ENTER(0xc8df10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  iVar2 = *(int *)((int)this + 0x14);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  return 0;
}

/* ref: FUN_00c8df70 */
uint F_00c8df70(unsigned int gen_a0)
{
  GEN_ENTER(0xc8df70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c8d870(this,*(undefined4 *)this);
  return uVar1;
}

/* ref: FUN_00c8dfc0 */
uint F_00c8dfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8dfc0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c8dfd0 */
uint F_00c8dfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8dfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  int * piVar3;
  
  uVar1 = F_00c80fd0(this,param_1);
  if ((((uVar1 == 1) && (uVar1 = F_00c80fd0((int)this + 0x10,param_1 + 0x10), uVar1 == 1)) &&
      (uVar1 = F_00c80fd0((int)this + 0x2c,param_1 + 0x2c), uVar1 == 1)) &&
     (uVar1 = *(uint *)((int)this + 0x40), uVar1 == *(uint *)(param_1 + 0x40))) {
    if (uVar1 == 0) {
      return 1;
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x44);
    if ((piVar3 != (int *)0x0) && (piVar2 = *(int * PTR32 *)(param_1 + 0x44), piVar2 != (int *)0x0)) {
      for (; 3 < uVar1; uVar1 = uVar1 - 4) {
        if (*piVar3 != *piVar2) {
          return 0;
        }
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      if (uVar1 == 0) {
        return 1;
      }
      if ((char)*piVar2 == (char)*piVar3) {
        if (uVar1 < 2) {
          return 1;
        }
        if (*(char *)((int)piVar2 + 1) == *(char *)((int)piVar3 + 1)) {
          if (uVar1 < 3) {
            return 1;
          }
          if (*(char *)((int)piVar2 + 2) == *(char *)((int)piVar3 + 2)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00c8e090 */
uint F_00c8e090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8dfd0(this,param_1);
  return (uint)(uVar1 == 0);
}

/* ref: FUN_00c8e0d0 */
uint F_00c8e0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  return (uint)param_2;
}

