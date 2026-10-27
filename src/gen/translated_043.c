#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0061a840 */
uint F_0061a840(unsigned int gen_a0)
{
  GEN_ENTER(0x61a840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617650(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_0061a880 */
uint F_0061a880(unsigned int gen_a0)
{
  GEN_ENTER(0x61a880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006176f0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_0061a8c0 */
uint F_0061a8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x61a8c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617790(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x1c,900);
  return (uint)uVar1;
}

/* ref: FUN_0061a940 */
uint F_0061a940(unsigned int gen_a0)
{
  GEN_ENTER(0x61a940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617830(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_0061a980 */
uint F_0061a980(unsigned int gen_a0)
{
  GEN_ENTER(0x61a980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006178d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_0061a9c0 */
uint F_0061a9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x61a9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617970(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_0061aa00 */
uint F_0061aa00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61aa00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (this != param_1) {
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)((int)param_1 + 4) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
    *(undefined4 *)((int)param_1 + 8) = uVar1;
  }
  return (uint)param_1;
}

/* ref: FUN_0061aa30 */
uint F_0061aa30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61aa30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (this != param_1) {
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)((int)param_1 + 4) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
    *(undefined4 *)((int)param_1 + 8) = uVar1;
  }
  return (uint)param_1;
}

/* ref: FUN_0061aa60 */
uint F_0061aa60(unsigned int gen_a0)
{
  GEN_ENTER(0x61aa60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00619b00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0061aa80 */
uint F_0061aa80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x61aa80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 3) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3 = puVar3 + 3;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0061aad0 */
unsigned int F_0061aad0(unsigned int gen_a0)
{
  GEN_ENTER(0x61aad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,0x385);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_0061ab20 */
uint F_0061ab20(unsigned int gen_a0)
{
  GEN_ENTER(0x61ab20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00619bb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0061ab40 */
uint F_0061ab40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61ab40u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,900);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,900);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_0061abf0 */
uint F_0061abf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61abf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,0x385);
    F_00619da0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,0x385);
    }
    *(uint *)((int)this + 8) = param_1 * 0xc + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0xc) * 0xc;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_0061acb0 */
uint F_0061acb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61acb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x14,0,900);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x11))) = 1;
  F_00617b50(this,param_1);
  return (uint)this;
}

/* ref: FUN_0061ad00 */
uint F_0061ad00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61ad00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x28,0,900);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_2;
    puVar1[5] = param_2[1];
    puVar1[6] = param_2[2];
  }
  F_00617c00(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_0061ad60 */
uint F_0061ad60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61ad60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x1c,0,900);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 6) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
    puVar1[5] = param_2[2];
  }
  F_00618350(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_0061adc0 */
uint F_0061adc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61adc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,900);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
  }
  F_00617fd0(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_0061ae20 */
uint F_0061ae20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61ae20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,900);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
  }
  F_00618270(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_0061ae80 */
uint F_0061ae80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61ae80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,900);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 3) = *param_2;
    puVar1[4] = *(undefined4 *)(param_2 + 2);
  }
  F_006180b0(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_0061aee0 */
uint F_0061aee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61aee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,0x385);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 3) = *param_2;
    puVar1[4] = *(undefined4 *)(param_2 + 4);
  }
  F_00618190(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_0061af40 */
uint F_0061af40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61af40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x28,0,0x385);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_2;
    puVar1[5] = param_2[1];
    puVar1[6] = param_2[2];
  }
  F_006186d0(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_0061afa0 */
uint F_0061afa0(unsigned int gen_a0)
{
  GEN_ENTER(0x61afa0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * puVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  int local_8;
  
  piVar3 = (int *)F_00404310();
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,param_1 * 0xc0,0x10)));
  if (piVar3 == (int *)0x0) {
    F_00510db0();
    piVar3 = (int *)F_00404310();
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,param_1 * 0xc0,0x10)));
    if (piVar3 == (int *)0x0) {
      return 0;
    }
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  if (param_1 != 0) {
    puVar5 = (undefined4 *)(uVar4 + 0x68);
    local_8 = param_1;
    do {
      if (puVar5 != (undefined4 *)0x68) {
        *(byte *)(puVar5 + -0x12) = *(byte *)(puVar5 + -0x12) | 7;
        *(byte *)((int)puVar5 + -0x3d) = *(byte *)((int)puVar5 + -0x3d) & 0xfa | 0x7a;
        puVar1 = puVar5 + -0x1a;
        *puVar1 = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
        puVar5[-0x18] = 0;
        puVar5[-0x14] = 0;
        puVar5[-0x13] = 0xffffffff;
        puVar5[-0x11] = puVar5[-0x11] & 0xfffffffd | 1;
        *(undefined1 *)(puVar5 + -0x10) = 0;
        *(byte *)((int)puVar5 + -0x3f) = *(byte *)((int)puVar5 + -0x3f) & 0xf8 | 8;
        *(undefined1 *)((int)puVar5 + -0x3e) = 0xff;
        puVar5[-0x16] = 0;
        puVar5[-0x15] = 0;
        F_00509590(puVar5 + -0xe);
        *puVar1 = (*(undefined * PTR32 (*)[68])REFP(0x10a5884));
        puVar5[-0xe] = (*(undefined * PTR32 (*)[5])REFP(0x10a586c));
        puVar5[-0xd] = 0;
        puVar5[-0xc] = 0;
        puVar5[-0xb] = 0;
        puVar5[-10] = GEN_FLT_TO(puVar5[-10], REFG(float, 0x1302df0));
        puVar5[-9] = GEN_FLT_TO(puVar5[-9], REFG(float, 0x1302df4));
        puVar5[-8] = GEN_FLT_TO(puVar5[-8], REFG(float, 0x1302df8));
        puVar5[-6] = REFG(undefined4, 0x1302e00);
        puVar5[-5] = REFG(undefined4, 0x1302e04);
        puVar5[-4] = REFG(undefined4, 0x1302e08);
        puVar5[-3] = REFG(undefined4, 0x1302e0c);
        puVar5[-2] = GEN_FLT_TO(puVar5[-2], REFG(float, 0x1302e10));
        puVar5[-1] = GEN_FLT_TO(puVar5[-1], REFG(float, 0x1302e14));
        *puVar5 = GEN_FLT_TO(*puVar5, REFG(float, 0x1302e18));
        uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        puVar5[2] = 0;
        *(undefined2 *)(puVar5 + 3) = 0;
        *(undefined4 *)((int)puVar5 + 0xe) = 0;
        *(undefined2 *)((int)puVar5 + 0x12) = 0;
        puVar5[5] = 0;
        *(undefined2 *)(puVar5 + 6) = 0;
        *(undefined1 *)(puVar5 + 10) = 0;
        puVar5[10] = puVar5[10] & 0xfffffcff;
        puVar5[7] = uVar2;
        puVar5[8] = 0;
        *(byte *)(puVar5 + 0xb) = *(byte *)(puVar5 + 0xb) & 0xc0;
        *(undefined2 *)(puVar5 + 9) = 0;
        puVar5[0xc] = (*(undefined * PTR32 (*)[1])REFP(0x10a585c));
        puVar5[0xe] = 0;
        puVar5[0xf] = 0;
        puVar5[0x10] = 0;
        puVar5[0x12] = 0;
        puVar5[0xd] = puVar1;
      }
      puVar5 = puVar5 + 0x30;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return (uint)piVar3;
}

/* ref: FUN_0061b160 */
uint F_0061b160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61b160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,900);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_2 + 1);
  }
  F_00618510(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_0061b1c0 */
uint F_0061b1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61b1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,900);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
  }
  F_006185f0(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_0061b220 */
uint F_0061b220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61b220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,0x385);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
  }
  F_006187f0(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_0061b280 */
uint F_0061b280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61b280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,900);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 3) = *param_2;
    puVar1[4] = *(undefined4 *)(param_2 + 4);
  }
  F_00617ef0(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_0061b2e0 */
unsigned int F_0061b2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61b2e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0061b310 */
unsigned int F_0061b310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61b310u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0061b340 */
unsigned int F_0061b340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61b340u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0061b370 */
unsigned int F_0061b370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61b370u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0061b3a0 */
unsigned int F_0061b3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61b3a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0061b3d0 */
uint F_0061b3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61b3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xa0,0,0x385);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x24) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
    F_005da450(puVar1 + 8,param_1 + 4);
  }
  return (uint)puVar1;
}

/* ref: FUN_0061b430 */
uint F_0061b430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61b430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,0x385);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
  }
  F_00618a20(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_0061b490 */
uint F_0061b490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61b490u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00619280(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x15c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if (((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x160)))) &&
     (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x20U) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x20U) + -1,
     *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x20) < 1)) {
    pvVar1 = (undefined *)F_00614760(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x15c))),&(*(undefined4 *)&gen_args[1]),(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (uint)pvVar1;
}

/* ref: FUN_0061b4e0 */
uint F_0061b4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x61b4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006171c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,900);
  return (uint)uVar1;
}

/* ref: FUN_0061b520 */
uint F_0061b520(unsigned int gen_a0)
{
  GEN_ENTER(0x61b520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617260(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,900);
  return (uint)uVar1;
}

/* ref: FUN_0061b5a0 */
uint F_0061b5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x61b5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00616e70(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,900);
  return (uint)uVar1;
}

/* ref: FUN_0061b5e0 */
uint F_0061b5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x61b5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617510(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_0061b620 */
uint F_0061b620(unsigned int gen_a0)
{
  GEN_ENTER(0x61b620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006175b0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_0061b660 */
uint F_0061b660(unsigned int gen_a0)
{
  GEN_ENTER(0x61b660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617650(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_0061b6a0 */
uint F_0061b6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x61b6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006176f0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_0061b6e0 */
uint F_0061b6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x61b6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617790(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x1c,900);
  return (uint)uVar1;
}

/* ref: FUN_0061b720 */
uint F_0061b720(unsigned int gen_a0)
{
  GEN_ENTER(0x61b720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617830(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_0061b760 */
uint F_0061b760(unsigned int gen_a0)
{
  GEN_ENTER(0x61b760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617300(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0xa0,0x385);
  return (uint)uVar1;
}

/* ref: FUN_0061b7a0 */
uint F_0061b7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x61b7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006178d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,900);
  return (uint)uVar1;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf0 */
uint F_0061b7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61b7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005f0810(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0061b810 */
uint F_0061b810(unsigned int gen_a0)
{
  GEN_ENTER(0x61b810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617970(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_0061b850 */
uint F_0061b850(unsigned int gen_a0)
{
  GEN_ENTER(0x61b850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617470(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_0061b890 */
uint F_0061b890(unsigned int gen_a0)
{
  GEN_ENTER(0x61b890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006173d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_0061b9e0 */
uint F_0061b9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61b9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (this != param_1) {
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)((int)param_1 + 4) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
    *(undefined4 *)((int)param_1 + 8) = uVar1;
  }
  return (uint)param_1;
}

/* ref: FUN_0061ba50 */
uint F_0061ba50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61ba50u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x385);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x385);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_0061bc80 */
uint F_0061bc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61bc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (this != param_1) {
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)((int)param_1 + 4) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
    *(undefined4 *)((int)param_1 + 8) = uVar1;
  }
  return (uint)param_1;
}

/* ref: FUN_0061bcf0 */
uint F_0061bcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61bcf0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x385);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x385);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_0061bda0 */
uint F_0061bda0(unsigned int gen_a0)
{
  GEN_ENTER(0x61bda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00619b00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x385);
  return (uint)uVar1;
}

/* ref: FUN_0061be20 */
unsigned int F_0061be20(unsigned int gen_a0)
{
  GEN_ENTER(0x61be20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,0x385);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_0061beb0 */
uint F_0061beb0(unsigned int gen_a0)
{
  GEN_ENTER(0x61beb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00619bb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,900);
  return (uint)uVar1;
}

/* ref: FUN_0061bef0 */
uint F_0061bef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61bef0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_0061ba50(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0061ba50(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0061bf60 */
uint F_0061bf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61bf60u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_0061ab40(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0061ab40(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0061bfd0 */
uint F_0061bfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61bfd0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_0061bcf0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0061bcf0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0061c040 */
uint F_0061c040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61c040u, gen_a0, gen_a1, 0u, 0u);
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
      uVar2 = F_0061abf0(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0061abf0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0061c0c0 */
uint F_0061c0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61c0c0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,900);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,900);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_0061c170 */
uint F_0061c170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61c170u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,900);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,900);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_0061c220 */
uint F_0061c220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61c220u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,900);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,900);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_0061c2d0 */
uint F_0061c2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61c2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x14,0,900);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x11))) = 1;
  F_00617b50(this,param_1);
  return (uint)this;
}

/* ref: FUN_0061c320 */
uint F_0061c320(unsigned int gen_a0)
{
  GEN_ENTER(0x61c320u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * puVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  piVar3 = (int *)F_00404310();
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,param_1 * 0xf0,0x10)));
  if (piVar3 == (int *)0x0) {
    F_00510db0();
    piVar3 = (int *)F_00404310();
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,param_1 * 0xf0,0x10)));
    if (piVar3 == (int *)0x0) {
      return 0;
    }
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  if (param_1 != 0) {
    puVar5 = (undefined4 *)(uVar4 + 0x68);
    do {
      if (puVar5 != (undefined4 *)0x68) {
        *(byte *)(puVar5 + -0x12) = *(byte *)(puVar5 + -0x12) | 7;
        *(byte *)((int)puVar5 + -0x3d) = *(byte *)((int)puVar5 + -0x3d) & 0xfa | 0x7a;
        puVar1 = puVar5 + -0x1a;
        *puVar1 = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
        puVar5[-0x18] = 0;
        puVar5[-0x14] = 0;
        puVar5[-0x13] = 0xffffffff;
        puVar5[-0x11] = puVar5[-0x11] & 0xfffffffd | 1;
        *(undefined1 *)(puVar5 + -0x10) = 0;
        *(byte *)((int)puVar5 + -0x3f) = *(byte *)((int)puVar5 + -0x3f) & 0xf8 | 8;
        *(undefined1 *)((int)puVar5 + -0x3e) = 0xff;
        puVar5[-0x16] = 0;
        puVar5[-0x15] = 0;
        F_00509590(puVar5 + -0xe);
        *puVar1 = (*(undefined * PTR32 (*)[68])REFP(0x10a59c4));
        puVar5[-0xe] = (*(undefined * PTR32 (*)[5])REFP(0x10a59a8));
        puVar5[-0xd] = 0;
        puVar5[-0xc] = 0;
        puVar5[-0xb] = 0;
        puVar5[-10] = GEN_FLT_TO(puVar5[-10], REFG(float, 0x1302df0));
        puVar5[-9] = GEN_FLT_TO(puVar5[-9], REFG(float, 0x1302df4));
        puVar5[-8] = GEN_FLT_TO(puVar5[-8], REFG(float, 0x1302df8));
        puVar5[-6] = REFG(undefined4, 0x1302e00);
        puVar5[-5] = REFG(undefined4, 0x1302e04);
        puVar5[-4] = REFG(undefined4, 0x1302e08);
        puVar5[-3] = REFG(undefined4, 0x1302e0c);
        puVar5[-2] = GEN_FLT_TO(puVar5[-2], REFG(float, 0x1302e10));
        puVar5[-1] = GEN_FLT_TO(puVar5[-1], REFG(float, 0x1302e14));
        uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302e18)));
        puVar5[2] = (*(undefined * PTR32 (*)[1])REFP(0x10a585c));
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[8] = (*(undefined * PTR32 (*)[1])REFP(0x10a5864));
        *puVar5 = uVar2;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5[0x10] = puVar5[0x10] & 0xfff00000;
        puVar5[0x12] = puVar5[0x12] & 0xffffffc0;
        *(byte *)(puVar5 + 0x13) = *(byte *)(puVar5 + 0x13) & 0xfc;
        puVar5[0x14] = puVar5[0x14] & 0xfffffffe;
        puVar5[0xd] = 0;
        puVar5[0xe] = 0;
        puVar5[0xf] = 0;
        puVar5[0x15] = 0;
        puVar5[0x16] = 0;
        *(undefined1 *)(puVar5 + 0x17) = 0;
        *(byte *)(puVar5 + 0x11) = *(byte *)(puVar5 + 0x11) & 0xfb | 3;
        puVar5[0x1c] = 0;
        puVar5[0x1d] = 0;
        puVar5[0x1e] = 0;
        puVar5[0x1f] = 0;
        puVar5[0x20] = 0;
        *(undefined4 *)((int)puVar5 + 0x5d) = 0;
        *(undefined4 *)((int)puVar5 + 0x61) = 0;
        *(undefined4 *)((int)puVar5 + 0x65) = 0;
        *(undefined4 *)((int)puVar5 + 0x69) = 0;
        puVar5[3] = puVar1;
      }
      puVar5 = puVar5 + 0x3c;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return (uint)piVar3;
}

/* ref: FUN_0061c510 */
uint F_0061c510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61c510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xa0,0,0x385);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x24) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_2;
    F_005da450(puVar1 + 8,param_2 + 4);
  }
  F_00617e00(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_0061c580 */
uint F_0061c580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61c580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,0x385);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
  }
  F_00618a20(this,((undefined4 *)(gen_frame + 0x4)),puVar1,0);
  *param_1 = ((undefined4 *)(gen_frame + 0x4))[0];
  return (uint)param_1;
}

/* ref: FUN_0061c5f0 */
uint F_0061c5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61c5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0061ba50((undefined *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: FUN_0061c600 */
uint F_0061c600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61c600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0061bcf0((undefined *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_0061c650 */
uint F_0061c650(unsigned int gen_a0)
{
  GEN_ENTER(0x61c650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006171c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,900);
  return (uint)uVar1;
}

/* ref: FUN_0061c6d0 */
uint F_0061c6d0(unsigned int gen_a0)
{
  GEN_ENTER(0x61c6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617260(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,900);
  return (uint)uVar1;
}

/* ref: FUN_0061c750 */
uint F_0061c750(unsigned int gen_a0)
{
  GEN_ENTER(0x61c750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617510(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_0061c7d0 */
uint F_0061c7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x61c7d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006175b0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_0061c850 */
uint F_0061c850(unsigned int gen_a0)
{
  GEN_ENTER(0x61c850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617650(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_0061c8d0 */
uint F_0061c8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x61c8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006176f0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_0061c950 */
uint F_0061c950(unsigned int gen_a0)
{
  GEN_ENTER(0x61c950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617790(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x1c,900);
  return (uint)uVar1;
}

/* ref: FUN_0061c990 */
uint F_0061c990(unsigned int gen_a0)
{
  GEN_ENTER(0x61c990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00619b00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x385);
  return (uint)uVar1;
}

/* ref: FUN_0061ca10 */
uint F_0061ca10(unsigned int gen_a0)
{
  GEN_ENTER(0x61ca10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617830(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_0061caa0 */
uint F_0061caa0(unsigned int gen_a0)
{
  GEN_ENTER(0x61caa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617300(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0xa0,0x385);
  return (uint)uVar1;
}

/* ref: FUN_0061cb20 */
uint F_0061cb20(unsigned int gen_a0)
{
  GEN_ENTER(0x61cb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006178d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_0061cba0 */
uint F_0061cba0(unsigned int gen_a0)
{
  GEN_ENTER(0x61cba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617970(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_0061cbf0 */
unsigned int F_0061cbf0(unsigned int gen_a0)
{
  GEN_ENTER(0x61cbf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,0x385);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PopRangeLayoutInstance::vf6 */
uint F_0061cc40(void)
{
  GEN_ENTER(0x61cc40u, 0u, 0u, 0u, 0u);
  return 0x90;
}

/* ref: FUN_0061cc90 */
uint F_0061cc90(unsigned int gen_a0)
{
  GEN_ENTER(0x61cc90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00617470(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_0061cd10 */
uint F_0061cd10(unsigned int gen_a0)
{
  GEN_ENTER(0x61cd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006173d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_0061cd50 */
uint F_0061cd50(unsigned int gen_a0)
{
  GEN_ENTER(0x61cd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00619bb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,900);
  return (uint)uVar1;
}

/* ref: FUN_0061cd90 */
uint F_0061cd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61cd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0061bef0(this,1);
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
      F_0061bef0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_0061ce00 */
uint F_0061ce00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61ce00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0061bf60(this,1);
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
      F_0061bf60(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_0061ce70 */
uint F_0061ce70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61ce70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0061bfd0(this,1);
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
      F_0061bfd0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_0061cf20 */
uint F_0061cf20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61cf20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0061c040(this,1);
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
      F_0061c040(this,1);
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

/* ref: FUN_0061cff0 */
uint F_0061cff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61cff0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_0061c0c0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0061c0c0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0061d060 */
uint F_0061d060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d060u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_0061c170(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0061c170(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0061d0d0 */
uint F_0061d0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d0d0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_0061c220(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0061c220(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0061d140 */
uint F_0061d140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x14,0,900);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x11))) = 1;
  F_00617b50(this,param_1);
  return (uint)this;
}

/* ref: FUN_0061d190 */
uint F_0061d190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005f4db0((undefined *)((int)this + 0x15c),param_1);
  return uVar1;
}

/* ref: Client::LayoutEngine::LayoutWorld::vf0 */
uint F_0061d1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005f43a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0061d1d0 */
uint F_0061d1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x61d1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00619b00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x385);
  return (uint)uVar1;
}

/* ref: Client::LayoutEngine::CutScenePrefetchResource::vf0 */
uint F_0061d250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a5af4));
  F_00617830(this + 0xc,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)(this + 0x10),*(undefined4 * PTR32 *)(this + 0x10));
  F_00429760(*(undefined4 *)(this + 0x10),0x18,900);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Environment::LayoutOBSetManager::vf0 */
uint F_0061d2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a5afc));
  F_005f03f0(this);
  F_006178d0(this + 8,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)(this + 0xc),*(undefined4 * PTR32 *)(this + 0xc));
  F_00429760(*(undefined4 *)(this + 0xc),0x18,900);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::LayerManager::vf0 */
uint F_0061d300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5b04));
  F_00617970(this + 0x1c,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)(this + 0x20),*(undefined4 * PTR32 *)(this + 0x20));
  F_00429760(*(undefined4 *)(this + 0x20),0x18,0x385);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a3974));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::PopRangeLayoutInstance::vf0 */
uint F_0061d360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005f5a60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Streaming::StreamingManager::vf0 */
uint F_0061d390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5c38));
  F_00617470(this + 0x30,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)(this + 0x34),*(undefined4 * PTR32 *)(this + 0x34));
  F_00429760(*(undefined4 *)(this + 0x34),0x18,900);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a3974));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0061d430 */
uint F_0061d430(unsigned int gen_a0)
{
  GEN_ENTER(0x61d430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00619bb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,900);
  return (uint)uVar1;
}

/* ref: FUN_0061d470 */
uint F_0061d470(unsigned int gen_a0)
{
  GEN_ENTER(0x61d470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00619bb0((undefined *)((int)this + 8),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xc),
               *(undefined4 * PTR32 *)((int)this + 0xc));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0xc),0x14,900);
  return (uint)uVar1;
}

/* ref: FUN_0061d4b0 */
uint F_0061d4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0061cff0(this,1);
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
      F_0061cff0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_0061d520 */
uint F_0061d520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0061d060(this,1);
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
      F_0061d060(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_0061d590 */
uint F_0061d590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0061d0d0(this,1);
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
      F_0061d0d0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_0061d600 */
uint F_0061d600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61d600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar1 = F_004296a0(0x14,0,900);
  *(uint *)((int)this + 0xc) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4))) = *(int *)((int)this + 0xc);
  *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(int *)((int)this + 0xc);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x11))) = 1;
  F_00617b50((undefined *)((int)this + 8),param_2);
  return (uint)this;
}

/* ref: FUN_0061d660 */
uint F_0061d660(unsigned int gen_a0)
{
  GEN_ENTER(0x61d660u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if (param_1 != 0) {
    uVar4 = 0;
    puVar3 = (undefined4 *)(uVar2 + 0x84);
    do {
      if (puVar3 != (undefined4 *)0x84) {
        F_005df720(puVar3 + -0x21);
        puVar3[-0x21] = (*(undefined * PTR32 (*)[68])REFP(0x10a5b24));
        puVar3[-5] = 1;
        puVar3[-4] = 0;
        puVar3[-3] = uVar4;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 0x24;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_0061d710 */
uint F_0061d710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar1 = F_004296a0(0x14,0,900);
  *(uint *)((int)this + 0xc) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4))) = *(int *)((int)this + 0xc);
  *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(int *)((int)this + 0xc);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x11))) = 1;
  F_00617b50((undefined *)((int)this + 8),param_1 + 2);
  return (uint)this;
}

/* ref: Client::LayoutEngine::LayoutManager::vf0 */
uint F_0061d780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005f6030(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0061d7b0 */
uint F_0061d7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00619b00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  F_00429760(*(undefined4 *)((int)this + 4),0x28,0x385);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0061d800 */
uint F_0061d800(unsigned int gen_a0)
{
  GEN_ENTER(0x61d800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00619bb0((undefined *)((int)this + 8),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xc),
               *(undefined4 * PTR32 *)((int)this + 0xc));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0xc),0x14,900);
  return (uint)uVar1;
}

/* ref: FUN_0061d840 */
uint F_0061d840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61d840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar1 = F_004296a0(0x14,0,900);
  *(uint *)((int)this + 0xc) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4))) = *(int *)((int)this + 0xc);
  *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(int *)((int)this + 0xc);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x11))) = 1;
  F_00617b50((undefined *)((int)this + 8),param_2);
  return (uint)this;
}

/* ref: FUN_0061d8a0 */
uint F_0061d8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00619bb0((undefined *)((int)this + 8),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xc),
               *(undefined4 * PTR32 *)((int)this + 0xc));
  F_00429760(*(undefined4 *)((int)this + 0xc),0x14,900);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0061d8f0 */
uint F_0061d8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar1 = F_004296a0(0x14,0,900);
  *(uint *)((int)this + 0xc) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4))) = *(int *)((int)this + 0xc);
  *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(int *)((int)this + 0xc);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x11))) = 1;
  F_00617b50((undefined *)((int)this + 8),param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0061d960 */
uint F_0061d960(unsigned int gen_a0)
{
  GEN_ENTER(0x61d960u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[0]);
  F_00619bb0((undefined *)((*(int *)&gen_args[0]) + 8),&(*(int *)&gen_args[0]),**(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 0xc),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 0xc));
  uVar2 = F_00429760(*(undefined4 *)(iVar1 + 0xc),0x14,900);
  return (uint)uVar2;
}

/* ref: FUN_0061d9a0 */
unsigned int F_0061d9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0061d8f0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_0061d9c0 */
uint F_0061d9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61d9c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  F_00619bb0((undefined *)((*(int *)&gen_args[1]) + 8),&(*(int *)&gen_args[1]),**(undefined4 * PTR32 *)((*(int *)&gen_args[1]) + 0xc),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[1]) + 0xc));
  uVar2 = F_00429760(*(undefined4 *)(iVar1 + 0xc),0x14,900);
  return (uint)uVar2;
}

/* ref: FUN_0061d9f0 */
uint F_0061d9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x61d9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00619bb0((*(int * PTR32 *)&gen_args[4]) + 5,&(*(undefined4 *)&gen_args[2]),*((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[6])),((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[6])));
    F_00429760(piVar4[6],0x14,900);
    F_00429760(piVar4,0x28,900);
                    
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
  cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[4])[1] + 0x24)));
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[4]);
      *(undefined1 *)(iVar2 + 0x24) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x24) == '\0') {
        *(undefined1 *)(piVar5 + 9) = 1;
        *(undefined1 *)(iVar2 + 0x24) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x24))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x25) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x24) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x24))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x25) == '\0') {
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
LAB_0061dc0d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x24) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x25))) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x24) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x24))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x25) == '\0') {
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
        goto LAB_0061dc0d;
      }
      *(undefined1 *)(piVar5 + 9) = 1;
      *(undefined1 *)(iVar2 + 0x24) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x24))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x24);
  } while( true );
}

/* ref: FUN_0061dc40 */
unsigned int F_0061dc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61dc40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0061d8f0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_0061dc60 */
unsigned int F_0061dc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61dc60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x25)));
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  while (cVar1 == '\0') {
    F_0061dc60((*(undefined * PTR32 *)&gen_args[0]),(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00619bb0(piVar3 + 5,&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)piVar3[6],(undefined4 *)piVar3[6]);
    F_00429760(piVar3[6],0x14,900);
    F_00429760(piVar3,0x28,900);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x25);
  }
  return 0;
}

/* ref: FUN_0061dcd0 */
uint F_0061dcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61dcd0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int * piVar7;
  
  piVar6 = (*(int * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x25))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[2]);
  F_0060b5f0(&(*(int * PTR32 *)&gen_args[2]));
  piVar5 = (int *)*piVar6;
  if (*(char *)((int)piVar5 + 0x25) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar6[2] + 0x25) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar6)) {
      piVar5[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar6;
      piVar5 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar6[2]) {
        piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x25) == '\0') {
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
        puVar2 = (undefined4 *)piVar6[1];
        if ((int *)*puVar2 == piVar6) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar6[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[9];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 9))) = (char)piVar6[9];
      *(char *)(piVar6 + 9) = (char)iVar1;
      goto LAB_0061ddea;
    }
  }
  else {
    piVar7 = (int *)piVar6[2];
  }
  piVar5 = (int *)piVar6[1];
  if (*(char *)((int)piVar7 + 0x25) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x25) == '\0') {
      piVar3 = (int *)F_00602a30(piVar7);
    }
    **(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) = piVar3;
  }
  iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4);
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (*(int * PTR32 *)(iVar1 + 8) == piVar6) {
    if (*(char *)((int)piVar7 + 0x25) == '\0') {
      uVar4 = F_00603c80(piVar7);
      *(uint *)((*(int *)(gen_frame + 0x0)) + 8) = uVar4;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar5;
    }
  }
LAB_0061ddea: ;
  if ((char)(*(int * PTR32 *)(gen_frame + 0x4))[9] == '\x01') {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4)))) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[9] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[9] == '\0') {
            *(undefined1 *)(piVar5 + 9) = 1;
            *(undefined1 *)(piVar6 + 9) = 0;
            F_0060bea0(this_00,piVar6);
            piVar5 = (int *)piVar6[2];
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x25) == '\0') {
            if ((*(char *)(*piVar5 + 0x24) != '\x01') || (*(char *)(piVar5[2] + 0x24) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x24) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x24) = 1;
                *(undefined1 *)(piVar5 + 9) = 0;
                F_0060bf00(this_00,piVar5);
                piVar5 = (int *)piVar6[2];
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 9) = (char)piVar6[9];
              *(undefined1 *)(piVar6 + 9) = 1;
              *(undefined1 *)(piVar5[2] + 0x24) = 1;
              F_0060bea0(this_00,piVar6);
              break;
            }
LAB_0061dea8: ;
            *(undefined1 *)(piVar5 + 9) = 0;
          }
        }
        else {
          if ((char)piVar5[9] == '\0') {
            *(undefined1 *)(piVar5 + 9) = 1;
            *(undefined1 *)(piVar6 + 9) = 0;
            F_0060bf00(this_00,piVar6);
            piVar5 = (int *)*piVar6;
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x25) == '\0') {
            if ((*(char *)(piVar5[2] + 0x24) == '\x01') && (*(char *)(*piVar5 + 0x24) == '\x01'))
            goto LAB_0061dea8;
            if (*(char *)(*piVar5 + 0x24) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x24) = 1;
              *(undefined1 *)(piVar5 + 9) = 0;
              F_0060bea0(this_00,piVar5);
              piVar5 = (int *)*piVar6;
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 9) = (char)piVar6[9];
            *(undefined1 *)(piVar6 + 9) = 1;
            *(undefined1 *)(*piVar5 + 0x24) = 1;
            F_0060bf00(this_00,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 4) + 4))));
    }
    *(undefined1 *)(piVar7 + 9) = 1;
  }
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  F_00619bb0((*(int * PTR32 *)(gen_frame + 0x4)) + 5,&(*(int *)(gen_frame + 0x0)),*(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[6],(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[6]);
  F_00429760(piVar6[6],0x14,900);
  F_00429760(piVar6,0x28,900);
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) != 0) {
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_0061df50 */
uint F_0061df50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x61df50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*(char *)((int)puVar3[1] + 0x25) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x25) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar3;
  if (bVar4 != false) {
    if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar3 = (undefined4 *)F_0061d9f0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,iVar1);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00605d10(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)(iVar1 + 0xc)) {
    puVar3 = (undefined4 *)F_0061d9f0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(int *)&gen_args[2]),puVar3,iVar1);
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00619bb0((undefined *)(iVar1 + 0x14),&(*(undefined4 * PTR32 *)&gen_args[3]),**(undefined4 * PTR32 *)(iVar1 + 0x18),
               *(undefined4 * PTR32 *)(iVar1 + 0x18));
  F_00429760(*(undefined4 *)(iVar1 + 0x18),0x14,900);
  F_00429760(iVar1,0x28,900);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_0061e050 */
uint F_0061e050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61e050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x28,0,900);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 9) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0061d8f0(puVar1 + 3,param_1);
  }
  return (uint)puVar1;
}

/* ref: FUN_0061e0a0 */
uint F_0061e0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x61e0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0061dc60(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_0061e0d0 */
uint F_0061e0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x61e0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_0061dc60(this,piVar2[1]);
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
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x25) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x25);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
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
    F_0061dcd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_0061e190 */
uint F_0061e190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61e190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x28,0,900);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 9) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0061d8f0(puVar1 + 3,param_2);
  }
  F_0061df50(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_0061e1f0 */
uint F_0061e1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x61e1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_0061e0d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0061e210 */
uint F_0061e210(unsigned int gen_a0)
{
  GEN_ENTER(0x61e210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0061e0d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,900);
  return (uint)uVar1;
}

/* ref: FUN_0061e250 */
uint F_0061e250(unsigned int gen_a0)
{
  GEN_ENTER(0x61e250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0061e0d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,900);
  return (uint)uVar1;
}

/* ref: FUN_0061e310 */
uint F_0061e310(unsigned int gen_a0)
{
  GEN_ENTER(0x61e310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0061e0d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,900);
  return (uint)uVar1;
}

/* ref: Client::LayoutEngine::Streaming::InstanceGridTree::vf0 */
uint F_0061e350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61e350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005fb6c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0061e390 */
unsigned int F_0061e390(void)
{
  GEN_ENTER(0x61e390u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0061e3a0 */
byte F_0061e3a0(void)
{
  GEN_ENTER(0x61e3a0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Render::Light::vf1 */
uint F_0061e3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x61e3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0061e3c0 */
uint F_0061e3c0(void)
{
  GEN_ENTER(0x61e3c0u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  for (iVar1 = REFG(int, 0x137fa00); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x88)) {
    *(undefined4 *)(iVar1 + 0x8c) = 0;
  }
  return 0;
}

/* ref: FUN_0061e3f0 */
unsigned int F_0061e3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x61e3f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10ab990));
  return 0;
}

/* ref: FUN_0061e400 */
uint F_0061e400(unsigned int gen_a0)
{
  GEN_ENTER(0x61e400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  
  pvVar2 = REFG(void * PTR32, 0x137fa00);
  if (REFG(void * PTR32, 0x137fa00) == this) {
    pvVar3 = *(undefined * PTR32 *)((int)this + 0x88);
    REFG(void * PTR32, 0x137fa00) = pvVar3;
  }
  else {
    do {
      pvVar3 = pvVar2;
      if (pvVar3 == (undefined *)0x0) goto LAB_0061e43e;
      pvVar2 = *(undefined * PTR32 *)((int)pvVar3 + 0x88);
    } while (*(undefined * PTR32 *)((int)pvVar3 + 0x88) != this);
    *(undefined4 *)((int)pvVar3 + 0x88) = *(undefined4 *)((int)this + 0x88);
  }
LAB_0061e43e: ;
  piVar1 = *(int * PTR32 *)((int)this + 0x84);
  if (piVar1 != (int *)0x0) {
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x80);
  if (piVar1 != (int *)0x0) {
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  return (uint)pvVar3;
}

/* ref: FUN_0061e480 */
uint F_0061e480(unsigned int gen_a0)
{
  GEN_ENTER(0x61e480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x1f0);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x1f0) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1d0);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x1d0) = 0;
  }
  F_0061e400((undefined *)((int)this + 0xac));
  uVar2 = F_0061e400((undefined *)((int)this + 4));
  return uVar2;
}

/* ref: FUN_0061e4d0 */
uint F_0061e4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61e4d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  return param_1 * 4 + param_3 * 0xc + 0x20;
}

/* ref: Client::Graphics::Render::Material::vf1 */
uint F_0061e4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x61e4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  if (*(short *)(this + 0x1c) != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x18) + 4 + (uint)uVar4 * 0xc)));
      uVar3 = 0;
      if (iVar1 != 0) {
        uVar3 = F_0050c620(iVar1,0,0);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 4 + (uint)uVar4 * 0xc))) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(this + 0x1c));
  }
  piVar2 = *(int * PTR32 *)(this + 0x14);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)(this + 0x14) = 0;
  }
  return uVar3;
}

/* ref: FUN_0061e550 */
byte F_0061e550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61e550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 < *(ushort *)((int)this + 0x1c)) {
    iVar2 = param_1 * 0xc;
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 4 + iVar2)));
    if (iVar1 != 0) {
      F_0050c620(iVar1,0,0);
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 4 + iVar2))) = 0;
    }
    if (param_2 != 0) {
      uVar3 = F_00513f60(param_2,0,0);
      *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 4 + iVar2))) = uVar3;
    }
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Render::Model::vf1 */
uint F_0061e5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x61e5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0061e5f0 */
uint F_0061e5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61e5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x18);
  if (iVar1 == 0) {
    return 0;
  }
  return *((int *)GEN_TOP((*(int *)(iVar1 + 0xc4) + (uint)(ushort)param_1 * 4))) + 8 + *(int *)(iVar1 + 0xa8);
}

/* ref: FUN_0061e640 */
uint F_0061e640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61e640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x18);
  if (iVar1 == 0) {
    return 0;
  }
  return *((int *)GEN_TOP((*(int *)(iVar1 + 0xdc) + (uint)(ushort)param_1 * 0x10))) + 8 +
         *(int *)(iVar1 + 0xa8);
}

/* ref: FUN_0061e670 */
uint F_0061e670(unsigned int gen_a0)
{
  GEN_ENTER(0x61e670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x18) != 0) {
    iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0xa8)));
    uVar1 = *((ushort *)GEN_TOP((*(int *)(iVar4 + 4) + 0x12 + iVar4)));
    uVar3 = (uint)uVar1;
    if (uVar1 != 0) {
      iVar4 = 0;
      do {
        if (*((int *)GEN_TOP((*(int *)((int)this + 0x48) + iVar4))) != 0) {
          piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x48) + iVar4)));
          ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
          *((undefined4 *)GEN_TOP((iVar4 + *(int *)((int)this + 0x48)))) = 0;
        }
        iVar4 = iVar4 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar3 = 0;
    if (*(int *)((int)this + 0x48) != 0) {
      uVar5 = F_00406b30(*(int *)((int)this + 0x48));
      uVar3 = (uint)uVar5;
      *(undefined4 *)((int)this + 0x48) = 0;
    }
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  return uVar3;
}

/* ref: FUN_0061e6e0 */
uint F_0061e6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x61e6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x68) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x68));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x68) = 0;
  }
  *(undefined4 *)((int)this + 0x6c) = 0;
  return uVar1;
}

/* ref: FUN_0061e710 */
unsigned int F_0061e710(unsigned int gen_a0)
{
  GEN_ENTER(0x61e710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x120);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x120) = 0;
  }
  return 0;
}

/* ref: FUN_0061e730 */
unsigned int F_0061e730(unsigned int gen_a0)
{
  GEN_ENTER(0x61e730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x120);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x120) = 0;
  }
  return 0;
}

/* ref: Client::Graphics::Render::Camera_CascadeShadow::vf6 */
unsigned int F_0061e750(unsigned int gen_a0)
{
  GEN_ENTER(0x61e750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x120);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x120) = 0;
  }
  return 0;
}

/* ref: FUN_0061e7c0 */
float10 F_0061e7c0(float gen_a0)
{
  GEN_ENTER(0x61e7c0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_0061e7e0 */
float10 F_0061e7e0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x61e7e0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return (float10)((float)GEN_TOF(((float10)param_1 +
                         (float10)param_3 * ((float10)param_2 - (float10)param_1))));
}

/* ref: FUN_0061e800 */
uint F_0061e800(unsigned int gen_a0)
{
  GEN_ENTER(0x61e800u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (param_1 == 0) {
    uVar1 = 0x20;
  }
  return uVar1;
}

/* ref: Client::Graphics::Render::Camera_SpecialShadow::vf6 */
unsigned int F_0061e820(unsigned int gen_a0)
{
  GEN_ENTER(0x61e820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x120);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x120) = 0;
  }
  return 0;
}

/* ref: FUN_0061e840 */
uint F_0061e840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61e840u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x1b0) = *param_2;
  *(undefined4 *)(in_ecx + 0x1b4) = param_2[1];
  *(undefined4 *)(in_ecx + 0x1b8) = param_2[2];
  *(undefined1 *)(in_ecx + 0x1c4) = 1;
  return (uint)param_2;
}

/* ref: FUN_0061e870 */
uint F_0061e870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61e870u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * pfVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_30;
  float local_2c;
  
  fVar2 = (float10)*param_3;
  fVar3 = (float10)*param_2;
  if (*(double *)&REFG(undefined, 0x10ab998) <=
      (double)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)param_3[2] * (float10)param_2[2] +
                                         ((float10)param_3[1] * (float10)param_2[1] + fVar3 * fVar2)
                                         ))))))) {
    fVar3 = (float10)REFG(float, 0x1302c80);
    fVar4 = (float10)REFG(float, 0x1302c84);
    fVar5 = (float10)REFG(float, 0x1302c88);
    if (*(double *)&REFG(undefined, 0x10ab998) <=
        (double)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((fVar3 * fVar2 + fVar4 * (float10)param_3[1]) +
                                           fVar5 * (float10)param_3[2]))))))) {
      local_30 = (float)((float10)REFG(float, 0x1302c74) * (float10)param_3[2] -
                        (float10)REFG(float, 0x1302c78) * (float10)param_3[1]);
      local_2c = (float)(fVar2 * (float10)REFG(float, 0x1302c78) - (float10)REFG(float, 0x1302c70) * (float10)param_3[2]
                        );
      fVar2 = (float10)param_3[1] * (float10)REFG(float, 0x1302c70) - fVar2 * (float10)REFG(float, 0x1302c74);
    }
    else {
      local_30 = (float)((float10)param_3[2] * fVar4 - (float10)param_3[1] * fVar5);
      local_2c = (float)(fVar2 * fVar5 - (float10)param_3[2] * fVar3);
      fVar2 = (float10)param_3[1] * fVar3 - fVar2 * fVar4;
    }
  }
  else {
    local_30 = (float)((float10)param_2[1] * (float10)param_3[2] -
                      (float10)param_3[1] * (float10)param_2[2]);
    local_2c = (float)((float10)param_2[2] * fVar2 - fVar3 * (float10)param_3[2]);
    fVar2 = (float10)param_3[1] * fVar3 - (float10)param_2[1] * fVar2;
  }
  *param_1 = (float)((float10)local_2c * (float10)param_3[2] -
                    (float10)(float)fVar2 * (float10)param_3[1]);
  param_1[1] = (float)((float10)*param_3 * (float10)(float)fVar2 -
                      (float10)local_30 * (float10)param_3[2]);
  param_1[2] = (float)((float10)param_3[1] * (float10)local_30 -
                      (float10)local_2c * (float10)*param_3);
  pfVar1 = (float *)F_0046f390(param_1);
  *param_1 = *pfVar1;
  param_1[1] = pfVar1[1];
  param_1[2] = pfVar1[2];
  return (uint)pfVar1;
}

/* ref: FUN_0061ea70 */
uint F_0061ea70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61ea70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  undefined4 uVar8;
  uint uVar9;
  float10 fVar10;
  
  uVar9 = (uint)gen_fl2bits((float)(REFG(float, 0x10920d0)));
  uVar8 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar1 = *param_3;
  fVar2 = *param_2;
  fVar3 = param_3[1];
  fVar4 = param_2[1];
  fVar5 = param_3[2];
  fVar6 = param_2[2];
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *param_1 = uVar8;
  param_1[5] = uVar8;
  param_1[10] = uVar8;
  param_1[0xe] = (uint)gen_fl2bits(fVar5) ^ uVar9;
  fVar10 = (float10)REFG(double, 0x1088108);
  param_1[0xf] = uVar8;
  param_1[0xc] = (uint)gen_fl2bits(((float)GEN_TOF(((float10)(float)((float10)fVar2 + (float10)fVar1) *
                                          fVar10)))) ^ uVar9;
  fVar7 = (float10)REFG(double, 0x1094890);
  param_1[0xd] = (uint)gen_fl2bits(((float)GEN_TOF((fVar10 * (float10)(float)((float10)fVar4 + (float10)fVar3
                                                                    ))))) ^ uVar9;
  uVar9 = F_0065f3e0(param_1,((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x1092098) /
                                      (float10)(float)((float10)fVar1 - (float10)fVar2)))),
                       ((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x1092098) /
                              (float10)(float)((float10)fVar3 - (float10)fVar4)))),
                       ((float)GEN_TOF((fVar7 / (float10)(float)((float10)fVar5 - (float10)fVar6)))));
  return uVar9;
}

/* ref: Client::Graphics::Render::Camera_OmniShadow::vf4 */
unsigned int F_0061ebc0(void)
{
  GEN_ENTER(0x61ebc0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0061ebd0 */
unsigned int F_0061ebd0(unsigned int gen_a0)
{
  GEN_ENTER(0x61ebd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x120);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x120) = 0;
  }
  return 0;
}

/* ref: Client::Graphics::Render::Camera_OmniShadow::CameraOmniFace::vf4 */
unsigned int F_0061ebf0(void)
{
  GEN_ENTER(0x61ebf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0061ec60 */
unsigned int F_0061ec60(unsigned int gen_a0)
{
  GEN_ENTER(0x61ec60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int local_8;
  
  piVar4 = (int *)((int)this + 0x48);
  local_8 = 0x10;
  do {
    piVar3 = (int *)*piVar4;
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
      *piVar4 = 0;
    }
    piVar3 = piVar4 + -5;
    iVar2 = 4;
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    piVar3 = (int *)piVar4[-6];
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
      piVar4[-6] = 0;
    }
    piVar4 = piVar4 + 0xd;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}

/* ref: FUN_0061ecd0 */
unsigned int F_0061ecd0(unsigned int gen_a0)
{
  GEN_ENTER(0x61ecd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return 0;
}

/* ref: FUN_0061ed40 */
unsigned int F_0061ed40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61ed40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * this;
  int iVar1;
  
  this = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      F_009f93a0(this);
      this = this + 0x48;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (param_2 < 0) {
    if (param_1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*param_1)(param_1,1);
      return 0;
    }
  }
  else if (param_1 != (undefined4 *)0x0) {
    if (param_1[-4] != 0) {
      ((code *)*(gen_code32 *)*param_1)(param_1,3);
      return 0;
    }
    F_00406b30(param_1 + -4);
  }
  return 0;
}

/* ref: FUN_0061edb0 */
byte F_0061edb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61edb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_009f06f0(((undefined *)GEN_TOP(((param_1 & 0xffff) * 0x120 + *(int *)((int)this + 0x4c)))),param_2);
  return 1;
}

/* ref: FUN_0061ede0 */
unsigned int F_0061ede0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x61ede0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x40);
  if (uVar2 != 0) {
    iVar1 = 0;
    do {
      F_009f5610(*(int *)(param_1 + 0x4c) + iVar1,param_2);
      iVar1 = iVar1 + 0x120;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_0061ee70 */
uint F_0061ee70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61ee70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (*(uint *)((int)this + 0x68) != 0) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x5c) + 0x20)));
    do {
      if (*piVar2 == param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x10;
    } while (uVar1 < *(uint *)((int)this + 0x68));
  }
  return 0xffffffff;
}

/* ref: FUN_0061eea0 */
uint F_0061eea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61eea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009f7cb0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_0061eec0 */
uint F_0061eec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61eec0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(int *)&gen_args[1]) == 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
    (*(undefined4 *)(gen_frame + 0x4)) = 5;
    uVar2 = F_009f8d90(this_00,&(*(undefined4 *)(gen_frame + 0x4)));
    return uVar2;
  }
  if ((*(int *)&gen_args[1]) == 1) {
    uVar3 = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40)));
    uVar2 = 0;
    if (uVar3 != 0) {
      iVar4 = 0;
      do {
        uVar2 = F_009f8d90(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) + iVar4))),&(*(int *)&gen_args[1]));
        iVar4 = iVar4 + 0x120;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      return uVar2;
    }
  }
  else {
    uVar2 = (*(int *)&gen_args[1]) - 5;
    if ((uVar2 == 0) && (uVar3 = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))), uVar3 != 0)) {
      iVar4 = 0;
      do {
        iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
        (*(undefined4 *)(gen_frame + 0x8)) = 5;
        uVar2 = F_009f8d90((undefined *)(iVar1 + iVar4),&(*(undefined4 *)(gen_frame + 0x8)));
        iVar4 = iVar4 + 0x120;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return uVar2;
}

/* ref: FUN_0061ef50 */
byte F_0061ef50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61ef50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x48) + param_1 * 4))) = param_2;
  return 1;
}

/* ref: FUN_0061ef70 */
uint F_0061ef70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61ef70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x48) + param_2 * 4)));
}

/* ref: FUN_0061ef80 */
uint F_0061ef80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61ef80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    uVar1 = F_009f0f50(*(undefined * PTR32 *)((int)this + 0x50),param_1);
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_0061efa0 */
uint F_0061efa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61efa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x50) != 0) {
    uVar1 = F_009f1380(*(int *)(in_ecx + 0x50),param_2);
    return uVar1;
  }
  return 0x10a5ff8;
}

/* ref: FUN_0061efc0 */
uint F_0061efc0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61efc0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint in_EAX = 0;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    in_EAX = F_009f10b0(*(int *)(param_1 + 0x50),param_2,param_3);
  }
  return in_EAX;
}

/* ref: FUN_0061efe0 */
uint F_0061efe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61efe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    in_EAX = F_009f1180(*(undefined * PTR32 *)((int)this + 0x50),1,param_1);
  }
  return in_EAX;
}

/* ref: FUN_0061f000 */
unsigned int F_0061f000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61f000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_009f1180(*(undefined * PTR32 *)((int)this + 0x50),0,param_1);
  }
  return 0;
}

/* ref: FUN_0061f020 */
uint F_0061f020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61f020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_009f1270(*(undefined * PTR32 *)((int)this + 0x50),param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = (undefined4)REFG(float, 0x1375ad0);
  param_1[1] = (*(undefined4 *)((char *)&REFG(float, 0x1375ad0) + 4));
  param_1[2] = (undefined4)REFG(float, 0x1375ad8);
  param_1[3] = (*(undefined4 *)((char *)&REFG(float, 0x1375ad8) + 4));
  return (uint)param_1;
}

/* ref: FUN_0061f070 */
uint F_0061f070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61f070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    uVar1 = F_009f0f50(*(undefined * PTR32 *)((int)this + 0x50),param_1);
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_0061f090 */
uint F_0061f090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61f090u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x50) != 0) {
    uVar1 = F_009f1380(*(int *)(in_ecx + 0x50),param_2);
    return uVar1;
  }
  return 0x10a5ca5;
}

/* ref: FUN_0061f0b0 */
uint F_0061f0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61f0b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_009f4180(*(undefined * PTR32 *)((int)this + 0x50),param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_0061f100 */
uint F_0061f100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61f100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_009f4200(*(undefined * PTR32 *)((int)this + 0x50),param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_0061f150 */
uint F_0061f150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61f150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_009f4250(*(undefined * PTR32 *)((int)this + 0x50),param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302c90));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302c94));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302c98));
  return (uint)param_1;
}

/* ref: FUN_0061f1a0 */
uint F_0061f1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61f1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_009f42d0(*(undefined * PTR32 *)((int)this + 0x50),param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302c90));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302c94));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302c98));
  return (uint)param_1;
}

/* ref: FUN_0061f1f0 */
uint F_0061f1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61f1f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_009f1a70(*(undefined * PTR32 *)((int)this + 0x50),param_1,param_2);
    return (uint)param_1;
  }
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_0061f230 */
uint F_0061f230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61f230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_009f1ae0(*(undefined * PTR32 *)((int)this + 0x50),param_1,param_2);
    return (uint)param_1;
  }
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_0061f270 */
unsigned int F_0061f270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x61f270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_009f08b0(*(undefined * PTR32 *)((int)this + 0x50),param_1,param_2,param_3);
    return 0;
  }
  return 0;
}

/* ref: FUN_0061f290 */
unsigned int F_0061f290(unsigned int gen_a0)
{
  GEN_ENTER(0x61f290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x58);
  if (this_00 != (undefined *)0x0) {
    F_009f44d0(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  return 0;
}

/* ref: FUN_0061f2d0 */
unsigned int F_0061f2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61f2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)((int)this + 0x40);
  if (uVar2 != 0) {
    iVar1 = 0;
    do {
      F_009f07d0(((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + iVar1))),param_1,param_2);
      iVar1 = iVar1 + 0x120;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_0061f350 */
byte F_0061f350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61f350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_0061f360 */
uint F_0061f360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61f360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_009f06b0(param_1,*(float *)((int)this + 4),0);
  uVar1 = F_009f06b0(param_1,*(float *)((int)this + 4),1);
  return uVar1;
}

/* ref: FUN_0061f390 */
byte F_0061f390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61f390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_0061f3c0 */
uint F_0061f3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x61f3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 8),0,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_0061f3e0 */
uint F_0061f3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61f3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 8) == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00504f40(*(undefined * PTR32 *)((int)this + 8),(uint)*(ushort *)((int)this + 0xc),
                       (uint)*(ushort *)((int)this + 0xe),param_1);
  if (uVar1 == 0) {
    uVar1 = F_00504ff0(*(undefined * PTR32 *)((int)this + 8),(uint)*(ushort *)((int)this + 0xc),
                         (uint)*(ushort *)((int)this + 0xe),param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_0061f430 */
unsigned int F_0061f430(unsigned int gen_a0)
{
  GEN_ENTER(0x61f430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x80);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  return 0;
}

/* ref: FUN_0061f450 */
byte F_0061f450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61f450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x30);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x30) = param_1;
  return 1;
}

/* ref: Client::Graphics::Render::PostBoneDeformerBase::vf3 */
unsigned int F_0061f480(unsigned int gen_a0)
{
  GEN_ENTER(0x61f480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x30);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x30) = 0;
  }
  return 0;
}

/* ref: FUN_0061f4a0 */
uint F_0061f4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x61f4a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[1] = 1;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x10ab9f8));
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Render::OffscreenRenderingInfo::vf1 */
uint F_0061f4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x61f4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0061f4d0 */
byte F_0061f4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61f4d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 8) = param_2;
  return 1;
}

/* ref: Client::Graphics::Render::OffscreenRenderingInfo::vf4 */
unsigned int F_0061f4e0(void)
{
  GEN_ENTER(0x61f4e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0061f4f0 */
uint F_0061f4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x61f4f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: FUN_0061f500 */
uint F_0061f500(unsigned int gen_a0)
{
  GEN_ENTER(0x61f500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x90) != 0) {
    F_0050c620(*(int *)((int)this + 0x90),0,0);
    *(undefined4 *)((int)this + 0x90) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x8c) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x8c),0,0);
    *(undefined4 *)((int)this + 0x8c) = 0;
  }
  return uVar1;
}

/* ref: FUN_0061f550 */
unsigned int F_0061f550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61f550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  }
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x7c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + param_1 * 4 + 0x7c) = param_2;
  return 0;
}

/* ref: FUN_0061f5b0 */
unsigned int F_0061f5b0(void)
{
  GEN_ENTER(0x61f5b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0061f5d0 */
unsigned int F_0061f5d0(void)
{
  GEN_ENTER(0x61f5d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0061f640 */
uint F_0061f640(unsigned int gen_a0)
{
  GEN_ENTER(0x61f640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x260);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x260) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x240);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x240) = 0;
  }
  F_0061e400((undefined *)((int)this + 0x11c));
  uVar2 = F_0061e400((undefined *)((int)this + 0x74));
  piVar4 = (int *)((int)this + 0x1c);
  iVar3 = 3;
  do {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar4 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar4 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 8);
  if (piVar4 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar2;
}

/* ref: FUN_0061f710 */
uint F_0061f710(unsigned int gen_a0)
{
  GEN_ENTER(0x61f710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x28c) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x28c),0,0);
    *(undefined4 *)((int)this + 0x28c) = 0;
  }
  return uVar1;
}

/* ref: FUN_0061f740 */
uint F_0061f740(unsigned int gen_a0)
{
  GEN_ENTER(0x61f740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x70) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x70),0,0);
    *(undefined4 *)((int)this + 0x70) = 0;
  }
  return uVar1;
}

/* ref: Client::Graphics::Render::ModelRenderer::vf1 */
unsigned int F_0061f760(void)
{
  GEN_ENTER(0x61f760u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Render::BGLocalCullingRenderObject::vf1 */
uint F_0061f790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x61f790u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0061f7a0 */
uint F_0061f7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x61f7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = param_1 * param_2 + param_3;
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xc) + (uVar2 >> 5) * 4)));
  uVar2 = 1 << ((byte)uVar2 & 0x1f);
  *puVar1 = *puVar1 | uVar2;
  return uVar2;
}

/* ref: FUN_0061f7d0 */
uint F_0061f7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x61f7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 * param_2 + param_3;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + (uVar1 >> 5) * 4))) & 1 << ((byte)uVar1 & 0x1f);
}

/* ref: FUN_0061f800 */
uint F_0061f800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61f800u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((*(uint *)&REFG(undefined, 0x1487c10) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1487c10) = *(uint *)&REFG(undefined, 0x1487c10) | 1;
    *(float *)&REFG(undefined, 0x1487c00) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1487c00), REFG(float, 0x1088068));
    *(float *)&REFG(undefined, 0x1487c04) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1487c04), REFG(float, 0x1088068));
    *(float *)&REFG(undefined, 0x1487c08) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1487c08), REFG(float, 0x1088068));
    *(float *)&REFG(undefined, 0x1487c0c) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1487c0c), REFG(float, 0x1088068));
  }
  fVar6 = (param_3[4] + *param_3) * *(float *)&REFG(undefined, 0x1487c00);
  fVar7 = (param_3[5] + param_3[1]) * *(float *)&REFG(undefined, 0x1487c04);
  fVar8 = (param_3[6] + param_3[2]) * *(float *)&REFG(undefined, 0x1487c08);
  fVar1 = param_3[4] - fVar6;
  fVar3 = param_3[5] - fVar7;
  fVar5 = param_3[6] - fVar8;
  fVar2 = ((fVar8 * param_2[8] + param_2[0xc]) + fVar7 * param_2[4]) + fVar6 * *param_2;
  fVar4 = ((fVar8 * param_2[9] + param_2[0xd]) + fVar7 * param_2[5]) + fVar6 * param_2[1];
  fVar7 = ((fVar8 * param_2[10] + param_2[0xe]) + fVar7 * param_2[6]) + fVar6 * param_2[2];
  fVar6 = *param_2;
  *in_ecx = fVar6;
  in_ecx[1] = fVar6;
  in_ecx[2] = fVar6;
  in_ecx[3] = fVar6;
  fVar6 = param_2[1];
  in_ecx[4] = fVar6;
  in_ecx[5] = fVar6;
  in_ecx[6] = fVar6;
  in_ecx[7] = fVar6;
  fVar6 = param_2[2];
  in_ecx[8] = fVar6;
  in_ecx[9] = fVar6;
  in_ecx[10] = fVar6;
  in_ecx[0xb] = fVar6;
  fVar6 = param_2[4];
  in_ecx[0xc] = fVar6;
  in_ecx[0xd] = fVar6;
  in_ecx[0xe] = fVar6;
  in_ecx[0xf] = fVar6;
  fVar6 = param_2[5];
  in_ecx[0x10] = fVar6;
  in_ecx[0x11] = fVar6;
  in_ecx[0x12] = fVar6;
  in_ecx[0x13] = fVar6;
  fVar6 = param_2[6];
  in_ecx[0x14] = fVar6;
  in_ecx[0x15] = fVar6;
  in_ecx[0x16] = fVar6;
  in_ecx[0x17] = fVar6;
  fVar6 = param_2[8];
  in_ecx[0x18] = fVar6;
  in_ecx[0x19] = fVar6;
  in_ecx[0x1a] = fVar6;
  in_ecx[0x1b] = fVar6;
  fVar6 = param_2[9];
  in_ecx[0x1c] = fVar6;
  in_ecx[0x1d] = fVar6;
  in_ecx[0x1e] = fVar6;
  in_ecx[0x1f] = fVar6;
  fVar6 = param_2[10];
  in_ecx[0x20] = fVar6;
  in_ecx[0x21] = fVar6;
  in_ecx[0x22] = fVar6;
  in_ecx[0x23] = fVar6;
  in_ecx[0x24] = fVar2;
  in_ecx[0x25] = fVar2;
  in_ecx[0x26] = fVar2;
  in_ecx[0x27] = fVar2;
  in_ecx[0x28] = fVar4;
  in_ecx[0x29] = fVar4;
  in_ecx[0x2a] = fVar4;
  in_ecx[0x2b] = fVar4;
  in_ecx[0x2c] = fVar7;
  in_ecx[0x2d] = fVar7;
  in_ecx[0x2e] = fVar7;
  in_ecx[0x2f] = fVar7;
  in_ecx[0x30] = fVar1;
  in_ecx[0x31] = fVar1;
  in_ecx[0x32] = fVar1;
  in_ecx[0x33] = fVar1;
  in_ecx[0x34] = fVar3;
  in_ecx[0x35] = fVar3;
  in_ecx[0x36] = fVar3;
  in_ecx[0x37] = fVar3;
  in_ecx[0x38] = fVar5;
  in_ecx[0x39] = fVar5;
  in_ecx[0x3a] = fVar5;
  in_ecx[0x3b] = fVar5;
  return (uint)param_2;
}

/* ref: FUN_0061f990 */
byte F_0061f990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61f990u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float fVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  undefined1 auVar27 [16];
  
  fVar10 = *param_1;
  fVar11 = param_1[1];
  fVar12 = param_1[2];
  fVar13 = param_1[3];
  fVar2 = param_1[0x10];
  fVar3 = param_1[0x11];
  fVar4 = param_1[0x12];
  fVar5 = param_1[0x13];
  fVar14 = param_1[8];
  fVar15 = param_1[9];
  fVar16 = param_1[10];
  fVar17 = param_1[0xb];
  fVar18 = param_1[0xc];
  fVar19 = param_1[0xd];
  fVar20 = param_1[0xe];
  fVar21 = param_1[0xf];
  fVar6 = param_1[0x18];
  fVar7 = param_1[0x19];
  fVar8 = param_1[0x1a];
  fVar9 = param_1[0x1b];
  fVar22 = param_1[0x1c];
  fVar23 = param_1[0x1d];
  fVar24 = param_1[0x1e];
  fVar25 = param_1[0x1f];
  (*(undefined4 *)((char *)&auVar27 + 4)) =
       -(uint)((gen_bits2f((uint)gen_fl2bits((param_2[1] * fVar3 + param_2[5] * fVar7) +
                                             param_2[9] * fVar23) & *(uint *)&REFG(undefined, 0x10aba64)) *
                param_2[0x31] +
               gen_bits2f((uint)gen_fl2bits((param_2[0xd] * fVar3 + param_2[0x11] * fVar7) +
                                            param_2[0x15] * fVar23) & *(uint *)&REFG(undefined, 0x10aba64)) *
               param_2[0x35]) +
               gen_bits2f((uint)gen_fl2bits((param_2[0x19] * fVar3 + param_2[0x1d] * fVar7) +
                                            param_2[0x21] * fVar23) & *(uint *)&REFG(undefined, 0x10aba64)) *
               param_2[0x39] <
              ((param_2[0x25] * fVar3 + param_1[0x15]) + param_2[0x29] * fVar7) +
              param_2[0x2d] * fVar23);
  (*(undefined4 *)((char *)&auVar27 + 0)) =
       -(uint)((gen_bits2f((uint)gen_fl2bits((*param_2 * fVar2 + param_2[4] * fVar6) +
                                             param_2[8] * fVar22) & *(uint *)&REFG(undefined, 0x10aba60)) *
                param_2[0x30] +
               gen_bits2f((uint)gen_fl2bits((param_2[0xc] * fVar2 + param_2[0x10] * fVar6) +
                                            param_2[0x14] * fVar22) & *(uint *)&REFG(undefined, 0x10aba60)) *
               param_2[0x34]) +
               gen_bits2f((uint)gen_fl2bits((param_2[0x18] * fVar2 + param_2[0x1c] * fVar6) +
                                            param_2[0x20] * fVar22) & *(uint *)&REFG(undefined, 0x10aba60)) *
               param_2[0x38] <
              ((param_2[0x24] * fVar2 + param_1[0x14]) + param_2[0x28] * fVar6) +
              param_2[0x2c] * fVar22);
  (*(undefined4 *)((char *)&auVar27 + 8)) =
       -(uint)((gen_bits2f((uint)gen_fl2bits((param_2[2] * fVar4 + param_2[6] * fVar8) +
                                             param_2[10] * fVar24) & *(uint *)&REFG(undefined, 0x10aba68)) *
                param_2[0x32] +
               gen_bits2f((uint)gen_fl2bits((param_2[0xe] * fVar4 + param_2[0x12] * fVar8) +
                                            param_2[0x16] * fVar24) & *(uint *)&REFG(undefined, 0x10aba68)) *
               param_2[0x36]) +
               gen_bits2f((uint)gen_fl2bits((param_2[0x1a] * fVar4 + param_2[0x1e] * fVar8) +
                                            param_2[0x22] * fVar24) & *(uint *)&REFG(undefined, 0x10aba68)) *
               param_2[0x3a] <
              ((param_2[0x26] * fVar4 + param_1[0x16]) + param_2[0x2a] * fVar8) +
              param_2[0x2e] * fVar24);
  (*(undefined4 *)((char *)&auVar27 + 12)) =
       -(uint)((gen_bits2f((uint)gen_fl2bits((param_2[3] * fVar5 + param_2[7] * fVar9) +
                                             param_2[0xb] * fVar25) & *(uint *)&REFG(undefined, 0x10aba6c)) *
                param_2[0x33] +
               gen_bits2f((uint)gen_fl2bits((param_2[0xf] * fVar5 + param_2[0x13] * fVar9) +
                                            param_2[0x17] * fVar25) & *(uint *)&REFG(undefined, 0x10aba6c)) *
               param_2[0x37]) +
               gen_bits2f((uint)gen_fl2bits((param_2[0x1b] * fVar5 + param_2[0x1f] * fVar9) +
                                            param_2[0x23] * fVar25) & *(uint *)&REFG(undefined, 0x10aba6c)) *
               param_2[0x3b] <
              ((param_2[0x27] * fVar5 + param_1[0x17]) + param_2[0x2b] * fVar9) +
              param_2[0x2f] * fVar25);
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)((gen_bits2f((uint)gen_fl2bits((param_2[1] * fVar11 + param_2[5] * fVar15) +
                                                       param_2[9] * fVar19) & *(uint *)&REFG(undefined, 0x10aba64)
                                    ) * param_2[0x31] +
                         gen_bits2f((uint)gen_fl2bits((param_2[0xd] * fVar11 +
                                                      param_2[0x11] * fVar15) +
                                                      param_2[0x15] * fVar19) &
                                    *(uint *)&REFG(undefined, 0x10aba64)) * param_2[0x35]) +
                         gen_bits2f((uint)gen_fl2bits((param_2[0x19] * fVar11 +
                                                      param_2[0x1d] * fVar15) +
                                                      param_2[0x21] * fVar19) &
                                    *(uint *)&REFG(undefined, 0x10aba64)) * param_2[0x39] <
                        ((param_2[0x25] * fVar11 + param_1[5]) + param_2[0x29] * fVar15) +
                        param_2[0x2d] * fVar19);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)((gen_bits2f((uint)gen_fl2bits((*param_2 * fVar10 + param_2[4] * fVar14) +
                                                       param_2[8] * fVar18) & *(uint *)&REFG(undefined, 0x10aba60)
                                    ) * param_2[0x30] +
                         gen_bits2f((uint)gen_fl2bits((param_2[0xc] * fVar10 +
                                                      param_2[0x10] * fVar14) +
                                                      param_2[0x14] * fVar18) &
                                    *(uint *)&REFG(undefined, 0x10aba60)) * param_2[0x34]) +
                         gen_bits2f((uint)gen_fl2bits((param_2[0x18] * fVar10 +
                                                      param_2[0x1c] * fVar14) +
                                                      param_2[0x20] * fVar18) &
                                    *(uint *)&REFG(undefined, 0x10aba60)) * param_2[0x38] <
                        ((param_2[0x24] * fVar10 + param_1[4]) + param_2[0x28] * fVar14) +
                        param_2[0x2c] * fVar18);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)((gen_bits2f((uint)gen_fl2bits((param_2[2] * fVar12 + param_2[6] * fVar16) +
                                                       param_2[10] * fVar20) &
                                     *(uint *)&REFG(undefined, 0x10aba68)) * param_2[0x32] +
                         gen_bits2f((uint)gen_fl2bits((param_2[0xe] * fVar12 +
                                                      param_2[0x12] * fVar16) +
                                                      param_2[0x16] * fVar20) &
                                    *(uint *)&REFG(undefined, 0x10aba68)) * param_2[0x36]) +
                         gen_bits2f((uint)gen_fl2bits((param_2[0x1a] * fVar12 +
                                                      param_2[0x1e] * fVar16) +
                                                      param_2[0x22] * fVar20) &
                                    *(uint *)&REFG(undefined, 0x10aba68)) * param_2[0x3a] <
                        ((param_2[0x26] * fVar12 + param_1[6]) + param_2[0x2a] * fVar16) +
                        param_2[0x2e] * fVar20);
  (*(undefined4 *)((char *)&auVar1 + 12)) =
       -(uint)((gen_bits2f((uint)gen_fl2bits((param_2[3] * fVar13 + param_2[7] * fVar17) +
                                             param_2[0xb] * fVar21) & *(uint *)&REFG(undefined, 0x10aba6c)) *
                param_2[0x33] +
               gen_bits2f((uint)gen_fl2bits((param_2[0xf] * fVar13 + param_2[0x13] * fVar17) +
                                            param_2[0x17] * fVar21) & *(uint *)&REFG(undefined, 0x10aba6c)) *
               param_2[0x37]) +
               gen_bits2f((uint)gen_fl2bits((param_2[0x1b] * fVar13 + param_2[0x1f] * fVar17) +
                                            param_2[0x23] * fVar21) & *(uint *)&REFG(undefined, 0x10aba6c)) *
               param_2[0x3b] <
              ((param_2[0x27] * fVar13 + param_1[7]) + param_2[0x2b] * fVar17) +
              param_2[0x2f] * fVar21);
  undefined1 gen_vt0[16]; gen_v16_or(gen_vt0, &(auVar27), &(auVar1));
  iVar26 = gen_movmskps(gen_vt0);
  return iVar26 == 0;
}

/* ref: Client::Graphics::Render::BGInstancingRenderObject::vf1 */
uint F_0061fdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x61fdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0061fdc0 */
uint F_0061fdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61fdc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x137fa50) + (uint)*(byte *)(param_1 + 0x1c) * 4))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_0061fde0 */
uint F_0061fde0(void)
{
  GEN_ENTER(0x61fde0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar1 = F_00c4f2dd();
    uVar3 = uVar2 + 4;
    *(float *)((int)&REFG(float, 0x1379d80) + uVar2) =
         (float)((float10)(int)uVar1 / (float10)*(double *)&REFG(undefined, 0x10920e0));
    uVar2 = uVar3;
  } while (uVar3 < 0x400);
  return uVar1;
}

/* ref: FUN_0061fe10 */
float F_0061fe10(unsigned int gen_a0)
{
  GEN_ENTER(0x61fe10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return gen_bits2f((&REFG(float, 0x1379d80))[(int)(param_1 & 0xff)]);
}

/* ref: FUN_0061fe30 */
float10 F_0061fe30(unsigned int gen_a0)
{
  GEN_ENTER(0x61fe30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = (param_1 & 0xffff) >> 8;
  return (float10)((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((&REFG(float, 0x1379d80))[(int)(uVar1)]))) +
                         (float10)((float)GEN_TOF(((float10)(param_1 & 0xff) *
                                         (float10)*(double *)&REFG(double, 0x10a5850)))) *
                         (((float10)GEN_TOD(gen_bits2f((&REFG(float, 0x1379d80))[(int)(uVar1 + 1 & 0xff)]))) -
                         ((float10)GEN_TOD(gen_bits2f((&REFG(float, 0x1379d80))[(int)(uVar1)])))))));
}

/* ref: FUN_0061fe90 */
unsigned int F_0061fe90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x61fe90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float * pfVar29;
  float * pfVar30;
  int iVar31;
  
  fVar17 = *param_4;
  fVar18 = param_4[1];
  fVar19 = param_4[2];
  fVar20 = param_4[4];
  fVar21 = param_4[5];
  fVar22 = param_4[6];
  fVar23 = param_4[8];
  fVar24 = param_4[9];
  fVar25 = param_4[10];
  fVar26 = param_4[0xc];
  fVar27 = param_4[0xd];
  fVar28 = param_4[0xe];
  if (param_2 != 0) {
    pfVar30 = (float *)(param_1 + 0x20);
    pfVar29 = (float *)(param_3 + 0x20);
    iVar31 = param_2;
    do {
      fVar1 = pfVar29[-8];
      fVar2 = pfVar29[-7];
      fVar3 = pfVar29[-6];
      fVar4 = pfVar29[-5];
      fVar5 = pfVar29[-4];
      fVar6 = pfVar29[-3];
      fVar7 = pfVar29[-2];
      fVar8 = pfVar29[-1];
      fVar9 = *pfVar29;
      fVar10 = pfVar29[1];
      fVar11 = pfVar29[2];
      fVar12 = pfVar29[3];
      fVar13 = pfVar29[4];
      fVar14 = pfVar29[5];
      fVar15 = pfVar29[6];
      fVar16 = pfVar29[7];
      pfVar30[-4] = ((fVar2 * fVar20 + fVar1 * fVar17) + fVar3 * fVar23) + fVar4 * fVar26;
      pfVar30[-3] = ((fVar6 * fVar20 + fVar5 * fVar17) + fVar7 * fVar23) + fVar8 * fVar26;
      pfVar30[-2] = ((fVar10 * fVar20 + fVar9 * fVar17) + fVar11 * fVar23) + fVar12 * fVar26;
      pfVar30[-1] = ((fVar14 * fVar20 + fVar13 * fVar17) + fVar15 * fVar23) + fVar16 * fVar26;
      *pfVar30 = ((fVar2 * fVar21 + fVar1 * fVar18) + fVar3 * fVar24) + fVar4 * fVar27;
      pfVar30[1] = ((fVar6 * fVar21 + fVar5 * fVar18) + fVar7 * fVar24) + fVar8 * fVar27;
      pfVar30[2] = ((fVar10 * fVar21 + fVar9 * fVar18) + fVar11 * fVar24) + fVar12 * fVar27;
      pfVar30[3] = ((fVar14 * fVar21 + fVar13 * fVar18) + fVar15 * fVar24) + fVar16 * fVar27;
      pfVar30[4] = ((fVar2 * fVar22 + fVar1 * fVar19) + fVar3 * fVar25) + fVar4 * fVar28;
      pfVar30[5] = ((fVar6 * fVar22 + fVar5 * fVar19) + fVar7 * fVar25) + fVar8 * fVar28;
      pfVar30[6] = ((fVar10 * fVar22 + fVar9 * fVar19) + fVar11 * fVar25) + fVar12 * fVar28;
      pfVar30[7] = ((fVar14 * fVar22 + fVar13 * fVar19) + fVar15 * fVar25) + fVar16 * fVar28;
      pfVar29 = pfVar29 + 0x10;
      pfVar30 = pfVar30 + 0x20;
      iVar31 = iVar31 + -1;
    } while (iVar31 != 0);
  }
  return 0;
}

/* ref: FUN_0062002e */
unsigned int F_0062002e(void)
{
  GEN_ENTER(0x62002eu, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: Client::Graphics::Render::TerrainRenderObject::vf1 */
uint F_00620040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x620040u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00620050 */
byte F_00620050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x620050u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((*(uint *)&REFG(undefined, 0x1487c50) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1487c50) = *(uint *)&REFG(undefined, 0x1487c50) | 1;
    *(float *)&REFG(undefined, 0x1487c40) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1487c40), REFG(float, 0x1088068));
    *(float *)&REFG(undefined, 0x1487c44) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1487c44), REFG(float, 0x1088068));
    *(float *)&REFG(undefined, 0x1487c48) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1487c48), REFG(float, 0x1088068));
    *(float *)&REFG(undefined, 0x1487c4c) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1487c4c), REFG(float, 0x1088068));
  }
  fVar4 = (param_2[4] + *param_2) * *(float *)&REFG(undefined, 0x1487c40);
  fVar5 = (param_2[5] + param_2[1]) * *(float *)&REFG(undefined, 0x1487c44);
  fVar6 = (param_2[6] + param_2[2]) * *(float *)&REFG(undefined, 0x1487c48);
  fVar7 = param_2[4] - fVar4;
  fVar8 = param_2[5] - fVar5;
  fVar9 = param_2[6] - fVar6;
  (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)((gen_bits2f((uint)gen_fl2bits(param_1[1]) & *(uint *)&REFG(undefined, 0x10aba84)) * fVar7
                         + gen_bits2f((uint)gen_fl2bits(param_1[9]) & *(uint *)&REFG(undefined, 0x10aba84)) *
                           fVar8) +
                         gen_bits2f((uint)gen_fl2bits(param_1[0xd]) & *(uint *)&REFG(undefined, 0x10aba84)) *
                         fVar9 < ((param_1[1] * fVar4 + param_1[5]) + param_1[9] * fVar5) +
                                 param_1[0xd] * fVar6);
  (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)((gen_bits2f((uint)gen_fl2bits(*param_1) & *(uint *)&REFG(undefined, 0x10aba80)) * fVar7 +
                         gen_bits2f((uint)gen_fl2bits(param_1[8]) & *(uint *)&REFG(undefined, 0x10aba80)) * fVar8)
                         + gen_bits2f((uint)gen_fl2bits(param_1[0xc]) & *(uint *)&REFG(undefined, 0x10aba80)) *
                           fVar9 <
                        ((*param_1 * fVar4 + param_1[4]) + param_1[8] * fVar5) +
                        param_1[0xc] * fVar6);
  (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)((gen_bits2f((uint)gen_fl2bits(param_1[2]) & *(uint *)&REFG(undefined, 0x10aba88)) * fVar7
                         + gen_bits2f((uint)gen_fl2bits(param_1[10]) & *(uint *)&REFG(undefined, 0x10aba88)) *
                           fVar8) +
                         gen_bits2f((uint)gen_fl2bits(param_1[0xe]) & *(uint *)&REFG(undefined, 0x10aba88)) *
                         fVar9 < ((param_1[2] * fVar4 + param_1[6]) + param_1[10] * fVar5) +
                                 param_1[0xe] * fVar6);
  (*(undefined4 *)((char *)&auVar2 + 12)) =
       -(uint)((gen_bits2f((uint)gen_fl2bits(param_1[3]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar7 +
               gen_bits2f((uint)gen_fl2bits(param_1[0xb]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar8) +
               gen_bits2f((uint)gen_fl2bits(param_1[0xf]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar9 <
              ((param_1[3] * fVar4 + param_1[7]) + param_1[0xb] * fVar5) + param_1[0xf] * fVar6);
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)((gen_bits2f((uint)gen_fl2bits(param_1[0x11]) & *(uint *)&REFG(undefined, 0x10aba84)) *
                          fVar7 + gen_bits2f((uint)gen_fl2bits(param_1[0x19]) &
                                             *(uint *)&REFG(undefined, 0x10aba84)) * fVar8) +
                         gen_bits2f((uint)gen_fl2bits(param_1[0x1d]) & *(uint *)&REFG(undefined, 0x10aba84)) *
                         fVar9 < ((param_1[0x11] * fVar4 + param_1[0x15]) + param_1[0x19] * fVar5) +
                                 param_1[0x1d] * fVar6);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)((gen_bits2f((uint)gen_fl2bits(param_1[0x10]) & *(uint *)&REFG(undefined, 0x10aba80)) *
                          fVar7 + gen_bits2f((uint)gen_fl2bits(param_1[0x18]) &
                                             *(uint *)&REFG(undefined, 0x10aba80)) * fVar8) +
                         gen_bits2f((uint)gen_fl2bits(param_1[0x1c]) & *(uint *)&REFG(undefined, 0x10aba80)) *
                         fVar9 < ((param_1[0x10] * fVar4 + param_1[0x14]) + param_1[0x18] * fVar5) +
                                 param_1[0x1c] * fVar6);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)((gen_bits2f((uint)gen_fl2bits(param_1[0x12]) & *(uint *)&REFG(undefined, 0x10aba88)) *
                          fVar7 + gen_bits2f((uint)gen_fl2bits(param_1[0x1a]) &
                                             *(uint *)&REFG(undefined, 0x10aba88)) * fVar8) +
                         gen_bits2f((uint)gen_fl2bits(param_1[0x1e]) & *(uint *)&REFG(undefined, 0x10aba88)) *
                         fVar9 < ((param_1[0x12] * fVar4 + param_1[0x16]) + param_1[0x1a] * fVar5) +
                                 param_1[0x1e] * fVar6);
  (*(undefined4 *)((char *)&auVar1 + 12)) =
       -(uint)((gen_bits2f((uint)gen_fl2bits(param_1[0x13]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar7 +
               gen_bits2f((uint)gen_fl2bits(param_1[0x1b]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar8) +
               gen_bits2f((uint)gen_fl2bits(param_1[0x1f]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar9 <
              ((param_1[0x13] * fVar4 + param_1[0x17]) + param_1[0x1b] * fVar5) +
              param_1[0x1f] * fVar6);
  undefined1 gen_vt0[16]; gen_v16_or(gen_vt0, &(auVar2), &(auVar1));
  iVar3 = gen_movmskps(gen_vt0);
  return iVar3 == 0;
}

/* ref: Client::Graphics::Render::TerrainRenderer::vf1 */
unsigned int F_006201e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6201e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x3a68) = 0;
  return 0;
}

/* ref: FUN_006201f0 */
uint F_006201f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6201f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  int iVar3;
  
  iVar1 = (int)this + 0x11fd;
  iVar3 = 0x400;
  do {
    *(undefined2 *)(iVar1 + -1) = 0x202;
    iVar1 = iVar1 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pvVar2 = F_00c48350((undefined *)((int)this + 0x1fc),0,0x1000);
  return (uint)pvVar2;
}

/* ref: FUN_00620230 */
byte F_00620230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x620230u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x18))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))));
  if ((char)uVar1 == '\0') {
    return 0;
  }
  return ((*(undefined4 * PTR32 *)&gen_args[1])[1] & (*(uint *)&gen_args[0])) != (*(uint *)&gen_args[0]);
}

/* ref: FUN_00620290 */
float10 F_00620290(float gen_a0)
{
  GEN_ENTER(0x620290u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = ((float10)GEN_TOD(fsin(
                        (float10)(float)((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x10912a8)))));
  return (float10)(float)fVar1;
}

/* ref: FUN_006202b0 */
uint F_006202b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6202b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x80);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  if (REFG(int * PTR32, 0x137fab0) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137fab0) + 0xc))))(REFG(int * PTR32, 0x137fab0));
    if (REFG(int * PTR32, 0x137fab0)[1] == 0) {
      REFG(int * PTR32, 0x137fab0) = (int *)0x0;
    }
  }
  if (REFG(int * PTR32, 0x137faac) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faac) + 0xc))))(REFG(int * PTR32, 0x137faac));
    if (REFG(int * PTR32, 0x137faac)[1] == 0) {
      REFG(int * PTR32, 0x137faac) = (int *)0x0;
    }
  }
  if (REFG(int * PTR32, 0x137faa8) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faa8) + 0xc))))(REFG(int * PTR32, 0x137faa8));
    if (REFG(int * PTR32, 0x137faa8)[1] == 0) {
      REFG(int * PTR32, 0x137faa8) = (int *)0x0;
    }
  }
  if (REFG(int * PTR32, 0x137faa4) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faa4) + 0xc))))(REFG(int * PTR32, 0x137faa4));
    if (REFG(int * PTR32, 0x137faa4)[1] == 0) {
      REFG(int * PTR32, 0x137faa4) = (int *)0x0;
    }
  }
  if (REFG(int * PTR32, 0x137faa0) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faa0) + 0xc))))(REFG(int * PTR32, 0x137faa0));
    if (REFG(int * PTR32, 0x137faa0)[1] == 0) {
      REFG(int * PTR32, 0x137faa0) = (int *)0x0;
    }
  }
  if (REFG(int * PTR32, 0x137fa9c) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137fa9c) + 0xc))))(REFG(int * PTR32, 0x137fa9c));
    if (REFG(int * PTR32, 0x137fa9c)[1] == 0) {
      REFG(int * PTR32, 0x137fa9c) = (int *)0x0;
    }
  }
  if (*(int *)((int)this + 4) == 0) {
    uVar2 = 0;
    if (REFG(int * PTR32, 0x137fa98) != (int *)0x0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137fa98) + 0xc))))(REFG(int * PTR32, 0x137fa98));
      if (REFG(int * PTR32, 0x137fa98)[1] == 0) {
        REFG(int * PTR32, 0x137fa98) = (int *)0x0;
      }
    }
  }
  else {
    uVar2 = *(int *)((int)this + 4) - 1;
    if ((uVar2 < 2) && (REFG(int * PTR32, 0x137fa0c) != (int *)0x0)) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137fa0c) + 0xc))))(REFG(int * PTR32, 0x137fa0c));
      if (REFG(int * PTR32, 0x137fa0c)[1] == 0) {
        REFG(int * PTR32, 0x137fa0c) = (int *)0x0;
      }
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar2;
}

/* ref: FUN_00620400 */
uint F_00620400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x620400u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x80);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)(param_1 + 0x80) = param_2;
  *(undefined4 *)(param_1 + 0x7c) = *param_3;
  *(float *)(param_1 + 0x84) = param_4;
  return (uint)param_3;
}

/* ref: FUN_00620460 */
uint F_00620460(unsigned int gen_a0)
{
  GEN_ENTER(0x620460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int local_8;
  
  if (*(int *)((int)this + 4) != 0) {
    F_0050c620(*(int *)((int)this + 4),0,0);
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = F_0050c620(*(int *)((int)this + 8),0,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  piVar3 = (int *)((int)this + 0x3c);
  local_8 = 2;
  do {
    piVar1 = (int *)piVar3[-2];
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      piVar3[-2] = 0;
    }
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 0x1d0);
  if (piVar3 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x1d0) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0xa0);
  if (piVar3 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0xa0) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x30);
  if (piVar3 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  piVar3 = (int *)((int)this + 0x20);
  local_8 = 2;
  do {
    piVar1 = (int *)piVar3[2];
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      piVar3[2] = 0;
    }
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar1 = (int *)piVar3[-2];
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      piVar3[-2] = 0;
    }
    piVar1 = (int *)piVar3[-4];
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      piVar3[-4] = 0;
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar3 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return uVar2;
}

/* ref: FUN_00620580 */
unsigned int F_00620580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x620580u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)(param_1 + 0x34) = param_2;
  if (param_3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_3 + 8))(param_3);
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)(param_1 + 0x38) = param_3;
  *(float *)(param_1 + 0x274) = param_4;
  *(float *)(param_1 + 0x270) = param_5;
  return 0;
}

/* ref: FUN_006205f0 */
unsigned int F_006205f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x6205f0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)(param_1 + 0x3c) = param_2;
  if (param_3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_3 + 8))(param_3);
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)(param_1 + 0x40) = param_3;
  *(float *)(param_1 + 0x278) = param_4;
  return 0;
}

/* ref: FUN_00620650 */
float10 F_00620650(float gen_a0)
{
  GEN_ENTER(0x620650u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = ((float10)GEN_TOD(fsin(
                        (float10)(float)((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x10912a8)))));
  return (float10)(float)((float10)(float)fVar1 * (float10)(float)fVar1);
}

/* ref: FUN_00620680 */
uint F_00620680(unsigned int gen_a0)
{
  GEN_ENTER(0x620680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int local_8;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x3c);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x38);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x2c);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x24);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x30);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x28);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x20);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  piVar2 = (int *)((int)this + 0x14);
  local_8 = 3;
  do {
    if (*piVar2 != 0) {
      F_0050c620(*piVar2,0,0);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (*(int *)((int)this + 4) != 0) {
    F_0050c620(*(int *)((int)this + 4),0,0);
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    F_0050c620(*(int *)((int)this + 8),0,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_0050c620(*(int *)((int)this + 0xc),0,0);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x10),0,0);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return uVar1;
}

/* ref: FUN_006207a0 */
uint F_006207a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6207a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10aba94));
  F_00c48350((undefined *)((int)this + 4),0,0x8c);
  return (uint)this;
}

/* ref: Client::Graphics::Render::ShadowMaskRenderer::vf1 */
unsigned int F_006207e0(void)
{
  GEN_ENTER(0x6207e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_006207f0 */
uint F_006207f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6207f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10aba9c));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00620800 */
unsigned int F_00620800(unsigned int gen_a0)
{
  GEN_ENTER(0x620800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_00620820 */
unsigned int F_00620820(unsigned int gen_a0)
{
  GEN_ENTER(0x620820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int local_8;
  
  piVar3 = (int *)((int)this + 0x24);
  local_8 = 4;
  do {
    piVar1 = (int *)piVar3[-5];
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      piVar3[-5] = 0;
    }
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 0x40);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x44);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x20);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x38);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x3c);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x48);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x4c);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x50);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x54);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x54) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x58);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x5c);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x8c);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x8c) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x60);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  piVar3 = (int *)((int)this + 100);
  local_8 = 4;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 0x74);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x78);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  piVar3 = (int *)((int)this + 0x7c);
  local_8 = 4;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 0x90);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x90) = 0;
  }
  piVar3 = (int *)((int)this + 0x94);
  local_8 = 4;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar3 = (int *)((int)this + 0xa4);
  iVar2 = 4;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = (int *)((int)this + 0xb4);
  iVar2 = 3;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = (int *)((int)this + 0xc0);
  iVar2 = 2;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 200);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 200) = 0;
  }
  piVar3 = (int *)((int)this + 0xcc);
  iVar2 = 4;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 0xdc);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0xdc) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0xe0);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0xe0) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0xe4);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0xe4) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0xe8);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x198);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x198) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x19c);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x19c) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x1a0);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x1a0) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x1a4);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x1a4) = 0;
  }
  return 0;
}

/* ref: FUN_00620bb0 */
unsigned int F_00620bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x620bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this + 0x20);
  iVar2 = 4;
  do {
    if ((undefined *)puVar1[-5] != (undefined *)0x0) {
      F_004d9cc0((undefined *)puVar1[-5]);
    }
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      F_004d9cc0((undefined *)*puVar1);
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(undefined * PTR32 *)((int)this + 0x3c) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x3c));
  }
  if (*(undefined * PTR32 *)((int)this + 0x40) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x40));
  }
  if (*(undefined * PTR32 *)((int)this + 0x1c) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x1c));
  }
  if (*(undefined * PTR32 *)((int)this + 0x34) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x34));
  }
  if (*(undefined * PTR32 *)((int)this + 0x38) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x38));
  }
  if (*(undefined * PTR32 *)((int)this + 0x30) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x30));
  }
  if (*(undefined * PTR32 *)((int)this + 0x8c) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x8c));
  }
  puVar1 = (undefined4 *)((int)this + 0x90);
  iVar2 = 4;
  do {
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      F_004d9cc0((undefined *)*puVar1);
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)((int)this + 0xa0);
  iVar2 = 4;
  do {
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      F_004d9cc0((undefined *)*puVar1);
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)((int)this + 0xb0);
  iVar2 = 3;
  do {
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      F_004d9cc0((undefined *)*puVar1);
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)((int)this + 0xbc);
  iVar2 = 2;
  do {
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      F_004d9cc0((undefined *)*puVar1);
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(undefined * PTR32 *)((int)this + 0xc4) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0xc4));
  }
  if (*(undefined * PTR32 *)((int)this + 0x194) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x194));
  }
  if (*(undefined * PTR32 *)((int)this + 0x198) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x198));
  }
  if (*(undefined * PTR32 *)((int)this + 0x19c) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x19c));
  }
  if (*(undefined * PTR32 *)((int)this + 0x1a0) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x1a0));
    return 0;
  }
  return 0;
}

/* ref: FUN_00620d10 */
uint F_00620d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x620d10u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00620d20 */
uint F_00620d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x620d20u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00620d30 */
unsigned int F_00620d30(unsigned int gen_a0)
{
  GEN_ENTER(0x620d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int local_8;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x83c);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x83c) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x838);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x838) = 0;
  }
  piVar2 = (int *)((int)this + 0x18);
  local_8 = 4;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *piVar2 = 0;
      }
    }
    piVar2 = piVar2 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar2 = *(int * PTR32 *)((int)this + 0x28);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2);
    piVar2 = *(int * PTR32 *)((int)this + 0x28);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      *(undefined4 *)((int)this + 0x28) = 0;
    }
  }
  piVar2 = (int *)((int)this + 0x7c);
  local_8 = 0x14;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *piVar2 = 0;
      }
    }
    piVar2 = piVar2 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar2 = *(int * PTR32 *)((int)this + 0xcc);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xcc) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xd0);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xd0) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xd4);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xd4) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xe0);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xe0) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xd8);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xd8) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xdc);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xdc) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xe4);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xe4) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xe8);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x1a0);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x1a0) = 0;
  }
  return 0;
}

/* ref: FUN_00620ec0 */
uint F_00620ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x620ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x840) != 0) {
    F_0050c620(*(int *)((int)this + 0x840),0,0);
    *(undefined4 *)((int)this + 0x840) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x844) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x844),0,0);
    *(undefined4 *)((int)this + 0x844) = 0;
  }
  return uVar1;
}

/* ref: FUN_00620f30 */
unsigned int F_00620f30(unsigned int gen_a0)
{
  GEN_ENTER(0x620f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return 0;
}

/* ref: FUN_00620f70 */
unsigned int F_00620f70(void)
{
  GEN_ENTER(0x620f70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00620f80 */
uint F_00620f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x620f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0x78);
  while ((*piVar2 == 0 || (*piVar2 != param_1))) {
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
    if (0x13 < (int)uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}

/* ref: FUN_00620fb0 */
uint F_00620fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x620fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  F_00c48350((undefined *)((int)this + 4),0,0x70);
  return (uint)this;
}

/* ref: FUN_00621020 */
uint F_00621020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621020u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 4 + param_2 * 4);
}

/* ref: FUN_00621030 */
uint F_00621030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  ((int *)(gen_frame + 0xc))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((int *)(gen_frame + 0xc))[0] = 0;
  ((int *)(gen_frame + 0xc))[1] = 0;
  ((int *)(gen_frame + 0xc))[2] = 1;
  uVar1 = *(uint *)((int)this + ((int *)(gen_frame + 0xc))[(int)(param_1)] * 4 + 4);
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_00621070 */
uint F_00621070(unsigned int gen_a0)
{
  GEN_ENTER(0x621070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  ((uint *)(gen_frame + 0x4))[0] = 0x10;
  ((uint *)(gen_frame + 0x4))[1] = 0xc;
  return ((uint *)(gen_frame + 0x4))[(int)(param_1)];
}

/* ref: FUN_006210a0 */
uint F_006210a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6210a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  ((uint *)(gen_frame + 0xc))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0xc))[0] = 0x10;
  ((uint *)(gen_frame + 0xc))[1] = 0x10;
  ((uint *)(gen_frame + 0xc))[2] = 0xc;
  uVar1 = ((uint *)(gen_frame + 0xc))[(int)(param_1)];
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_00621100 */
float10 F_00621100(unsigned int gen_a0)
{
  GEN_ENTER(0x621100u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x18) / (float10)REFG(float, 0x13205dc))));
}

/* ref: FUN_00621130 */
float10 F_00621130(unsigned int gen_a0)
{
  GEN_ENTER(0x621130u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x1c) / (float10)REFG(float, 0x13205dc))));
}

/* ref: FUN_00621190 */
byte F_00621190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x21) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006211a0 */
uint F_006211a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6211a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (((*(int *)(in_ecx + 0x20) != 0) && (*(int *)(in_ecx + 0x28) != 0)) &&
     (*(int *)(in_ecx + 0x24) != 0)) {
    uVar1 = F_00500600(*(int *)(in_ecx + 0x20));
    return *(uint *)(uVar1 + 8);
  }
  return 0;
}

/* ref: FUN_006211e0 */
uint F_006211e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6211e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005006f0(*(undefined4 *)(in_ecx + 0x20),param_2);
  return uVar1;
}

/* ref: FUN_006211f0 */
uint F_006211f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6211f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00500710(*(undefined4 *)(in_ecx + 0x20),param_2);
  return uVar1;
}

/* ref: FUN_00621200 */
uint F_00621200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621200u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00500730(*(undefined4 *)(in_ecx + 0x20),param_2);
  return uVar1;
}

/* ref: FUN_00621220 */
float10 F_00621220(unsigned int gen_a0)
{
  GEN_ENTER(0x621220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x18) / (float10)REFG(float, 0x13205dc))));
}

/* ref: FUN_00621250 */
float10 F_00621250(unsigned int gen_a0)
{
  GEN_ENTER(0x621250u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x1c) / (float10)REFG(float, 0x13205dc))));
}

/* ref: FUN_00621270 */
uint F_00621270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621270u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x30 + *(int *)(in_ecx + 0x30);
}

/* ref: FUN_00621290 */
uint F_00621290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621290u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_006212b0 */
float10 F_006212b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6212b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 4) / (float10)REFG(float, 0x13205dc))));
}

/* ref: FUN_006212d0 */
uint F_006212d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6212d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(in_ecx + 0x28);
  if (puVar1 == (undefined4 *)0x0) {
    *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1375ac0));
    param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x1375ac4));
    param_2[2] = GEN_FLT_TO(param_2[2], REFG(float, 0x1375ac8));
    return (uint)param_2;
  }
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return (uint)param_2;
}

/* ref: FUN_00621320 */
uint F_00621320(unsigned int gen_a0)
{
  GEN_ENTER(0x621320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int local_c;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x1164);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x1164) = 0;
  }
  piVar4 = (int *)((int)this + 0x114c);
  local_c = 2;
  do {
    iVar3 = 2;
    piVar5 = piVar4;
    do {
      piVar5 = piVar5 + 1;
      piVar1 = (int *)*piVar5;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *piVar5 = 0;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    piVar5 = (int *)*piVar4;
    if (piVar5 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 3;
    local_c = local_c + -1;
  } while (local_c != 0);
  piVar4 = *(int * PTR32 *)((int)this + 0x120c);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x120c) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x1184);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x1184) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x117c);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x117c) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x1174);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x1174) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x118c);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x118c) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x1168) != 0) {
    uVar2 = F_0050c620(*(int *)((int)this + 0x1168),0,0);
    *(undefined4 *)((int)this + 0x1168) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x1214);
  if (piVar4 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x1214) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x1220);
  if (piVar4 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x1220) = 0;
  }
  return uVar2;
}

/* ref: Client::Graphics::Render::GrassRenderer::vf1 */
uint F_00621470(unsigned int gen_a0)
{
  GEN_ENTER(0x621470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined2 *)(in_ecx + 0x1144) = 0;
  return 0;
}

/* ref: FUN_00621480 */
uint F_00621480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x621480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  
  uVar1 = *(ushort *)((int)this + 0x1144);
  if (uVar1 < 0x450) {
    *(undefined4 *)((int)this + (uint)uVar1 * 4 + 4) = param_1;
    *(short *)((int)this + 0x1144) = *(short *)((int)this + 0x1144) + 1;
  }
  return (uint)uVar1;
}

/* ref: FUN_006214b0 */
unsigned int F_006214b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6214b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x1218) = param_2;
  return 0;
}

/* ref: FUN_006214e0 */
unsigned int F_006214e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6214e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x121c) = param_2;
  if ((float10)param_2 <= (float10)*(float *)(in_ecx + 0x1218)) {
    *(float *)(in_ecx + 0x121c) =
         ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x1218) + (float10)*(double *)&REFG(undefined, 0x10928e8))));
    return 0;
  }
  return 0;
}

/* ref: FUN_00621530 */
unsigned int F_00621530(unsigned int gen_a0)
{
  GEN_ENTER(0x621530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x1218) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x1218), REFG(float, 0x10ab17c));
  *(undefined4 *)(in_ecx + 0x121c) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x121c), REFG(float, 0x1087f04));
  return 0;
}

/* ref: Client::Graphics::Render::WaterRenderObject::vf1 */
uint F_00621560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x621560u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Graphics::Render::WaterRenderObject::vf4 */
uint F_00621570(unsigned int gen_a0)
{
  GEN_ENTER(0x621570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(this + 0x10) != 0) {
    uVar2 = F_0050c620(*(int *)(this + 0x10),0,0);
    *(undefined4 *)(this + 0x10) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x14) = 0;
  }
  return uVar2;
}

/* ref: FUN_006215b0 */
uint F_006215b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6215b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = param_1;
  uVar1 = F_00513f60(param_1,0,0);
  return uVar1;
}

/* ref: Client::Graphics::Render::WaterRenderer::vf1 */
unsigned int F_006215d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6215d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x1b2) = 0;
  return 0;
}

/* ref: Client::Graphics::Render::VerticalFogRenderObject::vf1 */
uint F_00621600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x621600u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Graphics::Render::VerticalFogRenderObject::vf4 */
uint F_00621610(unsigned int gen_a0)
{
  GEN_ENTER(0x621610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(this + 0x10) != 0) {
    uVar2 = F_0050c620(*(int *)(this + 0x10),0,0);
    *(undefined4 *)(this + 0x10) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x14) = 0;
  }
  return uVar2;
}

/* ref: FUN_00621650 */
uint F_00621650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = param_1;
  uVar1 = F_00513f60(param_1,0,0);
  return uVar1;
}

/* ref: Client::Graphics::Render::LightShaftRenderObject::vf1 */
uint F_00621690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x621690u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Graphics::Render::LightShaftRenderObject::vf4 */
uint F_006216a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6216a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(this + 8) != 0) {
    uVar2 = F_0050c620(*(int *)(this + 8),0,0);
    *(undefined4 *)(this + 8) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0xc);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xc) = 0;
  }
  return uVar2;
}

/* ref: FUN_006216e0 */
uint F_006216e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6216e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    F_0050c620(*(int *)((int)this + 8),0,0);
  }
  *(int *)((int)this + 8) = param_1;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00513f60(param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_00621720 */
uint F_00621720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  float10 fVar2;
  
  uVar1 = *(uint *)((int)this + 0x10);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1088100);
  *param_1 = ((float)GEN_TOF(((float10)(uVar1 & 0xff) / fVar2)));
  param_1[1] = ((float)GEN_TOF(((float10)(uVar1 >> 8 & 0xff) / fVar2)));
  param_1[2] = ((float)GEN_TOF(((float10)(uVar1 >> 0x10 & 0xff) / fVar2)));
  param_1[3] = ((float)GEN_TOF(((float10)(uVar1 >> 0x18) / fVar2)));
  return (uint)param_1;
}

/* ref: FUN_006217c0 */
byte F_006217c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6217c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined1 *)((int)this + 1) = (undefined1)param_1;
  bVar1 = (byte)param_2;
  *(undefined1 *)((int)this + 3) = (undefined1)param_4;
  *(byte *)((int)this + 2) = (byte)param_2;
  *(undefined1 *)((int)this + 4) = (undefined1)param_5;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((byte)param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x14), REFG(float, 0x1087f04));
    return bVar1;
  }
  if ((byte)param_2 == 2) {
    *(undefined4 *)((int)this + 0x10) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x10), REFG(float, 0x1087f04));
    *(undefined4 *)((int)this + 0x14) = 0;
    return bVar1;
  }
  if ((byte)param_2 == 1) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return bVar1;
}

/* ref: FUN_00621830 */
byte F_00621830(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x621830u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  char cVar3;
  float10 fVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  cVar3 = *(char *)(in_ecx + 2);
  fVar1 = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)(in_ecx + 0xc))));
  if (cVar3 == '\0') {
    if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(REFG(float, 0x1088068))) && !(fVar1 < REFG(float, 0x1088068))) {
      return 0;
    }
    fVar6 = (float10)*(double *)&REFG(undefined, 0x1094788);
    fVar2 = (float)((float10)fVar1 * fVar6);
    *(float *)(in_ecx + 0x10) = fVar2;
    if ((float10)1 < (float10)fVar2) {
      *(undefined4 *)(in_ecx + 0x10) = uVar5;
    }
    fVar2 = ((float)GEN_TOF((((float10)REFG(double, 0x1088108) - (float10)fVar1) * fVar6)));
    *(float *)(in_ecx + 0x14) = fVar2;
    if ((float10)1 < (float10)fVar2) {
      *(undefined4 *)(in_ecx + 0x14) = uVar5;
      *(float *)(in_ecx + 0xc) = fVar1;
      return 1;
    }
  }
  else {
    if (cVar3 == '\x01') {
      if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(REFG(float, 0x10ab17c))) && !(fVar1 < REFG(float, 0x10ab17c))) {
        return 0;
      }
      fVar6 = (float10)fVar1;
    }
    else {
      if (cVar3 != '\x02') goto LAB_006218eb;
      if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(REFG(float, 0x10ab17c))) && !(fVar1 < REFG(float, 0x10ab17c))) {
        return 0;
      }
      fVar6 = (float10)*(double *)&REFG(undefined, 0x1094878) - (float10)fVar1;
    }
    fVar4 = (float10)*(double *)&REFG(undefined, 0x1094788);
    *(undefined4 *)(in_ecx + 0x14) = 0;
    *(float *)(in_ecx + 0x10) = (float)(fVar6 * fVar4);
  }
LAB_006218eb: ;
  *(float *)(in_ecx + 0xc) = fVar1;
  return 1;
}

/* ref: FUN_00621900 */
byte F_00621900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x621900u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *param_2 = *(undefined4 *)(in_ecx + 0x10);
  *param_3 = *(undefined4 *)(in_ecx + 0x14);
  return 1;
}

/* ref: FUN_00621930 */
byte F_00621930(unsigned int gen_a0)
{
  GEN_ENTER(0x621930u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  undefined1 * puVar2;
  
  uVar1 = 0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  *(undefined4 *)(in_ecx + 0x18) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined4 *)(in_ecx + 0x20) = 0;
  puVar2 = (undefined1 *)(in_ecx + 0x24);
  do {
    *puVar2 = (char)uVar1;
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 0x18;
  } while (uVar1 < 0x100);
  return 1;
}

/* ref: FUN_00621970 */
uint F_00621970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x621970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  puVar3 = this;
  do {
    puVar3 = puVar3 + 1;
    uVar2 = *puVar3;
    if (uVar2 != 0xffffffff) {
      uVar4 = 0;
      do {
        uVar5 = 1 << ((byte)uVar4 & 0x1f);
        if ((uVar2 & uVar5) == 0) {
          *(uint *)((int)this + uVar6 * 4 + 4) = uVar5 | uVar2;
          uVar4 = uVar6 * 0x20 + uVar4;
          iVar1 = uVar4 * 0x18;
          *(undefined1 *)((int)this + iVar1 + 0x25) = (undefined1)param_1;
          *(undefined1 *)((int)this + iVar1 + 0x27) = (undefined1)param_4;
          *(char *)((int)this + iVar1 + 0x26) = (char)param_2;
          *(undefined4 *)((int)this + iVar1 + 0x2c) = param_3;
          *(undefined1 *)((int)this + iVar1 + 0x28) = (undefined1)param_5;
          *(undefined4 *)((int)this + iVar1 + 0x30) = 0;
          if ((char)param_2 == '\0') {
            *(undefined4 *)((int)this + iVar1 + 0x34) = 0;
            *(undefined4 *)((int)this + iVar1 + 0x38) = GEN_FLT_TO(*(undefined4 *)((int)this + iVar1 + 0x38), REFG(float, 0x1087f04));
            return uVar4;
          }
          if ((char)param_2 != '\x02') {
            if ((char)param_2 != '\x01') {
              return uVar4;
            }
            *(undefined4 *)((int)this + iVar1 + 0x34) = 0;
            *(undefined4 *)((int)this + iVar1 + 0x38) = 0;
            return uVar4;
          }
          *(undefined4 *)((int)this + iVar1 + 0x34) = GEN_FLT_TO(*(undefined4 *)((int)this + iVar1 + 0x34), REFG(float, 0x1087f04));
          *(undefined4 *)((int)this + iVar1 + 0x38) = 0;
          return uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x20);
    }
    uVar6 = uVar6 + 1;
    if (7 < uVar6) {
      return 0xffff;
    }
  } while( true );
}

/* ref: FUN_00621a50 */
uint F_00621a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + (uint)((ushort)param_1 >> 5) * 4 + 4)));
  *puVar1 = *puVar1 & ~(1 << ((byte)(ushort)param_1 & 0x1f));
  return (uint)((ushort)param_1 >> 5);
}

/* ref: FUN_00621a80 */
uint F_00621a80(void)
{
  GEN_ENTER(0x621a80u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_009f0510(1);
  uVar1 = F_00b1af80(this);
  return uVar1;
}

/* ref: FUN_00621ab0 */
unsigned int F_00621ab0(void)
{
  GEN_ENTER(0x621ab0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00621ac0 */
uint F_00621ac0(void)
{
  GEN_ENTER(0x621ac0u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_009f0510(1);
  if (this != (undefined *)0x0) {
    uVar1 = F_00b1af80(this);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00621ae0 */
unsigned int F_00621ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x621ae0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  for (iVar2 = param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,0);
    piVar1 = piVar1 + 0x24;
  }
  return 0;
}

/* ref: FUN_00621b80 */
uint F_00621b80(unsigned int gen_a0)
{
  GEN_ENTER(0x621b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abc34));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 0x12) = 0xff;
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0xc) = 0x32;
  *(undefined2 *)((int)this + 0x10) = 0xffff;
  *(undefined4 *)((int)this + 0x13) = 0x1010101;
  *(undefined4 *)((int)this + 0x17) = 0x1010000;
  *(undefined4 *)((int)this + 0x1b) = 0x10101;
  *(undefined4 *)((int)this + 0x1f) = 0;
  *(undefined4 *)((int)this + 0x23) = 0;
  *(undefined4 *)((int)this + 0x27) = 0x1010000;
  *(undefined1 *)((int)this + 0x2b) = 1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return (uint)this;
}

/* ref: FUN_00621be0 */
byte F_00621be0(unsigned int gen_a0)
{
  GEN_ENTER(0x621be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  cVar1 = *(char *)((int)this + 0x13);
  if ((cVar1 != '\0') && (*(char *)((int)this + 0x14) != '\0')) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x6d646c;
    F_005079f0(*(undefined * PTR32 *)(REFG(int, 0x1375aec) + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),0,2);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x746578;
    F_005079f0(*(undefined * PTR32 *)(REFG(int, 0x1375aec) + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),0,2);
    *(char *)((int)this + 0x12) = -(cVar1 != '\0');
    *(undefined2 *)((int)this + 0x10) = 0xffff;
    return 1;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x6d646c;
  F_005079f0(*(undefined * PTR32 *)(REFG(int, 0x1375aec) + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),0,1);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x746578;
  F_005079f0(*(undefined * PTR32 *)(REFG(int, 0x1375aec) + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),0,1);
  *(char *)((int)this + 0x12) = -(cVar1 != '\0');
  *(undefined2 *)((int)this + 0x10) = 0;
  return 1;
}

/* ref: FUN_00621ca0 */
byte F_00621ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x621ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint * puVar1;
  
  this_00 = REFG(void * PTR32, 0x13759f4);
  if (REFG(void * PTR32, 0x13759f4) == (undefined *)0x0) {
    return 0;
  }
  puVar1 = (uint *)F_0068bb80(REFG(void * PTR32, 0x13759f4));
  *puVar1 = (uint)*(byte *)((int)this + 0x24);
  F_006a59f0(this_00,1);
  return 1;
}

/* ref: FUN_00621cd0 */
unsigned int F_00621cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abc60)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10abc40));
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x30) = uVar1;
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x38) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abc38)));
  *(undefined4 *)((int)this + 0x40) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x40), REFG(float, 0x10abc38));
  *(undefined4 *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x48) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  *(undefined4 *)((int)this + 0x50) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x50), REFG(float, 0x1088068));
  *(undefined4 *)((int)this + 0x54) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0x58) = 1;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x70) = uVar1;
  *(undefined4 *)((int)this + 0x74) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x74), REFG(float, 0x10947a4));
  *(undefined4 *)((int)this + 0x78) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x78), REFG(float, 0x1094880));
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  return 0;
}

/* ref: FUN_00621da0 */
uint F_00621da0(unsigned int gen_a0)
{
  GEN_ENTER(0x621da0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10ab990));
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00621df0 */
uint F_00621df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(uint *)((int)this + 0x10) >> 4 & 1) == 0) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0x118 + param_1 * 4)));
  }
  return *(uint *)((int)this + param_1 * 4 + 0x38);
}

/* ref: FUN_00621e20 */
uint F_00621e20(unsigned int gen_a0)
{
  GEN_ENTER(0x621e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_8;
  
  iVar6 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0xa8)));
  uVar1 = *((ushort *)GEN_TOP((*(int *)(iVar6 + 4) + 0x12 + iVar6)));
  uVar5 = (uint)uVar1;
  uVar4 = F_00406bb0(uVar5 * 4,0,0);
  *(uint *)((int)this + 0x48) = uVar4;
  if (uVar1 != 0) {
    iVar6 = 0;
    local_8 = uVar5;
    do {
      *((undefined4 *)GEN_TOP((iVar6 + *(int *)((int)this + 0x48)))) = 0;
      iVar2 = *((int *)GEN_TOP((iVar6 + *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0x124))))));
      if (iVar2 == 0) {
        uVar4 = *(uint *)((int)this + 0x48);
        *(undefined4 *)(iVar6 + uVar4) = 0;
      }
      else {
        piVar3 = *(int * PTR32 *)(iVar2 + 0xa0);
        if (piVar3 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
        }
        uVar4 = *(uint *)((int)this + 0x48);
        if (*(int *)(uVar4 + iVar6) != 0) {
          uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + iVar6) + 0xc))))(*(int * PTR32 *)(uVar4 + iVar6));
        }
        *((undefined4 *)GEN_TOP((iVar6 + *(int *)((int)this + 0x48)))) = *(undefined4 *)(iVar2 + 0xa0);
      }
      iVar6 = iVar6 + 4;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
    *(uint *)((int)this + 0x4c) = uVar5;
    return uVar4;
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  return 0;
}

/* ref: FUN_00621ef0 */
uint F_00621ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x30);
  if (iVar2 != 0) {
    puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x6c)));
    do {
      *puVar1 = param_1;
      puVar1 = puVar1 + 0x24;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(uint *)((int)this + 0x34) = param_1;
    return (uint)puVar1;
  }
  *(uint *)((int)this + 0x34) = param_1;
  return param_1;
}

/* ref: Client::Graphics::Render::Camera::vf1 */
unsigned int F_00621fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x621fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x120);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x120) = 0;
  }
  return 0;
}

/* ref: FUN_00621fc0 */
uint F_00621fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined4 * puVar6;
  undefined * pvVar7;
  int iVar8;
  undefined4 * puVar9;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  cVar5 = *(char *)((int)this + 0xb8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (undefined4 *)((int)this + 0x10);
  puVar6 = param_1;
  puVar9 = (undefined4 *)((int)this + 0x10);
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  if (cVar5 == '\0') {
    F_004f0c10((int)this + 0x50,*(float *)((int)this + 0xa4),*(float *)((int)this + 0xa8),
                 *(float *)((int)this + 0xac),*(float *)((int)this + 0xb0));
  }
  else {
    fVar3 = *(float *)((int)this + 0xb4);
    (*(float *)(gen_frame + 0x1c)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)fVar3 * (float10)*(float *)((int)this + 0xa8))));
    (*(float *)(gen_frame + 0x1c)) = fVar4;
    F_004f09d0((int)this + 0x50,fVar4,fVar3,*(float *)((int)this + 0xac),
                 *(float *)((int)this + 0xb0),(float)(float10)0,(float)(float10)0);
  }
  puVar6 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x20)),(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
  puVar9 = ((undefined4 *)(gen_frame + 0x60));
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar6 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&REFG(float, 0x1375ac0),((undefined4 *)(gen_frame + 0x60)));
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x18));
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x90) = *puVar6;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x94) = uVar1;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x98) = uVar2;
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
  return (uint)pvVar7;
}

/* ref: Client::Graphics::Render::Camera::vf5 */
uint F_00622110(unsigned int gen_a0)
{
  GEN_ENTER(0x622110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  puVar1 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0x0)),(uint)(this + 0x10),(uint)(this + 0x50));
  puVar4 = ((undefined4 *)(gen_frame + 0x40));
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar2 = F_0065fc60(this + 0xc0,((undefined4 *)(gen_frame + 0x40)));
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return uVar2;
}

/* ref: FUN_00622190 */
uint F_00622190(unsigned int gen_a0)
{
  GEN_ENTER(0x622190u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  in_ecx[0x29] = GEN_FLT_TO(in_ecx[0x29], REFG(float, 0x108b284));
  in_ecx[0x2a] = GEN_FLT_TO(in_ecx[0x2a], REFG(float, 0x1096cd4));
  in_ecx[0x2b] = GEN_FLT_TO(in_ecx[0x2b], REFG(float, 0x1094884));
  in_ecx[0x2c] = GEN_FLT_TO(in_ecx[0x2c], REFG(float, 0x1094724));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094880)));
  in_ecx[1] = 1;
  in_ecx[0x28] = 0x1e;
  in_ecx[0x2d] = uVar1;
  *(undefined1 *)(in_ecx + 0x2e) = 0;
  in_ecx[0x48] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[6])REFP(0x10abc98));
  return (uint)in_ecx;
}

/* ref: FUN_00622210 */
unsigned int F_00622210(unsigned int gen_a0)
{
  GEN_ENTER(0x622210u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return 0;
}

/* ref: FUN_006222c0 */
uint F_006222c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6222c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x1b0) = *param_2;
  *(undefined4 *)(in_ecx + 0x1b4) = param_2[1];
  *(undefined4 *)(in_ecx + 0x1b8) = param_2[2];
  *(undefined1 *)(in_ecx + 0x1c4) = 1;
  return (uint)param_2;
}

/* ref: FUN_006222f0 */
uint F_006222f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6222f0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * pfVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_30;
  float local_2c;
  
  fVar2 = (float10)*param_3;
  fVar3 = (float10)*param_2;
  if (*(double *)&REFG(undefined, 0x10ab998) <=
      (double)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)param_3[2] * (float10)param_2[2] +
                                         ((float10)param_3[1] * (float10)param_2[1] + fVar3 * fVar2)
                                         ))))))) {
    fVar3 = (float10)REFG(float, 0x1302c80);
    fVar4 = (float10)REFG(float, 0x1302c84);
    fVar5 = (float10)REFG(float, 0x1302c88);
    if (*(double *)&REFG(undefined, 0x10ab998) <=
        (double)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((fVar3 * fVar2 + fVar4 * (float10)param_3[1]) +
                                           fVar5 * (float10)param_3[2]))))))) {
      local_30 = (float)((float10)REFG(float, 0x1302c74) * (float10)param_3[2] -
                        (float10)REFG(float, 0x1302c78) * (float10)param_3[1]);
      local_2c = (float)(fVar2 * (float10)REFG(float, 0x1302c78) - (float10)REFG(float, 0x1302c70) * (float10)param_3[2]
                        );
      fVar2 = (float10)param_3[1] * (float10)REFG(float, 0x1302c70) - fVar2 * (float10)REFG(float, 0x1302c74);
    }
    else {
      local_30 = (float)((float10)param_3[2] * fVar4 - (float10)param_3[1] * fVar5);
      local_2c = (float)(fVar2 * fVar5 - (float10)param_3[2] * fVar3);
      fVar2 = (float10)param_3[1] * fVar3 - fVar2 * fVar4;
    }
  }
  else {
    local_30 = (float)((float10)param_2[1] * (float10)param_3[2] -
                      (float10)param_3[1] * (float10)param_2[2]);
    local_2c = (float)((float10)param_2[2] * fVar2 - fVar3 * (float10)param_3[2]);
    fVar2 = (float10)param_3[1] * fVar3 - (float10)param_2[1] * fVar2;
  }
  *param_1 = (float)((float10)local_2c * (float10)param_3[2] -
                    (float10)(float)fVar2 * (float10)param_3[1]);
  param_1[1] = (float)((float10)*param_3 * (float10)(float)fVar2 -
                      (float10)local_30 * (float10)param_3[2]);
  param_1[2] = (float)((float10)param_3[1] * (float10)local_30 -
                      (float10)local_2c * (float10)*param_3);
  pfVar1 = (float *)F_0046f390(param_1);
  *param_1 = *pfVar1;
  param_1[1] = pfVar1[1];
  param_1[2] = pfVar1[2];
  return (uint)pfVar1;
}

/* ref: FUN_006224f0 */
uint F_006224f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6224f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  undefined4 uVar8;
  uint uVar9;
  float10 fVar10;
  
  uVar9 = (uint)gen_fl2bits((float)(REFG(float, 0x10920d0)));
  uVar8 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar1 = *param_3;
  fVar2 = *param_2;
  fVar3 = param_3[1];
  fVar4 = param_2[1];
  fVar5 = param_3[2];
  fVar6 = param_2[2];
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *param_1 = uVar8;
  param_1[5] = uVar8;
  param_1[10] = uVar8;
  param_1[0xe] = (uint)gen_fl2bits(fVar5) ^ uVar9;
  fVar10 = (float10)REFG(double, 0x1088108);
  param_1[0xf] = uVar8;
  param_1[0xc] = (uint)gen_fl2bits(((float)GEN_TOF(((float10)(float)((float10)fVar2 + (float10)fVar1) *
                                          fVar10)))) ^ uVar9;
  fVar7 = (float10)REFG(double, 0x1094890);
  param_1[0xd] = (uint)gen_fl2bits(((float)GEN_TOF((fVar10 * (float10)(float)((float10)fVar4 + (float10)fVar3
                                                                    ))))) ^ uVar9;
  uVar9 = F_0065f3e0(param_1,((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x1092098) /
                                      (float10)(float)((float10)fVar1 - (float10)fVar2)))),
                       ((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x1092098) /
                              (float10)(float)((float10)fVar3 - (float10)fVar4)))),
                       ((float)GEN_TOF((fVar7 / (float10)(float)((float10)fVar5 - (float10)fVar6)))));
  return uVar9;
}

/* ref: FUN_00622640 */
uint F_00622640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0x622640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x270];
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar10;
  float * pfVar11;
  undefined4 * puVar12;
  uint uVar13;
  int iVar14;
  float * pfVar15;
  undefined4 * puVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  
  (*(uint *)(gen_frame + 0x25c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x260);
  (*(undefined4 *)(gen_frame + 0x38)) = param_3;
  (*(float * PTR32 *)(gen_frame + 0x34)) = param_6;
  (*(undefined4 *)(gen_frame + 0x3c)) = param_1;
  (*(float * PTR32 *)(gen_frame + 0x8c)) = param_7;
  F_006222f0(((undefined1 *)(gen_frame + 0x0)),param_5,param_6);
  (*(float *)(gen_frame + 0x70)) = *param_7;
  pfVar15 = param_7 + 2;
  (*(float *)(gen_frame + 0x74)) = param_7[1];
  (*(float * PTR32 *)(gen_frame + 0x68)) = pfVar15;
  (*(float *)(gen_frame + 0x78)) = *pfVar15;
  (*(float * PTR32 *)(gen_frame + 0x64)) = (float *)0x1;
  if (1 < (uint)gen_fl2bits(param_8)) {
    if (3 < (int)gen_fl2bits(param_8) + -1) {
      iVar14 = ((int)gen_fl2bits(param_8) - 5U >> 2) + 1;
      (*(float * PTR32 *)(gen_frame + 0x64)) = (float *)(iVar14 * 4 + 1);
      pfVar11 = param_7 + 10;
      do {
        fVar3 = pfVar11[-6];
        iVar14 = iVar14 + -1;
        fVar17 = (float10)(*(float *)(gen_frame + 0x70));
        (*(float *)(gen_frame + 0x70)) = (float)((float10)fVar3 + fVar17);
        fVar4 = pfVar11[-5];
        fVar18 = (float10)(*(float *)(gen_frame + 0x74));
        (*(float *)(gen_frame + 0x74)) = (float)((float10)fVar4 + fVar18);
        fVar5 = pfVar11[-4];
        fVar19 = (float10)(*(float *)(gen_frame + 0x78));
        (*(float *)(gen_frame + 0x78)) = (float)((float10)fVar5 + fVar19);
        fVar3 = ((float)GEN_TOF(((float10)pfVar11[-2] + (float10)(float)((float10)fVar3 + fVar17))));
        (*(float *)(gen_frame + 0x70)) = fVar3;
        fVar4 = ((float)GEN_TOF(((float10)pfVar11[-1] + (float10)(float)((float10)fVar4 + fVar18))));
        (*(float *)(gen_frame + 0x74)) = fVar4;
        fVar5 = ((float)GEN_TOF(((float10)*pfVar11 + (float10)(float)((float10)fVar5 + fVar19))));
        (*(float *)(gen_frame + 0x78)) = fVar5;
        fVar3 = (float)((float10)pfVar11[2] + (float10)fVar3);
        (*(float *)(gen_frame + 0x70)) = fVar3;
        fVar4 = (float)((float10)pfVar11[3] + (float10)fVar4);
        (*(float *)(gen_frame + 0x74)) = fVar4;
        fVar5 = (float)((float10)pfVar11[4] + (float10)fVar5);
        (*(float *)(gen_frame + 0x78)) = fVar5;
        (*(float *)(gen_frame + 0x70)) = (float)((float10)pfVar11[6] + (float10)fVar3);
        (*(float *)(gen_frame + 0x74)) = (float)((float10)pfVar11[7] + (float10)fVar4);
        (*(float *)(gen_frame + 0x78)) = (float)((float10)pfVar11[8] + (float10)fVar5);
        pfVar11 = pfVar11 + 0x10;
      } while (iVar14 != 0);
    }
    if ((*(float * PTR32 *)(gen_frame + 0x64)) < (uint)gen_fl2bits(param_8)) {
      iVar14 = (int)gen_fl2bits(param_8) - (int)(*(float * PTR32 *)(gen_frame + 0x64));
      pfVar11 = param_7 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x64))) * 4 + 2;
      do {
        iVar14 = iVar14 + -1;
        (*(float *)(gen_frame + 0x70)) = (float)((float10)pfVar11[-2] + (float10)(*(float *)(gen_frame + 0x70)));
        (*(float *)(gen_frame + 0x74)) = (float)((float10)pfVar11[-1] + (float10)(*(float *)(gen_frame + 0x74)));
        (*(float *)(gen_frame + 0x78)) = (float)((float10)*pfVar11 + (float10)(*(float *)(gen_frame + 0x78)));
        pfVar11 = pfVar11 + 4;
      } while (iVar14 != 0);
    }
  }
  (*(float *)(gen_frame + 0x6c)) = param_8;
  fVar17 = (float10)(int)gen_fl2bits(param_8);
  if ((int)gen_fl2bits(param_8) < 0) {
    fVar17 = fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x6c)) = (float)fVar17;
  (*(float * PTR32 *)(gen_frame + 0x64)) = (float *)0x0;
  fVar17 = (float10)(float)fVar17;
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x70)) / fVar17);
  (*(float *)(gen_frame + 0x70)) = fVar3;
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0x74)) / fVar17);
  (*(float *)(gen_frame + 0x74)) = fVar4;
  fVar5 = (float)((float10)(*(float *)(gen_frame + 0x78)) / fVar17);
  (*(float *)(gen_frame + 0x78)) = fVar5;
  if (param_8 != 0.0) {
    (*(float *)(gen_frame + 0x6c)) = param_8;
    do {
      fVar6 = pfVar15[-2];
      (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar6 - (float10)fVar3);
      (*(float *)(gen_frame + 0x54)) = (float)((float10)pfVar15[-1] - (float10)fVar4);
      (*(float *)(gen_frame + 0x58)) = (float)((float10)*pfVar15 - (float10)fVar5);
      fVar17 = (float10)(float)((float10)pfVar15[-1] - (float10)fVar4);
      fVar18 = (float10)(float)((float10)fVar6 - (float10)fVar3);
      fVar19 = (float10)(float)((float10)*pfVar15 - (float10)fVar5);
      fVar6 = ((float)GEN_TOF((fVar19 * fVar19 + (fVar18 * fVar18 + fVar17 * fVar17))));
      (*(float * PTR32 *)(gen_frame + 0x68)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar6)));
      pfVar11 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)fVar6))))));
      (*(float * PTR32 *)(gen_frame + 0x68)) = pfVar11;
      if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x64))))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11)))) {
        (*(float * PTR32 *)(gen_frame + 0x64)) = pfVar11;
      }
      pfVar15 = pfVar15 + 4;
      fVar6 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x6c))) + -1);
      (*(float *)(gen_frame + 0x6c)) = fVar6;
    } while (fVar6 != 0.0);
  }
  fVar6 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x64))))) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x64))))));
  (*(float *)(gen_frame + 0x6c)) = fVar6;
  fVar7 = *(*(float * PTR32 *)(gen_frame + 0x34));
  fVar17 = (float10)fVar6;
  (*(float *)(gen_frame + 0x50)) = (float)(fVar17 * (float10)fVar7);
  fVar6 = (*(float * PTR32 *)(gen_frame + 0x34))[1];
  (*(float *)(gen_frame + 0x54)) = (float)((float10)fVar6 * fVar17);
  fVar8 = (*(float * PTR32 *)(gen_frame + 0x34))[2];
  (*(float *)(gen_frame + 0x58)) = (float)(fVar17 * (float10)fVar8);
  fVar3 = ((float)GEN_TOF(((float10)fVar3 - (float10)(float)(fVar17 * (float10)fVar7))));
  (*(float *)(gen_frame + 0x40)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)fVar4 - (float10)(float)((float10)fVar6 * fVar17))));
  (*(float *)(gen_frame + 0x44)) = fVar4;
  fVar5 = ((float)GEN_TOF(((float10)fVar5 - (float10)(float)(fVar17 * (float10)fVar8))));
  (*(float *)(gen_frame + 0x48)) = fVar5;
  (*(float *)(gen_frame + 0x50)) = fVar3;
  (*(float *)(gen_frame + 0x54)) = fVar4;
  (*(float *)(gen_frame + 0x58)) = fVar5;
  F_004f4430(param_2,&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0x70)),((undefined1 *)(gen_frame + 0x0)));
  if (param_8 != 0.0) {
    puVar16 = ((undefined4 *)(gen_frame + 0xd0)) + 2;
    (*(float * PTR32 *)(gen_frame + 0x8c)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x8c)) - (int)puVar16);
    (*(float *)(gen_frame + 0x6c)) = param_8;
    do {
      uVar1 = param_2[4];
      (*(undefined4 *)(gen_frame + 0x90)) = *param_2;
      (*(undefined4 *)(gen_frame + 0x94)) = param_2[1];
      (*(undefined4 *)(gen_frame + 0x98)) = param_2[2];
      (*(undefined4 *)(gen_frame + 0xa0)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x9c)) = 0;
      (*(undefined4 *)(gen_frame + 0xa4)) = param_2[5];
      (*(undefined4 *)(gen_frame + 0xac)) = 0;
      (*(undefined4 *)(gen_frame + 0xbc)) = 0;
      (*(undefined4 *)(gen_frame + 0xa8)) = param_2[6];
      (*(undefined4 *)(gen_frame + 0xc0)) = param_2[0xc];
      (*(undefined4 *)(gen_frame + 0xb0)) = param_2[8];
      (*(undefined4 *)(gen_frame + 0xc4)) = param_2[0xd];
      (*(undefined4 *)(gen_frame + 0xb4)) = param_2[9];
      (*(undefined4 *)(gen_frame + 0xc8)) = param_2[0xe];
      (*(undefined4 *)(gen_frame + 0xb8)) = param_2[10];
      (*(undefined4 *)(gen_frame + 0xcc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      puVar12 = (undefined4 *)F_004ee9b0(&(*(float *)(gen_frame + 0x40)),(int)(*(float * PTR32 *)(gen_frame + 0x8c)) + (int)puVar16,&(*(undefined4 *)(gen_frame + 0x90)));
      uVar1 = puVar12[1];
      uVar2 = puVar12[2];
      puVar16[-2] = *puVar12;
      puVar16[-1] = uVar1;
      *puVar16 = uVar2;
      puVar16 = puVar16 + 4;
      fVar3 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x6c))) + -1);
      (*(float *)(gen_frame + 0x6c)) = fVar3;
    } while (fVar3 != 0.0);
  }
  F_004f4990(&(*(float *)(gen_frame + 0x10)),((undefined4 *)(gen_frame + 0xd0)),(undefined4)gen_fl2bits(param_8),0x10);
  (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x28));
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x10)) / (float10)param_9))));
  dVar10 = (GEN_X87MATH(((double)(float)((float10)(*(float *)(gen_frame + 0x10)) / (float10)param_9)),0xd));
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)dVar10)));
  fVar3 = (float)((float10)param_9 * (float10)(float)dVar10);
  (*(float *)(gen_frame + 0x40)) = fVar3;
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0x14)) / (float10)param_9);
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar4)));
  dVar10 = (GEN_X87MATH(((double)fVar4),0xd));
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)dVar10)));
  fVar4 = (float)((float10)param_9 * (float10)(float)dVar10);
  (*(float *)(gen_frame + 0x44)) = fVar4;
  fVar5 = (float)((float10)(*(float *)(gen_frame + 0x18)) / (float10)param_9);
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar5)));
  dVar10 = (GEN_X87MATH(((double)fVar5),0xd));
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)dVar10)));
  fVar5 = (float)((float10)param_9 * (float10)(float)dVar10);
  (*(float *)(gen_frame + 0x48)) = fVar5;
  fVar6 = (float)((float10)(*(float *)(gen_frame + 0x20)) / (float10)param_9);
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar6)));
  dVar10 = (GEN_X87MATH(((double)fVar6),0xe));
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)dVar10)));
  fVar6 = (float)((float10)param_9 * (float10)(float)dVar10);
  (*(float *)(gen_frame + 0x50)) = fVar6;
  fVar7 = (float)((float10)(*(float *)(gen_frame + 0x24)) / (float10)param_9);
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar7)));
  dVar10 = (GEN_X87MATH(((double)fVar7),0xe));
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)dVar10)));
  fVar7 = (float)((float10)param_9 * (float10)(float)dVar10);
  (*(float *)(gen_frame + 0x54)) = fVar7;
  fVar8 = (float)((float10)(*(float *)(gen_frame + 0x28)) / (float10)param_9);
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar8)));
  dVar10 = (GEN_X87MATH(((double)fVar8),0xe));
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)dVar10)));
  (*(float *)(gen_frame + 0x10)) = fVar3;
  fVar3 = (float)((float10)(float)dVar10 * (float10)param_9);
  (*(float *)(gen_frame + 0x58)) = fVar3;
  (*(float *)(gen_frame + 0x14)) = fVar4;
  (*(float *)(gen_frame + 0x28)) = fVar3;
  (*(float *)(gen_frame + 0x18)) = fVar5;
  (*(float *)(gen_frame + 0x20)) = fVar6;
  (*(float *)(gen_frame + 0x24)) = fVar7;
  uVar13 = F_006224f0((*(undefined4 *)(gen_frame + 0x38)),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)));
  F_00c47745((*(uint *)(gen_frame + 0x25c)) ^ (uint)(uint)(gen_frame + 0x260));
  return uVar13;
}

/* ref: Client::Graphics::Render::Camera_OmniShadow::vf6 */
uint F_00622e40(unsigned int gen_a0)
{
  GEN_ENTER(0x622e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * pCVar5;
  
  pCVar5 = this + 0x130;
  iVar4 = 4;
  do {
    iVar1 = *(int *)pCVar5;
    piVar2 = *(int * PTR32 *)(iVar1 + 0x120);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      *(undefined4 *)(iVar1 + 0x120) = 0;
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pCVar5 + 0xc))))(*(int * PTR32 *)pCVar5);
    pCVar5 = pCVar5 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar2 = *(int * PTR32 *)(this + 0x120);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)(this + 0x120) = 0;
  }
  return uVar3;
}

/* ref: FUN_00622f40 */
uint F_00622f40(unsigned int gen_a0)
{
  GEN_ENTER(0x622f40u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10abac4));
  in_ecx[1] = 0;
  in_ecx[6] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Render::Rigid::vf1 */
unsigned int F_00622fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x622fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x10);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x10) = 0;
  }
  return 0;
}

/* ref: FUN_00622fe0 */
byte F_00622fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x622fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)(ushort)param_1;
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x44) + uVar2 * 4))) != 0) {
    F_0050c620(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + uVar2 * 4))),0,0);
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + uVar2 * 4))) = 0;
  }
  *((int *)GEN_TOP((*(int *)((int)this + 0x44) + uVar2 * 4))) = param_2;
  if (param_2 != 0) {
    F_00513f60(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + uVar2 * 4))),0,0);
    if ((ushort)param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x44) + 0xa8)));
    }
    F_009f9680(((undefined *)GEN_TOP((uVar2 * 0x120 + *(int *)((int)this + 0x4c)))),param_2,uVar1);
  }
  return 1;
}

/* ref: FUN_00623060 */
uint F_00623060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  *(undefined4 *)((int)this + 0x14) = param_1[1];
  *(undefined4 *)((int)this + 0x18) = param_1[2];
  *(undefined4 *)((int)this + 0x20) = param_1[4];
  *(undefined4 *)((int)this + 0x24) = param_1[5];
  *(undefined4 *)((int)this + 0x28) = param_1[6];
  *(undefined4 *)((int)this + 0x2c) = param_1[7];
  *(undefined4 *)((int)this + 0x30) = param_1[8];
  uVar2 = 0;
  *(undefined4 *)((int)this + 0x34) = param_1[9];
  *(undefined4 *)((int)this + 0x38) = param_1[10];
  uVar1 = *(int *)((int)this + 0x70) + 0x1fU >> 5;
  if (uVar1 != 0) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x6c) + uVar2 * 4))) = 0xffffffff;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return uVar1;
}

/* ref: FUN_006230d0 */
unsigned int F_006230d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6230d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  undefined * this;
  int iVar2;
  uint local_8;
  
  F_009f0510(0);
  if (((*(int *)(param_1 + 0x58) != 0) &&
      (bVar1 = F_009f15b0(*(int *)(param_1 + 0x58)), bVar1 != 0)) &&
     (*(int *)(REFG(int, 0x1375b00) + 0x28) == 0)) {
    F_009f45b0(*(undefined * PTR32 *)(param_1 + 0x58),(undefined4)gen_fl2bits(param_2));
  }
  local_8 = (uint)*(ushort *)(param_1 + 0x40);
  if (local_8 != 0) {
    iVar2 = 0;
    do {
      this = ((undefined *)GEN_TOP((*(int *)(param_1 + 0x4c) + iVar2)));
      if (*(int *)((int)this + 0xbc) != 0) {
        F_009f8140(this,param_2);
        F_009f3370(this);
      }
      iVar2 = iVar2 + 0x120;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return 0;
}

/* ref: FUN_00623160 */
uint F_00623160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  ushort uVar2;
  byte * pbVar3;
  int iVar4;
  uint uVar5;
  byte * pbVar6;
  uint uVar7;
  bool bVar8;
  
  uVar2 = *(ushort *)((int)this + 0x40);
  uVar7 = 0;
  if (1 < uVar2) {
    pbVar3 = &REFG(undefined1, 0x10a5fe8);
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_006231a0: ;
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_006231a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_006231a0;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_006231a5: ;
    if (iVar4 != 0) {
      pbVar3 = &REFG(undefined1, 0x10a5ff0);
      pbVar6 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_006231d0: ;
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_006231d5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_006231d0;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_006231d5: ;
      if (iVar4 != 0) goto joined_r0x006231e0;
    }
    uVar7 = 1;
  }
joined_r0x006231e0: ;
  while( true ) {
    if (uVar2 <= uVar7) {
      return 0xffff;
    }
    iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x44) + uVar7 * 4)));
    if ((iVar4 != 0) &&
       (uVar5 = F_00d32e80(*(undefined4 *)(iVar4 + 0xa8),param_1,0), (uVar5 & 0x8000) == 0))
    break;
    uVar7 = uVar7 + 1;
  }
  return (uVar7 & 0xf) << 0xc | uVar5 & 0xfff;
}

/* ref: FUN_00623240 */
ushort F_00623240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  ushort uVar1;
  
  uVar1 = F_009f0d70(((undefined *)GEN_TOP(((uint)*param_1 * 0x120 + *(int *)((int)this + 0x4c)))),
                       (uint)*(ushort *)(param_1 + 2));
  return uVar1;
}

/* ref: FUN_00623270 */
ushort F_00623270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  return *((ushort *)GEN_TOP(((uint)*param_1 * 0x120 + 0xb2 + *(int *)((int)this + 0x4c))));
}

/* ref: FUN_00623290 */
uint F_00623290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x623290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_009f5ea0(((undefined *)GEN_TOP(((param_1 >> 0xc & 0xf) * 0x120 + *(int *)((int)this + 0x4c)))),
                       param_1 & 0xfff,param_2);
  return uVar1;
}

/* ref: FUN_006232c0 */
uint F_006232c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6232c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *((uint *)GEN_TOP(((uint)(ushort)param_2 * 0x120 + 0xbc + *(int *)(in_ecx + 0x4c))));
}

/* ref: FUN_006232e0 */
uint F_006232e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6232e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x44) + (param_1 & 0xff) * 4)));
  if (iVar1 == 0) {
    return 0x1302d00;
  }
  uVar2 = (uint)(short)(param_1 >> 0x10);
  if (uVar2 < *(uint *)(iVar1 + 0xa4)) {
    return uVar2 * 0x40 + *(int *)(iVar1 + 0xcc);
  }
  return 0;
}

/* ref: FUN_00623320 */
uint F_00623320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x44) + (param_1 >> 0xc & 0xf) * 4)));
  if (iVar1 == 0) {
    return 0x1302d00;
  }
  if ((param_1 & 0xfff) < *(uint *)(iVar1 + 0xa4)) {
    return (param_1 & 0xfff) * 0x40 + *(int *)(iVar1 + 0xcc);
  }
  return 0;
}

/* ref: FUN_00623360 */
byte F_00623360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  if (*(int *)((int)this + 0x5c) != 0) {
    uVar1 = 0;
    if (*(uint *)((int)this + 0x68) != 0) {
      piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x5c) + 0x20)));
      do {
        if (*piVar2 == param_1) {
          return 1;
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 0x10;
      } while (uVar1 < *(uint *)((int)this + 0x68));
    }
  }
  return 0;
}

/* ref: FUN_006233a0 */
uint F_006233a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6233a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(uint * PTR32 *)(in_ecx + 0x50) != (uint *)0x0) {
    return **(uint * PTR32 *)(in_ecx + 0x50);
  }
  return 0;
}

/* ref: FUN_006233b0 */
float F_006233b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6233b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 0x50) != 0) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x50) + 0xc))) + param_1 * 4))) + 0x38)));
  }
  return (float)(float10)0;
}

/* ref: FUN_006233d0 */
uint F_006233d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6233d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 0x50) != 0) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x50) + 0xc))) + param_1 * 4))) + 0x3c))) & 1;
  }
  return 0;
}

/* ref: FUN_00623400 */
float10 F_00623400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623400u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(param_1 + 0x50) == (undefined *)0x0) {
    return (float10)0;
  }
  uVar1 = F_009f0d90(*(undefined * PTR32 *)(param_1 + 0x50),param_2,1);
  if (uVar1 != 0) {
    return (float10)*(float *)(uVar1 + 0x38);
  }
  return (float10)0.0;
}

/* ref: FUN_00623440 */
uint F_00623440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x44) + param_1 * 4))) != 0) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x44) + param_1 * 4))) + 0xa8)));
  }
  return 0;
}

/* ref: FUN_00623470 */
uint F_00623470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x58);
  if (pvVar2 != (undefined *)0x0) {
    F_009f44d0(pvVar2);
    F_00406ad0(pvVar2);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  uVar1 = F_00406b90(0x20,0,0);
  if (uVar1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = (undefined *)F_009f1580(uVar1);
  }
  *(undefined * PTR32 *)((int)this + 0x58) = pvVar2;
  uVar1 = F_009f4510(pvVar2,this,param_1);
  return uVar1;
}

/* ref: FUN_006234f0 */
unsigned int F_006234f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6234f0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  for (iVar1 = param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    uVar2 = ((code *)*(gen_code32 *)*param_2)(param_2,iVar1);
    if (((char)uVar2 != '\0') && (param_1 = (uint)*(ushort *)(iVar1 + 0x40), param_1 != 0)) {
      iVar3 = 0;
      do {
        ((code *)*(gen_code32 *)(*param_2 + 4))(param_2,*(int *)(iVar1 + 0x4c) + iVar3);
        iVar3 = iVar3 + 0x120;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00623570 */
byte F_00623570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)(in_ecx + 4) != 1) {
    uVar1 = F_00a065a0();
    if ((char)uVar1 != '\0') {
      return *(char *)(param_2 + 0xa8) < '\x01';
    }
  }
  return 1;
}

/* ref: FUN_006235a0 */
uint F_006235a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6235a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = -(uint)(*(int *)((int)this + 4) != 0) & 2;
  this_00 = *(undefined * PTR32 *)(param_1 + 0xbc + uVar1 * 4);
  if (this_00 != (undefined *)0x0) {
    if ((int)REFG(undefined4, 0x137a180) < 0x400) {
      (&REFG(undefined4, 0x137a200))[(int)(REFG(undefined4, 0x137a180))] = this_00;
      uVar1 = REFG(undefined4, 0x137a180) + 1;
      REFG(undefined4, 0x137a180) = uVar1;
      return uVar1;
    }
    uVar1 = F_00d31730(this_00);
  }
  return uVar1;
}

/* ref: FUN_00623660 */
byte F_00623660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a065a0();
  if ((char)uVar1 == '\0') {
    return 1;
  }
  return *(char *)(param_1 + 0xa8) < '\x01';
}

/* ref: FUN_006236a0 */
byte F_006236a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6236a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a065a0();
  if ((char)uVar1 == '\0') {
    return 1;
  }
  return *(char *)(param_1 + 0xa8) < '\x01';
}

/* ref: FUN_006236e0 */
unsigned int F_006236e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6236e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(undefined * PTR32 *)(param_1 + 0xbc) != (undefined *)0x0) {
    F_00d31b70(*(undefined * PTR32 *)(param_1 + 0xbc));
  }
  return 0;
}

/* ref: FUN_00623700 */
uint F_00623700(unsigned int gen_a0)
{
  GEN_ENTER(0x623700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = *(ushort *)((int)this + 0x40);
  uVar4 = 0;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = *(uint *)((int)this + 0x4c);
      iVar5 = uVar4 * 0x120;
      if (*(int *)(uVar3 + 0xbc + iVar5) != 0) {
        if (uVar4 == 0) {
          if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
            F_009f8f80(*(undefined * PTR32 *)((int)this + 0x50),(int)this + 0x10,0);
          }
LAB_00623745: ;
          bVar2 = F_009f16f0(*(int *)((int)this + 0x4c) + iVar5,1);
          uVar3 = CONCAT31(extraout_var,bVar2);
          if (bVar2 != 0) {
            uVar3 = F_009f69f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + iVar5))));
          }
        }
        else if (uVar4 == 1) goto LAB_00623745;
        if ((uVar4 == 0) && (*(undefined * PTR32 *)((int)this + 0x54) != (undefined *)0x0)) {
          uVar3 = F_009f7590(*(undefined * PTR32 *)((int)this + 0x54));
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return uVar3;
}

/* ref: Client::Graphics::Render::PreBoneDeformer::vf1 */
uint F_00623780(unsigned int gen_a0)
{
  GEN_ENTER(0x623780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 8) != 0) {
    uVar1 = F_0050c620(*(int *)(this + 8),0,0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_006237a0 */
uint F_006237a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6237a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x74) = 0;
  uVar2 = 0;
  if (*(int *)((int)this + 0x70) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),*(int *)((int)this + 0x70));
    *(undefined4 *)((int)this + 0x70) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x68);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x68) = 0;
  }
  return uVar2;
}

/* ref: FUN_006237e0 */
uint F_006237e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6237e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = F_004d9920(*(undefined * PTR32 *)((int)this + 0x68),0,0,2);
  uVar5 = 0;
  if (uVar4 != 0) {
    piVar1 = (int *)(param_1 + 0x40);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(uint *)(param_1 + 0x50 + iVar2 * 8) = uVar4;
    iVar3 = *(int *)((int)this + 0x80);
    if (iVar3 != 0) {
      *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(iVar3 + 0x10);
      *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(iVar3 + 0x14);
      *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(iVar3 + 0x18);
      *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(iVar3 + 0x24);
      *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(iVar3 + 0x28);
      *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(iVar3 + 0x2c);
      *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(iVar3 + 0x30);
      *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar3 + 0x34);
      *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(iVar3 + 0x38);
      *(undefined4 *)((int)this + 0x60) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + 0x4c)));
      *(uint *)((int)this + 100) = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x80) + 0x40)));
    }
    uVar5 = (int)this + 0x30;
    *(uint *)(param_1 + 0x54 + iVar2 * 8) = uVar5;
  }
  return uVar5;
}

/* ref: FUN_00623880 */
uint F_00623880(unsigned int gen_a0)
{
  GEN_ENTER(0x623880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abd90));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abba4));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xac) = 0xffffffff;
  *(undefined4 *)((int)this + 0xb0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xb4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: FUN_00623920 */
byte F_00623920(unsigned int gen_a0)
{
  GEN_ENTER(0x623920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)((int)this + 0x10);
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (uVar2 < *(uint *)((int)this + 0xc)) {
    iVar3 = *(int *)((int)this + 8) + uVar2 * 0x14;
  }
  else {
    iVar3 = 0;
  }
  *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1b0))) = iVar3;
  return iVar3 != 0;
}

/* ref: FUN_00623960 */
byte F_00623960(unsigned int gen_a0)
{
  GEN_ENTER(0x623960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x4)),5,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x73686364;
  uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/PrimitiveVS.shcd",0,0,0);
  *(uint *)((int)this + 0x8c) = uVar2;
  if (uVar2 != 0) {
    uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/PrimitivePS.shcd",0,0,0);
    *(uint *)((int)this + 0x90) = uVar2;
    if (uVar2 != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x8c) + 0x98)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      }
      piVar1 = *(int * PTR32 *)((int)this + 0x94);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      }
      *(undefined4 *)((int)this + 0x94) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + 0x98)));
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x9c)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      }
      piVar1 = *(int * PTR32 *)((int)this + 0x98);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      }
      *(undefined4 *)((int)this + 0x98) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x9c)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00623a70 */
uint F_00623a70(unsigned int gen_a0)
{
  GEN_ENTER(0x623a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00662be0((undefined *)((int)this + 0x70));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10abb3c));
  return uVar1;
}

/* ref: FUN_00623ae0 */
uint F_00623ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_c;
  uint * local_8;
  
  uVar1 = *(uint *)((int)this + 0x10) >> 5;
  iVar3 = 0;
  local_c = 0;
  if (uVar1 != 0) {
    local_8 = *(uint * PTR32 *)((int)this + 8);
    do {
      if (*local_8 != 0) {
        uVar2 = 0;
        do {
          if (((*local_8 & 1 << ((byte)uVar2 & 0x1f)) != 0) &&
             (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + (iVar3 + uVar2) * 4))) == param_1)) {
            return iVar3 + uVar2;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < 0x20);
      }
      local_8 = local_8 + 1;
      local_c = local_c + 1;
      iVar3 = iVar3 + 0x20;
    } while (local_c < uVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_00623b60 */
uint F_00623b60(unsigned int gen_a0)
{
  GEN_ENTER(0x623b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  
  uVar6 = *(uint *)((int)this + 0x10) >> 5;
  uVar2 = 0;
  if (uVar6 != 0) {
    puVar5 = *(uint * PTR32 *)((int)this + 8);
    do {
      uVar1 = *puVar5;
      if (uVar1 != 0xffffffff) {
        uVar3 = 0;
        do {
          uVar4 = 1 << ((byte)uVar3 & 0x1f);
          if ((uVar1 & uVar4) == 0) {
            (*(uint * PTR32 *)((int)this + 8))[uVar2] = uVar4 | uVar1;
            return uVar2 * 0x20 + uVar3;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < 0x20);
      }
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar2 < uVar6);
  }
  return 0xffffffff;
}

/* ref: FUN_00623be0 */
byte F_00623be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined * _Dst;
  
  iVar1 = ((param_1 * 0x10 + 0x1fU >> 5) + 3 >> 2) * 0x10;
  *(int *)((int)this + 0x10) = iVar1;
  _Dst = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),iVar1,0x10)));
  *(undefined * PTR32 *)((int)this + 0xc) = _Dst;
  if (_Dst == (undefined *)0x0) {
    return 0;
  }
  F_00c48350(_Dst,0,*(gen_size32 *)((int)this + 0x10));
  return 1;
}

/* ref: Client::Graphics::Render::TerrainRenderObject::vf4 */
uint F_00623c90(unsigned int gen_a0)
{
  GEN_ENTER(0x623c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x20) != 0) {
    F_0050c620(*(int *)(this + 0x20),0,0);
    *(undefined4 *)(this + 0x20) = 0;
  }
  uVar1 = 0;
  if (*(int *)(this + 0x28) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),*(int *)(this + 0x28));
    *(undefined4 *)(this + 0x28) = 0;
  }
  return uVar1;
}

/* ref: FUN_00623cd0 */
uint F_00623cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  *(int *)((int)this + 0x20) = param_1;
  F_00513f60(param_1,0,0);
  if (*(int *)((int)this + 0x28) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),*(int *)((int)this + 0x28));
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  uVar2 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0xa8) + 4))) + 0x2c + *(int *)(param_1 + 0xa8))));
  pvVar3 = (undefined *)0x0;
  if (uVar2 != 0) {
    iVar1 = (uVar2 * 0x10 + 0x1f >> 5) * 4;
    *(int *)((int)this + 0x2c) = iVar1;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),iVar1,0x10)));
    *(undefined * PTR32 *)((int)this + 0x28) = pvVar3;
    pvVar3 = F_00c48350(pvVar3,0,*(gen_size32 *)((int)this + 0x2c));
  }
  return (uint)pvVar3;
}

/* ref: FUN_00623d60 */
uint F_00623d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  
  pfVar7 = *((float * PTR32 *)GEN_TOP((*(int *)((int)this + 0x20) + 0xf4)));
  if (pfVar7 == (float *)0x0) {
    pfVar7 = *((float * PTR32 *)GEN_TOP((*(int *)((int)this + 0x20) + 0xf0)));
  }
  uVar6 = *(ushort *)((int)this + 0x24);
  fVar8 = (float10)(int)((int)*(short *)((int)this + 8) * (uint)uVar6 + (uint)(uVar6 >> 1));
  fVar1 = pfVar7[1];
  fVar2 = pfVar7[2];
  fVar9 = (float10)(int)((int)*(short *)((int)this + 10) * (uint)uVar6 + (uint)(uVar6 >> 1));
  fVar3 = pfVar7[4];
  fVar4 = pfVar7[5];
  fVar5 = pfVar7[6];
  *param_1 = (float)(fVar8 + (float10)*pfVar7);
  param_1[1] = (float)((float10)fVar1 + (float10)0);
  param_1[2] = (float)(fVar9 + (float10)fVar2);
  param_1[4] = (float)((float10)fVar3 + fVar8);
  param_1[5] = (float)((float10)0 + (float10)fVar4);
  param_1[6] = (float)(fVar9 + (float10)fVar5);
  return (uint)param_1;
}

/* ref: FUN_00623e40 */
uint F_00623e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x623e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 0xa8)));
  uVar3 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar2 + 4) + 0x2c + iVar2))) * param_1 + param_2;
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x28) + (uVar3 >> 5) * 4)));
  uVar3 = 1 << ((byte)uVar3 & 0x1f);
  *puVar1 = *puVar1 | uVar3;
  return uVar3;
}

/* ref: FUN_00623e80 */
uint F_00623e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x623e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 0xa8)));
  uVar2 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar1 + 4) + 0x2c + iVar1))) * param_1 + param_2;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0x28) + (uVar2 >> 5) * 4))) & 1 << ((byte)uVar2 & 0x1f);
}

/* ref: FUN_00623ec0 */
uint F_00623ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x623ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar2 = *(short *)(param_1 + 10) * 0x20 + *(short *)(param_1 + 8) + 0x210;
  uVar3 = (uint)uVar2;
  *(ushort *)(param_1 + 0x26) = uVar2;
  *(int *)((int)this + uVar3 * 4 + 0x1fc) = param_1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x20) + 0x10))))(*(int * PTR32 *)(param_1 + 0x20));
  *(char *)((int)this + uVar3 * 8 + 0x11fc) = (char)uVar1;
  *(char *)((int)this + uVar3 * 8 + 0x11fd) = (char)uVar1;
  *(undefined2 *)((int)this + uVar3 * 8 + 0x11fe) = 0;
  *(undefined4 *)((int)this + uVar3 * 8 + 0x1200) = 0;
  return uVar1;
}

/* ref: FUN_00623f30 */
uint F_00623f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x623f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  undefined4 uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  undefined4 * puVar10;
  
  (*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  iVar9 = *(int *)this;
  uVar2 = *(ushort *)(iVar9 + 0x24);
  sVar3 = *(short *)(iVar9 + 8);
  sVar4 = *(short *)(iVar9 + 10);
  (*(uint *)(gen_frame + 0x48)) = param_1 + 0x10;
  pvVar5 = *(undefined * PTR32 *)((int)this + 0x10);
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(float *)(gen_frame + 0x80)) = (float)(int)((int)sVar3 * (uint)uVar2 + (uint)(uVar2 >> 1));
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(float *)(gen_frame + 0x88)) = (float)(int)((int)sVar4 * (uint)uVar2 + (uint)(uVar2 >> 1));
  puVar7 = (undefined4 *)F_004d9920(pvVar5,0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x44)) = puVar7;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x90)),(uint)&(*(undefined4 *)(gen_frame + 0x50)),(*(uint *)(gen_frame + 0x48)));
    pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x44));
    uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar10 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    ((undefined4 *)(gen_frame + 0xa0))[0] = ((undefined4 *)(gen_frame + 0x0))[0];
    ((undefined4 *)(gen_frame + 0xa0))[1] = (*(undefined4 *)(gen_frame + 0x10));
    ((undefined4 *)(gen_frame + 0xa0))[2] = (*(undefined4 *)(gen_frame + 0x20));
    ((undefined4 *)(gen_frame + 0xa0))[3] = (*(undefined4 *)(gen_frame + 0x30));
    (*(undefined4 *)(gen_frame + 0xb0)) = ((undefined4 *)(gen_frame + 0x0))[1];
    (*(undefined4 *)(gen_frame + 0xb4)) = (*(undefined4 *)(gen_frame + 0x14));
    (*(undefined4 *)(gen_frame + 0xb8)) = (*(undefined4 *)(gen_frame + 0x24));
    (*(undefined4 *)(gen_frame + 0xbc)) = (*(undefined4 *)(gen_frame + 0x34));
    (*(undefined4 *)(gen_frame + 0xc0)) = ((undefined4 *)(gen_frame + 0x0))[2];
    (*(undefined4 *)(gen_frame + 0xc4)) = (*(undefined4 *)(gen_frame + 0x18));
    (*(undefined4 *)(gen_frame + 0xc8)) = (*(undefined4 *)(gen_frame + 0x28));
    (*(undefined4 *)(gen_frame + 0xcc)) = (*(undefined4 *)(gen_frame + 0x38));
    puVar8 = ((undefined4 *)(gen_frame + 0xa0));
    puVar10 = puVar7;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    uVar1 = *(undefined4 *)((int)pvVar5 + 0xc);
    puVar7[0xc] = uVar6;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = uVar1;
    puVar7[0x10] = *param_2;
    puVar7[0x11] = param_2[1];
    puVar7[0x12] = param_2[2];
    puVar7[0x13] = param_2[3];
    puVar7[0x14] = 0;
    puVar7[0x15] = 0;
    puVar7[0x16] = 0;
    puVar7[0x17] = 0;
    *((undefined4 *)GEN_TOP((*(int *)((int)pvVar5 + 0x10) + 0x24))) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0));
  return (uint)puVar7;
}

/* ref: FUN_00624150 */
unsigned int F_00624150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x624150u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(*param_2 * 0x20 + param_1) = 3;
  *(undefined4 *)(*param_2 * 0x20 + 8 + param_1) = 0xd;
  uVar2 = REFG(undefined4, 0x130236c);
  iVar1 = *param_2;
  *(uint *)(iVar1 * 0x20 + 0x10 + param_1) = REFG(undefined4, 0x1302368) & 0xfe000000;
  *(uint *)(iVar1 * 0x20 + 0x14 + param_1) = uVar2 & 0xfffffffc;
  *(undefined4 *)(*param_2 * 0x20 + 4 + param_1) = 0x7a88286;
  *(undefined4 *)(*param_2 * 0x20 + 0x18 + param_1) = 0x19;
  *param_2 = *param_2 + 1;
  return 0;
}

/* ref: FUN_00624210 */
unsigned int F_00624210(unsigned int gen_a0)
{
  GEN_ENTER(0x624210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abe1c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  puVar1 = (undefined4 *)((int)this + 0xa0);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x88);
  iVar2 = 3;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  return 0;
}

/* ref: FUN_00624280 */
byte F_00624280(unsigned int gen_a0)
{
  GEN_ENTER(0x624280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  if (*(int *)((int)this + 4) != 0) {
    F_0050c620(*(int *)((int)this + 4),0,0);
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    F_0050c620(*(int *)((int)this + 8),0,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_0050c620(*(int *)((int)this + 0xc),0,0);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    F_0050c620(*(int *)((int)this + 0x10),0,0);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  F_004ff310(((undefined1 *)(gen_frame + 0x34)),5,0);
  (*(undefined4 *)(gen_frame + 0x38)) = 0x73686364;
  uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),"shader/shcd/StarVS0.shcd",0,0,0);
  *(uint *)((int)this + 4) = uVar2;
  uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),"shader/shcd/StarVS1.shcd",0,0,0);
  *(uint *)((int)this + 8) = uVar2;
  uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),"shader/shcd/StarPS0.shcd",0,0,0);
  *(uint *)((int)this + 0xc) = uVar2;
  uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),"shader/shcd/StarPS1.shcd",0,0,0);
  *(uint *)((int)this + 0x10) = uVar2;
  if ((((*(int *)((int)this + 4) != 0) && (*(int *)((int)this + 8) != 0)) &&
      (*(int *)((int)this + 0xc) != 0)) && (uVar2 != 0)) {
    ((char * PTR32 *)(gen_frame + 0x28))[0] = "bgcommon/nature/star/texture/star0.tex";
    ((char * PTR32 *)(gen_frame + 0x28))[1] = "bgcommon/nature/star/texture/star1.tex";
    ((char * PTR32 *)(gen_frame + 0x28))[2] = "bgcommon/nature/star/texture/star2.tex";
    F_004ff2f0(((undefined1 *)(gen_frame + 0x34)));
    uVar2 = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = REFG(undefined4, 0x1302ff0);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 5;
    (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x1d)) = 0x101;
    (*(undefined2 *)(gen_frame + 0x21)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    puVar4 = (uint *)((int)this + 0x14);
    while( true ) {
      if (*puVar4 != 0) {
        F_0050c620(*puVar4,0,0);
        *puVar4 = 0;
      }
      pcVar1 = ((char * PTR32 *)(gen_frame + 0x28))[(int)(uVar2)];
      F_00503ef0(((undefined1 *)(gen_frame + 0x34)),pcVar1);
      (*(undefined4 *)(gen_frame + 0x38)) = 0x746578;
      uVar3 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),pcVar1,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
      *puVar4 = uVar3;
      if (uVar3 == 0) break;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 1;
      if (2 < uVar2) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00624430 */
byte F_00624430(unsigned int gen_a0)
{
  GEN_ENTER(0x624430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)((int)this + 0x50);
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (uVar2 < *(uint *)((int)this + 0x4c)) {
    iVar3 = *(int *)((int)this + 0x48) + uVar2 * 0x14;
  }
  else {
    iVar3 = 0;
  }
  *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1b8))) = iVar3;
  return iVar3 != 0;
}

/* ref: FUN_00624470 */
byte F_00624470(unsigned int gen_a0)
{
  GEN_ENTER(0x624470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b52710("TransformType",0xd,0);
  uVar2 = F_00b52710("TransformTypePlane",0x12,0);
  *(uint *)((int)this + 0x18) = uVar1;
  *(uint *)((int)this + 0x1c) = uVar2;
  uVar1 = F_00b52710("TransformType",0xd,0);
  uVar2 = F_00b52710("TransformTypeBox",0x10,0);
  *(uint *)((int)this + 0x24) = uVar1;
  *(uint *)((int)this + 0x28) = uVar2;
  uVar1 = F_00b52710("Default",7,0);
  *(uint *)((int)this + 0x30) = uVar1;
  uVar1 = F_00b52710("SUB_VIEW_MAIN",0xd,0);
  *(uint *)((int)this + 0x34) = uVar1;
  uVar1 = F_00b52710("Default",7,0);
  *(uint *)((int)this + 0x3c) = uVar1;
  uVar1 = F_00b52710("SUB_VIEW_SHADOW_0",0x11,0);
  *(uint *)((int)this + 0x40) = uVar1;
  return 1;
}

/* ref: FUN_00624510 */
uint F_00624510(unsigned int gen_a0)
{
  GEN_ENTER(0x624510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10abb5c));
  F_004d6630((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x20) = 0;
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
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined1 *)((int)this + 0x10c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abe4c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10abe34));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  return (uint)this;
}

/* ref: FUN_00624650 */
byte F_00624650(unsigned int gen_a0)
{
  GEN_ENTER(0x624650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x34)),0,0);
  (*(undefined4 *)(gen_frame + 0x38)) = 0x746578;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5;
  (*(undefined4 *)(gen_frame + 0x29)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x2d)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 5000;
  (*(undefined1 *)(gen_frame + 0x28)) = 0;
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),"common/graphics/texture/-attenuation.tex",&(*(undefined4 *)(gen_frame + 0xc)),0,0);
  *(uint *)((int)this + 0x840) = uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),"common/graphics/texture/-omni_shadow_index_table.tex",
                       &(*(undefined4 *)(gen_frame + 0xc)),0,0);
  *(uint *)((int)this + 0x844) = uVar1;
  return uVar1 != 0;
}

/* ref: FUN_00624700 */
uint F_00624700(unsigned int gen_a0)
{
  GEN_ENTER(0x624700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  
  piVar6 = (int *)((int)this + 0x18);
  (*(int *)(gen_frame + 0x2c)) = 4;
  do {
    if (*(int *)((int)this + 0x14) == 0) {
      *(undefined1 *)(*piVar6 + 0x1c4) = 0;
    }
    else {
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 0x10)));
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      puVar5 = (undefined4 *)F_004f4130(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),iVar3 + 0x10);
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      iVar3 = *piVar6;
      *(undefined4 *)(iVar3 + 0x1b0) = *puVar5;
      *(undefined4 *)(iVar3 + 0x1b4) = uVar1;
      *(undefined4 *)(iVar3 + 0x1b8) = uVar2;
      *(undefined1 *)(iVar3 + 0x1c4) = 1;
      *(undefined1 *)(*piVar6 + 0x1c4) = 1;
    }
    piVar6 = piVar6 + 1;
    iVar3 = (*(int *)(gen_frame + 0x2c)) + -1;
    (*(int *)(gen_frame + 0x2c)) = iVar3;
  } while (iVar3 != 0);
  if (*(int *)((int)this + 0x14) != 0) {
    iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 0x10)));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar5 = (undefined4 *)F_004f4130(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),iVar3 + 0x10);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    iVar3 = *(int *)((int)this + 0x28);
    *(undefined4 *)(iVar3 + 0x1b0) = *puVar5;
    *(undefined4 *)(iVar3 + 0x1b4) = uVar1;
    *(undefined4 *)(iVar3 + 0x1b8) = uVar2;
    *(undefined1 *)(iVar3 + 0x1c4) = 1;
    uVar4 = *(uint *)((int)this + 0x28);
    *(undefined1 *)(uVar4 + 0x1c4) = 1;
    return uVar4;
  }
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x28) + 0x1c4))) = 0;
  return 0;
}

/* ref: FUN_00624850 */
unsigned int F_00624850(unsigned int gen_a0)
{
  GEN_ENTER(0x624850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int * piVar2;
  float * pfVar3;
  int iVar4;
  
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  pfVar3 = (float *)((int)this + 0x2c);
  iVar4 = 0x14;
  do {
    piVar2 = ((int *)(uintptr_t)gen_fl2bits((float)(pfVar3[0x14])));
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2);
      if (*pfVar3 < REFG(float, 0x1087f04)) {
        *pfVar3 = (float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x10947f0) + (float10)*pfVar3);
      }
    }
    pfVar3 = pfVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_006248b0 */
uint F_006248b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6248b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  *(int *)((int)this + 0x18) = param_1;
  *(int *)((int)this + 0x1c) = param_2;
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = F_004dcc90(param_1 * 0xc,4,8);
    *(uint *)((int)this + 0x10) = uVar2;
  }
  if (param_2 != 0) {
    uVar2 = F_004dccf0(param_2 * 2,1,4,8);
    *(uint *)((int)this + 0x14) = uVar2;
  }
  return uVar2;
}

/* ref: FUN_00624930 */
uint F_00624930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x624930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(uint *)((int)this + 0x10) == param_1) {
    return param_1;
  }
  *(uint *)((int)this + 0x10) = param_1;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abe54)));
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094884)));
  uVar1 = param_1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    *(undefined4 *)((int)this + 0x2c) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x2c), REFG(float, 0x1094884));
    *(undefined4 *)((int)this + 0x30) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x30), REFG(float, 0x10abe58));
    uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0da0)));
    *(undefined4 *)((int)this + 0x14) = 1;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 2;
    *(undefined4 *)((int)this + 0x24) = 3;
    *(undefined4 *)((int)this + 0x34) = uVar3;
    *(undefined1 *)((int)this + 0x4d) = 1;
    *(undefined4 *)((int)this + 0x18) = 1;
    return 1;
  case 1: ;
    *(undefined4 *)((int)this + 0x2c) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x2c), REFG(float, 0x1094884));
    *(undefined4 *)((int)this + 0x30) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x30), REFG(float, 0x10946b4));
    uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0da0)));
    *(undefined4 *)((int)this + 0x24) = 3;
    break;
  case 2: ;
    *(undefined4 *)((int)this + 0x2c) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x2c), REFG(float, 0x1094884));
    uVar2 = 2;
    *(undefined4 *)((int)this + 0x30) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x30), REFG(float, 0x10916ec));
    uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0da0)));
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x24) = 2;
    goto LAB_00624abc;
  case 3: ;
    *(undefined4 *)((int)this + 0x2c) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x2c), REFG(float, 0x1094884));
    *(undefined4 *)((int)this + 0x30) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x30), REFG(float, 0x10abe54));
    uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0da0)));
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x1c) = 2;
    *(undefined4 *)((int)this + 0x24) = 1;
    *(undefined4 *)((int)this + 0x20) = 1;
    *(undefined4 *)((int)this + 0x34) = uVar3;
    *(undefined1 *)((int)this + 0x4d) = 1;
    *(undefined4 *)((int)this + 0x18) = 1;
    return 1;
  case 4: ;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x1c) = 1;
    *(undefined4 *)((int)this + 0x20) = 2;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x2c) = uVar3;
    *(undefined4 *)((int)this + 0x30) = uVar2;
    *(undefined4 *)((int)this + 0x34) = uVar3;
    *(undefined1 *)((int)this + 0x4d) = 1;
    *(undefined4 *)((int)this + 0x18) = 1;
    return 1;
  case 5: ;
    *(undefined4 *)((int)this + 0x2c) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x2c), REFG(float, 0x1094884));
    *(undefined4 *)((int)this + 0x30) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x30), REFG(float, 0x10946b4));
    uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abe50)));
    *(undefined4 *)((int)this + 0x24) = 2;
    break;
  default: ;
    goto switchD_0062494b_default;
  }
  uVar2 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
LAB_00624abc: ;
  uVar1 = 1;
  *(undefined4 *)((int)this + 0x1c) = uVar2;
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined4 *)((int)this + 0x34) = uVar3;
  *(undefined1 *)((int)this + 0x4d) = 1;
  *(undefined4 *)((int)this + 0x18) = 1;
switchD_0062494b_default: ;
  return uVar1;
}

/* ref: FUN_00624af0 */
unsigned int F_00624af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x624af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x128) + param_1 * 4)));
  *param_2 = **(undefined4 * PTR32 *)(iVar1 + 0x10);
  param_2[1] = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x10) + 4)));
  param_2[2] = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x10) + 8)));
  *param_3 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x14) * (float10)*(float *)(iVar1 + 0x20))));
  param_3[1] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x18) * (float10)*(float *)(iVar1 + 0x20))));
  param_3[2] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x1c) * (float10)*(float *)(iVar1 + 0x20))));
  *param_4 = *(undefined4 *)(iVar1 + 0x70);
  *param_5 = *(undefined4 *)(iVar1 + 0x7c);
  return 0;
}

/* ref: FUN_00624b90 */
uint F_00624b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x624b90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined2 *)(in_ecx + 8) = 0;
  in_ecx[5] = 5;
  in_ecx[4] = 5;
  in_ecx[7] = 0;
  in_ecx[6] = 0;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00624be0 */
uint F_00624be0(unsigned int gen_a0)
{
  GEN_ENTER(0x624be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 5;
  *(undefined4 *)((int)this + 0x14) = 5;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  return (uint)this;
}

/* ref: FUN_00624c30 */
uint F_00624c30(unsigned int gen_a0)
{
  GEN_ENTER(0x624c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined * this_00;
  uint uVar5;
  
  uVar5 = F_00b14060(REFG(void * PTR32, 0x1370c1c),6);
  *(uint *)((int)this + 0x24) = uVar5;
  *(undefined * PTR32 *)(uVar5 + 4) = this;
  puVar4 = *(undefined4 * PTR32 *)((int)this + 0x28);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  this_00 = *(undefined * PTR32 *)((int)this + 0x24);
  (*(undefined4 *)(gen_frame + 0x0)) = *puVar4;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0xc)) = uVar3;
  uVar5 = F_00b81ed0(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar5;
}

/* ref: FUN_00624ca0 */
uint F_00624ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x624ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  float * pfVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  (*(int *)(gen_frame + 0x2c)) = REFG(int, 0x1370c1c);
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  (*(int *)(gen_frame + 0x30)) = *(int *)(REFG(int, 0x1370c1c) + 0x3924) * 0x800 + 0x650 + REFG(int, 0x1370c1c);
  uVar5 = F_00500600(*(undefined4 *)((int)this + 0x20));
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x28)) = *(uint *)(uVar5 + 8);
  if (*(uint *)(uVar5 + 8) != 0) {
    (*(int *)(gen_frame + 0x38)) = 0;
    pfVar7 = (float *)(uVar5 + 0x5c);
    do {
      fVar9 = (float10)REFG(double, 0x1088108);
      (*(float *)(gen_frame + 0x34)) = pfVar7[-4];
      fVar10 = (float10)pfVar7[-4];
      fVar1 = (float)((float10)pfVar7[-1] - fVar10);
      (*(float *)(gen_frame + 0x10)) = fVar1;
      (*(float *)(gen_frame + 0x34)) = pfVar7[-3];
      fVar11 = (float10)pfVar7[-3];
      fVar2 = (float)((float10)*pfVar7 - fVar11);
      (*(float *)(gen_frame + 0x14)) = fVar2;
      (*(float *)(gen_frame + 0x34)) = pfVar7[-2];
      fVar12 = (float10)pfVar7[-2];
      fVar3 = (float)((float10)pfVar7[1] - fVar12);
      (*(float *)(gen_frame + 0x18)) = fVar3;
      (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar1 * fVar9 + fVar10);
      (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar2 * fVar9 + fVar11);
      (*(float *)(gen_frame + 0x8)) = (float)(fVar12 + (float10)fVar3 * fVar9);
      uVar5 = F_00b13590((*(int *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)));
      *((bool *)GEN_TOP(((*(int *)(gen_frame + 0x38)) + 0x21 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x30)))) = uVar5 != 0;
      bVar6 = (byte)uVar8;
      (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 0x30;
      bVar4 = (uVar5 != 0) << (bVar6 & 0x1f);
      uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar4);
      uVar8 = uVar8 + 1;
      pfVar7 = pfVar7 + 0x10;
      *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xc) =
           ~('\x01' << (bVar6 & 0x1f)) & *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xc) | bVar4;
    } while (uVar8 < (*(uint *)(gen_frame + 0x28)));
  }
  return uVar5;
}

/* ref: FUN_00624dd0 */
uint F_00624dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x624dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar1 = F_00500600(*(undefined4 *)((int)this + 0x20));
  uVar1 = *(uint *)(uVar1 + 8);
  uVar4 = 0;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      *((char *)GEN_TOP((*(int *)((int)this + 0x30) + 0x21 + uVar2))) = (char)param_1;
      bVar3 = (byte)uVar4;
      uVar4 = uVar4 + 1;
      uVar2 = uVar2 + 0x30;
      *(byte *)((int)this + 0xc) =
           ~('\x01' << (bVar3 & 0x1f)) & *(byte *)((int)this + 0xc) |
           ((char)param_1 != '\0') << (bVar3 & 0x1f);
    } while (uVar4 < uVar1);
  }
  return uVar2;
}

/* ref: FUN_00624e40 */
byte F_00624e40(unsigned int gen_a0)
{
  GEN_ENTER(0x624e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  
  uVar1 = *(ushort *)((int)this + 0x2c);
  local_8 = 5;
  if (uVar1 != 0) {
    local_8 = *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 0x10)));
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      if (((*(byte *)((int)this + 0xc) >> ((byte)uVar2 & 0x1f) & 1) == 0) ||
         (local_8 != *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 0x10 + iVar3))))) {
        return 0;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x30;
    } while (uVar2 < uVar1);
  }
  return 1;
}

/* ref: FUN_00624ed0 */
float F_00624ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x624ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  pfVar8 = *(float * PTR32 *)((int)this + 0x28);
  fVar1 = pfVar8[1];
  fVar7 = *pfVar8;
  (*(float *)(gen_frame + 0x20)) = fVar7;
  (*(float *)(gen_frame + 0x24)) = fVar1;
  fVar2 = pfVar8[2];
  ((float *)(gen_frame + 0x28))[0] = fVar2;
  fVar3 = *pfVar8;
  (*(float *)(gen_frame + 0x10)) = fVar3;
  fVar4 = pfVar8[1];
  (*(float *)(gen_frame + 0x14)) = fVar4;
  fVar5 = pfVar8[2];
  ((float *)(gen_frame + 0x18))[0] = fVar5;
  fVar6 = pfVar8[3];
  (*(float *)(gen_frame + 0x0)) = fVar6;
  (*(float *)(gen_frame + 0x4)) = fVar6;
  ((float *)(gen_frame + 0x8))[0] = fVar6;
  pfVar8 = &(*(float *)(gen_frame + 0x20));
  fVar7 = (float)((float10)fVar7 - (float10)fVar6);
  (*(float *)(gen_frame + 0x20)) = fVar7;
  fVar1 = (float)((float10)fVar1 - (float10)fVar6);
  (*(float *)(gen_frame + 0x24)) = fVar1;
  fVar2 = (float)((float10)fVar2 - (float10)fVar6);
  ((float *)(gen_frame + 0x28))[0] = fVar2;
  fVar3 = (float)((float10)fVar3 + (float10)fVar6);
  (*(float *)(gen_frame + 0x10)) = fVar3;
  fVar4 = (float)((float10)fVar6 + (float10)fVar4);
  (*(float *)(gen_frame + 0x14)) = fVar4;
  fVar5 = (float)((float10)fVar6 + (float10)fVar5);
  ((float *)(gen_frame + 0x18))[0] = fVar5;
  (*(float *)(gen_frame + 0x3c)) = *param_1;
  fVar9 = (float10)*param_1;
  if (!(fVar9 < (float10)fVar7)) {
    pfVar8 = param_1;
  }
  fVar6 = *pfVar8;
  pfVar8 = param_1 + 1;
  (*(float *)(gen_frame + 0x3c)) = param_1[1];
  fVar10 = (float10)param_1[1];
  (*(float *)(gen_frame + 0x0)) = fVar6;
  if (fVar10 < (float10)fVar1) {
    pfVar8 = &(*(float *)(gen_frame + 0x24));
  }
  fVar1 = *pfVar8;
  pfVar8 = param_1 + 2;
  (*(float *)(gen_frame + 0x3c)) = param_1[2];
  fVar11 = (float10)param_1[2];
  (*(float *)(gen_frame + 0x4)) = fVar1;
  if (fVar11 < (float10)fVar2) {
    pfVar8 = ((float *)(gen_frame + 0x28));
  }
  fVar2 = *pfVar8;
  ((float *)(gen_frame + 0x8))[0] = fVar2;
  pfVar8 = &(*(float *)(gen_frame + 0x10));
  if (!((float10)fVar3 < (float10)fVar6)) {
    pfVar8 = &(*(float *)(gen_frame + 0x0));
  }
  fVar3 = *pfVar8;
  (*(float *)(gen_frame + 0x20)) = fVar3;
  pfVar8 = &(*(float *)(gen_frame + 0x14));
  if (!((float10)fVar4 < (float10)fVar1)) {
    pfVar8 = &(*(float *)(gen_frame + 0x4));
  }
  fVar1 = *pfVar8;
  (*(float *)(gen_frame + 0x24)) = fVar1;
  pfVar8 = ((float *)(gen_frame + 0x18));
  if (!((float10)fVar5 < (float10)fVar2)) {
    pfVar8 = ((float *)(gen_frame + 0x8));
  }
  fVar2 = *pfVar8;
  ((float *)(gen_frame + 0x28))[0] = fVar2;
  fVar3 = (float)((float10)fVar3 - fVar9);
  (*(float *)(gen_frame + 0x0)) = fVar3;
  fVar1 = (float)((float10)fVar1 - fVar10);
  (*(float *)(gen_frame + 0x4)) = fVar1;
  fVar2 = (float)((float10)fVar2 - fVar11);
  ((float *)(gen_frame + 0x8))[0] = fVar2;
  fVar9 = (float10)fVar1;
  fVar10 = (float10)fVar3;
  fVar11 = (float10)fVar2;
  fVar1 = ((float)GEN_TOF((fVar11 * fVar11 + (fVar10 * fVar10 + fVar9 * fVar9))));
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  return fVar1;
}

/* ref: FUN_00625080 */
uint F_00625080(unsigned int gen_a0)
{
  GEN_ENTER(0x625080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  int local_8;
  int * piVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abe60));
  F_00621320(this);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11fc) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  puVar2 = (undefined4 *)((int)this + 0x11fc);
  iVar3 = 2;
  do {
    puVar2 = puVar2 + -3;
    iVar3 = iVar3 + -1;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar3);
  puVar2 = (undefined4 *)((int)this + 0x11d8);
  iVar3 = 1;
  do {
    puVar2 = puVar2 + -3;
    iVar3 = iVar3 + -1;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar3);
  puVar2 = (undefined4 *)((int)this + 0x11c0);
  iVar3 = 1;
  do {
    puVar2 = puVar2 + -3;
    iVar3 = iVar3 + -1;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar3);
  puVar2 = (undefined4 *)((int)this + 0x11a8);
  iVar3 = 1;
  do {
    puVar2 = puVar2 + -3;
    iVar3 = iVar3 + -1;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar3);
  local_8 = 1;
  piVar4 = (int *)((int)this + 0x1164);
  do {
    piVar5 = piVar4 + -3;
    piVar4 = piVar4 + -2;
    iVar3 = 2;
    do {
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    piVar4 = (int *)*piVar5;
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
      *piVar5 = 0;
    }
    local_8 = local_8 + -1;
    piVar4 = piVar5;
  } while (-1 < local_8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  return (uint)this;
}

/* ref: FUN_006251c0 */
uint F_006251c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6251c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  
  pfVar7 = *((float * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xf8)));
  if (pfVar7 == (float *)0x0) {
    pfVar7 = *((float * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xf0)));
  }
  uVar6 = *(ushort *)((int)this + 8);
  fVar8 = (float10)(int)((int)*(short *)((int)this + 10) * (uint)uVar6 + (uint)(uVar6 >> 1));
  fVar1 = pfVar7[1];
  fVar2 = pfVar7[2];
  fVar9 = (float10)(int)((int)*(short *)((int)this + 0xc) * (uint)uVar6 + (uint)(uVar6 >> 1));
  fVar3 = pfVar7[4];
  fVar4 = pfVar7[5];
  fVar5 = pfVar7[6];
  *param_1 = (float)(fVar8 + (float10)*pfVar7);
  param_1[1] = (float)((float10)fVar1 + (float10)0);
  param_1[2] = (float)(fVar9 + (float10)fVar2);
  param_1[4] = (float)((float10)fVar3 + fVar8);
  param_1[5] = (float)((float10)0 + (float10)fVar4);
  param_1[6] = (float)(fVar9 + (float10)fVar5);
  return (uint)param_1;
}

/* ref: FUN_006252a0 */
uint F_006252a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6252a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  uVar2 = ((*(int *)(param_1 + 0xc) * 4 ^ *(uint *)(iVar1 + 0x3c)) & 4 ^ *(uint *)(iVar1 + 0x3c)) &
          0x7fffffff;
  *(uint *)(iVar1 + 0x3c) = uVar2;
  return uVar2;
}

/* ref: FUN_00625340 */
uint F_00625340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x625340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  short sVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  float * pfVar4;
  
  uVar3 = CONCAT22((short)((uint)in_EAX >> 0x10),(undefined2)param_1);
  *(undefined2 *)((int)this + 0xc) = (undefined2)param_2;
  *(undefined2 *)((int)this + 10) = (undefined2)param_1;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    pfVar4 = (float *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x14),0,0,2);
    uVar3 = 0;
    if (pfVar4 != (float *)0x0) {
      uVar1 = *(ushort *)((int)this + 8);
      sVar2 = *(short *)((int)this + 0xc);
      *pfVar4 = (float)(int)((int)*(short *)((int)this + 10) * (uint)uVar1 + (uint)(uVar1 >> 1));
      pfVar4[1] = 0.0;
      pfVar4[2] = (float)(int)((int)sVar2 * (uint)uVar1 + (uint)(uVar1 >> 1));
      pfVar4[3] = 0.0;
      uVar3 = *(uint *)((int)this + 0x14);
      *(undefined4 *)(uVar3 + 0x24) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_006253e0 */
uint F_006253e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6253e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  
  pfVar7 = *((float * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xfc)));
  uVar6 = *(ushort *)((int)this + 8);
  fVar8 = (float10)(int)((int)*(short *)((int)this + 10) * (uint)uVar6 + (uint)(uVar6 >> 1));
  fVar1 = pfVar7[1];
  fVar2 = pfVar7[2];
  fVar9 = (float10)(int)((int)*(short *)((int)this + 0xc) * (uint)uVar6 + (uint)(uVar6 >> 1));
  fVar3 = pfVar7[4];
  fVar4 = pfVar7[5];
  fVar5 = pfVar7[6];
  *param_1 = (float)(fVar8 + (float10)*pfVar7);
  param_1[1] = (float)((float10)fVar1 + (float10)0);
  param_1[2] = (float)(fVar9 + (float10)fVar2);
  param_1[4] = (float)((float10)fVar3 + fVar8);
  param_1[5] = (float)((float10)0 + (float10)fVar4);
  param_1[6] = (float)(fVar9 + (float10)fVar5);
  return (uint)param_1;
}

/* ref: FUN_00625530 */
unsigned int F_00625530(unsigned int gen_a0)
{
  GEN_ENTER(0x625530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  uint * puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  float fVar13;
  undefined4 uVar14;
  uint * local_c;
  
  uVar14 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar12 = (float10)*(double *)&REFG(undefined, 0x1094788);
  *(short *)this = *(short *)this + 1;
  fVar3 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  uVar9 = 0;
  fVar13 = REFG(float, 0x10ab17c);
  puVar8 = this;
  do {
    local_c = puVar8 + 1;
    uVar7 = *local_c;
    if (uVar7 != 0) {
      uVar10 = 0;
      uVar11 = 1;
      do {
        if ((uVar7 & uVar11) != 0) {
          iVar1 = uVar9 + uVar10;
          cVar6 = *(char *)((int)this + iVar1 * 0x18 + 0x26);
          iVar2 = iVar1 * 0x18;
          fVar4 = ((float)GEN_TOF(((float10)*(float *)((int)this + iVar1 * 0x18 + 0x30) + (float10)fVar3)));
          if (cVar6 == '\0') {
            if ((GEN_ISNAN(fVar4) || GEN_ISNAN(REFG(float, 0x1088068))) || fVar4 < REFG(float, 0x1088068)) {
              fVar5 = (float)((float10)fVar4 * fVar12);
              *(float *)((int)this + iVar2 + 0x34) = fVar5;
              if ((float10)1 < (float10)fVar5) {
                *(undefined4 *)((int)this + iVar2 + 0x34) = uVar14;
              }
              fVar5 = ((float)GEN_TOF((((float10)REFG(double, 0x1088108) - (float10)fVar4) * fVar12)));
              *(float *)((int)this + iVar2 + 0x38) = fVar5;
              if (!((float10)1 < (float10)fVar5)) goto LAB_00625638;
              *(undefined4 *)((int)this + iVar2 + 0x38) = uVar14;
              *(float *)((int)this + iVar2 + 0x30) = fVar4;
            }
            else {
LAB_0062563f: ;
              ((code *)*(gen_code32 *)(&REFG(undefined, 0x13205e0) + (uint)*(byte *)((int)this + iVar2 + 0x25) * 4))
                        (*(undefined4 *)((int)this + iVar2 + 0x2c));
              fVar12 = (float10)*(double *)&REFG(undefined, 0x1094788);
              fVar13 = REFG(float, 0x10ab17c);
              uVar14 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
            }
          }
          else if (cVar6 == '\x01') {
            if ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar13)) && !(fVar4 < fVar13)) goto LAB_0062563f;
            *(undefined4 *)((int)this + iVar2 + 0x38) = 0;
            *(float *)((int)this + iVar2 + 0x30) = fVar4;
            *(float *)((int)this + iVar2 + 0x34) = (float)((float10)fVar4 * fVar12);
          }
          else {
            if (cVar6 == '\x02') {
              if ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar13)) && !(fVar4 < fVar13)) goto LAB_0062563f;
              *(undefined4 *)((int)this + iVar2 + 0x38) = 0;
              *(float *)((int)this + iVar2 + 0x34) =
                   ((float)GEN_TOF((((float10)*(double *)&REFG(undefined, 0x1094878) - (float10)fVar4) * fVar12)));
            }
LAB_00625638: ;
            *(float *)((int)this + iVar2 + 0x30) = fVar4;
          }
        }
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      } while (uVar10 < 0x20);
    }
    uVar9 = uVar9 + 0x20;
    puVar8 = local_c;
    if (0xff < uVar9) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_006256b0 */
byte F_006256b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6256b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  
  puVar1 = (uint *)((int)this + 0x6b10);
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (uVar2 < *(uint *)((int)this + 0x6b0c)) {
    iVar5 = *(int *)((int)this + 0x6b08) + uVar2 * 0x14;
  }
  else {
    iVar5 = 0;
  }
  iVar3 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  *(int *)(iVar3 + 0x1ac) = iVar5;
  if (iVar5 != 0) {
    puVar1 = (uint *)((int)this + 0xacb0);
    LOCK();
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if (uVar2 < *(uint *)((int)this + 0xacac)) {
      iVar5 = *(int *)((int)this + 0xaca8) + uVar2 * 0x14;
    }
    else {
      iVar5 = 0;
    }
    *(int *)(iVar3 + 0x1b4) = iVar5;
    if (iVar5 != 0) {
      bVar4 = F_00624430((undefined *)((int)this + 0x10528));
      if (bVar4 != 0) {
        bVar4 = F_00623920(REFG(void * PTR32, 0x1487c60));
        return bVar4 != 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00625750 */
uint F_00625750(unsigned int gen_a0)
{
  GEN_ENTER(0x625750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * puVar1;
  undefined4 * this;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                     (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0x30,0x10)));
  this = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[8] = 0;
    puVar1[10] = 0;
    puVar1[1] = 1;
    *puVar1 = (*(undefined * PTR32 (*)[8])REFP(0x10abde0));
    *(undefined2 *)(puVar1 + 9) = 0x80;
    this = puVar1;
  }
  F_00623cd0(this,param_1);
  return (uint)this;
}

/* ref: FUN_006257b0 */
uint F_006257b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6257b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                            (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0x18,0x10)));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[1] = 1;
    *piVar1 = (int)(*(undefined * PTR32 (*)[8])REFP(0x10abe78));
    *(undefined4 *)((int)piVar1 + 10) = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
  }
  uVar2 = F_004dcd60(0x40,2,0);
  piVar1[5] = uVar2;
  if (uVar2 == 0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    return 0;
  }
  piVar1[4] = param_1;
  F_00513f60(param_1,0,0);
  return (uint)piVar1;
}

/* ref: FUN_00625830 */
uint F_00625830(unsigned int gen_a0)
{
  GEN_ENTER(0x625830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                     (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0x90,0x10)));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abc60)));
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = (*(undefined * PTR32 (*)[8])REFP(0x10abc40));
    puVar2[1] = 1;
    *(undefined2 *)(puVar2 + 2) = 0;
    *(undefined2 *)((int)puVar2 + 10) = 0;
    puVar2[4] = param_1;
    puVar2[3] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[0xc] = uVar1;
    puVar2[0xd] = uVar1;
    puVar2[0xe] = uVar1;
    uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abc38)));
    puVar2[0x10] = GEN_FLT_TO(puVar2[0x10], REFG(float, 0x10abc38));
    puVar2[0x11] = uVar1;
    puVar2[0x12] = uVar1;
    uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
    puVar2[0x14] = GEN_FLT_TO(puVar2[0x14], REFG(float, 0x1088068));
    puVar2[0x15] = uVar1;
    uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar2[0x16] = 1;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1c] = uVar1;
    puVar2[0x1d] = GEN_FLT_TO(puVar2[0x1d], REFG(float, 0x10947a4));
    puVar2[0x1e] = GEN_FLT_TO(puVar2[0x1e], REFG(float, 0x1094880));
    puVar2[0x1f] = 0;
    puVar2[0x20] = 0;
    puVar2[0x21] = 0;
    return (uint)puVar2;
  }
  return 0;
}

/* ref: FUN_00625920 */
unsigned int F_00625920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x625920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (REFG(void * PTR32, 0x1487c64) != (undefined *)0x0) {
    F_00b803a0(REFG(void * PTR32, 0x1487c64));
  }
  return 0;
}

/* ref: FUN_00625940 */
byte F_00625940(void)
{
  GEN_ENTER(0x625940u, 0u, 0u, 0u, 0u);
  *(undefined1 *)(REFG(int, 0x1370c1c) + 6) = 0;
  *(undefined1 *)(REFG(int, 0x1370c1c) + 4) = 0;
  return 0;
}

/* ref: FUN_00625960 */
byte F_00625960(void)
{
  GEN_ENTER(0x625960u, 0u, 0u, 0u, 0u);
  *(undefined1 *)(REFG(int, 0x1370c1c) + 6) = 1;
  *(undefined1 *)(REFG(int, 0x1370c1c) + 4) = 1;
  return 1;
}

/* ref: FUN_00625980 */
uint F_00625980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x625980u, gen_a0, gen_a1, gen_a2, 0u);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  uint * in_edx = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  if (*param_3 < *in_eax) {
    in_eax = param_3;
  }
  if (*in_eax <= *in_edx) {
    in_eax = in_edx;
  }
  return (uint)in_eax;
}

/* ref: FUN_006259a0 */
byte F_006259a0(void)
{
  GEN_ENTER(0x6259a0u, 0u, 0u, 0u, 0u);
  undefined * this;
  byte bVar1;
  
  this = REFG(void * PTR32, 0x137128c);
  if (REFG(void * PTR32, 0x137128c) != (undefined *)0x0) {
    bVar1 = F_0067a800(REFG(void * PTR32, 0x137128c));
    if (bVar1 != 0) {
      F_0067d150(this);
    }
  }
  return 1;
}

/* ref: FUN_006259d0 */
byte F_006259d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6259d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  cVar1 = *(char *)((int)this + 0x20);
  if (cVar1 == '\0') {
    uVar3 = REFG(undefined4, 0x1302378) & 0xfffffeff | 0x2c0;
  }
  else if (cVar1 == '\x01') {
    uVar3 = REFG(undefined4, 0x1302378) & 0xffffff7f | 0x340;
  }
  else {
    uVar3 = REFG(undefined4, 0x1302378) | 0x3c0;
    if (cVar1 != '\x02') {
      *(undefined1 *)((int)this + 0x20) = 2;
    }
  }
  cVar1 = *(char *)((int)this + 0x21);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar3 = uVar3 & 0xfcffffff | 0x4000000;
      goto LAB_00625a22;
    }
    if (cVar1 == '\x02') {
      uVar3 = uVar3 | 0x7000000;
      goto LAB_00625a22;
    }
    *(undefined1 *)((int)this + 0x21) = 0;
  }
  uVar3 = uVar3 & 0xfaffffff | 0x2000000;
LAB_00625a22: ;
  iVar2 = REFG(int, 0x1370b90);
  iVar5 = *(int *)(REFG(int, 0x1370b90) + 0x24);
  if (iVar5 != 0) {
    iVar4 = 0;
    do {
      *((uint *)GEN_TOP((*(int *)(iVar2 + 4) + 0x5a8 + iVar4))) = uVar3 & 0x70003c0;
      iVar4 = iVar4 + 0x5b0;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 1;
}

/* ref: FUN_00625a70 */
byte F_00625a70(void)
{
  GEN_ENTER(0x625a70u, 0u, 0u, 0u, 0u);
  *(undefined1 *)(REFG(int, 0x1370b90) + 0x50) = 1;
  return 1;
}

/* ref: FUN_00625a80 */
unsigned int F_00625a80(unsigned int gen_a0)
{
  GEN_ENTER(0x625a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(uint *)(REFG(int, 0x1371280) + 0x14) = (uint)*(byte *)((int)this + 0x26);
  iVar2 = REFG(int, 0x1371280);
  *(uint *)(REFG(int, 0x1371280) + 0x20) = (uint)*(byte *)((int)this + 0x27);
  *(undefined1 *)(iVar2 + 0x4d) = 1;
  iVar2 = REFG(int, 0x1371280);
  cVar1 = *(char *)((int)this + 0x28);
  uVar3 = 0;
  uVar4 = 0;
  if (cVar1 == '\0') {
    uVar3 = 0;
    uVar4 = 1;
  }
  else if (cVar1 == '\x01') {
    uVar3 = 1;
    uVar4 = 2;
  }
  else if (cVar1 == '\x02') {
    uVar3 = 3;
  }
  *(undefined4 *)(REFG(int, 0x1371280) + 0x24) = uVar3;
  *(undefined1 *)(iVar2 + 0x4d) = 1;
  *(undefined4 *)(REFG(int, 0x1371280) + 0x1c) = uVar4;
  return 0;
}

/* ref: FUN_00625af0 */
byte F_00625af0(unsigned int gen_a0)
{
  GEN_ENTER(0x625af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_009d53c0(REFG(void * PTR32, 0x1487c90),(uint)(*(char *)((int)this + 0x29) == '\0'));
  F_00984440(REFG(undefined4, 0x1487c8c),(uint)(*(char *)((int)this + 0x2a) == '\0'));
  F_00984460(REFG(undefined4, 0x1487c8c),(uint)(*(char *)((int)this + 0x2b) == '\0'));
  return 1;
}

/* ref: FUN_00625b40 */
byte F_00625b40(unsigned int gen_a0)
{
  GEN_ENTER(0x625b40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(REFG(int, 0x1487c58) + 0x8018) = *(undefined1 *)(in_ecx + 0x16);
  return 1;
}

/* ref: FUN_00625b60 */
byte F_00625b60(unsigned int gen_a0)
{
  GEN_ENTER(0x625b60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(REFG(int, 0x137127c) + 0xebe1) = *(undefined1 *)(in_ecx + 0x1f);
  return 1;
}

/* ref: Client::Graphics::Render::Light::vf4 */
uint F_00625b80(unsigned int gen_a0)
{
  GEN_ENTER(0x625b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x1371284);
  if (*(undefined * PTR32 *)(REFG(undefined4, 0x1371284) + 0x14) == this) {
    *(undefined4 *)(REFG(undefined4, 0x1371284) + 0x14) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x84);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x84) = 0;
  }
  return uVar2;
}

/* ref: FUN_00625bc0 */
uint F_00625bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x625bc0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar6;
  int iVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  
  iVar1 = *(int *)((*(int *)&gen_args[0]) + 0xc);
  if ((iVar1 == 1) || (iVar1 == 6)) {
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x7c) = GEN_FLT_TO(*(undefined4 *)((*(int *)&gen_args[0]) + 0x7c), REFG(float, 0x10abc38));
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x80) = 0;
    return 0;
  }
  fVar2 = *(float *)((*(int *)&gen_args[0]) + 0x18);
  fVar3 = *(float *)((*(int *)&gen_args[0]) + 0x14);
  fVar4 = *(float *)((*(int *)&gen_args[0]) + 0x1c);
  ((float *)(gen_frame + 0x4))[1] = fVar2;
  ((float *)(gen_frame + 0x4))[2] = fVar4;
  ((float *)(gen_frame + 0x4))[0] = fVar3;
  (*(float *)(gen_frame + 0x10)) = *(float *)((*(int *)&gen_args[0]) + 0x20);
  pfVar8 = ((float *)(gen_frame + 0x4)) + 2;
  if (!((float10)fVar2 < (float10)fVar4)) {
    pfVar8 = ((float *)(gen_frame + 0x4)) + 1;
  }
  if (!((float10)fVar3 < (float10)*pfVar8)) {
    pfVar8 = ((float *)(gen_frame + 0x4));
  }
  iVar7 = *(int *)((*(int *)&gen_args[0]) + 0x58);
  fVar2 = ((float)GEN_TOF(((float10)*pfVar8 * (float10)*(float *)((*(int *)&gen_args[0]) + 0x20))));
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = *(float *)((*(int *)&gen_args[0]) + 0x70);
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar9 = (float10)fVar2;
  fVar10 = (float10)fVar3;
  fVar2 = ((float)GEN_TOF((fVar9 / ((float10)*(double *)&REFG(undefined, 0x10abf50) * fVar10))));
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = ((float)GEN_TOF((fVar9 / (fVar10 * (float10)*(double *)&REFG(undefined, 0x10abf48)))));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  if (iVar7 == 1) {
    (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(SQRT((float10)fVar2)));
    fVar2 = ((float)GEN_TOF(SQRT((float10)fVar3)));
    (*(float *)(gen_frame + 0x18)) = fVar2;
    iVar7 = 0;
  }
  else {
    iVar7 = iVar7 + -2;
    if (iVar7 != 0) goto LAB_00625ca1;
    fVar9 = ((float10)GEN_TOD(pow((float10)fVar2,(float10)*(double *)&REFG(undefined, 0x10a1918))));
    (*(float *)(gen_frame + 0x14)) = (float)fVar9;
    fVar9 = ((float10)GEN_TOD(pow((float10)fVar3,(float10)*(double *)&REFG(undefined, 0x10a1918))));
    fVar2 = (float)fVar9;
    (*(float *)(gen_frame + 0x18)) = fVar2;
  }
  (*(float *)(gen_frame + 0x18)) = fVar2;
LAB_00625ca1: ;
  if (((char)(*(uint *)&gen_args[1]) != '\0') && (iVar1 == 5)) {
    (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x10) + 0x20))) * (float10)REFG(double, 0x1088108) +
                     (float10)(*(float *)(gen_frame + 0x18)))));
  }
  *(float *)((*(int *)&gen_args[0]) + 0x7c) = (*(float *)(gen_frame + 0x14));
  fVar2 = REFG(float, 0x1094884);
  dVar6 = REFG(double, 0x1094800);
  if ((char)(*(uint *)&gen_args[1]) == '\0') {
    return CONCAT31((int3)((uint)iVar7 >> 8),(char)(*(uint *)&gen_args[1]));
  }
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x14)));
  *(float *)((*(int *)&gen_args[0]) + 0x80) = (*(float *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0x18)) = fVar2;
  pfVar8 = (float *)&(*(uint *)&gen_args[1]);
  if (!(dVar6 < (double)(*(float *)(gen_frame + 0x14)))) {
    pfVar8 = &(*(float *)(gen_frame + 0x18));
  }
  *(float *)((*(int *)&gen_args[0]) + 0x54) = *pfVar8;
  return (uint)pfVar8;
}

/* ref: FUN_00625d30 */
byte F_00625d30(unsigned int gen_a0)
{
  GEN_ENTER(0x625d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = REFG(undefined4, 0x1375a88);
  *(undefined4 *)((int)this + 0x74) = REFG(undefined4, 0x1375a8c);
  *(undefined4 *)((int)this + 0x78) = REFG(undefined4, 0x1375a90);
  *(undefined4 *)((int)this + 0x7c) = uVar1;
  uVar2 = F_004dcd60(0x50,2,9);
  *(uint *)((int)this + 0x80) = uVar2;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xa0) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xa0), REFG(float, 0x1088068));
  *(undefined1 *)((int)this + 0xa4) = 0;
  *(undefined * PTR32 *)((int)this + 0x88) = REFG(void * PTR32, 0x137fa00);
  REFG(void * PTR32, 0x137fa00) = this;
  return 1;
}

/* ref: FUN_00625e20 */
uint F_00625e20(float gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x625e20u, gen_trace_f(gen_a0), gen_a1, gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  float fVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int * piVar8;
  float * pfVar9;
  float * PTR32 * ppfVar10;
  int iVar11;
  int iVar12;
  float * pfVar13;
  float * pfVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  float fVar18;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  (*(float *)(gen_frame + 0x10)) = param_1;
  if (param_2 != *(int *)((int)gen_fl2bits(param_1) + 0x8c)) {
    fVar18 = param_3;
    if (*(int *)((int)gen_fl2bits(param_1) + 0x8c) == 0) {
      fVar18 = 0.0;
    }
    *(float *)((int)gen_fl2bits(param_1) + 0x90) = fVar18;
    *(undefined4 *)((int)gen_fl2bits(param_1) + 0x94) = 0;
    *(undefined4 *)((int)gen_fl2bits(param_1) + 0x98) = 0;
    *(int *)((int)gen_fl2bits(param_1) + 0x8c) = param_2;
  }
  iVar11 = REFG(int, 0x1371290);
  if (param_2 != 0) {
    pfVar9 = *(float * PTR32 *)(param_2 + 0x78);
    pfVar13 = *(float * PTR32 *)(param_2 + 0x7c);
    (*(float * PTR32 *)(gen_frame + 0x3c)) = pfVar9;
    (*(float * PTR32 *)(gen_frame + 0xc)) = pfVar13;
    if (pfVar9 != (float *)0x0) {
      fVar18 = ((float)GEN_TOF((((float10)*(float *)((int)gen_fl2bits(param_1) + 0x98) +
                       (float10)*(float *)((int)gen_fl2bits(param_1) + 0x98)) -
                      (float10)REFG(double, 0x1088130))));
      F_004c3ac0((int)gen_fl2bits(param_1) + 0x90,*(float *)(REFG(int, 0x137104c) + 0x1198),1);
      fVar7 = (*(float *)(gen_frame + 0x10));
      pfVar13 = *(float * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x9c);
      (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar13;
      if (*(float *)&REFG(undefined, 0x1088114) < ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar13)))) {
        pfVar14 = (float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 4);
        (*(float * PTR32 *)(gen_frame + 0x18)) = pfVar14;
        F_004bebc0(pfVar14,pfVar14,pfVar9 + 0x66,((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar13))));
        fVar4 = pfVar9[0x81];
        (*(float *)(gen_frame + 0x20)) = fVar4;
        fVar17 = *(float *)((int)gen_fl2bits(fVar7) + 0x70);
        fVar5 = pfVar9[0x82];
        (*(float *)(gen_frame + 0x24)) = fVar5;
        fVar1 = *(float *)((int)gen_fl2bits(fVar7) + 0x74);
        fVar6 = pfVar9[0x83];
        (*(float *)(gen_frame + 0x28)) = fVar6;
        fVar2 = *(float *)((int)gen_fl2bits(fVar7) + 0x78);
        fVar15 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1c)))));
        pfVar13 = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - fVar15))));
        (*(float * PTR32 *)(gen_frame + 0x3c)) = pfVar13;
        fVar16 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar13)));
        fVar17 = (float)(fVar16 * (float10)fVar17);
        (*(float *)(gen_frame + 0x20)) = fVar17;
        fVar1 = (float)((float10)fVar1 * fVar16);
        (*(float *)(gen_frame + 0x24)) = fVar1;
        fVar2 = (float)(fVar16 * (float10)fVar2);
        (*(float *)(gen_frame + 0x28)) = fVar2;
        fVar17 = ((float)GEN_TOF(((float10)fVar17 + (float10)(float)(fVar15 * (float10)fVar4))));
        fVar1 = ((float)GEN_TOF(((float10)fVar1 + (float10)(float)((float10)fVar5 * fVar15))));
        fVar2 = ((float)GEN_TOF(((float10)fVar2 + (float10)(float)((float10)fVar6 * fVar15))));
        (*(float *)(gen_frame + 0x24)) = fVar17;
        *(float *)((int)gen_fl2bits(fVar7) + 0x70) = fVar17;
        (*(float *)(gen_frame + 0x28)) = fVar1;
        (*(float *)(gen_frame + 0x2c)) = fVar2;
        *(float *)((int)gen_fl2bits(fVar7) + 0x74) = fVar1;
        *(float *)((int)gen_fl2bits(fVar7) + 0x78) = fVar2;
        fVar17 = F_00697300(*(undefined * PTR32 *)((int)gen_fl2bits(fVar7) + 0x8c));
        *(float *)((int)gen_fl2bits(fVar7) + 0x7c) =
             ((float)GEN_TOF(((float10)*(float *)((int)gen_fl2bits(fVar7) + 0x7c) *
                     (float10)(double)((float10)1 - fVar15) +
                    (float10)fVar17 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1c))))))));
        pfVar13 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)*(float *)((int)gen_fl2bits(fVar7) + 0x98) +
                                   (float10)*(float *)((int)gen_fl2bits(fVar7) + 0x98)) -
                                  (float10)REFG(double, 0x1088130)))))));
        (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar13;
        if ((!GEN_ISNAN(fVar18) && !(0.0 <= fVar18)) && ((float10)0 <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar13))))) {
          if ((*(float * PTR32 *)(gen_frame + 0xc)) != (float *)0x0) {
            ((code *)*(gen_code32 *)((int)gen_fl2bits(*(*(float * PTR32 *)(gen_frame + 0xc))) + 8))((*(float * PTR32 *)(gen_frame + 0xc)));
          }
          piVar8 = *(int * PTR32 *)((int)gen_fl2bits(fVar7) + 0x84);
          if (piVar8 != (int *)0x0) {
            ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
          }
          *(float * PTR32 *)((int)gen_fl2bits(fVar7) + 0x84) = (*(float * PTR32 *)(gen_frame + 0xc));
        }
        (*(float * PTR32 *)(gen_frame + 0x8)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1c)))))))))));
        (*(float * PTR32 *)(gen_frame + 0x3c)) = (*(float * PTR32 *)(gen_frame + 0x8));
      }
      else {
        (*(float * PTR32 *)(gen_frame + 0x18)) = (float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 4);
        pfVar9 = pfVar9 + 0x66;
        pfVar13 = (float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 4);
        for (iVar11 = 0x1b; iVar11 != 0; iVar11 = iVar11 + -1) {
          *pfVar13 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          pfVar13 = pfVar13 + 1;
        }
        *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x70) = (*(float * PTR32 *)(gen_frame + 0x3c))[0x81];
        *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x74) = (*(float * PTR32 *)(gen_frame + 0x3c))[0x82];
        *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x78) = (*(float * PTR32 *)(gen_frame + 0x3c))[0x83];
        fVar18 = F_00697300(*(undefined * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x8c));
        pfVar9 = (*(float * PTR32 *)(gen_frame + 0xc));
        *(float *)((int)gen_fl2bits(fVar7) + 0x7c) = fVar18;
        if ((*(float * PTR32 *)(gen_frame + 0xc)) != (float *)0x0) {
          ((code *)*(gen_code32 *)((int)gen_fl2bits(*(*(float * PTR32 *)(gen_frame + 0xc))) + 8))((*(float * PTR32 *)(gen_frame + 0xc)));
        }
        piVar8 = *(int * PTR32 *)((int)gen_fl2bits(fVar7) + 0x84);
        if (piVar8 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
        }
        pfVar13 = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        *(float * PTR32 *)((int)gen_fl2bits(fVar7) + 0x84) = pfVar9;
        (*(float * PTR32 *)(gen_frame + 0x8)) = pfVar13;
        pfVar9 = (*(float * PTR32 *)(gen_frame + 0x3c));
      }
      (*(float *)(gen_frame + 0x14)) = gen_bits2f(*(int *)(REFG(int, 0x137127c) + 0x66f4) + 0x10);
      fVar18 = *(float *)(REFG(int, 0x1371290) + 0x664);
      fVar17 = *(float *)(REFG(int, 0x1371290) + 0x668);
      (*(float *)(gen_frame + 0x10)) = fVar17;
      if ((!GEN_ISNAN(fVar17) && !GEN_ISNAN(REFG(float, 0x10947f8))) && !(fVar17 <= REFG(float, 0x10947f8))) {
        fVar15 = (float10)fVar17;
        pfVar9 = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)pfVar9[0x42] / (float10)*(float *)&REFG(undefined, 0x1097920) +
                                 (float10)*(double *)&REFG(undefined, 0x108bec8)))));
        (*(float * PTR32 *)(gen_frame + 0x3c)) = pfVar9;
        (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((fVar15 / ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar9))) * ((float10)1 - fVar15) + fVar15))));
      }
      pfVar9 = (float *)F_004d9920(*(undefined * PTR32 *)((int)gen_fl2bits(fVar7) + 0x80),0,
                                     *((undefined4 *)GEN_TOP(((int)*(undefined * PTR32 *)((int)gen_fl2bits(fVar7) + 0x80) + 0xc))),2);
      fVar17 = 0.0;
      if (pfVar9 != (float *)0x0) {
        F_00660ae0((*(float * PTR32 *)(gen_frame + 0x18)),((float *)(gen_frame + 0x40)));
        (*(float * PTR32 *)(gen_frame + 0xc)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)(gen_frame + 0x40));
        (*(float * PTR32 *)(gen_frame + 0x18)) = (float *)0x3;
        do {
          F_004eebf0((*(float * PTR32 *)(gen_frame + 0x1c)),(uint)gen_fl2bits((*(float *)(gen_frame + 0x14))));
          fVar17 = (*(float * PTR32 *)(gen_frame + 0x1c))[1];
          ppfVar10 = &(*(float * PTR32 *)(gen_frame + 0xc));
          (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)fVar17))))));
          fVar1 = *(*(float * PTR32 *)(gen_frame + 0x1c));
          (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)fVar1))))));
          fVar2 = (*(float * PTR32 *)(gen_frame + 0x1c))[2];
          (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)fVar2))))));
          fVar4 = (*(float * PTR32 *)(gen_frame + 0x1c))[3];
          (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)fVar4))))));
          pfVar13 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((((float10)((float)GEN_TOF(ABS((float10)fVar17))) +
                                      (float10)((float)GEN_TOF(ABS((float10)fVar1)))) +
                                     (float10)((float)GEN_TOF(ABS((float10)fVar2)))) +
                                    (float10)((float)GEN_TOF(ABS((float10)fVar4)))))))));
          (*(float * PTR32 *)(gen_frame + 0x3c)) = pfVar13;
          if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar13))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc))))))) {
            ppfVar10 = &(*(float * PTR32 *)(gen_frame + 0x3c));
          }
          pfVar13 = *ppfVar10;
          pfVar14 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x18)) + -1);
          (*(float * PTR32 *)(gen_frame + 0x18)) = pfVar14;
          (*(float * PTR32 *)(gen_frame + 0xc)) = pfVar13;
          (*(float * PTR32 *)(gen_frame + 0x1c)) = (*(float * PTR32 *)(gen_frame + 0x1c)) + 4;
        } while (pfVar14 != (float *)0x0);
        fVar15 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar13)));
        fVar17 = (float)((float10)((float *)(gen_frame + 0x40))[0] / fVar15);
        ((float *)(gen_frame + 0x40))[0] = fVar17;
        fVar1 = (float)((float10)((float *)(gen_frame + 0x40))[1] / fVar15);
        ((float *)(gen_frame + 0x40))[1] = fVar1;
        fVar2 = (float)((float10)((float *)(gen_frame + 0x40))[2] / fVar15);
        ((float *)(gen_frame + 0x40))[2] = fVar2;
        fVar4 = (float)((float10)((float *)(gen_frame + 0x40))[3] / fVar15);
        ((float *)(gen_frame + 0x40))[3] = fVar4;
        (*(float *)(gen_frame + 0x20)) = fVar17;
        (*(float *)(gen_frame + 0x24)) = fVar1;
        *pfVar9 = fVar17;
        (*(float *)(gen_frame + 0x28)) = fVar2;
        pfVar9[1] = fVar1;
        (*(float *)(gen_frame + 0x2c)) = fVar4;
        pfVar9[2] = fVar2;
        pfVar9[3] = fVar4;
        fVar17 = (float)((float10)((float *)(gen_frame + 0x40))[4] / fVar15);
        ((float *)(gen_frame + 0x40))[4] = fVar17;
        fVar1 = (float)((float10)((float *)(gen_frame + 0x40))[5] / fVar15);
        ((float *)(gen_frame + 0x40))[5] = fVar1;
        fVar2 = (float)((float10)((float *)(gen_frame + 0x40))[6] / fVar15);
        ((float *)(gen_frame + 0x40))[6] = fVar2;
        fVar4 = (float)((float10)(*(float *)(gen_frame + 0x5c)) / fVar15);
        (*(float *)(gen_frame + 0x5c)) = fVar4;
        (*(float *)(gen_frame + 0x20)) = fVar17;
        (*(float *)(gen_frame + 0x24)) = fVar1;
        pfVar9[4] = fVar17;
        (*(float *)(gen_frame + 0x28)) = fVar2;
        pfVar9[5] = fVar1;
        (*(float *)(gen_frame + 0x2c)) = fVar4;
        pfVar9[6] = fVar2;
        pfVar9[7] = fVar4;
        fVar17 = (float)((float10)(*(float *)(gen_frame + 0x60)) / fVar15);
        (*(float *)(gen_frame + 0x60)) = fVar17;
        fVar1 = (float)((float10)(*(float *)(gen_frame + 0x64)) / fVar15);
        (*(float *)(gen_frame + 0x64)) = fVar1;
        fVar2 = (float)((float10)(*(float *)(gen_frame + 0x68)) / fVar15);
        (*(float *)(gen_frame + 0x68)) = fVar2;
        fVar4 = (float)((float10)(*(float *)(gen_frame + 0x6c)) / fVar15);
        (*(float *)(gen_frame + 0x6c)) = fVar4;
        (*(float *)(gen_frame + 0x20)) = fVar17;
        (*(float *)(gen_frame + 0x24)) = fVar1;
        pfVar9[8] = fVar17;
        (*(float *)(gen_frame + 0x28)) = fVar2;
        (*(float *)(gen_frame + 0x2c)) = fVar4;
        pfVar9[9] = fVar1;
        pfVar9[10] = fVar2;
        pfVar9[0xb] = fVar4;
        pfVar9[0xc] = *(float *)((int)gen_fl2bits(fVar7) + 0x70);
        fVar17 = *(float *)((int)gen_fl2bits(fVar7) + 0x74);
        pfVar9[0xd] = fVar17;
        fVar1 = *(float *)((int)gen_fl2bits(fVar7) + 0x78);
        pfVar9[0x10] = ((float)GEN_TOF(((float10)fVar18 * ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x8))))) * (float10)(*(float *)(gen_frame + 0x10))))));
        pfVar9[0xe] = fVar1;
        pfVar9[0xf] = 0.0;
        pfVar9[0x12] = 0.0;
        pfVar9[0x13] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar13)));
        pfVar9[0x11] = ((float)GEN_TOF(((float10)fVar18 *
                              (((float10)1 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x8)))))) * (float10)REFG(double, 0x1088108) +
                              ((float10)1 - (float10)(*(float *)(gen_frame + 0x10)))))));
        *((undefined4 *)GEN_TOP((*(int *)((int)gen_fl2bits(fVar7) + 0x80) + 0x24))) = 0;
      }
      goto LAB_006265f1;
    }
  }
  fVar17 = gen_bits2f(REFG(int, 0x1371290) + 0x550);
  pfVar9 = (float *)((int)gen_fl2bits(param_1) + 4);
  pfVar13 = (float *)(REFG(int, 0x1371290) + 0x5f0);
  pfVar14 = pfVar9;
  for (iVar12 = 0x1b; pfVar3 = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04))), iVar12 != 0; iVar12 = iVar12 + -1) {
    *pfVar14 = *pfVar13;
    pfVar13 = pfVar13 + 1;
    pfVar14 = pfVar14 + 1;
  }
  fVar18 = *pfVar9;
  (*(float * PTR32 *)(gen_frame + 0x18)) = pfVar9;
  fVar15 = (float10)0;
  *(float *)((int)gen_fl2bits(param_1) + 0x70) =
       (float)((float10)fVar18 / (float10)*(float *)&REFG(undefined, 0x1097920) + fVar15);
  *(float *)((int)gen_fl2bits(param_1) + 0x74) =
       ((float)GEN_TOF(((float10)*(float *)((int)gen_fl2bits(param_1) + 0x28) /
               (float10)*(float *)&REFG(undefined, 0x1097920) + fVar15)));
  *(float *)((int)gen_fl2bits(param_1) + 0x78) =
       ((float)GEN_TOF(((float10)*(float *)((int)gen_fl2bits(param_1) + 0x4c) /
               (float10)*(float *)&REFG(undefined, 0x1097920) + fVar15)));
  *(float * PTR32 *)((int)gen_fl2bits(param_1) + 0x7c) = pfVar3;
  iVar12 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  pfVar9 = (float *)F_004d9920(*(undefined * PTR32 *)((int)gen_fl2bits(param_1) + 0x80),0,0,2);
  if (pfVar9 == (float *)0x0) {
    fVar17 = 0.0;
  }
  else {
    F_00660ae0((*(float * PTR32 *)(gen_frame + 0x18)),((float *)(gen_frame + 0x40)));
    (*(float * PTR32 *)(gen_frame + 0x18)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    pfVar13 = ((float *)(gen_frame + 0x40));
    (*(float * PTR32 *)(gen_frame + 0x1c)) = (float *)0x3;
    do {
      F_004eebf0(pfVar13,iVar12 + 0x10);
      ppfVar10 = &(*(float * PTR32 *)(gen_frame + 0x18));
      (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(ABS((float10)pfVar13[1])));
      (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(ABS((float10)*pfVar13)));
      (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(ABS((float10)pfVar13[2])));
      (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(ABS((float10)pfVar13[3])));
      pfVar14 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((((float10)((float)GEN_TOF(ABS((float10)pfVar13[1]))) +
                                  (float10)((float)GEN_TOF(ABS((float10)*pfVar13)))) +
                                 (float10)((float)GEN_TOF(ABS((float10)pfVar13[2])))) +
                                (float10)((float)GEN_TOF(ABS((float10)pfVar13[3])))))))));
      (*(float * PTR32 *)(gen_frame + 0x3c)) = pfVar14;
      if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar14))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x18))))))) {
        ppfVar10 = &(*(float * PTR32 *)(gen_frame + 0x3c));
      }
      pfVar14 = *ppfVar10;
      pfVar13 = pfVar13 + 4;
      pfVar3 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x1c)) + -1);
      (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar3;
      (*(float * PTR32 *)(gen_frame + 0x18)) = pfVar14;
    } while (pfVar3 != (float *)0x0);
    fVar15 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar14)));
    fVar18 = (float)((float10)((float *)(gen_frame + 0x40))[0] / fVar15);
    ((float *)(gen_frame + 0x40))[0] = fVar18;
    fVar7 = (float)((float10)((float *)(gen_frame + 0x40))[1] / fVar15);
    ((float *)(gen_frame + 0x40))[1] = fVar7;
    fVar1 = (float)((float10)((float *)(gen_frame + 0x40))[2] / fVar15);
    ((float *)(gen_frame + 0x40))[2] = fVar1;
    fVar2 = (float)((float10)((float *)(gen_frame + 0x40))[3] / fVar15);
    ((float *)(gen_frame + 0x40))[3] = fVar2;
    (*(float *)(gen_frame + 0x20)) = fVar18;
    (*(float *)(gen_frame + 0x24)) = fVar7;
    *pfVar9 = fVar18;
    (*(float *)(gen_frame + 0x28)) = fVar1;
    pfVar9[1] = fVar7;
    (*(float *)(gen_frame + 0x2c)) = fVar2;
    pfVar9[2] = fVar1;
    pfVar9[3] = fVar2;
    fVar18 = (float)((float10)((float *)(gen_frame + 0x40))[4] / fVar15);
    ((float *)(gen_frame + 0x40))[4] = fVar18;
    fVar7 = (float)((float10)((float *)(gen_frame + 0x40))[5] / fVar15);
    ((float *)(gen_frame + 0x40))[5] = fVar7;
    fVar1 = (float)((float10)((float *)(gen_frame + 0x40))[6] / fVar15);
    ((float *)(gen_frame + 0x40))[6] = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x5c)) / fVar15);
    (*(float *)(gen_frame + 0x5c)) = fVar2;
    (*(float *)(gen_frame + 0x20)) = fVar18;
    (*(float *)(gen_frame + 0x24)) = fVar7;
    pfVar9[4] = fVar18;
    (*(float *)(gen_frame + 0x28)) = fVar1;
    pfVar9[5] = fVar7;
    (*(float *)(gen_frame + 0x2c)) = fVar2;
    pfVar9[6] = fVar1;
    pfVar9[7] = fVar2;
    fVar18 = (float)((float10)(*(float *)(gen_frame + 0x60)) / fVar15);
    (*(float *)(gen_frame + 0x60)) = fVar18;
    fVar7 = (float)((float10)(*(float *)(gen_frame + 0x64)) / fVar15);
    (*(float *)(gen_frame + 0x64)) = fVar7;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0x68)) / fVar15);
    (*(float *)(gen_frame + 0x68)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x6c)) / fVar15);
    (*(float *)(gen_frame + 0x6c)) = fVar2;
    (*(float *)(gen_frame + 0x20)) = fVar18;
    (*(float *)(gen_frame + 0x24)) = fVar7;
    pfVar9[8] = fVar18;
    (*(float *)(gen_frame + 0x28)) = fVar1;
    (*(float *)(gen_frame + 0x2c)) = fVar2;
    pfVar9[9] = fVar7;
    pfVar9[10] = fVar1;
    pfVar9[0xb] = fVar2;
    (*(float *)(gen_frame + 0x24)) = *(float *)(iVar11 + 0x5d0);
    fVar18 = *(float *)(iVar11 + 0x5d4);
    (*(float *)(gen_frame + 0x28)) = fVar18;
    fVar7 = *(float *)(iVar11 + 0x5d8);
    pfVar9[0xc] = *(float *)(iVar11 + 0x5d0);
    pfVar9[0xd] = fVar18;
    (*(float *)(gen_frame + 0x2c)) = fVar7;
    pfVar9[0xe] = fVar7;
    pfVar9[0xf] = 0.0;
    pfVar9[0x10] = *(float *)(iVar11 + 0x664);
    pfVar9[0x11] = 0.0;
    pfVar9[0x12] = 0.0;
    pfVar9[0x13] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar14)));
    *((undefined4 *)GEN_TOP((*(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x80) + 0x24))) = 0;
  }
  fVar18 = (*(float *)(gen_frame + 0x10));
  piVar8 = *(int * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x84);
  if (piVar8 != (int *)0x0) {
    fVar17 = gen_bits2f(((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8));
    *(undefined4 *)((int)gen_fl2bits(fVar18) + 0x84) = 0;
  }
LAB_006265f1: ;
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return (uint)gen_fl2bits(fVar17);
}

/* ref: FUN_00626610 */
uint F_00626610(unsigned int gen_a0)
{
  GEN_ENTER(0x626610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float * pfVar5;
  int * piVar6;
  float fVar7;
  float * pfVar8;
  float * PTR32 * ppfVar9;
  float * pfVar10;
  uint uVar11;
  int * piVar12;
  float10 fVar13;
  float10 fVar14;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  (*(float *)(gen_frame + 0x14)) = gen_bits2f(REFG(int, 0x1371290) + 0x550);
  (*(float *)(gen_frame + 0x18)) = gen_bits2f(*(int *)(REFG(int, 0x137127c) + 0x66f4) + 0x10);
  pfVar8 = (float *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x84),0,
                                 *((undefined4 *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x84) + 0xc))),2);
  if (pfVar8 != (float *)0x0) {
    if ((REFG(undefined4, 0x1487cb0) & 1) == 0) {
      REFG(undefined4, 0x1487cb0) = REFG(undefined4, 0x1487cb0) | 1;
      *(undefined4 *)&REFG(undefined, 0x1487ca0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1487ca0), REFG(float, 0x10abf58));
      *(undefined4 *)&REFG(undefined, 0x1487ca4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1487ca4), REFG(float, 0x10abf58));
      *(undefined4 *)&REFG(undefined, 0x1487ca8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1487ca8), REFG(float, 0x10abf58));
    }
    if ((REFG(undefined4, 0x1487cb0) & 2) == 0) {
      REFG(undefined4, 0x1487cb0) = REFG(undefined4, 0x1487cb0) | 2;
      REFG(float, 0x1487c94) = REFG(float, 0x10a0da0);
      REFG(float, 0x1487c98) = REFG(float, 0x10a0da0);
      REFG(float, 0x1487c9c) = REFG(float, 0x10a0da0);
    }
    fVar13 = (float10)*(float *)&REFG(undefined, 0x1321e88);
    ((float *)(gen_frame + 0x40))[0] = 0.0;
    ((float *)(gen_frame + 0x40))[9] = 0.0;
    ((float *)(gen_frame + 0x40))[0x12] = 0.0;
    ((float *)(gen_frame + 0x40))[1] = 0.0;
    ((float *)(gen_frame + 0x40))[2] = 0.0;
    (*(float *)(gen_frame + 0x3c)) = (float)((float10)1 - fVar13);
    ((float *)(gen_frame + 0x40))[3] = 0.0;
    fVar14 = (float10)(float)((float10)1 - fVar13);
    ((float *)(gen_frame + 0x40))[4] = 0.0;
    ((float *)(gen_frame + 0x40))[5] = 0.0;
    ((float *)(gen_frame + 0x40))[6] = 0.0;
    ((float *)(gen_frame + 0x40))[7] = 0.0;
    ((float *)(gen_frame + 0x40))[8] = 0.0;
    ((float *)(gen_frame + 0x40))[10] = 0.0;
    ((float *)(gen_frame + 0x40))[0xb] = 0.0;
    fVar1 = (float)((float10)REFG(float, 0x1487c94) * fVar14);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    ((float *)(gen_frame + 0x40))[0xc] = 0.0;
    ((float *)(gen_frame + 0x40))[0xd] = 0.0;
    ((float *)(gen_frame + 0x40))[0xe] = 0.0;
    ((float *)(gen_frame + 0x40))[0xf] = 0.0;
    ((float *)(gen_frame + 0x40))[0x10] = 0.0;
    ((float *)(gen_frame + 0x40))[0x11] = 0.0;
    ((float *)(gen_frame + 0x40))[0x13] = 0.0;
    fVar2 = (float)((float10)REFG(float, 0x1487c98) * fVar14);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    ((float *)(gen_frame + 0x40))[0x14] = 0.0;
    ((float *)(gen_frame + 0x40))[0x15] = 0.0;
    ((float *)(gen_frame + 0x40))[0x16] = 0.0;
    ((float *)(gen_frame + 0x40))[0x17] = 0.0;
    ((float *)(gen_frame + 0x40))[0x18] = 0.0;
    ((float *)(gen_frame + 0x40))[0x19] = 0.0;
    fVar3 = (float)((float10)REFG(float, 0x1487c9c) * fVar14);
    (*(float *)(gen_frame + 0x28)) = fVar3;
    ((float *)(gen_frame + 0x40))[0x1a] = 0.0;
    fVar14 = (float10)*(float *)&REFG(undefined, 0x1097920);
    ((float *)(gen_frame + 0x40))[0] = (float)((float10)0.0 + fVar14 * (float10)fVar1);
    ((float *)(gen_frame + 0x40))[9] = (float)((float10)fVar2 * fVar14 + (float10)0.0);
    ((float *)(gen_frame + 0x40))[0x12] = (float)(fVar14 * (float10)fVar3 + (float10)0.0);
    fVar1 = (float)(fVar13 * (float10)REFG(float, 0x1487c94));
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = (float)((float10)REFG(float, 0x1487c98) * fVar13);
    (*(float *)(gen_frame + 0x28)) = (float)((float10)REFG(float, 0x1487c9c) * fVar13);
    F_004be890(((float *)(gen_frame + 0x40)),fVar1,0x1487ca0,(float)(float10)1);
    F_004be890(((float *)(gen_frame + 0x40)) + 9,(*(float *)(gen_frame + 0x24)),0x1487ca0,(float)(float10)1);
    F_004be890(((float *)(gen_frame + 0x40)) + 0x12,(*(float *)(gen_frame + 0x28)),0x1487ca0,(float)(float10)1);
    F_00660ae0(((float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0xb0)));
    (*(float * PTR32 *)(gen_frame + 0x38)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    fVar1 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xb0)))));
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    ppfVar9 = &(*(float * PTR32 *)(gen_frame + 0x38));
    fVar2 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xb4)))));
    (*(float *)(gen_frame + 0x3c)) = fVar2;
    fVar3 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xb8)))));
    (*(float *)(gen_frame + 0x3c)) = fVar3;
    fVar4 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xbc)))));
    (*(float *)(gen_frame + 0x3c)) = fVar4;
    pfVar10 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)fVar4 + ((float10)fVar3 + ((float10)fVar2 + (float10)fVar1))
                              ))))));
    (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar10;
    if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10))) < (float10)1)) {
      ppfVar9 = &(*(float * PTR32 *)(gen_frame + 0x1c));
    }
    pfVar10 = *ppfVar9;
    ppfVar9 = &(*(float * PTR32 *)(gen_frame + 0x38));
    (*(float * PTR32 *)(gen_frame + 0x38)) = pfVar10;
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xc4)))));
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xc0)))));
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xc8)))));
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xcc)))));
    pfVar5 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((((float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xc4))))) +
                               (float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xc0)))))) +
                              (float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xc8)))))) +
                             (float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xcc)))))))))));
    (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar5;
    if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar5))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10))))) {
      ppfVar9 = &(*(float * PTR32 *)(gen_frame + 0x1c));
    }
    pfVar10 = *ppfVar9;
    ppfVar9 = &(*(float * PTR32 *)(gen_frame + 0x38));
    (*(float * PTR32 *)(gen_frame + 0x38)) = pfVar10;
    fVar1 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xd0)))));
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    fVar2 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xd4)))));
    (*(float *)(gen_frame + 0x3c)) = fVar2;
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xd8)))));
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xdc)))));
    pfVar5 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xdc))))) +
                             ((float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xd8))))) +
                             ((float10)fVar2 + (float10)fVar1))))))));
    (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar5;
    if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar5))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10))))) {
      ppfVar9 = &(*(float * PTR32 *)(gen_frame + 0x1c));
    }
    pfVar10 = *ppfVar9;
    (*(float * PTR32 *)(gen_frame + 0x38)) = pfVar10;
    fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10)));
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0xb0)) / fVar13);
    (*(float *)(gen_frame + 0xb0)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0xb4)) / fVar13);
    (*(float *)(gen_frame + 0xb4)) = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0xb8)) / fVar13);
    (*(float *)(gen_frame + 0xb8)) = fVar3;
    fVar4 = (float)((float10)(*(float *)(gen_frame + 0xbc)) / fVar13);
    (*(float *)(gen_frame + 0xbc)) = fVar4;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    *pfVar8 = fVar1;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    pfVar8[1] = fVar2;
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    pfVar8[2] = fVar3;
    pfVar8[3] = fVar4;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0xc0)) / fVar13);
    (*(float *)(gen_frame + 0xc0)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0xc4)) / fVar13);
    (*(float *)(gen_frame + 0xc4)) = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0xc8)) / fVar13);
    (*(float *)(gen_frame + 0xc8)) = fVar3;
    fVar4 = (float)((float10)(*(float *)(gen_frame + 0xcc)) / fVar13);
    (*(float *)(gen_frame + 0xcc)) = fVar4;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    pfVar8[4] = fVar1;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    pfVar8[5] = fVar2;
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    pfVar8[6] = fVar3;
    pfVar8[7] = fVar4;
    fVar7 = REFG(float, 0x1321e84);
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0xd0)) / fVar13);
    (*(float *)(gen_frame + 0xd0)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0xd4)) / fVar13);
    (*(float *)(gen_frame + 0xd4)) = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0xd8)) / fVar13);
    (*(float *)(gen_frame + 0xd8)) = fVar3;
    fVar4 = (float)((float10)(*(float *)(gen_frame + 0xdc)) / fVar13);
    (*(float *)(gen_frame + 0xdc)) = fVar4;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    pfVar8[8] = fVar1;
    pfVar8[9] = fVar2;
    pfVar8[10] = fVar3;
    pfVar8[0xb] = fVar4;
    pfVar8[0xc] = GEN_FLT_TO(pfVar8[0xc], REFG(float, 0x1487c94));
    pfVar8[0xd] = GEN_FLT_TO(pfVar8[0xd], REFG(float, 0x1487c98));
    fVar1 = REFG(float, 0x1487c9c);
    pfVar8[0xf] = 0.0;
    pfVar8[0x10] = 0.0;
    pfVar8[0x12] = 0.0;
    pfVar8[0xe] = fVar1;
    pfVar8[0x11] = fVar7;
    pfVar8[0x13] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10)));
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x84) + 0x24))) = 0;
  }
  pfVar8 = (float *)F_004d9920(*(undefined * PTR32 *)((int)this + 300),0,
                                 *((undefined4 *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 300) + 0xc))),2);
  if (pfVar8 != (float *)0x0) {
    F_00660ae0((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0xa0,&(*(float *)(gen_frame + 0xb0)));
    (*(float * PTR32 *)(gen_frame + 0x1c)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(float * PTR32 *)(gen_frame + 0x38)) = &(*(float *)(gen_frame + 0xb0));
    (*(float *)(gen_frame + 0x3c)) = 4.2039e-45;
    do {
      F_004eebf0((*(float * PTR32 *)(gen_frame + 0x38)),(uint)gen_fl2bits((*(float *)(gen_frame + 0x18))));
      pfVar5 = (*(float * PTR32 *)(gen_frame + 0x38));
      fVar1 = (*(float * PTR32 *)(gen_frame + 0x38))[1];
      ppfVar9 = &(*(float * PTR32 *)(gen_frame + 0x1c));
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)fVar1))))));
      fVar2 = *pfVar5;
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)fVar2))))));
      fVar3 = pfVar5[2];
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)fVar3))))));
      fVar4 = pfVar5[3];
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)fVar4))))));
      pfVar10 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((((float10)((float)GEN_TOF(ABS((float10)fVar1))) +
                                  (float10)((float)GEN_TOF(ABS((float10)fVar2)))) +
                                 (float10)((float)GEN_TOF(ABS((float10)fVar3)))) +
                                (float10)((float)GEN_TOF(ABS((float10)fVar4)))))))));
      (*(float * PTR32 *)(gen_frame + 0x38)) = pfVar10;
      if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1c))))))) {
        ppfVar9 = &(*(float * PTR32 *)(gen_frame + 0x38));
      }
      pfVar10 = *ppfVar9;
      fVar1 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + -1);
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar10;
      (*(float * PTR32 *)(gen_frame + 0x38)) = pfVar5 + 4;
    } while (fVar1 != 0.0);
    fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10)));
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0xb0)) / fVar13);
    (*(float *)(gen_frame + 0xb0)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0xb4)) / fVar13);
    (*(float *)(gen_frame + 0xb4)) = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0xb8)) / fVar13);
    (*(float *)(gen_frame + 0xb8)) = fVar3;
    fVar4 = (float)((float10)(*(float *)(gen_frame + 0xbc)) / fVar13);
    (*(float *)(gen_frame + 0xbc)) = fVar4;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    *pfVar8 = fVar1;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    pfVar8[1] = fVar2;
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    pfVar8[2] = fVar3;
    pfVar8[3] = fVar4;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0xc0)) / fVar13);
    (*(float *)(gen_frame + 0xc0)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0xc4)) / fVar13);
    (*(float *)(gen_frame + 0xc4)) = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0xc8)) / fVar13);
    (*(float *)(gen_frame + 0xc8)) = fVar3;
    fVar4 = (float)((float10)(*(float *)(gen_frame + 0xcc)) / fVar13);
    (*(float *)(gen_frame + 0xcc)) = fVar4;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    pfVar8[4] = fVar1;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    pfVar8[5] = fVar2;
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    pfVar8[6] = fVar3;
    pfVar8[7] = fVar4;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0xd0)) / fVar13);
    (*(float *)(gen_frame + 0xd0)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0xd4)) / fVar13);
    (*(float *)(gen_frame + 0xd4)) = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0xd8)) / fVar13);
    (*(float *)(gen_frame + 0xd8)) = fVar3;
    fVar4 = (float)((float10)(*(float *)(gen_frame + 0xdc)) / fVar13);
    (*(float *)(gen_frame + 0xdc)) = fVar4;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    pfVar8[8] = fVar1;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    pfVar8[9] = fVar2;
    pfVar8[10] = fVar3;
    pfVar8[0xb] = fVar4;
    (*(float *)(gen_frame + 0x24)) = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x80);
    fVar1 = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x84);
    (*(float *)(gen_frame + 0x28)) = fVar1;
    fVar2 = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x88);
    pfVar8[0xc] = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x80);
    pfVar8[0xd] = fVar1;
    (*(float *)(gen_frame + 0x2c)) = fVar2;
    pfVar8[0xe] = fVar2;
    pfVar8[0xf] = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x110);
    pfVar8[0x10] = ((float)GEN_TOF(((float10)*(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x118) *
                          (float10)*(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x114))));
    fVar1 = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x118);
    fVar2 = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x114);
    pfVar8[0x12] = 0.0;
    pfVar8[0x13] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10)));
    pfVar8[0x11] = ((float)GEN_TOF((((float10)1 - (float10)fVar1) * (float10)fVar2)));
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 300) + 0x24))) = 0;
  }
  pfVar8 = (float *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x1d0),0,0,2);
  if (pfVar8 != (float *)0x0) {
    (*(float *)(gen_frame + 0x20)) = *(float *)((int)this + 0x154);
    (*(float *)(gen_frame + 0x24)) = gen_bits2f(*(undefined4 *)((int)this + 0x158));
    (*(float *)(gen_frame + 0x28)) = gen_bits2f(*(undefined4 *)((int)this + 0x15c));
    pfVar10 = (float *)F_004ee9d0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x18))));
    fVar1 = pfVar10[1];
    fVar2 = pfVar10[2];
    (*(float *)(gen_frame + 0x24)) = *pfVar10;
    *pfVar8 = *pfVar10;
    (*(float *)(gen_frame + 0x28)) = fVar1;
    pfVar8[1] = fVar1;
    (*(float *)(gen_frame + 0x2c)) = fVar2;
    pfVar8[2] = fVar2;
    pfVar8[4] = *(float *)((int)this + 0x160);
    pfVar8[5] = *(float *)((int)this + 0x164);
    pfVar8[6] = *(float *)((int)this + 0x168);
    pfVar8[3] = *(float *)((int)this + 0x16c);
    pfVar8[7] = *(float *)((int)this + 0x170);
    fVar1 = *(float *)((int)this + 0x174);
    fVar2 = *(float *)((int)this + 0x178);
    (*(float *)(gen_frame + 0x18)) = fVar1;
    (*(float *)(gen_frame + 0x14)) = fVar2;
    pfVar8[8] = fVar1;
    pfVar8[9] = fVar2;
    fVar1 = (float)((float10)1 - (float10)fVar1);
    (*(float *)(gen_frame + 0x18)) = fVar1;
    fVar2 = (float)((float10)1 - (float10)fVar2);
    (*(float *)(gen_frame + 0x14)) = fVar2;
    pfVar8[10] = fVar1;
    pfVar8[0xb] = fVar2;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1d0) + 0x24))) = 0;
  }
  piVar12 = *(int * PTR32 *)((int)this + 0x1f0);
  uVar11 = 0;
  if ((*(int *)(REFG(int, 0x1371290) + 4) != 0) &&
     (uVar11 = *((uint *)GEN_TOP((*(int *)(REFG(int, 0x1371290) + 4) + 0x100))), uVar11 != 0)) {
    piVar12 = *(int * PTR32 *)(uVar11 + 0x7c);
  }
  if (piVar12 != (int *)0x0) {
    uVar11 = ((code *)*(gen_code32 *)(*piVar12 + 8))(piVar12);
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x130);
  if (piVar6 != (int *)0x0) {
    uVar11 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
  }
  *(int * PTR32 *)((int)this + 0x130) = piVar12;
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0));
  return uVar11;
}

/* ref: FUN_00626fe0 */
unsigned int F_00626fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x626fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) {
    uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x58)));
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x70))) + uVar2 * 4))) ==
            *(int *)((int)this + 0x180)) {
          *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + uVar2 * 4))) = *(undefined4 *)((int)this + 0x184);
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x58)));
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x70))) + uVar2 * 4))) ==
            *(int *)((int)this + 0x1a4)) {
          *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + uVar2 * 4))) = *(undefined4 *)((int)this + 0x1a8);
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x58)));
    uVar2 = 0;
    if (uVar1 != 0) {
      while (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x70))) + uVar2 * 4))) !=
             *(int *)((int)this + 0x1c8)) {
        uVar2 = uVar2 + 1;
        if (uVar1 <= uVar2) {
          return 0;
        }
      }
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + uVar2 * 4))) = *(undefined4 *)((int)this + 0x1cc);
    }
  }
  return 0;
}

