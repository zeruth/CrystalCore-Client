#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
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
  byte * pbVar1;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  if (param_2 != 0) {
    pbVar1 = (byte *)(param_1 + 0x20);
    do {
      F_0056c270(((byte *)(gen_frame + 0x1c)));
      F_0042b630(((undefined1 *)(gen_frame + 0x84)));
      if (pbVar1 != &REFG(undefined, 0x20)) {
        *(undefined4 *)(pbVar1 + -0x20) = (*(undefined4 *)(gen_frame + 0x4));
        *(undefined4 *)(pbVar1 + -0x1c) = (*(undefined4 *)(gen_frame + 0x8));
        *(undefined4 *)(pbVar1 + -0x18) = (*(undefined4 *)(gen_frame + 0xc));
        *(undefined4 *)(pbVar1 + -0x14) = (*(undefined4 *)(gen_frame + 0x10));
        *(undefined4 *)(pbVar1 + -0x10) = (*(undefined4 *)(gen_frame + 0x14));
        *(undefined4 *)(pbVar1 + -0xc) = (*(undefined4 *)(gen_frame + 0x18));
        *(undefined4 *)(pbVar1 + -8) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x1c)) + 0));
        *(undefined4 *)(pbVar1 + -4) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x1c)) + 4));
        *(undefined4 *)(pbVar1 + 4) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x1c)) + 12));
        *(undefined4 *)pbVar1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x1c)) + 8));
        F_0042cbc0(pbVar1 + 8,((undefined1 *)(gen_frame + 0x2c)));
        *(undefined4 *)(pbVar1 + 0x5c) = (*(undefined4 *)(gen_frame + 0x80));
        F_0042cbc0(pbVar1 + 0x60,((undefined1 *)(gen_frame + 0x84)));
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x84)));
      param_1 = F_00560340(((byte *)(gen_frame + 0x1c)));
      pbVar1 = pbVar1 + 0xd4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return param_1;
}

/* ref: FUN_0095ddb0 */
unsigned int F_0095ddb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95ddb0u, gen_a0, gen_a1, gen_a2, 0u);
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
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    do {
      uVar1 = *(undefined4 *)(iVar2 + 4 + (int)param_3);
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar2 + (int)param_3);
        param_3[1] = uVar1;
      }
      param_3 = param_3 + 2;
    } while (iVar2 + (int)param_3 != param_2);
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
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_0042cbc0(param_3,iVar1 + (int)param_3);
        *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x58);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
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
    puVar11 = puVar9;
    if (param_3 <= puVar10) break;
    uVar7 = (*param_4)(puVar10,puVar9);
    if (((char)uVar7 != '\0') || (uVar7 = (*param_4)(puVar9,puVar10), (char)uVar7 != '\0')) break;
  } while( true );
joined_r0x0095e0cb: ;
  puVar8 = puVar9;
  if (param_3 <= puVar1) {
joined_r0x0095e14b: ;
    while (param_2 < puVar8) {
      local_8 = puVar9 + -5;
      uVar7 = (*param_4)(local_8,puVar11);
      if ((char)uVar7 == '\0') {
        uVar7 = (*param_4)(puVar11,local_8);
        puVar8 = local_c;
        if ((char)uVar7 != '\0') break;
        uVar2 = puVar11[-4];
        uVar3 = puVar11[-3];
        uVar4 = puVar11[-5];
        uVar5 = puVar11[-1];
        uVar6 = puVar11[-2];
        puVar11[-5] = *local_8;
        puVar11[-4] = puVar9[-4];
        puVar11[-3] = puVar9[-3];
        puVar11[-2] = puVar9[-2];
        puVar11[-1] = puVar9[-1];
        *local_8 = uVar4;
        puVar9[-4] = uVar2;
        puVar9[-3] = uVar3;
        puVar9[-2] = uVar6;
        puVar9[-1] = uVar5;
        puVar11 = puVar11 + -5;
      }
      local_c = local_c + -5;
      puVar9 = local_8;
      puVar8 = local_c;
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
        uVar5 = puVar11[3];
        uVar6 = puVar11[4];
        *puVar11 = *puVar10;
        puVar11[1] = puVar10[1];
        puVar11[2] = puVar10[2];
        puVar11[3] = puVar10[3];
        puVar11[4] = puVar10[4];
        *puVar10 = uVar3;
        puVar10[1] = uVar2;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        puVar10[4] = uVar6;
      }
      uVar2 = *puVar11;
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      uVar6 = puVar11[4];
      *puVar11 = *puVar1;
      puVar11[1] = puVar1[1];
      puVar11[2] = puVar1[2];
      puVar11[3] = puVar1[3];
      puVar11[4] = puVar1[4];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar1[4] = uVar6;
      puVar9 = puVar8;
      puVar10 = puVar10 + 5;
      puVar1 = puVar1 + 5;
      puVar11 = puVar11 + 5;
    }
    else {
      puVar9 = puVar8 + -5;
      local_c = puVar9;
      if (puVar1 == param_3) {
        puVar12 = puVar11 + -5;
        if (puVar9 != puVar12) {
          uVar2 = puVar8[-4];
          uVar3 = *puVar9;
          uVar4 = puVar8[-3];
          uVar5 = puVar8[-2];
          uVar6 = puVar8[-1];
          *puVar9 = *puVar12;
          puVar8[-4] = puVar11[-4];
          puVar8[-3] = puVar11[-3];
          puVar8[-2] = puVar11[-2];
          puVar8[-1] = puVar11[-1];
          *puVar12 = uVar3;
          puVar11[-4] = uVar2;
          puVar11[-3] = uVar4;
          puVar11[-2] = uVar5;
          puVar11[-1] = uVar6;
        }
        uVar2 = puVar11[-4];
        uVar3 = *puVar12;
        uVar4 = puVar11[-3];
        uVar5 = puVar11[-2];
        uVar6 = puVar11[-1];
        puVar8 = puVar10 + -5;
        *puVar12 = *puVar8;
        puVar11[-4] = puVar10[-4];
        puVar11[-3] = puVar10[-3];
        puVar11[-2] = puVar10[-2];
        puVar11[-1] = puVar10[-1];
        *puVar8 = uVar3;
        puVar10[-4] = uVar2;
        puVar10[-3] = uVar4;
        puVar10[-2] = uVar5;
        puVar10[-1] = uVar6;
        puVar10 = puVar8;
        puVar11 = puVar12;
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
  uVar7 = (*param_4)(puVar11,puVar1);
  puVar9 = local_c;
  if ((char)uVar7 == '\0') {
    uVar7 = (*param_4)(puVar1,puVar11);
    puVar8 = local_c;
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
    puVar11 = puVar9;
    if (param_3 <= puVar10) break;
    uVar7 = (*param_4)(puVar10,puVar9);
    if (((char)uVar7 != '\0') || (uVar7 = (*param_4)(puVar9,puVar10), (char)uVar7 != '\0')) break;
  } while( true );
joined_r0x0095e4db: ;
  puVar8 = puVar9;
  if (param_3 <= puVar1) {
joined_r0x0095e55b: ;
    while (param_2 < puVar8) {
      local_8 = puVar9 + -5;
      uVar7 = (*param_4)(local_8,puVar11);
      if ((char)uVar7 == '\0') {
        uVar7 = (*param_4)(puVar11,local_8);
        puVar8 = local_c;
        if ((char)uVar7 != '\0') break;
        uVar2 = puVar11[-4];
        uVar3 = puVar11[-3];
        uVar4 = puVar11[-5];
        uVar5 = puVar11[-1];
        uVar6 = puVar11[-2];
        puVar11[-5] = *local_8;
        puVar11[-4] = puVar9[-4];
        puVar11[-3] = puVar9[-3];
        puVar11[-2] = puVar9[-2];
        puVar11[-1] = puVar9[-1];
        *local_8 = uVar4;
        puVar9[-4] = uVar2;
        puVar9[-3] = uVar3;
        puVar9[-2] = uVar6;
        puVar9[-1] = uVar5;
        puVar11 = puVar11 + -5;
      }
      local_c = local_c + -5;
      puVar9 = local_8;
      puVar8 = local_c;
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
        uVar5 = puVar11[3];
        uVar6 = puVar11[4];
        *puVar11 = *puVar10;
        puVar11[1] = puVar10[1];
        puVar11[2] = puVar10[2];
        puVar11[3] = puVar10[3];
        puVar11[4] = puVar10[4];
        *puVar10 = uVar3;
        puVar10[1] = uVar2;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        puVar10[4] = uVar6;
      }
      uVar2 = *puVar11;
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      uVar6 = puVar11[4];
      *puVar11 = *puVar1;
      puVar11[1] = puVar1[1];
      puVar11[2] = puVar1[2];
      puVar11[3] = puVar1[3];
      puVar11[4] = puVar1[4];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar1[4] = uVar6;
      puVar9 = puVar8;
      puVar10 = puVar10 + 5;
      puVar1 = puVar1 + 5;
      puVar11 = puVar11 + 5;
    }
    else {
      puVar9 = puVar8 + -5;
      local_c = puVar9;
      if (puVar1 == param_3) {
        puVar12 = puVar11 + -5;
        if (puVar9 != puVar12) {
          uVar2 = puVar8[-4];
          uVar3 = *puVar9;
          uVar4 = puVar8[-3];
          uVar5 = puVar8[-2];
          uVar6 = puVar8[-1];
          *puVar9 = *puVar12;
          puVar8[-4] = puVar11[-4];
          puVar8[-3] = puVar11[-3];
          puVar8[-2] = puVar11[-2];
          puVar8[-1] = puVar11[-1];
          *puVar12 = uVar3;
          puVar11[-4] = uVar2;
          puVar11[-3] = uVar4;
          puVar11[-2] = uVar5;
          puVar11[-1] = uVar6;
        }
        uVar2 = puVar11[-4];
        uVar3 = *puVar12;
        uVar4 = puVar11[-3];
        uVar5 = puVar11[-2];
        uVar6 = puVar11[-1];
        puVar8 = puVar10 + -5;
        *puVar12 = *puVar8;
        puVar11[-4] = puVar10[-4];
        puVar11[-3] = puVar10[-3];
        puVar11[-2] = puVar10[-2];
        puVar11[-1] = puVar10[-1];
        *puVar8 = uVar3;
        puVar10[-4] = uVar2;
        puVar10[-3] = uVar4;
        puVar10[-2] = uVar5;
        puVar10[-1] = uVar6;
        puVar10 = puVar8;
        puVar11 = puVar12;
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
  uVar7 = (*param_4)(puVar11,puVar1);
  puVar9 = local_c;
  if ((char)uVar7 == '\0') {
    uVar7 = (*param_4)(puVar1,puVar11);
    puVar8 = local_c;
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
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar8 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 3) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1) * 2;
  F_009588f0(param_2,puVar8,param_3 + -2,param_4);
  puVar1 = puVar8;
  while (puVar6 = puVar1, param_2 < puVar6) {
    puVar1 = puVar6 + -2;
    uVar4 = (*param_4)(puVar1,puVar6);
    if (((char)uVar4 != '\0') || (uVar4 = (*param_4)(puVar6,puVar1), (char)uVar4 != '\0')) break;
  }
  do {
    puVar8 = puVar8 + 2;
    puVar1 = puVar8;
    local_8 = puVar8;
    local_c = puVar6;
    puVar9 = puVar6;
    if (param_3 <= puVar8) break;
    uVar4 = (*param_4)(puVar8,puVar6);
    if (((char)uVar4 != '\0') || (uVar4 = (*param_4)(puVar6,puVar8), (char)uVar4 != '\0')) break;
  } while( true );
joined_r0x0095e8d5: ;
  puVar10 = puVar6;
  if (param_3 <= puVar1) {
joined_r0x0095e91f: ;
    while (puVar5 = puVar6, param_2 < puVar6) {
      puVar7 = puVar10 + -2;
      uVar4 = (*param_4)(puVar7,puVar9);
      puVar5 = puVar9;
      puVar8 = local_8;
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_4)(puVar9,puVar7);
        puVar5 = local_c;
        if ((char)uVar4 != '\0') break;
        uVar2 = puVar9[-2];
        uVar3 = puVar9[-1];
        puVar5 = puVar9 + -2;
        *puVar5 = *puVar7;
        puVar9[-1] = puVar10[-1];
        *puVar7 = uVar2;
        puVar10[-1] = uVar3;
      }
      local_c = local_c + -2;
      puVar10 = puVar7;
      puVar9 = puVar5;
      puVar6 = local_c;
    }
    if (puVar5 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar9;
        param_1[1] = puVar8;
        return (uint)param_1;
      }
      if (puVar8 != puVar1) {
        uVar2 = puVar9[1];
        uVar3 = *puVar9;
        *puVar9 = *puVar8;
        puVar9[1] = puVar8[1];
        *puVar8 = uVar3;
        puVar8[1] = uVar2;
      }
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      *puVar9 = *puVar1;
      puVar9[1] = puVar1[1];
      puVar8 = puVar8 + 2;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar6 = puVar5;
      puVar1 = puVar1 + 2;
      local_8 = puVar8;
      puVar9 = puVar9 + 2;
    }
    else {
      puVar6 = puVar5 + -2;
      local_c = puVar6;
      if (puVar1 == param_3) {
        puVar10 = puVar9 + -2;
        if (puVar6 != puVar10) {
          uVar2 = puVar5[-1];
          uVar3 = *puVar6;
          *puVar6 = *puVar10;
          puVar5[-1] = puVar9[-1];
          *puVar10 = uVar3;
          puVar9[-1] = uVar2;
        }
        uVar2 = puVar9[-1];
        uVar3 = *puVar10;
        local_8 = puVar8 + -2;
        *puVar10 = *local_8;
        puVar9[-1] = puVar8[-1];
        *local_8 = uVar3;
        puVar8[-1] = uVar2;
        puVar8 = local_8;
        puVar9 = puVar10;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        *puVar1 = *puVar6;
        puVar1[1] = puVar5[-1];
        *puVar6 = uVar3;
        puVar5[-1] = uVar2;
        puVar1 = puVar1 + 2;
      }
    }
    goto joined_r0x0095e8d5;
  }
  uVar4 = (*param_4)(puVar9,puVar1);
  puVar6 = local_c;
  if ((char)uVar4 == '\0') {
    uVar4 = (*param_4)(puVar1,puVar9);
    puVar10 = local_c;
    local_8 = puVar8;
    if ((char)uVar4 != '\0') goto joined_r0x0095e91f;
    uVar2 = puVar8[1];
    uVar3 = *puVar8;
    *puVar8 = *puVar1;
    puVar8[1] = puVar1[1];
    puVar8 = puVar8 + 2;
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
  }
  puVar1 = puVar1 + 2;
  local_8 = puVar8;
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
    local_c = uVar5;
    uVar2 = local_8;
    if (param_3 <= uVar5) break;
    uVar3 = (*param_4)(uVar5,local_8);
    if (((char)uVar3 != '\0') || (uVar3 = (*param_4)(local_8,uVar5), (char)uVar3 != '\0')) break;
  } while( true );
joined_r0x0095eb13: ;
  uVar3 = local_8;
  if (param_3 <= uVar1) {
joined_r0x0095eb4d: ;
    for (; param_2 < local_8; local_8 = local_8 - 0x6c) {
      uVar3 = uVar3 - 0x6c;
      uVar4 = (*param_4)(uVar3,uVar2);
      uVar5 = local_c;
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_4)(uVar2,uVar3);
        if ((char)uVar4 != '\0') break;
        uVar2 = uVar2 - 0x6c;
        F_009415a0(uVar2,uVar3);
      }
    }
    if (local_8 == param_2) {
      if (uVar1 == param_3) {
        *param_1 = uVar2;
        param_1[1] = uVar5;
        return (uint)param_1;
      }
      if (uVar5 != uVar1) {
        F_009415a0(uVar2,uVar5);
      }
      uVar5 = uVar5 + 0x6c;
      F_009415a0(uVar2,uVar1);
      uVar1 = uVar1 + 0x6c;
      local_c = uVar5;
      uVar2 = uVar2 + 0x6c;
    }
    else {
      local_8 = local_8 - 0x6c;
      if (uVar1 == param_3) {
        uVar2 = uVar2 - 0x6c;
        if (local_8 != uVar2) {
          F_009415a0(local_8,uVar2);
        }
        uVar5 = uVar5 - 0x6c;
        F_009415a0(uVar2,uVar5);
        local_c = uVar5;
      }
      else {
        F_009415a0(uVar1,local_8);
        uVar1 = uVar1 + 0x6c;
      }
    }
    goto joined_r0x0095eb13;
  }
  uVar4 = (*param_4)(uVar2,uVar1);
  local_c = uVar5;
  if ((char)uVar4 == '\0') {
    uVar4 = (*param_4)(uVar1,uVar2);
    if ((char)uVar4 != '\0') goto joined_r0x0095eb4d;
    local_c = uVar5 + 0x6c;
    F_009415a0(uVar5,uVar1);
  }
  uVar5 = local_c;
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
    local_c = uVar5;
    uVar2 = local_8;
    if (param_3 <= uVar5) break;
    uVar3 = (*param_4)(uVar5,local_8);
    if (((char)uVar3 != '\0') || (uVar3 = (*param_4)(local_8,uVar5), (char)uVar3 != '\0')) break;
  } while( true );
joined_r0x0095ecd3: ;
  uVar3 = local_8;
  if (param_3 <= uVar1) {
joined_r0x0095ed0d: ;
    for (; param_2 < local_8; local_8 = local_8 - 0x68) {
      uVar3 = uVar3 - 0x68;
      uVar4 = (*param_4)(uVar3,uVar2);
      uVar5 = local_c;
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_4)(uVar2,uVar3);
        if ((char)uVar4 != '\0') break;
        uVar2 = uVar2 - 0x68;
        F_00941760(uVar2,uVar3);
      }
    }
    if (local_8 == param_2) {
      if (uVar1 == param_3) {
        *param_1 = uVar2;
        param_1[1] = uVar5;
        return (uint)param_1;
      }
      if (uVar5 != uVar1) {
        F_00941760(uVar2,uVar5);
      }
      uVar5 = uVar5 + 0x68;
      F_00941760(uVar2,uVar1);
      uVar1 = uVar1 + 0x68;
      local_c = uVar5;
      uVar2 = uVar2 + 0x68;
    }
    else {
      local_8 = local_8 - 0x68;
      if (uVar1 == param_3) {
        uVar2 = uVar2 - 0x68;
        if (local_8 != uVar2) {
          F_00941760(local_8,uVar2);
        }
        uVar5 = uVar5 - 0x68;
        F_00941760(uVar2,uVar5);
        local_c = uVar5;
      }
      else {
        F_00941760(uVar1,local_8);
        uVar1 = uVar1 + 0x68;
      }
    }
    goto joined_r0x0095ecd3;
  }
  uVar4 = (*param_4)(uVar2,uVar1);
  local_c = uVar5;
  if ((char)uVar4 == '\0') {
    uVar4 = (*param_4)(uVar1,uVar2);
    if ((char)uVar4 != '\0') goto joined_r0x0095ed0d;
    local_c = uVar5 + 0x68;
    F_00941760(uVar5,uVar1);
  }
  uVar5 = local_c;
  uVar1 = uVar1 + 0x68;
  goto joined_r0x0095ecd3;
}

/* ref: FUN_0095ede0 */
unsigned int F_0095ede0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
        return 0;
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
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar8 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 3) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1) * 2;
  F_00958e50(param_2,puVar8,param_3 + -2,param_4);
  puVar1 = puVar8;
  while (puVar6 = puVar1, param_2 < puVar6) {
    puVar1 = puVar6 + -2;
    uVar4 = (*param_4)(puVar1,puVar6);
    if (((char)uVar4 != '\0') || (uVar4 = (*param_4)(puVar6,puVar1), (char)uVar4 != '\0')) break;
  }
  do {
    puVar8 = puVar8 + 2;
    puVar1 = puVar8;
    local_8 = puVar8;
    local_c = puVar6;
    puVar9 = puVar6;
    if (param_3 <= puVar8) break;
    uVar4 = (*param_4)(puVar8,puVar6);
    if (((char)uVar4 != '\0') || (uVar4 = (*param_4)(puVar6,puVar8), (char)uVar4 != '\0')) break;
  } while( true );
joined_r0x0095f075: ;
  puVar10 = puVar6;
  if (param_3 <= puVar1) {
joined_r0x0095f0bf: ;
    while (puVar5 = puVar6, param_2 < puVar6) {
      puVar7 = puVar10 + -2;
      uVar4 = (*param_4)(puVar7,puVar9);
      puVar5 = puVar9;
      puVar8 = local_8;
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_4)(puVar9,puVar7);
        puVar5 = local_c;
        if ((char)uVar4 != '\0') break;
        uVar2 = puVar9[-2];
        uVar3 = puVar9[-1];
        puVar5 = puVar9 + -2;
        *puVar5 = *puVar7;
        puVar9[-1] = puVar10[-1];
        *puVar7 = uVar2;
        puVar10[-1] = uVar3;
      }
      local_c = local_c + -2;
      puVar10 = puVar7;
      puVar9 = puVar5;
      puVar6 = local_c;
    }
    if (puVar5 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar9;
        param_1[1] = puVar8;
        return (uint)param_1;
      }
      if (puVar8 != puVar1) {
        uVar2 = puVar9[1];
        uVar3 = *puVar9;
        *puVar9 = *puVar8;
        puVar9[1] = puVar8[1];
        *puVar8 = uVar3;
        puVar8[1] = uVar2;
      }
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      *puVar9 = *puVar1;
      puVar9[1] = puVar1[1];
      puVar8 = puVar8 + 2;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar6 = puVar5;
      puVar1 = puVar1 + 2;
      local_8 = puVar8;
      puVar9 = puVar9 + 2;
    }
    else {
      puVar6 = puVar5 + -2;
      local_c = puVar6;
      if (puVar1 == param_3) {
        puVar10 = puVar9 + -2;
        if (puVar6 != puVar10) {
          uVar2 = puVar5[-1];
          uVar3 = *puVar6;
          *puVar6 = *puVar10;
          puVar5[-1] = puVar9[-1];
          *puVar10 = uVar3;
          puVar9[-1] = uVar2;
        }
        uVar2 = puVar9[-1];
        uVar3 = *puVar10;
        local_8 = puVar8 + -2;
        *puVar10 = *local_8;
        puVar9[-1] = puVar8[-1];
        *local_8 = uVar3;
        puVar8[-1] = uVar2;
        puVar8 = local_8;
        puVar9 = puVar10;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        *puVar1 = *puVar6;
        puVar1[1] = puVar5[-1];
        *puVar6 = uVar3;
        puVar5[-1] = uVar2;
        puVar1 = puVar1 + 2;
      }
    }
    goto joined_r0x0095f075;
  }
  uVar4 = (*param_4)(puVar9,puVar1);
  puVar6 = local_c;
  if ((char)uVar4 == '\0') {
    uVar4 = (*param_4)(puVar1,puVar9);
    puVar10 = local_c;
    local_8 = puVar8;
    if ((char)uVar4 != '\0') goto joined_r0x0095f0bf;
    uVar2 = puVar8[1];
    uVar3 = *puVar8;
    *puVar8 = *puVar1;
    puVar8[1] = puVar1[1];
    puVar8 = puVar8 + 2;
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
  }
  puVar1 = puVar1 + 2;
  local_8 = puVar8;
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
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar9 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  F_00958fc0(param_2,puVar9,param_3 + -3,param_4);
  puVar1 = puVar9;
  while (puVar7 = puVar1, param_2 < puVar7) {
    puVar1 = puVar7 + -3;
    uVar5 = (*param_4)(puVar1,puVar7);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(puVar7,puVar1), (char)uVar5 != '\0')) break;
  }
  do {
    puVar9 = puVar9 + 3;
    puVar1 = puVar9;
    local_8 = puVar9;
    local_c = puVar7;
    puVar10 = puVar7;
    if (param_3 <= puVar9) break;
    uVar5 = (*param_4)(puVar9,puVar7);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(puVar7,puVar9), (char)uVar5 != '\0')) break;
  } while( true );
joined_r0x0095f2d3: ;
  puVar11 = puVar7;
  if (param_3 <= puVar1) {
joined_r0x0095f32f: ;
    while (puVar6 = puVar7, param_2 < puVar7) {
      puVar8 = puVar11 + -3;
      uVar5 = (*param_4)(puVar8,puVar10);
      puVar6 = puVar10;
      puVar9 = local_8;
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_4)(puVar10,puVar8);
        puVar6 = local_c;
        if ((char)uVar5 != '\0') break;
        uVar2 = puVar10[-1];
        uVar3 = puVar10[-3];
        uVar4 = puVar10[-2];
        puVar6 = puVar10 + -3;
        *puVar6 = *puVar8;
        puVar10[-2] = puVar11[-2];
        puVar10[-1] = puVar11[-1];
        *puVar8 = uVar3;
        puVar11[-2] = uVar4;
        puVar11[-1] = uVar2;
      }
      local_c = local_c + -3;
      puVar11 = puVar8;
      puVar10 = puVar6;
      puVar7 = local_c;
    }
    if (puVar6 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar10;
        param_1[1] = puVar9;
        return (uint)param_1;
      }
      if (puVar9 != puVar1) {
        uVar2 = puVar10[1];
        uVar3 = *puVar10;
        uVar4 = puVar10[2];
        *puVar10 = *puVar9;
        puVar10[1] = puVar9[1];
        puVar10[2] = puVar9[2];
        *puVar9 = uVar3;
        puVar9[1] = uVar2;
        puVar9[2] = uVar4;
      }
      uVar2 = *puVar10;
      uVar3 = puVar10[1];
      uVar4 = puVar10[2];
      *puVar10 = *puVar1;
      puVar10[1] = puVar1[1];
      puVar10[2] = puVar1[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar9 = puVar9 + 3;
      puVar1[2] = uVar4;
      puVar7 = puVar6;
      puVar1 = puVar1 + 3;
      local_8 = puVar9;
      puVar10 = puVar10 + 3;
    }
    else {
      puVar7 = puVar6 + -3;
      local_c = puVar7;
      if (puVar1 == param_3) {
        puVar11 = puVar10 + -3;
        if (puVar7 != puVar11) {
          uVar2 = puVar6[-2];
          uVar3 = *puVar7;
          uVar4 = puVar6[-1];
          *puVar7 = *puVar11;
          puVar6[-2] = puVar10[-2];
          puVar6[-1] = puVar10[-1];
          *puVar11 = uVar3;
          puVar10[-2] = uVar2;
          puVar10[-1] = uVar4;
        }
        uVar2 = puVar10[-2];
        uVar3 = *puVar11;
        uVar4 = puVar10[-1];
        local_8 = puVar9 + -3;
        *puVar11 = *local_8;
        puVar10[-2] = puVar9[-2];
        puVar10[-1] = puVar9[-1];
        *local_8 = uVar3;
        puVar9[-2] = uVar2;
        puVar9[-1] = uVar4;
        puVar9 = local_8;
        puVar10 = puVar11;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        uVar4 = puVar1[2];
        *puVar1 = *puVar7;
        puVar1[1] = puVar6[-2];
        puVar1[2] = puVar6[-1];
        *puVar7 = uVar3;
        puVar6[-2] = uVar2;
        puVar6[-1] = uVar4;
        puVar1 = puVar1 + 3;
      }
    }
    goto joined_r0x0095f2d3;
  }
  uVar5 = (*param_4)(puVar10,puVar1);
  puVar7 = local_c;
  if ((char)uVar5 == '\0') {
    uVar5 = (*param_4)(puVar1,puVar10);
    puVar11 = local_c;
    local_8 = puVar9;
    if ((char)uVar5 != '\0') goto joined_r0x0095f32f;
    uVar2 = puVar9[1];
    uVar3 = *puVar9;
    uVar4 = puVar9[2];
    *puVar9 = *puVar1;
    puVar9[1] = puVar1[1];
    puVar9[2] = puVar1[2];
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar9 = puVar9 + 3;
    puVar1[2] = uVar4;
  }
  puVar1 = puVar1 + 3;
  local_8 = puVar9;
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
  while (uVar7 = uVar1, param_2 < uVar7) {
    uVar1 = uVar7 - 0xc;
    uVar4 = (*param_4)(uVar1,uVar7);
    if (((char)uVar4 != '\0') || (uVar4 = (*param_4)(uVar7,uVar1), (char)uVar4 != '\0')) break;
  }
  do {
    uVar8 = uVar8 + 0xc;
    uVar1 = uVar8;
    local_8 = uVar7;
    uVar4 = uVar7;
    if (param_3 <= uVar8) break;
    uVar5 = (*param_4)(uVar8,uVar7);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(uVar7,uVar8), (char)uVar5 != '\0')) break;
  } while( true );
joined_r0x0095f5a3: ;
  if (param_3 <= uVar1) {
LAB_0095f5eb: ;
    uVar5 = uVar7;
    if (param_2 < uVar7) {
      local_c = (undefined4 *)(uVar7 - 4);
      uVar7 = uVar4;
      do {
        uVar5 = (*param_4)(local_c + -2,uVar7);
        uVar4 = uVar7;
        if ((char)uVar5 == '\0') {
          uVar6 = (*param_4)(uVar7,local_c + -2);
          uVar5 = local_8;
          if ((char)uVar6 != '\0') break;
          uVar2 = *(undefined4 *)(uVar7 - 4);
          uVar3 = *(undefined4 *)(uVar7 - 8);
          uVar4 = uVar7 - 0xc;
          *(undefined4 *)(uVar7 - 8) = local_c[-1];
          *(undefined4 *)(uVar7 - 4) = *local_c;
          local_c[-1] = uVar3;
          *local_c = uVar2;
        }
        uVar5 = local_8 - 0xc;
        local_c = local_c + -3;
        uVar7 = uVar4;
        local_8 = uVar5;
      } while (param_2 < uVar5);
    }
    if (uVar5 == param_2) {
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
      uVar7 = uVar5;
      uVar8 = uVar8 + 0xc;
      uVar1 = uVar1 + 0xc;
      uVar4 = uVar4 + 0xc;
    }
    else {
      uVar7 = uVar5 - 0xc;
      local_8 = uVar7;
      if (uVar1 == param_3) {
        if (uVar7 != uVar4 - 0xc) {
          uVar2 = *(undefined4 *)(uVar5 - 4);
          uVar3 = *(undefined4 *)(uVar5 - 8);
          *(undefined4 *)(uVar5 - 8) = *(undefined4 *)(uVar4 - 8);
          *(undefined4 *)(uVar5 - 4) = *(undefined4 *)(uVar4 - 4);
          *(undefined4 *)(uVar4 - 8) = uVar3;
          *(undefined4 *)(uVar4 - 4) = uVar2;
        }
        uVar2 = *(undefined4 *)(uVar4 - 4);
        uVar3 = *(undefined4 *)(uVar4 - 8);
        *(undefined4 *)(uVar4 - 8) = *(undefined4 *)(uVar8 - 8);
        *(undefined4 *)(uVar4 - 4) = *(undefined4 *)(uVar8 - 4);
        *(undefined4 *)(uVar8 - 8) = uVar3;
        *(undefined4 *)(uVar8 - 4) = uVar2;
        uVar8 = uVar8 - 0xc;
        uVar4 = uVar4 - 0xc;
      }
      else {
        uVar2 = *(undefined4 *)(uVar1 + 8);
        uVar3 = *(undefined4 *)(uVar1 + 4);
        *(undefined4 *)(uVar1 + 4) = *(undefined4 *)(uVar5 - 8);
        *(undefined4 *)(uVar1 + 8) = *(undefined4 *)(uVar5 - 4);
        *(undefined4 *)(uVar5 - 8) = uVar3;
        *(undefined4 *)(uVar5 - 4) = uVar2;
        uVar1 = uVar1 + 0xc;
      }
    }
    goto joined_r0x0095f5a3;
  }
  uVar5 = (*param_4)(uVar4,uVar1);
  uVar7 = local_8;
  if ((char)uVar5 == '\0') {
    uVar5 = (*param_4)(uVar1,uVar4);
    if ((char)uVar5 != '\0') goto LAB_0095f5eb;
    uVar2 = *(undefined4 *)(uVar8 + 8);
    uVar3 = *(undefined4 *)(uVar8 + 4);
    *(undefined4 *)(uVar8 + 4) = *(undefined4 *)(uVar1 + 4);
    *(undefined4 *)(uVar8 + 8) = *(undefined4 *)(uVar1 + 8);
    uVar8 = uVar8 + 0xc;
    *(undefined4 *)(uVar1 + 4) = uVar3;
    *(undefined4 *)(uVar1 + 8) = uVar2;
  }
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
  while (uVar10 = uVar1, param_2 < uVar10) {
    uVar1 = uVar10 - 0x18;
    uVar7 = (*param_4)(uVar1,uVar10);
    if (((char)uVar7 != '\0') || (uVar7 = (*param_4)(uVar10,uVar1), (char)uVar7 != '\0')) break;
  }
  do {
    uVar11 = uVar11 + 0x18;
    uVar1 = uVar11;
    local_c = uVar10;
    uVar7 = uVar10;
    if (param_3 <= uVar11) break;
    uVar8 = (*param_4)(uVar11,uVar10);
    if (((char)uVar8 != '\0') || (uVar8 = (*param_4)(uVar10,uVar11), (char)uVar8 != '\0')) break;
  } while( true );
joined_r0x0095f863: ;
  if (param_3 <= uVar1) {
LAB_0095f8ee: ;
    uVar8 = uVar10;
    if (param_2 < uVar10) {
      local_8 = (undefined4 *)(uVar10 - 0x10);
      uVar10 = uVar7;
      do {
        uVar8 = (*param_4)(local_8 + -2,uVar10);
        uVar7 = uVar10;
        if ((char)uVar8 == '\0') {
          uVar9 = (*param_4)(uVar10,local_8 + -2);
          uVar8 = local_c;
          if ((char)uVar9 != '\0') break;
          uVar3 = *(undefined4 *)(uVar10 - 0xc);
          uVar4 = *(undefined4 *)(uVar10 - 0x10);
          uVar5 = *(undefined4 *)(uVar10 - 0x14);
          uVar7 = uVar10 - 0x18;
          uVar6 = *(undefined4 *)(uVar10 - 8);
          uVar2 = *(undefined1 *)(uVar10 - 4);
          *(undefined4 *)(uVar10 - 0x14) = local_8[-1];
          *(undefined4 *)(uVar10 - 0x10) = *local_8;
          *(undefined4 *)(uVar10 - 0xc) = local_8[1];
          *(undefined4 *)(uVar10 - 8) = local_8[2];
          *(undefined1 *)(uVar10 - 4) = *(undefined1 *)(local_8 + 3);
          local_8[-1] = uVar5;
          local_8[1] = uVar3;
          *local_8 = uVar4;
          local_8[2] = uVar6;
          *(undefined1 *)(local_8 + 3) = uVar2;
        }
        uVar8 = local_c - 0x18;
        local_8 = local_8 + -6;
        uVar10 = uVar7;
        local_c = uVar8;
      } while (param_2 < uVar8);
    }
    if (uVar8 == param_2) {
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
      uVar10 = uVar8;
      uVar11 = uVar11 + 0x18;
      uVar1 = uVar1 + 0x18;
      uVar7 = uVar7 + 0x18;
    }
    else {
      uVar10 = uVar8 - 0x18;
      local_c = uVar10;
      if (uVar1 == param_3) {
        if (uVar10 != uVar7 - 0x18) {
          uVar3 = *(undefined4 *)(uVar8 - 0x10);
          uVar4 = *(undefined4 *)(uVar8 - 0x14);
          uVar5 = *(undefined4 *)(uVar8 - 0xc);
          uVar6 = *(undefined4 *)(uVar8 - 8);
          uVar2 = *(undefined1 *)(uVar8 - 4);
          *(undefined4 *)(uVar8 - 0x14) = *(undefined4 *)(uVar7 - 0x14);
          *(undefined4 *)(uVar8 - 0x10) = *(undefined4 *)(uVar7 - 0x10);
          *(undefined4 *)(uVar8 - 0xc) = *(undefined4 *)(uVar7 - 0xc);
          *(undefined4 *)(uVar8 - 8) = *(undefined4 *)(uVar7 - 8);
          *(undefined1 *)(uVar8 - 4) = *(undefined1 *)(uVar7 - 4);
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
        uVar11 = uVar11 - 0x18;
        uVar7 = uVar7 - 0x18;
      }
      else {
        uVar3 = *(undefined4 *)(uVar1 + 8);
        uVar4 = *(undefined4 *)(uVar1 + 4);
        uVar5 = *(undefined4 *)(uVar1 + 0xc);
        uVar6 = *(undefined4 *)(uVar1 + 0x10);
        uVar2 = *(undefined1 *)(uVar1 + 0x14);
        *(undefined4 *)(uVar1 + 4) = *(undefined4 *)(uVar8 - 0x14);
        *(undefined4 *)(uVar1 + 8) = *(undefined4 *)(uVar8 - 0x10);
        *(undefined4 *)(uVar1 + 0xc) = *(undefined4 *)(uVar8 - 0xc);
        *(undefined4 *)(uVar1 + 0x10) = *(undefined4 *)(uVar8 - 8);
        *(undefined1 *)(uVar1 + 0x14) = *(undefined1 *)(uVar8 - 4);
        *(undefined4 *)(uVar8 - 0x14) = uVar4;
        *(undefined4 *)(uVar8 - 0xc) = uVar5;
        *(undefined4 *)(uVar8 - 0x10) = uVar3;
        *(undefined4 *)(uVar8 - 8) = uVar6;
        *(undefined1 *)(uVar8 - 4) = uVar2;
        uVar1 = uVar1 + 0x18;
      }
    }
    goto joined_r0x0095f863;
  }
  uVar8 = (*param_4)(uVar7,uVar1);
  uVar10 = local_c;
  if ((char)uVar8 == '\0') {
    uVar8 = (*param_4)(uVar1,uVar7);
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
  uVar1 = uVar1 + 0x18;
  goto joined_r0x0095f863;
}

/* ref: FUN_0095fc00 */
unsigned int F_0095fc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x95fc00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (1 < (param_2 - param_1) / 0x18) {
    F_00959480(param_1,param_2,param_3,0,0);
  }
  return 0;
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
  while (uVar8 = uVar1, param_2 < uVar8) {
    uVar1 = uVar8 - 0x10;
    uVar5 = (*param_4)(uVar1,uVar8);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(uVar8,uVar1), (char)uVar5 != '\0')) break;
  }
  do {
    uVar9 = uVar9 + 0x10;
    uVar1 = uVar9;
    local_8 = uVar8;
    uVar5 = uVar8;
    if (param_3 <= uVar9) break;
    uVar6 = (*param_4)(uVar9,uVar8);
    if (((char)uVar6 != '\0') || (uVar6 = (*param_4)(uVar8,uVar9), (char)uVar6 != '\0')) break;
  } while( true );
joined_r0x0095fcf3: ;
  if (param_3 <= uVar1) {
LAB_0095fd4d: ;
    uVar6 = uVar8;
    if (param_2 < uVar8) {
      local_c = (undefined4 *)(uVar8 - 8);
      uVar8 = uVar5;
      do {
        uVar6 = (*param_4)(local_c + -2,uVar8);
        uVar5 = uVar8;
        if ((char)uVar6 == '\0') {
          uVar7 = (*param_4)(uVar8,local_c + -2);
          uVar6 = local_8;
          if ((char)uVar7 != '\0') break;
          uVar2 = *(undefined4 *)(uVar8 - 4);
          uVar3 = *(undefined4 *)(uVar8 - 8);
          uVar4 = *(undefined4 *)(uVar8 - 0xc);
          uVar5 = uVar8 - 0x10;
          *(undefined4 *)(uVar8 - 0xc) = local_c[-1];
          *(undefined4 *)(uVar8 - 8) = *local_c;
          *(undefined4 *)(uVar8 - 4) = local_c[1];
          local_c[-1] = uVar4;
          *local_c = uVar3;
          local_c[1] = uVar2;
        }
        uVar6 = local_8 - 0x10;
        local_c = local_c + -4;
        uVar8 = uVar5;
        local_8 = uVar6;
      } while (param_2 < uVar6);
    }
    if (uVar6 == param_2) {
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
      uVar8 = uVar6;
      uVar9 = uVar9 + 0x10;
      uVar1 = uVar1 + 0x10;
      uVar5 = uVar5 + 0x10;
    }
    else {
      uVar8 = uVar6 - 0x10;
      local_8 = uVar8;
      if (uVar1 == param_3) {
        if (uVar8 != uVar5 - 0x10) {
          uVar2 = *(undefined4 *)(uVar6 - 8);
          uVar3 = *(undefined4 *)(uVar6 - 0xc);
          uVar4 = *(undefined4 *)(uVar6 - 4);
          *(undefined4 *)(uVar6 - 0xc) = *(undefined4 *)(uVar5 - 0xc);
          *(undefined4 *)(uVar6 - 8) = *(undefined4 *)(uVar5 - 8);
          *(undefined4 *)(uVar6 - 4) = *(undefined4 *)(uVar5 - 4);
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
        uVar9 = uVar9 - 0x10;
        uVar5 = uVar5 - 0x10;
      }
      else {
        uVar2 = *(undefined4 *)(uVar1 + 8);
        uVar3 = *(undefined4 *)(uVar1 + 4);
        uVar4 = *(undefined4 *)(uVar1 + 0xc);
        *(undefined4 *)(uVar1 + 4) = *(undefined4 *)(uVar6 - 0xc);
        *(undefined4 *)(uVar1 + 8) = *(undefined4 *)(uVar6 - 8);
        *(undefined4 *)(uVar1 + 0xc) = *(undefined4 *)(uVar6 - 4);
        *(undefined4 *)(uVar6 - 0xc) = uVar3;
        *(undefined4 *)(uVar6 - 8) = uVar2;
        *(undefined4 *)(uVar6 - 4) = uVar4;
        uVar1 = uVar1 + 0x10;
      }
    }
    goto joined_r0x0095fcf3;
  }
  uVar6 = (*param_4)(uVar5,uVar1);
  uVar8 = local_8;
  if ((char)uVar6 == '\0') {
    uVar6 = (*param_4)(uVar1,uVar5);
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
  if (0x10 < (int)(param_2 - param_1 & 0xfffffff0)) {
    param_2 = F_009596c0(param_1,param_2,param_3,0,0);
  }
  return param_2;
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
unsigned int F_0095ff80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
        return 0;
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
unsigned int F_00960130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
        return 0;
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
unsigned int F_009602e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
        return 0;
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
unsigned int F_00960490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
        return 0;
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
    puVar12 = puVar10;
    if (param_3 <= puVar11) break;
    uVar8 = (*param_4)(puVar11,puVar10);
    if (((char)uVar8 != '\0') || (uVar8 = (*param_4)(puVar10,puVar11), (char)uVar8 != '\0')) break;
  } while( true );
joined_r0x00960743: ;
  puVar9 = puVar10;
  if (param_3 <= puVar1) {
joined_r0x009607e1: ;
    while (param_2 < puVar9) {
      local_8 = puVar10 + -6;
      uVar8 = (*param_4)(local_8,puVar12);
      puVar13 = puVar12;
      if ((char)uVar8 == '\0') {
        uVar8 = (*param_4)(puVar12,local_8);
        puVar9 = local_c;
        if ((char)uVar8 != '\0') break;
        uVar2 = puVar12[-5];
        uVar3 = puVar12[-4];
        uVar4 = puVar12[-6];
        puVar13 = puVar12 + -6;
        uVar5 = puVar12[-3];
        uVar6 = puVar12[-1];
        uVar7 = puVar12[-2];
        *puVar13 = *local_8;
        puVar12[-5] = puVar10[-5];
        puVar12[-4] = puVar10[-4];
        puVar12[-3] = puVar10[-3];
        puVar12[-2] = puVar10[-2];
        puVar12[-1] = puVar10[-1];
        *local_8 = uVar4;
        puVar10[-5] = uVar2;
        puVar10[-4] = uVar3;
        puVar10[-3] = uVar5;
        puVar10[-2] = uVar7;
        puVar10[-1] = uVar6;
      }
      local_c = local_c + -6;
      puVar10 = local_8;
      puVar12 = puVar13;
      puVar9 = local_c;
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
        uVar6 = puVar12[4];
        uVar7 = puVar12[5];
        *puVar12 = *puVar11;
        puVar12[1] = puVar11[1];
        puVar12[2] = puVar11[2];
        puVar12[3] = puVar11[3];
        puVar12[4] = puVar11[4];
        puVar12[5] = puVar11[5];
        *puVar11 = uVar3;
        puVar11[1] = uVar2;
        puVar11[2] = uVar4;
        puVar11[3] = uVar5;
        puVar11[4] = uVar6;
        puVar11[5] = uVar7;
      }
      uVar2 = *puVar12;
      uVar3 = puVar12[1];
      uVar4 = puVar12[2];
      uVar5 = puVar12[3];
      uVar6 = puVar12[4];
      uVar7 = puVar12[5];
      *puVar12 = *puVar1;
      puVar12[1] = puVar1[1];
      puVar12[2] = puVar1[2];
      puVar12[3] = puVar1[3];
      puVar12[4] = puVar1[4];
      puVar12[5] = puVar1[5];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar10 = puVar9;
      puVar11 = puVar11 + 6;
      puVar1 = puVar1 + 6;
      puVar12 = puVar12 + 6;
    }
    else {
      puVar10 = puVar9 + -6;
      local_c = puVar10;
      if (puVar1 == param_3) {
        puVar13 = puVar12 + -6;
        if (puVar10 != puVar13) {
          uVar2 = puVar9[-5];
          uVar3 = *puVar10;
          uVar4 = puVar9[-4];
          uVar5 = puVar9[-3];
          uVar6 = puVar9[-2];
          uVar7 = puVar9[-1];
          *puVar10 = *puVar13;
          puVar9[-5] = puVar12[-5];
          puVar9[-4] = puVar12[-4];
          puVar9[-3] = puVar12[-3];
          puVar9[-2] = puVar12[-2];
          puVar9[-1] = puVar12[-1];
          *puVar13 = uVar3;
          puVar12[-5] = uVar2;
          puVar12[-4] = uVar4;
          puVar12[-3] = uVar5;
          puVar12[-2] = uVar6;
          puVar12[-1] = uVar7;
        }
        uVar2 = puVar12[-5];
        uVar3 = *puVar13;
        uVar4 = puVar12[-4];
        uVar5 = puVar12[-3];
        uVar6 = puVar12[-2];
        puVar9 = puVar11 + -6;
        uVar7 = puVar12[-1];
        *puVar13 = *puVar9;
        puVar12[-5] = puVar11[-5];
        puVar12[-4] = puVar11[-4];
        puVar12[-3] = puVar11[-3];
        puVar12[-2] = puVar11[-2];
        puVar12[-1] = puVar11[-1];
        *puVar9 = uVar3;
        puVar11[-5] = uVar2;
        puVar11[-4] = uVar4;
        puVar11[-3] = uVar5;
        puVar11[-2] = uVar6;
        puVar11[-1] = uVar7;
        puVar11 = puVar9;
        puVar12 = puVar13;
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
  uVar8 = (*param_4)(puVar12,puVar1);
  puVar10 = local_c;
  if ((char)uVar8 == '\0') {
    uVar8 = (*param_4)(puVar1,puVar12);
    puVar9 = local_c;
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
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar9 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  F_00959c10(param_2,puVar9,param_3 + -3,param_4);
  puVar1 = puVar9;
  while (puVar7 = puVar1, param_2 < puVar7) {
    puVar1 = puVar7 + -3;
    uVar5 = (*param_4)(puVar1,puVar7);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(puVar7,puVar1), (char)uVar5 != '\0')) break;
  }
  do {
    puVar9 = puVar9 + 3;
    puVar1 = puVar9;
    local_8 = puVar9;
    local_c = puVar7;
    puVar10 = puVar7;
    if (param_3 <= puVar9) break;
    uVar5 = (*param_4)(puVar9,puVar7);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(puVar7,puVar9), (char)uVar5 != '\0')) break;
  } while( true );
joined_r0x00960bf3: ;
  puVar11 = puVar7;
  if (param_3 <= puVar1) {
joined_r0x00960c4f: ;
    while (puVar6 = puVar7, param_2 < puVar7) {
      puVar8 = puVar11 + -3;
      uVar5 = (*param_4)(puVar8,puVar10);
      puVar6 = puVar10;
      puVar9 = local_8;
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_4)(puVar10,puVar8);
        puVar6 = local_c;
        if ((char)uVar5 != '\0') break;
        uVar2 = puVar10[-1];
        uVar3 = puVar10[-3];
        uVar4 = puVar10[-2];
        puVar6 = puVar10 + -3;
        *puVar6 = *puVar8;
        puVar10[-2] = puVar11[-2];
        puVar10[-1] = puVar11[-1];
        *puVar8 = uVar3;
        puVar11[-2] = uVar4;
        puVar11[-1] = uVar2;
      }
      local_c = local_c + -3;
      puVar11 = puVar8;
      puVar10 = puVar6;
      puVar7 = local_c;
    }
    if (puVar6 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar10;
        param_1[1] = puVar9;
        return (uint)param_1;
      }
      if (puVar9 != puVar1) {
        uVar2 = puVar10[1];
        uVar3 = *puVar10;
        uVar4 = puVar10[2];
        *puVar10 = *puVar9;
        puVar10[1] = puVar9[1];
        puVar10[2] = puVar9[2];
        *puVar9 = uVar3;
        puVar9[1] = uVar2;
        puVar9[2] = uVar4;
      }
      uVar2 = *puVar10;
      uVar3 = puVar10[1];
      uVar4 = puVar10[2];
      *puVar10 = *puVar1;
      puVar10[1] = puVar1[1];
      puVar10[2] = puVar1[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar9 = puVar9 + 3;
      puVar1[2] = uVar4;
      puVar7 = puVar6;
      puVar1 = puVar1 + 3;
      local_8 = puVar9;
      puVar10 = puVar10 + 3;
    }
    else {
      puVar7 = puVar6 + -3;
      local_c = puVar7;
      if (puVar1 == param_3) {
        puVar11 = puVar10 + -3;
        if (puVar7 != puVar11) {
          uVar2 = puVar6[-2];
          uVar3 = *puVar7;
          uVar4 = puVar6[-1];
          *puVar7 = *puVar11;
          puVar6[-2] = puVar10[-2];
          puVar6[-1] = puVar10[-1];
          *puVar11 = uVar3;
          puVar10[-2] = uVar2;
          puVar10[-1] = uVar4;
        }
        uVar2 = puVar10[-2];
        uVar3 = *puVar11;
        uVar4 = puVar10[-1];
        local_8 = puVar9 + -3;
        *puVar11 = *local_8;
        puVar10[-2] = puVar9[-2];
        puVar10[-1] = puVar9[-1];
        *local_8 = uVar3;
        puVar9[-2] = uVar2;
        puVar9[-1] = uVar4;
        puVar9 = local_8;
        puVar10 = puVar11;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        uVar4 = puVar1[2];
        *puVar1 = *puVar7;
        puVar1[1] = puVar6[-2];
        puVar1[2] = puVar6[-1];
        *puVar7 = uVar3;
        puVar6[-2] = uVar2;
        puVar6[-1] = uVar4;
        puVar1 = puVar1 + 3;
      }
    }
    goto joined_r0x00960bf3;
  }
  uVar5 = (*param_4)(puVar10,puVar1);
  puVar7 = local_c;
  if ((char)uVar5 == '\0') {
    uVar5 = (*param_4)(puVar1,puVar10);
    puVar11 = local_c;
    local_8 = puVar9;
    if ((char)uVar5 != '\0') goto joined_r0x00960c4f;
    uVar2 = puVar9[1];
    uVar3 = *puVar9;
    uVar4 = puVar9[2];
    *puVar9 = *puVar1;
    puVar9[1] = puVar1[1];
    puVar9[2] = puVar1[2];
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar9 = puVar9 + 3;
    puVar1[2] = uVar4;
  }
  puVar1 = puVar1 + 3;
  local_8 = puVar9;
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
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar10 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 4) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                      1) * 4;
  F_00959da0(param_2,puVar10,param_3 + -4,param_4);
  puVar1 = puVar10;
  while (puVar8 = puVar1, param_2 < puVar8) {
    puVar1 = puVar8 + -4;
    uVar6 = (*param_4)(puVar1,puVar8);
    if (((char)uVar6 != '\0') || (uVar6 = (*param_4)(puVar8,puVar1), (char)uVar6 != '\0')) break;
  }
  do {
    puVar10 = puVar10 + 4;
    puVar1 = puVar10;
    local_8 = puVar10;
    local_c = puVar8;
    puVar11 = puVar8;
    if (param_3 <= puVar10) break;
    uVar6 = (*param_4)(puVar10,puVar8);
    if (((char)uVar6 != '\0') || (uVar6 = (*param_4)(puVar8,puVar10), (char)uVar6 != '\0')) break;
  } while( true );
joined_r0x00960eb5: ;
  puVar12 = puVar8;
  if (param_3 <= puVar1) {
joined_r0x00960f23: ;
    while (puVar7 = puVar8, param_2 < puVar8) {
      puVar9 = puVar12 + -4;
      uVar6 = (*param_4)(puVar9,puVar11);
      puVar7 = puVar11;
      puVar10 = local_8;
      if ((char)uVar6 == '\0') {
        uVar6 = (*param_4)(puVar11,puVar9);
        puVar7 = local_c;
        if ((char)uVar6 != '\0') break;
        uVar2 = puVar11[-2];
        uVar3 = puVar11[-4];
        uVar4 = puVar11[-3];
        puVar7 = puVar11 + -4;
        uVar5 = puVar11[-1];
        *puVar7 = *puVar9;
        puVar11[-3] = puVar12[-3];
        puVar11[-2] = puVar12[-2];
        puVar11[-1] = puVar12[-1];
        *puVar9 = uVar3;
        puVar12[-3] = uVar4;
        puVar12[-2] = uVar2;
        puVar12[-1] = uVar5;
      }
      local_c = local_c + -4;
      puVar12 = puVar9;
      puVar11 = puVar7;
      puVar8 = local_c;
    }
    if (puVar7 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar11;
        param_1[1] = puVar10;
        return (uint)param_1;
      }
      if (puVar10 != puVar1) {
        uVar2 = puVar11[1];
        uVar3 = *puVar11;
        uVar4 = puVar11[2];
        uVar5 = puVar11[3];
        *puVar11 = *puVar10;
        puVar11[1] = puVar10[1];
        puVar11[2] = puVar10[2];
        puVar11[3] = puVar10[3];
        *puVar10 = uVar3;
        puVar10[1] = uVar2;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
      }
      uVar2 = *puVar11;
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      *puVar11 = *puVar1;
      puVar11[1] = puVar1[1];
      puVar11[2] = puVar1[2];
      puVar11[3] = puVar1[3];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar10 = puVar10 + 4;
      puVar1[3] = uVar5;
      puVar8 = puVar7;
      puVar1 = puVar1 + 4;
      local_8 = puVar10;
      puVar11 = puVar11 + 4;
    }
    else {
      puVar8 = puVar7 + -4;
      local_c = puVar8;
      if (puVar1 == param_3) {
        puVar12 = puVar11 + -4;
        if (puVar8 != puVar12) {
          uVar2 = puVar7[-3];
          uVar3 = *puVar8;
          uVar4 = puVar7[-2];
          uVar5 = puVar7[-1];
          *puVar8 = *puVar12;
          puVar7[-3] = puVar11[-3];
          puVar7[-2] = puVar11[-2];
          puVar7[-1] = puVar11[-1];
          *puVar12 = uVar3;
          puVar11[-3] = uVar2;
          puVar11[-2] = uVar4;
          puVar11[-1] = uVar5;
        }
        uVar2 = puVar11[-3];
        uVar3 = *puVar12;
        uVar4 = puVar11[-2];
        local_8 = puVar10 + -4;
        uVar5 = puVar11[-1];
        *puVar12 = *local_8;
        puVar11[-3] = puVar10[-3];
        puVar11[-2] = puVar10[-2];
        puVar11[-1] = puVar10[-1];
        *local_8 = uVar3;
        puVar10[-3] = uVar2;
        puVar10[-2] = uVar4;
        puVar10[-1] = uVar5;
        puVar10 = local_8;
        puVar11 = puVar12;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *puVar1 = *puVar8;
        puVar1[1] = puVar7[-3];
        puVar1[2] = puVar7[-2];
        puVar1[3] = puVar7[-1];
        *puVar8 = uVar3;
        puVar7[-3] = uVar2;
        puVar7[-2] = uVar4;
        puVar7[-1] = uVar5;
        puVar1 = puVar1 + 4;
      }
    }
    goto joined_r0x00960eb5;
  }
  uVar6 = (*param_4)(puVar11,puVar1);
  puVar8 = local_c;
  if ((char)uVar6 == '\0') {
    uVar6 = (*param_4)(puVar1,puVar11);
    puVar12 = local_c;
    local_8 = puVar10;
    if ((char)uVar6 != '\0') goto joined_r0x00960f23;
    uVar2 = puVar10[1];
    uVar3 = *puVar10;
    uVar4 = puVar10[2];
    uVar5 = puVar10[3];
    *puVar10 = *puVar1;
    puVar10[1] = puVar1[1];
    puVar10[2] = puVar1[2];
    puVar10[3] = puVar1[3];
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar4;
    puVar10 = puVar10 + 4;
    puVar1[3] = uVar5;
  }
  puVar1 = puVar1 + 4;
  local_8 = puVar10;
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
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar9 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  F_00959f40(param_2,puVar9,param_3 + -3,param_4);
  puVar1 = puVar9;
  while (puVar7 = puVar1, param_2 < puVar7) {
    puVar1 = puVar7 + -3;
    uVar5 = (*param_4)(puVar1,puVar7);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(puVar7,puVar1), (char)uVar5 != '\0')) break;
  }
  do {
    puVar9 = puVar9 + 3;
    puVar1 = puVar9;
    local_8 = puVar9;
    local_c = puVar7;
    puVar10 = puVar7;
    if (param_3 <= puVar9) break;
    uVar5 = (*param_4)(puVar9,puVar7);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(puVar7,puVar9), (char)uVar5 != '\0')) break;
  } while( true );
joined_r0x00961223: ;
  puVar11 = puVar7;
  if (param_3 <= puVar1) {
joined_r0x0096127f: ;
    while (puVar6 = puVar7, param_2 < puVar7) {
      puVar8 = puVar11 + -3;
      uVar5 = (*param_4)(puVar8,puVar10);
      puVar6 = puVar10;
      puVar9 = local_8;
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_4)(puVar10,puVar8);
        puVar6 = local_c;
        if ((char)uVar5 != '\0') break;
        uVar2 = puVar10[-1];
        uVar3 = puVar10[-3];
        uVar4 = puVar10[-2];
        puVar6 = puVar10 + -3;
        *puVar6 = *puVar8;
        puVar10[-2] = puVar11[-2];
        puVar10[-1] = puVar11[-1];
        *puVar8 = uVar3;
        puVar11[-2] = uVar4;
        puVar11[-1] = uVar2;
      }
      local_c = local_c + -3;
      puVar11 = puVar8;
      puVar10 = puVar6;
      puVar7 = local_c;
    }
    if (puVar6 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar10;
        param_1[1] = puVar9;
        return (uint)param_1;
      }
      if (puVar9 != puVar1) {
        uVar2 = puVar10[1];
        uVar3 = *puVar10;
        uVar4 = puVar10[2];
        *puVar10 = *puVar9;
        puVar10[1] = puVar9[1];
        puVar10[2] = puVar9[2];
        *puVar9 = uVar3;
        puVar9[1] = uVar2;
        puVar9[2] = uVar4;
      }
      uVar2 = *puVar10;
      uVar3 = puVar10[1];
      uVar4 = puVar10[2];
      *puVar10 = *puVar1;
      puVar10[1] = puVar1[1];
      puVar10[2] = puVar1[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar9 = puVar9 + 3;
      puVar1[2] = uVar4;
      puVar7 = puVar6;
      puVar1 = puVar1 + 3;
      local_8 = puVar9;
      puVar10 = puVar10 + 3;
    }
    else {
      puVar7 = puVar6 + -3;
      local_c = puVar7;
      if (puVar1 == param_3) {
        puVar11 = puVar10 + -3;
        if (puVar7 != puVar11) {
          uVar2 = puVar6[-2];
          uVar3 = *puVar7;
          uVar4 = puVar6[-1];
          *puVar7 = *puVar11;
          puVar6[-2] = puVar10[-2];
          puVar6[-1] = puVar10[-1];
          *puVar11 = uVar3;
          puVar10[-2] = uVar2;
          puVar10[-1] = uVar4;
        }
        uVar2 = puVar10[-2];
        uVar3 = *puVar11;
        uVar4 = puVar10[-1];
        local_8 = puVar9 + -3;
        *puVar11 = *local_8;
        puVar10[-2] = puVar9[-2];
        puVar10[-1] = puVar9[-1];
        *local_8 = uVar3;
        puVar9[-2] = uVar2;
        puVar9[-1] = uVar4;
        puVar9 = local_8;
        puVar10 = puVar11;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        uVar4 = puVar1[2];
        *puVar1 = *puVar7;
        puVar1[1] = puVar6[-2];
        puVar1[2] = puVar6[-1];
        *puVar7 = uVar3;
        puVar6[-2] = uVar2;
        puVar6[-1] = uVar4;
        puVar1 = puVar1 + 3;
      }
    }
    goto joined_r0x00961223;
  }
  uVar5 = (*param_4)(puVar10,puVar1);
  puVar7 = local_c;
  if ((char)uVar5 == '\0') {
    uVar5 = (*param_4)(puVar1,puVar10);
    puVar11 = local_c;
    local_8 = puVar9;
    if ((char)uVar5 != '\0') goto joined_r0x0096127f;
    uVar2 = puVar9[1];
    uVar3 = *puVar9;
    uVar4 = puVar9[2];
    *puVar9 = *puVar1;
    puVar9[1] = puVar1[1];
    puVar9[2] = puVar1[2];
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar9 = puVar9 + 3;
    puVar1[2] = uVar4;
  }
  puVar1 = puVar1 + 3;
  local_8 = puVar9;
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
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar10 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 4) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                      1) * 4;
  F_0095a0d0(param_2,puVar10,param_3 + -4,param_4);
  puVar1 = puVar10;
  while (puVar8 = puVar1, param_2 < puVar8) {
    puVar1 = puVar8 + -4;
    uVar6 = (*param_4)(puVar1,puVar8);
    if (((char)uVar6 != '\0') || (uVar6 = (*param_4)(puVar8,puVar1), (char)uVar6 != '\0')) break;
  }
  do {
    puVar10 = puVar10 + 4;
    puVar1 = puVar10;
    local_8 = puVar10;
    local_c = puVar8;
    puVar11 = puVar8;
    if (param_3 <= puVar10) break;
    uVar6 = (*param_4)(puVar10,puVar8);
    if (((char)uVar6 != '\0') || (uVar6 = (*param_4)(puVar8,puVar10), (char)uVar6 != '\0')) break;
  } while( true );
joined_r0x009614e5: ;
  puVar12 = puVar8;
  if (param_3 <= puVar1) {
joined_r0x00961553: ;
    while (puVar7 = puVar8, param_2 < puVar8) {
      puVar9 = puVar12 + -4;
      uVar6 = (*param_4)(puVar9,puVar11);
      puVar7 = puVar11;
      puVar10 = local_8;
      if ((char)uVar6 == '\0') {
        uVar6 = (*param_4)(puVar11,puVar9);
        puVar7 = local_c;
        if ((char)uVar6 != '\0') break;
        uVar2 = puVar11[-2];
        uVar3 = puVar11[-4];
        uVar4 = puVar11[-3];
        puVar7 = puVar11 + -4;
        uVar5 = puVar11[-1];
        *puVar7 = *puVar9;
        puVar11[-3] = puVar12[-3];
        puVar11[-2] = puVar12[-2];
        puVar11[-1] = puVar12[-1];
        *puVar9 = uVar3;
        puVar12[-3] = uVar4;
        puVar12[-2] = uVar2;
        puVar12[-1] = uVar5;
      }
      local_c = local_c + -4;
      puVar12 = puVar9;
      puVar11 = puVar7;
      puVar8 = local_c;
    }
    if (puVar7 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar11;
        param_1[1] = puVar10;
        return (uint)param_1;
      }
      if (puVar10 != puVar1) {
        uVar2 = puVar11[1];
        uVar3 = *puVar11;
        uVar4 = puVar11[2];
        uVar5 = puVar11[3];
        *puVar11 = *puVar10;
        puVar11[1] = puVar10[1];
        puVar11[2] = puVar10[2];
        puVar11[3] = puVar10[3];
        *puVar10 = uVar3;
        puVar10[1] = uVar2;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
      }
      uVar2 = *puVar11;
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      *puVar11 = *puVar1;
      puVar11[1] = puVar1[1];
      puVar11[2] = puVar1[2];
      puVar11[3] = puVar1[3];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar10 = puVar10 + 4;
      puVar1[3] = uVar5;
      puVar8 = puVar7;
      puVar1 = puVar1 + 4;
      local_8 = puVar10;
      puVar11 = puVar11 + 4;
    }
    else {
      puVar8 = puVar7 + -4;
      local_c = puVar8;
      if (puVar1 == param_3) {
        puVar12 = puVar11 + -4;
        if (puVar8 != puVar12) {
          uVar2 = puVar7[-3];
          uVar3 = *puVar8;
          uVar4 = puVar7[-2];
          uVar5 = puVar7[-1];
          *puVar8 = *puVar12;
          puVar7[-3] = puVar11[-3];
          puVar7[-2] = puVar11[-2];
          puVar7[-1] = puVar11[-1];
          *puVar12 = uVar3;
          puVar11[-3] = uVar2;
          puVar11[-2] = uVar4;
          puVar11[-1] = uVar5;
        }
        uVar2 = puVar11[-3];
        uVar3 = *puVar12;
        uVar4 = puVar11[-2];
        local_8 = puVar10 + -4;
        uVar5 = puVar11[-1];
        *puVar12 = *local_8;
        puVar11[-3] = puVar10[-3];
        puVar11[-2] = puVar10[-2];
        puVar11[-1] = puVar10[-1];
        *local_8 = uVar3;
        puVar10[-3] = uVar2;
        puVar10[-2] = uVar4;
        puVar10[-1] = uVar5;
        puVar10 = local_8;
        puVar11 = puVar12;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *puVar1 = *puVar8;
        puVar1[1] = puVar7[-3];
        puVar1[2] = puVar7[-2];
        puVar1[3] = puVar7[-1];
        *puVar8 = uVar3;
        puVar7[-3] = uVar2;
        puVar7[-2] = uVar4;
        puVar7[-1] = uVar5;
        puVar1 = puVar1 + 4;
      }
    }
    goto joined_r0x009614e5;
  }
  uVar6 = (*param_4)(puVar11,puVar1);
  puVar8 = local_c;
  if ((char)uVar6 == '\0') {
    uVar6 = (*param_4)(puVar1,puVar11);
    puVar12 = local_c;
    local_8 = puVar10;
    if ((char)uVar6 != '\0') goto joined_r0x00961553;
    uVar2 = puVar10[1];
    uVar3 = *puVar10;
    uVar4 = puVar10[2];
    uVar5 = puVar10[3];
    *puVar10 = *puVar1;
    puVar10[1] = puVar1[1];
    puVar10[2] = puVar1[2];
    puVar10[3] = puVar1[3];
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar4;
    puVar10 = puVar10 + 4;
    puVar1[3] = uVar5;
  }
  puVar1 = puVar1 + 4;
  local_8 = puVar10;
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
    puVar11 = puVar9;
    if (param_3 <= puVar10) break;
    uVar7 = (*param_4)(puVar10,puVar9);
    if (((char)uVar7 != '\0') || (uVar7 = (*param_4)(puVar9,puVar10), (char)uVar7 != '\0')) break;
  } while( true );
joined_r0x0096184b: ;
  puVar8 = puVar9;
  if (param_3 <= puVar1) {
joined_r0x009618cb: ;
    while (param_2 < puVar8) {
      local_8 = puVar9 + -5;
      uVar7 = (*param_4)(local_8,puVar11);
      if ((char)uVar7 == '\0') {
        uVar7 = (*param_4)(puVar11,local_8);
        puVar8 = local_c;
        if ((char)uVar7 != '\0') break;
        uVar2 = puVar11[-4];
        uVar3 = puVar11[-3];
        uVar4 = puVar11[-5];
        uVar5 = puVar11[-1];
        uVar6 = puVar11[-2];
        puVar11[-5] = *local_8;
        puVar11[-4] = puVar9[-4];
        puVar11[-3] = puVar9[-3];
        puVar11[-2] = puVar9[-2];
        puVar11[-1] = puVar9[-1];
        *local_8 = uVar4;
        puVar9[-4] = uVar2;
        puVar9[-3] = uVar3;
        puVar9[-2] = uVar6;
        puVar9[-1] = uVar5;
        puVar11 = puVar11 + -5;
      }
      local_c = local_c + -5;
      puVar9 = local_8;
      puVar8 = local_c;
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
        uVar5 = puVar11[3];
        uVar6 = puVar11[4];
        *puVar11 = *puVar10;
        puVar11[1] = puVar10[1];
        puVar11[2] = puVar10[2];
        puVar11[3] = puVar10[3];
        puVar11[4] = puVar10[4];
        *puVar10 = uVar3;
        puVar10[1] = uVar2;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        puVar10[4] = uVar6;
      }
      uVar2 = *puVar11;
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      uVar6 = puVar11[4];
      *puVar11 = *puVar1;
      puVar11[1] = puVar1[1];
      puVar11[2] = puVar1[2];
      puVar11[3] = puVar1[3];
      puVar11[4] = puVar1[4];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar1[4] = uVar6;
      puVar9 = puVar8;
      puVar10 = puVar10 + 5;
      puVar1 = puVar1 + 5;
      puVar11 = puVar11 + 5;
    }
    else {
      puVar9 = puVar8 + -5;
      local_c = puVar9;
      if (puVar1 == param_3) {
        puVar12 = puVar11 + -5;
        if (puVar9 != puVar12) {
          uVar2 = puVar8[-4];
          uVar3 = *puVar9;
          uVar4 = puVar8[-3];
          uVar5 = puVar8[-2];
          uVar6 = puVar8[-1];
          *puVar9 = *puVar12;
          puVar8[-4] = puVar11[-4];
          puVar8[-3] = puVar11[-3];
          puVar8[-2] = puVar11[-2];
          puVar8[-1] = puVar11[-1];
          *puVar12 = uVar3;
          puVar11[-4] = uVar2;
          puVar11[-3] = uVar4;
          puVar11[-2] = uVar5;
          puVar11[-1] = uVar6;
        }
        uVar2 = puVar11[-4];
        uVar3 = *puVar12;
        uVar4 = puVar11[-3];
        uVar5 = puVar11[-2];
        uVar6 = puVar11[-1];
        puVar8 = puVar10 + -5;
        *puVar12 = *puVar8;
        puVar11[-4] = puVar10[-4];
        puVar11[-3] = puVar10[-3];
        puVar11[-2] = puVar10[-2];
        puVar11[-1] = puVar10[-1];
        *puVar8 = uVar3;
        puVar10[-4] = uVar2;
        puVar10[-3] = uVar4;
        puVar10[-2] = uVar5;
        puVar10[-1] = uVar6;
        puVar10 = puVar8;
        puVar11 = puVar12;
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
  uVar7 = (*param_4)(puVar11,puVar1);
  puVar9 = local_c;
  if ((char)uVar7 == '\0') {
    uVar7 = (*param_4)(puVar1,puVar11);
    puVar8 = local_c;
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
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2 - (int)param_1;
  if (1 < iVar1 / 0x14) {
    puVar2 = (undefined4 *)(param_2 + -0x14);
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = puVar2[1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar2;
      (*(undefined4 *)(gen_frame + 0x14)) = puVar2[3];
      (*(undefined4 *)(gen_frame + 0x10)) = puVar2[2];
      *puVar2 = *param_1;
      (*(undefined4 *)(gen_frame + 0x18)) = puVar2[4];
      puVar2[1] = param_1[1];
      puVar2[2] = param_1[2];
      puVar2[3] = param_1[3];
      puVar2[4] = param_1[4];
      F_009411c0(param_1,0,(iVar1 + -0x14) / 0x14,&(*(undefined4 *)(gen_frame + 0x8)),param_3);
      puVar2 = puVar2 + -5;
      iVar1 = (int)puVar2 + (0x14 - (int)param_1);
    } while (1 < iVar1 / 0x14);
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
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2 - (int)param_1;
  if (1 < iVar1 / 0x14) {
    puVar2 = (undefined4 *)(param_2 + -0x14);
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = puVar2[1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar2;
      (*(undefined4 *)(gen_frame + 0x14)) = puVar2[3];
      (*(undefined4 *)(gen_frame + 0x10)) = puVar2[2];
      *puVar2 = *param_1;
      (*(undefined4 *)(gen_frame + 0x18)) = puVar2[4];
      puVar2[1] = param_1[1];
      puVar2[2] = param_1[2];
      puVar2[3] = param_1[3];
      puVar2[4] = param_1[4];
      F_00941350(param_1,0,(iVar1 + -0x14) / 0x14,&(*(undefined4 *)(gen_frame + 0x8)),param_3);
      puVar2 = puVar2 + -5;
      iVar1 = (int)puVar2 + (0x14 - (int)param_1);
    } while (1 < iVar1 / 0x14);
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
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = param_2 - (int)param_1;
  if (8 < (int)(uVar1 & 0xfffffff8)) {
    puVar2 = (undefined4 *)(param_2 + -8);
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar2;
      *puVar2 = *param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = puVar2[1];
      puVar2[1] = param_1[1];
      F_009414b0(param_1,0,(int)(uVar1 - 8) >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
      puVar2 = puVar2 + -2;
      uVar1 = (int)puVar2 + (8 - (int)param_1);
    } while (8 < (int)(uVar1 & 0xfffffff8));
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
  
  for (iVar1 = param_2 - param_1; 1 < iVar1 / 0x6c; iVar1 = iVar1 + -0x6c) {
    F_00952c20(param_1,param_2,param_3,0);
    param_2 = param_2 + -0x6c;
  }
  return iVar1 / 0x6c;
}

/* ref: FUN_00961e00 */
uint F_00961e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x961e00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  
  for (iVar1 = param_2 - param_1; 1 < iVar1 / 0x68; iVar1 = iVar1 + -0x68) {
    F_00952ce0(param_1,param_2,param_3,0);
    param_2 = param_2 + -0x68;
  }
  return iVar1 / 0x68;
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
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = param_2 - (int)param_1;
  if (8 < (int)(uVar1 & 0xfffffff8)) {
    puVar2 = (undefined4 *)(param_2 + -8);
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar2;
      *puVar2 = *param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = puVar2[1];
      puVar2[1] = param_1[1];
      F_00941a40(param_1,0,(int)(uVar1 - 8) >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
      puVar2 = puVar2 + -2;
      uVar1 = (int)puVar2 + (8 - (int)param_1);
    } while (8 < (int)(uVar1 & 0xfffffff8));
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
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2 - (int)param_1;
  if (1 < iVar1 / 0xc) {
    puVar2 = (undefined4 *)(param_2 + -0xc);
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = puVar2[1];
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar2;
      *puVar2 = *param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = puVar2[2];
      puVar2[1] = param_1[1];
      puVar2[2] = param_1[2];
      F_00941b40(param_1,0,(iVar1 + -0xc) / 0xc,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      puVar2 = puVar2 + -3;
      iVar1 = (int)puVar2 + (0xc - (int)param_1);
    } while (1 < iVar1 / 0xc);
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
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2 - (int)param_1;
  if (1 < iVar1 / 0x18) {
    puVar2 = (undefined4 *)(param_2 + -0x18);
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar2;
      (*(undefined4 *)(gen_frame + 0x8)) = puVar2[1];
      (*(undefined4 *)(gen_frame + 0xc)) = puVar2[2];
      (*(undefined4 *)(gen_frame + 0x10)) = puVar2[3];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar2[4];
      *puVar2 = *param_1;
      (*(undefined4 *)(gen_frame + 0x18)) = puVar2[5];
      puVar2[1] = param_1[1];
      puVar2[2] = param_1[2];
      puVar2[3] = param_1[3];
      puVar2[4] = param_1[4];
      puVar2[5] = param_1[5];
      F_009421e0(param_1,0,(iVar1 + -0x18) / 0x18,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
      puVar2 = puVar2 + -6;
      iVar1 = (int)puVar2 + (0x18 - (int)param_1);
    } while (1 < iVar1 / 0x18);
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
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2 - (int)param_1;
  if (1 < iVar1 / 0xc) {
    puVar2 = (undefined4 *)(param_2 + -0xc);
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = puVar2[1];
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar2;
      *puVar2 = *param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = puVar2[2];
      puVar2[1] = param_1[1];
      puVar2[2] = param_1[2];
      F_00942380(param_1,0,(iVar1 + -0xc) / 0xc,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      puVar2 = puVar2 + -3;
      iVar1 = (int)puVar2 + (0xc - (int)param_1);
    } while (1 < iVar1 / 0xc);
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
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = param_2 - (int)param_1;
  if (0x10 < (int)(uVar1 & 0xfffffff0)) {
    puVar2 = (undefined4 *)(param_2 + -0x10);
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = *puVar2;
      (*(undefined4 *)(gen_frame + 0x10)) = puVar2[1];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar2[2];
      *puVar2 = *param_1;
      (*(undefined4 *)(gen_frame + 0x18)) = puVar2[3];
      puVar2[1] = param_1[1];
      puVar2[2] = param_1[2];
      puVar2[3] = param_1[3];
      F_009424d0(param_1,0,(int)(uVar1 - 0x10) >> 4,&(*(undefined4 *)(gen_frame + 0xc)),param_3);
      puVar2 = puVar2 + -4;
      uVar1 = (int)puVar2 + (0x10 - (int)param_1);
    } while (0x10 < (int)(uVar1 & 0xfffffff0));
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
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2 - (int)param_1;
  if (1 < iVar1 / 0xc) {
    puVar2 = (undefined4 *)(param_2 + -0xc);
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = puVar2[1];
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar2;
      *puVar2 = *param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = puVar2[2];
      puVar2[1] = param_1[1];
      puVar2[2] = param_1[2];
      F_00942640(param_1,0,(iVar1 + -0xc) / 0xc,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      puVar2 = puVar2 + -3;
      iVar1 = (int)puVar2 + (0xc - (int)param_1);
    } while (1 < iVar1 / 0xc);
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
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = param_2 - (int)param_1;
  if (0x10 < (int)(uVar1 & 0xfffffff0)) {
    puVar2 = (undefined4 *)(param_2 + -0x10);
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = *puVar2;
      (*(undefined4 *)(gen_frame + 0x10)) = puVar2[1];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar2[2];
      *puVar2 = *param_1;
      (*(undefined4 *)(gen_frame + 0x18)) = puVar2[3];
      puVar2[1] = param_1[1];
      puVar2[2] = param_1[2];
      puVar2[3] = param_1[3];
      F_00942790(param_1,0,(int)(uVar1 - 0x10) >> 4,&(*(undefined4 *)(gen_frame + 0xc)),param_3);
      puVar2 = puVar2 + -4;
      uVar1 = (int)puVar2 + (0x10 - (int)param_1);
    } while (0x10 < (int)(uVar1 & 0xfffffff0));
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
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2 - (int)param_1;
  if (1 < iVar1 / 0x14) {
    puVar2 = (undefined4 *)(param_2 + -0x14);
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = puVar2[1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar2;
      (*(undefined4 *)(gen_frame + 0x14)) = puVar2[3];
      (*(undefined4 *)(gen_frame + 0x10)) = puVar2[2];
      *puVar2 = *param_1;
      (*(undefined4 *)(gen_frame + 0x18)) = puVar2[4];
      puVar2[1] = param_1[1];
      puVar2[2] = param_1[2];
      puVar2[3] = param_1[3];
      puVar2[4] = param_1[4];
      F_00942920(param_1,0,(iVar1 + -0x14) / 0x14,&(*(undefined4 *)(gen_frame + 0x8)),param_3);
      puVar2 = puVar2 + -5;
      iVar1 = (int)puVar2 + (0x14 - (int)param_1);
    } while (1 < iVar1 / 0x14);
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
unsigned int F_009625a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9625a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0095a920(param_1,param_2,param_3,0);
  return 0;
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

/* ref: Client::UI2::RaptureAtkUnitManager::vf30 */
uint F_00962720(unsigned int gen_a0)
{
  GEN_ENTER(0x962720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1e4);
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf0 */
uint F_00962730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x962730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00962620(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00962760 */
uint F_00962760(unsigned int gen_a0)
{
  GEN_ENTER(0x962760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_009546c0(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x137);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_009627b0 */
byte F_009627b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9627b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_0095b600(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)))) {
    return 0;
  }
  return *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
}

/* ref: FUN_009627f0 */
uint F_009627f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9627f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00954780(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00962820 */
unsigned int F_00962820(unsigned int gen_a0)
{
  GEN_ENTER(0x962820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  
  if (-1 < *(int *)((int)this + 0x264)) {
    F_0059b300(*(undefined * PTR32 *)((int)this + 0x1b8),*(undefined4 *)((int)this + 0x270),
                 *(undefined4 *)((int)this + 0x26c),0);
    F_0055ad50(*(undefined * PTR32 *)((int)this + 0x1a8),0,0);
    F_008a3b30((undefined *)((int)this + 0x1a0));
    if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1a4) + 0xfb))) & 2) != 0) {
      puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1a4) + 0x120)));
      *puVar1 = *puVar1 & 0xffffffbf;
    }
  }
  return 0;
}

/* ref: FUN_00962870 */
uint F_00962870(unsigned int gen_a0)
{
  GEN_ENTER(0x962870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0x10) - iVar1 >> 3) * 8,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return uVar2;
}

/* ref: FUN_009628b0 */
uint F_009628b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9628b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_0089de40(this,param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentFateReward::vf0 */
uint F_009628c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9628c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0095ac90(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009628f0 */
uint F_009628f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9628f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00954ba0(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: Client::UI2::AddonPopUpText::vf0 */
uint F_00962920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x962920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d790c));
  F_00954550(this + 0x38c4);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFlyText::vf0 */
uint F_00962960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x962960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008a90d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonNeedGreed::vf0 */
uint F_00962990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x962990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008a9340(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009629c0 */
uint F_009629c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9629c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 0x90);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x98) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  iVar1 = *(int *)((int)this + 0x6c);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x74) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  iVar1 = *(int *)((int)this + 0x5c);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 100) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  iVar1 = *(int *)((int)this + 0x3c);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x44) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  iVar1 = *(int *)((int)this + 0x2c);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x34) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  iVar1 = *(int *)((int)this + 0x1c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0x24) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return uVar2;
}

/* ref: FUN_00962b30 */
uint F_00962b30(unsigned int gen_a0)
{
  GEN_ENTER(0x962b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00955290(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00962be0 */
uint F_00962be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x962be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)0x0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    piVar1 = *(int * PTR32 *)*param_2;
  }
  uVar3 = 0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*piVar1;
  }
  uVar2 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_2;
  }
  F_0095be30(this,param_1,uVar2,0,param_4,uVar3,0,param_4 + 1);
  return param_1;
}

/* ref: FUN_00962c60 */
uint F_00962c60(unsigned int gen_a0)
{
  GEN_ENTER(0x962c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00955350(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x40,400);
  return (uint)uVar1;
}

/* ref: FUN_00962ca0 */
uint F_00962ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x962ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0095c1c0(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00962cd0 */
uint F_00962cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x962cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)0x0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    piVar1 = *(int * PTR32 *)*param_2;
  }
  uVar3 = 0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*piVar1;
  }
  uVar2 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_2;
  }
  F_0095bfe0(this,param_1,uVar2,0,param_4,uVar3,0,param_4 + 1);
  return param_1;
}

/* ref: FUN_00962da0 */
uint F_00962da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x962da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_0042c880(param_2 + 0x19);
    F_0042c880(param_2 + 3);
    F_00429760(param_2,0xbc,400);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00962e00 */
uint F_00962e00(unsigned int gen_a0)
{
  GEN_ENTER(0x962e00u, gen_a0, 0u, 0u, 0u);
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
      F_0042c880(piVar3 + 0x19);
      F_0042c880(piVar3 + 3);
      uVar4 = F_00429760(piVar3,0xbc,400);
      uVar2 = (uint)uVar4;
      piVar3 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return uVar2;
}

/* ref: FUN_00962e50 */
uint F_00962e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x962e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0095c2e0(this,*(undefined4 *)this,param_1);
  return uVar1;
}

/* ref: FUN_00962e70 */
uint F_00962e70(unsigned int gen_a0)
{
  GEN_ENTER(0x962e70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00962eb0 */
unsigned int F_00962eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x962eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4) < param_1) {
    uVar3 = F_004296a0(param_1 * 0x10,0,400);
    F_00957220(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,*(int *)((int)this + 8) - iVar1 & 0xfffffff0,400);
    }
    *(uint *)((int)this + 4) = (iVar2 - iVar1 & 0xfffffff0U) + uVar3;
    *(uint *)this = uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x10 + uVar3;
  }
  return 0;
}

/* ref: FUN_00962f40 */
unsigned int F_00962f40(unsigned int gen_a0)
{
  GEN_ENTER(0x962f40u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00962f90 */
unsigned int F_00962f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x962f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x54) < param_1) {
    puVar3 = (undefined4 *)F_004296a0(param_1 * 0x54,0,400);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar1; puVar4 = puVar4 + 0x15) {
      if (puVar6 != (undefined4 *)0x0) {
        puVar7 = puVar4;
        puVar8 = puVar6;
        for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar6 = puVar6 + 0x15;
    }
    iVar5 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar5 != 0) {
      F_00429760(iVar5,((*(int *)((int)this + 8) - iVar5) / 0x54) * 0x54,400);
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + ((iVar2 - iVar5) / 0x54) * 0x15;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar3 + param_1 * 0x15;
    *(undefined4 * PTR32 *)this = puVar3;
  }
  return 0;
}

/* ref: FUN_00963070 */
unsigned int F_00963070(unsigned int gen_a0)
{
  GEN_ENTER(0x963070u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009630c0 */
uint F_009630c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9630c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x18,0,400);
    F_0094f190(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,400);
    }
    *(uint *)((int)this + 8) = param_1 * 0x18 + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0x18) * 0x18;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00963190 */
uint F_00963190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x963190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_0093f7f0(param_2 + 0x18,*(undefined4 *)((int)this + 4),param_2,param_2);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -0x18;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009631c0 */
uint F_009631c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9631c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00955490(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,400);
  return (uint)uVar1;
}

/* ref: FUN_00963200 */
uint F_00963200(unsigned int gen_a0)
{
  GEN_ENTER(0x963200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00955530(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00963240 */
uint F_00963240(unsigned int gen_a0)
{
  GEN_ENTER(0x963240u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00963280 */
unsigned int F_00963280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x963280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4) < param_1) {
    uVar3 = F_004296a0(param_1 * 0x10,0,400);
    F_009572d0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,*(int *)((int)this + 8) - iVar1 & 0xfffffff0,400);
    }
    *(uint *)((int)this + 4) = (iVar2 - iVar1 & 0xfffffff0U) + uVar3;
    *(uint *)this = uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x10 + uVar3;
  }
  return 0;
}

/* ref: FUN_00963310 */
uint F_00963310(unsigned int gen_a0)
{
  GEN_ENTER(0x963310u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00963350 */
uint F_00963350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x963350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    iVar3 = param_1 * 8;
    uVar4 = F_004296a0(iVar3,0,0x2c0);
    F_0095ce00(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar4);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0x2c0);
    }
    param_1 = uVar4 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = iVar3 + uVar4;
    *(uint *)((int)this + 4) = param_1;
  }
  return param_1;
}

/* ref: FUN_009633f0 */
uint F_009633f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9633f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009555d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00963430 */
unsigned int F_00963430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x963430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  int iVar2;
  undefined4 * puVar3;
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
  (*(uint *)(gen_frame + 0x24)) = param_4 - *(int *)((int)this + 0xc);
  (*(int *)(gen_frame + 0x28)) = param_7 - param_4;
  (*(int *)(gen_frame + 0x14)) = param_7;
  uVar7 = 0;
  if ((*(uint *)(gen_frame + 0x24)) < (uint)((*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - param_7)) {
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*piVar5;
    }
    uVar6 = 0;
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    F_00956380(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar6,0,param_4,
                 uVar7,0,param_7);
    while ((*(int *)(gen_frame + 0x28)) != 0) {
      if (*(int *)((int)this + 0x10) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4)));
        F_0042c880((undefined *)((int)pvVar1 + 0x54));
        F_0042c880(pvVar1);
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
        if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        piVar5 = (int *)((int)this + 0x10);
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + -1;
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
    F_00956400(((undefined1 *)(gen_frame + 0xc)),uVar6,0,param_7,*(undefined4 *)this,0,
                 *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10),uVar7,0,param_4);
    while ((*(int *)(gen_frame + 0x28)) != 0) {
      if (*(int *)((int)this + 0x10) != 0) {
        uVar4 = *(int *)((int)this + 0xc) + -1 + *(int *)((int)this + 0x10);
        if (*(uint *)((int)this + 8) <= uVar4) {
          uVar4 = uVar4 - *(uint *)((int)this + 8);
        }
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4)));
        F_0042c880((undefined *)((int)pvVar1 + 0x54));
        F_0042c880(pvVar1);
        piVar5 = (int *)((int)this + 0x10);
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + -1;
    }
  }
  iVar2 = *(int *)((int)this + 0xc);
  piVar5 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar3 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar3 != (undefined4 *)0x0)) {
    piVar5 = (int *)*puVar3;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x24)) + iVar2;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar5;
  }
  return 0;
}

/* ref: FUN_00963610 */
uint F_00963610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x963610u, gen_a0, gen_a1, 0u, 0u);
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
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,400);
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00963780 */
uint F_00963780(unsigned int gen_a0)
{
  GEN_ENTER(0x963780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_0095c5e0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_009637a0 */
uint F_009637a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9637a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_2 != param_3) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar4 = param_2;
    if (param_3 != puVar2) {
      puVar3 = param_3 + 2;
      do {
        puVar4[1] = puVar3[-1];
        puVar4[2] = *puVar3;
        puVar1 = puVar3 + 1;
        puVar4 = puVar4 + 3;
        puVar3 = puVar3 + 3;
      } while (puVar1 != puVar2);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    for (puVar3 = puVar4; puVar3 != puVar2; puVar3 = puVar3 + 3) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,0);
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00963810 */
uint F_00963810(unsigned int gen_a0)
{
  GEN_ENTER(0x963810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (; puVar2 != puVar1; puVar2 = puVar2 + 3) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,0);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0xc) * 0xc,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00963870 */
uint F_00963870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x963870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar2 = (undefined4 *)F_0094e420(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (puVar3 = puVar2; puVar3 != puVar1; puVar3 = puVar3 + 6) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,0);
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009638e0 */
uint F_009638e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9638e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,0);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x18) * 0x18,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00963950 */
uint F_00963950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x963950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar2 = (undefined4 *)F_009564e0(param_3,*(undefined4 *)((int)this + 4),param_2);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (puVar3 = puVar2; puVar3 != puVar1; puVar3 = puVar3 + 4) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,0);
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009639b0 */
uint F_009639b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9639b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (; puVar2 != puVar1; puVar2 = puVar2 + 4) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,0);
    }
    F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xfffffff0,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00963a10 */
unsigned int F_00963a10(unsigned int gen_a0)
{
  GEN_ENTER(0x963a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x34) * 0x34,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00963a60 */
uint F_00963a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x963a60u, gen_a0, gen_a1, 0u, 0u);
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
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,400);
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00963be0 */
uint F_00963be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x963be0u, gen_a0, gen_a1, 0u, 0u);
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
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,400);
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00963d50 */
uint F_00963d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x963d50u, gen_a0, gen_a1, 0u, 0u);
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
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,400);
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00963ec0 */
uint F_00963ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x963ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = (undefined4 *)((int)param_3 + 0xd)) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2[2] = param_3[2];
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_3 + 3);
      puVar2 = (undefined4 *)((int)puVar2 + 0xd);
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00963f10 */
unsigned int F_00963f10(unsigned int gen_a0)
{
  GEN_ENTER(0x963f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xd) * 0xd,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00963f60 */
uint F_00963f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x963f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a3;
  undefined2 * puVar1;
  undefined2 * puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined2 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = (undefined2 *)((int)param_3 + 3)) {
      *puVar2 = *param_3;
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_3 + 1);
      puVar2 = (undefined2 *)((int)puVar2 + 3);
    }
    *(undefined2 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00963fb0 */
unsigned int F_00963fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x963fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 3) * 3,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00964000 */
uint F_00964000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x964000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 2) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2 = puVar2 + 2;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964050 */
uint F_00964050(unsigned int gen_a0)
{
  GEN_ENTER(0x964050u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00964090 */
uint F_00964090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x964090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 2) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2 = puVar2 + 2;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009640e0 */
uint F_009640e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9640e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00964120 */
uint F_00964120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x964120u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00964170 */
unsigned int F_00964170(unsigned int gen_a0)
{
  GEN_ENTER(0x964170u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009641c0 */
uint F_009641c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9641c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0095c260(this);
  uVar1 = F_00429760(*(undefined4 *)this,0x110,400);
  return (uint)uVar1;
}

/* ref: FUN_009641e0 */
uint F_009641e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9641e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0095c770(param_1,*(undefined4 *)(param_1 + 4),param_2);
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(param_1 + 4) = uVar1;
  **(uint * PTR32 *)(uVar1 + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00964250 */
uint F_00964250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x964250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint * puVar2;
  int * piVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  piVar3 = (int *)F_004296a0(100,0,400);
  *piVar3 = param_1;
  piVar3[1] = uVar1;
  if (piVar3 + 2 != (int *)0x0) {
    F_0042cbc0(piVar3 + 2,param_2);
    piVar3[0x17] = *(int *)(param_2 + 0x54);
    piVar3[0x18] = *(int *)(param_2 + 0x58);
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

/* ref: FUN_009642f0 */
uint F_009642f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9642f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  uint * puVar2;
  int * piVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  piVar3 = (int *)F_004296a0(0x68,0,400);
  *piVar3 = param_1;
  piVar3[1] = uVar1;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_2;
    piVar3[3] = param_2[1];
    F_0042cbc0(piVar3 + 4,param_2 + 2);
    piVar3[0x19] = param_2[0x17];
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

/* ref: FUN_009643a0 */
uint F_009643a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9643a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 4) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2[2] = param_3[2];
      puVar2[3] = param_3[3];
      puVar2 = puVar2 + 4;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009643f0 */
unsigned int F_009643f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9643f0u, gen_a0, gen_a1, 0u, 0u);
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
      F_00962eb0(this,uVar2);
      return 0;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    F_00962eb0(this,uVar2);
  }
  return 0;
}

/* ref: FUN_00964460 */
uint F_00964460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x964460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_0094cc20(param_3,*(undefined4 *)((int)this + 4),param_2);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964490 */
unsigned int F_00964490(unsigned int gen_a0)
{
  GEN_ENTER(0x964490u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009644e0 */
unsigned int F_009644e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9644e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00964530 */
uint F_00964530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x964530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 2) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2 = puVar2 + 2;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964580 */
uint F_00964580(unsigned int gen_a0)
{
  GEN_ENTER(0x964580u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009645c0 */
uint F_009645c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9645c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 2) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2 = puVar2 + 2;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964610 */
uint F_00964610(unsigned int gen_a0)
{
  GEN_ENTER(0x964610u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00964650 */
uint F_00964650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x964650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 2) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2 = puVar2 + 2;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009646a0 */
uint F_009646a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9646a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009646e0 */
uint F_009646e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9646e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 2) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2 = puVar2 + 2;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964730 */
uint F_00964730(unsigned int gen_a0)
{
  GEN_ENTER(0x964730u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00964770 */
uint F_00964770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x964770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 2) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2 = puVar2 + 2;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009647c0 */
uint F_009647c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9647c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00964800 */
uint F_00964800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x964800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_0093fc00(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964840 */
unsigned int F_00964840(unsigned int gen_a0)
{
  GEN_ENTER(0x964840u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00964890 */
uint F_00964890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x964890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 2) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2 = puVar2 + 2;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009648e0 */
uint F_009648e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9648e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00964920 */
uint F_00964920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x964920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 2) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2 = puVar2 + 2;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964970 */
uint F_00964970(unsigned int gen_a0)
{
  GEN_ENTER(0x964970u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009649b0 */
uint F_009649b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9649b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00964a00 */
unsigned int F_00964a00(unsigned int gen_a0)
{
  GEN_ENTER(0x964a00u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00964a50 */
uint F_00964a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x964a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 1) {
      *puVar2 = *param_3;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964a90 */
uint F_00964a90(unsigned int gen_a0)
{
  GEN_ENTER(0x964a90u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00964ad0 */
uint F_00964ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x964ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar3 = param_3 + 0x15;
      puVar5 = puVar2 + 0x15;
      puVar6 = param_3;
      puVar7 = puVar2;
      for (iVar4 = 0x15; puVar2 = puVar5, param_3 = puVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
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

/* ref: FUN_00964b20 */
unsigned int F_00964b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x964b20u, gen_a0, gen_a1, 0u, 0u);
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
      F_00962f90(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00962f90(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00964bb0 */
uint F_00964bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x964bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_0093f7f0(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964bf0 */
uint F_00964bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x964bf0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar2 = F_009630c0(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_009630c0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00964c80 */
uint F_00964c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x964c80u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00964cd0 */
unsigned int F_00964cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x964cd0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00964d20 */
uint F_00964d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x964d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 4) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2[2] = param_3[2];
      puVar2[3] = param_3[3];
      puVar2 = puVar2 + 4;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964d70 */
unsigned int F_00964d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x964d70u, gen_a0, gen_a1, 0u, 0u);
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
      F_00963280(this,uVar2);
      return 0;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    F_00963280(this,uVar2);
  }
  return 0;
}

/* ref: FUN_00964de0 */
unsigned int F_00964de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x964de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  for (; param_1 != param_2; param_1 = (undefined *)((int)param_1 + 0x68)) {
    F_0042c880(param_1);
  }
  return 0;
}

/* ref: FUN_00964e10 */
uint F_00964e10(unsigned int gen_a0)
{
  GEN_ENTER(0x964e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x68)) {
      F_0042c880(this_00);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x68) * 0x68,0x2c0);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00964e70 */
unsigned int F_00964e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x964e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  for (; param_1 != param_2; param_1 = (undefined *)((int)param_1 + 0x6c)) {
    F_0042c880(param_1);
  }
  return 0;
}

/* ref: FUN_00964ea0 */
uint F_00964ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x964ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x6c)) {
      F_0042c880(this_00);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x6c) * 0x6c,0x2c0);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00964f00 */
uint F_00964f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x964f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 2) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2 = puVar2 + 2;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964f50 */
uint F_00964f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x964f50u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00963350(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00963350(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00964fc0 */
uint F_00964fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x964fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_0093ff10(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00965000 */
unsigned int F_00965000(unsigned int gen_a0)
{
  GEN_ENTER(0x965000u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00965050 */
unsigned int F_00965050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x34) < param_1) {
    puVar3 = (undefined4 *)F_004296a0(param_1 * 0x34,0,400);
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
      F_00429760(iVar5,((*(int *)((int)this + 8) - iVar5) / 0x34) * 0x34,400);
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + ((iVar2 - iVar5) / 0x34) * 0xd;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar3 + param_1 * 0xd;
    *(undefined4 * PTR32 *)this = puVar3;
  }
  return 0;
}

/* ref: FUN_00965130 */
unsigned int F_00965130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965130u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  for (; param_1 != param_2; param_1 = (undefined *)((int)param_1 + 0x58)) {
    F_0042c880(param_1);
  }
  return 0;
}

/* ref: FUN_00965160 */
unsigned int F_00965160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965160u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  for (; param_1 != param_2; param_1 = (undefined *)((int)param_1 + 0x54)) {
    F_0042c880(param_1);
  }
  return 0;
}

/* ref: FUN_00965190 */
uint F_00965190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965190u, gen_a0, gen_a1, 0u, 0u);
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
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,400);
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00965300 */
unsigned int F_00965300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0xd) < param_1) {
    uVar3 = F_004296a0(param_1 * 0xd,0,400);
    F_00956850(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xd) * 0xd,400);
    }
    *(uint *)((int)this + 4) = ((iVar2 - iVar1) / 0xd) * 0xd + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0xd + uVar3;
    *(uint *)this = uVar3;
  }
  return 0;
}

/* ref: FUN_009653c0 */
uint F_009653c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9653c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined2 * puVar1;
  int iVar2;
  undefined2 * puVar3;
  undefined2 * puVar4;
  uint uVar5;
  undefined2 * puVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar5 = (*(int *)((int)this + 8) - *(int *)this) / 3;
  if (uVar5 < param_1) {
    puVar3 = (undefined2 *)F_004296a0(param_1 * 3,0,400);
    puVar1 = *(undefined2 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined2 * PTR32 *)this; puVar4 != puVar1; puVar4 = (undefined2 *)((int)puVar4 + 3))
    {
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = *puVar4;
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar4 + 1);
      }
      puVar6 = (undefined2 *)((int)puVar6 + 3);
    }
    iVar2 = *(int *)this;
    iVar7 = *(int *)((int)this + 4) - iVar2;
    uVar5 = iVar7 * 0x55555556;
    if (iVar2 != 0) {
      uVar8 = F_00429760(iVar2,((*(int *)((int)this + 8) - iVar2) / 3) * 3,400);
      uVar5 = (uint)uVar8;
    }
    *(undefined2 * PTR32 *)this = puVar3;
    *(uint *)((int)this + 8) = param_1 * 3 + (int)puVar3;
    *(int *)((int)this + 4) = (int)puVar3 + (iVar7 / 3) * 3;
  }
  return uVar5;
}

/* ref: FUN_00965490 */
unsigned int F_00965490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965490u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_1 != param_2; param_1 = param_1 + 0x60) {
    F_0042c880((undefined *)(param_1 + 8));
  }
  return 0;
}

/* ref: FUN_009654c0 */
unsigned int F_009654c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9654c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,400);
    F_009568f0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,400);
    }
    *(uint *)this = uVar3;
    *(uint *)((int)this + 8) = param_1 * 8 + uVar3;
    *(uint *)((int)this + 4) = uVar3 + (iVar2 - iVar1 >> 3) * 8;
  }
  return 0;
}

/* ref: FUN_00965560 */
unsigned int F_00965560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,400);
    F_00956940(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,400);
    }
    *(uint *)this = uVar3;
    *(uint *)((int)this + 8) = param_1 * 8 + uVar3;
    *(uint *)((int)this + 4) = uVar3 + (iVar2 - iVar1 >> 3) * 8;
  }
  return 0;
}

/* ref: FUN_00965600 */
unsigned int F_00965600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0xc) < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,400);
    F_00956990(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
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

/* ref: FUN_009656c0 */
unsigned int F_009656c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9656c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00965700 */
unsigned int F_00965700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x14) < param_1) {
    uVar3 = F_004296a0(param_1 * 0x14,0,400);
    F_00957770(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x14) * 0x14,400);
    }
    *(uint *)((int)this + 8) = param_1 * 0x14 + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0x14) * 0x14;
    *(uint *)this = uVar3;
  }
  return 0;
}

/* ref: FUN_009657d0 */
unsigned int F_009657d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9657d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x14) < param_1) {
    uVar3 = F_004296a0(param_1 * 0x14,0,400);
    F_009577c0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x14) * 0x14,400);
    }
    *(uint *)((int)this + 8) = param_1 * 0x14 + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0x14) * 0x14;
    *(uint *)this = uVar3;
  }
  return 0;
}

/* ref: FUN_009658a0 */
uint F_009658a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9658a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    iVar3 = param_1 * 8;
    uVar4 = F_004296a0(iVar3,0,0x2c0);
    F_0095d2b0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar4);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0x2c0);
    }
    param_1 = uVar4 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = iVar3 + uVar4;
    *(uint *)((int)this + 4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00965940 */
uint F_00965940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    iVar3 = param_1 * 8;
    uVar4 = F_004296a0(iVar3,0,0x2c0);
    F_0095d2f0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar4);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0x2c0);
    }
    param_1 = uVar4 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = iVar3 + uVar4;
    *(uint *)((int)this + 4) = param_1;
  }
  return param_1;
}

/* ref: FUN_009659e0 */
uint F_009659e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9659e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    iVar3 = param_1 * 8;
    uVar4 = F_004296a0(iVar3,0,0x2c0);
    F_0095d330(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar4);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0x2c0);
    }
    param_1 = uVar4 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = iVar3 + uVar4;
    *(uint *)((int)this + 4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00965a80 */
uint F_00965a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    iVar3 = param_1 * 8;
    uVar4 = F_004296a0(iVar3,0,0x2c0);
    F_0095d370(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar4);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0x2c0);
    }
    param_1 = uVar4 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = iVar3 + uVar4;
    *(uint *)((int)this + 4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00965b20 */
uint F_00965b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    iVar3 = param_1 * 8;
    uVar4 = F_004296a0(iVar3,0,400);
    F_0095d3b0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar4);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,400);
    }
    param_1 = uVar4 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = iVar3 + uVar4;
    *(uint *)((int)this + 4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00965bc0 */
unsigned int F_00965bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x18) < param_1) {
    uVar3 = F_004296a0(param_1 * 0x18,0,400);
    F_0094f6d0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,400);
    }
    *(uint *)((int)this + 8) = param_1 * 0x18 + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0x18) * 0x18;
    *(uint *)this = uVar3;
  }
  return 0;
}

/* ref: FUN_00965c90 */
uint F_00965c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    iVar3 = param_1 * 8;
    uVar4 = F_004296a0(iVar3,0,400);
    F_0095d420(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar4);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,400);
    }
    param_1 = uVar4 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = iVar3 + uVar4;
    *(uint *)((int)this + 4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00965d30 */
uint F_00965d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    iVar3 = param_1 * 8;
    uVar4 = F_004296a0(iVar3,0,400);
    F_0095d460(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar4);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,400);
    }
    param_1 = uVar4 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = iVar3 + uVar4;
    *(uint *)((int)this + 4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00965dd0 */
unsigned int F_00965dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0xc) < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,400);
    F_0095d4a0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
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

/* ref: FUN_00965e90 */
uint F_00965e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar4 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400);
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
      F_00429760(iVar2,(*(int *)((int)this + 8) - iVar2 >> 2) * 4,400);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = param_1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return (uint)param_1;
}

/* ref: FUN_00965f40 */
unsigned int F_00965f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x965f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0xc) < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,400);
    F_0095d510(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
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

/* ref: FUN_00966000 */
unsigned int F_00966000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x966000u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00966040 */
unsigned int F_00966040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x966040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x18) < param_1) {
    uVar3 = F_004296a0(param_1 * 0x18,0,400);
    F_0094f850(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,400);
    }
    *(uint *)((int)this + 8) = param_1 * 0x18 + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0x18) * 0x18;
    *(uint *)this = uVar3;
  }
  return 0;
}

/* ref: FUN_00966110 */
uint F_00966110(unsigned int gen_a0)
{
  GEN_ENTER(0x966110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 8) != 0) {
    bVar4 = F_00917440(this);
    if (bVar4 != 0) {
      iVar1 = **(int * PTR32 *)((int)this + 4);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)F_0042a990(iVar1 + 0x60);
      *(undefined * PTR32 *)(iVar1 + 0xb4) = (*(undefined * PTR32 *)(gen_frame + 0x8));
      F_005a2710((undefined *)(iVar1 + 0x28),6);
      *(undefined * PTR32 *)(iVar1 + 0x2c) = (*(undefined * PTR32 *)(gen_frame + 0x8));
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)F_0042a990(iVar1 + 0xb8);
      *(undefined * PTR32 *)(iVar1 + 0x10c) = (*(undefined * PTR32 *)(gen_frame + 0x8));
      F_005a2710((undefined *)(iVar1 + 0x38),6);
      *(undefined * PTR32 *)(iVar1 + 0x3c) = (*(undefined * PTR32 *)(gen_frame + 0x8));
      iVar2 = *(int *)(iVar1 + 8);
      if (*(int *)((int)this + iVar2 * 4 + 0x10) != 0) {
        piVar3 = *(int * PTR32 *)((int)this + iVar2 * 4 + 0x10);
        ((code *)*(gen_code32 *)(*piVar3 + 0xfc))(piVar3,*(undefined4 *)(iVar1 + 0xc),iVar1 + 0x10);
      }
      F_0095d5c0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar1);
      return *(uint *)((int)this + iVar2 * 4 + 0x10);
    }
  }
  return 0;
}

/* ref: FUN_009661c0 */
uint F_009661c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9661c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    this_01 = (int *)F_0095d6d0(this_00,param_1,param_2,param_3);
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

/* ref: FUN_00966350 */
uint F_00966350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x966350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
  }
  F_00956ec0(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_009663b0 */
uint F_009663b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9663b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
  }
  F_00956b70(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00966410 */
uint F_00966410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x966410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
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
    puVar1[4] = *param_2;
    puVar1[5] = param_2[1];
    puVar3 = param_2 + 2;
    puVar4 = puVar1 + 6;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  F_00956c50(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00966480 */
uint F_00966480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x966480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x28,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_2;
    puVar1[5] = param_2[1];
    *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_2 + 2);
  }
  F_00956da0(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_009664e0 */
uint F_009664e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9664e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    piVar2 = (int *)F_0095d890(this,param_1,param_2,param_3);
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

/* ref: FUN_00966570 */
uint F_00966570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x966570u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    piVar2 = (int *)F_0095d900(this,param_1,param_2,param_3);
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

/* ref: FUN_00966600 */
uint F_00966600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x966600u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    piVar2 = (int *)F_0095d970(this,param_1,param_2,param_3);
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

/* ref: FUN_00966690 */
uint F_00966690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x966690u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    piVar2 = (int *)F_0095d9e0(this,param_1,param_2,param_3);
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

/* ref: FUN_00966720 */
uint F_00966720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x966720u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    piVar2 = (int *)F_0095da50(this,param_1,param_2,param_3);
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

/* ref: FUN_009667b0 */
uint F_009667b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9667b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    piVar2 = (int *)F_0095dac0(this,param_1,param_2,param_3);
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

/* ref: FUN_00966840 */
uint F_00966840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x966840u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    piVar2 = (int *)F_0095db30(this,param_1,param_2,param_3);
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

/* ref: FUN_009668d0 */
uint F_009668d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9668d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    piVar2 = (int *)F_0095dbb0(this,param_1,param_2,param_3);
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

/* ref: FUN_00966960 */
uint F_00966960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x966960u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    piVar2 = (int *)F_0095dc30(this,param_1,param_2,param_3);
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

/* ref: FUN_009669f0 */
uint F_009669f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9669f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0095dcb0(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00966a20 */
unsigned int F_00966a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x966a20u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00966a50 */
uint F_00966a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x966a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00958180(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00966a80 */
uint F_00966a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x966a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_009581e0(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00966ab0 */
unsigned int F_00966ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x966ab0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    do {
      uVar1 = *(undefined4 *)(iVar2 + 4 + (int)param_3);
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar2 + (int)param_3);
        param_3[1] = uVar1;
      }
      param_3 = param_3 + 2;
    } while (iVar2 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00966af0 */
uint F_00966af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x966af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00958290(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00966b20 */
uint F_00966b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x966b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_009582d0(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00966b50 */
uint F_00966b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x966b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00958330(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00966b80 */
uint F_00966b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x966b80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_0042cbc0(param_3,iVar1 + (int)param_3);
        *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x58);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00966bc0 */
uint F_00966bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x966bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_009583c0(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00966bf0 */
unsigned int F_00966bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x966bf0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00966c20 */
uint F_00966c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x966c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_009584a0(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00966c50 */
unsigned int F_00966c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x966c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0x110,0,400);
  piVar3[1] = iVar2;
  *piVar3 = iVar1;
  if (piVar3 + 2 != (int *)0x0) {
    F_0091dea0(piVar3 + 2,param_1);
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return 0;
}

/* ref: FUN_00966cc0 */
uint F_00966cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x966cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar3 = param_1[1];
  iVar1 = *param_1;
  *(undefined4 *)this = 0;
  iVar3 = iVar3 - iVar1 >> 3;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)F_004296a0(iVar3 * 8,0,400);
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar4 + iVar3 * 2;
    puVar2 = (undefined4 *)param_1[1];
    for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar2; puVar5 = puVar5 + 2) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar5;
        puVar4[1] = puVar5[1];
      }
      puVar4 = puVar4 + 2;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
  }
  return (uint)this;
}

/* ref: FUN_00966d50 */
uint F_00966d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x966d50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  this_00 = (undefined *)F_00406bd0(0x24c,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008b1c50(this_00);
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

/* ref: FUN_00966dc0 */
uint F_00966dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x966dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  this_00 = (undefined *)F_00406bd0(0x8e4,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008b1f40(this_00);
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

/* ref: FUN_00966e30 */
uint F_00966e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x966e30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  this_00 = (undefined *)F_00406bd0(0x2a0,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008b2600(this_00);
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

/* ref: FUN_00966ea0 */
uint F_00966ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x966ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined4 *)F_00406bd0(0x19c,0,uVar1,uVar2);
  if (this_00 != (undefined4 *)0x0) {
    F_005903f0(this_00);
    *this_00 = (*(undefined * PTR32 (*)[62])REFP(0x10d7f94));
    this_00[0x60] = 0;
    this_00[0x61] = 0;
    this_00[0x62] = 0;
    this_00[99] = 0;
    this_00[100] = 0;
    *(byte *)((int)this_00 + 0xfa) = *(byte *)((int)this_00 + 0xfa) & 0xbf;
    *(undefined1 *)(this_00 + 0x66) = 0;
    *(undefined2 *)((int)this_00 + 0x136) = 0x17;
    F_005a8d00(this_00,param_2,param_3);
    uVar1 = F_0057fac0(this,this_00,param_1);
    if (uVar1 != 0) {
      return (uint)this_00;
    }
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
  }
  return 0;
}

/* ref: FUN_00966f50 */
uint F_00966f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x966f50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  this_00 = (undefined *)F_00406bd0(0x1cc,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008b66a0(this_00);
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

/* ref: FUN_00966fc0 */
uint F_00966fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x966fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  this_00 = (undefined *)F_00406bd0(0x230,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008b6560(this_00);
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

/* ref: FUN_00967030 */
uint F_00967030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967030u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar2 = (undefined4 *)F_004296a0(0x18,0,400);
  *puVar2 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar1 = puVar2 + 3;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  *(undefined2 *)(puVar2 + 5) = 0;
  if (puVar1 != (uint *)0x0) {
    *puVar1 = *(*(uint * PTR32 *)&gen_args[2]);
    puVar2[4] = (*(uint * PTR32 *)&gen_args[2])[1];
  }
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(uint * PTR32 *)&gen_args[2]) = ((uint *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(uint * PTR32 *)&gen_args[2]), 1, 3),1)));
  if (*(char *)((int)puVar4[1] + 0x15) == '\0') {
    puVar3 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar3;
      (*(uint * PTR32 *)&gen_args[2]) = ((uint *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(uint * PTR32 *)&gen_args[2]), 1, 3),*puVar1 < (uint)puVar4[3])));
      if (*puVar1 < (uint)puVar4[3]) {
        puVar3 = (undefined4 *)*puVar4;
      }
      else {
        puVar3 = (undefined4 *)puVar4[2];
      }
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  puVar2 = (undefined4 *)F_0094ed70((*(undefined * PTR32 *)&gen_args[0]),&(*(uint * PTR32 *)&gen_args[2]),(*(uint * PTR32 *)&gen_args[2]),puVar4,puVar2);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_009670d0 */
uint F_009670d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9670d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00967170 */
uint F_00967170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x967170u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  this_00 = (undefined *)F_00406bd0(0x38d4,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008b4500(this_00);
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

/* ref: FUN_009671e0 */
uint F_009671e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9671e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  this_00 = (undefined *)F_00406bd0(0x1308,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_008b4930(this_00);
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

/* ref: FUN_00967250 */
unsigned int F_00967250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00961bb0(param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00967260 */
unsigned int F_00967260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00961c70(param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00967270 */
unsigned int F_00967270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00961d30(param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00967280 */
uint F_00967280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00961da0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00967290 */
uint F_00967290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00961e00(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_009672a0 */
uint F_009672a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9672a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00961e60(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_009672b0 */
unsigned int F_009672b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9672b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00961ec0(param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_009672c0 */
unsigned int F_009672c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9672c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00961f30(param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_009672d0 */
uint F_009672d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9672d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00961fd0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_009672e0 */
uint F_009672e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9672e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00962030(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_009672f0 */
uint F_009672f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9672f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00962090(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00967300 */
uint F_00967300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_009620f0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00967310 */
unsigned int F_00967310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00962150(param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00967320 */
unsigned int F_00967320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00962220(param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00967330 */
unsigned int F_00967330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_009622c0(param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00967340 */
unsigned int F_00967340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00962350(param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00967350 */
unsigned int F_00967350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_009623f0(param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00967360 */
unsigned int F_00967360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00962480(param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00967370 */
uint F_00967370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x10) - iVar1 >> 3) * 8,400);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009673d0 */
unsigned int F_009673d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9673d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  if (1 < (param_2 - param_1) / 0xc) {
    puVar1 = (undefined4 *)(param_2 + -4);
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = puVar1[-1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar1;
      puVar1[-1] = *(undefined4 *)(param_1 + 4);
      *puVar1 = *(undefined4 *)(param_1 + 8);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d38));
      F_00951e10(param_1,0,((-8 - param_1) + (int)puVar1) / 0xc,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_3);
      puVar1 = puVar1 + -3;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
    } while (1 < ((4 - param_1) + (int)puVar1) / 0xc);
  }
  return 0;
}

/* ref: FUN_00967480 */
uint F_00967480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967480u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = (param_2 - param_1) / 0x18;
  if (1 < (int)uVar1) {
    puVar2 = (undefined4 *)(param_2 + -0x10);
    do {
      (*(undefined4 *)(gen_frame + 0x8)) = puVar2[-1];
      (*(undefined4 *)(gen_frame + 0x10)) = puVar2[1];
      (*(undefined4 *)(gen_frame + 0xc)) = *puVar2;
      puVar2[-1] = *(undefined4 *)(param_1 + 4);
      (*(undefined4 *)(gen_frame + 0x14)) = puVar2[2];
      *puVar2 = *(undefined4 *)(param_1 + 8);
      (*(undefined1 *)(gen_frame + 0x18)) = *(undefined1 *)(puVar2 + 3);
      puVar2[1] = *(undefined4 *)(param_1 + 0xc);
      puVar2[2] = *(undefined4 *)(param_1 + 0x10);
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_1 + 0x14);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d48));
      F_00952020(param_1,0,((-8 - param_1) + (int)puVar2) / 0x18,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),param_3);
      puVar2 = puVar2 + -6;
      uVar1 = ((0x10 - param_1) + (int)puVar2) / 0x18;
    } while (1 < (int)uVar1);
  }
  return uVar1;
}

/* ref: FUN_00967560 */
uint F_00967560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967560u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = param_2 - param_1 & 0xfffffff0;
  if (0x10 < (int)uVar1) {
    puVar2 = (undefined4 *)(param_2 + -8);
    do {
      (*(undefined4 *)(gen_frame + 0x10)) = puVar2[-1];
      puVar2[-1] = *(undefined4 *)(param_1 + 4);
      (*(undefined4 *)(gen_frame + 0x14)) = *puVar2;
      (*(undefined4 *)(gen_frame + 0x18)) = puVar2[1];
      *puVar2 = *(undefined4 *)(param_1 + 8);
      puVar2[1] = *(undefined4 *)(param_1 + 0xc);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d58));
      uVar1 = F_009521b0(param_1,0,(-8 - param_1) + (int)((int)(uintptr_t)puVar2) >> 4,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),param_3);
      puVar2 = puVar2 + -4;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
    } while (0x10 < (int)((8 - param_1) + (int)puVar2 & 0xfffffff0U));
  }
  return uVar1;
}

/* ref: FUN_00967600 */
uint F_00967600(unsigned int gen_a0)
{
  GEN_ENTER(0x967600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x10d8290));
  F_009546c0((undefined *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),8,0x137);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  return (uint)uVar1;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::vf4 */
unsigned int F_00967640(void)
{
  GEN_ENTER(0x967640u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::vf6 */
byte F_00967650(void)
{
  GEN_ENTER(0x967650u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::vf7 */
byte F_00967660(void)
{
  GEN_ENTER(0x967660u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::vf8 */
byte F_00967670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::vf9 */
uint F_00967680(void)
{
  GEN_ENTER(0x967680u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::vf10 */
uint F_00967690(void)
{
  GEN_ENTER(0x967690u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_009676f0 */
uint F_009676f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9676f0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_00967700 */
uint F_00967700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967700u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_00967710 */
uint F_00967710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967710u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::vf3 */
uint F_00967730(unsigned int gen_a0)
{
  GEN_ENTER(0x967730u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::vf5 */
uint F_00967740(unsigned int gen_a0)
{
  GEN_ENTER(0x967740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: FUN_00967790 */
unsigned int F_00967790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967790u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009677d0 */
unsigned int F_009677d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9677d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00967800 */
uint F_00967800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967800u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00967820 */
unsigned int F_00967820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967820u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00967860 */
unsigned int F_00967860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967860u, gen_a0, gen_a1, gen_a2, 0u);
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
  return 0;
}

/* ref: FUN_009678a0 */
unsigned int F_009678a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9678a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009678d0 */
uint F_009678d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9678d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009678f0 */
uint F_009678f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9678f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00967940 */
unsigned int F_00967940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967940u, gen_a0, gen_a1, gen_a2, 0u);
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
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::vf1 */
byte F_00967980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  if (*(uint *)(this + 0x14) <= param_1) {
    return 0;
  }
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)(this + 4) != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)(this + 4))), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  uVar2 = *(int *)(this + 0x10) + param_1;
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int * PTR32 *)*piVar3, piVar3 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  if (*(uint *)(iVar4 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar4 + 8);
  }
  return *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4))) + 0x134))) == 1;
}

/* ref: FUN_009679e0 */
uint F_009679e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9679e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::vf2 */
uint F_00967a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  if (*(uint *)(this + 0x14) <= param_1) {
    return 0;
  }
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)(this + 4) != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)(this + 4))), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  uVar2 = *(int *)(this + 0x10) + param_1;
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int * PTR32 *)*piVar3, piVar3 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  if (*(uint *)(iVar4 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar4 + 8);
  }
  return *((uint *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4)));
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::vf0 */
uint F_00967a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10d8290));
  F_009546c0(this + 4);
  F_00429760(*(undefined4 *)(this + 4),8,0x137);
  *(undefined4 *)(this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00967ae0 */
uint F_00967ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x967ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00954780(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: Client::UI2::Agent::AgentConfigLogColor::vf0 */
uint F_00967b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
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

/* ref: FUN_00967b60 */
uint F_00967b60(unsigned int gen_a0)
{
  GEN_ENTER(0x967b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009555d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00967ba0 */
uint F_00967ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x967ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00955530(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00967be0 */
uint F_00967be0(unsigned int gen_a0)
{
  GEN_ENTER(0x967be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00954ba0(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00967c10 */
uint F_00967c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0096d3d0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00967c20 */
uint F_00967c20(unsigned int gen_a0)
{
  GEN_ENTER(0x967c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00955290(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00967c60 */
uint F_00967c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0096d440((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00967c70 */
uint F_00967c70(unsigned int gen_a0)
{
  GEN_ENTER(0x967c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  F_0042c880((undefined *)((int)this + 0x1d0));
  F_0042c880((undefined *)((int)this + 0x17c));
  F_0042c880((undefined *)((int)this + 0x128));
  uVar1 = F_008b78b0((undefined *)((int)this + 0x10));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: FUN_00967ce0 */
uint F_00967ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x967ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00955350(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x40,400);
  return (uint)uVar1;
}

/* ref: FUN_00967d20 */
uint F_00967d20(unsigned int gen_a0)
{
  GEN_ENTER(0x967d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00955490(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,400);
  return (uint)uVar1;
}

/* ref: FUN_00967d60 */
uint F_00967d60(unsigned int gen_a0)
{
  GEN_ENTER(0x967d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9624) =
       (*(undefined * PTR32 (*)[11])REFP(0x10d8290));
  F_009546c0((undefined *)((int)this + 0x9628));
  F_00429760(*(undefined4 *)((int)this + 0x9628),8,0x137);
  *(undefined4 *)((int)this + 0x9628) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9624) =
       (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6418) =
       (*(undefined * PTR32 (*)[11])REFP(0x10c3ea0));
  if (*(int *)((int)this + 0x9620) != 0) {
    F_00406b30(*(int *)((int)this + 0x9620));
    *(undefined4 *)((int)this + 0x9620) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6418) =
       (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x320c) =
       (*(undefined * PTR32 (*)[11])REFP(0x10c3ea0));
  if (*(int *)((int)this + 0x6414) != 0) {
    F_00406b30(*(int *)((int)this + 0x6414));
    *(undefined4 *)((int)this + 0x6414) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x320c) =
       (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x10c3ea0));
  uVar1 = 0;
  if (*(int *)((int)this + 0x3208) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x3208));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x3208) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  return uVar1;
}

/* ref: Client::UI2::AddonHudLayoutScreen::vf0 */
uint F_00967e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008b1df0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankOrderEdit::vf0 */
uint F_00967e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008b2030(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonChatLog::vf0 */
uint F_00967e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008b2720(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00967ec0 */
uint F_00967ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009629c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSupportSubList::vf0 */
uint F_00967ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008b64d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSupportSubEdit::vf0 */
uint F_00967f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008b6600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSupportSubView::vf0 */
uint F_00967f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008b6740(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00967f80 */
uint F_00967f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x967f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00963610(this,1);
  }
  iVar2 = *(int *)((int)this + 0xc);
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 8);
  }
  iVar2 = iVar2 + -1;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0xa8,0,400);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + iVar2 * 4);
  if (this_00 != (undefined *)0x0) {
    F_0042cbc0(this_00,param_1);
    uVar1 = F_0042cbc0((undefined *)((int)this_00 + 0x54),param_1 + 0x54);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(int *)((int)this + 0xc) = iVar2;
  return uVar1;
}

/* ref: FUN_00968000 */
uint F_00968000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x968000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)0x0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    piVar1 = *(int * PTR32 *)*param_2;
  }
  uVar3 = 0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*piVar1;
  }
  uVar2 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_2;
  }
  F_00963430(this,param_1,uVar2,0,param_4,uVar3,0,param_4 + 1);
  return param_1;
}

/* ref: FUN_00968080 */
uint F_00968080(unsigned int gen_a0)
{
  GEN_ENTER(0x968080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_009680d0 */
uint F_009680d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9680d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_009637a0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00968100 */
uint F_00968100(unsigned int gen_a0)
{
  GEN_ENTER(0x968100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00963870(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00968130 */
uint F_00968130(unsigned int gen_a0)
{
  GEN_ENTER(0x968130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  
  pvVar3 = *(undefined * PTR32 *)((int)this + 4);
  if (*(undefined * PTR32 *)this != pvVar3) {
    puVar2 = (undefined4 *)F_009564e0(pvVar3,pvVar3,*(undefined * PTR32 *)this);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (puVar4 = puVar2; puVar4 != puVar1; puVar4 = puVar4 + 4) {
      ((code *)*(gen_code32 *)*puVar4)(puVar4,0);
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
    pvVar3 = this;
  }
  return (uint)pvVar3;
}

/* ref: FUN_00968180 */
uint F_00968180(unsigned int gen_a0)
{
  GEN_ENTER(0x968180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint in_EAX = 0;
  ulonglong uVar2;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    uVar2 = F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x34) * 0x34,400);
    in_EAX = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return in_EAX;
}

/* ref: FUN_009681d0 */
uint F_009681d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9681d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00968260 */
unsigned int F_00968260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x968260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 3U) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    F_00963a60(this,1);
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
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) + (uVar3 & 3) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return 0;
}

/* ref: FUN_00968320 */
uint F_00968320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x968320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00963be0(this,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(200,0,400);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + uVar2 * 4);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00916ea0(this_00,param_1);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar1;
}

/* ref: FUN_00968390 */
uint F_00968390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x968390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  uVar1 = *(int *)((int)this + 0x10) + 1;
  if (*(uint *)((int)this + 8) <= uVar1) {
    uVar1 = F_00963d50(this,1);
  }
  iVar2 = *(int *)((int)this + 0xc);
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 8);
  }
  uVar3 = iVar2 - 1;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) == 0) {
    uVar1 = F_004296a0(0x20,0,400);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) = uVar1;
  }
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
  if (puVar4 != (undefined4 *)0x0) {
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    *(uint *)((int)this + 0xc) = uVar3;
    return uVar3;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(uint *)((int)this + 0xc) = uVar3;
  return uVar1;
}

/* ref: FUN_00968410 */
unsigned int F_00968410(unsigned int gen_a0)
{
  GEN_ENTER(0x968410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xd) * 0xd,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00968460 */
unsigned int F_00968460(unsigned int gen_a0)
{
  GEN_ENTER(0x968460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = *(int *)this;
  }
  return 0;
}

/* ref: FUN_009684a0 */
unsigned int F_009684a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9684a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 3) * 3,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_009684f0 */
unsigned int F_009684f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9684f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = *(int *)this;
  }
  return 0;
}

/* ref: FUN_00968520 */
uint F_00968520(unsigned int gen_a0)
{
  GEN_ENTER(0x968520u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00968590 */
uint F_00968590(unsigned int gen_a0)
{
  GEN_ENTER(0x968590u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00968600 */
unsigned int F_00968600(unsigned int gen_a0)
{
  GEN_ENTER(0x968600u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00968650 */
unsigned int F_00968650(unsigned int gen_a0)
{
  GEN_ENTER(0x968650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = *(int *)this;
  }
  return 0;
}

/* ref: FUN_00968710 */
uint F_00968710(unsigned int gen_a0)
{
  GEN_ENTER(0x968710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00962e00(this);
  uVar1 = F_00429760(*(undefined4 *)this,0xbc,400);
  return (uint)uVar1;
}

/* ref: FUN_00968730 */
uint F_00968730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x968730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = F_0095c770(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(iVar1 + 4) = uVar2;
  **(uint * PTR32 *)(uVar2 + 4) = uVar2;
  return uVar2;
}

/* ref: FUN_00968780 */
uint F_00968780(unsigned int gen_a0)
{
  GEN_ENTER(0x968780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0095c7e0(this);
  uVar1 = F_00429760(*(undefined4 *)this,0x6c,400);
  return (uint)uVar1;
}

/* ref: FUN_009687a0 */
uint F_009687a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9687a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0095c830(this);
  uVar1 = F_00429760(*(undefined4 *)this,100,400);
  return (uint)uVar1;
}

/* ref: FUN_009687c0 */
uint F_009687c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9687c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00964250(this,*(undefined4 *)this,param_1);
  return uVar1;
}

/* ref: FUN_009687e0 */
uint F_009687e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9687e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0095c8d0(this);
  uVar1 = F_00429760(*(undefined4 *)this,0x68,400);
  return (uint)uVar1;
}

/* ref: FUN_00968800 */
uint F_00968800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x968800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009642f0(this,*(undefined4 *)this,param_1);
  return uVar1;
}

/* ref: FUN_00968820 */
unsigned int F_00968820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x968820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009643f0(this,1);
    }
    param_1 = ((undefined4 *)GEN_TOP((((int)param_1 - (int)puVar2 & 0xfffffff0U) + *(int *)this)));
  }
  else if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
    F_009643f0(this,1);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x10;
  return 0;
}

/* ref: FUN_009688d0 */
unsigned int F_009688d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9688d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00968920 */
uint F_00968920(unsigned int gen_a0)
{
  GEN_ENTER(0x968920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this != uVar1) {
    uVar1 = F_0094cc20(uVar1,uVar1,*(uint *)this);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00968940 */
unsigned int F_00968940(unsigned int gen_a0)
{
  GEN_ENTER(0x968940u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00968990 */
uint F_00968990(unsigned int gen_a0)
{
  GEN_ENTER(0x968990u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00968a00 */
uint F_00968a00(unsigned int gen_a0)
{
  GEN_ENTER(0x968a00u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00968a70 */
uint F_00968a70(unsigned int gen_a0)
{
  GEN_ENTER(0x968a70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00968ae0 */
uint F_00968ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x968ae0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00968b50 */
uint F_00968b50(unsigned int gen_a0)
{
  GEN_ENTER(0x968b50u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00968bc0 */
uint F_00968bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x968bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar4 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400);
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
      F_00429760(iVar2,(*(int *)((int)this + 8) - iVar2 >> 2) * 4,400);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = param_1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return (uint)param_1;
}

/* ref: FUN_00968c70 */
unsigned int F_00968c70(unsigned int gen_a0)
{
  GEN_ENTER(0x968c70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00968cc0 */
uint F_00968cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x968cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this != uVar1) {
    uVar1 = F_0093fc00(uVar1,uVar1,*(uint *)this,this);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00968cf0 */
uint F_00968cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x968cf0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00968d60 */
uint F_00968d60(unsigned int gen_a0)
{
  GEN_ENTER(0x968d60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00968dd0 */
unsigned int F_00968dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x968dd0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00968e60 */
uint F_00968e60(unsigned int gen_a0)
{
  GEN_ENTER(0x968e60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00968ed0 */
unsigned int F_00968ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x968ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00964b20(this,1);
    }
    param_1 = ((undefined4 *)GEN_TOP(((((int)param_1 - (int)puVar1) / 0x54) * 0x54 + *(int *)this)));
  }
  else if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
    F_00964b20(this,1);
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
  return 0;
}

/* ref: FUN_00968f40 */
unsigned int F_00968f40(unsigned int gen_a0)
{
  GEN_ENTER(0x968f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = *(int *)this;
  }
  return 0;
}

/* ref: FUN_00968f90 */
uint F_00968f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x968f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00964bf0(this,1);
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
      F_00964bf0(this,1);
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

/* ref: FUN_00969050 */
uint F_00969050(unsigned int gen_a0)
{
  GEN_ENTER(0x969050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this != uVar1) {
    uVar1 = F_0093f7f0(uVar1,uVar1,*(uint *)this,this);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_009690c0 */
unsigned int F_009690c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9690c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00969190 */
unsigned int F_00969190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x969190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00964d70(this,1);
    }
    param_1 = ((undefined4 *)GEN_TOP((((int)param_1 - (int)puVar2 & 0xfffffff0U) + *(int *)this)));
  }
  else if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
    F_00964d70(this,1);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x10;
  return 0;
}

/* ref: FUN_00969250 */
unsigned int F_00969250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x969250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x68) < param_1) {
    uVar3 = F_004296a0(param_1 * 0x68,0,0x2c0);
    F_00958180(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,param_1)
    ;
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != (undefined *)0x0) {
      for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x68)) {
        F_0042c880(this_00);
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x68) * 0x68,0x2c0);
    }
    *(uint *)((int)this + 4) = (((int)pvVar1 - iVar2) / 0x68) * 0x68 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x68 + uVar3;
    *(uint *)this = uVar3;
  }
  return 0;
}

/* ref: FUN_00969350 */
unsigned int F_00969350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x969350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x6c) < param_1) {
    uVar3 = F_004296a0(param_1 * 0x6c,0,0x2c0);
    F_009581e0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,param_1)
    ;
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != (undefined *)0x0) {
      for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x6c)) {
        F_0042c880(this_00);
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x6c) * 0x6c,0x2c0);
    }
    *(uint *)((int)this + 4) = (((int)pvVar1 - iVar2) / 0x6c) * 0x6c + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x6c + uVar3;
    *(uint *)this = uVar3;
  }
  return 0;
}

/* ref: FUN_00969440 */
uint F_00969440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x969440u, gen_a0, gen_a1, 0u, 0u);
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
      puVar4 = (undefined4 *)F_00964f50(this,1);
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
      F_00964f50(this,1);
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

/* ref: FUN_009694f0 */
unsigned int F_009694f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9694f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00969540 */
uint F_00969540(unsigned int gen_a0)
{
  GEN_ENTER(0x969540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this != uVar1) {
    uVar1 = F_0093ff10(uVar1,uVar1,*(uint *)this,this);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar1;
}

/* ref: QueueImplement_AddonScreenInfo_UI2_Client::vf0 */
uint F_009695b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9695b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10d8474));
  F_0095c260((undefined *)((int)this + 4));
  F_00429760(*(undefined4 *)((int)this + 4),0x110,400);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00969600 */
uint F_00969600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x969600u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00969650 */
unsigned int F_00969650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x969650u, gen_a0, gen_a1, 0u, 0u);
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
      F_00965050(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00965050(this,uVar1);
  }
  return 0;
}

/* ref: FUN_009696e0 */
uint F_009696e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9696e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  undefined * this_00;
  undefined * this_01;
  
  if (param_2 != param_3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = param_2;
    for (; param_3 != pvVar1; param_3 = (undefined *)((int)param_3 + 0x58)) {
      F_0042ccf0(this_00,param_3);
      *(undefined4 *)((int)this_00 + 0x54) = *(undefined4 *)((int)param_3 + 0x54);
      this_00 = (undefined *)((int)this_00 + 0x58);
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (this_01 = this_00; this_01 != pvVar1; this_01 = (undefined *)((int)this_01 + 0x58)) {
      F_0042c880(this_01);
    }
    *(undefined * PTR32 *)((int)this + 4) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00969760 */
uint F_00969760(unsigned int gen_a0)
{
  GEN_ENTER(0x969760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x58)) {
      F_0042c880(this_00);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x58) * 0x58,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_009697c0 */
uint F_009697c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9697c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  undefined * this_00;
  undefined * this_01;
  
  if (param_2 != param_3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = param_2;
    for (; param_3 != pvVar1; param_3 = (undefined *)((int)param_3 + 0x54)) {
      F_0042ccf0(this_00,param_3);
      this_00 = (undefined *)((int)this_00 + 0x54);
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (this_01 = this_00; this_01 != pvVar1; this_01 = (undefined *)((int)this_01 + 0x54)) {
      F_0042c880(this_01);
    }
    *(undefined * PTR32 *)((int)this + 4) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00969840 */
uint F_00969840(unsigned int gen_a0)
{
  GEN_ENTER(0x969840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x54)) {
      F_0042c880(this_00);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x54) * 0x54,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_009698a0 */
uint F_009698a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9698a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00965190(this,1);
  }
  uVar4 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,400);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) = uVar2;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[uVar4]));
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
    puVar3 = param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return (uint)puVar3;
}

/* ref: FUN_00969920 */
unsigned int F_00969920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x969920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xd;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xd;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_00965300(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00965300(this,uVar1);
  }
  return 0;
}

/* ref: FUN_009699b0 */
uint F_009699b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9699b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 3;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 3;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_009653c0(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_009653c0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00969a30 */
uint F_00969a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x969a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != param_3) {
    uVar2 = F_0093f8e0(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    uVar1 = *(uint *)((int)this + 4);
    for (uVar3 = uVar2; uVar3 != uVar1; uVar3 = uVar3 + 0x60) {
      F_0042c880((undefined *)(uVar3 + 8));
    }
    *(uint *)((int)this + 4) = uVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00969aa0 */
uint F_00969aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x969aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    iVar1 = *(int *)((int)this + 4);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x60) {
      F_0042c880((undefined *)(iVar2 + 8));
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x60) * 0x60,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00969b00 */
unsigned int F_00969b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x969b00u, gen_a0, gen_a1, 0u, 0u);
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
      F_009654c0(this,uVar2);
      return 0;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    F_009654c0(this,uVar2);
  }
  return 0;
}

/* ref: FUN_00969b70 */
unsigned int F_00969b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x969b70u, gen_a0, gen_a1, 0u, 0u);
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
      F_00965560(this,uVar2);
      return 0;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    F_00965560(this,uVar2);
  }
  return 0;
}

/* ref: FUN_00969be0 */
unsigned int F_00969be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x969be0u, gen_a0, gen_a1, 0u, 0u);
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
      F_00965600(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00965600(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00969c60 */
uint F_00969c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x969c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  if (param_2 != param_3) {
    uVar3 = F_0093f9f0(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    uVar2 = *(uint *)((int)this + 4);
    if (uVar3 != uVar2) {
      this_00 = (undefined *)(uVar3 + 0x18);
      do {
        F_0042c880((undefined *)((int)this_00 + 0x68));
        F_00560340(this_00);
        uVar1 = (int)this_00 + 0xbc;
        this_00 = (undefined *)((int)this_00 + 0xd4);
      } while (uVar1 != uVar2);
    }
    *(uint *)((int)this + 4) = uVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00969ce0 */
uint F_00969ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x969ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    iVar1 = *(int *)((int)this + 4);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0xd4) {
      F_0042c880((undefined *)(iVar2 + 0x80));
      F_00560340((undefined *)(iVar2 + 0x18));
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0xd4) * 0xd4,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00969d50 */
unsigned int F_00969d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x969d50u, gen_a0, gen_a1, 0u, 0u);
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
      F_00965700(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00965700(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00969de0 */
unsigned int F_00969de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x969de0u, gen_a0, gen_a1, 0u, 0u);
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
      F_009657d0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_009657d0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00969e70 */
uint F_00969e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x969e70u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_009658a0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009658a0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00969ee0 */
uint F_00969ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x969ee0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00965940(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00965940(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00969f50 */
uint F_00969f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x969f50u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_009659e0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009659e0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00969fc0 */
uint F_00969fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x969fc0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00965a80(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00965a80(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096a030 */
uint F_0096a030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96a030u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00965b20(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00965b20(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096a0a0 */
uint F_0096a0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96a0a0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00968bc0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00968bc0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096a110 */
unsigned int F_0096a110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96a110u, gen_a0, gen_a1, 0u, 0u);
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
      F_00965bc0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00965bc0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_0096a1a0 */
uint F_0096a1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96a1a0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00965c90(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00965c90(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096a210 */
uint F_0096a210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96a210u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00965d30(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00965d30(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096a280 */
unsigned int F_0096a280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96a280u, gen_a0, gen_a1, 0u, 0u);
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
      F_00965dd0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00965dd0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_0096a300 */
uint F_0096a300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96a300u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00965e90(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00965e90(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096a370 */
unsigned int F_0096a370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x96a370u, gen_a0, gen_a1, 0u, 0u);
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
      F_00965f40(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00965f40(this,uVar1);
  }
  return 0;
}

/* ref: FUN_0096a3f0 */
uint F_0096a3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x96a3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  if (param_2 != param_3) {
    uVar3 = F_0093fd60(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    uVar2 = *(uint *)((int)this + 4);
    if (uVar3 != uVar2) {
      this_00 = (undefined *)(uVar3 + 0x14);
      do {
        F_0042c880((undefined *)((int)this_00 + 0x54));
        F_0042c880(this_00);
        uVar1 = (int)this_00 + 0xac;
        this_00 = (undefined *)((int)this_00 + 0xc0);
      } while (uVar1 != uVar2);
    }
    *(uint *)((int)this + 4) = uVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

