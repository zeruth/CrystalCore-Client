#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00950cf0 */
uint F_00950cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x950cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[4];
  uVar4 = param_1[5];
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *param_2 = uVar2;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar1;
  param_2[4] = uVar3;
  param_2[5] = uVar4;
  return uVar3;
}

/* ref: FUN_00950d60 */
uint F_00950d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x950d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar4 = (param_2 - param_1) / 0x18;
  uVar5 = (int)uVar4 / 2;
  uVar8 = uVar5;
  if (0 < (int)uVar5) {
    uVar6 = uVar5 * 2 + 2;
    iVar7 = param_1 + uVar5 * 0x18;
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar7 + -0x18);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar7 + -0x14);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(iVar7 + -0x10);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(iVar7 + -0xc);
      (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(iVar7 + -8);
      (*(uint *)(gen_frame + 0x28)) = uVar5 - 1;
      (*(uint *)(gen_frame + 0x24)) = uVar6 - 2;
      (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(iVar7 + -4);
      uVar5 = uVar5 - 1;
      for (uVar8 = uVar6 - 2; (int)uVar8 < (int)uVar4; uVar8 = uVar8 * 2 + 2) {
        iVar1 = param_1 + uVar8 * 0x18;
        uVar6 = (*param_3)(iVar1,iVar1 + -0x18);
        if ((char)uVar6 != '\0') {
          uVar8 = uVar8 - 1;
        }
        puVar2 = (undefined4 *)(param_1 + uVar8 * 0x18);
        puVar3 = (undefined4 *)(param_1 + uVar5 * 0x18);
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3[2] = puVar2[2];
        puVar3[3] = puVar2[3];
        puVar3[4] = puVar2[4];
        puVar3[5] = puVar2[5];
        uVar5 = uVar8;
      }
      if (uVar8 == uVar4) {
        puVar3 = (undefined4 *)(param_1 + -0x18 + uVar4 * 0x18);
        puVar2 = (undefined4 *)(param_1 + uVar5 * 0x18);
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
        puVar2[2] = puVar3[2];
        puVar2[3] = puVar3[3];
        puVar2[4] = puVar3[4];
        puVar2[5] = puVar3[5];
        uVar5 = uVar4 - 1;
      }
      uVar8 = F_00920510(param_1,uVar5,(*(uint *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0xc)),param_3);
      uVar5 = (*(uint *)(gen_frame + 0x28));
      iVar7 = iVar7 + -0x18;
      uVar6 = (*(uint *)(gen_frame + 0x24));
    } while (0 < (int)(*(uint *)(gen_frame + 0x28)));
  }
  return uVar8;
}

/* ref: FUN_00950ea0 */
unsigned int F_00950ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x950ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 6, puVar5 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar5;
      (*(undefined4 *)(gen_frame + 0xc)) = puVar5[3];
      (*(undefined4 *)(gen_frame + 0x4)) = puVar5[1];
      (*(undefined4 *)(gen_frame + 0x8)) = puVar5[2];
      (*(undefined4 *)(gen_frame + 0x10)) = puVar5[4];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar5[5];
      uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),param_1);
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar3 = (char)uVar4;
        puVar1 = puVar5;
        while (cVar3 != '\0') {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          puVar1[2] = puVar2[2];
          puVar1[3] = puVar2[3];
          puVar1[4] = puVar2[4];
          puVar1[5] = puVar2[5];
          uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),puVar2 + -6);
          puVar1 = puVar2;
          puVar2 = puVar2 + -6;
          cVar3 = (char)uVar4;
        }
        *puVar1 = (*(undefined4 *)(gen_frame + 0x0));
        puVar1[1] = (*(undefined4 *)(gen_frame + 0x4));
        puVar1[2] = (*(undefined4 *)(gen_frame + 0x8));
        puVar1[3] = (*(undefined4 *)(gen_frame + 0xc));
        puVar1[4] = (*(undefined4 *)(gen_frame + 0x10));
        puVar1[5] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        F_009205c0(param_1,puVar5,(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 0xc,param_1);
        *param_1 = (*(undefined4 *)(gen_frame + 0x0));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
        param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
        param_1[3] = (*(undefined4 *)(gen_frame + 0xc));
        param_1[4] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[5] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 6;
      puVar5 = puVar5 + 6;
    } while (puVar5 != param_2);
  }
  return 0;
}

/* ref: FUN_00950fd0 */
uint F_00950fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x950fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00951010 */
uint F_00951010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x951010u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = (param_2 - param_1) / 0xc;
  uVar4 = (int)uVar3 / 2;
  uVar6 = uVar4;
  if (0 < (int)uVar4) {
    uVar8 = uVar4 * 2 + 2;
    iVar7 = param_1 + uVar4 * 0xc;
    do {
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar7 + -0xc);
      uVar4 = uVar4 - 1;
      (*(int *)(gen_frame + 0x18)) = iVar7 + -0xc;
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar7 + -8);
      (*(uint *)(gen_frame + 0x14)) = uVar8 - 2;
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar7 + -4);
      uVar6 = uVar4;
      for (uVar8 = uVar8 - 2; (int)uVar8 < (int)uVar3; uVar8 = uVar8 * 2 + 2) {
        iVar7 = param_1 + uVar8 * 0xc;
        uVar5 = (*param_3)(iVar7,iVar7 + -0xc);
        if ((char)uVar5 != '\0') {
          uVar8 = uVar8 - 1;
        }
        puVar1 = (undefined4 *)(param_1 + uVar8 * 0xc);
        puVar2 = (undefined4 *)(param_1 + uVar6 * 0xc);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        uVar6 = uVar8;
      }
      if (uVar8 == uVar3) {
        iVar7 = param_1 + -0xc + uVar3 * 0xc;
        puVar1 = (undefined4 *)(param_1 + uVar6 * 0xc);
        *puVar1 = *(undefined4 *)(param_1 + -0xc + uVar3 * 0xc);
        puVar1[1] = *(undefined4 *)(iVar7 + 4);
        puVar1[2] = *(undefined4 *)(iVar7 + 8);
        uVar6 = uVar3 - 1;
      }
      uVar6 = F_00920610(param_1,uVar6,uVar4,&(*(undefined4 *)(gen_frame + 0x8)),param_3);
      iVar7 = (*(int *)(gen_frame + 0x18));
      uVar8 = (*(uint *)(gen_frame + 0x14));
    } while (0 < (int)uVar4);
  }
  return uVar6;
}

/* ref: FUN_00951120 */
unsigned int F_00951120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x951120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar1;
  return 0;
}

/* ref: FUN_00951170 */
uint F_00951170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x951170u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = param_2 - param_1 >> 4;
  uVar1 = (int)(uVar4 - (param_2 - param_1 >> 0x1f)) >> 1;
  uVar3 = uVar1;
  if (0 < (int)uVar1) {
    uVar7 = uVar1 * 2 + 2;
    iVar6 = uVar1 * 0x10 + param_1;
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar6 + -0x10);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar6 + -0xc);
      uVar1 = uVar1 - 1;
      (*(int *)(gen_frame + 0x18)) = iVar6 + -0x10;
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar6 + -8);
      (*(uint *)(gen_frame + 0x14)) = uVar7 - 2;
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar6 + -4);
      uVar3 = uVar1;
      for (uVar7 = uVar7 - 2; (int)uVar7 < (int)uVar4; uVar7 = uVar7 * 2 + 2) {
        iVar6 = uVar7 * 0x10 + param_1;
        uVar2 = (*param_3)(iVar6,iVar6 + -0x10);
        if ((char)uVar2 != '\0') {
          uVar7 = uVar7 - 1;
        }
        iVar6 = uVar7 * 0x10 + param_1;
        puVar5 = (undefined4 *)(uVar3 * 0x10 + param_1);
        *puVar5 = *(undefined4 *)(uVar7 * 0x10 + param_1);
        puVar5[1] = *(undefined4 *)(iVar6 + 4);
        puVar5[2] = *(undefined4 *)(iVar6 + 8);
        puVar5[3] = *(undefined4 *)(iVar6 + 0xc);
        uVar3 = uVar7;
      }
      if (uVar7 == uVar4) {
        iVar6 = param_1 + -0x10 + uVar4 * 0x10;
        puVar5 = (undefined4 *)(uVar3 * 0x10 + param_1);
        *puVar5 = *(undefined4 *)(param_1 + -0x10 + uVar4 * 0x10);
        puVar5[1] = *(undefined4 *)(iVar6 + 4);
        puVar5[2] = *(undefined4 *)(iVar6 + 8);
        puVar5[3] = *(undefined4 *)(iVar6 + 0xc);
        uVar3 = uVar4 - 1;
      }
      uVar3 = F_009206b0(param_1,uVar3,uVar1,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
      iVar6 = (*(int *)(gen_frame + 0x18));
      uVar7 = (*(uint *)(gen_frame + 0x14));
    } while (0 < (int)uVar1);
  }
  return uVar3;
}

/* ref: FUN_00951280 */
uint F_00951280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x951280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_009512c0 */
uint F_009512c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9512c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = (param_2 - param_1) / 0xc;
  uVar4 = (int)uVar3 / 2;
  uVar6 = uVar4;
  if (0 < (int)uVar4) {
    uVar8 = uVar4 * 2 + 2;
    iVar7 = param_1 + uVar4 * 0xc;
    do {
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar7 + -0xc);
      uVar4 = uVar4 - 1;
      (*(int *)(gen_frame + 0x18)) = iVar7 + -0xc;
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar7 + -8);
      (*(uint *)(gen_frame + 0x14)) = uVar8 - 2;
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar7 + -4);
      uVar6 = uVar4;
      for (uVar8 = uVar8 - 2; (int)uVar8 < (int)uVar3; uVar8 = uVar8 * 2 + 2) {
        iVar7 = param_1 + uVar8 * 0xc;
        uVar5 = (*param_3)(iVar7,iVar7 + -0xc);
        if ((char)uVar5 != '\0') {
          uVar8 = uVar8 - 1;
        }
        puVar1 = (undefined4 *)(param_1 + uVar8 * 0xc);
        puVar2 = (undefined4 *)(param_1 + uVar6 * 0xc);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        uVar6 = uVar8;
      }
      if (uVar8 == uVar3) {
        iVar7 = param_1 + -0xc + uVar3 * 0xc;
        puVar1 = (undefined4 *)(param_1 + uVar6 * 0xc);
        *puVar1 = *(undefined4 *)(param_1 + -0xc + uVar3 * 0xc);
        puVar1[1] = *(undefined4 *)(iVar7 + 4);
        puVar1[2] = *(undefined4 *)(iVar7 + 8);
        uVar6 = uVar3 - 1;
      }
      uVar6 = F_00920750(param_1,uVar6,uVar4,&(*(undefined4 *)(gen_frame + 0x8)),param_3);
      iVar7 = (*(int *)(gen_frame + 0x18));
      uVar8 = (*(uint *)(gen_frame + 0x14));
    } while (0 < (int)uVar4);
  }
  return uVar6;
}

/* ref: FUN_009513d0 */
unsigned int F_009513d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9513d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar1;
  return 0;
}

/* ref: FUN_00951420 */
uint F_00951420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x951420u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = param_2 - param_1 >> 4;
  uVar1 = (int)(uVar4 - (param_2 - param_1 >> 0x1f)) >> 1;
  uVar3 = uVar1;
  if (0 < (int)uVar1) {
    uVar7 = uVar1 * 2 + 2;
    iVar6 = uVar1 * 0x10 + param_1;
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar6 + -0x10);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar6 + -0xc);
      uVar1 = uVar1 - 1;
      (*(int *)(gen_frame + 0x18)) = iVar6 + -0x10;
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar6 + -8);
      (*(uint *)(gen_frame + 0x14)) = uVar7 - 2;
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar6 + -4);
      uVar3 = uVar1;
      for (uVar7 = uVar7 - 2; (int)uVar7 < (int)uVar4; uVar7 = uVar7 * 2 + 2) {
        iVar6 = uVar7 * 0x10 + param_1;
        uVar2 = (*param_3)(iVar6,iVar6 + -0x10);
        if ((char)uVar2 != '\0') {
          uVar7 = uVar7 - 1;
        }
        iVar6 = uVar7 * 0x10 + param_1;
        puVar5 = (undefined4 *)(uVar3 * 0x10 + param_1);
        *puVar5 = *(undefined4 *)(uVar7 * 0x10 + param_1);
        puVar5[1] = *(undefined4 *)(iVar6 + 4);
        puVar5[2] = *(undefined4 *)(iVar6 + 8);
        puVar5[3] = *(undefined4 *)(iVar6 + 0xc);
        uVar3 = uVar7;
      }
      if (uVar7 == uVar4) {
        iVar6 = param_1 + -0x10 + uVar4 * 0x10;
        puVar5 = (undefined4 *)(uVar3 * 0x10 + param_1);
        *puVar5 = *(undefined4 *)(param_1 + -0x10 + uVar4 * 0x10);
        puVar5[1] = *(undefined4 *)(iVar6 + 4);
        puVar5[2] = *(undefined4 *)(iVar6 + 8);
        puVar5[3] = *(undefined4 *)(iVar6 + 0xc);
        uVar3 = uVar4 - 1;
      }
      uVar3 = F_009207f0(param_1,uVar3,uVar1,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
      iVar6 = (*(int *)(gen_frame + 0x18));
      uVar7 = (*(uint *)(gen_frame + 0x14));
    } while (0 < (int)uVar1);
  }
  return uVar3;
}

/* ref: FUN_00951530 */
uint F_00951530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x951530u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[4];
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *param_2 = uVar2;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar1;
  param_2[4] = uVar3;
  return uVar3;
}

/* ref: FUN_00951590 */
uint F_00951590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x951590u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = (param_2 - param_1) / 0x14;
  uVar4 = (int)uVar3 / 2;
  uVar6 = uVar4;
  if (0 < (int)uVar4) {
    uVar8 = uVar4 * 2 + 2;
    iVar7 = param_1 + uVar4 * 0x14;
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(iVar7 + -0x14);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar7 + -0x10);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar7 + -0xc);
      uVar4 = uVar4 - 1;
      (*(int *)(gen_frame + 0x18)) = iVar7 + -0x14;
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar7 + -8);
      (*(uint *)(gen_frame + 0x14)) = uVar8 - 2;
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar7 + -4);
      uVar6 = uVar4;
      for (uVar8 = uVar8 - 2; (int)uVar8 < (int)uVar3; uVar8 = uVar8 * 2 + 2) {
        iVar7 = param_1 + uVar8 * 0x14;
        uVar5 = (*param_3)(iVar7,iVar7 + -0x14);
        if ((char)uVar5 != '\0') {
          uVar8 = uVar8 - 1;
        }
        puVar1 = (undefined4 *)(param_1 + uVar8 * 0x14);
        *(undefined4 *)(param_1 + uVar6 * 0x14) = *puVar1;
        iVar7 = param_1 + uVar6 * 0x14;
        *(undefined4 *)(iVar7 + 4) = puVar1[1];
        *(undefined4 *)(iVar7 + 8) = puVar1[2];
        *(undefined4 *)(iVar7 + 0xc) = puVar1[3];
        *(undefined4 *)(iVar7 + 0x10) = puVar1[4];
        uVar6 = uVar8;
      }
      if (uVar8 == uVar3) {
        iVar2 = param_1 + -0x14 + uVar3 * 0x14;
        *(undefined4 *)(param_1 + uVar6 * 0x14) = *(undefined4 *)(param_1 + -0x14 + uVar3 * 0x14);
        iVar7 = param_1 + uVar6 * 0x14;
        *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar2 + 4);
        *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar2 + 8);
        *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
        *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
        uVar6 = uVar3 - 1;
      }
      uVar6 = F_00920890(param_1,uVar6,uVar4,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      iVar7 = (*(int *)(gen_frame + 0x18));
      uVar8 = (*(uint *)(gen_frame + 0x14));
    } while (0 < (int)uVar4);
  }
  return uVar6;
}

/* ref: FUN_009516c0 */
unsigned int F_009516c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9516c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009516f0 */
unsigned int F_009516f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9516f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 2) {
    uVar1 = puVar3[1];
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar3;
      puVar2[1] = uVar1;
    }
    puVar2 = puVar2 + 2;
  }
  return 0;
}

/* ref: FUN_00951720 */
unsigned int F_00951720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x951720u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00951750 */
unsigned int F_00951750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x951750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
    }
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00951780 */
unsigned int F_00951780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x951780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_009517a0 */
unsigned int F_009517a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9517a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_009517c0 */
uint F_009517c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9517c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = (*param_4)(param_2,param_1);
  if ((char)uVar6 != '\0') {
    uVar1 = param_2[3];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[4];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar1;
    param_1[4] = uVar5;
  }
  uVar6 = (*param_4)(param_3,param_2);
  if ((char)uVar6 != '\0') {
    uVar1 = param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    param_3[4] = param_2[4];
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar1;
    param_2[3] = uVar4;
    param_2[4] = uVar5;
  }
  uVar6 = (*param_4)(param_2,param_1);
  if ((char)uVar6 != '\0') {
    uVar6 = param_2[3];
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[4];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar6;
    param_1[4] = uVar4;
  }
  return uVar6;
}

/* ref: FUN_009518d0 */
unsigned int F_009518d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9518d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0x14) {
    puVar1[-5] = *(undefined4 *)(iVar2 + -0x14);
    puVar1[-4] = *(undefined4 *)(iVar2 + -0x10);
    puVar1[-3] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -5;
  }
  return 0;
}

/* ref: FUN_00951910 */
uint F_00951910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x951910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = (*param_4)(param_2,param_1);
  if ((char)uVar6 != '\0') {
    uVar1 = param_2[3];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[4];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar1;
    param_1[4] = uVar5;
  }
  uVar6 = (*param_4)(param_3,param_2);
  if ((char)uVar6 != '\0') {
    uVar1 = param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    param_3[4] = param_2[4];
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar1;
    param_2[3] = uVar4;
    param_2[4] = uVar5;
  }
  uVar6 = (*param_4)(param_2,param_1);
  if ((char)uVar6 != '\0') {
    uVar6 = param_2[3];
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[4];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar6;
    param_1[4] = uVar4;
  }
  return uVar6;
}

/* ref: FUN_00951a20 */
unsigned int F_00951a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x951a20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0x14) {
    puVar1[-5] = *(undefined4 *)(iVar2 + -0x14);
    puVar1[-4] = *(undefined4 *)(iVar2 + -0x10);
    puVar1[-3] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -5;
  }
  return 0;
}

/* ref: FUN_00951a60 */
uint F_00951a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x951a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*param_4)(param_2,param_1);
  if ((char)uVar2 != '\0') {
    uVar2 = *param_2;
    uVar1 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar2;
    param_1[1] = uVar1;
  }
  uVar2 = (*param_4)(param_3,param_2);
  if ((char)uVar2 != '\0') {
    uVar2 = *param_3;
    uVar1 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    *param_2 = uVar2;
    param_2[1] = uVar1;
  }
  uVar2 = (*param_4)(param_2,param_1);
  if ((char)uVar2 != '\0') {
    uVar2 = *param_2;
    uVar1 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar2;
    param_1[1] = uVar1;
  }
  return uVar2;
}

/* ref: FUN_00951ae0 */
uint F_00951ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x951ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = (*param_4)(param_2,param_1);
  if ((char)uVar1 != '\0') {
    F_009415a0(param_2,param_1);
  }
  uVar1 = (*param_4)(param_3,param_2);
  if ((char)uVar1 != '\0') {
    F_009415a0(param_3,param_2);
  }
  uVar1 = (*param_4)(param_2,param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = F_009415a0(param_2,param_1);
  }
  return uVar1;
}

/* ref: FUN_00951b40 */
uint F_00951b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x951b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = (*param_4)(param_2,param_1);
  if ((char)uVar1 != '\0') {
    F_00941760(param_2,param_1);
  }
  uVar1 = (*param_4)(param_3,param_2);
  if ((char)uVar1 != '\0') {
    F_00941760(param_3,param_2);
  }
  uVar1 = (*param_4)(param_2,param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = F_00941760(param_2,param_1);
  }
  return uVar1;
}

/* ref: FUN_00951ba0 */
uint F_00951ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x951ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = (*param_4)(*param_3,*param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00951c00 */
uint F_00951c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x951c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*param_4)(param_2,param_1);
  if ((char)uVar2 != '\0') {
    uVar2 = *param_2;
    uVar1 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar2;
    param_1[1] = uVar1;
  }
  uVar2 = (*param_4)(param_3,param_2);
  if ((char)uVar2 != '\0') {
    uVar2 = *param_3;
    uVar1 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    *param_2 = uVar2;
    param_2[1] = uVar1;
  }
  uVar2 = (*param_4)(param_2,param_1);
  if ((char)uVar2 != '\0') {
    uVar2 = *param_2;
    uVar1 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar2;
    param_1[1] = uVar1;
  }
  return uVar2;
}

/* ref: FUN_00951c80 */
unsigned int F_00951c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x951c80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -8) {
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -2;
  }
  return 0;
}

/* ref: FUN_00951cb0 */
uint F_00951cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x951cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  uVar3 = (*param_4)(param_3,param_2);
  if ((char)uVar3 != '\0') {
    uVar3 = param_3[2];
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
  }
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  return uVar3;
}

/* ref: FUN_00951d60 */
unsigned int F_00951d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x951d60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0xc) {
    puVar1[-3] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -3;
  }
  return 0;
}

/* ref: FUN_00951d90 */
uint F_00951d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x951d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar1 = *(undefined4 *)(param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  uVar3 = (*param_4)(param_3,param_2);
  if ((char)uVar3 != '\0') {
    uVar1 = *(undefined4 *)(param_3 + 4);
    uVar2 = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 8) = uVar2;
  }
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar3 = *(uint *)(param_2 + 4);
    uVar1 = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
    *(uint *)(param_1 + 4) = uVar3;
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return uVar3;
}

/* ref: FUN_00951e10 */
uint F_00951e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x951e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    iVar1 = param_1 + iVar3 * 0xc;
    uVar2 = (*param_5)(iVar1,iVar1 + -0xc);
    if ((char)uVar2 != '\0') {
      iVar3 = iVar4 * 2 + 1;
    }
    iVar1 = param_1 + iVar3 * 0xc;
    iVar4 = param_1 + iVar4 * 0xc;
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar1 + 8);
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    iVar4 = param_1 + iVar4 * 0xc;
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + -8 + param_3 * 0xc);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + param_3 * 0xc + -4);
    iVar4 = param_3 + -1;
  }
  uVar2 = F_00942ba0(param_1,iVar4,param_2,param_4,param_5);
  return uVar2;
}

/* ref: FUN_00951eb0 */
unsigned int F_00951eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x951eb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    iVar1 = param_3;
    iVar2 = param_2;
    do {
      iVar3 = iVar2 + -0xc;
      *(undefined4 *)(iVar1 + -8) = *((undefined4 *)GEN_TOP(((param_2 - param_3) + -8 + iVar1)));
      *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(iVar2 + -4);
      iVar1 = iVar1 + -0xc;
      iVar2 = iVar3;
    } while (iVar3 != param_1);
  }
  return 0;
}

/* ref: FUN_00951ef0 */
uint F_00951ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x951ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = (*param_4)(param_2,param_1);
  if ((char)uVar6 != '\0') {
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 8);
    uVar5 = *(undefined4 *)(param_2 + 0xc);
    uVar1 = *(undefined1 *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 4) = uVar3;
    *(undefined4 *)(param_1 + 8) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    *(undefined1 *)(param_1 + 0x14) = uVar1;
  }
  uVar6 = (*param_4)(param_3,param_2);
  if ((char)uVar6 != '\0') {
    uVar2 = *(undefined4 *)(param_3 + 0xc);
    uVar3 = *(undefined4 *)(param_3 + 4);
    uVar4 = *(undefined4 *)(param_3 + 8);
    uVar5 = *(undefined4 *)(param_3 + 0x10);
    uVar1 = *(undefined1 *)(param_3 + 0x14);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined1 *)(param_3 + 0x14) = *(undefined1 *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 8) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = uVar2;
    *(undefined4 *)(param_2 + 0x10) = uVar5;
    *(undefined1 *)(param_2 + 0x14) = uVar1;
  }
  uVar6 = (*param_4)(param_2,param_1);
  if ((char)uVar6 != '\0') {
    uVar6 = *(uint *)(param_2 + 0x10);
    uVar2 = *(undefined4 *)(param_2 + 4);
    uVar3 = *(undefined4 *)(param_2 + 8);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar1 = *(undefined1 *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 4) = uVar2;
    *(undefined4 *)(param_1 + 8) = uVar3;
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    *(uint *)(param_1 + 0x10) = uVar6;
    *(undefined1 *)(param_1 + 0x14) = uVar1;
  }
  return uVar6;
}

/* ref: FUN_00952020 */
uint F_00952020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x952020u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    iVar1 = param_1 + iVar3 * 0x18;
    uVar2 = (*param_5)(iVar1,iVar1 + -0x18);
    if ((char)uVar2 != '\0') {
      iVar3 = iVar4 * 2 + 1;
    }
    iVar1 = param_1 + iVar3 * 0x18;
    iVar4 = param_1 + iVar4 * 0x18;
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined1 *)(iVar4 + 0x14) = *(undefined1 *)(iVar1 + 0x14);
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    iVar3 = param_1 + -0x18 + param_3 * 0x18;
    iVar4 = param_1 + iVar4 * 0x18;
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + -0x14 + param_3 * 0x18);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
    *(undefined1 *)(iVar4 + 0x14) = *(undefined1 *)(iVar3 + 0x14);
    iVar4 = param_3 + -1;
  }
  uVar2 = F_00942c60(param_1,iVar4,param_2,param_4,param_5);
  return uVar2;
}

/* ref: FUN_009520e0 */
uint F_009520e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9520e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00942d00(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00952100 */
uint F_00952100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x952100u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = (*param_4)(param_2,param_1);
  if ((char)uVar4 != '\0') {
    uVar1 = *(undefined4 *)(param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 8) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
  }
  uVar4 = (*param_4)(param_3,param_2);
  if ((char)uVar4 != '\0') {
    uVar1 = *(undefined4 *)(param_3 + 0xc);
    uVar2 = *(undefined4 *)(param_3 + 4);
    uVar3 = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 8) = uVar3;
    *(undefined4 *)(param_2 + 0xc) = uVar1;
  }
  uVar4 = (*param_4)(param_2,param_1);
  if ((char)uVar4 != '\0') {
    uVar4 = *(uint *)(param_2 + 4);
    uVar1 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 8) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
  }
  return uVar4;
}

/* ref: FUN_009521b0 */
uint F_009521b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9521b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    iVar1 = iVar3 * 0x10 + param_1;
    uVar2 = (*param_5)(iVar1,iVar1 + -0x10);
    if ((char)uVar2 != '\0') {
      iVar3 = iVar4 * 2 + 1;
    }
    iVar4 = param_1 + iVar4 * 0x10;
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 4 + iVar3 * 0x10);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 8 + iVar3 * 0x10);
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(param_1 + 0xc + iVar3 * 0x10);
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    iVar3 = param_1 + -0x10 + param_3 * 0x10;
    iVar4 = param_1 + iVar4 * 0x10;
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + -0xc + param_3 * 0x10);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
    iVar4 = param_3 + -1;
  }
  uVar2 = F_00942d50(param_1,iVar4,param_2,param_4,param_5);
  return uVar2;
}

/* ref: FUN_00952260 */
unsigned int F_00952260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    iVar2 = param_3;
    puVar3 = param_2 + 3;
    do {
      *(undefined4 *)(iVar2 + -0xc) = *((undefined4 *)GEN_TOP(((int)param_2 + iVar2 + (-0xc - param_3))));
      *(undefined4 *)(iVar2 + -8) = puVar3[-5];
      *(undefined4 *)(iVar2 + -4) = puVar3[-4];
      puVar1 = puVar3 + -7;
      iVar2 = iVar2 + -0x10;
      puVar3 = puVar3 + -4;
    } while (puVar1 != param_1);
  }
  return 0;
}

/* ref: FUN_009522b0 */
uint F_009522b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9522b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = (*param_4)(*param_3,*param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00952310 */
uint F_00952310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x952310u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = (*param_4)(*param_3,*param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00952370 */
uint F_00952370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x952370u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = (*param_4)(*param_3,*param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return uVar1;
}

/* ref: FUN_009523d0 */
uint F_009523d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9523d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = (*param_4)(*param_3,*param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00952430 */
uint F_00952430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x952430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar7 = (*param_4)(param_2,param_1);
  if ((char)uVar7 != '\0') {
    uVar1 = param_2[3];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[4];
    uVar6 = param_2[5];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    param_2[5] = param_1[5];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar1;
    param_1[4] = uVar5;
    param_1[5] = uVar6;
  }
  uVar7 = (*param_4)(param_3,param_2);
  if ((char)uVar7 != '\0') {
    uVar1 = param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    uVar6 = param_3[5];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    param_3[4] = param_2[4];
    param_3[5] = param_2[5];
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar1;
    param_2[3] = uVar4;
    param_2[4] = uVar5;
    param_2[5] = uVar6;
  }
  uVar7 = (*param_4)(param_2,param_1);
  if ((char)uVar7 != '\0') {
    uVar1 = param_2[3];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[4];
    uVar7 = param_2[5];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    param_2[5] = param_1[5];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar1;
    param_1[4] = uVar5;
    param_1[5] = uVar7;
  }
  return uVar7;
}

/* ref: FUN_00952580 */
uint F_00952580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x952580u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  uVar3 = (*param_4)(param_3,param_2);
  if ((char)uVar3 != '\0') {
    uVar3 = param_3[2];
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
  }
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  return uVar3;
}

/* ref: FUN_00952630 */
unsigned int F_00952630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952630u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0xc) {
    puVar1[-3] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -3;
  }
  return 0;
}

/* ref: FUN_00952660 */
uint F_00952660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x952660u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (*param_4)(param_2,param_1);
  if ((char)uVar4 != '\0') {
    uVar4 = param_2[3];
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
  }
  uVar4 = (*param_4)(param_3,param_2);
  if ((char)uVar4 != '\0') {
    uVar4 = param_3[2];
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[3];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar4;
    param_2[3] = uVar3;
  }
  uVar4 = (*param_4)(param_2,param_1);
  if ((char)uVar4 != '\0') {
    uVar1 = param_2[3];
    uVar2 = param_2[2];
    uVar4 = *param_2;
    uVar3 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    *param_1 = uVar4;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = uVar1;
  }
  return uVar4;
}

/* ref: FUN_00952740 */
unsigned int F_00952740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952740u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0x10) {
    puVar1[-4] = *(undefined4 *)(iVar2 + -0x10);
    puVar1[-3] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -4;
  }
  return 0;
}

/* ref: FUN_00952780 */
uint F_00952780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x952780u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  uVar3 = (*param_4)(param_3,param_2);
  if ((char)uVar3 != '\0') {
    uVar3 = param_3[2];
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
  }
  uVar3 = (*param_4)(param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  return uVar3;
}

/* ref: FUN_00952830 */
unsigned int F_00952830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952830u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0xc) {
    puVar1[-3] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -3;
  }
  return 0;
}

/* ref: FUN_00952860 */
uint F_00952860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x952860u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (*param_4)(param_2,param_1);
  if ((char)uVar4 != '\0') {
    uVar4 = param_2[3];
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
  }
  uVar4 = (*param_4)(param_3,param_2);
  if ((char)uVar4 != '\0') {
    uVar4 = param_3[2];
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[3];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar4;
    param_2[3] = uVar3;
  }
  uVar4 = (*param_4)(param_2,param_1);
  if ((char)uVar4 != '\0') {
    uVar1 = param_2[3];
    uVar2 = param_2[2];
    uVar4 = *param_2;
    uVar3 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    *param_1 = uVar4;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = uVar1;
  }
  return uVar4;
}

/* ref: FUN_00952940 */
unsigned int F_00952940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952940u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0x10) {
    puVar1[-4] = *(undefined4 *)(iVar2 + -0x10);
    puVar1[-3] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -4;
  }
  return 0;
}

/* ref: FUN_00952980 */
uint F_00952980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x952980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = (*param_4)(param_2,param_1);
  if ((char)uVar6 != '\0') {
    uVar1 = param_2[3];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[4];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar1;
    param_1[4] = uVar5;
  }
  uVar6 = (*param_4)(param_3,param_2);
  if ((char)uVar6 != '\0') {
    uVar1 = param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    param_3[4] = param_2[4];
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar1;
    param_2[3] = uVar4;
    param_2[4] = uVar5;
  }
  uVar6 = (*param_4)(param_2,param_1);
  if ((char)uVar6 != '\0') {
    uVar6 = param_2[3];
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[4];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar6;
    param_1[4] = uVar4;
  }
  return uVar6;
}

/* ref: FUN_00952a90 */
unsigned int F_00952a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952a90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0x14) {
    puVar1[-5] = *(undefined4 *)(iVar2 + -0x14);
    puVar1[-4] = *(undefined4 *)(iVar2 + -0x10);
    puVar1[-3] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -5;
  }
  return 0;
}

/* ref: FUN_00952ad0 */
uint F_00952ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x952ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + -0x10);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + -0x14);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + -8);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + -0xc);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + -4);
  *(undefined4 *)(param_2 + -0x14) = *param_1;
  *(undefined4 *)(param_2 + -0x10) = param_1[1];
  *(undefined4 *)(param_2 + -0xc) = param_1[2];
  *(undefined4 *)(param_2 + -8) = param_1[3];
  *(undefined4 *)(param_2 + -4) = param_1[4];
  uVar1 = F_009411c0(param_1,0,((param_2 - (int)param_1) + -0x14) / 0x14,&(*(undefined4 *)(gen_frame + 0x8)),param_3);
  return uVar1;
}

/* ref: FUN_00952b50 */
uint F_00952b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x952b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + -0x10);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + -0x14);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + -8);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + -0xc);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + -4);
  *(undefined4 *)(param_2 + -0x14) = *param_1;
  *(undefined4 *)(param_2 + -0x10) = param_1[1];
  *(undefined4 *)(param_2 + -0xc) = param_1[2];
  *(undefined4 *)(param_2 + -8) = param_1[3];
  *(undefined4 *)(param_2 + -4) = param_1[4];
  uVar1 = F_00941350(param_1,0,((param_2 - (int)param_1) + -0x14) / 0x14,&(*(undefined4 *)(gen_frame + 0x8)),param_3);
  return uVar1;
}

/* ref: FUN_00952bd0 */
uint F_00952bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952bd0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00952c20 */
uint F_00952c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x952c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  ulonglong uVar1;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0xc)),(undefined *)(param_2 + -0x6c));
  (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)(param_2 + -0x18);
  (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)(param_2 + -0x14);
  (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)(param_2 + -0x10);
  (*(undefined4 *)(gen_frame + 0x6c)) = *(undefined4 *)(param_2 + -0xc);
  (*(undefined4 *)(gen_frame + 0x70)) = *(undefined4 *)(param_2 + -8);
  (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)(param_2 + -4);
  F_0042ccf0((undefined *)(param_2 + -0x6c),param_1);
  *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_2 + -0x14) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_2 + -0xc) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_2 + -4) = *(undefined4 *)(param_1 + 0x68);
  F_00941660(param_1,0,((param_2 - param_1) + -0x6c) / 0x6c,((undefined1 *)(gen_frame + 0xc)),param_3);
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)uVar1;
}

/* ref: FUN_00952ce0 */
uint F_00952ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x952ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  ulonglong uVar1;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x0)),(undefined *)(param_2 + -0x68));
  (*(undefined4 *)(gen_frame + 0x54)) = *(undefined4 *)(param_2 + -0x14);
  (*(undefined4 *)(gen_frame + 0x58)) = *(undefined4 *)(param_2 + -0x10);
  (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)(param_2 + -8);
  (*(undefined4 *)(gen_frame + 0x5c)) = *(undefined4 *)(param_2 + -0xc);
  (*(undefined1 *)(gen_frame + 0x64)) = *(undefined1 *)(param_2 + -4);
  F_0042ccf0((undefined *)(param_2 + -0x68),param_1);
  *(undefined4 *)(param_2 + -0x14) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_2 + -0xc) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_1 + 0x60);
  *(undefined1 *)(param_2 + -4) = *(undefined1 *)(param_1 + 100);
  F_00941810(param_1,0,((param_2 - param_1) + -0x68) / 0x68,((undefined1 *)(gen_frame + 0x0)),param_3);
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar1;
}

/* ref: FUN_00952da0 */
uint F_00952da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952da0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00952de0 */
uint F_00952de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952de0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00952e30 */
uint F_00952e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952e30u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00952e90 */
uint F_00952e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952e90u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00952ed0 */
uint F_00952ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952ed0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00952f10 */
uint F_00952f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952f10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00952f50 */
uint F_00952f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x952f50u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00952f90 */
uint F_00952f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x952f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + -0x14);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + -0xc);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 + -0x18);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + -4);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + -0x10);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + -8);
  *(undefined4 *)(param_2 + -0x18) = *param_1;
  *(undefined4 *)(param_2 + -0x14) = param_1[1];
  *(undefined4 *)(param_2 + -0x10) = param_1[2];
  *(undefined4 *)(param_2 + -0xc) = param_1[3];
  *(undefined4 *)(param_2 + -8) = param_1[4];
  *(undefined4 *)(param_2 + -4) = param_1[5];
  uVar1 = F_009421e0(param_1,0,((param_2 - (int)param_1) + -0x18) / 0x18,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
  return uVar1;
}

/* ref: FUN_00953020 */
uint F_00953020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x953020u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00953080 */
uint F_00953080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x953080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + -0xc);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + -0x10);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + -4);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + -8);
  *(undefined4 *)(param_2 + -0x10) = *param_1;
  *(undefined4 *)(param_2 + -0xc) = param_1[1];
  *(undefined4 *)(param_2 + -8) = param_1[2];
  *(undefined4 *)(param_2 + -4) = param_1[3];
  uVar1 = F_009424d0(param_1,0,(param_2 - (int)param_1) + -0x10 >> 4,&(*(undefined4 *)(gen_frame + 0xc)),param_3);
  return uVar1;
}

/* ref: FUN_009530e0 */
uint F_009530e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9530e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00953140 */
uint F_00953140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x953140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + -0xc);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + -0x10);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + -4);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + -8);
  *(undefined4 *)(param_2 + -0x10) = *param_1;
  *(undefined4 *)(param_2 + -0xc) = param_1[1];
  *(undefined4 *)(param_2 + -8) = param_1[2];
  *(undefined4 *)(param_2 + -4) = param_1[3];
  uVar1 = F_00942790(param_1,0,(param_2 - (int)param_1) + -0x10 >> 4,&(*(undefined4 *)(gen_frame + 0xc)),param_3);
  return uVar1;
}

/* ref: FUN_009531a0 */
uint F_009531a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9531a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + -0x10);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + -0x14);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + -8);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + -0xc);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + -4);
  *(undefined4 *)(param_2 + -0x14) = *param_1;
  *(undefined4 *)(param_2 + -0x10) = param_1[1];
  *(undefined4 *)(param_2 + -0xc) = param_1[2];
  *(undefined4 *)(param_2 + -8) = param_1[3];
  *(undefined4 *)(param_2 + -4) = param_1[4];
  uVar1 = F_00942920(param_1,0,((param_2 - (int)param_1) + -0x14) / 0x14,&(*(undefined4 *)(gen_frame + 0x8)),param_3);
  return uVar1;
}

/* ref: FUN_00953220 */
uint F_00953220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x953220u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
  uVar1 = F_00951e10(param_1,0,(param_2 - param_1) / 0xc,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00953260 */
uint F_00953260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x953260u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined1 *)(param_3 + 0x14) = *(undefined1 *)(param_1 + 0x14);
  uVar1 = F_00952020(param_1,0,(param_2 - param_1) / 0x18,param_4,param_5);
  return uVar1;
}

/* ref: FUN_009532c0 */
uint F_009532c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9532c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  uVar1 = F_009521b0(param_1,0,param_2 - param_1 >> 4,param_4,param_5);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf0 */
uint F_00953300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x953300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008229e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentConfigCharacter::vf0 */
uint F_00953330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x953330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x10d68cc));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10d68ac));
  F_008229e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentConfigSystem::vf0 */
uint F_00953360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x953360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00822fa0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCutSceneReplay::vf0 */
uint F_00953390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x953390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0082b410(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009533c0 */
uint F_009533c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9533c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009533d0 */
uint F_009533d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9533d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00953410 */
uint F_00953410(unsigned int gen_a0)
{
  GEN_ENTER(0x953410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0x14,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0x14,400);
  return (uint)uVar3;
}

/* ref: FUN_00953460 */
uint F_00953460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x953460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00953470 */
uint F_00953470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x953470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009534b0 */
uint F_009534b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9534b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_00953500 */
uint F_00953500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x953500u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00953510 */
uint F_00953510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x953510u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00953550 */
uint F_00953550(unsigned int gen_a0)
{
  GEN_ENTER(0x953550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_009535a0 */
uint F_009535a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9535a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009535f0 */
uint F_009535f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9535f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00953610 */
uint F_00953610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x953610u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00953630 */
uint F_00953630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x953630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x25) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x25) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && (*(ushort *)(puVar3 + 3) <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_009536a0 */
uint F_009536a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9536a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && (*(ushort *)(puVar3 + 3) <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00953710 */
uint F_00953710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x953710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00953730 */
uint F_00953730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x953730u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00953740 */
uint F_00953740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x953740u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00910c10(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_0095385a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_00910b70(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00910b50(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_0095385a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00946280((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00927810((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00946280((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00953918: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00927810((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00953918;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00946280((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00927810((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,800);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_009539a0 */
uint F_009539a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9539a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009539c0 */
uint F_009539c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9539c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009539d0 */
uint F_009539d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9539d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00946340(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x18,400);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00953aa0 */
uint F_00953aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x953aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_009463f0(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00953ad0 */
uint F_00953ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x953ad0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00953af0 */
uint F_00953af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x953af0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00953b20 */
uint F_00953b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x953b20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00953b40 */
uint F_00953b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x953b40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00953b50 */
uint F_00953b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x953b50u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x39))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00914400(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x39) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x39) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x39) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0xe];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0xe))) = (char)piVar3[0xe];
      *(char *)(piVar3 + 0xe) = (char)iVar1;
      goto LAB_00953c6a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x39) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x39) == '\0') {
      piVar4 = (int *)F_00910ee0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x39) == '\0') {
      uVar5 = F_00910ec0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00953c6a: ;
  if ((char)piVar3[0xe] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0xe] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[0xe] == '\0') {
            *(undefined1 *)(piVar6 + 0xe) = 1;
            *(undefined1 *)(piVar4 + 0xe) = 0;
            F_00946510((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x39) == '\0') {
            if ((*(char *)(*piVar6 + 0x38) != '\x01') || (*(char *)(piVar6[2] + 0x38) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x38) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x38) = 1;
                *(undefined1 *)(piVar6 + 0xe) = 0;
                F_009279b0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 0xe) = (char)piVar4[0xe];
              *(undefined1 *)(piVar4 + 0xe) = 1;
              *(undefined1 *)(piVar6[2] + 0x38) = 1;
              F_00946510((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00953d28: ;
            *(undefined1 *)(piVar6 + 0xe) = 0;
          }
        }
        else {
          if ((char)piVar6[0xe] == '\0') {
            *(undefined1 *)(piVar6 + 0xe) = 1;
            *(undefined1 *)(piVar4 + 0xe) = 0;
            F_009279b0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x39) == '\0') {
            if ((*(char *)(piVar6[2] + 0x38) == '\x01') && (*(char *)(*piVar6 + 0x38) == '\x01'))
            goto LAB_00953d28;
            if (*(char *)(*piVar6 + 0x38) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x38) = 1;
              *(undefined1 *)(piVar6 + 0xe) = 0;
              F_00946510((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 0xe) = (char)piVar4[0xe];
            *(undefined1 *)(piVar4 + 0xe) = 1;
            *(undefined1 *)(*piVar6 + 0x38) = 1;
            F_009279b0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0xe) = 1;
  }
  F_00429760(piVar3,0x40,400);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00953db0 */
uint F_00953db0(unsigned int gen_a0)
{
  GEN_ENTER(0x953db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x39);
  while (cVar1 == '\0') {
    F_009464d0(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x40,400);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x39);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00953e50 */
uint F_00953e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x953e50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00953e70 */
uint F_00953e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x953e70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00953ec0 */
unsigned int F_00953ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x953ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x10) != 0) {
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4)));
    F_0042c880((undefined *)(iVar2 + 100));
    F_0042c880((undefined *)(iVar2 + 0x10));
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

/* ref: FUN_00953f50 */
uint F_00953f50(unsigned int gen_a0)
{
  GEN_ENTER(0x953f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_009465f0(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00953fc0 */
uint F_00953fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x953fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_00954010 */
uint F_00954010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954010u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954020 */
uint F_00954020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954060 */
uint F_00954060(unsigned int gen_a0)
{
  GEN_ENTER(0x954060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0x18,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0x18,400);
  return (uint)uVar3;
}

/* ref: FUN_009540b0 */
uint F_009540b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9540b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009540c0 */
uint F_009540c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9540c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954100 */
uint F_00954100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954140 */
uint F_00954140(unsigned int gen_a0)
{
  GEN_ENTER(0x954140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0x14,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0x14,400);
  return (uint)uVar3;
}

/* ref: FUN_00954190 */
uint F_00954190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954190u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009541d0 */
uint F_009541d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9541d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009541e0 */
uint F_009541e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9541e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954220 */
uint F_00954220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954220u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954260 */
uint F_00954260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954270 */
uint F_00954270(unsigned int gen_a0)
{
  GEN_ENTER(0x954270u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009542b0 */
uint F_009542b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9542b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x21);
  while (cVar1 == '\0') {
    F_00946d20(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x28,400);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x21);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00954310 */
uint F_00954310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x954310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00929470(this,param_2);
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

/* ref: FUN_00954370 */
uint F_00954370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x954370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00929420(this,param_2);
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

/* ref: FUN_009543d0 */
uint F_009543d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9543d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009543f0 */
uint F_009543f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9543f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00954400 */
uint F_00954400(unsigned int gen_a0)
{
  GEN_ENTER(0x954400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
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
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00954460 */
uint F_00954460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00954480 */
uint F_00954480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00954490 */
uint F_00954490(unsigned int gen_a0)
{
  GEN_ENTER(0x954490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00946e20(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x18,400);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_009544f0 */
uint F_009544f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9544f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00929740(this);
  return (uint)this;
}

/* ref: FUN_00954500 */
uint F_00954500(unsigned int gen_a0)
{
  GEN_ENTER(0x954500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_009297a0(this);
  return (uint)this;
}

/* ref: FUN_00954510 */
uint F_00954510(unsigned int gen_a0)
{
  GEN_ENTER(0x954510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00929870(this);
  return (uint)this;
}

/* ref: FUN_00954550 */
uint F_00954550(unsigned int gen_a0)
{
  GEN_ENTER(0x954550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_009545a0 */
uint F_009545a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9545a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009545b0 */
uint F_009545b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9545b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009545f0 */
uint F_009545f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9545f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_00954640 */
uint F_00954640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954650 */
uint F_00954650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954650u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954660 */
uint F_00954660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954670 */
uint F_00954670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954670u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954680 */
uint F_00954680(unsigned int gen_a0)
{
  GEN_ENTER(0x954680u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009546c0 */
uint F_009546c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9546c0u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x140,0x137);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x137);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00954780 */
uint F_00954780(unsigned int gen_a0)
{
  GEN_ENTER(0x954780u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,400);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00954800 */
uint F_00954800(unsigned int gen_a0)
{
  GEN_ENTER(0x954800u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00954840 */
uint F_00954840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00954850 */
uint F_00954850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x954850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0x14,0,400);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
    piVar2[3] = param_2[1];
    piVar2[4] = param_2[2];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_009548d0 */
uint F_009548d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9548d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009548e0 */
uint F_009548e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9548e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,400);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00954950 */
uint F_00954950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954960 */
uint F_00954960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x954960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,400);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_009549d0 */
uint F_009549d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9549d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00954a20 */
uint F_00954a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x954a20u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00954a60 */
uint F_00954a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x954a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
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
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00954ae0 */
uint F_00954ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x954ae0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00954ba0 */
uint F_00954ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x954ba0u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,400);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00954c60 */
uint F_00954c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x954c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00928c60(this,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00954c80 */
uint F_00954c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954c80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00954cd0 */
uint F_00954cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00954ce0 */
uint F_00954ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x954ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,400);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00954d50 */
uint F_00954d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954d50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00954d60 */
uint F_00954d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x954d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0x18,0,400);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
    piVar2[3] = param_2[1];
    piVar2[4] = param_2[2];
    piVar2[5] = param_2[3];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00954de0 */
uint F_00954de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954de0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954df0 */
uint F_00954df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954df0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00954e00 */
uint F_00954e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954e00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954e10 */
uint F_00954e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954e10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00954e20 */
uint F_00954e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x954e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0x14,0,400);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
    piVar2[3] = param_2[1];
    piVar2[4] = param_2[2];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00954ea0 */
uint F_00954ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00954eb0 */
uint F_00954eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954ec0 */
uint F_00954ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00954ed0 */
uint F_00954ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00954ee0 */
uint F_00954ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x954ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00954ef0 */
uint F_00954ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x954ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00954f50 */
uint F_00954f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x954f50u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00954ff0 */
uint F_00954ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x954ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00955050 */
uint F_00955050(unsigned int gen_a0)
{
  GEN_ENTER(0x955050u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00955110 */
uint F_00955110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x955110u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00955150 */
uint F_00955150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x955150u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00955190 */
uint F_00955190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x955190u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009551a0 */
uint F_009551a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9551a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,400);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00955210 */
uint F_00955210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x955210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00955220 */
uint F_00955220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x955220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,400);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00955290 */
uint F_00955290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x955290u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_009539d0(this);
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
    F_00948100(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00955330 */
uint F_00955330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x955330u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00955350 */
uint F_00955350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x955350u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00953db0(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x39) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x39) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x39);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x39);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x39);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x39);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00953b50(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_009553f0 */
uint F_009553f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9553f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar3 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
    if (*(uint *)((int)this + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)((int)this + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
    F_0042c880((undefined *)(iVar2 + 100));
    uVar4 = F_0042c880((undefined *)(iVar2 + 0x10));
    uVar3 = (uint)uVar4;
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00955430 */
uint F_00955430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x955430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x6c,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    F_0042cbc0(puVar1 + 4,param_3 + 2);
    puVar1[0x19] = param_3[0x17];
    puVar1[0x1a] = param_3[0x18];
  }
  return (uint)puVar1;
}

/* ref: FUN_00955490 */
uint F_00955490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x955490u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_009542b0(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x21);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
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
    F_00948360(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00955530 */
uint F_00955530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x955530u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00954400(this);
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
    F_009485c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_009555d0 */
uint F_009555d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9555d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00954490(this);
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
    F_00948820(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00955670 */
uint F_00955670(unsigned int gen_a0)
{
  GEN_ENTER(0x955670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00948b40(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x18,800);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_009556d0 */
uint F_009556d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9556d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    this_01 = (int *)F_0094dbf0(this_00,param_1,param_2,param_3);
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

/* ref: FUN_00955860 */
uint F_00955860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x955860u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    this_01 = (int *)F_0094dc60(this_00,param_1,param_2,param_3);
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

/* ref: FUN_009559f0 */
uint F_009559f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9559f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    this_01 = (int *)F_0094dcd0(this_00,param_1,param_2,param_3);
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

/* ref: FUN_00955b80 */
uint F_00955b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x955b80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    this_01 = (int *)F_0094dd40(this_00,param_1,param_2,param_3);
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

/* ref: FUN_00955d10 */
uint F_00955d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x955d10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    this_01 = (int *)F_0094ddb0(this_00,param_1,param_2,param_3);
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

/* ref: FUN_00955ea0 */
byte F_00955ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x955ea0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *param_1 != *param_2;
}

/* ref: FUN_00955ec0 */
uint F_00955ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x955ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  
  piVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (piVar1[2] == *param_4) break;
      piVar1 = (int *)*piVar1;
    } while (piVar1 != param_3);
  }
  *param_1 = (int)piVar1;
  return (uint)param_1;
}

/* ref: FUN_00955ef0 */
uint F_00955ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x955ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    uVar1 = F_0094de80(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x14))),param_1,param_2,param_3,
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

/* ref: FUN_00955f70 */
byte F_00955f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x955f70u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *param_1 != *param_2;
}

/* ref: FUN_00955f90 */
uint F_00955f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x955f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  
  piVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (piVar1[2] == *param_4) break;
      piVar1 = (int *)*piVar1;
    } while (piVar1 != param_3);
  }
  *param_1 = (int)piVar1;
  return (uint)param_1;
}

/* ref: FUN_00955fc0 */
uint F_00955fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x955fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    uVar1 = F_0094df70(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x14))),param_1,param_2,param_3,
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

/* ref: FUN_00956040 */
uint F_00956040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x956040u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    uVar1 = F_0094e000(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x14))),param_1,param_2,param_3,
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

/* ref: FUN_009560c0 */
uint F_009560c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9560c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    uVar1 = F_0094e090(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x14))),param_1,param_2,param_3,
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

/* ref: FUN_00956140 */
uint F_00956140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x956140u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    uVar1 = F_0094e120(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x14))),param_1,param_2,param_3,
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

/* ref: FUN_009561c0 */
uint F_009561c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9561c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d38));
    param_2[1] = *(undefined4 *)(param_3 + 4);
    param_2[2] = *(undefined4 *)(param_3 + 8);
  }
  return (uint)param_2;
}

/* ref: FUN_009561f0 */
uint F_009561f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9561f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d48));
    param_2[1] = *(undefined4 *)(param_3 + 4);
    param_2[2] = *(undefined4 *)(param_3 + 8);
    param_2[3] = *(undefined4 *)(param_3 + 0xc);
    param_2[4] = *(undefined4 *)(param_3 + 0x10);
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_3 + 0x14);
  }
  return (uint)param_2;
}

/* ref: FUN_00956230 */
uint F_00956230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x956230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = (*(undefined * PTR32 (*)[3])REFP(0x10d3d58));
    param_2[1] = *(undefined4 *)(param_3 + 4);
    param_2[2] = *(undefined4 *)(param_3 + 8);
    param_2[3] = *(undefined4 *)(param_3 + 0xc);
  }
  return (uint)param_2;
}

/* ref: FUN_00956260 */
unsigned int F_00956260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x956260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
    }
    puVar1 = (undefined4 *)((int)puVar1 + 0xd);
  }
  return 0;
}

/* ref: FUN_00956290 */
unsigned int F_00956290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x956290u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
    }
    puVar1 = (undefined2 *)((int)puVar1 + 3);
  }
  return 0;
}

/* ref: FUN_009562c0 */
unsigned int F_009562c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9562c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_009562f0 */
unsigned int F_009562f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9562f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_00956320 */
unsigned int F_00956320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x956320u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_00956350 */
uint F_00956350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x956350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)(param_2 + 0x10));
  return (uint)uVar1;
}

/* ref: FUN_00956360 */
uint F_00956360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x956360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)(param_2 + 8));
  return (uint)uVar1;
}

/* ref: FUN_00956370 */
uint F_00956370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x956370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)(param_2 + 0x10));
  return (uint)uVar1;
}

/* ref: FUN_00956380 */
uint F_00956380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x956380u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_0094e2a0(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_00956400 */
uint F_00956400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x956400u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_0094e340(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_00956480 */
unsigned int F_00956480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x956480u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar1 = param_3;
    iVar2 = param_1;
    do {
      *(undefined4 *)(iVar1 + 4) = *((undefined4 *)GEN_TOP(((param_1 - param_3) + 4 + iVar1)));
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 8);
      iVar2 = iVar2 + 0xc;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 != param_2);
  }
  return 0;
}

/* ref: FUN_009564c0 */
uint F_009564c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9564c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0094e420(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_009564e0 */
uint F_009564e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9564e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = param_3;
  if (param_1 != param_2) {
    puVar3 = param_1 + 3;
    do {
      *(undefined4 *)(uVar2 + 4) = *((undefined4 *)GEN_TOP(((int)param_1 + uVar2 + (4 - param_3))));
      *(undefined4 *)(uVar2 + 8) = puVar3[-1];
      *(undefined4 *)(uVar2 + 0xc) = *puVar3;
      puVar1 = puVar3 + 1;
      uVar2 = uVar2 + 0x10;
      puVar3 = puVar3 + 4;
    } while (puVar1 != param_2);
  }
  return uVar2;
}

/* ref: FUN_00956530 */
uint F_00956530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x956530u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_0094e4b0(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_009565b0 */
uint F_009565b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x9565b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_0094e560(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_00956630 */
uint F_00956630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x956630u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_0094e610(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_009566b0 */
uint F_009566b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x9566b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_0094e700(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

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
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
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
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
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
  undefined4 * puVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 5, puVar5 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = puVar5[2];
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar5;
      (*(undefined4 *)(gen_frame + 0x8)) = puVar5[1];
      (*(undefined4 *)(gen_frame + 0x10)) = puVar5[3];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar5[4];
      uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),param_1);
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      puVar1 = puVar5;
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar3 = (char)uVar4;
        while (cVar3 != '\0') {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          puVar1[2] = puVar2[2];
          puVar1[3] = puVar2[3];
          puVar1[4] = puVar2[4];
          uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),puVar2 + -5);
          puVar1 = puVar2;
          puVar2 = puVar2 + -5;
          cVar3 = (char)uVar4;
        }
        *puVar1 = (*(undefined4 *)(gen_frame + 0x4));
        puVar1[1] = (*(undefined4 *)(gen_frame + 0x8));
        puVar1[2] = (*(undefined4 *)(gen_frame + 0xc));
        puVar1[3] = (*(undefined4 *)(gen_frame + 0x10));
        puVar1[4] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        for (; param_1 != puVar1; puVar1 = puVar1 + -5) {
          *puVar1 = puVar1[-5];
          puVar1[1] = puVar1[-4];
          puVar1[2] = puVar1[-3];
          puVar1[3] = puVar1[-2];
          puVar1[4] = puVar1[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0x4));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x8));
        param_1[2] = (*(undefined4 *)(gen_frame + 0xc));
        param_1[3] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[4] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 5;
      puVar5 = puVar5 + 5;
    } while (puVar5 != param_2);
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
  undefined4 * puVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 5, puVar5 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = puVar5[2];
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar5;
      (*(undefined4 *)(gen_frame + 0x8)) = puVar5[1];
      (*(undefined4 *)(gen_frame + 0x10)) = puVar5[3];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar5[4];
      uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),param_1);
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      puVar1 = puVar5;
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar3 = (char)uVar4;
        while (cVar3 != '\0') {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          puVar1[2] = puVar2[2];
          puVar1[3] = puVar2[3];
          puVar1[4] = puVar2[4];
          uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),puVar2 + -5);
          puVar1 = puVar2;
          puVar2 = puVar2 + -5;
          cVar3 = (char)uVar4;
        }
        *puVar1 = (*(undefined4 *)(gen_frame + 0x4));
        puVar1[1] = (*(undefined4 *)(gen_frame + 0x8));
        puVar1[2] = (*(undefined4 *)(gen_frame + 0xc));
        puVar1[3] = (*(undefined4 *)(gen_frame + 0x10));
        puVar1[4] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        for (; param_1 != puVar1; puVar1 = puVar1 + -5) {
          *puVar1 = puVar1[-5];
          puVar1[1] = puVar1[-4];
          puVar1[2] = puVar1[-3];
          puVar1[3] = puVar1[-2];
          puVar1[4] = puVar1[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0x4));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x8));
        param_1[2] = (*(undefined4 *)(gen_frame + 0xc));
        param_1[3] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[4] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 5;
      puVar5 = puVar5 + 5;
    } while (puVar5 != param_2);
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
  undefined4 * puVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 2, puVar5 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = param_1;
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar5;
      (*(undefined4 *)(gen_frame + 0x4)) = puVar5[1];
      uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),param_1);
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
      puVar1 = puVar5;
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
        cVar3 = (char)uVar4;
        while (cVar3 != '\0') {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),puVar2 + -2);
          puVar1 = puVar2;
          puVar2 = puVar2 + -2;
          cVar3 = (char)uVar4;
        }
        *puVar1 = (*(undefined4 *)(gen_frame + 0x0));
        puVar1[1] = (*(undefined4 *)(gen_frame + 0x4));
      }
      else {
        for (; param_1 != puVar1; puVar1 = puVar1 + -2) {
          *puVar1 = puVar1[-2];
          puVar1[1] = puVar1[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0x0));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 2;
      puVar5 = puVar5 + 2;
    } while (puVar5 != param_2);
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
  undefined4 * puVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 3, puVar5 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = *puVar5;
      (*(undefined4 *)(gen_frame + 0x10)) = puVar5[1];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar5[2];
      uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),param_1);
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      puVar1 = puVar5;
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar3 = (char)uVar4;
        while (cVar3 != '\0') {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          puVar1[2] = puVar2[2];
          uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),puVar2 + -3);
          puVar1 = puVar2;
          puVar2 = puVar2 + -3;
          cVar3 = (char)uVar4;
        }
        *puVar1 = (*(undefined4 *)(gen_frame + 0xc));
        puVar1[1] = (*(undefined4 *)(gen_frame + 0x10));
        puVar1[2] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        for (; param_1 != puVar1; puVar1 = puVar1 + -3) {
          *puVar1 = puVar1[-3];
          puVar1[1] = puVar1[-2];
          puVar1[2] = puVar1[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0xc));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[2] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 3;
      puVar5 = puVar5 + 3;
    } while (puVar5 != param_2);
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
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  uint uVar8;
  
  uVar3 = (param_2 - param_1) / 0xc;
  uVar4 = (int)uVar3 / 2;
  uVar6 = uVar4;
  if (0 < (int)uVar4) {
    uVar8 = uVar4 * 2 + 2;
    puVar7 = (undefined4 *)(param_1 + 8 + uVar4 * 0xc);
    do {
      uVar4 = uVar4 - 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar7 + -3;
      (*(undefined4 *)(gen_frame + 0xc)) = puVar7[-4];
      (*(uint *)(gen_frame + 0x14)) = uVar8 - 2;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d38));
      (*(undefined4 *)(gen_frame + 0x10)) = puVar7[-3];
      uVar6 = uVar4;
      for (uVar8 = uVar8 - 2; (int)uVar8 < (int)uVar3; uVar8 = uVar8 * 2 + 2) {
        iVar1 = param_1 + uVar8 * 0xc;
        uVar5 = (*param_3)(iVar1,iVar1 + -0xc);
        if ((char)uVar5 != '\0') {
          uVar8 = uVar8 - 1;
        }
        iVar1 = param_1 + uVar8 * 0xc;
        iVar2 = param_1 + uVar6 * 0xc;
        *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
        uVar6 = uVar8;
      }
      if (uVar8 == uVar3) {
        iVar1 = param_1 + uVar6 * 0xc;
        *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + -8 + uVar3 * 0xc);
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + uVar3 * 0xc + -4);
        uVar6 = uVar3 - 1;
      }
      uVar6 = F_00942ba0(param_1,uVar6,uVar4,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)),param_3);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      uVar8 = (*(uint *)(gen_frame + 0x14));
    } while (0 < (int)uVar4);
  }
  return uVar6;
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
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  char cVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar2 + 3, puVar2 != param_2) {
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d38));
      (*(undefined4 *)(gen_frame + 0x4)) = puVar2[1];
      (*(undefined4 *)(gen_frame + 0x8)) = puVar2[2];
      uVar5 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_1);
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),puVar2 + -3);
        cVar4 = (char)uVar5;
        puVar3 = puVar2 + -3;
        puVar6 = puVar2;
        while (puVar1 = puVar3, cVar4 != '\0') {
          puVar6[1] = puVar1[1];
          puVar6[2] = puVar1[2];
          uVar5 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),puVar1 + -3);
          puVar3 = puVar1 + -3;
          puVar6 = puVar1;
          cVar4 = (char)uVar5;
        }
        puVar6[1] = (*(undefined4 *)(gen_frame + 0x4));
        puVar6[2] = (*(undefined4 *)(gen_frame + 0x8));
      }
      else {
        if (param_1 != puVar2) {
          puVar6 = puVar2 + 5;
          do {
            puVar6[-4] = puVar6[-7];
            puVar3 = puVar6 + -8;
            puVar6[-3] = puVar6[-6];
            puVar6 = puVar6 + -3;
          } while (puVar3 != param_1);
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
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_2;
  uVar5 = param_1;
  if (param_1 != param_2) {
    while (uVar1 = uVar5 + 0x18, uVar1 != param_2) {
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(uVar5 + 0x24);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(uVar5 + 0x1c);
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(uVar5 + 0x20);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d48));
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(uVar5 + 0x28);
      (*(undefined1 *)(gen_frame + 0x18)) = *(undefined1 *)(uVar5 + 0x2c);
      uVar4 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),param_1);
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),uVar5);
        cVar3 = (char)uVar4;
        uVar2 = uVar1;
        while (uVar4 = uVar5, cVar3 != '\0') {
          *(undefined4 *)(uVar2 + 4) = *(undefined4 *)(uVar4 + 4);
          *(undefined4 *)(uVar2 + 8) = *(undefined4 *)(uVar4 + 8);
          *(undefined4 *)(uVar2 + 0xc) = *(undefined4 *)(uVar4 + 0xc);
          *(undefined4 *)(uVar2 + 0x10) = *(undefined4 *)(uVar4 + 0x10);
          *(undefined1 *)(uVar2 + 0x14) = *(undefined1 *)(uVar4 + 0x14);
          uVar5 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),uVar4 - 0x18);
          cVar3 = (char)uVar5;
          uVar5 = uVar4 - 0x18;
          uVar2 = uVar4;
        }
        *(undefined4 *)(uVar2 + 4) = (*(undefined4 *)(gen_frame + 0x8));
        *(undefined4 *)(uVar2 + 8) = (*(undefined4 *)(gen_frame + 0xc));
        uVar4 = CONCAT31((int3)((uint)(*(undefined4 *)(gen_frame + 0xc)) >> 8),(*(undefined1 *)(gen_frame + 0x18)));
        *(undefined4 *)(uVar2 + 0xc) = (*(undefined4 *)(gen_frame + 0x10));
        *(undefined4 *)(uVar2 + 0x10) = (*(undefined4 *)(gen_frame + 0x14));
        *(undefined1 *)(uVar2 + 0x14) = (*(undefined1 *)(gen_frame + 0x18));
        uVar5 = uVar1;
      }
      else {
        F_00942d00(param_1,uVar1,uVar5 + 0x30,param_1);
        *(undefined4 *)(param_1 + 4) = (*(undefined4 *)(gen_frame + 0x8));
        *(undefined4 *)(param_1 + 8) = (*(undefined4 *)(gen_frame + 0xc));
        uVar4 = CONCAT31((int3)((uint)(*(undefined4 *)(gen_frame + 0xc)) >> 8),(*(undefined1 *)(gen_frame + 0x18)));
        *(undefined4 *)(param_1 + 0xc) = (*(undefined4 *)(gen_frame + 0x10));
        *(undefined4 *)(param_1 + 0x10) = (*(undefined4 *)(gen_frame + 0x14));
        *(undefined1 *)(param_1 + 0x14) = (*(undefined1 *)(gen_frame + 0x18));
        uVar5 = uVar1;
      }
    }
  }
  return uVar4;
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
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  uint uVar8;
  
  uVar6 = param_2 - param_1 >> 4;
  uVar2 = (int)(uVar6 - (param_2 - param_1 >> 0x1f)) >> 1;
  uVar5 = uVar2;
  if (0 < (int)uVar2) {
    uVar8 = uVar2 * 2 + 2;
    puVar7 = (undefined4 *)(param_1 + 8 + uVar2 * 0x10);
    do {
      (*(undefined4 *)(gen_frame + 0x8)) = puVar7[-5];
      uVar2 = uVar2 - 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar7 + -4;
      (*(undefined4 *)(gen_frame + 0xc)) = puVar7[-4];
      (*(uint *)(gen_frame + 0x14)) = uVar8 - 2;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d58));
      (*(undefined4 *)(gen_frame + 0x10)) = puVar7[-3];
      uVar5 = uVar2;
      for (uVar8 = uVar8 - 2; (int)uVar8 < (int)uVar6; uVar8 = uVar8 * 2 + 2) {
        iVar3 = uVar8 * 0x10 + param_1;
        uVar4 = (*param_3)(iVar3,iVar3 + -0x10);
        if ((char)uVar4 != '\0') {
          uVar8 = uVar8 - 1;
        }
        iVar3 = param_1 + uVar5 * 0x10;
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 4 + uVar8 * 0x10);
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 8 + uVar8 * 0x10);
        *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0xc + uVar8 * 0x10);
        uVar5 = uVar8;
      }
      if (uVar8 == uVar6) {
        iVar3 = param_1 + uVar5 * 0x10;
        iVar1 = param_1 + -0x10 + uVar6 * 0x10;
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + -0xc + uVar6 * 0x10);
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar1 + 8);
        *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
        uVar5 = uVar6 - 1;
      }
      uVar5 = F_00942d50(param_1,uVar5,uVar2,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),param_3);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      uVar8 = (*(uint *)(gen_frame + 0x14));
    } while (0 < (int)uVar2);
  }
  return uVar5;
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
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  char cVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  puVar6 = param_2;
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar2 + 4, puVar2 != param_2) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)puVar2[1];
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d58));
      (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (undefined4 *)puVar2[2];
      (*(undefined4 *)(gen_frame + 0x18)) = puVar2[3];
      uVar5 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1);
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),puVar2 + -4);
        cVar4 = (char)uVar5;
        puVar3 = puVar2 + -4;
        puVar6 = puVar2;
        while (puVar1 = puVar3, cVar4 != '\0') {
          puVar6[1] = puVar1[1];
          puVar6[2] = puVar1[2];
          puVar6[3] = puVar1[3];
          uVar5 = (*param_3)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),puVar1 + -4);
          puVar3 = puVar1 + -4;
          puVar6 = puVar1;
          cVar4 = (char)uVar5;
        }
        puVar6[1] = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
        puVar6[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
        puVar6[3] = (*(undefined4 *)(gen_frame + 0x18));
      }
      else {
        if (param_1 != puVar2) {
          puVar6 = puVar2 + 6;
          do {
            puVar6[-5] = puVar6[-9];
            puVar6[-4] = puVar6[-8];
            puVar3 = puVar6 + -10;
            puVar6[-3] = puVar6[-7];
            puVar6 = puVar6 + -4;
          } while (puVar3 != param_1);
        }
        param_1[1] = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
        param_1[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
        param_1[3] = (*(undefined4 *)(gen_frame + 0x18));
        (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
      }
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
      puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
    }
  }
  return (uint)puVar6;
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
  undefined4 * puVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 3, puVar5 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = *puVar5;
      (*(undefined4 *)(gen_frame + 0x10)) = puVar5[1];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar5[2];
      uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),param_1);
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      puVar1 = puVar5;
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar3 = (char)uVar4;
        while (cVar3 != '\0') {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          puVar1[2] = puVar2[2];
          uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),puVar2 + -3);
          puVar1 = puVar2;
          puVar2 = puVar2 + -3;
          cVar3 = (char)uVar4;
        }
        *puVar1 = (*(undefined4 *)(gen_frame + 0xc));
        puVar1[1] = (*(undefined4 *)(gen_frame + 0x10));
        puVar1[2] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        for (; param_1 != puVar1; puVar1 = puVar1 + -3) {
          *puVar1 = puVar1[-3];
          puVar1[1] = puVar1[-2];
          puVar1[2] = puVar1[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0xc));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[2] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 3;
      puVar5 = puVar5 + 3;
    } while (puVar5 != param_2);
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
  undefined4 * puVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 4, puVar5 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = puVar5[1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar5;
      (*(undefined4 *)(gen_frame + 0x10)) = puVar5[2];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar5[3];
      uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x8)),param_1);
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      puVar1 = puVar5;
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar3 = (char)uVar4;
        while (cVar3 != '\0') {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          puVar1[2] = puVar2[2];
          puVar1[3] = puVar2[3];
          uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x8)),puVar2 + -4);
          puVar1 = puVar2;
          puVar2 = puVar2 + -4;
          cVar3 = (char)uVar4;
        }
        *puVar1 = (*(undefined4 *)(gen_frame + 0x8));
        puVar1[1] = (*(undefined4 *)(gen_frame + 0xc));
        puVar1[2] = (*(undefined4 *)(gen_frame + 0x10));
        puVar1[3] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        for (; param_1 != puVar1; puVar1 = puVar1 + -4) {
          *puVar1 = puVar1[-4];
          puVar1[1] = puVar1[-3];
          puVar1[2] = puVar1[-2];
          puVar1[3] = puVar1[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0x8));
        param_1[1] = (*(undefined4 *)(gen_frame + 0xc));
        param_1[2] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[3] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 4;
      puVar5 = puVar5 + 4;
    } while (puVar5 != param_2);
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
  undefined4 * puVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 3, puVar5 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = *puVar5;
      (*(undefined4 *)(gen_frame + 0x10)) = puVar5[1];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar5[2];
      uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),param_1);
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      puVar1 = puVar5;
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar3 = (char)uVar4;
        while (cVar3 != '\0') {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          puVar1[2] = puVar2[2];
          uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0xc)),puVar2 + -3);
          puVar1 = puVar2;
          puVar2 = puVar2 + -3;
          cVar3 = (char)uVar4;
        }
        *puVar1 = (*(undefined4 *)(gen_frame + 0xc));
        puVar1[1] = (*(undefined4 *)(gen_frame + 0x10));
        puVar1[2] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        for (; param_1 != puVar1; puVar1 = puVar1 + -3) {
          *puVar1 = puVar1[-3];
          puVar1[1] = puVar1[-2];
          puVar1[2] = puVar1[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0xc));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[2] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 3;
      puVar5 = puVar5 + 3;
    } while (puVar5 != param_2);
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
  undefined4 * puVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 4, puVar5 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = puVar5[1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar5;
      (*(undefined4 *)(gen_frame + 0x10)) = puVar5[2];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar5[3];
      uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x8)),param_1);
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      puVar1 = puVar5;
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar3 = (char)uVar4;
        while (cVar3 != '\0') {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          puVar1[2] = puVar2[2];
          puVar1[3] = puVar2[3];
          uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x8)),puVar2 + -4);
          puVar1 = puVar2;
          puVar2 = puVar2 + -4;
          cVar3 = (char)uVar4;
        }
        *puVar1 = (*(undefined4 *)(gen_frame + 0x8));
        puVar1[1] = (*(undefined4 *)(gen_frame + 0xc));
        puVar1[2] = (*(undefined4 *)(gen_frame + 0x10));
        puVar1[3] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        for (; param_1 != puVar1; puVar1 = puVar1 + -4) {
          *puVar1 = puVar1[-4];
          puVar1[1] = puVar1[-3];
          puVar1[2] = puVar1[-2];
          puVar1[3] = puVar1[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0x8));
        param_1[1] = (*(undefined4 *)(gen_frame + 0xc));
        param_1[2] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[3] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 4;
      puVar5 = puVar5 + 4;
    } while (puVar5 != param_2);
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
  undefined4 * puVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 5, puVar5 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1;
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = puVar5[2];
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar5;
      (*(undefined4 *)(gen_frame + 0x8)) = puVar5[1];
      (*(undefined4 *)(gen_frame + 0x10)) = puVar5[3];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar5[4];
      uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),param_1);
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      puVar1 = puVar5;
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        cVar3 = (char)uVar4;
        while (cVar3 != '\0') {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          puVar1[2] = puVar2[2];
          puVar1[3] = puVar2[3];
          puVar1[4] = puVar2[4];
          uVar4 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x4)),puVar2 + -5);
          puVar1 = puVar2;
          puVar2 = puVar2 + -5;
          cVar3 = (char)uVar4;
        }
        *puVar1 = (*(undefined4 *)(gen_frame + 0x4));
        puVar1[1] = (*(undefined4 *)(gen_frame + 0x8));
        puVar1[2] = (*(undefined4 *)(gen_frame + 0xc));
        puVar1[3] = (*(undefined4 *)(gen_frame + 0x10));
        puVar1[4] = (*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        for (; param_1 != puVar1; puVar1 = puVar1 + -5) {
          *puVar1 = puVar1[-5];
          puVar1[1] = puVar1[-4];
          puVar1[2] = puVar1[-3];
          puVar1[3] = puVar1[-2];
          puVar1[4] = puVar1[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0x4));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x8));
        param_1[2] = (*(undefined4 *)(gen_frame + 0xc));
        param_1[3] = (*(undefined4 *)(gen_frame + 0x10));
        param_1[4] = (*(undefined4 *)(gen_frame + 0x14));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 5;
      puVar5 = puVar5 + 5;
    } while (puVar5 != param_2);
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
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + -0xc);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + -0x10);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + -4);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + -8);
  *(undefined4 *)(param_2 + -0x10) = *param_1;
  *(undefined4 *)(param_2 + -0xc) = param_1[1];
  *(undefined4 *)(param_2 + -8) = param_1[2];
  *(undefined4 *)(param_2 + -4) = param_1[3];
  uVar1 = F_009424d0(param_1,0,(param_2 - (int)param_1) + -0x10 >> 4,&(*(undefined4 *)(gen_frame + 0xc)),param_3);
  return uVar1;
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
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + -0xc);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + -0x10);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + -4);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + -8);
  *(undefined4 *)(param_2 + -0x10) = *param_1;
  *(undefined4 *)(param_2 + -0xc) = param_1[1];
  *(undefined4 *)(param_2 + -8) = param_1[2];
  *(undefined4 *)(param_2 + -4) = param_1[3];
  uVar1 = F_00942790(param_1,0,(param_2 - (int)param_1) + -0x10 >> 4,&(*(undefined4 *)(gen_frame + 0xc)),param_3);
  return uVar1;
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

