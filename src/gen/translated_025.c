#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_005445a0 */
byte F_005445a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5445a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00543da0(param_1,param_2,1,1);
  return bVar1;
}

/* ref: FUN_005445c0 */
byte F_005445c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5445c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00543da0(param_1,param_2,0,0);
  return bVar1;
}

/* ref: FUN_005445e0 */
uint F_005445e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5445e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  bVar2 = F_00a9f620(*(undefined4 *)((int)this + 8));
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((bVar2 != 0) && (*(char *)((int)this + 0x3c) != '\0')) {
    uVar1 = *(undefined4 *)((int)this + 8);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c97c));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(float *)(gen_frame + 0x30)) = 0.0;
    (*(float *)(gen_frame + 0x34)) = 0.0;
    (*(float *)(gen_frame + 0x38)) = 0.0;
    (*(float *)(gen_frame + 0x40)) = 0.0;
    bVar2 = F_00543da0(uVar1,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0);
    if (bVar2 != 0) {
      uVar1 = *(undefined4 *)((int)this + 8);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (*(undefined * PTR32 (*)[1])REFP(0x109c974));
      (*(undefined2 *)(gen_frame + 0x58)) = 1;
      (*(undefined1 *)(gen_frame + 0x5a)) = 0;
      (*(undefined2 *)(gen_frame + 0x5b)) = 1;
      F_00a9f980(uVar1,(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(float *)(gen_frame + 0x40)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)));
    }
    *(undefined1 *)((int)this + 0x3c) = 0;
    uVar3 = F_00538d00(this);
  }
  return uVar3;
}

/* ref: FUN_005446c0 */
byte F_005446c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5446c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  if ((*(int *)((int)this + 0x18) != 0) &&
     (uVar2 = F_00aa02d0(*(undefined * PTR32 *)((int)this + 0x10),param_1,0), (char)uVar2 == '\0')) {
    uVar2 = *(uint *)((int)this + 0x14);
    uVar3 = *(uint *)((int)this + 100);
    uVar1 = *(uint *)((int)this + 0x18);
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*(undefined1 *)((int)this + 0x60));
    do {
      if (uVar2 == uVar1) {
        return 0;
      }
      if (((char)local_8 != '\0') && (uVar2 == uVar3)) {
        local_8 = local_8 & 0xffffff00;
      }
      uVar2 = F_0053fa10(uVar2,uVar1,uVar3,local_8,1);
      if (((char)local_8 == '\0') && (uVar3 != 0)) {
        uVar3 = 0;
      }
    } while (*(int *)((int)this + uVar2 * 4 + 0x1c) != param_1);
    return 1;
  }
  return 0;
}

/* ref: FUN_00544750 */
uint F_00544750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x544750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x14) = param_1;
  uVar2 = F_0053fe90(this,uVar1,param_1);
  return uVar2;
}

/* ref: FUN_00544770 */
unsigned int F_00544770(unsigned int gen_a0)
{
  GEN_ENTER(0x544770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float * pfVar7;
  float * pfVar8;
  undefined * this_00;
  int iVar9;
  float * pfVar10;
  bool bVar11;
  float10 fVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0);
  (*(undefined * PTR32 *)(gen_frame + 0x6c)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = *(undefined * PTR32 *)((int)this + 0x50);
  if ((*(int *)((int)this + 0x58) == 2) || (*(char *)((int)this + 0xc4) != '\0')) {
    (*(float *)(gen_frame + 0x30)) = *(float *)((int)this + 0xa0);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x34)) = *(undefined * PTR32 * PTR32 *)((int)this + 0xa4);
    fVar1 = *(float *)((int)this + 0xa8);
    pfVar7 = (float *)((int)this + 0x240);
    pfVar10 = ((float *)(gen_frame + 0x70));
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar10 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar10 = pfVar10 + 1;
    }
    (*(float *)(gen_frame + 0x38)) = fVar1;
    (*(undefined4 *)(gen_frame + 0xa0)) = 0;
    (*(undefined4 *)(gen_frame + 0xa4)) = 0;
    (*(undefined4 *)(gen_frame + 0xa8)) = 0;
    F_004eea10(&(*(float *)(gen_frame + 0x30)),(uint)((float *)(gen_frame + 0x70)));
    this = (*(undefined * PTR32 *)(gen_frame + 0x6c));
  }
  else {
    if ((*(int *)((int)this + 0x20) == 1) || (*(int *)((int)this + 0x20) == 4)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    (*(float *)(gen_frame + 0x30)) = 0.0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x34)) = (undefined * PTR32 *)0x0;
    (*(float *)(gen_frame + 0x38)) = *(float *)((int)this + 0x90);
    (*(float *)(gen_frame + 0x58)) = *(float *)((int)this + 100);
    fVar1 = *(float *)((int)this + 0x68);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    (*(float *)(gen_frame + 0x5c)) = fVar1;
    if (bVar11) {
      F_0053a190(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)));
    }
    F_00535740(&(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x5c)),(float)(float10)0);
    fVar12 = ((float10)GEN_TOD(fsin((float10)(*(float *)(gen_frame + 0x58)))));
    fVar1 = (float)fVar12;
    (*(float *)(gen_frame + 0x4c)) = fVar1;
    (*(undefined * PTR32 *)(gen_frame + 0x6c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar1)));
    fVar12 = ((float10)GEN_TOD(fcos((float10)(*(float *)(gen_frame + 0x58)))));
    fVar2 = (float)fVar12;
    (*(float *)(gen_frame + 0x4c)) = fVar2;
    ((float *)(gen_frame + 0x70))[0] = fVar2;
    ((float *)(gen_frame + 0x70))[1] = 0.0;
    (*(undefined4 *)(gen_frame + 0x80)) = 0;
    ((float *)(gen_frame + 0x70))[2] = ((float)GEN_TOF(-(float10)fVar1));
    (*(undefined4 *)(gen_frame + 0x84)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    (*(float *)(gen_frame + 0x90)) = fVar1;
    (*(undefined4 *)(gen_frame + 0x94)) = 0;
    (*(undefined4 *)(gen_frame + 0xa0)) = 0;
    (*(float *)(gen_frame + 0x98)) = fVar2;
    (*(undefined4 *)(gen_frame + 0xa4)) = 0;
    (*(undefined4 *)(gen_frame + 0xa8)) = 0;
    F_004eea10(&(*(float *)(gen_frame + 0x30)),(uint)((float *)(gen_frame + 0x70)));
  }
  (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0x30));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x34));
  (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x38));
  fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x38)) * (float10)(*(float *)(gen_frame + 0x38)) +
                 ((float10)(*(float *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x30)) +
                 (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 * PTR32 *)(gen_frame + 0x34))))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 * PTR32 *)(gen_frame + 0x34)))))))));
  (*(undefined * PTR32 *)(gen_frame + 0x6c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar1)));
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(undefined * PTR32 *)(gen_frame + 0x6c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar1)));
  fVar12 = (float10)fVar1;
  bVar11 = GEN_ISNAN(fVar12) || GEN_ISNAN((float10)0);
  if (bVar11 == (bVar11 || fVar12 == (float10)0)) {
    F_004bd580(&(*(float *)(gen_frame + 0x50)));
    fVar12 = (float10)REFG(double, 0x10944b8);
    (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x50)) * fVar12);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = ((undefined * PTR32 *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54))))) * fVar12))));
    (*(float *)(gen_frame + 0x58)) = (float)(fVar12 * (float10)(*(float *)(gen_frame + 0x58)));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x6c)) = (undefined *)*(undefined4 *)((int)this + 0x54);
  if (*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x10) == (undefined *)0x0) {
    pfVar7 = (float *)&REFG(float, 0x1375ac0);
  }
  else {
    pfVar7 = (float *)F_00a5fef0(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x10));
  }
  pfVar8 = (float *)F_00541e80((*(undefined * PTR32 *)(gen_frame + 0x2c)),((undefined1 *)(gen_frame + 0x0)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
  fVar1 = *pfVar7;
  fVar2 = *pfVar8;
  uVar13 = *(undefined4 *)((int)this + 0x54);
  pfVar10 = &(*(float *)(gen_frame + 0x10));
  (*(float *)(gen_frame + 0x30)) = (float)((float10)fVar1 + (float10)fVar2);
  fVar3 = pfVar8[1];
  fVar4 = pfVar7[1];
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x34)) = ((undefined * PTR32 *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar3 + (float10)fVar4))));
  fVar5 = pfVar8[2];
  fVar6 = pfVar7[2];
  (*(float *)(gen_frame + 0x38)) = (float)((float10)fVar5 + (float10)fVar6);
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)(float)((float10)fVar1 + (float10)fVar2) + (float10)(*(float *)(gen_frame + 0x50)))));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(float)((float10)fVar3 + (float10)fVar4) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54))))))));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)(float)((float10)fVar5 + (float10)fVar6) + (float10)(*(float *)(gen_frame + 0x58)))));
  this_00 = (undefined *)F_00a5f500(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x10));
  F_00688e60(this_00,uVar13,pfVar10);
  F_00c47745((*(uint *)(gen_frame + 0xbc)) ^ (uint)(uint)(gen_frame + 0xc0));
  return 0;
}

/* ref: FUN_00544a60 */
uint F_00544a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x544a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  iVar1 = *(int *)((int)this + 0x20);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  if ((iVar1 == 1) || (iVar1 == 4)) {
    F_00541d00(*(undefined * PTR32 *)((int)this + 0x50),&(*(undefined4 *)(gen_frame + 0x20)),*(undefined4 *)((int)this + 0x54));
  }
  else {
    iVar1 = *(int *)((int)this + 0x54);
    this_00 = *(undefined * PTR32 *)((int)this + 0x50);
    F_00541bc0(this_00,&(*(undefined4 *)(gen_frame + 0x20)),iVar1);
    puVar4 = (undefined4 *)(iVar1 * 0x300 + 0x2a0 + (int)this_00);
    puVar5 = ((undefined4 *)(gen_frame + 0x30));
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    F_004f03f0(((undefined4 *)(gen_frame + 0x30)));
    F_004eea10(&(*(undefined4 *)(gen_frame + 0x20)),(uint)((undefined4 *)(gen_frame + 0x30)));
    this = (*(undefined * PTR32 *)(gen_frame + 0x10));
  }
  (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)(gen_frame + 0x20));
  (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x24));
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x28));
  uVar2 = F_00535480(&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x1c)));
  *(undefined4 *)((int)this + 100) = (*(undefined4 *)(gen_frame + 0x18));
  *(undefined4 *)((int)this + 0x68) = (*(undefined4 *)(gen_frame + 0x1c));
  if ((char)param_1 != '\0') {
    uVar2 = F_00539e30(this,(float)(float10)1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return uVar2;
}

/* ref: FUN_00544b80 */
uint F_00544b80(unsigned int gen_a0)
{
  GEN_ENTER(0x544b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  uint in_EAX = 0;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)((int)this + 0x58) == 0) {
    return in_EAX;
  }
  pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x50) + 0x10)));
  uVar5 = *(uint *)((int)this + 0x54);
  if ((pvVar2 == (undefined *)0x0) || (pvVar2 = (undefined *)F_00a5f500(pvVar2), pvVar2 == (undefined *)0x0)) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = F_00689180(pvVar2,&REFG(undefined, 0x109c898));
  }
  if (uVar5 == uVar3) {
    if (*(int *)((int)this + 0x54) == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)((int)this + 0x54) + -1;
    }
    (*(float *)(gen_frame + 0x6c)) = 0.0;
    if (iVar4 != -1) {
      F_00541bc0(*(undefined * PTR32 *)((int)this + 0x50),((undefined1 *)(gen_frame + 0x50)),iVar4);
      F_00535480(((undefined1 *)(gen_frame + 0x50)),0,&(*(float *)(gen_frame + 0x68)));
      (*(float *)(gen_frame + 0x6c)) = (*(float *)(gen_frame + 0x68));
    }
    F_00541bc0(*(undefined * PTR32 *)((int)this + 0x50),((undefined1 *)(gen_frame + 0x50)),*(undefined4 *)((int)this + 0x54));
    F_00535480(((undefined1 *)(gen_frame + 0x50)),0,&(*(float *)(gen_frame + 0x68)));
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x50) + 0x10)));
    (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)(gen_frame + 0x6c)));
    if (pvVar2 == (undefined *)0x0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = (undefined *)F_00a5f290(pvVar2);
    }
    if ((float10)(*(float *)(gen_frame + 0x68)) < (float10)*(float *)&REFG(undefined, 0x1305cbc)) {
      fVar1 = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)*(float *)&REFG(undefined, 0x1305cbc));
      (*(float *)(gen_frame + 0x68)) = fVar1;
      fVar1 = ((float)GEN_TOF(ABS((float10)fVar1)));
      (*(float *)(gen_frame + 0x68)) = fVar1;
      fVar1 = (float)((float10)fVar1 / (float10)*(float *)&REFG(undefined, 0x1305cc0));
      (*(float *)(gen_frame + 0x6c)) = fVar1;
      if ((float10)1 < (float10)fVar1) {
        (*(float *)(gen_frame + 0x6c)) = REFG(float, 0x1087f04);
      }
      uVar5 = F_00aa02d0(pvVar2,0x25b,1);
      if ((char)uVar5 == '\0') {
        F_0054f5b0(((undefined1 *)(gen_frame + 0x0)));
        (*(float *)(gen_frame + 0x2c)) = (*(float *)(gen_frame + 0x6c));
        uVar5 = F_00aa4270(pvVar2,0x25b,((undefined1 *)(gen_frame + 0x0)),1);
        return uVar5;
      }
      uVar5 = F_00ab2a20(0x25b);
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar5 = F_00aa0520(pvVar2,(uint)*(byte *)(uVar5 + 7),(*(float *)(gen_frame + 0x6c)),1);
        return uVar5;
      }
    }
    else {
      uVar3 = F_00aa01d0(pvVar2,0x25b,1);
    }
  }
  return uVar3;
}

/* ref: FUN_00544d30 */
byte F_00544d30(unsigned int gen_a0)
{
  GEN_ENTER(0x544d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  
  if (((*(char *)((int)this + 0xc4) != '\0') || (*(int *)((int)this + 0x58) != 1)) ||
     (*(char *)((int)this + 0x5c) == '\0')) {
    return 1;
  }
  if ((*(float *)&REFG(undefined, 0x1088114) < *(float *)((int)this + 0xcc)) &&
     (*(float *)((int)this + 0xcc) < REFG(float, 0x1087f04))) {
    bVar3 = true;
  }
  else {
    (*(undefined1 *)(gen_frame + 0x2b)) = 0;
    bVar3 = false;
  }
  F_005404e0(this,((byte *)(gen_frame + 0x8)));
  F_005405e0(this,((undefined1 *)(gen_frame + 0x14)));
  (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1087f04);
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x1c)) * (float10)(*(float *)(gen_frame + 0x1c)) + (float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0x24)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x24)) = fVar1;
  bVar4 = GEN_ISNAN((float10)fVar1) || GEN_ISNAN((float10)0);
  if (bVar4 == (bVar4 || (float10)fVar1 == (float10)0)) {
    fVar2 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8))))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8))))) +
                   ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4))))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4))))))));
    (*(float *)(gen_frame + 0x20)) = fVar2;
    fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
    (*(float *)(gen_frame + 0x20)) = fVar2;
    fVar1 = (float)((float10)fVar2 / (float10)fVar1);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar1 = ((float)GEN_TOF(ABS((float10)fVar1)));
    (*(float *)(gen_frame + 0x20)) = fVar1;
  }
  if ((!(*(double *)&REFG(undefined, 0x1094818) <= (double)(*(float *)(gen_frame + 0x20)))) && (!bVar3)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00544e30 */
unsigned int F_00544e30(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x544e30u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  gen_args[3] = gen_a3;
  float fVar1;
  
  if (*(char *)((*(int *)&gen_args[0]) + 0xc4) != (char)(*(uint *)&gen_args[1])) {
    *(char *)((*(int *)&gen_args[0]) + 0xc4) = (char)(*(uint *)&gen_args[1]);
    *(uint *)((*(int *)&gen_args[0]) + 200) = -(uint)((char)(*(uint *)&gen_args[1]) != '\0') & (*(uint *)&gen_args[3]);
    if (*(int *)((*(int *)&gen_args[0]) + 0x58) != 2) {
      fVar1 = REFG(float, 0x1087f04);
      if ((char)(*(uint *)&gen_args[1]) != '\0') {
        fVar1 = 0.0;
      }
      F_00541240((*(int *)&gen_args[0]),fVar1,(*(float *)&gen_args[2]));
    }
  }
  return 0;
}

/* ref: FUN_00544e90 */
uint F_00544e90(unsigned int gen_a0)
{
  GEN_ENTER(0x544e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  float fVar6;
  
  F_00539590(this);
  if ((*(int *)((int)this + 0x20) == 1) || (*(int *)((int)this + 0x20) == 4)) {
    (*(float *)(gen_frame + 0x34)) = *(float *)((int)this + 100);
    fVar6 = *(float *)((int)this + 0x68);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    (*(float *)(gen_frame + 0x38)) = fVar6;
    F_0053a330(((undefined *)(uint)(this)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x34));
    fVar6 = (*(float *)(gen_frame + 0x38));
  }
  else {
    (*(float *)(gen_frame + 0x28)) = *(float *)((int)this + 100);
    fVar6 = *(float *)((int)this + 0x68);
  }
  (*(float *)(gen_frame + 0x2c)) = fVar6;
  if ((*(int *)((int)this + 0x20) == 1) || (*(int *)((int)this + 0x20) == 4)) {
    (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0x88);
    fVar6 = *(float *)((int)this + 0x8c);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    (*(float *)(gen_frame + 0x20)) = fVar6;
    F_0053a330(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)));
  }
  cVar2 = *(char *)((int)this + 0x5c);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  (*(float *)(gen_frame + 0x44)) = (*(float *)(gen_frame + 0x2c));
  fVar6 = (*(float *)(gen_frame + 0x28));
  if ((cVar2 != '\0') && (bVar4 = GEN_ISNAN(*(float *)((int)this + 0x220)) || GEN_ISNAN(REFG(float, 0x1090708)), bVar4 == (bVar4 || *(float *)((int)this + 0x220) == REFG(float, 0x1090708)))) {
    fVar1 = *(float *)((int)this + 0x15c);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    (*(float *)(gen_frame + 0x34)) = 0.0;
    (*(float *)(gen_frame + 0x38)) = 0.0;
    (*(float *)(gen_frame + 0x48)) = fVar1;
    if (REFG(float, 0x1087f04) <= fVar1) {
      (*(float *)(gen_frame + 0x40)) = *(float *)((int)this + 0x178);
      (*(float *)(gen_frame + 0x44)) = *(float *)((int)this + 0x17c);
      if ((*(int *)((int)this + 0x20) == 1) || (*(int *)((int)this + 0x20) == 4)) {
        F_0053a330(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x3c)));
      }
      F_0054fc90((int)this + 0xd0,((undefined1 *)(gen_frame + 0xc)),*(float *)((int)this + 0x15c),1);
      F_0054fc90((int)this + 0xd0,((undefined1 *)(gen_frame + 0x0)),*(float *)((int)this + 0x160),1);
      *(float *)((int)this + 0x220) = GEN_FLT_TO(*(float *)((int)this + 0x220), REFG(float, 0x1090708));
      (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x4)));
      *(undefined1 *)((int)this + 0x5c) = 0;
      *(undefined4 *)((int)this + 0x15c) = 0;
      *(undefined4 *)((int)this + 0x160) = 0;
      *(undefined4 *)((int)this + 0x164) = 0;
      (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x168) = 0;
      *(undefined4 *)((int)this + 0x16c) = 0;
      (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x4)));
      *(undefined4 *)((int)this + 0x170) = 0;
      *(undefined4 *)((int)this + 0x174) = 0;
      (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x178) = 0;
      *(undefined4 *)((int)this + 0x17c) = 0;
    }
    else {
      if (!(0.0 <= fVar1)) goto LAB_005451a4;
      F_0054fc90((int)this + 0xd0,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),fVar1,1);
      F_0054fc90((int)this + 0xd0,((undefined1 *)(gen_frame + 0x0)),*(float *)((int)this + 0x160),1);
      (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x1c)) - (float10)(*(float *)(gen_frame + 0x4)));
      (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x1c));
      (*(float *)(gen_frame + 0x44)) = (*(float *)(gen_frame + 0x20));
      (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x8)));
      (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x1c)) - (float10)(*(float *)(gen_frame + 0x4)));
      (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x8)));
      if ((*(int *)((int)this + 0x20) == 1) || (*(int *)((int)this + 0x20) == 4)) {
        F_0053a330(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x3c)));
      }
    }
    fVar6 = (*(float *)(gen_frame + 0x40));
    if ((*(int *)((int)this + 0x20) == 1) || (*(int *)((int)this + 0x20) == 4)) {
      if ((float10)(*(float *)(gen_frame + 0x40)) * (float10)(*(float *)(gen_frame + 0x28)) < (float10)0) {
        fVar1 = (float)((float10)(*(float *)(gen_frame + 0x40)) - (float10)(*(float *)(gen_frame + 0x28)));
        (*(float *)(gen_frame + 0x48)) = fVar1;
        fVar1 = ((float)GEN_TOF(ABS((float10)fVar1)));
        (*(float *)(gen_frame + 0x48)) = fVar1;
        if ((float10)*(float *)&REFG(undefined, 0x1305cc8) < (float10)fVar1) {
          (*(float *)(gen_frame + 0x1c)) = (float)(float10)0;
          (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
          (*(float *)(gen_frame + 0x20)) = 0.0;
          F_00539980(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x30)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)));
          fVar5 = (float10)(*(float *)(gen_frame + 0x48));
          (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x1c)) * (float10)*(double *)&REFG(undefined, 0x109cb28));
          fVar1 = ((float)GEN_TOF(ABS((float10)(float)((float10)(*(float *)(gen_frame + 0x1c)) * (float10)*(double *)&REFG(undefined, 0x109cb28)) )));
          (*(float *)(gen_frame + 0x48)) = fVar1;
          fVar6 = (*(float *)(gen_frame + 0x40));
          if (((float10)fVar1 < fVar5) && (fVar6 = REFG(float, 0x109cb20), *(float *)&REFG(undefined, 0x1088114) < (*(float *)(gen_frame + 0x28))) ) {
            fVar6 = REFG(float, 0x109c928);
          }
        }
      }
    }
  }
LAB_005451a4: ;
  uVar3 = F_00540a50(this,(*(undefined * PTR32 (*)[1])REFP(0x109c95c)),fVar6,(*(float *)(gen_frame + 0x44)) );
  return uVar3;
}

/* ref: FUN_005451d0 */
uint F_005451d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5451d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float local_8;
  
  fVar1 = *(float *)((int)this + 0xbc);
  fVar7 = fVar1;
  F_00539630(this);
  fVar8 = REFG(float, 0x1087f04);
  local_8 = fVar1;
  if ((*(char *)((int)this + 0x5d) != '\0') &&
     (bVar4 = GEN_ISNAN(*(float *)((int)this + 0x224)) || GEN_ISNAN(REFG(float, 0x1090708)),
     bVar4 == (bVar4 || *(float *)((int)this + 0x224) == REFG(float, 0x1090708)))) {
    fVar2 = *(float *)((int)this + 0x20c);
    if (REFG(float, 0x1087f04) <= fVar2) {
      fVar7 = *(float *)((int)this + 0x21c);
      *(undefined1 *)((int)this + 0x5d) = 0;
      *(undefined4 *)((int)this + 0x20c) = 0;
      *(undefined4 *)((int)this + 0x210) = 0;
      *(undefined4 *)((int)this + 0x214) = 0;
      *(undefined4 *)((int)this + 0x218) = 0;
      *(undefined4 *)((int)this + 0x21c) = 0;
      local_8 = fVar7;
    }
    else if (0.0 <= fVar2) {
      fVar5 = F_0054fbe0((int)this + 0x180,fVar2,1);
      fVar6 = F_0054fbe0((int)this + 0x180,*(float *)((int)this + 0x210),1);
      fVar7 = ((float)GEN_TOF(((float10)(float)((float10)(double)fVar5 - fVar6) + (float10)fVar1)));
      fVar8 = REFG(float, 0x1087f04);
      local_8 = fVar7;
    }
  }
  if (fVar7 < 0.0) {
    uVar3 = F_00539e30(this,0.0);
    return uVar3;
  }
  if (fVar8 < fVar7) {
    local_8 = fVar8;
  }
  uVar3 = F_00539e30(this,local_8);
  return uVar3;
}

/* ref: FUN_005452f0 */
uint F_005452f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5452f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined * pvVar4;
  byte bVar5;
  undefined * pvVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  int iVar12;
  bool bVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x50) + 0x10)));
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = this;
  if (((pvVar6 == (undefined *)0x0) || (pvVar6 = (undefined *)F_00a5f290(pvVar6), pvVar6 == (undefined *)0x0)) ||
     ((((*(byte *)((int)pvVar6 + 0x2dd3) & 2) == 0 && (bVar5 = F_00aa33d0(pvVar6), bVar5 == 0)) &&
      ((bVar5 = F_00a9f620(pvVar6), bVar5 == 0 || (*(char *)((int)pvVar6 + 0x2ebc) == '\0')))))) {
    fVar17 = *((float *)GEN_TOP((*(int *)((int)this + 0x50) + 0x920)));
  }
  else {
    fVar17 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  }
  iVar9 = *(int *)((int)this + 0x20);
  (*(float *)(gen_frame + 0x40)) = fVar17;
  (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + 0x70);
  (*(float *)(gen_frame + 0x14)) = *(float *)((int)this + 0x74);
  (*(float *)(gen_frame + 0x18)) = *(float *)((int)this + 0x78);
  if ((iVar9 == 1) || (iVar9 == 4)) {
    puVar10 = (undefined4 *)((int)this + 0x240);
    puVar11 = ((undefined4 *)(gen_frame + 0x80));
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    (*(undefined4 *)(gen_frame + 0xb0)) = 0;
    (*(undefined4 *)(gen_frame + 0xb4)) = 0;
    (*(undefined4 *)(gen_frame + 0xb8)) = 0;
    F_004f03f0(((undefined4 *)(gen_frame + 0x80)));
    F_004eea10(&(*(float *)(gen_frame + 0x10)),(uint)((undefined4 *)(gen_frame + 0x80)));
    this = (*(undefined * PTR32 *)(gen_frame + 0x5c));
  }
  F_00535480(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x38)));
  (*(char *)(gen_frame + 0x7f)) = '\0';
  F_00540b30(this,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x38)),&(*(char *)(gen_frame + 0x7f)));
  if (*(char *)((int)this + 0x2f0) != (*(char *)(gen_frame + 0x7f))) {
    *(char *)((int)this + 0x2f0) = (*(char *)(gen_frame + 0x7f));
  }
  (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x70));
  if ((*(int *)((int)this + 0x20) == 1) || (*(int *)((int)this + 0x20) == 4)) {
    (*(float *)(gen_frame + 0x64)) = *(float *)((int)this + 100);
    uVar18 = *(undefined4 *)((int)this + 0x68);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    (*(float *)(gen_frame + 0x68)) = gen_bits2f(uVar18);
    F_0053a330(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)));
    fVar17 = (*(float *)(gen_frame + 0x64));
  }
  else {
    fVar17 = *(float *)((int)this + 100);
  }
  (*(char *)(gen_frame + 0x6f)) = '\0';
  (*(char *)(gen_frame + 0x6e)) = '\0';
  (*(float *)(gen_frame + 0x64)) = fVar17;
  fVar17 = *(float *)((int)this + 0x2c8);
  F_005351c0(*(undefined * PTR32 *)((int)this + 0x50),&(*(float *)(gen_frame + 0x20)),*(undefined4 *)((int)this + 0x54));
  pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x50) + 0x10)));
  uVar18 = *(undefined4 *)((int)this + 0x54);
  if ((pvVar6 == (undefined *)0x0) || (pvVar6 = (undefined *)F_00a5f500(pvVar6), pvVar6 == (undefined *)0x0)) {
    (*(float *)(gen_frame + 0x48)) = 0.0;
  }
  else {
    fVar20 = F_00688f30(pvVar6,uVar18);
    (*(float *)(gen_frame + 0x48)) = fVar20;
  }
  fVar14 = (float10)(*(float *)(gen_frame + 0x70));
  if (((!GEN_ISNAN(fVar14) && !GEN_ISNAN((float10)(*(float *)(gen_frame + 0x28)))) && !(fVar14 <= (float10)(*(float *)(gen_frame + 0x28)))) ||
     (fVar14 < (float10)(*(float *)(gen_frame + 0x2c)))) {
    (*(char *)(gen_frame + 0x6f)) = '\x01';
  }
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS(fVar14))))));
  if (*(double *)&REFG(undefined, 0x1094620) < (double)((float)GEN_TOF(ABS(fVar14)))) {
    (*(char *)(gen_frame + 0x6e)) = '\x01';
  }
  iVar9 = *(int *)((int)this + 0x54);
  iVar2 = *(int *)((int)this + 0x50);
  (*(char *)(gen_frame + 0x7f)) = '\0';
  (*(float *)(gen_frame + 0x3c)) = 0.0;
  if (((((iVar9 != 0) && (iVar12 = iVar9 + -1, iVar12 != -1)) && (iVar12 != iVar9)) &&
      (iVar12 = iVar12 * 0x300, *(int *)(iVar2 + 0x78 + iVar12) != 0)) &&
     (((*(char *)(iVar2 + 0xe4 + iVar12) == '\0' ||
       (fVar20 = *(float *)(iVar2 + 0xdc + iVar12), GEN_ISNAN(fVar20) == (GEN_ISNAN(fVar20) || fVar20 == 0.0)))
      && (bVar5 = F_005409a0(this), bVar5 != 0)))) {
    fVar14 = F_00541390(this,(*(float *)(gen_frame + 0x70)));
    (*(undefined * PTR32 *)(gen_frame + 0x5c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)fVar14)));
    fVar14 = F_00541390(this,(*(float *)(gen_frame + 0x64)));
    (*(float *)(gen_frame + 0x74)) = (float)fVar14;
    uVar7 = F_005405e0(((undefined *)GEN_TOP((*(int *)((int)this + 0x50) + 0x20 + iVar12))),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)));
    if (0.0 < *(float *)(uVar7 + 4)) {
      (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x1087f04);
    }
    else if (*(float *)(uVar7 + 4) < 0.0) {
      (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x1090708);
    }
    else {
      (*(float *)(gen_frame + 0x3c)) = 0.0;
    }
    fVar15 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x5c)))));
    fVar16 = (float10)(*(float *)(gen_frame + 0x3c));
    fVar14 = (float10)0;
    if ((((!GEN_ISNAN(fVar14) && !GEN_ISNAN(fVar16 * fVar15)) && !(fVar14 <= fVar16 * fVar15)) ||
        ((!GEN_ISNAN(fVar14) && !GEN_ISNAN((float10)(*(float *)(gen_frame + 0x74)) * fVar16)) &&
         !(fVar14 <= (float10)(*(float *)(gen_frame + 0x74)) * fVar16))) &&
       (((*(char *)(gen_frame + 0x7f)) = '\x01',
        (GEN_ISNAN(fVar15) || GEN_ISNAN(fVar16)) == ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar16)) || fVar15 == fVar16) &&
        ((*(char *)(gen_frame + 0x6f)) != '\0')))) {
      if (0.0 < (*(float *)(gen_frame + 0x70))) {
        (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x70)) - (float10)REFG(float, 0x1305b68));
      }
      else {
        (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x70)) + (float10)REFG(float, 0x1305b68));
      }
    }
  }
  pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x5c));
  uVar7 = (*(uint *)(gen_frame + 0x4c));
  pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x50) + 0x10)));
  (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x4));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x38));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4c)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x4c)) = uVar7 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = (undefined *)((uint)pvVar4 & 0xffffff00);
  (*(float *)(gen_frame + 0x70)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1087f04);
  if ((pvVar6 == (undefined *)0x0) || (pvVar6 = (undefined *)F_00a5f500(pvVar6), pvVar6 == (undefined *)0x0)) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = F_00689180(pvVar6,&REFG(undefined, 0x109c898));
  }
  if (uVar7 != *(uint *)((int)this + 0x54)) {
    fVar14 = (float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x10));
    dVar1 = (double)fVar14;
    (*(double *)(gen_frame + 0x50)) = dVar1;
    fVar15 = (float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x18));
    fVar20 = (float)(fVar15 + fVar14);
    (*(float *)(gen_frame + 0x74)) = fVar20;
    fVar20 = ((float)GEN_TOF(SQRT((float10)fVar20)));
    (*(float *)(gen_frame + 0x74)) = fVar20;
    (*(float *)(gen_frame + 0x78)) = fVar20;
    if (*(int *)((int)this + 0xb4) == 1) {
      fVar20 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x14)) + (float10)dVar1) +
                      (float10)(double)fVar15)));
      (*(float *)(gen_frame + 0x74)) = fVar20;
      fVar20 = ((float)GEN_TOF(SQRT((float10)fVar20)));
      (*(float *)(gen_frame + 0x74)) = fVar20;
      F_00539fe0(this);
      fVar20 = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x50) + 0x10))) + 0xc0)));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)) = REFG(float, 0x1087f04);
      if (REFG(float, 0x1087f04) < fVar20) {
        (*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)) = fVar20;
      }
      fVar14 = (float10)(*(float *)(gen_frame + 0x78));
      (*(float *)(gen_frame + 0x78)) = ((float)GEN_TOF(((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)) * (float10)*(double *)&REFG(undefined, 0x109cac8))));
      fVar19 = ((float)GEN_TOF((fVar14 / (float10)((float)GEN_TOF(((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)) *
                                                (float10)*(double *)&REFG(undefined, 0x109cac8)))))));
      (*(float *)(gen_frame + 0x70)) = fVar19;
      if ((float10)1 < (float10)fVar19) {
        (*(float *)(gen_frame + 0x70)) = REFG(float, 0x1087f04);
      }
      else if (!GEN_ISNAN(fVar19) && !(0.0 <= fVar19)) {
        (*(float *)(gen_frame + 0x70)) = 0.0;
      }
      (*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)) = REFG(float, 0x1087f04);
      fVar19 = REFG(float, 0x1087f04);
      if (REFG(float, 0x1087f04) < fVar20) {
        (*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)) = fVar20;
        fVar19 = fVar20;
      }
      (*(double *)(gen_frame + 0x50)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar19),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x50)) + 0))));
      (*(float *)(gen_frame + 0x78)) = (float)((float10)fVar19 * (float10)*(float *)&REFG(undefined, 0x13796fc));
      fVar20 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x74)) /
                      (float10)(float)((float10)fVar19 * (float10)*(float *)&REFG(undefined, 0x13796fc)))));
      (*(float *)(gen_frame + 0x44)) = fVar20;
      if ((float10)1 < (float10)fVar20) {
        (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1087f04);
      }
      else if (!GEN_ISNAN(fVar20) && !(0.0 <= fVar20)) {
        (*(float *)(gen_frame + 0x44)) = 0.0;
      }
    }
  }
  if ((*(char *)((int)this + 0x94) == '\0') || ((*(char *)(gen_frame + 0x7f)) != '\0')) goto LAB_00545a23;
  (*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)) = gen_bits2f(REFG(float, 0x1305c84));
  uVar18 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1305c7c)));
  if ((*(int *)((int)this + 0xb4) == 1) ||
     (uVar18 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1305c80))), uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1305c84))), *(int *)((int)this + 0xb4) == 2)) {
    (*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)) = gen_bits2f(uVar18);
    uVar3 = uVar18;
  }
  (*(double *)(gen_frame + 0x50)) = gen_bits2d(CONCAT44(uVar3,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x50)) + 0))));
  uVar7 = F_00a5f290(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x50) + 0x10))));
  if ((uVar7 != 0) && (uVar7 = F_00a9fbf0(uVar7), (char)uVar7 != '\0')) {
    fVar14 = (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)) = (float)(fVar14 * (float10)*(double *)&REFG(undefined, 0x109cb18));
    (*(double *)(gen_frame + 0x50)) = gen_bits2d(CONCAT44((uint)gen_fl2bits((float)(fVar14 * (float10)*(double *)
                                                                                &REFG(undefined, 0x109cb18))),
                                   (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x50)) + 0))));
  }
  (*(float *)(gen_frame + 0x74)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)*(double *)&REFG(undefined, 0x1080228));
  fVar14 = F_00aed220((float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)*(double *)&REFG(undefined, 0x1080228)));
  (*(float *)(gen_frame + 0x78)) = ((float)GEN_TOF(ABS(fVar14)));
  fVar15 = (float10)fVar17;
  if ((float10)((float)GEN_TOF(ABS(fVar14))) < (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4))) {
    if (*(char *)((int)this + 0x22d) == '\0') {
      (*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)) = REFG(float, 0x1087f04);
      fVar20 = REFG(float, 0x1087f04);
    }
    else {
      (*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)) = (*(float *)(gen_frame + 0x48));
      fVar20 = (*(float *)(gen_frame + 0x48));
    }
    (*(double *)(gen_frame + 0x50)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar20),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x50)) + 0))));
    fVar20 = ((float)GEN_TOF((((float10)fVar20 * (float10)(*(float *)(gen_frame + 0x28))) * (float10)*(double *)&REFG(undefined, 0x1094818))));
    (*(float *)(gen_frame + 0x78)) = fVar20;
    fVar19 = REFG(float, 0x1087f04);
    if (*(char *)((int)this + 0x22d) != '\0') {
      fVar19 = (*(float *)(gen_frame + 0x48));
    }
    (*(float *)(gen_frame + 0x48)) = fVar19;
    if ((!((float10)fVar20 < fVar15)) &&
       (fVar20 = ((float)GEN_TOF((((float10)fVar19 * (float10)(*(float *)(gen_frame + 0x2c))) * (float10)*(double *)&REFG(undefined, 0x1094818)))),
       (*(float *)(gen_frame + 0x78)) = fVar20, !(fVar15 < (float10)fVar20))) goto LAB_0054590e;
    goto LAB_005459e1;
  }
LAB_0054590e: ;
  (*(float *)(gen_frame + 0x78)) = (float)(fVar15 - (float10)*(double *)&REFG(undefined, 0x1080228));
  fVar14 = F_00aed220((float)(fVar15 - (float10)*(double *)&REFG(undefined, 0x1080228)));
  (*(float *)(gen_frame + 0x78)) = (float)fVar14;
  fVar14 = F_00aed220((*(float *)(gen_frame + 0x74)));
  if ((!(fVar14 * (float10)(*(float *)(gen_frame + 0x78)) < (float10)0)) ||
     (((*(char *)(gen_frame + 0x6e)) == '\0' || (*(char *)((int)this + 0x22c) != '\0')))) {
    if (0.0 < *(float *)((int)this + 0xb0)) {
      *(undefined4 *)((int)this + 0xb0) = 0;
    }
    goto LAB_00545a23;
  }
  fVar20 = *(float *)((int)this + 0xb0);
  (*(float *)(gen_frame + 0x78)) = fVar20;
  if (0.0 < fVar20) {
    fVar20 = (float)((float10)fVar20 - (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x40)) = fVar20;
    if ((float10)fVar20 < (float10)0) {
      fVar20 = 0.0;
    }
    *(float *)((int)this + 0xb0) = fVar20;
    if (!(fVar20 <= 0.0)) goto LAB_005459e1;
  }
  else {
    fVar20 = REFG(float, 0x109c7fc);
    if (*(int *)((int)this + 0xb4) == 1) {
      fVar20 = REFG(float, 0x1087f04);
    }
    *(float *)((int)this + 0xb0) = fVar20;
LAB_005459e1: ;
    bVar5 = F_005409a0(this);
    if ((bVar5 != 0) &&
       (fVar14 = F_00541390(this,fVar17), bVar13 = GEN_ISNAN(fVar14) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x3c))),
       bVar13 == (bVar13 || fVar14 == (float10)(*(float *)(gen_frame + 0x3c))))) goto LAB_00545a23;
    (*(float *)(gen_frame + 0x64)) = fVar17;
  }
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4c)) + 0)) = 1;
  (*(uint *)(gen_frame + 0x4c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4c)), 1, 3),1);
LAB_00545a23: ;
  if ((float10)(*(float *)(gen_frame + 0x28)) < (float10)(*(float *)(gen_frame + 0x64))) {
    (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x28));
  }
  if ((float10)(*(float *)(gen_frame + 0x64)) < (float10)(*(float *)(gen_frame + 0x2c))) {
    (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x2c));
  }
  if ((float10)(*(float *)(gen_frame + 0x20)) < (float10)(*(float *)(gen_frame + 0x38))) {
    (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x20));
  }
  if ((float10)(*(float *)(gen_frame + 0x68)) < (float10)(*(float *)(gen_frame + 0x24))) {
    (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x24));
  }
  pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x50) + 0x10)));
  uVar7 = *(uint *)((int)this + 0x54);
  (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x64)) * (float10)(*(float *)(gen_frame + 0x70)));
  (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x68)) * (float10)(*(float *)(gen_frame + 0x44)));
  if ((pvVar6 == (undefined *)0x0) || (pvVar6 = (undefined *)F_00a5f500(pvVar6), pvVar6 == (undefined *)0x0)) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = F_00689180(pvVar6,&REFG(undefined, 0x109c898));
  }
  if (uVar7 == uVar8) {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4c)) + 0)) = 1;
    (*(uint *)(gen_frame + 0x4c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4c)), 1, 3),1);
    (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0)) = 1;
    (*(undefined * PTR32 *)(gen_frame + 0x5c)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x5c)), 1, 3),1)));
  }
  if ((*(char *)(gen_frame + 0x7f)) != '\0') {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4c)) + 0)) = 1;
    (*(uint *)(gen_frame + 0x4c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4c)), 1, 3),1);
  }
  pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x50) + 0x10)));
  if ((pvVar6 != (undefined *)0x0) && (uVar7 = F_00a5f290(pvVar6), uVar7 != 0)) {
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x50) + 0x10)));
    if (pvVar6 == (undefined *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = F_00a5f290(pvVar6);
    }
    bVar5 = F_00a9fc40(uVar7);
    if (bVar5 != 0) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4c)) + 0)) = 1;
      (*(uint *)(gen_frame + 0x4c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4c)), 1, 3),1);
    }
  }
  F_00541110(this,(uint)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)),(*(uint *)(gen_frame + 0x4c)),(*(undefined * PTR32 *)(gen_frame + 0x5c)));
  *(float *)((int)this + 0x2c8) = (*(float *)(gen_frame + 0x64));
  *(float *)((int)this + 0x2cc) = (*(float *)(gen_frame + 0x68));
  iVar9 = *(int *)((int)this + 0x20);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  if ((iVar9 == 1) || (iVar9 == 4)) {
    F_0053a190(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x60)));
  }
  *(float *)(param_1 + 4) = (*(float *)(gen_frame + 0x64));
  *(float *)(param_1 + 8) = (*(float *)(gen_frame + 0x68));
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return param_1;
}

/* ref: FUN_00546350 */
byte F_00546350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x546350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  int iVar6;
  bool bVar7;
  float10 fVar8;
  longlong lVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  if ((param_1 != 0) && (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0)) {
    uVar2 = F_00a5f500(*(undefined * PTR32 *)((int)this + 0x10));
    if ((uVar2 == 0) || (*(char *)(uVar2 + 0x65) != '\x03')) {
      if (*(int *)((int)this + 0x924) != -1) {
        *(undefined4 *)((int)this + 0x920) = 0;
        *(undefined4 *)((int)this + 0x924) = 0xffffffff;
        *(undefined1 *)((int)this + 0x928) = 0;
        pvVar5 = (undefined *)((int)this + 0x20);
        iVar6 = 3;
        do {
          F_0054eb10(pvVar5);
          pvVar5 = (undefined *)((int)pvVar5 + 0x300);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else {
      uVar2 = F_0053a4e0(this);
      (*(uint *)(gen_frame + 0x40)) = uVar2;
      if (uVar2 != 0) {
        ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c98c));
        (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1090708);
        (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(float *)(gen_frame + 0x4c)) = REFG(float, 0x1090708);
        if (param_3 != 0) {
          F_0054d8b0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_3);
          *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x14);
          *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 0x20);
          (*(float *)(gen_frame + 0x4c)) = (*(float *)(gen_frame + 0x10));
          *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_3 + 0x24);
          *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_3 + 0x28);
          uVar2 = (*(uint *)(gen_frame + 0x40));
        }
        (*(uint *)(gen_frame + 0x40)) = param_2;
        uVar3 = param_2;
        if (param_2 == 0xffffffff) {
          uVar3 = 0;
          (*(uint *)(gen_frame + 0x40)) = uVar2 - 1;
        }
        (*(uint *)(gen_frame + 0x44)) = uVar3;
        if ((int)uVar3 <= (int)(*(uint *)(gen_frame + 0x40))) {
          piVar4 = (int *)(uVar3 * 0x300 + 0x48 + (int)this);
          (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x4c));
          do {
            if (*(int *)(param_1 + 0x10) == 1) {
              iVar6 = *(int *)(param_1 + 0x18);
              if ((iVar6 == -0x20000000) && (*(int *)(param_1 + 0x1c) == 0)) {
                F_005416c0(this,(*(uint *)(gen_frame + 0x44)),(*(float *)(gen_frame + 0x4c)));
              }
              else {
                (*(int *)(gen_frame + 0x3c)) = *(int *)(param_1 + 0x1c);
                lVar9 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x10))))
                                  (*(undefined4 * PTR32 *)((int)this + 0x10));
                this = (*(undefined * PTR32 *)(gen_frame + 0x48));
                if ((lVar9 != (longlong)CONCAT44((*(int *)(gen_frame + 0x3c)),iVar6)) &&
                   ((((((piVar4[-2] != 1 || (*(int *)(param_1 + 0x18) != *piVar4)) ||
                       (*(int *)(param_1 + 0x1c) != piVar4[1])) ||
                      ((bVar1 = F_005348d0(piVar4 + -10), bVar1 == 0 &&
                       ((char)piVar4[0x27] == '\0')))) ||
                     ((param_3 != 0 && (bVar1 = F_0054eac0(piVar4 + -6,param_1), bVar1 == 0)))) ||
                    ((this = (*(undefined * PTR32 *)(gen_frame + 0x48)),
                     (GEN_ISNAN((*(float *)(gen_frame + 0x4c))) || GEN_ISNAN(REFG(float, 0x1090708))) ==
                     ((GEN_ISNAN((*(float *)(gen_frame + 0x4c))) || GEN_ISNAN(REFG(float, 0x1090708))) || (*(float *)(gen_frame + 0x4c)) == REFG(float, 0x1090708)) &&
                     (bVar7 = GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(piVar4[0x7e])))) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x4c))),
                     bVar7 == (bVar7 || ((float10)GEN_TOD(gen_bits2f(piVar4[0x7e]))) == (float10)(*(float *)(gen_frame + 0x4c))))))))
                   ) goto LAB_00546502;
              }
            }
            else {
LAB_00546502: ;
              F_00539ed0(piVar4 + -10);
              F_0054f970(piVar4 + -10,param_1);
              if ((GEN_ISNAN((*(float *)(gen_frame + 0x4c))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
                  ((GEN_ISNAN((*(float *)(gen_frame + 0x4c))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
                  (*(float *)(gen_frame + 0x4c)) == *(float *)&REFG(undefined, 0x1088114))) {
                *(undefined1 *)((int)piVar4 + 0x207) = 0;
              }
              else {
                *(undefined1 *)((int)piVar4 + 0x207) = 1;
              }
              if ((char)piVar4[0x27] == '\0') {
                bVar7 = GEN_ISNAN(gen_bits2f(piVar4[0x25])) || GEN_ISNAN(REFG(float, 0x1087f04));
                if (bVar7 == (bVar7 || gen_bits2f(piVar4[0x25]) == REFG(float, 0x1087f04))) {
                  if (piVar4[0xc] == 2) {
                    F_00539e30(piVar4 + -10,(float)(float10)1);
LAB_00546590: ;
                    F_00539f30(piVar4 + -10);
                  }
                  else {
                    fVar8 = F_00539d50(piVar4 + -10);
                    F_00541240(piVar4 + -10,(float)(float10)1,(float)fVar8);
                  }
                }
                else if (*(char *)((int)piVar4 + 0x35) != '\0') goto LAB_00546590;
              }
              F_00539920(piVar4 + -10,1);
              pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x48));
              bVar1 = F_00535b40((*(undefined * PTR32 *)(gen_frame + 0x48)));
              this = (*(undefined * PTR32 *)(gen_frame + 0x48));
              if (bVar1 != 0) {
                *(undefined4 *)((int)pvVar5 + 0x920) = GEN_FLT_TO(*(undefined4 *)((int)pvVar5 + 0x920), REFG(float, 0x109c7d0));
                *(undefined1 *)(piVar4 + 0x81) = 1;
                this = pvVar5;
              }
            }
            uVar2 = (*(uint *)(gen_frame + 0x44)) + 1;
            piVar4 = piVar4 + 0xc0;
            (*(uint *)(gen_frame + 0x44)) = uVar2;
          } while ((int)uVar2 <= (int)(*(uint *)(gen_frame + 0x40)));
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00546640 */
byte F_00546640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x546640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  
  uVar2 = *(uint *)((int)this + 0x924);
  if (uVar2 == 0xffffffff) {
    if (*(undefined * PTR32 *)((int)this + 0x10) == (undefined *)0x0) {
      return 0;
    }
    uVar2 = F_00a5f500(*(undefined * PTR32 *)((int)this + 0x10));
    if (uVar2 == 0) {
      return 0;
    }
    if (*(char *)(uVar2 + 0x65) != '\x03') {
      return 0;
    }
    uVar2 = F_00688e80(uVar2);
    *(uint *)((int)this + 0x924) = uVar2;
  }
  if (uVar2 == 0) {
    return 0;
  }
  if (param_1 == -1) {
    uVar3 = 0;
    if (uVar2 != 0) {
      this_00 = (undefined *)((int)this + 0x20);
      do {
        bVar1 = F_00544d30(this_00);
        if (bVar1 == 0) {
          return 0;
        }
        uVar3 = uVar3 + 1;
        this_00 = (undefined *)((int)this_00 + 0x300);
      } while (uVar3 < uVar2);
    }
    return 1;
  }
  bVar1 = F_00544d30((undefined *)(param_1 * 0x300 + 0x20 + (int)this));
  return bVar1;
}

/* ref: FUN_005466e0 */
unsigned int F_005466e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5466e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 * puVar4;
  int * piVar5;
  int iVar6;
  bool bVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float10 fVar9;
  
  (*(int *)(gen_frame + 0x8)) = param_1;
  if ((*(int *)(param_1 + 0x34) != 0) && (*((char *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x14))) == '\0')) {
    uVar3 = F_0054d950(*(undefined * PTR32 *)(param_1 + 4));
    iVar1 = *(int *)(param_1 + 4);
    iVar6 = *(int *)(iVar1 + 0x6c);
    if (iVar6 == 0) {
      if (*(int *)(iVar1 + 4) != 0) {
        *(undefined4 *)(iVar1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 4)));
      }
      iVar6 = *(int *)(iVar1 + 0x6c);
    }
    pvVar2 = REFG(void * PTR32, 0x14c4e84);
    puVar4 = (undefined4 *)
             F_00b5bff0(REFG(void * PTR32, 0x14c4e84),&(*(int *)(gen_frame + 0x8)),*(undefined4 *)(param_1 + 0x34),
                          *(undefined4 *)(uVar3 + 0x10c),*(undefined4 *)(iVar6 + 0x20),0,0,0,0,uVar3
                          ,0x1d,0);
    *(undefined4 *)(param_1 + 0x38) = *puVar4;
    piVar5 = (int *)F_00b5b260(pvVar2,(undefined4 *)(param_1 + 0x38));
    if (piVar5 != (int *)0x0) {
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar5 + 0xb4))(piVar5);
      *(float *)(param_1 + 0x3c) = (float)extraout_ST0;
    }
    F_005426e0(param_1,param_2);
    *(undefined1 *)(param_1 + 0x80) = 0;
    return 0;
  }
  if (*((char *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x14))) != '\0') {
switchD_005467cd_caseD_0: ;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return 0;
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x4c))))(*(int * PTR32 *)(param_1 + 8));
  if (uVar3 == 0) {
    return 0;
  }
  pvVar2 = *(undefined * PTR32 *)(uVar3 + 0xec);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 0xc))))) {
  case 0: ;
  case 2: ;
    goto switchD_005467cd_caseD_0;
  case 1: ;
    uVar3 = F_00688de0(pvVar2,"cbnm_01f_lp0");
    fVar8 = (float10)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar9 = (float10)(float)fVar8;
    *(float *)(param_1 + 0x3c) = (float)fVar8;
    bVar7 = GEN_ISNAN(fVar9) || GEN_ISNAN((float10)0);
    if (bVar7 != (bVar7 || fVar9 == (float10)0)) {
      uVar3 = F_00688de0(pvVar2,"cbbm_02f_lp0");
      fVar8 = (float10)(int)uVar3;
      goto LAB_005467e6;
    }
    break;
  case 3: ;
    uVar3 = F_00688de0(pvVar2,"cbnm_02f_lp0");
    fVar8 = (float10)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar9 = (float10)(float)fVar8;
    *(float *)(param_1 + 0x3c) = (float)fVar8;
    bVar7 = GEN_ISNAN(fVar9) || GEN_ISNAN((float10)0);
    if (bVar7 != (bVar7 || fVar9 == (float10)0)) {
      uVar3 = F_00688de0(pvVar2,"cbnm_01f_lp0");
      fVar8 = (float10)(int)uVar3;
      goto LAB_005467e6;
    }
    break;
  case 4: ;
    uVar3 = F_00688de0(pvVar2,"cbbm_01f_lp0");
    fVar8 = (float10)(int)uVar3;
    goto LAB_005467e6;
  case 5: ;
    uVar3 = F_00688de0(pvVar2,"cbbm_02f_lp0");
    fVar8 = (float10)(int)uVar3;
LAB_005467e6: ;
    if ((int)uVar3 < 0) {
      fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *(float *)(param_1 + 0x3c) = (float)fVar8;
    return 0;
  }
  return 0;
}

/* ref: FUN_005468d0 */
uint F_005468d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5468d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined * this;
  int iVar4;
  int * piVar5;
  undefined4 * puVar6;
  float * pfVar7;
  uint uVar8;
  float10 fVar9;
  float fVar10;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  fVar9 = F_00542a30(param_1,param_2);
  (*(float *)(gen_frame + 0x5c)) = (float)fVar9;
  this = (undefined *)*param_1;
  *(float *)((int)this + 8) = (float)fVar9;
  F_0054fb60(this);
  F_00b67250((undefined *)*param_1,((undefined1 *)(gen_frame + 0x10)));
  F_00b67200((undefined *)*param_1,&(*(undefined4 *)(gen_frame + 0x20)));
  if (*(char *)(param_1 + 0x1c) != '\0') {
    F_00536130(param_1 + 0x14,(uint)&(*(undefined4 *)(gen_frame + 0x20)),(uint)((undefined1 *)(gen_frame + 0x10)));
  }
  iVar4 = param_1[1];
  fVar9 = (float10)0;
  (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)(iVar4 + 0xb0);
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)(iVar4 + 0xb4);
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(float *)(gen_frame + 0x90)) = (float)fVar9;
  (*(float *)(gen_frame + 0x94)) = (float)fVar9;
  (*(float *)(gen_frame + 0x98)) = (float)fVar9;
  (*(undefined4 *)(gen_frame + 0x88)) = *(undefined4 *)(iVar4 + 0xb8);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x60)),iVar4 + 0xa0);
  (*(float *)(gen_frame + 0x90)) = ((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x90) + (float10)(*(float *)(gen_frame + 0x90)))));
  (*(float *)(gen_frame + 0x94)) = ((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x94) + (float10)(*(float *)(gen_frame + 0x94)))));
  (*(float *)(gen_frame + 0x98)) = ((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x98) + (float10)(*(float *)(gen_frame + 0x98)))));
  puVar6 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x60)));
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  (*(undefined4 *)(gen_frame + 0x20)) = *puVar6;
  (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x28)) = uVar2;
  fVar10 = F_00aae7a0(((undefined1 *)(gen_frame + 0x10)),&REFG(float, 0x1302c90));
  (*(float *)(gen_frame + 0x5c)) = fVar10;
  piVar5 = (int *)param_1[2];
  if (*(char *)(param_1 + 0x10) == '\0') {
    ((code *)*(gen_code32 *)(*piVar5 + 0x88))(piVar5,&(*(undefined4 *)(gen_frame + 0x20)));
    fVar10 = (float)((float10)(*(float *)(gen_frame + 0x5c)) * (float10)REFG(double, 0x1088108));
    (*(float *)(gen_frame + 0x5c)) = fVar10;
    fVar9 = ((float10)GEN_TOD(fsin((float10)fVar10)));
    fVar3 = (float)fVar9;
    (*(float *)(gen_frame + 0x58)) = fVar3;
    fVar9 = (float10)fVar3;
    (*(float *)(gen_frame + 0x40)) = (float)(fVar9 * (float10)REFG(float, 0x1302c80));
    (*(float *)(gen_frame + 0x44)) = (float)((float10)REFG(float, 0x1302c84) * fVar9);
    (*(float *)(gen_frame + 0x48)) = (float)(fVar9 * (float10)REFG(float, 0x1302c88));
    fVar9 = ((float10)GEN_TOD(fcos((float10)fVar10)));
    (*(float *)(gen_frame + 0x58)) = (float)fVar9;
    (*(float *)(gen_frame + 0x4c)) = (float)fVar9;
    puVar6 = (undefined4 *)F_004f6d80(((undefined1 *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x40)),param_1[1] + 0xa0);
    (*(undefined4 *)(gen_frame + 0x30)) = *puVar6;
    (*(undefined4 *)(gen_frame + 0x34)) = puVar6[1];
    (*(undefined4 *)(gen_frame + 0x38)) = puVar6[2];
    (*(undefined4 *)(gen_frame + 0x3c)) = puVar6[3];
    ((code *)*(gen_code32 *)(*(int *)param_1[2] + 0x10))((int *)param_1[2],&(*(undefined4 *)(gen_frame + 0x30)));
  }
  else {
    ((code *)*(gen_code32 *)(*piVar5 + 0x8c))(piVar5,&(*(undefined4 *)(gen_frame + 0x20)));
    ((code *)*(gen_code32 *)(*(int *)param_1[2] + 0x7c))((int *)param_1[2],(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x5c))));
    puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)param_1[2] + 0x14))((int *)param_1[2])));
    uVar1 = puVar6[1];
    (*(undefined4 *)(gen_frame + 0x30)) = *puVar6;
    (*(undefined4 *)(gen_frame + 0x34)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x38)) = puVar6[2];
    (*(undefined4 *)(gen_frame + 0x3c)) = puVar6[3];
    pfVar7 = (float *)F_004f6d80(((undefined1 *)(gen_frame + 0x0)),(uint)&(*(undefined4 *)(gen_frame + 0x30)),param_1[1] + 0xa0);
    (*(float *)(gen_frame + 0x40)) = *pfVar7;
    (*(float *)(gen_frame + 0x44)) = pfVar7[1];
    (*(float *)(gen_frame + 0x48)) = pfVar7[2];
    (*(float *)(gen_frame + 0x4c)) = pfVar7[3];
    ((code *)*(gen_code32 *)(*(int *)param_1[2] + 0x10))((int *)param_1[2],&(*(float *)(gen_frame + 0x40)));
  }
  fVar10 = (*(float *)(gen_frame + 0x5c));
  iVar4 = *(int *)(param_1[3] + 0xc);
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x5c)) + 0)) = 0;
  (*(float *)(gen_frame + 0x5c)) = gen_bits2f((uint)gen_fl2bits(fVar10) & 0xffffff00);
  if ((-1 < iVar4) && ((iVar4 < 2 || (iVar4 == 4)))) {
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x5c)) + 0)) = 1;
    (*(float *)(gen_frame + 0x5c)) = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(fVar10) >> 8),1));
  }
  uVar8 = ((code *)*(gen_code32 *)(*(int *)param_1[2] + 0x90))
                    ((int *)param_1[2],(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x5c))));
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
  return uVar8;
}

/* ref: FUN_00546bb0 */
byte F_00546bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x546bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  undefined * this_00;
  byte bVar2;
  uint uVar3;
  
  if ((param_3 != (uint *)0x0) && (param_4 != 0)) {
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x14)) = 1;
    F_005366f0(this,&(*(undefined4 *)(gen_frame + 0x0)),param_1,param_2,param_4);
    (*(int *)(gen_frame + 0x5c)) = 0;
    if (((param_2 == 0) || (param_2 == 1)) && (*(int *)(param_4 + 0x10) != 0)) {
      if (*(int *)(param_4 + 0x18) != -0x20000000) {
        uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x1c))
        ;
        if (uVar3 != 0) {
          (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(param_4 + 0x20);
          (*(uint *)(gen_frame + 0x58)) = (uint)*(ushort *)(uVar3 + 0x88);
          (*(int *)(gen_frame + 0x5c)) = 1;
        }
      }
    }
    if ((((*(char *)(param_4 + 0x42) == '\0') && (param_2 < 0xe)) &&
        (iVar1 = *(int *)((int)this + param_2 * 4 + 0x50), iVar1 != 0)) && (iVar1 != param_1)) {
      F_005430c0(this,iVar1,param_2,*(undefined4 *)((int)this + param_2 * 4 + 0x27c));
    }
    this_00 = *(undefined * PTR32 *)((int)this + 0x2b4);
    (*(int *)(gen_frame + 0x54)) = param_1;
    (*(int *)(gen_frame + 0x50)) = (*param_3 & 0xffffff) + (int)param_3;
    bVar2 = F_00b699b0(this_00,&(*(int *)(gen_frame + 0x50)),(*(int *)(gen_frame + 0x5c)),-(uint)((*(int *)(gen_frame + 0x5c)) != 0) & (uint)&(*(uint *)(gen_frame + 0x58)),
                         &(*(undefined4 *)(gen_frame + 0x0)));
    if (bVar2 != 0) {
      if (*(char *)(param_4 + 0x42) == '\0') {
        F_00532030(this,param_1,param_2,param_3);
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00546d20 */
uint F_00546d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x546d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 local_c;
  
  if (*(char *)((int)this + 0x93) != '\0') {
    iVar7 = *(int *)((int)this + 0xfb0);
    uVar2 = 0;
    if (iVar7 != 0) {
      uVar4 = *(undefined4 *)((int)this + 0xfb4);
      uVar2 = F_00533bd0(this);
      uVar2 = F_0053f4f0(this,uVar2,uVar4,iVar7);
      if ((char)uVar2 != '\0') {
        uVar2 = F_0053f150(this);
      }
    }
    return uVar2;
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x44);
  if (puVar3 == (undefined4 *)0x0) {
    iVar7 = *(int *)((int)this + 0x40);
    if (iVar7 == 0) {
      uVar2 = F_0053ef10(this,param_2,param_1);
      uVar2 = F_00543c30(this,uVar2,iVar7);
      return uVar2;
    }
    uVar2 = F_0053c480(this,iVar7,1);
    return uVar2;
  }
  if (puVar3 == *(undefined4 * PTR32 *)((int)this + 0x40)) {
    uVar2 = *(uint *)((int)this + 0x2fd8);
    if ((7 < uVar2) ||
       ((*(int *)((int)this + uVar2 * 4 + 0x2fb8) != 0 &&
        ((7 < uVar2 || (*(int *)((int)this + uVar2 * 4 + 0x2fb8) != 3)))))) {
      *(undefined4 *)((int)this + 0x44) = 0;
    }
    uVar2 = F_0053c480(this,*(undefined4 * PTR32 *)((int)this + 0x40),1);
    return uVar2;
  }
  uVar5 = ((gen_lcode *)*(gen_code32 *)*puVar3)(puVar3);
  puVar3 = (undefined4 *)F_00ab1290((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  uVar2 = *(uint *)((int)this + 0x2fd8);
  if ((7 < uVar2) ||
     ((*(int *)((int)this + uVar2 * 4 + 0x2fb8) != 0 &&
      ((7 < uVar2 ||
       ((*(int *)((int)this + uVar2 * 4 + 0x2fb8) != 3 &&
        (((7 < uVar2 || (*(int *)((int)this + uVar2 * 4 + 0x2fb8) != 2)) ||
         (puVar3 != (undefined4 *)0x0)))))))))) {
    if (puVar3 != *(undefined4 * PTR32 *)((int)this + 0x40)) {
      uVar4 = 0xe0000000;
      local_c = 0;
      if (puVar3 != (undefined4 *)0x0) {
        local_c = ((gen_lcode *)*(gen_code32 *)*puVar3)(puVar3);
        uVar4 = (undefined4)local_c;
      }
      puVar1 = *(undefined4 * PTR32 *)((int)this + 0x40);
      if (puVar1 == (undefined4 *)0x0) {
        uVar5 = 0xe0000000;
      }
      else {
        uVar5 = ((gen_lcode *)*(gen_code32 *)*puVar1)(puVar1);
      }
      uVar6 = (undefined4)((ulonglong)local_c >> 0x20);
      this_00 = (undefined *)F_006b8c00();
      F_006e5d90(this_00,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar4,uVar6);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x40);
    if ((puVar3 != puVar1) && (puVar1 != (undefined4 *)0x0)) {
      *(undefined4 * PTR32 *)((int)this + 0x8c) = puVar1;
    }
    *(undefined4 * PTR32 *)((int)this + 0x40) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      uVar2 = *(uint *)((int)this + 0x2fd8);
      if ((7 < uVar2) ||
         ((*(int *)((int)this + uVar2 * 4 + 0x2fb8) != 0 &&
          ((7 < uVar2 || (*(int *)((int)this + uVar2 * 4 + 0x2fb8) != 3)))))) {
        *(undefined4 *)((int)this + 0x44) = 0;
      }
      if (*(char *)((int)this + 0x95) != '\0') {
        *(undefined1 *)((int)this + 0x94) = 1;
      }
    }
    *(byte *)((int)this + 0x92) = *(byte *)((int)this + 0x92) & 1;
  }
  uVar2 = F_00a7eea0(&REFG(undefined1, 0x14ab068),0);
  return uVar2;
}

/* ref: FUN_00546f00 */
uint F_00546f00(unsigned int gen_a0)
{
  GEN_ENTER(0x546f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined2 *)((int)this + 0x90) = 0;
  F_00543490((undefined *)((int)this + 0xa8));
  *(undefined4 *)((int)this + 0xfb0) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109bff4)));
  *(undefined4 *)((int)this + 0xfb4) = 1;
  *(undefined2 *)((int)this + 0x92) = 1;
  *(undefined4 *)&REFG(undefined, 0x1375b54) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x1375b34) = 0;
  *(undefined4 *)&REFG(undefined, 0x1375b40) = 5;
  REFG(float, 0x1375b68) = 0;
  *(undefined4 *)&REFG(undefined, 0x1375b6c) = 0;
  *(undefined4 *)&REFG(undefined, 0x1375b70) = 0;
  REFG(undefined4, 0x1375b50) = 0;
  REFG(undefined4, 0x1375b64) = 0;
  *(undefined4 *)&REFG(undefined, 0x1375b74) = 0;
  *(undefined4 *)&REFG(undefined, 0x1375b78) = 0;
  REFG(undefined4, 0x1375b7c) = 0;
  *(undefined4 *)&REFG(undefined, 0x1375b38) = 0;
  *(undefined2 *)&REFG(undefined1, 0x1375b3c) = 0;
  REFG(undefined4, 0x1375b3e) = 0;
  *(undefined4 *)&REFG(undefined, 0x1375b4c) = 4;
  *(undefined4 *)((int)this + 0xfb8) = 0;
  *(undefined4 *)((int)this + 0x151c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x30) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x30), REFG(float, 0x109c7c8));
  *(undefined4 *)((int)this + 0x38) = 0x49;
  *(gen_code32 *)((int)this + 0x3c) = ((code *)REFP(0x532cf0));
  *(undefined4 *)((int)this + 0x2fb8) = 1;
  *(undefined4 *)((int)this + 0x2fbc) = 1;
  *(undefined4 *)((int)this + 0x2fc0) = 1;
  *(undefined4 *)((int)this + 0x2fc4) = 1;
  *(undefined4 *)((int)this + 0x2fc8) = 1;
  *(undefined4 *)((int)this + 0x2fcc) = 1;
  *(undefined4 *)((int)this + 0x2fd0) = 1;
  *(undefined4 *)((int)this + 0x2fd4) = 1;
  *(undefined4 *)((int)this + 0x2fd8) = 8;
  *(undefined2 *)((int)this + 0x94) = 0;
  *(undefined1 *)((int)this + 0x96) = 0;
  *(undefined4 *)((int)this + 0x2fdc) = 0;
  *(undefined4 *)((int)this + 0x2fe0) = 0;
  *(undefined4 *)((int)this + 0x2fe4) = 0;
  *(undefined4 *)((int)this + 0x2fe8) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 *)&REFG(undefined, 0x14a31ec) = this;
  *(undefined4 *)((int)this + 4) = 4;
  *(undefined4 *)((int)this + 0x2fec) = 0x76;
  *(undefined4 *)((int)this + 0x2ff0) = 0x77;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0xe0000000;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 7;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x22) = 0;
  uVar2 = 0;
  do {
    *(undefined1 *)((int)this + uVar2 + 0x26) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 7);
  uVar2 = REFG(undefined4, 0x137104c);
  if (REFG(undefined4, 0x137104c) != 0) {
    *(uint *)((int)this + 0x10) = REFG(undefined4, 0x137104c);
    *(undefined * PTR32 *)((int)this + 0x14) = this;
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  return uVar2;
}

/* ref: FUN_005470f0 */
uint F_005470f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5470f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined * this_00;
  undefined4 * puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined4 *)F_00ab1290(0xe0000000,0);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x2fd8);
  if (((undefined4 *)0x7 < puVar2) ||
     ((*(int *)((int)this + (int)((int)(uintptr_t)puVar2) * 4 + 0x2fb8) != 0 &&
      (((undefined4 *)0x7 < puVar2 ||
       ((*(int *)((int)this + (int)((int)(uintptr_t)puVar2) * 4 + 0x2fb8) != 3 &&
        ((((undefined4 *)0x7 < puVar2 || (*(int *)((int)this + (int)((int)(uintptr_t)puVar2) * 4 + 0x2fb8) != 2)) ||
         (puVar1 != (undefined4 *)0x0)))))))))) {
    if (puVar1 != *(undefined4 * PTR32 *)((int)this + 0x40)) {
      uVar3 = 0xe0000000;
      if (puVar1 != (undefined4 *)0x0) {
        uVar3 = ((gen_lcode *)*(gen_code32 *)*puVar1)(puVar1);
      }
      puVar2 = *(undefined4 * PTR32 *)((int)this + 0x40);
      if (puVar2 == (undefined4 *)0x0) {
        uVar4 = 0xe0000000;
      }
      else {
        uVar4 = ((gen_lcode *)*(gen_code32 *)*puVar2)(puVar2);
      }
      this_00 = (undefined *)F_006b8c00();
      F_006e5d90(this_00,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar3,
                   (int)((ulonglong)uVar3 >> 0x20));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x40);
    if ((puVar1 != puVar2) && (puVar2 != (undefined4 *)0x0)) {
      *(undefined4 * PTR32 *)((int)this + 0x8c) = puVar2;
    }
    *(undefined4 * PTR32 *)((int)this + 0x40) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = *(undefined4 * PTR32 *)((int)this + 0x2fd8);
      if (((undefined4 *)0x7 < puVar2) ||
         ((*(int *)((int)this + (int)((int)(uintptr_t)puVar2) * 4 + 0x2fb8) != 0 &&
          (((undefined4 *)0x7 < puVar2 || (*(int *)((int)this + (int)((int)(uintptr_t)puVar2) * 4 + 0x2fb8) != 3))))))
      {
        *(undefined4 *)((int)this + 0x44) = 0;
      }
      if (*(char *)((int)this + 0x95) != '\0') {
        *(undefined1 *)((int)this + 0x94) = 1;
      }
    }
    *(byte *)((int)this + 0x92) = *(byte *)((int)this + 0x92) & 1;
  }
  *(undefined4 *)((int)this + 0xfb8) = 0;
  *(undefined4 *)((int)this + 0xfb0) = 0;
  return (uint)puVar2;
}

/* ref: FUN_00547210 */
uint F_00547210(unsigned int gen_a0)
{
  GEN_ENTER(0x547210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * in_EAX = 0;
  undefined4 * puVar2;
  undefined * this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)((int)this + 0x44) == 0) {
    if (*(int *)((int)this + 0x40) != 0) {
      puVar2 = (undefined4 *)F_00ab1290(0xe0000000,0);
      in_EAX = *(undefined4 * PTR32 *)((int)this + 0x2fd8);
      if (((undefined4 *)0x7 < in_EAX) ||
         ((*(int *)((int)this + (int)((int)(uintptr_t)in_EAX) * 4 + 0x2fb8) != 0 &&
          (((undefined4 *)0x7 < in_EAX ||
           ((*(int *)((int)this + (int)((int)(uintptr_t)in_EAX) * 4 + 0x2fb8) != 3 &&
            ((((undefined4 *)0x7 < in_EAX || (*(int *)((int)this + (int)((int)(uintptr_t)in_EAX) * 4 + 0x2fb8) != 2))
             || (puVar2 != (undefined4 *)0x0)))))))))) {
        if (puVar2 != *(undefined4 * PTR32 *)((int)this + 0x40)) {
          uVar3 = 0xe0000000;
          if (puVar2 != (undefined4 *)0x0) {
            uVar3 = ((gen_lcode *)*(gen_code32 *)*puVar2)(puVar2);
          }
          puVar1 = *(undefined4 * PTR32 *)((int)this + 0x40);
          if (puVar1 == (undefined4 *)0x0) {
            uVar4 = 0xe0000000;
          }
          else {
            uVar4 = ((gen_lcode *)*(gen_code32 *)*puVar1)(puVar1);
          }
          this_00 = (undefined *)F_006b8c00();
          F_006e5d90(this_00,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar3,
                       (int)((ulonglong)uVar3 >> 0x20));
        }
        in_EAX = *(undefined4 * PTR32 *)((int)this + 0x40);
        if ((puVar2 != in_EAX) && (in_EAX != (undefined4 *)0x0)) {
          *(undefined4 * PTR32 *)((int)this + 0x8c) = in_EAX;
        }
        *(undefined4 * PTR32 *)((int)this + 0x40) = puVar2;
        if (puVar2 != (undefined4 *)0x0) {
          in_EAX = *(undefined4 * PTR32 *)((int)this + 0x2fd8);
          if (((undefined4 *)0x7 < in_EAX) ||
             ((*(int *)((int)this + (int)((int)(uintptr_t)in_EAX) * 4 + 0x2fb8) != 0 &&
              (((undefined4 *)0x7 < in_EAX || (*(int *)((int)this + (int)((int)(uintptr_t)in_EAX) * 4 + 0x2fb8) != 3))
              )))) {
            *(undefined4 *)((int)this + 0x44) = 0;
          }
          if (*(char *)((int)this + 0x95) != '\0') {
            *(undefined1 *)((int)this + 0x94) = 1;
          }
        }
        *(byte *)((int)this + 0x92) = *(byte *)((int)this + 0x92) & 1;
      }
    }
  }
  else {
    in_EAX = *(undefined4 * PTR32 *)((int)this + 0x2fd8);
    if (((undefined4 *)0x7 < in_EAX) ||
       ((*(int *)((int)this + (int)((int)(uintptr_t)in_EAX) * 4 + 0x2fb8) != 0 &&
        (((undefined4 *)0x7 < in_EAX || (*(int *)((int)this + (int)((int)(uintptr_t)in_EAX) * 4 + 0x2fb8) != 3)))))) {
      *(undefined4 *)((int)this + 0x44) = 0;
      return (uint)in_EAX;
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_00547370 */
uint F_00547370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x547370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  uint3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 * puVar3;
  
  uVar2 = F_00538440(this,param_2,*(float *)&REFG(undefined, 0x109c084));
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  uVar2 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x24);
  do {
    (*(undefined4 *)(gen_frame + 0x10)) = *puVar3;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca48));
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
    (*(undefined1 *)(gen_frame + 0x18)) = 0;
    bVar1 = F_00537f40((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),param_2);
    if (bVar1 == 0) {
      return (uint)extraout_var << 8;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  } while (uVar2 < 10);
  bVar1 = F_00543850(this,gen_bits2f((unsigned int)(param_2)),*(undefined4 *)(param_1 + 0x4c));
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_00547400 */
uint F_00547400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x547400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xf54) * 0x54 + 200 + (int)this)));
  if (iVar1 == 0) {
    if ((REFG(int, 0x1375bbc) == 0) && (REFG(int, 0x1375b90) != 0)) {
      uVar2 = F_0053ce50(this,param_1,REFG(int, 0x1375b90),1);
      return uVar2;
    }
  }
  else {
    if (iVar1 == 1) {
      return REFG(undefined4, 0x1379694);
    }
    if (iVar1 == 2) {
      return *(uint *)((int)this + 0x88);
    }
  }
  return 0;
}

/* ref: FUN_00547460 */
uint F_00547460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x547460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00ab1290(0xe0000000,0);
  F_0053f1e0(this,uVar1,param_1,uVar2);
  uVar1 = *(uint *)((int)this + 0x2fd8);
  if ((7 < uVar1) ||
     ((*(int *)((int)this + uVar1 * 4 + 0x2fb8) != 0 &&
      ((7 < uVar1 || (*(int *)((int)this + uVar1 * 4 + 0x2fb8) != 3)))))) {
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  return uVar1;
}

/* ref: FUN_005474c0 */
uint F_005474c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5474c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00538440(this,param_1,*(float *)&REFG(undefined, 0x1305c48));
  if ((char)uVar1 != '\0') {
    F_00543c30(this,param_1,0);
    if ((char)param_2 != '\0') {
      F_00a7eea0(&REFG(undefined1, 0x14ab068),param_2);
    }
    uVar1 = F_005335a0(param_1);
  }
  return uVar1;
}

/* ref: Client::Game::Control::TargetSystem::vf7 */
uint F_00547510(unsigned int gen_a0)
{
  GEN_ENTER(0x547510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 0x44) != 0) {
    if (*(int *)(this + 0x40) == 0) {
      uVar1 = F_00543c30(this,*(int *)(this + 0x44),0);
      return uVar1;
    }
    uVar1 = *(uint *)(this + 0x2fd8);
    if ((7 < uVar1) ||
       ((*(int *)(this + uVar1 * 4 + 0x2fb8) != 0 &&
        ((7 < uVar1 || (*(int *)(this + uVar1 * 4 + 0x2fb8) != 3)))))) {
      *(undefined4 *)(this + 0x44) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00547560 */
uint F_00547560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x547560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar2;
  if (param_1 == (int *)0x0) {
LAB_00547673: ;
    uVar4 = 0;
    if ((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0) {
      uVar5 = 6;
      uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x48))((*(int * PTR32 *)(gen_frame + 0x28)));
      piVar2 = (int *)F_00763050(uVar4,uVar5);
      uVar4 = 0;
      if (piVar2 != (int *)0x0) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      }
    }
  }
  else {
    if ((REFG(int, 0x1375bbc) == 0) && ((*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)REFG(int, 0x1375b90), REFG(int, 0x1375b90) != 0)) {
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 0x60);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + 100);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)((int)this + 0x68);
      if ((char)param_2 == '\0') {
        puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xa4))(param_1,((undefined1 *)(gen_frame + 0x0)))));
        (*(undefined4 *)(gen_frame + 0x10)) = *puVar3;
        (*(undefined4 *)(gen_frame + 0x14)) = puVar3[1];
        (*(undefined4 *)(gen_frame + 0x18)) = puVar3[2];
      }
      bVar1 = F_005388b0((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x40,&(*(undefined4 *)(gen_frame + 0x10)));
      if (bVar1 == 0) goto LAB_00547673;
    }
    (*(int * PTR32 *)(gen_frame + 0x2c)) = *(int * PTR32 *)((int)this + 0x40);
    F_00543c30(this,param_1,0);
    uVar4 = F_00a5f2b0(param_1);
    (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)uVar4;
    if ((uVar4 == 0) || (uVar4 = F_00533880(uVar4), (char)uVar4 == '\0')) {
      uVar4 = F_0053c480(this,param_1,0);
      return uVar4;
    }
    if (param_1 == (*(int * PTR32 *)(gen_frame + 0x2c))) {
      uVar4 = F_0053c480(this,(*(int * PTR32 *)(gen_frame + 0x28)),0);
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: FUN_005476b0 */
uint F_005476b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5476b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined * this_00;
  undefined3 extraout_var = 0;
  int * piVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = F_00424750(REFG(int, 0x137104c));
  (*(int * PTR32 *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) = (int *)uVar3;
  (*(undefined8 *)(gen_frame + 0x20)) = CONCAT44(uVar3,(undefined4)(*(undefined8 *)(gen_frame + 0x20)));
  F_00a5f2b0(param_1);
  if (param_1 != (int *)0x0) {
    if (REFG(int, 0x1375bbc) == 0) {
      (*(int *)(gen_frame + 0x2c)) = REFG(int, 0x1375b90);
      if (REFG(int, 0x1375b90) != 0) {
        (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 0x60);
        (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + 100);
        (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)((int)this + 0x68);
        if ((char)param_2 == '\0') {
          puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xa4))(param_1,((undefined1 *)(gen_frame + 0x0)))));
          (*(undefined4 *)(gen_frame + 0x10)) = *puVar4;
          (*(undefined4 *)(gen_frame + 0x14)) = puVar4[1];
          (*(undefined4 *)(gen_frame + 0x18)) = puVar4[2];
        }
        bVar2 = F_005388b0((*(int *)(gen_frame + 0x2c)) + 0x40,&(*(undefined4 *)(gen_frame + 0x10)));
        if (bVar2 == 0) goto LAB_0054788c;
      }
    }
    uVar7 = ((gen_lcode *)*(gen_code32 *)*param_1)(param_1);
    puVar4 = (undefined4 *)F_00ab1290((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar3 = *(uint *)((int)this + 0x2fd8);
    if ((7 < uVar3) ||
       ((*(int *)((int)this + uVar3 * 4 + 0x2fb8) != 0 &&
        ((7 < uVar3 ||
         ((*(int *)((int)this + uVar3 * 4 + 0x2fb8) != 3 &&
          (((7 < uVar3 || (*(int *)((int)this + uVar3 * 4 + 0x2fb8) != 2)) ||
           (puVar4 != (undefined4 *)0x0)))))))))) {
      if (puVar4 != *(undefined4 * PTR32 *)((int)this + 0x40)) {
        (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) = 0xe0000000;
        (*(int * PTR32 *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) = (int *)0x0;
        (*(undefined8 *)(gen_frame + 0x20)) = 0xe0000000;
        if (puVar4 != (undefined4 *)0x0) {
          uVar7 = ((gen_lcode *)*(gen_code32 *)*puVar4)(puVar4);
          (*(undefined8 *)(gen_frame + 0x20)) = uVar7;
        }
        puVar1 = *(undefined4 * PTR32 *)((int)this + 0x40);
        if (puVar1 == (undefined4 *)0x0) {
          uVar7 = 0xe0000000;
        }
        else {
          uVar7 = ((gen_lcode *)*(gen_code32 *)*puVar1)(puVar1);
        }
        uVar9 = (undefined4)((ulonglong)(*(undefined8 *)(gen_frame + 0x20)) >> 0x20);
        uVar8 = (undefined4)(*(undefined8 *)(gen_frame + 0x20));
        this_00 = (undefined *)F_006b8c00();
        F_006e5d90(this_00,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar8,uVar9);
      }
      puVar1 = *(undefined4 * PTR32 *)((int)this + 0x40);
      if ((puVar4 != puVar1) && (puVar1 != (undefined4 *)0x0)) {
        *(undefined4 * PTR32 *)((int)this + 0x8c) = puVar1;
      }
      *(undefined4 * PTR32 *)((int)this + 0x40) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        uVar3 = *(uint *)((int)this + 0x2fd8);
        if ((7 < uVar3) ||
           ((*(int *)((int)this + uVar3 * 4 + 0x2fb8) != 0 &&
            ((7 < uVar3 || (*(int *)((int)this + uVar3 * 4 + 0x2fb8) != 3)))))) {
          *(undefined4 *)((int)this + 0x44) = 0;
        }
        if (*(char *)((int)this + 0x95) != '\0') {
          *(undefined1 *)((int)this + 0x94) = 1;
        }
      }
      *(byte *)((int)this + 0x92) = *(byte *)((int)this + 0x92) & 1;
    }
    bVar2 = F_00a7ede0(&REFG(undefined1, 0x14ab068),0,1,1);
    return CONCAT31(extraout_var,bVar2);
  }
LAB_0054788c: ;
  uVar3 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar3 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x75);
    bVar6 = *(int *)(uVar3 + 0x14) != 0;
    uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar6);
    if (bVar6) {
      uVar3 = F_00547210(this);
    }
  }
  if ((*(int * PTR32 *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) != (int *)0x0) {
    uVar9 = 6;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) + 0x48))))((*(int * PTR32 *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)));
    piVar5 = (int *)F_00763050(uVar3,uVar9);
    uVar3 = 0;
    if (piVar5 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    }
  }
  return uVar3;
}

/* ref: FUN_005478e0 */
uint F_005478e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5478e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1;
  if (param_1 < REFG(undefined1, 0x1338ad4)) {
    puVar1 = (undefined4 *)F_00ae0850(&REFG(undefined, 0x1336e40),param_1);
    uVar3 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18),*puVar1);
      uVar3 = 0;
      if ((uVar2 != 0) &&
         (uVar3 = F_00538440(this,uVar2,*(float *)&REFG(undefined, 0x109c084)), (char)uVar3 != '\0')) {
        uVar3 = F_00543c30(this,uVar2,0);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00547940 */
unsigned int F_00547940(unsigned int gen_a0)
{
  GEN_ENTER(0x547940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x7c);
  if (iVar1 != 0) {
    uVar2 = F_00538440(this,iVar1,*(float *)&REFG(undefined, 0x109c084));
    if ((char)uVar2 != '\0') {
      F_00543c30(this,iVar1,0);
    }
  }
  return 0;
}

/* ref: FUN_00547970 */
uint F_00547970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x547970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0053d810(this,param_1,param_2,param_3);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00543c30(this,uVar1,0);
  }
  return uVar2;
}

/* ref: FUN_005479a0 */
unsigned int F_005479a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5479a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x80);
  if (puVar3 != (undefined4 *)0x0) {
    uVar5 = ((gen_lcode *)*(gen_code32 *)*puVar3)(puVar3);
    puVar3 = (undefined4 *)F_00ab1290((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar1 = *(uint *)((int)this + 0x2fd8);
    if ((7 < uVar1) ||
       ((*(int *)((int)this + uVar1 * 4 + 0x2fb8) != 0 &&
        ((7 < uVar1 ||
         ((*(int *)((int)this + uVar1 * 4 + 0x2fb8) != 3 &&
          (((7 < uVar1 || (*(int *)((int)this + uVar1 * 4 + 0x2fb8) != 2)) ||
           (puVar3 != (undefined4 *)0x0)))))))))) {
      if (puVar3 != *(undefined4 * PTR32 *)((int)this + 0x40)) {
        uVar5 = 0xe0000000;
        if (puVar3 != (undefined4 *)0x0) {
          uVar5 = ((gen_lcode *)*(gen_code32 *)*puVar3)(puVar3);
        }
        uVar4 = (undefined4)uVar5;
        puVar2 = *(undefined4 * PTR32 *)((int)this + 0x40);
        if (puVar2 == (undefined4 *)0x0) {
          uVar6 = 0xe0000000;
        }
        else {
          uVar6 = ((gen_lcode *)*(gen_code32 *)*puVar2)(puVar2);
        }
        uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
        this_00 = (undefined *)F_006b8c00();
        F_006e5d90(this_00,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar4,uVar7);
      }
      puVar2 = *(undefined4 * PTR32 *)((int)this + 0x40);
      if ((puVar3 != puVar2) && (puVar2 != (undefined4 *)0x0)) {
        *(undefined4 * PTR32 *)((int)this + 0x8c) = puVar2;
      }
      *(undefined4 * PTR32 *)((int)this + 0x40) = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        uVar1 = *(uint *)((int)this + 0x2fd8);
        if ((7 < uVar1) ||
           ((*(int *)((int)this + uVar1 * 4 + 0x2fb8) != 0 &&
            ((7 < uVar1 || (*(int *)((int)this + uVar1 * 4 + 0x2fb8) != 3)))))) {
          *(undefined4 *)((int)this + 0x44) = 0;
        }
        if (*(char *)((int)this + 0x95) != '\0') {
          *(undefined1 *)((int)this + 0x94) = 1;
        }
      }
      *(byte *)((int)this + 0x92) = *(byte *)((int)this + 0x92) & 1;
    }
  }
  return 0;
}

/* ref: FUN_00547ac0 */
uint F_00547ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x547ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  uVar2 = F_00ab1210(REFG(undefined4, 0x14ab5bc));
  uVar3 = 0;
  if (uVar2 != 0) {
    (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x28));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 (*)[2])REFP(0x109c9c4));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca0c));
    (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cae0)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca74));
    (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c));
    (*(undefined4 *)(gen_frame + 0x18)) = 2;
    bVar1 = F_0054e200(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar2);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar3 = F_00543c30(this,uVar2,0);
    }
  }
  return uVar3;
}

/* ref: FUN_00547b40 */
unsigned int F_00547b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x547b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x5b0];
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if (REFG(int, 0x1379694) != 0) {
    (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5a8)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x590));
    (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x584)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x570));
    (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x588)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5a4));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x570)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca48));
    (*(undefined4 *)(gen_frame + 0x574)) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0x578)) = this;
    (*(undefined1 *)(gen_frame + 0x57c)) = 0;
    ((undefined4 *)(gen_frame + 0xc))[0] = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x590)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca8c));
    (*(undefined * PTR32 *)(gen_frame + 0x594)) = this;
    (*(undefined4 *)(gen_frame + 0x598)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5a4)) = (*(undefined * PTR32 (*)[2])REFP(0x109caa4));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x580)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca74));
    (*(undefined4 *)(gen_frame + 0x58c)) = 2;
    F_00538cb0(param_2,((undefined4 *)(gen_frame + 0xc)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x580)));
    if (*(int *)((int)this + 0x40) == 0) {
      puVar3 = (undefined4 *)F_0053ce50(this,((undefined4 *)(gen_frame + 0xc)),param_1,1);
    }
    else {
      puVar3 = (undefined4 *)F_0053d610(this,param_1,((undefined4 *)(gen_frame + 0xc)),param_3);
    }
    if (puVar3 != (undefined4 *)0x0) {
      uVar5 = ((gen_lcode *)*(gen_code32 *)*puVar3)(puVar3);
      puVar3 = (undefined4 *)F_00ab1290((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      uVar1 = *(uint *)((int)this + 0x2fd8);
      if ((7 < uVar1) ||
         ((*(int *)((int)this + uVar1 * 4 + 0x2fb8) != 0 &&
          ((7 < uVar1 ||
           ((*(int *)((int)this + uVar1 * 4 + 0x2fb8) != 3 &&
            (((7 < uVar1 || (*(int *)((int)this + uVar1 * 4 + 0x2fb8) != 2)) ||
             (puVar3 != (undefined4 *)0x0)))))))))) {
        if (puVar3 != *(undefined4 * PTR32 *)((int)this + 0x40)) {
          uVar4 = 0xe0000000;
          (*(undefined4 *)(gen_frame + 0x5a0)) = 0;
          if (puVar3 != (undefined4 *)0x0) {
            uVar5 = ((gen_lcode *)*(gen_code32 *)*puVar3)(puVar3);
            uVar4 = (undefined4)uVar5;
            (*(undefined4 *)(gen_frame + 0x5a0)) = (int)((ulonglong)uVar5 >> 0x20);
          }
          puVar2 = *(undefined4 * PTR32 *)((int)this + 0x40);
          if (puVar2 == (undefined4 *)0x0) {
            uVar5 = 0xe0000000;
          }
          else {
            uVar5 = ((gen_lcode *)*(gen_code32 *)*puVar2)(puVar2);
          }
          uVar6 = (*(undefined4 *)(gen_frame + 0x5a0));
          this_00 = (undefined *)F_006b8c00();
          F_006e5d90(this_00,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar4,uVar6);
        }
        puVar2 = *(undefined4 * PTR32 *)((int)this + 0x40);
        if ((puVar3 != puVar2) && (puVar2 != (undefined4 *)0x0)) {
          *(undefined4 * PTR32 *)((int)this + 0x8c) = puVar2;
        }
        *(undefined4 * PTR32 *)((int)this + 0x40) = puVar3;
        if (puVar3 != (undefined4 *)0x0) {
          uVar1 = *(uint *)((int)this + 0x2fd8);
          if ((7 < uVar1) ||
             ((*(int *)((int)this + uVar1 * 4 + 0x2fb8) != 0 &&
              ((7 < uVar1 || (*(int *)((int)this + uVar1 * 4 + 0x2fb8) != 3)))))) {
            *(undefined4 *)((int)this + 0x44) = 0;
          }
          if (*(char *)((int)this + 0x95) != '\0') {
            *(undefined1 *)((int)this + 0x94) = 1;
          }
        }
        *(byte *)((int)this + 0x92) = *(byte *)((int)this + 0x92) & 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00547d00 */
uint F_00547d00(unsigned int gen_a0)
{
  GEN_ENTER(0x547d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar4 = (undefined4 *)F_00533aa0(this);
  uVar5 = F_00547370(this,(int)this + 0xf58,puVar4);
  if ((char)uVar5 != '\0') {
    uVar1 = *(undefined4 *)((int)this + 0xfb4);
    uVar2 = *(undefined4 *)((int)this + 0xfb0);
    F_00a5f2b0(puVar4);
    uVar5 = F_005383b0(puVar4,uVar1,uVar2);
    if ((char)uVar5 != '\0') {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = ((gen_lcode *)*(gen_code32 *)*puVar4)(puVar4);
      bVar3 = F_00ac83b0(&REFG(undefined, 0x14bcf40),uVar1,uVar2,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),
                           uVar7,uVar8);
      uVar5 = CONCAT31(extraout_var,bVar3);
      if (bVar3 != 0) {
        uVar5 = F_0053f150(this);
      }
    }
  }
  return uVar5;
}

/* ref: FUN_00547d80 */
uint F_00547d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x547d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  *param_2 = 0;
  iVar3 = 0;
  do {
    piVar1 = (int *)F_00ab1250(iVar3);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      if (uVar2 != 8) {
        uVar2 = F_00547370(this,param_1,piVar1);
        if (((char)uVar2 != '\0') && (uVar2 = *param_2, (int)uVar2 < 0x158)) {
          param_2[uVar2 + 1] = (uint)piVar1;
          *param_2 = *param_2 + 1;
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x158);
  return uVar2;
}

/* ref: FUN_00547df0 */
byte F_00547df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x547df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (((*(int *)((int)this + 8) != 0) && (bVar2 = F_00a9f620(*(int *)((int)this + 8)), bVar2 != 0)
      ) && (bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360),0x2f), bVar2 != 0)) {
    uVar3 = *(uint *)((int)this + 0x50);
    (*(int *)(gen_frame + 0x74)) = *(int *)((int)this + 0x54);
    uVar5 = F_00427d90();
    if ((((int)(uVar5 >> 0x20) - (*(int *)(gen_frame + 0x74)) != (uint)((uint)uVar5 < uVar3)) ||
        (499 < (uint)uVar5 - uVar3)) &&
       ((uVar3 = F_00ab28a0(param_1), uVar3 == 0 ||
        ((*(byte *)(uVar3 + 0x29) == 0 ||
         (bVar2 = F_00477000(&REFG(undefined, 0x14a9e40),(uint)*(byte *)(uVar3 + 0x29)), bVar2 != 0)))))) {
      if ((param_1 == 0x37) || ((param_1 == 0x38 || (param_1 == 0x39)))) {
        if (param_1 == 0x37) {
          if (REFG(char, 0x14ab29a) != '\x01') {
            return 0;
          }
        }
        else if (param_1 == 0x38) {
          if (REFG(char, 0x14ab29a) != '\x02') {
            return 0;
          }
        }
        else if ((param_1 == 0x39) && (REFG(char, 0x14ab29a) != '\x03')) {
          return 0;
        }
      }
      if (((*(int *)((int)this + 0x10) != 0) || (bVar2 = F_00539080(param_1), bVar2 == 0)) ||
         (bVar2 = F_00533ef0(), bVar2 != 0)) {
        iVar1 = *(int *)((int)this + 0x10);
        (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x78)) = (undefined * PTR32 * PTR32 *)0x0;
        ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c97c));
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(undefined4 *)(gen_frame + 0x34)) = 0;
        (*(undefined4 *)(gen_frame + 0x38)) = 0;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(char *)(gen_frame + 0x7f)) = '\0';
        uVar3 = param_1;
        if ((((iVar1 != 0) && (bVar2 = F_00533f80(iVar1), uVar3 = param_1, bVar2 != 0)) &&
            ((param_1 == 0x32 || (uVar3 = param_1, param_1 == 0x34)))) &&
           (uVar4 = F_00534000(iVar1), uVar3 = param_1, uVar4 != *(uint *)((int)this + 0xc))) {
          (*(char *)(gen_frame + 0x7f)) = '\x01';
          uVar3 = uVar4;
        }
        if (((uVar3 == 0x3c) && (uVar4 = F_00a5f500(*(undefined * PTR32 *)((int)this + 8)), uVar4 != 0)) &&
           (uVar4 = F_00a5f500(*(undefined * PTR32 *)((int)this + 8)), (*(byte *)(uVar4 + 0x70) >> 5 & 1) == 0
           )) {
          uVar3 = 0x3d;
        }
        if (((*(char *)(gen_frame + 0x7f)) == '\0') && ((uVar3 == 0x32 || (uVar3 == 0x34)))) {
          bVar2 = F_00543da0(*(undefined4 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),1,1);
          if (uVar3 == 0x32) {
            if (bVar2 == 0) goto LAB_00547fc0;
            uVar3 = 0x34;
          }
          if (bVar2 != 0) {
            (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x78)) = ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
LAB_00547fc0: ;
        (*(int *)(gen_frame + 0x74)) = *(undefined4 *)((int)this + 0x10);
        F_00475f20(((undefined1 *)(gen_frame + 0x50)));
        if (param_2 != 0) {
          F_0054d7d0(((undefined1 *)(gen_frame + 0x50)),param_2);
        }
        bVar2 = F_00548460(this,uVar3,((undefined1 *)(gen_frame + 0x50)),(*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x78)));
        if (((bVar2 != 0) || ((*(undefined1 *)(gen_frame + 0x61)) = 1, *(int *)((int)this + 0x10) != 0)) ||
           (bVar2 = F_00539080(uVar3), bVar2 == 0)) {
          F_00539330(this,uVar3,(*(int *)(gen_frame + 0x74)),(uint)((undefined1 *)(gen_frame + 0x50)));
        }
        F_0053f860(this,uVar3,((undefined1 *)(gen_frame + 0x50)));
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00548040 */
byte F_00548040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x548040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined * pvVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte local_6;
  
  if ((((*(int *)((int)param_1 + 8) == 0) ||
       (bVar3 = F_00a9f620(*(int *)((int)param_1 + 8)), bVar3 == 0)) ||
      (iVar1 = *(int *)((int)param_1 + 0x10), iVar1 == 0)) ||
     (*(char *)((int)param_1 + 0x3b) != '\0')) {
    return 0;
  }
  bVar3 = F_00533f80(iVar1);
  local_6 = 0;
  if ((((char)param_3 != '\0') && (uVar6 = F_00534000(iVar1), uVar6 != 0)) &&
     ((bVar4 = F_00547df0(param_1,uVar6,0), bVar4 == 0 && (bVar3 != 0)))) {
    local_6 = 1;
    uVar7 = F_00ab28a0(uVar6);
    if (uVar7 != 0) {
      F_00534230(param_1,uVar7,0);
    }
    *(uint *)((int)param_1 + 0xc) = uVar6;
  }
  if ((byte)param_2 != 0) {
    if (*((char *)GEN_TOP(((int)*(undefined * PTR32 *)((int)param_1 + 8) + 0x188))) == '\x03') {
      F_00aaa5b0(*(undefined * PTR32 *)((int)param_1 + 8),1);
    }
    *(undefined4 *)((int)param_1 + 0x10) = 0;
    bVar3 = F_00a9f620(*(undefined4 *)((int)param_1 + 8));
    if (bVar3 != 0) {
      F_00a4a760(&REFG(undefined, 0x14a7360),3,0);
    }
    *(undefined1 *)((int)param_1 + 0x39) = 0;
  }
  if ((iVar1 == 2) && (F_005445e0(param_1), (byte)param_2 != 0)) {
    pvVar2 = *(undefined * PTR32 *)((int)param_1 + 8);
    uVar11 = 0;
    uVar10 = 0;
    uVar5 = F_0054f090(*(float *)((int)pvVar2 + 0xb0));
    uVar6 = (uint)uVar5;
    uVar8 = (uint)(byte)param_2;
    uVar7 = F_00a5feb0(pvVar2);
    F_00a51360(0x3e,uVar7,uVar8,uVar6,uVar10,uVar11);
    return 1;
  }
  uVar10 = 0;
  if (local_6 == 0) {
    F_00a51200(0x3d,(uint)((byte)param_2 != 0),0,0,0);
  }
  else {
    pvVar2 = *(undefined * PTR32 *)((int)param_1 + 8);
    uVar9 = (uint)local_6;
    uVar5 = F_0054f090(*(float *)((int)pvVar2 + 0xb0));
    uVar6 = (uint)uVar5;
    uVar8 = (uint)(byte)param_2;
    uVar7 = F_00a5feb0(pvVar2);
    F_00a51360(0x3e,uVar7,uVar8,uVar6,uVar9,uVar10);
  }
  if ((byte)param_2 == 0) {
    *(undefined1 *)((int)param_1 + 0x3a) = 1;
  }
  return 1;
}

/* ref: FUN_005481e0 */
unsigned int F_005481e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5481e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if ((((char)param_1 != '\0') || ((char)param_2 != '\0')) || ((char)param_3 != '\0')) {
    if (*(int *)((int)this + 0x10) != 0) {
      if (*(int *)((int)this + 0xc) != 0) {
        if (*(int *)((int)this + 0x40) != 0) {
          F_00aa0100(*(undefined * PTR32 *)((int)this + 8),0,0);
        }
        F_00aa0100(*(undefined * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 0x40),0);
      }
      if (((char)param_1 == '\0') && ((char)param_3 == '\0')) {
        F_00548040(this,1,1);
        return 0;
      }
      F_00548040(this,1,0);
      return 0;
    }
    if ((((char)param_1 != '\0') || ((char)param_3 != '\0')) && (*(int *)((int)this + 0xc) != 0)) {
      if (*(int *)((int)this + 8) != 0) {
        bVar1 = F_00a9f620(*(int *)((int)this + 8));
        if (bVar1 != 0) {
          *(undefined1 *)((int)this + 0x39) = 0;
          F_00a51200(0x3c,0,0,0,0);
        }
      }
      if (*(int *)((int)this + 0xc) != 0) {
        if (*(int *)((int)this + 0x40) != 0) {
          F_00aa0100(*(undefined * PTR32 *)((int)this + 8),0,0);
        }
        F_00aa0100(*(undefined * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 0x40),0);
      }
    }
  }
  return 0;
}

/* ref: FUN_005482c0 */
unsigned int F_005482c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5482c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(int *)((int)this + 0x10) != 0) {
    if (*(int *)((int)this + 0xc) != 0) {
      if (*(int *)((int)this + 0x40) != 0) {
        F_00aa0100(*(undefined * PTR32 *)((int)this + 8),0,0);
      }
      F_00aa0100(*(undefined * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 0x40),0);
    }
    F_00548040(this,1,0);
    return 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    if (*(int *)((int)this + 8) != 0) {
      bVar1 = F_00a9f620(*(int *)((int)this + 8));
      if (bVar1 != 0) {
        *(undefined1 *)((int)this + 0x39) = 0;
        F_00a51200(0x3c,0,0,0,0);
      }
    }
    if (*(int *)((int)this + 0xc) != 0) {
      if (*(int *)((int)this + 0x40) != 0) {
        F_00aa0100(*(undefined * PTR32 *)((int)this + 8),0,0);
      }
      F_00aa0100(*(undefined * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 0x40),0);
    }
  }
  return 0;
}

/* ref: FUN_00548350 */
uint F_00548350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x548350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_ecx;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar7;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar6 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (((((*(char *)((int)this + 0x3b) != '\0') || (uVar6 = *(uint *)((int)this + 0xc), uVar6 == 0))
       || (*(int *)((int)this + 0x40) != param_2)) ||
      (uVar5 = F_00ab28a0(uVar6), uVar6 = uVar5, uVar5 == 0)) ||
     (((param_1 == 0 && (*(char *)(uVar5 + 0x2b) == '\0')) && (*(int *)((int)this + 0x40) == 0))))
  goto LAB_00548442;
  uVar2 = *(undefined4 *)(uVar5 + 8);
  ((uint *)(gen_frame + 0x8))[2] = *(undefined4 *)(uVar5 + 4);
  uVar3 = *(undefined4 *)((int)this + 0x40);
  ((uint *)(gen_frame + 0x8))[3] = *(undefined4 *)(uVar5 + 0xc);
  in_ecx = *(undefined4 *)((int)this + 8);
  ((uint *)(gen_frame + 0x8))[0] = 0;
  ((uint *)(gen_frame + 0x8))[1] = uVar2;
  uVar6 = F_00aa0210(in_ecx,uVar3,0);
  uVar7 = 0;
  do {
    if ((((uint *)(gen_frame + 0x8))[(int)(uVar7)] != 0) && (uVar6 == ((uint *)(gen_frame + 0x8))[(int)(uVar7)])) {
      if (*(char *)(param_3 + 0xd) == '\0') goto LAB_00548442;
      break;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  if (*(int *)((int)this + 0x10) == 0) {
    bVar4 = F_00533e60(this);
    uVar6 = CONCAT31(extraout_var_00,bVar4);
LAB_0054843b: ;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  else {
    if (*(char *)(uVar5 + 0x2b) != '\0') {
      bVar4 = F_00a9f620(*(undefined4 *)((int)this + 8));
      if (bVar4 == 0) {
        cVar1 = *(char *)(uVar5 + 0x2b);
      }
      else {
        cVar1 = *(char *)((int)this + 0x3a);
      }
      if (cVar1 != '\0') {
        bVar4 = F_00548040(this,1,0);
        uVar6 = CONCAT31(extraout_var,bVar4);
        goto LAB_0054843b;
      }
    }
    uVar6 = F_00533fe0(*(undefined4 *)((int)this + 0x10));
    *(uint *)((int)this + 0xc) = uVar6;
    *(undefined4 *)((int)this + 0x48) = 0xe0000000;
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  *(undefined4 *)((int)this + 0x40) = 0;
LAB_00548442: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar6;
}

/* ref: FUN_00548460 */
byte F_00548460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x548460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  float10 fVar6;
  float fVar7;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  if ((param_1 == 0x3c) || ((*(char *)(gen_frame + 0x2f)) = '\0', param_1 == 0x3d)) {
    (*(char *)(gen_frame + 0x2f)) = '\x01';
  }
  uVar2 = F_00ab28a0(param_1);
  if ((uVar2 == 0) || (*(char *)(uVar2 + 0x2d) == '\0')) {
    (*(bool *)(gen_frame + 0x2e)) = false;
    if (((*(char *)(gen_frame + 0x2f)) == '\0') && (bVar1 = F_00538fd0(this,param_1), bVar1 == 0)) {
      return 0;
    }
  }
  else {
    (*(bool *)(gen_frame + 0x2e)) = true;
  }
  uVar5 = 0xe0000000;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if (param_2 != 0) {
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 8);
    if (*(char *)(param_2 + 0x11) != '\0') {
      return 0;
    }
  }
  uVar2 = F_00ab28a0(param_1);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  if (uVar2 == 0) {
    return 0;
  }
  if ((*(char *)(gen_frame + 0x2f)) != '\0') {
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x24)) + 0)) = param_1 == 0x3d;
    (*(float *)(gen_frame + 0x24)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x24)), 1, 3),param_1 == 0x3d));
    uVar2 = F_00a5f500(*(undefined * PTR32 *)((int)this + 8));
    if (uVar2 != 0) {
      fVar7 = (*(float *)(gen_frame + 0x24));
      pvVar3 = (undefined *)F_00a5f500(*(undefined * PTR32 *)((int)this + 8));
      F_0054fe60(pvVar3,(undefined4)gen_fl2bits(fVar7));
    }
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x2f1c))) = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x24)) + 0));
    uVar2 = (*(uint *)(gen_frame + 0x28));
    goto LAB_00548665;
  }
  if ((*(bool *)(gen_frame + 0x2e)) != false) {
    F_00534310(this,uVar2);
    uVar2 = (*(uint *)(gen_frame + 0x28));
    goto LAB_00548665;
  }
  bVar1 = F_00a9f620(*(undefined4 *)((int)this + 8));
  if (bVar1 == 0) {
    *(undefined4 *)((int)this + 0x48) = uVar5;
    *(undefined4 *)((int)this + 0x4c) = (*(undefined4 *)(gen_frame + 0xc));
  }
  (*(char *)(gen_frame + 0x2f)) = *(char *)((int)this + 0x3a);
  bVar1 = F_00a9f620(*(undefined4 *)((int)this + 8));
  uVar2 = (*(uint *)(gen_frame + 0x28));
  if (bVar1 != 0) {
    *(undefined1 *)((int)this + 0x3a) = 0;
  }
  F_00534230(this,(*(uint *)(gen_frame + 0x28)),0);
  *(int *)((int)this + 0xc) = param_1;
  (*(bool *)(gen_frame + 0x2e)) = *(int *)((int)this + 0x10) != 0;
  if (*(char *)(uVar2 + 0x2a) != '\0') {
    F_00534380(this,1);
    uVar4 = F_00533f40(param_1);
    *(uint *)((int)this + 0x10) = uVar4;
  }
  if (*(char *)(uVar2 + 0x2b) == '\0') {
    if ((((*(char *)(uVar2 + 0x2a) == '\0') && ((*(bool *)(gen_frame + 0x2e)) != false)) &&
        (bVar1 = F_00a9f620(*(undefined4 *)((int)this + 8)), bVar1 != 0)) && ((*(char *)(gen_frame + 0x2f)) != '\0')) {
      uVar5 = 1;
      goto LAB_005485fd;
    }
  }
  else if ((*(bool *)(gen_frame + 0x2e)) != false) {
    uVar5 = 0;
LAB_005485fd: ;
    F_00548040(this,uVar5,0);
  }
  bVar1 = F_00a9f620(*(undefined4 *)((int)this + 8));
  if (((bVar1 != 0) && (param_1 == 0x34)) && (param_3 != 0)) {
    fVar7 = *(float *)(param_3 + 0x20);
    (*(undefined1 *)(gen_frame + 0x1c)) = 0;
    uVar5 = *(undefined4 *)((int)this + 8);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[1])REFP(0x109c974));
    (*(float *)(gen_frame + 0x18)) = 1.4013e-45;
    F_00a9f980(uVar5,*(float *)(param_3 + 0x10),*(float *)(param_3 + 0x14),
                 *(float *)(param_3 + 0x18),fVar7,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
    *(undefined1 *)((int)this + 0x3c) = 1;
    F_00538d00(this);
  }
LAB_00548665: ;
  bVar1 = F_00a9f620(*(undefined4 *)((int)this + 8));
  if (((bVar1 != 0) && (*(char *)(uVar2 + 0x2c) != '\0')) &&
     ((*(int *)((int)this + 0x10) == 0 &&
      ((uVar2 = F_00b6afa0(), uVar2 != 0 &&
       (uVar2 = *(uint *)((int)this + 8), uVar4 = F_00b6afa0(), uVar4 != uVar2)))))) {
    uVar2 = F_00a5feb0(*(undefined * PTR32 *)((int)this + 8));
    pvVar3 = (undefined *)F_00b6afa0();
    uVar4 = F_00a5feb0(pvVar3);
    F_0046f4a0(&(*(float *)(gen_frame + 0x10)),uVar4,uVar2);
    fVar6 = F_00aeb3c0((*(float *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x18)));
    (*(float *)(gen_frame + 0x24)) = (float)fVar6;
    F_00a9f850(*(undefined4 *)((int)this + 8),(float)fVar6,0);
  }
  return 1;
}

/* ref: FUN_005486f0 */
uint F_005486f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5486f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  
  if (*(char *)((int)this + 200) != '\0') {
    if (*(int *)((int)this + 0x18) != 0) {
      *(undefined4 *)((int)this + 0x18) = 0;
      bVar3 = F_00a9fc40(*(undefined4 *)((int)this + 0x10));
      if ((bVar3 == 0) && (*(char *)((int)this + 0x60) == '\0')) {
        *(undefined4 *)((int)this + 0x5c) = 0;
        *(undefined4 *)((int)this + 100) = 0;
        *(undefined1 *)((int)this + 0x60) = 0;
      }
      if (*(char *)((int)this + 200) != '\0') {
        *(undefined1 *)((int)this + 200) = 0;
      }
      uVar4 = F_00aa0680(*(undefined * PTR32 *)((int)this + 0x10),0,0);
      if ((uVar4 != 0) && (*(char *)(uVar4 + 0xd) == '\0')) {
        F_00aa0100(*(undefined * PTR32 *)((int)this + 0x10),0,0);
      }
    }
    *(undefined1 *)((int)this + 200) = 0;
  }
  uVar4 = F_00ab2a20(param_1);
  if (uVar4 != 0) {
    uVar5 = (uint)*(byte *)(uVar4 + 6);
    if (uVar5 != 0) {
      uVar4 = *(uint *)((int)this + 0x14);
      if (uVar4 == uVar5) {
        if (*(uint *)((int)this + 0x18) == uVar4) {
          if (param_2 == (float *)0x0) {
            return 0;
          }
          fVar8 = (float10)*param_2;
          fVar9 = (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb0)));
          bVar6 = GEN_ISNAN(fVar8) || GEN_ISNAN(fVar9);
          bVar7 = bVar6 || fVar8 == fVar9;
          if (bVar6 != bVar7) {
            return CONCAT22((short)((uint)((int)(uintptr_t)param_2) >> 0x10),
                            CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U | !(fVar9 <= fVar8),(char)param_2)
                           );
          }
        }
        if (((uVar4 == uVar5) &&
            (uVar4 = F_00ab2a20(*(undefined4 *)((int)this + uVar4 * 4 + 0x1c)), uVar4 != 0)) &&
           (*(char *)(uVar4 + 0xd) == '\0')) {
          F_00aa0100(*(undefined * PTR32 *)((int)this + 0x10),(uint)*(byte *)(uVar4 + 7),0);
        }
      }
      *(undefined4 *)((int)this + uVar5 * 4 + 0x1c) = param_1;
      if (*(uint *)((int)this + 0x18) != uVar5) {
        *(uint *)((int)this + 0x18) = uVar5;
      }
      if (*(int *)((int)this + 0x14) == 0) {
        *(uint *)((int)this + 0x14) = uVar5;
        F_0053fe90(this,0,uVar5);
      }
      if ((param_2 == (float *)0x0) ||
         ((fVar8 = (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb0))),
          bVar6 = GEN_ISNAN((float10)*param_2) || GEN_ISNAN(fVar8),
          bVar6 != (bVar6 || (float10)*param_2 == fVar8) &&
          (bVar3 = F_00a9fc00(*(int *)((int)this + 0x10)), bVar3 == 0)))) {
        *(undefined4 *)((int)this + 0x5c) = 0;
        *(undefined4 *)((int)this + 100) = 0;
        *(undefined1 *)((int)this + 0x60) = 0;
      }
      else {
        *(float *)((int)this + 0x5c) = *param_2;
        *(undefined1 *)((int)this + 0x60) = 1;
        uVar4 = F_0053fc20(*(undefined4 *)((int)this + 0x14),*(undefined4 *)((int)this + 0x18));
        *(uint *)((int)this + 100) = uVar4;
      }
      if (param_3 == 0) {
        F_0054e390((undefined *)((int)this + 0x70));
      }
      else {
        F_0054e930(this,param_3);
      }
      if (param_4 == 0) {
        *(undefined2 *)((int)this + 0xc4) = 0;
        *(undefined1 *)((int)this + 0xc6) = 0;
        return 0;
      }
      uVar1 = *(undefined1 *)(param_4 + 5);
      uVar2 = *(undefined1 *)(param_4 + 6);
      *(undefined1 *)((int)this + 0xc4) = *(undefined1 *)(param_4 + 4);
      *(undefined1 *)((int)this + 0xc5) = uVar1;
      *(undefined1 *)((int)this + 0xc6) = uVar2;
      return CONCAT31((int3)((uint)param_4 >> 8),uVar2);
    }
    if (*(char *)(uVar4 + 7) == '\0') {
      *(undefined4 *)((int)this + 0x14) = 0;
      *(undefined4 *)((int)this + 0x18) = 0;
      *(undefined4 *)((int)this + 0x5c) = 0;
      *(undefined4 *)((int)this + 100) = 0;
      *(undefined1 *)((int)this + 0x60) = 0;
    }
  }
  uVar4 = F_00aa4270(*(undefined * PTR32 *)((int)this + 0x10),param_1,param_3,0);
  return uVar4;
}

/* ref: FUN_005488d0 */
uint F_005488d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5488d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x50);
  if ((*(int *)(uVar2 + 0x10) != 0) &&
     (*(undefined1 *)((int)this + 0x2f1) = 0, *(int *)((int)this + 0x58) != 0)) {
    uVar1 = *(undefined4 *)((int)this + 0x54);
    this_00 = (undefined *)F_00a5f500(*(undefined * PTR32 *)(uVar2 + 0x10));
    uVar2 = 0;
    if ((this_00 != (undefined *)0x0) && (uVar2 = F_00688eb0(this_00,uVar1), (char)uVar2 != '\0')) {
      uVar2 = F_00544b80(this);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00548990 */
uint F_00548990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x548990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  undefined * pvVar1;
  undefined * pvVar2;
  undefined1 uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  undefined1 * puVar9;
  undefined3 extraout_var = 0;
  int iVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  float10 fVar13;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  pvVar4 = *(undefined * PTR32 *)((int)this + 0x50);
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = this;
  (*(undefined1 * PTR32 *)(gen_frame + 0x28)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = pvVar4;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  iVar10 = *(int *)((int)this + 0x20);
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x13796f0);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 0x70);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + 0x74);
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)((int)this + 0x78);
  if ((iVar10 == 1) || (iVar10 == 4)) {
    puVar11 = (undefined4 *)((int)this + 0x240);
    puVar12 = ((undefined4 *)(gen_frame + 0x40));
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    F_004f03f0(((undefined4 *)(gen_frame + 0x40)));
    F_004eea10(&(*(undefined4 *)(gen_frame + 0x10)),(uint)((undefined4 *)(gen_frame + 0x40)));
  }
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
  pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x38));
  F_00535480(&(*(undefined4 *)(gen_frame + 0x10)),&(*(undefined * PTR32 *)(gen_frame + 0x3c)),&(*(undefined * PTR32 *)(gen_frame + 0x38)));
  if (*(undefined * PTR32 *)((int)pvVar1 + 0x10) == (undefined *)0x0) {
LAB_00548b29: ;
    uVar3 = *(undefined1 *)((int)pvVar4 + 0xc4);
    uVar5 = *(undefined4 *)((int)pvVar4 + 0x54);
    (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0)) = uVar3;
    (*(undefined * PTR32 *)(gen_frame + 0x3c)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x3c)), 1, 3),uVar3)));
    bVar6 = F_0053a6b0(pvVar1,uVar5,(*(undefined * PTR32 *)(gen_frame + 0x3c)),&(*(float *)(gen_frame + 0x34)));
    puVar9 = ((undefined1 *)GEN_TOP(CONCAT31(extraout_var,bVar6)));
    if (*(byte *)((int)pvVar4 + 0xc4) == bVar6) goto LAB_00548bfe;
    (*(uint *)(gen_frame + 0x30)) = 1;
  }
  else {
    uVar8 = F_00a5f290(*(undefined * PTR32 *)((int)pvVar1 + 0x10));
    if (uVar8 == 0) goto LAB_00548b29;
    if (*(undefined * PTR32 *)((int)pvVar1 + 0x10) == (undefined *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = F_00a5f290(*(undefined * PTR32 *)((int)pvVar1 + 0x10));
    }
    bVar6 = F_00a9f620(uVar8);
    if (bVar6 == 0) goto LAB_00548b29;
    (*(float *)(gen_frame + 0x2c)) = REFG(float, 0x1305c98);
    if (*(char *)((int)pvVar4 + 0xc4) != '\0') {
      (*(float *)(gen_frame + 0x2c)) = REFG(float, 0x1305c9c);
    }
    if ((*(int *)((int)pvVar4 + 0xb4) != 4) ||
       ((*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x3c))))))))))),
       !((float10)(*(float *)(gen_frame + 0x2c)) < (float10)((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x3c))))))))))) goto LAB_00548b29;
    uVar5 = *(undefined4 *)((int)pvVar4 + 0x54);
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
    F_00541bc0(*(undefined * PTR32 *)((int)pvVar4 + 0x50),((undefined1 *)(gen_frame + 0x0)),uVar5);
    uVar8 = F_00535480(((undefined1 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)(gen_frame + 0x38)),0);
    fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x3c)))));
    (*(undefined * PTR32 *)(gen_frame + 0x3c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x38))))) + fVar13))));
    pvVar2 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x38))))) + fVar13)))))));
    (*(undefined * PTR32 *)(gen_frame + 0x3c)) = pvVar2;
    if (!((float10)(*(float *)(gen_frame + 0x2c)) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar2))))) goto LAB_00548b29;
    puVar9 = ((undefined1 *)GEN_TOP(CONCAT31((int3)(uVar8 >> 8),1)));
    (*(uint *)(gen_frame + 0x30)) = 2;
  }
  pvVar2 = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  cVar7 = (char)puVar9;
  if (*(char *)((int)pvVar4 + 0xc4) != cVar7) {
    uVar8 = (*(uint *)(gen_frame + 0x30));
    if (cVar7 == '\0') {
      uVar8 = *(uint *)((int)pvVar4 + 200);
    }
    if (uVar8 == 2) {
      (*(float *)(gen_frame + 0x34)) = REFG(float, 0x13796f8);
    }
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar1 + 0x10) + 0xc0)));
    (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    if ((float)REFG(float, 0x1087f04) < ((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar1)))) {
      (*(undefined * PTR32 *)(gen_frame + 0x3c)) = pvVar1;
    }
    fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x3c)))));
    iVar10 = *(int *)((int)pvVar4 + 0x58);
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar13 * (float10)(*(float *)(gen_frame + 0x34))))));
    *(char *)((int)pvVar4 + 0xc4) = cVar7;
    *(uint *)((int)pvVar4 + 200) = -(uint)(((uint)puVar9 & 0xff) != 0) & (*(uint *)(gen_frame + 0x30));
    if (iVar10 != 2) {
      if (cVar7 == '\0') {
        (*(undefined * PTR32 *)(gen_frame + 0x3c)) = pvVar2;
      }
      else {
        (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (undefined *)0x0;
      }
      F_00541240(pvVar4,((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x3c))))),(float)(fVar13 * (float10)(*(float *)(gen_frame + 0x34))));
    }
    puVar9 = (*(undefined1 * PTR32 *)(gen_frame + 0x28));
    if ((*(undefined1 * PTR32 *)(gen_frame + 0x28)) != (undefined1 *)0x0) {
      *(*(undefined1 * PTR32 *)(gen_frame + 0x28)) = 1;
    }
  }
LAB_00548bfe: ;
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return (uint)puVar9;
}

/* ref: FUN_00548c30 */
uint F_00548c30(unsigned int gen_a0)
{
  GEN_ENTER(0x548c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)((int)this + 0x5c) != '\0') {
    if ((*(int *)((int)this + 0x58) != 2) && (*(char *)((int)this + 0xc4) == '\0')) {
      uVar1 = F_00544e90(this);
      return uVar1;
    }
    if ((*(char *)((int)this + 0x5c) != '\0') &&
       (bVar2 = GEN_ISNAN(*(float *)((int)this + 0x220)) || GEN_ISNAN(REFG(float, 0x1090708)),
       bVar2 == (bVar2 || *(float *)((int)this + 0x220) == REFG(float, 0x1090708)))) {
      *(float *)((int)this + 0x220) = GEN_FLT_TO(*(float *)((int)this + 0x220), REFG(float, 0x1090708));
      *(undefined1 *)((int)this + 0x5c) = 0;
      *(undefined4 *)((int)this + 0x15c) = 0;
      *(undefined4 *)((int)this + 0x160) = 0;
      *(undefined4 *)((int)this + 0x164) = 0;
      *(undefined4 *)((int)this + 0x168) = 0;
      *(undefined4 *)((int)this + 0x16c) = 0;
      *(undefined4 *)((int)this + 0x170) = 0;
      *(undefined4 *)((int)this + 0x174) = 0;
      *(undefined4 *)((int)this + 0x178) = 0;
      *(undefined4 *)((int)this + 0x17c) = 0;
    }
  }
  if ((*(int *)((int)this + 0x20) == 1) || (*(int *)((int)this + 0x20) == 4)) {
    (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 100);
    fVar3 = *(float *)((int)this + 0x68);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    (*(float *)(gen_frame + 0x8)) = fVar3;
    F_0053a330(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    fVar3 = (*(float *)(gen_frame + 0x4));
    fVar4 = (*(float *)(gen_frame + 0x8));
  }
  else {
    fVar3 = *(float *)((int)this + 100);
    fVar4 = *(float *)((int)this + 0x68);
  }
  uVar1 = F_00540a50(this,(*(undefined * PTR32 (*)[1])REFP(0x109c95c)),fVar3,fVar4);
  return uVar1;
}

/* ref: FUN_00548d30 */
uint F_00548d30(unsigned int gen_a0)
{
  GEN_ENTER(0x548d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined4 uVar1;
  undefined * PTR32 * ppuVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005452f0(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  (*(float *)(gen_frame + 0x18)) = gen_bits2f(*(undefined4 *)((int)this + 0x88));
  uVar1 = *(undefined4 *)((int)this + 0x8c);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
  bVar4 = F_005319b0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  if (bVar4 == 0) {
    *(undefined4 *)((int)this + 0x88) = (*(undefined4 *)(gen_frame + 0x8));
    *(undefined4 *)((int)this + 0x8c) = (*(undefined4 *)(gen_frame + 0xc));
  }
  *(undefined1 *)((int)this + 0x94) = 1;
  ppuVar2 = *(undefined * PTR32 * PTR32 *)((int)this + 0x74);
  (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + 0x70);
  (*(float *)(gen_frame + 0x18)) = *(float *)((int)this + 0x78);
  puVar8 = (undefined4 *)((int)this + 0x240);
  puVar9 = ((undefined4 *)(gen_frame + 0x30));
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = ppuVar2;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  uVar5 = F_004eea10(&(*(float *)(gen_frame + 0x10)),(uint)((undefined4 *)(gen_frame + 0x30)));
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0x2c)) = fVar3;
  fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
  (*(float *)(gen_frame + 0x2c)) = fVar3;
  if ((float10)fVar3 < (float10)1) {
    pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x28));
    *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x90) = GEN_FLT_TO(*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x90), REFG(float, 0x1087f04));
    F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
    return (uint)pvVar6;
  }
  *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x90) = fVar3;
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return uVar5;
}

/* ref: FUN_00548e90 */
uint F_00548e90(unsigned int gen_a0)
{
  GEN_ENTER(0x548e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  undefined1 * puVar5;
  
  bVar2 = F_005415e0(this);
  *(byte *)((int)this + 0x928) = bVar2;
  uVar3 = *(uint *)((int)this + 0x924);
  if (uVar3 == 0xffffffff) {
    if (*(undefined * PTR32 *)((int)this + 0x10) == (undefined *)0x0) {
      return 0xffffffff;
    }
    uVar3 = F_00a5f500(*(undefined * PTR32 *)((int)this + 0x10));
    if (uVar3 == 0) {
      return 0;
    }
    if (*(char *)(uVar3 + 0x65) != '\x03') {
      return uVar3;
    }
    uVar3 = F_00688e80(uVar3);
    *(uint *)((int)this + 0x924) = uVar3;
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    puVar5 = (undefined1 *)((int)this + 0x311);
    do {
      uVar4 = *(uint *)(puVar5 + -0x2a1);
      if ((*(int *)(uVar4 + 0x10) != 0) && (*puVar5 = 0, *(int *)(puVar5 + -0x299) != 0)) {
        uVar1 = *(undefined4 *)(puVar5 + -0x29d);
        this_00 = (undefined *)F_00a5f500(*(undefined * PTR32 *)(uVar4 + 0x10));
        uVar4 = 0;
        if ((this_00 != (undefined *)0x0) && (uVar4 = F_00688eb0(this_00,uVar1), (char)uVar4 != '\0'))
        {
          uVar4 = F_00544b80(puVar5 + -0x2f1);
        }
      }
      puVar5 = puVar5 + 0x300;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar4;
}

/* ref: FUN_00548f30 */
unsigned int F_00548f30(unsigned int gen_a0)
{
  GEN_ENTER(0x548f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  int * piVar3;
  
  if (*(char *)((int)this + 0x928) == '\0') {
    return 0;
  }
  uVar1 = *(uint *)((int)this + 0x924);
  if (uVar1 == 0xffffffff) {
    if (*(undefined * PTR32 *)((int)this + 0x10) == (undefined *)0x0) {
      return 0;
    }
    uVar1 = F_00a5f500(*(undefined * PTR32 *)((int)this + 0x10));
    if (uVar1 == 0) {
      return 0;
    }
    if (*(char *)(uVar1 + 0x65) != '\x03') {
      return 0;
    }
    uVar1 = F_00688e80(uVar1);
    *(uint *)((int)this + 0x924) = uVar1;
  }
  if (uVar1 != 0) {
    piVar3 = (int *)((int)this + 0x78);
    do {
      if (*piVar3 != 0) {
        if ((*piVar3 == 2) || ((char)piVar3[0x1b] != '\0')) {
          F_00544a60(piVar3 + -0x16,0);
        }
        piVar2 = (int *)F_00540170(piVar3 + -0x16,((undefined1 *)(gen_frame + 0x0)));
        piVar3[0xa2] = *piVar2;
        piVar3[0xa3] = piVar2[1];
        piVar3[0xa4] = piVar2[2];
      }
      piVar3 = piVar3 + 0xc0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00548ff0 */
unsigned int F_00548ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x548ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x928) != '\0') {
    F_00548f30(this);
    return 0;
  }
  return 0;
}

/* ref: FUN_00549000 */
byte F_00549000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x549000u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  float param_6 = (float)gen_a5;
  uint param_7 = (uint)gen_a6;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  iVar2 = *param_1;
  if (iVar2 != param_2) {
    *param_1 = param_2;
  }
  iVar3 = param_1[1];
  if (iVar3 != param_3) {
    param_1[1] = param_3;
  }
  iVar4 = param_1[2];
  if (iVar4 != param_4) {
    param_1[2] = param_4;
  }
  iVar5 = param_1[3];
  if (iVar5 != param_5) {
    param_1[3] = param_5;
  }
  bVar7 = GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(param_1[4])))) || GEN_ISNAN((float10)param_6);
  bVar7 = bVar7 == (bVar7 || ((float10)GEN_TOD(gen_bits2f(param_1[4]))) == (float10)param_6);
  if (bVar7) {
    param_1[4] = (int)gen_fl2bits(param_6);
  }
  uVar1 = param_1[0xd];
  if (param_7 != uVar1) {
    param_1[0xd] = param_7;
  }
  if (((param_1[0xd] != 0) && ((param_1[0xe] & 0xc0000000U) == 0)) ||
     (uVar6 = param_7,
     param_7 != uVar1 ||
     (bVar7 || (iVar5 != param_5 || (iVar4 != param_4 || (iVar3 != param_3 || iVar2 != param_2))))))
  {
    F_005427c0(param_1);
    F_005466e0(param_1,GEN_TOF(gen_bits2f(param_1[4])));
    uVar6 = (uint)*(byte *)(param_1[3] + 0x1b);
    *(bool *)(param_1 + 0x1c) = *(byte *)(param_1[3] + 0x1b) != 0;
    *(undefined1 *)((int)param_1 + 0x71) = 1;
    param_1[0x1d] = (int)gen_fl2bits((float)((float10)uVar6 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
  }
  return (byte)uVar6;
}

/* ref: FUN_005490c0 */
uint F_005490c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5490c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  F_005468d0(param_1,param_2);
  uVar1 = F_00542aa0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_005490f0 */
uint F_005490f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5490f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005468d0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00549140 */
uint F_00549140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x549140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  if (*(int *)((int)this + 0x10) == 0) {
LAB_00549163: ;
    return in_EAX & 0xffffff00;
  }
  uVar2 = F_00ab2a20(param_1);
  in_EAX = 0;
  (*(uint *)(gen_frame + 0x5c)) = uVar2;
  if (uVar2 == 0) goto LAB_00549163;
  (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac0)));
  (*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x13059d0);
  (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac4)));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac8)));
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  if (param_2 != 0) {
    F_0054e3f0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_2);
  }
  in_EAX = 0;
  uVar2 = (uint)*(byte *)(uVar2 + 7);
  if (*(char *)(uVar2 + 0x1ee + (int)this) != '\0') goto LAB_00549163;
  if ((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x40)) + 2)) != '\0') goto LAB_005492a3;
  if ((*(uint *)(gen_frame + 0x24)) == 0xffffffff) {
    (*(uint *)(gen_frame + 0x24)) = (uint)*(byte *)((*(uint *)(gen_frame + 0x5c)) + 5);
    if ((((*(byte *)((*(uint *)(gen_frame + 0x5c)) + 5) == 0) && (*(char *)((*(uint *)(gen_frame + 0x5c)) + 0xd) == '\0')) &&
        (param_1 != 0x20)) && (param_1 != 0x3c)) {
      (*(uint *)(gen_frame + 0x24)) = 1;
    }
  }
  if (uVar2 == 0) {
    if ((char)param_3 != '\0') {
      F_005313f0(this);
    }
LAB_0054924e: ;
    (*(undefined4 *)(gen_frame + 0x58)) = *(undefined4 *)((int)this + uVar2 * 4 + 0x18);
  }
  else {
    if (uVar2 < 0xe) goto LAB_0054924e;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
  }
  F_005365b0(this,uVar2,param_1);
  if (uVar2 == 0) {
    F_0054f8b0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  uVar3 = F_00532100(this,uVar2);
  (*(uint *)(gen_frame + 0x54)) = uVar3;
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    this_00 = (undefined *)F_00a5f290(*(undefined * PTR32 *)((int)this + 0x10));
    if (this_00 != (undefined *)0x0) {
      F_00aa7040(this_00,param_1,uVar2,(*(uint *)(gen_frame + 0x5c)),(*(uint *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)));
    }
  }
LAB_005492a3: ;
  bVar1 = F_00546bb0(this,param_1,uVar2,(*(uint *)(gen_frame + 0x5c)),((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_005492d0 */
uint F_005492d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5492d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined3 extraout_var = 0;
  
  if (*(int *)((int)this + 0x10) != 0) {
    uVar2 = F_00ab2a20(param_1);
    (*(uint *)(gen_frame + 0x5c)) = uVar2;
    in_EAX = 0;
    if (uVar2 != 0) {
      (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac0)));
      (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac4)));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x13059d0);
      (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac8)));
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      in_EAX = 0;
      if (param_2 != 0) {
        in_EAX = F_0054e3f0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_2);
      }
      uVar2 = (uint)*(byte *)(uVar2 + 7);
      if (*(char *)(uVar2 + 0x1ee + (int)this) == '\0') {
        if (((((*(uint *)(gen_frame + 0x24)) == 0xffffffff) &&
             ((*(uint *)(gen_frame + 0x24)) = (uint)*(byte *)((*(uint *)(gen_frame + 0x5c)) + 5), *(byte *)((*(uint *)(gen_frame + 0x5c)) + 5) == 0)) &&
            (*(char *)((*(uint *)(gen_frame + 0x5c)) + 0xd) == '\0')) && ((param_1 != 0x20 && (param_1 != 0x3c)))) {
          (*(uint *)(gen_frame + 0x24)) = 1;
        }
        if (uVar2 < 0xe) {
          in_EAX = *(uint *)((int)this + uVar2 * 4 + 0x18);
        }
        else {
          in_EAX = 0;
        }
        if (((in_EAX != param_1) || (*(char *)((*(uint *)(gen_frame + 0x5c)) + 0xd) == '\0')) &&
           (((uVar2 != 0 && (uVar2 != 1)) ||
            (in_EAX = F_0053c3a0(this,(uint)(uVar2 == 1)), (int)in_EAX <= (int)(*(uint *)(gen_frame + 0x24)))))) {
          if (uVar2 == 0) {
            if ((char)param_3 != '\0') {
              F_005313f0(this);
            }
            (*(uint *)(gen_frame + 0x54)) = *(undefined4 *)((int)this + 0x18);
            F_005365b0(this,0,param_1);
            *(undefined4 *)((int)this + 0x14) = 1;
            F_0054f8b0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
            uVar2 = *(uint *)((int)this + 0x50);
            if (*(uint *)((int)this + 0x18) == uVar2) {
              uVar3 = *(uint *)((int)this + 0x27c);
            }
            else {
              uVar2 = F_00ab2a20(uVar2);
              uVar3 = uVar2;
            }
            if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
              pvVar4 = (undefined *)F_00a5f290(*(undefined * PTR32 *)((int)this + 0x10));
              uVar2 = 0;
              if (pvVar4 != (undefined *)0x0) {
                uVar2 = F_00aa7040(pvVar4,param_1,0,(*(uint *)(gen_frame + 0x5c)),uVar3,(*(uint *)(gen_frame + 0x54)));
              }
            }
            return CONCAT31((int3)(uVar2 >> 8),1);
          }
          if (uVar2 < 0xe) {
            (*(undefined4 *)(gen_frame + 0x58)) = *(undefined4 *)((int)this + uVar2 * 4 + 0x18);
          }
          else {
            (*(undefined4 *)(gen_frame + 0x58)) = 0;
          }
          F_005365b0(this,uVar2,param_1);
          uVar3 = F_00532100(this,uVar2);
          (*(uint *)(gen_frame + 0x54)) = uVar3;
          if ((*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) &&
             (pvVar4 = (undefined *)F_00a5f290(*(undefined * PTR32 *)((int)this + 0x10)), pvVar4 != (undefined *)0x0)) {
            F_00aa7040(pvVar4,param_1,uVar2,(*(uint *)(gen_frame + 0x5c)),(*(uint *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)));
          }
          bVar1 = F_00546bb0(this,param_1,uVar2,(*(uint *)(gen_frame + 0x5c)),((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
          return CONCAT31(extraout_var,bVar1);
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00549500 */
uint F_00549500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x549500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = 0xffffffff;
  uVar1 = 0;
  do {
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      *(undefined4 *)((int)param_1 + 0x150) = param_2;
      break;
    case 1: ;
      *(undefined4 *)((int)param_1 + 0x154) = param_3;
      break;
    case 2: ;
      *(undefined4 *)((int)param_1 + 0x158) = param_4;
      break;
    case 3: ;
      *(undefined4 *)((int)param_1 + 0x15c) = param_5;
    }
    if ((uVar3 == 0xffffffff) && (*(int *)((int)param_1 + uVar1 * 4 + 0x150) != 0)) {
      uVar3 = uVar1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  uVar2 = 0;
  if (uVar3 == 0xffffffff) {
    *(undefined4 *)((int)param_1 + 0x150) = 0;
    *(undefined4 *)((int)param_1 + 0x154) = 0;
    *(undefined4 *)((int)param_1 + 0x158) = 0;
    *(undefined4 *)((int)param_1 + 0x15c) = 0;
    *(undefined4 *)((int)param_1 + 0x164) = 0;
    fVar4 = REFG(float, 0x1090708);
    *(undefined4 *)((int)param_1 + 0x160) = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)((int)param_1 + uVar3 * 4 + 0x150);
    *(undefined4 *)((int)param_1 + 0x164) = 0;
    *(uint *)((int)param_1 + 0x160) = uVar3;
    fVar4 = param_6;
  }
  *(float *)((int)param_1 + 0x168) = fVar4;
  uVar3 = F_005492d0(param_1,uVar2,param_7,0);
  return uVar3;
}

/* ref: FUN_005495e0 */
uint F_005495e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5495e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint uVar4;
  
  (*(uint * PTR32 *)(gen_frame + 0x60)) = (uint *)((int)this + 0x18);
  (*(undefined * PTR32 *)(gen_frame + 0x6c)) = this;
  (*(uint *)(gen_frame + 0x64)) = 0;
  do {
    uVar2 = (*(uint *)(gen_frame + 0x64));
    if ((*(uint *)(gen_frame + 0x64)) != 0) {
      if ((*(uint *)(gen_frame + 0x64)) < 0xe) {
        uVar3 = (*(uint * PTR32 *)(gen_frame + 0x60))[0xe];
        in_EAX = *(*(uint * PTR32 *)(gen_frame + 0x60));
      }
      else {
        uVar3 = 0;
        in_EAX = 0;
      }
      if (uVar3 != in_EAX) {
        if ((*(uint *)(gen_frame + 0x64)) < 0xe) {
          in_EAX = *(*(uint * PTR32 *)(gen_frame + 0x60));
          (*(uint *)(gen_frame + 0x68)) = in_EAX;
        }
        else {
          (*(uint *)(gen_frame + 0x68)) = 0;
        }
        if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x6c)) + 0x10) != 0) {
          uVar3 = F_00ab2a20((*(uint *)(gen_frame + 0x68)));
          in_EAX = 0;
          if (uVar3 != 0) {
            uVar4 = (uint)*(byte *)(uVar3 + 7);
            in_EAX = 0;
            (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
            (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac0)));
            (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac4)));
            ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
            (*(undefined4 *)(gen_frame + 0x10)) = 0;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c)) = 0;
            (*(undefined4 *)(gen_frame + 0x20)) = 0;
            (*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x13059d0);
            (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
            (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac8)));
            (*(undefined4 *)(gen_frame + 0x40)) = 0;
            uVar2 = (*(uint *)(gen_frame + 0x64));
            if (*(char *)(uVar4 + 0x1ee + (int)(*(undefined * PTR32 *)(gen_frame + 0x6c))) == '\0') {
              if (REFG(undefined4, 0x13059d0) == 0xffffffff) {
                bVar1 = *(byte *)(uVar3 + 5);
                (*(uint *)(gen_frame + 0x24)) = (uint)bVar1;
                if ((((bVar1 == 0) && (*(byte *)(uVar3 + 0xd) == bVar1)) && ((*(uint *)(gen_frame + 0x68)) != 0x20)) &&
                   ((*(uint *)(gen_frame + 0x68)) != 0x3c)) {
                  (*(uint *)(gen_frame + 0x24)) = 1;
                }
              }
              if (uVar4 == 0) {
                F_005313f0((*(undefined * PTR32 *)(gen_frame + 0x6c)));
LAB_00549715: ;
                (*(undefined4 *)(gen_frame + 0x5c)) = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x6c)) + uVar4 * 4 + 0x18);
              }
              else {
                if (uVar4 < 0xe) goto LAB_00549715;
                (*(undefined4 *)(gen_frame + 0x5c)) = 0;
              }
              F_005365b0((*(undefined * PTR32 *)(gen_frame + 0x6c)),uVar4,(*(uint *)(gen_frame + 0x68)));
              if (uVar4 == 0) {
                F_0054f8b0((*(undefined * PTR32 *)(gen_frame + 0x6c)),((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
              }
              uVar2 = F_00532100((*(undefined * PTR32 *)(gen_frame + 0x6c)),uVar4);
              (*(uint *)(gen_frame + 0x58)) = uVar2;
              if ((*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x6c)) + 0x10) != (undefined *)0x0) &&
                 (this_00 = (undefined *)F_00a5f290(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x6c)) + 0x10)),
                 this_00 != (undefined *)0x0)) {
                F_00aa7040(this_00,(*(uint *)(gen_frame + 0x68)),uVar4,uVar3,(*(uint *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)));
              }
              bVar1 = F_00546bb0((*(undefined * PTR32 *)(gen_frame + 0x6c)),(*(uint *)(gen_frame + 0x68)),uVar4,uVar3,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
              in_EAX = CONCAT31(extraout_var,bVar1);
              uVar2 = (*(uint *)(gen_frame + 0x64));
            }
          }
        }
      }
    }
    (*(uint * PTR32 *)(gen_frame + 0x60)) = (*(uint * PTR32 *)(gen_frame + 0x60)) + 1;
    (*(uint *)(gen_frame + 0x64)) = uVar2 + 1;
    if (0xd < uVar2 + 1) {
      return in_EAX;
    }
  } while( true );
}

/* ref: FUN_005497c0 */
uint F_005497c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5497c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x3b04) = 0;
  *(undefined4 *)((int)this + 0x3b00) = 0xe0000000;
  F_00b74b70(this);
  uVar1 = F_00546f00((undefined *)((int)this + 0x30));
  *(undefined4 *)((int)this + 0x3b08) = 0;
  *(undefined4 *)((int)this + 0x3b0c) = 0;
  *(undefined4 *)((int)this + 0x3afc) = 1;
  return uVar1;
}

/* ref: FUN_00549810 */
uint F_00549810(unsigned int gen_a0)
{
  GEN_ENTER(0x549810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00974740(this_00);
    *(uint *)((int)this + 0x3b00) = uVar1;
    F_00b74c10(this);
    uVar1 = F_005470f0((undefined *)((int)this + 0x30));
    return uVar1;
  }
  *(undefined4 *)((int)this + 0x3b00) = 0xe0000000;
  F_00b74c10(this);
  uVar1 = F_005470f0((undefined *)((int)this + 0x30));
  return uVar1;
}

/* ref: FUN_00549860 */
uint F_00549860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x549860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined3 extraout_var = 0;
  
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = REFG(void * PTR32, 0x137104c);
  if (REFG(void * PTR32, 0x137104c) == (undefined *)0x0) goto LAB_00549a1c;
  piVar2 = (int *)F_00424750(REFG(void * PTR32, 0x137104c));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x84))(piVar2);
  if ((char)uVar3 != '\0') goto LAB_00549a1c;
  piVar2 = (int *)0x0;
  if ((REFG(int, 0x1375b64) == 0) || (!(REFG(float, 0x109c8ac) <= REFG(float, 0x1375b68)))) {
    piVar2 = *(int * PTR32 *)((int)this + 0x78);
    pvVar4 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
    if (piVar2 == (int *)0x0) {
      uVar3 = F_00a34e80(pvVar4,1);
      pvVar4 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
      uVar6 = F_00a34e80(pvVar4,0);
      piVar2 = (int *)F_0053c840(this,uVar6,uVar3,param_1,param_2);
LAB_00549966: ;
      if (piVar2 != (int *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
        if (uVar3 == 8) {
          piVar2 = (int *)F_00a356c0(piVar2);
        }
      }
    }
    else {
      bVar1 = F_00a34870(pvVar4,0x15c);
      if (bVar1 == 0) {
LAB_00549913: ;
        puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)))));
        *(undefined4 *)((int)this + 0x60) = *puVar5;
        *(undefined4 *)((int)this + 100) = puVar5[1];
        *(undefined4 *)((int)this + 0x68) = puVar5[2];
        goto LAB_00549966;
      }
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x109c9dc));
      (*(undefined4 *)(gen_frame + 0x4)) = 2;
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
      bVar1 = F_0053e290((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),piVar2);
      if (bVar1 != 0) goto LAB_00549913;
      piVar2 = (int *)0x0;
      *(undefined4 *)((int)this + 0x78) = 0;
    }
    if ((*(char *)((int)this + 0x93) != '\0') && (*(int *)((int)this + 0xfb0) != 0)) {
      uVar3 = F_00533630(this,piVar2);
      if ((char)uVar3 == '\0') {
        piVar2 = (int *)0x0;
      }
    }
  }
  uVar3 = *(uint *)((int)this + 0x2fd8);
  if ((7 < uVar3) ||
     ((*(int *)((int)this + uVar3 * 4 + 0x2fb8) != 0 &&
      ((7 < uVar3 || (*(int *)((int)this + uVar3 * 4 + 0x2fb8) != 3)))))) {
    *(int * PTR32 *)((int)this + 0x58) = piVar2;
  }
  pvVar4 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar1 = F_00a34970(pvVar4,0x21);
  if (bVar1 != 0) {
    F_005433c0(this,piVar2,(uint)(*(int *)((int)this + 0x78) != 0));
  }
  F_00424770(REFG(void * PTR32, 0x137104c));
  if (REFG(char, 0x1375b3c) != '\0') {
    F_0053d7d0(this,piVar2,(uint)(*(int *)((int)this + 0x78) != 0));
  }
LAB_00549a1c: ;
  F_00424770(REFG(void * PTR32, 0x137104c));
  if (REFG(char, 0x1375b39) != '\0') {
    bVar1 = F_00ac3640(&REFG(undefined, 0x14bcf40));
    if (bVar1 == 0) {
      F_005476b0(this,*(undefined4 *)((int)this + 0x58),1);
    }
    uVar3 = *(uint *)((int)this + 0x2fd8);
    if ((7 < uVar3) ||
       ((*(int *)((int)this + uVar3 * 4 + 0x2fb8) != 0 &&
        ((7 < uVar3 || (*(int *)((int)this + uVar3 * 4 + 0x2fb8) != 3)))))) {
      *(undefined4 *)((int)this + 0x74) = 0;
      *(undefined1 *)((int)this + 0x70) = 0;
    }
  }
  bVar1 = F_00ac3640(&REFG(undefined, 0x14bcf40));
  if (bVar1 == 0) {
    F_00424770(REFG(void * PTR32, 0x137104c));
    if (REFG(char, 0x1375b3a) != '\0') {
      F_00547560(this,*(undefined4 *)((int)this + 0x58),1);
    }
  }
  pvVar4 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar1 = F_00a34de0(pvVar4,0x22);
  uVar3 = CONCAT31(extraout_var,bVar1);
  if ((bVar1 != 0) &&
     ((uVar3 = *(uint *)((int)this + 0x2fd8), 7 < uVar3 ||
      ((*(int *)((int)this + uVar3 * 4 + 0x2fb8) != 0 &&
       ((7 < uVar3 || (*(int *)((int)this + uVar3 * 4 + 0x2fb8) != 3)))))))) {
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined1 *)((int)this + 0x70) = 0;
  }
  return uVar3;
}

/* ref: FUN_00549b00 */
uint F_00549b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x549b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((param_1 != -0x20000000) || (param_2 != 0)) {
    uVar2 = F_00ab1290(param_1,param_2);
  }
  uVar1 = F_00538440(this,uVar2,*(float *)&REFG(undefined, 0x1305c48));
  if ((char)uVar1 != '\0') {
    F_00543c30(this,uVar2,0);
    if ((char)param_3 != '\0') {
      F_00a7eea0(&REFG(undefined1, 0x14ab068),param_3);
    }
    uVar1 = F_005335a0(uVar2);
  }
  return uVar1;
}

/* ref: FUN_00549b70 */
uint F_00549b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x549b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x5f0];
  uint uVar1;
  uint uVar2;
  char * pcVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x5e8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5ec);
  (*(uint *)(gen_frame + 0x5bc)) = (*(uint *)(gen_frame + 0x5bc)) | 1;
  uVar1 = 0;
  (*(undefined4 *)(gen_frame + 0x590)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x594)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x598)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x59c)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x5a0)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x5a4)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x5a8)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x5ac)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x5b0)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x5b4)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x5c0)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x5c4)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x5c8)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x5cc)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x5d0)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x5d4)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x5d8)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x5dc)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x5e0)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x5e4)) = 0x11;
  uVar2 = ~-(uint)(REFG(int, 0x1375bbc) != 0) & REFG(undefined4, 0x1375b90);
  ((undefined4 *)(gen_frame + 0x8))[0] = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar4 = 2;
    (*(undefined4 *)(gen_frame + 0x5c0)) = 3;
    (*(undefined4 *)(gen_frame + 0x5c4)) = 7;
    pcVar3 = "TargetNearest";
    break;
  case 1: ;
    (*(undefined4 *)(gen_frame + 0x5c0)) = 0;
    pcVar3 = "TargetNearestPc";
    goto LAB_00549c2e;
  case 2: ;
    (*(undefined4 *)(gen_frame + 0x5c0)) = 2;
    pcVar3 = "NearestEnemy";
    goto LAB_00549c79;
  case 3: ;
    uVar4 = 2;
    (*(undefined4 *)(gen_frame + 0x5c0)) = 1;
    (*(undefined4 *)(gen_frame + 0x5c4)) = 7;
    pcVar3 = "NearestPartyMember";
    break;
  case 4: ;
    (*(undefined4 *)(gen_frame + 0x5c0)) = 6;
    pcVar3 = "NearestPlayer";
LAB_00549c2e: ;
    (*(undefined4 *)(gen_frame + 0x5c4)) = 7;
    F_0053e150(((undefined1 *)(gen_frame + 0x56c)),pcVar3,0,&(*(undefined4 *)(gen_frame + 0x5c0)),2,0);
    F_00547d80(this,((undefined1 *)(gen_frame + 0x56c)),((undefined4 *)(gen_frame + 0x8)));
joined_r0x00549c95: ;
    if (uVar2 == 0) goto switchD_00549bf7_default;
    goto LAB_00549d3f;
  case 5: ;
    uVar1 = REFG(undefined4, 0x1379694);
    goto switchD_00549bf7_default;
  case 6: ;
    uVar1 = *(uint *)((int)this + 0x88);
    goto switchD_00549bf7_default;
  case 7: ;
    (*(undefined4 *)(gen_frame + 0x5c0)) = 4;
    pcVar3 = "NearestNPC";
LAB_00549c79: ;
    F_0053e150(((undefined1 *)(gen_frame + 0x56c)),pcVar3,0,&(*(undefined4 *)(gen_frame + 0x5c0)),1,0);
    F_00547d80(this,((undefined1 *)(gen_frame + 0x56c)),((undefined4 *)(gen_frame + 0x8)));
    goto joined_r0x00549c95;
  case 8: ;
    uVar4 = 1;
    (*(undefined4 *)(gen_frame + 0x5c0)) = 0x12;
    pcVar3 = "NearestTreasure";
    break;
  default: ;
    goto switchD_00549bf7_default;
  }
  F_0053e150(((undefined1 *)(gen_frame + 0x56c)),pcVar3,0,&(*(undefined4 *)(gen_frame + 0x5c0)),uVar4,0);
  F_00547d80(this,((undefined1 *)(gen_frame + 0x56c)),((undefined4 *)(gen_frame + 0x8)));
  if (uVar2 != 0) {
LAB_00549d3f: ;
    uVar1 = F_0053ce50(this,((undefined4 *)(gen_frame + 0x8)),uVar2,1);
  }
switchD_00549bf7_default: ;
  F_00c47745((*(uint *)(gen_frame + 0x5e8)) ^ (uint)(uint)(gen_frame + 0x5ec));
  return uVar1;
}

/* ref: FUN_00549d90 */
unsigned int F_00549d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x549d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((REFG(int, 0x1375bbc) == 0) && (REFG(int, 0x1375b90) != 0)) {
    F_00547b40(this,REFG(int, 0x1375b90),(int)this + 0xfb8,param_1);
  }
  return 0;
}

/* ref: FUN_00549dc0 */
unsigned int F_00549dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x549dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float * pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint3 uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  float fVar10;
  double dVar11;
  
  uVar7 = (*(uint *)(gen_frame + 0x17));
  fVar10 = 0.0;
  iVar3 = *(int *)((int)this + 0x38);
  pfVar1 = (float *)((int)this + 0x30);
  (*(uint *)(gen_frame + 0x17)) = (*(uint *)(gen_frame + 0x17)) & 0xffffff00;
  if (((iVar3 != 0x49) && (iVar3 == 0x12)) && (iVar4 = *(int *)((int)this + 0x34), -1 < iVar4)) {
    if (iVar4 < 2) {
      (*(double *)(gen_frame + 0xc)) = (double)*pfVar1;
      dVar11 = F_00533d80(iVar4);
      if ((GEN_ISNAN((*(double *)(gen_frame + 0xc))) || GEN_ISNAN(dVar11)) == ((GEN_ISNAN((*(double *)(gen_frame + 0xc))) || GEN_ISNAN(dVar11)) || (*(double *)(gen_frame + 0xc)) == dVar11))
      goto LAB_00549df8;
LAB_00549e65: ;
      (*(uint *)(gen_frame + 0x17)) = CONCAT31((int3)SUB43(uVar7,1),1);
    }
    else if (iVar4 == 2) {
      if (!GEN_ISNAN(*pfVar1) && !(0.0 < *pfVar1)) goto LAB_00549e65;
LAB_00549df8: ;
      (*(uint *)(gen_frame + 0x17)) = uVar7 & 0xffffff00;
    }
  }
  bVar5 = false;
  if (((iVar3 != 0x49) && (iVar3 == 0x13)) && (iVar4 = *(int *)((int)this + 0x34), -1 < iVar4)) {
    if (iVar4 < 2) {
      (*(double *)(gen_frame + 0xc)) = (double)*pfVar1;
      dVar11 = F_00533d80(iVar4);
      if ((GEN_ISNAN((*(double *)(gen_frame + 0xc))) || GEN_ISNAN(dVar11)) == ((GEN_ISNAN((*(double *)(gen_frame + 0xc))) || GEN_ISNAN(dVar11)) || (*(double *)(gen_frame + 0xc)) == dVar11))
      goto LAB_00549e20;
LAB_00549e83: ;
      bVar5 = true;
    }
    else if (iVar4 == 2) {
      if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(*pfVar1)) && !(fVar10 < *pfVar1)) goto LAB_00549e83;
LAB_00549e20: ;
      bVar5 = false;
    }
  }
  cVar8 = '\0';
  uVar6 = GEN_PIECE(&(*(double *)(gen_frame + 0xc)), 5, 3);
  (*(double *)(gen_frame + 0xc)) = gen_bits2d((ulonglong)GEN_PIECE(&(*(double *)(gen_frame + 0xc)), 5, 3) << 0x28);
  if (((iVar3 != 0x49) && (iVar3 == 0x15)) && (iVar4 = *(int *)((int)this + 0x34), -1 < iVar4)) {
    if (iVar4 < 2) {
      fVar2 = *pfVar1;
      dVar11 = F_00533d80(iVar4);
      bVar9 = GEN_ISNAN((double)fVar2) || GEN_ISNAN(dVar11);
      if (bVar9 == (bVar9 || (double)fVar2 == dVar11)) {
LAB_00549ea5: ;
        cVar8 = '\0';
      }
      else {
        cVar8 = '\x01';
      }
    }
    else {
      if (iVar4 != 2) goto LAB_00549eaa;
      if (!(*pfVar1 <= fVar10)) goto LAB_00549ea5;
      cVar8 = '\x01';
    }
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0xc)) + 4)) = CONCAT31(uVar6,cVar8);
  }
LAB_00549eaa: ;
  bVar9 = false;
  if (((iVar3 == 0x49) || (iVar3 != 0x14)) || (iVar3 = *(int *)((int)this + 0x34), iVar3 < 0))
  goto LAB_00549ece;
  if (iVar3 < 2) {
    fVar10 = *pfVar1;
    dVar11 = F_00533d80(iVar3);
    bVar9 = GEN_ISNAN((double)fVar10) || GEN_ISNAN(dVar11);
    if (bVar9 != (bVar9 || (double)fVar10 == dVar11)) {
LAB_00549f14: ;
      bVar9 = true;
      goto LAB_00549ece;
    }
  }
  else {
    if (iVar3 != 2) goto LAB_00549ece;
    if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(*pfVar1)) && !(fVar10 < *pfVar1)) goto LAB_00549f14;
  }
  bVar9 = false;
LAB_00549ece: ;
  if ((cVar8 != '\0') || (bVar9)) {
    F_00547b40(this,param_1,param_2,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0xc)) + 4)));
  }
  else if ((bVar5) || ((char)(*(uint *)(gen_frame + 0x17)) != '\0')) {
    F_0053dc80(this,param_1,param_2,(*(uint *)(gen_frame + 0x17)));
    return 0;
  }
  return 0;
}

/* ref: FUN_00549f40 */
uint F_00549f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x549f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00547d80(this,param_1,(int)this + 0x151c);
  return uVar1;
}

/* ref: FUN_00549f60 */
byte F_00549f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x549f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  bVar1 = F_00a9f620(*(int *)((int)this + 8));
  if (bVar1 == 0) {
    F_00548460(this,param_1,param_3,0);
    F_0053f8e0(this,param_1,param_3);
  }
  return 1;
}

/* ref: FUN_00549fb0 */
unsigned int F_00549fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x549fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(int *)((int)this + 0x14) == 0) {
    return 0;
  }
  if (*(int *)((int)this + 0x18) == 0) {
    bVar3 = F_00a9fc40(*(undefined4 *)((int)this + 0x10));
    if (((bVar3 == 0) && (iVar1 = *(int *)((int)this + 0x14), 0 < iVar1)) &&
       ((iVar1 < 7 || (iVar1 == 10)))) {
      uVar4 = F_00aa0580(*(undefined * PTR32 *)((int)this + 0x10),0);
      if ((((*((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x14) * 4 + 0x1c))) != uVar4) &&
           (uVar5 = F_00ab2a20(uVar4), uVar5 != 0)) && (*(byte *)(uVar5 + 6) != 0)) &&
         ((uint)*(byte *)(uVar5 + 6) == *(uint *)((int)this + 0x14))) {
        *((uint *)GEN_TOP(((int)this + *(uint *)((int)this + 0x14) * 4 + 0x1c))) = uVar4;
      }
      uVar5 = F_00aa0210(*(undefined4 *)((int)this + 0x10),0,0);
      uVar4 = *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x14) * 4 + 0x1c)));
      if (((uVar5 != uVar4) && (uVar4 != 0)) &&
         ((uVar4 = F_00aa0680(*(undefined * PTR32 *)((int)this + 0x10),0,0), uVar5 == 0 ||
          ((uVar4 != 0 && (*(char *)(uVar4 + 0xd) != '\0')))))) {
        F_0053fe90(this,*(undefined4 *)((int)this + 0x14),*(undefined4 *)((int)this + 0x14));
      }
    }
    if (*(int *)((int)this + 0x18) == 0) {
      return 0;
    }
  }
  uVar4 = *(uint *)((int)this + 0x14);
  if (((0 < (int)uVar4) &&
      ((((int)uVar4 < 7 || (uVar4 == 10)) && (*(char *)((int)this + 0x60) != '\0')))) &&
     (uVar4 == *(uint *)((int)this + 100))) {
    F_005346b0(this,uVar4);
    *(undefined1 *)((int)this + 0x60) = 0;
  }
  iVar1 = *(int *)((int)this + 0x10);
  bVar2 = false;
  if (*(int *)((int)this + 0x14) == 0xf) {
    bVar6 = GEN_ISNAN(*(float *)(iVar1 + 0x2ec8)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    if (bVar6 == (bVar6 || *(float *)(iVar1 + 0x2ec8) == *(float *)&REFG(undefined, 0x1088114)))
    goto LAB_0054a163;
    *(undefined4 *)(iVar1 + 0x2ec8) = GEN_FLT_TO(*(undefined4 *)(iVar1 + 0x2ec8), REFG(float, 0x109c800));
  }
  else {
    uVar4 = F_00aa0210(iVar1,0,0);
    uVar4 = F_00ab2a20(uVar4);
    iVar1 = *(int *)((int)this + 0x14);
    if ((iVar1 != *(int *)((int)this + 0x18)) || (*(int *)((int)this + 100) == iVar1)) {
      if ((uVar4 == 0) || (*(char *)(uVar4 + 0xd) == '\0')) {
        uVar4 = F_00aa2d30(*(undefined * PTR32 *)((int)this + 0x10),0);
        bVar3 = (byte)uVar4;
      }
      else {
        if (*(int *)((int)this + 100) == iVar1) {
          bVar3 = F_00a9fc40(*(undefined4 *)((int)this + 0x10));
          if (bVar3 != 0) goto LAB_0054a163;
          bVar2 = true;
          goto LAB_0054a125;
        }
        bVar3 = F_00534840(this);
      }
      if (bVar3 != 0) goto LAB_0054a163;
    }
  }
LAB_0054a125: ;
  uVar7 = *(undefined4 *)((int)this + 0x14);
  uVar4 = F_0053fa10(uVar7,*(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 100),
                       (uint)*(byte *)((int)this + 0x60),1);
  *(uint *)((int)this + 0x14) = uVar4;
  F_0053fe90(this,uVar7,uVar4);
  if (bVar2) {
    *(undefined4 *)((int)this + 0x5c) = 0;
    *(undefined4 *)((int)this + 100) = 0;
    *(undefined1 *)((int)this + 0x60) = 0;
  }
LAB_0054a163: ;
  iVar1 = *(int *)((int)this + 0x14);
  if ((iVar1 == *(int *)((int)this + 0x18)) && (*(char *)((int)this + 0x60) == '\0')) {
    if ((iVar1 < 1) || ((6 < iVar1 && (iVar1 != 10)))) {
      if (*(char *)((int)this + 0xc6) == '\0') {
        if (*(char *)((int)this + 0xc4) == '\0') {
          uVar4 = F_0053fa10(iVar1,*(int *)((int)this + 0x18),*(undefined4 *)((int)this + 100),0,0
                              );
          *(uint *)((int)this + 0x18) = uVar4;
          return 0;
        }
        F_005344d0(this);
        return 0;
      }
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar4 = F_00aa0580(*(undefined * PTR32 *)((int)this + 0x10),0);
      F_005486f0(this,uVar4,uVar7,uVar8,uVar9);
    }
    else {
      bVar3 = F_00a9fc40(*(undefined4 *)((int)this + 0x10));
      if (((bVar3 == 0) && (F_005344d0(this), *(char *)((int)this + 0xc5) == '\0')) &&
         (*(char *)((int)this + 0xc6) == '\0')) {
        F_00aa0560(*(undefined4 *)((int)this + 0x10),
                     *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x14) * 4 + 0x1c))));
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_0054a210 */
uint F_0054a210(unsigned int gen_a0)
{
  GEN_ENTER(0x54a210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 uVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  float * pfVar6;
  undefined3 extraout_var = 0;
  float fVar7;
  
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x50);
  (*(undefined * PTR32 *)(gen_frame + 0x8c)) = pvVar3;
  if (*(int *)((int)pvVar3 + 0x10) == 0) {
    return (uint)pvVar3;
  }
  if ((int)this + 0x10 == 0) {
    return (uint)pvVar3;
  }
  if (*(int *)((int)this + 0x58) == 0) {
    return (uint)pvVar3;
  }
  uVar1 = *(undefined4 *)((int)this + 0x54);
  (*(float *)(gen_frame + 0x90)) = REFG(float, 0x1375ac0);
  (*(float *)(gen_frame + 0x94)) = REFG(float, 0x1375ac4);
  (*(float *)(gen_frame + 0x98)) = REFG(float, 0x1375ac8);
  (*(undefined4 *)(gen_frame + 0x6c)) = uVar1;
  pvVar3 = (undefined *)F_00a5f500(*(undefined * PTR32 *)((int)pvVar3 + 0x10));
  uVar4 = 0;
  if ((pvVar3 == (undefined *)0x0) ||
     (uVar4 = F_00688eb0(pvVar3,(*(undefined4 *)(gen_frame + 0x6c))), pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x8c)), (char)uVar4 == '\0'))
  goto LAB_0054a500;
  if (*(int *)((int)this + 0x58) == 1) {
    switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x20))) {
    case 1: ;
      uVar5 = F_00475fa0(*(undefined4 *)((int)this + 0x28),*(undefined4 *)((int)this + 0x2c));
      uVar4 = 0;
      if (uVar5 == 0) goto LAB_0054a500;
      pfVar6 = (float *)F_00541a30(*(undefined * PTR32 *)((int)this + 0x50),((undefined1 *)(gen_frame + 0x40)),uVar5,(int)this + 0x10);
      pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x8c));
      (*(float *)(gen_frame + 0x90)) = *pfVar6;
      (*(float *)(gen_frame + 0x94)) = pfVar6[1];
      (*(float *)(gen_frame + 0x98)) = pfVar6[2];
      uVar4 = F_00541e80((*(undefined * PTR32 *)(gen_frame + 0x8c)),((undefined1 *)(gen_frame + 0x50)),*(undefined4 *)((int)this + 0x54));
      uVar5 = F_00535ae0(pvVar3);
      pfVar6 = (float *)F_004bd670(((undefined1 *)(gen_frame + 0x10)),uVar5,uVar4);
      (*(float *)(gen_frame + 0x90)) = (float)((float10)(*(float *)(gen_frame + 0x90)) - (float10)*pfVar6);
      (*(float *)(gen_frame + 0x94)) = (float)((float10)(*(float *)(gen_frame + 0x94)) - (float10)pfVar6[1]);
      (*(float *)(gen_frame + 0x98)) = (float)((float10)(*(float *)(gen_frame + 0x98)) - (float10)pfVar6[2]);
      break;
    case 2: ;
    case 3: ;
      uVar4 = *(uint *)((int)this + 0x30);
      (*(float *)(gen_frame + 0x90)) = 0.0;
      (*(float *)(gen_frame + 0x94)) = 0.0;
      (*(float *)(gen_frame + 0x98)) = REFG(float, 0x109c8ac);
      F_0054efa0(&(*(undefined4 *)(gen_frame + 0x70)),GEN_TOF(gen_bits2f(*(uint *)((int)this + 0x28) ^ REFG(uint, 0x10920d0))),GEN_TOF(gen_bits2f(*(uint *)((int)this + 0x2c) ^ REFG(uint, 0x10920d0))),GEN_TOF(gen_bits2f(uVar4 ^ REFG(uint, 0x10920d0))));
      F_004f41e0(&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x70)));
      break;
    case 4: ;
      uVar1 = *(undefined4 *)((int)this + 0x54);
      (*(undefined4 *)(gen_frame + 0x70)) = *(undefined4 *)((int)this + 0x28);
      (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)((int)this + 0x2c);
      (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)((int)this + 0x30);
      uVar4 = F_00541e80((*(undefined * PTR32 *)(gen_frame + 0x8c)),((undefined1 *)(gen_frame + 0x30)),uVar1);
      uVar5 = F_00535ae0(pvVar3);
      uVar4 = F_004bd670(((undefined1 *)(gen_frame + 0x20)),uVar5,uVar4);
      pfVar6 = (float *)F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x70)),uVar4);
      (*(float *)(gen_frame + 0x90)) = *pfVar6;
      (*(float *)(gen_frame + 0x94)) = pfVar6[1];
      (*(float *)(gen_frame + 0x98)) = pfVar6[2];
    }
  }
  else {
    uVar4 = 0;
    if (*(int *)((int)this + 0x58) == 2) goto LAB_0054a500;
  }
  F_005397f0(this,((undefined1 *)(gen_frame + 0x50)));
  F_0046f4a0(&(*(undefined4 *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x90)),(float *)((int)this + 0x70));
  fVar7 = F_004bd280(&(*(undefined4 *)(gen_frame + 0x70)));
  if (((!GEN_ISNAN((float10)fVar7) && !GEN_ISNAN((float10)*(float *)&REFG(undefined, 0x109c854))) &&
       !((float10)fVar7 < (float10)*(float *)&REFG(undefined, 0x109c854))) ||
     (*(char *)((int)this + 0x80) == '\0')) {
    *(float *)((int)this + 0x70) = (*(float *)(gen_frame + 0x90));
    *(float *)((int)this + 0x74) = (*(float *)(gen_frame + 0x94));
    *(float *)((int)this + 0x78) = (*(float *)(gen_frame + 0x98));
    *(undefined1 *)((int)this + 0x80) = 1;
  }
  F_005397f0(this,((undefined1 *)(gen_frame + 0x40)));
  F_0046f4a0(&(*(undefined4 *)(gen_frame + 0x70)),((undefined1 *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0x50)));
  fVar7 = F_004bd280(&(*(undefined4 *)(gen_frame + 0x70)));
  if (((GEN_ISNAN((float10)fVar7) || GEN_ISNAN((float10)*(float *)&REFG(undefined, 0x109c854))) ||
       (float10)fVar7 < (float10)*(float *)&REFG(undefined, 0x109c854)) && (*(char *)((int)this + 0x94) != '\0'))
  {
    bVar2 = F_00534970(this);
    uVar4 = CONCAT31(extraout_var,bVar2);
    if ((bVar2 != 0) || (*(char *)((int)this + 0x22c) != '\0')) goto LAB_0054a4d5;
  }
  else {
LAB_0054a4d5: ;
    F_00540e20(this);
    uVar4 = F_00548d30(this);
  }
  if ((*(int *)((int)this + 0x58) != 2) && (*(char *)((int)this + 0xc4) == '\0')) {
    uVar4 = F_00545bb0(this);
    *(uint *)((int)this + 0x230) = *(uint *)((int)this + 0x230) & 0xfffffffe;
  }
LAB_0054a500: ;
  *(undefined1 *)((int)this + 0x22c) = 0;
  return uVar4;
}

/* ref: FUN_0054a540 */
unsigned int F_0054a540(unsigned int gen_a0)
{
  GEN_ENTER(0x54a540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x10) != 0) {
    if ((*(int *)((int)this + 0x14) == 1) && (*(int *)((int)this + 0x18) != 0)) {
      F_00546bb0(this,*(int *)((int)this + 0x18),0,*(undefined4 *)((int)this + 0x27c),
                   (int)this + 0x100);
    }
    F_00536520(this);
    return 0;
  }
  return 0;
}

/* ref: FUN_0054a780 */
uint F_0054a780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54a780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  puVar1 = (undefined4 *)F_00549b70(this,param_1);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    lVar4 = ((gen_lcode *)*(gen_code32 *)*puVar1)(puVar1);
    uVar3 = 0;
    if (lVar4 != 0xe0000000) {
      uVar3 = F_00ab1290((int)lVar4,(int)((ulonglong)lVar4 >> 0x20));
    }
    uVar2 = F_00538440(this,uVar3,*(float *)&REFG(undefined, 0x1305c48));
    if ((char)uVar2 != '\0') {
      F_00543c30(this,uVar3,0);
      uVar2 = F_005335a0(uVar3);
    }
  }
  return uVar2;
}

/* ref: FUN_0054a7f0 */
unsigned int F_0054a7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54a7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x5a0];
  int iVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  int * piVar8;
  uint uVar9;
  int * piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0x598)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x59c);
  (*(int * PTR32 *)(gen_frame + 0x570)) = param_2;
  (*(undefined4 *)(gen_frame + 0x574)) = param_1;
  pvVar3 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar2 = F_00a34970(pvVar3,2);
  if (bVar2 == 0) {
    bVar2 = F_00a34970(pvVar3,3);
    if (bVar2 == 0) goto LAB_0054a84f;
  }
  bVar2 = F_00ac3640(&REFG(undefined, 0x14bcf40));
  if (bVar2 == 0) {
    F_00547210(this);
  }
LAB_0054a84f: ;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x578))[0] = (undefined * PTR32 *)0x2a;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x578))[1] = (undefined * PTR32 *)0x2b;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x578))[2] = (undefined * PTR32 *)0x2c;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x578))[3] = (undefined * PTR32 *)0x2d;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x578))[4] = (undefined * PTR32 *)0x2e;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x578))[5] = (undefined * PTR32 *)0x2f;
  (*(undefined * PTR32 *)(gen_frame + 0x590)) = (undefined *)0x30;
  (*(uint *)(gen_frame + 0x594)) = 0x31;
  uVar9 = 0;
  do {
    uVar4 = F_0053b420(&REFG(undefined, 0x1375b30),((undefined * PTR32 * PTR32 *)(gen_frame + 0x578))[(int)(uVar9)]);
    if (((char)uVar4 != '\0') && (uVar9 < REFG(undefined1, 0x1338ad4))) {
      puVar5 = (undefined4 *)F_00ae0850(&REFG(undefined, 0x1336e40),uVar9);
      if (puVar5 != (undefined4 *)0x0) {
        uVar4 = F_00a64450(&REFG(undefined, 0x14a9a18),*puVar5);
        if (uVar4 != 0) {
          uVar6 = F_00538440(this,uVar4,*(float *)&REFG(undefined, 0x109c084));
          if ((char)uVar6 != '\0') {
            F_00543c30(this,uVar4,0);
          }
        }
      }
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 8);
  F_00424770(REFG(void * PTR32, 0x137104c));
  pvVar3 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar2 = F_00a34970(pvVar3,0x159);
  if (bVar2 != 0) {
    iVar1 = *(*(int * PTR32 *)(gen_frame + 0x570));
    if (0 < iVar1) {
      piVar10 = ((int *)(gen_frame + 0x10));
      piVar8 = (*(int * PTR32 *)(gen_frame + 0x570));
      for (iVar7 = iVar1; piVar8 = piVar8 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar10 = *piVar8;
        piVar10 = piVar10 + 1;
      }
    }
    uVar9 = (*(uint *)(gen_frame + 0x594));
    (*(int *)(gen_frame + 0xc)) = iVar1;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x578))[4] = (*(undefined * PTR32 (*)[2])REFP(0x109ca48));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x578))[5] = (undefined * PTR32 *)0x2;
    (*(undefined * PTR32 *)(gen_frame + 0x590)) = this;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x594)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x594)) = uVar9 & 0xffffff00;
    F_00538c50(&(*(int *)(gen_frame + 0xc)),((undefined * PTR32 * PTR32 *)(gen_frame + 0x578)) + 4);
    if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
      uVar12 = 1;
      uVar11 = (*(undefined4 *)(gen_frame + 0x574));
      uVar9 = F_00a5feb0(REFG(void * PTR32, 0x1379694));
      uVar9 = F_0053cd70(this,&(*(int *)(gen_frame + 0xc)),uVar9,uVar11,uVar12);
      if (uVar9 != 0) {
        F_00543c30(this,uVar9,0);
      }
    }
  }
  pvVar3 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar2 = F_00a34970(pvVar3,0x15a);
  if (bVar2 != 0) {
    uVar9 = F_0053d810(this,6,7,1);
    if (uVar9 != 0) {
      F_00543c30(this,uVar9,0);
    }
  }
  pvVar3 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar2 = F_00a34970(pvVar3,0x15b);
  if (bVar2 != 0) {
    uVar9 = F_0053d810(this,5,3,1);
    if (uVar9 != 0) {
      F_00543c30(this,uVar9,0);
    }
  }
  F_00549dc0(this,(*(undefined4 *)(gen_frame + 0x574)),(*(int * PTR32 *)(gen_frame + 0x570)));
  F_00c47745((*(uint *)(gen_frame + 0x598)) ^ (uint)(uint)(gen_frame + 0x59c));
  return 0;
}

/* ref: Client::Game::Control::TargetSystem::vf0 */
uint F_0054aa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54aa40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00547d80(this,this + *(int *)(this + 0xf54) * 0x54 + 0xa8,this + 0x151c);
  return uVar1;
}

/* ref: Client::Game::Control::TargetSystem::vf1 */
uint F_0054aa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54aa70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)(this + 0x40) == param_1) {
    *(undefined4 *)(this + 0x40) = 0;
  }
  if (*(int *)(this + 0x44) == param_1) {
    *(undefined4 *)(this + 0x44) = 0;
  }
  if (*(int *)(this + 0x48) == param_1) {
    *(undefined4 *)(this + 0x48) = 0;
  }
  if (*(int *)(this + 0x4c) == param_1) {
    *(undefined4 *)(this + 0x4c) = 0;
  }
  if (*(int *)(this + 0x50) == param_1) {
    *(undefined4 *)(this + 0x50) = 0;
  }
  if (*(int *)(this + 0x54) == param_1) {
    *(undefined4 *)(this + 0x54) = 0;
  }
  if (*(int *)(this + 0x58) == param_1) {
    *(undefined4 *)(this + 0x58) = 0;
  }
  if (*(int *)(this + 0x74) == param_1) {
    *(undefined4 *)(this + 0x74) = 0;
  }
  if (*(int *)(this + 0x78) == param_1) {
    *(undefined4 *)(this + 0x78) = 0;
  }
  if (*(int *)(this + 0x7c) == param_1) {
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (*(int *)(this + 0x80) == param_1) {
    *(undefined4 *)(this + 0x80) = 0;
  }
  if (*(int *)(this + 0x84) == param_1) {
    *(undefined4 *)(this + 0x84) = 0;
  }
  if (*(int *)(this + 0x88) == param_1) {
    *(undefined4 *)(this + 0x88) = 0;
  }
  if (*(int *)(this + 0x8c) == param_1) {
    *(undefined4 *)(this + 0x8c) = 0;
  }
  uVar1 = F_00547d80(this,this + *(int *)(this + 0xf54) * 0x54 + 0xa8,this + 0x151c);
  return uVar1;
}

/* ref: FUN_0054ab30 */
uint F_0054ab30(unsigned int gen_a0)
{
  GEN_ENTER(0x54ab30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar6 = *(uint *)((int)this + 0x50);
  (*(uint *)(gen_frame + 0x14)) = uVar6;
  if (*(int *)(uVar6 + 0x10) != 0) {
    F_0053a0f0(this);
    iVar1 = *(int *)((int)this + 0x20);
    if ((iVar1 == 1) || (iVar1 == 4)) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    if (*(char *)((int)this + 0x2d0) != cVar2) {
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 100);
      uVar7 = *(undefined4 *)((int)this + 0x68);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
      (*(undefined4 *)(gen_frame + 0x10)) = uVar7;
      if ((iVar1 == 1) || (iVar1 == 4)) {
        F_0053a190(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
      }
      else {
        F_0053a330(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
      }
      *(undefined4 *)((int)this + 100) = (*(undefined4 *)(gen_frame + 0xc));
      *(undefined4 *)((int)this + 0x68) = (*(undefined4 *)(gen_frame + 0x10));
      if ((*(int *)((int)this + 0x20) == 1) || (*(int *)((int)this + 0x20) == 4)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      *(undefined1 *)((int)this + 0x2d0) = uVar3;
    }
    (*(char *)(gen_frame + 0x1b)) = '\0';
    F_00548990(this,&(*(char *)(gen_frame + 0x1b)));
    (*(char *)(gen_frame + 0x1a)) = '\0';
    if ((((*(undefined * PTR32 *)((*(uint *)(gen_frame + 0x14)) + 0x10) == (undefined *)0x0) ||
         (pvVar5 = (undefined *)F_00a5f290(*(undefined * PTR32 *)((*(uint *)(gen_frame + 0x14)) + 0x10)), pvVar5 == (undefined *)0x0)) ||
        ((((*(byte *)((int)pvVar5 + 0x2dd3) & 2) == 0 && (bVar4 = F_00aa33d0(pvVar5), bVar4 == 0))
         && ((bVar4 = F_00a9f620(pvVar5), bVar4 == 0 || (*(char *)((int)pvVar5 + 0x2ebc) == '\0'))
            )))) &&
       (((*(char *)(gen_frame + 0x1b)) == '\0' &&
        (((double)*(float *)((*(uint *)(gen_frame + 0x14)) + 0x920) < *(double *)&REFG(undefined, 0x1094810) &&
         (*(char *)((int)this + 0x94) != '\0')))))) {
      (*(char *)(gen_frame + 0x1a)) = '\x01';
    }
    uVar6 = (*(uint *)(gen_frame + 0x14));
    *(char *)((int)this + 0x2c0) = (*(char *)(gen_frame + 0x1a));
    if ((*(char *)(gen_frame + 0x1a)) == '\0') {
      F_0054a210(this);
    }
    F_005451d0(this);
    F_00548c30(this);
    *(undefined1 *)((int)this + 0x22f) = 0;
    F_00544770(this);
    if ((*(int *)((int)this + 0x58) == 0) ||
       ((*(int *)((int)this + 0x58) == 2 && (*(char *)((int)this + 0x5d) == '\0')))) {
      uVar7 = *(undefined4 *)((int)this + 0x54);
      pvVar5 = (undefined *)F_00a5f500(*(undefined * PTR32 *)(uVar6 + 0x10));
      F_00688ed0(pvVar5,uVar7);
      F_0054eb10(this);
      pvVar5 = *(undefined * PTR32 *)(uVar6 + 0x10);
      (*(uint *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + 0x54);
      if ((pvVar5 != (undefined *)0x0) && (uVar6 = F_00a5f500(pvVar5), uVar6 != 0)) {
        F_00688f10(uVar6,(float)(float10)0,(*(uint *)(gen_frame + 0x14)));
      }
    }
    uVar6 = 0;
    if ((*(int *)((int)this + 0x58) == 0) && (*(int *)((int)this + 0x20) != 0)) {
      *(undefined4 *)((int)this + 0x20) = 0;
      *(undefined4 *)((int)this + 0x28) = 0xe0000000;
      *(undefined4 *)((int)this + 0x28) = 0;
      *(undefined4 *)((int)this + 0x2c) = 0;
      *(undefined4 *)((int)this + 0x30) = 0;
      *(undefined4 *)((int)this + 0x38) = 0xffffffff;
      *(undefined4 *)((int)this + 0x40) = 0;
      *(undefined4 *)((int)this + 0x44) = 0;
      *(undefined4 *)((int)this + 0x48) = 0;
    }
  }
  return uVar6;
}

/* ref: FUN_0054ad20 */
unsigned int F_0054ad20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ad20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(char *)((int)this + 0x928) != '\0') {
    F_0054ab30((undefined *)(param_1 * 0x300 + 0x20 + (int)this));
  }
  return 0;
}

/* ref: FUN_0054ad50 */
unsigned int F_0054ad50(unsigned int gen_a0)
{
  GEN_ENTER(0x54ad50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  undefined * pvVar7;
  int * piVar8;
  undefined4 * puVar9;
  
  if (*(int *)((int)this + 0x10) == 0) {
    return 0;
  }
  uVar6 = 0;
  puVar9 = (undefined4 *)((int)this + 0xc0);
  do {
    *puVar9 = puVar9[-0x1c];
    uVar6 = uVar6 + 1;
    puVar9 = puVar9 + 1;
  } while (uVar6 < 0xe);
  if (*(int *)((int)this + 0x10) == 0) {
    return 0;
  }
  if (*(int *)((int)this + 0x14) != 2) goto LAB_0054af5b;
  uVar3 = *(undefined4 *)((int)this + 0x18);
  (*(undefined4 *)(gen_frame + 0x54)) = *(undefined4 *)((int)this + 0x20c);
  uVar6 = *(uint *)((int)this + 0x244);
  (*(undefined4 *)(gen_frame + 0x58)) = uVar3;
  if (uVar6 == 0) {
    uVar6 = F_00b5a860(&(*(undefined4 *)(gen_frame + 0x54)));
    *(uint *)((int)this + 0x244) = uVar6;
  }
  bVar5 = F_0053c2b0(this,&(*(undefined4 *)(gen_frame + 0x54)),uVar6);
  if (*(int *)((int)this + 0x160) == -1) {
LAB_0054ae3d: ;
    if (bVar5 != 0) {
      F_00536440(this);
      F_005364b0(this);
      goto LAB_0054af5b;
    }
  }
  else {
    fVar2 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) +
                   (float10)*(float *)((int)this + 0x164))));
    (*(float *)(gen_frame + 0x5c)) = fVar2;
    *(float *)((int)this + 0x164) = fVar2;
    if (*(int *)((int)this + 0x160) != 2) goto LAB_0054ae3d;
    fVar1 = *(float *)((int)this + 0x168);
    (*(float *)(gen_frame + 0x5c)) = fVar1;
    if (((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1090708))) !=
         ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1090708))) || fVar1 == REFG(float, 0x1090708))) ||
       (!((float10)fVar1 <= (float10)fVar2))) goto LAB_0054ae3d;
  }
  uVar3 = *(undefined4 *)((int)this + 0x27c);
  (*(float *)(gen_frame + 0x5c)) = *(float *)((int)this + 0x50);
  if (*(int *)((int)this + 0x10) != 0) {
    *(undefined4 *)((int)this + 0x50) = 0;
    pvVar7 = (undefined *)F_00a5f290(*(undefined * PTR32 *)((int)this + 0x10));
    if (pvVar7 != (undefined *)0x0) {
      F_00aaacd0(pvVar7,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x5c))),0,uVar3);
    }
    F_0054f610(this,0);
  }
  if ((*(int *)((int)this + 0x160) != -1) && (uVar6 = *(int *)((int)this + 0x160) + 1, uVar6 < 4)) {
    piVar8 = (int *)((int)this + uVar6 * 4 + 0x150);
    do {
      if (*piVar8 != 0) {
        if (uVar6 != 0xffffffff) {
          (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 0x110);
          (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
          (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x13059d0);
          (*(undefined4 *)(gen_frame + 0x40)) = 0;
          (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)((int)this + 0x11c);
          uVar3 = *(undefined4 *)((int)this + uVar6 * 4 + 0x150);
          (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac0)));
          (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)((int)this + 0x118);
          uVar4 = *(undefined4 *)((int)this + 0x120);
          (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac4)));
          ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
          (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
          (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac8)));
          (*(undefined4 *)(gen_frame + 0x20)) = uVar4;
          F_005492d0(this,uVar3,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0);
          *(uint *)((int)this + 0x160) = uVar6;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar6 < 4);
  }
LAB_0054af5b: ;
  uVar6 = 1;
  do {
    if ((*(int *)((int)this + uVar6 * 4 + 0x18) != 0) &&
       ((*(int *)((int)this + 0x10) == 0 ||
        (bVar5 = F_00b68840(*(undefined4 *)((int)this + 0x2b4),uVar6), bVar5 == 0)))) {
      (*(float *)(gen_frame + 0x5c)) = *(float *)((int)this + uVar6 * 4 + 0x27c);
      (*(undefined4 *)(gen_frame + 0x58)) = *(undefined4 *)((int)this + uVar6 * 4 + 0x50);
      if (*(int *)((int)this + 0x10) != 0) {
        *(undefined4 *)((int)this + uVar6 * 4 + 0x50) = 0;
        pvVar7 = (undefined *)F_00a5f290(*(undefined * PTR32 *)((int)this + 0x10));
        if (pvVar7 != (undefined *)0x0) {
          F_00aaacd0(pvVar7,(*(undefined4 *)(gen_frame + 0x58)),uVar6,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x5c))));
        }
        if (uVar6 == 0) {
          F_0054f610(this,0);
        }
        else {
          F_0054f7a0(this,uVar6,0);
        }
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0xe);
  return 0;
}

/* ref: FUN_0054aff0 */
uint F_0054aff0(unsigned int gen_a0)
{
  GEN_ENTER(0x54aff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x620];
  undefined * PTR32 * ppuVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined4 * puVar4;
  undefined * pvVar5;
  int * piVar6;
  undefined * puVar7;
  int extraout_ECX;
  int iVar8;
  undefined * PTR32 * ppuVar9;
  undefined4 * puVar10;
  undefined * PTR32 * ppuVar11;
  float10 fVar12;
  
  (*(uint *)(gen_frame + 0x60c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x610);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x59c)) = this;
  bVar2 = F_00537540((undefined *)((int)this + 0xa8));
  extraout_ECX = ((int)(uint)((undefined *)((int)this + 0xa8)));
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 != 0) {
    uVar3 = F_00547d80(this,*(int *)(extraout_ECX + 0xeac) * 0x54 + extraout_ECX, (int)this + 0x151c);
  }
  if ((REFG(int, 0x1375bbc) != 0) || (REFG(int, 0x1379694) == 0)) goto LAB_0054b4ea;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5a8)) = REFG(undefined * PTR32 * PTR32, 0x1375b90);
  uVar3 = 0;
  if (REFG(undefined * PTR32 * PTR32, 0x1375b90) == (undefined * PTR32 *)0x0) goto LAB_0054b4ea;
  F_00543260(this);
  ((undefined4 *)(gen_frame + 0x0))[0] = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x588)) = (*(undefined * PTR32 (*)[2])REFP(0x109c9c4));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x57c)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca0c));
  (*(undefined * PTR32 *)(gen_frame + 0x580)) = this;
  (*(undefined4 *)(gen_frame + 0x584)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cae0)));
  if ((REFG(int, 0x1375bbc) != -1) && (iVar8 = (int)(&REFG(undefined * PTR32 * PTR32, 0x1375b90))[(int)(REFG(int, 0x1375bbc))], iVar8 != 0)) {
    puVar4 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0x5c0)),iVar8 + 0x90,*(int *)(iVar8 + 0xd0) + 0x50);
    puVar10 = &REFG(undefined4, 0x13796a0);
    for (iVar8 = 0x10; this = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x59c)), iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  fVar12 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x94);
  if (*(int *)(REFG(int, 0x1370b90) + 0x94) < 0) {
    fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  iVar8 = *(int *)(REFG(int, 0x1370b90) + 0x90);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5ac)) = (undefined * PTR32 *)iVar8;
  *(float *)&REFG(undefined, 0x13796e4) = (float)(fVar12 * (float10)REFG(double, 0x1088108));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5b0)) = ((undefined * PTR32 *)(uintptr_t)gen_fl2bits((float)(*(float *)&REFG(undefined, 0x13796e4))));
  fVar12 = (float10)iVar8;
  if (iVar8 < 0) {
    fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  ppuVar9 = (undefined * PTR32 *)((int)this + 0x1f88);
  *(float *)&REFG(undefined, 0x13796e0) = (float)(fVar12 * (float10)REFG(double, 0x1088108));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5ac)) = ppuVar9;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5b0)) = (undefined * PTR32 *)((int)this + 0xfb8);
  *(undefined * PTR32 *)((int)this + 0x1f88) = (undefined *)0x0;
  *(undefined * PTR32 *)((int)this + 0x24ec) = (undefined *)0x0;
  *(undefined * PTR32 *)((int)this + 0x2a50) = (undefined *)0x0;
  *(undefined1 *)((int)this + 0x2fb4) = 0;
  *(undefined * PTR32 *)((int)this + 0xfb8) = (undefined *)0x0;
  F_00538690(ppuVar9);
  F_00538c50(ppuVar9,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x57c)));
  ppuVar1 = (undefined * PTR32 *)((int)this + 0x24ec);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5b4)) = ppuVar1;
  ppuVar11 = ppuVar1;
  for (iVar8 = 0x159; iVar8 != 0; iVar8 = iVar8 + -1) {
    *ppuVar11 = *ppuVar9;
    ppuVar9 = ppuVar9 + 1;
    ppuVar11 = ppuVar11 + 1;
  }
  F_00538c50(ppuVar1,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x588)));
  pvVar5 = (undefined *)F_00424770(REFG(undefined * PTR32 * PTR32, 0x137104c));
  piVar6 = (int *)F_00424750(REFG(undefined * PTR32 * PTR32, 0x137104c));
  if (piVar6 == (int *)0x0) {
LAB_0054b1de: ;
    pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x5bc));
    (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x5bc)) + 0)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x5bc)) = (undefined *)((uint)pvVar5 & 0xffffff00);
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*piVar6 + 0x30))(piVar6);
    bVar2 = F_004760f0(uVar3);
    if (bVar2 != 0) goto LAB_0054b1de;
    bVar2 = F_00a34870(pvVar5,8);
    (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x5bc)) + 0)) = bVar2;
    (*(undefined * PTR32 *)(gen_frame + 0x5bc)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x5bc)), 1, 3),bVar2)));
  }
  pvVar5 = (undefined *)F_00424770(REFG(undefined * PTR32 * PTR32, 0x137104c));
  piVar6 = (int *)F_00424750(REFG(undefined * PTR32 * PTR32, 0x137104c));
  if (piVar6 == (int *)0x0) {
LAB_0054b220: ;
    uVar3 = (*(uint *)(gen_frame + 0x5b8));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x5b8)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x5b8)) = uVar3 & 0xffffff00;
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*piVar6 + 0x30))(piVar6);
    bVar2 = F_004760f0(uVar3);
    if (bVar2 != 0) goto LAB_0054b220;
    bVar2 = F_00a34870(pvVar5,7);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x5b8)) + 0)) = bVar2;
    (*(uint *)(gen_frame + 0x5b8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x5b8)), 1, 3),bVar2);
  }
  pvVar5 = (undefined *)F_00424770(REFG(undefined * PTR32 * PTR32, 0x137104c));
  piVar6 = (int *)F_00424750(REFG(undefined * PTR32 * PTR32, 0x137104c));
  if (piVar6 == (int *)0x0) {
LAB_0054b262: ;
    uVar3 = (*(uint *)(gen_frame + 0x5a4));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x5a4)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x5a4)) = uVar3 & 0xffffff00;
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*piVar6 + 0x30))(piVar6);
    bVar2 = F_004760f0(uVar3);
    if (bVar2 != 0) goto LAB_0054b262;
    bVar2 = F_00a34870(pvVar5,10);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x5a4)) + 0)) = bVar2;
    (*(uint *)(gen_frame + 0x5a4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x5a4)), 1, 3),bVar2);
  }
  pvVar5 = (undefined *)F_00424770(REFG(undefined * PTR32 * PTR32, 0x137104c));
  piVar6 = (int *)F_00424750(REFG(undefined * PTR32 * PTR32, 0x137104c));
  if (piVar6 == (int *)0x0) {
LAB_0054b2a4: ;
    uVar3 = (*(uint *)(gen_frame + 0x5a0));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x5a0)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x5a0)) = uVar3 & 0xffffff00;
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*piVar6 + 0x30))(piVar6);
    bVar2 = F_004760f0(uVar3);
    if (bVar2 != 0) goto LAB_0054b2a4;
    bVar2 = F_00a34870(pvVar5,9);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x5a0)) + 0)) = bVar2;
    (*(uint *)(gen_frame + 0x5a0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x5a0)), 1, 3),bVar2);
  }
  ppuVar1 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x59c));
  puVar7 = (undefined *)F_005325b0((*(undefined * PTR32 * PTR32 *)(gen_frame + 0x59c))[1],(*(uint *)(gen_frame + 0x5a0)),(*(uint *)(gen_frame + 0x5a4)),(*(uint *)(gen_frame + 0x5b8)),(*(undefined * PTR32 *)(gen_frame + 0x5bc)));
  ppuVar1[1] = puVar7;
  pvVar5 = (undefined *)F_00424770(REFG(undefined * PTR32 * PTR32, 0x137104c));
  ppuVar9 = REFG(undefined * PTR32 * PTR32, 0x137104c);
  (*(undefined * PTR32 *)(gen_frame + 0x5bc)) = pvVar5;
  piVar6 = (int *)F_00424750(REFG(undefined * PTR32 * PTR32, 0x137104c));
  if (piVar6 == (int *)0x0) {
LAB_0054b32d: ;
    piVar6 = (int *)F_00424750(REFG(undefined * PTR32 * PTR32, 0x137104c));
    if (piVar6 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar6 + 0x30))(piVar6);
      bVar2 = F_004760f0(uVar3);
      if (bVar2 == 0) {
        bVar2 = F_00a34870((*(undefined * PTR32 *)(gen_frame + 0x5bc)),9);
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x5b8)) + 0)) = bVar2;
        (*(uint *)(gen_frame + 0x5b8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x5b8)), 1, 3),bVar2);
        goto LAB_0054b363;
      }
    }
    uVar3 = (*(uint *)(gen_frame + 0x5b8));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x5b8)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x5b8)) = uVar3 & 0xffffff00;
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*piVar6 + 0x30))(piVar6);
    if ((ppuVar9 == (undefined * PTR32 *)0x0) || ((*(byte *)(uVar3 + 0x2c24c) & 0x3c) == 0)) {
      bVar2 = F_004760f0(uVar3);
      if (bVar2 != 0) goto LAB_0054b32d;
      bVar2 = F_00a34870((*(undefined * PTR32 *)(gen_frame + 0x5bc)),0x140);
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x5b8)) + 0)) = bVar2;
      (*(uint *)(gen_frame + 0x5b8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x5b8)), 1, 3),bVar2);
    }
    else {
      bVar2 = F_00a34b70((*(undefined * PTR32 *)(gen_frame + 0x5bc)),0x12f);
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x5b8)) + 0)) = bVar2;
      (*(uint *)(gen_frame + 0x5b8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x5b8)), 1, 3),bVar2);
    }
  }
LAB_0054b363: ;
  pvVar5 = (undefined *)F_00424770(REFG(undefined * PTR32 * PTR32, 0x137104c));
  ppuVar9 = REFG(undefined * PTR32 * PTR32, 0x137104c);
  (*(undefined * PTR32 *)(gen_frame + 0x5bc)) = pvVar5;
  piVar6 = (int *)F_00424750(REFG(undefined * PTR32 * PTR32, 0x137104c));
  if (piVar6 == (int *)0x0) {
LAB_0054b3c7: ;
    piVar6 = (int *)F_00424750(REFG(undefined * PTR32 * PTR32, 0x137104c));
    if (piVar6 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar6 + 0x30))(piVar6);
      bVar2 = F_004760f0(uVar3);
      if (bVar2 == 0) {
        bVar2 = F_00a34870((*(undefined * PTR32 *)(gen_frame + 0x5bc)),9);
        (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x5bc)) + 0)) = bVar2;
        (*(undefined * PTR32 *)(gen_frame + 0x5bc)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x5bc)), 1, 3),bVar2)));
        goto LAB_0054b3fd;
      }
    }
    pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x5bc));
    (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x5bc)) + 0)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x5bc)) = (undefined *)((uint)pvVar5 & 0xffffff00);
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*piVar6 + 0x30))(piVar6);
    if ((ppuVar9 == (undefined * PTR32 *)0x0) || ((*(byte *)(uVar3 + 0x2c24c) & 0x3c) == 0)) {
      bVar2 = F_004760f0(uVar3);
      if (bVar2 != 0) goto LAB_0054b3c7;
      bVar2 = F_00a34870((*(undefined * PTR32 *)(gen_frame + 0x5bc)),0x13f);
      (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x5bc)) + 0)) = bVar2;
      (*(undefined * PTR32 *)(gen_frame + 0x5bc)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x5bc)), 1, 3),bVar2)));
    }
    else {
      bVar2 = F_00a34b70((*(undefined * PTR32 *)(gen_frame + 0x5bc)),0xbc);
      (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x5bc)) + 0)) = bVar2;
      (*(undefined * PTR32 *)(gen_frame + 0x5bc)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x5bc)), 1, 3),bVar2)));
    }
  }
LAB_0054b3fd: ;
  F_0053f720(ppuVar1 + 0xc,ppuVar1[1],(*(undefined * PTR32 *)(gen_frame + 0x5bc)),(*(uint *)(gen_frame + 0x5b8)));
  ppuVar9 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5b4));
  F_0053ded0(ppuVar1,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5b4)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5b4)) = REFG(undefined * PTR32 * PTR32, 0x137104c);
  if (REFG(undefined * PTR32 * PTR32, 0x137104c) != (undefined * PTR32 *)0x0) {
    pvVar5 = (undefined *)F_00424770(REFG(undefined * PTR32 * PTR32, 0x137104c));
    bVar2 = F_00a34870(pvVar5,0x15c);
    if (bVar2 != 0) {
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x58c)) = (*(undefined * PTR32 (*)[2])REFP(0x109c9dc));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x590)) = (undefined * PTR32 *)0x2;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x594)) = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5b4));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x598)) = ppuVar1;
      F_00538c50(ppuVar9,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x58c)));
    }
  }
  F_00549860(ppuVar1,ppuVar9,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5a8)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x598)) = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5a8));
  (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x570)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x590));
  (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x574)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5b4));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x590)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca3c));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x594)) = ppuVar1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5b4)) = (*(undefined * PTR32 (*)[2])REFP(0x109c9d0));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x56c)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca74));
  (*(undefined4 *)(gen_frame + 0x578)) = 2;
  F_00538cb0((*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5ac)),(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5b0)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x56c)));
  uVar3 = F_005386d0((*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5b0)),ppuVar9,((undefined4 *)(gen_frame + 0x0)));
  puVar4 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar8 = 0x159; iVar8 != 0; iVar8 = iVar8 + -1) {
    *ppuVar9 = (undefined *)*puVar4;
    puVar4 = puVar4 + 1;
    ppuVar9 = ppuVar9 + 1;
  }
LAB_0054b4ea: ;
  F_00c47745((*(uint *)(gen_frame + 0x60c)) ^ (uint)(uint)(gen_frame + 0x610));
  return uVar3;
}

/* ref: FUN_0054b500 */
uint F_0054b500(unsigned int gen_a0)
{
  GEN_ENTER(0x54b500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x580];
  byte bVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  
  if (((REFG(int, 0x1375bbc) != 0) || (REFG(int, 0x1379694) == 0)) || ((*(int *)(gen_frame + 0x578)) = REFG(int, 0x1375b90), REFG(int, 0x1375b90) == 0))
  goto LAB_0054b816;
  ((undefined4 *)(gen_frame + 0x4))[0] = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x570)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca80));
  (*(undefined * PTR32 *)(gen_frame + 0x574)) = this;
  F_00538c50((int)this + 0xfb8,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x570)));
  F_005386d0((int)this + 0xfb8,(undefined4 *)((int)this + 0x24ec),((undefined4 *)(gen_frame + 0x4)));
  puVar3 = ((undefined4 *)(gen_frame + 0x4));
  puVar6 = (undefined4 *)((int)this + 0x24ec);
  for (iVar5 = 0x159; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  F_005386d0((int)this + 0x1f88,(int)this + 0x24ec,(int)this + 0x2a50);
  if ((REFG(void * PTR32, 0x137104c) != (undefined *)0x0) && (REFG(int, 0x1379694) != 0)) {
    F_0053e730((undefined *)((int)this + 8),&REFG(undefined, 0x1375b30),REFG(int, 0x1379694));
  }
  F_0054a7f0(this,(*(int *)(gen_frame + 0x578)),(int)this + 0x2a50);
  pvVar2 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar1 = F_00a34970(pvVar2,0x158);
  if (bVar1 != 0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x80);
    if (puVar3 == (undefined4 *)0x0) {
      uVar8 = 0xe0000000;
    }
    else {
      uVar8 = ((gen_lcode *)*(gen_code32 *)*puVar3)(puVar3);
    }
    puVar3 = (undefined4 *)F_00ab1290((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    uVar4 = *(uint *)((int)this + 0x2fd8);
    if ((7 < uVar4) ||
       ((*(int *)((int)this + uVar4 * 4 + 0x2fb8) != 0 &&
        ((7 < uVar4 ||
         ((*(int *)((int)this + uVar4 * 4 + 0x2fb8) != 3 &&
          (((7 < uVar4 || (*(int *)((int)this + uVar4 * 4 + 0x2fb8) != 2)) ||
           (puVar3 != (undefined4 *)0x0)))))))))) {
      if (puVar3 != *(undefined4 * PTR32 *)((int)this + 0x40)) {
        uVar7 = 0xe0000000;
        (*(undefined4 *)(gen_frame + 0x56c)) = 0;
        if (puVar3 != (undefined4 *)0x0) {
          uVar8 = ((gen_lcode *)*(gen_code32 *)*puVar3)(puVar3);
          uVar7 = (undefined4)uVar8;
          (*(undefined4 *)(gen_frame + 0x56c)) = (int)((ulonglong)uVar8 >> 0x20);
        }
        puVar6 = *(undefined4 * PTR32 *)((int)this + 0x40);
        if (puVar6 == (undefined4 *)0x0) {
          uVar8 = 0xe0000000;
        }
        else {
          uVar8 = ((gen_lcode *)*(gen_code32 *)*puVar6)(puVar6);
        }
        uVar10 = (*(undefined4 *)(gen_frame + 0x56c));
        pvVar2 = (undefined *)F_006b8c00();
        F_006e5d90(pvVar2,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar7,uVar10);
      }
      puVar6 = *(undefined4 * PTR32 *)((int)this + 0x40);
      if ((puVar3 != puVar6) && (puVar6 != (undefined4 *)0x0)) {
        *(undefined4 * PTR32 *)((int)this + 0x8c) = puVar6;
      }
      *(undefined4 * PTR32 *)((int)this + 0x40) = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        uVar4 = *(uint *)((int)this + 0x2fd8);
        if ((7 < uVar4) ||
           ((*(int *)((int)this + uVar4 * 4 + 0x2fb8) != 0 &&
            ((7 < uVar4 || (*(int *)((int)this + uVar4 * 4 + 0x2fb8) != 3)))))) {
          *(undefined4 *)((int)this + 0x44) = 0;
        }
        if (*(char *)((int)this + 0x95) != '\0') {
          *(undefined1 *)((int)this + 0x94) = 1;
        }
      }
      *(byte *)((int)this + 0x92) = *(byte *)((int)this + 0x92) & 1;
    }
  }
  pvVar2 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar1 = F_00a34970(pvVar2,1);
  if (bVar1 != 0) {
    F_00546d20(this,(*(int *)(gen_frame + 0x578)),(int)this + 0x2a50);
  }
  if (REFG(int, 0x1375b64) == 3) {
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  F_00543260(this);
  if (*(int *)((int)this + 0x80) == 0) {
LAB_0054b74f: ;
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  else {
    uVar4 = F_00538440(this,*(int *)((int)this + 0x80),(float)(float10)0);
    if ((char)uVar4 == '\0') goto LAB_0054b74f;
  }
  iVar5 = *(int *)((int)this + 0x40);
  F_005335a0(iVar5);
  if (iVar5 != 0) {
    uVar4 = F_00532270(iVar5);
    if ((char)uVar4 != '\0') {
      F_00538250(this,iVar5);
    }
  }
  pvVar2 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar1 = F_00a34970(pvVar2,0x13c);
  if (bVar1 != 0) {
    if (*(int *)((int)this + 0x80) == 0) {
LAB_0054b7b3: ;
      uVar9 = F_00533c20(this);
    }
    else {
      uVar4 = F_00533c90(this);
      if (uVar4 != *(uint *)((int)this + 0x80)) goto LAB_0054b7b3;
      uVar9 = 0xe0000000;
    }
    F_00537470(this,(int)uVar9,(int)(uVar9 >> 0x20));
  }
  pvVar2 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar1 = F_00a34970(pvVar2,0x157);
  if (bVar1 != 0) {
    F_00547ac0(this);
  }
  F_0053d200(this);
  F_005371f0(this);
  F_0053d270(this);
  F_0053d330(this);
  F_00537250(this);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0x44);
LAB_0054b816: ;
  uVar4 = F_0053d400(this);
  return uVar4;
}

/* ref: FUN_0054b830 */
uint F_0054b830(unsigned int gen_a0)
{
  GEN_ENTER(0x54b830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab11c0();
  if ((char)uVar1 != '\0') {
    F_0054aff0(this);
    uVar1 = F_0054b500(this);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_0054b8a0 */
unsigned int F_0054b8a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54b8a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x20) = param_2;
  return 0;
}

/* ref: FUN_0054b8e0 */
unsigned int F_0054b8e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54b8e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x40) = param_2;
  return 0;
}

/* ref: FUN_0054b920 */
uint F_0054b920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54b920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_0054b930 */
uint F_0054b930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54b930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x48) = param_1;
  *(undefined4 *)((int)this + 0x4c) = param_2;
  return param_1;
}

/* ref: FUN_0054b960 */
uint F_0054b960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54b960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_0054b980 */
byte F_0054b980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54b980u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x38) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054b990 */
byte F_0054b990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54b990u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x39) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054b9b0 */
byte F_0054b9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54b9b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x3a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054b9d0 */
byte F_0054b9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54b9d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x3b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054b9f0 */
byte F_0054b9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54b9f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x3c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054ba10 */
uint F_0054ba10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ba10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x40) = param_2;
  return param_2;
}

/* ref: FUN_0054ba30 */
uint F_0054ba30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54ba30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x50) = param_1;
  *(undefined4 *)((int)this + 0x54) = param_2;
  return param_1;
}

/* ref: Client::Game::Control::EmoteController::FindChairInfo::vf0 */
uint F_0054ba50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ba50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109c97c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::OptionOfTimelineTransit::vf0 */
uint F_0054bad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109c984));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054bb30 */
uint F_0054bb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bb30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x1c + param_2 * 4);
}

/* ref: FUN_0054bb40 */
uint F_0054bb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54bb40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 4 + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_0054bb80 */
uint F_0054bb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bb80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_0054bb90 */
uint F_0054bb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bb90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_0054bbb0 */
unsigned int F_0054bbb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54bbb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x5c) = param_2;
  return 0;
}

/* ref: FUN_0054bbd0 */
uint F_0054bbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bbd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 100) = param_2;
  return param_2;
}

/* ref: FUN_0054bbe0 */
byte F_0054bbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bbe0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x60) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054bc30 */
byte F_0054bc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bc30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 200) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054bc40 */
uint F_0054bc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bc40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)((int)this + 5) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)((int)this + 6) = *(undefined1 *)(param_1 + 6);
  return (uint)this;
}

/* ref: Client::Game::Control::OptionOfStartLookAt::vf0 */
uint F_0054bca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109c98c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054bcf0 */
float10 F_0054bcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bcf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (float10)*(float *)(in_ecx + 0x18 + param_2 * 4);
}

/* ref: FUN_0054bd00 */
float10 F_0054bd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bd00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (float10)*(float *)(in_ecx + 0x18 + param_2 * 4);
}

/* ref: FUN_0054bd20 */
uint F_0054bd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bd20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x28) = param_2;
  return param_2;
}

/* ref: FUN_0054bd70 */
uint F_0054bd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bd70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x50) = param_2;
  return param_2;
}

/* ref: FUN_0054bd90 */
uint F_0054bd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bd90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x54) = param_2;
  return param_2;
}

/* ref: FUN_0054bdb0 */
uint F_0054bdb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bdb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x58) = param_2;
  return param_2;
}

/* ref: FUN_0054bdd0 */
byte F_0054bdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bdd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x5c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054bdf0 */
byte F_0054bdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bdf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x5d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054be00 */
uint F_0054be00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54be00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  param_2[1] = *(undefined4 *)(in_ecx + 100);
  *param_2 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  param_2[2] = *(undefined4 *)(in_ecx + 0x68);
  return (uint)param_2;
}

/* ref: FUN_0054be40 */
uint F_0054be40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54be40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  param_2[1] = *(undefined4 *)(in_ecx + 0x88);
  *param_2 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  param_2[2] = *(undefined4 *)(in_ecx + 0x8c);
  return (uint)param_2;
}

/* ref: FUN_0054bec0 */
uint F_0054bec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bec0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(undefined4 *)(in_ecx + 100) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(in_ecx + 0x68) = *(undefined4 *)(param_2 + 8);
  return param_2;
}

/* ref: FUN_0054bef0 */
byte F_0054bef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x80) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054bf00 */
uint F_0054bf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bf00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(undefined4 *)(in_ecx + 0x88) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(in_ecx + 0x8c) = *(undefined4 *)(param_2 + 8);
  return param_2;
}

/* ref: FUN_0054bf30 */
unsigned int F_0054bf30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54bf30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x90) = param_2;
  return 0;
}

/* ref: FUN_0054bf60 */
byte F_0054bf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bf60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x94) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054bf80 */
unsigned int F_0054bf80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54bf80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xb0) = param_2;
  return 0;
}

/* ref: FUN_0054bfb0 */
uint F_0054bfb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54bfb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xb4) = param_2;
  return param_2;
}

/* ref: FUN_0054bfd0 */
unsigned int F_0054bfd0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54bfd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xb8) = param_2;
  return 0;
}

/* ref: FUN_0054bff0 */
unsigned int F_0054bff0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54bff0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xbc) = param_2;
  return 0;
}

/* ref: FUN_0054c010 */
byte F_0054c010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xc4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054c030 */
uint F_0054c030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 200) = param_2;
  return param_2;
}

/* ref: FUN_0054c050 */
unsigned int F_0054c050(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54c050u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xcc) = param_2;
  return 0;
}

/* ref: FUN_0054c090 */
unsigned int F_0054c090(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54c090u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x220) = param_2;
  return 0;
}

/* ref: FUN_0054c0b0 */
unsigned int F_0054c0b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54c0b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x224) = param_2;
  return 0;
}

/* ref: FUN_0054c0d0 */
unsigned int F_0054c0d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54c0d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x228) = param_2;
  return 0;
}

/* ref: FUN_0054c100 */
byte F_0054c100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c100u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x22c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054c130 */
byte F_0054c130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x22f) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054c140 */
byte F_0054c140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c140u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 0x230) & (*(uint *)&gen_args[1])) != 0;
}

/* ref: FUN_0054c160 */
uint F_0054c160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54c160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(uint *)((int)this + 0x230) = *(uint *)((int)this + 0x230) & ~param_1;
  uVar1 = *(uint *)((int)this + 0x230);
  if ((char)param_2 != '\0') {
    uVar1 = uVar1 | param_1;
    *(uint *)((int)this + 0x230) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_0054c1a0 */
unsigned int F_0054c1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c1a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = (undefined4 *)(in_ecx + 0x240);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_0054c1d0 */
unsigned int F_0054c1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c1d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = (undefined4 *)(in_ecx + 0x280);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_0054c200 */
byte F_0054c200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c200u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2c0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054c220 */
uint F_0054c220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c220u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(undefined4 *)(in_ecx + 0x2c8) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(in_ecx + 0x2cc) = *(undefined4 *)(param_2 + 8);
  return param_2;
}

/* ref: FUN_0054c250 */
byte F_0054c250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c250u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2d0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054c280 */
byte F_0054c280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c280u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2f0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054c2a0 */
byte F_0054c2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c2a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2f1) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054c2c0 */
uint F_0054c2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c2c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x300 + 0x20 + in_ecx;
}

/* ref: FUN_0054c2f0 */
unsigned int F_0054c2f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54c2f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x920) = param_2;
  return 0;
}

/* ref: FUN_0054c320 */
uint F_0054c320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c320u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x924) = param_2;
  return param_2;
}

/* ref: FUN_0054c340 */
byte F_0054c340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x928) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054c3c0 */
byte F_0054c3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c3c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0x2db8 + in_ecx);
}

/* ref: FUN_0054c430 */
byte F_0054c430(unsigned int gen_a0)
{
  GEN_ENTER(0x54c430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if (uVar1 == 2) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    if ((char)uVar1 == '\x03') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0054c460 */
byte F_0054c460(unsigned int gen_a0)
{
  GEN_ENTER(0x54c460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if (uVar1 == 2) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    if ((char)uVar1 == '\x02') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0054c4c0 */
unsigned int F_0054c4c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54c4c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2ec8) = (float)((float10)1 / (float10)param_2);
  return 0;
}

/* ref: FUN_0054c4e0 */
unsigned int F_0054c4e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54c4e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2ec8) = (float)((float10)REFG(double, 0x1094890) / (float10)param_2);
  return 0;
}

/* ref: FUN_0054c530 */
byte F_0054c530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2f1c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054c540 */
uint F_0054c540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 4 + param_2 * 4);
}

/* ref: FUN_0054c550 */
uint F_0054c550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c550u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: Client::Game::Object::IFilterCommand::vf0 */
uint F_0054c5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Object::IGameObjectEventListener::vf2 */
uint F_0054c5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109c9a0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054c660 */
uint F_0054c660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c49908(this,0x20,param_1);
  return uVar1;
}

/* ref: FUN_0054c690 */
uint F_0054c690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (*(uint *)(in_ecx + 0x20) != param_2) {
    *(uint *)(in_ecx + 0x50) = *(uint *)(in_ecx + 0x50) | 1;
    *(uint *)(in_ecx + 0x20) = param_2;
  }
  return param_2;
}

/* ref: FUN_0054c6c0 */
uint F_0054c6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c6c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x24 + param_2 * 4);
}

/* ref: FUN_0054c710 */
uint F_0054c710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 != *(uint *)(in_ecx + 0xeac)) {
    *(uint *)(in_ecx + 0xea8) = *(uint *)(in_ecx + 0xea8) | 1;
    *(uint *)(in_ecx + 0xeac) = param_2;
  }
  return param_2;
}

/* ref: FUN_0054c770 */
uint F_0054c770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xf04) = param_2;
  return param_2;
}

/* ref: FUN_0054c7a0 */
byte F_0054c7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x54c7a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  return uVar1 == 7;
}

/* ref: FUN_0054c8a0 */
byte F_0054c8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x54c8a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  return uVar1 == 9;
}

/* ref: FUN_0054c930 */
uint F_0054c930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)((int)this + param_1 * 8 + 0x3b08);
}

/* ref: FUN_0054c950 */
uint F_0054c950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x54c950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + param_1 * 8 + 0x3b08) = param_2;
  *(undefined4 *)((int)this + param_1 * 8 + 0x3b0c) = param_3;
  return param_1;
}

/* ref: FUN_0054c990 */
uint F_0054c990(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x54c990u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_0054c9b0 */
float F_0054c9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x54c9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this +
                                     (float10)*(float *)((int)this + 4) *
                                     (float10)*(float *)((int)this + 4)))))));
}

/* ref: FUN_0054c9e0 */
uint F_0054c9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54c9e0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 + (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] + (float10)param_3[1]);
  return (uint)param_1;
}

/* ref: FUN_0054ca00 */
uint F_0054ca00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54ca00u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 - (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] - (float10)param_3[1]);
  return (uint)param_1;
}

/* ref: FUN_0054ca20 */
uint F_0054ca20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54ca20u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 * (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] * (float10)param_3[1]);
  return (uint)param_1;
}

/* ref: FUN_0054ca40 */
uint F_0054ca40(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x54ca40u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  *param_1 = (float)((float10)param_3 * (float10)*param_2);
  param_1[1] = (float)((float10)param_3 * (float10)param_2[1]);
  return (uint)param_1;
}

/* ref: FUN_0054ca60 */
uint F_0054ca60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54ca60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = (float)((float10)param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2 * (float10)in_ecx[1]);
  return (uint)in_ecx;
}

/* ref: FUN_0054ca80 */
uint F_0054ca80(unsigned int gen_a0)
{
  GEN_ENTER(0x54ca80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(float *)((int)this + 4);
  fVar2 = (float10)*(float *)this;
  fVar1 = (float10)(float)(fVar2 * fVar2 + fVar1 * fVar1);
  if (fVar1 <= (float10)REFG(float, 0x10905c4)) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return (uint)this;
  }
  fVar1 = (float10)(float)((float10)1 / (float10)((float)GEN_TOF(SQRT(fVar1))));
  *(float *)this = (float)(fVar1 * (float10)*(float *)this);
  *(float *)((int)this + 4) = ((float)GEN_TOF((fVar1 * (float10)*(float *)((int)this + 4))));
  return (uint)this;
}

/* ref: FUN_0054cb00 */
float10 F_0054cb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54cb00u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  return (float10)((float)GEN_TOF(((float10)*(float *)param_1 * (float10)*param_2 +
                         (float10)*(float *)(param_1 + 4) * (float10)param_2[1])));
}

/* ref: FUN_0054cb20 */
float10 F_0054cb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54cb20u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * (float10)*param_1 -
                         (float10)param_1[1] * (float10)*(float *)param_2)));
}

/* ref: FUN_0054cc90 */
uint F_0054cc90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54cc90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = (float)((float10)param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2 * (float10)in_ecx[1]);
  return (uint)in_ecx;
}

/* ref: FUN_0054ccb0 */
byte F_0054ccb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ccb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  byte * pbVar3;
  
  uVar1 = 0xc;
  pbVar3 = param_1;
  do {
    if (*(int *)this != *(int *)pbVar3) {
      iVar2 = (uint)*(byte *)this - (uint)*pbVar3;
      if (((iVar2 == 0) && (iVar2 = (uint)*(byte *)((int)this + 1) - (uint)pbVar3[1], iVar2 == 0))
         && (iVar2 = (uint)*(byte *)((int)this + 2) - (uint)pbVar3[2], iVar2 == 0)) {
        iVar2 = (uint)*(byte *)((int)this + 3) - (uint)pbVar3[3];
      }
      return (iVar2 >> 0x1f | 1U) == 0;
    }
    uVar1 = uVar1 - 4;
    pbVar3 = pbVar3 + 4;
    this = (undefined *)((int)this + 4);
  } while (3 < uVar1);
  return 1;
}

/* ref: FUN_0054cd20 */
double F_0054cd20(unsigned int gen_a0)
{
  GEN_ENTER(0x54cd20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (double)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this +
                                             (float10)*(float *)((int)this + 8) *
                                             (float10)*(float *)((int)this + 8)))))));
}

/* ref: FUN_0054cd50 */
float10 F_0054cd50(unsigned int gen_a0)
{
  GEN_ENTER(0x54cd50u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  return (float10)((float)GEN_TOF(((float10)in_ecx[2] * (float10)in_ecx[2] +
                         ((float10)*in_ecx * (float10)*in_ecx +
                         (float10)in_ecx[1] * (float10)in_ecx[1]))));
}

/* ref: FUN_0054cd80 */
uint F_0054cd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54cd80u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*in_ecx - (float10)*param_2);
  in_ecx[1] = (float)((float10)in_ecx[1] - (float10)param_2[1]);
  in_ecx[2] = (float)((float10)in_ecx[2] - (float10)param_2[2]);
  return (uint)in_ecx;
}

/* ref: FUN_0054cdb0 */
uint F_0054cdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x54cdb0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  
  fVar1 = (float10)param_4;
  *param_1 = ((float)GEN_TOF((fVar1 * ((float10)*param_3 - (float10)*(float *)param_2) +
                    (float10)*(float *)param_2)));
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) +
                      fVar1 * ((float10)param_3[1] - (float10)*(float *)(param_2 + 4)))));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) +
                      ((float10)param_3[2] - (float10)*(float *)(param_2 + 8)) * fVar1)));
  return (uint)param_1;
}

/* ref: FUN_0054ce10 */
float10 F_0054ce10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ce10u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  return (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 8) * (float10)param_2[2] +
                         ((float10)*(float *)param_1 * (float10)*param_2 +
                         (float10)*(float *)(param_1 + 4) * (float10)param_2[1]))));
}

/* ref: FUN_0054ce40 */
byte F_0054ce40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54ce40u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_3 + 8);
  fVar3 = *(float *)(param_2 + 8);
  fVar4 = *(float *)(param_3 + 4);
  *param_1 = (float)((float10)fVar1 * (float10)fVar2 - (float10)fVar3 * (float10)fVar4);
  fVar5 = *(float *)param_3;
  fVar6 = *(float *)param_2;
  param_1[1] = (float)((float10)fVar5 * (float10)fVar3 - (float10)fVar6 * (float10)fVar2);
  param_1[2] = (float)((float10)fVar4 * (float10)fVar6 - (float10)fVar1 * (float10)fVar5);
  return (byte)param_1;
}

/* ref: FUN_0054cec0 */
uint F_0054cec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54cec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_0054ccb0(this,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0054ced0 */
byte F_0054ced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ced0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_0054ccb0(this,param_1);
  return bVar1 == 0;
}

/* ref: FUN_0054cef0 */
uint F_0054cef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54cef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_004eea10(this,param_1);
  return uVar1;
}

/* ref: FUN_0054cf00 */
uint F_0054cf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54cf00u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*in_ecx - (float10)*param_2);
  in_ecx[1] = (float)((float10)in_ecx[1] - (float10)param_2[1]);
  in_ecx[2] = (float)((float10)in_ecx[2] - (float10)param_2[2]);
  return (uint)in_ecx;
}

/* ref: FUN_0054cf30 */
uint F_0054cf30(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x54cf30u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = (undefined4)gen_fl2bits(param_3);
  in_ecx[2] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_0054cf80 */
uint F_0054cf80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54cf80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  fVar1 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * fVar2))));
  *param_1 = (float)fVar1;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  fVar2 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * fVar2))));
  param_1[3] = (float)fVar2;
  return (uint)param_1;
}

/* ref: FUN_0054cfd0 */
uint F_0054cfd0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x54cfd0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  fVar1 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_3 * fVar2))));
  fVar1 = (float10)(float)fVar1;
  *param_1 = (float)(fVar1 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * fVar1);
  param_1[2] = (float)(fVar1 * (float10)param_2[2]);
  fVar2 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_3 * fVar2))));
  param_1[3] = (float)fVar2;
  return (uint)param_1;
}

/* ref: FUN_0054d030 */
float * F_0054d030(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54d030u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * (float10)REFG(double, 0x1088108)))));
  fVar4 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * (float10)REFG(double, 0x1088108)))));
  fVar1 = param_1[1];
  fVar3 = (float10)(float)fVar3;
  fVar4 = (float10)(float)fVar4;
  fVar2 = param_1[2];
  param_1[1] = (float)(fVar3 * (float10)param_1[3] + fVar4 * (float10)fVar1);
  param_1[2] = (float)((float10)fVar2 * fVar4 - (float10)*param_1 * fVar3);
  param_1[3] = (float)(fVar4 * (float10)param_1[3] - fVar3 * (float10)fVar1);
  *param_1 = (float)((float10)*param_1 * fVar4 + fVar3 * (float10)fVar2);
  return param_1;
}

/* ref: FUN_0054d0f0 */
float * F_0054d0f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54d0f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar4 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * (float10)REFG(double, 0x1088108)))));
  fVar3 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * (float10)REFG(double, 0x1088108)))));
  fVar1 = *param_1;
  fVar3 = (float10)(float)fVar3;
  fVar4 = (float10)(float)fVar4;
  fVar2 = param_1[2];
  *param_1 = (float)(fVar3 * (float10)fVar1 - fVar4 * (float10)param_1[1]);
  param_1[2] = (float)((float10)fVar2 * fVar3 + (float10)param_1[3] * fVar4);
  param_1[3] = (float)((float10)param_1[3] * fVar3 - (float10)fVar2 * fVar4);
  param_1[1] = (float)((float10)fVar1 * fVar4 + (float10)param_1[1] * fVar3);
  return param_1;
}

/* ref: FUN_0054d200 */
uint F_0054d200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d200u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_2;
  in_ecx[1] = 0;
  *in_ecx = uVar1;
  in_ecx[2] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = param_2[1];
  in_ecx[6] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = param_2[2];
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0054d250 */
unsigned int F_0054d250(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x54d250u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0x30) = param_2;
  *(float *)(in_ecx + 0x34) = param_3;
  *(float *)(in_ecx + 0x38) = param_4;
  return 0;
}

/* ref: FUN_0054d280 */
uint F_0054d280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d280u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *(float *)(in_ecx + 0x30) = ((float)GEN_TOF(((float10)*param_2 + (float10)*(float *)(in_ecx + 0x30))));
  *(float *)(in_ecx + 0x34) = ((float)GEN_TOF(((float10)param_2[1] + (float10)*(float *)(in_ecx + 0x34))));
  *(float *)(in_ecx + 0x38) = ((float)GEN_TOF(((float10)param_2[2] + (float10)*(float *)(in_ecx + 0x38))));
  return in_ecx;
}

/* ref: FUN_0054d2b0 */
unsigned int F_0054d2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  F_004ef9d0(in_ecx,param_2);
  return 0;
}

/* ref: FUN_0054d2e0 */
uint F_0054d2e0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x54d2e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = (undefined4)gen_fl2bits(param_3);
  in_ecx[2] = uVar1;
  return (uint)in_ecx;
}

/* ref: Client::Game::Control::TargetSystem::TargetFilter::vf0 */
uint F_0054d420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::ShowFilter::vf0 */
uint F_0054d450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::ConfigCircle::vf0 */
uint F_0054d530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::ConfigCircleManager::vf0 */
uint F_0054d560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054d5c0 */
uint F_0054d5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::SpaceFilter::vf0 */
uint F_0054d600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::CircleFilter::vf0 */
uint F_0054d630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::ExecActionFilter::vf0 */
uint F_0054d660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::VisibleFilter::vf0 */
uint F_0054d690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::ScreenProjectionFilter::vf0 */
uint F_0054d6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::TargetTypeFilter::vf0 */
uint F_0054d6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054d740 */
unsigned int F_0054d740(unsigned int gen_a0)
{
  GEN_ENTER(0x54d740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint * puVar2;
  
  iVar1 = 0x23;
  puVar2 = (uint *)((int)this + 0x50);
  do {
    puVar2[-0xb] = 0x11;
    puVar2[-10] = 0x11;
    puVar2[-9] = 0x11;
    puVar2[-8] = 0x11;
    puVar2[-7] = 0x11;
    puVar2[-6] = 0x11;
    puVar2[-5] = 0x11;
    puVar2[-4] = 0x11;
    puVar2[-3] = 0x11;
    puVar2[-2] = 0x11;
    *puVar2 = *puVar2 | 1;
    puVar2 = puVar2 + 0x15;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)((int)this + 0xed4) = 0x11;
  *(undefined4 *)((int)this + 0xed8) = 0x11;
  *(undefined4 *)((int)this + 0xedc) = 0x11;
  *(undefined4 *)((int)this + 0xee0) = 0x11;
  *(undefined4 *)((int)this + 0xee4) = 0x11;
  *(undefined4 *)((int)this + 0xee8) = 0x11;
  *(undefined4 *)((int)this + 0xeec) = 0x11;
  *(undefined4 *)((int)this + 0xef0) = 0x11;
  *(undefined4 *)((int)this + 0xef4) = 0x11;
  *(undefined4 *)((int)this + 0xef8) = 0x11;
  *(uint *)((int)this + 0xf00) = *(uint *)((int)this + 0xf00) | 1;
  return 0;
}

/* ref: FUN_0054d7d0 */
uint F_0054d7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)((int)this + 0x11) = *(undefined1 *)(param_1 + 0x11);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return (uint)this;
}

/* ref: FUN_0054d810 */
uint F_0054d810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109c984));
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)((int)this + 5) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)((int)this + 6) = *(undefined1 *)(param_1 + 6);
  return (uint)this;
}

/* ref: FUN_0054d840 */
unsigned int F_0054d840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined1 *)((int)this + 0x40) = *(undefined1 *)(param_1 + 0x40);
  *(undefined1 *)((int)this + 0x41) = *(undefined1 *)(param_1 + 0x41);
  *(undefined1 *)((int)this + 0x42) = *(undefined1 *)(param_1 + 0x42);
  *(undefined1 *)((int)this + 0x43) = *(undefined1 *)(param_1 + 0x43);
  return 0;
}

/* ref: FUN_0054d8b0 */
uint F_0054d8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return (uint)this;
}

/* ref: FUN_0054d900 */
uint F_0054d900(unsigned int gen_a0)
{
  GEN_ENTER(0x54d900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x6c);
  if (uVar1 == 0) {
    if (*(int *)(in_ecx + 4) != 0) {
      *(undefined4 *)(in_ecx + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
    }
    uVar1 = *(uint *)(in_ecx + 0x6c);
  }
  return uVar1;
}

/* ref: FUN_0054d920 */
uint F_0054d920(unsigned int gen_a0)
{
  GEN_ENTER(0x54d920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 0x70) != 0) {
    return *(uint *)((int)this + 0x70);
  }
  iVar1 = *(int *)((int)this + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 == 0) goto LAB_0054d948;
  }
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
LAB_0054d948: ;
  return *(uint *)((int)this + 0x70);
}

/* ref: FUN_0054d950 */
uint F_0054d950(unsigned int gen_a0)
{
  GEN_ENTER(0x54d950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(uint *)((int)this + 0x74) != 0) {
    return *(uint *)((int)this + 0x74);
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar3 == (int *)0x0) {
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar1 = *(int *)((int)this + 0x6c);
      if (iVar1 != 0) goto LAB_0054d97c;
    }
    else {
LAB_0054d97c: ;
      *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar3 == (int *)0x0) goto LAB_0054d993;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 100))(piVar3);
  *(uint *)((int)this + 0x74) = uVar2;
LAB_0054d993: ;
  return *(uint *)((int)this + 0x74);
}

/* ref: FUN_0054d9b0 */
byte F_0054d9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d9b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x20) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054d9d0 */
unsigned int F_0054d9d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54d9d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x24) = param_2;
  return 0;
}

/* ref: FUN_0054da50 */
unsigned int F_0054da50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54da50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x8c) = param_2;
  return 0;
}

/* ref: FUN_0054da80 */
unsigned int F_0054da80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54da80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x90) = param_2;
  return 0;
}

/* ref: FUN_0054daa0 */
unsigned int F_0054daa0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54daa0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x98) = param_2;
  return 0;
}

/* ref: FUN_0054dad0 */
unsigned int F_0054dad0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54dad0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x9c) = param_2;
  return 0;
}

/* ref: FUN_0054db50 */
unsigned int F_0054db50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54db50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x8c) = param_2;
  return 0;
}

/* ref: FUN_0054db80 */
unsigned int F_0054db80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54db80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x90) = param_2;
  return 0;
}

/* ref: FUN_0054dba0 */
unsigned int F_0054dba0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54dba0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x94) = param_2;
  return 0;
}

/* ref: FUN_0054dbc0 */
uint F_0054dbc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dbc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  param_2[1] = *(undefined4 *)(in_ecx + 0x9c);
  *param_2 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  param_2[2] = *(undefined4 *)(in_ecx + 0xa0);
  return (uint)param_2;
}

/* ref: FUN_0054dbf0 */
unsigned int F_0054dbf0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x54dbf0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0x9c) = param_3;
  *(float *)(in_ecx + 0xa0) = param_4;
  return 0;
}

/* ref: FUN_0054dc20 */
uint F_0054dc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dc20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  param_2[1] = *(undefined4 *)(in_ecx + 0xa8);
  *param_2 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  param_2[2] = *(undefined4 *)(in_ecx + 0xac);
  return (uint)param_2;
}

/* ref: FUN_0054dc50 */
unsigned int F_0054dc50(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x54dc50u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0xa8) = param_3;
  *(float *)(in_ecx + 0xac) = param_4;
  return 0;
}

/* ref: FUN_0054dca0 */
byte F_0054dca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (*(int *)this < 0x158) {
    *(undefined4 *)((int)this + *(int *)((int)(uintptr_t)this) * 4 + 4) = *param_1;
    *(int *)this = *(int *)this + 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_0054dcd0 */
byte F_0054dcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      this = (undefined *)((int)this + 4);
      if (*(int *)this == *param_1) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}

/* ref: FUN_0054dd00 */
uint F_0054dd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (0 < iVar1) {
    do {
      this = (undefined *)((int)this + 4);
      if (*(int *)this == *param_1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_0054dd30 */
unsigned int F_0054dd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = this;
    do {
      piVar3 = piVar3 + 1;
      if (*piVar3 == *param_1) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (iVar1 < 0x158) {
    *(int *)((int)this + iVar1 * 4 + 4) = *param_1;
    *(int *)this = *(int *)this + 1;
  }
  return 0;
}

/* ref: FUN_0054dd70 */
uint F_0054dd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  iVar1 = param_1 + 1;
  if (iVar1 < *(int *)this) {
    puVar2 = (undefined4 *)((int)this + iVar1 * 4);
    puVar3 = puVar2;
    for (iVar1 = *(int *)this - iVar1; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
    }
  }
  *(int *)this = *(int *)this + -1;
  return (uint)this;
}

/* ref: FUN_0054ddb0 */
uint F_0054ddb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ddb0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_0054ddc0 */
uint F_0054ddc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ddc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 4 + param_2 * 4;
}

/* ref: FUN_0054ddd0 */
uint F_0054ddd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54ddd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)((int)this + param_1 * 4 + 4) = *param_2;
  return param_1;
}

/* ref: FUN_0054ddf0 */
unsigned int F_0054ddf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ddf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *param_1) {
    puVar1 = this;
    do {
      puVar1 = puVar1 + 1;
      *puVar1 = *((undefined4 *)GEN_TOP((((int)param_1 - (int)this) + (int)puVar1)));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_1);
    *(int *)this = *param_1;
    return 0;
  }
  *(int *)this = *param_1;
  return 0;
}

/* ref: FUN_0054deb0 */
uint F_0054deb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54deb0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_0054dec0 */
uint F_0054dec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dec0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x4c + 4 + in_ecx;
}

/* ref: FUN_0054df00 */
byte F_0054df00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54df00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (*(int *)this < 0x10) {
    *(undefined4 *)((int)this + *(int *)((int)(uintptr_t)this) * 4 + 4) = *param_1;
    *(int *)this = *(int *)this + 1;
    return 1;
  }
  return 0;
}

/* ref: AndFilter_TargetSystem_Control_Game_Client::vf0 */
uint F_0054df40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54df40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054dff0 */
byte F_0054dff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0054e030 */
uint F_0054e030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  return in_ecx + (param_2 >> 4) * 2;
}

/* ref: FUN_0054e040 */
uint F_0054e040(unsigned int gen_a0)
{
  GEN_ENTER(0x54e040u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 1 << ((byte)param_1 & 0xf);
}

/* ref: FUN_0054e060 */
uint F_0054e060(unsigned int gen_a0)
{
  GEN_ENTER(0x54e060u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_0054e070 */
uint F_0054e070(unsigned int gen_a0)
{
  GEN_ENTER(0x54e070u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0054e080 */
uint F_0054e080(unsigned int gen_a0)
{
  GEN_ENTER(0x54e080u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_0054e090 */
uint F_0054e090(unsigned int gen_a0)
{
  GEN_ENTER(0x54e090u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_0054e0a0 */
uint F_0054e0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x54e0a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0054e0b0 */
uint F_0054e0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x54e0b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0054e0d0 */
uint F_0054e0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0054e0e0 */
uint F_0054e0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 600;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0054e100 */
uint F_0054e100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = 0x259;
  *(undefined4 *)((int)this + 4) = 0x18;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: FUN_0054e180 */
uint F_0054e180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) == (undefined *)0x0) {
    return 0xffff;
  }
  uVar1 = F_00623160(*(undefined * PTR32 *)((int)this + 0x78),param_1);
  return uVar1;
}

/* ref: FUN_0054e1a0 */
uint F_0054e1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) == (undefined *)0x0) {
    puVar2 = &REFG(float, 0x1302d00);
    puVar3 = param_1;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return (uint)param_1;
  }
  F_0064ce50(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2);
  return (uint)param_1;
}

/* ref: AndFilter_TargetSystem_Control_Game_Client::vf1 */
byte F_0054e200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  puVar2 = this;
  if (*(int *)((int)this + 0xc) != 0) {
    do {
      piVar1 = (int *)puVar2[1];
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_1);
      if ((char)uVar3 == '\0') {
        return 0;
      }
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < *(uint *)((int)this + 0xc));
  }
  return 1;
}

/* ref: FUN_0054e240 */
uint F_0054e240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xc);
  if (uVar1 < 2) {
    *(undefined4 *)((int)this + uVar1 * 4 + 4) = param_1;
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  }
  return uVar1;
}

/* ref: FUN_0054e280 */
uint F_0054e280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e280u, gen_a0, gen_a1, 0u, 0u);
  ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *in_ecx >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_0054e2a0 */
uint F_0054e2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e2a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)this =
       ~(1 << ((byte)param_1 & 0x1f)) & *(ushort *)this |
       (ushort)((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  return (uint)this;
}

/* ref: FUN_0054e2e0 */
uint F_0054e2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e2e0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  
  puVar1 = param_2;
  if (*param_1 <= *param_2) {
    puVar1 = param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_0054e340 */
uint F_0054e340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  *(undefined1 *)(in_ecx + 0x20) = 1;
  return (uint)param_2;
}

/* ref: FUN_0054e370 */
uint F_0054e370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_0054e390 */
uint F_0054e390(unsigned int gen_a0)
{
  GEN_ENTER(0x54e390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = REFG(undefined4, 0x13059d0);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = uVar2;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  *(undefined4 *)((int)this + 0x30) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x30), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x34) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x34), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x38) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x38), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x40) = 0;
  return 0;
}

/* ref: FUN_0054e3f0 */
unsigned int F_0054e3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined1 *)((int)this + 0x40) = *(undefined1 *)(param_1 + 0x40);
  *(undefined1 *)((int)this + 0x41) = *(undefined1 *)(param_1 + 0x41);
  *(undefined1 *)((int)this + 0x42) = *(undefined1 *)(param_1 + 0x42);
  *(undefined1 *)((int)this + 0x43) = *(undefined1 *)(param_1 + 0x43);
  return 0;
}

/* ref: FUN_0054e460 */
uint F_0054e460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x120) = *param_2;
  *(undefined4 *)(in_ecx + 0x124) = param_2[1];
  *(undefined4 *)(in_ecx + 0x128) = param_2[2];
  *(undefined4 *)(in_ecx + 0x140) = *param_2;
  *(undefined4 *)(in_ecx + 0x144) = param_2[1];
  *(undefined4 *)(in_ecx + 0x148) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054e4a0 */
uint F_0054e4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e4a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x130) = *param_2;
  *(undefined4 *)(in_ecx + 0x134) = param_2[1];
  *(undefined4 *)(in_ecx + 0x138) = param_2[2];
  *(undefined4 *)(in_ecx + 0x150) = *param_2;
  *(undefined4 *)(in_ecx + 0x154) = param_2[1];
  *(undefined4 *)(in_ecx + 0x158) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054e4e0 */
uint F_0054e4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  uint uVar2;
  float * pfVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((param_1 != 0) && (1 < param_2)) {
    *(uint *)this = param_2 - 1;
    uVar2 = 0;
    puVar4 = this;
    do {
      puVar4 = puVar4 + 1;
      iVar5 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *puVar4 = *(undefined4 *)(param_1 + iVar5);
    } while (uVar2 <= *(uint *)this);
    fVar7 = (float10)*(double *)&REFG(undefined, 0x10944e0);
    *(undefined4 *)((int)this + *(int *)((int)(uintptr_t)this) * 4 + 0x24) = 0;
    uVar2 = 1;
    *(undefined4 *)((int)this + 0x24) = 0;
    if (1 < *(uint *)this) {
      fVar8 = (float10)*(double *)&REFG(undefined, 0x1092098);
      pfVar3 = (float *)((int)this + 0xc);
      do {
        uVar2 = uVar2 + 1;
        pfVar3[7] = ((float)GEN_TOF(((((float10)pfVar3[-2] - (float10)pfVar3[-1] * fVar8) + (float10)*pfVar3)
                           * fVar7)));
        pfVar3 = pfVar3 + 1;
      } while (uVar2 < *(uint *)this);
    }
    uVar2 = 1;
    ((float *)(gen_frame + 0x4))[1] = 0.0;
    if (1 < *(uint *)this) {
      fVar8 = (float10)*(double *)&REFG(undefined, 0x1094788);
      pfVar3 = (float *)((int)this + 0x28);
      do {
        fVar1 = ((float *)(gen_frame + 0x4))[(int)(uVar2)];
        uVar2 = uVar2 + 1;
        ((float *)(gen_frame + 0x4))[0] = (float)(fVar8 - (float10)fVar1);
        fVar9 = (float10)(float)(fVar8 - (float10)fVar1);
        *pfVar3 = ((float)GEN_TOF((((float10)*pfVar3 - (float10)pfVar3[-1]) / fVar9)));
        ((float *)(gen_frame + 0x4))[(int)(uVar2)] = (float)((float10)1 / fVar9);
        pfVar3 = pfVar3 + 1;
      } while (uVar2 < *(uint *)this);
    }
    iVar5 = *(int *)this + -1;
    if (iVar5 != 0) {
      pfVar3 = (float *)((int)this + iVar5 * 4 + 0x24);
      do {
        iVar6 = iVar5 + -1;
        *pfVar3 = (float)((float10)*pfVar3 - (float10)((float *)(gen_frame + 0x4))[(int)(iVar5 + 1)] * (float10)pfVar3[1]);
        pfVar3 = pfVar3 + -1;
        iVar5 = iVar6;
      } while (iVar6 != 0);
    }
    *(undefined4 *)((int)this + *(int *)((int)(uintptr_t)this) * 4 + 0x34) = 0;
    uVar2 = 0;
    *(undefined4 *)((int)this + *(int *)((int)(uintptr_t)this) * 4 + 0x14) = 0;
    if (*(int *)this != 0) {
      pfVar3 = (float *)((int)this + 0x34);
      do {
        fVar1 = pfVar3[-4];
        uVar2 = uVar2 + 1;
        ((float *)(gen_frame + 0x4))[0] = fVar1;
        fVar8 = (float10)fVar1;
        fVar1 = ((float)GEN_TOF((((float10)pfVar3[-3] - fVar8) / fVar7)));
        ((float *)(gen_frame + 0x4))[0] = fVar1;
        *pfVar3 = fVar1;
        pfVar3[-8] = ((float)GEN_TOF(((((float10)pfVar3[-0xb] - (float10)pfVar3[-0xc]) - fVar8) -
                            (float10)fVar1)));
        pfVar3 = pfVar3 + 1;
      } while (uVar2 < *(uint *)this);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)this;
}

/* ref: FUN_0054e630 */
float10 F_0054e630(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e630u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  double dVar2;
  uint uVar3;
  float10 fVar4;
  uint local_10;
  float local_8;
  
  local_8 = param_2;
  if ((char)param_3 != '\0') {
    fVar4 = (float10)(int)*param_1;
    if ((int)*param_1 < 0) {
      fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    local_8 = (float)(fVar4 * (float10)param_2);
  }
  if (!GEN_ISNAN(local_8) && !(0.0 <= local_8)) {
    local_8 = 0.0;
  }
  dVar2 = (GEN_X87MATH(((double)local_8),0xd));
  local_10 = (uint)(longlong)TRUNC((float10)(float)dVar2);
  uVar3 = local_10;
  if (*param_1 <= local_10) {
    uVar3 = *param_1 - 1;
  }
  fVar4 = (float10)(int)uVar3;
  if ((int)uVar3 < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar4 = (float10)(float)((float10)local_8 - fVar4);
  return (float10)((float)GEN_TOF((fVar4 * (((float10)GEN_TOD(gen_bits2f(param_1[uVar3 + 5]))) +
                                  fVar4 * (((float10)GEN_TOD(gen_bits2f(param_1[uVar3 + 9]))) +
                                          fVar4 * ((float10)GEN_TOD(gen_bits2f(param_1[uVar3 + 0xd]))))) +
                         ((float10)GEN_TOD(gen_bits2f(param_1[uVar3 + 1]))))));
}

/* ref: FUN_0054e6f0 */
unsigned int F_0054e6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x54e6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_0054e4e0(this,param_1,param_3);
  F_0054e4e0((undefined *)((int)this + 0x44),param_2,param_3);
  return 0;
}

/* ref: FUN_0054e720 */
uint F_0054e720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_3 + 4);
  fVar3 = *(float *)(param_2 + 8);
  fVar4 = *(float *)(param_3 + 8);
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  param_1[1] = (undefined4)gen_fl2bits((float)((float10)fVar1 + (float10)fVar2));
  param_1[2] = (undefined4)gen_fl2bits((float)((float10)fVar3 + (float10)fVar4));
  return (uint)param_1;
}

/* ref: FUN_0054e760 */
uint F_0054e760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_3 + 4);
  fVar3 = *(float *)(param_2 + 8);
  fVar4 = *(float *)(param_3 + 8);
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  param_1[1] = (undefined4)gen_fl2bits((float)((float10)fVar1 - (float10)fVar2));
  param_1[2] = (undefined4)gen_fl2bits((float)((float10)fVar3 - (float10)fVar4));
  return (uint)param_1;
}

/* ref: FUN_0054e7a0 */
uint F_0054e7a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x54e7a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 8);
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  param_1[1] = (undefined4)gen_fl2bits((float)((float10)param_3 * (float10)fVar1));
  param_1[2] = (undefined4)gen_fl2bits((float)((float10)param_3 * (float10)fVar2));
  return (uint)param_1;
}

/* ref: FUN_0054e800 */
byte F_0054e800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)this);
  return *(int *)(uVar1 + 0x14) != 0;
}

/* ref: FUN_0054e820 */
uint F_0054e820(unsigned int gen_a0)
{
  GEN_ENTER(0x54e820u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  in_ecx[1] = GEN_FLT_TO(in_ecx[1], REFG(float, 0x1090708));
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  in_ecx[4] = uVar1;
  in_ecx[5] = uVar1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  *(undefined1 *)(in_ecx + 0xb) = 0;
  in_ecx[0xc] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0054e8d0 */
uint F_0054e8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e8d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x10);
  param_2[1] = *(undefined4 *)(in_ecx + 0x14);
  param_2[2] = *(undefined4 *)(in_ecx + 0x18);
  return (uint)param_2;
}

/* ref: FUN_0054e8f0 */
uint F_0054e8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e8f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = param_2[1];
  *(undefined4 *)(in_ecx + 0x18) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054e910 */
uint F_0054e910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054e930 */
byte F_0054e930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0x38);
  *(undefined1 *)((int)this + 0xb0) = *(undefined1 *)(param_1 + 0x40);
  *(undefined1 *)((int)this + 0xb1) = *(undefined1 *)(param_1 + 0x41);
  *(undefined1 *)((int)this + 0xb2) = *(undefined1 *)(param_1 + 0x42);
  bVar1 = *(byte *)(param_1 + 0x43);
  *(byte *)((int)this + 0xb3) = bVar1;
  return bVar1;
}

/* ref: FUN_0054e9c0 */
uint F_0054e9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e9c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(char *)((int)this + 0xc4) = (char)param_2;
  *(char *)((int)this + 0xc5) = (char)(param_2 >> 8);
  *(char *)((int)this + 0xc6) = (char)(param_2 >> 0x10);
  return param_2 >> 0x10;
}

/* ref: FUN_0054eaa0 */
uint F_0054eaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54eaa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x18);
  param_2[1] = *(undefined4 *)(in_ecx + 0x1c);
  param_2[2] = *(undefined4 *)(in_ecx + 0x20);
  return (uint)param_2;
}

/* ref: FUN_0054eac0 */
byte F_0054eac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54eac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (*(int *)((int)this + 0x28) == *(int *)(param_1 + 0x28)) {
    bVar1 = F_0054ccb0((undefined *)((int)this + 0x30),param_1 + 0x30);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0054eaf0 */
uint F_0054eaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54eaf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054eb10 */
uint F_0054eb10(unsigned int gen_a0)
{
  GEN_ENTER(0x54eb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  *(undefined4 *)((int)this + 0x28) = 0xe0000000;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x70), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x74) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x74), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x78) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x78), REFG(float, 0x1375ac8));
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined1 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0xa0) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xa0), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0xa4) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xa4), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0xa8) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xa8), REFG(float, 0x1375ac8));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined1 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = uVar1;
  *(undefined4 *)((int)this + 0x220) = uVar1;
  *(undefined4 *)((int)this + 0x224) = uVar1;
  *(undefined4 *)((int)this + 0x228) = uVar1;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  puVar3 = &REFG(float, 0x1302d00);
  puVar4 = (undefined4 *)((int)this + 0x240);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &REFG(float, 0x1302d00);
  puVar4 = (undefined4 *)((int)this + 0x280);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined1 *)((int)this + 0x2d0) = 1;
  *(undefined4 *)((int)this + 0x2e0) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x2e0), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x2e4) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x2e4), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x2e8) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x2e8), REFG(float, 0x1375ac8));
  *(undefined2 *)((int)this + 0x2f0) = 0;
  return (uint)this;
}

/* ref: FUN_0054ecc0 */
uint F_0054ecc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ecc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x70) = *param_2;
  *(undefined4 *)(in_ecx + 0x74) = param_2[1];
  *(undefined4 *)(in_ecx + 0x78) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054ece0 */
uint F_0054ece0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ece0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0xa0) = *param_2;
  *(undefined4 *)(in_ecx + 0xa4) = param_2[1];
  *(undefined4 *)(in_ecx + 0xa8) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054ed10 */
uint F_0054ed10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ed10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x2e0) = *param_2;
  *(undefined4 *)(in_ecx + 0x2e4) = param_2[1];
  *(undefined4 *)(in_ecx + 0x2e8) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054ed40 */
unsigned int F_0054ed40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ed40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return 0;
}

/* ref: FUN_0054edf0 */
uint F_0054edf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54edf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x109ca80));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0054ee10 */
uint F_0054ee10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54ee10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109ca8c));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_0054ee30 */
uint F_0054ee30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54ee30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109ca98));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_0054ee50 */
uint F_0054ee50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ee50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x109caa4));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Client::Game::Control::TargetSystem::DelayedRayFilter::vf0 */
uint F_0054ee70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ee70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::PetFilter::vf0 */
uint F_0054eea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54eea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::OrFilter::vf0 */
uint F_0054eed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54eed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::NotFilter::vf0 */
uint F_0054ef00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ef00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054efa0 */
uint F_0054efa0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x54efa0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  fVar1 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * fVar2))));
  *param_1 = (float)fVar1;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  fVar2 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * fVar2))));
  param_1[3] = (float)fVar2;
  F_0054d030(param_1,param_3);
  F_0054d0f0(param_1,param_4);
  return (uint)param_1;
}

/* ref: FUN_0054f010 */
uint F_0054f010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x54f010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  *in_ecx = *param_4;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = param_4[1];
  in_ecx[6] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = param_4[2];
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  F_004efe70(in_ecx,param_3);
  in_ecx[0xc] = (undefined4)
                gen_fl2bits((float)((float10)*param_2 + ((float10)GEN_TOD(gen_bits2f(in_ecx[0xc])))));
  in_ecx[0xd] = (undefined4)
                gen_fl2bits((float)((float10)param_2[1] + ((float10)GEN_TOD(gen_bits2f(in_ecx[0xd])))));
  in_ecx[0xe] = (undefined4)
                gen_fl2bits((float)((float10)param_2[2] + ((float10)GEN_TOD(gen_bits2f(in_ecx[0xe])))));
  return (uint)in_ecx;
}

/* ref: FUN_0054f090 */
ushort F_0054f090(float gen_a0)
{
  GEN_ENTER(0x54f090u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  int iVar1;
  
  iVar1 = (int)((((float10)(*(float *)&gen_args[0]) + (float10)*(double *)&REFG(undefined, 0x1080228)) *
                (float10)*(double *)&REFG(undefined, 0x1088118)) /
               (((float10)*(double *)&REFG(undefined, 0x1088118) * (float10)*(float *)&REFG(undefined, 0x1305b6c)) /
               (float10)REFG(double, 0x109cab0)));
  if (0xfffe < iVar1) {
    return 0xffff;
  }
  if (0 < iVar1) {
    (*(undefined2 *)((char *)&(*(float *)&gen_args[0]) + 0)) = (ushort)iVar1;
    return (*(undefined2 *)((char *)&(*(float *)&gen_args[0]) + 0));
  }
  return 0;
}

/* ref: FUN_0054f100 */
uint F_0054f100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f100u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)(float)((float10)param_2[1] - (float10)in_ecx[1]);
  fVar3 = (float10)(float)((float10)*param_2 - (float10)*in_ecx);
  fVar4 = (float10)(float)((float10)param_2[2] - (float10)in_ecx[2]);
  fVar1 = ((float)GEN_TOF(((fVar2 * (float10)param_2[5] + fVar3 * (float10)param_2[4]) +
                 fVar4 * (float10)param_2[6])));
  fVar2 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar4 * fVar4 + (fVar3 * fVar3 + fVar2 * fVar2)))) -
                          (float10)in_ecx[3] * (float10)in_ecx[3])));
  if (((float10)0 < fVar2) &&
     ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114)))) {
    return (uint)param_2 & 0xffffff00;
  }
  if ((float10)0 <= (float10)fVar1 * (float10)fVar1 - fVar2) {
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Control::TargetSystem::RayFilter::vf0 */
uint F_0054f1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054f210 */
unsigned int F_0054f210(unsigned int gen_a0)
{
  GEN_ENTER(0x54f210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)((int)this + 4);
  iVar1 = 0xf;
  puVar2 = (undefined4 *)((int)this + 0x18);
  do {
    *puVar3 = 0;
    puVar2[-4] = 0;
    puVar2[-3] = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar3 = puVar3 + 0x13;
    puVar2 = puVar2 + 0x13;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x4c4) = 0;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0xa6c) = 0;
  *(undefined4 *)((int)this + 0xfd0) = 0;
  return 0;
}

/* ref: FUN_0054f2a0 */
float F_0054f2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x54f2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint in_eax;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  in_eax = ((code *)*(gen_code32 *)(*(int *)this + 0xec))();
  F_00536840(in_eax,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))));
}

/* ref: FUN_0054f2d0 */
unsigned int F_0054f2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x54f2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109c038)));
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109c800)));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109c03c)));
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087ef8)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_0054e4e0((undefined *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x18)),4);
  F_0054e4e0((undefined *)((int)this + 0x48),&(*(undefined4 *)(gen_frame + 0x8)),4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_0054f370 */
unsigned int F_0054f370(unsigned int gen_a0)
{
  GEN_ENTER(0x54f370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109c038)));
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109c800)));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109c03c)));
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087ef8)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_0054e4e0((undefined *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x18)),4);
  F_0054e4e0((undefined *)((int)this + 0x48),&(*(undefined4 *)(gen_frame + 0x8)),4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_0054f410 */
byte F_0054f410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0054f430 */
byte F_0054f430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2))) & 1 << ((byte)param_1 & 0xf)) != 0;
}

/* ref: FUN_0054f460 */
float10 F_0054f460(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54f460u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float10 fVar1;
  
  fVar1 = F_0054e630(param_1 + 0x48,param_2,param_3);
  return fVar1;
}

/* ref: FUN_0054f480 */
float10 F_0054f480(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54f480u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float10 fVar1;
  
  fVar1 = F_0054e630(param_1 + 0x48,param_2,param_3);
  return fVar1;
}

/* ref: FUN_0054f4b0 */
uint F_0054f4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54f4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0054f4d0 */
unsigned int F_0054f4d0(unsigned int gen_a0)
{
  GEN_ENTER(0x54f4d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0054f550 */
uint F_0054f550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f550u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(ushort *)(in_ecx + 0x70) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_0054f570 */
uint F_0054f570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54f570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + 0x70) =
       (ushort)((char)param_2 != '\0') << ((byte)param_1 & 0x1f) |
       ~(1 << ((byte)param_1 & 0x1f)) & *(ushort *)((int)this + 0x70);
  return (uint)this;
}

/* ref: FUN_0054f5b0 */
uint F_0054f5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x54f5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = REFG(undefined4, 0x13059d0);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = uVar2;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  *(undefined4 *)((int)this + 0x30) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x30), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x34) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x34), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x38) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x38), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x40) = 0;
  return (uint)this;
}

/* ref: FUN_0054f610 */
uint F_0054f610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  uint * puVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x18);
  if (*(int *)((int)this + 0x50) != 0) {
    F_0053c340(this,*(int *)((int)this + 0x50),0,*(undefined4 *)((int)this + 0x27c),0);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  puVar3 = (uint *)F_00ab2a20(0);
  *(uint * PTR32 *)((int)this + 0x27c) = puVar3;
  if (puVar3 == (uint *)0x0) {
    *(char * PTR32 *)((int)this + 0x20c) = "cbbm_id0";
  }
  else {
    *(uint *)((int)this + 0x20c) = (*puVar3 & 0xffffff) + (int)puVar3;
  }
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + 0x20c);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  uVar4 = F_00b5a860(&(*(undefined4 *)(gen_frame + 0x0)));
  uVar2 = REFG(undefined4, 0x13059d0);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(uint *)((int)this + 0x244) = uVar4;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = uVar2;
  *(undefined4 *)((int)this + 0x128) = 0xffffffff;
  *(undefined4 *)((int)this + 300) = uVar1;
  *(undefined4 *)((int)this + 0x130) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x130), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x134) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x134), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x138) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x138), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x140) = 0;
  if ((char)param_1 != '\0') {
    *(undefined4 *)((int)this + 0x16c) = uVar1;
    *(undefined1 *)((int)this + 0x1a4) = 1;
  }
  *(undefined1 *)((int)this + 0x1e0) = 1;
  uVar4 = *(uint *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x1a8) = uVar1;
  if (*(uint *)((int)this + 0x18) == uVar4) {
    uVar5 = *(uint *)((int)this + 0x27c);
  }
  else {
    uVar4 = F_00ab2a20(uVar4);
    uVar5 = uVar4;
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    this_00 = (undefined *)F_00a5f290(*(undefined * PTR32 *)((int)this + 0x10));
    uVar4 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar4 = F_00aa7040(this_00,0,0,0,uVar5,(*(undefined4 *)(gen_frame + 0x8)));
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x14) = 2;
    uVar4 = F_00a5f290(*(undefined * PTR32 *)((int)this + 0x10));
    if (uVar4 != 0) {
      F_00aa0750(0,0,0);
    }
    *(undefined4 *)((int)this + 0x88) = *(undefined4 *)((int)this + 0xc0);
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  return uVar4;
}

/* ref: FUN_0054f7a0 */
uint F_0054f7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54f7a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_EAX = 0;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_1;
  if (param_1 < 0xe) {
    uVar1 = *(undefined4 *)((int)this + param_1 * 4 + 0x18);
    iVar2 = *(int *)((int)this + param_1 * 4 + 0x50);
    if (iVar2 != 0) {
      F_0053c340(this,iVar2,param_1,*(undefined4 *)((int)this + param_1 * 4 + 0x27c),0);
    }
  }
  else {
    param_1 = 0;
    uVar1 = param_1;
  }
  param_1 = uVar1;
  F_005365b0(this,uVar3,0);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  uVar4 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
  if ((char)param_2 != '\0') {
    *(undefined4 *)((int)this + uVar3 * 4 + 0x16c) = GEN_FLT_TO(*(undefined4 *)((int)this + uVar3 * 4 + 0x16c), REFG(float, 0x1087f04));
    *(undefined1 *)((int)this + 0x1a4) = 1;
  }
  *(undefined4 *)((int)this + uVar3 * 4 + 0x1a8) = uVar1;
  *(undefined1 *)(uVar3 + 0x1e0 + (int)this) = 1;
  if (uVar3 < 0xe) {
    uVar4 = *(uint *)((int)this + uVar3 * 4 + 0x50);
    if (*(uint *)((int)this + uVar3 * 4 + 0x18) == uVar4) {
      uVar5 = *(uint *)((int)this + uVar3 * 4 + 0x27c);
    }
    else {
      uVar4 = F_00ab2a20(uVar4);
      uVar5 = uVar4;
    }
  }
  else {
    uVar5 = 0;
  }
  if ((*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) &&
     (this_00 = (undefined *)F_00a5f290(*(undefined * PTR32 *)((int)this + 0x10)), uVar4 = 0,
     this_00 != (undefined *)0x0)) {
    uVar4 = F_00aa7040(this_00,0,uVar3,0,uVar5,param_1);
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    if (uVar3 == 0) {
      *(undefined4 *)((int)this + 0x14) = 2;
    }
    uVar4 = F_00a5f290(*(undefined * PTR32 *)((int)this + 0x10));
    if (uVar4 != 0) {
      F_00aa0750(0,uVar3,0);
    }
    uVar4 = *(uint *)((int)this + uVar3 * 4 + 0xc0);
    *(uint *)((int)this + uVar3 * 4 + 0x88) = uVar4;
    *(undefined4 *)((int)this + uVar3 * 4 + 0x50) = 0;
  }
  return uVar4;
}

/* ref: FUN_0054f8b0 */
byte F_0054f8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x118) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x120) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x124) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x128) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 300) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x130) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x134) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x138) = *(undefined4 *)(param_1 + 0x38);
  *(undefined1 *)((int)this + 0x140) = *(undefined1 *)(param_1 + 0x40);
  *(undefined1 *)((int)this + 0x141) = *(undefined1 *)(param_1 + 0x41);
  *(undefined1 *)((int)this + 0x142) = *(undefined1 *)(param_1 + 0x42);
  bVar1 = *(byte *)(param_1 + 0x43);
  *(byte *)((int)this + 0x143) = bVar1;
  return bVar1;
}

/* ref: FUN_0054f940 */
uint F_0054f940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x28);
  return param_1;
}

/* ref: FUN_0054f970 */
unsigned int F_0054f970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x38);
  return 0;
}

/* ref: FUN_0054f9d0 */
uint F_0054f9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  if ((char)param_1 == '\0') {
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined4 *)((int)this + 0x920) = 0;
  *(undefined4 *)((int)this + 0x924) = 0xffffffff;
  *(undefined1 *)((int)this + 0x928) = 0;
  this_00 = (undefined *)((int)this + 0x20);
  iVar2 = 3;
  do {
    uVar1 = F_0054eb10(this_00);
    this_00 = (undefined *)((int)this_00 + 0x300);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_0054fa20 */
uint F_0054fa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54fa20u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  
  fVar1 = param_2[8];
  in_ecx[1] = 0.0;
  *in_ecx = fVar1;
  in_ecx[2] = 0.0;
  in_ecx[4] = 0.0;
  in_ecx[5] = param_2[9];
  in_ecx[6] = 0.0;
  in_ecx[8] = 0.0;
  in_ecx[9] = 0.0;
  in_ecx[10] = param_2[10];
  in_ecx[0xc] = 0.0;
  in_ecx[0xd] = 0.0;
  in_ecx[0xe] = 0.0;
  F_004efe70(in_ecx,(uint)(param_2 + 4));
  in_ecx[0xc] = (float)((float10)in_ecx[0xc] + (float10)*param_2);
  in_ecx[0xd] = (float)((float10)param_2[1] + (float10)in_ecx[0xd]);
  in_ecx[0xe] = (float)((float10)param_2[2] + (float10)in_ecx[0xe]);
  return (uint)in_ecx;
}

/* ref: Client::Game::Control::TargetSystem::vf3 */
uint F_0054faa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54faa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xfac) = param_2;
  return param_2;
}

/* ref: Client::Game::Control::TargetSystem::vf4 */
uint F_0054fab0(unsigned int gen_a0)
{
  GEN_ENTER(0x54fab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xfac);
}

/* ref: Client::Game::Control::TargetSystem::vf5 */
uint F_0054fac0(unsigned int gen_a0)
{
  GEN_ENTER(0x54fac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xf54) * 0x54 + in_ecx + 0xa8;
}

/* ref: Client::Game::Control::TargetSystem::vf2 */
uint F_0054fae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54fae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109c9a0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054fb20 */
float F_0054fb20(unsigned int gen_a0)
{
  GEN_ENTER(0x54fb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  if ((*(byte *)((int)this + 0xe) & 1) != 0) {
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x20))(this);
    return (float)extraout_ST0;
  }
  extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x1c))();
  return (float)extraout_ST0_00;
}

/* ref: FUN_0054fb60 */
byte F_0054fb60(unsigned int gen_a0)
{
  GEN_ENTER(0x54fb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  code * pcVar2;
  float10 extraout_ST0;
  float10 fVar3;
  float10 fVar4;
  
  if ((*(byte *)((int)this + 0xe) & 1) == 0) {
    pcVar2 = *(gen_code32 *)(*(int *)this + 0x1c);
  }
  else {
    pcVar2 = *(gen_code32 *)(*(int *)this + 0x20);
  }
  extraout_ST0 = (*pcVar2)();
  fVar1 = (float)extraout_ST0;
  if ((*(byte *)((int)this + 0xe) >> 1 & 1) == 0) {
    if ((float10)fVar1 < (float10)*(float *)((int)this + 8)) {
      *(float *)((int)this + 8) = fVar1;
      return 0;
    }
  }
  else {
    fVar3 = (float10)fVar1;
    fVar4 = (float10)*(float *)((int)this + 8);
    if (fVar3 < fVar4) {
      *(float *)((int)this + 8) = ((float)GEN_TOF((fVar4 - (float10)(longlong)(fVar4 / fVar3) * fVar3)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0054fbe0 */
float10 F_0054fbe0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54fbe0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = F_0054e630(param_1 + 0x48,param_2,param_3);
  fVar1 = *(float *)(param_1 + 0x94);
  fVar2 = (float)fVar3;
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
    fVar4 = F_0054e630(param_1 + 0x48,fVar1,param_3);
    fVar5 = F_0054e630(param_1 + 0x48,(float)(float10)1,param_3);
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(float)fVar3 - (float10)(float)fVar4) /
                   (float10)(float)(fVar5 - (float10)(float)fVar4))));
  }
  param_3 = (uint)gen_fl2bits(fVar2);
  return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x9c) -
                                          (float10)*(float *)(param_1 + 0x98)))) *
                          ((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)*(float *)(param_1 + 0x98))));
}

/* ref: FUN_0054fc90 */
unsigned int F_0054fc90(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x54fc90u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar5 = F_0054e630(param_1 + 0x48,param_3,param_4);
  fVar1 = *(float *)(param_1 + 0x94);
  fVar2 = (float)fVar5;
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
    fVar6 = F_0054e630(param_1 + 0x48,fVar1,param_4);
    fVar7 = F_0054e630(param_1 + 0x48,(float)(float10)1,param_4);
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(float)fVar5 - (float10)(float)fVar6) /
                   (float10)(float)((float10)(float)fVar7 - (float10)(float)fVar6))));
  }
  param_4 = (uint)gen_fl2bits(fVar2);
  fVar3 = *(float *)(param_1 + 0xa8);
  fVar1 = *(float *)(param_1 + 0x9c);
  fVar4 = *(float *)(param_1 + 0xac);
  fVar2 = *(float *)(param_1 + 0xa0);
  *param_2 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  param_2[1] = (undefined4)
               gen_fl2bits(((float)GEN_TOF(((float10)fVar1 +
                                  (float10)((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_4))) *
                                                  (float10)(float)((float10)fVar3 - (float10)fVar1))))
                                  ))));
  param_2[2] = (undefined4)
               gen_fl2bits(((float)GEN_TOF(((float10)fVar2 +
                                  (float10)((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_4))) *
                                                  (float10)(float)((float10)fVar4 - (float10)fVar2))))
                                  ))));
  return 0;
}

/* ref: FUN_0054fdb0 */
uint F_0054fdb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54fdb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0054fdd0 */
uint F_0054fdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54fdd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0054fde0 */
uint F_0054fde0(unsigned int gen_a0)
{
  GEN_ENTER(0x54fde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0054f4d0(this);
  return (uint)this;
}

/* ref: FUN_0054fe10 */
uint F_0054fe10(unsigned int gen_a0)
{
  GEN_ENTER(0x54fe10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b74aa0(this);
  F_0053f7a0((undefined *)((int)this + 0x30));
  *(undefined4 *)((int)this + 0x3af4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3af0) = (*(undefined * PTR32 (*)[1])REFP(0x109c954));
  *(undefined2 *)((int)this + 0x3af8) = 0x100;
  return (uint)this;
}

/* ref: FUN_0054fe40 */
byte F_0054fe40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54fe40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  
  *(float *)((int)param_1 + 8) = param_2;
  bVar1 = F_0054fb60(param_1);
  return bVar1;
}

/* ref: FUN_0054fe60 */
ushort F_0054fe60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54fe60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 in_AX = 0;
  ushort uVar1;
  
  uVar1 = CONCAT11((char)((ushort)in_AX >> 8),(byte)param_1);
  if ((*(byte *)((int)this + 0x70) >> 5 & 1) != (byte)param_1) {
    uVar1 = *(ushort *)((int)this + 0x70) & 0xffdf;
    *(ushort *)((int)this + 0x70) = (ushort)((byte)param_1 != 0) << 5 | uVar1;
    *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) | 0x40;
  }
  return uVar1;
}

/* ref: Common::Component::BGCollision::Object::vf0 */
uint F_0054feb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54feb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054fee0 */
uint F_0054fee0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54fee0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = param_2;
  in_ecx[2] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0054ff00 */
uint F_0054ff00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ff00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_0054ff20 */
unsigned int F_0054ff20(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x54ff20u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  return 0;
}

/* ref: FUN_0054ff50 */
uint F_0054ff50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ff50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054ff70 */
uint F_0054ff70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ff70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054ff90 */
uint F_0054ff90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54ff90u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 + (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] + (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] + (float10)param_3[2]);
  return (uint)param_1;
}

/* ref: FUN_0054ffc0 */
uint F_0054ffc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54ffc0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 - (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] - (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] - (float10)param_3[2]);
  return (uint)param_1;
}

/* ref: FUN_0054fff0 */
uint F_0054fff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54fff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*(float *)this - (float10)*param_2);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) - (float10)param_2[1])));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)((int)this + 8) - (float10)param_2[2])));
  return (uint)param_1;
}

/* ref: FUN_00550080 */
unsigned int F_00550080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x550080u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = *(float *)(param_2 + 4);
  fVar1 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 8);
  fVar4 = *(float *)param_3;
  fVar5 = *(float *)(param_3 + 4);
  fVar6 = *(float *)(param_3 + 8);
  *param_1 = (float)((float10)fVar2 * (float10)fVar6 - (float10)fVar3 * (float10)fVar5);
  param_1[1] = (float)((float10)fVar4 * (float10)fVar3 - (float10)fVar1 * (float10)fVar6);
  param_1[2] = (float)((float10)fVar5 * (float10)fVar1 - (float10)fVar2 * (float10)fVar4);
  return 0;
}

/* ref: FUN_00550100 */
float10 F_00550100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550100u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * (float10)in_ecx[2] +
                         ((float10)*(float *)param_2 * (float10)*in_ecx +
                         (float10)*(float *)(param_2 + 4) * (float10)in_ecx[1]))));
}

/* ref: FUN_00550130 */
float10 F_00550130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550130u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  return (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 8) * (float10)param_2[2] +
                         ((float10)*(float *)param_1 * (float10)*param_2 +
                         (float10)*(float *)(param_1 + 4) * (float10)param_2[1]))));
}

/* ref: FUN_00550160 */
uint F_00550160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550160u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_00550180 */
uint F_00550180(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x550180u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)(fVar1 * (float10)*in_ecx);
  param_2[1] = (float)((float10)in_ecx[1] * fVar1);
  param_2[2] = (float)(fVar1 * (float10)in_ecx[2]);
  return (uint)param_2;
}

/* ref: FUN_005501b0 */
uint F_005501b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5501b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)(fVar1 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * fVar1);
  param_1[2] = (float)(fVar1 * (float10)param_2[2]);
  return (uint)param_1;
}

/* ref: FUN_005501e0 */
float F_005501e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5501e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 8) *
                                      (float10)*(float *)((int)this + 8) +
                                     ((float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this +
                                     (float10)*(float *)((int)this + 4) *
                                     (float10)*(float *)((int)this + 4))))))));
}

/* ref: FUN_00550270 */
uint F_00550270(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x550270u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return (uint)in_ecx;
}

/* ref: FUN_005502a0 */
uint F_005502a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5502a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_005502d0 */
uint F_005502d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5502d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = (undefined4)gen_fl2bits(param_3);
  in_ecx[2] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00550300 */
uint F_00550300(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x550300u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)(fVar1 * (float10)*in_ecx);
  param_2[1] = (float)((float10)in_ecx[1] * fVar1);
  param_2[2] = (float)((float10)in_ecx[2] * fVar1);
  param_2[3] = (float)(fVar1 * (float10)in_ecx[3]);
  return (uint)param_2;
}

/* ref: FUN_00550330 */
uint F_00550330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x550330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 + (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] + (float10)*(float *)((int)this + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] + (float10)*(float *)((int)this + 8))));
  param_1[3] = ((float)GEN_TOF(((float10)param_2[3] + (float10)*(float *)((int)this + 0xc))));
  return (uint)param_1;
}

/* ref: FUN_00550360 */
uint F_00550360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_00550380 */
unsigned int F_00550380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550380u, gen_a0, gen_a1, 0u, 0u);
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
  return 0;
}

/* ref: FUN_005503f0 */
unsigned int F_005503f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5503f0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = ((float)GEN_TOF((((float10)param_2[8] * (float10)param_3[2] +
                     ((float10)*param_2 * (float10)*param_3 +
                     (float10)param_2[4] * (float10)param_3[1])) + (float10)param_2[0xc])));
  param_1[1] = ((float)GEN_TOF((((float10)param_2[9] * (float10)param_3[2] +
                       ((float10)param_2[5] * (float10)param_3[1] +
                       (float10)param_2[1] * (float10)*param_3)) + (float10)param_2[0xd])));
  param_1[2] = ((float)GEN_TOF((((float10)param_2[10] * (float10)param_3[2] +
                       ((float10)param_2[6] * (float10)param_3[1] +
                       (float10)param_2[2] * (float10)*param_3)) + (float10)param_2[0xe])));
  return 0;
}

/* ref: FUN_00550450 */
uint F_00550450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x550450u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar9 = (float10)*(float *)(param_3 + 8);
  fVar1 = in_ecx[9];
  fVar2 = in_ecx[10];
  fVar10 = (float10)*(float *)(param_3 + 4);
  fVar3 = in_ecx[5];
  fVar4 = in_ecx[6];
  fVar11 = (float10)*(float *)param_3;
  fVar5 = in_ecx[1];
  fVar6 = in_ecx[2];
  fVar7 = in_ecx[0xd];
  fVar8 = in_ecx[0xe];
  *param_2 = ((float)GEN_TOF(((float10)in_ecx[0xc] +
                    (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar11 * (float10)*in_ecx) +
                                                     (float10)(float)(fVar10 * (float10)in_ecx[4]))))
                                    + (float10)(float)(fVar9 * (float10)in_ecx[8])))))));
  param_2[1] = ((float)GEN_TOF(((float10)fVar7 +
                      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar5 * fVar11) +
                                                       (float10)(float)((float10)fVar3 * fVar10)))) +
                                      (float10)(float)((float10)fVar1 * fVar9)))))));
  param_2[2] = ((float)GEN_TOF(((float10)fVar8 +
                      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar11 * (float10)fVar6) +
                                                       (float10)(float)(fVar10 * (float10)fVar4)))) +
                                      (float10)(float)(fVar9 * (float10)fVar2)))))));
  return (uint)param_2;
}

/* ref: FUN_00550560 */
uint F_00550560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550560u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*in_ecx - (float10)*param_2);
  in_ecx[1] = (float)((float10)in_ecx[1] - (float10)param_2[1]);
  in_ecx[2] = (float)((float10)in_ecx[2] - (float10)param_2[2]);
  in_ecx[3] = (float)((float10)in_ecx[3] + (float10)*param_2);
  in_ecx[4] = (float)((float10)in_ecx[4] + (float10)param_2[1]);
  in_ecx[5] = (float)((float10)param_2[2] + (float10)in_ecx[5]);
  return (uint)param_2;
}

/* ref: FUN_005505a0 */
uint F_005505a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5505a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005505c0 */
uint F_005505c0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x5505c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_005505e0 */
uint F_005505e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5505e0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*in_ecx - (float10)*param_2);
  in_ecx[1] = (float)((float10)in_ecx[1] - (float10)param_2[1]);
  return (uint)in_ecx;
}

/* ref: FUN_00550600 */
uint F_00550600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550600u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] + (float10)in_ecx[1]);
  return (uint)in_ecx;
}

/* ref: FUN_00550620 */
uint F_00550620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550620u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = param_2[2];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  uVar1 = param_2[2];
  in_ecx[2] = *param_2;
  in_ecx[3] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00550650 */
unsigned int F_00550650(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x550650u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx - fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] - fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] + fVar1);
  in_ecx[3] = (float)(fVar1 + (float10)in_ecx[3]);
  return 0;
}

/* ref: FUN_00550680 */
unsigned int F_00550680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550680u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((float10)*(float *)param_2 < (float10)*in_ecx) {
    *in_ecx = *(float *)param_2;
  }
  if ((float10)*(float *)(param_2 + 8) < (float10)in_ecx[1]) {
    in_ecx[1] = *(float *)(param_2 + 8);
  }
  if ((float10)in_ecx[2] < (float10)*(float *)param_2) {
    in_ecx[2] = *(float *)param_2;
  }
  if ((float10)in_ecx[3] < (float10)*(float *)(param_2 + 8)) {
    in_ecx[3] = *(float *)(param_2 + 8);
  }
  return 0;
}

/* ref: FUN_00550710 */
uint F_00550710(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x550710u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = (undefined4)gen_fl2bits(param_3);
  in_ecx[2] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00550740 */
unsigned int F_00550740(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x550740u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return 0;
}

/* ref: FUN_00550770 */
unsigned int F_00550770(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x550770u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  return 0;
}

/* ref: FUN_005507d0 */
byte F_005507d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5507d0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float local_8;
  
  uVar4 = param_1;
  local_8 = 0.0;
  fVar1 = (float)((float10)*(float *)param_3 - (float10)*(float *)param_1);
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_3 + 8) - (float10)*(float *)param_1)));
  fVar5 = (float10)*(float *)param_2;
  if ((double)(float)(fVar5 * fVar5) < *(double *)&REFG(undefined, 0x109cc40)) {
    if (!GEN_ISNAN(fVar1) && !(fVar1 <= 0.0)) {
      return 0;
    }
    if (!GEN_ISNAN(fVar2) && (!(0.0 < fVar2) && fVar2 != 0.0)) {
      return 0;
    }
    param_1 = (uint)gen_fl2bits((float)(REFG(float, 0x1090998)));
  }
  else {
    fVar5 = (float10)(float)((float10)1 / fVar5);
    fVar1 = (float)(fVar5 * (float10)fVar1);
    fVar2 = (float)(fVar5 * (float10)fVar2);
    if ((float10)fVar2 < (float10)fVar1) {
      param_1 = (uint)gen_fl2bits(fVar1);
      if (0.0 < fVar2) {
        local_8 = fVar2;
      }
    }
    else {
      param_1 = (uint)gen_fl2bits(fVar2);
      if (0.0 < fVar1) {
        local_8 = fVar1;
      }
    }
    if ((!GEN_ISNAN((float10)local_8) && !GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(param_1))))) &&
        !((float10)local_8 <= ((float10)GEN_TOD(gen_bits2f(param_1))))) {
      return 0;
    }
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_3 + 4) - (float10)*(float *)(uVar4 + 8))));
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_3 + 0xc) - (float10)*(float *)(uVar4 + 8))));
  fVar5 = (float10)*(float *)(param_2 + 8);
  if ((double)(float)(fVar5 * fVar5) < *(double *)&REFG(undefined, 0x109cc40)) {
    if ((!(0.0 < fVar1)) && (!(fVar2 < 0.0))) {
      return 1;
    }
    return 0;
  }
  fVar5 = (float10)(float)((float10)1 / fVar5);
  fVar1 = (float)(fVar5 * (float10)fVar1);
  fVar2 = (float)(fVar5 * (float10)fVar2);
  fVar5 = (float10)fVar2;
  fVar6 = (float10)fVar1;
  if (fVar5 < fVar6) {
    if ((float10)local_8 < fVar5) {
      local_8 = fVar2;
    }
    bVar3 = fVar6 < ((float10)GEN_TOD(gen_bits2f(param_1)));
    fVar2 = local_8;
  }
  else {
    if ((float10)local_8 < fVar6) {
      local_8 = fVar1;
    }
    bVar3 = fVar5 < ((float10)GEN_TOD(gen_bits2f(param_1)));
    fVar1 = fVar2;
    fVar2 = local_8;
  }
  if (bVar3) {
    param_1 = (uint)gen_fl2bits(fVar1);
  }
  if (((float10)GEN_TOD(gen_bits2f(param_1))) < (float10)fVar2) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00550990 */
byte F_00550990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x550990u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  
  fVar1 = *(float *)param_3;
  fVar2 = *(float *)param_4;
  (*(float *)(gen_frame + 0x28)) = 0.0;
  fVar7 = (float10)fVar1;
  (*(float *)(gen_frame + 0x2c)) = 0.0;
  (*(float *)(gen_frame + 0x30)) = 0.0;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  (*(float *)(gen_frame + 0xc)) = 0.0;
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar2 - fVar7);
  fVar3 = ((float)GEN_TOF(((float10)*(float *)(param_4 + 4) - (float10)*(float *)(param_3 + 4))));
  (*(float *)(gen_frame + 0x14)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)*(float *)(param_4 + 8) - (float10)*(float *)(param_3 + 8))));
  (*(float *)(gen_frame + 0x18)) = fVar4;
  (*(float *)(gen_frame + 0x1c)) = (float)((float10)*(float *)param_5 - fVar7);
  fVar5 = ((float)GEN_TOF(((float10)*(float *)(param_5 + 4) - (float10)*(float *)(param_3 + 4))));
  (*(float *)(gen_frame + 0x20)) = fVar5;
  fVar6 = ((float)GEN_TOF(((float10)*(float *)(param_5 + 8) - (float10)*(float *)(param_3 + 8))));
  (*(float *)(gen_frame + 0x24)) = fVar6;
  (*(float *)(gen_frame + 0x38)) = *(float *)param_2;
  fVar1 = *(float *)(param_2 + 4);
  fVar8 = (float10)fVar6;
  fVar9 = (float10)fVar1;
  fVar10 = (float10)*(float *)(param_2 + 8);
  (*(float *)(gen_frame + 0x34)) = *(float *)(param_2 + 8);
  fVar11 = (float10)fVar5;
  fVar12 = (float10)(float)((float10)*(float *)param_5 - fVar7);
  fVar13 = (float10)*(float *)param_2;
  fVar14 = (float10)(float)(fVar12 * fVar10 - fVar13 * fVar8);
  fVar8 = (float10)(float)(fVar9 * fVar8 - fVar11 * fVar10);
  fVar9 = (float10)(float)(fVar13 * fVar11 - fVar9 * fVar12);
  fVar2 = ((float)GEN_TOF((fVar9 * (float10)fVar4 +
                 (fVar8 * (float10)(float)((float10)fVar2 - fVar7) + fVar14 * (float10)fVar3))));
  fVar10 = (float10)fVar2;
  if ((float10)REFG(float, 0x109cc48) < fVar10) {
    fVar3 = *param_1;
    (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar3 - fVar7);
    fVar4 = ((float)GEN_TOF(((float10)param_1[1] - (float10)*(float *)(param_3 + 4))));
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    fVar5 = ((float)GEN_TOF(((float10)param_1[2] - (float10)*(float *)(param_3 + 8))));
    (*(float *)(gen_frame + 0x30)) = fVar5;
    fVar3 = ((float)GEN_TOF((fVar9 * (float10)fVar5 +
                   (fVar8 * (float10)(float)((float10)fVar3 - fVar7) + (float10)fVar4 * fVar14))));
    fVar7 = (float10)fVar3;
    if ((!(fVar7 < (float10)0)) && (!(fVar10 < fVar7))) {
      F_00550080(&(*(float *)(gen_frame + 0x4)),(uint)&(*(float *)(gen_frame + 0x28)),(uint)&(*(float *)(gen_frame + 0x10)));
      fVar7 = (float10)((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x8)) * (float10)fVar1 +
                               (float10)(*(float *)(gen_frame + 0x4)) * (float10)(*(float *)(gen_frame + 0x38))) +
                              (float10)(*(float *)(gen_frame + 0xc)) * (float10)(*(float *)(gen_frame + 0x34)))));
      if ((!(fVar7 < (float10)0)) && (fVar8 = (float10)fVar2, !(fVar8 < fVar7 + (float10)fVar3))) {
        *param_6 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xc)) * (float10)(*(float *)(gen_frame + 0x24)) +
                                           ((float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x8)) +
                                           (float10)(*(float *)(gen_frame + 0x1c)) * (float10)(*(float *)(gen_frame + 0x4)))))) / fVar8)));
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00550ba0 */
uint F_00550ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00550bc0 */
unsigned int F_00550bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  return 0;
}

/* ref: FUN_00550c40 */
uint F_00550c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x550c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = (undefined4)gen_fl2bits(param_6);
  param_1[5] = param_7;
  param_1[7] = 0;
  return (uint)param_1;
}

/* ref: FUN_00550cc0 */
unsigned int F_00550cc0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x550cc0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *(float *)(in_ecx + 0x14) = param_2;
  *(float *)(in_ecx + 0x18) = param_3;
  *(float *)(in_ecx + 0x1c) = param_4;
  *(float *)(in_ecx + 0x20) = param_5;
  return 0;
}

/* ref: FUN_00550cf0 */
unsigned int F_00550cf0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x550cf0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 100) = param_2;
  return 0;
}

/* ref: FUN_00550d20 */
uint F_00550d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550d20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00550d40 */
uint F_00550d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x550d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (0 < *(int *)(iVar1 + 8)) {
    *(int *)(param_1 + 0xc) = *(int *)(iVar1 + 8 + param_2 * 4) + iVar1;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
    return param_1;
  }
  return 0;
}

/* ref: FUN_00550d70 */
uint F_00550d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x550d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_00550d80 */
uint F_00550d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550d80u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00550e10 */
float10 F_00550e10(float gen_a0)
{
  GEN_ENTER(0x550e10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00550e50 */
uint F_00550e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x550e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c93010(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x109cc68));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x109cc5c));
  return (uint)this;
}

/* ref: FUN_00550e90 */
uint F_00550e90(unsigned int gen_a0)
{
  GEN_ENTER(0x550e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  HANDLE pvVar2;
  uint uVar3;
  
  *(undefined2 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  F_004a0020((int)this + 0x28);
  pvVar2 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,1,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x50) = pvVar2;
  *(undefined4 *)((int)this + 0x54) = 1;
  uVar3 = F_00406b90(0x24,0,0);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  if (uVar3 != 0) {
    uVar3 = F_00c97030(uVar3);
    uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    *(uint *)((int)this + 8) = uVar3;
    *(undefined4 *)((int)this + 100) = uVar1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 100) = uVar1;
  return (uint)this;
}

/* ref: FUN_00550f20 */
unsigned int F_00550f20(unsigned int gen_a0)
{
  GEN_ENTER(0x550f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x50));
  F_004a05c0((undefined *)((int)this + 0x28));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  return 0;
}

/* ref: FUN_00550f70 */
uint F_00550f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550f70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 4);
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 0x18) = (undefined1)param_2;
  }
  return uVar1;
}

/* ref: FUN_00550fa0 */
unsigned int F_00550fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x550fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 1) == '\0')) {
    gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 0x50),0xffffffff);
  }
  return 0;
}

/* ref: FUN_00550fc0 */
byte F_00550fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x550fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  *(undefined1 *)((int)this + 1) = 1;
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    bVar1 = F_00c976f0(*(undefined * PTR32 *)((int)this + 8));
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00550fe0 */
unsigned int F_00550fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x550fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c975f0(*(undefined * PTR32 *)((int)this + 8));
  return 0;
}

/* ref: FUN_00550ff0 */
byte F_00550ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x550ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) &&
     (bVar1 = F_00c97070(*(undefined * PTR32 *)((int)this + 8)), bVar1 != 0)) {
    return 1;
  }
  if (0 < *(int *)((int)this + 0x54)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00551030 */
float10 F_00551030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x551030u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * in_edx = (float *)(uintptr_t)gen_a1;
  float * in_esi = (float *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float * pfVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  pfVar10 = *(float * PTR32 *)param_4;
  (*(float *)(gen_frame + 0x28)) = *in_esi;
  (*(float *)(gen_frame + 0x24)) = in_esi[2];
  fVar11 = (float10)in_esi[1];
  fVar12 = (float10)*in_esi;
  fVar13 = (float10)in_esi[2];
  fVar1 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  fVar2 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar3 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x14)) = fVar3;
  (*(float *)(gen_frame + 0x24)) = *in_edx;
  (*(float *)(gen_frame + 0x28)) = in_edx[2];
  fVar11 = (float10)in_edx[1];
  fVar12 = (float10)*in_edx;
  fVar13 = (float10)in_edx[2];
  fVar4 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0x18)) = fVar4;
  fVar5 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x1c)) = fVar5;
  fVar6 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x20)) = fVar6;
  (*(float *)(gen_frame + 0x24)) = *in_ecx;
  (*(float *)(gen_frame + 0x28)) = in_ecx[2];
  fVar11 = (float10)in_ecx[1];
  fVar12 = (float10)*in_ecx;
  fVar13 = (float10)in_ecx[2];
  fVar7 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0x0)) = fVar7;
  fVar8 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x4)) = fVar8;
  fVar9 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x8)) = fVar9;
  fVar11 = (float10)fVar4;
  fVar12 = (float10)fVar5;
  fVar13 = (float10)fVar6;
  fVar4 = (float)((float10)fVar7 - fVar11);
  (*(float *)(gen_frame + 0xc)) = fVar4;
  fVar5 = (float)((float10)fVar8 - fVar12);
  (*(float *)(gen_frame + 0x10)) = fVar5;
  fVar6 = (float)((float10)fVar9 - fVar13);
  (*(float *)(gen_frame + 0x14)) = fVar6;
  fVar14 = (float10)fVar6;
  fVar12 = (float10)(float)(fVar12 - (float10)fVar2);
  fVar15 = (float10)fVar5;
  fVar13 = (float10)(float)(fVar13 - (float10)fVar3);
  (*(float *)(gen_frame + 0x0)) = (float)(fVar12 * fVar14 - fVar13 * fVar15);
  fVar16 = (float10)fVar4;
  fVar11 = (float10)(float)(fVar11 - (float10)fVar1);
  (*(float *)(gen_frame + 0x4)) = (float)(fVar16 * fVar13 - fVar11 * fVar14);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar15 * fVar11 - fVar12 * fVar16);
  F_00553ac0(&(*(float *)(gen_frame + 0x0)));
  return (float10)(*(float *)(gen_frame + 0x4));
}

/* ref: FUN_00551200 */
byte F_00551200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x551200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  uint param_5 = (uint)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  int iVar2;
  byte bVar3;
  byte * pbVar4;
  
  iVar2 = *(int *)((int)this + 0xc);
  pbVar4 = ((byte *)GEN_TOP((iVar2 + 1 +
                   (*(ushort *)(iVar2 + 0x28) + 8 + (uint)*(ushort *)(iVar2 + 0x2c) * 2) * 6)));
  (*(uint *)(gen_frame + 0x10)) = 0xffffffff;
  (*(int *)(gen_frame + 0x14)) = param_5;
  F_00c90030(this,param_5);
  iVar2 = *(int *)((int)this + 0xc);
  (*(float *)(gen_frame + 0x0)) = 0.0;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  param_5 = 0;
  if (*(short *)(iVar2 + 0x2a) != 0) {
    do {
      bVar3 = F_00553ba0(param_2,param_3,(*(int *)(gen_frame + 0x14)) + (uint)pbVar4[-1] * 0xc,
                           (*(int *)(gen_frame + 0x14)) + (uint)*pbVar4 * 0xc,(*(int *)(gen_frame + 0x14)) + (uint)pbVar4[1] * 0xc,&(*(float *)(gen_frame + 0x0)),
                           &(*(float *)(gen_frame + 0x18)));
      if ((((bVar3 != 0) && ((float10)(*(float *)(gen_frame + 0x18)) <= (float10)*param_4)) &&
          ((!GEN_ISNAN((*(float *)(gen_frame + 0x18))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !((*(float *)(gen_frame + 0x18)) < *(float *)&REFG(undefined, 0x1088114)))
          ) && (fVar1 = ((float)GEN_TOF(((float10)param_3[2] * (float10)(*(float *)(gen_frame + 0x8)) +
                               ((float10)*param_3 * (float10)(*(float *)(gen_frame + 0x0)) +
                               (float10)param_3[1] * (float10)(*(float *)(gen_frame + 0x4)))))), (*(float *)(gen_frame + 0xc)) = fVar1,
               (float10)fVar1 < (float10)0)) {
        (*(uint *)(gen_frame + 0x10)) = param_5;
        *param_4 = (*(float *)(gen_frame + 0x18));
      }
      param_5 = param_5 + 1;
      pbVar4 = pbVar4 + 6;
    } while (param_5 < *((ushort *)GEN_TOP((*(int *)((int)this + 0xc) + 0x2a))));
  }
  bVar3 = F_00c901b0(this,(*(uint *)(gen_frame + 0x10)),param_1,&(*(int *)(gen_frame + 0x14)),param_2,param_3,*param_4);
  return bVar3;
}

/* ref: FUN_00551330 */
float10 F_00551330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x551330u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * in_edx = (float *)(uintptr_t)gen_a1;
  float * in_esi = (float *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float * pfVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  pfVar10 = *(float * PTR32 *)param_4;
  (*(float *)(gen_frame + 0x28)) = *in_esi;
  (*(float *)(gen_frame + 0x24)) = in_esi[2];
  fVar11 = (float10)in_esi[1];
  fVar12 = (float10)*in_esi;
  fVar13 = (float10)in_esi[2];
  fVar1 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  fVar2 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar3 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x14)) = fVar3;
  (*(float *)(gen_frame + 0x24)) = *in_edx;
  (*(float *)(gen_frame + 0x28)) = in_edx[2];
  fVar11 = (float10)in_edx[1];
  fVar12 = (float10)*in_edx;
  fVar13 = (float10)in_edx[2];
  fVar4 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0x18)) = fVar4;
  fVar5 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x1c)) = fVar5;
  fVar6 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x20)) = fVar6;
  (*(float *)(gen_frame + 0x24)) = *in_ecx;
  (*(float *)(gen_frame + 0x28)) = in_ecx[2];
  fVar11 = (float10)in_ecx[1];
  fVar12 = (float10)*in_ecx;
  fVar13 = (float10)in_ecx[2];
  fVar7 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0x0)) = fVar7;
  fVar8 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x4)) = fVar8;
  fVar9 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x8)) = fVar9;
  fVar11 = (float10)fVar4;
  fVar12 = (float10)fVar5;
  fVar13 = (float10)fVar6;
  fVar4 = (float)((float10)fVar7 - fVar11);
  (*(float *)(gen_frame + 0xc)) = fVar4;
  fVar5 = (float)((float10)fVar8 - fVar12);
  (*(float *)(gen_frame + 0x10)) = fVar5;
  fVar6 = (float)((float10)fVar9 - fVar13);
  (*(float *)(gen_frame + 0x14)) = fVar6;
  fVar14 = (float10)fVar6;
  fVar12 = (float10)(float)(fVar12 - (float10)fVar2);
  fVar15 = (float10)fVar5;
  fVar13 = (float10)(float)(fVar13 - (float10)fVar3);
  (*(float *)(gen_frame + 0x0)) = (float)(fVar12 * fVar14 - fVar13 * fVar15);
  fVar16 = (float10)fVar4;
  fVar11 = (float10)(float)(fVar11 - (float10)fVar1);
  (*(float *)(gen_frame + 0x4)) = (float)(fVar16 * fVar13 - fVar11 * fVar14);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar15 * fVar11 - fVar12 * fVar16);
  F_00553ac0(&(*(float *)(gen_frame + 0x0)));
  return (float10)(*(float *)(gen_frame + 0x4));
}

/* ref: FUN_00551500 */
byte F_00551500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x551500u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *param_4;
    (*(undefined4 *)(gen_frame + 0x4)) = param_4[1];
    (*(undefined4 *)(gen_frame + 0x8)) = param_4[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x0)));
    bVar1 = F_00c971c0(*(undefined * PTR32 *)(param_1 + 8),param_2,param_6,param_3,&(*(undefined4 *)(gen_frame + 0x0)),
                         (undefined4)gen_fl2bits(param_5));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551590 */
byte F_00551590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x551590u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *param_4;
    (*(undefined4 *)(gen_frame + 0x4)) = param_4[1];
    (*(undefined4 *)(gen_frame + 0x8)) = param_4[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x0)));
    bVar1 = F_00c97440(*(undefined * PTR32 *)(param_1 + 8),param_2,param_6,param_3,&(*(undefined4 *)(gen_frame + 0x0)),
                         (undefined4)gen_fl2bits(param_5));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551620 */
byte F_00551620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x551620u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *param_4;
    (*(undefined4 *)(gen_frame + 0x4)) = param_4[1];
    (*(undefined4 *)(gen_frame + 0x8)) = param_4[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x0)));
    bVar1 = F_00c974a0(*(undefined * PTR32 *)(param_1 + 8),param_2,param_6,param_7,param_3,&(*(undefined4 *)(gen_frame + 0x0)),
                         (undefined4)gen_fl2bits(param_5));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_005516b0 */
byte F_005516b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5516b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  float10 fVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)param_5;
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_5 + 4);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_5 + 8);
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x0)));
    fVar2 = ((float10)GEN_TOD(fcos((float10)param_3)));
    bVar1 = F_00c97340(*(undefined4 *)(param_1 + 8),param_2,param_7,(float)fVar2,param_4,&(*(undefined4 *)(gen_frame + 0x0))
                         ,(undefined4)gen_fl2bits(param_6));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551750 */
byte F_00551750(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x551750u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  float10 fVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)param_5;
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_5 + 4);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_5 + 8);
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x0)));
    fVar2 = ((float10)GEN_TOD(fcos((float10)param_3)));
    bVar1 = F_00c97550(*(undefined4 *)(param_1 + 8),param_2,param_7,(float)fVar2,param_4,&(*(undefined4 *)(gen_frame + 0x0))
                         ,(undefined4)gen_fl2bits(param_6));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_005517f0 */
byte F_005517f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5517f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  float10 fVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((*(int *)&gen_args[0]) + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)((*(uint *)&gen_args[1]) + 0x44) = 0;
  if (*(int *)((*(int *)&gen_args[0]) + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *(*(undefined4 * PTR32 *)&gen_args[4]);
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)&gen_args[4])[1];
    (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 * PTR32 *)&gen_args[4])[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x20)));
    (*(undefined4 *)(gen_frame + 0x0)) = 7;
    (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)&gen_args[3]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = &(*(undefined4 *)(gen_frame + 0x20));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)&gen_args[5]);
    fVar2 = ((float10)GEN_TOD(fcos((float10)(*(float *)&gen_args[2]))));
    (*(float *)(gen_frame + 0x10)) = (float)fVar2;
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[7]);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    bVar1 = F_00c975b0(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 8),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_005518b0 */
byte F_005518b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5518b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  LPCRITICAL_SECTION lpCriticalSection;
  undefined * this_00;
  byte bVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)((*(int *)&gen_args[1]) + 0x44) = 0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *(*(undefined4 * PTR32 *)&gen_args[2]);
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)&gen_args[2])[1];
    (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 * PTR32 *)&gen_args[2])[2];
    (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cc48)));
    (*(undefined4 *)(gen_frame + 0x30)) = *(*(undefined4 * PTR32 *)&gen_args[3]);
    (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[3])[1];
    (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 * PTR32 *)&gen_args[3])[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x30)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = &(*(undefined4 *)(gen_frame + 0x30));
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)&gen_args[4]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x20));
    (*(undefined4 *)(gen_frame + 0x0)) = 4;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[6]);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    bVar1 = F_00c975b0(this_00,(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[5]),&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_005519a0 */
byte F_005519a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5519a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  float10 fVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((*(int *)&gen_args[0]) + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)((*(uint *)&gen_args[1]) + 0x44) = 0;
  if (*(int *)((*(int *)&gen_args[0]) + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *(*(undefined4 * PTR32 *)&gen_args[3]);
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)&gen_args[3])[1];
    (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 * PTR32 *)&gen_args[3])[2];
    (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cc48)));
    (*(undefined4 *)(gen_frame + 0x30)) = *(*(undefined4 * PTR32 *)&gen_args[4]);
    (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[4])[1];
    (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 * PTR32 *)&gen_args[4])[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x30)));
    (*(undefined4 *)(gen_frame + 0x0)) = 6;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x20));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = &(*(undefined4 *)(gen_frame + 0x30));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)&gen_args[5]);
    fVar2 = ((float10)GEN_TOD(fcos((float10)(*(float *)&gen_args[2]))));
    (*(float *)(gen_frame + 0x10)) = (float)fVar2;
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[7]);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    bVar1 = F_00c975b0(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 8),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

