#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00e1f710 */
uint F_00e1f710(unsigned int gen_a0)
{
  GEN_ENTER(0xe1f710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00e1f5c0(this,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),uVar2);
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) != (undefined4 *)0x0) {
    *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 6) + -1;
    piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x8)))((*(undefined4 * PTR32 *)(gen_frame + 0x8)),1);
    }
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0) {
    *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 6) + -1;
    piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x4)))((*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
    }
  }
  return 0;
}

/* ref: FUN_00e1f770 */
uint F_00e1f770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1f770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x18);
  return uVar1;
}

/* ref: FUN_00e1f790 */
unsigned int F_00e1f790(unsigned int gen_a0)
{
  GEN_ENTER(0xe1f790u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x18);
  }
  return 0;
}

/* ref: FUN_00e1f7e0 */
uint F_00e1f7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1f7e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e1f800 */
unsigned int F_00e1f800(unsigned int gen_a0)
{
  GEN_ENTER(0xe1f800u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00e1f830 */
uint F_00e1f830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1f830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00e07250(this,param_2,param_3);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_00e1f860 */
uint F_00e1f860(unsigned int gen_a0)
{
  GEN_ENTER(0xe1f860u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e1f880 */
unsigned int F_00e1f880(unsigned int gen_a0)
{
  GEN_ENTER(0xe1f880u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00e1f8c0 */
uint F_00e1f8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1f8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x18);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e1f900 */
uint F_00e1f900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1f900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e1e790(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e1f920 */
uint F_00e1f920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1f920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00e07250(this,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_00e07310(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00e1f960 */
uint F_00e1f960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1f960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0x18);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e1f9a0 */
uint F_00e1f9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1f9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e1f900(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e1f9c0 */
uint F_00e1f9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe1f9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    uVar1 = F_00e07420(this,param_1,*(int *)((int)this + 8) * 2 + 2);
    *param_5 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_5 = 0;
  }
  uVar1 = F_00e071a0(this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00e1fa20 */
unsigned int F_00e1fa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe1fa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00e07420(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar2 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & *(uint *)((int)this + 8);
    piVar1 = (int *)(iVar2 + uVar4 * 0xc);
    if ((*(uint *)(iVar2 + uVar4 * 0xc) == param_2) && (piVar1[1] == param_3)) break;
    if (*piVar1 == -1) {
      iVar3 = uVar4 * 0xc;
      *(uint *)(iVar2 + iVar3) = param_2;
      *(int *)(iVar2 + 4 + iVar3) = param_3;
      *(undefined4 *)(iVar3 + 8 + *(int *)this) = param_4;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return 0;
    }
    uVar4 = uVar4 + 1;
  }
  return 0;
}

/* ref: FUN_00e1faa0 */
uint F_00e1faa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe1faa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00e1f9c0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00e1fad0 */
unsigned int F_00e1fad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1fad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00e1fa20(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00e1faf0 */
unsigned int F_00e1faf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1faf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x14);
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined4 *)0x14) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
      }
      puVar1 = puVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e1fb20 */
uint F_00e1fb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1fb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),this,0x18);
  }
  return (uint)this;
}

/* ref: FUN_00e1fb90 */
uint F_00e1fb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1fb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x18);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 0x18;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0x80000000;
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0x18;
}

/* ref: FUN_00e1fbf0 */
unsigned int F_00e1fbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1fbf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = param_2 + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(param_1 + 0x14 + iVar3 * 0x18);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 0xc);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -6;
    } while (-1 < iVar3);
  }
  return 0;
}

/* ref: FUN_00e1fc50 */
uint F_00e1fc50(unsigned int gen_a0)
{
  GEN_ENTER(0xe1fc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0x18);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 0x18;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0x80000000;
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0x18;
}

/* ref: FUN_00e1fca0 */
unsigned int F_00e1fca0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1fca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 0x14 + iVar3 * 0x18);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 0xc);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -6;
    } while (-1 < iVar3);
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00e1fd20 */
uint F_00e1fd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1fd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 0x14 + iVar3 * 0x18);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 0xc);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      puVar2 = puVar2 + -6;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x18);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e1ff00 */
uint F_00e1ff00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1ff00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  float10 extraout_ST0;
  
  uVar4 = (*(uint *)&gen_args[3]);
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)&gen_args[0]);
  piVar1 = (int *)F_00e1cd10((undefined *)(*(uint *)&gen_args[3]));
  piVar2 = (int *)(*piVar1 + -2);
  switch((unsigned int)(uintptr_t)(piVar2)) {
  case (int *)0x0: ;
  case (int *)0x2: ;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)uVar4 + 0x30))))(*(int * PTR32 *)uVar4,*(undefined4 *)(uVar4 + 4));
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x44))))((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar4);
    return uVar4;
  case (int *)0x1: ;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)uVar4 + 0x3c))))(*(int * PTR32 *)uVar4,*(undefined4 *)(uVar4 + 4));
    (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((float)extraout_ST0);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x50))))((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(uint *)&gen_args[3]));
    return uVar4;
  case (int *)0x3: ;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)uVar4 + 0x2c))))(*(int * PTR32 *)uVar4,*(undefined4 *)(uVar4 + 4));
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x54))))((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar4)));
    break;
  case (int *)0x4: ;
  case (int *)0x5: ;
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)uVar4 + 0x34))))(*(int * PTR32 *)uVar4,*(undefined4 *)(uVar4 + 4))));
    if (puVar5 != (undefined4 *)0x0) {
      *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
      puVar5[2] = puVar5[2] + 1;
    }
    (*(uint *)&gen_args[3]) = (uint)puVar5;
    puVar6 = (undefined4 *)F_00e1f5c0((*(int * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[3]));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x5c))))((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),*puVar6);
    piVar2 = (*(int * PTR32 *)(gen_frame + 0x8));
    if ((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) {
      *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 6) + -1;
      piVar1 = (*(int * PTR32 *)(gen_frame + 0x8)) + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x8)))((*(int * PTR32 *)(gen_frame + 0x8)),1)));
      }
    }
    if (puVar5 != (undefined4 *)0x0) {
      *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
      piVar1 = puVar5 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        uVar4 = ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
        return uVar4;
      }
    }
    break;
  case (int *)0x7: ;
    piVar2 = (int *)piVar1[1];
    if (*piVar2 == 3) {
      uVar3 = F_00e19c70(piVar1);
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)uVar4 + 0x38))))(*(int * PTR32 *)uVar4,*(undefined4 *)(uVar4 + 4),uVar3)
      ;
      uVar3 = F_00e19c70(piVar1);
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x48))))((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar4,uVar3);
      return uVar4;
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00e200c0 */
uint F_00e200c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe200c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 100))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: FUN_00e200e0 */
uint F_00e200e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe200e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return param_1;
}

/* ref: FUN_00e20100 */
uint F_00e20100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe20100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this,uVar2);
  return uVar2;
}

/* ref: FUN_00e20130 */
uint F_00e20130(unsigned int gen_a0)
{
  GEN_ENTER(0xe20130u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  if ((0 < in_eax) && ((in_eax < 0x13 || (in_eax == 0x1e)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e20150 */
uint F_00e20150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe20150u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  undefined4 * puVar6;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  if (*(*(int * PTR32 *)&gen_args[2]) == 0) {
    return 0;
  }
  this_00 = (undefined *)F_00da5fd0((*(undefined * PTR32 *)&gen_args[1]));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar1 + 8))((int *)*piVar1)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))(*(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]),uVar2);
  }
  if (this_00 != (undefined *)0x0) {
    if (uVar3 == 0) {
      return 0;
    }
    uVar4 = F_00d92610(this_00);
    uVar2 = F_00da0d20(uVar4,uVar2);
    if (uVar2 != 0) {
      pcVar5 = (char *)F_00d92650(this_00,(int)&(*(int * PTR32 *)&gen_args[2]) + 3,uVar3);
      if (*pcVar5 != '\0') {
        return uVar3;
      }
      puVar6 = (undefined4 *)F_00da6010((*(undefined * PTR32 *)&gen_args[1]),"hk.DataObjectType");
      if (puVar6 != (undefined4 *)0x0) {
        this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))(*(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]),*(undefined4 *)*puVar6)))
        ;
        pcVar5 = (char *)F_00d92650(this_00,(int)&(*(undefined * PTR32 *)&gen_args[1]) + 3,uVar3);
        if (*pcVar5 != '\0') {
          return uVar3;
        }
      }
    }
    return (uint)this_00;
  }
  return uVar3;
}

/* ref: FUN_00e20230 */
uint F_00e20230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe20230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  if ((*(char *)((int)param_2 + 0xc) != '\x18') && (*(char *)((int)param_2 + 0xc) != '\x1f')) {
    return 1;
  }
  if (*(int *)((int)param_2 + 8) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_3 + 0x30))((int *)*param_3,param_3[1]);
    F_00da6250(param_2,param_1,uVar1);
  }
  return 0;
}

/* ref: FUN_00e20280 */
uint F_00e20280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe20280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  LPVOID pvVar6;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_2 + 8))((int *)*param_2);
  if (uVar2 != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_2 + 8))((int *)*param_2)));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
    if (uVar2 != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_2 + 8))((int *)*param_2)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this,uVar2);
      if (uVar2 != 0) {
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_2 + 8))((int *)*param_2)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
        F_00d92a10(uVar2);
        uVar4 = F_00d929c0(uVar2);
        uVar5 = F_00e062e0(uVar2,param_2);
        uVar4 = uVar4 + uVar5;
        pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar6 + 0x2c) + 4))))
                          (*(int * PTR32 *)((int)pvVar6 + 0x2c),uVar4);
        if (*(uint *)(param_3 + 0x10) == (*(uint *)(param_3 + 0x14) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516a4),(int *)(param_3 + 0xc),8);
        }
        puVar1 = ((uint *)GEN_TOP((*(int *)(param_3 + 0xc) + *(int *)(param_3 + 0x10) * 8)));
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
        *puVar1 = uVar5;
        puVar1[1] = uVar4;
        F_00da1030(uVar5,0,uVar4);
        param_1[1] = uVar2;
        *param_1 = uVar5;
        return (uint)param_1;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00e203a0 */
uint F_00e203a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe203a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float * pfVar1;
  byte bVar2;
  code * pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined * pvVar7;
  uint uVar8;
  uint uVar9;
  LPVOID pvVar10;
  float fVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  int iVar14;
  int * piVar15;
  undefined4 * puVar16;
  int iVar17;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined8 uVar18;
  
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = (*(undefined * PTR32 *)&gen_args[0]);
  puVar16 = (undefined4 *)0xffffffff;
  uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x14))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))));
  if (uVar8 == 0) {
    return 0;
  }
  bVar2 = *(byte *)((*(int *)&gen_args[2]) + 0xd);
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)(uint)bVar2;
  uVar8 = F_00da5f30((undefined4 *)(uint)bVar2);
  if (((*(short *)(uVar8 + 8) < 1) || (uVar9 = F_00e20130((*(undefined4 * PTR32 *)(gen_frame + 0x3c))), uVar9 == 0)) ||
     (uVar9 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x20))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),((undefined1 *)(gen_frame + 0x0))), uVar9 != 0)) {
    (*(uint *)(gen_frame + 0x54)) = 0;
    (*(uint *)(gen_frame + 0x44)) = (ushort)~*(ushort *)((*(int *)&gen_args[2]) + 0x10) >> 9 & 1;
    puVar12 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x14))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))))));
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((*(int *)&gen_args[2]) + 0xd))) {
    case 0: ;
      goto switchD_00e2051b_caseD_0;
    case 1: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar12;
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x1;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)));
          *(bool *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + (*(uint *)(gen_frame + 0x44))) = uVar8 != 0;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 2: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar12;
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x1;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)));
          *(char *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + (*(uint *)(gen_frame + 0x44))) = (char)uVar8;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 3: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar12;
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x1;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)));
          *(char *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + (*(uint *)(gen_frame + 0x44))) = (char)uVar8;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 4: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar12;
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x1;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)));
          *(char *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + (*(uint *)(gen_frame + 0x44))) = (char)uVar8;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 5: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) * 2);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = (undefined4 *)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) / 2);
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x2;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)));
          *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + (*(uint *)(gen_frame + 0x44)) * 2) = (short)uVar8;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 6: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) * 2);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = (undefined4 *)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) / 2);
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x2;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)));
          *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + (*(uint *)(gen_frame + 0x44)) * 2) = (short)uVar8;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 7: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) * 4);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 3U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 2)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x4;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x34))[(*(uint *)(gen_frame + 0x44))] = uVar8;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 8: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) * 4);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 3U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 2)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x4;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x34))[(*(uint *)(gen_frame + 0x44))] = uVar8;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 9: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) * 8);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 7U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 3)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = puVar16;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x8;
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = (undefined4 *)0x0;
      if (0 < (int)puVar12) {
        iVar14 = 0;
        do {
          uVar18 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x54))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),iVar14);
          (*(undefined4 * PTR32 *)(gen_frame + 0x40))[iVar14 * 2] = (int)uVar18;
          (*(undefined4 * PTR32 *)(gen_frame + 0x40))[iVar14 * 2 + 1] = (int)((ulonglong)uVar18 >> 0x20);
          iVar14 = iVar14 + 1;
          puVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x30));
        } while (iVar14 < (int)puVar12);
      }
      break;
    case 10: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) * 8);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 7U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 3)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = puVar16;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x8;
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = (undefined4 *)0x0;
      if (0 < (int)puVar12) {
        iVar14 = 0;
        do {
          uVar18 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x54))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),iVar14);
          (*(undefined4 * PTR32 *)(gen_frame + 0x40))[iVar14 * 2] = (int)uVar18;
          (*(undefined4 * PTR32 *)(gen_frame + 0x40))[iVar14 * 2 + 1] = (int)((ulonglong)uVar18 >> 0x20);
          iVar14 = iVar14 + 1;
          puVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x30));
        } while (iVar14 < (int)puVar12);
      }
      break;
    case 0xb: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) * 4);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 3U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 2)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x4;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x3c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x34))[(*(uint *)(gen_frame + 0x44))] = (undefined4)gen_fl2bits((float)extraout_ST0);
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0xc: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) << 4);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 0xfU) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 4)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x10;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13;
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x2c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)))));
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = *puVar13;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[3] = uVar6;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 4;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0xd: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) << 4);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 0xfU) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 4)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x10;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13;
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x2c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)))));
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = *puVar13;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[3] = uVar6;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 4;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0xe: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) * 0x30);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = (undefined4 *)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) / 0x30);
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x30;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13 + 8;
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x2c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)))));
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-8] = *puVar13;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-7] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-6] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-5] = uVar6;
          uVar4 = puVar13[5];
          uVar5 = puVar13[6];
          uVar6 = puVar13[7];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-4] = puVar13[4];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-3] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-1] = uVar6;
          uVar4 = puVar13[9];
          uVar5 = puVar13[10];
          uVar6 = puVar13[0xb];
          *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13[8];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[3] = uVar6;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 0xc;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0xf: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) * 0x30);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = (undefined4 *)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) / 0x30);
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x30;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13 + 8;
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x2c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)))));
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-8] = *puVar13;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-7] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-6] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-5] = uVar6;
          uVar4 = puVar13[5];
          uVar5 = puVar13[6];
          uVar6 = puVar13[7];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-4] = puVar13[4];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-3] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-1] = uVar6;
          uVar4 = puVar13[9];
          uVar5 = puVar13[10];
          uVar6 = puVar13[0xb];
          *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13[8];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[3] = uVar6;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 0xc;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0x10: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) * 0x30);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = (undefined4 *)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) / 0x30);
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x30;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13 + 8;
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x2c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)))));
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-8] = *puVar13;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-7] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-6] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-5] = uVar6;
          uVar4 = puVar13[5];
          uVar5 = puVar13[6];
          uVar6 = puVar13[7];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-4] = puVar13[4];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-3] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-1] = uVar6;
          uVar4 = puVar13[9];
          uVar5 = puVar13[10];
          uVar6 = puVar13[0xb];
          *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13[8];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[3] = uVar6;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 0xc;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0x11: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) << 6);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 0x3fU) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 6)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x40;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13 + 8;
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x2c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)))));
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-8] = *puVar13;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-7] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-6] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-5] = uVar6;
          uVar4 = puVar13[5];
          uVar5 = puVar13[6];
          uVar6 = puVar13[7];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-4] = puVar13[4];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-3] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-1] = uVar6;
          uVar4 = puVar13[9];
          uVar5 = puVar13[10];
          uVar6 = puVar13[0xb];
          *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13[8];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[3] = uVar6;
          uVar4 = puVar13[0xd];
          uVar5 = puVar13[0xe];
          uVar6 = puVar13[0xf];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[4] = puVar13[0xc];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[5] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[6] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[7] = uVar6;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 0x10;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0x12: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) << 6);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 0x3fU) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 6)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x40;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13 + 8;
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x2c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)))));
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-8] = *puVar13;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-7] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-6] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-5] = uVar6;
          uVar4 = puVar13[5];
          uVar5 = puVar13[6];
          uVar6 = puVar13[7];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-4] = puVar13[4];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-3] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-1] = uVar6;
          uVar4 = puVar13[9];
          uVar5 = puVar13[10];
          uVar6 = puVar13[0xb];
          *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13[8];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[3] = uVar6;
          uVar4 = puVar13[0xd];
          uVar5 = puVar13[0xe];
          uVar6 = puVar13[0xf];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[4] = puVar13[0xc];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[5] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[6] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[7] = uVar6;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 0x10;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    default: ;
      return 1;
    case 0x14: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) * 4);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x34)))));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13;
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x34))) >> 0x1f & 3U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x34))) >> 2)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x4;
      F_00da1030(puVar13,0,(int)((int)(uintptr_t)puVar12) * 4);
      (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = (undefined4 *)0x0;
      if (0 < (int)puVar12) {
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x5c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(undefined4 * PTR32 *)(gen_frame + 0x40)))));
          (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = puVar13;
          if (puVar13 != (undefined4 *)0x0) {
            *(short *)((int)puVar13 + 6) = *(short *)((int)puVar13 + 6) + 1;
            puVar13[2] = puVar13[2] + 1;
          }
          F_00e23570((*(undefined * PTR32 *)&gen_args[4]),&(*(undefined4 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 * PTR32 *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0x44)));
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x50)) != (undefined4 *)0x0) {
            *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x50)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x50)) + 6) + -1;
            piVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x50)) + 2;
            *piVar15 = *piVar15 + -1;
            if (*piVar15 == 0) {
              ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x50)))((*(undefined4 * PTR32 *)(gen_frame + 0x50)),1);
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 1;
          puVar13 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x40)) + 1);
          (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar13;
        } while ((int)puVar13 < (int)puVar12);
      }
      break;
    case 0x19: ;
      puVar13 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x5c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),0)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar13;
      if (puVar13 != (undefined4 *)0x0) {
        *(short *)((int)puVar13 + 6) = *(short *)((int)puVar13 + 6) + 1;
        puVar13[2] = puVar13[2] + 1;
      }
      puVar13 = (undefined4 *)F_00e20150((*(undefined * PTR32 *)(gen_frame + 0x48)),(*(int *)&gen_args[2]),&(*(undefined4 * PTR32 *)(gen_frame + 0x58)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = puVar13;
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0) {
        *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 6) + -1;
        piVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 2;
        *piVar15 = *piVar15 + -1;
        if (*piVar15 == 0) {
          ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x58)))((*(undefined4 * PTR32 *)(gen_frame + 0x58)),1);
        }
      }
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x50)) == (undefined4 *)0x0) goto switchD_00e2051b_caseD_0;
      uVar8 = F_00d929c0((*(undefined4 * PTR32 *)(gen_frame + 0x50)));
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)(uVar8 * (int)puVar12);
      puVar16 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar16;
      uVar8 = F_00d929c0((*(undefined4 * PTR32 *)(gen_frame + 0x50)));
      puVar16 = (undefined4 *)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) / (int)uVar8);
      puVar13 = (undefined4 *)F_00d929c0((*(undefined4 * PTR32 *)(gen_frame + 0x50)));
      piVar15 = ((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3])));
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar13;
      puVar13 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar15 + 0x14))(piVar15)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      uVar8 = F_00d929c0((*(undefined4 * PTR32 *)(gen_frame + 0x50)));
      F_00da1030((*(undefined4 * PTR32 *)(gen_frame + 0x28)),0,uVar8 * (int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          if ((*(uint *)(gen_frame + 0x54)) != 0) break;
          uVar8 = F_00d929c0((*(undefined4 * PTR32 *)(gen_frame + 0x50)));
          piVar15 = ((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3])));
          (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = (undefined4 *)(uVar8 * (*(uint *)(gen_frame + 0x44)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x28)));
          puVar13 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar15 + 0x5c))(piVar15,(*(uint *)(gen_frame + 0x44)))));
          (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = puVar13;
          if (puVar13 != (undefined4 *)0x0) {
            *(short *)((int)puVar13 + 6) = *(short *)((int)puVar13 + 6) + 1;
            puVar13[2] = puVar13[2] + 1;
          }
          uVar8 = F_00e22120((*(undefined * PTR32 *)(gen_frame + 0x48)),(*(undefined4 * PTR32 *)(gen_frame + 0x34)),&(*(undefined4 * PTR32 *)(gen_frame + 0x38)),(*(undefined * PTR32 *)&gen_args[4]));
          (*(uint *)(gen_frame + 0x54)) = uVar8;
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x38)) != (undefined4 *)0x0) {
            *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x38)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x38)) + 6) + -1;
            piVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x38)) + 2;
            *piVar15 = *piVar15 + -1;
            if (*piVar15 == 0) {
              ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x38)))((*(undefined4 * PTR32 *)(gen_frame + 0x38)),1);
            }
          }
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) < 1) goto switchD_00e2051b_caseD_0;
      break;
    case 0x1c: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) * 8);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x34)))));
      (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar13;
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x34))) >> 0x1f & 7U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x34))) >> 3)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x8;
      F_00da1030(puVar13,0,(int)((int)(uintptr_t)puVar12) * 8);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)0x0;
      if (0 < (int)puVar12) {
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x5c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
          (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = puVar13;
          if (puVar13 != (undefined4 *)0x0) {
            *(short *)((int)puVar13 + 6) = *(short *)((int)puVar13 + 6) + 1;
            puVar13[2] = puVar13[2] + 1;
          }
          F_00e23600((*(undefined * PTR32 *)&gen_args[4]),&(*(undefined4 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 * PTR32 *)(gen_frame + 0x40)),(*(uint *)(gen_frame + 0x44)));
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x50)) != (undefined4 *)0x0) {
            *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x50)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x50)) + 6) + -1;
            piVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x50)) + 2;
            *piVar15 = *piVar15 + -1;
            if (*piVar15 == 0) {
              ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x50)))((*(undefined4 * PTR32 *)(gen_frame + 0x50)),1);
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = (*(undefined4 * PTR32 *)(gen_frame + 0x40)) + 2;
          puVar13 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 1);
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13;
        } while ((int)puVar13 < (int)puVar12);
      }
      break;
    case 0x1d: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) * 4);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x34)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x34))) >> 0x1f & 3U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x34))) >> 2)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x4;
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)0x0;
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar13;
        do {
          if ((*(uint *)(gen_frame + 0x54)) != 0) break;
          (*(undefined4 *)(gen_frame + 0x4c)) = *(*(undefined4 * PTR32 *)&gen_args[3]);
          (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
          uVar8 = F_00e23690((*(undefined * PTR32 *)(gen_frame + 0x48)),(*(undefined4 * PTR32 *)(gen_frame + 0x40)),(uint)*(byte *)((*(int *)&gen_args[2]) + 0xd),(uint)&(*(undefined4 *)(gen_frame + 0x4c)),0,
                               (*(uint *)(gen_frame + 0x44)),(*(undefined * PTR32 *)&gen_args[4]));
          (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = (*(undefined4 * PTR32 *)(gen_frame + 0x40)) + 1;
          (*(uint *)(gen_frame + 0x54)) = uVar8;
          puVar13 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 1);
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13;
        } while ((int)puVar13 < (int)puVar12);
      }
      break;
    case 0x1e: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) * 4);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 3U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 2)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x4;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x54))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x34))[(*(uint *)(gen_frame + 0x44))] = uVar8;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0x20: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) * 2);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = (undefined4 *)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) / 2);
      (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x2;
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x3c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))),(*(uint *)(gen_frame + 0x44)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)extraout_ST0_00)));
          *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x40)) + (*(uint *)(gen_frame + 0x44)) * 2) =
               (short)((uint)gen_fl2bits((float)extraout_ST0_00) >> 0x10);
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0x21: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *(int * PTR32 *)((int)pvVar10 + 0x2c);
      pcVar3 = *(gen_code32 *)(*piVar15 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = (undefined4 *)((int)((int)(uintptr_t)puVar12) * 4);
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x34)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x34))) >> 0x1f & 3U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x34))) >> 2)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x4;
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)0x0;
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar13;
        do {
          if ((*(uint *)(gen_frame + 0x54)) != 0) break;
          (*(undefined4 *)(gen_frame + 0x4c)) = *(*(undefined4 * PTR32 *)&gen_args[3]);
          (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
          uVar8 = F_00e23690((*(undefined * PTR32 *)(gen_frame + 0x48)),(*(undefined4 * PTR32 *)(gen_frame + 0x40)),(uint)*(byte *)((*(int *)&gen_args[2]) + 0xd),(uint)&(*(undefined4 *)(gen_frame + 0x4c)),0,
                               (*(uint *)(gen_frame + 0x44)),(*(undefined * PTR32 *)&gen_args[4]));
          (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = (*(undefined4 * PTR32 *)(gen_frame + 0x40)) + 1;
          (*(uint *)(gen_frame + 0x54)) = uVar8;
          puVar13 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 1);
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13;
        } while ((int)puVar13 < (int)puVar12);
      }
    }
    pvVar7 = (*(undefined * PTR32 *)&gen_args[4]);
    (*(float * PTR32 *)&gen_args[1])[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)(puVar12)));
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)((int)((int)(uintptr_t)puVar12) * (int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)));
    piVar15 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 0xc)));
    *(*(float * PTR32 *)&gen_args[1]) = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x28)))));
    if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 0x10))) == (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 0x14))) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516a4),piVar15,8);
    }
    iVar14 = *(int *)((int)pvVar7 + 0x10);
    pfVar1 = (float *)(*piVar15 + iVar14 * 8);
    *(int *)((int)pvVar7 + 0x10) = iVar14 + 1;
    *pfVar1 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x28)))));
    pfVar1[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)&gen_args[3]))));
switchD_00e2051b_caseD_0: ;
    if (*(char *)((*(int *)&gen_args[2]) + 0xc) == '\x16') {
      if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 4) == 0) {
        puVar16 = (undefined4 *)((uint)puVar16 | 0x80000000);
      }
      (*(float * PTR32 *)&gen_args[1])[2] = ((float)gen_bits2f((unsigned int)(uintptr_t)(puVar16)));
    }
    return (*(uint *)(gen_frame + 0x54));
  }
  iVar17 = (int)*(short *)(uVar8 + 8);
  (*(float *)(gen_frame + 0x2c)) = (*(float *)(gen_frame + 0xc));
  iVar14 = (int)gen_fl2bits((*(float *)(gen_frame + 0xc))) * iVar17;
  (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)iVar14;
  pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  fVar11 = gen_bits2f(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar10 + 0x2c) + 0xc))))
                                (*(int * PTR32 *)((int)pvVar10 + 0x2c),&(*(undefined4 * PTR32 *)&gen_args[3])));
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar11)));
  (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0xc));
  (*(int *)(gen_frame + 0x24)) = iVar17;
  (*(undefined4 *)(gen_frame + 0x18)) = 1;
  (*(float *)(gen_frame + 0x1c)) = fVar11;
  (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) / iVar17)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
  switch((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x3c)))) {
  case (undefined4 *)0xc: ;
  case (undefined4 *)0xd: ;
    (*(undefined4 *)(gen_frame + 0x18)) = 4;
    break;
  case (undefined4 *)0xe: ;
  case (undefined4 *)0xf: ;
  case (undefined4 *)0x10: ;
    (*(undefined4 *)(gen_frame + 0x18)) = 0xc;
    break;
  case (undefined4 *)0x11: ;
  case (undefined4 *)0x12: ;
    (*(undefined4 *)(gen_frame + 0x18)) = 0x10;
    break;
  default: ;
    goto switchD_00e20467_default;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (undefined4 *)0xb;
switchD_00e20467_default: ;
  F_00dbc0e0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
  if (0 < iVar17) {
    *(*(float * PTR32 *)&gen_args[1]) = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x28)))));
    (*(float * PTR32 *)&gen_args[1])[1] = (*(float *)(gen_frame + 0x2c));
    F_00e23500((*(undefined * PTR32 *)&gen_args[4]),(*(undefined4 * PTR32 *)(gen_frame + 0x28)),iVar14);
  }
  if (*(char *)((*(int *)&gen_args[2]) + 0xc) == '\x16') {
    if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 4) == 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (undefined4 *)((uint)(*(undefined4 * PTR32 *)(gen_frame + 0x30)) | 0x80000000);
    }
    (*(float * PTR32 *)&gen_args[1])[2] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x30)))));
  }
  return 0;
}

/* ref: FUN_00e21460 */
uint F_00e21460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xe21460u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  code * pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 uVar11;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined8 uVar12;
  
  puVar6 = (*(undefined4 * PTR32 *)&gen_args[3]);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x18)) = 0;
  uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 0x14))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))));
  piVar7 = (*(int * PTR32 *)&gen_args[5]);
  if (uVar8 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(uint *)(gen_frame + 0x18));
    return 0;
  }
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x10)) = (ushort)~*(ushort *)((*(uint *)&gen_args[2]) + 0x10) >> 9 & 1;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((*(uint *)&gen_args[2]) + 0xd))) {
  case 0: ;
    goto switchD_00e214b9_caseD_0;
  case 1: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x1;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x4c))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]));
        *((bool *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + *piVar7))) = uVar8 != 0;
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 2: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x1;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x4c))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]));
        *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + *piVar7))) = (char)uVar8;
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 3: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x1;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x4c))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]));
        *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + *piVar7))) = (char)uVar8;
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 4: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x1;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x4c))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]));
        *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + *piVar7))) = (char)uVar8;
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 5: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x2;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x4c))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]));
        *((short *)GEN_TOP((*piVar7 + (int)(*(undefined * PTR32 *)&gen_args[4]) * 2))) = (short)uVar8;
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 6: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x2;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x4c))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]));
        *((short *)GEN_TOP((*piVar7 + (int)(*(undefined * PTR32 *)&gen_args[4]) * 2))) = (short)uVar8;
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 7: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x4;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x4c))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]));
        *((uint *)GEN_TOP((*piVar7 + (int)(*(undefined * PTR32 *)&gen_args[4]) * 4))) = uVar8;
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 8: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x4;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x4c))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]));
        *((uint *)GEN_TOP((*piVar7 + (int)(*(undefined * PTR32 *)&gen_args[4]) * 4))) = uVar8;
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 9: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x8;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar12 = ((gen_lcode *)*(gen_code32 *)(*(int *)*puVar6 + 0x54))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]));
        uVar11 = (undefined4)((ulonglong)uVar12 >> 0x20);
        iVar1 = *piVar7;
        (*(int *)(gen_frame + 0x4)) = uVar11;
        *((int *)GEN_TOP((iVar1 + (int)(*(undefined * PTR32 *)&gen_args[4]) * 8))) = (int)uVar12;
        *((undefined4 *)GEN_TOP((iVar1 + 4 + (int)(*(undefined * PTR32 *)&gen_args[4]) * 8))) = uVar11;
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 10: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x8;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar12 = ((gen_lcode *)*(gen_code32 *)(*(int *)*puVar6 + 0x54))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]));
        uVar11 = (undefined4)((ulonglong)uVar12 >> 0x20);
        iVar1 = *piVar7;
        (*(int *)(gen_frame + 0x4)) = uVar11;
        *((int *)GEN_TOP((iVar1 + (int)(*(undefined * PTR32 *)&gen_args[4]) * 8))) = (int)uVar12;
        *((undefined4 *)GEN_TOP((iVar1 + 4 + (int)(*(undefined * PTR32 *)&gen_args[4]) * 8))) = uVar11;
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 0xb: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x4;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)*puVar6 + 0x3c))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]));
        *((float *)GEN_TOP((*piVar7 + (int)(*(undefined * PTR32 *)&gen_args[4]) * 4))) = (float)extraout_ST0;
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 0xc: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x10;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      (*(uint *)&gen_args[2]) = 0;
      do {
        puVar10 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x2c))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]))));
        uVar11 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        puVar9 = (undefined4 *)(*piVar7 + (*(uint *)&gen_args[2]));
        *puVar9 = *puVar10;
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + 0x10;
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 0xd: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x10;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      (*(uint *)&gen_args[2]) = 0;
      do {
        puVar10 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x2c))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]))));
        uVar11 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        puVar9 = (undefined4 *)(*piVar7 + (*(uint *)&gen_args[2]));
        *puVar9 = *puVar10;
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + 0x10;
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 0xe: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x30;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      (*(uint *)&gen_args[2]) = 0;
      do {
        puVar10 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x2c))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]))));
        iVar1 = *piVar7;
        uVar11 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        puVar9 = (undefined4 *)(iVar1 + (*(uint *)&gen_args[2]));
        *puVar9 = *puVar10;
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar11 = puVar10[5];
        uVar4 = puVar10[6];
        uVar5 = puVar10[7];
        puVar9 = (undefined4 *)(iVar1 + 0x10 + (*(uint *)&gen_args[2]));
        *puVar9 = puVar10[4];
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar11 = puVar10[9];
        uVar4 = puVar10[10];
        uVar5 = puVar10[0xb];
        puVar9 = (undefined4 *)(iVar1 + 0x20 + (*(uint *)&gen_args[2]));
        *puVar9 = puVar10[8];
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + 0x30;
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 0xf: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x30;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      (*(uint *)&gen_args[2]) = 0;
      do {
        puVar10 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x2c))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]))));
        iVar1 = *piVar7;
        uVar11 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        puVar9 = (undefined4 *)(iVar1 + (*(uint *)&gen_args[2]));
        *puVar9 = *puVar10;
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar11 = puVar10[5];
        uVar4 = puVar10[6];
        uVar5 = puVar10[7];
        puVar9 = (undefined4 *)(iVar1 + 0x10 + (*(uint *)&gen_args[2]));
        *puVar9 = puVar10[4];
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar11 = puVar10[9];
        uVar4 = puVar10[10];
        uVar5 = puVar10[0xb];
        puVar9 = (undefined4 *)(iVar1 + 0x20 + (*(uint *)&gen_args[2]));
        *puVar9 = puVar10[8];
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + 0x30;
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 0x10: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x30;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      (*(uint *)&gen_args[2]) = 0;
      do {
        puVar10 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x2c))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]))));
        iVar1 = *piVar7;
        uVar11 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        puVar9 = (undefined4 *)(iVar1 + (*(uint *)&gen_args[2]));
        *puVar9 = *puVar10;
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar11 = puVar10[5];
        uVar4 = puVar10[6];
        uVar5 = puVar10[7];
        puVar9 = (undefined4 *)(iVar1 + 0x10 + (*(uint *)&gen_args[2]));
        *puVar9 = puVar10[4];
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar11 = puVar10[9];
        uVar4 = puVar10[10];
        uVar5 = puVar10[0xb];
        puVar9 = (undefined4 *)(iVar1 + 0x20 + (*(uint *)&gen_args[2]));
        *puVar9 = puVar10[8];
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + 0x30;
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 0x11: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x40;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      (*(uint *)&gen_args[2]) = 0;
      do {
        puVar9 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x2c))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]))));
        uVar11 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        puVar10 = (undefined4 *)(*piVar7 + (*(uint *)&gen_args[2]));
        *puVar10 = *puVar9;
        puVar10[1] = uVar11;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar11 = puVar9[5];
        uVar4 = puVar9[6];
        uVar5 = puVar9[7];
        puVar10[4] = puVar9[4];
        puVar10[5] = uVar11;
        puVar10[6] = uVar4;
        puVar10[7] = uVar5;
        uVar11 = puVar9[9];
        uVar4 = puVar9[10];
        uVar5 = puVar9[0xb];
        puVar10[8] = puVar9[8];
        puVar10[9] = uVar11;
        puVar10[10] = uVar4;
        puVar10[0xb] = uVar5;
        uVar11 = puVar9[0xd];
        uVar4 = puVar9[0xe];
        uVar5 = puVar9[0xf];
        puVar10[0xc] = puVar9[0xc];
        puVar10[0xd] = uVar11;
        puVar10[0xe] = uVar4;
        puVar10[0xf] = uVar5;
        (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + 0x40;
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 0x12: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x40;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      (*(uint *)&gen_args[2]) = 0;
      do {
        puVar9 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x2c))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]))));
        uVar11 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        puVar10 = (undefined4 *)(*piVar7 + (*(uint *)&gen_args[2]));
        *puVar10 = *puVar9;
        puVar10[1] = uVar11;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar11 = puVar9[5];
        uVar4 = puVar9[6];
        uVar5 = puVar9[7];
        puVar10[4] = puVar9[4];
        puVar10[5] = uVar11;
        puVar10[6] = uVar4;
        puVar10[7] = uVar5;
        uVar11 = puVar9[9];
        uVar4 = puVar9[10];
        uVar5 = puVar9[0xb];
        puVar10[8] = puVar9[8];
        puVar10[9] = uVar11;
        puVar10[10] = uVar4;
        puVar10[0xb] = uVar5;
        uVar11 = puVar9[0xd];
        uVar4 = puVar9[0xe];
        uVar5 = puVar9[0xf];
        puVar10[0xc] = puVar9[0xc];
        puVar10[0xd] = uVar11;
        puVar10[0xe] = uVar4;
        puVar10[0xf] = uVar5;
        (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + 0x40;
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  default: ;
    return 1;
  case 0x14: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    iVar1 = *piVar7;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x4;
    F_00da1030(iVar1,0,(uVar8 & 0xffff) * 4);
    (*(int * PTR32 *)&gen_args[5]) = (int *)0x0;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    if (0 < (int)uVar8) {
      do {
        (*(uint *)&gen_args[2]) = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x5c))((int *)*puVar6,(*(int * PTR32 *)&gen_args[5]));
        if ((*(uint *)&gen_args[2]) != 0) {
          *(short *)((*(uint *)&gen_args[2]) + 6) = *(short *)((*(uint *)&gen_args[2]) + 6) + 1;
          *(int *)((*(uint *)&gen_args[2]) + 8) = *(int *)((*(uint *)&gen_args[2]) + 8) + 1;
        }
        F_00e23570((*(undefined * PTR32 *)&gen_args[4]),&(*(uint *)&gen_args[2]),*piVar7 + (int)(*(int * PTR32 *)&gen_args[5]) * 4,(*(uint *)(gen_frame + 0x10)));
        if ((*(uint *)&gen_args[2]) != 0) {
          *(short *)((*(uint *)&gen_args[2]) + 6) = *(short *)((*(uint *)&gen_args[2]) + 6) + -1;
          piVar2 = (int *)((*(uint *)&gen_args[2]) + 8);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(*(uint *)&gen_args[2]))))((*(uint *)&gen_args[2]),1);
          }
        }
        (*(int * PTR32 *)&gen_args[5]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[5]) + 1)));
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(int * PTR32 *)&gen_args[5]) < (int)uVar8);
    }
    break;
  case 0x19: ;
    (*(undefined4 * PTR32 *)&gen_args[3]) = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x5c))((int *)*puVar6,0)));
    if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
      *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) + 1;
      (*(undefined4 * PTR32 *)&gen_args[3])[2] = (*(undefined4 * PTR32 *)&gen_args[3])[2] + 1;
    }
    (*(uint *)&gen_args[2]) = F_00e20150((*(undefined * PTR32 *)(gen_frame + 0xc)),(*(uint *)&gen_args[2]),&(*(undefined4 * PTR32 *)&gen_args[3]));
    if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
      *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) + -1;
      piVar2 = (*(undefined4 * PTR32 *)&gen_args[3]) + 2;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        ((code *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))))((*(undefined4 * PTR32 *)&gen_args[3]),1);
      }
    }
    if ((*(uint *)&gen_args[2]) == 0) {
      return (*(uint *)(gen_frame + 0x14));
    }
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)F_00d929c0((*(uint *)&gen_args[2]));
    (*(int * PTR32 *)&gen_args[5]) = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6)));
    uVar8 = F_00d929c0((*(uint *)&gen_args[2]));
    F_00da1030(*piVar7,0,uVar8 * (int)(*(int * PTR32 *)&gen_args[5]));
    (*(int * PTR32 *)&gen_args[5]) = (int *)0x0;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    if (0 < (int)uVar8) {
      do {
        if ((*(uint *)(gen_frame + 0x14)) != 0) break;
        uVar8 = F_00d929c0((*(uint *)&gen_args[2]));
        (*(uint *)(gen_frame + 0x10)) = *piVar7 + uVar8 * (int)(*(int * PTR32 *)&gen_args[5]);
        puVar9 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x5c))((int *)*puVar6,(*(int * PTR32 *)&gen_args[5]))));
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar9;
        if (puVar9 != (undefined4 *)0x0) {
          *(short *)((int)puVar9 + 6) = *(short *)((int)puVar9 + 6) + 1;
          puVar9[2] = puVar9[2] + 1;
        }
        uVar8 = F_00e22120((*(undefined * PTR32 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x10)),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),(*(undefined * PTR32 *)&gen_args[4]));
        (*(uint *)(gen_frame + 0x14)) = uVar8;
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) != (undefined4 *)0x0) {
          *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 6) + -1;
          piVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 2;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x8)))((*(undefined4 * PTR32 *)(gen_frame + 0x8)),1);
          }
        }
        (*(int * PTR32 *)&gen_args[5]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[5]) + 1)));
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(int * PTR32 *)&gen_args[5]) < (int)uVar8);
    }
    if ((int)(*(undefined4 * PTR32 *)&gen_args[3]) < 1) {
      return (*(uint *)(gen_frame + 0x14));
    }
    break;
  case 0x1c: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    iVar1 = *piVar7;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x8;
    F_00da1030(iVar1,0,(uVar8 & 0xffff) * 8);
    (*(int * PTR32 *)&gen_args[5]) = (int *)0x0;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    if (0 < (int)uVar8) {
      do {
        (*(uint *)&gen_args[2]) = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x5c))((int *)*puVar6,(*(int * PTR32 *)&gen_args[5]));
        if ((*(uint *)&gen_args[2]) != 0) {
          *(short *)((*(uint *)&gen_args[2]) + 6) = *(short *)((*(uint *)&gen_args[2]) + 6) + 1;
          *(int *)((*(uint *)&gen_args[2]) + 8) = *(int *)((*(uint *)&gen_args[2]) + 8) + 1;
        }
        F_00e23600((*(undefined * PTR32 *)&gen_args[4]),&(*(uint *)&gen_args[2]),*piVar7 + (int)(*(int * PTR32 *)&gen_args[5]) * 8,(*(uint *)(gen_frame + 0x10)));
        if ((*(uint *)&gen_args[2]) != 0) {
          *(short *)((*(uint *)&gen_args[2]) + 6) = *(short *)((*(uint *)&gen_args[2]) + 6) + -1;
          piVar2 = (int *)((*(uint *)&gen_args[2]) + 8);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(*(uint *)&gen_args[2]))))((*(uint *)&gen_args[2]),1);
          }
        }
        (*(int * PTR32 *)&gen_args[5]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[5]) + 1)));
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(int * PTR32 *)&gen_args[5]) < (int)uVar8);
    }
    break;
  case 0x1d: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x4;
    (*(int * PTR32 *)&gen_args[5]) = (int *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        if ((*(uint *)(gen_frame + 0x14)) != 0) break;
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar6;
        (*(int *)(gen_frame + 0x4)) = (int)(*(int * PTR32 *)&gen_args[5]);
        uVar8 = F_00e23690((*(undefined * PTR32 *)(gen_frame + 0xc)),*piVar7 + (int)(*(int * PTR32 *)&gen_args[5]) * 4,(uint)*(byte *)((*(uint *)&gen_args[2]) + 0xd),
                             (uint)&(*(undefined4 *)(gen_frame + 0x0)),0,(*(uint *)(gen_frame + 0x10)),(*(undefined * PTR32 *)&gen_args[4]));
        (*(int * PTR32 *)&gen_args[5]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[5]) + 1)));
        (*(uint *)(gen_frame + 0x14)) = uVar8;
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(int * PTR32 *)&gen_args[5]) < (int)uVar8);
    }
    break;
  case 0x1e: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x4;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar12 = ((gen_lcode *)*(gen_code32 *)(*(int *)*puVar6 + 0x54))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]));
        (*(int *)(gen_frame + 0x4)) = (int)((ulonglong)uVar12 >> 0x20);
        *((int *)GEN_TOP((*piVar7 + (int)(*(undefined * PTR32 *)&gen_args[4]) * 4))) = (int)uVar12;
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 0x20: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x2;
    (*(undefined * PTR32 *)&gen_args[4]) = (undefined *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*(int *)*puVar6 + 0x3c))((int *)*puVar6,(*(undefined * PTR32 *)&gen_args[4]));
        (*(uint *)&gen_args[2]) = (uint)gen_fl2bits((float)extraout_ST0_00);
        *((short *)GEN_TOP((*piVar7 + (int)(*(undefined * PTR32 *)&gen_args[4]) * 2))) = (short)((*(uint *)&gen_args[2]) >> 0x10);
        (*(undefined * PTR32 *)&gen_args[4]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[4]) + 1)));
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(undefined * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 0x21: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
    piVar2 = (int *)*puVar6;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x4;
    (*(int * PTR32 *)&gen_args[5]) = (int *)0x0;
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        if ((*(uint *)(gen_frame + 0x14)) != 0) break;
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar6;
        (*(int *)(gen_frame + 0x4)) = (int)(*(int * PTR32 *)&gen_args[5]);
        uVar8 = F_00e23690((*(undefined * PTR32 *)(gen_frame + 0xc)),*piVar7 + (int)(*(int * PTR32 *)&gen_args[5]) * 4,(uint)*(byte *)((*(uint *)&gen_args[2]) + 0xd),
                             (uint)&(*(undefined4 *)(gen_frame + 0x0)),0,(*(uint *)(gen_frame + 0x10)),(*(undefined * PTR32 *)&gen_args[4]));
        (*(int * PTR32 *)&gen_args[5]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[5]) + 1)));
        (*(uint *)(gen_frame + 0x14)) = uVar8;
        uVar8 = ((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x14))((int *)*puVar6);
      } while ((int)(*(int * PTR32 *)&gen_args[5]) < (int)uVar8);
    }
  }
  *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 2))) = (short)*piVar7 - (short)(*(undefined4 * PTR32 *)&gen_args[1]);
  *piVar7 = *piVar7 + (((*(uint *)(gen_frame + 0x18)) & 0xffff) * (int)(*(undefined4 * PTR32 *)&gen_args[3]) + 0xf & 0xfffffff0);
  *(undefined2 *)(*(undefined4 * PTR32 *)&gen_args[1]) = (undefined2)(*(uint *)(gen_frame + 0x18));
switchD_00e214b9_caseD_0: ;
  return (*(uint *)(gen_frame + 0x14));
}

/* ref: FUN_00e22120 */
uint F_00e22120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe22120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint * puVar2;
  code * pcVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  uint * puVar8;
  int * piVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  LPVOID pvVar12;
  uint * puVar13;
  int iVar14;
  int iVar15;
  
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x0;
  uVar5 = F_00e20100(this,param_2);
  (*(uint *)(gen_frame + 0x38)) = uVar5;
  uVar6 = F_00d929c0(uVar5);
  (*(int *)(gen_frame + 0x30)) = (uVar6 + 0xf & 0xfffffff0) + param_1;
  do {
    if (uVar5 == 0) {
      return (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x58));
    }
    (*(int *)(gen_frame + 0x48)) = 0;
    uVar6 = F_00d92850(uVar5);
    if (0 < (int)uVar6) {
      do {
        puVar7 = (undefined4 *)F_00d92860(uVar5,(*(int *)(gen_frame + 0x48)));
        puVar13 = ((uint *)GEN_TOP(((uint)*(ushort *)((int)puVar7 + 0x12) + param_1)));
        (*(uint *)(gen_frame + 0x4c)) = (uint)*(byte *)(puVar7 + 3);
        ((code *)*(gen_code32 *)(*(int *)*param_2 + 0xc))((int *)*param_2,&(*(int * PTR32 *)(gen_frame + 0x28)),*puVar7);
        if (((*(int * PTR32 *)(gen_frame + 0x28)) == (int *)0x0) ||
           (uVar6 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x68))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c))), uVar6 == 0)) {
          (*(undefined4 *)(gen_frame + 0x0)) = 0;
          (*(undefined4 *)(gen_frame + 0x4)) = 0;
          (*(undefined4 *)(gen_frame + 0x8)) = 0;
          (*(int *)(gen_frame + 0xc)) = 0;
          if ((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0) {
            ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 100))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x0)));
          }
          if (*(char *)(puVar7 + 3) == '\x16') {
            puVar13[2] = 0x80000000;
          }
          uVar6 = F_00d92ab0(uVar5,(*(int *)(gen_frame + 0x48)));
          if ((uVar6 == 0) ||
             (uVar6 = ((code *)*(gen_code32 *)(*(int *)*param_2 + 0x6c))((int *)*param_2), uVar6 == 0)) {
            if ((((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0) && ((*(int *)(gen_frame + 0xc)) != 0)) ||
               (((*(uint *)(gen_frame + 0x4c)) == 0x19 && ((*(ushort *)(puVar7 + 4) & 0x400) == 0)))) goto LAB_00e22255;
          }
          else {
            uVar6 = F_00da6030(puVar7);
            uVar5 = F_00d92bc0(uVar5,(*(int *)(gen_frame + 0x48)));
            F_00da1010(puVar13,uVar5,uVar6);
          }
          goto LAB_00e22812;
        }
LAB_00e22255: ;
        uVar5 = F_00da5ff0(puVar7);
        if (uVar5 == 0) {
          uVar5 = 1;
          puVar8 = (uint *)F_00da6030(puVar7);
        }
        else {
          uVar5 = F_00da5ff0(puVar7);
          uVar6 = F_00da6030(puVar7);
          puVar8 = (uint *)((int)uVar6 / (int)uVar5);
        }
        (*(uint * PTR32 *)(gen_frame + 0x40)) = puVar8;
        uVar6 = (ushort)~*(ushort *)(puVar7 + 4) >> 9 & 1;
        (*(uint *)(gen_frame + 0x50)) = uVar6;
        switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x4c)))) {
        case 1: ;
        case 2: ;
        case 3: ;
        case 4: ;
        case 5: ;
        case 6: ;
        case 7: ;
        case 8: ;
        case 9: ;
        case 10: ;
        case 0xb: ;
        case 0xc: ;
        case 0xd: ;
        case 0xe: ;
        case 0xf: ;
        case 0x10: ;
        case 0x11: ;
        case 0x12: ;
        case 0x19: ;
        case 0x1c: ;
        case 0x1d: ;
        case 0x1e: ;
        case 0x20: ;
        case 0x21: ;
          if (uVar5 == 1) {
            iVar14 = param_3;
            uVar5 = F_00da5fd0(puVar7);
            puVar7 = (undefined4 *)
                     F_00e23ad0((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar13,(*(uint *)(gen_frame + 0x4c)),(uint)&(*(int * PTR32 *)(gen_frame + 0x28)),uVar5,uVar6,iVar14);
            (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
          }
          else {
            piVar9 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
            if (piVar9 != (int *)0x0) {
              *(short *)((int)piVar9 + 6) = *(short *)((int)piVar9 + 6) + 1;
              piVar9[2] = piVar9[2] + 1;
            }
            (*(uint *)(gen_frame + 0x44)) = 0;
            uVar5 = ((code *)*(gen_code32 *)(*piVar9 + 0x14))(piVar9);
            if (0 < (int)uVar5) {
              do {
                if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0) break;
                (*(int * PTR32 *)(gen_frame + 0x20)) = piVar9;
                (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x44));
                uVar5 = (*(uint *)(gen_frame + 0x50));
                iVar14 = param_3;
                uVar6 = F_00da5fd0(puVar7);
                puVar10 = (undefined4 *)
                          F_00e23690((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar13,(*(uint *)(gen_frame + 0x4c)),(uint)&(*(int * PTR32 *)(gen_frame + 0x20)),uVar6,uVar5,iVar14);
                iVar14 = *piVar9;
                (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) + 1;
                puVar13 = (uint *)((int)puVar13 + (int)(*(uint * PTR32 *)(gen_frame + 0x40)));
                (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar10;
                uVar5 = ((code *)*(gen_code32 *)(iVar14 + 0x14))(piVar9);
              } while ((int)(*(uint *)(gen_frame + 0x44)) < (int)uVar5);
            }
            *(short *)((int)piVar9 + 6) = *(short *)((int)piVar9 + 6) + -1;
            piVar1 = piVar9 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              ((code *)*(gen_code32 *)*piVar9)(piVar9,1);
            }
          }
          break;
        default: ;
          goto switchD_00e222a6_caseD_13;
        case 0x14: ;
          if (*(char *)((int)puVar7 + 0xd) == '\x02') {
            if (uVar5 == 1) {
              puVar7 = (undefined4 *)
                       F_00e23ad0((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar13,0x1d,(uint)&(*(int * PTR32 *)(gen_frame + 0x28)),0,uVar6,param_3);
              (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
            }
            else {
              puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
              if (puVar8 != (uint *)0x0) {
                *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
                puVar8[2] = puVar8[2] + 1;
              }
              iVar14 = 0;
              uVar5 = ((code *)*(gen_code32 *)(*puVar8 + 0x14))(puVar8);
              if (0 < (int)uVar5) {
                do {
                  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0) break;
                  (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar8;
                  (*(int *)(gen_frame + 0x1c)) = iVar14;
                  puVar7 = (undefined4 *)
                           F_00e23690((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar13,0x1d,(uint)&(*(uint * PTR32 *)(gen_frame + 0x18)),0,(*(uint *)(gen_frame + 0x50)),param_3);
                  puVar13 = (uint *)((int)puVar13 + (int)(*(uint * PTR32 *)(gen_frame + 0x40)));
                  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
                  iVar14 = iVar14 + 1;
                  uVar5 = ((code *)*(gen_code32 *)(*puVar8 + 0x14))(puVar8);
                } while (iVar14 < (int)uVar5);
              }
              *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + -1;
              puVar13 = puVar8 + 2;
              *puVar13 = *puVar13 - 1;
              if (*puVar13 == 0) {
                puVar7 = (undefined4 *)*puVar8;
                goto LAB_00e22806;
              }
            }
            break;
          }
          if (*(char *)((int)puVar7 + 0xd) != '\x19') break;
          if (uVar5 == 1) {
            puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
            pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x54));
            (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar8;
            if (puVar8 != (uint *)0x0) {
              *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
              puVar8[2] = puVar8[2] + 1;
            }
            uVar5 = (*(uint *)(gen_frame + 0x50));
            iVar14 = param_3;
            uVar6 = F_00e20150((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar7,&(*(uint * PTR32 *)(gen_frame + 0x3c)));
            puVar7 = (undefined4 *)
                     F_00e23ad0(pvVar4,puVar13,(*(uint *)(gen_frame + 0x4c)),(uint)&(*(int * PTR32 *)(gen_frame + 0x28)),uVar6,uVar5,iVar14);
            (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
            if (puVar8 != (uint *)0x0) {
              *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + -1;
              puVar13 = puVar8 + 2;
              *puVar13 = *puVar13 - 1;
              if (*puVar13 == 0) {
                puVar7 = (undefined4 *)*puVar8;
                goto LAB_00e22806;
              }
            }
            break;
          }
          puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
          if (puVar8 != (uint *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          (*(uint *)(gen_frame + 0x44)) = 0;
          uVar5 = ((code *)*(gen_code32 *)(*puVar8 + 0x14))(puVar8);
          if (0 < (int)uVar5) {
            (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar13;
            do {
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0) break;
              puVar10 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*puVar8 + 0x5c))(puVar8,(*(uint *)(gen_frame + 0x44)))));
              (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar10;
              if (puVar10 != (undefined4 *)0x0) {
                *(short *)((int)puVar10 + 6) = *(short *)((int)puVar10 + 6) + 1;
                puVar10[2] = puVar10[2] + 1;
              }
              (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x44));
              (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar8;
              uVar5 = (*(uint *)(gen_frame + 0x50));
              iVar14 = param_3;
              uVar6 = F_00e20150((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar7,&(*(undefined4 * PTR32 *)(gen_frame + 0x58)));
              puVar11 = (undefined4 *)
                        F_00e23690((*(undefined * PTR32 *)(gen_frame + 0x54)),(*(uint * PTR32 *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0x4c)),(uint)&(*(uint * PTR32 *)(gen_frame + 0x10)),uVar6,uVar5,iVar14);
              (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar11;
              if (puVar10 != (undefined4 *)0x0) {
                *(short *)((int)puVar10 + 6) = *(short *)((int)puVar10 + 6) + -1;
                piVar9 = puVar10 + 2;
                *piVar9 = *piVar9 + -1;
                if (*piVar9 == 0) {
                  ((code *)*(gen_code32 *)*puVar10)(puVar10,1);
                }
              }
              uVar5 = *puVar8;
              (*(uint * PTR32 *)(gen_frame + 0x3c)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x3c)) + (int)(*(uint * PTR32 *)(gen_frame + 0x40)));
              uVar6 = (*(uint *)(gen_frame + 0x44)) + 1;
              (*(uint *)(gen_frame + 0x44)) = uVar6;
              uVar5 = ((code *)*(gen_code32 *)(uVar5 + 0x14))(puVar8);
            } while ((int)uVar6 < (int)uVar5);
          }
          goto LAB_00e223dc;
        case 0x16: ;
        case 0x1a: ;
          if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 4) != 0) {
            if (*(char *)(puVar7 + 3) == '\x1a') {
              return 1;
            }
            if (*(char *)((int)puVar7 + 0xd) == '\x1c') {
              return 1;
            }
            if (*(char *)((int)puVar7 + 0xd) == '\x1d') {
              return 1;
            }
          }
          puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar8;
          if (puVar8 != (uint *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          puVar7 = (undefined4 *)F_00e203a0((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar13,puVar7,&(*(uint * PTR32 *)(gen_frame + 0x3c)),param_3);
          goto LAB_00e223d1;
        case 0x18: ;
        case 0x1f: ;
          puVar7 = (undefined4 *)F_00e20230(puVar13,puVar7,&(*(int * PTR32 *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x38)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
          break;
        case 0x1b: ;
          if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 4) != 0) {
            return 1;
          }
          puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
          (*(uint * PTR32 *)(gen_frame + 0x40)) = puVar8;
          if (puVar8 != (uint *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*puVar8 + 0x5c))(puVar8,0)));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar8;
          if (puVar8 != (uint *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          uVar5 = F_00e20150((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar7,&(*(uint * PTR32 *)(gen_frame + 0x3c)));
          *puVar13 = uVar5;
          if (puVar8 != (uint *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + -1;
            puVar2 = puVar8 + 2;
            *puVar2 = *puVar2 - 1;
            if (*puVar2 == 0) {
              ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
            }
          }
          uVar5 = ((code *)*(gen_code32 *)(*(*(uint * PTR32 *)(gen_frame + 0x40)) + 0x14))((*(uint * PTR32 *)(gen_frame + 0x40)));
          puVar13[2] = uVar5;
          uVar6 = F_00d929c0(*puVar13);
          uVar5 = puVar13[2];
          (*(uint *)(gen_frame + 0x44)) = uVar6;
          pvVar12 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
          piVar9 = *(int * PTR32 *)((int)pvVar12 + 0x2c);
          pcVar3 = *(gen_code32 *)(*piVar9 + 0xc);
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = (uint *)(uVar5 * uVar6);
          uVar5 = (*pcVar3)(piVar9,&(*(uint * PTR32 *)(gen_frame + 0x3c)));
          puVar13[1] = uVar5;
          F_00da1030(uVar5,0,(*(uint * PTR32 *)(gen_frame + 0x3c)));
          uVar5 = *(uint *)(param_3 + 0x14);
          iVar14 = puVar13[2] * (*(uint *)(gen_frame + 0x44));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = (uint *)puVar13[1];
          if (*(uint *)(param_3 + 0x10) == (uVar5 & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516a4),(int *)(param_3 + 0xc),8);
          }
          piVar9 = ((int *)GEN_TOP((*(int *)(param_3 + 0xc) + *(int *)(param_3 + 0x10) * 8)));
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
          iVar15 = 0;
          *piVar9 = (int)(*(uint * PTR32 *)(gen_frame + 0x3c));
          piVar9[1] = iVar14;
          if (0 < (int)puVar13[2]) {
            iVar14 = 0;
            do {
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0) break;
              puVar7 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(uint * PTR32 *)(gen_frame + 0x40)) + 0x5c))((*(uint * PTR32 *)(gen_frame + 0x40)),iVar15)));
              (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar7;
              if (puVar7 != (undefined4 *)0x0) {
                *(short *)((int)puVar7 + 6) = *(short *)((int)puVar7 + 6) + 1;
                puVar7[2] = puVar7[2] + 1;
              }
              puVar7 = (undefined4 *)F_00e22120((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar13[1] + iVar14,&(*(undefined4 * PTR32 *)(gen_frame + 0x34)),param_3);
              (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x34)) != (undefined4 *)0x0) {
                *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 6) + -1;
                piVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 2;
                *piVar9 = *piVar9 + -1;
                if (*piVar9 == 0) {
                  ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x34)))((*(undefined4 * PTR32 *)(gen_frame + 0x34)),1);
                }
              }
              iVar14 = iVar14 + (*(uint *)(gen_frame + 0x44));
              iVar15 = iVar15 + 1;
            } while (iVar15 < (int)puVar13[2]);
          }
          *(short *)((int)(*(uint * PTR32 *)(gen_frame + 0x40)) + 6) = *(short *)((int)(*(uint * PTR32 *)(gen_frame + 0x40)) + 6) + -1;
          puVar13 = (*(uint * PTR32 *)(gen_frame + 0x40)) + 2;
          *puVar13 = *puVar13 - 1;
          if (*puVar13 == 0) {
            puVar7 = (undefined4 *)*(*(uint * PTR32 *)(gen_frame + 0x40));
            puVar8 = (*(uint * PTR32 *)(gen_frame + 0x40));
LAB_00e22806: ;
            (*(code *)*puVar7)(puVar8,1);
          }
          break;
        case 0x22: ;
          if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 4) != 0) {
            if (*(char *)(puVar7 + 3) == '\x1a') {
              return 1;
            }
            if (*(char *)((int)puVar7 + 0xd) == '\x1c') {
              return 1;
            }
            if (*(char *)((int)puVar7 + 0xd) == '\x1d') {
              return 1;
            }
          }
          puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar8;
          if (puVar8 != (uint *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          puVar7 = (undefined4 *)
                   F_00e21460((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar13,(uint)puVar7,&(*(uint * PTR32 *)(gen_frame + 0x3c)),param_3,&(*(int *)(gen_frame + 0x30)),param_1);
LAB_00e223d1: ;
          (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
          if (puVar8 != (uint *)0x0) {
LAB_00e223dc: ;
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + -1;
            puVar13 = puVar8 + 2;
            *puVar13 = *puVar13 - 1;
            if (*puVar13 == 0) {
              ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
            }
          }
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) == (undefined4 *)0x1) {
switchD_00e222a6_caseD_13: ;
          return 1;
        }
LAB_00e22812: ;
        uVar5 = (*(uint *)(gen_frame + 0x38));
        iVar14 = (*(int *)(gen_frame + 0x48)) + 1;
        (*(int *)(gen_frame + 0x48)) = iVar14;
        uVar6 = F_00d92850((*(uint *)(gen_frame + 0x38)));
      } while (iVar14 < (int)uVar6);
    }
    uVar5 = F_00d92620(uVar5);
    (*(uint *)(gen_frame + 0x38)) = uVar5;
  } while( true );
}

/* ref: FUN_00e228b0 */
uint F_00e228b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe228b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00e228c0 */
uint F_00e228c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe228c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[1]));
  *puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  return uVar2;
}

/* ref: FUN_00e228f0 */
uint F_00e228f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe228f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 2)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[1]) / 2;
  return uVar2;
}

/* ref: FUN_00e22920 */
uint F_00e22920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22920u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
  return uVar2;
}

/* ref: FUN_00e22960 */
uint F_00e22960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22960u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 8)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 7U)) >> 3;
  return uVar2;
}

/* ref: FUN_00e229a0 */
uint F_00e229a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe229a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 8)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 7U)) >> 3;
  return uVar2;
}

/* ref: FUN_00e229e0 */
uint F_00e229e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe229e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
  return uVar2;
}

/* ref: FUN_00e22a20 */
uint F_00e22a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22a20u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 2)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[1]) / 2;
  return uVar2;
}

/* ref: FUN_00e22a50 */
uint F_00e22a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22a50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) << 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  return uVar2;
}

/* ref: FUN_00e22a90 */
uint F_00e22a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22a90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 0x30)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[1]) / 0x30;
  return uVar2;
}

/* ref: FUN_00e22ad0 */
uint F_00e22ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22ad0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 0x30)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[1]) / 0x30;
  return uVar2;
}

/* ref: FUN_00e22b10 */
uint F_00e22b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22b10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) << 6)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0x3fU)) >> 6;
  return uVar2;
}

/* ref: FUN_00e22b50 */
uint F_00e22b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22b50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) << 6)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0x3fU)) >> 6;
  return uVar2;
}

/* ref: FUN_00e22b90 */
uint F_00e22b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22b90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
  return uVar2;
}

/* ref: FUN_00e22bd0 */
uint F_00e22bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22bd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 8)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 7U)) >> 3;
  return uVar2;
}

/* ref: FUN_00e22c10 */
uint F_00e22c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22c10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
  return uVar2;
}

/* ref: FUN_00e22c50 */
uint F_00e22c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22c50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
  return uVar2;
}

/* ref: FUN_00e22ca0 */
uint F_00e22ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 8) != 0;
  return param_2;
}

/* ref: FUN_00e22e00 */
uint F_00e22e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e22e40 */
uint F_00e22e40(unsigned int gen_a0)
{
  GEN_ENTER(0xe22e40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e22e60 */
uint F_00e22e60(unsigned int gen_a0)
{
  GEN_ENTER(0xe22e60u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  undefined4 * puVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(undefined4 * PTR32 *)&gen_args[0]));
  *puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  return uVar3;
}

/* ref: FUN_00e22e90 */
uint F_00e22e90(unsigned int gen_a0)
{
  GEN_ENTER(0xe22e90u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  undefined4 * puVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(undefined4 * PTR32 *)&gen_args[0]));
  *puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  return uVar3;
}

/* ref: FUN_00e22ec0 */
uint F_00e22ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xe22ec0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  undefined4 * puVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(undefined4 * PTR32 *)&gen_args[0]));
  *puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  return uVar3;
}

/* ref: FUN_00e22ef0 */
uint F_00e22ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xe22ef0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  undefined4 * puVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(undefined4 * PTR32 *)&gen_args[0]));
  *puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  return uVar3;
}

/* ref: FUN_00e22f20 */
uint F_00e22f20(unsigned int gen_a0)
{
  GEN_ENTER(0xe22f20u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 2)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[0]) / 2;
  return uVar3;
}

/* ref: FUN_00e22f60 */
uint F_00e22f60(unsigned int gen_a0)
{
  GEN_ENTER(0xe22f60u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 2)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[0]) / 2;
  return uVar3;
}

/* ref: FUN_00e22fa0 */
uint F_00e22fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xe22fa0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e22fe0 */
uint F_00e22fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xe22fe0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e23020 */
uint F_00e23020(unsigned int gen_a0)
{
  GEN_ENTER(0xe23020u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 8)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 7U)) >> 3;
  return uVar3;
}

/* ref: FUN_00e23070 */
uint F_00e23070(unsigned int gen_a0)
{
  GEN_ENTER(0xe23070u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 8)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 7U)) >> 3;
  return uVar3;
}

/* ref: FUN_00e230c0 */
uint F_00e230c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe230c0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e23100 */
uint F_00e23100(unsigned int gen_a0)
{
  GEN_ENTER(0xe23100u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e23140 */
uint F_00e23140(unsigned int gen_a0)
{
  GEN_ENTER(0xe23140u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 2)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[0]) / 2;
  return uVar3;
}

/* ref: FUN_00e23180 */
uint F_00e23180(unsigned int gen_a0)
{
  GEN_ENTER(0xe23180u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) << 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  return uVar3;
}

/* ref: FUN_00e231c0 */
uint F_00e231c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe231c0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) << 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  return uVar3;
}

/* ref: FUN_00e23200 */
uint F_00e23200(unsigned int gen_a0)
{
  GEN_ENTER(0xe23200u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 0x30)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[0]) / 0x30;
  return uVar3;
}

/* ref: FUN_00e23250 */
uint F_00e23250(unsigned int gen_a0)
{
  GEN_ENTER(0xe23250u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 0x30)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[0]) / 0x30;
  return uVar3;
}

/* ref: FUN_00e232a0 */
uint F_00e232a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe232a0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 0x30)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[0]) / 0x30;
  return uVar3;
}

/* ref: FUN_00e232f0 */
uint F_00e232f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe232f0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) << 6)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0x3fU)) >> 6;
  return uVar3;
}

/* ref: FUN_00e23330 */
uint F_00e23330(unsigned int gen_a0)
{
  GEN_ENTER(0xe23330u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) << 6)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0x3fU)) >> 6;
  return uVar3;
}

/* ref: FUN_00e23370 */
uint F_00e23370(unsigned int gen_a0)
{
  GEN_ENTER(0xe23370u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e233b0 */
uint F_00e233b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe233b0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 8)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 7U)) >> 3;
  return uVar3;
}

/* ref: FUN_00e23400 */
uint F_00e23400(unsigned int gen_a0)
{
  GEN_ENTER(0xe23400u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e23440 */
uint F_00e23440(unsigned int gen_a0)
{
  GEN_ENTER(0xe23440u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e23490 */
uint F_00e23490(unsigned int gen_a0)
{
  GEN_ENTER(0xe23490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e234c0 */
uint F_00e234c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe234c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00e23500 */
uint F_00e23500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe23500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x10) == (*(uint *)((int)this + 0x14) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),(int *)((int)this + 0xc),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) * 8)));
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return param_2;
}

/* ref: FUN_00e23540 */
uint F_00e23540(unsigned int gen_a0)
{
  GEN_ENTER(0xe23540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0x10);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00e23570 */
uint F_00e23570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe23570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)*param_1;
  ((int *)(gen_frame + 0x14))[0] = 0;
  ((int *)(gen_frame + 0x14))[1] = 0;
  if (piVar3 == (int *)0x0) {
    piVar3 = ((int *)(gen_frame + 0x14));
  }
  else {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0xc)))));
  }
  iVar1 = *piVar3;
  iVar2 = piVar3[1];
  if ((iVar1 != 0) || (iVar2 != 0)) {
    if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0x10);
    }
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    *piVar3 = iVar1;
    piVar3[1] = iVar2;
    piVar3[2] = param_2;
    *(bool *)((int)piVar3 + 0xd) = param_3 != 0;
    *(undefined1 *)(piVar3 + 3) = 0;
  }
  return (uint)piVar3;
}

/* ref: FUN_00e23600 */
uint F_00e23600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe23600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)*param_1;
  ((int *)(gen_frame + 0x14))[0] = 0;
  ((int *)(gen_frame + 0x14))[1] = 0;
  if (piVar3 == (int *)0x0) {
    piVar3 = ((int *)(gen_frame + 0x14));
  }
  else {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0xc)))));
  }
  iVar1 = *piVar3;
  iVar2 = piVar3[1];
  if ((iVar1 != 0) || (iVar2 != 0)) {
    if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0x10);
    }
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    *piVar3 = iVar1;
    piVar3[1] = iVar2;
    piVar3[2] = param_2;
    *(bool *)((int)piVar3 + 0xd) = param_3 != 0;
    *(undefined1 *)(piVar3 + 3) = 1;
  }
  return (uint)piVar3;
}

/* ref: FUN_00e23690 */
uint F_00e23690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xe23690u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  int * piVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  undefined4 * puVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined8 uVar9;
  
  uVar6 = (*(uint *)&gen_args[3]);
  switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[2]))) {
  case 1: ;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x4c))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4));
    *(bool *)(*(float * PTR32 *)&gen_args[1]) = uVar6 != 0;
    return 0;
  case 2: ;
  case 3: ;
  case 4: ;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x4c))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4));
    *(char *)(*(float * PTR32 *)&gen_args[1]) = (char)uVar6;
    return 0;
  case 5: ;
  case 6: ;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x4c))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4));
    *(short *)(*(float * PTR32 *)&gen_args[1]) = (short)uVar6;
    return 0;
  case 7: ;
  case 8: ;
    fVar7 = gen_bits2f(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x4c))))
                                 (*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4)));
    *(*(float * PTR32 *)&gen_args[1]) = fVar7;
    return 0;
  case 9: ;
  case 10: ;
    uVar9 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x54))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4));
    *(undefined8 *)(*(float * PTR32 *)&gen_args[1]) = uVar9;
    return 0;
  case 0xb: ;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x3c))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4));
    *(*(float * PTR32 *)&gen_args[1]) = (float)extraout_ST0;
    return 0;
  case 0xc: ;
  case 0xd: ;
    pfVar4 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x2c))))
                                (*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4))));
    fVar7 = pfVar4[1];
    fVar2 = pfVar4[2];
    fVar3 = pfVar4[3];
    *(*(float * PTR32 *)&gen_args[1]) = *pfVar4;
    (*(float * PTR32 *)&gen_args[1])[1] = fVar7;
    (*(float * PTR32 *)&gen_args[1])[2] = fVar2;
    (*(float * PTR32 *)&gen_args[1])[3] = fVar3;
    return 0;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
    pfVar4 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x2c))))
                                (*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4))));
    fVar7 = pfVar4[1];
    fVar2 = pfVar4[2];
    fVar3 = pfVar4[3];
    *(*(float * PTR32 *)&gen_args[1]) = *pfVar4;
    (*(float * PTR32 *)&gen_args[1])[1] = fVar7;
    (*(float * PTR32 *)&gen_args[1])[2] = fVar2;
    (*(float * PTR32 *)&gen_args[1])[3] = fVar3;
    fVar7 = pfVar4[5];
    fVar2 = pfVar4[6];
    fVar3 = pfVar4[7];
    (*(float * PTR32 *)&gen_args[1])[4] = pfVar4[4];
    (*(float * PTR32 *)&gen_args[1])[5] = fVar7;
    (*(float * PTR32 *)&gen_args[1])[6] = fVar2;
    (*(float * PTR32 *)&gen_args[1])[7] = fVar3;
    fVar7 = pfVar4[9];
    fVar2 = pfVar4[10];
    fVar3 = pfVar4[0xb];
    (*(float * PTR32 *)&gen_args[1])[8] = pfVar4[8];
    (*(float * PTR32 *)&gen_args[1])[9] = fVar7;
    (*(float * PTR32 *)&gen_args[1])[10] = fVar2;
    (*(float * PTR32 *)&gen_args[1])[0xb] = fVar3;
    return 0;
  case 0x11: ;
    pfVar4 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x2c))))
                                (*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4))));
    fVar7 = pfVar4[1];
    fVar2 = pfVar4[2];
    fVar3 = pfVar4[3];
    *(*(float * PTR32 *)&gen_args[1]) = *pfVar4;
    (*(float * PTR32 *)&gen_args[1])[1] = fVar7;
    (*(float * PTR32 *)&gen_args[1])[2] = fVar2;
    (*(float * PTR32 *)&gen_args[1])[3] = fVar3;
    fVar7 = pfVar4[5];
    fVar2 = pfVar4[6];
    fVar3 = pfVar4[7];
    (*(float * PTR32 *)&gen_args[1])[4] = pfVar4[4];
    (*(float * PTR32 *)&gen_args[1])[5] = fVar7;
    (*(float * PTR32 *)&gen_args[1])[6] = fVar2;
    (*(float * PTR32 *)&gen_args[1])[7] = fVar3;
    fVar7 = pfVar4[9];
    fVar2 = pfVar4[10];
    fVar3 = pfVar4[0xb];
    (*(float * PTR32 *)&gen_args[1])[8] = pfVar4[8];
    (*(float * PTR32 *)&gen_args[1])[9] = fVar7;
    (*(float * PTR32 *)&gen_args[1])[10] = fVar2;
    (*(float * PTR32 *)&gen_args[1])[0xb] = fVar3;
    fVar7 = pfVar4[0xd];
    fVar2 = pfVar4[0xe];
    fVar3 = pfVar4[0xf];
    (*(float * PTR32 *)&gen_args[1])[0xc] = pfVar4[0xc];
    (*(float * PTR32 *)&gen_args[1])[0xd] = fVar7;
    (*(float * PTR32 *)&gen_args[1])[0xe] = fVar2;
    (*(float * PTR32 *)&gen_args[1])[0xf] = fVar3;
    return 0;
  case 0x12: ;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x2c))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4));
    F_00da9960((*(float * PTR32 *)&gen_args[1]),uVar6);
    return 0;
  default: ;
    return 1;
  case 0x14: ;
    if ((*(undefined4 * PTR32 *)&gen_args[4]) == (undefined4 *)0x0) {
      return 0;
    }
    puVar8 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x5c))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4))));
    if (puVar8 != (undefined4 *)0x0) {
      *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
      puVar8[2] = puVar8[2] + 1;
    }
    (*(uint *)&gen_args[3]) = (uint)puVar8;
    F_00e23570((*(undefined * PTR32 *)&gen_args[6]),&(*(uint *)&gen_args[3]),(*(float * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[5]));
    break;
  case 0x19: ;
    if ((*(undefined4 * PTR32 *)&gen_args[4]) == (undefined4 *)0x0) {
      return 0;
    }
    (*(undefined4 * PTR32 *)&gen_args[4]) = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x5c))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4))))
    ;
    if ((*(undefined4 * PTR32 *)&gen_args[4]) != (undefined4 *)0x0) {
      *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[4]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[4]) + 6))) + 1;
      (*(undefined4 * PTR32 *)&gen_args[4])[2] = (*(undefined4 * PTR32 *)&gen_args[4])[2] + 1;
    }
    uVar6 = F_00e22120((*(undefined * PTR32 *)&gen_args[0]),(*(float * PTR32 *)&gen_args[1]),&(*(undefined4 * PTR32 *)&gen_args[4]),(*(undefined * PTR32 *)&gen_args[6]));
    (*(uint *)&gen_args[3]) = CONCAT13(uVar6 == 1,(undefined3)(*(uint *)&gen_args[3]));
    if ((*(undefined4 * PTR32 *)&gen_args[4]) != (undefined4 *)0x0) {
      *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[4]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[4]) + 6))) + -1;
      piVar1 = (*(undefined4 * PTR32 *)&gen_args[4]) + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((code *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[4]))))((*(undefined4 * PTR32 *)&gen_args[4]),1);
      }
    }
    if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[3]) + 3)) == '\0') {
      return 0;
    }
    return 1;
  case 0x1c: ;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
      return 1;
    }
    puVar8 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x5c))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4))));
    if (puVar8 != (undefined4 *)0x0) {
      *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
      puVar8[2] = puVar8[2] + 1;
    }
    (*(uint *)&gen_args[3]) = (uint)puVar8;
    F_00e23600((*(undefined * PTR32 *)&gen_args[6]),&(*(uint *)&gen_args[3]),(*(float * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[5]));
    break;
  case 0x1d: ;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
      return 1;
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x34))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4));
    if (uVar5 == 0) {
      *(*(float * PTR32 *)&gen_args[1]) = 0.0;
      return 0;
    }
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)uVar6 + 0x34))))(*(int * PTR32 *)uVar6,*(undefined4 *)(uVar6 + 4));
    fVar7 = gen_bits2f(F_00da1210(uVar6));
    if (fVar7 != 0.0) {
      F_00e23500((*(undefined * PTR32 *)&gen_args[6]),(undefined4)gen_fl2bits(fVar7),0xffffffff);
    }
    *(*(float * PTR32 *)&gen_args[1]) = fVar7;
    return 0;
  case 0x1e: ;
    fVar7 = gen_bits2f(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x54))))
                                 (*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4)));
    *(*(float * PTR32 *)&gen_args[1]) = fVar7;
    return 0;
  case 0x20: ;
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x3c))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4));
    *(short *)(*(float * PTR32 *)&gen_args[1]) = (short)((uint)gen_fl2bits((float)extraout_ST0_00) >> 0x10);
    return 0;
  case 0x21: ;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x34))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4));
    if (uVar5 == 0) {
      *(*(float * PTR32 *)&gen_args[1]) = 0.0;
      return 0;
    }
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)uVar6 + 0x34))))(*(int * PTR32 *)uVar6,*(undefined4 *)(uVar6 + 4));
    fVar7 = gen_bits2f(F_00da1210(uVar6));
    if (fVar7 != 0.0) {
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
        *(*(float * PTR32 *)&gen_args[1]) = gen_bits2f((int)gen_fl2bits(fVar7) + 1);
        return 0;
      }
      F_00e23500((*(undefined * PTR32 *)&gen_args[6]),(undefined4)gen_fl2bits(fVar7),0xffffffff);
    }
    *(*(float * PTR32 *)&gen_args[1]) = fVar7;
    return 0;
  }
  if (puVar8 != (undefined4 *)0x0) {
    *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + -1;
    piVar1 = puVar8 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
    }
  }
  return 0;
}

/* ref: FUN_00e23ad0 */
uint F_00e23ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xe23ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  int * piVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  undefined4 * puVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined8 uVar9;
  
  uVar6 = (*(uint *)&gen_args[3]);
  switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[2]))) {
  case 1: ;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x30))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4));
    *(bool *)(*(float * PTR32 *)&gen_args[1]) = uVar6 != 0;
    return 0;
  case 2: ;
  case 3: ;
  case 4: ;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x30))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4));
    *(char *)(*(float * PTR32 *)&gen_args[1]) = (char)uVar6;
    return 0;
  case 5: ;
  case 6: ;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x30))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4));
    *(short *)(*(float * PTR32 *)&gen_args[1]) = (short)uVar6;
    return 0;
  case 7: ;
  case 8: ;
  case 0x1e: ;
    fVar7 = gen_bits2f(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x30))))
                                 (*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4)));
    *(*(float * PTR32 *)&gen_args[1]) = fVar7;
    return 0;
  case 9: ;
  case 10: ;
    uVar9 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x30))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4));
    *(undefined8 *)(*(float * PTR32 *)&gen_args[1]) = uVar9;
    return 0;
  case 0xb: ;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x3c))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4));
    *(*(float * PTR32 *)&gen_args[1]) = (float)extraout_ST0;
    return 0;
  case 0xc: ;
  case 0xd: ;
    pfVar4 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x38))))
                                (*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4),4)));
    fVar7 = pfVar4[1];
    fVar2 = pfVar4[2];
    fVar3 = pfVar4[3];
    *(*(float * PTR32 *)&gen_args[1]) = *pfVar4;
    (*(float * PTR32 *)&gen_args[1])[1] = fVar7;
    (*(float * PTR32 *)&gen_args[1])[2] = fVar2;
    (*(float * PTR32 *)&gen_args[1])[3] = fVar3;
    return 0;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
    pfVar4 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x38))))
                                (*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4),0xc)));
    fVar7 = pfVar4[1];
    fVar2 = pfVar4[2];
    fVar3 = pfVar4[3];
    *(*(float * PTR32 *)&gen_args[1]) = *pfVar4;
    (*(float * PTR32 *)&gen_args[1])[1] = fVar7;
    (*(float * PTR32 *)&gen_args[1])[2] = fVar2;
    (*(float * PTR32 *)&gen_args[1])[3] = fVar3;
    fVar7 = pfVar4[5];
    fVar2 = pfVar4[6];
    fVar3 = pfVar4[7];
    (*(float * PTR32 *)&gen_args[1])[4] = pfVar4[4];
    (*(float * PTR32 *)&gen_args[1])[5] = fVar7;
    (*(float * PTR32 *)&gen_args[1])[6] = fVar2;
    (*(float * PTR32 *)&gen_args[1])[7] = fVar3;
    fVar7 = pfVar4[9];
    fVar2 = pfVar4[10];
    fVar3 = pfVar4[0xb];
    (*(float * PTR32 *)&gen_args[1])[8] = pfVar4[8];
    (*(float * PTR32 *)&gen_args[1])[9] = fVar7;
    (*(float * PTR32 *)&gen_args[1])[10] = fVar2;
    (*(float * PTR32 *)&gen_args[1])[0xb] = fVar3;
    return 0;
  case 0x11: ;
    pfVar4 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x38))))
                                (*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4),0x10)));
    fVar7 = pfVar4[1];
    fVar2 = pfVar4[2];
    fVar3 = pfVar4[3];
    *(*(float * PTR32 *)&gen_args[1]) = *pfVar4;
    (*(float * PTR32 *)&gen_args[1])[1] = fVar7;
    (*(float * PTR32 *)&gen_args[1])[2] = fVar2;
    (*(float * PTR32 *)&gen_args[1])[3] = fVar3;
    fVar7 = pfVar4[5];
    fVar2 = pfVar4[6];
    fVar3 = pfVar4[7];
    (*(float * PTR32 *)&gen_args[1])[4] = pfVar4[4];
    (*(float * PTR32 *)&gen_args[1])[5] = fVar7;
    (*(float * PTR32 *)&gen_args[1])[6] = fVar2;
    (*(float * PTR32 *)&gen_args[1])[7] = fVar3;
    fVar7 = pfVar4[9];
    fVar2 = pfVar4[10];
    fVar3 = pfVar4[0xb];
    (*(float * PTR32 *)&gen_args[1])[8] = pfVar4[8];
    (*(float * PTR32 *)&gen_args[1])[9] = fVar7;
    (*(float * PTR32 *)&gen_args[1])[10] = fVar2;
    (*(float * PTR32 *)&gen_args[1])[0xb] = fVar3;
    fVar7 = pfVar4[0xd];
    fVar2 = pfVar4[0xe];
    fVar3 = pfVar4[0xf];
    (*(float * PTR32 *)&gen_args[1])[0xc] = pfVar4[0xc];
    (*(float * PTR32 *)&gen_args[1])[0xd] = fVar7;
    (*(float * PTR32 *)&gen_args[1])[0xe] = fVar2;
    (*(float * PTR32 *)&gen_args[1])[0xf] = fVar3;
    return 0;
  case 0x12: ;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x38))))
                      (*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4),0x10);
    F_00da9960((*(float * PTR32 *)&gen_args[1]),uVar6);
    return 0;
  default: ;
    return 1;
  case 0x14: ;
    if ((*(int *)&gen_args[4]) == 0) {
      return 0;
    }
    puVar8 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x34))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4))));
    if (puVar8 != (undefined4 *)0x0) {
      *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
      puVar8[2] = puVar8[2] + 1;
    }
    (*(uint *)&gen_args[3]) = (uint)puVar8;
    F_00e23570((*(undefined * PTR32 *)&gen_args[6]),&(*(uint *)&gen_args[3]),(*(float * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[5]));
    break;
  case 0x19: ;
    if ((*(int *)&gen_args[4]) == 0) {
      return 0;
    }
    puVar8 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x34))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4))));
    if (puVar8 != (undefined4 *)0x0) {
      *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
      puVar8[2] = puVar8[2] + 1;
    }
    (*(uint *)&gen_args[3]) = (uint)puVar8;
    uVar6 = F_00e22120((*(undefined * PTR32 *)&gen_args[0]),(*(float * PTR32 *)&gen_args[1]),&(*(uint *)&gen_args[3]),(*(undefined * PTR32 *)&gen_args[6]));
    (*(uint *)&gen_args[3]) = CONCAT13(uVar6 == 1,(undefined3)(*(uint *)&gen_args[3]));
    if (puVar8 != (undefined4 *)0x0) {
      *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + -1;
      piVar1 = puVar8 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
      }
    }
    if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[3]) + 3)) == '\0') {
      return 0;
    }
    return 1;
  case 0x1c: ;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
      return 1;
    }
    puVar8 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x34))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4))));
    if (puVar8 != (undefined4 *)0x0) {
      *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
      puVar8[2] = puVar8[2] + 1;
    }
    (*(uint *)&gen_args[3]) = (uint)puVar8;
    F_00e23600((*(undefined * PTR32 *)&gen_args[6]),&(*(uint *)&gen_args[3]),(*(float * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[5]));
    break;
  case 0x1d: ;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
      return 1;
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x2c))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4));
    if (uVar5 == 0) {
      *(*(float * PTR32 *)&gen_args[1]) = 0.0;
      return 0;
    }
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)uVar6 + 0x2c))))(*(int * PTR32 *)uVar6,*(undefined4 *)(uVar6 + 4));
    fVar7 = gen_bits2f(F_00da1210(uVar6));
    if (fVar7 != 0.0) {
      F_00e23500((*(undefined * PTR32 *)&gen_args[6]),(undefined4)gen_fl2bits(fVar7),0xffffffff);
    }
    *(*(float * PTR32 *)&gen_args[1]) = fVar7;
    return 0;
  case 0x20: ;
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x3c))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4));
    *(short *)(*(float * PTR32 *)&gen_args[1]) = (short)((uint)gen_fl2bits((float)extraout_ST0_00) >> 0x10);
    return 0;
  case 0x21: ;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[3]) + 0x2c))))(*(int * PTR32 *)(*(uint *)&gen_args[3]),*(undefined4 *)((*(uint *)&gen_args[3]) + 4));
    if (uVar5 == 0) {
      *(*(float * PTR32 *)&gen_args[1]) = 0.0;
      return 0;
    }
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)uVar6 + 0x2c))))(*(int * PTR32 *)uVar6,*(undefined4 *)(uVar6 + 4));
    fVar7 = gen_bits2f(F_00da1210(uVar6));
    if (fVar7 != 0.0) {
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
        *(*(float * PTR32 *)&gen_args[1]) = gen_bits2f((int)gen_fl2bits(fVar7) + 1);
        return 0;
      }
      F_00e23500((*(undefined * PTR32 *)&gen_args[6]),(undefined4)gen_fl2bits(fVar7),0xffffffff);
    }
    *(*(float * PTR32 *)&gen_args[1]) = fVar7;
    return 0;
  }
  if (puVar8 != (undefined4 *)0x0) {
    *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + -1;
    piVar1 = puVar8 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
    }
  }
  return 0;
}

/* ref: FUN_00e23f00 */
byte F_00e23f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe23f00u, gen_a0, gen_a1, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * this;
  char * pcVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*in_esi + 0x10))(in_esi);
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*in_esi + 0x10))(in_esi,param_2)));
  pcVar2 = (char *)F_00d92650(this,&(*(undefined1 *)(gen_frame + 0xb)),uVar1);
  return *pcVar2 != '\0';
}

/* ref: hkObjectResource::vf3 */
uint F_00e23f40(void)
{
  GEN_ENTER(0xe23f40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkObjectResource::vf5 */
unsigned int F_00e23f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe23f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkObjectResource::vf8 */
uint F_00e23f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe23f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,param_1,param_2);
  if (uVar1 != 0) {
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  return uVar1;
}

/* ref: hkObjectResource::vf7 */
uint F_00e23f90(unsigned int gen_a0)
{
  GEN_ENTER(0xe23f90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d92610(*(undefined4 *)(in_ecx + 0xc));
  return uVar1;
}

/* ref: FUN_00e23fa0 */
unsigned int F_00e23fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe23fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x10));
  }
  *(undefined * PTR32 *)((int)this + 0x10) = param_1;
  return 0;
}

/* ref: FUN_00e23fd0 */
unsigned int F_00e23fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe23fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x14));
  }
  *(undefined * PTR32 *)((int)this + 0x14) = param_1;
  return 0;
}

/* ref: FUN_00e24000 */
uint F_00e24000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x114e748));
  *(undefined4 *)((int)this + 8) = *param_1;
  *(undefined4 *)((int)this + 0xc) = param_1[1];
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(int * PTR32, 0x15e3738))));
  if (pvVar1 != (undefined *)0x0) {
    F_00d919e0(pvVar1);
  }
  *(undefined * PTR32 *)((int)this + 0x10) = pvVar1;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(int * PTR32, 0x15e3738))));
  if (pvVar1 != (undefined *)0x0) {
    F_00d919e0(pvVar1);
  }
  *(undefined * PTR32 *)((int)this + 0x14) = pvVar1;
  return (uint)this;
}

/* ref: FUN_00e24070 */
uint F_00e24070(unsigned int gen_a0)
{
  GEN_ENTER(0xe24070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  char * pcVar4;
  uint uVar5;
  LPVOID pvVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x114e748));
  uVar5 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    pcVar4 = (char *)F_00d92650(&REFG(undefined, 0x15da420),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,*(int *)((int)this + 0xc));
    if (*pcVar4 == '\0') {
      piVar1 = *(int * PTR32 *)((int)this + 0x14);
      if (piVar1 != (int *)0x0) {
        iVar2 = *piVar1;
        uVar5 = F_00d92610(*(undefined4 *)((int)this + 0xc));
        ((code *)*(gen_code32 *)(iVar2 + 0x14))(piVar1,*(undefined4 *)((int)this + 8),uVar5);
      }
      uVar5 = F_00d929c0(*(undefined4 *)((int)this + 0xc));
      uVar3 = *(undefined4 *)((int)this + 8);
      pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar6 + 0x2c) + 8))))
                        (*(int * PTR32 *)((int)pvVar6 + 0x2c),uVar3,uVar5);
    }
    else {
      uVar5 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    uVar5 = F_00d91a80(*(undefined * PTR32 *)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    uVar5 = F_00d91a80(*(undefined * PTR32 *)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar5;
}

/* ref: hkObjectResource::vf6 */
uint F_00e24120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24120u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  char * pcVar3;
  
  if ((*(int *)&gen_args[1]) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
    uVar2 = F_00d92610(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,uVar2);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,(*(int *)&gen_args[1]))));
    pcVar3 = (char *)F_00d92650(this_00,(int)&(*(int *)&gen_args[1]) + 3,uVar2);
    if (*pcVar3 == '\0') {
      return 0;
    }
  }
  return *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)));
}

/* ref: FUN_00e24180 */
uint F_00e24180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00e241b0 */
uint F_00e241b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe241b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00e241c0 */
uint F_00e241c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe241c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,param_2);
  return uVar2;
}

/* ref: FUN_00e241f0 */
uint F_00e241f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe241f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkObjectResource::vf0 */
uint F_00e24220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e24070(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e24260 */
byte F_00e24260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24260u, gen_a0, gen_a1, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * this;
  char * pcVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*in_esi + 0x10))(in_esi);
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*in_esi + 0x10))(in_esi,param_2)));
  pcVar2 = (char *)F_00d92650(this,&(*(undefined1 *)(gen_frame + 0xb)),uVar1);
  return *pcVar2 != '\0';
}

/* ref: FUN_00e242a0 */
uint F_00e242a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe242a0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: hkPackfileData::vf7 */
uint F_00e242b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe242b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 8) != 0) {
    uVar1 = F_00dbd970(this + 0x10,*(int *)(this + 8),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00e242d0 */
unsigned int F_00e242d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe242d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)((int)this + 0x2c) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x2c));
  }
  *(undefined * PTR32 *)((int)this + 0x2c) = param_1;
  return 0;
}

/* ref: FUN_00e24300 */
uint F_00e24300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  F_00d924b0(*(undefined4 *)((int)pvVar2 + 0x2c),uVar1);
  uVar3 = F_00da1210(param_1);
  *(uint *)((int)this + 0xc) = uVar3;
  return uVar3;
}

/* ref: FUN_00e24340 */
unsigned int F_00e24340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x50);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x4c) + 4 + iVar1 * 8))) == param_1) {
      iVar3 = *(int *)((int)this + 0x50) + -1;
      *(int *)((int)this + 0x50) = iVar3;
      if (iVar3 != iVar1) {
        puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x4c) + iVar1 * 8)));
        iVar3 = (*(int *)((int)this + 0x4c) + iVar3 * 8) - (int)puVar2;
        iVar4 = 2;
        do {
          *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
          puVar2 = puVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  return 0;
}

/* ref: FUN_00e24390 */
unsigned int F_00e24390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x5c) + -1;
  if (-1 < iVar1) {
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x58) + 4 + iVar1 * 8)));
    while (*piVar3 != param_1) {
      piVar3 = piVar3 + -2;
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return 0;
      }
    }
    iVar4 = *(int *)((int)this + 0x5c) + -1;
    *(int *)((int)this + 0x5c) = iVar4;
    if (iVar4 != iVar1) {
      puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x58) + iVar1 * 8)));
      iVar1 = (*(int *)((int)this + 0x58) + iVar4 * 8) - (int)puVar2;
      iVar4 = 2;
      do {
        *puVar2 = *(undefined4 *)(iVar1 + (int)puVar2);
        puVar2 = puVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00e243e0 */
byte F_00e243e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe243e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x20) != 0;
}

/* ref: hkPackfileData::vf4 */
unsigned int F_00e243f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe243f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  int * piVar2;
  int iVar3;
  
  if ((*(int *)(this + 0x30) != 0) && (0 < *(int *)(this + 0x20))) {
    iVar1 = *(int *)(this + 0x18);
    iVar3 = 0;
    if (-1 < iVar1) {
      piVar2 = *(int * PTR32 *)(this + 0x10);
      do {
        if (*piVar2 != -1) break;
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 2;
      } while (iVar3 <= iVar1);
    }
    if (iVar3 <= iVar1) {
      do {
        this_00 = (undefined *)F_00da4190(this + 0x1c,
                                       *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar3 * 8))),0);
        if (this_00 != (undefined *)0x0) {
          F_00dc2610(this_00,*((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + iVar3 * 8))));
        }
        iVar1 = *(int *)(this + 0x18);
        iVar3 = iVar3 + 1;
        if (iVar3 <= iVar1) {
          piVar2 = ((int *)GEN_TOP((*(int *)(this + 0x10) + iVar3 * 8)));
          do {
            if (*piVar2 != -1) break;
            iVar3 = iVar3 + 1;
            piVar2 = piVar2 + 2;
          } while (iVar3 <= iVar1);
        }
      } while (iVar3 <= iVar1);
    }
  }
  *(undefined4 *)(this + 8) = 0;
  F_00dbdaf0(this + 0x10);
  F_00da3cd0(this + 0x1c);
  return 0;
}

/* ref: hkPackfileData::vf5 */
unsigned int F_00e24490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(this + 0x5c);
  iVar5 = param_1[1];
  if (iVar1 <= param_1[1]) {
    iVar5 = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar4,8);
  }
  puVar3 = (undefined4 *)*param_1;
  if (0 < iVar5) {
    iVar2 = *(int *)(this + 0x58) - (int)puVar3;
    iVar4 = iVar5;
    do {
      *puVar3 = *(undefined4 *)(iVar2 + (int)puVar3);
      puVar3[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar3);
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar3 = (undefined4 *)(*param_1 + iVar5 * 8);
  iVar4 = iVar1 - iVar5;
  if (0 < iVar4) {
    iVar5 = (*(int *)(this + 0x58) + iVar5 * 8) - (int)puVar3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
        puVar3[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar3);
      }
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = iVar1;
  iVar1 = *(int *)(this + 0x50);
  iVar5 = param_2[1];
  if (iVar1 <= param_2[1]) {
    iVar5 = iVar1;
  }
  if ((int)(param_2[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_2,iVar4,8);
  }
  puVar3 = (undefined4 *)*param_2;
  if (0 < iVar5) {
    iVar2 = *(int *)(this + 0x4c) - (int)puVar3;
    iVar4 = iVar5;
    do {
      *puVar3 = *(undefined4 *)(iVar2 + (int)puVar3);
      puVar3[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar3);
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar3 = (undefined4 *)(*param_2 + iVar5 * 8);
  iVar4 = iVar1 - iVar5;
  if (0 < iVar4) {
    iVar5 = (*(int *)(this + 0x4c) + iVar5 * 8) - (int)puVar3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
        puVar3[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar3);
      }
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_2[1] = iVar1;
  return 0;
}

/* ref: FUN_00e245d0 */
uint F_00e245d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe245d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x50) == (*(uint *)((int)this + 0x54) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x4c),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x4c) + *(int *)((int)this + 0x50) * 8)));
  *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return param_2;
}

/* ref: FUN_00e24610 */
uint F_00e24610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x5c) == (*(uint *)((int)this + 0x60) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x58),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x58) + *(int *)((int)this + 0x5c) * 8)));
  *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x5c) + 1;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return param_2;
}

/* ref: hkPackfileData::vf6 */
uint F_00e24650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24650u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  undefined3 uVar3;
  byte bVar4;
  uint uVar5;
  undefined * this_00;
  char * pcVar6;
  undefined3 extraout_var = 0;
  uint uVar7;
  undefined4 * puVar8;
  int * piVar9;
  undefined4 * puVar10;
  
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) {
    return 0;
  }
  uVar5 = F_00dbd970((*(undefined * PTR32 *)&gen_args[0]) + 0x10,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))),0);
  if ((*(int *)&gen_args[1]) != 0) {
    piVar9 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2c)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar9 + 0x10))(piVar9,uVar5);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0x10))(piVar9,(*(int *)&gen_args[1]))));
    pcVar6 = (char *)F_00d92650(this_00,(int)&(*(int *)&gen_args[1]) + 3,uVar5);
    if (*pcVar6 == '\0') {
      return 0;
    }
  }
  bVar4 = F_00e243e0((*(undefined * PTR32 *)&gen_args[0]));
  if (((int)CONCAT31(extraout_var,bVar4) == 0) && ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0)) {
    uVar3 = (undefined3)(*(int *)&gen_args[1]);
    (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) = bVar4;
    uVar5 = F_00e250d0((*(undefined * PTR32 *)&gen_args[0]) + 0x10);
    if ((int)uVar5 <= *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18)))) {
      do {
        uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 4 + uVar5 * 8)));
        uVar7 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x10))))
                          ((*(int * PTR32 *)&gen_args[2]),*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + uVar5 * 8))),uVar1);
        if (uVar7 == 0) {
          (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) = 1;
        }
        else {
          F_00da3a20((*(undefined * PTR32 *)&gen_args[0]) + 0x1c,uVar1,uVar7);
        }
        iVar2 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
        uVar5 = uVar5 + 1;
        if ((int)uVar5 <= iVar2) {
          piVar9 = ((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + uVar5 * 8)));
          do {
            if (*piVar9 != -1) break;
            uVar5 = uVar5 + 1;
            piVar9 = piVar9 + 2;
          } while ((int)uVar5 <= iVar2);
        }
      } while ((int)uVar5 <= iVar2);
      if ((*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) != 0) {
        return 0;
      }
    }
    puVar10 = *((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 100)));
    if (puVar10 < puVar10 + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68))) * 2) {
      do {
        uVar1 = *puVar10;
        puVar8 = (undefined4 *)F_00d92c00((undefined *)puVar10[1],"hk.PostFinish");
        ((code *)*(gen_code32 *)*puVar8)(uVar1);
        puVar10 = puVar10 + 2;
      } while (puVar10 < ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 100))) + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68))) * 8))));
    }
  }
  return *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)));
}

/* ref: FUN_00e24780 */
uint F_00e24780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x114e770));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  F_00da3de0((undefined *)((int)this + 0x1c),local_8);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 1;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x80000000;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0x80000000;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0x80000000;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x80000000;
  this_00 = param_1;
  if (param_1 == (undefined *)0x0) {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(int * PTR32, 0x15e3738))));
    if (this_00 == (undefined *)0x0) goto LAB_00e24819;
  }
  F_00d919e0(this_00);
LAB_00e24819: ;
  if (*(undefined * PTR32 *)((int)this + 0x2c) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x2c));
  }
  *(undefined * PTR32 *)((int)this + 0x2c) = this_00;
  return (uint)this;
}

/* ref: FUN_00e24840 */
uint F_00e24840(unsigned int gen_a0)
{
  GEN_ENTER(0xe24840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x114e770));
  F_00e243f0(this);
  iVar6 = 0;
  if (0 < *(int *)((int)this + 0x38)) {
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + iVar6 * 4)));
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      F_00d924b0(*(undefined4 *)((int)pvVar3 + 0x2c),uVar1);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)((int)this + 0x38));
  }
  iVar6 = 0;
  if (0 < *(int *)((int)this + 0x44)) {
    iVar5 = 0;
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x40) + 4 + iVar5)));
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x40) + iVar5)));
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar3 + 0x2c),uVar2,uVar1);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar6 < *(int *)((int)this + 0x44));
  }
  uVar1 = *(undefined4 *)((int)this + 0xc);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  F_00d924b0(*(undefined4 *)((int)pvVar3 + 0x2c),uVar1);
  uVar4 = *(uint *)((int)this + 0x6c);
  *(undefined4 *)((int)this + 0x68) = 0;
  if ((uVar4 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 100),uVar4 * 8);
  }
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x80000000;
  uVar4 = *(uint *)((int)this + 0x60);
  *(undefined4 *)((int)this + 0x5c) = 0;
  if ((uVar4 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x58),uVar4 * 8);
  }
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0x80000000;
  uVar4 = *(uint *)((int)this + 0x54);
  *(undefined4 *)((int)this + 0x50) = 0;
  if ((uVar4 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x4c),uVar4 * 8);
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0x80000000;
  uVar4 = *(uint *)((int)this + 0x48);
  *(undefined4 *)((int)this + 0x44) = 0;
  if ((uVar4 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x40),(uVar4 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x80000000;
  uVar4 = *(uint *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x38) = 0;
  if ((uVar4 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x34),uVar4 * 4);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x2c) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x2c));
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  F_00da3e20((undefined *)((int)this + 0x1c));
  uVar4 = F_00dbdb20((undefined *)((int)this + 0x10),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar4;
}

/* ref: FUN_00e24a10 */
uint F_00e24a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e24a70 */
uint F_00e24a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24a70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e24ad0 */
uint F_00e24ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24ad0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e24b20 */
uint F_00e24b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24b20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e24b80 */
uint F_00e24b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00e24bb0 */
uint F_00e24bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,8);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e24bf0 */
unsigned int F_00e24bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1[1] = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + 4 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e24c20 */
uint F_00e24c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e24c40 */
unsigned int F_00e24c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + 4 + (int)puVar1)));
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e24c80 */
uint F_00e24c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,8);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e24cc0 */
unsigned int F_00e24cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1[1] = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + 4 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e24cf0 */
uint F_00e24cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e24d10 */
unsigned int F_00e24d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + 4 + (int)puVar1)));
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e24d60 */
uint F_00e24d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24d60u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 8);
}

/* ref: FUN_00e24d70 */
uint F_00e24d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24d70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00e24d80 */
uint F_00e24d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24d80u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00e24e10 */
unsigned int F_00e24e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  if (*(int *)((int)this + 4) != param_1) {
    puVar1 = (undefined4 *)(*(int *)this + param_1 * 8);
    iVar2 = (*(int *)this + *(int *)((int)this + 4) * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00e24e40 */
unsigned int F_00e24e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  if (*(int *)((int)this + 4) != param_1) {
    puVar1 = (undefined4 *)(*(int *)this + param_1 * 8);
    iVar2 = (*(int *)this + *(int *)((int)this + 4) * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00e24e70 */
uint F_00e24e70(unsigned int gen_a0)
{
  GEN_ENTER(0xe24e70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d924b0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e24ea0 */
uint F_00e24ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,param_2);
  return uVar2;
}

/* ref: FUN_00e24ed0 */
uint F_00e24ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e24f10 */
uint F_00e24f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe24f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2[1];
  iVar6 = *(int *)((int)this + 4);
  if (iVar1 <= *(int *)((int)this + 4)) {
    iVar6 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar5 = uVar2 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(param_1,this,iVar5,8);
  }
  puVar4 = *(undefined4 * PTR32 *)this;
  if (0 < iVar6) {
    iVar3 = *param_2 - (int)puVar4;
    iVar5 = iVar6;
    do {
      *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
      puVar4[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar4);
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar4 = (undefined4 *)(*(int *)this + iVar6 * 8);
  iVar5 = iVar1 - iVar6;
  if (0 < iVar5) {
    iVar6 = (*param_2 + iVar6 * 8) - (int)puVar4;
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
        puVar4[1] = *(undefined4 *)(iVar6 + 4 + (int)puVar4);
      }
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00e24fc0 */
uint F_00e24fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e25000 */
uint F_00e25000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe25000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2[1];
  iVar6 = *(int *)((int)this + 4);
  if (iVar1 <= *(int *)((int)this + 4)) {
    iVar6 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar5 = uVar2 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(param_1,this,iVar5,8);
  }
  puVar4 = *(undefined4 * PTR32 *)this;
  if (0 < iVar6) {
    iVar3 = *param_2 - (int)puVar4;
    iVar5 = iVar6;
    do {
      *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
      puVar4[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar4);
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar4 = (undefined4 *)(*(int *)this + iVar6 * 8);
  iVar5 = iVar1 - iVar6;
  if (0 < iVar5) {
    iVar6 = (*param_2 + iVar6 * 8) - (int)puVar4;
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
        puVar4[1] = *(undefined4 *)(iVar6 + 4 + (int)puVar4);
      }
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00e250d0 */
uint F_00e250d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe250d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (-1 < *(int *)((int)this + 8)) {
    piVar2 = *(int * PTR32 *)this;
    do {
      if (*piVar2 != -1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while ((int)uVar1 <= *(int *)((int)this + 8));
  }
  return uVar1;
}

/* ref: FUN_00e250f0 */
unsigned int F_00e250f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe250f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(*(int *)this + iVar1 * 8);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00e25120 */
uint F_00e25120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[1];
  iVar6 = *(int *)((int)this + 4);
  if (iVar1 <= *(int *)((int)this + 4)) {
    iVar6 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar5 = uVar2 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar5,8);
  }
  puVar4 = *(undefined4 * PTR32 *)this;
  if (0 < iVar6) {
    iVar3 = *param_1 - (int)puVar4;
    iVar5 = iVar6;
    do {
      *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
      puVar4[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar4);
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar4 = (undefined4 *)(*(int *)this + iVar6 * 8);
  iVar5 = iVar1 - iVar6;
  if (0 < iVar5) {
    iVar6 = (*param_1 + iVar6 * 8) - (int)puVar4;
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
        puVar4[1] = *(undefined4 *)(iVar6 + 4 + (int)puVar4);
      }
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00e251d0 */
uint F_00e251d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe251d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[1];
  iVar6 = *(int *)((int)this + 4);
  if (iVar1 <= *(int *)((int)this + 4)) {
    iVar6 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar5 = uVar2 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar5,8);
  }
  puVar4 = *(undefined4 * PTR32 *)this;
  if (0 < iVar6) {
    iVar3 = *param_1 - (int)puVar4;
    iVar5 = iVar6;
    do {
      *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
      puVar4[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar4);
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar4 = (undefined4 *)(*(int *)this + iVar6 * 8);
  iVar5 = iVar1 - iVar6;
  if (0 < iVar5) {
    iVar6 = (*param_1 + iVar6 * 8) - (int)puVar4;
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
        puVar4[1] = *(undefined4 *)(iVar6 + 4 + (int)puVar4);
      }
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00e25280 */
uint F_00e25280(unsigned int gen_a0)
{
  GEN_ENTER(0xe25280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e252c0 */
uint F_00e252c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe252c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e25300 */
uint F_00e25300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e25340 */
uint F_00e25340(unsigned int gen_a0)
{
  GEN_ENTER(0xe25340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e25380 */
uint F_00e25380(unsigned int gen_a0)
{
  GEN_ENTER(0xe25380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e253c0 */
uint F_00e253c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe253c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e25400 */
uint F_00e25400(unsigned int gen_a0)
{
  GEN_ENTER(0xe25400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkPackfileData::vf3 */
uint F_00e25440(unsigned int gen_a0)
{
  GEN_ENTER(0xe25440u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: FUN_00e25450 */
uint F_00e25450(unsigned int gen_a0)
{
  GEN_ENTER(0xe25450u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkPackfileData::vf0 */
uint F_00e25480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e24840(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e254c0 */
byte F_00e254c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe254c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = **(byte * PTR32 *)((int)this + 0x10);
  if (bVar1 == 0) {
    F_00e1bdb0(this,0x100);
    bVar1 = **(byte * PTR32 *)((int)this + 0x10);
  }
  return bVar1;
}

/* ref: FUN_00e254e0 */
uint F_00e254e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe254e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((((char)param_2 < 'a') || ('z' < (char)param_2)) && (0x19 < (byte)((char)param_2 + 0xbfU))) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00e25510 */
uint F_00e25510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25510u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (((((char)param_2 != ' ') && ((char)param_2 != '\t')) && ((char)param_2 != '\r')) &&
     ((char)param_2 != '\n')) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00e25540 */
uint F_00e25540(unsigned int gen_a0)
{
  GEN_ENTER(0xe25540u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0xc;
}

/* ref: FUN_00e25550 */
uint F_00e25550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11552e8));
  F_00e1bcd0((undefined *)((int)this + 8),param_1);
  *(undefined4 *)((int)this + 0x34) = 0;
  return (uint)this;
}

/* ref: FUN_00e25580 */
uint F_00e25580(unsigned int gen_a0)
{
  GEN_ENTER(0xe25580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x3e2d2d;
LAB_00e25590: ;
  iVar2 = 0;
  do {
    iVar5 = iVar2;
    pcVar3 = *(char * PTR32 *)((int)this + 0x18);
    if (((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))) <= pcVar3) {
      F_00e1bdb0((undefined *)((int)this + 8),0x100);
      pcVar3 = *(char * PTR32 *)((int)this + 0x18);
      if (((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))) <= pcVar3)
      goto LAB_00e255d9;
    }
    cVar1 = *pcVar3;
    *(char * PTR32 *)((int)this + 0x18) = pcVar3 + 1;
    if (cVar1 == '\0') {
LAB_00e255d9: ;
      uVar4 = F_00e25540("Badly formed comment");
      return uVar4;
    }
    if (*(char *)((int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + iVar5) != cVar1) goto LAB_00e25590;
    iVar2 = iVar5 + 1;
    if (iVar5 + 1 == 3) {
      return iVar5 + 2;
    }
  } while( true );
}

/* ref: FUN_00e255f0 */
uint F_00e255f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe255f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  bool bVar2;
  char * pcVar3;
  uint uVar4;
  
  do {
    bVar2 = false;
LAB_00e255f7: ;
    pcVar3 = *(char * PTR32 *)((int)this + 0x18);
    if (((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))) <= pcVar3) {
      F_00e1bdb0((undefined *)((int)this + 8),0x100);
      pcVar3 = *(char * PTR32 *)((int)this + 0x18);
      if (((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))) <= pcVar3)
      goto LAB_00e25643;
    }
    cVar1 = *pcVar3;
    *(char * PTR32 *)((int)this + 0x18) = pcVar3 + 1;
    if (cVar1 == '\0') {
LAB_00e25643: ;
      uVar4 = F_00e25540("Didn\'t hit terminating \"");
      return uVar4;
    }
  } while (bVar2);
  if (cVar1 == '\\') {
    bVar2 = true;
  }
  else if (cVar1 == '\"') {
    return 10;
  }
  goto LAB_00e255f7;
}

/* ref: FUN_00e25660 */
uint F_00e25660(unsigned int gen_a0)
{
  GEN_ENTER(0xe25660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  
LAB_00e25664: ;
  cVar1 = **(char * PTR32 *)((int)this + 0x18);
  if (cVar1 == '\0') {
    F_00e1bdb0((undefined *)((int)this + 8),0x100);
    cVar1 = **(char * PTR32 *)((int)this + 0x18);
  }
  if ((((cVar1 < 'a') || ('z' < cVar1)) && (0x19 < (byte)(cVar1 + 0xbfU))) &&
     ((9 < (byte)(cVar1 - 0x30U) && (cVar1 != '_')))) {
    return 8;
  }
  uVar2 = *(uint *)((int)this + 0x18);
  if ((uint)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)) <= uVar2)
  goto code_r0x00e256a7;
  goto LAB_00e256c0;
code_r0x00e256a7: ;
  F_00e1bdb0((undefined *)((int)this + 8),0x100);
  uVar2 = *(uint *)((int)this + 0x18);
  if (uVar2 < (uint)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c))) {
LAB_00e256c0: ;
    *(uint *)((int)this + 0x18) = uVar2 + 1;
  }
  goto LAB_00e25664;
}

/* ref: FUN_00e256d0 */
uint F_00e256d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe256d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  
LAB_00e256d4: ;
  cVar1 = **(char * PTR32 *)((int)this + 0x18);
  if (cVar1 == '\0') {
    F_00e1bdb0((undefined *)((int)this + 8),0x100);
    cVar1 = **(char * PTR32 *)((int)this + 0x18);
  }
  if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\r')) && (cVar1 != '\n')) {
    return 3;
  }
  uVar2 = *(uint *)((int)this + 0x18);
  if ((uint)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)) <= uVar2)
  goto code_r0x00e2570b;
  goto LAB_00e25724;
code_r0x00e2570b: ;
  F_00e1bdb0((undefined *)((int)this + 8),0x100);
  uVar2 = *(uint *)((int)this + 0x18);
  if (uVar2 < (uint)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c))) {
LAB_00e25724: ;
    *(uint *)((int)this + 0x18) = uVar2 + 1;
  }
  goto LAB_00e256d4;
}

/* ref: FUN_00e25740 */
uint F_00e25740(unsigned int gen_a0)
{
  GEN_ENTER(0xe25740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  
  if ((uint)(*(int *)((int)this + 0x14) + *(int *)((int)this + 0x1c)) < *(uint *)((int)this + 0x18))
  {
    *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) - 1;
  }
  while( true ) {
    pcVar2 = *(char * PTR32 *)((int)this + 0x18);
    if (((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))) <= pcVar2) {
      F_00e1bdb0((undefined *)((int)this + 8),0x100);
      pcVar2 = *(char * PTR32 *)((int)this + 0x18);
      if (((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))) <= pcVar2) {
        return 2;
      }
    }
    cVar1 = *pcVar2;
    *(char * PTR32 *)((int)this + 0x18) = pcVar2 + 1;
    if (cVar1 == '\0') {
      return 2;
    }
    if (cVar1 == '<') break;
    if ((((cVar1 == ' ') || (cVar1 == '\t')) || (cVar1 == '\r')) || (cVar1 == '\n')) {
      pcVar3 = ((char *)GEN_TOP((*(int *)((int)this + 0x14) + *(int *)((int)this + 0x1c))));
LAB_00e257af: ;
      if (pcVar3 < pcVar2 + 1) {
        *(char * PTR32 *)((int)this + 0x18) = pcVar2;
      }
      return 2;
    }
  }
  pcVar3 = ((char *)GEN_TOP((*(int *)((int)this + 0x14) + *(int *)((int)this + 0x1c))));
  goto LAB_00e257af;
}

/* ref: FUN_00e257c0 */
uint F_00e257c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe257c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * pcVar1;
  uint uVar2;
  char cVar3;
  
  do {
    pcVar1 = *(char * PTR32 *)((int)this + 0x18);
    if (pcVar1 < ((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c))))) {
LAB_00e257ef: ;
      cVar3 = *pcVar1;
      *(char * PTR32 *)((int)this + 0x18) = pcVar1 + 1;
    }
    else {
      F_00e1bdb0((undefined *)((int)this + 8),0x100);
      pcVar1 = *(char * PTR32 *)((int)this + 0x18);
      if (pcVar1 < ((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))))
      goto LAB_00e257ef;
      cVar3 = '\0';
    }
    switch((unsigned int)(uintptr_t)(cVar3)) {
    case '\0': ;
      return 5;
    default: ;
      if ((((cVar3 < 'a') || ('z' < cVar3)) && (0x19 < (byte)(cVar3 + 0xbfU))) && (cVar3 != '_')) {
        uVar2 = F_00e25540("Unexpected token");
        return uVar2;
      }
      uVar2 = F_00e25660(this);
      return uVar2;
    case '\t': ;
    case '\n': ;
    case '\r': ;
    case ' ': ;
      F_00e256d0(this);
      F_00e1bc10((undefined *)((int)this + 8));
      break;
    case '\"': ;
      uVar2 = F_00e255f0(this);
      return uVar2;
    case '/': ;
      return 0xb;
    case '=': ;
      return 9;
    case '>': ;
      if ((*(uint *)((int)this + 0x34) & 2) != 0) {
        uVar2 = F_00e25540("Expecting ?> to close <? section");
        return uVar2;
      }
      *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xfffffffe;
      return 6;
    case '?': ;
      if ((*(byte *)((int)this + 0x34) & 2) != 0) {
        pcVar1 = *(char * PTR32 *)((int)this + 0x18);
        if (pcVar1 < ((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c))))) {
LAB_00e2584d: ;
          cVar3 = *pcVar1;
          *(char * PTR32 *)((int)this + 0x18) = pcVar1 + 1;
          if (cVar3 == '>') {
            *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xfffffffc;
            return 7;
          }
        }
        else {
          F_00e1bdb0((undefined *)((int)this + 8),0x100);
          pcVar1 = *(char * PTR32 *)((int)this + 0x18);
          if (pcVar1 < ((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))))
          goto LAB_00e2584d;
        }
        if ((uint)(*(int *)((int)this + 0x14) + *(int *)((int)this + 0x1c)) <
            *(uint *)((int)this + 0x18)) {
          *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) - 1;
        }
      }
    }
  } while( true );
}

/* ref: FUN_00e25960 */
uint F_00e25960(unsigned int gen_a0)
{
  GEN_ENTER(0xe25960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  char * pcVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  pcVar3 = *(char * PTR32 *)((int)this + 0x18);
  if (((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))) <= pcVar3) {
    F_00e1bdb0((undefined *)((int)this + 8),0x100);
    pcVar3 = *(char * PTR32 *)((int)this + 0x18);
    if (((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))) <= pcVar3) {
      return 5;
    }
  }
  cVar1 = *pcVar3;
  *(char * PTR32 *)((int)this + 0x18) = pcVar3 + 1;
  if (cVar1 == '\0') {
    return 5;
  }
  if (cVar1 != '<') {
    if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\r')) && (cVar1 != '\n')) {
      uVar2 = F_00e25740(this);
      return uVar2;
    }
    uVar2 = F_00e256d0(this);
    return uVar2;
  }
  cVar1 = pcVar3[1];
  if (cVar1 == '\0') {
    F_00e1bdb0((undefined *)((int)this + 8),0x100);
    cVar1 = **(char * PTR32 *)((int)this + 0x18);
  }
  if (cVar1 != '?') {
    pcVar3 = (char *)F_00e1bef0((undefined *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,&REFG(undefined, 0x1155360));
    if (*pcVar3 == '\0') {
      *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 1;
      return 0;
    }
    uVar2 = F_00e25580(this);
    return uVar2;
  }
  uVar2 = *(uint *)((int)this + 0x18);
  if ((uint)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)) <= uVar2) {
    F_00e1bdb0((undefined *)((int)this + 8),0x100);
    uVar2 = *(uint *)((int)this + 0x18);
    if ((uint)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)) <= uVar2) goto LAB_00e25a1b;
  }
  *(uint *)((int)this + 0x18) = uVar2 + 1;
LAB_00e25a1b: ;
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 3;
  return 1;
}

/* ref: FUN_00e25a70 */
uint F_00e25a70(unsigned int gen_a0)
{
  GEN_ENTER(0xe25a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00e1bc10((undefined *)((int)this + 8));
  if ((*(byte *)((int)this + 0x34) & 1) != 0) {
    uVar1 = F_00e257c0(this);
    return uVar1;
  }
  uVar1 = F_00e25960(this);
  return uVar1;
}

/* ref: FUN_00e25ac0 */
byte F_00e25ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xe25ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte * pbVar2;
  
  pbVar2 = *(byte * PTR32 *)((int)this + 0x10);
  if (((byte *)GEN_TOP((*(int *)((int)this + 0x18) + *(int *)((int)this + 0x14)))) <= pbVar2) {
    F_00e1bdb0(this,0x100);
    pbVar2 = *(byte * PTR32 *)((int)this + 0x10);
    if (((byte *)GEN_TOP((*(int *)((int)this + 0x18) + *(int *)((int)this + 0x14)))) <= pbVar2) {
      return 0;
    }
  }
  bVar1 = *pbVar2;
  *(byte * PTR32 *)((int)this + 0x10) = pbVar2 + 1;
  return bVar1;
}

/* ref: FUN_00e25b00 */
uint F_00e25b00(unsigned int gen_a0)
{
  GEN_ENTER(0xe25b00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkXmlLexAnalyzer::vf0 */
uint F_00e25b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e1bd60(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e25b70 */
uint F_00e25b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe25b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return (uint)this;
}

/* ref: FUN_00e25b90 */
uint F_00e25b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe25b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e25ba0 */
uint F_00e25ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe25ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e25be0 */
uint F_00e25be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25be0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e25c10 */
uint F_00e25c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25c10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00e25c30 */
uint F_00e25c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe25c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00e25c50 */
uint F_00e25c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25c50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00e25c90 */
uint F_00e25c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe25c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e25cd0 */
uint F_00e25cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe25cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e25cf0 */
unsigned int F_00e25cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe25cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_3;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
      }
      puVar1 = (undefined8 *)((int)puVar1 + 0xc);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e25d30 */
uint F_00e25d30(unsigned int gen_a0)
{
  GEN_ENTER(0xe25d30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  undefined * this;
  LPVOID pvVar3;
  uint uVar4;
  int iVar5;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = F_00d92490(*(undefined4 *)((int)pvVar3 + 0x2c),param_1);
  iVar2 = *((int *)GEN_TOP(((uVar4 - 4) + param_1)));
  if (iVar2 != 0) {
    iVar1 = uVar4 + iVar2 * -8 + -4 + param_1;
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        this = *(undefined * PTR32 *)(iVar1 + iVar5 * 8);
        if (this != (undefined *)0x0) {
          F_00dc2610(this,*(undefined4 *)(iVar1 + 4 + iVar5 * 8));
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  F_00d924b0(*(undefined4 *)((int)pvVar3 + 0x2c),param_1);
  return 0;
}

/* ref: FUN_00e25db0 */
uint F_00e25db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe25db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined8 * puVar1;
  undefined4 uVar2;
  int iVar3;
  char * pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  LPVOID pvVar8;
  int iVar9;
  int * piVar10;
  
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(int *)(gen_frame + 0x88)) = 0;
  (*(uint *)(gen_frame + 0x8c)) = 0x80000000;
  F_00da04b0(((undefined1 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x84)));
  iVar7 = (int)(*(undefined4 * PTR32 *)&gen_args[1]);
  iVar9 = (*(int *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x40)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x64)) = 0x80000000;
  (*(uint *)(gen_frame + 0xa8)) = 0x80000000;
  (*(int *)(gen_frame + 0x38)) = 0;
  (*(int *)(gen_frame + 0x3c)) = 0;
  (*(int *)(gen_frame + 0x44)) = 0;
  (*(int *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(int *)(gen_frame + 0xa0)) = 0;
  (*(uint *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0xffffffff;
  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0xa0)),8);
  piVar10 = (int *)((*(int *)(gen_frame + 0xa0)) + (*(uint *)(gen_frame + 0xa4)) * 8);
  *piVar10 = iVar9;
  piVar10[1] = iVar7;
  (*(uint *)(gen_frame + 0xa4)) = (*(uint *)(gen_frame + 0xa4)) + 1;
  F_00dbd8b0(&(*(undefined4 *)(gen_frame + 0x78)),&REFG(undefined * PTR32, 0x13516ac),iVar9,1);
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0xffffffff;
  (*(int *)(gen_frame + 0x94)) = 0;
  (*(uint *)(gen_frame + 0x98)) = 0;
  (*(uint *)(gen_frame + 0x9c)) = 0x80000000;
  F_00e05640(&(*(int *)&gen_args[0]),&REFG(undefined4, 0x135491c));
  F_00e05640(&(*(undefined4 * PTR32 *)&gen_args[1]),&REFG(undefined4, 0x135491c));
  F_00e26520(((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 * PTR32 *)&gen_args[1]),&(*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[5]));
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  if (0 < (int)(*(uint *)(gen_frame + 0xa4))) {
    do {
      uVar2 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0xa0)) + (int)(*(undefined4 * PTR32 *)&gen_args[1]) * 8)));
      uVar5 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0xa0)) + 4 + (int)(*(undefined4 * PTR32 *)&gen_args[1]) * 8)));
      F_00dbd8b0(&(*(undefined4 *)(gen_frame + 0x6c)),&REFG(undefined * PTR32, 0x13516ac),uVar2,(*(int *)(gen_frame + 0x88)));
      iVar9 = (*(int *)(gen_frame + 0x48));
      pcVar4 = (char *)F_00d929e0(uVar5,(int)&(*(int *)&gen_args[0]) + 3);
      if (*pcVar4 != '\0') {
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 0x14))))((*(int * PTR32 *)&gen_args[3]),uVar2);
      }
      (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x88));
      (*(undefined4 *)(gen_frame + 0x30)) = uVar2;
      uVar6 = F_00d92610(uVar5);
      (*(uint *)(gen_frame + 0x34)) = uVar6;
      if ((*(uint *)(gen_frame + 0x98)) == ((*(uint *)(gen_frame + 0x9c)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x94)),0xc);
      }
      puVar1 = (undefined8 *)((*(int *)(gen_frame + 0x94)) + (*(uint *)(gen_frame + 0x98)) * 0xc);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = CONCAT44((*(undefined4 *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x2c)));
        *(uint *)(puVar1 + 1) = (*(uint *)(gen_frame + 0x34));
      }
      (*(uint *)(gen_frame + 0x98)) = (*(uint *)(gen_frame + 0x98)) + 1;
      F_00e27ef0(((undefined1 *)(gen_frame + 0x8)),uVar2,uVar5,(*(undefined4 *)(gen_frame + 0x28)),uVar5,&(*(int *)(gen_frame + 0x38)));
      (*(int *)(gen_frame + 0x90)) = iVar9;
      if (iVar9 < (*(int *)(gen_frame + 0x48))) {
        iVar9 = iVar9 << 4;
        do {
          iVar7 = *(int *)(iVar9 + 4 + (*(int *)(gen_frame + 0x44)));
          if ((iVar7 != 0) && (iVar3 = *(int *)(iVar9 + 8 + (*(int *)(gen_frame + 0x44))), iVar3 != 0)) {
            if (((*(undefined * PTR32 *)&gen_args[2]) == (undefined *)0x0) || (uVar5 = F_00dbd970((*(undefined * PTR32 *)&gen_args[2]),iVar7,0), uVar5 == 0)) {
              uVar5 = F_00dbd970(&(*(undefined4 *)(gen_frame + 0x78)),iVar7,0);
              if (uVar5 == 0) {
                if ((*(uint *)(gen_frame + 0xa4)) == ((*(uint *)(gen_frame + 0xa8)) & 0x3fffffff)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0xa0)),8);
                }
                piVar10 = (int *)((*(int *)(gen_frame + 0xa0)) + (*(uint *)(gen_frame + 0xa4)) * 8);
                *piVar10 = iVar7;
                piVar10[1] = iVar3;
                (*(uint *)(gen_frame + 0xa4)) = (*(uint *)(gen_frame + 0xa4)) + 1;
                F_00dbd8b0(&(*(undefined4 *)(gen_frame + 0x78)),&REFG(undefined * PTR32, 0x13516ac),iVar7,1);
              }
            }
            else {
              *(uint *)(iVar9 + 4 + (*(int *)(gen_frame + 0x44))) = uVar5;
            }
          }
          iVar7 = (*(int *)(gen_frame + 0x90)) + 1;
          iVar9 = iVar9 + 0x10;
          (*(int *)(gen_frame + 0x90)) = iVar7;
        } while (iVar7 < (*(int *)(gen_frame + 0x48)));
      }
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 1)));
    } while ((int)(*(undefined4 * PTR32 *)&gen_args[1]) < (int)(*(uint *)(gen_frame + 0xa4)));
  }
  iVar9 = (*(int *)(gen_frame + 0x88));
  if ((*(int *)(gen_frame + 0x88)) == 0) {
    F_00e26560(((undefined1 *)(gen_frame + 0x8)));
    (*(uint *)(gen_frame + 0x98)) = 0;
    if (((*(uint *)(gen_frame + 0x9c)) & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x94)),((*(uint *)(gen_frame + 0x9c)) & 0x3fffffff) * 0xc);
    }
    (*(int *)(gen_frame + 0x94)) = 0;
    (*(uint *)(gen_frame + 0x9c)) = 0x80000000;
    F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x6c)),&REFG(undefined * PTR32, 0x13516ac));
    F_00dbd5e0();
    F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x78)),&REFG(undefined * PTR32, 0x13516ac));
    F_00dbd5e0();
    (*(uint *)(gen_frame + 0xa4)) = 0;
    if (((*(uint *)(gen_frame + 0xa8)) & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xa0)),(*(uint *)(gen_frame + 0xa8)) * 8);
    }
    (*(int *)(gen_frame + 0xa0)) = 0;
    (*(uint *)(gen_frame + 0xa8)) = 0x80000000;
    F_00e1d4f0(&(*(int *)(gen_frame + 0x38)));
    F_00d9fda0(((undefined1 *)(gen_frame + 0x20)));
    (*(int *)(gen_frame + 0x88)) = 0;
    if (((*(uint *)(gen_frame + 0x8c)) & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x84)),(*(uint *)(gen_frame + 0x8c)) & 0x3fffffff);
    }
    return 0;
  }
  iVar7 = 4;
  if ((*(int * PTR32 *)&gen_args[4]) != (int *)0x0) {
    iVar7 = (*(uint *)(gen_frame + 0x98)) * 8 + 4;
  }
  pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar5 = F_00d92460(*(undefined4 *)((int)pvVar8 + 0x2c),iVar9 + iVar7);
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)((*(int *)(gen_frame + 0x88)) + uVar5);
  F_00da1010(uVar5,(*(undefined4 *)(gen_frame + 0x84)),(*(int *)(gen_frame + 0x88)));
  iVar9 = 0;
  if (0 < (*(int *)(gen_frame + 0x3c))) {
    do {
      iVar3 = iVar9 * 8;
      iVar7 = iVar9 * 8;
      iVar9 = iVar9 + 1;
      *((uint *)GEN_TOP((uVar5 + *(int *)((*(int *)(gen_frame + 0x38)) + iVar7)))) = *(int *)((*(int *)(gen_frame + 0x38)) + 4 + iVar3) + uVar5;
    } while (iVar9 < (*(int *)(gen_frame + 0x3c)));
  }
  (*(int *)(gen_frame + 0x90)) = 0;
  if (0 < (*(int *)(gen_frame + 0x48))) {
    (*(int *)&gen_args[0]) = 0;
    do {
      iVar9 = *(int *)((*(int *)&gen_args[0]) + 4 + (*(int *)(gen_frame + 0x44)));
      uVar6 = F_00dbd970(&(*(undefined4 *)(gen_frame + 0x6c)),iVar9,0xffffffff);
      if (uVar6 != 0xffffffff) {
        iVar9 = uVar6 + uVar5;
      }
      *((int *)GEN_TOP((uVar5 + *(int *)((*(int *)&gen_args[0]) + (*(int *)(gen_frame + 0x44)))))) = iVar9;
      iVar9 = (*(int *)(gen_frame + 0x90)) + 1;
      (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) + 0x10;
      (*(int *)(gen_frame + 0x90)) = iVar9;
    } while (iVar9 < (*(int *)(gen_frame + 0x48)));
  }
  if (((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)0x0) && (0 < (int)(*(uint *)(gen_frame + 0x98)))) {
    iVar7 = 0;
    iVar9 = 0;
    do {
      F_00dbd8b0((*(undefined * PTR32 *)&gen_args[2]),&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(iVar7 + 4 + (*(int *)(gen_frame + 0x94))),
                   *(int *)(iVar7 + (*(int *)(gen_frame + 0x94))) + uVar5);
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar9 < (int)(*(uint *)(gen_frame + 0x98)));
  }
  iVar9 = 0;
  if ((*(int * PTR32 *)&gen_args[4]) == (int *)0x0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  }
  else {
    if (0 < (int)(*(uint *)(gen_frame + 0x98))) {
      (*(int *)&gen_args[0]) = 0;
      do {
        piVar10 = (int *)((*(int *)&gen_args[0]) + (*(int *)(gen_frame + 0x94)));
        ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[4]) + 0x10))))((*(int * PTR32 *)&gen_args[4]),*piVar10 + uVar5,piVar10[2]);
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[4]) + 0x1c))))((*(int * PTR32 *)&gen_args[4]),piVar10[2]);
        (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) + 0xc;
        (*(undefined4 * PTR32 *)&gen_args[1])[iVar9 * 2] = uVar6;
        (*(undefined4 * PTR32 *)&gen_args[1])[iVar9 * 2 + 1] = *piVar10 + uVar5;
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(*(uint *)(gen_frame + 0x98)));
    }
    (*(undefined4 * PTR32 *)&gen_args[1])[(*(uint *)(gen_frame + 0x98)) * 2] = (*(uint *)(gen_frame + 0x98));
  }
  F_00e26560(((undefined1 *)(gen_frame + 0x8)));
  (*(uint *)(gen_frame + 0x98)) = 0;
  if (((*(uint *)(gen_frame + 0x9c)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x94)),((*(uint *)(gen_frame + 0x9c)) & 0x3fffffff) * 0xc);
  }
  (*(int *)(gen_frame + 0x94)) = 0;
  (*(uint *)(gen_frame + 0x9c)) = 0x80000000;
  F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x6c)),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x78)),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  (*(uint *)(gen_frame + 0xa4)) = 0;
  if (((*(uint *)(gen_frame + 0xa8)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xa0)),(*(uint *)(gen_frame + 0xa8)) * 8);
  }
  (*(int *)(gen_frame + 0xa0)) = 0;
  (*(uint *)(gen_frame + 0xa8)) = 0x80000000;
  F_00e1d4f0(&(*(int *)(gen_frame + 0x38)));
  F_00d9fda0(((undefined1 *)(gen_frame + 0x20)));
  (*(int *)(gen_frame + 0x88)) = 0;
  if (((*(uint *)(gen_frame + 0x8c)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x84)),(*(uint *)(gen_frame + 0x8c)) & 0x3fffffff)
    ;
  }
  return uVar5;
}

/* ref: FUN_00e26340 */
uint F_00e26340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe26340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e26390 */
uint F_00e26390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe26390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e263d0 */
uint F_00e263d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe263d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e26420 */
uint F_00e26420(unsigned int gen_a0)
{
  GEN_ENTER(0xe26420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e26460 */
uint F_00e26460(unsigned int gen_a0)
{
  GEN_ENTER(0xe26460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e264a0 */
uint F_00e264a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe264a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return (uint)this;
}

/* ref: FUN_00e264c0 */
uint F_00e264c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe264c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00e264e0 */
uint F_00e264e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe264e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  if ((param_2 <= param_1) && (param_1 < param_3)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e26500 */
uint F_00e26500(unsigned int gen_a0)
{
  GEN_ENTER(0xe26500u, gen_a0, 0u, 0u, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00da5ff0(in_esi);
  if (uVar1 != 0) {
    uVar1 = F_00da5ff0(in_esi);
    return uVar1;
  }
  return 1;
}

/* ref: FUN_00e26520 */
uint F_00e26520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe26520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1155368));
  *(undefined4 *)((int)this + 8) = *param_1;
  *(undefined4 *)((int)this + 0xc) = *param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(bool *)((int)this + 0x14) = *(char *)((int)this + 9) != *(char *)((int)this + 0xd);
  return (uint)this;
}

/* ref: FUN_00e26560 */
unsigned int F_00e26560(unsigned int gen_a0)
{
  GEN_ENTER(0xe26560u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: FUN_00e26570 */
uint F_00e26570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe26570u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  code * pcVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(param_4)) {
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
  case 0x11: ;
  case 0x12: ;
    param_1 = param_1 * (param_2 >> 2);
    param_2 = 4;
  case 1: ;
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0x20: ;
    uVar2 = F_00da6970(param_3,param_5,param_2,param_1);
    return uVar2;
  }
  F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
  F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Unknown class member found during write of plain data array.");
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78),3,0x747e1e03,((undefined1 *)(gen_frame + 0x0)),"Copier\\hkObjectCopier.cpp",0x101);
  if (uVar2 != 0) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  uVar2 = F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
  return uVar2;
}

/* ref: FUN_00e26640 */
uint F_00e26640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe26640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  uint uVar1;
  int iVar2;
  uint local_8;
  
  local_8 = F_00d92b10(param_1,param_3,param_4);
  if (((*(char *)(param_2 + 0xc) == '\x19') &&
      (this = (undefined *)F_00da5fd0(param_2), this != (undefined *)0x0)) &&
     (param_2 = F_00e26500(param_2), 0 < (int)param_2)) {
    do {
      iVar2 = 0;
      uVar1 = F_00d927e0(this);
      if (0 < (int)uVar1) {
        do {
          uVar1 = F_00d92800(this,iVar2);
          uVar1 = F_00e26640(this,uVar1,iVar2,param_4);
          if (uVar1 == 0) {
            local_8 = 0;
          }
          iVar2 = iVar2 + 1;
          uVar1 = F_00d927e0(this);
        } while (iVar2 < (int)uVar1);
      }
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return local_8;
}

/* ref: hkObjectCopier::vf4 */
uint F_00e266d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe266d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if ((*(char *)(param_1 + 0xc) == *(char *)(param_2 + 0xc)) &&
     ((*(char *)(param_1 + 0xd) == *(char *)(param_2 + 0xd) || (*(char *)(param_1 + 0xc) == '\x18'))
     )) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e26700 */
uint F_00e26700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe26700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 4) {
    uVar1 = F_00da6970(param_1,param_4,4,param_3);
    return uVar1;
  }
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)pvVar2 + 0xc);
  uVar4 = param_3 * 8 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar2 + 8) < (int)uVar4) || (*(uint *)((int)pvVar2 + 0x10) < uVar1 + uVar4)) {
    uVar1 = F_00d94390(pvVar2,uVar4);
  }
  else {
    *(uint *)((int)pvVar2 + 0xc) = uVar1 + uVar4;
  }
  iVar3 = 0;
  if (0 < param_3) {
    do {
      *(undefined4 *)(uVar1 + iVar3 * 8) = *(undefined4 *)(param_4 + iVar3 * 4);
      *(undefined4 *)(uVar1 + 4 + iVar3 * 8) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  F_00da6970(param_1,uVar1,param_2,param_3);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar4 <= *(int *)((int)pvVar2 + 8)) && (uVar4 + uVar1 == *(int *)((int)pvVar2 + 0xc)))
     && (*(uint *)((int)pvVar2 + 0x14) != uVar1)) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return (uint)pvVar2;
  }
  uVar1 = F_00d945c0(pvVar2,uVar1,uVar4);
  return uVar1;
}

/* ref: FUN_00e267c0 */
uint F_00e267c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe267c0u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x20))(param_2);
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0x80000000;
  (*(uint *)(gen_frame + 0x18)) = in_eax;
  if (in_eax == 0) {
    uVar4 = 0;
  }
  else {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar4 = *(uint *)((int)pvVar2 + 0xc);
    uVar3 = in_eax + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < uVar4 + uVar3))
    {
      uVar4 = F_00d94390(pvVar2,uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = uVar4 + uVar3;
    }
  }
  (*(uint *)(gen_frame + 0x10)) = in_eax | 0x80000000;
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  if ((int)(in_eax & 0x3fffffff) < (int)in_eax) {
    uVar4 = (in_eax & 0x3fffffff) * 2;
    if ((int)uVar4 <= (int)in_eax) {
      uVar4 = in_eax;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x8)),uVar4,1);
  }
  if (0 < (int)(in_eax - (*(uint *)(gen_frame + 0xc)))) {
    F_00c48350((undefined *)((*(uint *)(gen_frame + 0xc)) + (*(uint *)(gen_frame + 0x8))),0,in_eax - (*(uint *)(gen_frame + 0xc)));
  }
  uVar1 = in_eax - 1 & uVar1;
  (*(uint *)(gen_frame + 0xc)) = in_eax;
  if (uVar1 != 0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x10))(param_2,(*(uint *)(gen_frame + 0x8)),in_eax - uVar1);
  }
  uVar4 = (*(uint *)(gen_frame + 0x18));
  uVar1 = (*(uint *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x14)) == (*(uint *)(gen_frame + 0x8))) {
    (*(uint *)(gen_frame + 0xc)) = 0;
  }
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = uVar4 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar2 + 8) < (int)uVar4) || (uVar4 + uVar1 != *(int *)((int)pvVar2 + 0xc)))
     || (*(uint *)((int)pvVar2 + 0x14) == uVar1)) {
    F_00d945c0(pvVar2,uVar1,uVar4);
  }
  else {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
  }
  (*(uint *)(gen_frame + 0xc)) = 0;
  uVar1 = (*(uint *)(gen_frame + 0x10));
  if (-1 < (int)(*(uint *)(gen_frame + 0x10))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x10)) & 0x3fffffff);
  }
  return uVar1;
}

/* ref: FUN_00e26910 */
uint F_00e26910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe26910u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPVOID pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0x80000000;
  (*(uint *)(gen_frame + 0x18)) = in_eax;
  if (in_eax == 0) {
    uVar2 = 0;
  }
  else {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar2 = *(uint *)((int)pvVar1 + 0xc);
    uVar4 = in_eax + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar1 + 8) < (int)uVar4) || (*(uint *)((int)pvVar1 + 0x10) < uVar2 + uVar4))
    {
      uVar2 = F_00d94390(pvVar1,uVar4);
    }
    else {
      *(uint *)((int)pvVar1 + 0xc) = uVar2 + uVar4;
    }
  }
  (*(uint *)(gen_frame + 0x10)) = in_eax | 0x80000000;
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  if ((int)(in_eax & 0x3fffffff) < (int)in_eax) {
    uVar2 = (in_eax & 0x3fffffff) * 2;
    if ((int)uVar2 <= (int)in_eax) {
      uVar2 = in_eax;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x8)),uVar2,1);
  }
  if (0 < (int)(in_eax - (*(uint *)(gen_frame + 0xc)))) {
    F_00c48350((undefined *)((*(uint *)(gen_frame + 0xc)) + (*(uint *)(gen_frame + 0x8))),0,in_eax - (*(uint *)(gen_frame + 0xc)));
  }
  (*(uint *)(gen_frame + 0xc)) = in_eax;
  uVar3 = F_00da6ae0(param_2,(*(uint *)(gen_frame + 0x8)),in_eax);
  uVar4 = (*(uint *)(gen_frame + 0x18));
  uVar2 = (*(uint *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x14)) == (*(uint *)(gen_frame + 0x8))) {
    (*(uint *)(gen_frame + 0xc)) = 0;
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = uVar4 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar1 + 8) < (int)uVar4) || (uVar4 + uVar2 != *(int *)((int)pvVar1 + 0xc)))
     || (*(uint *)((int)pvVar1 + 0x14) == uVar2)) {
    F_00d945c0(pvVar1,uVar2,uVar4);
  }
  else {
    *(uint *)((int)pvVar1 + 0xc) = uVar2;
  }
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x10))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x10)) & 0x3fffffff)
    ;
  }
  return uVar3;
}

/* ref: FUN_00e26a50 */
uint F_00e26a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe26a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  char cVar1;
  code * pcVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *(char *)((int)param_2 + 0xc);
  uVar4 = 0;
  switch((unsigned int)(uintptr_t)(cVar1)) {
  case '\x01': ;
  case '\x02': ;
  case '\x03': ;
  case '\x04': ;
  case '\x05': ;
  case '\x06': ;
  case '\a': ;
  case '\b': ;
  case '\t': ;
  case '\n': ;
  case '\v': ;
  case '\f': ;
  case '\r': ;
  case '\x0e': ;
  case '\x0f': ;
  case '\x10': ;
  case '\x11': ;
  case '\x12': ;
  case '\x18': ;
  case '\x1f': ;
  case ' ': ;
    uVar4 = F_00da6030(param_2);
    break;
  default: ;
    F_00da0a80(&(*(undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(&(*(undefined1 *)(gen_frame + 0x200)),"Unknown class member type found!");
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                      (REFG(int * PTR32, 0x15dff78),3,0x5ef4e5a4,((undefined1 *)(gen_frame + 0x0)),"Copier\\hkObjectCopier.cpp",0xb0);
    if (uVar3 != 0) {
      pcVar2 = ((code *)GEN_TOP(swi(3)));
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    F_00d9fda0(&(*(undefined1 *)(gen_frame + 0x200)));
    break;
  case '\x14': ;
  case '\x15': ;
  case '\x1e': ;
  case '!': ;
    uVar4 = F_00e26500(param_2);
    uVar4 = uVar4 * *(byte *)((int)this + 0xc);
    break;
  case '\x16': ;
  case '\x17': ;
  case '\x1a': ;
  case '\x1b': ;
    if (cVar1 == '\x1b') {
      uVar4 = (uint)*(byte *)((int)this + 0xc);
    }
    uVar4 = uVar4 + 4 + (uint)*(byte *)((int)this + 0xc);
    if (cVar1 == '\x16') {
      (*(undefined1 *)(gen_frame + 0x200)) = 0;
      (*(undefined2 *)(gen_frame + 0x209)) = 0;
      (*(undefined1 *)(gen_frame + 0x20b)) = 0;
      (*(undefined8 *)(gen_frame + 0x201)) = 0;
      F_00da6ae0(param_1,&(*(undefined1 *)(gen_frame + 0x200)),uVar4);
      uVar4 = F_00da6c70(param_1,0x80000000);
      return uVar4;
    }
    break;
  case '\x19': ;
    uVar4 = F_00da5fc0(param_2);
    uVar4 = F_00d929c0(uVar4);
    uVar3 = F_00e26500(param_2);
    uVar4 = uVar4 * uVar3;
    break;
  case '\x1c': ;
    uVar4 = F_00e26500(param_2);
    uVar4 = uVar4 * *(byte *)((int)this + 0xc) * 2;
  }
  uVar4 = F_00e26910(uVar4,param_1);
  return uVar4;
}

/* ref: FUN_00e26bd0 */
uint F_00e26bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe26bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x2b0];
  byte bVar1;
  ushort uVar2;
  code * pcVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * this_00;
  undefined4 * puVar6;
  undefined * pvVar7;
  ushort * puVar8;
  undefined8 * puVar9;
  undefined * pvVar10;
  uint uVar11;
  uint uVar12;
  ushort * puVar13;
  int iVar14;
  undefined * puVar15;
  undefined4 uVar16;
  undefined * puVar17;
  uint uVar18;
  
  (*(int * PTR32 *)(gen_frame + 0x29c)) = this;
  piVar4 = (int *)F_00da6b30(param_3);
  (*(int * PTR32 *)(gen_frame + 0x25c)) = piVar4;
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x20))(piVar4);
  (*(uint *)(gen_frame + 0x268)) = uVar5;
  (*(int *)(gen_frame + 0x284)) = 0;
  (*(uint *)(gen_frame + 0x288)) = 0;
  (*(uint *)(gen_frame + 0x28c)) = 0x80000000;
  (*(int *)(gen_frame + 0x294)) = 0;
  uVar5 = F_00d927e0(param_4);
  if (0 < (int)uVar5) {
    do {
      this_00 = (undefined4 *)F_00d92800(param_4,(*(int *)(gen_frame + 0x294)));
      (*(undefined * PTR32 *)(gen_frame + 0x2a0)) = (undefined *)(uint)*(ushort *)((int)this_00 + 0x12);
      uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x20))(piVar4);
      F_00e26910((int)(*(undefined * PTR32 *)(gen_frame + 0x2a0)) + ((*(uint *)(gen_frame + 0x268)) - uVar5),param_3);
      if ((*(ushort *)(this_00 + 4) & 0x400) == 0) {
LAB_00e26c88: ;
        puVar6 = (undefined4 *)F_00d928d0(param_2,*this_00);
        (*(undefined4 * PTR32 *)(gen_frame + 0x2a8)) = puVar6;
        if ((puVar6 == (undefined4 *)0x0) ||
           (uVar5 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x29c)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x29c)),puVar6,this_00), uVar5 == 0)) {
LAB_00e2729a: ;
          F_00e26640(param_4,this_00,(*(int *)(gen_frame + 0x294)),piVar4);
        }
        else {
          puVar13 = ((ushort *)GEN_TOP(((uint)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x2a8)) + 0x12) + param_1)));
          switch((unsigned int)(uintptr_t)(*(char *)(this_00 + 3))) {
          case '\x01': ;
          case '\x02': ;
          case '\x03': ;
          case '\x04': ;
          case '\x05': ;
          case '\x06': ;
          case '\a': ;
          case '\b': ;
          case '\t': ;
          case '\n': ;
          case '\v': ;
          case '\f': ;
          case '\r': ;
          case '\x0e': ;
          case '\x0f': ;
          case '\x10': ;
          case '\x11': ;
          case '\x12': ;
          case ' ': ;
            pvVar7 = (undefined *)F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
            (*(undefined * PTR32 *)(gen_frame + 0x2a0)) = pvVar7;
            uVar5 = F_00e26500(this_00);
            pvVar7 = (undefined *)F_00da6030(this_00);
            (*(undefined * PTR32 *)(gen_frame + 0x298)) = pvVar7;
            uVar11 = F_00e28010((*(undefined * PTR32 *)(gen_frame + 0x2a0)),uVar5);
            F_00e26570(uVar11,(int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x298))) / (int)uVar5,param_3,(uint)*(byte *)(this_00 + 3),
                         puVar13);
            break;
          case '\x13': ;
            break;
          case '\x14': ;
          case '\x15': ;
          case '\x1d': ;
          case '!': ;
            uVar5 = F_00e26500(this_00);
            piVar4 = (*(int * PTR32 *)(gen_frame + 0x29c));
            (*(undefined8 *)(gen_frame + 0x228)) = 0;
            if (0 < (int)uVar5) {
              do {
                F_00da6ae0(param_3,&(*(undefined8 *)(gen_frame + 0x228)),(uint)*(byte *)(piVar4 + 3));
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            break;
          case '\x16': ;
          case '\x1a': ;
          case '\x1b': ;
            if (*(char *)(this_00 + 3) == '\x1b') {
              bVar1 = *(byte *)((*(int * PTR32 *)(gen_frame + 0x29c)) + 3);
              (*(undefined8 *)(gen_frame + 0x218)) = 0;
              F_00da6970(param_3,&(*(undefined8 *)(gen_frame + 0x218)),(uint)bVar1,1);
              if (*(int *)puVar13 == 0) {
                F_00da0a80(((undefined1 *)(gen_frame + 0x23c)),((undefined1 *)(gen_frame + 0x8)),0x200);
                uVar16 = *(*(undefined4 * PTR32 *)(gen_frame + 0x2a8));
                puVar17 = &REFG(undefined, 0x1118a34);
                puVar15 = &REFG(undefined, 0x112652c);
                uVar5 = F_00d92610(param_2);
                pvVar7 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x23c)),
                                              "Can\'t copy homogeneous array. No hkClass for ");
                pvVar7 = (undefined *)F_00d9fe80(pvVar7,uVar5);
                pvVar7 = (undefined *)F_00d9fe80(pvVar7,puVar15);
                pvVar7 = (undefined *)F_00d9fe80(pvVar7,uVar16);
                F_00d9fe80(pvVar7,puVar17);
                ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                          (REFG(int * PTR32, 0x15dff78),1,0xabba5a55,((undefined1 *)(gen_frame + 0x8)),"Copier\\hkObjectCopier.cpp",0x1cb);
                F_00d9fda0(((undefined1 *)(gen_frame + 0x23c)));
                uVar5 = 0;
              }
              else {
                uVar5 = *(uint *)(puVar13 + 4);
              }
            }
            else if (*(char *)((int)this_00 + 0xd) == '\0') {
              uVar5 = 0;
            }
            else {
              uVar5 = *(uint *)(puVar13 + 2);
            }
            bVar1 = *(byte *)((*(int * PTR32 *)(gen_frame + 0x29c)) + 3);
            (*(undefined8 *)(gen_frame + 0x220)) = 0;
            F_00da6970(param_3,&(*(undefined8 *)(gen_frame + 0x220)),(uint)bVar1,1);
            F_00da6c50(param_3,uVar5);
            if (*(char *)(this_00 + 3) == '\x16') {
              F_00da6c50(param_3,uVar5 | 0x80000000);
            }
            break;
          default: ;
            F_00da0a80(((undefined1 *)(gen_frame + 0x230)),((undefined1 *)(gen_frame + 0x8)),0x200);
            F_00d9fe80(((undefined1 *)(gen_frame + 0x230)),"Unknown class member found during write of data.");
            uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                              (REFG(int * PTR32, 0x15dff78),3,0x641e3e03,((undefined1 *)(gen_frame + 0x8)),"Copier\\hkObjectCopier.cpp",
                               0x245);
            if (uVar5 != 0) {
              pcVar3 = ((code *)GEN_TOP(swi(3)));
              uVar5 = (*pcVar3)();
              return uVar5;
            }
            F_00d9fda0(((undefined1 *)(gen_frame + 0x230)));
            break;
          case '\x18': ;
            if (((*(undefined4 * PTR32 *)(gen_frame + 0x2a8))[2] != 0) && (this_00[2] != 0)) {
              puVar8 = (ushort *)F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
              (*(ushort * PTR32 *)(gen_frame + 0x2a4)) = puVar8;
              uVar5 = F_00e26500(this_00);
              puVar8 = (ushort *)F_00e28010((*(ushort * PTR32 *)(gen_frame + 0x2a4)),uVar5);
              pvVar7 = (undefined *)F_00da5fe0((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
              (*(undefined * PTR32 *)(gen_frame + 0x2a0)) = pvVar7;
              pvVar7 = (undefined *)F_00da5fe0(this_00);
              (*(undefined * PTR32 *)(gen_frame + 0x298)) = pvVar7;
              uVar5 = F_00da6030((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
              pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x2a0));
              iVar14 = (int)uVar5 / (int)(*(ushort * PTR32 *)(gen_frame + 0x2a4));
              if (0 < (int)puVar8) {
                (*(ushort * PTR32 *)(gen_frame + 0x2a4)) = puVar8;
                do {
                  uVar5 = F_00da6230((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)),puVar13);
                  (*(undefined4 *)(gen_frame + 0x280)) = 0;
                  uVar5 = F_00da6fa0(pvVar7,uVar5,&(*(undefined4 *)(gen_frame + 0x258)));
                  if (uVar5 == 0) {
                    F_00da6fe0((*(undefined * PTR32 *)(gen_frame + 0x298)),(*(undefined4 *)(gen_frame + 0x258)),&(*(undefined4 *)(gen_frame + 0x280)));
                  }
                  if (iVar14 == 1) {
                    F_00da6920(param_3,(*(undefined4 *)(gen_frame + 0x280)));
                  }
                  else if (iVar14 == 2) {
                    F_00da6c10(param_3,(*(undefined4 *)(gen_frame + 0x280)));
                  }
                  else if (iVar14 == 4) {
                    F_00da6c50(param_3,(*(undefined4 *)(gen_frame + 0x280)));
                  }
                  puVar13 = (ushort *)((int)puVar13 + iVar14);
                  puVar8 = (ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0x2a4)) + -1);
                  (*(ushort * PTR32 *)(gen_frame + 0x2a4)) = puVar8;
                } while (puVar8 != (ushort *)0x0);
              }
            }
            break;
          case '\x19': ;
            pvVar7 = (undefined *)F_00da5fd0((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
            (*(undefined * PTR32 *)(gen_frame + 0x2a0)) = pvVar7;
            pvVar10 = (undefined *)F_00da5fd0(this_00);
            (*(undefined * PTR32 *)(gen_frame + 0x298)) = pvVar10;
            if ((pvVar7 != (undefined *)0x0) && (pvVar10 != (undefined *)0x0)) {
              uVar5 = F_00e26500(this_00);
              uVar11 = F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
              pvVar10 = (undefined *)F_00e28010(uVar11,uVar5);
              pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x2a0));
              iVar14 = 0;
              (*(undefined * PTR32 *)(gen_frame + 0x278)) = pvVar10;
              if (0 < (int)pvVar10) {
                do {
                  uVar5 = F_00d929c0(pvVar7);
                  F_00e26bd0((*(int * PTR32 *)(gen_frame + 0x29c)),(int)(uVar5 * iVar14 + (int)puVar13),pvVar7,param_3,(*(undefined * PTR32 *)(gen_frame + 0x298))
                              );
                  iVar14 = iVar14 + 1;
                } while (iVar14 < (int)(*(undefined * PTR32 *)(gen_frame + 0x278)));
              }
            }
            break;
          case '\x1c': ;
            (*(undefined8 *)(gen_frame + 0x208)) = 0;
            (*(undefined8 *)(gen_frame + 0x210)) = 0;
            uVar5 = F_00e26500(this_00);
            uVar11 = F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
            uVar5 = F_00e28010(uVar11,uVar5);
            piVar4 = (*(int * PTR32 *)(gen_frame + 0x29c));
            if (0 < (int)uVar5) {
              do {
                F_00da6970(param_3,&(*(undefined8 *)(gen_frame + 0x208)),(uint)*(byte *)(piVar4 + 3),2);
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            break;
          case '\x1e': ;
            pvVar7 = (undefined *)F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
            (*(undefined * PTR32 *)(gen_frame + 0x2a0)) = pvVar7;
            uVar5 = F_00e26500(this_00);
            uVar5 = F_00e28010((*(undefined * PTR32 *)(gen_frame + 0x2a0)),uVar5);
            F_00e26700(param_3,(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x29c)) + 3),uVar5,puVar13);
            break;
          case '\x1f': ;
            if (((*(undefined4 * PTR32 *)(gen_frame + 0x2a8))[2] != 0) && (this_00[2] != 0)) {
              uVar5 = F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
              (*(ushort * PTR32 *)(gen_frame + 0x2a4)) = (ushort *)uVar5;
              uVar5 = F_00e26500(this_00);
              pvVar7 = (undefined *)F_00e28010((*(ushort * PTR32 *)(gen_frame + 0x2a4)),uVar5);
              pvVar10 = (undefined *)F_00da5fe0((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
              (*(undefined * PTR32 *)(gen_frame + 0x264)) = pvVar10;
              pvVar10 = (undefined *)F_00da5fe0(this_00);
              (*(undefined * PTR32 *)(gen_frame + 0x278)) = pvVar10;
              uVar5 = F_00da6030((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
              uVar5 = (int)uVar5 / (int)(*(ushort * PTR32 *)(gen_frame + 0x2a4));
              (*(ushort * PTR32 *)(gen_frame + 0x2a4)) = puVar13;
              (*(uint *)(gen_frame + 0x290)) = uVar5;
              if (0 < (int)pvVar7) {
                (*(undefined * PTR32 *)(gen_frame + 0x2a0)) = pvVar7;
                do {
                  uVar5 = F_00da6230((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)),(*(ushort * PTR32 *)(gen_frame + 0x2a4)));
                  (*(int *)(gen_frame + 0x26c)) = 0;
                  (*(int *)(gen_frame + 0x270)) = 0;
                  (*(int *)(gen_frame + 0x274)) = ((int)0x80000000);
                  (*(uint *)(gen_frame + 0x27c)) = 0;
                  F_00da7130((*(undefined * PTR32 *)(gen_frame + 0x264)),uVar5,&(*(int *)(gen_frame + 0x26c)),&(*(uint *)(gen_frame + 0x27c)));
                  uVar5 = 0;
                  iVar14 = 0;
                  if (0 < (*(int *)(gen_frame + 0x270))) {
                    do {
                      uVar11 = F_00da6fe0((*(undefined * PTR32 *)(gen_frame + 0x278)),*(undefined4 *)((*(int *)(gen_frame + 0x26c)) + iVar14 * 4),
                                            &(*(uint *)(gen_frame + 0x260)));
                      if (uVar11 == 0) {
                        uVar5 = uVar5 | (*(uint *)(gen_frame + 0x260));
                      }
                      else {
                        (*(uint *)(gen_frame + 0x27c)) = (*(uint *)(gen_frame + 0x27c)) | (*(uint *)(gen_frame + 0x260));
                      }
                      iVar14 = iVar14 + 1;
                    } while (iVar14 < (*(int *)(gen_frame + 0x270)));
                  }
                  if ((*(uint *)(gen_frame + 0x27c)) != 0) {
                    (*(undefined * PTR32 *)(gen_frame + 0x298)) = (undefined *)0x0;
                    F_00da7130((*(undefined * PTR32 *)(gen_frame + 0x278)),(*(uint *)(gen_frame + 0x27c)),&(*(int *)(gen_frame + 0x26c)),&(*(undefined * PTR32 *)(gen_frame + 0x298)));
                    uVar5 = uVar5 | (uint)(*(undefined * PTR32 *)(gen_frame + 0x298));
                  }
                  uVar11 = (*(uint *)(gen_frame + 0x290));
                  if ((*(uint *)(gen_frame + 0x290)) == 1) {
                    F_00da6920(param_3,uVar5);
                  }
                  else if ((*(uint *)(gen_frame + 0x290)) == 2) {
                    F_00da6c10(param_3,uVar5);
                  }
                  else if ((*(uint *)(gen_frame + 0x290)) == 4) {
                    F_00da6c50(param_3,uVar5);
                  }
                  (*(ushort * PTR32 *)(gen_frame + 0x2a4)) = (ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0x2a4)) + uVar11);
                  (*(int *)(gen_frame + 0x270)) = 0;
                  if (-1 < (*(int *)(gen_frame + 0x274))) {
                    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x26c)),(*(int *)(gen_frame + 0x274)) * 4);
                  }
                  pvVar7 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2a0)) - 1);
                  (*(undefined * PTR32 *)(gen_frame + 0x2a0)) = pvVar7;
                  (*(int *)(gen_frame + 0x26c)) = 0;
                  (*(int *)(gen_frame + 0x274)) = 0x80000000;
                } while (pvVar7 != (undefined *)0x0);
              }
            }
            break;
          case '\"': ;
            F_00da6c30(param_3,(uint)*puVar13);
            F_00da6c30(param_3,(uint)puVar13[1]);
            (*(undefined4 * PTR32 *)(gen_frame + 0x248)) = (*(undefined4 * PTR32 *)(gen_frame + 0x2a8));
            (*(undefined4 * PTR32 *)(gen_frame + 0x24c)) = this_00;
            (*(int *)(gen_frame + 0x250)) = (uint)puVar13[1] + (int)puVar13;
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x254)) + 0)) = *puVar13;
            (*(undefined4 *)(gen_frame + 0x254)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x254)) + 2)),*puVar13);
            if ((*(uint *)(gen_frame + 0x288)) == ((*(uint *)(gen_frame + 0x28c)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x284)),0x10);
            }
            puVar9 = (undefined8 *)((*(uint *)(gen_frame + 0x288)) * 0x10 + (*(int *)(gen_frame + 0x284)));
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = CONCAT44((*(undefined4 * PTR32 *)(gen_frame + 0x24c)),(*(undefined4 * PTR32 *)(gen_frame + 0x248)));
              *(int *)(puVar9 + 1) = (*(int *)(gen_frame + 0x250));
              *(undefined4 *)((int)puVar9 + 0xc) = (*(undefined4 *)(gen_frame + 0x254));
            }
            (*(uint *)(gen_frame + 0x288)) = (*(uint *)(gen_frame + 0x288)) + 1;
          }
        }
      }
      else {
        if (((*(int * PTR32 *)(gen_frame + 0x29c))[4] & 2U) == 0) {
          if (((*(int * PTR32 *)(gen_frame + 0x29c))[4] & 1U) == 0) goto LAB_00e26c88;
          goto LAB_00e2729a;
        }
        F_00e26a50((*(int * PTR32 *)(gen_frame + 0x29c)),param_3,this_00);
      }
      iVar14 = (*(int *)(gen_frame + 0x294)) + 1;
      (*(int *)(gen_frame + 0x294)) = iVar14;
      uVar5 = F_00d927e0(param_4);
      piVar4 = (*(int * PTR32 *)(gen_frame + 0x25c));
    } while (iVar14 < (int)uVar5);
  }
  uVar11 = ((code *)*(gen_code32 *)(*piVar4 + 0x20))(piVar4);
  uVar5 = (*(uint *)(gen_frame + 0x268));
  iVar14 = (*(uint *)(gen_frame + 0x268)) - uVar11;
  uVar11 = F_00d929c0(param_4);
  F_00e26910(uVar11 + iVar14,param_3);
  param_2 = (undefined *)0x0;
  if (0 < (int)(*(uint *)(gen_frame + 0x288))) {
    param_4 = (undefined *)0x0;
    do {
      uVar2 = *(ushort *)((int)param_4 + 0xc + (*(int *)(gen_frame + 0x284)));
      uVar5 = *(uint *)((int)param_4 + 4 + (*(int *)(gen_frame + 0x284)));
      pvVar7 = *(undefined * PTR32 *)((int)param_4 + 8 + (*(int *)(gen_frame + 0x284)));
      (*(uint *)(gen_frame + 0x290)) = uVar5;
      (*(undefined * PTR32 *)(gen_frame + 0x264)) = pvVar7;
      if ((((uVar2 != 0) && (bVar1 = *(byte *)(uVar5 + 0xd), bVar1 != 0)) && (bVar1 != 0x14)) &&
         ((bVar1 != 0x1d && (bVar1 != 0x21)))) {
        if (bVar1 == 0x19) {
          uVar11 = F_00da5fd0(*(undefined4 *)((int)param_4 + (*(int *)(gen_frame + 0x284))));
          uVar5 = F_00da5fd0(uVar5);
          (*(uint *)(gen_frame + 0x290)) = uVar5;
          if (((uVar11 != 0) && (uVar5 != 0)) && (iVar14 = 0, uVar2 != 0)) {
            do {
              uVar5 = uVar11;
              pvVar7 = param_3;
              uVar18 = (*(uint *)(gen_frame + 0x290));
              uVar12 = F_00d929c0(uVar11);
              F_00e26bd0((*(int * PTR32 *)(gen_frame + 0x29c)),(int)(uVar12 * iVar14 + (int)(*(undefined * PTR32 *)(gen_frame + 0x264))),(undefined *)uVar5,pvVar7,
                           (undefined *)uVar18);
              iVar14 = iVar14 + 1;
            } while (iVar14 < (int)(uint)uVar2);
          }
        }
        else if (bVar1 != 0x1c) {
          if (bVar1 == 0x1e) {
            F_00e26700(param_3,(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x29c)) + 3),(uint)uVar2,pvVar7);
          }
          else {
            uVar5 = F_00da61f0(uVar5);
            F_00e26570((uint)uVar2,uVar5,param_3,(uint)bVar1,pvVar7);
          }
        }
      }
      param_2 = (undefined *)((int)param_2 + 1);
      param_4 = (undefined *)((int)param_4 + 0x10);
      uVar5 = (*(uint *)(gen_frame + 0x268));
    } while ((int)param_2 < (int)(*(uint *)(gen_frame + 0x288)));
  }
  (*(uint *)(gen_frame + 0x288)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x28c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x284)),(*(uint *)(gen_frame + 0x28c)) << 4);
  }
  return uVar5;
}

/* ref: FUN_00e27480 */
uint F_00e27480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe27480u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined * in_edi = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = F_00da6b30(in_edi);
  F_00e267c0(2,uVar2);
  piVar3 = (int *)F_00da6b30(in_edi);
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3);
  if (in_esi[1] == (in_esi[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),in_esi,8);
  }
  puVar1 = (undefined4 *)(*in_esi + in_esi[1] * 8);
  *puVar1 = param_4;
  puVar1[1] = uVar2;
  in_esi[1] = in_esi[1] + 1;
  uVar2 = F_00da0e60(param_3);
  F_00da6ae0(in_edi,param_3,uVar2 + 1);
  return 0;
}

/* ref: FUN_00e27500 */
uint F_00e27500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xe27500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  int iVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  code * pcVar5;
  undefined * this_00;
  uint uVar6;
  undefined4 * in_esi;
  uint * puVar7;
  uint uVar8;
  uint uVar9;
  int * piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 * this_01;
  uint * puVar14;
  int iVar15;
  undefined * pvVar16;
  undefined * pvVar17;
  undefined4 uVar18;
  
  this_00 = param_3;
  (*(int * PTR32 *)(gen_frame + 0x258)) = this;
  if (param_7 == 0) {
    uVar6 = F_00d92610(param_4);
    if (*(uint *)((int)param_6 + 0x1c) == (*(uint *)((int)param_6 + 0x20) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)param_6 + 0x18),8);
    }
    piVar10 = ((int *)GEN_TOP((*(int *)((int)param_6 + 0x18) + *(int *)((int)param_6 + 0x1c) * 8)));
    *piVar10 = param_5;
    piVar10[1] = uVar6;
    *(int *)((int)param_6 + 0x1c) = *(int *)((int)param_6 + 0x1c) + 1;
  }
  iVar1 = param_7 + 1;
  iVar15 = 0;
  (*(int *)(gen_frame + 0x240)) = 0;
  uVar6 = F_00d927e0(param_4);
  if (0 < (int)uVar6) {
    do {
      in_esi = (undefined4 *)F_00d92800(param_4,iVar15);
      puVar7 = (uint *)F_00d928d0(param_2,*in_esi);
      (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar7;
      if (puVar7 == (uint *)0x0) goto LAB_00e27e7f;
      puVar14 = ((uint *)GEN_TOP(((uint)*(ushort *)((int)puVar7 + 0x12) + param_1)));
      uVar6 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x258)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x258)),puVar7,in_esi);
      if ((uVar6 == 0) ||
         (((*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 4) & 2) != 0 && ((*(ushort *)(in_esi + 4) & 0x400) != 0))))
      goto LAB_00e27e7f;
      switch((unsigned int)(uintptr_t)(*(undefined1 *)(in_esi + 3))) {
      case 1: ;
      case 2: ;
      case 3: ;
      case 4: ;
      case 5: ;
      case 6: ;
      case 7: ;
      case 8: ;
      case 9: ;
      case 10: ;
      case 0xb: ;
      case 0xc: ;
      case 0xd: ;
      case 0xe: ;
      case 0xf: ;
      case 0x10: ;
      case 0x11: ;
      case 0x12: ;
      case 0x15: ;
      case 0x18: ;
      case 0x1e: ;
      case 0x1f: ;
      case 0x20: ;
      case 0x22: ;
        break;
      case 0x13: ;
        F_00da0a80(((undefined1 *)(gen_frame + 0x22c)),((undefined1 *)(gen_frame + 0x0)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x22c)),"TYPE_ZERO should not occur.");
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                          (REFG(int * PTR32, 0x15dff78),3,0x641e3e05,((undefined1 *)(gen_frame + 0x0)),"Copier\\hkObjectCopier.cpp",0x406);
        if (uVar6 != 0) {
          pcVar5 = ((code *)GEN_TOP(swi(3)));
          uVar6 = (*pcVar5)();
          return uVar6;
        }
        this_01 = ((undefined1 *)(gen_frame + 0x22c));
        goto LAB_00e27e65;
      case 0x14: ;
        uVar6 = F_00e26500(in_esi);
        puVar7 = (*(uint * PTR32 *)(gen_frame + 0x254));
        uVar11 = F_00e26500((*(uint * PTR32 *)(gen_frame + 0x254)));
        uVar6 = F_00e28010(uVar11,uVar6);
        (*(uint *)(gen_frame + 0x248)) = uVar6;
        uVar6 = F_00e26500(puVar7);
        uVar11 = F_00da6030((*(uint * PTR32 *)(gen_frame + 0x254)));
        (*(uint *)(gen_frame + 0x250)) = 0;
        (*(uint *)(gen_frame + 0x244)) = (int)uVar11 / (int)uVar6;
        if (0 < (int)(*(uint *)(gen_frame + 0x248))) {
          (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar14;
          do {
            uVar6 = *puVar14;
            (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar14;
            if (uVar6 != 0) {
              iVar15 = *(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (*(uint *)(gen_frame + 0x250)) + (uint)*(ushort *)((int)in_esi + 0x12);
              if (*(char *)((int)in_esi + 0xd) == '\x02') {
                F_00e27480(param_6,this_00,uVar6,iVar15 + param_5);
              }
              else if (*(char *)((int)in_esi + 0xd) != '\0') {
                uVar18 = 0;
                uVar11 = F_00da5fd0(in_esi);
                F_00e28540(param_6,iVar15 + param_5,uVar6,uVar11,uVar18);
              }
            }
            puVar14 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x254)) + (*(uint *)(gen_frame + 0x244)));
            uVar6 = (*(uint *)(gen_frame + 0x250)) + 1;
            (*(uint *)(gen_frame + 0x250)) = uVar6;
            (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar14;
          } while ((int)uVar6 < (int)(*(uint *)(gen_frame + 0x248)));
        }
        break;
      case 0x16: ;
      case 0x17: ;
      case 0x1a: ;
        if ((puVar14[1] != 0) && (cVar2 = *(char *)((int)in_esi + 0xd), cVar2 != '\0')) {
          if (cVar2 == '\x14') {
            piVar10 = (int *)F_00da6b30(this_00);
            (*(uint *)(gen_frame + 0x244)) = (uint)*(ushort *)((int)in_esi + 0x12);
            uVar6 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
            F_00dfa9f0(param_6,(*(uint *)(gen_frame + 0x244)) + param_5,uVar6);
            (*(undefined8 *)(gen_frame + 0x210)) = 0;
            uVar6 = F_00da61f0(puVar7);
            (*(uint *)(gen_frame + 0x24c)) = uVar6;
            (*(uint *)(gen_frame + 0x248)) = 0;
            if (0 < (int)puVar14[1]) {
              (*(uint *)(gen_frame + 0x250)) = 0;
              do {
                (*(uint *)(gen_frame + 0x244)) = *(uint *)((*(uint *)(gen_frame + 0x250)) + *puVar14);
                if ((*(uint *)((*(uint *)(gen_frame + 0x250)) + *puVar14) != 0) && (*(char *)((int)in_esi + 0xd) != '\0'))
                {
                  piVar10 = (int *)F_00da6b30(this_00);
                  uVar18 = 0;
                  uVar11 = F_00da5fd0((*(uint * PTR32 *)(gen_frame + 0x254)));
                  uVar6 = (*(uint *)(gen_frame + 0x244));
                  uVar8 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
                  F_00e28540(param_6,uVar8,uVar6,uVar11,uVar18);
                }
                F_00da6ae0(this_00,&(*(undefined8 *)(gen_frame + 0x210)),(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3));
                uVar6 = (*(uint *)(gen_frame + 0x248)) + 1;
                (*(uint *)(gen_frame + 0x248)) = uVar6;
                (*(uint *)(gen_frame + 0x250)) = (*(uint *)(gen_frame + 0x250)) + (*(uint *)(gen_frame + 0x24c));
              } while ((int)uVar6 < (int)puVar14[1]);
            }
          }
          else if (cVar2 == '\x1d') {
            piVar10 = (int *)F_00da6b30(this_00);
            uVar4 = *(ushort *)((int)in_esi + 0x12);
            uVar6 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
            F_00dfa9f0(param_6,(uint)uVar4 + param_5,uVar6);
            (*(undefined8 *)(gen_frame + 0x238)) = 0;
            piVar10 = (int *)F_00da6b30(this_00);
            uVar6 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
            iVar15 = 0;
            (*(uint *)(gen_frame + 0x24c)) = uVar6;
            if (0 < (int)puVar14[1]) {
              do {
                F_00da6ae0(this_00,&(*(undefined8 *)(gen_frame + 0x238)),(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3));
                iVar15 = iVar15 + 1;
              } while (iVar15 < (int)puVar14[1]);
            }
            param_3 = (undefined *)0x0;
            if (0 < (int)puVar14[1]) {
              do {
                if (*(int *)(*puVar14 + (int)((int)(uintptr_t)param_3) * 4) != 0) {
                  F_00e27480(param_6,this_00,*(undefined4 *)(*puVar14 + (int)((int)(uintptr_t)param_3) * 4),
                               (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (int)param_3 + (*(uint *)(gen_frame + 0x24c)));
                }
                param_3 = (undefined *)((int)param_3 + 1);
              } while ((int)param_3 < (int)puVar14[1]);
            }
          }
          else if (cVar2 == '!') {
            piVar10 = (int *)F_00da6b30(this_00);
            uVar4 = *(ushort *)((int)in_esi + 0x12);
            uVar6 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
            F_00dfa9f0(param_6,(uint)uVar4 + param_5,uVar6);
            (*(undefined8 *)(gen_frame + 0x218)) = 0;
            piVar10 = (int *)F_00da6b30(this_00);
            uVar6 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
            iVar15 = 0;
            (*(uint *)(gen_frame + 0x24c)) = uVar6;
            if (0 < (int)puVar14[1]) {
              do {
                F_00da6ae0(this_00,&(*(undefined8 *)(gen_frame + 0x218)),(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3));
                iVar15 = iVar15 + 1;
              } while (iVar15 < (int)puVar14[1]);
            }
            param_3 = (undefined *)0x0;
            if (0 < (int)puVar14[1]) {
              do {
                uVar6 = *(uint *)(*puVar14 + (int)((int)(uintptr_t)param_3) * 4);
                if ((uVar6 & 0xfffffffe) != 0) {
                  F_00e27480(param_6,this_00,uVar6 & 0xfffffffe,
                               (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (int)param_3 + (*(uint *)(gen_frame + 0x24c)));
                }
                param_3 = (undefined *)((int)param_3 + 1);
              } while ((int)param_3 < (int)puVar14[1]);
            }
          }
          else if (cVar2 == '\x19') {
            piVar10 = (int *)F_00da6b30(this_00);
            uVar6 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
            (*(uint *)(gen_frame + 0x24c)) = uVar6;
            F_00dfa9f0(param_6,(uint)*(ushort *)((int)in_esi + 0x12) + param_5,uVar6);
            uVar6 = F_00da5fd0((*(uint * PTR32 *)(gen_frame + 0x254)));
            uVar11 = F_00da5fd0(in_esi);
            if ((uVar6 != 0) && (uVar11 != 0)) {
              (*(uint *)(gen_frame + 0x248)) = *puVar14;
              (*(uint *)(gen_frame + 0x250)) = 0;
              if (0 < (int)puVar14[1]) {
                do {
                  uVar8 = uVar6;
                  pvVar16 = this_00;
                  uVar12 = uVar11;
                  uVar9 = F_00d929c0(uVar6);
                  F_00e26bd0((*(int * PTR32 *)(gen_frame + 0x258)),uVar9 * (*(uint *)(gen_frame + 0x250)) + (*(uint *)(gen_frame + 0x248)),uVar8,pvVar16,uVar12);
                  uVar8 = (*(uint *)(gen_frame + 0x250)) + 1;
                  (*(uint *)(gen_frame + 0x250)) = uVar8;
                } while ((int)uVar8 < (int)puVar14[1]);
              }
              (*(uint * PTR32 *)(gen_frame + 0x254)) = (uint *)0x0;
              if (0 < (int)puVar14[1]) {
                do {
                  pvVar17 = param_6;
                  iVar15 = iVar1;
                  uVar8 = F_00d929c0(uVar11);
                  iVar13 = uVar8 * (int)(*(uint * PTR32 *)(gen_frame + 0x254)) + (*(uint *)(gen_frame + 0x24c));
                  uVar8 = uVar6;
                  pvVar16 = this_00;
                  uVar12 = uVar11;
                  uVar9 = F_00d929c0(uVar6);
                  F_00e27500((*(int * PTR32 *)(gen_frame + 0x258)),uVar9 * (int)(*(uint * PTR32 *)(gen_frame + 0x254)) + (*(uint *)(gen_frame + 0x248)),(undefined *)uVar8,pvVar16,
                               (undefined *)uVar12,iVar13,pvVar17,iVar15);
                  puVar7 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x254)) + 1);
                  (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar7;
                } while ((int)puVar7 < (int)puVar14[1]);
              }
            }
          }
          else if (cVar2 == '\x1c') {
            piVar10 = (int *)F_00da6b30(this_00);
            uVar6 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
            (*(uint *)(gen_frame + 0x248)) = uVar6;
            F_00dfa9f0(param_6,(uint)*(ushort *)((int)in_esi + 0x12) + param_5,uVar6);
            iVar15 = 0;
            if (0 < (int)puVar14[1]) {
              do {
                bVar3 = *(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3);
                (*(undefined8 *)(gen_frame + 0x200)) = 0;
                (*(undefined8 *)(gen_frame + 0x208)) = 0;
                F_00da6970(this_00,&(*(undefined8 *)(gen_frame + 0x200)),(uint)bVar3,2);
                iVar15 = iVar15 + 1;
              } while (iVar15 < (int)puVar14[1]);
            }
            param_3 = (undefined *)0x0;
            if (0 < (int)puVar14[1]) {
              do {
                piVar10 = (int *)(*puVar14 + (int)((int)(uintptr_t)param_3) * 8);
                iVar15 = *piVar10;
                iVar13 = (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (int)((int)(uintptr_t)param_3) * 2;
                if (iVar15 != 0) {
                  F_00e28540(param_6,iVar13 + (*(uint *)(gen_frame + 0x248)),iVar15,piVar10[1],0);
                }
                iVar15 = *(int *)(*puVar14 + 4 + (int)((int)(uintptr_t)param_3) * 8);
                if (iVar15 != 0) {
                  F_00e28540(param_6,(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) + iVar13 + (*(uint *)(gen_frame + 0x248)),iVar15,
                               &REFG(undefined, 0x15da330),0);
                }
                param_3 = (undefined *)((int)param_3 + 1);
              } while ((int)param_3 < (int)puVar14[1]);
            }
          }
          else {
            piVar10 = (int *)F_00da6b30(this_00);
            uVar4 = *(ushort *)((int)in_esi + 0x12);
            uVar6 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
            F_00dfa9f0(param_6,(uint)uVar4 + param_5,uVar6);
            bVar3 = *(byte *)((int)in_esi + 0xd);
            if (bVar3 == 0x1e) {
              F_00e26700(this_00,(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3),puVar14[1],*puVar14);
            }
            else {
              uVar6 = *puVar14;
              uVar11 = F_00da61f0(in_esi);
              F_00e26570(puVar14[1],uVar11,this_00,(uint)bVar3,uVar6);
            }
          }
        }
        break;
      case 0x19: ;
        uVar6 = F_00da5fd0(puVar7);
        (*(uint *)(gen_frame + 0x250)) = uVar6;
        uVar11 = F_00da5fd0(in_esi);
        (*(uint *)(gen_frame + 0x248)) = uVar11;
        if ((uVar6 != 0) && (uVar11 != 0)) {
          (*(uint *)(gen_frame + 0x244)) = (uint)*(ushort *)((int)in_esi + 0x12) + param_5;
          uVar6 = F_00e26500((*(uint * PTR32 *)(gen_frame + 0x254)));
          (*(uint *)(gen_frame + 0x24c)) = uVar6;
          uVar6 = F_00e26500(in_esi);
          uVar6 = F_00e28010((*(uint *)(gen_frame + 0x24c)),uVar6);
          (*(uint *)(gen_frame + 0x24c)) = uVar6;
          param_3 = (undefined *)0x0;
          if (0 < (int)uVar6) {
            do {
              uVar6 = F_00d929c0((*(uint *)(gen_frame + 0x250)));
              pvVar16 = param_6;
              iVar15 = iVar1;
              uVar11 = F_00d929c0((*(uint *)(gen_frame + 0x248)));
              F_00e27500((*(int * PTR32 *)(gen_frame + 0x258)),(int)(uVar6 * (int)param_3 + (int)puVar14),(undefined *)(*(uint *)(gen_frame + 0x250)),
                           this_00,(undefined *)(*(uint *)(gen_frame + 0x248)),uVar11 * (int)param_3 + (*(uint *)(gen_frame + 0x244)),pvVar16,iVar15)
              ;
              param_3 = (undefined *)((int)param_3 + 1);
            } while ((int)param_3 < (int)(*(uint *)(gen_frame + 0x24c)));
          }
        }
        break;
      case 0x1b: ;
        uVar6 = *puVar14;
        if (uVar6 != 0) {
          F_00e28540(param_6,(uint)*(ushort *)((int)in_esi + 0x12) + param_5,uVar6,&REFG(undefined, 0x15da330),1
                      );
          piVar10 = (int *)F_00da6b30(this_00);
          uVar11 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
          (*(uint *)(gen_frame + 0x24c)) = uVar11;
          F_00dfa9f0(param_6,(uint)*(ushort *)((int)in_esi + 0x12) +
                               (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) + param_5,uVar11);
          (*(uint *)(gen_frame + 0x248)) = puVar14[1];
          param_3 = (undefined *)0x0;
          if (0 < (int)puVar14[2]) {
            do {
              uVar11 = uVar6;
              pvVar16 = this_00;
              uVar8 = uVar6;
              uVar12 = F_00d929c0(uVar6);
              F_00e26bd0((*(int * PTR32 *)(gen_frame + 0x258)),uVar12 * (int)param_3 + (*(uint *)(gen_frame + 0x248)),uVar11,pvVar16,uVar8);
              param_3 = (undefined *)((int)param_3 + 1);
            } while ((int)param_3 < (int)puVar14[2]);
          }
          param_3 = (undefined *)0x0;
          if (0 < (int)puVar14[2]) {
            do {
              pvVar17 = param_6;
              iVar15 = iVar1;
              uVar11 = F_00d929c0(uVar6);
              iVar13 = uVar11 * (int)param_3 + (*(uint *)(gen_frame + 0x24c));
              uVar11 = uVar6;
              pvVar16 = this_00;
              uVar8 = uVar6;
              uVar12 = F_00d929c0(uVar6);
              F_00e27500((*(int * PTR32 *)(gen_frame + 0x258)),uVar12 * (int)param_3 + (*(uint *)(gen_frame + 0x248)),(undefined *)uVar11,pvVar16,
                           (undefined *)uVar8,iVar13,pvVar17,iVar15);
              param_3 = (undefined *)((int)param_3 + 1);
            } while ((int)param_3 < (int)puVar14[2]);
          }
        }
        break;
      case 0x1c: ;
        uVar6 = F_00e26500((*(uint * PTR32 *)(gen_frame + 0x254)));
        (*(uint *)(gen_frame + 0x24c)) = uVar6;
        uVar6 = F_00e26500(in_esi);
        uVar6 = F_00e28010((*(uint *)(gen_frame + 0x24c)),uVar6);
        (*(uint *)(gen_frame + 0x24c)) = uVar6;
        (*(uint * PTR32 *)(gen_frame + 0x254)) = (uint *)0x0;
        if (0 < (int)uVar6) {
          (*(uint *)(gen_frame + 0x250)) = 1;
          do {
            iVar15 = *((int *)GEN_TOP(((int)puVar14 + (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x254))) * (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 2) * 2)));
            uVar6 = *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x250)) * *(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 2) + (int)puVar14)));
            if (iVar15 != 0) {
              F_00e28540(param_6,(uint)*(ushort *)((int)in_esi + 0x12) + param_5 +
                                   (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x254))) * 2,iVar15,uVar6,0);
            }
            if (uVar6 != 0) {
              F_00e28540(param_6,(uint)*(ushort *)((int)in_esi + 0x12) +
                                   *(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (*(uint *)(gen_frame + 0x250)) + param_5,uVar6,&REFG(undefined, 0x15da330),0
                          );
            }
            (*(uint *)(gen_frame + 0x250)) = (*(uint *)(gen_frame + 0x250)) + 2;
            puVar7 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x254)) + 1);
            (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar7;
          } while ((int)puVar7 < (int)(*(uint *)(gen_frame + 0x24c)));
        }
        break;
      case 0x1d: ;
        if (*puVar14 != 0) {
          F_00e27480(param_6,this_00,*puVar14,(uint)*(ushort *)((int)in_esi + 0x12) + param_5);
        }
        break;
      case 0x21: ;
        if ((*puVar14 & 0xfffffffe) != 0) {
          F_00e27480(param_6,this_00,*puVar14 & 0xfffffffe,
                       (uint)*(ushort *)((int)in_esi + 0x12) + param_5);
        }
        break;
      default: ;
        F_00da0a80(((undefined1 *)(gen_frame + 0x220)),((undefined1 *)(gen_frame + 0x0)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x220)),"Unknown class member found during write of data.");
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                          (REFG(int * PTR32, 0x15dff78),3,0x641e3e05,((undefined1 *)(gen_frame + 0x0)),"Copier\\hkObjectCopier.cpp",0x40b);
        if (uVar6 != 0) {
          pcVar5 = ((code *)GEN_TOP(swi(3)));
          uVar6 = (*pcVar5)();
          return uVar6;
        }
        this_01 = ((undefined1 *)(gen_frame + 0x220));
LAB_00e27e65: ;
        F_00d9fda0(this_01);
      }
      uVar6 = F_00da6b30(this_00);
      F_00e267c0(0x10,uVar6);
LAB_00e27e7f: ;
      iVar15 = (*(int *)(gen_frame + 0x240)) + 1;
      (*(int *)(gen_frame + 0x240)) = iVar15;
      uVar6 = F_00d927e0(param_4);
    } while (iVar15 < (int)uVar6);
  }
  return uVar6;
}

/* ref: hkObjectCopier::vf3 */
uint F_00e27ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe27ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char * pcVar4;
  
  uVar2 = (*(uint *)&gen_args[3]);
  F_00da68d0(((undefined1 *)(gen_frame + 0xc)),(*(uint *)&gen_args[3]),(uint)(byte)(*(undefined * PTR32 *)&gen_args[0])[0x14]);
  uVar3 = (*(undefined4 *)&gen_args[4]);
  (*(uint *)&gen_args[3]) = F_00e26bd0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),((undefined1 *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[4]));
  F_00e267c0(0x10,uVar2);
  F_00e27500((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),((undefined1 *)(gen_frame + 0xc)),uVar3,(*(uint *)&gen_args[3]),(*(undefined4 *)&gen_args[5]),0);
  F_00e267c0(0x10,uVar2);
  pcVar4 = (char *)F_00da6b10(((undefined1 *)(gen_frame + 0xc)),(int)&(*(undefined4 *)&gen_args[2]) + 3);
  cVar1 = *pcVar4;
  F_00da6900(((undefined1 *)(gen_frame + 0xc)));
  return (uint)(cVar1 == '\0');
}

/* ref: FUN_00e27f90 */
uint F_00e27f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe27f90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(*(uint * PTR32 *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00e27fa0 */
uint F_00e27fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe27fa0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e27ff0 */
uint F_00e27ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe27ff0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e28010 */
uint F_00e28010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28010u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if ((int)param_2 <= (int)param_1) {
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_00e28050 */
uint F_00e28050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28050u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00e28090 */
unsigned int F_00e28090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe28090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e280c0 */
unsigned int F_00e280c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe280c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e28100 */
uint F_00e28100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe28100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00e28120 */
uint F_00e28120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28120u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: hkObjectCopier::vf5 */
uint F_00e28140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return param_1;
}

/* ref: FUN_00e28170 */
uint F_00e28170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe28170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e281c0 */
uint F_00e281c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe281c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e28200 */
uint F_00e28200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28200u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e28230 */
uint F_00e28230(unsigned int gen_a0)
{
  GEN_ENTER(0xe28230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 8 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00e28270 */
uint F_00e28270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28270u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 8 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00e282c0 */
unsigned int F_00e282c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe282c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e28300 */
uint F_00e28300(unsigned int gen_a0)
{
  GEN_ENTER(0xe28300u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkObjectCopier::vf0 */
uint F_00e28330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e26560(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e28370 */
uint F_00e28370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e283c0 */
uint F_00e283c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe283c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e28400 */
uint F_00e28400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe28400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  uVar3 = param_1 * 8 + 0x7fU & 0xffffff80;
  uVar2 = iVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this_00 + 8)) && (uVar2 <= *(uint *)((int)this_00 + 0x10))) {
    *(uint *)((int)this_00 + 0xc) = uVar2;
    *(int *)this = iVar1;
    *(int *)((int)this + 4) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00,uVar3);
  *(uint *)this = uVar2;
  *(int *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00e284b0 */
uint F_00e284b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe284b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e28500 */
uint F_00e28500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e28540 */
uint F_00e28540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe28540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 0x10) == (*(uint *)((int)this + 0x14) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0xc),0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 0x10) * 0x10 + *(int *)((int)this + 0xc))));
  *puVar1 = CONCAT44(param_2,param_1);
  puVar1[1] = CONCAT44(param_4,param_3);
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e285b0 */
uint F_00e285b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe285b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x1c) == (*(uint *)((int)this + 0x20) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x18),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + *(int *)((int)this + 0x1c) * 8)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e28600 */
uint F_00e28600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e28650 */
uint F_00e28650(unsigned int gen_a0)
{
  GEN_ENTER(0xe28650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e28690 */
uint F_00e28690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(uint *)((int)this + 0x10) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *(uint *)((int)this_00 + 0xc);
    uVar2 = param_1 + 0x7f & 0xffffff80;
    if ((*(int *)((int)this_00 + 8) < (int)uVar2) ||
       (*(uint *)((int)this_00 + 0x10) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00,uVar2);
    }
    else {
      *(uint *)((int)this_00 + 0xc) = uVar1 + uVar2;
    }
  }
  *(uint *)((int)this + 8) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *(uint *)((int)this + 0xc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00e28700 */
uint F_00e28700(unsigned int gen_a0)
{
  GEN_ENTER(0xe28700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  LPVOID this_00;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 == *(int *)this) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)this_00 + 8) < (int)uVar3) || (uVar3 + iVar1 != *(int *)((int)this_00 + 0xc)))
     || (*(int *)((int)this_00 + 0x14) == iVar1)) {
    F_00d945c0(this_00,iVar1,uVar3);
  }
  else {
    *(int *)((int)this_00 + 0xc) = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00e28790 */
uint F_00e28790(unsigned int gen_a0)
{
  GEN_ENTER(0xe28790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e28d50 */
uint F_00e28d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28d50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc0) = param_2;
  return param_2;
}

/* ref: Application::Network::ChatClient::RaptureChannelManager::vf1 */
uint F_00e28d60(void)
{
  GEN_ENTER(0xe28d60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::ChatClient::RaptureChannelManager::vf2 */
uint F_00e28d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Application::Network::ChatClient::RaptureChannelManager::vf19 */
unsigned int F_00e28d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00e28d90 */
byte F_00e28d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0xc0);
  if (iVar3 < 1) {
    return 0;
  }
  if (iVar3 < 3) {
    if (*param_1 == 2) {
      pvVar1 = (undefined *)F_00c31900(this);
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      F_00e366f0(((int *)(gen_frame + 0x4)),*param_1,param_1[1],0);
      uVar2 = F_00e2cb30(pvVar1,((int *)(gen_frame + 0x4)));
      if (uVar2 != 0) {
        if ((*(int *)(gen_frame + 0x18)) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)((*(int *)(gen_frame + 0x18)) + 0x24);
        }
        F_00c46aa0(iVar3 + 0x10,param_1 + 6,param_1[1] + -0x10);
        iVar3 = (*(int *)(gen_frame + 0x18));
        (*(int *)(gen_frame + 0x18)) = 0;
        uVar2 = ((code *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 4))(((int *)(gen_frame + 0x4)));
        if ((undefined4 *)(iVar3 + 0xc) != (undefined4 *)(uVar2 + 8)) {
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(uVar2 + 8);
          *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(uVar2 + 0xc);
        }
        ((code *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 0xc))
                  (((int *)(gen_frame + 0x4)),*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x20));
        F_00e2ebc0(*(undefined * PTR32 *)((int)pvVar1 + 0x20),iVar3);
        *(undefined4 *)((int)this + 0xc0) = 2;
        F_00e36660(((int *)(gen_frame + 0x4)));
        return 1;
      }
      goto LAB_00e28f30;
    }
  }
  else if (iVar3 != 3) {
    return 0;
  }
  pvVar1 = (undefined *)F_00c31900(this);
  if (pvVar1 == (undefined *)0x0) {
    return 0;
  }
  F_00e366f0(((int *)(gen_frame + 0x4)),*param_1,param_1[1],0);
  uVar2 = F_00e2cb30(pvVar1,((int *)(gen_frame + 0x4)));
  if (uVar2 != 0) {
    if ((*(int *)(gen_frame + 0x18)) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((*(int *)(gen_frame + 0x18)) + 0x24);
    }
    F_00c46aa0(iVar3 + 0x10,param_1 + 6,param_1[1] + -0x10);
    iVar3 = (*(int *)(gen_frame + 0x18));
    (*(int *)(gen_frame + 0x18)) = 0;
    uVar2 = ((code *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 4))(((int *)(gen_frame + 0x4)));
    if ((undefined4 *)(iVar3 + 0xc) != (undefined4 *)(uVar2 + 8)) {
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(uVar2 + 8);
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(uVar2 + 0xc);
    }
    ((code *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 0xc))
              (((int *)(gen_frame + 0x4)),*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x20));
    F_00e2ebc0(*(undefined * PTR32 *)((int)pvVar1 + 0x20),iVar3);
    F_00e36660(((int *)(gen_frame + 0x4)));
    return 1;
  }
LAB_00e28f30: ;
  F_00e36660(((int *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_00e28f50 */
uint F_00e28f50(unsigned int gen_a0)
{
  GEN_ENTER(0xe28f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x11573ec));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157384));
  F_00e2e6d0(this);
  *(undefined4 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  F_00e30b00((undefined4 *)((int)this + 0x8c));
  *(undefined4 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e30990((undefined4 *)((int)this + 100));
  uVar2 = F_00e316d0(this);
  return uVar2;
}

/* ref: FUN_00e28fa0 */
uint F_00e28fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  puVar1 = (undefined4 *)F_004069f0(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x115720c));
  }
  F_00e31250(this,puVar1,0,1,0x1000);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157384));
  F_00e2f030((undefined *)((int)this + 100));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e2fcf0((undefined *)((int)this + 0x8c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x11573ec));
  *(undefined4 *)((int)this + 0xc0) = 0;
  pvVar2 = (undefined *)F_00406b90(0x110,0,0);
  if (pvVar2 != (undefined *)0x0) {
    pvVar2 = (undefined *)F_00e356f0(pvVar2,this,param_1);
    *(undefined * PTR32 *)((int)this + 8) = pvVar2;
    F_00e34460(pvVar2);
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  F_00e34460((undefined *)0x0);
  return (uint)this;
}

/* ref: FUN_00e29060 */
uint F_00e29060(unsigned int gen_a0)
{
  GEN_ENTER(0xe29060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  uint local_8;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
    if (*(int *)((int)this + 0x24) != 0) {
      local_8 = (uint)this & 0xffffff00;
      F_00e31580(**(undefined4 * PTR32 *)((int)this + 0x20),*(undefined4 * PTR32 *)((int)this + 0x20),local_8);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  if (*(int *)((int)this + 0xc0) == 0) {
    uVar2 = F_00c31900(this);
    in_EAX = 0;
    if (uVar2 != 0) {
      *(undefined4 *)((int)this + 0xc0) = 1;
      return 1;
    }
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}

/* ref: FUN_00e290e0 */
byte F_00e290e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe290e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = (int)(*(undefined * PTR32 * PTR32 *)&gen_args[1]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) != 0) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 * PTR32 *)&gen_args[1]) + 0xc))) = *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) + 8)));
    piVar1 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54)))));
    if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54)))) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      F_00406ad0(piVar1);
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) + -1;
    }
LAB_00e29135: ;
    F_00e360f0(&(*(undefined * PTR32 * PTR32 *)&gen_args[1]));
    (*(undefined * PTR32 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[13])REFP(0x1157164));
    F_00e36130((undefined *)&(*(undefined * PTR32 * PTR32 *)&gen_args[1]),0,iVar3);
    iVar3 = *(int *)(iVar3 + 0xc);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x24);
    }
    if (*(short *)(iVar3 + 2) == 2) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) = 3;
    }
    F_00e360e0(&(*(undefined * PTR32 * PTR32 *)&gen_args[1]));
    return 1;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != (undefined *)0x0) {
    bVar2 = F_00e31c00(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(undefined * PTR32 * PTR32 *)&gen_args[1]));
    if (bVar2 != 0) goto LAB_00e29135;
  }
  return 0;
}

/* ref: FUN_00e29220 */
uint F_00e29220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)((int)this + 4);
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)((int)this + 0xc);
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)((int)this + 0x14);
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)((int)this + 0x1c);
  return uVar1;
}

/* ref: FUN_00e29270 */
uint F_00e29270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = 0x38;
  *(undefined2 *)(param_1 + 3) = 1;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[4] = *(undefined4 *)((int)this + 0x10);
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)((int)this + 0x14);
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)((int)this + 0x1c);
  *(undefined8 *)(param_1 + 9) = *(undefined8 *)((int)this + 0x24);
  *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)((int)this + 0x2c);
  return (uint)param_1;
}

/* ref: FUN_00e292e0 */
uint F_00e292e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe292e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)((int)this + 0xc);
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)((int)this + 0x14);
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)((int)this + 0x1c);
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)((int)this + 0x24);
  return uVar1;
}

/* ref: FUN_00e29330 */
uint F_00e29330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = 0x38;
  *(undefined2 *)(param_1 + 3) = 2;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[4] = *(undefined4 *)((int)this + 0x10);
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)((int)this + 0x1c);
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)((int)this + 0x24);
  *(undefined8 *)(param_1 + 9) = *(undefined8 *)((int)this + 0x2c);
  *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)((int)this + 0x34);
  return (uint)param_1;
}

/* ref: FUN_00e293a0 */
uint F_00e293a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe293a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00e360f0(in_ecx);
  *in_ecx = (*(undefined * PTR32 (*)[13])REFP(0x1157164));
  return (uint)in_ecx;
}

/* ref: FUN_00e293d0 */
uint F_00e293d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe293d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: NetBufferFactoryInterface_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00e29400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x115719c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: NetBufferFactoryInterface_TChatProtoDown_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00e29430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x11571b4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e29460 */
uint F_00e29460(unsigned int gen_a0)
{
  GEN_ENTER(0xe29460u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00e29470 */
uint F_00e29470(unsigned int gen_a0)
{
  GEN_ENTER(0xe29470u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00e29480 */
uint F_00e29480(unsigned int gen_a0)
{
  GEN_ENTER(0xe29480u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e29490 */
uint F_00e29490(unsigned int gen_a0)
{
  GEN_ENTER(0xe29490u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00e294a0 */
uint F_00e294a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe294a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00e294b0 */
uint F_00e294b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe294b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00e294c0 */
uint F_00e294c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe294c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e294e0 */
uint F_00e294e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe294e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00e29500 */
uint F_00e29500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29500u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e29520 */
uint F_00e29520(unsigned int gen_a0)
{
  GEN_ENTER(0xe29520u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00e29530 */
uint F_00e29530(unsigned int gen_a0)
{
  GEN_ENTER(0xe29530u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00e29540 */
uint F_00e29540(unsigned int gen_a0)
{
  GEN_ENTER(0xe29540u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e29550 */
uint F_00e29550(unsigned int gen_a0)
{
  GEN_ENTER(0xe29550u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00e29560 */
uint F_00e29560(unsigned int gen_a0)
{
  GEN_ENTER(0xe29560u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00e29570 */
uint F_00e29570(unsigned int gen_a0)
{
  GEN_ENTER(0xe29570u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00e29580 */
uint F_00e29580(unsigned int gen_a0)
{
  GEN_ENTER(0xe29580u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e295a0 */
uint F_00e295a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe295a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00e295c0 */
uint F_00e295c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe295c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e295f0 */
byte F_00e295f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe295f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e29620 */
byte F_00e29620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e29650 */
unsigned int F_00e29650(unsigned int gen_a0)
{
  GEN_ENTER(0xe29650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00e296a0 */
unsigned int F_00e296a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe296a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00e296f0 */
uint F_00e296f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe296f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e29700 */
uint F_00e29700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe29700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e29710 */
uint F_00e29710(unsigned int gen_a0)
{
  GEN_ENTER(0xe29710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e29720 */
uint F_00e29720(unsigned int gen_a0)
{
  GEN_ENTER(0xe29720u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e29790 */
uint F_00e29790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_00e297a0 */
uint F_00e297a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe297a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00e297b0 */
uint F_00e297b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe297b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_00e297c0 */
byte F_00e297c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe297c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e297e0 */
byte F_00e297e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe297e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e29830 */
uint F_00e29830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e29850 */
uint F_00e29850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29850u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e29870 */
uint F_00e29870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e29890 */
uint F_00e29890(unsigned int gen_a0)
{
  GEN_ENTER(0xe29890u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e298a0 */
uint F_00e298a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe298a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00e298b0 */
uint F_00e298b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe298b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e29900 */
uint F_00e29900(unsigned int gen_a0)
{
  GEN_ENTER(0xe29900u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00e29920 */
byte F_00e29920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e29940 */
byte F_00e29940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e29960 */
byte F_00e29960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e29980 */
uint F_00e29980(unsigned int gen_a0)
{
  GEN_ENTER(0xe29980u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00e29990 */
uint F_00e29990(unsigned int gen_a0)
{
  GEN_ENTER(0xe29990u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00e299a0 */
uint F_00e299a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe299a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e299b0 */
uint F_00e299b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe299b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00e299c0 */
uint F_00e299c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe299c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00e299d0 */
uint F_00e299d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe299d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00e299e0 */
uint F_00e299e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe299e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e29a00 */
uint F_00e29a00(unsigned int gen_a0)
{
  GEN_ENTER(0xe29a00u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00e29a20 */
uint F_00e29a20(unsigned int gen_a0)
{
  GEN_ENTER(0xe29a20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00e29a30 */
uint F_00e29a30(unsigned int gen_a0)
{
  GEN_ENTER(0xe29a30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e29a50 */
uint F_00e29a50(unsigned int gen_a0)
{
  GEN_ENTER(0xe29a50u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00e29a70 */
uint F_00e29a70(unsigned int gen_a0)
{
  GEN_ENTER(0xe29a70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00e29a80 */
uint F_00e29a80(unsigned int gen_a0)
{
  GEN_ENTER(0xe29a80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e29aa0 */
uint F_00e29aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xe29aa0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00e29ac0 */
uint F_00e29ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe29ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e29ae0 */
unsigned int F_00e29ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xe29ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00e29b30 */
uint F_00e29b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe29b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e29b40 */
unsigned int F_00e29b40(unsigned int gen_a0)
{
  GEN_ENTER(0xe29b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00e29b90 */
unsigned int F_00e29b90(unsigned int gen_a0)
{
  GEN_ENTER(0xe29b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00e29bf0 */
uint F_00e29bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29bf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_00e29c30 */
uint F_00e29c30(unsigned int gen_a0)
{
  GEN_ENTER(0xe29c30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e29c40 */
uint F_00e29c40(unsigned int gen_a0)
{
  GEN_ENTER(0xe29c40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e29c50 */
uint F_00e29c50(unsigned int gen_a0)
{
  GEN_ENTER(0xe29c50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: PrimaryEntityFactoryClass_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
uint F_00e29c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x11571cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e29cb0 */
uint F_00e29cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)((int)this + 0xc);
  if (puVar1 != param_1) {
    *puVar1 = *param_1;
    *(undefined4 *)((int)this + 0x10) = param_1[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_00e29ce0 */
uint F_00e29ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e29d10 */
uint F_00e29d10(unsigned int gen_a0)
{
  GEN_ENTER(0xe29d10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e29d20 */
uint F_00e29d20(unsigned int gen_a0)
{
  GEN_ENTER(0xe29d20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00e29d30 */
uint F_00e29d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29d30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_00e29da0 */
uint F_00e29da0(unsigned int gen_a0)
{
  GEN_ENTER(0xe29da0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e29db0 */
uint F_00e29db0(unsigned int gen_a0)
{
  GEN_ENTER(0xe29db0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e29e00 */
uint F_00e29e00(unsigned int gen_a0)
{
  GEN_ENTER(0xe29e00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e29e50 */
uint F_00e29e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong * param_1 = (ulonglong *)(uintptr_t)gen_a1;
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  uVar3 = F_0046ff40();
  uVar2 = (uint)uVar3;
  if (*(int *)((int)this + 0x18) == 0 && *(int *)((int)this + 0x1c) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = uVar3 - *(longlong *)((int)this + 0x18);
  }
  *(longlong *)((int)this + 0x10) = lVar1;
  *(ulonglong *)((int)this + 0x18) = uVar3;
  *(int *)((int)this + 0x28) = (int)*param_1;
  *(int *)((int)this + 0x2c) = *(int *)((int)param_1 + 4);
  if (((int)*param_1 != 0 || *(int *)((int)param_1 + 4) != 0) && (*param_1 < uVar3)) {
    uVar2 = (uint)(uVar3 - *param_1);
    *(ulonglong *)((int)this + 0x20) = uVar3 - *param_1;
  }
  return uVar2;
}

/* ref: FUN_00e29f00 */
uint F_00e29f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe29f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return param_1;
}

/* ref: FUN_00e29f60 */
uint F_00e29f60(unsigned int gen_a0)
{
  GEN_ENTER(0xe29f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e29ae0(this);
  return (uint)this;
}

/* ref: FUN_00e29f90 */
uint F_00e29f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e29fe0 */
byte F_00e29fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e2a000 */
uint F_00e2a000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2a000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2a020 */
uint F_00e2a020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2a020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00e2a040 */
byte F_00e2a040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2a040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e2a0a0 */
uint F_00e2a0a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe2a0a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00e2a0b0 */
uint F_00e2a0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2a0b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: IpcEntityTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
uint F_00e2a140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2a140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x11571fc));
  F_01050b80(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: EntityWrapper_TargetEntityTmpl_TChatProtoUp_ChatProtoChannel_Network_Application::vf0 */
uint F_00e2a170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2a170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157204));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: TargetEntityFactoryClass_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf6 */
unsigned int F_00e2a1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2a1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*param_1)(param_1,1);
  }
  return 0;
}

/* ref: TargetEntityFactoryClass_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
uint F_00e2a1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2a1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x11571dc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e2a200 */
uint F_00e2a200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2a200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_01050b90(in_ecx,param_3);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11571fc));
  in_ecx[4] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2a250 */
uint F_00e2a250(unsigned int gen_a0)
{
  GEN_ENTER(0xe2a250u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x15555556) && (uVar1 = F_004069f0(param_1 * 0xc), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e2a2a0 */
uint F_00e2a2a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe2a2a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e2a2c0 */
uint F_00e2a2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe2a2c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e2a320 */
uint F_00e2a320(unsigned int gen_a0)
{
  GEN_ENTER(0xe2a320u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e2a370 */
uint F_00e2a370(unsigned int gen_a0)
{
  GEN_ENTER(0xe2a370u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x15555556) && (uVar1 = F_004069f0(param_1 * 0xc), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e2a3c0 */
uint F_00e2a3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2a3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157204));
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 8);
    *(int *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00e2a400 */
uint F_00e2a400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2a400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x11010];
  uint uVar1;
  undefined1 * puVar2;
  
  (*(uint *)(gen_frame + 0x11008)) = 0xe2a40d;
  (*(uint *)(gen_frame + 0x11008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  uVar1 = *(uint *)((int)this + 8);
  if (*(char *)(uVar1 + 0x19) == '\x01') {
    if ((param_1 == (undefined1 *)0x0) || (param_2 == 0)) {
      puVar2 = ((undefined1 *)(gen_frame + 0x10008));
      (*(int *)(gen_frame + 0x10004)) = 0x1000;
    }
    else {
      (*(int *)(gen_frame + 0x10004)) = param_2;
      puVar2 = param_1;
    }
    F_01050f50(puVar2,&(*(int *)(gen_frame + 0x10004)),*(int *)((int)this + 8) + 0x20,
                 *((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) + -0x20);
    F_00c46aa0(*(int *)((int)this + 8) + 0x20,puVar2,(*(int *)(gen_frame + 0x10004)));
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x19))) = 0;
    uVar1 = (*(int *)(gen_frame + 0x10004)) + 0x20;
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = uVar1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x11008)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar1;
}

/* ref: FUN_00e2a500 */
uint F_00e2a500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2a500u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_00e2a510 */
uint F_00e2a510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2a510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00e2a520 */
uint F_00e2a520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2a520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_00e2a5a0 */
uint F_00e2a5a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe2a5a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e2a5b0 */
uint F_00e2a5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2a5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e2a5f0 */
byte F_00e2a5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2a5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if ((*(int *)((int)this + 0x10) == 0) && (*(int *)((int)this + 0xc) + 0x58U <= *(uint *)this)) {
    if (*(int *)((int)this + 0xc) == 0) {
      puVar3 = *(undefined8 * PTR32 *)((int)this + 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x16))) = 0;
      *(undefined4 *)((int)this + 0xc) = 0x20;
    }
    iVar4 = *(int *)((int)this + 0xc);
    iVar5 = *(int *)((int)this + 8);
    (*(undefined2 *)(gen_frame + 0x14)) = 2;
    ((undefined4 *)(gen_frame + 0x8))[1] = 0;
    ((undefined4 *)(gen_frame + 0x8))[2] = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    ((undefined4 *)(gen_frame + 0x8))[0] = 0x38;
    puVar7 = ((undefined4 *)(gen_frame + 0x8));
    puVar8 = (undefined4 *)(iVar4 + iVar5);
    for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 0x38;
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10)));
    *piVar1 = *piVar1 + 0x38;
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 0x16)));
    *psVar2 = *psVar2 + 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00e2a6b0 */
byte F_00e2a6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe2a6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x2b0];
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0x29c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2a0);
  if ((*(int *)((int)this + 0x10) == 0) && (*(int *)((int)this + 0xc) + 0x2b0U <= *(uint *)this)) {
    if (*(int *)((int)this + 0xc) == 0) {
      puVar3 = *(undefined8 * PTR32 *)((int)this + 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x16))) = 0;
      *(undefined4 *)((int)this + 0xc) = 0x20;
    }
    (*(undefined2 *)(gen_frame + 0x14)) = 10;
    ((undefined4 *)(gen_frame + 0x8))[0] = 0x290;
    ((undefined4 *)(gen_frame + 0x8))[1] = 0;
    ((undefined4 *)(gen_frame + 0x8))[2] = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = param_2;
    if (param_1 != (int *)0x0) {
      uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,param_2,((undefined4 *)(gen_frame + 0x8)));
      if ((char)uVar5 != '\0') {
        puVar7 = ((undefined4 *)(gen_frame + 0x8));
        puVar8 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 8))));
        for (iVar6 = 0xa4; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 0x290;
        piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10)));
        *piVar1 = *piVar1 + 0x290;
        psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 0x16)));
        *psVar2 = *psVar2 + 1;
        bVar4 = 1;
        goto LAB_00e2a7ab;
      }
    }
  }
  bVar4 = 0;
LAB_00e2a7ab: ;
  F_00c47745((*(uint *)(gen_frame + 0x29c)) ^ (uint)(uint)(gen_frame + 0x2a0));
  return bVar4;
}

/* ref: FUN_00e2a7c0 */
uint F_00e2a7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2a7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157204));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: FUN_00e2a7e0 */
uint F_00e2a7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2a7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2a810 */
byte F_00e2a810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2a810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e2a830 */
uint F_00e2a830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2a830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2a850 */
uint F_00e2a850(unsigned int gen_a0)
{
  GEN_ENTER(0xe2a850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00e2a8b0 */
byte F_00e2a8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2a8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0xc) == *(int *)this)) {
    return *(int *)(param_1 + 0x10) == *(int *)((int)this + 4);
  }
  return 0;
}

/* ref: FUN_00e2a8e0 */
uint F_00e2a8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe2a8e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e2a8f0 */
uint F_00e2a8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2a8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2a910 */
uint F_00e2a910(unsigned int gen_a0)
{
  GEN_ENTER(0xe2a910u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e2a920 */
uint F_00e2a920(unsigned int gen_a0)
{
  GEN_ENTER(0xe2a920u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e2a940 */
uint F_00e2a940(unsigned int gen_a0)
{
  GEN_ENTER(0xe2a940u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e2a950 */
uint F_00e2a950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2a950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2a970 */
uint F_00e2a970(unsigned int gen_a0)
{
  GEN_ENTER(0xe2a970u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e2a9c0 */
uint F_00e2a9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe2a9c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e2a9d0 */
uint F_00e2a9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2a9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: Application::Network::ChatClient::ChatProtoDownDummyCallback::vf0 */
uint F_00e2a9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2a9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e360e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e2aa60 */
uint F_00e2aa60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2aa60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00e2aaf0 */
uint F_00e2aaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2aaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00e2ab50 */
uint F_00e2ab50(unsigned int gen_a0)
{
  GEN_ENTER(0xe2ab50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e29650(this);
  return (uint)this;
}

/* ref: FUN_00e2ab60 */
uint F_00e2ab60(unsigned int gen_a0)
{
  GEN_ENTER(0xe2ab60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e296a0(this);
  return (uint)this;
}

/* ref: FUN_00e2ab70 */
uint F_00e2ab70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2ab70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2ab80 */
uint F_00e2ab80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2ab80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2abc0 */
uint F_00e2abc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe2abc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e29650(this);
  return (uint)this;
}

/* ref: FUN_00e2abd0 */
uint F_00e2abd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe2abd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e296a0(this);
  return (uint)this;
}

/* ref: FUN_00e2ac50 */
uint F_00e2ac50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2ac50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00e2ac90 */
uint F_00e2ac90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2ac90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00e29650(this);
  return (uint)param_1;
}

/* ref: FUN_00e2acb0 */
uint F_00e2acb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2acb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00e296a0(this);
  return (uint)param_1;
}

/* ref: FUN_00e2acd0 */
uint F_00e2acd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2acd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2ad00 */
uint F_00e2ad00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2ad00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00e2ad70 */
uint F_00e2ad70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2ad70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00e2ade0 */
uint F_00e2ade0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2ade0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00e2ae40 */
uint F_00e2ae40(unsigned int gen_a0)
{
  GEN_ENTER(0xe2ae40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e29ae0(this);
  return (uint)this;
}

/* ref: FUN_00e2ae50 */
uint F_00e2ae50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2ae50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2ae60 */
uint F_00e2ae60(unsigned int gen_a0)
{
  GEN_ENTER(0xe2ae60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e29b40(this);
  return (uint)this;
}

/* ref: FUN_00e2ae70 */
uint F_00e2ae70(unsigned int gen_a0)
{
  GEN_ENTER(0xe2ae70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e29b90(this);
  return (uint)this;
}

/* ref: FUN_00e2ae80 */
uint F_00e2ae80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2ae80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x38))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*param_2,0);
  if (uVar2 != 0) {
    *(uint *)(param_1 + 0xc) = uVar2;
    return param_1;
  }
  return 0;
}

/* ref: FUN_00e2af00 */
uint F_00e2af00(unsigned int gen_a0)
{
  GEN_ENTER(0xe2af00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e29b40(this);
  return (uint)this;
}

/* ref: PrimaryEntityFactoryClass_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
uint F_00e2af40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2af40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x11571cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PrimaryEntityFactoryClass_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf2 */
unsigned int F_00e2af80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2af80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*param_1)(param_1,1);
  }
  return 0;
}

/* ref: FUN_00e2afa0 */
uint F_00e2afa0(unsigned int gen_a0)
{
  GEN_ENTER(0xe2afa0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x10))))(*(int * PTR32 *)(param_1 + 8),param_1);
  return uVar1;
}

/* ref: FUN_00e2b000 */
uint F_00e2b000(unsigned int gen_a0)
{
  GEN_ENTER(0xe2b000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e29b90(this);
  return (uint)this;
}

/* ref: FUN_00e2b010 */
uint F_00e2b010(unsigned int gen_a0)
{
  GEN_ENTER(0xe2b010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00e2b020 */
uint F_00e2b020(unsigned int gen_a0)
{
  GEN_ENTER(0xe2b020u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e2b070 */
uint F_00e2b070(unsigned int gen_a0)
{
  GEN_ENTER(0xe2b070u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e2b0f0 */
undefined4 * F_00e2b0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2b0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00e2b120 */
uint F_00e2b120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe2b120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  if (((-1 < param_1) || ((uint)-param_1 <= (uint)piVar1[8])) &&
     ((param_1 < 1 || ((uint)(piVar1[8] + param_1) < 0x431)))) {
    if (param_1 != 0) {
      piVar1[8] = piVar1[8] + param_1;
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1);
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    return (uint)piVar1;
  }
  piVar1[8] = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return (uint)piVar1;
}

