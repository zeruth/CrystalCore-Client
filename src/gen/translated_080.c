#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_008802c0 */
uint F_008802c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8802c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint * this_00;
  undefined1 * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)this + 0x68) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x6c))(piVar1,*(undefined4 *)((int)this + 0x68));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return uVar2;
  }
  if (*(int *)((int)this + 0xc) == 0) {
    uVar8 = 0xc;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    uVar2 = F_00435440(uVar2,uVar8);
    *(uint *)((int)this + 0xc) = uVar2;
  }
  F_0042e430((undefined *)((int)this + 0x14),param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_1,REFG(undefined4, 0x108cc50));
  uVar9 = 0;
  uVar8 = 0xffffffff;
  puVar7 = ((undefined1 *)(gen_frame + 0x4));
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  F_0045ccd0(pvVar3,puVar7,uVar8,uVar9);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  uVar5 = REFG(undefined4, 0x132722c);
  uVar2 = REFG(undefined4, 0x1327228);
  uVar10 = 0;
  uVar9 = 1;
  uVar8 = 0xb3a;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar3,uVar8,uVar9,uVar10);
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  if (uVar2 == REFG(undefined4, 0x148a108)) {
    uVar2 = F_005593a0(pvVar3,1);
  }
  else if (uVar2 == REFG(undefined4, 0x1327228)) {
    uVar2 = F_005593a0(pvVar3,3);
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
  (*(uint *)(gen_frame + 0x24)) = uVar2;
  if (uVar5 == REFG(undefined4, 0x148a10c)) {
    uVar8 = 2;
  }
  else {
    if (uVar5 != REFG(undefined4, 0x132722c)) goto LAB_0088041d;
    uVar8 = 4;
  }
  uVar5 = F_005593a0(pvVar3,uVar8);
LAB_0088041d: ;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),6);
  (*(uint *)(gen_frame + 0x2c)) = uVar5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
  (*(undefined4 *)(gen_frame + 0x34)) = 1;
  uVar2 = F_008668b0(pvVar3,9,4,&(*(undefined4 *)(gen_frame + 0x18)),this,3,param_2,4);
  this_00 = &(*(uint *)(gen_frame + 0x58));
  iVar6 = 7;
  do {
    this_00 = this_00 + -2;
    uVar5 = F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  *(uint *)((int)this + 0x68) = uVar2;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar5;
}

/* ref: FUN_00880490 */
uint F_00880490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x880490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 == '\0') {
    *(undefined4 *)((int)this + 0xc) = param_2;
    F_0042ccf0((undefined *)((int)this + 0x10),param_1);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    uVar1 = F_0042a990(param_1);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),6);
    uVar7 = 4;
    uVar6 = 0;
    puVar4 = &(*(undefined4 *)(gen_frame + 0x4));
    (*(uint *)(gen_frame + 0x8)) = uVar1;
    uVar3 = 1;
    uVar2 = 0x9a;
    pvVar5 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_008668b0(this_00,uVar2,uVar3,puVar4,pvVar5,uVar6,param_2,uVar7);
    *(uint *)((int)this + 8) = uVar1;
    uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_00880510 */
uint F_00880510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x880510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  undefined * this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar2 != '\0') {
    if (*(int *)((int)this + 0x1484) != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 0x1484),0);
      *(undefined4 *)((int)this + 0x1484) = 0;
    }
    if (*(int *)((int)this + 0x1488) != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 0x1488),0);
      *(undefined4 *)((int)this + 0x1488) = 0;
    }
    if (*(char *)((int)param_1 + 6) == '\0') {
      if (param_1[2] == 0) {
        return CONCAT31((int3)(uVar2 >> 8),*(char *)((int)param_1 + 6));
      }
      uVar2 = param_1[2];
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        uVar2 = uVar2 + 1000000;
      }
    }
    else {
      pvVar4 = (undefined *)F_00a3a860(param_1);
      uVar2 = F_0046e5e0(pvVar4);
    }
    uVar2 = F_00ab24a0(uVar2);
    if (uVar2 == 0) {
      F_00760f10((undefined *)((int)this + 0x14c8),param_1,param_3);
      uVar2 = F_00760f10((undefined *)((int)this + 0x14d8),param_2,0);
      *(undefined4 *)((int)this + 0x14e8) = param_4;
      *(undefined4 *)((int)this + 0x14c4) = 5;
      return uVar2;
    }
    F_00a3d750(&REFG(undefined, 0x14a4230),*param_1,(uint)*(ushort *)(param_1 + 1));
    F_00760f10((undefined *)((int)this + 0x1490),param_1,param_3);
    F_00760f10((undefined *)((int)this + 0x14a0),param_2,0);
    if ((param_2 == (undefined4 *)0x0) || (bVar1 = F_0077f460(*param_2), bVar1 == 0)) {
      param_2 = (undefined4 *)0xb4f;
      if (param_3 != 0) {
        param_2 = (undefined4 *)0xb50;
      }
    }
    else {
      param_2 = (undefined4 *)0xb4b;
      if (param_3 != 0) {
        param_2 = (undefined4 *)0xb4c;
      }
    }
    piVar3 = *(int * PTR32 *)((int)this + 4);
    uVar2 = F_0046e5e0(param_1);
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
    uVar2 = F_00461c60(pvVar4,param_2,uVar2,param_3);
    uVar16 = 0;
    uVar15 = 0;
    uVar14 = 1;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 4;
    uVar8 = 0;
    uVar7 = 2;
    uVar5 = REFG(undefined4, 0x1327228);
    uVar6 = REFG(undefined4, 0x132722c);
    pvVar4 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_00866a60(this_00,uVar2,uVar5,uVar6,pvVar4,uVar7,uVar8,param_4,uVar9,uVar10,uVar11,
                         uVar12,uVar13,uVar14,uVar15,uVar16);
    *(uint *)((int)this + 0x1484) = uVar2;
  }
  return uVar2;
}

/* ref: FUN_008806d0 */
uint F_008806d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8806d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  int * piVar2;
  undefined * pvVar3;
  undefined * this_00;
  uint * this_01;
  int iVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    if (*(int *)((int)this + 0x1488) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x1488),0);
      *(undefined4 *)((int)this + 0x1488) = 0;
    }
    if (*(int *)((int)this + 0x1484) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x1484),0);
      *(undefined4 *)((int)this + 0x1484) = 0;
    }
    F_00a3d750(&REFG(undefined, 0x14a4230),*param_1,(uint)*(ushort *)(param_1 + 1));
    F_00760f10((undefined *)((int)this + 0x1490),param_1,0);
    F_00760f10((undefined *)((int)this + 0x14a0),param_2,0);
    (*(uint *)(gen_frame + 0x2c)) = F_00a3a8a0(param_1);
    if ((param_3 != 0) && (param_3 < (*(uint *)(gen_frame + 0x2c)))) {
      (*(uint *)(gen_frame + 0x2c)) = param_3;
    }
    (*(undefined4 *)(gen_frame + 0x0)) = 0xb52;
    if ((param_2 != (int *)0x0) &&
       (((iVar4 = *param_2, 19999 < iVar4 && (iVar4 < 0x4e25)) || (iVar4 == 0x55f1)))) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0xb51;
    }
    uVar8 = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    uVar7 = 0;
    uVar6 = 1;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043bd00(pvVar3,uVar6,uVar7,uVar8);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
    uVar8 = 0;
    (*(uint *)(gen_frame + 0xc)) = uVar1;
    uVar7 = 0;
    uVar6 = 2;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043bd00(pvVar3,uVar6,uVar7,uVar8);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
    (*(uint *)(gen_frame + 0x14)) = uVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(undefined4 *)(gen_frame + 0x1c)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x2c));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
    uVar7 = 0;
    (*(char * PTR32 *)(gen_frame + 0x34)) = "";
    uVar6 = 0;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043bd00(pvVar3,(*(undefined4 *)(gen_frame + 0x0)),uVar6,uVar7);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),6);
    uVar9 = 4;
    uVar8 = 3;
    *(undefined4 *)((int)this + 0x14c0) = param_4;
    puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
    uVar7 = 8;
    (*(uint *)(gen_frame + 0x3c)) = uVar1;
    uVar6 = 0xe;
    pvVar3 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_008668b0(this_00,uVar6,uVar7,puVar5,pvVar3,uVar8,param_4,uVar9);
    *(uint *)((int)this + 0x1488) = uVar1;
    this_01 = &(*(uint *)(gen_frame + 0x48));
    iVar4 = 7;
    do {
      this_01 = this_01 + -2;
      uVar1 = F_005a2670(this_01);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar1;
}

/* ref: FUN_00880d50 */
unsigned int F_00880d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x880d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  undefined * pvVar3;
  undefined * this_00;
  undefined1 * this_01;
  int iVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  this_01 = (gen_frame + 0x1c);
  if (param_1 != 0) {
    if (*(int *)((int)this + 0x14) == 0) {
      uVar10 = 0xb;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
      uVar1 = F_00435440(uVar1,uVar10);
      *(uint *)((int)this + 0x14) = uVar1;
    }
    *(undefined4 *)((int)this + 0x10) = param_2;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    if ((char)uVar1 != '\0') {
      ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
      return 0;
    }
    if (*(int *)((int)this + 0x14) != 0) {
      F_00441b10();
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    if (*(undefined * PTR32 *)(uVar1 + 0x108) != (undefined *)0x0) {
      F_0077db70(*(undefined * PTR32 *)(uVar1 + 0x108));
    }
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x39);
    if ((uVar1 != 0) && (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 4))) != 0)) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x20) + 4))) = 0;
      *(undefined1 *)(uVar1 + 0x1d) = 1;
    }
    F_0077f5e0(this);
    if (*(int *)((int)this + 0x14) != 0) {
      F_00453fa0(((undefined *)GEN_TOP((*(int *)((int)this + 0x14) + 0x490))),(int)this + 0xc);
    }
    uVar8 = 0;
    *(undefined4 *)((int)this + 0x24) = 1;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    uVar6 = 0;
    uVar10 = 0xd5c;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043bd00(pvVar3,uVar10,uVar6,uVar8);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),6);
    uVar8 = 0;
    (*(uint *)(gen_frame + 0x10)) = uVar1;
    uVar6 = 0;
    uVar10 = 0xd5d;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043bd00(pvVar3,uVar10,uVar6,uVar8);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),6);
    uVar9 = 4;
    uVar7 = 0;
    uVar8 = 0;
    puVar5 = &(*(undefined4 *)(gen_frame + 0xc));
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    uVar6 = 2;
    uVar10 = 0xb2;
    pvVar3 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_008668b0(this_00,uVar10,uVar6,puVar5,pvVar3,uVar8,uVar7,uVar9);
    *(uint *)((int)this + 8) = uVar1;
    iVar4 = 1;
    do {
      this_01 = this_01 + -8;
      F_005a2670(this_01);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return 0;
}

/* ref: FUN_00880ed0 */
uint F_00880ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x880ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  undefined3 extraout_var_00 = 0;
  undefined * pvVar6;
  uint uVar7;
  undefined * this_00;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x39);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x30);
  uVar7 = uVar4;
  if (((uVar3 != 0) && (uVar4 != 0)) && (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0)) {
    bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x14),0xc);
    uVar7 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (uVar7 = param_1, param_1 < *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4))))) {
      uVar11 = *((undefined4 *)GEN_TOP((param_1 * 0x10 + 8 + *(int *)(uVar3 + 0x20))));
      *(undefined4 *)((int)this + 0x18) = uVar11;
      uVar5 = F_00ab4220(uVar11);
      uVar7 = 0;
      if (uVar5 != 0) {
        bVar1 = F_00436a10(*(undefined4 *)((int)this + 0x14));
        uVar7 = CONCAT31(extraout_var_00,bVar1);
        if ((*(byte *)(uVar5 + 0x10) <= bVar1) &&
           (uVar3 = *((uint *)GEN_TOP((param_1 * 0x10 + 0x14 + *(int *)(uVar3 + 0x20)))), uVar7 = uVar4,
           uVar3 <= *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x24))))) {
          uVar11 = *(undefined4 *)((int)this + 0x18);
          uVar17 = 0xd5e;
          pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))))
          ;
          uVar7 = F_00461c60(pvVar6,uVar17,uVar11,uVar3);
          uVar11 = *(undefined4 *)((int)this + 8);
          uVar20 = 0;
          uVar19 = 0;
          uVar18 = 1;
          uVar16 = 0;
          uVar15 = 0;
          uVar14 = 0;
          uVar13 = 0;
          uVar12 = 4;
          uVar10 = 0;
          uVar9 = 1;
          uVar17 = REFG(undefined4, 0x1327228);
          uVar8 = REFG(undefined4, 0x132722c);
          pvVar6 = this;
          this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))
                                      (*(int * PTR32 *)((int)this + 4))));
          uVar7 = F_00866a60(this_00,uVar7,uVar17,uVar8,pvVar6,uVar9,uVar10,uVar11,uVar12,uVar13,
                               uVar14,uVar15,uVar16,uVar18,uVar19,uVar20);
          *(uint *)((int)this + 0x1c) = uVar7;
        }
      }
    }
  }
  return uVar7;
}

/* ref: FUN_00880ff0 */
uint F_00880ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x880ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 == '\0') {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    uVar1 = F_0042a990(param_1);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),6);
    uVar7 = 4;
    uVar6 = 0;
    puVar4 = &(*(undefined4 *)(gen_frame + 0x4));
    (*(uint *)(gen_frame + 0x8)) = uVar1;
    uVar3 = 1;
    uVar2 = 0xb5;
    pvVar5 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_008668b0(this_00,uVar2,uVar3,puVar4,pvVar5,uVar6,param_2,uVar7);
    *(uint *)((int)this + 8) = uVar1;
    uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_00881060 */
uint F_00881060(unsigned int gen_a0)
{
  GEN_ENTER(0x881060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x12660];
  undefined4 * puVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  uint * this_01;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined * pvVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x12658)) = 0x88106d;
  (*(uint *)(gen_frame + 0x12658)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  *(undefined1 *)((int)this + 0x5c) = 1;
  F_007e32e0(this);
  puVar1 = ((undefined4 *)(gen_frame + 0x10008));
  iVar4 = 0x4c9;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_0082bb50(this,((undefined4 *)(gen_frame + 0x10008)));
  piVar2 = *(int * PTR32 *)((int)this + 4);
  if (*(int *)((int)this + 8) == 0) {
    uVar9 = 4;
    uVar8 = 0;
    iVar4 = (int)this + 0x10;
    puVar1 = ((undefined4 *)(gen_frame + 0x10008));
    *(undefined4 *)((int)this + 0x58) = 1;
    uVar6 = 0x4ca;
    uVar5 = 0xb8;
    pvVar7 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    uVar3 = F_008668b0(this_00,uVar5,uVar6,puVar1,pvVar7,iVar4,uVar8,uVar9);
    *(uint *)((int)this + 8) = uVar3;
  }
  else {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),0x4ca,((undefined4 *)(gen_frame + 0x10008)));
  }
  this_01 = &(*(uint *)(gen_frame + 0x12658));
  iVar4 = 0x4c9;
  do {
    this_01 = this_01 + -2;
    uVar3 = F_005a2670(this_01);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x12658)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar3;
}

/* ref: FUN_00881130 */
uint F_00881130(unsigned int gen_a0)
{
  GEN_ENTER(0x881130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined4 * puVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  uint * this_01;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined * pvVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  *(undefined1 *)((int)this + 0x5d) = 1;
  F_007e32e0(this);
  puVar1 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0x20;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_0077fb70(((undefined4 *)(gen_frame + 0x0)));
  piVar2 = *(int * PTR32 *)((int)this + 4);
  if (*(int *)((int)this + 0x48) == 0) {
    uVar8 = *(undefined4 *)((int)this + 8);
    uVar9 = 4;
    iVar4 = (int)this + 0x14;
    puVar1 = ((undefined4 *)(gen_frame + 0x0));
    uVar6 = 0x21;
    uVar5 = 0xb9;
    pvVar7 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    uVar3 = F_008668b0(this_00,uVar5,uVar6,puVar1,pvVar7,iVar4,uVar8,uVar9);
    *(uint *)((int)this + 0x48) = uVar3;
  }
  else {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 0x48),0x21,((undefined4 *)(gen_frame + 0x0)));
  }
  this_01 = &(*(uint *)(gen_frame + 0x108));
  iVar4 = 0x20;
  do {
    this_01 = this_01 + -2;
    uVar3 = F_005a2670(this_01);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar3;
}

/* ref: FUN_00881200 */
uint F_00881200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x881200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined4 * puVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  uint * this_01;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined * pvVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  *(undefined1 *)((int)this + 0x5e) = 1;
  F_007e32e0(this);
  puVar1 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0x20;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_0077fbe0(((undefined4 *)(gen_frame + 0x0)),param_1);
  piVar2 = *(int * PTR32 *)((int)this + 4);
  if (*(int *)((int)this + 0x4c) == 0) {
    uVar8 = *(undefined4 *)((int)this + 8);
    uVar9 = 4;
    iVar4 = (int)this + 0x18;
    puVar1 = ((undefined4 *)(gen_frame + 0x0));
    uVar6 = 0x21;
    uVar5 = 0xba;
    pvVar7 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    uVar3 = F_008668b0(this_00,uVar5,uVar6,puVar1,pvVar7,iVar4,uVar8,uVar9);
    *(uint *)((int)this + 0x4c) = uVar3;
  }
  else {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 0x4c),0x21,((undefined4 *)(gen_frame + 0x0)));
  }
  this_01 = &(*(uint *)(gen_frame + 0x108));
  iVar4 = 0x20;
  do {
    this_01 = this_01 + -2;
    uVar3 = F_005a2670(this_01);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar3;
}

/* ref: FUN_008812d0 */
uint F_008812d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8812d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  undefined * this_00;
  uint * this_01;
  int iVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (param_1 == 0) {
    uVar2 = 0x12e0;
  }
  else if (param_1 == 1) {
    uVar2 = 0x12e1;
  }
  else {
    uVar1 = param_1 - 2;
    if (uVar1 != 0) goto LAB_008813dd;
    uVar2 = 0x12e2;
  }
  uVar7 = 0;
  uVar6 = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043bd00(pvVar3,uVar2,uVar6,uVar7);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  uVar7 = 0;
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  uVar6 = 0;
  uVar2 = 3;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043bd00(pvVar3,uVar2,uVar6,uVar7);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  uVar7 = 0;
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  uVar6 = 0;
  uVar2 = 4;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043bd00(pvVar3,uVar2,uVar6,uVar7);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = uVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  iVar4 = (int)this + 0x1c;
  *(undefined2 *)((int)this + 0x1e) = (undefined2)param_1;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  if (*(int *)((int)this + 0x50) == 0) {
    uVar2 = *(undefined4 *)((int)this + 8);
    uVar8 = 4;
    puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
    uVar7 = 4;
    uVar6 = 9;
    pvVar3 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_008668b0(this_00,uVar6,uVar7,puVar5,pvVar3,iVar4,uVar2,uVar8);
    *(uint *)((int)this + 0x50) = uVar1;
  }
  this_01 = &(*(uint *)(gen_frame + 0x28));
  iVar4 = 3;
  do {
    this_01 = this_01 + -2;
    uVar1 = F_005a2670(this_01);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
LAB_008813dd: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_008813f0 */
uint F_008813f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8813f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  undefined * this_00;
  uint * this_01;
  int iVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (param_1 == 0) {
    uVar2 = 0x12e4;
  }
  else {
    uVar1 = param_1 - 1;
    if (uVar1 != 0) goto LAB_008814cd;
    uVar2 = 0x12e5;
  }
  uVar7 = 0;
  uVar6 = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043bd00(pvVar3,uVar2,uVar6,uVar7);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  uVar7 = 0;
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  uVar6 = 0;
  uVar2 = 1;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043bd00(pvVar3,uVar2,uVar6,uVar7);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  iVar4 = (int)this + 0x20;
  *(undefined2 *)((int)this + 0x22) = (undefined2)param_1;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  if (*(int *)((int)this + 0x54) == 0) {
    uVar2 = *(undefined4 *)((int)this + 8);
    uVar8 = 4;
    puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
    uVar7 = 4;
    uVar6 = 8;
    pvVar3 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_008668b0(this_00,uVar6,uVar7,puVar5,pvVar3,iVar4,uVar2,uVar8);
    *(uint *)((int)this + 0x54) = uVar1;
  }
  this_01 = &(*(uint *)(gen_frame + 0x28));
  iVar4 = 3;
  do {
    this_01 = this_01 + -2;
    uVar1 = F_005a2670(this_01);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
LAB_008814cd: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_008814e0 */
uint F_008814e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8814e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint in_EAX = 0;
  int * piVar2;
  
  if (*(int *)((int)this + 0x58) != 3) {
    iVar1 = *(int *)((int)this + 0x48);
    *(undefined4 *)((int)this + 0x48) = 0;
    if (iVar1 != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
    }
    iVar1 = *(int *)((int)this + 0x4c);
    *(undefined4 *)((int)this + 0x4c) = 0;
    if (iVar1 != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
    }
    in_EAX = F_008813f0(this,param_1);
    *(undefined4 *)((int)this + 0x58) = 3;
  }
  return in_EAX;
}

/* ref: FUN_00881550 */
uint F_00881550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x881550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1f0];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  undefined * this_00;
  int iVar5;
  uint * this_01;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x1e8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ec);
  if (*(int *)((int)this + 0x14) == 0) {
    uVar10 = 0xb;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    uVar2 = F_00435440(uVar2,uVar10);
    *(uint *)((int)this + 0x14) = uVar2;
  }
  *(undefined4 *)((int)this + 0x10) = param_1;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar2 != '\0') {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    F_00c47745((*(uint *)(gen_frame + 0x1e8)) ^ (uint)(uint)(gen_frame + 0x1ec));
    return uVar2;
  }
  if (*(int *)((int)this + 0x14) != 0) {
    F_00453fa0(((undefined *)GEN_TOP((*(int *)((int)this + 0x14) + 0x490))),(int)this + 0xc);
  }
  *(undefined2 *)((int)this + 0x20) = 0;
  F_0082bc20(this,0);
  *(undefined4 *)((int)this + 0x4e58) = 1;
  puVar3 = ((undefined4 *)(gen_frame + 0x8));
  iVar5 = 0x3b;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 2;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
  bVar1 = *(byte *)((int)this + 0x20);
  ((undefined4 *)(gen_frame + 0x8))[1] = 0;
  F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
  if (*(char *)((int)this + 0x20) == '\0') {
    uVar10 = 0xd7f;
  }
  else {
    if (*(char *)((int)this + 0x20) != '\x01') {
      (*(char * PTR32 *)(gen_frame + 0x1c)) = "";
      goto LAB_00881665;
    }
    uVar10 = 0xdc1;
  }
  uVar8 = 0;
  uVar6 = 0;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  (*(char * PTR32 *)(gen_frame + 0x1c)) = (char *)F_0043bd00(pvVar4,uVar10,uVar6,uVar8);
LAB_00881665: ;
  F_005a2710(((undefined1 *)(gen_frame + 0x18)),8);
  bVar1 = *(byte *)((int)this + 0x21);
  F_005a2710(((undefined1 *)(gen_frame + 0x20)),4);
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x24)) = (uint)bVar1;
  uVar6 = 0;
  uVar10 = 0x56f;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar10,uVar6,uVar8);
  F_005a2710(((undefined1 *)(gen_frame + 0x28)),8);
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x2c)) = uVar2;
  uVar6 = 0;
  uVar10 = 0x576;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar10,uVar6,uVar8);
  F_005a2710(((undefined1 *)(gen_frame + 0x30)),8);
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x34)) = uVar2;
  uVar6 = 0;
  uVar10 = 0x575;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar10,uVar6,uVar8);
  F_005a2710(((undefined1 *)(gen_frame + 0x38)),8);
  uVar9 = 4;
  uVar7 = 0;
  uVar8 = 0;
  puVar3 = ((undefined4 *)(gen_frame + 0x8));
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  uVar6 = 0x3c;
  uVar10 = 0xc3;
  pvVar4 = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_008668b0(this_00,uVar10,uVar6,puVar3,pvVar4,uVar8,uVar7,uVar9);
  *(uint *)((int)this + 8) = uVar2;
  this_01 = &(*(uint *)(gen_frame + 0x1e8));
  iVar5 = 0x3b;
  do {
    this_01 = this_01 + -2;
    uVar2 = F_005a2670(this_01);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x1e8)) ^ (uint)(uint)(gen_frame + 0x1ec));
  return uVar2;
}

/* ref: FUN_00881770 */
uint F_00881770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x881770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1f0];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * this_00;
  int * piVar4;
  int iVar5;
  uint * this_01;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x1e8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ec);
  *(undefined1 *)((int)this + 0x20) = 0;
  if ((byte)param_1 < 2) {
    *(byte *)((int)this + 0x20) = (byte)param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar2 == '\0') goto LAB_0088187e;
  F_0082bc20(this,(uint)*(byte *)((int)this + 0x21));
  puVar3 = ((undefined4 *)(gen_frame + 0x8));
  iVar5 = 0x3b;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 2;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
  bVar1 = *(byte *)((int)this + 0x20);
  ((undefined4 *)(gen_frame + 0x8))[1] = 1;
  F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
  if (*(char *)((int)this + 0x20) == '\0') {
    uVar6 = 0xd7f;
LAB_00881822: ;
    uVar8 = 0;
    uVar7 = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    (*(char * PTR32 *)(gen_frame + 0x1c)) = (char *)F_0043bd00(this_00,uVar6,uVar7,uVar8);
  }
  else {
    if (*(char *)((int)this + 0x20) == '\x01') {
      uVar6 = 0xdc1;
      goto LAB_00881822;
    }
    (*(char * PTR32 *)(gen_frame + 0x1c)) = "";
  }
  F_005a2710(((undefined1 *)(gen_frame + 0x18)),8);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 8),0x3c,((undefined4 *)(gen_frame + 0x8)));
  this_01 = &(*(uint *)(gen_frame + 0x1e8));
  iVar5 = 0x3b;
  do {
    this_01 = this_01 + -2;
    uVar2 = F_005a2670(this_01);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
LAB_0088187e: ;
  F_00c47745((*(uint *)(gen_frame + 0x1e8)) ^ (uint)(uint)(gen_frame + 0x1ec));
  return uVar2;
}

/* ref: FUN_00881890 */
uint F_00881890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x881890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1f0];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x1e8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ec);
  *(undefined1 *)((int)this + 0x21) = 0;
  if ((byte)param_1 < 3) {
    *(byte *)((int)this + 0x21) = (byte)param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar2 != '\0') {
    F_0082bc20(this,(uint)*(byte *)((int)this + 0x21));
    puVar3 = ((undefined4 *)(gen_frame + 0x8));
    iVar5 = 0x3b;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
    bVar1 = *(byte *)((int)this + 0x21);
    ((undefined4 *)(gen_frame + 0x8))[1] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x20)),4);
    (*(uint *)(gen_frame + 0x24)) = (uint)bVar1;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 8),0x3c,((undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x1e8));
    iVar5 = 0x3b;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x1e8)) ^ (uint)(uint)(gen_frame + 0x1ec));
  return uVar2;
}

/* ref: FUN_00881970 */
uint F_00881970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x881970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    if (*(int *)((int)this + 0x1c) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x1c),0);
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
    if ((char)param_1 == '\0') {
      if ((param_2 < *(uint *)((int)this + 0x30)) && (*(int *)((int)this + 0x2c) != 0)) {
        piVar2 = (int *)((int)this + 0x34);
        uVar1 = 0;
        while (((int)(char)piVar2[5] != param_2 || (*piVar2 == 9999))) {
          uVar1 = uVar1 + 1;
          piVar2 = piVar2 + 0x32;
          if (*(uint *)((int)this + 0x2c) <= uVar1) {
            return (uint)piVar2;
          }
        }
        *(uint *)((int)this + 0x24) = uVar1;
        iVar14 = piVar2[2];
        uVar1 = F_00ab24a0(iVar14);
        if (uVar1 == 0) {
          *(undefined4 *)((int)this + 0x4e58) = 3;
          uVar1 = 0;
        }
        else {
          if (*(byte *)((int)this + 0x20) == 0) {
            piVar2 = *(int * PTR32 *)((int)this + 4);
            uVar1 = F_00a37840(iVar14);
            uVar15 = 0xd92;
            pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
            uVar4 = F_00461c60(pvVar3,uVar15,iVar14,uVar1);
          }
          else {
            uVar1 = *(byte *)((int)this + 0x20) - 1;
            if (uVar1 != 0) {
              return uVar1;
            }
            uVar15 = 0xd94;
            pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                       (*(int * PTR32 *)((int)this + 4))));
            uVar4 = F_00461bb0(pvVar3,uVar15,iVar14);
          }
          uVar1 = 0;
          if (uVar4 != 0) {
            uVar15 = *(undefined4 *)((int)this + 8);
            uVar19 = 0;
            uVar18 = 0;
            uVar16 = 1;
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 4;
            uVar8 = 0;
            uVar7 = 2;
            uVar17 = REFG(undefined4, 0x1327228);
            uVar6 = REFG(undefined4, 0x132722c);
            pvVar3 = this;
            pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))
                                       (*(int * PTR32 *)((int)this + 4))));
            uVar1 = F_00866a60(pvVar5,uVar4,uVar17,uVar6,pvVar3,uVar7,uVar8,uVar15,uVar9,uVar10,
                                 uVar11,uVar12,uVar13,uVar16,uVar18,uVar19);
            *(uint *)((int)this + 0x1c) = uVar1;
            return uVar1;
          }
        }
      }
    }
    else {
      if (*(byte *)((int)this + 0x20) == 0) {
        uVar15 = *(undefined4 *)((int)this + 0x28);
        uVar17 = 0xd93;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar4 = F_00461bb0(pvVar3,uVar17,uVar15);
      }
      else {
        uVar1 = *(byte *)((int)this + 0x20) - 1;
        if (uVar1 != 0) {
          return uVar1;
        }
        uVar15 = 0xd95;
        uVar4 = uVar1;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar4 = F_0043bd00(pvVar3,uVar15,uVar1,uVar4);
      }
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar15 = *(undefined4 *)((int)this + 8);
        uVar19 = 0;
        uVar18 = 0;
        uVar16 = 1;
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 4;
        uVar8 = 0;
        uVar7 = 3;
        uVar17 = REFG(undefined4, 0x1327228);
        uVar6 = REFG(undefined4, 0x132722c);
        pvVar3 = this;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
        uVar1 = F_00866a60(pvVar5,uVar4,uVar17,uVar6,pvVar3,uVar7,uVar8,uVar15,uVar9,uVar10,uVar11
                             ,uVar12,uVar13,uVar16,uVar18,uVar19);
        *(uint *)((int)this + 0x1c) = uVar1;
        return uVar1;
      }
    }
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf33 */
uint F_00881b40(unsigned int gen_a0)
{
  GEN_ENTER(0x881b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)(this + 0x1fb0) = 0xffffffff;
  *(undefined4 *)(this + 0x1fac) = 0;
  *(undefined * PTR32 *)(this + 0xf5c) = this + 0xc;
  *(undefined4 *)(this + 0x1fb4) = 0;
  *(undefined2 *)(this + 0x1fb8) = 0;
  this[0x1fbc] = (undefined1)0x0;
  *(undefined4 *)(this + 0x1fc0) = 0;
  *(undefined4 *)(this + 0x1fc8) = 0;
  *(undefined4 *)(this + 0x1fcc) = 0;
  *(undefined2 *)(this + 0x1fd0) = 0xff00;
  F_007e5870(0);
  uVar1 = F_00782b10();
  if (REFG(undefined4, 0x148a44c) != (int *)0x0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(undefined4, 0x148a44c),6,0);
    REFG(undefined4, 0x1328330) = 0xffffffff;
    REFG(undefined4, 0x148a44c) = (int *)0x0;
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf34 */
uint F_00881bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x881bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined1 AVar2;
  byte * pbVar3;
  undefined * this_00;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined3 extraout_var = 0;
  undefined * pAVar8;
  
  *(undefined * PTR32 *)(this + 0xf5c) = this + 0xc;
  this[0x1fd0] = (undefined1)0x0;
  F_007e3fd0(this + 0x34,0,(uint)(byte)this[0xc],(uint)(byte)this[0xd],(uint)(byte)this[0xe],
               (uint)(byte)this[0x13]);
  pbVar3 = *(byte * PTR32 *)(this + 0xf5c);
  bVar1 = pbVar3[10];
  uVar5 = F_00ab3630((uint)pbVar3[2] + ((uint)pbVar3[1] + (uint)*pbVar3 * 2) * 2);
  (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),*(undefined1 *)(uVar5 + 0x1a40 + (uint)bVar1));
  F_0082cc40(*(int *)(this + 0xf5c) + 0xc,(*(uint *)(gen_frame + 0x4)));
  pbVar3 = *(byte * PTR32 *)(this + 0xf5c);
  uVar5 = (uint)pbVar3[2] + ((uint)pbVar3[1] + (uint)*pbVar3 * 2) * 2;
  (*(uint *)(gen_frame + 0x4)) = 0;
  pAVar8 = this + 0x18;
  uVar6 = uVar5;
  do {
    if ((*(uint *)(gen_frame + 0x4)) != uVar5) {
      AVar2 = pAVar8[-2];
      uVar6 = F_00ab3630((uint)(byte)pAVar8[-10] +
                           ((uint)(byte)pAVar8[-0xb] + (uint)(byte)pAVar8[-0xc] * 2) * 2);
      bVar1 = *(byte *)(uVar6 + 0x1a40 + (uint)(byte)AVar2);
      uVar7 = F_00ae0db0(&REFG(undefined, 0x14c0920),
                           (&REFG(undefined4, 0x13282e0))
                           [(uint)(byte)pAVar8[-10] +
                            ((uint)(byte)pAVar8[-0xb] + (uint)(byte)pAVar8[-0xc] * 2) * 2]);
      uVar6 = uVar7;
      if (uVar7 != 0) {
        this_00 = *(undefined * PTR32 *)(uVar7 + 0xec);
        if (this_00 != (undefined *)0x0) {
          F_00b88e00(pAVar8,pAVar8);
          bVar4 = F_006a9a90(this_00,pAVar8,1);
          uVar6 = CONCAT31(extraout_var,bVar4);
        }
        *(ushort *)(uVar7 + 0x2ea4) = (ushort)bVar1;
      }
    }
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
    pAVar8 = pAVar8 + 0xc4;
  } while ((int)(*(uint *)(gen_frame + 0x4)) < 0x14);
  return uVar6;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf35 */
unsigned int F_00881d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x881d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined * this_01;
  undefined * pAVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*(int *)(this + 8) == 0) {
    F_005f9bb0(REFG(undefined * PTR32, 0x1328278));
    F_005f9bb0(REFG(undefined * PTR32, 0x132827c));
    F_005f9bb0(REFG(undefined * PTR32, 0x1328280));
    F_005f9bb0(REFG(undefined * PTR32, 0x1328284));
    F_00a06560(0);
    ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this);
    F_0082be30(this);
    ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this);
    if (REFG(undefined4, 0x148a44c) != (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x48))))((undefined4)gen_fl2bits((float)(float10)0));
    }
    if (REFG(undefined4, 0x148a444) != (undefined *)0x0) {
      F_00b75200(REFG(undefined4, 0x148a444));
    }
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x68);
    *(undefined4 *)(this + 0x1fac) = param_1;
    (*pcVar1)(this,param_1,*(undefined4 *)(this + 0xf5c),0xffffffff);
    this_01 = this + 0xf7c;
    F_005a2710(this_01,3);
    uVar8 = 4;
    uVar7 = 0;
    uVar6 = 0;
    *(undefined4 *)(this + 0xf80) = param_1;
    uVar4 = 0x205;
    uVar3 = 4;
    pAVar5 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = F_008668b0(this_00,uVar3,uVar4,this_01,pAVar5,uVar6,uVar7,uVar8);
    *(uint *)(this + 8) = uVar2;
  }
  return 0;
}

/* ref: FUN_00881e10 */
uint F_00881e10(unsigned int gen_a0)
{
  GEN_ENTER(0x881e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  undefined * this_00;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  uVar5 = 0;
  if (*(int *)((int)this + 0x1fb4) != 0) goto LAB_00881f57;
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + 8);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  bVar1 = F_005594e0(uVar2);
  if (bVar1 != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
  }
  puVar3 = (uint *)F_00ab36c0(0x1f);
  if (puVar3 == (uint *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*puVar3 & 0xffffff) + (int)puVar3;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(int *)(gen_frame + 0xc)) = iVar4;
  if (REFG(int, 0x148a108) == 0) {
    uVar2 = F_005593a0(this_00,1);
  }
  else if (REFG(int, 0x1327228) == 0) {
    uVar2 = F_005593a0(this_00,3);
  }
  else {
    uVar2 = 0;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  if (REFG(int, 0x148a10c) == 0) {
    uVar6 = 2;
LAB_00881ef0: ;
    uVar5 = F_005593a0(this_00,uVar6);
  }
  else if (REFG(int, 0x132722c) == 0) {
    uVar6 = 4;
    goto LAB_00881ef0;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = uVar5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  (*(undefined4 *)(gen_frame + 0x24)) = 0x10001;
  uVar2 = F_008668b0(this_00,9,4,&(*(undefined4 *)(gen_frame + 0x8)),this,2,(*(undefined4 *)(gen_frame + 0x0)),4);
  puVar3 = &(*(uint *)(gen_frame + 0x48));
  iVar4 = 7;
  do {
    puVar3 = puVar3 + -2;
    F_005a2670(puVar3);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  *(uint *)((int)this + 0x1fb4) = uVar2;
LAB_00881f57: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2;
}

/* ref: FUN_00881f70 */
unsigned int F_00881f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x881f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  char * pcVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  byte * pbVar5;
  
  if ((param_2 == 1) || (param_2 == -1)) {
    if (*(int *)((int)this + 8) != 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x68))
                (this,*(undefined4 *)((int)this + 0x1fac),*(undefined4 *)((int)this + 0xf5c),
                 0xffffffff);
      F_005a2710((undefined *)((int)this + 0xf7c),3);
      *(undefined4 *)((int)this + 0xf80) = 0xffffffff;
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar3 + 0x5c))
                (piVar3,*(undefined4 *)((int)this + 8),0x205,(undefined *)((int)this + 0xf7c));
    }
    pbVar5 = *(byte * PTR32 *)((int)this + 0xf5c);
  }
  else {
    uVar2 = (param_1 & 0xff) / 10;
    uVar4 = (param_1 & 0xff) % 10;
    if (param_2 == 0) {
      pcVar1 = *(char * PTR32 *)((int)this + 0xf5c);
      if ((*pcVar1 == (char)uVar4) && (pcVar1[2] == (char)uVar2)) {
        return 0;
      }
      pbVar5 = ((byte *)GEN_TOP(((uVar2 + ((uint)(byte)pcVar1[1] + uVar4 * 2) * 2) * 0xc4 + 0xc + (int)this)));
      *(byte * PTR32 *)((int)this + 0xf5c) = pbVar5;
    }
    else {
      if (param_2 != 2) {
        return 0;
      }
      pbVar5 = ((byte *)GEN_TOP(((uVar2 + ((uint)*((byte *)GEN_TOP((*(int *)((int)this + 0xf5c) + 1))) + uVar4 * 2) * 2)
                        * 0xc4 + 0xc + (int)this)));
    }
  }
  if (pbVar5 != (byte *)0x0) {
    F_007e3fd0(pbVar5 + 0x28,(int)*(char *)((int)this + 0x1fd0),(uint)*pbVar5,(uint)pbVar5[1],
                 (uint)pbVar5[2],(uint)pbVar5[7]);
    F_0082cc40(pbVar5 + 0xc,0);
    F_007e5800(0);
    F_0069e910(*(undefined4 *)((int)this + 0x1fa4),(uint)pbVar5[0xd],(uint)pbVar5[0x10],
                 (uint)pbVar5[0xd],(uint)pbVar5[7]);
  }
  return 0;
}

/* ref: FUN_008820b0 */
uint F_008820b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8820b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  byte * pbVar2;
  
  if ((param_2 == 1) || (param_2 == 0xffffffff)) {
    if (*(int *)((int)this + 8) != 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x68))
                (this,*(undefined4 *)((int)this + 0x1fac),*(undefined4 *)((int)this + 0xf5c),
                 0xffffffff);
      F_005a2710((undefined *)((int)this + 0xf7c),3);
      *(undefined4 *)((int)this + 0xf80) = 0xffffffff;
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      param_2 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))
                          (piVar1,*(undefined4 *)((int)this + 8),0x205,(undefined *)((int)this + 0xf7c));
    }
    pbVar2 = *(byte * PTR32 *)((int)this + 0xf5c);
  }
  else if (param_2 == 0) {
    pbVar2 = *(byte * PTR32 *)((int)this + 0xf5c);
    if (pbVar2[1] == (byte)param_1) {
      return (uint)pbVar2;
    }
    param_2 = (uint)pbVar2[2];
    pbVar2 = ((byte *)GEN_TOP(((param_2 + ((uint)(byte)param_1 + (uint)*pbVar2 * 2) * 2) * 0xc4 + 0xc +
                     (int)this)));
    *(byte * PTR32 *)((int)this + 0xf5c) = pbVar2;
  }
  else {
    if (param_2 != 2) {
      return param_2;
    }
    param_2 = (uint)(*(byte * PTR32 *)((int)this + 0xf5c))[2];
    pbVar2 = ((byte *)GEN_TOP(((param_2 +
                      ((uint)(byte)param_1 + (uint)**(byte * PTR32 *)((int)this + 0xf5c) * 2) * 2) * 0xc4 +
                      0xc + (int)this)));
  }
  if (pbVar2 != (byte *)0x0) {
    F_007e3fd0(pbVar2 + 0x28,(int)*(char *)((int)this + 0x1fd0),(uint)*pbVar2,(uint)pbVar2[1],
                 (uint)pbVar2[2],(uint)pbVar2[7]);
    F_0082cc40(pbVar2 + 0xc,0);
    F_00782390();
    param_2 = F_0069e910(*(undefined4 *)((int)this + 0x1fa4),(uint)pbVar2[0xd],(uint)pbVar2[0x10],
                           (uint)pbVar2[0xd],(uint)pbVar2[7]);
  }
  return param_2;
}

/* ref: FUN_008821e0 */
unsigned int F_008821e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8821e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  byte * pbVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  if ((param_3 == 1) || (param_3 == -1)) {
    if (*(int *)((int)this + 8) != 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x68))
                (this,*(undefined4 *)((int)this + 0x1fac),*(undefined4 *)((int)this + 0xf5c),
                 0xffffffff);
      F_005a2710((undefined *)((int)this + 0xf7c),3);
      *(undefined4 *)((int)this + 0xf80) = 0xffffffff;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))
                (piVar4,*(undefined4 *)((int)this + 8),0x205,(undefined *)((int)this + 0xf7c));
      return 0;
    }
  }
  else {
    pbVar1 = *(byte * PTR32 *)((int)this + 0xf5c);
    uVar3 = F_00ab3630((uint)pbVar1[2] + ((uint)pbVar1[1] + (uint)*pbVar1 * 2) * 2);
    iVar2 = *(int *)(uVar3 + param_1 * 0xf0);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xf5c) + 3))) = 4;
    F_007808b0(param_1,*(undefined4 *)((int)this + 0xf5c),uVar3 + param_1 * 0xf0,param_2);
    if (param_3 == 0) {
      if (iVar2 == 0xcb) {
        pbVar1 = *(byte * PTR32 *)((int)this + 0xf5c);
        F_0082bd80((uint)*pbVar1,(uint)pbVar1[1],(uint)pbVar1[2],param_2);
        return 0;
      }
      if ((iVar2 == 0xee) && (-1 < *(char *)((int)this + 0x1fd4))) {
        F_00780850(this,0xffffffff,(int)*(char *)((int)this + 0x1fd4));
        F_00780850(this,0xffffffff,(int)*(char *)((int)this + 0x1fd5));
      }
    }
    F_0082cc40(*(int *)((int)this + 0xf5c) + 0xc,0);
  }
  return 0;
}

/* ref: FUN_00882320 */
byte F_00882320(unsigned int gen_a0)
{
  GEN_ENTER(0x882320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined4 local_8;
  
  pbVar1 = *(byte * PTR32 *)((int)this + 0xf5c);
  uVar3 = F_00ab3630((uint)pbVar1[2] + ((uint)pbVar1[1] + (uint)*pbVar1 * 2) * 2);
  F_007e41f0(this,uVar3,*(undefined4 *)((int)this + 0xf5c));
  if (*(int *)((int)this + 8) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))
              (this,*(undefined4 *)((int)this + 0x1fac),*(undefined4 *)((int)this + 0xf5c),
               0xfffffffe);
    F_005a2710((undefined *)((int)this + 0xf7c),3);
    *(undefined4 *)((int)this + 0xf80) = 0xffffffff;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))
              (piVar4,*(undefined4 *)((int)this + 8),0x205,(undefined *)((int)this + 0xf7c));
  }
  pbVar1 = *(byte * PTR32 *)((int)this + 0xf5c);
  bVar2 = pbVar1[10];
  uVar3 = F_00ab3630((uint)pbVar1[2] + ((uint)pbVar1[1] + (uint)*pbVar1 * 2) * 2);
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*(undefined1 *)(uVar3 + 0x1a40 + (uint)bVar2));
  bVar2 = F_0082cc40(*(int *)((int)this + 0xf5c) + 0xc,local_8);
  return bVar2;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf38 */
uint F_008823f0(unsigned int gen_a0)
{
  GEN_ENTER(0x8823f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint * puVar4;
  undefined4 uVar5;
  undefined * this_00;
  int iVar6;
  int iVar7;
  undefined * pAVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int local_8;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  piVar3 = *(int * PTR32 *)(uVar2 + 0x2c);
  iVar6 = 0;
  if (((piVar3 == (int *)0x0) ||
      (uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3), (char)uVar2 == '\0')) &&
     (*(int *)(this + 0x1fb4) == 0)) {
    F_005a2710(this + 0x1dc4,3);
    *(undefined4 *)(this + 0x1dc8) = 0x51;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)(this + 8),0x205,this + 0xf7c);
    puVar4 = (uint *)F_00ab36c0(0x880);
    if (puVar4 == (uint *)0x0) {
      local_8 = 0;
    }
    else {
      local_8 = (*puVar4 & 0xffffff) + (int)puVar4;
    }
    puVar4 = (uint *)F_00ab36c0(0x881);
    if (puVar4 != (uint *)0x0) {
      iVar6 = (*puVar4 & 0xffffff) + (int)puVar4;
    }
    puVar4 = (uint *)F_00ab36c0(0x882);
    if (puVar4 == (uint *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (*puVar4 & 0xffffff) + (int)puVar4;
    }
    uVar5 = *(undefined4 *)(this + 8);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
    bVar1 = F_005594e0(uVar2);
    if (bVar1 != 0) {
      uVar5 = 0;
    }
    uVar18 = 0;
    uVar17 = 0;
    uVar16 = 1;
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0xb;
    uVar10 = 0;
    uVar9 = 3;
    pAVar8 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = F_00866a60(this_00,local_8,iVar6,iVar7,pAVar8,uVar9,uVar10,uVar5,uVar11,uVar12,uVar13,
                         uVar14,uVar15,uVar16,uVar17,uVar18);
    *(uint *)(this + 0x1fb4) = uVar2;
  }
  return uVar2;
}

/* ref: FUN_00882520 */
uint F_00882520(unsigned int gen_a0)
{
  GEN_ENTER(0x882520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte * pbVar1;
  uint uVar2;
  uint * puVar3;
  undefined * this_00;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  pbVar1 = *(byte * PTR32 *)((int)this + 0xf5c);
  uVar2 = F_00ab3630((uint)pbVar1[2] + ((uint)pbVar1[1] + (uint)*pbVar1 * 2) * 2);
  uVar5 = *(undefined4 *)(uVar2 + 0x1ba4);
  puVar3 = (uint *)F_00ab36c0(0x870);
  if (puVar3 == (uint *)0x0) {
    (*(int *)(gen_frame + 0x14)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x14)) = (*puVar3 & 0xffffff) + (int)puVar3;
  }
  uVar10 = 0xb;
  uVar9 = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar5;
  uVar8 = 0;
  (*(uint *)(gen_frame + 0xc)) = (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0xf5c) + 2)));
  puVar7 = &(*(undefined4 *)(gen_frame + 0x0));
  uVar6 = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  (*(undefined4 *)(gen_frame + 0x10)) = 6;
  uVar5 = 0x91;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  F_008668b0(this_00,uVar5,uVar6,puVar7,this,uVar8,uVar9,uVar10);
  puVar3 = &(*(uint *)(gen_frame + 0x18));
  iVar4 = 2;
  do {
    puVar3 = puVar3 + -2;
    uVar2 = F_005a2670(puVar3);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentCreate::vf2 */
uint F_00882600(unsigned int gen_a0)
{
  GEN_ENTER(0x882600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  F_007601d0(this_00,uVar2);
  ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
  uVar1 = F_0082cb40(0,0);
  *(undefined4 *)(this + 0x2184) = 1;
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCreate::vf41 */
uint F_00882640(unsigned int gen_a0)
{
  GEN_ENTER(0x882640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x2180);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 0x684) == 0)) {
    uVar1 = F_00881e10(this);
    return uVar1;
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCreate::vf34 */
uint F_00882660(unsigned int gen_a0)
{
  GEN_ENTER(0x882660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined1 AVar2;
  byte * pbVar3;
  undefined * this_00;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined3 extraout_var = 0;
  undefined * pAVar8;
  
  *(undefined * PTR32 *)(this + 0xf5c) = this + 0xc;
  if (-1 < *(int *)(this + 0x1fd8)) {
    uVar5 = F_00aca790(&REFG(undefined, 0x148a590),*(int *)(this + 0x1fd8));
    F_0082bed0(this,uVar5 + 0x10,(uint)*(byte *)(uVar5 + 0x2a));
  }
  pbVar3 = *(byte * PTR32 *)(this + 0xf5c);
  this[0x1fd0] = (undefined1)0x0;
  F_007e3fd0(pbVar3 + 0x28,0,(uint)*pbVar3,(uint)pbVar3[1],(uint)pbVar3[2],(uint)pbVar3[7]);
  pbVar3 = *(byte * PTR32 *)(this + 0xf5c);
  bVar1 = pbVar3[10];
  uVar5 = F_00ab3630((uint)pbVar3[2] + ((uint)pbVar3[1] + (uint)*pbVar3 * 2) * 2);
  (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),*(undefined1 *)(uVar5 + 0x1a40 + (uint)bVar1));
  F_0082cc40(*(int *)(this + 0xf5c) + 0xc,(*(uint *)(gen_frame + 0x4)));
  pbVar3 = *(byte * PTR32 *)(this + 0xf5c);
  uVar5 = (uint)pbVar3[2] + ((uint)pbVar3[1] + (uint)*pbVar3 * 2) * 2;
  (*(uint *)(gen_frame + 0x4)) = 0;
  pAVar8 = this + 0x18;
  uVar6 = uVar5;
  do {
    if ((*(uint *)(gen_frame + 0x4)) != uVar5) {
      AVar2 = pAVar8[-2];
      uVar6 = F_00ab3630((uint)(byte)pAVar8[-10] +
                           ((uint)(byte)pAVar8[-0xb] + (uint)(byte)pAVar8[-0xc] * 2) * 2);
      bVar1 = *(byte *)(uVar6 + 0x1a40 + (uint)(byte)AVar2);
      uVar7 = F_00ae0db0(&REFG(undefined, 0x14c0920),
                           (&REFG(undefined4, 0x13282e0))
                           [(uint)(byte)pAVar8[-10] +
                            ((uint)(byte)pAVar8[-0xb] + (uint)(byte)pAVar8[-0xc] * 2) * 2]);
      uVar6 = uVar7;
      if (uVar7 != 0) {
        this_00 = *(undefined * PTR32 *)(uVar7 + 0xec);
        if (this_00 != (undefined *)0x0) {
          F_00b88e00(pAVar8,pAVar8);
          bVar4 = F_006a9a90(this_00,pAVar8,1);
          uVar6 = CONCAT31(extraout_var,bVar4);
        }
        *(ushort *)(uVar7 + 0x2ea4) = (ushort)bVar1;
      }
    }
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
    pAVar8 = pAVar8 + 0xc4;
  } while ((int)(*(uint *)(gen_frame + 0x4)) < 0x14);
  return uVar6;
}

/* ref: Client::UI2::Agent::AgentLicenseViewer::vf2 */
uint F_008827e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x8827e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  uVar8 = 4;
  uVar7 = 0;
  uVar6 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0x9f;
  pAVar5 = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar1 = F_008668b0(this_00,uVar2,uVar3,uVar4,pAVar5,uVar6,uVar7,uVar8);
  *(uint *)(this + 8) = uVar1;
  return uVar1;
}

/* ref: FUN_00882820 */
unsigned int F_00882820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x882820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined * this_00;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  *(byte *)((int)this + 0x68f) = (-((char)param_1 != '\0') & 0xfdU) + 0xc;
  *(undefined1 *)((int)this + 0x6cb) = 0;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),0x1c2)));
  uVar5 = 1;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
  puVar2 = (undefined4 *)F_00cb0910(this_00,uVar5);
  F_0082ce60(0,*puVar2);
  if (REFG(undefined4, 0x148a44c) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(undefined4, 0x148a44c),6,0);
    REFG(undefined4, 0x1328330) = 0xffffffff;
    REFG(undefined4, 0x148a44c) = (int *)0x0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x6d4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x6d4) = 0;
  }
  iVar4 = *(int *)((int)this + 0x684);
  if (iVar4 != 0) {
    *(undefined4 *)((int)this + 0x684) = 0;
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,iVar4,0);
  }
  F_00781730(this);
  F_00781840(this);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,2);
  if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 400))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 400))) = 0;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  F_007819a0(this);
  iVar4 = 0;
  do {
    F_00782d20(iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  F_00782e50();
  if (REFG(undefined4, 0x148a44c) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(undefined4, 0x148a44c),6,0);
  }
  REFG(undefined4, 0x148a44c) = (int *)0x0;
  *(undefined1 *)((int)this + 0x670) = 0xff;
  *(undefined1 *)((int)this + 0x680) = 0xff;
  *(undefined2 *)((int)this + 0x682) = 0xffff;
  *(undefined1 *)((int)this + 0x6bd) = 0xff;
  return 0;
}

/* ref: FUN_00882980 */
uint F_00882980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x882980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  short * psVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  short sVar6;
  uint uVar7;
  short * in_ecx;
  int iVar8;
  ulonglong uVar9;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,2);
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,1)));
    (*(int *)(gen_frame + 0xc)) = 0;
    F_0042b630(((undefined1 *)(gen_frame + 0x14)));
    in_ecx = (short *)*param_3;
    psVar1 = (short *)param_3[1];
    if (in_ecx != psVar1) {
      iVar8 = param_1 * 0xa0 + 0x20;
      do {
        piVar3 = (int *)*param_2;
        (*(char *)(gen_frame + 0x12)) = '\0';
        if (piVar3 != (int *)param_2[1]) {
          do {
            if (*piVar3 == 0) {
              sVar6 = 0;
            }
            else {
              sVar6 = *(short *)(*piVar3 + 0x18);
            }
            if (sVar6 == *in_ecx) {
              (*(char *)(gen_frame + 0x12)) = (*(char *)(gen_frame + 0x12)) + '\x01';
            }
            piVar3 = piVar3 + 6;
          } while (piVar3 != (int *)param_2[1]);
        }
        (*(char *)(gen_frame + 0x13)) = '\0';
        bVar2 = F_00e3bf60(in_ecx);
        if (bVar2 == 0) {
          bVar2 = F_00e3bf80(in_ecx);
          if (bVar2 == 0) {
            uVar7 = F_00e3c030(param_4);
            if ((int)(*(char *)(gen_frame + 0x12)) < (int)uVar7) {
              bVar2 = F_00e3bfa0(in_ecx);
              if (bVar2 != 0) {
                (*(char *)(gen_frame + 0x13)) = '\x03';
              }
            }
            else {
              (*(char *)(gen_frame + 0x13)) = '\x04';
            }
          }
          else {
            (*(char *)(gen_frame + 0x13)) = '\x02';
          }
        }
        else {
          (*(char *)(gen_frame + 0x13)) = '\x01';
        }
        bVar2 = F_00e3bfc0(in_ecx);
        uVar7 = ((uint)CONCAT21(*in_ecx,bVar2) << 4 | (int)(*(char *)(gen_frame + 0x13))) << 4 | (int)(*(char *)(gen_frame + 0x12)) & 0xfU;
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar8))) != uVar7) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar8))) = uVar7;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        F_00431250(this_00,param_1 * 0x28 + (*(int *)(gen_frame + 0xc)),in_ecx + 10,0,1,0);
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
        iVar8 = iVar8 + 4;
        in_ecx = in_ecx + 0x2a;
      } while (in_ecx != psVar1);
    }
    piVar3 = ((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8 + param_1 * 4)));
    if (*piVar3 != (*(int *)(gen_frame + 0xc))) {
      *piVar3 = (*(int *)(gen_frame + 0xc));
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    if (param_1 < 2) {
      uVar7 = *(uint *)((int)this + param_1 * 0x118 + 300);
      if (uVar7 < 99) {
        bVar2 = 1;
      }
      else if (uVar7 < 0x294) {
        bVar2 = 2;
      }
      else if (uVar7 < 1000) {
        bVar2 = 3;
      }
      else {
        bVar2 = (*(int *)((int)this + param_1 * 0x118 + 0x11c) < 10) - 1U & 3;
      }
    }
    else {
      bVar2 = 0;
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10 + param_1 * 4))) != (uint)bVar2) {
      *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10 + param_1 * 4))) = (uint)bVar2;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18 + param_1 * 4))) != 1) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18 + param_1 * 4))) = 1;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    uVar7 = F_00e3c030(param_4);
    if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18c))) != uVar7) {
      *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18c))) = uVar7;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    uVar7 = **(uint * PTR32 *)(uVar4 + 0x20);
    uVar5 = uVar7 | 0x41;
    if (uVar7 != uVar5) {
      **(uint * PTR32 *)(uVar4 + 0x20) = uVar5;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    uVar9 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    param_4 = (uint)uVar9;
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return param_4;
}

/* ref: FUN_00882be0 */
uint F_00882be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x882be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  int iVar3;
  undefined * this_00;
  uint uVar4;
  undefined * puVar5;
  int * piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),10)));
  if (piVar1 == (int *)0x0) {
    puVar5 = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar7 = 3;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
    puVar5 = (undefined *)F_00cb0950(pvVar2,uVar7);
  }
  F_005a2710((undefined *)((int)this + 0x600),6);
  *(undefined * PTR32 *)((int)this + 0x604) = puVar5;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),0xb)));
  if (piVar1 == (int *)0x0) {
    puVar5 = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar7 = 3;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
    puVar5 = (undefined *)F_00cb0950(pvVar2,uVar7);
  }
  F_005a2710((undefined *)((int)this + 0x610),6);
  *(undefined * PTR32 *)((int)this + 0x614) = puVar5;
  piVar1 = (int *)param_1[1];
  piVar6 = (int *)*param_1;
  if (piVar6 != piVar1) {
    pvVar2 = (undefined *)((int)this + 0x620);
    do {
      iVar8 = *piVar6;
      F_005a2710(pvVar2,6);
      piVar6 = piVar6 + 1;
      *(int *)((int)pvVar2 + 4) = iVar8 + 0xc;
      pvVar2 = (undefined *)((int)pvVar2 + 8);
    } while (piVar6 != piVar1);
  }
  uVar11 = 5;
  uVar10 = 0;
  uVar9 = 1;
  iVar8 = (int)this + 0x600;
  iVar3 = (param_1[1] - *param_1 >> 2) + 4;
  uVar7 = 0xc;
  pvVar2 = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_008668b0(this_00,uVar7,iVar3,iVar8,pvVar2,uVar9,uVar10,uVar11);
  *(uint *)((int)this + 0x684) = uVar4;
  return uVar4;
}

/* ref: FUN_00882cf0 */
uint F_00882cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x882cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * this_00;
  uint * this_01;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 8))))(*(int * PTR32 *)((int)this + 4),0x40,1);
  piVar1 = *(int * PTR32 *)((int)this + 0x6d4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x6d4) = 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x24);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),4);
  (*(uint *)(gen_frame + 0x4)) = -(uint)((char)param_1 != '\0') & 0x80;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),0x7a7)));
  if (piVar1 == (int *)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar5 = 3;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)F_00cb0950(pvVar3,uVar5);
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  uVar10 = 4;
  uVar9 = 0;
  uVar8 = 0;
  puVar7 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(char * PTR32 *)(gen_frame + 0x14)) = "";
  uVar6 = 5;
  uVar5 = 3;
  pvVar3 = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_008668b0(this_00,uVar5,uVar6,puVar7,pvVar3,uVar8,uVar9,uVar10);
  *(uint *)((int)this + 8) = uVar2;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,2);
  *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x184))) = (int)*(char *)((int)this + 0x671);
  *(undefined1 *)(uVar2 + 0x1d) = 1;
  *(undefined1 *)((int)this + 0x6cb) = 0;
  F_00a06560(0);
  this_01 = &(*(uint *)(gen_frame + 0x28));
  iVar4 = 4;
  do {
    this_01 = this_01 + -2;
    uVar2 = F_005a2670(this_01);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_00882e60 */
uint F_00882e60(unsigned int gen_a0)
{
  GEN_ENTER(0x882e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x11040];
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint * puVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  char * pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined * pvVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0x11038)) = 0x882e6d;
  (*(uint *)(gen_frame + 0x11038)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x24);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  puVar3 = ((undefined4 *)(gen_frame + 0x10010));
  iVar5 = 0x204;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 2;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  iVar5 = 0x7bc;
  (*(int *)(gen_frame + 0x1000c)) = 3;
  puVar6 = ((undefined1 *)(gen_frame + 0x10e28));
  do {
    puVar4 = (uint *)F_00ab36c0(iVar5);
    iVar5 = iVar5 + 1;
    if (puVar4 == (uint *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = ((char *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
    }
    F_005a2710(puVar6,6);
    (*(int *)(gen_frame + 0x1000c)) = (*(int *)(gen_frame + 0x1000c)) + -1;
    *(char * PTR32 *)(puVar6 + 4) = pcVar7;
    puVar6 = puVar6 + 8;
  } while ((*(int *)(gen_frame + 0x1000c)) != 0);
  iVar5 = 0x7bc;
  (*(int *)(gen_frame + 0x1000c)) = 3;
  puVar6 = ((undefined1 *)(gen_frame + 0x10e40));
  do {
    uVar2 = F_00ab36c0(iVar5);
    iVar5 = iVar5 + 1;
    if (uVar2 == 0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = ((char *)GEN_TOP(((*(uint *)(uVar2 + 8) & 0xffffff) + uVar2 + 8)));
    }
    F_005a2710(puVar6,6);
    (*(int *)(gen_frame + 0x1000c)) = (*(int *)(gen_frame + 0x1000c)) + -1;
    *(char * PTR32 *)(puVar6 + 4) = pcVar7;
    puVar6 = puVar6 + 8;
  } while ((*(int *)(gen_frame + 0x1000c)) != 0);
  uVar13 = 4;
  uVar12 = 0;
  uVar11 = 0;
  puVar3 = ((undefined4 *)(gen_frame + 0x10010));
  uVar9 = 0x205;
  uVar8 = 0x93;
  pvVar10 = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_008668b0(this_00,uVar8,uVar9,puVar3,pvVar10,uVar11,uVar12,uVar13);
  *(uint *)((int)this + 8) = uVar2;
  puVar4 = &(*(uint *)(gen_frame + 0x11038));
  iVar5 = 0x204;
  do {
    puVar4 = puVar4 + -2;
    uVar2 = F_005a2670(puVar4);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x11038)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar2;
}

/* ref: FUN_00882ff0 */
uint F_00882ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x882ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * puVar2;
  undefined * pvVar3;
  undefined * this_00;
  uint uVar4;
  undefined * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),0x55)));
  if (piVar1 == (int *)0x0) {
    puVar5 = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar6 = 3;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
    puVar5 = (undefined *)F_00cb0950(pvVar3,uVar6);
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),0x54)));
  if (piVar1 == (int *)0x0) {
    puVar2 = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar6 = 3;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
    puVar2 = (undefined *)F_00cb0950(pvVar3,uVar6);
  }
  uVar11 = 1;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0xb;
  uVar7 = 0;
  uVar6 = 0x10;
  pvVar3 = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_00866c30(this_00,puVar2,puVar5,pvVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
  *(uint *)((int)this + 0x684) = uVar4;
  return uVar4;
}

/* ref: FUN_00883080 */
uint F_00883080(unsigned int gen_a0)
{
  GEN_ENTER(0x883080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * puVar2;
  undefined * pvVar3;
  undefined * this_00;
  uint uVar4;
  char * pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  if (REFG(int, 0x1493bd0) == 0) {
    pcVar5 = "";
  }
  else {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                              (*(int * PTR32 *)((int)this + 0x2e8),0x52)));
    if (piVar1 == (int *)0x0) {
      pcVar5 = "";
    }
    else {
      uVar6 = 3;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
      pcVar5 = (char *)F_00cb0950(pvVar3,uVar6);
    }
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),0x21)));
  if (piVar1 == (int *)0x0) {
    puVar2 = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar6 = 3;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
    puVar2 = (undefined *)F_00cb0950(pvVar3,uVar6);
  }
  uVar17 = 0;
  uVar16 = 1;
  uVar15 = 1;
  uVar14 = 1;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 5;
  uVar10 = 0;
  uVar9 = 1;
  uVar8 = 3;
  uVar7 = 0;
  uVar6 = 0;
  pvVar3 = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_00866a60(this_00,puVar2,uVar6,uVar7,pvVar3,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,
                       pcVar5,uVar14,uVar15,uVar16,uVar17);
  *(uint *)((int)this + 0x684) = uVar4;
  return uVar4;
}

/* ref: FUN_00883130 */
uint F_00883130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x883130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  undefined * puVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  uint * this_00;
  undefined1 * puVar6;
  int iVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  puVar6 = (undefined1 *)(*param_1 + 0x1a);
  if (*param_1 == 0) {
    puVar6 = &REFG(undefined1, 0x107fc63);
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),0x19)));
  if (piVar1 == (int *)0x0) {
    puVar2 = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar8 = 3;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
    puVar2 = (undefined *)F_00cb0950(pvVar3,uVar8);
  }
  uVar8 = 0;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_004603b0(pvVar3,puVar2,puVar6,uVar8);
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(uint *)(gen_frame + 0xc)) = uVar4;
  if (REFG(int, 0x148a108) == 0) {
    (*(uint *)(gen_frame + 0x4)) = F_005593a0(pvVar3,1);
  }
  else if (REFG(int, 0x1327228) == 0) {
    (*(uint *)(gen_frame + 0x4)) = F_005593a0(pvVar3,3);
  }
  else {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x4));
  if (REFG(int, 0x148a10c) == 0) {
    (*(uint *)(gen_frame + 0x4)) = F_005593a0(pvVar3,2);
  }
  else if (REFG(int, 0x132722c) == 0) {
    (*(uint *)(gen_frame + 0x4)) = F_005593a0(pvVar3,4);
  }
  else {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x4));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  (*(undefined4 *)(gen_frame + 0x24)) = 0x10000;
  uVar4 = F_008668b0(pvVar3,9,4,&(*(undefined4 *)(gen_frame + 0x8)),this,2,0,5);
  this_00 = &(*(uint *)(gen_frame + 0x48));
  iVar7 = 7;
  do {
    this_00 = this_00 + -2;
    uVar5 = F_005a2670(this_00);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  *(uint *)((int)this + 0x684) = uVar4;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar5;
}

/* ref: FUN_008832b0 */
uint F_008832b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8832b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  undefined * puVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  uint * this_00;
  undefined1 * puVar6;
  int iVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  puVar6 = (undefined1 *)(*param_1 + 0x1a);
  if (*param_1 == 0) {
    puVar6 = &REFG(undefined1, 0x107fc63);
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),0x275)));
  if (piVar1 == (int *)0x0) {
    puVar2 = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar8 = 3;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
    puVar2 = (undefined *)F_00cb0950(pvVar3,uVar8);
  }
  uVar8 = 0;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_004603b0(pvVar3,puVar2,puVar6,uVar8);
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(uint *)(gen_frame + 0xc)) = uVar4;
  if (REFG(int, 0x148a108) == 0) {
    (*(uint *)(gen_frame + 0x4)) = F_005593a0(pvVar3,1);
  }
  else if (REFG(int, 0x1327228) == 0) {
    (*(uint *)(gen_frame + 0x4)) = F_005593a0(pvVar3,3);
  }
  else {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x4));
  if (REFG(int, 0x148a10c) == 0) {
    (*(uint *)(gen_frame + 0x4)) = F_005593a0(pvVar3,2);
  }
  else if (REFG(int, 0x132722c) == 0) {
    (*(uint *)(gen_frame + 0x4)) = F_005593a0(pvVar3,4);
  }
  else {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x4));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  (*(undefined4 *)(gen_frame + 0x24)) = 0x10000;
  uVar4 = F_008668b0(pvVar3,9,4,&(*(undefined4 *)(gen_frame + 0x8)),this,2,0,5);
  this_00 = &(*(uint *)(gen_frame + 0x48));
  iVar7 = 7;
  do {
    this_00 = this_00 + -2;
    uVar5 = F_005a2670(this_00);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  *(uint *)((int)this + 0x684) = uVar4;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar5;
}

/* ref: FUN_00883430 */
uint F_00883430(unsigned int gen_a0)
{
  GEN_ENTER(0x883430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  uint * this_00;
  int iVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),0x4c)));
  if (piVar1 == (int *)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar6 = 3;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)F_00cb0950(pvVar2,uVar6);
  }
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  if (REFG(int, 0x148a108) == 0) {
    uVar3 = F_005593a0(pvVar2,1);
  }
  else if (REFG(int, 0x1327228) == 0) {
    uVar3 = F_005593a0(pvVar2,3);
  }
  else {
    uVar3 = 0;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = uVar3;
  if (REFG(int, 0x148a10c) == 0) {
    uVar3 = F_005593a0(pvVar2,2);
  }
  else if (REFG(int, 0x132722c) == 0) {
    uVar3 = F_005593a0(pvVar2,4);
  }
  else {
    uVar3 = 0;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = uVar3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  (*(undefined4 *)(gen_frame + 0x24)) = 0x10000;
  uVar3 = F_008668b0(pvVar2,9,4,&(*(undefined4 *)(gen_frame + 0x8)),this,0xd,0,4);
  this_00 = &(*(uint *)(gen_frame + 0x48));
  iVar5 = 7;
  do {
    this_00 = this_00 + -2;
    uVar4 = F_005a2670(this_00);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(uint *)((int)this + 0x684) = uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar4;
}

/* ref: FUN_00883580 */
uint F_00883580(unsigned int gen_a0)
{
  GEN_ENTER(0x883580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),8)));
  if (piVar1 == (int *)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar5 = 3;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)F_00cb0950(pvVar2,uVar5);
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),7)));
  if (piVar1 == (int *)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar5 = 3;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)F_00cb0950(pvVar2,uVar5);
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),6)));
  if (piVar1 == (int *)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar5 = 3;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)F_00cb0950(pvVar2,uVar5);
  }
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)(gen_frame + 0xc));
  if ((*(undefined * PTR32 *)(gen_frame + 0x10)) == REFG(undefined4, 0x148a108)) {
    uVar5 = 1;
LAB_00883670: ;
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)F_005593a0(pvVar2,uVar5);
  }
  else if ((*(undefined * PTR32 *)(gen_frame + 0x10)) == REFG(undefined4, 0x1327228)) {
    uVar5 = 3;
    goto LAB_00883670;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  if ((*(undefined * PTR32 *)(gen_frame + 0x14)) == REFG(undefined4, 0x148a10c)) {
    uVar5 = 2;
  }
  else {
    if ((*(undefined * PTR32 *)(gen_frame + 0x14)) != REFG(undefined4, 0x132722c)) goto LAB_008836a8;
    uVar5 = 4;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)F_005593a0(pvVar2,uVar5);
LAB_008836a8: ;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (*(undefined * PTR32 *)(gen_frame + 0x14));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
  (*(undefined4 *)(gen_frame + 0x34)) = 0x10001;
  uVar3 = F_008668b0(pvVar2,9,4,&(*(undefined4 *)(gen_frame + 0x18)),this,0x15,0,4);
  this_00 = &(*(uint *)(gen_frame + 0x58));
  iVar4 = 7;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  *(uint *)((int)this + 0x684) = uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_00883720 */
uint F_00883720(unsigned int gen_a0)
{
  GEN_ENTER(0x883720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar8 = 0xb;
  uVar7 = 0;
  uVar6 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0xa1;
  pvVar5 = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_008668b0(this_00,uVar2,uVar3,uVar4,pvVar5,uVar6,uVar7,uVar8);
  *(uint *)((int)this + 0x688) = uVar1;
  return uVar1;
}

/* ref: FUN_00883750 */
unsigned int F_00883750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x883750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  F_00882980(this,param_1,param_2,param_3,param_4);
  if (param_4 != 0) {
    bVar2 = F_00e3c080(param_4);
    if (bVar2 != 0) {
      bVar2 = 1;
      goto LAB_00883783;
    }
  }
  bVar2 = 0;
LAB_00883783: ;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,2);
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 400))) != (uint)bVar2) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 400))) = (uint)bVar2;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar1 = **(uint * PTR32 *)(uVar4 + 0x20);
  uVar5 = uVar1 | 8;
  if (uVar1 != uVar5) {
    **(uint * PTR32 *)(uVar4 + 0x20) = uVar5;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  return 0;
}

/* ref: FUN_008837d0 */
uint F_008837d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8837d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00882980(this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_008837e0 */
uint F_008837e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8837e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint * this_00;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  *(undefined1 *)((int)this + 0x68c) = 0xe;
  iVar5 = *(int *)((int)this + 0x684);
  *(undefined4 *)((int)this + 0x6d8) = *(undefined4 *)(param_1 + 8);
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x6dc) = *(undefined4 *)(param_1 + 0xc);
  if (iVar5 != 0) {
    *(undefined4 *)((int)this + 0x684) = 0;
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,iVar5,0);
  }
  uVar6 = 2;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  F_00760260(pvVar2,uVar6);
  iVar5 = *(int *)((int)this + 0x6d4);
  uVar3 = 0;
  if (iVar5 == 0) goto LAB_008839cb;
  if (*(int *)(iVar5 + 0xc) != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar5 + 0xc) + 0x58))))(*(int * PTR32 *)(iVar5 + 0xc));
    if ((uVar3 != 0) && (*((int *)GEN_TOP((*(int *)((int)this + 0x6d4) + 0xc))) != 0)) {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x6d4) + 0xc)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1);
    }
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),0x20)));
  if (piVar1 == (int *)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar6 = 3;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)F_00cb0950(pvVar2,uVar6);
  }
  uVar6 = *(undefined4 *)((int)this + 8);
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)(gen_frame + 0x4));
  if (REFG(int, 0x148a108) == 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)F_005593a0(pvVar2,1);
  }
  else if (REFG(int, 0x1327228) == 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)F_005593a0(pvVar2,3);
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = (uint)(*(undefined * PTR32 *)(gen_frame + 0x4));
  if (REFG(int, 0x148a10c) == 0) {
    uVar7 = 2;
LAB_00883945: ;
    uVar4 = F_005593a0(pvVar2,uVar7);
  }
  else if (REFG(int, 0x132722c) == 0) {
    uVar7 = 4;
    goto LAB_00883945;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  (*(undefined4 *)(gen_frame + 0x24)) = 0x10001;
  uVar4 = F_008668b0(pvVar2,9,4,&(*(undefined4 *)(gen_frame + 0x8)),this,0x11,uVar6,4);
  this_00 = &(*(uint *)(gen_frame + 0x48));
  iVar5 = 7;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(uint *)((int)this + 0x684) = uVar4;
  if (REFG(undefined4, 0x148a44c) != (undefined *)0x0) {
    F_00aa0560(REFG(undefined4, 0x148a44c),3);
    uVar3 = F_00aa4270(REFG(undefined4, 0x148a44c),0x2c5,0,0);
  }
LAB_008839cb: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3;
}

/* ref: FUN_00883a00 */
uint F_00883a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x883a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00882980(this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf16 */
uint F_00883a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x883a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  F_00920c00(0,(float)(float10)0);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x23184) + 8))))(*(int * PTR32 *)(uVar3 + 0x23184),0x32,1);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar3 + 0x23330) + 0x4c))))(uVar3 + 0x23330,0x2e,1,1);
  piVar2 = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0x3c))))(REFG(undefined4, 0x1379694),this + 0x2190);
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,0);
  }
  F_0082ce60(0xffffffff,0);
  iVar1 = *(int *)(this + 0xf60);
  if (*(int *)(iVar1 + 0x54) != 0) {
    ((code *)*(gen_code32 *)(iVar1 + 0x50))(*(undefined4 *)(iVar1 + 0x54),iVar1 + 0x58,1,0);
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar3;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf33 */
uint F_00883ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x883ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00881b40((undefined *)this);
  this[0x1fb8] = (undefined1)0x4;
  this[0x1fd0] = (undefined1)0x3;
  this[0x21a0] = (undefined1)0x0;
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf34 */
uint F_00883ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x883ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined1 AVar2;
  undefined * this_00;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined3 extraout_var = 0;
  int iVar7;
  undefined4 * puVar8;
  undefined * pAVar9;
  byte * pbVar10;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  puVar8 = ((undefined4 *)GEN_TOP((*(int *)(this + 0xf60) + 0x10)));
  pbVar10 = ((byte *)(gen_frame + 0x8));
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pbVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    pbVar10 = pbVar10 + 4;
  }
  *(undefined2 *)pbVar10 = *(undefined2 *)puVar8;
  pbVar10[2] = *(byte *)((int)puVar8 + 2);
  *(undefined * PTR32 *)(this + 0xf5c) = this + 0xc;
  if (((byte *)(gen_frame + 0x8))[0] == 0) {
    if (-1 < *(int *)(this + 0x1fd8)) {
      uVar4 = F_00aca790(&REFG(undefined, 0x148a590),*(int *)(this + 0x1fd8));
      F_0082bed0(this,uVar4 + 0x10,(uint)*(byte *)(uVar4 + 0x2a));
    }
  }
  else {
    F_00b88e00(((byte *)(gen_frame + 0x8)),((byte *)(gen_frame + 0x8)));
    F_0082bed0(this,((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 26)));
    iVar7 = *(int *)(this + 0xf60);
    *(undefined4 *)(iVar7 + 0x10) = 0;
    *(undefined4 *)(iVar7 + 0x14) = 0;
    *(undefined4 *)(iVar7 + 0x18) = 0;
    *(undefined4 *)(iVar7 + 0x1c) = 0;
    *(undefined4 *)(iVar7 + 0x20) = 0;
    *(undefined4 *)(iVar7 + 0x24) = 0;
    *(undefined2 *)(iVar7 + 0x28) = 0;
    *(undefined4 *)(iVar7 + 0x2a) = 0;
    *(undefined1 *)(iVar7 + 0x2e) = 0;
  }
  pbVar10 = *(byte * PTR32 *)(this + 0xf5c);
  this[0x1fd0] = (undefined1)0x3;
  F_007e3fd0(pbVar10 + 0x28,3,(uint)*pbVar10,(uint)pbVar10[1],(uint)pbVar10[2],(uint)pbVar10[7]);
  pbVar10 = *(byte * PTR32 *)(this + 0xf5c);
  bVar1 = pbVar10[10];
  uVar4 = F_00ab3630((uint)pbVar10[2] + ((uint)pbVar10[1] + (uint)*pbVar10 * 2) * 2);
  (*(uint *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3),*(undefined1 *)(uVar4 + 0x1a40 + (uint)bVar1));
  F_0082cc40(*(int *)(this + 0xf5c) + 0xc,(*(uint *)(gen_frame + 0x0)));
  pbVar10 = *(byte * PTR32 *)(this + 0xf5c);
  uVar4 = (uint)pbVar10[2] + ((uint)pbVar10[1] + (uint)*pbVar10 * 2) * 2;
  (*(uint *)(gen_frame + 0x0)) = 0;
  pAVar9 = this + 0x18;
  uVar5 = uVar4;
  do {
    if ((*(uint *)(gen_frame + 0x0)) != uVar4) {
      AVar2 = pAVar9[-2];
      uVar5 = F_00ab3630((uint)(byte)pAVar9[-10] +
                           ((uint)(byte)pAVar9[-0xb] + (uint)(byte)pAVar9[-0xc] * 2) * 2);
      bVar1 = *(byte *)(uVar5 + 0x1a40 + (uint)(byte)AVar2);
      uVar6 = F_00ae0db0(&REFG(undefined, 0x14c0920),
                           (&REFG(undefined4, 0x13282e0))
                           [(uint)(byte)pAVar9[-10] +
                            ((uint)(byte)pAVar9[-0xb] + (uint)(byte)pAVar9[-0xc] * 2) * 2]);
      uVar5 = uVar6;
      if (uVar6 != 0) {
        this_00 = *(undefined * PTR32 *)(uVar6 + 0xec);
        if (this_00 != (undefined *)0x0) {
          F_00b88e00(pAVar9,pAVar9);
          bVar3 = F_006a9a90(this_00,pAVar9,1);
          uVar5 = CONCAT31(extraout_var,bVar3);
        }
        *(ushort *)(uVar6 + 0x2ea4) = (ushort)bVar1;
      }
    }
    (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
    pAVar9 = pAVar9 + 0xc4;
  } while ((int)(*(uint *)(gen_frame + 0x0)) < 0x14);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar5;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf43 */
uint F_00883cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x883cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this);
  uVar1 = F_0082ce60(0xffffffff,0);
  *(undefined4 *)(this + 0x2180) = 7;
  this[0x21a0] = (undefined1)0x1;
  return uVar1;
}

/* ref: FUN_00883d00 */
uint F_00883d00(unsigned int gen_a0)
{
  GEN_ENTER(0x883d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  uint * puVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  puVar2 = (uint *)F_00ab36c0(0x7fc);
  uVar5 = 0;
  if (puVar2 == (uint *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*puVar2 & 0xffffff) + (int)puVar2;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(int *)(gen_frame + 0xc)) = iVar4;
  if (REFG(int, 0x148a108) == 0) {
    uVar3 = F_005593a0(this_00,1);
  }
  else if (REFG(int, 0x1327228) == 0) {
    uVar3 = F_005593a0(this_00,3);
  }
  else {
    uVar3 = 0;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = uVar3;
  if (REFG(int, 0x148a10c) == 0) {
    uVar6 = 2;
  }
  else {
    if (REFG(int, 0x132722c) != 0) goto LAB_00883dc8;
    uVar6 = 4;
  }
  uVar5 = F_005593a0(this_00,uVar6);
LAB_00883dc8: ;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = uVar5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  (*(undefined4 *)(gen_frame + 0x24)) = 0x10001;
  uVar5 = F_008668b0(this_00,9,4,&(*(undefined4 *)(gen_frame + 0x8)),this,7,uVar1,4);
  puVar2 = &(*(uint *)(gen_frame + 0x48));
  iVar4 = 7;
  do {
    puVar2 = puVar2 + -2;
    F_005a2670(puVar2);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  *(uint *)((int)this + 0x1fb4) = uVar5;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar5;
}

/* ref: FUN_00883e40 */
uint F_00883e40(unsigned int gen_a0)
{
  GEN_ENTER(0x883e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  uint * puVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar4 = 0;
  if (*(int *)((int)this + 0x1fb4) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this);
  }
  puVar2 = (uint *)F_00ab36c0(0x26d);
  if (puVar2 == (uint *)0x0) {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x4)) = (*puVar2 & 0xffffff) + (int)puVar2;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(int *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x4));
  if (REFG(int, 0x148a108) == 0) {
    (*(uint *)(gen_frame + 0x4)) = F_005593a0(this_00,1);
  }
  else if (REFG(int, 0x1327228) == 0) {
    (*(uint *)(gen_frame + 0x4)) = F_005593a0(this_00,3);
  }
  else {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x4));
  if (REFG(int, 0x148a10c) == 0) {
    uVar6 = 2;
  }
  else {
    if (REFG(int, 0x132722c) != 0) goto LAB_00883f21;
    uVar6 = 4;
  }
  uVar4 = F_005593a0(this_00,uVar6);
LAB_00883f21: ;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  (*(undefined4 *)(gen_frame + 0x24)) = 0x10001;
  uVar4 = F_008668b0(this_00,9,4,&(*(undefined4 *)(gen_frame + 0x8)),this,6,uVar1,4);
  puVar2 = &(*(uint *)(gen_frame + 0x48));
  iVar5 = 7;
  do {
    puVar2 = puVar2 + -2;
    uVar3 = F_005a2670(puVar2);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(uint *)((int)this + 0x1fb4) = uVar4;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3;
}

/* ref: FUN_00883f90 */
uint F_00883f90(unsigned int gen_a0)
{
  GEN_ENTER(0x883f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  uint uVar2;
  uint * puVar3;
  undefined * this_00;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  uVar5 = 0;
  if (*(int *)((int)this + 0x1fb4) != 0) goto LAB_008840c7;
  puVar3 = (uint *)F_00ab36c0(0x26f);
  if (puVar3 == (uint *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*puVar3 & 0xffffff) + (int)puVar3;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(int *)(gen_frame + 0xc)) = iVar4;
  if (REFG(int, 0x148a108) == 0) {
    uVar2 = F_005593a0(this_00,1);
  }
  else if (REFG(int, 0x1327228) == 0) {
    uVar2 = F_005593a0(this_00,3);
  }
  else {
    uVar2 = 0;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  if (REFG(int, 0x148a10c) == 0) {
    uVar6 = 2;
LAB_0088405b: ;
    uVar5 = F_005593a0(this_00,uVar6);
  }
  else if (REFG(int, 0x132722c) == 0) {
    uVar6 = 4;
    goto LAB_0088405b;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = uVar5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  (*(undefined4 *)(gen_frame + 0x24)) = 0x10001;
  uVar2 = F_008668b0(this_00,9,4,&(*(undefined4 *)(gen_frame + 0x8)),this,2,uVar1,4);
  puVar3 = &(*(uint *)(gen_frame + 0x48));
  iVar4 = 7;
  do {
    puVar3 = puVar3 + -2;
    F_005a2670(puVar3);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  *(uint *)((int)this + 0x1fb4) = uVar2;
LAB_008840c7: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2;
}

/* ref: FUN_00884110 */
uint F_00884110(unsigned int gen_a0)
{
  GEN_ENTER(0x884110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 uVar1;
  byte bVar2;
  byte * pbVar3;
  undefined1 * puVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined2 *)(gen_frame + 0x20)) = 0;
  iVar6 = 0;
  (*(undefined4 *)(gen_frame + 0x23)) = 0;
  puVar4 = ((undefined1 *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0xd)));
  do {
    uVar1 = *puVar4;
    *(undefined1 *)((int)&(*(undefined4 *)(gen_frame + 0x8)) + iVar6) = puVar4[-1];
    *(undefined1 *)((int)&(*(undefined4 *)(gen_frame + 0x8)) + iVar6 + 1) = uVar1;
    iVar6 = iVar6 + 2;
    puVar4 = puVar4 + 2;
  } while (iVar6 < 0x1a);
  pbVar3 = *(byte * PTR32 *)((int)this + 0xf5c);
  bVar2 = pbVar3[10];
  uVar5 = F_00ab3630((uint)pbVar3[2] + ((uint)pbVar3[1] + (uint)*pbVar3 * 2) * 2);
  (*(undefined1 *)(gen_frame + 0x22)) = *(undefined1 *)(uVar5 + 0x1a40 + (uint)bVar2);
  puVar7 = &(*(undefined4 *)(gen_frame + 0x8));
  puVar8 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xf60) + 0x2f)));
  for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)puVar7;
  *(undefined1 *)((int)puVar8 + 2) = *(undefined1 *)((int)puVar7 + 2);
  ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this);
  uVar5 = F_0082ce60(0xffffffff,0);
  *(undefined4 *)((int)this + 0x2180) = 7;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar5;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf2 */
uint F_008841e0(unsigned int gen_a0)
{
  GEN_ENTER(0x8841e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  F_007601d0(this_00,uVar2);
  ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
  uVar1 = F_0082cb40(0,(int)(char)this[0x1fa8]);
  *(undefined4 *)(this + 0x2180) = 1;
  return uVar1;
}

/* ref: FUN_00884220 */
uint F_00884220(unsigned int gen_a0)
{
  GEN_ENTER(0x884220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint * puVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this);
  if (*(char *)((int)this + 0x1fa8) == '\x02') {
    uVar5 = 0x20;
  }
  else {
    uVar5 = 0x279;
  }
  puVar1 = (uint *)F_00ab36c0(uVar5);
  uVar3 = 0;
  if (puVar1 == (uint *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*puVar1 & 0xffffff) + (int)puVar1;
  }
  uVar5 = *(undefined4 *)((int)this + 8);
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(int *)(gen_frame + 0xc)) = iVar4;
  if (REFG(int, 0x148a108) == 0) {
    uVar2 = F_005593a0(this_00,1);
  }
  else if (REFG(int, 0x1327228) == 0) {
    uVar2 = F_005593a0(this_00,3);
  }
  else {
    uVar2 = 0;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  if (REFG(int, 0x148a10c) == 0) {
    uVar6 = 2;
  }
  else {
    if (REFG(int, 0x132722c) != 0) goto LAB_008842fc;
    uVar6 = 4;
  }
  uVar3 = F_005593a0(this_00,uVar6);
LAB_008842fc: ;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = uVar3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  (*(undefined4 *)(gen_frame + 0x24)) = 0x10001;
  uVar3 = F_008668b0(this_00,9,4,&(*(undefined4 *)(gen_frame + 0x8)),this,6,uVar5,4);
  puVar1 = &(*(uint *)(gen_frame + 0x48));
  iVar4 = 7;
  do {
    puVar1 = puVar1 + -2;
    F_005a2670(puVar1);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  *(uint *)((int)this + 0x1fb4) = uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3;
}

/* ref: FUN_00884370 */
uint F_00884370(unsigned int gen_a0)
{
  GEN_ENTER(0x884370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  uint * puVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this);
  puVar2 = (uint *)F_00ab36c0(0x27a);
  uVar4 = 0;
  if (puVar2 == (uint *)0x0) {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x4)) = (*puVar2 & 0xffffff) + (int)puVar2;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(int *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x4));
  if (REFG(int, 0x148a108) == 0) {
    (*(uint *)(gen_frame + 0x4)) = F_005593a0(this_00,1);
  }
  else if (REFG(int, 0x1327228) == 0) {
    (*(uint *)(gen_frame + 0x4)) = F_005593a0(this_00,3);
  }
  else {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x4));
  if (REFG(int, 0x148a10c) == 0) {
    uVar6 = 2;
  }
  else {
    if (REFG(int, 0x132722c) != 0) goto LAB_00884449;
    uVar6 = 4;
  }
  uVar4 = F_005593a0(this_00,uVar6);
LAB_00884449: ;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  (*(undefined4 *)(gen_frame + 0x24)) = 0x10001;
  uVar4 = F_008668b0(this_00,9,4,&(*(undefined4 *)(gen_frame + 0x8)),this,2,uVar1,4);
  puVar2 = &(*(uint *)(gen_frame + 0x48));
  iVar5 = 7;
  do {
    puVar2 = puVar2 + -2;
    uVar3 = F_005a2670(puVar2);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(uint *)((int)this + 0x1fb4) = uVar4;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3;
}

/* ref: FUN_008844c0 */
unsigned int F_008844c0(void)
{
  GEN_ENTER(0x8844c0u, 0u, 0u, 0u, 0u);
  ushort * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  int * piVar8;
  ushort uVar9;
  int local_8;
  
  iVar2 = 0;
  puVar7 = &REFG(undefined4, 0x13282e0);
  do {
    local_8 = 2;
    do {
      iVar6 = 2;
      do {
        iVar5 = iVar6;
        if (-1 < iVar2) {
          uVar3 = F_00ae0db0(&REFG(undefined, 0x14c0920),*puVar7);
          if (uVar3 != 0) {
            if (*(int *)(uVar3 + 0xec) != 0) {
              puVar1 = ((ushort *)GEN_TOP((*(int *)(uVar3 + 0xec) + 0x70)));
              *puVar1 = *puVar1 & 0xffef;
            }
            if (uVar3 != 0xffffe940) {
              *(ushort *)(uVar3 + 0x1730) = *(ushort *)(uVar3 + 0x1730) & 0xffef;
            }
            if (uVar3 != 0xffffe1a0) {
              *(ushort *)(uVar3 + 0x1ed0) = *(ushort *)(uVar3 + 0x1ed0) & 0xffef;
            }
          }
        }
        iVar2 = iVar2 + 1;
        puVar7 = puVar7 + 1;
        iVar6 = iVar5 + -1;
      } while (iVar6 != 0);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  } while ((int)puVar7 < 0x1328330);
  iVar5 = iVar5 + 0xf;
  piVar8 = &REFG(undefined4, 0x148a478);
  do {
    if (-1 < *piVar8) {
      uVar3 = F_00ae0db0(&REFG(undefined, 0x14c0920),*piVar8);
      if (uVar3 != 0) {
        if (*(int *)(uVar3 + 0xec) != 0) {
          puVar1 = ((ushort *)GEN_TOP((*(int *)(uVar3 + 0xec) + 0x70)));
          *puVar1 = *puVar1 & 0xffef;
        }
        if (uVar3 != 0xffffe940) {
          *(ushort *)(uVar3 + 0x1730) = *(ushort *)(uVar3 + 0x1730) & 0xffef;
        }
        if (uVar3 != 0xffffe1a0) {
          *(ushort *)(uVar3 + 0x1ed0) = *(ushort *)(uVar3 + 0x1ed0) & 0xffef;
        }
      }
    }
    piVar8 = (int *)((int)piVar8 + iVar5);
  } while ((int)piVar8 < 0x148a578);
  uVar3 = 0;
  do {
    if (-1 < *(int *)((int)&REFG(undefined4, 0x148a578) + uVar3)) {
      uVar4 = F_00ae0db0(&REFG(undefined, 0x14c0920),*(int *)((int)&REFG(undefined4, 0x148a578) + uVar3));
      if (uVar4 != 0) {
        if (*(int *)(uVar4 + 0xec) != 0) {
          puVar1 = ((ushort *)GEN_TOP((*(int *)(uVar4 + 0xec) + 0x70)));
          *puVar1 = *puVar1 & 0xffef;
        }
        if (uVar4 != 0xffffe940) {
          *(ushort *)(uVar4 + 0x1730) = *(ushort *)(uVar4 + 0x1730) & 0xffef;
        }
        if (uVar4 != 0xffffe1a0) {
          *(ushort *)(uVar4 + 0x1ed0) = *(ushort *)(uVar4 + 0x1ed0) & 0xffef;
        }
      }
    }
    iVar2 = REFG(int, 0x148a44c);
    uVar3 = uVar3 + iVar5;
  } while (uVar3 < 0x20);
  if (REFG(int, 0x148a44c) != 0) {
    uVar9 = (ushort)iVar5;
    if (*(int *)(REFG(int, 0x148a44c) + 0xec) != 0) {
      puVar1 = ((ushort *)GEN_TOP((*(int *)(REFG(int, 0x148a44c) + 0xec) + 0x70)));
      *puVar1 = *puVar1 | uVar9;
    }
    if (iVar2 != -0x16c0) {
      *(ushort *)(iVar2 + 0x1730) = *(ushort *)(iVar2 + 0x1730) | uVar9;
    }
    if (iVar2 != -0x1e60) {
      *(ushort *)(iVar2 + 0x1ed0) = *(ushort *)(iVar2 + 0x1ed0) | uVar9;
    }
  }
  return 0;
}

/* ref: FUN_00884650 */
uint F_00884650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x884650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x9c);
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 0xa0)) {
      piVar1 = (int *)((int)this + 0xb0);
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        iVar3 = 0;
        iVar2 = 0;
      }
      else {
        iVar3 = *(int *)(iVar2 + 8);
        iVar2 = *(int *)(iVar2 + 0xc);
      }
      if ((iVar3 != param_1) || (iVar2 != param_2)) {
        piVar1 = (int *)0x0;
      }
      return (uint)piVar1;
    }
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      iVar3 = 0;
      iVar2 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 8);
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    if ((iVar3 == param_1) && (iVar2 == param_2)) break;
    piVar1 = piVar1 + 6;
  }
  return (uint)piVar1;
}

/* ref: FUN_008846d0 */
uint F_008846d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8846d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00884650(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_008846f0 */
byte F_008846f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8846f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x9c);
  while( true ) {
    if (piVar3 == *(int * PTR32 *)((int)this + 0xa0)) {
      return 0;
    }
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      iVar2 = 0;
      iVar1 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 8);
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    if ((iVar2 == param_1) && (iVar1 == param_2)) break;
    piVar3 = piVar3 + 6;
  }
  return 1;
}

/* ref: FUN_00884750 */
byte F_00884750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x884750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  short * psVar2;
  int iVar3;
  
  if ((*(int *)((int)this + 0xc) != 0) &&
     (iVar3 = *(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18), iVar1 = iVar3 >> 0x1f,
     iVar3 / 0x54 + iVar1 != iVar1)) {
    for (psVar2 = *(short * PTR32 *)((int)this + 0x18); psVar2 != *(short * PTR32 *)((int)this + 0x1c);
        psVar2 = psVar2 + 0x2a) {
      if (*psVar2 == (short)param_1) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_008847a0 */
byte F_008847a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8847a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  
  if ((*(int *)((int)this + 0xc) != 0) && (*(int *)((int)this + 0x2c) != 0)) {
    piVar1 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x2c)));
    while( true ) {
      if (piVar1 == ((int *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x2c))[1]))) {
        return 0;
      }
      if ((*(int *)(*piVar1 + 8) == param_1) && (*(int *)(*piVar1 + 0xc) == param_2)) break;
      piVar1 = piVar1 + 1;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00884800 */
uint F_00884800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x884800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  short * psVar2;
  
  psVar2 = *(short * PTR32 *)((int)this + 0x18);
  uVar1 = 0;
  while( true ) {
    if (psVar2 == *(short * PTR32 *)((int)this + 0x1c)) {
      return 0xffffffff;
    }
    if (*psVar2 == (short)param_1) break;
    psVar2 = psVar2 + 0x2a;
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_00884830 */
byte F_00884830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x884830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  if (*(int *)((int)this + 0x30) == 0) {
    return 0;
  }
  piVar2 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x30)));
  piVar1 = ((int *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x30))[1]));
  while( true ) {
    if (piVar2 == piVar1) {
      return 0;
    }
    uVar3 = F_0090c230(param_1);
    if ((*(int *)(*piVar2 + 8) == (int)uVar3) && (*(int *)(*piVar2 + 0xc) == (int)(uVar3 >> 0x20)))
    break;
    piVar2 = piVar2 + 1;
  }
  return 1;
}

/* ref: FUN_00884880 */
unsigned int F_00884880(unsigned int gen_a0)
{
  GEN_ENTER(0x884880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  
  if (*(int *)((int)this + 0x14) != 0) {
    piVar4 = *(int * PTR32 *)((int)this + 0x9c);
    piVar1 = *(int * PTR32 *)((int)this + 0xa0);
    piVar2 = ((int *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x14))[1]));
    piVar6 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x14)));
    while ((piVar6 != piVar2 && (piVar4 != piVar1))) {
      iVar3 = *piVar6;
      if ((*(int *)(iVar3 + 0xc) != 0) || (*(int *)(iVar3 + 8) != 0)) {
        *piVar4 = iVar3;
        if (iVar3 == 0) {
          iVar5 = 0;
          iVar3 = 0;
        }
        else {
          iVar5 = *(int *)(iVar3 + 8);
          iVar3 = *(int *)(iVar3 + 0xc);
        }
        piVar4[2] = iVar5;
        piVar4[3] = iVar3;
        piVar4 = piVar4 + 6;
      }
      piVar6 = piVar6 + 1;
    }
  }
  return 0;
}

/* ref: FUN_008848e0 */
uint F_008848e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8848e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  short * in_EAX;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x20);
  do {
    if ((piVar3[-3] != 0) &&
       (in_EAX = ((short *)GEN_TOP(((piVar3[1] - *piVar3) / 0x54))), in_EAX != (short *)0x0)) {
      for (in_EAX = (short *)*piVar3; in_EAX != (short *)piVar3[1]; in_EAX = in_EAX + 0x2a) {
        if (*in_EAX == (short)param_3) {
          iVar1 = *(int *)(iVar4 * 0x118 + 0x14 + (int)this);
          iVar4 = iVar4 * 0x118 + 8 + (int)this;
          if (iVar1 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = F_00974a60(*(undefined * PTR32 *)(iVar4 + 8),param_1,param_2,param_3,iVar4,iVar1);
            *(uint *)(iVar4 + 0xfc) = ((char)uVar2 == '\0') + 0x12;
          }
          *(uint *)((int)this + 0x238) = ((char)uVar2 != '\0') + 0x13;
          return uVar2;
        }
      }
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 0x46;
  } while (iVar4 < 2);
  return (uint)in_EAX & 0xffffff00;
}

/* ref: FUN_00884990 */
uint F_00884990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x884990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x238) = 0x15;
  uVar1 = F_008837e0(*(undefined * PTR32 *)this,param_1);
  return uVar1;
}

/* ref: FUN_008849b0 */
byte F_008849b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8849b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  byte bVar4;
  int iVar5;
  
  iVar5 = 0;
  piVar1 = (int *)((int)this + 0x34);
  do {
    if ((piVar1[-8] != 0) && (*piVar1 != 0)) {
      for (piVar3 = *(int * PTR32 *)*piVar1; piVar3 != ((int *)GEN_TOP(((undefined4 *)*piVar1)[1]));
          piVar3 = piVar3 + 1) {
        if ((*(int *)(*piVar3 + 8) == param_2) && (*(int *)(*piVar3 + 0xc) == param_3)) {
          iVar5 = iVar5 * 0x118 + 8 + (int)this;
          if (*(int *)(iVar5 + 0xc) == 0) {
            bVar4 = 0;
          }
          else {
            uVar2 = F_00974ae0(*(undefined * PTR32 *)(iVar5 + 8),param_1,param_2,param_3,param_4,iVar5,
                                 *(int *)(iVar5 + 0xc));
            bVar4 = (byte)uVar2;
            *(uint *)(iVar5 + 0xfc) = (bVar4 == 0) + 0x15;
            if (bVar4 != 0) {
              F_0090e260((undefined *)(iVar5 + 200),param_4);
            }
          }
          *(uint *)((int)this + 0x238) = (bVar4 != 0) + 0x16;
          return bVar4;
        }
      }
    }
    iVar5 = iVar5 + 1;
    piVar1 = piVar1 + 0x46;
    if (1 < iVar5) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00884a80 */
uint F_00884a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x884a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  ulonglong uVar4;
  
  iVar3 = 0;
  this_00 = (undefined *)((int)this + 8);
  do {
    uVar4 = F_0090c230(param_1);
    bVar1 = F_008846f0(this_00,(int)uVar4,(int)(uVar4 >> 0x20));
    if (bVar1 != 0) {
      uVar2 = F_00783440((undefined *)(iVar3 * 0x118 + 8 + (int)this),param_1);
      *(uint *)((int)this + 0x238) = ((char)uVar2 != '\0') + 0x19;
      return uVar2;
    }
    iVar3 = iVar3 + 1;
    this_00 = (undefined *)((int)this_00 + 0x118);
  } while (iVar3 < 2);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00884af0 */
uint F_00884af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x884af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  int iVar4;
  undefined * this_00;
  
  iVar4 = 0;
  this_00 = (undefined *)((int)this + 8);
  do {
    bVar2 = F_008846f0(this_00,param_2,param_3);
    if (bVar2 != 0) {
      iVar1 = *(int *)(iVar4 * 0x118 + 0x14 + (int)this);
      iVar4 = iVar4 * 0x118 + 8 + (int)this;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = F_00974c70(*(undefined * PTR32 *)(iVar4 + 8),param_1,param_2,param_3,param_4,iVar4,iVar1);
        *(uint *)(iVar4 + 0xfc) = ((char)uVar3 == '\0') + 0x1b;
      }
      *(uint *)((int)this + 0x238) = ((char)uVar3 != '\0') + 0x1c;
      return uVar3;
    }
    iVar4 = iVar4 + 1;
    this_00 = (undefined *)((int)this_00 + 0x118);
  } while (iVar4 < 2);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_00884bb0 */
uint F_00884bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x884bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00882980(*(undefined * PTR32 *)this,*(undefined4 *)(param_1 + 0x108),param_2,param_3,param_4);
  *(undefined4 *)((int)this + 0x238) = 0x2a;
  return uVar1;
}

/* ref: FUN_00884bf0 */
uint F_00884bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x884bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  undefined * this_00;
  int iVar3;
  
  this_00 = (undefined *)((int)this + 8);
  iVar3 = 0;
  while ((((piVar2 = (int *)F_00884650(this_00,param_1,param_2), piVar2 == (int *)0x0 ||
           (iVar1 = *piVar2, iVar1 == 0)) || (*(int *)(iVar1 + 8) != piVar2[2])) ||
         (*(int *)(iVar1 + 0xc) != piVar2[3]))) {
    iVar3 = iVar3 + 1;
    this_00 = (undefined *)((int)this_00 + 0x118);
    if (1 < iVar3) {
      return 0;
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00884c40 */
uint F_00884c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x884c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  short * psVar1;
  uint uVar2;
  
  psVar1 = *(short * PTR32 *)((int)this + param_1 * 0x118 + 0x20);
  uVar2 = 0;
  while( true ) {
    if (psVar1 == *(short * PTR32 *)((int)this + param_1 * 0x118 + 0x24)) {
      return 0xffffffff;
    }
    if (*psVar1 == (short)param_2) break;
    psVar1 = psVar1 + 0x2a;
    uVar2 = uVar2 + 1;
  }
  return uVar2 & 0xffff;
}

/* ref: Client::UI2::Agent::AgentSupportMain::vf2 */
uint F_00884c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x884c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined * pvVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined * pAVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*(int *)(this + 0xc) == 0) {
    pvVar1 = (undefined *)F_00406b90(0xe08,0,0);
    if (pvVar1 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00469dd0(pvVar1);
    }
    *(uint *)(this + 0xc) = uVar2;
  }
  if ((*(int *)(this + 8) == 0) && (*(undefined * PTR32 *)(this + 0xc) != (undefined *)0x0)) {
    F_0043c660(*(undefined * PTR32 *)(this + 0xc));
    if (*(int *)(this + 0x28) == 0) {
      puVar3 = (undefined4 *)F_00406b90(0x10,0,0);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      *(undefined4 * PTR32 *)(this + 0x28) = puVar3;
    }
    uVar10 = 4;
    uVar9 = 0;
    uVar8 = 0;
    uVar6 = 0;
    *(undefined4 *)(this + 0x2c) = 0;
    uVar5 = 0;
    uVar4 = 0x7b;
    pAVar7 = this;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = F_008668b0(pvVar1,uVar4,uVar5,uVar6,pAVar7,uVar8,uVar9,uVar10);
    *(undefined4 *)(this + 0x30) = 0;
    *(uint *)(this + 8) = uVar2;
    this[0x34] = (undefined1)0x1;
    return uVar2;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentSupportSubList::vf16 */
uint F_00884d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x884d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &REFG(undefined, 0x10be5b7);
  }
  uVar1 = F_0042e430(this + 0x10,param_1);
  if (*(int *)(this + 0xc) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    uVar1 = *(uint *)(uVar1 + 0x150);
    *(uint *)(this + 0xc) = uVar1;
  }
  if (*(int *)(this + 8) == 0) {
    uVar8 = 4;
    uVar7 = 0;
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0x7d;
    pAVar5 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = F_008668b0(this_00,uVar2,uVar3,uVar4,pAVar5,uVar6,uVar7,uVar8);
    *(uint *)(this + 8) = uVar1;
    *(undefined2 *)(this + 0x6c) = 0x100;
    if (*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) != (undefined *)0x0) {
      uVar1 = F_0090d1c0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),this + 0x10);
    }
  }
  return uVar1;
}

/* ref: FUN_00885070 */
uint F_00885070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x885070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char * pcVar1;
  undefined * this_00;
  uint uVar2;
  uint * this_01;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  undefined * pvVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(char * PTR32 *)(gen_frame + 0x1c)) = "";
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
  (*(char * PTR32 *)(gen_frame + 0x24)) = "";
  if (*(char *)(param_1 + 0xa8) == '\0') {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
    (*(char * PTR32 *)(gen_frame + 0xc)) = "";
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
    (*(char * PTR32 *)(gen_frame + 0x14)) = "";
    if (*(int *)((int)this + 0x10) == 1) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
    else if (*(int *)((int)this + 0x10) == 3) {
      *(undefined4 *)((int)this + 0x20) = 1;
    }
  }
  else {
    pcVar1 = (char *)F_0042a990(param_1);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
    (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar1;
    pcVar1 = (char *)F_0042a990(param_1 + 0x54);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
    (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar1;
  }
  uVar10 = 4;
  uVar9 = 0;
  uVar8 = 0;
  puVar6 = &(*(undefined4 *)(gen_frame + 0x0));
  uVar5 = 7;
  uVar4 = 0x7e;
  pvVar7 = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_008668b0(this_00,uVar4,uVar5,puVar6,pvVar7,uVar8,uVar9,uVar10);
  *(uint *)((int)this + 8) = uVar2;
  this_01 = &(*(uint *)(gen_frame + 0x38));
  iVar3 = 6;
  do {
    this_01 = this_01 + -2;
    uVar2 = F_005a2670(this_01);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: FUN_008851a0 */
uint F_008851a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8851a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * pvVar1;
  uint uVar2;
  undefined * this_00;
  uint * this_01;
  int iVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  uVar8 = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 9;
  uVar6 = 0;
  uVar5 = 0x11d0;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar1,uVar5,uVar6,uVar8);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x1c)) = uVar2;
  uVar6 = 0;
  uVar5 = 0x11d1;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar1,uVar5,uVar6,uVar8);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
  (*(uint *)(gen_frame + 0x24)) = uVar2;
  uVar2 = F_0042a990(param_1 + 0x60);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(uint *)(gen_frame + 0xc)) = uVar2;
  uVar2 = F_0042a990(param_1 + 0x11c);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  uVar9 = 4;
  uVar7 = 0;
  uVar8 = 0;
  puVar4 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  uVar6 = 7;
  uVar5 = 0x7e;
  pvVar1 = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_008668b0(this_00,uVar5,uVar6,puVar4,pvVar1,uVar8,uVar7,uVar9);
  *(uint *)((int)this + 8) = uVar2;
  this_01 = &(*(uint *)(gen_frame + 0x38));
  iVar3 = 6;
  do {
    this_01 = this_01 + -2;
    uVar2 = F_005a2670(this_01);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: FUN_008852c0 */
uint F_008852c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8852c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int * piVar4;
  uint * puVar5;
  undefined * pvVar6;
  undefined * this_00;
  int * piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint * this_01;
  int iVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(uint *)(gen_frame + 0x4)) = (*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8)) / 0x58;
  if (5 < (int)(*(uint *)(gen_frame + 0x4))) {
    (*(uint *)(gen_frame + 0x4)) = 5;
  }
  F_0042cbc0(((undefined1 *)(gen_frame + 0x14)),param_1);
  F_0042dc00(((undefined1 *)(gen_frame + 0x14)),0xd);
  uVar3 = F_00560910(*(undefined4 *)(param_1 + 0xb0));
  F_0042e370(((undefined1 *)(gen_frame + 0x14)),uVar3);
  uVar1 = *(ushort *)(param_1 + 0xb6);
  uVar2 = *(ushort *)(param_1 + 0xb4);
  piVar4 = (int *)F_0043c6b0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))));
  iVar9 = *piVar4;
  iVar12 = piVar4[1] - iVar9 >> 0x1f;
  (*(uint *)(gen_frame + 0xc)) = 0;
  if ((piVar4[1] - iVar9) / 0x68 + iVar12 != iVar12) {
    iVar12 = 0;
    do {
      if ((uint)uVar1 == *(uint *)(iVar12 + 0x54 + iVar9)) {
        F_0042dc00(((undefined1 *)(gen_frame + 0x14)),0xd);
        F_0042e360(((undefined1 *)(gen_frame + 0x14)),*piVar4 + iVar12);
        iVar9 = *piVar4;
        iVar10 = *(int *)(iVar12 + 0x5c + iVar9) - *(int *)(iVar12 + 0x58 + iVar9);
        piVar7 = (int *)(iVar12 + 0x58 + iVar9);
        iVar9 = iVar10 >> 0x1f;
        if (iVar10 / 0x58 + iVar9 != iVar9) {
          (*(int *)(gen_frame + 0x8)) = 0;
          uVar3 = 0;
          do {
            if ((uint)uVar2 == *(uint *)((*(int *)(gen_frame + 0x8)) + 0x54 + *piVar7)) {
              F_0042dc00(((undefined1 *)(gen_frame + 0x14)),0xd);
              F_0042e360(((undefined1 *)(gen_frame + 0x14)),*(int *)(iVar12 + 0x58 + *piVar4) + (*(int *)(gen_frame + 0x8)));
            }
            iVar9 = *piVar4;
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x58;
            piVar7 = (int *)(iVar12 + 0x58 + iVar9);
            uVar3 = uVar3 + 1;
          } while (uVar3 < (uint)((*(int *)(iVar12 + 0x5c + iVar9) - *(int *)(iVar12 + 0x58 + iVar9)
                                  ) / 0x58));
        }
      }
      iVar9 = *piVar4;
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
      iVar12 = iVar12 + 0x68;
    } while ((*(uint *)(gen_frame + 0xc)) < (uint)((piVar4[1] - iVar9) / 0x68));
  }
  uVar11 = (*(uint *)(gen_frame + 0x4)) + 7;
  uVar15 = 0;
  uVar3 = F_00404270();
  uVar8 = -(uint)((int)((ulonglong)uVar11 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar11 * 8);
  puVar5 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar8) | uVar8 + 4,0,uVar3,uVar15);
  if (puVar5 == (uint *)0x0) {
    this_01 = (uint *)0x0;
  }
  else {
    iVar9 = (*(uint *)(gen_frame + 0x4)) + 6;
    this_01 = puVar5 + 1;
    *puVar5 = uVar11;
    puVar5 = this_01;
    for (; -1 < iVar9; iVar9 = iVar9 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
    }
  }
  F_005a2710(this_01,3);
  this_01[1] = 4;
  F_005a2710(this_01 + 6,6);
  this_01[7] = (uint)"";
  uVar16 = 0;
  uVar14 = 0;
  uVar15 = 0x11b2;
  pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043bd00(pvVar6,uVar15,uVar14,uVar16);
  F_005a2710(this_01 + 8,6);
  this_01[9] = uVar3;
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
  F_005a2710(this_01 + 2,6);
  this_01[3] = uVar3;
  uVar3 = F_0042a990(param_1 + 0x54);
  F_005a2710(this_01 + 4,6);
  this_01[5] = uVar3;
  F_005a2710(this_01 + 10,3);
  this_01[0xb] = (*(uint *)(gen_frame + 0x4));
  if ((*(uint *)(gen_frame + 0x4)) == 0) {
    uVar16 = 0;
    uVar14 = 0;
    uVar15 = 0x11cc;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = F_0043bd00(pvVar6,uVar15,uVar14,uVar16);
    F_005a2710(this_01 + 0xc,6);
    this_01[0xd] = uVar3;
  }
  else if (0 < (int)(*(uint *)(gen_frame + 0x4))) {
    (*(uint *)(gen_frame + 0xc)) = 0;
    puVar5 = this_01 + 0xc;
    do {
      uVar3 = F_0042a990(*(int *)(param_1 + 0xb8) + (*(uint *)(gen_frame + 0xc)));
      F_005a2710(puVar5,6);
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 0x58;
      puVar5[1] = uVar3;
      puVar5 = puVar5 + 2;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
    } while ((*(uint *)(gen_frame + 0x4)) != 0);
  }
  piVar4 = *(int * PTR32 *)((int)this + 4);
  if (*(int *)((int)this + 8) == 0) {
    uVar17 = 4;
    uVar16 = 0;
    uVar14 = 0;
    uVar15 = 0x7e;
    puVar5 = this_01;
    pvVar6 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4)));
    uVar3 = F_008668b0(this_00,uVar15,uVar11,puVar5,pvVar6,uVar14,uVar16,uVar17);
    *(uint *)((int)this + 8) = uVar3;
  }
  else {
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4)));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 8),uVar11,this_01);
  }
  uVar3 = this_01[-1];
  puVar5 = this_01 + uVar3 * 2;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    puVar5 = puVar5 + -2;
    F_005a2670(puVar5);
  }
  F_00406b30(this_01 + -1);
  uVar13 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar13;
}

/* ref: Client::UI2::Agent::AgentSupportSubEdit::vf19 */
uint F_00885650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x885650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  undefined * pAVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  ((uint *)(gen_frame + 0x8))[8] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*(int *)(this + 0xc) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(uVar2 + 0x150);
  }
  uVar2 = 0;
  *(int *)(this + 0x10) = param_1;
  *(int *)(this + 0x14) = param_2;
  *(undefined4 *)(this + 0x30) = 0;
  if (*(int *)(this + 8) == 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    if (param_1 == 4) {
      *(undefined4 *)(this + 0x10) = 5;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      uVar10 = 4;
      (*(int *)(gen_frame + 0x4)) = 5;
      uVar9 = 0;
      uVar8 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x0));
      uVar5 = 1;
      uVar4 = 0x7f;
      pAVar7 = this;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      uVar2 = F_008668b0(pvVar3,uVar4,uVar5,puVar6,pAVar7,uVar8,uVar9,uVar10);
      *(uint *)(this + 8) = uVar2;
      *(undefined4 *)(this + 0x18) = 1;
      *(undefined4 *)(this + 0x24) = 0;
      *(undefined4 *)(this + 0x28) = 0;
      F_007e7030(this,0,0,this + 0x1c,this + 0x20);
    }
    else if (param_1 == 7) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      uVar10 = 4;
      uVar9 = 0;
      uVar8 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x0));
      (*(int *)(gen_frame + 0x4)) = param_1;
      uVar5 = 1;
      uVar4 = 0x7f;
      pAVar7 = this;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      uVar2 = F_008668b0(pvVar3,uVar4,uVar5,puVar6,pAVar7,uVar8,uVar9,uVar10);
      *(uint *)(this + 8) = uVar2;
      ((uint *)(gen_frame + 0x8))[2] = 20000;
      ((uint *)(gen_frame + 0x8))[3] = 20000;
      ((uint *)(gen_frame + 0x8))[4] = 0x4e21;
      ((uint *)(gen_frame + 0x8))[5] = 0x4e21;
      ((uint *)(gen_frame + 0x8))[0] = 0x45;
      ((uint *)(gen_frame + 0x8))[1] = 0x1ab;
      ((uint *)(gen_frame + 0x8))[6] = 0x4e22;
      ((uint *)(gen_frame + 0x8))[7] = 0x4e22;
      uVar2 = ((uint *)(gen_frame + 0x8))[param_2 * 2];
      uVar1 = ((uint *)(gen_frame + 0x8))[param_2 * 2 + 1];
      *(undefined4 *)(this + 0x18) = 2;
      *(uint *)(this + 0x1c) = uVar2;
      *(uint *)(this + 0x20) = uVar1;
    }
    uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)));
  }
  F_00c47745(((uint *)(gen_frame + 0x8))[8] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentSupportSubEdit::vf16 */
unsigned int F_00885790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x885790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*(int *)(this + 0xc) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(uVar1 + 0x150);
  }
  *(undefined4 *)(this + 0x10) = 4;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  if (*(int *)(this + 8) == 0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    uVar8 = 4;
    uVar7 = 0;
    uVar6 = 0;
    puVar4 = &(*(undefined4 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x8)) = 4;
    uVar3 = 1;
    uVar2 = 0x7f;
    pAVar5 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = F_008668b0(this_00,uVar2,uVar3,puVar4,pAVar5,uVar6,uVar7,uVar8);
    *(uint *)(this + 8) = uVar1;
    *(undefined4 *)(this + 0x18) = 0;
    *(uint *)(this + 0x1c) = (uint)*(ushort *)(param_1 + 0xb6);
    uVar1 = *(uint *)(param_1 + 0xb4) & 0xffff;
    *(uint *)(this + 0x20) = uVar1;
    F_007e70d0(this,*(undefined4 *)(this + 0x1c),uVar1,this + 0x24,this + 0x28);
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentSupportSubEdit::vf5 */
unsigned int F_00885840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x885840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  if ((*(int *)(this + 8) != 0) && (*(int *)(this + 0x18) != -1)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,*(undefined4 *)(this + 8));
    if (((char)uVar2 != '\0') &&
       (((*(uint *)(this + 0x18) < 4 && (*(int *)(this + 0xc) != 0)) &&
        (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))), this_00 != (undefined *)0x0)))) {
      uVar2 = F_004551e0(this_00,*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x20));
      if (*(char *)(uVar2 + 0x5c) != '\0') {
        F_0082d700(this,uVar2);
        *(undefined4 *)(this + 0x18) = 0xffffffff;
      }
    }
  }
  return 0;
}

/* ref: FUN_008858b0 */
uint F_008858b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8858b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  undefined * this_00;
  undefined4 * this_01;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  F_00783ef0(this,((undefined1 *)(gen_frame + 0x4)),param_2);
  this_01 = (undefined4 *)0x0;
  uVar8 = 0;
  uVar2 = F_00404270();
  puVar3 = (undefined4 *)F_00406c00(0x4c,0,uVar2,uVar8);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 9;
    puVar3[1] = 0;
    puVar3[3] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    puVar3[0xd] = 0;
    puVar3[0xf] = 0;
    puVar3[0x11] = 0;
    this_01 = puVar3 + 1;
  }
  uVar8 = *(undefined4 *)((int)this + 0x10);
  F_005a2710(this_01,3);
  this_01[1] = uVar8;
  F_005a2710(this_01 + 2,6);
  this_01[3] = "";
  F_005a2710(this_01 + 4,6);
  this_01[5] = &REFG(undefined, 0x10be666);
  uVar9 = 0;
  uVar6 = 0;
  uVar8 = 0x11b6;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar8,uVar6,uVar9);
  F_005a2710(this_01 + 6,6);
  this_01[7] = uVar2;
  F_005a2710(this_01 + 8,6);
  this_01[9] = param_1;
  uVar9 = 0;
  uVar6 = 0;
  uVar8 = 0x11b7;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar8,uVar6,uVar9);
  F_005a2710(this_01 + 10,6);
  this_01[0xb] = uVar2;
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_005a2710(this_01 + 0xc,6);
  this_01[0xd] = uVar2;
  uVar9 = 0;
  uVar6 = 0;
  uVar8 = 0x11d2;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar8,uVar6,uVar9);
  F_005a2710(this_01 + 0xe,6);
  this_01[0xf] = uVar2;
  uVar9 = 0;
  uVar6 = 0;
  uVar8 = 0x11d3;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar8,uVar6,uVar9);
  F_005a2710(this_01 + 0x10,6);
  uVar10 = 4;
  uVar7 = 0;
  uVar9 = 0;
  this_01[0x11] = uVar2;
  uVar6 = 9;
  uVar8 = 0x7f;
  puVar3 = this_01;
  pvVar4 = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_008668b0(this_00,uVar8,uVar6,puVar3,pvVar4,uVar9,uVar7,uVar10);
  *(uint *)((int)this + 8) = uVar2;
  iVar1 = this_01[-1];
  puVar3 = this_01 + iVar1 * 2;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    puVar3 = puVar3 + -2;
    F_005a2670(puVar3);
  }
  F_00406b30(this_01 + -1);
  uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar5;
}

/* ref: Client::UI2::Agent::AgentCreditPlayer::vf2 */
uint F_00885e60(unsigned int gen_a0)
{
  GEN_ENTER(0x885e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 == '\0') {
    uVar8 = 4;
    uVar7 = 0;
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0xbd;
    pAVar5 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = F_008668b0(this_00,uVar2,uVar3,uVar4,pAVar5,uVar6,uVar7,uVar8);
    *(uint *)(this + 8) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00885ea0 */
uint F_00885ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x885ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint * this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar5 = REFG(undefined4, 0x132722c);
  uVar4 = REFG(undefined4, 0x1327228);
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar6 = *(int *)((int)this + 8);
  uVar2 = 0;
  if (iVar6 == 0) goto LAB_00886004;
  if (*(int *)((int)this + 0xc) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xc),0);
    *(undefined4 *)((int)this + 0xc) = 0;
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar2;
  }
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0x180a;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar3,uVar7,uVar8,uVar9);
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(uint *)(gen_frame + 0xc)) = uVar2;
  if (uVar4 == REFG(undefined4, 0x148a108)) {
    uVar7 = 1;
LAB_00885f6e: ;
    uVar4 = F_005593a0(pvVar3,uVar7);
  }
  else if (uVar4 == REFG(undefined4, 0x1327228)) {
    uVar7 = 3;
    goto LAB_00885f6e;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  if (uVar5 == REFG(undefined4, 0x148a10c)) {
    uVar7 = 2;
LAB_00885f9d: ;
    uVar5 = F_005593a0(pvVar3,uVar7);
  }
  else if (uVar5 == REFG(undefined4, 0x132722c)) {
    uVar7 = 4;
    goto LAB_00885f9d;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = uVar5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  (*(undefined4 *)(gen_frame + 0x24)) = 1;
  uVar4 = F_008668b0(pvVar3,9,4,&(*(undefined4 *)(gen_frame + 0x8)),this,1,iVar6,5);
  this_00 = &(*(uint *)(gen_frame + 0x48));
  iVar6 = 7;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  *(uint *)((int)this + 0xc) = uVar4;
LAB_00886004: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2;
}

/* ref: FUN_00886020 */
uint F_00886020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x886020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 == '\0') {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    uVar8 = 4;
    uVar7 = 0;
    uVar6 = 0;
    puVar4 = &(*(undefined4 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x8)) = param_1;
    uVar3 = 1;
    uVar2 = 0xbe;
    pvVar5 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_008668b0(this_00,uVar2,uVar3,puVar4,pvVar5,uVar6,uVar7,uVar8);
    *(uint *)((int)this + 8) = uVar1;
    uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_00886080 */
uint F_00886080(unsigned int gen_a0)
{
  GEN_ENTER(0x886080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint * this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar5 = REFG(undefined4, 0x132722c);
  uVar4 = REFG(undefined4, 0x1327228);
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar6 = *(int *)((int)this + 8);
  uVar2 = 0;
  if (iVar6 == 0) goto LAB_008861e4;
  if (*(int *)((int)this + 0xc) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xc),0);
    *(undefined4 *)((int)this + 0xc) = 0;
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar2;
  }
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0x180a;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar3,uVar7,uVar8,uVar9);
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(uint *)(gen_frame + 0xc)) = uVar2;
  if (uVar4 == REFG(undefined4, 0x148a108)) {
    uVar7 = 1;
LAB_0088614e: ;
    uVar4 = F_005593a0(pvVar3,uVar7);
  }
  else if (uVar4 == REFG(undefined4, 0x1327228)) {
    uVar7 = 3;
    goto LAB_0088614e;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  if (uVar5 == REFG(undefined4, 0x148a10c)) {
    uVar7 = 2;
LAB_0088617d: ;
    uVar5 = F_005593a0(pvVar3,uVar7);
  }
  else if (uVar5 == REFG(undefined4, 0x132722c)) {
    uVar7 = 4;
    goto LAB_0088617d;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = uVar5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  (*(undefined4 *)(gen_frame + 0x24)) = 1;
  uVar4 = F_008668b0(pvVar3,9,4,&(*(undefined4 *)(gen_frame + 0x8)),this,1,iVar6,5);
  this_00 = &(*(uint *)(gen_frame + 0x48));
  iVar6 = 7;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  *(uint *)((int)this + 0xc) = uVar4;
LAB_008861e4: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentCreditCast::vf2 */
uint F_00886200(unsigned int gen_a0)
{
  GEN_ENTER(0x886200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 == '\0') {
    uVar8 = 4;
    uVar7 = 0;
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0xbf;
    pAVar5 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = F_008668b0(this_00,uVar2,uVar3,uVar4,pAVar5,uVar6,uVar7,uVar8);
    *(uint *)(this + 8) = uVar1;
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCreditEnd::vf2 */
uint F_00886240(unsigned int gen_a0)
{
  GEN_ENTER(0x886240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 == '\0') {
    uVar8 = 4;
    uVar7 = 0;
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0xc0;
    pAVar5 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = F_008668b0(this_00,uVar2,uVar3,uVar4,pAVar5,uVar6,uVar7,uVar8);
    *(uint *)(this + 8) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00886280 */
uint F_00886280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x886280u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int iVar2;
  int * piVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint3 uVar8;
  int iVar9;
  int iVar10;
  int local_c;
  int local_8;
  
  iVar10 = *(*(int * PTR32 *)&gen_args[1]);
  (*(uint * PTR32 *)&gen_args[2]) = ((uint *)GEN_TOP(*(*(uint * PTR32 *)&gen_args[2])));
  if (iVar10 == 0) {
    return (uint)(*(uint * PTR32 *)&gen_args[2]);
  }
  if ((*(uint * PTR32 *)&gen_args[2]) == (uint *)0x0) {
    return 0;
  }
  uVar6 = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
  iVar1 = *(int *)(iVar10 + 0x20);
  iVar9 = *(int *)(iVar1 + 8 + uVar6 * 4);
  iVar2 = *(int *)(iVar1 + 0x14 + uVar6 * 4);
  local_c = *(int *)(iVar1 + 0x18 + uVar6 * 4);
  if (local_c < 0) {
    return uVar6;
  }
  if (iVar9 == 0) {
    uVar6 = F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),0);
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))) = 0;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6a))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0xffffffff;
    if (piVar3 == (int *)0x0) {
      return uVar6;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0);
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) == 0) {
      uVar6 = F_0055a300((undefined *)0x0,0);
      return uVar6;
    }
    uVar6 = F_0055a300(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x70))),0);
    return uVar6;
  }
  if (((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))) == '\0') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) == iVar2)) &&
     (local_c == 0)) {
    return uVar6;
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = iVar9;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = *((undefined4 *)GEN_TOP((*(int *)(iVar10 + 0x20) + 0x10 + uVar6 * 4)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = iVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = (*(int * PTR32 *)&gen_args[1])[1];
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = *((undefined2 *)GEN_TOP((*(int *)(iVar10 + 0x20) + uVar6 * 4)));
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = *((undefined2 *)GEN_TOP((*(int *)(iVar10 + 0x20) + 4 + uVar6 * 4)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = *((undefined4 *)GEN_TOP((*(int *)(iVar10 + 0x20) + 0xc + uVar6 * 4)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) =
       *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[2]) + 0x20))) + (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) * 4)));
  if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) == 0) {
    return uVar6;
  }
  *((undefined4 *)GEN_TOP((*(int *)(iVar10 + 0x20) + 0x18 + uVar6 * 4))) = 0;
  uVar7 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) + 0x20))) + (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e))) * 4)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = uVar7;
  if (*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) == 0) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = uVar7;
  }
  else {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) + 0x20))) + -8 +
          ((uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e))) + (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) * 2) * 4)));
  }
  F_0055ab60(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))),1);
  F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))));
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) = 1;
  F_005848c0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),1);
  (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
  local_8 = -1;
  uVar5 = 0;
  if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) != 0) {
    (*(uint * PTR32 *)&gen_args[2]) = (uint *)0x0;
    do {
      uVar6 = (uint)(ushort)(*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e))) + (short)(*(uint * PTR32 *)&gen_args[2]));
      iVar10 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) + 0x20)));
      iVar1 = *(int *)(iVar10 + 4 + uVar6 * 4);
      iVar10 = *(int *)(iVar10 + uVar6 * 4);
      iVar9 = 0;
      if (0 < iVar1) {
        do {
          F_0057ed60(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(int)(*(int * PTR32 *)&gen_args[1]) + iVar9,iVar10);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar1);
      }
      if (iVar10 == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4)))) {
        local_8 = iVar1;
      }
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + iVar1)));
      (*(uint * PTR32 *)&gen_args[2]) = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[2]) + 2)));
      uVar5 = uVar5 + 1;
    } while (uVar5 < *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))));
  }
  sVar4 = 0;
  if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) < 0) || (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc1))) != '\0')) goto LAB_00886661;
  local_c = 0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) < 1) {
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) < 0) && (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) != 0)) {
      uVar5 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e)));
      do {
        piVar3 = ((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) + 0x20))) + (uint)uVar5 * 4)));
        iVar10 = *piVar3;
        local_8 = piVar3[1];
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) <= iVar10) goto LAB_00886514;
        if ((int)sVar4 == *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) - 1) {
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) = iVar10;
        }
        sVar4 = sVar4 + 1;
        uVar5 = uVar5 + 2;
      } while ((int)sVar4 < (int)(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))));
    }
  }
  else {
    sVar4 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) + -1;
    if (-1 < sVar4) {
      do {
        iVar10 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) + 0x20))) +
                         (uint)(ushort)(*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e))) + sVar4 * 2) * 4)));
        if (iVar10 <= *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4)))) goto LAB_00886514;
        if (sVar4 == 0) {
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) = iVar10;
        }
        sVar4 = sVar4 + -1;
      } while (-1 < sVar4);
    }
  }
LAB_0088651a: ;
  uVar5 = F_0057edb0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))));
  *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xca))) = uVar5;
  if ((int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) < (int)(uint)uVar5) {
    if ((*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) < 0) && (uVar5 != 0)) {
      *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = 0;
    }
  }
  else {
    *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = uVar5 - 1;
  }
  if ((short)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) < 0) {
    F_0055ad50(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),0,0);
  }
  else {
    F_00785090((*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))),(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)))) {
    iVar10 = 0;
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x10c))) = 0;
LAB_00886614: ;
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
    F_00559fb0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),&(*(uint * PTR32 *)&gen_args[2]),&(*(int * PTR32 *)&gen_args[1]));
    uVar7 = 1;
    if (*(char *)(iVar1 + 0x218) != '\0') {
      uVar7 = 3;
    }
    F_005602f0((undefined *)(iVar1 + 0x20c),uVar7,(int)(short)(*(uint * PTR32 *)&gen_args[2]),
                 (int)(short)(*(int * PTR32 *)&gen_args[1]) + (uint)(*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) >> 1) + iVar10);
  }
  else if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c)))) {
    uVar5 = F_0055a030(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))));
    iVar10 = (uint)uVar5 - (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) * local_8;
    uVar5 = F_0055a030(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))));
    sVar4 = uVar5 - (ushort)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) * (short)(*(int * PTR32 *)&gen_args[1]);
    if (iVar10 < 0) {
      sVar4 = sVar4 - (short)iVar10;
      iVar10 = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = 1;
    }
    else {
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = (1 - local_8) - (int)(*(int * PTR32 *)&gen_args[1]);
    }
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
    *(undefined2 *)(iVar1 + 0x10c) = 0;
    *(short *)(iVar1 + 0x10e) = sVar4;
    if (-1 < iVar10) goto LAB_00886614;
  }
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) = 0;
LAB_00886661: ;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) =
       (((uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) - (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3e)))) -
       (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44)))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)));
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6a))) == '\0') {
    uVar8 = (uint3)(byte)(*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3e))) >> 8);
    if ((local_c == 0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) < 0)) {
      iVar10 = CONCAT31(uVar8,1);
    }
    else {
      iVar10 = (uint)uVar8 << 8;
    }
    F_007e7b30((*(undefined * PTR32 *)&gen_args[0]),iVar10);
  }
  uVar6 = F_0082d740((*(undefined * PTR32 *)&gen_args[0]));
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = 0;
  if ((local_c == 1) &&
     (uVar6 = CONCAT22((short)(uVar6 >> 0x10),*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)))),
     *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3e))) <= *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))))) {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = 1;
    F_005609c0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78);
    F_00560990(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))),0x19,0x200);
    uVar6 = F_00592380(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))));
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa1))) = 0;
  }
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6a))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = 0;
  return uVar6;
LAB_00886514: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) = iVar10;
  goto LAB_0088651a;
}

/* ref: FUN_00886700 */
uint F_00886700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x886700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  undefined4 in_ecx;
  uint uVar5;
  
  bVar2 = false;
  F_0055a000(*(undefined * PTR32 *)((int)this + 8),((short *)(gen_frame + 0x4)),((ushort *)(gen_frame + 0x8)));
  sVar1 = (short)((ulonglong)((ushort *)(gen_frame + 0x8))[0] /
                 (ulonglong)(longlong)(int)(uint)*(byte *)((int)this + 0x58));
  sVar3 = *(short *)((int)this + 0x3e) - sVar1;
  if (sVar3 != 0) {
    if (*(int *)((int)this + 0x30) != 0) {
      uVar5 = *(uint *)((int)this + 0x38);
      if (*(uint *)((int)this + 0x2c) < uVar5) {
        uVar4 = *(uint *)((int)this + 0x2c) - (int)sVar3;
        if (uVar5 < uVar4) {
          uVar4 = uVar5;
        }
        *(uint *)((int)this + 0x2c) = uVar4;
      }
    }
    if (*(int *)((int)this + 0x2c) == *(int *)((int)this + 0x38)) {
      *(undefined4 *)((int)this + 0x2c) = 0x7fffffff;
      *(undefined1 *)((int)this + 0xa1) = 1;
    }
    *(short *)((int)this + 0x3e) = sVar1;
    bVar2 = true;
  }
  if (*(short *)((int)this + 0x3c) == ((short *)(gen_frame + 0x4))[0]) {
    if (bVar2) goto LAB_008867a1;
LAB_008867a7: ;
    if ((char)param_2 == '\0') goto LAB_008867dc;
LAB_008867b7: ;
    *(undefined1 *)((int)this + 0xbf) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0x7fffffff;
    *(undefined1 *)((int)this + 0xa1) = 1;
  }
  else {
    if (*(int *)((int)this + 0x2c) == *(int *)((int)this + 0x38)) {
      *(undefined4 *)((int)this + 0x2c) = 0x7fffffff;
      *(undefined1 *)((int)this + 0xa1) = 1;
    }
    *(short *)((int)this + 0x3c) = ((short *)(gen_frame + 0x4))[0];
LAB_008867a1: ;
    if ((char)param_1 == '\0') goto LAB_008867a7;
    if ((char)param_2 != '\0') goto LAB_008867b7;
  }
  F_00784950(this,*(undefined4 *)((int)this + 0x2c),0,param_2,0);
LAB_008867dc: ;
  in_ecx = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
  }
  uVar5 = F_0055a350(in_ecx);
  if (((char)uVar5 != '\0') &&
     ((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa8))) <= *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb0))) ||
      (*(char *)((int)this + 0xa1) != '\0')))) {
    *(undefined1 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0xb8);
  }
  uVar5 = F_007e7d70(this,0);
  return uVar5;
}

/* ref: Client::UI2::AddonYesNo::vf44 */
uint F_00886830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x886830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_0082db50(this,param_1,param_2);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  if (*(int *)(this + 0x184) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,0,this,0,0);
  }
  uVar1 = 0;
  if (*(int *)(this + 0x188) != 0) {
    uVar1 = F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x17,1,this,0,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonYesNo::vf46 */
uint F_008868c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8868c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = F_0082db50(this,param_1,param_2);
    return uVar1;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

/* ref: Client::UI2::AddonListIcon::vf44 */
uint F_008868e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8868e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  undefined * pAVar5;
  float10 fVar6;
  
  if (param_2 != (byte *)0x0) {
    if ((param_2[0x38] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x3c);
    }
    *(undefined4 *)(this + 0x18c) = uVar1;
    pvVar2 = (undefined *)F_0055e320(this);
    if (pvVar2 != (undefined *)0x0) {
      if (((byte)this[0x18c] & 2) == 0) {
        if ((param_2[8] & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)(param_2 + 0xc);
        }
        if ((*param_2 & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(uint *)(param_2 + 4);
        }
        F_0058a320(pvVar2,uVar3,uVar4);
      }
      F_0056e010(pvVar2,(uint)(((byte)*(undefined4 *)(this + 0x18c) & 0x20) != 0x20));
    }
    pvVar2 = (undefined *)F_0055e340(this,0xe);
    *(undefined * PTR32 *)(this + 0x1cc) = pvVar2;
    if (pvVar2 != (undefined *)0x0) {
      F_00584110(pvVar2,&REFG(undefined1, 0x10be67b));
    }
  }
  uVar4 = F_0055e2f0(this,0xd);
  if (((uVar4 == 0) || (uVar4 = F_00559c20(uVar4), uVar4 == 0)) ||
     (uVar3 = F_005613a0(uVar4), uVar3 != 9)) {
    uVar4 = 0;
  }
  *(uint *)(this + 0x19c) = uVar4;
  if (uVar4 != 0) {
    fVar6 = F_00559d80(*(undefined4 *)(uVar4 + 0x70));
    *(short *)(this + 0x198) = (short)(int)fVar6;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,this + 0x194,this + 0x196,0);
  F_0082e720(this,param_1,param_2);
  if (*(int *)(this + 0x19c) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70))),0x21,0,this,0,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_00568380(pvVar2,0x20,2,this,0,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_00568380(pvVar2,0x1f,3,this,0,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_00568380(pvVar2,0x2d,4,this,0,0);
  }
  uVar4 = 0;
  pAVar5 = this + 0x1a4;
  do {
    if (*(int *)pAVar5 == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar5 + 0x70);
    }
    uVar3 = F_00568380(pvVar2,0x17,uVar4 + 100,this,0,0);
    uVar4 = uVar4 + 1;
    pAVar5 = pAVar5 + 4;
  } while (uVar4 < 10);
  return uVar3;
}

/* ref: Client::UI2::AddonListIcon::vf46 */
byte F_00886a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x886a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    bVar1 = F_0082e720(this,param_1,param_2);
    return bVar1;
  }
  return 1;
}

/* ref: Client::UI2::AddonCreditPlayer::vf2 */
unsigned int F_00886ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x886ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int iVar1;
  byte bVar2;
  
  if (*(int *)(this + 0x180) == 2) {
    iVar1 = *(int *)(this + 0x3a0);
    if (iVar1 == 1) {
      if ((short)param_1 == 0xc) {
        if (*(char *)(param_4 + 0x14) == '\0') {
          bVar2 = F_00830620(this,param_4);
          if (bVar2 != 0) {
            F_00557670(param_3,0);
            return 0;
          }
        }
      }
      else if ((short)param_1 == 0x17) {
        F_00557670(param_3,0);
        F_00830850(this,param_2);
        return 0;
      }
    }
    else if (((short)param_1 == 0x41) && (*(char *)(param_4 + 2) == '\x01')) {
      if (iVar1 == 0) {
        F_005b8b40(this);
        *(undefined4 *)(this + 0x3a0) = 1;
        return 0;
      }
      if (iVar1 == 2) {
        *(undefined4 *)(this + 0x3a0) = 3;
      }
    }
  }
  return 0;
}

/* ref: FUN_00886b60 */
uint F_00886b60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x886b60u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  char cVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint local_10;
  short local_c;
  
  uVar7 = (*(int *)((int)param_1 + 0x1bc) - *(int *)((int)param_1 + 0x1b8)) / 0x60;
  bVar2 = true;
  bVar3 = true;
  if (*(uint *)((int)param_1 + 0x430) < uVar7) {
    bVar2 = false;
    do {
      iVar8 = *(int *)((int)param_1 + 0x430) * 0x60 + *(int *)((int)param_1 + 0x1b8);
      iVar9 = (int)*(short *)(iVar8 + 2);
      if (*(uint *)((int)param_1 + 0x438) < (uint)(*(int *)((int)param_1 + 0x434) + iVar9)) break;
      F_008308e0(param_1,iVar8,(uint)(*(int *)((int)param_1 + 0x430) == uVar7 - 1),
                   (*(uint *)((int)param_1 + 0x438) - *(int *)((int)param_1 + 0x434)) - iVar9);
      uVar7 = (*(int *)((int)param_1 + 0x1bc) - *(int *)((int)param_1 + 0x1b8)) / 0x60;
    } while (*(uint *)((int)param_1 + 0x430) < uVar7);
  }
  local_c = (short)(int)(((float10)GEN_TOD((*(ushort *)((int)param_1 + 0x42e) / 0xc))) * (float10)param_2);
  if (local_c < 1) {
    local_c = 1;
  }
  if (*(char *)((int)param_1 + 0x43c) == '\0') {
    if (*(int *)((int)param_1 + 0x440) == 2) {
      sVar4 = 2;
    }
    else {
      if (*(int *)((int)param_1 + 0x440) != 3) goto LAB_00886c7c;
      sVar4 = 4;
    }
    local_c = local_c * sVar4;
  }
  else {
    local_c = 0;
  }
LAB_00886c7c: ;
  local_10 = 0;
  do {
    iVar8 = *((int *)GEN_TOP((local_10 + *(int *)((int)param_1 + 0x3cc))));
    cVar1 = *((char *)GEN_TOP((local_10 + 4 + *(int *)((int)param_1 + 0x3cc))));
    if (iVar8 != 0) {
      bVar3 = false;
      uVar5 = F_00559d90(iVar8);
      uVar5 = uVar5 - local_c;
      F_00559f40(iVar8,(uint)uVar5);
      uVar6 = F_0055a030(iVar8);
      if ((int)(short)uVar5 < (int)-(uint)uVar6) {
        F_00788ec0(param_1,iVar8);
        *((undefined4 *)GEN_TOP((local_10 + *(int *)((int)param_1 + 0x3cc)))) = 0;
      }
      if ((cVar1 != '\0') && ((int)(short)uVar5 <= (int)*(short *)((int)param_1 + 0x42e) / 2)) {
        *(undefined1 *)((int)param_1 + 0x444) = 1;
      }
    }
    local_10 = local_10 + 8;
  } while (local_10 < 0x3a0);
  uVar7 = F_007ebad0(param_1,param_2);
  *(int *)((int)param_1 + 0x438) = *(int *)((int)param_1 + 0x438) + (int)local_c;
  if ((bVar2) && (bVar3)) {
    *(undefined4 *)((int)param_1 + 0x180) = 6;
  }
  return uVar7;
}

/* ref: Client::UI2::AddonHudTargetInfo::vf44 */
uint F_00886d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x886d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  undefined * local_8;
  
  uVar1 = F_0055e2f0(this,1);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 1)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x180) = uVar3;
  uVar1 = F_0055e2f0(this,1);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 1)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x184) = uVar3;
  uVar1 = F_0055e2f0(this,0x10);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 3)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x188) = uVar3;
  uVar1 = F_0055e2f0(this,0xf);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 3)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x18c) = uVar3;
  uVar1 = F_0055e2f0(this,0xe);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 3)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 400) = uVar3;
  uVar1 = F_0055e2f0(this,0x12);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 4)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x194) = uVar3;
  uVar1 = F_0055e2f0(this,0x34);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 8)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x1a0) = uVar3;
  uVar3 = F_0055e2f0(this,0x11);
  if (((uVar3 == 0) || (this_00 = (undefined *)F_00559c20(uVar3), this_00 == (undefined *)0x0)) ||
     (uVar3 = F_005613a0(this_00), uVar3 != 5)) {
    this_00 = (undefined *)0x0;
  }
  *(undefined * PTR32 *)(this + 0x198) = this_00;
  uVar3 = F_00561490(this_00,6);
  *(uint *)(this + 0x19c) = uVar3;
  uVar1 = F_0055e2f0(this,2);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 2)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x1a4) = uVar3;
  F_0055a550(*(undefined4 *)(this + 0x1a0),1);
  if (*(undefined * PTR32 *)(this + 0x198) != (undefined *)0x0) {
    F_005a2870(*(undefined * PTR32 *)(this + 0x198),0);
    F_005a28a0(*(undefined * PTR32 *)(this + 0x198),10000);
  }
  uVar1 = F_0055e2f0(this,3);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 1)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x1a8) = uVar3;
  uVar1 = F_0055e2f0(this,4);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 1)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x1ac) = uVar3;
  uVar1 = F_0055e2f0(this,7);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 3)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x1b0) = uVar3;
  uVar1 = F_0055e2f0(this,9);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 8)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x1b8) = uVar3;
  uVar3 = F_0055e2f0(this,8);
  if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
     (uVar1 = F_005613a0(uVar3), uVar1 != 5)) {
    uVar3 = 0;
  }
  *(uint *)(this + 0x1b4) = uVar3;
  F_0055a550(*(undefined4 *)(this + 0x1b8),1);
  if (*(undefined * PTR32 *)(this + 0x1b4) != (undefined *)0x0) {
    F_005a2870(*(undefined * PTR32 *)(this + 0x1b4),0);
    F_005a28a0(*(undefined * PTR32 *)(this + 0x1b4),10000);
  }
  uVar1 = F_0055e2f0(this,10);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 1)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x1bc) = uVar3;
  uVar1 = F_0055e2f0(this,0xb);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 3)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x1c0) = uVar3;
  uVar1 = F_0055e2f0(this,0xc);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 2)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x1c4) = uVar3;
  uVar1 = F_0055e2f0(this,0xd);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 2)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x1c8) = uVar3;
  uVar1 = F_0055e2f0(this,0x13);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 1)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x1cc) = uVar3;
  uVar1 = F_0055e2f0(this,0x14);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 3)) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x1d0) = uVar3;
  uVar1 = F_0055e2f0(this,0x15);
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar2 = F_00559b70(uVar1), uVar2 == 1)) {
    uVar3 = uVar1;
  }
  local_8 = this + 0x1d8;
  *(uint *)(this + 0x1d4) = uVar3;
  uVar3 = 0;
  do {
    uVar1 = F_0055e2f0(this,uVar3 + 0x16);
    if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
       (uVar2 = F_005613a0(uVar1), uVar2 != 0x10)) {
      uVar1 = 0;
    }
    *(uint *)local_8 = uVar1;
    uVar3 = uVar3 + 1;
    local_8 = local_8 + 4;
  } while (uVar3 < 0x1e);
  this[0xfa] = (undefined1)((byte)this[0xfa] | 0x10);
  F_005a91d0(this,0,8);
  F_005a91d0(this,1,9);
  F_005a91d0(this,0,0x13);
  F_005a91d0(this,1,0x15);
  F_00568380(*(undefined * PTR32 *)(this + 0x1a0),9,0,this,0,0);
  F_00568380(*(undefined * PTR32 *)(this + 0x1a0),6,0,this,0,0);
  F_00568380(*(undefined * PTR32 *)(this + 0x1a0),7,0,this,0,0);
  F_00568380(*(undefined * PTR32 *)(this + 0x1b8),9,1,this,0,0);
  F_00568380(*(undefined * PTR32 *)(this + 0x1b8),6,1,this,0,0);
  uVar3 = F_00568380(*(undefined * PTR32 *)(this + 0x1b8),7,1,this,0,0);
  return uVar3;
}

/* ref: FUN_008871f0 */
unsigned int F_008871f0(unsigned int gen_a0)
{
  GEN_ENTER(0x8871f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  if (piVar2 != *(int * PTR32 *)((int)this + 4)) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0x18,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)((int)this + 4));
  }
  return 0;
}

/* ref: Client::UI2::AddonGrandCompanyBase::vf37 */
unsigned int F_00887230(unsigned int gen_a0)
{
  GEN_ENTER(0x887230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  F_005b0510((undefined *)this);
  piVar1 = *(int * PTR32 *)(this + 0x1a4);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)(this + 0x1a4) + 4))) = *(int *)(this + 0x1a4);
  *(undefined4 *)(this + 0x1a8) = 0;
  if (piVar2 != *(int * PTR32 *)(this + 0x1a4)) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0x18,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(this + 0x1a4));
  }
  return 0;
}

/* ref: Client::UI2::AddonScreenText::vf44 */
uint F_00887280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x887280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  undefined * this_01;
  uint uVar2;
  undefined * pAVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_8;
  
  this_00 = (undefined *)F_0055e2f0(this,2);
  F_0055a300(this_00,0);
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  pAVar3 = this + 0x1d0;
  local_8 = 10;
  do {
    uVar5 = 20000;
    uVar4 = 1;
    uVar1 = F_00568410(this_00);
    uVar1 = F_005a82c0(this + 0x24,uVar1,uVar4,uVar5);
    *(uint *)(pAVar3 + -8) = uVar1;
    *(undefined * PTR32 *)(pAVar3 + -0x50) = this;
    this_01 = (undefined *)F_00559c20(uVar1);
    uVar1 = F_00561490(this_01,2);
    F_00559d70(uVar1);
    uVar1 = F_00561490(this_01,1);
    *(uint *)(pAVar3 + -4) = uVar1;
    uVar1 = F_00561530(this_01,3);
    *(uint *)pAVar3 = uVar1;
    uVar1 = F_00561490(this_01,7);
    if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
       (uVar2 = F_005613a0(uVar1), uVar2 != 0xf)) {
      uVar1 = 0;
    }
    *(uint *)(pAVar3 + 4) = uVar1;
    uVar1 = F_00561490(this_01,4);
    *(uint *)(pAVar3 + 0x14) = uVar1;
    uVar1 = F_00561490(this_01,8);
    *(uint *)(pAVar3 + 8) = uVar1;
    uVar1 = F_00561490(this_01,10);
    *(uint *)(pAVar3 + 0xc) = uVar1;
    uVar1 = F_00561490(this_01,9);
    *(uint *)(pAVar3 + 0x10) = uVar1;
    uVar1 = F_00561490(this_01,6);
    *(uint *)(pAVar3 + 0x18) = uVar1;
    uVar1 = F_00561490(this_01,5);
    *(uint *)(pAVar3 + 0x1c) = uVar1;
    F_0055a300(*(undefined * PTR32 *)(pAVar3 + -8),0);
    uVar1 = F_0055a300(*(undefined * PTR32 *)(pAVar3 + -8),0);
    pAVar3 = pAVar3 + 0x70;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return uVar1;
}

/* ref: Client::UI2::AddonImage::vf44 */
unsigned int F_008873e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8873e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar2 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar2;
  uVar2 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar2;
  uVar2 = F_0055e360(this,2);
  *(uint *)(this + 0x19c) = uVar2;
  F_00559fe0(*(undefined4 *)(this + 0x180),this + 0x1a0,this + 0x1a4);
  piVar1 = *(int * PTR32 *)(this + 400);
  piVar3 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)(this + 400) + 4))) = *(int *)(this + 400);
  *(undefined4 *)(this + 0x194) = 0;
  if (piVar3 != *(int * PTR32 *)(this + 400)) {
    do {
      piVar1 = (int *)*piVar3;
      F_00429760(piVar3,0x14,400);
      piVar3 = piVar1;
    } while (piVar1 != (int *)*(int *)(this + 400));
  }
  return 0;
}

/* ref: Client::UI2::AddonTextAchievementUnlocked::vf37 */
unsigned int F_008874b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8874b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  F_005b0510((undefined *)this);
  piVar1 = *(int * PTR32 *)(this + 0x198);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)(this + 0x198) + 4))) = *(int *)(this + 0x198);
  *(undefined4 *)(this + 0x19c) = 0;
  if (piVar2 != *(int * PTR32 *)(this + 0x198)) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0x18,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(this + 0x198));
  }
  return 0;
}

/* ref: Client::UI2::AddonMainCommand::vf2 */
unsigned int F_008878d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8878d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((short)param_1 == 0x17) {
    F_00557670(param_3,0);
    F_00831570(this,param_2);
  }
  return 0;
}

/* ref: FUN_00887900 */
uint F_00887900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x887900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 * puVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * pvVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int * piVar14;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(int *)(gen_frame + 0x2c)) = param_2;
  puVar1 = (undefined4 *)(param_1 * 0x40 + 0x18c + (int)this);
  (*(undefined4 *)(gen_frame + 0x24)) = param_3;
  (*(uint *)(gen_frame + 0x28)) = param_5;
  bVar3 = F_005610b0(puVar1 + 4);
  if (bVar3 == 0) {
    F_0056c5f0(puVar1 + 4);
  }
  uVar4 = F_0055dcb0();
  uVar4 = *(uint *)(uVar4 + 0x234);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
  F_0059d640(*(undefined * PTR32 *)(puVar1[3] + 0x90),((int)(uVar4 >> 1) <= (int)(short)uVar5) + 0x65);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)puVar1[3];
  uVar4 = F_0055dcb0();
  uVar4 = *(uint *)(uVar4 + 0x234);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
  if ((short)uVar5 < (short)(uVar4 >> 1)) {
    uVar10 = 3;
  }
  else {
    uVar10 = 2;
  }
  uVar5 = F_0055e2f0((*(undefined * PTR32 *)(gen_frame + 0x20)),uVar10);
  uVar4 = 0;
  if (uVar5 != 0) {
    pvVar6 = (undefined *)F_00559c20(uVar5);
    uVar4 = 0;
    if (pvVar6 != (undefined *)0x0) {
      uVar4 = F_005613a0(pvVar6);
      if (uVar4 == 0) goto LAB_008879cb;
    }
  }
  pvVar6 = (undefined *)0x0;
LAB_008879cb: ;
  *puVar1 = (*(undefined4 *)(gen_frame + 0x24));
  if (pvVar6 != (undefined *)0x0) {
    iVar11 = (*(int *)(gen_frame + 0x2c));
    pvVar7 = (undefined *)F_00561530(pvVar6,2);
    F_00584110(pvVar7,iVar11);
    uVar12 = 0;
    uVar10 = (*(undefined4 *)(gen_frame + 0x24));
    pvVar7 = (undefined *)F_00561530(pvVar6,4);
    F_005842e0(pvVar7,uVar10,uVar12);
    if ((*(uint *)(gen_frame + 0x28)) == 0) {
      uVar13 = 0;
      uVar9 = 0;
      uVar12 = 0;
      uVar10 = 0;
      pvVar7 = (undefined *)F_00561530(pvVar6,5);
      F_0057eb30(pvVar7,param_4,uVar10,uVar12,uVar9,uVar13);
    }
    else {
      uVar4 = (*(uint *)(gen_frame + 0x28));
      pvVar7 = (undefined *)F_00561530(pvVar6,5);
      F_00584110(pvVar7,uVar4);
    }
    uVar10 = 0;
    pvVar6 = (undefined *)F_00561550(pvVar6,6);
    F_0055a300(pvVar6,uVar10);
    F_00560760(((int *)(gen_frame + 0x8)));
    ((int *)(gen_frame + 0x8))[0] = (*(int *)(gen_frame + 0x2c));
    bVar3 = *(byte *)(puVar1[3] + 0x13a);
    (*(uint *)(gen_frame + 0x28)) = F_0055dcb0();
    piVar14 = ((int *)(gen_frame + 0x8));
    uVar4 = F_0055e2f0((undefined *)puVar1[3],4);
    uVar4 = F_00590ad0((undefined *)((*(uint *)(gen_frame + 0x28)) + 0xe0),2,(uint)bVar3,uVar4,piVar14);
    if (puVar1[2] == 0) {
      fVar8 = F_0055dfa0(this,1);
      F_0056b4e0(puVar1[3],(float)fVar8);
      (*(uint *)(gen_frame + 0x28)) = F_0078e200(this);
      fVar8 = F_0055dfa0(((undefined4)(uint)(this)),1);
      iVar11 = (int)(fVar8 * (float10)REFG(double, 0x10944b8));
      (*(int *)(gen_frame + 0x2c)) = iVar11;
      ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined * PTR32 *)(gen_frame + 0x20)));
      uVar4 = F_0055dcb0();
      (*(uint *)(gen_frame + 0x1c)) = *(int *)(uVar4 + 0x238);
      uVar4 = ((code *)*(gen_code32 *)(*(int *)puVar1[3] + 0x54))((int *)puVar1[3],1);
      (*(uint *)(gen_frame + 0x18)) = uVar4 & 0xffff;
      uVar2 = *(ushort *)((int)this + 0x184);
      uVar5 = (iVar11 - (uint)uVar2 * (uint)uVar2 * iVar11) * (uint)*(ushort *)((int)this + 0x188);
      (*(uint *)(gen_frame + 0x14)) = uVar5 & 0xffff;
      (*(uint *)(gen_frame + 0x1c)) = (int)(short)((*(ushort *)((int)this + 0x188) * (short)(*(uint *)(gen_frame + 0x28)) * (short)uVar4 -
                              (short)uVar5) + (short)(*(undefined * PTR32 *)(gen_frame + 0x20))) % (int)(*(uint *)(gen_frame + 0x1c)) & 0xffff;
      ((code *)*(gen_code32 *)(*(int *)puVar1[3] + 0x2c))
                ((int *)puVar1[3],(uint)(ushort)(uVar2 * (short)(*(int *)(gen_frame + 0x2c)) * 10 + (short)(*(undefined4 *)(gen_frame + 0x24))),
                 (*(uint *)(gen_frame + 0x1c)));
      F_0055a200(*(undefined4 *)(puVar1[3] + 0x90),0);
      bVar3 = F_005610b0(puVar1 + 4);
      if (bVar3 == 0) {
        (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((int)(short)(*(undefined4 *)(gen_frame + 0x24)) + *(int *)((int)this + 0x184) * (*(int *)(gen_frame + 0x2c)) * 2)));
        (*(float *)(gen_frame + 0x3c)) = (float)((int)(short)(*(uint *)(gen_frame + 0x1c)) + (int)(short)(*(uint *)(gen_frame + 0x14)));
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(undefined4 *)(gen_frame + 0x38)) = 1;
        (*(undefined4 *)(gen_frame + 0x40)) = 5;
        (*(undefined4 *)(gen_frame + 0x44)) = REFG(float, 0x1087f04);
        F_00595110(puVar1 + 4,100,*(undefined4 *)(puVar1[3] + 0x90),&(*(undefined4 *)(gen_frame + 0x30)),3,REFG(float, 0x1088068));
        F_00588f80(puVar1 + 4,0x3d,param_1,this,0);
        F_0058d530(puVar1 + 4);
      }
      puVar1[2] = 1;
      uVar4 = ((code *)*(gen_code32 *)(*(int *)puVar1[3] + 0x14))((int *)puVar1[3],0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar4;
}

/* ref: Client::UI2::AddonCastBar::vf46 */
byte F_00887c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x887c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2);
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9a0(uVar3);
  if ((((uVar2 != 0) && (uVar3 != 0)) && (*(int *)(uVar2 + 0x54) != 0)) &&
     (*(int *)(uVar3 + 0x4c) != 0)) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(uVar2 + 0x54) + 0x20)));
    F_00832870(this,puVar1[5],**((undefined4 * PTR32 *)GEN_TOP((*(int *)(uVar3 + 0x4c) + 0x20))),*puVar1,puVar1[1],
                 puVar1[2],puVar1[3],puVar1[4],puVar1[6]);
  }
  return 1;
}

/* ref: Client::UI2::AddonNaviMap::vf55 */
unsigned int F_00887cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x887cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xfc);
  if (0 < (int)uVar1) {
    *(float *)(this + 0x1c8c) =
         ((float)GEN_TOF(((float10)(uVar1 & 0xffff) / (float10)*(double *)&REFG(undefined, 0x1088118))));
    if ((char)param_1 == '\x01') {
      F_00833040(this,1);
      F_007efab0(this,(uint)((uVar1 & 0xffff0000) == 0x10000));
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonNaviMap::vf38 */
uint F_00887d10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x887d10u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a2370(param_1,param_2);
  if (((*(byte *)((int)param_1 + 0xf9) & 1) != 0) && (*(uint *)((int)param_1 + 0x1c64) < 0x65)) {
    F_00833120(param_1);
    uVar1 = F_007ef9c0(param_1,*(undefined4 *)((int)param_1 + 0x1c64));
  }
  return uVar1;
}

/* ref: Client::UI2::AddonNaviMap::vf44 */
uint F_00887d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x887d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 extraout_var = 0;
  int iVar7;
  uint3 uVar8;
  undefined * pvVar9;
  undefined * pAVar10;
  bool bVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  
  *(undefined4 *)(this + 0xa0) = 0;
  uVar5 = F_0055e2f0(this,2);
  *(uint *)(this + 0xe68) = uVar5;
  *(uint *)(this + 0x184) = uVar5;
  uVar5 = F_0055e2f0(this,0xc);
  *(uint *)(this + 0x1b8) = uVar5;
  this[0x1bc] = (undefined1)((*(uint *)(this + 0xfc) & 0xffff0000) == 0x10000);
  uVar5 = F_0055e2f0(this,6);
  if (((uVar5 == 0) || (uVar5 = F_00559c20(uVar5), uVar5 == 0)) ||
     (uVar6 = F_005613a0(uVar5), uVar6 != 3)) {
    uVar5 = 0;
  }
  *(uint *)(this + 0xe80) = uVar5;
  pvVar9 = (undefined *)0x0;
  if (uVar5 != 0) {
    pvVar9 = *(undefined * PTR32 *)(uVar5 + 0x70);
  }
  F_00568380(pvVar9,0x17,2,this,0,0);
  pvVar9 = (undefined *)0x0;
  if (*(int *)(this + 0xe80) != 0) {
    pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xe80) + 0x70)));
  }
  F_00568380(pvVar9,7,0,this,0,0);
  pvVar9 = (undefined *)0x0;
  if (*(int *)(this + 0xe80) != 0) {
    pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xe80) + 0x70)));
  }
  F_00568380(pvVar9,6,0,this,0,0);
  if (*(undefined * PTR32 *)(this + 0xe80) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0xe80),(uint)(byte)this[0x1bc]);
  }
  uVar5 = F_0055e2f0(this,5);
  if (((uVar5 == 0) || (uVar5 = F_00559c20(uVar5), uVar5 == 0)) ||
     (uVar6 = F_005613a0(uVar5), uVar6 != 1)) {
    uVar5 = 0;
  }
  *(uint *)(this + 0xe84) = uVar5;
  pvVar9 = (undefined *)0x0;
  if (uVar5 != 0) {
    pvVar9 = *(undefined * PTR32 *)(uVar5 + 0x70);
  }
  F_00568380(pvVar9,0x17,3,this,0,0);
  uVar5 = F_0055e2f0(this,4);
  if (uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = F_00559c20(uVar5);
    if ((uVar5 == 0) || (uVar6 = F_005613a0(uVar5), uVar6 != 1)) {
      uVar5 = 0;
    }
  }
  *(uint *)(this + 0xe88) = uVar5;
  if (uVar5 == 0) {
    pvVar9 = (undefined *)0x0;
  }
  else {
    pvVar9 = *(undefined * PTR32 *)(uVar5 + 0x70);
  }
  F_00568380(pvVar9,0x17,4,this,0,0);
  uVar5 = F_0055e360(this,0x17);
  *(uint *)(this + 0xe78) = uVar5;
  uVar5 = F_0055e360(this,0x14);
  *(uint *)(this + 0xe7c) = uVar5;
  uVar5 = F_0055e2f0(this,8);
  uVar5 = F_00559bc0(uVar5);
  *(uint *)(this + 0xe70) = uVar5;
  uVar5 = F_0055e2f0(this,9);
  uVar5 = F_00559bc0(uVar5);
  *(uint *)(this + 0xe74) = uVar5;
  uVar5 = F_0055e2f0(this,0x1a);
  pvVar9 = (undefined *)F_00559bf0(uVar5);
  *(undefined * PTR32 *)(this + 0xe6c) = pvVar9;
  F_00568380(pvVar9,9,1,this,0,0);
  F_00568380(*(undefined * PTR32 *)(this + 0xe6c),8,1,this,0,0);
  F_00568380(*(undefined * PTR32 *)(this + 0xe6c),5,1,this,0,0);
  F_0055a5f0(*(undefined4 *)(this + 0xe6c),1);
  uVar5 = F_0055e2f0(this,0x19);
  uVar5 = F_00559c00(uVar5);
  *(uint *)(this + 0xe8c) = uVar5;
  uVar5 = F_00559c20(uVar5);
  pvVar9 = (undefined *)(uVar5 + 4);
  F_005a82c0(pvVar9,2,100,100);
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this + 0x1d0;
  pAVar10 = this + 0xea4;
  do {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)F_00578f50(pvVar9,2,(*(int *)(gen_frame + 0x10)),100);
    F_0055a300((*(undefined * PTR32 *)(gen_frame + 0x8)),0);
    *(undefined * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)(gen_frame + 0x8));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)F_00559c20((*(undefined * PTR32 *)(gen_frame + 0x8)));
    uVar5 = F_00561490((*(undefined * PTR32 *)(gen_frame + 0x8)),5);
    *(uint *)pAVar10 = uVar5;
    F_0055a3c0(uVar5,0);
    F_0055a4b0(*(uint *)pAVar10,0);
    uVar5 = F_00561550((*(undefined * PTR32 *)(gen_frame + 0x8)),2);
    *(uint *)(pAVar10 + -8) = uVar5;
    uVar5 = F_00561490((*(undefined * PTR32 *)(gen_frame + 0x8)),3);
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x20;
    *(uint *)(pAVar10 + -4) = uVar5;
    (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
    pAVar10 = pAVar10 + 0xc;
  } while ((*(int *)(gen_frame + 0x10)) < 0x65);
  F_005a82c0(pvVar9,3,100,200);
  (*(int *)(gen_frame + 0x10)) = 0;
  pAVar10 = this + 0x1368;
  do {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)F_00578f50(pvVar9,3,(*(int *)(gen_frame + 0x10)),200);
    F_0055a300((*(undefined * PTR32 *)(gen_frame + 0x8)),0);
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)F_00559c20((*(undefined * PTR32 *)(gen_frame + 0x8)));
    *(undefined * PTR32 *)(pAVar10 + -0x10) = (*(undefined * PTR32 *)(gen_frame + 0x8));
    uVar5 = F_00561490((*(undefined * PTR32 *)(gen_frame + 0xc)),7);
    *(uint *)pAVar10 = uVar5;
    F_0055a3c0(uVar5,0);
    F_0055a4b0(*(uint *)pAVar10,0);
    uVar5 = F_00561490((*(undefined * PTR32 *)(gen_frame + 0xc)),1);
    *(uint *)(pAVar10 + -0xc) = uVar5;
    uVar5 = F_00561550((*(undefined * PTR32 *)(gen_frame + 0xc)),4);
    *(uint *)(pAVar10 + -8) = uVar5;
    uVar5 = F_00561490((*(undefined * PTR32 *)(gen_frame + 0xc)),5);
    *(uint *)(pAVar10 + -4) = uVar5;
    (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
    pAVar10 = pAVar10 + 0x14;
  } while ((*(int *)(gen_frame + 0x10)) < 0x65);
  fVar13 = F_00559d80(*(undefined4 *)(this + 0x1364));
  *(float *)(this + 0x1c90) = (float)fVar13;
  uVar3 = F_0055a030(*(undefined4 *)(this + 0xe8c));
  uVar4 = F_0055a020(*(undefined4 *)(this + 0xe8c));
  *(ushort *)(this + 0x1b0) = uVar4 >> 1;
  *(ushort *)(this + 0x1b2) = uVar3 >> 1;
  *(undefined2 *)(this + 0x1b4) = 0x65;
  uVar5 = F_00578f50(pvVar9,2,100,100);
  F_0055a730(uVar5,&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)));
  *(undefined4 *)(this + 0x1a8) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)(this + 0x1ac) = (*(undefined4 *)(gen_frame + 0x0));
  iVar7 = *(int *)(this + 0xe8c);
  uVar3 = *(ushort *)(iVar7 + 0x7c);
  uVar4 = *(ushort *)(iVar7 + 0x7e);
  uVar5 = F_00561490(*(undefined * PTR32 *)(iVar7 + 0x8c),4);
  *(uint *)(this + 0xe90) = uVar5;
  uVar5 = F_00561570(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xe8c) + 0x8c))),4);
  *(uint *)(this + 0xe94) = uVar5;
  F_00572d00(this + 0x1b3c,(uint)uVar3,(uint)uVar4);
  uVar5 = F_0055e360(this,0x18);
  *(uint *)(this + 0xe98) = uVar5;
  *(byte *)(uVar5 + 0x93) = *(byte *)(uVar5 + 0x93) | 4;
  *(undefined * PTR32 *)(this + 0x1b4c) = this;
  F_0055b220(*(undefined * PTR32 *)(this + 0x58),10000,this + 0x1b44);
  uVar5 = F_0055dcb0();
  *(undefined4 *)(this + 0x1b54) = *(undefined4 *)(uVar5 + 4);
  *(undefined * PTR32 *)(this + 0x1b5c) = this;
  F_0055b220(*(undefined * PTR32 *)(this + 0x58),2,this + 0x1b50);
  F_0055a000(*(undefined * PTR32 *)(this + 0xe8c),((ushort *)(gen_frame + 0x18)),((ushort *)(gen_frame + 0x14)));
  *(ushort *)(this + 0x1c98) = ((ushort *)(gen_frame + 0x18))[0] >> 1;
  *(ushort *)(this + 0x1c9a) = ((ushort *)(gen_frame + 0x14))[0] >> 1;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(*(float *)(this + 0x1a8))));
  uVar3 = F_0055a020(*(undefined4 *)(this + 0xe8c));
  *(ushort *)(this + 0x1be) = (uVar3 >> 1) - (short)(int)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(*(float *)(this + 0x1ac))));
  uVar3 = F_0055a030(*(undefined4 *)(this + 0xe8c));
  fVar2 = REFG(float, 0x10928e4);
  fVar15 = REFG(float, 0x1088068);
  *(ushort *)(this + 0x1c0) = (uVar3 >> 1) - (short)(int)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))));
  if (*(float *)(this + 0x1c8c) < fVar15) {
    *(float *)(this + 0x1c8c) = fVar15;
  }
  else if (fVar2 < *(float *)(this + 0x1c8c)) {
    *(float *)(this + 0x1c8c) = fVar2;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)(this + 0x1c8c);
  fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))));
  fVar14 = (float10)*(float *)(this + 0x19c);
  bVar11 = GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13);
  bVar12 = bVar11 || fVar14 == fVar13;
  uVar8 = CONCAT21(extraout_var,bVar12 << 6 | bVar11 << 2 | 2U | !(fVar13 <= fVar14));
  uVar5 = (uint)uVar8 << 8;
  if (bVar11 == bVar12) {
    *(undefined * PTR32 *)(this + 0x19c) = (*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  piVar1 = *(int * PTR32 *)(this + 0xe88);
  if (piVar1 != (int *)0x0) {
    pAVar10 = this + 0x1c8c;
    if ((GEN_ISNAN(fVar2) || GEN_ISNAN(*(float *)pAVar10)) ||
        (fVar2 < *(float *)pAVar10 || fVar2 == *(float *)pAVar10)) {
      iVar7 = (uint)uVar8 << 8;
    }
    else {
      iVar7 = CONCAT31(uVar8,1);
    }
    uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,iVar7);
    fVar15 = REFG(float, 0x1088068);
  }
  piVar1 = *(int * PTR32 *)(this + 0xe84);
  if (piVar1 != (int *)0x0) {
    uVar8 = (uint3)(uVar5 >> 8);
    if (fVar15 < *(float *)(this + 0x1c8c)) {
      iVar7 = CONCAT31(uVar8,1);
    }
    else {
      iVar7 = (uint)uVar8 << 8;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,iVar7);
  }
  F_005a91d0(this,1,0x18);
  F_005a91d0(this,0,0x15);
  F_005a91d0(this,1,0x34);
  uVar5 = F_005a91d0(this,0,0x30);
  return uVar5;
}

/* ref: FUN_00888360 */
uint F_00888360(unsigned int gen_a0)
{
  GEN_ENTER(0x888360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  *(float *)((int)this + 0x1c8c) =
       ((float)GEN_TOF(((float10)*(float *)((int)this + 0x1c8c) + (float10)*(double *)&REFG(undefined, 0x1094878))));
  F_00833040(this,1);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x7c);
  *(uint *)((int)this + 0xfc) =
       (uint)*(byte *)((int)this + 0x1bc) << 0x10 |
       (int)((double)*(float *)((int)this + 0x1c8c) * *(double *)&REFG(undefined, 0x1088118));
  uVar2 = (*pcVar1)(this,1);
  return uVar2;
}

/* ref: FUN_008883b0 */
uint F_008883b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8883b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  *(float *)((int)this + 0x1c8c) =
       ((float)GEN_TOF(((float10)*(float *)((int)this + 0x1c8c) - (float10)*(double *)&REFG(undefined, 0x1094878))));
  F_00833040(this,1);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x7c);
  *(uint *)((int)this + 0xfc) =
       (uint)*(byte *)((int)this + 0x1bc) << 0x10 |
       (int)((double)*(float *)((int)this + 0x1c8c) * *(double *)&REFG(undefined, 0x1088118));
  uVar2 = (*pcVar1)(this,1);
  return uVar2;
}

/* ref: FUN_00888400 */
uint F_00888400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x888400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(float *)((int)this + 0x1c8c) =
       ((float)GEN_TOF(((float10)(int)*(short *)(param_1 + 4) * (float10)*(double *)&REFG(undefined, 0x1094878) +
              (float10)*(float *)((int)this + 0x1c8c))));
  F_00833040(this,1);
  *(uint *)((int)this + 0xfc) =
       (int)((double)*(float *)((int)this + 0x1c8c) * *(double *)&REFG(undefined, 0x1088118)) |
       (uint)*(byte *)((int)this + 0x1bc) << 0x10;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,1);
  return uVar1;
}

/* ref: FUN_00888470 */
uint F_00888470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x888470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00833180(this,(uint)*param_1,(uint)param_1[1]);
  uVar3 = uVar2;
  if (uVar2 != *(uint *)((int)this + 0x1c64)) {
    bVar1 = *(byte *)((int)this + 0x13a);
    uVar3 = F_0055dcb0();
    uVar3 = F_00596cb0((undefined *)(uVar3 + 0xe0),(uint)bVar1,0);
  }
  if (uVar2 != 0xffffffff) {
    uVar3 = F_007ef9c0(this,uVar2);
  }
  *(uint *)((int)this + 0x1c64) = uVar2;
  return uVar3;
}

/* ref: Client::UI2::AddonPartyList::vf47 */
uint F_008884d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8884d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * pvVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  F_007f1240(this,iVar1,uVar2);
  uVar8 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x44)));
  uVar3 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x40)));
  uVar5 = F_0055e2f0(this,10);
  if (uVar5 == 0) {
LAB_00888526: ;
    pvVar6 = (undefined *)0x0;
  }
  else {
    pvVar6 = (undefined *)F_00559c20(uVar5);
    if (pvVar6 == (undefined *)0x0) goto LAB_00888526;
    uVar5 = F_005613a0(pvVar6);
    if (uVar5 != 5) goto LAB_00888526;
  }
  piVar4 = *(int * PTR32 *)(iVar1 + 0x20);
  if (*piVar4 == 1) {
    if ((piVar4[0x1d1] == 0) || (piVar4[7] == 0)) {
LAB_0088854b: ;
      if (pvVar6 == (undefined *)0x0) {
        pvVar7 = (undefined *)0x0;
      }
      else {
        pvVar7 = *(undefined * PTR32 *)((int)pvVar6 + 0x70);
      }
      F_0055a300(pvVar7,1);
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      pvVar7 = (undefined *)F_00561530(pvVar6,2);
      F_0057eb30(pvVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
      F_005a04e0(pvVar6,uVar3,0);
      goto LAB_00888594;
    }
  }
  else if (0 < *piVar4) goto LAB_0088854b;
  if (pvVar6 == (undefined *)0x0) {
    pvVar6 = (undefined *)0x0;
  }
  else {
    pvVar6 = *(undefined * PTR32 *)((int)pvVar6 + 0x70);
  }
  F_0055a300(pvVar6,0);
LAB_00888594: ;
  F_0078fc30(this,iVar1,uVar2);
  F_00833220(this,iVar1,uVar2);
  F_00833840(this,iVar1,uVar2);
  F_007f1420(this,iVar1,uVar2);
  if (this[0x210] != (undefined1)0x0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
    ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this);
  }
  uVar5 = F_007f1530(this,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x794))),
                       *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x798))));
  return uVar5;
}

/* ref: Client::UI2::AddonPartyList::vf56 */
unsigned int F_00888600(unsigned int gen_a0)
{
  GEN_ENTER(0x888600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 AVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined * this_00;
  int iVar5;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2);
  (*(int *)(gen_frame + 0x18)) = *(int *)(uVar2 + 0x10);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9a0(uVar2);
  (*(int *)(gen_frame + 0x1c)) = *(int *)(uVar2 + 0xc);
  (*(int *)(gen_frame + 0x20)) = 0;
  if (0 < *(int *)(this + 0x1fc)) {
    (*(int *)(gen_frame + 0x2c)) = 0;
    (*(int *)(gen_frame + 0x30)) = 0x1c0;
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = this + 0x180;
    do {
      this_00 = *(undefined * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x34));
      (*(int *)(gen_frame + 0x24)) = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 0x50 + *(int *)((*(int *)(gen_frame + 0x18)) + 0x20))));
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = this_00;
      if (((this_00 != (undefined *)0x0) &&
          (uVar2 = F_0055a2d0(*(undefined4 *)((int)this_00 + 0x70)), (char)uVar2 != '\0')) &&
         ((*(int *)(gen_frame + 0x28)) = 0, 0 < (*(int *)(gen_frame + 0x24)))) {
        (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x30));
        do {
          iVar5 = (*(int *)(gen_frame + 0x28));
          uVar2 = F_00561490(this_00,(*(int *)(gen_frame + 0x28)) + 0x13);
          if (uVar2 == 0) {
            uVar2 = 0;
            uVar4 = 0;
          }
          else {
            uVar2 = F_00559c20(uVar2);
            if ((uVar2 == 0) || (uVar3 = F_005613a0(uVar2), uVar3 != 0x10)) {
              uVar2 = 0;
            }
            if (uVar2 == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined4 *)(uVar2 + 0x70);
            }
          }
          uVar3 = F_0055a2d0(uVar4);
          if ((char)uVar3 != '\0') {
            F_00560760(((undefined4 *)(gen_frame + 0x8)));
            uVar4 = *(undefined4 *)(uVar2 + 0x68);
            AVar1 = this[0x13a];
            ((undefined4 *)(gen_frame + 0x8))[0] = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x38)) + *(int *)((*(int *)(gen_frame + 0x1c)) + 0x20))));
            uVar2 = F_0055dcb0();
            F_00590ad0((undefined *)(uVar2 + 0xe0),2,(uint)(byte)AVar1,uVar4,((undefined4 *)(gen_frame + 0x8)));
            iVar5 = (*(int *)(gen_frame + 0x28));
          }
          (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 4;
          (*(int *)(gen_frame + 0x28)) = iVar5 + 1;
          this_00 = (*(undefined * PTR32 *)(gen_frame + 0x14));
        } while (iVar5 + 1 < (*(int *)(gen_frame + 0x24)));
      }
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = (*(undefined * PTR32 *)(gen_frame + 0x34)) + 4;
      (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 0x14;
      (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 0x4c;
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
    } while ((*(int *)(gen_frame + 0x20)) < *(int *)(this + 0x1fc));
  }
  F_00833d80(this,*(undefined4 *)(this + 0x1a0),*((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x20) + 0x774)))
               ,0xf,(*(int *)(gen_frame + 0x1c)),0xa1);
  this[0x210] = (undefined1)0x1;
  return 0;
}

/* ref: Client::UI2::AddonToDoList::vf52 */
byte F_00888790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x888790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = 0;
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 1: ;
    bVar1 = F_00833ec0(this);
    return bVar1;
  case 7: ;
    bVar1 = F_00834220(this);
    break;
  case 8: ;
    bVar1 = F_00834110(this);
    return bVar1;
  case 9: ;
    bVar1 = F_00833f60(this);
    return bVar1;
  case 10: ;
    bVar1 = F_00834030(this);
    return bVar1;
  }
  return bVar1;
}

/* ref: Client::UI2::AddonLimitBreak::vf44 */
uint F_00888800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x888800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_0055e2f0(this,3);
  *(uint *)(this + 400) = uVar1;
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x18c) = uVar1;
  F_0059d670(*(undefined * PTR32 *)(this + 400),0x65);
  F_0059d670(*(undefined * PTR32 *)(this + 0x18c),0x66);
  uVar1 = 0;
  do {
    F_00834660(this,uVar1);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  uVar1 = F_00559cf0(*(undefined4 *)(this + 0x18c));
  if ((short)uVar1 == 0x11) {
    F_0059d640(*(undefined * PTR32 *)(this + 0x18c),0x65);
    uVar1 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x47);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    *(undefined4 *)(this + 0x244) = 0;
  }
  *(undefined2 *)(this + 0x188) = 0;
  uVar1 = F_005a91d0(this,1,0x28);
  return uVar1;
}

/* ref: Client::UI2::AddonMainCross::vf54 */
unsigned int F_008888c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8888c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((byte)this[0xf9] & 1) != 0) {
    F_00835600(this,param_1,param_2,0);
  }
  return 0;
}

/* ref: FUN_008888e0 */
uint F_008888e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8888e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined * pvVar9;
  undefined4 uVar10;
  undefined1 * this_00;
  int iVar11;
  
  uVar7 = *(uint *)((int)this + 0xf4) >> 0x14 & 0xf;
  if ((uVar7 != 3) && (uVar7 != 2)) {
    uVar7 = F_00557670(param_1,0);
    return uVar7;
  }
  cVar2 = (char)param_2[1];
  if ((cVar2 == '\0') || (cVar2 == '\x02')) {
    uVar7 = *param_2;
    if (9 < uVar7 - 1) {
      return uVar7 - 1;
    }
    uVar8 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x888f50) + uVar7 + 3)));
    switch((unsigned int)(uintptr_t)(uVar7)) {
    case 1: ;
      if (cVar2 == '\0') {
        F_007f29a0(this,*(undefined4 *)((int)this + 0x48c),*(undefined4 *)((int)this + 0x490));
        uVar7 = F_00557670(param_1,0);
        return uVar7;
      }
      break;
    case 2: ;
    case 3: ;
      if (cVar2 == '\0') {
        ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,0);
        uVar7 = F_00557670(param_1,0);
        return uVar7;
      }
      break;
    default: ;
      goto switchD_00888953_caseD_4;
    case 7: ;
    case 8: ;
      if ((cVar2 != '\x02') ||
         (((uVar7 != 7 || (*(int *)((int)this + 0x48c) != 0)) &&
          ((uVar7 != 8 || (*(int *)((int)this + 0x48c) != 5)))))) {
        bVar5 = F_005610b0((int)this + 0x3c0);
        if (bVar5 != 0) {
          F_0056c5f0((undefined *)((int)this + 0x3c0));
          F_00588f80((undefined *)((int)this + 0x3c0),0x3d,4,this,0);
        }
        F_00791520(this,1,*(undefined4 *)((int)this + 0x484),100,
                     *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x48c) * 0xc + 0x188))),
                     (int)this + *(int *)((int)this + 0x48c) * 0x30 + 0x29c,0x3d,0,REFG(float, 0x1088068));
        F_0059d670(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + (*(int *)((int)this + 0x48c) * 3 + 99) * 4))) +
                               0x6c))),1);
        F_008350e0(this);
        if (*param_2 == 7) {
          *(int *)((int)this + 0x48c) = *(int *)((int)this + 0x48c) + -1;
        }
        else {
          *(int *)((int)this + 0x48c) = *(int *)((int)this + 0x48c) + 1;
        }
        if ((int)*(uint *)((int)this + 0x48c) < 0) {
          *(undefined4 *)((int)this + 0x48c) = 5;
        }
        else if (5 < *(uint *)((int)this + 0x48c)) {
          *(undefined4 *)((int)this + 0x48c) = 0;
        }
        F_00834cc0(this);
        uVar10 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4 + *(int *)((int)this + 0x490) * 0xc)));
        F_00791520(this,1,*(int *)((int)this + 0x484) -
                            (int)(short)(int)((double)*(float *)((int)this + 0x498) *
                                             *(double *)&REFG(undefined, 0x1088120)),100,
                     *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x48c) * 0xc + 0x188))),
                     (int)this + *(int *)((int)this + 0x48c) * 0x30 + 0x29c,0x3d,0,REFG(float, 0x1088068));
        F_007f2ce0(this,1,uVar10);
        F_0059d670(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + (*(int *)((int)this + 0x48c) * 3 + 99) * 4))) +
                               0x6c))),8);
        uVar7 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar7 + 0x38) + 8))))(*(int * PTR32 *)(uVar7 + 0x38),((undefined1 *)(gen_frame + 0x10)),1);
        this_00 = ((undefined1 *)(gen_frame + 0x10));
LAB_00888f25: ;
        F_005a2670(this_00);
      }
      break;
    case 9: ;
    case 10: ;
      piVar1 = ((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x48c) * 0x14 + 0x1ec)));
      uVar7 = (piVar1[1] - *piVar1) / 0x14;
      (*(uint *)(gen_frame + 0x18)) = uVar7;
      if ((cVar2 != '\x02') ||
         (((*param_2 != 9 || (*(int *)((int)this + 0x490) != 0)) &&
          ((*param_2 != 10 || (*(int *)((int)this + 0x490) != uVar7 - 1)))))) {
        F_0059d670(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4 +
                                        *(int *)((int)this + 0x490) * 0xc))) + 0x6c))),1);
        iVar11 = *(int *)((int)this + 0x490);
        if ((iVar11 == 0) && (*param_2 == 9)) {
LAB_00888be6: ;
          if (uVar7 != 0) {
            iVar11 = 0;
            (*(uint *)(gen_frame + 0x18)) = uVar7;
            do {
              iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4 + iVar11)));
              if (iVar3 == 0) {
                pvVar9 = (undefined *)0x0;
              }
              else {
                pvVar9 = *(undefined * PTR32 *)(iVar3 + 0x70);
              }
              F_0055a300(pvVar9,0);
              iVar11 = iVar11 + 0xc;
              (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) - 1;
            } while ((*(uint *)(gen_frame + 0x18)) != 0);
          }
          if (*param_2 == 9) {
            iVar11 = 1 - uVar7;
            *(uint *)((int)this + 0x490) = uVar7 - 1;
          }
          else {
            iVar11 = uVar7 - 1;
            *(undefined4 *)((int)this + 0x490) = 0;
          }
          iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4)));
          if (iVar3 == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(undefined4 *)(iVar3 + 0x70);
          }
          uVar6 = F_0055a030(uVar10);
          fVar4 = REFG(float, 0x1088068);
          *(int *)((int)this + 0x288) =
               *(int *)((int)this + 0x288) +
               (int)((float10)uVar6 * (float10)*(float *)((int)this + 0x498)) * iVar11;
          F_00791520(this,1,*(undefined4 *)((int)this + 0x288),100,
                       *(undefined4 *)((int)this + 0x28c),(int)this + 0x3c0,0x3d,4,fVar4);
          uVar8 = 0;
          if (uVar7 != 0) {
            (*(uint *)(gen_frame + 0x18)) = 0;
            param_2 = (uint *)0x0;
            do {
              iVar11 = *((int *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4 + (int)param_2)));
              if (iVar11 == 0) {
                pvVar9 = (undefined *)0x0;
              }
              else {
                pvVar9 = *(undefined * PTR32 *)(iVar11 + 0x70);
              }
              F_0055a300(pvVar9,1);
              pvVar9 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4 + (int)param_2))) + 0x6c)));
              cVar2 = *((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x48c) * 0x14 + 0x1ec))) +
                                0x10 + (*(uint *)(gen_frame + 0x18)))));
              if (uVar8 == *(uint *)((int)this + 0x490)) {
                F_0059d640(pvVar9,(-(uint)(cVar2 != '\0') & 0xffffff9d) + 0x65);
              }
              else {
                F_0059d670(pvVar9,(-(uint)(cVar2 != '\0') & 0xfffffffa) + 7);
              }
              param_2 = (uint *)((int)param_2 + 0xc);
              (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) + 0x14;
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar7);
          }
        }
        else if (iVar11 == uVar7 - 1) {
          if (*param_2 == 10) goto LAB_00888be6;
LAB_00888e20: ;
          F_0059d670(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4))) + 0x6c))),1);
          *(int *)((int)this + 0x490) = *(int *)((int)this + 0x490) + -1;
          uVar6 = F_005c0650(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4))));
          fVar4 = REFG(float, 0x1088068);
          *(int *)((int)this + 0x288) =
               *(int *)((int)this + 0x288) +
               (int)((float10)uVar6 * (float10)*(float *)((int)this + 0x498));
          F_00791520(this,1,*(undefined4 *)((int)this + 0x288),100,
                       *(undefined4 *)((int)this + 0x28c),(int)this + 0x3c0,0x3d,4,fVar4);
          if (uVar7 != 0) {
            iVar11 = 0;
            param_2 = (uint *)0x0;
            uVar7 = 0;
            do {
              pvVar9 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4 + (int)param_2))) + 0x6c)));
              if (uVar7 == *(uint *)((int)this + 0x490)) {
                F_0059d640(pvVar9,(-(uint)(*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this +
                                                               *(int *)((int)this + 0x48c) * 0x14 +
                                                               0x1ec))) + 0x10 + iVar11))) != '\0') &
                                    0xffffff9d) + 0x65);
              }
              else {
                F_0059d670(pvVar9,(-(uint)(*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this +
                                                               *(int *)((int)this + 0x48c) * 0x14 +
                                                               0x1ec))) + 0x10 + iVar11))) != '\0') &
                                    0xfffffffa) + 7);
              }
              param_2 = (uint *)((int)param_2 + 0xc);
              uVar7 = uVar7 + 1;
              iVar11 = iVar11 + 0x14;
            } while (uVar7 < (*(uint *)(gen_frame + 0x18)));
          }
        }
        else {
          if (*param_2 != 10) goto LAB_00888e20;
          *(int *)((int)this + 0x490) = iVar11 + 1;
          uVar6 = F_005c0650(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4))));
          fVar4 = REFG(float, 0x1088068);
          *(int *)((int)this + 0x288) =
               *(int *)((int)this + 0x288) -
               (int)((float10)uVar6 * (float10)*(float *)((int)this + 0x498));
          F_00791520(this,1,*(undefined4 *)((int)this + 0x288),100,
                       *(undefined4 *)((int)this + 0x28c),(int)this + 0x3c0,0x3d,4,fVar4);
          uVar8 = 0;
          if (uVar7 != 0) {
            iVar11 = 0;
            param_2 = (uint *)0x0;
            do {
              pvVar9 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4 + (int)param_2))) + 0x6c)));
              if (uVar8 == *(uint *)((int)this + 0x490)) {
                F_0059d640(pvVar9,(-(uint)(*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this +
                                                               *(int *)((int)this + 0x48c) * 0x14 +
                                                               0x1ec))) + 0x10 + iVar11))) != '\0') &
                                    0xffffff9d) + 0x65);
              }
              else {
                F_0059d670(pvVar9,(-(uint)(*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this +
                                                               *(int *)((int)this + 0x48c) * 0x14 +
                                                               0x1ec))) + 0x10 + iVar11))) != '\0') &
                                    0xfffffffa) + 7);
              }
              param_2 = (uint *)((int)param_2 + 0xc);
              uVar8 = uVar8 + 1;
              iVar11 = iVar11 + 0x14;
            } while (uVar8 < (*(uint *)(gen_frame + 0x18)));
          }
        }
        uVar7 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar7 + 0x38) + 8))))(*(int * PTR32 *)(uVar7 + 0x38),((undefined1 *)(gen_frame + 0x8)),0);
        this_00 = ((undefined1 *)(gen_frame + 0x8));
        goto LAB_00888f25;
      }
    }
  }
  else {
    if (*param_2 < 7) {
      return uVar7;
    }
    if (10 < *param_2) {
      return uVar7;
    }
  }
  uVar8 = F_00557670(param_1,0);
switchD_00888953_caseD_4: ;
  return uVar8;
}

/* ref: Client::UI2::AddonHudLayoutScreen::vf2 */
uint F_00888f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x888f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = param_1 & 0xffff;
  uVar3 = uVar2 - 3;
  if (uVar2 - 3 < 0xd) {
    uVar3 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x889084) + uVar2 + 1)));
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 3: ;
      uVar3 = F_008360d0(this,param_2,param_4);
      return uVar3;
    case 4: ;
      uVar3 = param_4;
      if (*(char *)(param_4 + 6) == '\0') {
        uVar3 = F_007927b0(this);
        return uVar3;
      }
      break;
    case 5: ;
      if (param_2 == 0x20) {
        uVar3 = F_00791fd0(this,param_4);
        return uVar3;
      }
      uVar3 = F_00792180(this,param_2,param_4);
      return uVar3;
    case 7: ;
      if (*(int *)(this + 0x1a0) == 0) {
        uVar3 = F_0055dcb0();
        *(undefined1 *)(uVar3 + 0x21b) = 0;
        uVar3 = F_005aa060((undefined *)(uVar3 + 0x20c),0,0);
        return uVar3;
      }
      break;
    case 0xf: ;
      if (*(int *)(this + 0x180) != 0) {
        bVar1 = F_0056c800();
        if ((bVar1 == 0) &&
           (bVar1 = F_00792220(this,(uint)*(ushort *)(param_4 + 4),(uint)*(ushort *)(param_4 + 6),
                                 *(uint *)(param_4 + 8)), bVar1 != 0)) {
          *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
          *(undefined1 *)(param_3 + 0x15) = 2;
        }
        bVar1 = F_00a34970(*(undefined * PTR32 *)(param_4 + 8),0x162);
        uVar3 = CONCAT31(extraout_var,bVar1);
        if (bVar1 != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x8c))))(*(int * PTR32 *)(this + 0x180));
          uVar3 = F_00557670(param_3,0);
        }
      }
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonLetterList::vf44 */
uint F_008890a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8890a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  ushort uVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  
  ((uint *)(gen_frame + 0x34))[0xd] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  ((uint *)(gen_frame + 0x34))[0] = param_2;
  F_008375f0(this);
  F_0059dde0(*(undefined * PTR32 *)(this + 0x188),1);
  if (*(int *)(this + 0x184) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
  }
  F_00568380(pvVar2,0x17,0,this,0,0);
  if (*(int *)(this + 0x1ac) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1ac) + 0x70)));
  }
  F_00568380(pvVar2,0x21,3,this,0,0);
  if (*(int *)(this + 0x188) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar2,0x17,1,this,0,0);
  if (*(int *)(this + 0x18c) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar2,0x17,2,this,0,0);
  ((uint *)(gen_frame + 0x34))[2] = 0;
  ((uint *)(gen_frame + 0x34))[3] = 0;
  ((uint *)(gen_frame + 0x34))[5] = 0;
  ((uint *)(gen_frame + 0x34))[6] = 0;
  ((uint *)(gen_frame + 0x34))[8] = 0;
  ((uint *)(gen_frame + 0x34))[9] = 0;
  ((uint *)(gen_frame + 0x34))[0xb] = 0;
  ((uint *)(gen_frame + 0x34))[0xc] = 0;
  ((uint *)(gen_frame + 0x34))[1] = 2;
  ((uint *)(gen_frame + 0x34))[4] = 4;
  ((uint *)(gen_frame + 0x34))[7] = 3;
  ((uint *)(gen_frame + 0x34))[10] = 5;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x794280));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x1ac),&(*(undefined * PTR32 *)(gen_frame + 0x8)),((uint *)(gen_frame + 0x34)) + 1,4,0);
  uVar1 = F_0056d300(*(undefined * PTR32 *)(this + 0x1ac),0);
  iVar4 = 0;
  (*(uint *)(gen_frame + 0x30)) = (uint)uVar1;
  if (uVar1 != 0) {
    do {
      uVar5 = 4;
      pvVar2 = (undefined *)F_0056d250(*(undefined * PTR32 *)(this + 0x1ac),0,iVar4);
      uVar3 = F_00561530(pvVar2,uVar5);
      *(byte *)(uVar3 + 0xfe) = *(byte *)(uVar3 + 0xfe) & 0x7f;
      iVar4 = iVar4 + 1;
    } while ((ushort)iVar4 < (ushort)(*(uint *)(gen_frame + 0x30)));
  }
  uVar3 = F_0055dcb0();
  pvVar2 = (undefined *)(uVar3 + 0xe0);
  F_00560760(((undefined4 *)(gen_frame + 0x18)));
  if ((*(byte *)(((uint *)(gen_frame + 0x34))[0] + 8) & 0xf) == 0) {
    ((undefined4 *)(gen_frame + 0x18))[0] = 0;
  }
  else {
    ((undefined4 *)(gen_frame + 0x18))[0] = *(undefined4 *)(((uint *)(gen_frame + 0x34))[0] + 0xc);
  }
  puVar6 = ((undefined4 *)(gen_frame + 0x18));
  (*(uint *)(gen_frame + 0x30)) = (uint)(byte)this[0x13a];
  uVar3 = F_0055e2f0(this,10);
  F_00590ad0(pvVar2,2,(*(uint *)(gen_frame + 0x30)),uVar3,puVar6);
  if ((*(byte *)(((uint *)(gen_frame + 0x34))[0] + 0x10) & 0xf) == 0) {
    ((undefined4 *)(gen_frame + 0x18))[0] = 0;
  }
  else {
    ((undefined4 *)(gen_frame + 0x18))[0] = *(undefined4 *)(((uint *)(gen_frame + 0x34))[0] + 0x14);
  }
  puVar6 = ((undefined4 *)(gen_frame + 0x18));
  (*(uint *)(gen_frame + 0x30)) = (uint)(byte)this[0x13a];
  uVar3 = F_0055e2f0(this,0xd);
  F_00590ad0(pvVar2,2,(*(uint *)(gen_frame + 0x30)),uVar3,puVar6);
  if ((*(byte *)(((uint *)(gen_frame + 0x34))[0] + 0x18) & 0xf) == 0) {
    ((undefined4 *)(gen_frame + 0x18))[0] = 0;
  }
  else {
    ((undefined4 *)(gen_frame + 0x18))[0] = *(undefined4 *)(((uint *)(gen_frame + 0x34))[0] + 0x1c);
  }
  puVar6 = ((undefined4 *)(gen_frame + 0x18));
  ((uint *)(gen_frame + 0x34))[0] = (uint)(byte)this[0x13a];
  uVar3 = F_0055e2f0(this,0x10);
  F_00590ad0(pvVar2,2,((uint *)(gen_frame + 0x34))[0],uVar3,puVar6);
  F_005a91d0(this,1,0x12);
  F_005a91d0(this,0,0x10);
  F_0056b630(this,0x1ab,7,0,9,0,0);
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0x97ff;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  F_0055e430(this,&(*(uint *)(gen_frame + 0x30)),((uint *)(gen_frame + 0x34)),*(undefined4 *)(this + 0x188));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x24)) + 1)) = 0x40;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x24)) + 2)) = (ushort)(*(uint *)(gen_frame + 0x30));
  (*(undefined4 *)(gen_frame + 0x24)) = CONCAT22((ushort)(*(uint *)(gen_frame + 0x30)),0x4000);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc8e;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x24)) + 0)) = 1;
  (*(undefined4 *)(gen_frame + 0x24)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x24)), 1, 3),1);
  (*(undefined2 *)(gen_frame + 0x28)) = (short)((uint *)(gen_frame + 0x34))[0];
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x24)));
  iVar4 = *(int *)(this + 0x18c);
  F_0055e430(this,((uint *)(gen_frame + 0x34)),&(*(uint *)(gen_frame + 0x30)),iVar4);
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar4 + 0x70);
  }
  uVar1 = F_0055a020(uVar5);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x24)) + 2)) = (short)((uint *)(gen_frame + 0x34))[0] + uVar1;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x24)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x24)) = CONCAT22((short)((uint *)(gen_frame + 0x34))[0] + uVar1,0x4000);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc8d;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x24)) + 0)) = 2;
  (*(undefined4 *)(gen_frame + 0x24)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x24)), 1, 3),2);
  (*(undefined2 *)(gen_frame + 0x28)) = (ushort)(*(uint *)(gen_frame + 0x30));
  uVar3 = F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x24)));
  F_00c47745(((uint *)(gen_frame + 0x34))[0xd] ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar3;
}

/* ref: Client::UI2::AddonLetterViewer::vf44 */
uint F_008893a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8893a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  F_00837760(this);
  if (*(int *)(this + 400) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
  }
  F_00568380(pvVar2,0x17,0,this,0,0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)(this + 0x198) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
  }
  F_00568380(pvVar2,0x17,1,this,0,0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)(this + 0x194) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x194) + 0x70)));
  }
  F_00568380(pvVar2,0x17,2,this,0,0);
  if ((param_2 != 0) &&
     (((*(byte *)(param_2 + 0x68) & 0xf) == 0 || (*(int *)(param_2 + 0x6c) == 0)))) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x28))))(*(int * PTR32 *)(this + 0x198),0);
  }
  F_0055a370(*(undefined4 *)(this + 0x19c),1);
  F_0055a3c0(*(undefined4 *)(this + 0x19c),1);
  F_00568380(*(undefined * PTR32 *)(this + 0x19c),9,3,this,0,0);
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  F_005a91d0(this,1,0x12);
  uVar1 = F_005a91d0(this,0,0x10);
  return uVar1;
}

/* ref: Client::UI2::AddonLinkShell::vf44 */
uint F_00889490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x889490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined * pvVar5;
  int iVar6;
  undefined * pAVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined * pAVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(uint * PTR32 *)(gen_frame + 0x1c)) = param_2;
  F_00837a60(this);
  uVar8 = 0;
  pAVar7 = this + 0xe580;
  (*(uint * PTR32 *)(gen_frame + 0x20)) = (*(uint * PTR32 *)(gen_frame + 0x1c)) + 2;
  do {
    if (*(int *)pAVar7 == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *(undefined * PTR32 *)(*(int *)pAVar7 + 0x70);
    }
    F_00568380(pvVar5,0x17,uVar8,this,0,0);
    uVar12 = 0;
    uVar11 = 0;
    uVar9 = 0xc;
    uVar2 = uVar8;
    pAVar10 = this;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar7 + 0x38))))(*(int * PTR32 *)pAVar7)));
    F_00568380(pvVar5,uVar9,uVar2,pAVar10,uVar11,uVar12);
    if ((*(*(uint * PTR32 *)(gen_frame + 0x20)) & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(uint * PTR32 *)(gen_frame + 0x20))[1];
    }
    pvVar5 = (undefined *)F_00561530(*(undefined * PTR32 *)pAVar7,3);
    F_00584110(pvVar5,uVar2);
    (*(uint * PTR32 *)(gen_frame + 0x20)) = (*(uint * PTR32 *)(gen_frame + 0x20)) + 2;
    uVar8 = uVar8 + 1;
    pAVar7 = pAVar7 + 4;
  } while (uVar8 < 8);
  if (*(int *)(this + 0xe5a0) == 0) {
    pvVar5 = (undefined *)0x0;
  }
  else {
    pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xe5a0) + 0x70)));
  }
  F_00568380(pvVar5,0x17,9,this,0,0);
  F_00584110(*(undefined * PTR32 *)(this + 0xe628),&REFG(undefined, 0x10be7be));
  F_005624c0(*(undefined * PTR32 *)(this + 0xe624),1,1,0);
  if (*(int *)(this + 0xe624) == 0) {
    pvVar5 = (undefined *)0x0;
  }
  else {
    pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xe624) + 0x70)));
  }
  F_00568380(pvVar5,0x21,8,this,0,0);
  if (*(int *)(this + 0xe624) == 0) {
    pvVar5 = (undefined *)0x0;
  }
  else {
    pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xe624) + 0x70)));
  }
  F_00568380(pvVar5,0x1f,8,this,0,0);
  if (*(int *)(this + 0xe624) == 0) {
    pvVar5 = (undefined *)0x0;
  }
  else {
    pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xe624) + 0x70)));
  }
  F_00568380(pvVar5,0x20,8,this,0,0);
  if (*(int *)(this + 0xe624) == 0) {
    pvVar5 = (undefined *)0x0;
  }
  else {
    pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xe624) + 0x70)));
  }
  F_00568380(pvVar5,0x25,8,this,0,0);
  if (*(int *)(this + 0xe624) == 0) {
    pvVar5 = (undefined *)0x0;
  }
  else {
    pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xe624) + 0x70)));
  }
  F_00568380(pvVar5,0x11,8,this,0,0);
  if (*(int *)(this + 0xe624) == 0) {
    pvVar5 = (undefined *)0x0;
  }
  else {
    pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xe624) + 0x70)));
  }
  F_00568380(pvVar5,0x12,8,this,0,0);
  F_0059ead0(*(undefined * PTR32 *)(this + 0xe624),0,0,1);
  iVar6 = 0xe;
  puVar3 = &(*(undefined4 *)(gen_frame + 0x2c));
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + 3;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  ((undefined4 *)(gen_frame + 0x24))[0] = 7;
  (*(undefined4 *)(gen_frame + 0x30)) = 6;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0xd;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xe;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x60)) = 0x12;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0x14;
  (*(undefined4 *)(gen_frame + 0x78)) = 0x17;
  (*(undefined4 *)(gen_frame + 0x84)) = 0x19;
  (*(undefined4 *)(gen_frame + 0x90)) = 0x1b;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0x1c;
  (*(undefined4 *)(gen_frame + 0xa8)) = 0x1d;
  (*(undefined4 *)(gen_frame + 0xb4)) = 0x1e;
  (*(undefined4 *)(gen_frame + 0xc0)) = 9;
  (*(undefined4 *)(gen_frame + 0xcc)) = 2;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x794b60));
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0xe624),&(*(undefined * PTR32 *)(gen_frame + 0xc)),((undefined4 *)(gen_frame + 0x24)),0xf,0);
  if (((*(*(uint * PTR32 *)(gen_frame + 0x1c)) & 0xf) == 0) || ((*(uint * PTR32 *)(gen_frame + 0x1c))[1] < 8)) {
    if ((*(*(uint * PTR32 *)(gen_frame + 0x1c)) & 0xf) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (*(uint * PTR32 *)(gen_frame + 0x1c))[1];
    }
    pvVar5 = *(undefined * PTR32 *)(this + uVar8 * 4 + 0xe580);
    *(undefined * PTR32 *)(this + 0xe630) = pvVar5;
    F_0059dde0(pvVar5,1);
  }
  uVar8 = F_0055dcb0();
  uVar8 = F_0055b990(uVar8);
  iVar6 = *(int *)(uVar8 + 0x3c);
  iVar1 = *(int *)(iVar6 + 0x20);
  if (*(int *)(iVar1 + 0x102c) != 1) {
    *(undefined4 *)(iVar1 + 0x102c) = 1;
    *(undefined1 *)(iVar6 + 0x1d) = 1;
  }
  F_005a91d0(this,1,0xf);
  F_005a91d0(this,0,0xd);
  F_0056b630(this,0x1b3,7,0,9,0,0);
  uVar8 = F_0055dcb0();
  piVar4 = (int *)F_0055b990(uVar8);
  uVar8 = *((uint *)GEN_TOP((*(int *)(*piVar4 + 0x20) + 0x44)));
  if ((uVar8 == 4) || (uVar8 == 5)) {
    uVar9 = 0x65;
    pvVar5 = (undefined *)F_0055e2f0(this,0xd);
    uVar8 = F_0059d670(pvVar5,uVar9);
  }
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return uVar8;
}

/* ref: Client::UI2::AddonLetterEditor::vf44 */
uint F_008897e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8897e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  int iVar6;
  undefined * pAVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  F_00837cd0(this);
  if (*(int *)(this + 400) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
  }
  F_00568380(pvVar4,0x17,0,this,0,0);
  if (*(int *)(this + 0x1a8) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a8) + 0x70)));
  }
  F_00568380(pvVar4,0x17,1,this,0,0);
  if (*(int *)(this + 0x184) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
  }
  F_00568380(pvVar4,0x21,2,this,0,0);
  piVar1 = *(int * PTR32 *)(this + 400);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
  }
  *(uint *)(this + 0xa8) = uVar3;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x28))))(*(int * PTR32 *)(this + 400),0);
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 2;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x795420));
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_00574320(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x88))),&(*(undefined * PTR32 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x1c)),1,0);
  *((undefined1 *)GEN_TOP((*(int *)(this + 0x184) + 0x92))) = 0;
  iVar5 = 0xe;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = this + 0x194;
  (*(int *)(gen_frame + 0x34)) = 5;
  do {
    piVar1 = *(int * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x38));
    piVar1[0x28] = 0x8210;
    F_00568380((undefined *)piVar1[0x1c],0x30,iVar5 + -5,this,0,0);
    F_00568380((undefined *)piVar1[0x1c],0x34,iVar5,this,0,0);
    F_00568380((undefined *)piVar1[0x1c],0x2d,iVar5 + -10,this,0,0);
    pcVar2 = *(gen_code32 *)(*piVar1 + 0x3c);
    *(byte *)((int)piVar1 + 0xaa) = *(byte *)((int)piVar1 + 0xaa) | 2;
    uVar11 = 0;
    uVar10 = 0;
    uVar8 = 0x11;
    iVar9 = iVar5;
    pAVar7 = this;
    pvVar4 = ((undefined *)GEN_TOP((*pcVar2)(piVar1)));
    F_00568380(pvVar4,uVar8,iVar9,pAVar7,uVar10,uVar11);
    uVar11 = 0;
    uVar10 = 0;
    uVar8 = 0x12;
    iVar9 = iVar5;
    pAVar7 = this;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
    F_00568380(pvVar4,uVar8,iVar9,pAVar7,uVar10,uVar11);
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)(gen_frame + 0x38)) + 4;
    iVar5 = iVar5 + 1;
    (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + -1;
  } while ((*(int *)(gen_frame + 0x34)) != 0);
  if (param_2 != (byte *)0x0) {
    if ((*param_2 & 0xf) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_2 + 4);
    }
    F_005b2fe0(*(undefined * PTR32 *)(this + 0x188),uVar8);
  }
  *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x2fc))) = this;
  if (param_2 != (byte *)0x0) {
    if ((param_2[8] & 0xf) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_2 + 0xc);
    }
    F_005b2fe0(*(undefined * PTR32 *)(this + 0x18c),uVar8);
  }
  if (*(int *)(this + 0x18c) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar4,0xc,3,this,0,0);
  iVar5 = *(int *)(this + 0x18c);
  *(undefined * PTR32 *)(iVar5 + 0x144) = this;
  *(gen_code32 *)(iVar5 + 0x148) = ((code *)REFP(0x7f5cf0));
  *(undefined4 *)(iVar5 + 0x14c) = 0;
  *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x2fc))) = this;
  F_00563480(*(undefined * PTR32 *)(this + 0x188),0x93,&REFG(undefined, 0x10c1764));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x28))))(*(int * PTR32 *)(this + 0x188),0);
  uVar8 = 0;
  if (*(int *)(this + 0x188) != 0) {
    uVar8 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_0055a3c0(uVar8,0);
  F_005a1840(*(undefined * PTR32 *)(this + 0x188),1);
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b990(uVar3);
  iVar5 = *(int *)(uVar3 + 0x44);
  (*(int *)(gen_frame + 0x2c)) = iVar5;
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9a0(uVar3);
  (*(int *)(gen_frame + 0x28)) = *(int *)(uVar3 + 0x3c);
  iVar9 = *((int *)GEN_TOP((*(int *)(iVar5 + 0x20) + 0x1900)));
  iVar5 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
  if (0 < iVar9) {
    iVar6 = 0;
    (*(int *)(gen_frame + 0x34)) = 0x1c;
    pAVar7 = this + 0x1b0;
    (*(int *)(gen_frame + 0x30)) = iVar9;
    do {
      if (((byte)*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + *(int *)((*(int *)(gen_frame + 0x2c)) + 0x20)))) & 0x81) == 0x81) {
        *(int *)(pAVar7 + -4) = iVar5;
        F_0042e430(pAVar7,*((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x28)) + 0x20) + iVar6))));
        iVar5 = (int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 1;
        (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)iVar5;
        pAVar7 = pAVar7 + 0x58;
      }
      (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 0x20;
      iVar6 = iVar6 + 0x14;
      (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + -1;
    } while ((*(int *)(gen_frame + 0x30)) != 0);
  }
  F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x88))),iVar5,0,1);
  F_005623b0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x88))),0xffffffff);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x28))))(*(int * PTR32 *)(this + 0x184),(uint)(0 < (int)(*(undefined * PTR32 *)(gen_frame + 0x38))));
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  uVar3 = F_0042b790(((undefined *)GEN_TOP((*(int *)(this + 0x188) + 0x9c))));
  if (uVar3 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x28))))(*(int * PTR32 *)(this + 0x184),0);
    F_005a1840(*(undefined * PTR32 *)(this + 0x188),1);
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x88))) + 0x70))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x88))));
  return uVar3;
}

/* ref: Client::UI2::AddonRequest::vf44 */
uint F_00889b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x889b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  F_00838210(this);
  piVar1 = *(int * PTR32 *)(this + 0x1ac);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
  }
  *(uint *)(this + 0xa8) = uVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this + 0x1b4;
  iVar4 = 2;
  do {
    piVar1 = *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + -0x1c);
    *(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x1c)) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + -0x30);
    *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x14) = piVar1;
    if (piVar1 != (int *)0x0) {
      uVar9 = 0;
      uVar8 = 0;
      uVar6 = 0x11;
      iVar7 = iVar4;
      pAVar5 = this;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
      F_00568380(pvVar3,uVar6,iVar7,pAVar5,uVar8,uVar9);
      uVar9 = 0;
      uVar8 = 0;
      uVar6 = 0x12;
      iVar7 = iVar4;
      pAVar5 = this;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
      F_00568380(pvVar3,uVar6,iVar7,pAVar5,uVar8,uVar9);
      uVar9 = 0;
      uVar8 = 0;
      iVar7 = iVar4 + -2;
      uVar6 = 0xc;
      pAVar5 = this;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
      F_00568380(pvVar3,uVar6,iVar7,pAVar5,uVar8,uVar9);
      uVar6 = 0;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(piVar1[0x21] + 0xc))(piVar1 + 0x21)));
      F_0055a300(pvVar3,uVar6);
      F_00568380((undefined *)piVar1[0x1c],0x2d,iVar4,this,0,0);
      F_00568380((undefined *)piVar1[0x1c],0x30,iVar4 + 5,this,0,0);
      F_00568380((undefined *)piVar1[0x1c],0x34,iVar4 + 10,this,0,0);
      *(byte *)((int)piVar1 + 0xaa) = *(byte *)((int)piVar1 + 0xaa) & 0xfb;
      piVar1[0x28] = 0x8418;
      F_007f6710(this,iVar4 - 2U & 0xff,0);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)(gen_frame + 0x1c)) + 4;
    iVar7 = iVar4 + -1;
    iVar4 = iVar4 + 1;
  } while (iVar7 < 5);
  F_0055a460(*(undefined4 *)(this + 0x180),1);
  F_0055a370(*(undefined4 *)(this + 0x180),1);
  F_00568380(*(undefined * PTR32 *)(this + 0x180),0x31,0x11,this,0,0);
  uVar2 = F_0055e320(this);
  uVar2 = F_005613a0(uVar2);
  if (uVar2 == 2) {
    uVar6 = 0;
    pvVar3 = (undefined *)F_0055e320(this);
    F_0056e070(pvVar3,uVar6);
  }
  if (*(int *)(this + 0x1ac) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1ac) + 0x70)));
  }
  F_00568380(pvVar3,0x17,0,this,0,0);
  pvVar3 = (undefined *)0x0;
  if (*(int *)(this + 0x1b0) != 0) {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70)));
  }
  F_00568380(pvVar3,0x17,1,this,0,0);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2);
  iVar4 = *(int *)(uVar2 + 0x2c);
  (*(int *)(gen_frame + 0x24)) = iVar4;
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9a0(uVar2);
  (*(int *)(gen_frame + 0x18)) = *(int *)(uVar2 + 0x28);
  if ((iVar4 != 0) && (*(int *)(uVar2 + 0x28) != 0)) {
    iVar7 = *((int *)GEN_TOP((*(int *)(iVar4 + 0x20) + 0xdc)));
    *(int *)(this + 0x1dc) = iVar7;
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0x0;
    if (0 < iVar7) {
      (*(int *)(gen_frame + 0x14)) = -0x198 - (int)this;
      (*(int *)(gen_frame + 0x28)) = 0xe0;
      pAVar5 = this + 0x1c8;
      (*(int *)(gen_frame + 0x10)) = -0x1c - (int)this;
      do {
        if (*(int *)(pAVar5 + -0x14) == 0) {
          pvVar3 = (undefined *)0x0;
        }
        else {
          pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(pAVar5 + -0x14) + 0x70)));
        }
        F_0055a300(pvVar3,1);
        if (*(int *)pAVar5 == 0) {
          pvVar3 = (undefined *)0x0;
        }
        else {
          pvVar3 = *(undefined * PTR32 *)(*(int *)pAVar5 + 0x70);
        }
        F_0055a300(pvVar3,1);
        F_00560760(&(*(undefined4 *)(gen_frame + 0x0)));
        (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((pAVar5 + *(int *)((*(int *)(gen_frame + 0x18)) + 0x20) + (*(int *)(gen_frame + 0x14)))));
        (*(undefined1 *)(gen_frame + 0xa)) = 0xd;
        (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((pAVar5 + *(int *)(iVar4 + 0x20) + (*(int *)(gen_frame + 0x10)))));
        (*(undefined1 *)(gen_frame + 0xb)) = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0));
        F_005916c0(*(undefined * PTR32 *)pAVar5,6,(uint)(byte)this[0x13a],&(*(undefined4 *)(gen_frame + 0x0)));
        uVar6 = 0;
        if (*(int *)pAVar5 != 0) {
          uVar6 = *(undefined4 *)(*(int *)pAVar5 + 0x70);
        }
        F_0055a370(uVar6,1);
        pvVar3 = *(undefined * PTR32 *)(pAVar5 + -0x14);
        (*(undefined * PTR32 *)(gen_frame + 0xc)) = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + *(int *)((*(int *)(gen_frame + 0x24)) + 0x20))));
        F_00561830(pvVar3,0x80);
        if (0 < (int)(*(undefined * PTR32 *)(gen_frame + 0xc))) {
          F_00595190(pvVar3,(*(undefined * PTR32 *)(gen_frame + 0xc)),0,0);
          uVar2 = (*(uint *)(gen_frame + 0x20));
          iVar4 = *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x24)) + 0x20) + 4 + (*(int *)(gen_frame + 0x28)))));
          if (pvVar3 == (undefined *)0x0) {
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = 0;
            (*(uint *)(gen_frame + 0x20)) = uVar2 & 0xffffff00;
            pvVar3 = (undefined *)0x0;
          }
          else {
            if ((iVar4 < 2) &&
               ((iVar4 != 1 || (*((char *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x24)) + 0x20) + 0xc + (*(int *)(gen_frame + 0x28))))) != '\x05')))) {
              F_00584110(*(undefined * PTR32 *)((int)pvVar3 + 0xbc),"");
              uVar2 = (*(uint *)(gen_frame + 0x20));
              (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = 0;
              (*(uint *)(gen_frame + 0x20)) = uVar2 & 0xffffff00;
            }
            else {
              (*(undefined * PTR32 *)(gen_frame + 0xc)) = *(undefined * PTR32 *)((int)pvVar3 + 0xbc);
              uVar2 = F_00560910(iVar4);
              F_00584110((*(undefined * PTR32 *)(gen_frame + 0xc)),uVar2);
              (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = 1;
              (*(uint *)(gen_frame + 0x20)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x20)), 1, 3),1);
            }
            pvVar3 = *(undefined * PTR32 *)((int)pvVar3 + 0x70);
          }
          F_0055a300(pvVar3,(*(uint *)(gen_frame + 0x20)));
        }
        (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0x14;
        (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)(gen_frame + 0x1c)) + 1;
        pAVar5 = pAVar5 + 4;
        iVar4 = (*(int *)(gen_frame + 0x24));
      } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) < *(int *)(this + 0x1dc));
    }
    iVar4 = *(int *)(this + 0x1dc);
    if (iVar4 < 5) {
      pAVar5 = this + iVar4 * 4 + 0x1c8;
      iVar4 = 5 - iVar4;
      do {
        if (*(int *)(pAVar5 + -0x14) == 0) {
          pvVar3 = (undefined *)0x0;
        }
        else {
          pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(pAVar5 + -0x14) + 0x70)));
        }
        F_0055a300(pvVar3,0);
        if (*(int *)pAVar5 == 0) {
          pvVar3 = (undefined *)0x0;
        }
        else {
          pvVar3 = *(undefined * PTR32 *)(*(int *)pAVar5 + 0x70);
        }
        F_0055a300(pvVar3,0);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar5 + 0x28))))(*(int * PTR32 *)pAVar5,0);
        pAVar5 = pAVar5 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  F_005a91d0(this,1,0xb);
  uVar2 = F_005a91d0(this,0,10);
  return uVar2;
}

/* ref: Client::UI2::AddonSocialDetailB::vf44 */
uint F_00889f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x889f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pAVar5;
  int iVar6;
  
  F_00838c50(this);
  if (param_2 == (byte *)0x0) goto LAB_0088a230;
  if ((param_2[0x10] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x14);
  }
  F_00591c00(*(undefined * PTR32 *)(this + 0x194),uVar1,0);
  if (((param_2[0x20] & 0xf) == 0) || (*(int *)(param_2 + 0x24) < 1)) {
    F_0055a300(*(undefined * PTR32 *)(this + 0x184),0);
    F_0042aca0(this + 0x238);
  }
  else {
    F_0055a300(*(undefined * PTR32 *)(this + 0x184),1);
    if ((param_2[0x20] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x24);
    }
    F_00591c00(*(undefined * PTR32 *)(this + 0x184),uVar1,0);
    if ((param_2[0x28] & 0xf) == 0) {
      F_0042e430(this + 0x238,0);
    }
    else {
      F_0042e430(this + 0x238,*(undefined4 *)(param_2 + 0x2c));
    }
  }
  if ((param_2[0x60] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 100);
  }
  F_00584110(*(undefined * PTR32 *)(this + 0x1a4),uVar1);
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  F_00584110(*(undefined * PTR32 *)(this + 0x198),uVar1);
  if ((param_2[8] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
  }
  F_00584110(*(undefined * PTR32 *)(this + 0x19c),uVar1);
  if ((param_2[0x18] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
  }
  F_00584110(*(undefined * PTR32 *)(this + 0x1ac),uVar1);
  if ((param_2[0x40] & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x44);
  }
  F_0055a300(*(undefined * PTR32 *)(this + 0x1b4),(uint)((byte)uVar4 & 1));
  F_0055a300(*(undefined * PTR32 *)(this + 0x1b8),(uint)((byte)(uVar4 >> 1) & 1));
  F_0055a300(*(undefined * PTR32 *)(this + 0x1bc),(uint)((byte)(uVar4 >> 2) & 1));
  F_0055a300(*(undefined * PTR32 *)(this + 0x1c0),(uint)((byte)(uVar4 >> 3) & 1));
  switch((unsigned int)(uintptr_t)(uVar4 >> 0x10 & 0xf)) {
  case 0: ;
    uVar1 = 0x65;
    break;
  case 1: ;
    uVar1 = 0x66;
    break;
  case 2: ;
    uVar1 = 0x67;
    break;
  case 3: ;
    uVar1 = 0x68;
    break;
  default: ;
    uVar1 = 0x69;
  }
  F_0059d670(*(undefined * PTR32 *)(this + 0x1c4),uVar1);
  uVar4 = F_0055dcb0();
  piVar2 = (int *)F_0055b990(uVar4);
  iVar6 = *((int *)GEN_TOP((*(int *)(*piVar2 + 0x20) + 0x44)));
  if ((iVar6 == 4) || (iVar6 == 5)) {
    F_0059d670(*(undefined * PTR32 *)(this + 0x1c4),0x69);
  }
  if ((param_2[0x70] & 0xf) == 0) {
    iVar6 = 0;
LAB_0088a13e: ;
    if (*(undefined * PTR32 *)(this + iVar6 * 4 + 0x1c4) != (undefined *)0x0) {
      uVar1 = 1;
      pvVar3 = (undefined *)F_00561550(*(undefined * PTR32 *)(this + iVar6 * 4 + 0x1c4),2);
      F_0055a300(pvVar3,uVar1);
    }
  }
  else {
    iVar6 = *(int *)(param_2 + 0x74);
    if ((-1 < iVar6) && (iVar6 < 0x1d)) goto LAB_0088a13e;
  }
  F_0059d6a0(this,0x11,1,0);
  F_00591c00(*(undefined * PTR32 *)(this + 0x1a8),0xffffffff,0);
  F_00584110(*(undefined * PTR32 *)(this + 0x1a0),&REFG(undefined, 0x10be7e9));
  F_00584110(*(undefined * PTR32 *)(this + 0x1b0),&REFG(undefined, 0x10be7ea));
  F_00584580(*(undefined * PTR32 *)(this + 0x1b0),1);
  iVar6 = 0;
  pAVar5 = this + 0x1c8;
  do {
    pvVar3 = (undefined *)F_00561550(*(undefined * PTR32 *)pAVar5,4);
    F_00591c00(pvVar3,iVar6 + 0xf231,0);
    iVar6 = iVar6 + 1;
    pAVar5 = pAVar5 + 4;
  } while (iVar6 < 0x1c);
  F_0055a300(*(undefined * PTR32 *)(this + 0x18c),0);
  F_00568380(*(undefined * PTR32 *)(this + 0x188),6,0x1c,this,0,0);
  F_00568380(*(undefined * PTR32 *)(this + 0x188),7,0x1c,this,0,0);
  F_00568380(*(undefined * PTR32 *)(this + 400),6,0x1d,this,0,0);
  F_00568380(*(undefined * PTR32 *)(this + 400),7,0x1d,this,0,0);
LAB_0088a230: ;
  F_005a91d0(this,1,9);
  F_005a91d0(this,0,8);
  pvVar3 = (undefined *)F_0055e320(this);
  uVar4 = 0;
  if (pvVar3 != (undefined *)0x0) {
    piVar2 = (int *)F_00574e20(pvVar3);
    uVar4 = 0;
    if (piVar2 != (int *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2);
      *(uint *)(this + 0xa4) = uVar4;
    }
  }
  return uVar4;
}

/* ref: Client::UI2::AddonPcSearchDetail::vf44 */
uint F_0088a290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88a290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 AVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  int * piVar7;
  undefined3 extraout_var = 0;
  byte bVar8;
  undefined * pAVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint * puVar13;
  undefined4 uVar14;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  (*(int *)(gen_frame + 0x18)) = param_2;
  if (param_2 != 0) {
    uVar3 = F_0055dcb0();
    pvVar5 = (undefined *)(uVar3 + 0xe0);
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pvVar5;
    F_00560760(((uint *)(gen_frame + 0xc)));
    if ((*(byte *)(param_2 + 8) & 0xf) == 0) {
      ((uint *)(gen_frame + 0xc))[0] = 0;
    }
    else {
      ((uint *)(gen_frame + 0xc))[0] = *(uint *)(param_2 + 0xc);
    }
    puVar13 = ((uint *)(gen_frame + 0xc));
    (*(uint *)(gen_frame + 0x20)) = (uint)(byte)this[0x13a];
    uVar3 = F_0055e2f0(this,4);
    F_00590ad0(pvVar5,2,(*(uint *)(gen_frame + 0x20)),uVar3,puVar13);
    if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
      ((uint *)(gen_frame + 0xc))[0] = 0;
    }
    else {
      ((uint *)(gen_frame + 0xc))[0] = *(uint *)(param_2 + 0x14);
    }
    puVar13 = ((uint *)(gen_frame + 0xc));
    (*(uint *)(gen_frame + 0x20)) = (uint)(byte)this[0x13a];
    uVar3 = F_0055e2f0(this,10);
    F_00590ad0(pvVar5,2,(*(uint *)(gen_frame + 0x20)),uVar3,puVar13);
    if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
      ((uint *)(gen_frame + 0xc))[0] = 0;
    }
    else {
      ((uint *)(gen_frame + 0xc))[0] = *(uint *)(param_2 + 0x1c);
    }
    puVar13 = ((uint *)(gen_frame + 0xc));
    (*(uint *)(gen_frame + 0x20)) = (uint)(byte)this[0x13a];
    uVar3 = F_0055e2f0(this,0x14);
    F_00590ad0(pvVar5,2,(*(uint *)(gen_frame + 0x20)),uVar3,puVar13);
    if ((*(byte *)(param_2 + 0x20) & 0xf) == 0) {
      ((uint *)(gen_frame + 0xc))[0] = 0;
    }
    else {
      ((uint *)(gen_frame + 0xc))[0] = *(uint *)(param_2 + 0x24);
    }
    puVar13 = ((uint *)(gen_frame + 0xc));
    (*(uint *)(gen_frame + 0x20)) = (uint)(byte)this[0x13a];
    uVar3 = F_0055e2f0(this,0x33);
    F_00590ad0(pvVar5,2,(*(uint *)(gen_frame + 0x20)),uVar3,puVar13);
    if ((*(byte *)(param_2 + 0x28) & 0xf) == 0) {
      ((uint *)(gen_frame + 0xc))[0] = 0;
    }
    else {
      ((uint *)(gen_frame + 0xc))[0] = *(uint *)(param_2 + 0x2c);
    }
    puVar13 = ((uint *)(gen_frame + 0xc));
    (*(uint *)(gen_frame + 0x20)) = (uint)(byte)this[0x13a];
    uVar3 = F_0055e2f0(this,0x3b);
    F_00590ad0(pvVar5,2,(*(uint *)(gen_frame + 0x20)),uVar3,puVar13);
    uVar3 = F_0055e2f0(this,0x4d);
    if (uVar3 != 0) {
      if ((*(byte *)(param_2 + 0x30) & 0xf) == 0) {
        ((uint *)(gen_frame + 0xc))[0] = 0;
      }
      else {
        ((uint *)(gen_frame + 0xc))[0] = *(uint *)(param_2 + 0x34);
      }
      puVar13 = ((uint *)(gen_frame + 0xc));
      (*(uint *)(gen_frame + 0x20)) = (uint)(byte)this[0x13a];
      uVar3 = F_0055e2f0(this,0x4d);
      F_00590ad0(pvVar5,2,(*(uint *)(gen_frame + 0x20)),uVar3,puVar13);
    }
    if ((*(byte *)(param_2 + 0x358) & 0xf) == 0) {
      ((uint *)(gen_frame + 0xc))[0] = 0;
    }
    else {
      ((uint *)(gen_frame + 0xc))[0] = *(uint *)(param_2 + 0x35c);
    }
    puVar13 = ((uint *)(gen_frame + 0xc));
    AVar1 = this[0x13a];
    uVar3 = F_0055e2f0(this,0x47);
    F_00590ad0(pvVar5,2,(uint)(byte)AVar1,uVar3,puVar13);
    uVar3 = F_0055e2f0(this,5);
    if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
       (uVar4 = F_005613a0(uVar3), uVar4 != 7)) {
      uVar3 = 0;
    }
    *(uint *)(this + 0xf48) = uVar3;
    if (uVar3 != 0) {
      F_00568380(*(undefined * PTR32 *)(uVar3 + 0x98),0x11,2,this,0,0);
      iVar2 = *(int *)(this + 0xf48);
      *(undefined * PTR32 *)(iVar2 + 0x144) = this;
      *(gen_code32 *)(iVar2 + 0x148) = ((code *)REFP(0x839460));
      *(undefined4 *)(iVar2 + 0x14c) = 0;
    }
    uVar3 = F_0055e2f0(this,0x54);
    if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
       (uVar4 = F_005613a0(uVar3), uVar4 != 1)) {
      uVar3 = 0;
    }
    *(uint *)(this + 0xf54) = uVar3;
    uVar3 = F_0055e2f0(this,0x55);
    if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
       (uVar4 = F_005613a0(uVar3), uVar4 != 1)) {
      uVar3 = 0;
    }
    *(uint *)(this + 0xf4c) = uVar3;
    uVar3 = F_0055e2f0(this,0x56);
    if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
       (uVar4 = F_005613a0(uVar3), uVar4 != 1)) {
      uVar3 = 0;
    }
    *(uint *)(this + 0xf50) = uVar3;
    if (*(int *)(this + 0xf54) != 0) {
      F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xf54) + 0x70))),0x17,4,this,0,0);
    }
    if (*(int *)(this + 0xf4c) != 0) {
      F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xf4c) + 0x70))),0x17,3,this,0,0);
      piVar7 = *(int * PTR32 *)(this + 0xf4c);
      if (piVar7 == (int *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = ((code *)*(gen_code32 *)(*piVar7 + 0x3c))(piVar7);
      }
      *(uint *)(this + 0xa8) = uVar3;
    }
    if (*(int *)(this + 0xf50) != 0) {
      F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xf50) + 0x70))),0x17,5,this,0,0);
    }
    uVar3 = F_0055e2f0(this,6);
    if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
       (uVar4 = F_005613a0(uVar3), uVar4 != 4)) {
      uVar3 = 0;
    }
    *(uint *)(this + 0xf58) = uVar3;
    uVar3 = F_0055e2f0(this,7);
    if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
       (uVar4 = F_005613a0(uVar3), uVar4 != 4)) {
      uVar3 = 0;
    }
    uVar14 = 0;
    uVar12 = 0;
    uVar11 = 6;
    uVar10 = 0x17;
    *(uint *)(this + 0xf5c) = uVar3;
    pAVar9 = this;
    pvVar5 = (undefined *)F_0055e2f0(this,6);
    F_00568380(pvVar5,uVar10,uVar11,pAVar9,uVar12,uVar14);
    uVar14 = 0;
    uVar12 = 0;
    uVar11 = 7;
    uVar10 = 0x17;
    pAVar9 = this;
    pvVar5 = (undefined *)F_0055e2f0(this,7);
    F_00568380(pvVar5,uVar10,uVar11,pAVar9,uVar12,uVar14);
    (*(byte *)(gen_frame + 0x27)) = 0;
    do {
      uVar4 = (uint)(*(byte *)(gen_frame + 0x27));
      uVar3 = F_0055e2f0(this,*(undefined4 *)(&REFG(undefined, 0x10c17a0) + uVar4 * 4));
      if (((uVar3 == 0) || (pvVar5 = (undefined *)F_00559c20(uVar3), pvVar5 == (undefined *)0x0)) ||
         (uVar3 = F_005613a0(pvVar5), uVar3 != 3)) {
        pvVar5 = (undefined *)0x0;
      }
      *(undefined * PTR32 *)(this + uVar4 * 4 + 0xf60) = pvVar5;
      if (pvVar5 == (undefined *)0x0) break;
      F_00561ee0(pvVar5,1,1);
      pvVar5 = (undefined *)0x0;
      if (*(int *)(this + uVar4 * 4 + 0xf60) != 0) {
        pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + uVar4 * 4 + 0xf60) + 0x70)));
      }
      F_00568380(pvVar5,0x17,uVar4 + 1000,this,0,0);
      iVar2 = (*(int *)(gen_frame + 0x18));
      if ((*(byte *)((*(int *)(gen_frame + 0x18)) + 0x40 + uVar4 * 8) & 0xf) == 0) {
        (*(uint *)(gen_frame + 0x20)) = 0;
      }
      else {
        (*(uint *)(gen_frame + 0x20)) = *(uint *)((*(int *)(gen_frame + 0x18)) + 0x44 + uVar4 * 8);
      }
      uVar3 = F_00561490(*(undefined * PTR32 *)(this + uVar4 * 4 + 0xf60),3);
      pvVar5 = (undefined *)F_00559b90(uVar3);
      if (pvVar5 != (undefined *)0x0) {
        F_00591c00(pvVar5,(*(uint *)(gen_frame + 0x20)),0);
      }
      if ((*(byte *)(iVar2 + 0x90 + uVar4 * 8) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)(iVar2 + 0x94 + uVar4 * 8);
      }
      F_0042e430(this + uVar4 * 0x54 + 0x180,uVar10);
      ((uint *)(gen_frame + 0xc))[0] = F_0042a990(this + uVar4 * 0x54 + 0x180);
      F_00590ad0((*(undefined * PTR32 *)(gen_frame + 0x1c)),2,(uint)(byte)this[0x13a],
                   *((undefined4 *)GEN_TOP((*(int *)(this + uVar4 * 4 + 0xf60) + 0x68))),((uint *)(gen_frame + 0xc)));
      (*(byte *)(gen_frame + 0x27)) = (*(byte *)(gen_frame + 0x27)) + 1;
    } while ((*(byte *)(gen_frame + 0x27)) < 10);
    (*(byte *)(gen_frame + 0x27)) = 0;
    do {
      uVar4 = (uint)(*(byte *)(gen_frame + 0x27));
      uVar3 = F_0055e2f0(this,uVar4 + 0x15);
      if (((uVar3 == 0) || (pvVar5 = (undefined *)F_00559c20(uVar3), pvVar5 == (undefined *)0x0)) ||
         (uVar3 = F_005613a0(pvVar5), uVar3 != 3)) {
        pvVar5 = (undefined *)0x0;
      }
      *(undefined * PTR32 *)(this + uVar4 * 4 + 0xf88) = pvVar5;
      if (pvVar5 == (undefined *)0x0) break;
      F_00561ee0(pvVar5,1,1);
      pvVar5 = (undefined *)0x0;
      if (*(int *)(this + uVar4 * 4 + 0xf88) != 0) {
        pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + uVar4 * 4 + 0xf88) + 0x70)));
      }
      F_00568380(pvVar5,0x17,uVar4 + 0x44c,this,0,0);
      iVar2 = (*(int *)(gen_frame + 0x18));
      if ((*(byte *)((*(int *)(gen_frame + 0x18)) + 0xe8 + uVar4 * 8) & 0xf) == 0) {
        (*(uint *)(gen_frame + 0x20)) = 0;
      }
      else {
        (*(uint *)(gen_frame + 0x20)) = *(uint *)((*(int *)(gen_frame + 0x18)) + 0xec + uVar4 * 8);
      }
      uVar3 = F_00561490(*(undefined * PTR32 *)(this + uVar4 * 4 + 0xf88),3);
      pvVar5 = (undefined *)F_00559b90(uVar3);
      if (pvVar5 != (undefined *)0x0) {
        F_00591c00(pvVar5,(*(uint *)(gen_frame + 0x20)),0);
      }
      if (((*(byte *)(iVar2 + 0x1e8 + uVar4 * 8) & 0xf) != 0) &&
         (iVar2 = *(int *)(iVar2 + 0x1ec + uVar4 * 8), iVar2 != 0)) {
        F_0042e430(this + uVar4 * 0x54 + 0x4c8,iVar2);
        ((uint *)(gen_frame + 0xc))[0] = F_0042a990(this + uVar4 * 0x54 + 0x4c8);
        F_00590ad0((*(undefined * PTR32 *)(gen_frame + 0x1c)),2,(uint)(byte)this[0x13a],
                     *((undefined4 *)GEN_TOP((*(int *)(this + uVar4 * 4 + 0xf88) + 0x68))),((uint *)(gen_frame + 0xc)));
      }
      (*(byte *)(gen_frame + 0x27)) = (*(byte *)(gen_frame + 0x27)) + 1;
    } while ((*(byte *)(gen_frame + 0x27)) < 0x20);
    uVar3 = 0;
    do {
      uVar4 = F_0055e2f0(this,(&REFG(undefined4, 0x10c17c0))[uVar3]);
      if (uVar4 == 0) {
LAB_0088a8c5: ;
        uVar4 = 0;
      }
      else {
        (*(uint *)(gen_frame + 0x20)) = F_00559c20(uVar4);
        if (((*(uint *)(gen_frame + 0x20)) == 0) || (uVar6 = F_005613a0((*(uint *)(gen_frame + 0x20))), uVar4 = (*(uint *)(gen_frame + 0x20)), uVar6 != 3))
        goto LAB_0088a8c5;
      }
      *(uint *)(this + uVar3 * 4 + 0x1008) = uVar4;
      if (uVar4 == 0) break;
      F_00568380(*(undefined * PTR32 *)(uVar4 + 0x70),0x17,uVar3 + 0x4b0,this,0,0);
      bVar8 = (char)uVar3 + 1;
      uVar3 = (uint)bVar8;
    } while (bVar8 < 9);
    uVar3 = 0;
    do {
      uVar4 = F_0055e2f0(this,(&REFG(undefined4, 0x10c17e8))[uVar3]);
      if (uVar4 == 0) {
LAB_0088a926: ;
        uVar4 = 0;
      }
      else {
        (*(uint *)(gen_frame + 0x20)) = F_00559c20(uVar4);
        if (((*(uint *)(gen_frame + 0x20)) == 0) || (uVar6 = F_005613a0((*(uint *)(gen_frame + 0x20))), uVar4 = (*(uint *)(gen_frame + 0x20)), uVar6 != 3))
        goto LAB_0088a926;
      }
      *(uint *)(this + uVar3 * 4 + 0x102c) = uVar4;
      if (uVar4 == 0) break;
      F_00568380(*(undefined * PTR32 *)(uVar4 + 0x70),0x17,uVar3 + 0x514,this,0,0);
      bVar8 = (char)uVar3 + 1;
      uVar3 = (uint)bVar8;
    } while (bVar8 < 4);
    (*(byte *)(gen_frame + 0x27)) = 0;
    do {
      uVar4 = (uint)(*(byte *)(gen_frame + 0x27));
      uVar3 = F_0055e2f0(this,uVar4 + 0x48);
      if (((uVar3 == 0) || (pvVar5 = (undefined *)F_00559c20(uVar3), pvVar5 == (undefined *)0x0)) ||
         (uVar3 = F_005613a0(pvVar5), uVar3 != 3)) {
        pvVar5 = (undefined *)0x0;
      }
      *(undefined * PTR32 *)(this + uVar4 * 4 + 0x103c) = pvVar5;
      if (pvVar5 == (undefined *)0x0) break;
      F_00561ee0(pvVar5,1,1);
      iVar2 = (*(int *)(gen_frame + 0x18));
      if ((*(byte *)((*(int *)(gen_frame + 0x18)) + 0x340 + uVar4 * 8) & 0xf) == 0) {
        (*(uint *)(gen_frame + 0x20)) = 0;
      }
      else {
        (*(uint *)(gen_frame + 0x20)) = *(uint *)((*(int *)(gen_frame + 0x18)) + 0x344 + uVar4 * 8);
      }
      uVar3 = F_00561490(*(undefined * PTR32 *)(this + uVar4 * 4 + 0x103c),3);
      pvVar5 = (undefined *)F_00559b90(uVar3);
      if (pvVar5 != (undefined *)0x0) {
        F_00591c00(pvVar5,(*(uint *)(gen_frame + 0x20)),0);
      }
      if (*(int *)(this + uVar4 * 4 + 0x103c) == 0) {
        pvVar5 = (undefined *)0x0;
      }
      else {
        pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + uVar4 * 4 + 0x103c) + 0x70)));
      }
      F_00568380(pvVar5,0x17,uVar4 + 0x578,this,0,0);
      if ((*(byte *)(iVar2 + 0x360 + uVar4 * 8) & 0xf) == 0) {
        ((uint *)(gen_frame + 0xc))[0] = 0;
      }
      else {
        ((uint *)(gen_frame + 0xc))[0] = *(uint *)(iVar2 + 0x364 + uVar4 * 8);
      }
      F_00590ad0((*(undefined * PTR32 *)(gen_frame + 0x1c)),2,(uint)(byte)this[0x13a],
                   *((undefined4 *)GEN_TOP((*(int *)(this + uVar4 * 4 + 0x103c) + 0x68))),((uint *)(gen_frame + 0xc)));
      (*(byte *)(gen_frame + 0x27)) = (*(byte *)(gen_frame + 0x27)) + 1;
    } while ((*(byte *)(gen_frame + 0x27)) < 3);
    uVar3 = F_0055e2f0(this,0x35);
    if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
       (uVar4 = F_005613a0(uVar3), uVar4 != 8)) {
      uVar3 = 0;
    }
    *(uint *)(this + 0x1048) = uVar3;
    uVar3 = F_0055e2f0(this,0x38);
    if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
       (uVar4 = F_005613a0(uVar3), uVar4 != 8)) {
      uVar3 = 0;
    }
    iVar2 = (*(int *)(gen_frame + 0x18));
    *(uint *)(this + 0x104c) = uVar3;
    if (*(undefined * PTR32 *)(this + 0x1048) != (undefined *)0x0) {
      if ((*(byte *)((*(int *)(gen_frame + 0x18)) + 0x2e8) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)((*(int *)(gen_frame + 0x18)) + 0x2ec);
      }
      F_0059d040(*(undefined * PTR32 *)(this + 0x1048),uVar10,1,1);
      if ((*(byte *)(iVar2 + 0x2f0) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)(iVar2 + 0x2f4);
      }
      F_0059d070(*(undefined * PTR32 *)(this + 0x1048),uVar10,1,1);
      pvVar5 = (undefined *)0x0;
      if (*(int *)(this + 0x1048) != 0) {
        pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1048) + 0x70)));
      }
      F_00568380(pvVar5,0x19,0,this,0,0);
    }
    if (*(undefined * PTR32 *)(this + 0x104c) != (undefined *)0x0) {
      if ((*(byte *)(iVar2 + 0x2e8) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)(iVar2 + 0x2ec);
      }
      F_0059d040(*(undefined * PTR32 *)(this + 0x104c),uVar10,1,1);
      if ((*(byte *)(iVar2 + 0x2f0) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)(iVar2 + 0x2f4);
      }
      F_0059d070(*(undefined * PTR32 *)(this + 0x104c),uVar10,1,1);
      pvVar5 = (undefined *)0x0;
      if (*(int *)(this + 0x104c) != 0) {
        pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x104c) + 0x70)));
      }
      F_00568380(pvVar5,0x19,1,this,0,0);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)*(uint *)(this + 0x1050);
    bVar8 = 0;
    pAVar9 = this + 0xf60;
    (*(uint *)(gen_frame + 0x20)) = 10;
    do {
      if (*(undefined * PTR32 *)pAVar9 != (undefined *)0x0) {
        F_0059dde0(*(undefined * PTR32 *)pAVar9,(uint)(((uint)(*(undefined * PTR32 *)(gen_frame + 0x1c)) & 1 << (bVar8 & 0x1f)) != 0));
      }
      bVar8 = bVar8 + 1;
      pAVar9 = pAVar9 + 4;
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) + -1;
    } while ((*(uint *)(gen_frame + 0x20)) != 0);
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)*(uint *)(this + 0x1054);
    bVar8 = 0;
    pAVar9 = this + 0xf88;
    (*(uint *)(gen_frame + 0x20)) = 0x20;
    do {
      if (*(undefined * PTR32 *)pAVar9 != (undefined *)0x0) {
        F_0059dde0(*(undefined * PTR32 *)pAVar9,(uint)(((uint)(*(undefined * PTR32 *)(gen_frame + 0x1c)) & 1 << (bVar8 & 0x1f)) != 0));
      }
      bVar8 = bVar8 + 1;
      pAVar9 = pAVar9 + 4;
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) + -1;
    } while ((*(uint *)(gen_frame + 0x20)) != 0);
    (*(uint *)(gen_frame + 0x20)) = *(uint *)(this + 0x1058);
    bVar8 = 0;
    pAVar9 = this + 0x1008;
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0x9;
    do {
      if (*(int *)(this + (*(uint *)(gen_frame + 0x20)) * 4 + 0x1008) != 0) {
        F_0059dde0(*(undefined * PTR32 *)pAVar9,(uint)(((*(uint *)(gen_frame + 0x20)) & 1 << (bVar8 & 0x1f)) != 0));
      }
      bVar8 = bVar8 + 1;
      pAVar9 = pAVar9 + 4;
      (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + -1);
    } while ((*(undefined * PTR32 *)(gen_frame + 0x1c)) != (undefined *)0x0);
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)*(uint *)(this + 0x105c);
    bVar8 = 0;
    pAVar9 = this + 0x102c;
    (*(uint *)(gen_frame + 0x20)) = 4;
    do {
      if (*(undefined * PTR32 *)pAVar9 != (undefined *)0x0) {
        F_0059dde0(*(undefined * PTR32 *)pAVar9,(uint)(((uint)(*(undefined * PTR32 *)(gen_frame + 0x1c)) & 1 << (bVar8 & 0x1f)) != 0));
      }
      bVar8 = bVar8 + 1;
      pAVar9 = pAVar9 + 4;
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) + -1;
    } while ((*(uint *)(gen_frame + 0x20)) != 0);
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)*(uint *)(this + 0x1060);
    bVar8 = 0;
    pAVar9 = this + 0x103c;
    (*(uint *)(gen_frame + 0x20)) = 3;
    do {
      if (*(undefined * PTR32 *)pAVar9 != (undefined *)0x0) {
        F_0059dde0(*(undefined * PTR32 *)pAVar9,(uint)(((uint)(*(undefined * PTR32 *)(gen_frame + 0x1c)) & 1 << (bVar8 & 0x1f)) != 0));
      }
      bVar8 = bVar8 + 1;
      pAVar9 = pAVar9 + 4;
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) + -1;
    } while ((*(uint *)(gen_frame + 0x20)) != 0);
    if (*(undefined * PTR32 *)(this + 0x1048) != (undefined *)0x0) {
      if ((*(byte *)((*(int *)(gen_frame + 0x18)) + 0x318) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)((*(int *)(gen_frame + 0x18)) + 0x31c);
      }
      F_0059cf90(*(undefined * PTR32 *)(this + 0x1048),uVar10,0,0);
    }
    if (*(undefined * PTR32 *)(this + 0x104c) != (undefined *)0x0) {
      if ((*(byte *)((*(int *)(gen_frame + 0x18)) + 800) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)((*(int *)(gen_frame + 0x18)) + 0x324);
      }
      F_0059cf90(*(undefined * PTR32 *)(this + 0x104c),uVar10,0,0);
    }
    if (*(undefined * PTR32 *)(this + 0xf48) != (undefined *)0x0) {
      if ((*(byte *)((*(int *)(gen_frame + 0x18)) + 0x2f8) & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)((*(int *)(gen_frame + 0x18)) + 0x2fc);
      }
      F_005b2fe0(*(undefined * PTR32 *)(this + 0xf48),uVar10);
    }
    uVar3 = F_0055dcb0();
    piVar7 = (int *)F_0055b990(uVar3);
    iVar2 = *((int *)GEN_TOP((*(int *)(*piVar7 + 0x20) + 0x44)));
    if ((iVar2 == 4) || (iVar2 == 5)) {
      F_0059d6a0(this,0x65,1,0);
      uVar10 = 0x65;
      pvVar5 = (undefined *)F_0055e2f0(this,2);
      F_0059d670(pvVar5,uVar10);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,(*(int *)(gen_frame + 0x18)));
    bVar8 = F_0056b630(this,0x144,7,0,9,0,0);
    uVar3 = CONCAT31(extraout_var,bVar8);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: Client::UI2::AddonItemSearch::vf44 */
uint F_0088add0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88add0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined1 AVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int * piVar5;
  uint * puVar6;
  uint * puVar7;
  undefined * pvVar8;
  int iVar9;
  int iVar10;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(int *)(gen_frame + 0x1c)) = param_2;
  if (param_2 != 0) {
    uVar2 = F_0055dcb0();
    (*(uint * PTR32 *)(gen_frame + 0x20)) = (uint *)(uVar2 + 0xe0);
    F_00560760(((uint *)(gen_frame + 0x10)));
    uVar2 = F_0055e2f0(this,0x5b);
    *(uint *)(this + 0x2a60) = uVar2;
    uVar2 = F_0055e2f0(this,4);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2), uVar3 != 7)) {
      uVar2 = 0;
    }
    *(uint *)(this + 0x2a28) = uVar2;
    if (uVar2 != 0) {
      F_00568380(*(undefined * PTR32 *)(uVar2 + 0x98),0x11,5,this,0,0);
      iVar9 = *(int *)(this + 0x2a28);
      *(undefined * PTR32 *)(iVar9 + 0x144) = this;
      *(gen_code32 *)(iVar9 + 0x148) = ((code *)REFP(0x8398e0));
      *(undefined4 *)(iVar9 + 0x14c) = 0;
      F_00563870(*(undefined * PTR32 *)(this + 0x2a28),0);
    }
    uVar2 = F_0055e2f0(this,0x6a);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2), uVar3 != 1)) {
      uVar2 = 0;
    }
    *(uint *)(this + 0x2a2c) = uVar2;
    uVar2 = F_0055e2f0(this,100);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2), uVar3 != 10)) {
      uVar2 = 0;
    }
    *(uint *)(this + 0x2a44) = uVar2;
    if (uVar2 != 0) {
      *(undefined4 *)(this + 0x2a40) = *(undefined4 *)(uVar2 + 0x84);
      uVar4 = 0;
      if (*(int *)(uVar2 + 0x88) != 0) {
        uVar4 = *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x88) + 0x70)));
      }
      *(undefined4 *)(this + 0x98) = uVar4;
      F_00568380(*(undefined * PTR32 *)(uVar2 + 0x70),0x23,4,this,0,0);
    }
    uVar2 = F_0055e2f0(this,0x6c);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2), uVar3 != 1)) {
      uVar2 = 0;
    }
    *(uint *)(this + 0x2a4c) = uVar2;
    uVar2 = F_0055e2f0(this,0x6b);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2), uVar3 != 1)) {
      uVar2 = 0;
    }
    *(uint *)(this + 0x2a50) = uVar2;
    if (*(int *)(this + 0x2a2c) != 0) {
      F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a2c) + 0x70))),0x17,6,this,0,0);
      piVar5 = *(int * PTR32 *)(this + 0x2a2c);
      if (piVar5 == (int *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = ((code *)*(gen_code32 *)(*piVar5 + 0x3c))(piVar5);
      }
      *(uint *)(this + 0xa8) = uVar2;
    }
    if (*(int *)(this + 0x2a4c) != 0) {
      F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a4c) + 0x70))),0x17,7,this,0,0);
    }
    if (*(int *)(this + 0x2a50) != 0) {
      F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a50) + 0x70))),0x17,8,this,0,0);
    }
    uVar2 = F_0055e2f0(this,0x24);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2), uVar3 != 8)) {
      uVar2 = 0;
    }
    *(uint *)(this + 0x2a30) = uVar2;
    uVar2 = F_0055e2f0(this,0x3c);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2), uVar3 != 8)) {
      uVar2 = 0;
    }
    *(uint *)(this + 0x2a34) = uVar2;
    uVar2 = F_0055e2f0(this,0x3f);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2), uVar3 != 10)) {
      uVar2 = 0;
    }
    *(uint *)(this + 0x2a38) = uVar2;
    uVar2 = F_0055e340(this,0x67);
    *(uint *)(this + 0x2a48) = uVar2;
    F_00839a00(this,param_2,0,10,1);
    F_00839a00(this,param_2,1,0x2a,2);
    F_00839a00(this,param_2,2,0x43,3);
    if (*(undefined * PTR32 *)(this + 0x2a48) != (undefined *)0x0) {
      if ((*(byte *)(param_2 + 0x608) & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_2 + 0x60c);
      }
      F_00584110(*(undefined * PTR32 *)(this + 0x2a48),uVar4);
    }
    if ((*(byte *)(param_2 + 0x630) & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_2 + 0x634);
    }
    F_0042e430(this + 0x1054,uVar4);
    ((uint *)(gen_frame + 0x10))[0] = F_0042a990(this + 0x1054);
    F_00590ad0((*(uint * PTR32 *)(gen_frame + 0x20)),2,(uint)(byte)this[0x13a],*((undefined4 *)GEN_TOP((*(int *)(this + 0x2a40) + 0x68))),
                 ((uint *)(gen_frame + 0x10)));
    if ((*(byte *)(param_2 + 0x610) & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_2 + 0x614);
    }
    F_0042e430(this + 0x10a8,uVar4);
    ((uint *)(gen_frame + 0x10))[0] = F_0042a990(this + 0x10a8);
    F_00590ad0((*(uint * PTR32 *)(gen_frame + 0x20)),2,(uint)(byte)this[0x13a],*((undefined4 *)GEN_TOP((*(int *)(this + 0x2a4c) + 0x68))),
                 ((uint *)(gen_frame + 0x10)));
    if ((*(byte *)(param_2 + 0x618) & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_2 + 0x61c);
    }
    F_0042e430(this + 0x10fc,uVar4);
    ((uint *)(gen_frame + 0x10))[0] = F_0042a990(this + 0x10fc);
    F_00590ad0((*(uint * PTR32 *)(gen_frame + 0x20)),2,(uint)(byte)this[0x13a],*((undefined4 *)GEN_TOP((*(int *)(this + 0x2a50) + 0x68))),
                 ((uint *)(gen_frame + 0x10)));
    if (*(undefined * PTR32 *)(this + 0x2a30) != (undefined *)0x0) {
      if ((*(byte *)(param_2 + 0x650) & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_2 + 0x654);
      }
      F_0059d070(*(undefined * PTR32 *)(this + 0x2a30),uVar4,1,1);
      if ((*(byte *)(param_2 + 0x648) & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_2 + 0x64c);
      }
      F_0059d040(*(undefined * PTR32 *)(this + 0x2a30),uVar4,1,1);
      if ((*(byte *)(param_2 + 0x658) & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_2 + 0x65c);
      }
      F_0059cf90(*(undefined * PTR32 *)(this + 0x2a30),uVar4,1,1);
      pvVar8 = (undefined *)0x0;
      if (*(int *)(this + 0x2a30) != 0) {
        pvVar8 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a30) + 0x70)));
      }
      F_00568380(pvVar8,0x19,0,this,0,0);
    }
    if (*(undefined * PTR32 *)(this + 0x2a34) != (undefined *)0x0) {
      if ((*(byte *)(param_2 + 0x650) & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_2 + 0x654);
      }
      F_0059d070(*(undefined * PTR32 *)(this + 0x2a34),uVar4,1,1);
      if ((*(byte *)(param_2 + 0x648) & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_2 + 0x64c);
      }
      F_0059d040(*(undefined * PTR32 *)(this + 0x2a34),uVar4,1,1);
      if ((*(byte *)(param_2 + 0x660) & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_2 + 0x664);
      }
      F_0059cf90(*(undefined * PTR32 *)(this + 0x2a34),uVar4,1,1);
      pvVar8 = (undefined *)0x0;
      if (*(int *)(this + 0x2a34) != 0) {
        pvVar8 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a34) + 0x70)));
      }
      F_00568380(pvVar8,0x19,1,this,0,0);
    }
    if ((*(byte *)(param_2 + 0x670) & 0xf) == 0) {
      AVar1 = (undefined1)0x0;
    }
    else {
      AVar1 = SUB41(*(undefined4 *)(param_2 + 0x674),0);
    }
    this[0x2a1d] = AVar1;
    piVar5 = (int *)F_00404270();
    uVar3 = ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5,(uint)(byte)this[0x2a1d] * 4,0x10);
    uVar2 = (uint)(byte)this[0x2a1d];
    *(uint *)(this + 0x2a20) = uVar3;
    puVar6 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar2 * 0x54) | uVar2 * 0x54 + 4,0,piVar5,0);
    if (puVar6 == (uint *)0x0) {
      puVar7 = (uint *)0x0;
    }
    else {
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
      (*(uint * PTR32 *)(gen_frame + 0x20)) = puVar6;
      puVar7 = puVar6;
      while (uVar2 = uVar2 - 1, (*(uint * PTR32 *)(gen_frame + 0x20)) = puVar7, -1 < (int)uVar2) {
        F_0042b630(puVar6);
        puVar6 = puVar6 + 0x15;
        puVar7 = (*(uint * PTR32 *)(gen_frame + 0x20));
      }
    }
    iVar9 = 0;
    *(uint * PTR32 *)(this + 0x2a24) = puVar7;
    if (this[0x2a1d] != (undefined1)0x0) {
      iVar10 = 0;
      (*(uint * PTR32 *)(gen_frame + 0x20)) = (uint *)((*(int *)(gen_frame + 0x1c)) + 0x678);
      do {
        if ((*(*(uint * PTR32 *)(gen_frame + 0x20)) & 0xf) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = (*(uint * PTR32 *)(gen_frame + 0x20))[1];
        }
        F_0042e430(((undefined *)GEN_TOP((*(int *)(this + 0x2a24) + iVar10))),uVar2);
        uVar2 = F_0042a990(*(int *)(this + 0x2a24) + iVar10);
        (*(uint * PTR32 *)(gen_frame + 0x20)) = (*(uint * PTR32 *)(gen_frame + 0x20)) + 2;
        *((uint *)GEN_TOP((*(int *)(this + 0x2a20) + iVar9 * 4))) = uVar2;
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 0x54;
      } while (iVar9 < (int)(uint)(byte)this[0x2a1d]);
    }
    if (*(int *)(this + 0x2a38) != 0) {
      F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a38) + 0x88))),(uint)(byte)this[0x2a1d],
                   *(undefined4 *)(this + 0x2a20),1);
      iVar9 = (*(int *)(gen_frame + 0x1c));
      if ((*(byte *)((*(int *)(gen_frame + 0x1c)) + 0x668) & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)((*(int *)(gen_frame + 0x1c)) + 0x66c);
      }
      F_0059caa0(*(undefined * PTR32 *)(this + 0x2a38),uVar4);
      if (*(int *)(this + 0x2a38) == 0) {
        pvVar8 = (undefined *)0x0;
      }
      else {
        pvVar8 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a38) + 0x70)));
      }
      F_00568380(pvVar8,0x23,2,this,0,0);
      if ((*(byte *)(iVar9 + 0x668) & 0xf) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(iVar9 + 0x66c);
      }
      F_0058e4c0(*(undefined * PTR32 *)(this + 0x2a38),*((undefined4 *)GEN_TOP((*(int *)(this + 0x2a20) + iVar9 * 4))));
    }
    uVar2 = F_0055e2f0(this,0x66);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2), uVar3 != 9)) {
      uVar2 = 0;
    }
    *(uint *)(this + 0x2a3c) = uVar2;
    uVar2 = F_0055e340(this,99);
    *(uint *)(this + 0x2a54) = uVar2;
    uVar2 = F_0055e360(this,0x62);
    *(uint *)(this + 0x2a58) = uVar2;
    uVar2 = F_0055e340(this,0x6d);
    *(uint *)(this + 0x2a5c) = uVar2;
    F_0055a300(*(undefined * PTR32 *)(this + 0x2a58),0);
    if (*(undefined * PTR32 *)(this + 0x2a3c) != (undefined *)0x0) {
      F_005624c0(*(undefined * PTR32 *)(this + 0x2a3c),1,0,0);
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)(gen_frame + 0x44)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 2;
      (*(undefined4 *)(gen_frame + 0x30)) = 3;
      (*(undefined4 *)(gen_frame + 0x3c)) = 4;
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
      (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x7969a0));
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      F_00574320(*(undefined * PTR32 *)(this + 0x2a3c),&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x24)),3,0);
      if (*(int *)(this + 0x2a3c) == 0) {
        pvVar8 = (undefined *)0x0;
      }
      else {
        pvVar8 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a3c) + 0x70)));
      }
      F_00568380(pvVar8,0x21,3,this,0,0);
      if (*(int *)(this + 0x2a3c) == 0) {
        pvVar8 = (undefined *)0x0;
      }
      else {
        pvVar8 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a3c) + 0x70)));
      }
      F_00568380(pvVar8,0x20,3,this,0,0);
      if (*(int *)(this + 0x2a3c) == 0) {
        pvVar8 = (undefined *)0x0;
      }
      else {
        pvVar8 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a3c) + 0x70)));
      }
      F_00568380(pvVar8,0x1f,3,this,0,0);
      if (*(int *)(this + 0x2a3c) == 0) {
        pvVar8 = (undefined *)0x0;
      }
      else {
        pvVar8 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a3c) + 0x70)));
      }
      F_00568380(pvVar8,0x25,3,this,0,0);
      if (*(int *)(this + 0x2a3c) == 0) {
        pvVar8 = (undefined *)0x0;
      }
      else {
        pvVar8 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a3c) + 0x70)));
      }
      F_00568380(pvVar8,0x11,3,this,0,0);
      if (*(int *)(this + 0x2a3c) == 0) {
        pvVar8 = (undefined *)0x0;
      }
      else {
        pvVar8 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a3c) + 0x70)));
      }
      F_00568380(pvVar8,0x12,3,this,0,0);
    }
    F_007f7d10(this,4,0xffffffff);
    F_005a91d0(this,0,0x21);
    F_005a91d0(this,1,0x24);
    F_0056b630(this,0x792,7,0,9,0,0);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,(*(int *)(gen_frame + 0x1c)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2;
}

/* ref: Client::UI2::AddonItemSearch::vf2 */
uint F_0088b660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x88b660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined1 AVar1;
  int * piVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(undefined4 *)(gen_frame + 0x14)) = param_3;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
  case 0x11: ;
    if (param_2 == 3) {
      if (this[0x2a6c] != (undefined1)0x0) {
        uVar5 = 0x18ab7;
        goto LAB_0088b96c;
      }
      F_0056b780(this,0);
    }
    else {
      F_007f8110(this,1);
      F_007f7d10(this,0,0xffffffff);
    }
    break;
  case 0x12: ;
    if ((param_2 == 3) && (*((int *)GEN_TOP((*(int *)(this + 0x2a3c) + 0xcc))) < 0)) {
      uVar5 = 0x792;
LAB_0088b96c: ;
      F_0056b630(this,uVar5,7,0,9,0,0);
    }
    break;
  default: ;
    goto switchD_0088b6af_caseD_13;
  case 0x17: ;
    F_00839680(this,param_2,param_3,param_4);
    goto switchD_0088b6af_caseD_13;
  case 0x19: ;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a2c) + 0x28))))(*(int * PTR32 *)(this + 0x2a2c),1);
    if (param_2 == 0) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      uVar3 = *param_4;
      (*(undefined4 *)(gen_frame + 0x1c)) = 3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
      (*(uint *)(gen_frame + 0x24)) = uVar3;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x18)));
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    uVar3 = *(uint *)(this + 0xf54);
    (*(undefined4 *)(gen_frame + 0x1c)) = 5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
    (*(uint *)(gen_frame + 0x24)) = uVar3;
    uVar5 = *(undefined4 *)(this + 0xf50);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
    (*(undefined4 *)(gen_frame + 0x2c)) = uVar5;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x18)));
    break;
  case 0x1f: ;
    F_00560760(((undefined1 *)(gen_frame + 0x8)));
    (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x2a64) + (uint)(byte)this[param_4[2] + 0x29b8] * 0x10)));
    (*(undefined2 *)(gen_frame + 0x12)) = 1;
    (*(undefined2 *)(gen_frame + 0x10)) = 0xffff;
    if (*param_4 == 0) {
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(*param_4 + 0x70);
    }
    AVar1 = this[0x13a];
    uVar3 = F_0055dcb0();
    F_00588780((undefined *)(uVar3 + 0xe0),4,(uint)(byte)AVar1,(*(undefined4 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x8)),0,0);
    goto switchD_0088b6af_caseD_13;
  case 0x20: ;
    AVar1 = this[0x13a];
    uVar3 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar3 + 0xe0),(uint)(byte)AVar1,1);
    goto switchD_0088b6af_caseD_13;
  case 0x21: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = 4;
    AVar1 = this[param_4[2] + 0x29b8];
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
    (*(uint *)(gen_frame + 0x24)) = (uint)(byte)AVar1;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x18)));
    break;
  case 0x23: ;
    if (param_2 != 2) {
      if (param_2 == 4) {
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
        uVar3 = param_4[2];
        (*(undefined4 *)(gen_frame + 0x1c)) = 6;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
        (*(uint *)(gen_frame + 0x24)) = uVar3;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
        (*(undefined4 *)(gen_frame + 0x2c)) = 1;
        F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x18)));
      }
      goto switchD_0088b6af_caseD_13;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a2c) + 0x28))))(*(int * PTR32 *)(this + 0x2a2c),1);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    uVar3 = *(uint *)(this + 0xf54);
    (*(undefined4 *)(gen_frame + 0x1c)) = 5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
    (*(uint *)(gen_frame + 0x24)) = uVar3;
    uVar5 = *(undefined4 *)(this + 0xf50);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
    (*(undefined4 *)(gen_frame + 0x2c)) = uVar5;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x18)));
    break;
  case 0x25: ;
    piVar2 = *(int * PTR32 *)(this + 0xf48);
    if (piVar2 == (int *)0x0) {
      if (*(int *)(this + 0xf4c) == 0) goto switchD_0088b6af_caseD_13;
      F_0059b340(this,*(undefined4 *)(this + 0xf4c),1,0);
      *(undefined4 *)(this + 0xf4c) = 0;
    }
    else {
      uVar6 = 0;
      uVar5 = 1;
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2);
      F_0059b340(this,uVar3,uVar5,uVar6);
      *(undefined4 *)(this + 0xf4c) = 0;
    }
  }
  F_00557670((*(undefined4 *)(gen_frame + 0x14)),0);
switchD_0088b6af_caseD_13: ;
  this_00 = &(*(uint *)(gen_frame + 0x58));
  iVar4 = 7;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyOrganizeSheet::vf44 */
uint F_0088b9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88b9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined * pAVar5;
  
  uVar1 = F_0055e2f0(this,0x3c);
  *(uint *)(this + 0xa0) = uVar1;
  uVar1 = F_0055e340(this,0x18);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e360(this,3);
  *(uint *)(this + 0x184) = uVar1;
  pvVar2 = (undefined *)F_0055e360(this,4);
  *(undefined * PTR32 *)(this + 0x188) = pvVar2;
  F_0055a300(pvVar2,0);
  uVar1 = F_0055e340(this,0x20);
  *(uint *)(this + 0x18c) = uVar1;
  uVar1 = F_0055e340(this,0x21);
  *(uint *)(this + 400) = uVar1;
  uVar1 = F_0055e340(this,0x1a);
  *(uint *)(this + 0x194) = uVar1;
  uVar1 = F_0055e2f0(this,0x25);
  if (uVar1 == 0) {
    uVar1 = 0;
    pvVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar3 = F_005613a0(uVar1), uVar3 != 1)) {
      uVar1 = 0;
    }
    if (uVar1 == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(uVar1 + 0x70);
    }
  }
  F_00568380(pvVar2,0x17,1,this,0,0);
  *(uint *)(this + 0x198) = uVar1;
  uVar1 = F_0055e2f0(this,0x2a);
  if (uVar1 == 0) {
    uVar1 = 0;
    pvVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar3 = F_005613a0(uVar1), uVar3 != 1)) {
      uVar1 = 0;
    }
    if (uVar1 == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(uVar1 + 0x70);
    }
  }
  F_00568380(pvVar2,0x17,2,this,0,0);
  pAVar5 = this + 0x19c;
  *(uint *)pAVar5 = uVar1;
  uVar1 = F_0055e2f0(this,0x2b);
  if (uVar1 == 0) {
    uVar1 = 0;
    pvVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar3 = F_005613a0(uVar1), uVar3 != 1)) {
      uVar1 = 0;
    }
    if (uVar1 == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(uVar1 + 0x70);
    }
  }
  F_00568380(pvVar2,0x17,3,this,0,0);
  *(uint *)(this + 0x1a0) = uVar1;
  uVar1 = F_0055e2f0(this,0x2c);
  if (uVar1 == 0) {
    uVar1 = 0;
    pvVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar3 = F_005613a0(uVar1), uVar3 != 1)) {
      uVar1 = 0;
    }
    if (uVar1 == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(uVar1 + 0x70);
    }
  }
  F_00568380(pvVar2,0x17,4,this,0,0);
  *(uint *)(this + 0x1a4) = uVar1;
  uVar1 = F_0055e2f0(this,0x26);
  *(uint *)(this + 0x1a8) = uVar1;
  uVar1 = F_0055e360(this,0x2d);
  *(uint *)(this + 0x1ac) = uVar1;
  uVar1 = F_0055e340(this,0x2e);
  *(uint *)(this + 0x1b0) = uVar1;
  uVar1 = F_0055e340(this,0x32);
  *(uint *)(this + 0x1b4) = uVar1;
  uVar1 = F_0055e340(this,0x33);
  *(uint *)(this + 0x1b8) = uVar1;
  uVar1 = F_0055e2f0(this,0x35);
  *(uint *)(this + 0x1bc) = uVar1;
  uVar1 = F_0055e2f0(this,6);
  if (uVar1 == 0) {
    uVar1 = 0;
    pvVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar3 = F_005613a0(uVar1), uVar3 != 1)) {
      uVar1 = 0;
    }
    if (uVar1 == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(uVar1 + 0x70);
    }
  }
  F_00568380(pvVar2,0x17,5,this,0,0);
  *(uint *)(this + 0x1c0) = uVar1;
  uVar1 = F_0055e2f0(this,0x36);
  if (uVar1 == 0) {
    uVar1 = 0;
    pvVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar3 = F_005613a0(uVar1), uVar3 != 1)) {
      uVar1 = 0;
    }
    if (uVar1 == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(uVar1 + 0x70);
    }
  }
  F_00568380(pvVar2,0x17,6,this,0,0);
  *(uint *)(this + 0x1c4) = uVar1;
  uVar1 = F_0055e2f0(this,0x37);
  if (uVar1 == 0) {
    uVar1 = 0;
    pvVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar3 = F_005613a0(uVar1), uVar3 != 1)) {
      uVar1 = 0;
    }
    if (uVar1 == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(uVar1 + 0x70);
    }
  }
  F_00568380(pvVar2,0x17,7,this,0,0);
  *(uint *)(this + 0x1c8) = uVar1;
  uVar1 = F_0055e2f0(this,0x38);
  if (uVar1 == 0) {
    uVar1 = 0;
    pvVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar3 = F_005613a0(uVar1), uVar3 != 1)) {
      uVar1 = 0;
    }
    if (uVar1 == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(uVar1 + 0x70);
    }
  }
  F_00568380(pvVar2,0x17,8,this,0,0);
  *(uint *)(this + 0x1cc) = uVar1;
  F_00561ee0(*(undefined * PTR32 *)(this + 0x198),1,1);
  iVar4 = 3;
  do {
    F_00561ee0(*(undefined * PTR32 *)pAVar5,1,1);
    pAVar5 = pAVar5 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  F_005a91d0(this,1,0x2a);
  uVar1 = F_005a91d0(this,0,0x26);
  return uVar1;
}

/* ref: FUN_0088bd90 */
uint F_0088bd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x88bd90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 - 10;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    F_00557670(param_2,0);
    F_0083b340(this);
    uVar1 = F_00798960(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 0xc0))),0);
    return uVar1;
  case 1: ;
    F_00557670(param_2,0);
    F_0083b490(this);
    uVar1 = F_00798960(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 0xc0))),0);
    return uVar1;
  case 3: ;
    F_00557670(param_2,0);
    uVar1 = F_00798860(this);
    return uVar1;
  case 4: ;
    F_00557670(param_2,0);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyChest::vf44 */
unsigned int F_0088be50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88be50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined * pAVar6;
  int iVar7;
  undefined4 uVar8;
  int local_c;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 < 3) {
    return 0;
  }
  uVar3 = F_0055e2f0(this,0x68);
  *(uint *)(this + 0x180) = uVar3;
  uVar3 = F_0055e2f0(this,2);
  *(uint *)(this + 0x184) = uVar3;
  uVar3 = F_0055e2f0(this,5);
  *(uint *)(this + 0x188) = uVar3;
  iVar7 = 1;
  pAVar6 = this + 0x18c;
  local_c = 5;
  do {
    uVar3 = F_0055e2f0(this,iVar7 + 5);
    if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
       (uVar4 = F_005613a0(uVar3), uVar4 != 4)) {
      uVar3 = 0;
    }
    *(uint *)pAVar6 = uVar3;
    if (uVar3 == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *(undefined * PTR32 *)(uVar3 + 0x70);
    }
    F_00568380(pvVar5,0x17,iVar7,this,0,0);
    uVar3 = *(uint *)pAVar6;
    pAVar6 = pAVar6 + 4;
    iVar7 = iVar7 + 1;
    local_c = local_c + -1;
    *(undefined1 *)(uVar3 + 0x136) = 1;
  } while (local_c != 0);
  uVar3 = F_0055e2f0(this,0xb);
  if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
     (uVar4 = F_005613a0(uVar3), uVar4 != 4)) {
    uVar3 = 0;
  }
  *(uint *)(this + 0x1a0) = uVar3;
  pvVar5 = (undefined *)0x0;
  if (uVar3 != 0) {
    pvVar5 = *(undefined * PTR32 *)(uVar3 + 0x70);
  }
  F_00568380(pvVar5,0x17,6,this,0,0);
  *((undefined1 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x136))) = 1;
  uVar3 = F_0055e2f0(this,0xc);
  if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
     (uVar4 = F_005613a0(uVar3), uVar4 != 4)) {
    uVar3 = 0;
  }
  *(uint *)(this + 0x1a4) = uVar3;
  if (uVar3 == 0) {
    pvVar5 = (undefined *)0x0;
  }
  else {
    pvVar5 = *(undefined * PTR32 *)(uVar3 + 0x70);
  }
  F_00568380(pvVar5,0x17,7,this,0,0);
  *((undefined1 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x136))) = 1;
  pAVar6 = this + 0x1a8;
  iVar7 = 9;
  do {
    uVar3 = F_0055e2f0(this,iVar7 + 10);
    if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
       (uVar4 = F_005613a0(uVar3), uVar4 != 0x11)) {
      uVar3 = 0;
    }
    *(uint *)pAVar6 = uVar3;
    *(short *)(uVar3 + 0x9c) = (short)iVar7 + -9;
    *(undefined4 *)(*(uint *)pAVar6 + 0x98) = 0x10;
    *(undefined4 *)(*(uint *)pAVar6 + 0xa0) = 0x10;
    *(undefined1 *)(*(uint *)pAVar6 + 0xa9) = 0;
    pvVar5 = (undefined *)0x0;
    if (*(uint *)pAVar6 != 0) {
      pvVar5 = *(undefined * PTR32 *)(*(uint *)pAVar6 + 0x70);
    }
    F_00568380(pvVar5,0x2d,iVar7,this,0,0);
    pvVar5 = (undefined *)0x0;
    if (*(uint *)pAVar6 != 0) {
      pvVar5 = *(undefined * PTR32 *)(*(uint *)pAVar6 + 0x70);
    }
    F_00568380(pvVar5,0x2e,iVar7,this,0,0);
    pvVar5 = (undefined *)0x0;
    if (*(uint *)pAVar6 != 0) {
      pvVar5 = *(undefined * PTR32 *)(*(uint *)pAVar6 + 0x70);
    }
    F_00568380(pvVar5,0x30,iVar7,this,0,0);
    pvVar5 = (undefined *)0x0;
    if (*(uint *)pAVar6 != 0) {
      pvVar5 = *(undefined * PTR32 *)(*(uint *)pAVar6 + 0x70);
    }
    F_00568380(pvVar5,0x34,iVar7,this,0,0);
    pvVar5 = (undefined *)0x0;
    if (*(uint *)pAVar6 != 0) {
      pvVar5 = *(undefined * PTR32 *)(*(uint *)pAVar6 + 0x70);
    }
    F_00568380(pvVar5,3,iVar7,this,0,0);
    iVar1 = iVar7 + -8;
    pAVar6 = pAVar6 + 4;
    iVar7 = iVar7 + 1;
  } while (iVar1 < 0x32);
  pAVar6 = this + 0x270;
  iVar7 = 0x3b;
  do {
    uVar3 = F_0055e2f0(this,iVar7 + 0x17);
    if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
       (uVar4 = F_005613a0(uVar3), uVar4 != 0x11)) {
      uVar3 = 0;
    }
    *(uint *)pAVar6 = uVar3;
    *(short *)(uVar3 + 0x9c) = (short)iVar7 + -0x3b;
    *(undefined4 *)(*(uint *)pAVar6 + 0x98) = 0x8000;
    *(undefined4 *)(*(uint *)pAVar6 + 0xa0) = 0x8000;
    *(undefined1 *)(*(uint *)pAVar6 + 0xa9) = 3;
    pvVar5 = (undefined *)0x0;
    if (*(uint *)pAVar6 != 0) {
      pvVar5 = *(undefined * PTR32 *)(*(uint *)pAVar6 + 0x70);
    }
    F_00568380(pvVar5,0x2d,iVar7,this,0,0);
    pvVar5 = (undefined *)0x0;
    if (*(uint *)pAVar6 != 0) {
      pvVar5 = *(undefined * PTR32 *)(*(uint *)pAVar6 + 0x70);
    }
    F_00568380(pvVar5,0x30,iVar7,this,0,0);
    pvVar5 = (undefined *)0x0;
    if (*(uint *)pAVar6 != 0) {
      pvVar5 = *(undefined * PTR32 *)(*(uint *)pAVar6 + 0x70);
    }
    F_00568380(pvVar5,0x34,iVar7,this,0,0);
    pvVar5 = (undefined *)0x0;
    if (*(uint *)pAVar6 != 0) {
      pvVar5 = *(undefined * PTR32 *)(*(uint *)pAVar6 + 0x70);
    }
    F_00568380(pvVar5,3,iVar7,this,0,0);
    uVar3 = iVar7 - 0x3a;
    pAVar6 = pAVar6 + 4;
    iVar7 = iVar7 + 1;
  } while (uVar3 < 0x12);
  uVar3 = F_0055e340(this,100);
  *(uint *)(this + 0x2b8) = uVar3;
  uVar3 = F_0055e2f0(this,0xd);
  *(uint *)(this + 700) = uVar3;
  uVar3 = F_0055e2f0(this,0xe);
  if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
     (uVar4 = F_005613a0(uVar3), uVar4 != 1)) {
    uVar3 = 0;
  }
  *(uint *)(this + 0x2c0) = uVar3;
  if (uVar3 == 0) {
    pvVar5 = (undefined *)0x0;
  }
  else {
    pvVar5 = *(undefined * PTR32 *)(uVar3 + 0x70);
  }
  F_00568380(pvVar5,0x17,8,this,0,0);
  F_0083ba00(this,param_1,param_2,1);
  *(undefined4 *)(this + 0x2d4) = 0;
  F_0056b780(this,0);
  uVar3 = 0;
  if (this[0x2c4] == (undefined1)0x1) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,0);
    uVar2 = F_0055a030(*(undefined4 *)(this + 0x180));
    uVar3 = (uint)(ushort)(uVar2 - (short)uVar3);
  }
  if (*(int *)(this + 0x2d4) == 1) {
    if (((byte)(*(uint *)(this + 0x2c8) >> ((char)this[0x2c5] * '\x02' & 0x1fU)) & 3) != 2)
    goto LAB_0088c298;
    uVar4 = F_0055dcb0();
    if (*(char *)(uVar4 + 0xbc) == '\0') {
      uVar8 = 0x18adc;
    }
    else {
      uVar8 = 0x18add;
    }
  }
  else {
    if ((*(int *)(this + 0x2d4) != 2) || (*(int *)(this + 0x2cc) != 2)) goto LAB_0088c298;
    uVar8 = 0x18adf;
  }
  F_0056b630(this,uVar8,7,0,9,0,uVar3);
LAB_0088c298: ;
  F_005a91d0(this,1,0x37);
  F_005a91d0(this,0,0x33);
  return 0;
}

/* ref: Client::UI2::AddonFreeCompanyChest::vf46 */
byte F_0088c2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88c2c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = 1;
  if (((byte)this[0xf9] & 1) != 0) {
    bVar1 = F_0083ba00(this,param_1,param_2,0);
  }
  return bVar1;
}

/* ref: FUN_0088c2e0 */
uint F_0088c2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x88c2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 - 1 < 5) {
    F_0083bfd0(this,param_1 - 1,1);
    uVar1 = F_00557670(param_2,0);
    return uVar1;
  }
  if (param_1 == 6) {
    F_0083c080(this,1);
    param_1 = F_00557670(param_2,0);
  }
  else if ((6 < param_1) && (param_1 < 9)) {
    F_00798fd0(this);
    uVar1 = F_00557670(param_2,0);
    return uVar1;
  }
  return param_1;
}

/* ref: FUN_0088c340 */
uint F_0088c340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x88c340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  if (param_1 - 9 < 0x32) {
    iVar1 = *(int *)((int)this + param_1 * 4 + 0x184);
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x84) + 0x28))))(iVar1 + 0x84)));
    piVar2[1] = param_1 - 9;
    *piVar2 = *(byte *)((int)this + 0x2c5) + 0x3e;
    *(undefined4 *)((int)this + 0x2d4) = 1;
    F_007994c0(this,1);
    uVar3 = F_00557670(param_2,0);
    return uVar3;
  }
  if (param_1 - 0x3b < 0x12) {
    F_0083c160(this,param_1 - 0x3b);
    param_1 = F_00557670(param_2,0);
  }
  return param_1;
}

/* ref: FUN_0088c3d0 */
uint F_0088c3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x88c3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 - 9 < 0x32) {
    *(undefined4 *)((int)this + 0x2d4) = 1;
    F_007994c0(this,0);
    uVar1 = F_00557670(param_2,0);
    return uVar1;
  }
  if (param_1 - 0x3b < 0x12) {
    F_0083c250(this,param_1 - 0x3b);
    param_1 = F_00557670(param_2,0);
  }
  return param_1;
}

/* ref: FUN_0088c420 */
uint F_0088c420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x88c420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (param_1 < 9) {
    if (*(uint *)((int)this + 0x260) <= param_1) {
      param_1 = *(uint *)((int)this + 0x260) - 1;
    }
    *(uint *)((int)this + 0x25c) = param_1;
    F_0083c670(this);
    iVar2 = 0x18;
    if (*(int *)((int)this + 0x25c) == *(int *)((int)this + 0x260) + -1) {
      piVar1 = ((int *)GEN_TOP(((int)this + *(int *)((int)this + 600) * 0x10 + 0x208)));
      iVar2 = (piVar1[1] - *piVar1 >> 3) + *(int *)((int)this + 0x25c) * -0x18;
    }
    F_0059ead0(*(undefined * PTR32 *)((int)this + 0x1c8),iVar2,0,1);
    F_0083c5b0(this);
    uVar4 = 0;
    puVar3 = (undefined4 *)((int)this + 0x1d4);
    do {
      param_1 = F_0059dde0((undefined *)*puVar3,(uint)(*(uint *)((int)this + 0x25c) == uVar4));
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < 9);
  }
  return param_1;
}

/* ref: FUN_0088c4d0 */
uint F_0088c4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x88c4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00560050((int)this + 0x1f8,param_1);
  F_0083c5b0(this);
  uVar1 = F_00799d60(this,4,(int)this + 0x1f8);
  return uVar1;
}

/* ref: FUN_0088c500 */
uint F_0088c500(unsigned int gen_a0)
{
  GEN_ENTER(0x88c500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ushort * puVar5;
  uint uVar6;
  
  iVar1 = *(int *)((int)this + 600);
  uVar6 = 0xffffffff;
  if (iVar1 == 0) {
    bVar2 = F_0056bb30((int)this + 0x1f8);
  }
  else if (iVar1 == 1) {
    bVar2 = F_0056bbb0((int)this + 0x1f8);
  }
  else {
    if (iVar1 != 2) goto LAB_0088c541;
    bVar2 = F_0056bb70((int)this + 0x1f8);
  }
  uVar6 = (uint)bVar2;
LAB_0088c541: ;
  puVar5 = *((ushort * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 600) * 0x10 + 0x208)));
  uVar3 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 600) * 0x10 + 0x20c))) - (int)((int)(uintptr_t)puVar5) >> 3;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      if (*puVar5 == uVar6) {
        if (-1 < (int)uVar4) {
          F_0088c420(this,uVar4 / 0x18);
          uVar6 = F_0083c5b0(this);
          return uVar6;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 4;
    } while (uVar4 < uVar3);
  }
  F_0088c420(this,0);
  uVar6 = F_0083c5b0(this);
  return uVar6;
}

/* ref: FUN_0088c5b0 */
uint F_0088c5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88c5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  int iVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_1 + 0xf0);
    param_1 = 0;
    if (iVar1 != 0) {
      puVar2 = *(uint * PTR32 *)(iVar1 + 0x20);
      uVar7 = puVar2[3];
      uVar3 = puVar2[5];
      uVar4 = *puVar2;
      uVar5 = puVar2[4];
      uVar6 = puVar2[6];
      if ((uVar4 & 2) != 0) {
        this_00 = (undefined *)((int)this + 0x198);
        F_00560080(this_00,uVar7);
        F_005600b0(this_00,uVar5);
        F_00560080((undefined *)((int)this + 0x1a0),uVar3);
        F_005600b0((undefined *)((int)this + 0x1a0),uVar6);
        F_00560050((int)this + 400,this_00);
        **(uint * PTR32 *)(iVar1 + 0x20) = uVar4 & 0xfffffffd;
        uVar7 = F_0083c990(this);
        return uVar7;
      }
      F_0079a0e0((int)this + 0x1a0,uVar3,uVar6);
      F_0079a0e0((int)this + 0x198,uVar7,uVar5);
      param_1 = F_0083c990(this);
    }
  }
  return param_1;
}

/* ref: FUN_0088c6a0 */
uint F_0088c6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x88c6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00560050((int)this + 0x198,param_1);
  F_0083c990(this);
  uVar1 = F_00799f70(this,3,(int)this + 0x198);
  return uVar1;
}

/* ref: FUN_0088c6d0 */
uint F_0088c6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88c6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  int iVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_1 + 0xf0);
    param_1 = 0;
    if (iVar1 != 0) {
      puVar2 = *(uint * PTR32 *)(iVar1 + 0x20);
      uVar7 = puVar2[3];
      uVar3 = puVar2[5];
      uVar4 = *puVar2;
      uVar5 = puVar2[4];
      uVar6 = puVar2[6];
      if ((uVar4 & 4) != 0) {
        this_00 = (undefined *)((int)this + 0x198);
        F_00560080(this_00,uVar7);
        F_005600b0(this_00,uVar5);
        F_00560080((undefined *)((int)this + 0x1a0),uVar3);
        F_005600b0((undefined *)((int)this + 0x1a0),uVar6);
        F_00560050((int)this + 400,this_00);
        **(uint * PTR32 *)(iVar1 + 0x20) = uVar4 & 0xfffffffb;
        uVar7 = F_0083cb40(this);
        return uVar7;
      }
      F_0079a240((int)this + 0x1a0,uVar3,uVar6);
      param_1 = F_0079a240((int)this + 0x198,uVar7,uVar5);
    }
  }
  return param_1;
}

/* ref: FUN_0088c7b0 */
uint F_0088c7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x88c7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00560050((int)this + 0x198,param_1);
  F_0083cb40(this);
  uVar1 = F_0079a1a0(this,3,(int)this + 0x198);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompany::vf2 */
unsigned int F_0088c7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x88c7e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (((short)param_1 == 0x17) && (param_2 - 1U < 6)) {
    F_007fb6c0(this,(uint)(byte)((char)param_2 - 1));
    F_00557670(param_3,0);
  }
  return 0;
}

/* ref: Client::UI2::AddonFreeCompanyMember::vf44 */
uint F_0088c810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88c810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  byte * pbVar1;
  ushort uVar2;
  undefined2 extraout_var = 0;
  uint uVar3;
  uint uVar4;
  undefined * pAVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  int * piVar8;
  undefined * pvVar9;
  int iVar10;
  undefined * pAVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(byte * PTR32 *)(gen_frame + 0x20)) = param_2;
  F_0055e1c0(this,(float)(float10)0,0,0,(float)(float10)1,0);
  uVar2 = F_0055e220(this,(float)(float10)0,0,0,(float)(float10)1,0);
  uVar3 = CONCAT22(extraout_var,uVar2);
  if ((param_2 != (byte *)0x0) && (4 < param_1)) {
    iVar10 = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = this + 0x180;
    do {
      uVar3 = F_0055e2f0(this,iVar10 + 0xd);
      if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
         (uVar4 = F_005613a0(uVar3), uVar4 != 4)) {
        uVar3 = 0;
      }
      *(uint *)(*(undefined * PTR32 *)(gen_frame + 0x24)) = uVar3;
      iVar10 = iVar10 + 1;
      (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)(gen_frame + 0x24)) + 4;
    } while (iVar10 < 4);
    iVar10 = 1;
    pAVar11 = this + 400;
    (*(int *)(gen_frame + 0x1c)) = 3;
    do {
      uVar3 = F_0055e2f0(this,iVar10 + 2);
      if (uVar3 == 0) {
LAB_0088c914: ;
        pAVar5 = (undefined *)0x0;
      }
      else {
        (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)F_00559c20(uVar3);
        if (((*(undefined * PTR32 *)(gen_frame + 0x24)) == (undefined *)0x0) ||
           (uVar3 = F_005613a0((*(undefined * PTR32 *)(gen_frame + 0x24))), pAVar5 = (*(undefined * PTR32 *)(gen_frame + 0x24)), uVar3 != 4)) goto LAB_0088c914;
      }
      *(undefined * PTR32 *)pAVar11 = pAVar5;
      uVar3 = F_00560910(iVar10);
      F_00589280(*(undefined * PTR32 *)pAVar11,uVar3);
      pAVar11 = pAVar11 + 4;
      iVar10 = iVar10 + 1;
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + -1;
    } while ((*(int *)(gen_frame + 0x1c)) != 0);
    uVar3 = F_0055e2f0(this,0x1f);
    if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
       (uVar4 = F_005613a0(uVar3), uVar4 != 9)) {
      uVar3 = 0;
    }
    *(uint *)(this + 0x19c) = uVar3;
    uVar3 = F_0055e340(this,0x25);
    *(uint *)(this + 0x1a0) = uVar3;
    uVar3 = F_0055e2f0(this,0x11);
    if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
       (uVar4 = F_005613a0(uVar3), uVar4 != 3)) {
      uVar3 = 0;
    }
    *(uint *)(this + 0x1a4) = uVar3;
    uVar3 = F_0055e2f0(this,0xb);
    *(uint *)(this + 0x1a8) = uVar3;
    uVar3 = F_0055e340(this,0x20);
    *(uint *)(this + 0x1ac) = uVar3;
    uVar3 = F_0055e2f0(this,0x23);
    if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
       (uVar4 = F_005613a0(uVar3), uVar4 != 1)) {
      uVar3 = 0;
    }
    *(uint *)(this + 0x1b0) = uVar3;
    iVar10 = 0;
    pAVar11 = this + 400;
    do {
      if (*(int *)pAVar11 == 0) {
        pvVar9 = (undefined *)0x0;
      }
      else {
        pvVar9 = *(undefined * PTR32 *)(*(int *)pAVar11 + 0x70);
      }
      F_00568380(pvVar9,0x17,iVar10 + 2,this,0,0);
      iVar10 = iVar10 + 1;
      pAVar11 = pAVar11 + 4;
    } while (iVar10 < 3);
    if (*(int *)(this + 0x19c) == 0) {
      pvVar9 = (undefined *)0x0;
    }
    else {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_00568380(pvVar9,0x21,1,this,0,0);
    if (*(int *)(this + 0x19c) == 0) {
      pvVar9 = (undefined *)0x0;
    }
    else {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_00568380(pvVar9,0x1f,1,this,0,0);
    if (*(int *)(this + 0x19c) == 0) {
      pvVar9 = (undefined *)0x0;
    }
    else {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_00568380(pvVar9,0x20,1,this,0,0);
    if (*(int *)(this + 0x1a4) == 0) {
      pvVar9 = (undefined *)0x0;
    }
    else {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_00568380(pvVar9,0x17,5,this,0,0);
    if (*(int *)(this + 0x1a4) == 0) {
      pvVar9 = (undefined *)0x0;
    }
    else {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_00568380(pvVar9,6,5,this,0,0);
    if (*(int *)(this + 0x1a4) == 0) {
      pvVar9 = (undefined *)0x0;
    }
    else {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_00568380(pvVar9,7,5,this,0,0);
    if (*(int *)(this + 0x1b0) == 0) {
      pvVar9 = (undefined *)0x0;
    }
    else {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70)));
    }
    F_00568380(pvVar9,0x17,6,this,0,0);
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x68))),6,6,this,0,0);
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x68))),7,6,this,0,0);
    iVar10 = 0xf;
    puVar6 = &(*(undefined4 *)(gen_frame + 0x30));
    do {
      puVar6[-2] = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6 = puVar6 + 3;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
    ((undefined4 *)(gen_frame + 0x28))[0] = 2;
    (*(undefined4 *)(gen_frame + 0x34)) = 4;
    (*(undefined4 *)(gen_frame + 0x40)) = 5;
    (*(undefined4 *)(gen_frame + 0x4c)) = 7;
    (*(undefined4 *)(gen_frame + 0x58)) = 0xb;
    (*(undefined4 *)(gen_frame + 0x64)) = 0xc;
    (*(undefined4 *)(gen_frame + 0x70)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x7c)) = 0x10;
    (*(undefined4 *)(gen_frame + 0x88)) = 0x12;
    (*(undefined4 *)(gen_frame + 0x94)) = 0x14;
    (*(undefined4 *)(gen_frame + 0xa0)) = 0x16;
    (*(undefined4 *)(gen_frame + 0xac)) = 0x20;
    (*(undefined4 *)(gen_frame + 0xb8)) = 0x22;
    (*(undefined4 *)(gen_frame + 0xc4)) = 0x23;
    (*(undefined4 *)(gen_frame + 0xd0)) = 0x24;
    (*(undefined4 *)(gen_frame + 0xdc)) = 0x25;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
    (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x79b940));
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    F_00574320(*(undefined * PTR32 *)(this + 0x19c),&(*(undefined * PTR32 *)(gen_frame + 0xc)),((undefined4 *)(gen_frame + 0x28)),0x10,0);
    F_0059ead0(*(undefined * PTR32 *)(this + 0x19c),0,0,1);
    F_005624c0(*(undefined * PTR32 *)(this + 0x19c),1,1,0);
    if ((*(*(byte * PTR32 *)(gen_frame + 0x20)) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)((*(byte * PTR32 *)(gen_frame + 0x20)) + 4);
    }
    this[0x1b4] = SUB41(uVar3,0);
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP((this + (uVar3 & 0xff) * 4 + 0x180))),1);
    *(undefined2 *)(this + 0x1b5) = 0x100;
    iVar10 = 0;
    pAVar11 = this + 400;
    do {
      F_0059dde0(*(undefined * PTR32 *)pAVar11,(uint)(iVar10 == 0));
      pbVar1 = (*(byte * PTR32 *)(gen_frame + 0x20));
      iVar10 = iVar10 + 1;
      pAVar11 = pAVar11 + 4;
    } while (iVar10 < 3);
    if (((*(byte * PTR32 *)(gen_frame + 0x20))[8] & 0xf) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x20)) + 0xc);
    }
    uVar12 = 0;
    *(undefined4 *)(this + 0x1b8) = uVar7;
    *(undefined4 *)(this + 0x1bc) = 0;
    pvVar9 = (undefined *)F_0055dcb0();
    uVar3 = F_005b03e0(pvVar9,uVar12,uVar7);
    F_00584110(*(undefined * PTR32 *)(this + 0x1a0),uVar3);
    F_007fc080(this,*(undefined4 *)(this + 0x1bc));
    if ((pbVar1[0x10] & 0xf) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(pbVar1 + 0x14);
    }
    F_0059dde0(*(undefined * PTR32 *)(this + 0x1a4),(uint)(iVar10 != 0));
    if ((pbVar1[0x18] & 0xf) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(pbVar1 + 0x1c);
    }
    F_0042e430(this + 0x1c0,uVar7);
    if ((pbVar1[0x20] & 0xf) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(pbVar1 + 0x24);
    }
    F_0042e430(this + 0x214,uVar7);
    uVar3 = F_0055dcb0();
    piVar8 = (int *)F_0055b990(uVar3);
    iVar10 = *((int *)GEN_TOP((*(int *)(*piVar8 + 0x20) + 0x44)));
    if ((iVar10 == 4) || (iVar10 == 5)) {
      uVar7 = 0x65;
      pvVar9 = (undefined *)F_0055e2f0(this,0x19);
      F_0059d670(pvVar9,uVar7);
    }
    F_0056b780(this,0);
    if (*((char *)GEN_TOP((*(int *)(this + 0x1a4) + 0x88))) == '\0') {
      if ((byte)this[0x1b6] < 2) {
        uVar7 = 0x18aba;
      }
      else {
        uVar7 = 0x18ad0;
      }
    }
    else if ((byte)this[0x1b6] < 2) {
      uVar7 = 0x18abb;
    }
    else {
      uVar7 = 0x18ad1;
    }
    F_0056b630(this,uVar7,7,0,9,0,0);
    F_005a91d0(this,1,0x27);
    uVar3 = F_005a91d0(this,0,0x24);
  }
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyMember::vf47 */
uint F_0088cdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88cdc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  uVar3 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x1900)));
  iVar4 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x190c)));
  if (iVar4 == 0) {
    F_0059d670(*(undefined * PTR32 *)(this + 0x1a8),0x11);
    F_005842a0(*(undefined * PTR32 *)(this + 0x1ac),0xffffffff);
    uVar3 = 0;
  }
  else if (iVar4 == 1) {
    if ((int)uVar3 < 1) {
      F_0059d670(*(undefined * PTR32 *)(this + 0x1a8),0x65);
      F_005842a0(*(undefined * PTR32 *)(this + 0x1ac),0xa2f);
    }
    else {
      F_0059d670(*(undefined * PTR32 *)(this + 0x1a8),0x11);
      F_005842a0(*(undefined * PTR32 *)(this + 0x1ac),0xffffffff);
    }
  }
  else if (iVar4 == 2) {
    if ((int)uVar3 < 1) {
      F_0059d670(*(undefined * PTR32 *)(this + 0x1a8),0x65);
      F_005842a0(*(undefined * PTR32 *)(this + 0x1ac),0xa30);
    }
    else {
      F_0059d670(*(undefined * PTR32 *)(this + 0x1a8),0x11);
      F_005842a0(*(undefined * PTR32 *)(this + 0x1ac),0xffffffff);
    }
  }
  iVar4 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x1904)));
  if (iVar4 != *(int *)(this + 0x1bc)) {
    uVar5 = *(undefined4 *)(this + 0x1b8);
    *(int *)(this + 0x1bc) = iVar4;
    this_00 = (undefined *)F_0055dcb0();
    uVar2 = F_005b03e0(this_00,iVar4,uVar5);
    F_00584110(*(undefined * PTR32 *)(this + 0x1a0),uVar2);
    F_007fc080(this,*(undefined4 *)(this + 0x1bc));
    F_0079bf10(this);
  }
  if ((int)uVar3 < 1) {
    F_0059ead0(*(undefined * PTR32 *)(this + 0x19c),0,0,1);
  }
  else {
    F_0058d980(*(undefined * PTR32 *)(this + 0x19c),uVar3);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x19c) + 0x70))))(*(int * PTR32 *)(this + 0x19c));
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1b0) + 0x28))))
                    (*(int * PTR32 *)(this + 0x1b0),(uint)(*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x1908))) == 0))
  ;
  return uVar3;
}

/* ref: Client::UI2::AddonJournal::vf44 */
uint F_0088cf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88cf20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined3 extraout_var = 0;
  undefined * pvVar7;
  int iVar8;
  undefined * this_00;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((this[0x6f4] == (undefined1)0x0) || (*(int *)(this + 0x6d8) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_0093f170(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x6dc) + 0x14))),REFG(undefined * PTR32, 0x1328400),0,0,
                         *((ushort *)GEN_TOP((*(int *)(this + 0x6d8) + 0xf6))) & 0xf,0);
    uVar3 = F_00594fc0(this + 0x6c0,uVar3,1,0,0,uVar3,0,1,0,0);
    if ((uVar3 != 0) && (*(int *)(uVar3 + 4) != 0)) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar3 + 4) + 0x13b))) = *((undefined1 *)GEN_TOP((*(int *)(this + 0x6d8) + 0x13a)))
      ;
    }
  }
  *(uint *)(this + 0x188) = uVar3;
  uVar3 = F_0055e2f0(this,8);
  if (uVar3 == 0) {
    ((uint *)(gen_frame + 0x20))[2] = 0;
    pvVar7 = (undefined *)0x0;
  }
  else {
    ((uint *)(gen_frame + 0x20))[2] = F_00559c20(uVar3);
    if ((((uint *)(gen_frame + 0x20))[2] == 0) || (uVar3 = F_005613a0(((uint *)(gen_frame + 0x20))[2]), uVar3 != 1)) {
      ((uint *)(gen_frame + 0x20))[2] = 0;
    }
    if (((uint *)(gen_frame + 0x20))[2] == 0) {
      pvVar7 = (undefined *)0x0;
    }
    else {
      pvVar7 = *(undefined * PTR32 *)(((uint *)(gen_frame + 0x20))[2] + 0x70);
    }
  }
  F_00568380(pvVar7,0x17,8,this,0,0);
  uVar3 = F_0055e2f0(this,3);
  if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
     (uVar4 = F_005613a0(uVar3), uVar4 != 10)) {
    uVar3 = 0;
  }
  *(uint *)(this + 0x18c) = uVar3;
  if (uVar3 != 0) {
    ((uint *)(gen_frame + 0x20))[0] = 0;
    ((uint *)(gen_frame + 0x20))[1] = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
    (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x79dbb0));
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    F_00574320(*(undefined * PTR32 *)(uVar3 + 0x88),&(*(undefined * PTR32 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x1c)),1,0);
    if (*(int *)(this + 0x18c) == 0) {
      pvVar7 = (undefined *)0x0;
    }
    else {
      pvVar7 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_00568380(pvVar7,0x23,0,this,0,0);
    F_0059caa0(*(undefined * PTR32 *)(this + 0x18c),0);
  }
  uVar3 = F_0055e2f0(this,6);
  if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
     (uVar4 = F_005613a0(uVar3), uVar4 != 0xc)) {
    uVar3 = 0;
  }
  *(uint *)(this + 400) = uVar3;
  if (uVar3 != 0) {
    F_00568380(*(undefined * PTR32 *)(uVar3 + 0x70),0x21,1,this,0,0);
    if (*(int *)(this + 400) == 0) {
      pvVar7 = (undefined *)0x0;
    }
    else {
      pvVar7 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_00568380(pvVar7,0x23,2,this,0,0);
    if (*(int *)(this + 400) == 0) {
      pvVar7 = (undefined *)0x0;
    }
    else {
      pvVar7 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_00568380(pvVar7,0x29,3,this,0,0);
    if (*(int *)(this + 400) == 0) {
      pvVar7 = (undefined *)0x0;
    }
    else {
      pvVar7 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_00568380(pvVar7,0x1f,4,this,0,0);
    if (*(int *)(this + 400) == 0) {
      pvVar7 = (undefined *)0x0;
    }
    else {
      pvVar7 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_00568380(pvVar7,0x20,5,this,0,0);
    F_007fd630(this);
    uVar2 = F_0056d300(*(undefined * PTR32 *)(this + 400),4);
    iVar8 = 0;
    if (uVar2 != 0) {
      do {
        uVar3 = F_0056d250(*(undefined * PTR32 *)(this + 400),4,iVar8);
        if (uVar3 != 0) {
          uVar10 = 0;
          uVar9 = 1;
          pvVar7 = (undefined *)F_0056d250(*(undefined * PTR32 *)(this + 400),4,iVar8);
          F_00561ee0(pvVar7,uVar9,uVar10);
        }
        iVar8 = iVar8 + 1;
      } while ((ushort)iVar8 < uVar2);
    }
    *((undefined1 *)GEN_TOP((*(int *)(this + 400) + 0x111))) = 2;
  }
  F_00568380(*(undefined * PTR32 *)(this + 0x90),0xf,0,this,0,0);
  uVar3 = F_0055e340(this,7);
  *(uint *)(this + 0x194) = uVar3;
  this_00 = this + 0x1ac;
  iVar8 = 0xa1;
  do {
    F_005a2710(this_00,1);
    this_00 = this_00 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (param_1 == (undefined *)0xa) {
    param_1 = this + 0x198;
    ((uint *)(gen_frame + 0x20))[0] = 5;
    ((uint *)(gen_frame + 0x20))[1] = 4;
    uVar3 = 0;
    do {
      uVar4 = F_0055e2f0(this,((uint *)(gen_frame + 0x20))[uVar3]);
      if (((uVar4 == 0) || (uVar4 = F_00559c20(uVar4), uVar4 == 0)) ||
         (uVar5 = F_005613a0(uVar4), uVar5 != 4)) {
        uVar4 = 0;
      }
      *(uint *)param_1 = uVar4;
      if (uVar4 == 0) {
        pvVar7 = (undefined *)0x0;
      }
      else {
        pvVar7 = *(undefined * PTR32 *)(uVar4 + 0x70);
      }
      F_00568380(pvVar7,0x17,uVar3 + 6,this,0,0);
      param_1 = param_1 + 4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 2);
    if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(param_2 + 0x14);
    }
    F_007fd070(this,uVar9);
    if ((*(byte *)(param_2 + 0x20) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x24);
    }
    uVar4 = F_0055e2f0(this,0x15);
    if (((uVar4 != 0) && (pvVar7 = (undefined *)F_00559c20(uVar4), pvVar7 != (undefined *)0x0)) &&
       (uVar4 = F_005613a0(pvVar7), uVar4 == 0)) {
      pvVar6 = (undefined *)F_00561530(pvVar7,2);
      pvVar7 = (undefined *)F_00561530(pvVar7,4);
      uVar4 = (int)uVar3 >> 0x10 & 0xffff;
      F_0055dcb0();
      uVar4 = F_0056a410(uVar4);
      F_00584110(pvVar6,uVar4);
      uVar3 = uVar3 & 0xffff;
      F_0055dcb0();
      uVar3 = F_0056a410(uVar3);
      F_00584110(pvVar7,uVar3);
    }
    if ((*(byte *)(param_2 + 0x30) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x34);
    }
    uVar4 = F_0055e2f0(this,0x18);
    if (((uVar4 != 0) && (pvVar7 = (undefined *)F_00559c20(uVar4), pvVar7 != (undefined *)0x0)) &&
       (uVar4 = F_005613a0(pvVar7), uVar4 == 0)) {
      pvVar6 = (undefined *)F_00561530(pvVar7,2);
      pvVar7 = (undefined *)F_00561530(pvVar7,4);
      uVar4 = (int)uVar3 >> 0x10 & 0xffff;
      F_0055dcb0();
      uVar4 = F_0056a410(uVar4);
      F_00584110(pvVar6,uVar4);
      uVar3 = uVar3 & 0xffff;
      F_0055dcb0();
      uVar3 = F_0056a410(uVar3);
      F_00584110(pvVar7,uVar3);
    }
    if ((*(byte *)(param_2 + 0x40) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x44);
    }
    uVar4 = F_0055e2f0(this,0x1b);
    if (((uVar4 != 0) && (pvVar7 = (undefined *)F_00559c20(uVar4), pvVar7 != (undefined *)0x0)) &&
       (uVar4 = F_005613a0(pvVar7), uVar4 == 0)) {
      pvVar6 = (undefined *)F_00561530(pvVar7,2);
      pvVar7 = (undefined *)F_00561530(pvVar7,4);
      uVar4 = (int)uVar3 >> 0x10 & 0xffff;
      F_0055dcb0();
      uVar4 = F_0056a410(uVar4);
      F_00584110(pvVar6,uVar4);
      uVar3 = uVar3 & 0xffff;
      F_0055dcb0();
      uVar3 = F_0056a410(uVar3);
      F_00584110(pvVar7,uVar3);
    }
    uVar9 = 0;
    pvVar7 = (undefined *)F_0055e2f0(this,0x13);
    F_0055a300(pvVar7,uVar9);
    uVar9 = 0;
    pvVar7 = (undefined *)F_0055e2f0(this,0x16);
    F_0055a300(pvVar7,uVar9);
    uVar9 = 0;
    pvVar7 = (undefined *)F_0055e2f0(this,0x19);
    F_0055a300(pvVar7,uVar9);
    if ((*(byte *)(param_2 + 0x48) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x4c);
    }
    if ((uVar3 & 0xff) != 0xffffffff) {
      this[0xcf8] = SUB41(uVar3,0);
    }
  }
  uVar3 = F_0055e2f0(this,0xc);
  if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
     (uVar4 = F_005613a0(uVar3), uVar4 != 0)) {
    uVar3 = 0;
  }
  *(uint *)(this + 0x1a0) = uVar3;
  uVar3 = F_0055e2f0(this,0xf);
  if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
     (uVar4 = F_005613a0(uVar3), uVar4 != 0)) {
    uVar3 = 0;
  }
  *(uint *)(this + 0x1a4) = uVar3;
  uVar3 = F_0055e2f0(this,0x12);
  if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
     (uVar4 = F_005613a0(uVar3), uVar4 != 0)) {
    uVar3 = 0;
  }
  *(uint *)(this + 0x1a8) = uVar3;
  if (((uint *)(gen_frame + 0x20))[2] == 0) {
    pvVar7 = (undefined *)0x0;
  }
  else {
    pvVar7 = *(undefined * PTR32 *)(((uint *)(gen_frame + 0x20))[2] + 0x70);
  }
  F_0055a300(pvVar7,0);
  F_005a91d0(this,0,0x17);
  F_005a91d0(this,1,0x1a);
  F_0083e280(this);
  uVar9 = 0x1c1;
  if (*(int *)(this + 0x180) == 1) {
    uVar9 = 0x18ad3;
  }
  uVar10 = 0;
  uVar3 = F_0055e2f0(this,0x1e);
  uVar2 = F_0055a020(uVar3);
  bVar1 = F_0056b630(this,uVar9,6,0,7,(uint)(uVar2 >> 1),uVar10);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonJournal::vf46 */
byte F_0088d580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88d580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((((byte)this[0xf9] & 1) != 0) && (param_1 != 0)) {
    if ((param_2[0x10] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x14);
    }
    F_007fd070(this,uVar1);
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    F_0083e160(this,uVar1);
    if ((param_2[0x48] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x4c);
    }
    if ((uVar3 & 0xff) != 0xffffffff) {
      uVar2 = F_0055dcb0();
      uVar2 = F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)this[0xcf8]);
      if (uVar2 != 0) {
        this[0xcf8] = SUB41(uVar3,0);
      }
    }
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonJournal::vf47 */
uint F_0088d610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88d610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  int iVar8;
  undefined * pvVar9;
  undefined * pAVar10;
  uint uVar11;
  int iVar12;
  
  iVar1 = *(int *)(param_1 + 0x68);
  uVar2 = param_2[0x17];
  if (iVar1 != 0) {
    param_2 = *(uint * PTR32 *)(iVar1 + 0x20);
    uVar3 = *param_2;
    if (uVar3 != 0) {
      if ((uVar3 & 1) != 0) {
        F_0079db00(this,*(undefined4 *)(this + 0x1a0),param_2[1],1);
        F_0079db00(this,*(undefined4 *)(this + 0x1a4),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8))),
                     1);
        F_0079db00(this,*(undefined4 *)(this + 0x1a8),
                     *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xc))),0);
      }
      if ((uVar3 & 2) != 0) {
        iVar12 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x1218)));
        *(undefined4 *)(this + 0x184) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x121c)));
        if (0 < iVar12) {
          iVar5 = 0xc00;
          iVar8 = iVar12;
          do {
            *(undefined4 *)(this + iVar5 + -0x508) = *((undefined4 *)GEN_TOP((iVar5 + *(int *)(uVar2 + 0x20))))
            ;
            iVar5 = iVar5 + 4;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x88))),iVar12,0,1);
          F_0059caa0(*(undefined * PTR32 *)(this + 0x18c),*(undefined4 *)(this + 0x184));
        }
      }
      if ((uVar3 & 4) != 0) {
        iVar12 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x10)));
        (*(int *)(gen_frame + 0x4)) = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x14)));
        F_00584110(*(undefined * PTR32 *)(this + 0x194),*((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xd60))));
        if (iVar12 < 1) {
          F_00591410(*(undefined * PTR32 *)(this + 400),0);
          if (*(int *)(this + 400) == 0) {
            pvVar9 = (undefined *)0x0;
          }
          else {
            pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
          }
          F_0055a300(pvVar9,0);
          F_0055a300(*(undefined * PTR32 *)(this + 0x194),1);
        }
        else {
          if (*(int *)(this + 400) == 0) {
            pvVar9 = (undefined *)0x0;
          }
          else {
            pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
          }
          F_0055a300(pvVar9,1);
          F_0055a300(*(undefined * PTR32 *)(this + 0x194),0);
          F_00596e00(*(undefined * PTR32 *)(this + 400),iVar1,uVar2,6,0,3,2,iVar12,this + 0x6b4);
          uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x7c))))(*(int * PTR32 *)(this + 400));
          uVar11 = 0;
          if (uVar6 != 0) {
            do {
              puVar7 = (undefined4 *)F_0056dc60(*(undefined4 *)(this + 400),uVar11);
              if ((*(uint *)*puVar7 & 0xffffff0) == 0xfffffe0) {
                F_00591570(*(undefined * PTR32 *)(this + 400),uVar11,0);
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar6);
          }
          iVar12 = (*(int *)(gen_frame + 0x4));
          if ((*(int *)(gen_frame + 0x4)) != 0) {
            (*(int *)(gen_frame + 0x4)) = -1;
            (*(int *)(gen_frame + 0x8)) = -1;
            bVar4 = F_007fd410(this,&(*(int *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)),iVar12);
            if (bVar4 != 0) {
              if ((*(int *)(gen_frame + 0x8)) != -1) {
                F_00592870(*(undefined * PTR32 *)(this + 400),(*(int *)(gen_frame + 0x8)),0);
              }
              F_0058e350(*(undefined * PTR32 *)(this + 400),(*(int *)(gen_frame + 0x4)),1);
            }
          }
        }
      }
      if ((uVar3 & 8) != 0) {
        F_0079d3c0(this,iVar1,uVar2);
        F_007fd190(this);
        pAVar10 = this + 0x198;
        iVar12 = 2;
        do {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar10 + 0x28))))(*(int * PTR32 *)pAVar10,1);
          pAVar10 = pAVar10 + 4;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      param_2 = *(uint * PTR32 *)(iVar1 + 0x20);
      *param_2 = 0;
    }
  }
  return (uint)param_2;
}

/* ref: FUN_0088d880 */
uint F_0088d880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x88d880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  undefined4 * puVar2;
  undefined3 extraout_var = 0;
  uint * puVar3;
  
  puVar3 = (uint *)*param_1;
  if ((puVar3 != (uint *)0x0) && (puVar3[0x79] != 0)) {
    puVar2 = (undefined4 *)F_0056dc60(*(undefined4 *)((int)this + 400),param_1[2]);
    puVar3 = (uint *)0x0;
    if ((puVar2 != (undefined4 *)0x0) &&
       (puVar3 = (uint *)*puVar2, (*puVar3 & 0xffffff0) < 0xfffffd0)) {
      bVar1 = F_0083e390(this);
      puVar3 = ((uint *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
    }
  }
  return (uint)puVar3;
}

/* ref: Client::UI2::AddonJournalDetail::vf2 */
uint F_0088d8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x88d8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined1 AVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = param_1 & 0xffff;
  if (uVar2 == 0xf) {
    param_2 = F_0083eee0(this,param_3,param_4);
  }
  else if (uVar2 == 0x17) {
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      AVar1 = this[0x13c];
      uVar2 = F_0055dcb0();
      piVar3 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)AVar1);
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 100))(piVar3);
      }
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 1: ;
      F_0079e050(this);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 2: ;
      F_0079e0c0(this);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 3: ;
      F_0079e130(this);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    }
  }
  else {
    param_2 = uVar2 - 0x19;
    if (param_2 == 0) {
      uVar2 = F_0055dcb0();
      F_00594d90((undefined *)(uVar2 + 0xe0),0);
      *(uint *)(this + 0x1d8) = *(uint *)(this + 0x1d8) | 2;
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    }
  }
  return param_2;
}

/* ref: Client::UI2::AddonGuildLeve::vf44 */
uint F_0088d9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88d9c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined * pAVar7;
  undefined * pvVar8;
  int iVar9;
  undefined * pAVar10;
  float10 fVar11;
  undefined4 uVar12;
  
  if ((this[0x748] == (undefined1)0x0) || (*(int *)(this + 0x72c) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = F_0093f170(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x730) + 0x14))),"JournalDetail",0,0,
                         *((ushort *)GEN_TOP((*(int *)(this + 0x72c) + 0xf6))) & 0xf,0);
    uVar4 = F_00594fc0(this + 0x714,uVar4,1,0,0,uVar4,0,1,0,0);
    if ((uVar4 != 0) && (*(int *)(uVar4 + 4) != 0)) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar4 + 4) + 0x13b))) = *((undefined1 *)GEN_TOP((*(int *)(this + 0x72c) + 0x13a)))
      ;
    }
  }
  *(uint *)(this + 0x180) = uVar4;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 1;
  (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),1);
  if (((*(byte *)(param_2 + 8) & 0xf) == 0) || (*(int *)(param_2 + 0xc) == 0)) {
    *(undefined4 *)(this + 0x6e0) = 0x65;
    *(undefined4 *)(this + 0x6e4) = 0x66;
    uVar4 = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = this + 0x188;
    do {
      uVar5 = F_0055e2f0(this,(&REFG(undefined4, 0x10d6abc))[uVar4]);
      if (((uVar5 == 0) || (uVar5 = F_00559c20(uVar5), uVar5 == 0)) ||
         (uVar6 = F_005613a0(uVar5), uVar6 != 4)) {
        uVar5 = 0;
      }
      *(uint *)(*(undefined * PTR32 *)(gen_frame + 0x18)) = uVar5;
      if (uVar5 == 0) {
        pvVar8 = (undefined *)0x0;
      }
      else {
        pvVar8 = *(undefined * PTR32 *)(uVar5 + 0x70);
      }
      F_00568380(pvVar8,0x17,uVar4 + 7,this,0,0);
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    uVar4 = F_0055e2f0(this,0x16);
    if (((uVar4 == 0) || (uVar4 = F_00559c20(uVar4), uVar4 == 0)) ||
       (uVar5 = F_005613a0(uVar4), uVar5 != 0xc)) {
      uVar4 = 0;
    }
  }
  else {
    *(undefined4 *)(this + 0x6e0) = 0x67;
    *(undefined4 *)(this + 0x6e4) = 0x68;
    uVar4 = 0;
    pAVar10 = this + 0x188;
    do {
      uVar5 = F_0055e2f0(this,(&REFG(undefined4, 0x10d6ab0))[uVar4]);
      if (uVar5 == 0) {
LAB_0088db62: ;
        pAVar7 = (undefined *)0x0;
      }
      else {
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)F_00559c20(uVar5);
        if (((*(undefined * PTR32 *)(gen_frame + 0x18)) == (undefined *)0x0) ||
           (uVar5 = F_005613a0((*(undefined * PTR32 *)(gen_frame + 0x18))), pAVar7 = (*(undefined * PTR32 *)(gen_frame + 0x18)), uVar5 != 4)) goto LAB_0088db62;
      }
      *(undefined * PTR32 *)pAVar10 = pAVar7;
      if (pAVar7 == (undefined *)0x0) {
        pvVar8 = (undefined *)0x0;
      }
      else {
        pvVar8 = *(undefined * PTR32 *)(pAVar7 + 0x70);
      }
      F_00568380(pvVar8,0x17,uVar4 + 7,this,0,0);
      uVar12 = (&REFG(undefined4, 0x10d6aa4))[uVar4];
      pvVar8 = (undefined *)F_00561490(*(undefined * PTR32 *)pAVar10,4);
      F_0059d640(pvVar8,uVar12);
      uVar4 = uVar4 + 1;
      pAVar10 = pAVar10 + 4;
    } while (uVar4 < 3);
    uVar4 = F_0055e2f0(this,7);
    if (((uVar4 == 0) || (uVar4 = F_00559c20(uVar4), uVar4 == 0)) ||
       (uVar5 = F_005613a0(uVar4), uVar5 != 0xc)) {
      uVar4 = 0;
    }
    uVar5 = (*(uint *)(gen_frame + 0x14));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x14)) = uVar5 & 0xffffff00;
  }
  *(uint *)(this + 0x184) = uVar4;
  F_0059d6a0(this,*(undefined4 *)(this + 0x6e4),1,0);
  if ((char)(*(uint *)(gen_frame + 0x14)) == '\0') {
    uVar12 = 0x16;
  }
  else {
    uVar12 = 7;
  }
  uVar4 = F_0055e2f0(this,uVar12);
  if (uVar4 != 0) {
    pvVar8 = (undefined *)F_00559c20(uVar4);
    if ((pvVar8 == (undefined *)0x0) || (uVar4 = F_005613a0(pvVar8), uVar4 != 0xc)) {
      pvVar8 = (undefined *)0x0;
    }
    if (pvVar8 != (undefined *)0x0) {
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)pvVar8 + 0x78);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)pvVar8 + 0x7c);
      (*(undefined1 *)(gen_frame + 0x8)) = *(undefined1 *)((int)pvVar8 + 0x80);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = 0xff;
      (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31((int3)((uint)*(undefined4 *)((int)pvVar8 + 0x78) >> 8),0xff);
      F_00561740(pvVar8,&(*(undefined4 *)(gen_frame + 0x0)),0);
    }
  }
  if (*(int *)(this + 0x184) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x23,0,this,0,0);
    pvVar8 = (undefined *)0x0;
    if (*(int *)(this + 0x184) != 0) {
      pvVar8 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_00568380(pvVar8,0x29,1,this,0,0);
    pvVar8 = (undefined *)0x0;
    if (*(int *)(this + 0x184) != 0) {
      pvVar8 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_00568380(pvVar8,0x21,2,this,0,0);
    pvVar8 = (undefined *)0x0;
    if (*(int *)(this + 0x184) != 0) {
      pvVar8 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_00568380(pvVar8,0x1f,3,this,0,0);
    pvVar8 = (undefined *)0x0;
    if (*(int *)(this + 0x184) != 0) {
      pvVar8 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_00568380(pvVar8,0x20,4,this,0,0);
    uVar12 = 0;
    if (*(int *)(this + 0x184) != 0) {
      uVar12 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    fVar11 = F_00559d80(uVar12);
    *(short *)(this + 0x6f6) = (short)(int)fVar11;
    uVar12 = 0;
    if (*(int *)(this + 0x184) != 0) {
      uVar12 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    uVar3 = F_0055a030(uVar12);
    *(ushort *)(this + 0x6f8) = uVar3;
    F_0083f8f0(this);
  }
  uVar4 = F_0055e2f0(this,0x28);
  if (((uVar4 == 0) || (uVar4 = F_00559c20(uVar4), uVar4 == 0)) ||
     (uVar5 = F_005613a0(uVar4), uVar5 != 1)) {
    uVar4 = 0;
  }
  *(uint *)(this + 0x1b8) = uVar4;
  uVar4 = F_0055e2f0(this,0x29);
  if (((uVar4 == 0) || (uVar4 = F_00559c20(uVar4), uVar4 == 0)) ||
     (uVar5 = F_005613a0(uVar4), uVar5 != 1)) {
    uVar4 = 0;
  }
  *(uint *)(this + 0x1bc) = uVar4;
  pvVar8 = (undefined *)0x0;
  if (*(int *)(this + 0x1b8) != 0) {
    pvVar8 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b8) + 0x70)));
  }
  F_00568380(pvVar8,0x17,5,this,0,0);
  if (*(int *)(this + 0x1bc) == 0) {
    pvVar8 = (undefined *)0x0;
  }
  else {
    pvVar8 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1bc) + 0x70)));
  }
  F_00568380(pvVar8,0x17,6,this,0,0);
  uVar4 = F_0055e340(this,0x17);
  *(uint *)(this + 0x1c0) = uVar4;
  uVar4 = F_0055e2f0(this,8);
  uVar3 = F_00559d70(uVar4);
  *(ushort *)(this + 0x6ea) = uVar3;
  uVar3 = F_0055a020(uVar4);
  *(ushort *)(this + 0x6ec) = uVar3;
  uVar4 = F_0055e2f0(this,0xd);
  uVar3 = F_00559d90(uVar4);
  *(ushort *)(this + 0x6f4) = uVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x10;
  if (0 < param_1) {
    if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)*(uint *)(param_2 + 0x14);
    }
    if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)(param_2 + 0x1c);
    }
    *(undefined4 *)(this + 0x6fc) = uVar12;
  }
  if (((*(byte *)(param_2 + 8) & 0xf) == 0) || (*(int *)(param_2 + 0xc) != 1)) {
    iVar9 = 4;
    if (((uint)(*(undefined * PTR32 *)(gen_frame + 0x18)) & 0x10) == 0) {
      iVar9 = 3;
    }
  }
  else {
    uVar4 = 0;
    (*(int *)(gen_frame + 0x10)) = 3;
    (*(uint *)(gen_frame + 0xc)) = ((byte)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x18))) >> 4) & 0xf) - 1;
    pAVar10 = this + 0x188;
    do {
      uVar5 = (uint)(uVar4 == (*(uint *)(gen_frame + 0xc)));
      pvVar8 = (undefined *)F_00561490(*(undefined * PTR32 *)pAVar10,3);
      F_0055a300(pvVar8,uVar5);
      uVar4 = uVar4 + 1;
      pAVar10 = pAVar10 + 4;
      iVar9 = (*(int *)(gen_frame + 0x10));
    } while (uVar4 < 3);
  }
  if (((*(byte *)(param_2 + 0x2708) & 0xf) == 0) || (*(int *)(param_2 + 0x270c) != 3)) {
    if (iVar9 != 0) {
      uVar4 = F_007fe970(this,iVar9,(uint)((byte)(*(undefined * PTR32 *)(gen_frame + 0x18)) & 0xf),*(undefined4 *)(this + 0x6fc));
      *(uint *)(this + 0x6fc) = uVar4;
    }
  }
  else {
    sVar1 = *(short *)(this + 0x6f4);
    sVar2 = *(short *)(this + 0x6f6);
    *(undefined4 *)(this + 0x6fc) = 0;
    uVar12 = 0;
    if (*(int *)(this + 0x184) != 0) {
      uVar12 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_00559f00(uVar12,(float)(int)sVar1);
    uVar4 = (uint)(ushort)(*(short *)(this + 0x6f8) + (sVar2 - sVar1));
    if (*(int *)(this + 0x184) == 0) {
      F_0055a080(0,uVar4);
    }
    else {
      F_0055a080(*((undefined4 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),uVar4);
    }
  }
  F_0083f860(this);
  uVar4 = F_0055e2f0(this,0x1a);
  if (((uVar4 == 0) || (uVar4 = F_00559c20(uVar4), uVar4 == 0)) ||
     (uVar5 = F_005613a0(uVar4), uVar5 != 0)) {
    uVar4 = 0;
  }
  *(uint *)(this + 0x1c8) = uVar4;
  uVar4 = F_0055e2f0(this,0x1d);
  if (((uVar4 == 0) || (uVar4 = F_00559c20(uVar4), uVar4 == 0)) ||
     (uVar5 = F_005613a0(uVar4), uVar5 != 0)) {
    uVar4 = 0;
  }
  *(uint *)(this + 0x1c4) = uVar4;
  uVar4 = F_0055e2f0(this,0x20);
  if (((uVar4 == 0) || (uVar4 = F_00559c20(uVar4), uVar4 == 0)) ||
     (uVar5 = F_005613a0(uVar4), uVar5 != 0)) {
    uVar4 = 0;
  }
  *(uint *)(this + 0x1cc) = uVar4;
  uVar4 = F_0055e2f0(this,0x23);
  if (((uVar4 == 0) || (uVar4 = F_00559c20(uVar4), uVar4 == 0)) ||
     (uVar5 = F_005613a0(uVar4), uVar5 != 0)) {
    uVar4 = 0;
  }
  *(uint *)(this + 0x1d0) = uVar4;
  uVar4 = F_0055e2f0(this,0x26);
  if (((uVar4 == 0) || (uVar4 = F_00559c20(uVar4), uVar4 == 0)) ||
     (uVar5 = F_005613a0(uVar4), uVar5 != 0)) {
    uVar4 = 0;
  }
  uVar12 = 0;
  *(uint *)(this + 0x1d4) = uVar4;
  pvVar8 = (undefined *)F_0055e2f0(this,0x1e);
  F_0055a300(pvVar8,uVar12);
  uVar12 = 0;
  pvVar8 = (undefined *)F_0055e2f0(this,0x21);
  F_0055a300(pvVar8,uVar12);
  uVar12 = 0;
  pvVar8 = (undefined *)F_0055e2f0(this,0x24);
  F_0055a300(pvVar8,uVar12);
  pvVar8 = (undefined *)0x0;
  if (*(int *)(this + 0x1bc) != 0) {
    pvVar8 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1bc) + 0x70)));
  }
  F_0055a300(pvVar8,0);
  F_00568380(*(undefined * PTR32 *)(this + 0x90),0xf,0,this,0,0);
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  uVar4 = F_0083f9b0(this,(*(uint *)(gen_frame + 0x14)));
  return uVar4;
}

/* ref: FUN_0088e0d0 */
uint F_0088e0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x88e0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_0056dc60(*(undefined4 *)((int)this + 0x184),*(undefined4 *)(param_1 + 8));
  if ((uVar1 != 0) && (*(char *)(uVar1 + 0x2c) != '\0')) {
    uVar1 = F_0083f9b0(this,1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf44 */
unsigned int F_0088e110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88e110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  float fVar2;
  undefined1 AVar3;
  uint uVar4;
  undefined * pvVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  
  F_00840bc0(this + 0x180,this);
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 8) & 0xf) == 0) {
      AVar3 = (undefined1)0x0;
    }
    else {
      AVar3 = SUB41(*(undefined4 *)(param_2 + 0xc),0);
    }
    this[500] = AVar3;
    F_007ff9f0(this,(uint)(byte)AVar3);
  }
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b9a0(uVar4);
  iVar1 = *(int *)(uVar4 + 0x78);
  iVar7 = 0;
  do {
    if (*(int *)(this + iVar7 * 4 + 0x18c) == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + iVar7 * 4 + 0x18c) + 0x70)));
    }
    F_00568380(pvVar5,0x17,iVar7 + 3,this,0,0);
    if (iVar7 == 7) {
      uVar8 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xd4)));
      pvVar5 = *(undefined * PTR32 *)(this + 0x1a8);
    }
    else {
      uVar8 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xb8 + iVar7 * 4)));
      pvVar5 = *(undefined * PTR32 *)(this + iVar7 * 4 + 0x18c);
    }
    F_00589280(pvVar5,uVar8);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  if ((this[0x1e0] == (undefined1)0x0) || (*(int *)(this + 0x1c4) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = F_0093f200(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c8) + 0x14))),REFG(undefined * PTR32, 0x1328404),0,0,
                         *((ushort *)GEN_TOP((*(int *)(this + 0x1c4) + 0xf6))) & 0xf,0);
    uVar4 = F_00594fc0(this + 0x1ac,uVar4,1,0,0,uVar4,0,1,0,0);
    if ((uVar4 != 0) && (*(int *)(uVar4 + 4) != 0)) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar4 + 4) + 0x13b))) = *((undefined1 *)GEN_TOP((*(int *)(this + 0x1c4) + 0x13a)))
      ;
    }
  }
  *(uint *)(this + 0x1e4) = uVar4;
  *(byte *)(uVar4 + 0x2e) = *(byte *)(uVar4 + 0x2e) | 0x10;
  if ((this[0x1e0] == (undefined1)0x0) || (*(int *)(this + 0x1c4) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = F_0093f290(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c8) + 0x14))),
                         REFG(undefined * PTR32, 0x1328408),0,0,
                         *((ushort *)GEN_TOP((*(int *)(this + 0x1c4) + 0xf6))) & 0xf,0);
    uVar4 = F_00594fc0(this + 0x1ac,uVar4,1,0,0,uVar4,0,1,0,0);
    if ((uVar4 != 0) && (*(int *)(uVar4 + 4) != 0)) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar4 + 4) + 0x13b))) = *((undefined1 *)GEN_TOP((*(int *)(this + 0x1c4) + 0x13a)))
      ;
    }
  }
  *(uint *)(this + 0x1e8) = uVar4;
  *(byte *)(uVar4 + 0x2e) = *(byte *)(uVar4 + 0x2e) | 0x10;
  *(undefined4 *)(this + 0x1f0) = 0;
  this[0x1f5] = (undefined1)0x0;
  F_00568380(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0,0);
  F_00568380(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x1e4) + 4))) + 0x90))),0xc,0,this,0,0);
  F_00568380(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x1e8) + 4))) + 0x90))),0xc,0,this,0,0);
  F_005a91d0(this,1,0x21);
  F_005a91d0(this,0,0x1e);
  if (((byte)*(undefined4 *)(param_2 + 0x18) & 0xf) == 4) {
    *(undefined4 *)(this + 0x1ec) = *(undefined4 *)(param_2 + 0x1c);
  }
  fVar2 = REFG(float, 0x10adb9c);
  cVar6 = '\0';
  if (((byte)*(undefined4 *)(param_2 + 0x20) & 0xf) == 2) {
    cVar6 = *(char *)(param_2 + 0x24);
  }
  if (this[500] == (undefined1)0x0) {
    F_0055dda0(this,0,*(float *)&REFG(undefined, 0x10a0cf0),REFG(float, 0x10adb9c));
    return 0;
  }
  this[0x1e2] = (undefined1)(cVar6 == '\0');
  F_0055dda0(this,0,REFG(float, 0x10b9480),fVar2);
  if (cVar6 == '\0') {
    this[0xf9] = (undefined1)((byte)this[0xf9] | 0x40);
  }
  return 0;
}

/* ref: FUN_0088e3c0 */
uint F_0088e3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x88e3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d6ad4));
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined2 *)((int)this + 0x208) = 0;
  *(undefined2 *)((int)this + 0x20b) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  F_00560760((undefined *)((int)this + 0x820));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x82c) = (*(undefined * PTR32 (*)[4])REFP(0x10ca6c8));
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined1 *)((int)this + 0x20a) = 0;
  F_0055e2a0(this,0x1000000,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  return (uint)this;
}

/* ref: FUN_0088e460 */
uint F_0088e460(unsigned int gen_a0)
{
  GEN_ENTER(0x88e460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  F_00584110(*(undefined * PTR32 *)((int)this + 4),"");
  F_00584110(*(undefined * PTR32 *)((int)this + 8),"");
  F_00584110(*(undefined * PTR32 *)((int)this + 0xc),"");
  F_00584110(*(undefined * PTR32 *)((int)this + 0x10),"");
  F_007a0af0(this,0);
  F_008429d0(this,0);
  F_0058d590(*(undefined * PTR32 *)this);
  iVar1 = *(int *)((int)this + 0x1c4);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x38))))(*(int * PTR32 *)this);
  uVar2 = F_00596b10((undefined *)(iVar1 + 0xe0),uVar2);
  return uVar2;
}

/* ref: Client::UI2::AddonRecipeNoteBook::vf37 */
uint F_0088e510(unsigned int gen_a0)
{
  GEN_ENTER(0x88e510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  F_005a92d0(this,1,0x1c,0);
  F_005a92d0(this,0,0x19,1);
  F_00801e70(this + 0x180,0x17);
  F_007a0a40(this + 0x218);
  if (((byte)this[0xf9] & 1) != 0) {
    F_007a0af0(this + 0x218,0xffffffff);
    F_008429d0(this + 0x218,0);
    F_0058d590(*(undefined * PTR32 *)(this + 0x218));
    iVar1 = *(int *)(this + 0x3dc);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x218) + 0x38))))(*(int * PTR32 *)(this + 0x218));
    F_00596b10((undefined *)(iVar1 + 0xe0),uVar2);
    ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: FUN_0088e5b0 */
uint F_0088e5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88e5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00557670(param_1,0);
  uVar2 = *(uint *)(param_2 + 8);
  if ((-1 < (int)uVar2) && (*(uint *)((int)this + 0x1510) != uVar2)) {
    *(uint *)((int)this + 0x1510) = uVar2;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1fc) + 0x28))))(*(int * PTR32 *)((int)this + 0x1fc),0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f8) + 0x28))))(*(int * PTR32 *)((int)this + 0x1f8),0);
    F_0088e460((undefined *)((int)this + 0x218));
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    sVar1 = *((short *)GEN_TOP(((int)this + *(int *)(param_2 + 8) * 8 + 0x3e4)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(int *)(gen_frame + 0xc)) = (int)sVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_0088e690 */
uint F_0088e690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88e690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00557670(param_1,0);
  uVar2 = *(uint *)(param_2 + 8);
  if ((-1 < (int)uVar2) && (uVar2 = uVar2 + 1000, *(uint *)((int)this + 0x1510) != uVar2)) {
    *(uint *)((int)this + 0x1510) = uVar2;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1fc) + 0x28))))(*(int * PTR32 *)((int)this + 0x1fc),0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f8) + 0x28))))(*(int * PTR32 *)((int)this + 0x1f8),0);
    F_0088e460((undefined *)((int)this + 0x218));
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 2;
    sVar1 = *((short *)GEN_TOP(((int)this + *(int *)(param_2 + 8) * 8 + 0x524)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(int *)(gen_frame + 0xc)) = (int)sVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_0088e770 */
uint F_0088e770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x88e770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  if (*(int *)((int)this + 0x150c) != param_1) {
    *(int *)((int)this + 0x150c) = param_1;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1fc) + 0x28))))(*(int * PTR32 *)((int)this + 0x1fc),0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f8) + 0x28))))(*(int * PTR32 *)((int)this + 0x1f8),0);
    F_0088e460((undefined *)((int)this + 0x218));
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x150c) * 4 + 0x198)));
    uVar2 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar2 + 0xc0);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(int *)(gen_frame + 0xc)) = param_1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2 & 0xffffff00;
}

/* ref: Client::UI2::AddonFishingNote::vf37 */
uint F_0088e860(unsigned int gen_a0)
{
  GEN_ENTER(0x88e860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined * pAVar3;
  int local_8;
  
  F_00844260(this);
  if (this[0xee2] != (undefined1)0x0) {
    uVar1 = F_0055dcb0();
    F_005aa060((undefined *)(uVar1 + 0x20c),0,0);
    uVar1 = F_0055dcb0();
    *(undefined1 *)(uVar1 + 0x21b) = 0;
    this[0xee2] = (undefined1)0x0;
  }
  pAVar3 = this + 0x1ac;
  local_8 = 10;
  do {
    if (*(int *)pAVar3 != 0) {
      uVar1 = F_0055dcb0();
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x38))))(*(int * PTR32 *)pAVar3);
      F_00596b10((undefined *)(uVar1 + 0xe0),uVar2);
    }
    pAVar3 = pAVar3 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
  F_005a92d0(this,1,0x3e,0);
  F_005a92d0(this,0,0x39,1);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFishingNote::vf44 */
uint F_0088e910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88e910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined * pAVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pvVar3 = *(undefined * PTR32 *)(this + 0x94);
  if (pvVar3 != (undefined *)0x0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),0);
    F_0055a0a0(pvVar3,0);
    F_0055a040(pvVar3,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  }
  uVar1 = F_0055e2f0(this,3);
  *(uint *)(this + 0xa0) = uVar1;
  uVar1 = F_0055e2f0(this,0xd);
  if (uVar1 != 0) {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
      uVar1 = 0;
    }
    if (uVar1 != 0) {
      F_00568380(*(undefined * PTR32 *)(uVar1 + 0x70),0x17,500,this,0,0);
    }
  }
  uVar1 = F_0055e2f0(this,2);
  if (uVar1 != 0) {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
      uVar1 = 0;
    }
    if (uVar1 != 0) {
      F_00568380(*(undefined * PTR32 *)(uVar1 + 0x70),0x17,500,this,0,0);
    }
  }
  uVar1 = F_0055e2f0(this,4);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x1a4) = uVar1;
  if (uVar1 != 0) {
    F_00568380(*(undefined * PTR32 *)(uVar1 + 0x70),0x17,0,this,0,0);
    uVar8 = 0;
    uVar7 = 0;
    uVar5 = 0;
    uVar4 = 0x11;
    pAVar6 = this;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a4) + 0x3c))))(*(int * PTR32 *)(this + 0x1a4))));
    F_00568380(pvVar3,uVar4,uVar5,pAVar6,uVar7,uVar8);
    pvVar3 = (undefined *)F_00561490(*(undefined * PTR32 *)(this + 0x1a4),2);
    if (pvVar3 != (undefined *)0x0) {
      F_0059d670(pvVar3,0x65);
    }
  }
  uVar1 = F_0055e2f0(this,5);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x1a8) = uVar1;
  if (uVar1 != 0) {
    F_00568380(*(undefined * PTR32 *)(uVar1 + 0x70),0x17,1,this,0,0);
    uVar8 = 0;
    uVar7 = 0;
    uVar5 = 1;
    uVar4 = 0x11;
    pAVar6 = this;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0x3c))))(*(int * PTR32 *)(this + 0x1a8))));
    F_00568380(pvVar3,uVar4,uVar5,pAVar6,uVar7,uVar8);
    pvVar3 = (undefined *)F_00561490(*(undefined * PTR32 *)(this + 0x1a8),2);
    if (pvVar3 != (undefined *)0x0) {
      F_0059d670(pvVar3,0x66);
    }
  }
  F_008024b0(this);
  F_00843990(this);
  F_00843b70(this);
  F_00843c80(this);
  F_0056b630(this,0x18af0,7,0,9,0,0);
  F_005a91d0(this,1,0x3e);
  uVar1 = F_005a91d0(this,0,0x39);
  return uVar1;
}

/* ref: FUN_0088eb40 */
uint F_0088eb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88eb40u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  byte bVar2;
  undefined * this_00;
  undefined * this_01;
  uint uVar3;
  int * this_02;
  uint uVar4;
  uint3 uVar6;
  int iVar5;
  
  this_00 = (undefined *)F_00559ba0((*(undefined4 * PTR32 *)&gen_args[2])[3]);
  this_01 = (undefined *)F_00559ba0((*(undefined4 * PTR32 *)&gen_args[2])[4]);
  F_00584110(this_00,**((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 4) + 0x10))));
  F_00584110(this_01,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 4) + 0x10))) + 4))));
  uVar3 = *((uint *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[1]) + 4) + 8)));
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x736))) == '\0') || ((uVar3 & 4) != 0)) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
  }
  F_0059d670(((undefined *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[2])[8])),(-(uint)bVar2 & 0x54) + 0x11);
  if ((~*((byte *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[1]) + 4) + 8))) & 1) == 0) {
    uVar1 = *((undefined4 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[1]) + 4) + 4)));
    F_0059d670(((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))),0x65);
    uVar3 = F_005951c0(*((undefined * PTR32 *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 4) + 0x20))),uVar1,0,(*(undefined4 * PTR32 *)&gen_args[2])[1]);
    return uVar3;
  }
  F_0059d670(((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))),0x66);
  if ((*(undefined4 * PTR32 *)&gen_args[2])[2] != 0) {
    this_02 = (int *)F_00559c20((*(undefined4 * PTR32 *)&gen_args[2])[2]);
    if (this_02 != (int *)0x0) {
      uVar4 = F_005613a0(this_02);
      if (uVar4 == 3) goto LAB_0088ec1e;
    }
  }
  this_02 = (int *)0x0;
LAB_0088ec1e: ;
  uVar3 = uVar3 >> 1;
  gen_piece_set(&(*(undefined4 * PTR32 *)&gen_args[2]), 1, 3, (unsigned long long)((undefined3)((uint)((int)(uintptr_t)this_01) >> 8)));
  (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP((CONCAT31(GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[2]), 1, 3),(char)uVar3) & 0xffffff01)));
  uVar6 = (uint3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8);
  if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x728))) == 0) &&
     ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x737))) == '\0' || ((uVar3 & 1) != 0)))) {
    iVar5 = CONCAT31(uVar6,1);
  }
  else {
    iVar5 = (uint)uVar6 << 8;
  }
  ((code *)*(gen_code32 *)(*this_02 + 0x28))(this_02,iVar5);
  uVar3 = F_0059dde0(this_02,(*(undefined4 * PTR32 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_0088ec70 */
uint F_0088ec70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88ec70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2[2];
  uVar2 = 0;
  if (((*param_2 != 0) && (uVar2 = *(uint *)(*param_2 + 0x1e4), uVar2 != 0)) &&
     (*(int *)(uVar2 + 4) == 4)) {
    F_00557670(param_1,0);
    uVar2 = F_0056dc60(*(undefined4 *)((int)this + 0x1c8),iVar1);
    uVar2 = F_00844e10(this,uVar2);
  }
  return uVar2;
}

/* ref: FUN_0088ecc0 */
uint F_0088ecc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x88ecc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (((*param_1 != 0) && (uVar1 = *(uint *)(*param_1 + 0x1e4), uVar1 != 0)) &&
     (*(int *)(uVar1 + 4) != 4)) {
    uVar1 = F_0056dc60(*(undefined4 *)((int)this + 0x1c8),param_1[2]);
    uVar1 = F_00844db0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0088ed00 */
uint F_0088ed00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x88ed00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  int * in_ecx;
  uint * puVar5;
  
  puVar5 = *(uint * PTR32 *)((int)this + 0x1c8);
  if ((puVar5 != (uint *)0x0) && (uVar2 = puVar5[0x33], -1 < (int)uVar2)) {
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*puVar5 + 0x50))(puVar5,uVar2)));
    puVar5 = (uint *)0x0;
    if (pvVar3 != (undefined *)0x0) {
      puVar4 = (undefined4 *)F_0056dc60(*(undefined4 *)((int)this + 0x1c8),uVar2);
      puVar5 = (uint *)0x0;
      if (((puVar4 != (undefined4 *)0x0) && (puVar5 = (uint *)*puVar4, (*puVar5 & 0xff000000) == 0))
         && (puVar1 = puVar5 + 2,
            puVar5 = ((uint *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)puVar5) >> 8),~(byte)*puVar1))),
            (~(byte)*puVar1 & 1) != 0)) {
        pvVar3 = (undefined *)F_00561490(pvVar3,4);
        in_ecx = (int *)F_005bdc10(pvVar3,3);
        puVar5 = (uint *)F_005c0730(in_ecx);
        if ((char)puVar5 != '\0') {
          ((code *)*(gen_code32 *)(*in_ecx + 0x34))(in_ecx);
          F_0058e350(*(undefined * PTR32 *)((int)this + 0x1c8),uVar2,1);
          puVar5 = (uint *)F_00844e10(this,puVar4);
        }
      }
    }
  }
  return (uint)puVar5;
}

/* ref: FUN_0088edb0 */
uint F_0088edb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88edb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint in_EAX = 0;
  uint uVar1;
  
  if ((char)param_2[1] == '\0') {
    if (*param_2 == 4) {
      F_0088ed00(this,param_2);
    }
    else {
      uVar1 = *param_2 - 5;
      if (uVar1 != 0) {
        return uVar1;
      }
      if (*(int *)((int)this + 0x730) == 5) {
        (*(undefined4 *)(gen_frame + 0x8)) = 5;
        (*(undefined4 *)(gen_frame + 0x4)) = 3;
        F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
        F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
        uVar1 = F_00557670(param_1,0);
        return uVar1;
      }
    }
    in_EAX = F_00557670(param_1,0);
  }
  return in_EAX;
}

/* ref: FUN_0088ee20 */
uint F_0088ee20(unsigned int gen_a0)
{
  GEN_ENTER(0x88ee20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined * PTR32 *)((int)this + 0x184) = this;
  *(gen_code32 *)((int)this + 0x188) = ((code *)REFP(0x844d50));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 2;
  (*(undefined4 *)(gen_frame + 0x28)) = 3;
  (*(undefined4 *)(gen_frame + 0x34)) = 4;
  (*(undefined4 *)(gen_frame + 0x40)) = 5;
  (*(undefined4 *)(gen_frame + 0x4c)) = 6;
  (*(undefined4 *)(gen_frame + 0x58)) = 9;
  (*(undefined4 *)(gen_frame + 0x64)) = 10;
  (*(undefined4 *)(gen_frame + 0x70)) = 0xb;
  (*(undefined4 *)(gen_frame + 0x7c)) = 7;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x88eb40));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_00574320(*(undefined * PTR32 *)((int)this + 0x1c8),&(*(undefined * PTR32 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x1c)),9,4);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 2;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x803760));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  uVar1 = F_00574320(*(undefined * PTR32 *)((int)this + 0x1c8),&(*(undefined * PTR32 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x0)),9,3);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar1;
}

/* ref: Client::UI2::AddonMateriaAttachedRepair::vf46 */
byte F_0088ef40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88ef40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  int iVar5;
  int * in_ecx;
  undefined4 * puVar6;
  int local_c;
  undefined * local_8;
  
  if (param_2 != 0) {
    local_c = 0;
    if (0 < *(int *)(this + 0xa34)) {
      local_8 = this + 0x180;
      puVar6 = (undefined4 *)(param_2 + 100);
      do {
        if ((*(byte *)(puVar6 + 9) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar6[10];
        }
        *(undefined4 *)local_8 = uVar1;
        uVar2 = F_0055e2f0(this,local_c + 0xd);
        if (((uVar2 != 0) && (pvVar3 = (undefined *)F_00559c20(uVar2), pvVar3 != (undefined *)0x0)) &&
           (uVar2 = F_005613a0(pvVar3), uVar2 == 4)) {
          if ((*(byte *)(puVar6 + -1) & 0xf) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *puVar6;
          }
          F_00589320(pvVar3,uVar1);
          if ((*(byte *)(puVar6 + 0x13) & 0xf) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = puVar6[0x14];
          }
          pvVar4 = (undefined *)F_00561530(pvVar3,5);
          F_00584110(pvVar4,uVar1);
          if ((*(byte *)(puVar6 + 0x1d) & 0xf) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = puVar6[0x1e];
          }
          iVar5 = (-(uint)(iVar5 != 0) & 0x54) + 0x11;
          pvVar4 = (undefined *)F_00561490(pvVar3,4);
          F_0059d670(pvVar4,iVar5);
          uVar2 = F_00561490(pvVar3,2);
          if (uVar2 != 0) {
            pvVar3 = (undefined *)F_00559c20(uVar2);
            if ((pvVar3 == (undefined *)0x0) || (uVar2 = F_005613a0(pvVar3), uVar2 != 0xf)) {
              pvVar3 = (undefined *)0x0;
            }
            if (pvVar3 != (undefined *)0x0) {
              if ((*(byte *)(puVar6 + -0xb) & 0xf) == 0) {
                uVar1 = 0;
              }
              else {
                uVar1 = puVar6[-10];
              }
              F_00595190(pvVar3,uVar1,0,0);
            }
          }
        }
        local_8 = local_8 + 4;
        local_c = local_c + 1;
        puVar6 = puVar6 + 2;
      } while (local_c < *(int *)(this + 0xa34));
    }
    F_00846820(this,param_1,param_2);
    uVar2 = F_0055e2f0(this,0x18);
    if (((uVar2 == 0) || (in_ecx = (int *)F_00559c20(uVar2), in_ecx == (int *)0x0)) ||
       (uVar2 = F_005613a0(in_ecx), uVar2 != 1)) {
      in_ecx = (int *)0x0;
    }
    if ((*(byte *)(param_2 + 0x350) & 0xf) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_2 + 0x354);
    }
    ((code *)*(gen_code32 *)(*in_ecx + 0x28))(in_ecx,(uint)(iVar5 != 0));
  }
  return 1;
}

/* ref: Client::UI2::AddonColorantColoringSelector::vf44 */
uint F_0088f3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88f3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 AVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined * this_00;
  
  uVar2 = F_0055e2f0(this,0x1a);
  piVar3 = (int *)F_00559c20(uVar2);
  if (piVar3 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3);
  }
  *(uint *)(this + 0xa8) = uVar2;
  F_00847110(this,param_1,param_2);
  uVar2 = F_0055e2f0(this,4);
  if (((uVar2 != 0) && (pvVar4 = (undefined *)F_00559c20(uVar2), pvVar4 != (undefined *)0x0)) &&
     (uVar2 = F_005613a0(pvVar4), uVar2 == 0xf)) {
    if ((*param_2 & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 4);
    }
    F_00595190(pvVar4,uVar5,0,0);
    if ((param_2[0x20] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0x24);
    }
    F_005a03c0(pvVar4,uVar5);
    F_0055a300(*(undefined * PTR32 *)((int)pvVar4 + 0xb4),1);
    uVar2 = F_0055e2f0(this,5);
    F_0055a410(uVar2,1);
    F_00561990(pvVar4,uVar2);
    F_00560760(&(*(gen_code32 *)(gen_frame + 0x20)));
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 2)) = 2;
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x28)), 0, 3, (unsigned long long)(CONCAT12(2,(undefined2)(*(undefined4 *)(gen_frame + 0x28)))));
    if ((param_2[0x10] & 0xf) == 0) {
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(param_2 + 0x14);
    }
    if ((param_2[0x18] & 0xf) == 0) {
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 3)) = 0;
    }
    else {
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 3)) = (undefined1)*(undefined4 *)(param_2 + 0x1c);
    }
    AVar1 = this[0x13a];
    uVar6 = F_0055dcb0();
    F_00590ad0((undefined *)(uVar6 + 0xe0),4,(uint)(byte)AVar1,uVar2,&(*(gen_code32 *)(gen_frame + 0x20)));
  }
  if ((param_2[8] & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + 0xc);
  }
  pvVar4 = (undefined *)F_0055e340(this,6);
  F_00584110(pvVar4,uVar5);
  uVar2 = F_0055e2f0(this,0x15);
  if (((uVar2 != 0) && (pvVar4 = (undefined *)F_00559c20(uVar2), pvVar4 != (undefined *)0x0)) &&
     (uVar2 = F_005613a0(pvVar4), uVar2 == 0xf)) {
    uVar2 = F_0055e2f0(this,0x16);
    F_0055a410(uVar2,1);
    F_00561990(pvVar4,uVar2);
  }
  uVar2 = F_0055e2f0(this,0x12);
  if (uVar2 == 0) {
    this_00 = (undefined *)0x0;
    pvVar4 = (undefined *)0x0;
  }
  else {
    this_00 = (undefined *)F_00559c20(uVar2);
    if ((this_00 == (undefined *)0x0) || (uVar2 = F_005613a0(this_00), uVar2 != 9)) {
      this_00 = (undefined *)0x0;
    }
    if (this_00 == (undefined *)0x0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *(undefined * PTR32 *)((int)this_00 + 0x70);
    }
  }
  F_00568380(pvVar4,0x21,0,this,0,0);
  if (this_00 == (undefined *)0x0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *(undefined * PTR32 *)((int)this_00 + 0x70);
  }
  F_00568380(pvVar4,0x1f,0,this,0,0);
  if (this_00 == (undefined *)0x0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *(undefined * PTR32 *)((int)this_00 + 0x70);
  }
  F_00568380(pvVar4,0x20,0,this,0,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 7;
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0x7a3eb0));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  F_00574320(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x4)),2,0);
  uVar2 = F_00561490(this_00,2);
  if (((uVar2 == 0) || (piVar3 = (int *)F_00559c20(uVar2), piVar3 == (int *)0x0)) ||
     (uVar2 = F_005613a0(piVar3), uVar2 != 0xd)) {
    piVar3 = (int *)0x0;
  }
  ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0);
  F_0055a300((undefined *)piVar3[0x1c],0);
  F_00847240(this);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonColorantColoringSelector::vf46 */
byte F_0088f630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88f630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 AVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  undefined * pAVar7;
  undefined * local_8;
  
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x28) & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 0x2c);
    }
    *(int *)(this + 0xae0) = iVar2;
    if (iVar2 != -1) {
      uVar3 = F_0055e2f0(this,iVar2 + 10);
      if (((uVar3 == 0) || (piVar4 = (int *)F_00559c20(uVar3), piVar4 == (int *)0x0)) ||
         (uVar3 = F_005613a0(piVar4), uVar3 != 4)) {
        piVar4 = (int *)0x0;
      }
      uVar3 = F_00561390();
      ((code *)*(gen_code32 *)(*piVar4 + 0x60))(piVar4,uVar3 + 0xc0);
    }
    uVar3 = F_0055e2f0(this,0x12);
    if (uVar3 == 0) {
      local_8 = (undefined *)0x0;
    }
    else {
      local_8 = (undefined *)F_00559c20(uVar3);
      if ((local_8 == (undefined *)0x0) || (uVar3 = F_005613a0(local_8), uVar3 != 9)) {
        local_8 = (undefined *)0x0;
      }
    }
    if ((*(byte *)(param_2 + 0x30) & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 0x34);
    }
    F_0059ead0(local_8,iVar2,0,1);
    if (iVar2 != 0) {
      pAVar7 = this + 0x1dc;
      puVar6 = (undefined4 *)(param_2 + 0x344);
      do {
        if ((*(byte *)(puVar6 + -0x91) & 0xf) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = puVar6[-0x90];
        }
        *(undefined4 *)(pAVar7 + -8) = uVar5;
        if ((*(byte *)(puVar6 + -1) & 0xf) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *puVar6;
        }
        *(undefined4 *)pAVar7 = uVar5;
        if ((*(byte *)(puVar6 + -0x61) & 0xf) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = puVar6[-0x60];
        }
        *(undefined4 *)(pAVar7 + -4) = uVar5;
        if ((*(byte *)(puVar6 + -0x31) & 0xf) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = puVar6[-0x30];
        }
        F_0042e430(pAVar7 + -0x5c,uVar5);
        if ((*(byte *)(puVar6 + -0xc1) & 0xf) == 0) {
          AVar1 = (undefined1)0x0;
        }
        else {
          AVar1 = SUB41(puVar6[-0xc0],0);
        }
        pAVar7[4] = AVar1;
        puVar6 = puVar6 + 2;
        pAVar7 = pAVar7 + 100;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if ((*(byte *)(param_2 + 0x38) & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0x3c);
    }
    *(undefined4 *)(this + 0xae4) = uVar5;
    F_005623b0(local_8,uVar5);
    F_00846fc0(this,*(undefined4 *)(this + 0xae4),1);
    uVar3 = F_0055e2f0(this,0x1a);
    if (((uVar3 == 0) || (piVar4 = (int *)F_00559c20(uVar3), piVar4 == (int *)0x0)) ||
       (uVar3 = F_005613a0(piVar4), uVar3 != 1)) {
      piVar4 = (int *)0x0;
    }
    if ((*(byte *)(param_2 + 0x400) & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 0x404);
    }
    ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,(uint)(iVar2 != 0));
  }
  return 1;
}

/* ref: Client::UI2::AddonColorantColoringSelector::vf2 */
uint F_0088f810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x88f810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined1 * this;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  this = (gen_frame + 0x1c);
  uVar1 = param_3 & 0xffff;
  uVar2 = uVar1 - 0x17;
  if (uVar2 < 0xb) {
    uVar2 = (uint)(byte)(&REFG(undefined, 0x88f9fd))[uVar1];
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0x17: ;
      F_00557670(param_5,0);
      if (param_4 < 10) {
        (*(undefined4 *)(gen_frame + 0x14)) = 3;
        (*(uint *)(gen_frame + 0x18)) = param_4;
        F_005a9110(in_ecx,1,&(*(undefined4 *)(gen_frame + 0x14)));
        uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
        return uVar2;
      }
      uVar2 = param_4;
      if (param_4 < 0x12) {
        uVar2 = F_00846ea0(in_ecx,in_ecx,in_edi,param_4 - 10);
        return uVar2;
      }
      break;
    case 0x1f: ;
      uVar2 = F_00846fc0(in_ecx,*(undefined4 *)(param_6 + 8),0);
      return uVar2;
    case 0x20: ;
      iVar4 = *(int *)((int)in_ecx + 0xae4);
      if (iVar4 == -1) {
        uVar6 = 0;
        pvVar3 = (undefined *)F_0055e2f0(in_ecx,0x13);
        uVar2 = F_0055a300(pvVar3,uVar6);
        return uVar2;
      }
      uVar6 = 1;
      pvVar3 = (undefined *)F_0055e2f0(in_ecx,0x13);
      F_0055a300(pvVar3,uVar6);
      uVar2 = F_0055e2f0(in_ecx,0x15);
      if (uVar2 != 0) {
        pvVar3 = (undefined *)F_00559c20(uVar2);
        if (pvVar3 != (undefined *)0x0) {
          uVar2 = F_005613a0(pvVar3);
          if (uVar2 == 0xf) {
            F_00595190(pvVar3,*(undefined4 *)(iVar4 * 100 + 0x1d4 + (int)in_ecx),0,0);
            F_005a03c0(pvVar3,*(undefined4 *)(iVar4 * 100 + 0x1d8 + (int)in_ecx));
            F_0055a300(*(undefined * PTR32 *)((int)pvVar3 + 0xb4),1);
          }
        }
      }
      uVar2 = F_0042a990(iVar4 * 100 + 0x180 + (int)in_ecx);
      pvVar3 = (undefined *)F_0055e340(in_ecx,0x17);
      F_00584110(pvVar3,uVar2);
      uVar2 = F_0055dcb0();
      uVar2 = F_00594d90((undefined *)(uVar2 + 0xe0),1);
      break;
    case 0x21: ;
      F_00557670(param_5,0);
      (*(undefined4 *)(gen_frame + 0xc)) = 3;
      (*(undefined4 *)(gen_frame + 0x14)) = 3;
      (*(undefined4 *)(gen_frame + 0x10)) = 4;
      (*(uint *)(gen_frame + 0x18)) = *(undefined4 *)(param_6 + 8);
      F_005a9110(in_ecx,2,&(*(undefined4 *)(gen_frame + 0xc)));
      uVar2 = (int)*((char *)GEN_TOP((*(int *)(param_6 + 8) * 100 + 0x1e0 + (int)in_ecx))) & 0x80000001;
      bVar5 = uVar2 == 0;
      if ((int)uVar2 < 0) {
        bVar5 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar5) {
        uVar7 = 0;
        uVar6 = 1;
        uVar2 = F_0055e2f0(in_ecx,0x1a);
        uVar2 = F_00559c20(uVar2);
        F_0059b390(in_ecx,uVar2,uVar6,uVar7);
      }
      iVar4 = 1;
      do {
        this = this + -8;
        uVar2 = F_005a2670(this);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonGrandCompanySupplyReward::vf44 */
uint F_0088fa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88fa20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  byte * pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  pbVar1 = param_2;
  uVar2 = F_0055e2f0(this,0x26);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 1)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x180) = uVar2;
  uVar2 = F_0055e2f0(this,0x27);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 1)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x184) = uVar2;
  if (*(int *)(this + 0x180) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x17,0,this,0,0);
  }
  if (*(int *)(this + 0x184) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,1,this,0,0);
  }
  uVar2 = F_0055e2f0(this,5);
  if (uVar2 != 0) {
    uVar2 = F_00559c20(uVar2);
    if ((uVar2 == 0) || (uVar3 = F_005613a0(uVar2), uVar3 != 1)) {
      uVar2 = 0;
    }
    if (uVar2 != 0) {
      F_00568380(*(undefined * PTR32 *)(uVar2 + 0x70),0x17,2,this,0,0);
    }
  }
  if ((*param_2 & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 4);
  }
  uVar8 = 0;
  pvVar5 = (undefined *)F_0055e360(this,3);
  F_00591c00(pvVar5,uVar4,uVar8);
  if ((param_2[0x18] & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x1c);
  }
  pvVar5 = (undefined *)F_0055e340(this,0x17);
  F_00584110(pvVar5,uVar4);
  if ((param_2[0x20] & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x24);
  }
  pvVar5 = (undefined *)F_0055e340(this,0x18);
  F_00584110(pvVar5,uVar4);
  if ((param_2[0x38] & 0xf) == 0) {
    param_2 = (byte *)0x0;
  }
  else {
    param_2 = *(byte * PTR32 *)(param_2 + 0x3c);
  }
  if ((pbVar1[0x30] & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(pbVar1 + 0x34);
  }
  if ((pbVar1[0x10] & 0xf) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(pbVar1 + 0x14);
  }
  iVar7 = (int)param_2;
  uVar2 = F_0055e2f0(this,0x1e);
  uVar2 = F_00559c20(uVar2);
  F_00848d40(this,uVar2,uVar8,iVar7,uVar4);
  if ((pbVar1[0x30] & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(pbVar1 + 0x34);
  }
  if ((pbVar1[0x40] & 0xf) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(pbVar1 + 0x44);
  }
  if ((pbVar1[0x10] & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(pbVar1 + 0x14);
  }
  uVar2 = F_0055e2f0(this,0x21);
  uVar2 = F_00559c20(uVar2);
  F_00848d40(this,uVar2,uVar6,uVar8,uVar4);
  if ((pbVar1[0x28] & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(pbVar1 + 0x2c);
  }
  if ((pbVar1[0x48] & 0xf) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(pbVar1 + 0x4c);
  }
  if ((pbVar1[8] & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(pbVar1 + 0xc);
  }
  uVar2 = F_0055e2f0(this,0x1f);
  uVar2 = F_00559c20(uVar2);
  F_00848d40(this,uVar2,uVar6,uVar8,uVar4);
  if ((pbVar1[0x28] & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(pbVar1 + 0x2c);
  }
  if ((pbVar1[0x50] & 0xf) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(pbVar1 + 0x54);
  }
  if ((pbVar1[8] & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(pbVar1 + 0xc);
  }
  uVar2 = F_0055e2f0(this,0x22);
  uVar2 = F_00559c20(uVar2);
  F_00848d40(this,uVar2,uVar6,uVar8,uVar4);
  if (((pbVar1[0x58] & 0xf) != 0) && (pbVar1[0x5c] != 0)) {
    if (param_2 == (byte *)0x0) {
      uVar4 = 0x68;
      pvVar5 = (undefined *)F_0055e2f0(this,0x1d);
      uVar2 = F_0059d670(pvVar5,uVar4);
      return uVar2;
    }
    uVar4 = 0x66;
    pvVar5 = (undefined *)F_0055e2f0(this,0x1d);
    uVar2 = F_0059d670(pvVar5,uVar4);
    return uVar2;
  }
  if (param_2 == (byte *)0x0) {
    uVar4 = 0x67;
    pvVar5 = (undefined *)F_0055e2f0(this,0x1d);
    uVar2 = F_0059d670(pvVar5,uVar4);
    return uVar2;
  }
  uVar4 = 0x65;
  pvVar5 = (undefined *)F_0055e2f0(this,0x1d);
  uVar2 = F_0059d670(pvVar5,uVar4);
  return uVar2;
}

/* ref: Client::UI2::AddonInventory::vf44 */
uint F_0088fce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x88fce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  int local_c;
  undefined * local_8;
  
  *(undefined2 *)(this + 0x136) = 0x17;
  uVar1 = F_0055e340(this,0x18);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,0xd);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e2f0(this,0x14);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e2f0(this,2);
  *(uint *)(this + 0x18c) = uVar1;
  uVar1 = F_0055e2f0(this,3);
  *(uint *)(this + 400) = uVar1;
  uVar1 = F_0055e340(this,4);
  *(uint *)(this + 0x194) = uVar1;
  local_8 = this + 0x198;
  iVar4 = 0xf;
  local_c = 5;
  do {
    uVar1 = F_0055e2f0(this,iVar4);
    if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
       (uVar2 = F_005613a0(uVar1), uVar2 != 4)) {
      uVar1 = 0;
    }
    *(uint *)local_8 = uVar1;
    if (uVar1 == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)(uVar1 + 0x70);
    }
    F_00568380(pvVar3,0x17,iVar4,this,0,0);
    local_8 = local_8 + 4;
    iVar4 = iVar4 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(int *)(this + 0x188) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar3,0x17,0,this,0,0);
  if ((this[500] == (undefined1)0x0) || (*(int *)(this + 0x1d8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_0093f320(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x14))),"InventoryGrid",0,0,
                         *((ushort *)GEN_TOP((*(int *)(this + 0x1d8) + 0xf6))) & 0xf,0);
    uVar1 = F_00594fc0(this + 0x1c0,uVar1,1,0,0,uVar1,0,1,0,0);
    if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar1 + 4) + 0x13b))) = *((undefined1 *)GEN_TOP((*(int *)(this + 0x1d8) + 0x13a)))
      ;
    }
  }
  *(uint *)(this + 0x1f8) = uVar1;
  *(uint *)(uVar1 + 0x18) = (uint)*((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 0x13a)));
  *((byte *)GEN_TOP((*(int *)(this + 0x1f8) + 0x2e))) = *((byte *)GEN_TOP((*(int *)(this + 0x1f8) + 0x2e))) | 0x10;
  if ((this[500] == (undefined1)0x0) || (*(int *)(this + 0x1d8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_0093f3b0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x14))),"InventoryGridCrystal",0,0,
                         *((ushort *)GEN_TOP((*(int *)(this + 0x1d8) + 0xf6))) & 0xf,0);
    uVar1 = F_00594fc0(this + 0x1c0,uVar1,1,0,0,uVar1,0,1,0,0);
    if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar1 + 4) + 0x13b))) = *((undefined1 *)GEN_TOP((*(int *)(this + 0x1d8) + 0x13a)))
      ;
    }
  }
  *(uint *)(this + 0x1fc) = uVar1;
  *(uint *)(uVar1 + 0x18) = (uint)*((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 0x13a)));
  *((byte *)GEN_TOP((*(int *)(this + 0x1fc) + 0x2e))) = *((byte *)GEN_TOP((*(int *)(this + 0x1fc) + 0x2e))) | 0x10;
  F_0059bd30(this + 0x1c0,*((undefined4 *)GEN_TOP((*(int *)(this + 0x1f8) + 0x18))),1,1);
  *(undefined4 *)(this + 0x204) = 0;
  F_0059dde0(*(undefined * PTR32 *)(this + 0x198),1);
  uVar1 = F_0055e2f0(this,0x15);
  *(uint *)(this + 0x1ac) = uVar1;
  uVar1 = F_0055e2f0(this,0x16);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x1b0) = uVar1;
  F_0059d640(*(undefined * PTR32 *)(this + 0x1ac),0x66);
  if (*(int *)(this + 0x1b0) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70)));
  }
  F_00568380(pvVar3,0x17,0x16,this,0,0);
  F_0059d670(*(undefined * PTR32 *)(this + 0x18c),0x11);
  F_005a91d0(this,1,7);
  uVar1 = F_005a91d0(this,0,6);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryEvent::vf44 */
uint F_00890010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x890010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  byte bVar4;
  int iVar5;
  uint local_c;
  undefined * local_8;
  
  uVar1 = F_0055e340(this,0xf);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,7);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
      uVar1 = 0;
    }
  }
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e2f0(this,0xe);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
      uVar1 = 0;
    }
  }
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e2f0(this,2);
  *(uint *)(this + 0x18c) = uVar1;
  uVar1 = F_0055e2f0(this,3);
  *(uint *)(this + 400) = uVar1;
  local_8 = this + 0x194;
  iVar5 = 9;
  local_c = 5;
  do {
    uVar1 = F_0055e2f0(this,iVar5);
    if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
       (uVar2 = F_005613a0(uVar1), uVar2 != 4)) {
      uVar1 = 0;
    }
    *(uint *)local_8 = uVar1;
    if (uVar1 == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)(uVar1 + 0x70);
    }
    F_00568380(pvVar3,0x17,iVar5,this,0,0);
    local_8 = local_8 + 4;
    iVar5 = iVar5 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  F_0055a300(*(undefined * PTR32 *)(this + 0x180),0);
  F_0059d670(*(undefined * PTR32 *)(this + 0x18c),0x11);
  if (*(int *)(this + 0x188) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar3,0x17,0,this,0,0);
  bVar4 = 1;
  local_c = 1;
  if ((4 < param_1) && (((byte)*(undefined4 *)(param_2 + 0x20) & 0xf) == 2)) {
    bVar4 = *(byte *)(param_2 + 0x24);
    local_c = (uint)bVar4;
  }
  if ((this[0x1e8] == (undefined1)0x0) || (*(int *)(this + 0x1cc) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_0093f440(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1d0) + 0x14))),"InventoryEventGrid",0,0,
                         *((ushort *)GEN_TOP((*(int *)(this + 0x1cc) + 0xf6))) & 0xf,0);
    uVar1 = F_00594fc0(this + 0x1b4,uVar1,1,0,0,uVar1,0,1,0,0);
    if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar1 + 4) + 0x13b))) = *((undefined1 *)GEN_TOP((*(int *)(this + 0x1cc) + 0x13a)))
      ;
    }
  }
  *(uint *)(this + 0x1ec) = uVar1;
  *(uint *)(uVar1 + 0x18) = (uint)*((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 0x13a)));
  *((byte *)GEN_TOP((*(int *)(this + 0x1ec) + 0x2e))) = *((byte *)GEN_TOP((*(int *)(this + 0x1ec) + 0x2e))) | 0x10;
  this[0x1ea] = (undefined1)(bVar4 == 0);
  F_0059bd30(this + 0x1b4,*((undefined4 *)GEN_TOP((*(int *)(this + 0x1ec) + 0x18))),1,local_c);
  *(undefined4 *)(this + 0x200) = 0;
  F_0059dde0(*(undefined * PTR32 *)(this + 0x194),1);
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  F_005a91d0(this,1,7);
  uVar1 = F_005a91d0(this,0,6);
  return uVar1;
}

/* ref: FUN_00890270 */
unsigned int F_00890270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x890270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort * puVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  
  if ((*(byte *)((int)this + 0xf9) & 1) != 0) {
    uVar3 = F_0055dcb0();
    F_00594ae0(*(undefined * PTR32 *)(uVar3 + 0x14),(int)this + 0x290,0x20000000);
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x294);
  for (piVar4 = *(int * PTR32 *)((int)this + 0x290); piVar4 != piVar2; piVar4 = piVar4 + 1) {
    if ((char)param_1 == '\0') {
      puVar1 = (ushort *)(*piVar4 + 0x126);
      *puVar1 = *puVar1 & 0xfff7;
    }
    else {
      puVar1 = (ushort *)(*piVar4 + 0x126);
      *puVar1 = *puVar1 | 8;
    }
  }
  return 0;
}

/* ref: FUN_008902e0 */
uint F_008902e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8902e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  if (*(int *)((int)this + param_1 * 4 + 0x1a4) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),4);
    (*(int *)(gen_frame + 0x4)) = param_1;
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,"ChatLogPanel_%d",param_1);
    puVar3 = (undefined4 *)
             F_0094c520((undefined *)((int)this + 0x21c),((undefined1 *)(gen_frame + 0x8)),1,&(*(undefined4 *)(gen_frame + 0x0)),0,param_1,param_1 + 1);
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar3[1] != 0) {
        *(char *)(puVar3[1] + 0x10f) = (char)param_1 + '\x04';
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x14) + 100))))(*(int * PTR32 *)(uVar2 + 0x14),puVar3[1]);
      }
      *(byte *)((int)puVar3 + 0x2eU) = *(byte *)((int)puVar3 + 0x2eU) | 4;
      *puVar3 = param_2;
      iVar1 = *(int *)((int)this + param_1 * 4 + 0x1a4);
      uVar4 = 0;
      if (iVar1 != 0) {
        uVar4 = *(undefined4 *)(iVar1 + 0x70);
      }
      F_0056c520((undefined *)((int)this + 0x21c),puVar3,uVar4);
      *(byte *)(puVar3 + 0xb) =
           *(byte *)(puVar3 + 0xb) ^ ((param_1 != 0) * '\x04' ^ *(byte *)(puVar3 + 0xb)) & 4;
      *(char *)((int)this + 0x1cd) = *(char *)((int)this + 0x1cd) + '\x01';
    }
    uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: Client::UI2::AddonChatLogPanel::vf47 */
uint F_008903d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8903d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00886280(this + 0x1a0,param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonItemDetail::vf47 */
uint F_008903e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8903e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 extraout_var = 0;
  uint uVar7;
  undefined2 extraout_var_00 = 0;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  
  uVar5 = *(uint *)(param_1 + 0x74);
  iVar6 = *(int *)(param_2 + 0x68);
  if ((*((byte *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8))) & 2) == 0) {
    F_0055a300(*(undefined * PTR32 *)(this + 0x200),0);
  }
  else {
    F_0055a300(*(undefined * PTR32 *)(this + 0x200),1);
    F_00584110(*(undefined * PTR32 *)(this + 0x200),*((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 8))));
  }
  if ((*((byte *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8))) & 4) != 0) {
    F_00584110(*(undefined * PTR32 *)(this + 0x1b0),*((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0x34))));
  }
  uVar4 = *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8)));
  uVar7 = *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc)));
  uVar3 = F_0055dcb0();
  uVar10 = *(uint *)(uVar3 + 0x234) >> 1;
  uVar3 = F_0055dcb0();
  uVar3 = *(uint *)(uVar3 + 0x18);
  uVar2 = *(ushort *)(uVar3 + 0xc64);
  uVar8 = (uint)uVar2;
  uVar9 = (uint)*(ushort *)(uVar3 + 0xc66);
  if ((uVar4 & 1) != 0) {
    uVar4 = F_0080a3c0(this,uVar5,iVar6);
    if ((char)uVar4 == '\0') {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x180) + 8))))(this + 0x180);
      return uVar5;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
    F_0055a300(*(undefined * PTR32 *)(this + 0x1fc),
                 (uint)((*((byte *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x10))) & 0x80) != 0));
    F_007aa620(this,uVar5,iVar6);
    F_007aa6e0(this,uVar5,iVar6);
    F_0084da70(this,uVar5,iVar6);
    F_007aaa80(this,uVar5,iVar6);
    if ((uVar7 == 1) || (uVar3 = uVar7, uVar7 == 2)) {
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this);
      iVar11 = (int)(short)uVar5;
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1);
      iVar6 = ((uVar5 & 0xffff) >> 1) + iVar11;
      if ((uVar7 == 1) &&
         ((((int)(short)uVar2 < (int)uVar10 && (iVar6 < (int)uVar10)) ||
          (((int)uVar10 < (int)(short)uVar2 && ((int)uVar10 < iVar6)))))) {
        uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1);
        iVar11 = (uVar10 * 2 - ((uVar5 & 0xffff) >> 1)) - iVar6;
      }
      uVar12 = 0;
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this);
      uVar1 = F_007aae10(this,iVar11,uVar5 & 0xffff,uVar12);
      uVar3 = CONCAT22(extraout_var,uVar1);
    }
  }
  if (uVar7 != 0) {
    return uVar3;
  }
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1);
  uVar5 = (uint)(ushort)((short)uVar5 + 0x1a);
  if ((int)(short)uVar2 < (int)uVar10) {
    uVar4 = uVar8 - uVar5;
    uVar5 = F_0056b390(this,uVar4,uVar9,1);
    if ((uVar5 & 1) != 0) {
      param_1 = uVar8 + 0x20;
      goto LAB_008905eb;
    }
  }
  else {
    uVar4 = uVar8 + 0x20;
    uVar7 = F_0056b390(this,uVar4,uVar9,1);
    if ((uVar7 & 2) != 0) {
      param_1 = uVar8 - uVar5;
      goto LAB_008905eb;
    }
  }
  param_1 = uVar4 & 0xffff;
LAB_008905eb: ;
  uVar2 = F_007aae10(this,param_1,uVar9 + 0x18,1);
  return CONCAT22(extraout_var_00,uVar2);
}

/* ref: FUN_00890610 */
unsigned int F_00890610(unsigned int gen_a0)
{
  GEN_ENTER(0x890610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * in_ecx;
  uint uVar3;
  int in_ecx_00;
  
  iVar1 = *(int *)((int)this + 0xa4);
  in_ecx_00 = iVar1;
  if (iVar1 != 0) {
    while( true ) {
      uVar2 = F_0055a2d0(in_ecx_00);
      if ((char)uVar2 == '\0') break;
      in_ecx_00 = *(int *)(in_ecx_00 + 8);
      if (in_ecx_00 == 0) {
        return 0;
      }
    }
    if (in_ecx_00 != 0) {
      uVar2 = F_00561680(iVar1);
      if (uVar2 != 0) {
        uVar2 = F_0055e2f0(this,0x29);
        if (uVar2 != 0) {
          in_ecx = (int *)F_00559c20(uVar2);
          if (in_ecx != (int *)0x0) {
            uVar2 = F_005613a0(in_ecx);
            if (uVar2 == 0) {
              uVar2 = ((code *)*(gen_code32 *)(*in_ecx + 0x38))(in_ecx);
              if (uVar2 != 0) {
                uVar3 = F_0055a2d0(uVar2);
                if ((char)uVar3 != '\0') {
                  uVar3 = F_0055dcb0();
                  if (*((undefined * PTR32 *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xcc))) == this) {
                    F_0059b340(this,uVar2,1,0);
                    return 0;
                  }
                  *(uint *)((int)this + 0xa4) = uVar2;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_008906c0 */
byte F_008906c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8906c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((*(byte *)((int)this + 0xf9) & 1) == 0) {
    return 0;
  }
  uVar1 = F_0055e2f0(this,param_2);
  uVar1 = F_00559c20(uVar1);
  if (((uVar1 == 0) ||
      (piVar2 = (int *)F_00573130((int)this + 0x24,(uint)*(byte *)(uVar1 + 0x78),0,0),
      piVar2 == (int *)0x0)) || (uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2), uVar1 == 0)) {
    if (param_2 == 0x74) {
      if (param_1 == 10) {
        return 0;
      }
      uVar4 = 0x58;
    }
    else {
      if (param_2 != 0x23) {
        return 0;
      }
      if (param_1 != 7) {
        return 0;
      }
      uVar4 = 0x34;
    }
    uVar1 = F_0084e6f0(this,uVar4);
    if (uVar1 == 0) {
      return 0;
    }
  }
  uVar3 = F_0055a2d0(uVar1);
  if ((char)uVar3 == '\0') {
    return 0;
  }
  F_0059b340(this,uVar1,1,param_1);
  return 1;
}

/* ref: FUN_00890770 */
byte F_00890770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x890770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (int *)F_00561680(param_1);
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar1;
  param_1 = 100;
  if (piVar1 != (int *)0x0) {
    while (0 < param_1) {
      uVar2 = F_007ab070(piVar1,param_2,param_3);
      if ((int)uVar2 < 1) {
        return 0;
      }
      if (uVar2 == 0xff) {
        return 0;
      }
      piVar1 = (int *)F_0084eed0(this,uVar2);
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      if ((*(int * PTR32 *)(gen_frame + 0x8)) == piVar1) {
        return 0;
      }
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
      if (uVar2 == 0) {
        return 0;
      }
      uVar3 = F_0055a2d0(piVar1[0x1c]);
      if ((char)uVar3 != '\0') {
        uVar3 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x4)),0);
        F_005a2670(((undefined1 *)(gen_frame + 0x4)));
        F_0059b340(this,uVar2,1,param_2);
        return 1;
      }
      piVar1 = (int *)F_00561680(uVar2);
      if ((*(int * PTR32 *)(gen_frame + 0x8)) == piVar1) {
        return 0;
      }
      param_1 = param_1 + -1;
      if (piVar1 == (int *)0x0) {
        return 0;
      }
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonAreaMap::vf5 */
uint F_00891200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x891200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if ((uVar2 == 5) || (uVar2 == 4)) {
    this[0x4f2] = (undefined1)0x1;
  }
  F_00850110(this,(uint)*(ushort *)(this + 0x4c0));
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2);
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0xd4) != 0)) {
    puVar1 = *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 0xd4) + 0x20)));
    *puVar1 = *puVar1 | 2;
  }
  uVar2 = F_005a89b0(this,param_1,1);
  if (this[0x4f5] != (undefined1)0x0) {
    uVar2 = F_0055dcb0();
    if (*((undefined * PTR32 *)GEN_TOP((*(int *)(uVar2 + 0x14) + 0xcc))) == this) {
      uVar2 = F_0055dcb0();
      uVar2 = F_00594ca0(*(undefined * PTR32 *)(uVar2 + 0x14),this);
    }
  }
  return uVar2;
}

/* ref: FUN_00891290 */
uint F_00891290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x891290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  undefined * pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*(int *)((int)this + 0x4ac) != -1) {
    F_0084fde0(this,*(int *)((int)this + 0x4ac));
    *(undefined4 *)((int)this + 0x4ac) = 0xffffffff;
  }
  uVar3 = F_0055dcb0();
  F_005aa060((undefined *)(uVar3 + 0x20c),0xe,0);
  uVar3 = F_0055dcb0();
  *(undefined1 *)(uVar3 + 0x21b) = 1;
  *(undefined1 *)((int)this + 0x4ee) = 1;
  uVar2 = param_1[1];
  *(float *)((int)this + 0x254) = (float)(int)(short)*param_1;
  *(float *)((int)this + 600) = (float)(int)(short)uVar2;
  bVar1 = *(byte *)((int)this + 0x13a);
  uVar3 = F_0055dcb0();
  F_00596cb0((undefined *)(uVar3 + 0xe0),(uint)bVar1,0);
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0xc;
  uVar7 = 5;
  pvVar6 = this;
  pvVar4 = (undefined *)F_0055dcb0();
  F_0056a3d0(pvVar4,uVar7,uVar8,pvVar6,uVar9,uVar10);
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0xe;
  uVar7 = 4;
  pvVar6 = this;
  pvVar4 = (undefined *)F_0055dcb0();
  F_0056a3d0(pvVar4,uVar7,uVar8,pvVar6,uVar9,uVar10);
  puVar5 = (undefined4 *)F_0080d430(this,(uint)*param_1,(uint)param_1[1],0xe);
  *(undefined4 * PTR32 *)((int)this + 0x4a8) = puVar5;
  if ((((puVar5 <= *(undefined4 * PTR32 *)((int)this + 0x4bc)) && (*(int *)((int)this + 0x278) != 0)) &&
      (puVar5 < (undefined4 *)(uint)*(ushort *)((int)this + 0x27c))) &&
     (((puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x278) + (int)((int)(uintptr_t)puVar5) * 0x1c))),
       puVar5 != (undefined4 *)0x0 && (*(char *)((int)puVar5 + 0x19) != '\0')) &&
      (pvVar6 = (undefined *)*puVar5, puVar5 = (undefined4 *)0x0, pvVar6 != (undefined *)0x0)))) {
    uVar7 = 3;
    pvVar6 = (undefined *)F_0057e1b0(pvVar6);
    puVar5 = (undefined4 *)F_0059d640(pvVar6,uVar7);
  }
  return (uint)puVar5;
}

/* ref: FUN_008913c0 */
unsigned int F_008913c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8913c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(char *)((int)this + 0x4ee) != '\0') {
    F_0084fc00(this,param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_008913e0 */
uint F_008913e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8913e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_0080d430(this,(uint)*param_1,(uint)param_1[1],0xe);
  if (uVar1 != *(uint *)((int)this + 0x4ac)) {
    F_0084fde0(this,*(uint *)((int)this + 0x4ac));
  }
  if (uVar1 != 0xffffffff) {
    F_0084fca0(this,param_1,uVar1);
  }
  *(uint *)((int)this + 0x4ac) = uVar1;
  uVar1 = F_007ae070(this);
  return uVar1;
}

/* ref: FUN_00891440 */
uint F_00891440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x891440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x4ac);
  if (uVar1 != 0xffffffff) {
    uVar1 = F_0084fde0(this,uVar1);
    *(undefined4 *)((int)this + 0x4ac) = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_00891470 */
uint F_00891470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x891470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(bool *)((int)this + 0x4f0) = (char)param_1 == '\0';
  this_00 = *(undefined * PTR32 *)((int)this + 0x1a8);
  if ((this_00 != (undefined *)0x0) && (*(char *)((int)this_00 + 0x88) != (char)param_1)) {
    F_0059dde0(this_00,param_1);
  }
  F_00850340(this);
  uVar1 = F_007ae540(this);
  return uVar1;
}

/* ref: FUN_008914b0 */
uint F_008914b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8914b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  uint uVar2;
  float * pfVar3;
  float10 fVar4;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x28))))((*(int * PTR32 *)&gen_args[0]),((short *)(gen_frame + 0x8)),((short *)(gen_frame + 0x4)));
  fVar4 = F_0055df60((*(int * PTR32 *)&gen_args[0]));
  uVar2 = (*(uint *)&gen_args[1]);
  pfVar3 = ((float *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x11e)));
  (*(float *)(gen_frame + 0x0)) = (float)((float10)1 / fVar4);
  fVar4 = (float10)(float)((float10)1 / fVar4);
  (*(float *)(gen_frame + 0x0)) = (float)*((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x131)));
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(((float)GEN_TOF((fVar4 * (((float10)(int)*(short *)(*(uint *)&gen_args[1]) -
                                               (float10)(int)((short *)(gen_frame + 0x8))[0]) -
                                              ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x11c]))))))));
  if (!((float10)*pfVar3 < ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))))) {
    pfVar3 = (float *)&(*(uint *)&gen_args[1]);
  }
  pfVar1 = &(*(float *)(gen_frame + 0x0));
  if (!((float10)*pfVar3 < (float10)*((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x131))))) {
    pfVar1 = pfVar3;
  }
  pfVar3 = ((float *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x11f)));
  (*(float *)(gen_frame + 0x0)) = (float)*((ushort *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x4c6)));
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(((float)GEN_TOF(((((float10)(int)*(short *)(uVar2 + 2) -
                                       (float10)(int)((short *)(gen_frame + 0x4))[0]) -
                                      ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x11d])))) * fVar4))));
  if (!((float10)*pfVar3 < ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))))) {
    pfVar3 = (float *)&(*(uint *)&gen_args[1]);
  }
  if ((float10)*pfVar3 < (float10)*((ushort *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x4c6)))) {
    pfVar3 = &(*(float *)(gen_frame + 0x0));
  }
  uVar2 = F_0084ff30((*(int * PTR32 *)&gen_args[0]),*pfVar1,*pfVar3);
  return uVar2;
}

/* ref: FUN_008917a0 */
uint F_008917a0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8917a0u, gen_a0, 0u, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = *(uint *)((int)param_1 + 0x4a4) >> 2 & 1;
  *(float *)((int)param_1 + 0x24c) = param_2;
  *(float *)((int)param_1 + uVar1 * 4 + 0x358) = param_2;
  if ((char)param_3 != '\0') {
    F_008915c0(param_1,1);
    uVar1 = F_0084fec0(param_1);
  }
  if ((char)param_4 != '\0') {
    uVar1 = F_007ae540(param_1);
  }
  return uVar1;
}

/* ref: FUN_008917f0 */
unsigned int F_008917f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8917f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  byte * pbVar2;
  int * piVar3;
  int * piVar4;
  byte * pbVar5;
  byte * pbVar6;
  uint local_8;
  
  pbVar6 = (byte *)0x0;
  pbVar5 = (byte *)0x0;
  local_8 = 0;
  pbVar2 = (byte *)((int)this + 0x1c2);
  do {
    if (pbVar2[-0x1c] == param_1) {
      pbVar5 = pbVar2 + -0x36;
    }
    if (pbVar2[-0x1c] == param_2) {
      pbVar6 = pbVar2 + -0x36;
    }
    if ((pbVar5 != (byte *)0x0) && (pbVar6 != (byte *)0x0)) break;
    if (*pbVar2 == param_1) {
      pbVar5 = pbVar2 + -0x1a;
    }
    if (*pbVar2 == param_2) {
      pbVar6 = pbVar2 + -0x1a;
    }
    if ((pbVar5 != (byte *)0x0) && (pbVar6 != (byte *)0x0)) break;
    if (pbVar2[0x1c] == param_1) {
      pbVar5 = pbVar2 + 2;
    }
    if (pbVar2[0x1c] == param_2) {
      pbVar6 = pbVar2 + 2;
    }
    if ((pbVar5 != (byte *)0x0) && (pbVar6 != (byte *)0x0)) break;
    if (pbVar2[0x38] == param_1) {
      pbVar5 = pbVar2 + 0x1e;
    }
    if (pbVar2[0x38] == param_2) {
      pbVar6 = pbVar2 + 0x1e;
    }
    if ((pbVar5 != (byte *)0x0) && (pbVar6 != (byte *)0x0)) break;
    if (pbVar2[0x54] == param_1) {
      pbVar5 = pbVar2 + 0x3a;
    }
    if (pbVar2[0x54] == param_2) {
      pbVar6 = pbVar2 + 0x3a;
    }
    if ((pbVar5 != (byte *)0x0) && (pbVar6 != (byte *)0x0)) break;
    local_8 = local_8 + 5;
    pbVar2 = pbVar2 + 0x8c;
  } while (local_8 < 10);
  if ((pbVar5 != (byte *)0x0) && (pbVar6 != (byte *)0x0)) {
    pbVar5[0x1a] = (byte)param_2;
    pbVar6[0x1a] = (byte)param_1;
    piVar1 = *(int * PTR32 *)((int)this + 0x60);
    piVar4 = *(int * PTR32 *)((int)this + 0x5c);
    if (piVar4 != piVar1) {
      piVar3 = piVar4;
      do {
        if (*piVar3 == *(int *)pbVar5) break;
        piVar3 = piVar3 + 1;
      } while (piVar3 != piVar1);
    }
    if (piVar4 != piVar1) {
      do {
        if (*piVar4 == *(int *)pbVar6) {
          return 0;
        }
        piVar4 = piVar4 + 1;
      } while (piVar4 != piVar1);
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonPopUpText::vf36 */
unsigned int F_00891900(unsigned int gen_a0)
{
  GEN_ENTER(0x891900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  F_0055dc60((undefined *)this);
  F_00c48350(this + 0x188,0,0x373c);
  piVar1 = *(int * PTR32 *)(this + 0x38c4);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)(this + 0x38c4) + 4))) = *(int *)(this + 0x38c4);
  *(undefined4 *)(this + 0x38c8) = 0;
  if (piVar2 != *(int * PTR32 *)(this + 0x38c4)) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(this + 0x38c4));
  }
  *(undefined4 *)(this + 0x38d0) = REFG(float, 0x1087f04);
  return 0;
}

/* ref: Client::UI2::AddonPopUpText::vf37 */
uint F_00891980(unsigned int gen_a0)
{
  GEN_ENTER(0x891980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)(this + 0x38c4);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)(this + 0x38c4) + 4))) = *(int *)(this + 0x38c4);
  *(undefined4 *)(this + 0x38c8) = 0;
  if (piVar2 != *(int * PTR32 *)(this + 0x38c4)) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(this + 0x38c4));
  }
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: Client::UI2::AddonPopUpText::vf44 */
unsigned int F_008919e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8919e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * pAVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(this + 0x94) = 0;
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = 0;
  do {
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      uVar4 = 3;
      break;
    case 1: ;
      uVar4 = 4;
      break;
    case 2: ;
      uVar2 = F_005a82c0(this + 0x24,3,1,0);
      goto LAB_00891afc;
    case 3: ;
      uVar4 = 7;
      break;
    case 4: ;
      uVar2 = F_005a82c0(this + 0x24,7,1,2);
      goto LAB_00891afc;
    default: ;
      goto switchD_00891a1c_caseD_5;
    case 7: ;
      uVar4 = 2;
      break;
    case 8: ;
      uVar4 = 5;
      break;
    case 9: ;
      uVar4 = 6;
      break;
    case 0xc: ;
      uVar4 = 10;
      break;
    case 0xd: ;
      uVar4 = 0xc;
      break;
    case 0xe: ;
      uVar4 = 0xd;
      break;
    case 0x12: ;
      uVar2 = F_005a82c0(this + 0x24,4,1,3);
      goto LAB_00891afc;
    case 0x16: ;
      uVar4 = 0xb;
      break;
    case 0x1a: ;
      uVar4 = 0xf;
      break;
    case 0x1b: ;
      uVar2 = F_005a82c0(this + 0x24,0xf,1,4);
      goto LAB_00891afc;
    case 0x1c: ;
      uVar4 = 9;
      break;
    case 0x1d: ;
      uVar4 = 0x10;
      break;
    case 0x1e: ;
      uVar4 = 8;
      break;
    case 0x1f: ;
      uVar2 = F_005a82c0(this + 0x24,3,1,1);
      goto LAB_00891afc;
    case 0x21: ;
      uVar2 = F_005a82c0(this + 0x24,10,1,5);
      goto LAB_00891afc;
    case 0x22: ;
      uVar2 = F_005a82c0(this + 0x24,0xc,1,6);
      goto LAB_00891afc;
    case 0x23: ;
      uVar2 = F_005a82c0(this + 0x24,0xd,1,7);
      goto LAB_00891afc;
    case 0x25: ;
      uVar4 = 0xe;
    }
    uVar2 = F_0055e2f0(this,uVar4);
LAB_00891afc: ;
    *(uint *)(this + uVar1 * 0x7c + 0x18c) = uVar2;
switchD_00891a1c_caseD_5: ;
    F_0080d610(this,this + uVar1 * 0x7c + 0x18c);
    uVar1 = uVar1 + 1;
    if (0x25 < uVar1) {
      pAVar3 = this + 0x13fe;
      uVar1 = 0;
      do {
        *pAVar3 = (undefined1)((char)uVar1 + '\b');
        uVar1 = uVar1 + 1;
        pAVar3 = pAVar3 + 0x7c;
      } while (uVar1 < 0x4c);
      return 0;
    }
  } while( true );
}

/* ref: Client::UI2::AddonFlyText::vf36 */
unsigned int F_00891bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x891bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined * pAVar4;
  
  F_0055dc60((undefined *)this);
  F_00c48350(this + 0x188,0,0x100c);
  *(undefined4 *)(this + 0x12f0) = 0x5c;
  *(undefined2 *)(this + 0x11a0) = 0xe;
  *(undefined2 *)(this + 0x11c0) = 0xe;
  *(undefined2 *)(this + 0x11e0) = 6;
  *(undefined2 *)(this + 0x1200) = 6;
  *(undefined2 *)(this + 0x1220) = 6;
  *(undefined2 *)(this + 0x1240) = 6;
  *(undefined2 *)(this + 0x1260) = 6;
  *(undefined2 *)(this + 0x1280) = 6;
  *(undefined2 *)(this + 0x12a0) = 6;
  *(undefined2 *)(this + 0x12c0) = 6;
  uVar3 = 0;
  pAVar4 = this + 0x1194;
  do {
    piVar1 = *(int * PTR32 *)pAVar4;
    piVar2 = (int *)*piVar1;
    *piVar1 = (int)piVar1;
    *(int *)(*(int *)pAVar4 + 4) = *(int *)pAVar4;
    *(int *)(pAVar4 + 4) = 0;
    if (piVar2 != *(int * PTR32 *)pAVar4) {
      do {
        piVar1 = (int *)*piVar2;
        F_00429760(piVar2,0xc,400);
        piVar2 = piVar1;
      } while (piVar1 != (int *)*(int *)pAVar4);
    }
    *(int *)(pAVar4 + 0x10) = 0;
    *(int *)(pAVar4 + 0x14) = 0;
    *(int *)(pAVar4 + 0x18) = 0;
    *(int *)(pAVar4 + 0x1c) = 0;
    *(short *)(pAVar4 + 0xe) = 9 - (short)uVar3;
    uVar3 = uVar3 + 1;
    pAVar4 = pAVar4 + 0x20;
  } while (uVar3 < 10);
  return 0;
}

/* ref: Client::UI2::AddonFlyText::vf37 */
uint F_00891cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x891cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined * pAVar4;
  int local_8;
  
  F_005a92d0(this,1,0x1e,0);
  F_005a92d0(this,0,0x1b,0);
  pAVar4 = this + 0x1194;
  local_8 = 10;
  do {
    piVar1 = *(int * PTR32 *)pAVar4;
    piVar2 = (int *)*piVar1;
    *piVar1 = (int)piVar1;
    *(int *)(*(int *)pAVar4 + 4) = *(int *)pAVar4;
    *(int *)(pAVar4 + 4) = 0;
    if (piVar2 != *(int * PTR32 *)pAVar4) {
      do {
        piVar1 = (int *)*piVar2;
        F_00429760(piVar2,0xc,400);
        piVar2 = piVar1;
      } while (piVar1 != (int *)*(int *)pAVar4);
    }
    pAVar4 = pAVar4 + 0x20;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: Client::UI2::AddonSynthesisSimpleDialog::vf44 */
uint F_00891d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x891d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar2 = F_0055e2f0(this,7);
  if (uVar2 != 0) {
    uVar2 = F_00559c20(uVar2);
    if ((uVar2 == 0) || (uVar3 = F_005613a0(uVar2), uVar3 != 1)) {
      uVar2 = 0;
    }
    if (uVar2 != 0) {
      F_00568380(*(undefined * PTR32 *)(uVar2 + 0x70),0x17,0,this,0,0);
    }
  }
  uVar2 = F_0055e2f0(this,8);
  if (uVar2 != 0) {
    uVar2 = F_00559c20(uVar2);
    if ((uVar2 == 0) || (uVar3 = F_005613a0(uVar2), uVar3 != 1)) {
      uVar2 = 0;
    }
    if (uVar2 != 0) {
      F_00568380(*(undefined * PTR32 *)(uVar2 + 0x70),0x17,1,this,0,0);
    }
  }
  uVar2 = F_0055e2f0(this,5);
  if (((uVar2 == 0) || (pvVar4 = (undefined *)F_00559c20(uVar2), pvVar4 == (undefined *)0x0)) ||
     (uVar2 = F_005613a0(pvVar4), uVar2 != 3)) {
    pvVar4 = (undefined *)0x0;
  }
  *(undefined * PTR32 *)(this + 0x180) = pvVar4;
  if (pvVar4 != (undefined *)0x0) {
    F_0059dde0(pvVar4,0);
    pvVar4 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_00568380(pvVar4,0x17,2,this,0,0);
  }
  uVar2 = F_0055e2f0(this,6);
  if (((uVar2 == 0) || (pvVar4 = (undefined *)F_00559c20(uVar2), pvVar4 == (undefined *)0x0)) ||
     (uVar2 = F_005613a0(pvVar4), uVar2 != 8)) {
    pvVar4 = (undefined *)0x0;
  }
  uVar7 = 0;
  uVar6 = 0;
  uVar2 = F_00563a70(pvVar4);
  F_0059cf90(pvVar4,uVar2,uVar6,uVar7);
  uVar2 = 0;
  if (param_2 != (byte *)0x0) {
    if ((*param_2 & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (ushort)*(undefined4 *)(param_2 + 4);
    }
    *(ushort *)(this + 0x184) = uVar5;
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (undefined2)*(undefined4 *)(param_2 + 0xc);
    }
    *(undefined2 *)(this + 0x186) = uVar1;
    uVar2 = F_00851020(this,(uint)uVar5);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonSynthesisSimpleDialog::vf2 */
unsigned int F_00891e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x891e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  undefined1 * this_00;
  undefined4 uVar3;
  int iVar4;
  
  this_00 = (gen_frame + 0x1c);
  if ((short)param_1 != 0x17) {
    return 0;
  }
  if (param_2 == 0) {
    (*(int *)(gen_frame + 0xc)) = param_2;
    (*(int *)(gen_frame + 0x14)) = param_2;
    uVar1 = F_0055e2f0(this,6);
    if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
       (uVar2 = F_005613a0(uVar1), uVar2 != 8)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(uVar1 + 0x178);
    }
    F_005a2710(&(*(int *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = uVar3;
    (*(uint *)(gen_frame + 0x18)) = 0;
    if (*(int *)(this + 0x180) != 0) {
      (*(uint *)(gen_frame + 0x18)) = (uint)*((byte *)GEN_TOP((*(int *)(this + 0x180) + 0x88)));
    }
    F_005a2710(&(*(int *)(gen_frame + 0x14)),4);
    F_005a9110(this,2,&(*(int *)(gen_frame + 0xc)));
    F_00557670(param_3,0);
    iVar4 = 1;
    do {
      this_00 = this_00 + -8;
      F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    return 0;
  }
  if (param_2 == 1) {
    ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
    F_00557670(param_3,0);
    return 0;
  }
  if (param_2 != 2) {
    return 0;
  }
  if (*(int *)(this + 0x180) == 0) {
    return 0;
  }
  if (*((char *)GEN_TOP((*(int *)(this + 0x180) + 0x88))) == '\0') {
    F_00851020(this,(uint)*(ushort *)(this + 0x184));
    return 0;
  }
  F_00851020(this,(uint)*(ushort *)(this + 0x186));
  return 0;
}

/* ref: Client::UI2::AddonGathering::vf38 */
uint F_00891fb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x891fb0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined * pvVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this = (undefined *)F_005a2370(param_1,param_2);
  uVar4 = 0;
  uVar3 = 1;
  do {
    if (uVar4 < 8) {
      uVar2 = (uint)*(byte *)(uVar4 + 0x1a0 + (int)param_1);
      if (uVar2 == 1) {
        pvVar1 = *(undefined * PTR32 *)((int)param_1 + uVar4 * 4 + 0x180);
        this = (undefined *)0x0;
        if ((((pvVar1 != (undefined *)0x0) &&
             (this = (undefined *)F_0092a5c0(pvVar1,0x18,5), this != (undefined *)0x0)) &&
            (this = (undefined *)F_00561a50(this), (char)this != '\0')) &&
           ((pvVar1 = *(undefined * PTR32 *)((int)param_1 + uVar4 * 4 + 0x180), pvVar1 != (undefined *)0x0 &&
            (this = (undefined *)F_00561490(pvVar1,0x16), this != (undefined *)0x0)))) {
          *(uint *)((int)param_1 + 0x1ac) = *(uint *)((int)param_1 + 0x1ac) | uVar3;
          this = (undefined *)F_0059d640(this,0x65);
          *(undefined1 *)(uVar4 + 0x1a0 + (int)param_1) = 2;
          goto LAB_00892040;
        }
      }
      else {
        this = (undefined *)(uVar2 - 2);
        if (this == (undefined *)0x0) {
LAB_00892040: ;
          pvVar1 = *(undefined * PTR32 *)((int)param_1 + uVar4 * 4 + 0x180);
          if (((pvVar1 != (undefined *)0x0) &&
              (this = (undefined *)F_00561490(pvVar1,0x16), this != (undefined *)0x0)) &&
             (this = (undefined *)F_00559cd0(this), (undefined *)0x18 < this)) {
            *(undefined1 *)(uVar4 + 0x1a0 + (int)param_1) = 0;
            this = (undefined *)F_00851bb0(param_1,(int)*(short *)((int)param_1 + 0x138),
                                        *(undefined4 *)((int)param_1 + 0xe0));
          }
        }
      }
    }
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    if (7 < (int)uVar4) {
      return (uint)this;
    }
  } while( true );
}

/* ref: Client::UI2::AddonFateReward::vf44 */
uint F_008920a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8920a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  code * pcVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pAVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar2 = F_0055e2f0(this,3);
  *(uint *)(this + 0x180) = uVar2;
  uVar2 = F_0055e2f0(this,4);
  *(uint *)(this + 0x184) = uVar2;
  uVar2 = F_0055e2f0(this,5);
  *(uint *)(this + 0x188) = uVar2;
  uVar2 = F_0055e2f0(this,7);
  *(uint *)(this + 0x18c) = uVar2;
  uVar2 = F_0055e340(this,8);
  *(uint *)(this + 400) = uVar2;
  uVar2 = F_0055e340(this,9);
  *(uint *)(this + 0x194) = uVar2;
  uVar2 = F_0055e340(this,10);
  *(uint *)(this + 0x198) = uVar2;
  uVar2 = F_0055e2f0(this,0xb);
  *(uint *)(this + 0x19c) = uVar2;
  uVar2 = F_0055e2f0(this,0xc);
  *(uint *)(this + 0x1a0) = uVar2;
  pAVar5 = this + 0x1a4;
  uVar2 = F_0055e2f0(this,0xd);
  *(uint *)pAVar5 = uVar2;
  uVar2 = F_0055e2f0(this,0xe);
  *(uint *)(this + 0x208) = uVar2;
  uVar2 = F_0055e2f0(this,0xf);
  *(uint *)(this + 0x26c) = uVar2;
  iVar6 = 0;
  do {
    F_008525f0(this,iVar6,*(uint *)pAVar5);
    iVar6 = iVar6 + 1;
    pAVar5 = pAVar5 + 100;
  } while (iVar6 < 3);
  uVar2 = F_0055e2f0(this,0x10);
  *(uint *)(this + 0x2d8) = uVar2;
  pvVar3 = (undefined *)F_00559c20(uVar2);
  uVar2 = F_00561490(pvVar3,2);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar4 = F_005613a0(uVar2), uVar4 != 0xf)) {
    uVar2 = 0;
  }
  uVar7 = 3;
  *(uint *)(this + 0x2dc) = uVar2;
  pvVar3 = (undefined *)F_00559c20(*(undefined4 *)(this + 0x2d8));
  uVar2 = F_00561490(pvVar3,uVar7);
  *(uint *)(this + 0x2e0) = uVar2;
  F_00561990(*(undefined * PTR32 *)(this + 0x2dc),uVar2);
  F_0055a3c0(*(undefined4 *)(this + 0x2e0),1);
  uVar2 = F_0055e2f0(this,2);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar4 = F_005613a0(uVar2), uVar4 != 1)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x338) = uVar2;
  uVar2 = F_0055e340(this,6);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0xb8);
  *(uint *)(this + 0x33c) = uVar2;
  (*pcVar1)(this,param_1,param_2);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  uVar2 = 0;
  if (*(int *)(this + 0x338) != 0) {
    uVar2 = F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x338) + 0x70))),0x17,0xffffffff,this,0,0);
  }
  return uVar2;
}

/* ref: FUN_008923c0 */
uint F_008923c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8923c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar5 = 0;
  do {
    uVar1 = *(uint *)(param_2 + 4);
    uVar3 = F_0055e2f0(this,uVar5 + 10);
    if (uVar1 == uVar3) {
      *(uint *)((int)this + 0xa18) = uVar5;
      *(uint *)((int)this + 0x210) = uVar5;
      F_007b1990(this);
      iVar4 = *(int *)((int)this + 0x210) * 0x20;
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar4 + 0x214 + (int)this);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + iVar4 + 0x218);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + iVar4 + 0x21c);
      F_00560a60(((byte *)(gen_frame + 0x18)),(int)this + iVar4 + 0x220);
      (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + iVar4 + 0x228);
      (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + iVar4 + 0x22c);
      (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this + iVar4 + 0x230);
      F_00563db0(*(undefined4 *)((int)this + 0x194),1);
      F_0058bba0(*(undefined * PTR32 *)((int)this + 0x194),-(uint)((((byte *)(gen_frame + 0x18))[0] & 0xf) != 0) & (*(uint *)(gen_frame + 0x1c)));
      F_0080fe90(this,&(*(undefined4 *)(gen_frame + 0xc)));
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1d0) + *(int *)((int)this + 0xa18) * 4)));
      uVar7 = 0;
      uVar6 = 1;
      uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2);
      F_0059b340(this,uVar5,uVar6,uVar7);
      uVar5 = F_005a2670(((byte *)(gen_frame + 0x18)));
      return uVar5;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 7);
  return uVar3;
}

/* ref: FUN_008924c0 */
byte F_008924c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8924c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int iVar2;
  int * piVar3;
  
  if ((*(uint *)((int)this + 0x210) != param_1) && (param_1 < *(uint *)((int)this + 0x1fc))) {
    iVar2 = 0;
    piVar3 = (int *)((int)this + 0x1e0);
    (*(int *)(gen_frame + 0x18)) = -0x1e0 - (int)this;
    do {
      *piVar3 = param_1 + iVar2;
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)piVar3 + *(int *)((int)this + 0x1d0) + (*(int *)(gen_frame + 0x18))))) + 0x110))) = piVar3;
      F_00853320(this,*((undefined4 *)GEN_TOP(((int)piVar3 + *(int *)((int)this + 0x1d0) + (*(int *)(gen_frame + 0x18))))),*piVar3
                  );
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 7);
    *(uint *)((int)this + 0x210) = param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    uVar1 = *(undefined4 *)((int)this + 0x210);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x8)));
    F_00853260(this);
    piVar3 = &(*(int *)(gen_frame + 0x18));
    iVar2 = 1;
    do {
      piVar3 = piVar3 + -2;
      F_005a2670(piVar3);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonArmouryBoard::vf44 */
uint F_008925b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8925b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_10;
  undefined * local_c;
  uint local_8;
  
  F_00853600(this);
  if ((*param_2 & 0xf) == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(uint *)(param_2 + 4);
  }
  if ((param_2[8] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0xc);
  }
  *(undefined4 *)(this + 0x29c) = uVar3;
  if ((param_2[0x10] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x14);
  }
  *(undefined4 *)(this + 0x2b0) = uVar3;
  if ((param_2[0x20] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x24);
  }
  local_c = this + 0x1b4;
  *(undefined4 *)(this + 0x2a0) = uVar3;
  local_8 = 0;
  do {
    this_00 = *(undefined * PTR32 *)(local_c + -0x34);
    if (this_00 != (undefined *)0x0) {
      iVar4 = local_8 + 1;
      F_00568380(*(undefined * PTR32 *)((int)this_00 + 0x70),0x17,iVar4,this,0,0);
      F_00568380(*(undefined * PTR32 *)((int)this_00 + 0x70),6,iVar4,this,0,0);
      F_00568380(*(undefined * PTR32 *)((int)this_00 + 0x70),7,iVar4,this,0,0);
      if ((local_10 == local_8) && (F_0059dde0(this_00,1), local_8 != *(uint *)(this + 0x298))) {
        *(uint *)(this + 0x298) = local_8;
      }
    }
    if (*(undefined * PTR32 *)local_c != (undefined *)0x0) {
      if (local_8 < 7) {
        iVar4 = local_8 + 0x65;
      }
      else {
        iVar4 = local_8 + 0x5e;
      }
      F_0059d640(*(undefined * PTR32 *)local_c,iVar4);
    }
    if (*(undefined * PTR32 *)(local_c + 0x34) != (undefined *)0x0) {
      F_0055a300(*(undefined * PTR32 *)(local_c + 0x34),1);
    }
    local_c = local_c + 4;
    local_8 = local_8 + 1;
  } while (local_8 < 0xd);
  local_c = this + 0x21c;
  iVar4 = 0xf;
  do {
    iVar1 = *(int *)local_c;
    if (iVar1 != 0) {
      *(short *)(iVar1 + 0x9c) = (short)iVar4 + -0xf;
      *(undefined4 *)(iVar1 + 0xa0) = 0x18;
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x30,iVar4,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x34,iVar4,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x2d,iVar4,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x2e,iVar4,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x32,iVar4,this,0,0);
      if ((*(int *)(this + 0x29c) < 1) || (*(int *)(this + 0x29c) == 9)) {
        *(undefined1 *)(iVar1 + 0xa9) = 0;
      }
      else {
        *(undefined1 *)(iVar1 + 0xa9) = 3;
      }
    }
    local_c = local_c + 4;
    uVar2 = iVar4 - 0xe;
    iVar4 = iVar4 + 1;
  } while (uVar2 < 0x19);
  if (*(int *)(this + 0x290) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x290) + 0x70))),0x17,0x29,this,0,0);
  }
  F_00568380(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0,0);
  if (*(undefined * PTR32 *)(this + 0x294) != (undefined *)0x0) {
    F_0055a300(*(undefined * PTR32 *)(this + 0x294),1);
  }
  F_007b1d80(this);
  F_007b1ff0(this);
  if (((param_2[0x18] & 0xf) != 0) && (*(int *)(param_2 + 0x1c) != 0)) {
    uVar2 = F_0055dcb0();
    F_0059b860(*(undefined * PTR32 *)(uVar2 + 0x14),this,0);
    this[0x2a8] = (undefined1)0x1;
  }
  F_005a91d0(this,0,0x23);
  uVar2 = F_005a91d0(this,1,0x26);
  return uVar2;
}

/* ref: Client::UI2::AddonAchievement::vf44 */
unsigned int F_00892810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x892810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    F_008537a0(this);
    F_00811460(this,param_1,param_2);
    F_00591410(*(undefined * PTR32 *)(this + 400),0);
    ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  }
  return 0;
}

/* ref: Client::UI2::AddonGearSet::vf44 */
uint F_00892860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x892860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * pvVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(byte * PTR32 *)(gen_frame + 0x18)) = param_2;
  F_008546d0(this);
  if (*(int *)(this + 0x180) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x17,1,this,0,0);
  }
  if (*(int *)(this + 0x184) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,2,this,0,0);
  }
  if (*(int *)(this + 0x188) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x17,3,this,0,0);
    if (*(int *)(this + 0x188) == 0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_00568380(pvVar1,0xc,3,this,0,0);
  }
  F_00568380(*(undefined * PTR32 *)(this + 0x90),0xc,4,this,0,0);
  if (*(undefined * PTR32 *)(this + 0x18c) != (undefined *)0x0) {
    F_0056d690(*(undefined * PTR32 *)(this + 0x18c),1,0);
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0xe4))) = 0x200000;
    if (*(int *)(this + 0x18c) == 0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_00568380(pvVar1,0x21,5,this,0,0);
    if (*(int *)(this + 0x18c) == 0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_00568380(pvVar1,0x22,5,this,0,0);
    if (*(int *)(this + 0x18c) == 0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_00568380(pvVar1,0x2d,5,this,0,0);
    if (*(int *)(this + 0x18c) == 0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_00568380(pvVar1,0x11,5,this,0,0);
    if (*(int *)(this + 0x18c) == 0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_00568380(pvVar1,0x12,5,this,0,0);
    if (*(int *)(this + 0x18c) == 0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_00568380(pvVar1,0x24,5,this,0,0);
    if (*(int *)(this + 0x18c) == 0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_00568380(pvVar1,0x1f,5,this,0,0);
    if (*(int *)(this + 0x18c) == 0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_00568380(pvVar1,0x20,5,this,0,0);
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 7;
    (*(undefined4 *)(gen_frame + 0x28)) = 3;
    (*(undefined4 *)(gen_frame + 0x34)) = 2;
    (*(undefined4 *)(gen_frame + 0x40)) = 4;
    (*(undefined4 *)(gen_frame + 0x4c)) = 9;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x7b3cf0));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_00574320(*(undefined * PTR32 *)(this + 0x18c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x1c)),5,0);
  }
  if (1 < param_1) {
    if (((*(byte * PTR32 *)(gen_frame + 0x18))[8] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x18)) + 0xc);
    }
    if ((*(*(byte * PTR32 *)(gen_frame + 0x18)) & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x18)) + 4);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this,uVar2,uVar4);
  }
  F_0059d6a0(this,0x65,1,0);
  this[0xc88] = (undefined1)0x0;
  F_005a91d0(this,1,0x2b);
  uVar3 = F_005a91d0(this,0,0x27);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: Client::UI2::AddonTrade::vf44 */
uint F_00892af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x892af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined * pAVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined * local_8;
  
  F_00854d00(this);
  piVar1 = *(int * PTR32 *)(this + 0x1b8);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
  }
  *(uint *)(this + 0xa8) = uVar2;
  uVar5 = 0;
  if (*(int *)(this + 0x1b8) != 0) {
    uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1b8) + 0x70)));
  }
  uVar2 = F_0055a350(uVar5);
  if ((char)uVar2 == '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1b8) + 0x28))))(*(int * PTR32 *)(this + 0x1b8),1);
  }
  local_8 = this + 0x1d0;
  iVar4 = 3;
  do {
    piVar1 = *(int * PTR32 *)local_8;
    if (piVar1 != (int *)0x0) {
      uVar9 = 0;
      uVar8 = 0;
      uVar5 = 0x11;
      iVar6 = iVar4;
      pAVar7 = this;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
      F_00568380(pvVar3,uVar5,iVar6,pAVar7,uVar8,uVar9);
      uVar9 = 0;
      uVar8 = 0;
      uVar5 = 0x12;
      iVar6 = iVar4;
      pAVar7 = this;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
      F_00568380(pvVar3,uVar5,iVar6,pAVar7,uVar8,uVar9);
      uVar9 = 0;
      uVar8 = 0;
      iVar6 = iVar4 + -3;
      uVar5 = 0xc;
      pAVar7 = this;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
      F_00568380(pvVar3,uVar5,iVar6,pAVar7,uVar8,uVar9);
      uVar5 = 0;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(piVar1[0x21] + 0xc))(piVar1 + 0x21)));
      F_0055a300(pvVar3,uVar5);
      *(short *)(piVar1 + 0x27) = (short)iVar4 + -3;
      piVar1[0x28] = 0xc018;
      F_00568380((undefined *)piVar1[0x1c],0x2d,iVar4,this,0,0);
      F_00568380((undefined *)piVar1[0x1c],0x30,iVar4 + 5,this,0,0);
      F_00568380((undefined *)piVar1[0x1c],0x34,iVar4 + 10,this,0,0);
    }
    local_8 = local_8 + 4;
    iVar6 = iVar4 + -2;
    iVar4 = iVar4 + 1;
  } while (iVar6 < 5);
  F_00584110(*(undefined * PTR32 *)(this + 0x1a8),"");
  if (*(int *)(this + 0x1b8) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b8) + 0x70)));
  }
  F_00568380(pvVar3,0x17,0,this,0,0);
  pvVar3 = (undefined *)0x0;
  if (*(int *)(this + 0x1bc) != 0) {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1bc) + 0x70)));
  }
  F_00568380(pvVar3,0x17,1,this,0,0);
  pvVar3 = (undefined *)0x0;
  if (*(int *)(this + 0x1b4) != 0) {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b4) + 0x70)));
  }
  F_00568380(pvVar3,0x17,2,this,0,0);
  F_005a91d0(this,1,0xb);
  uVar2 = F_005a91d0(this,0,10);
  return uVar2;
}

/* ref: Client::UI2::AddonBuddy::vf44 */
uint F_00892cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x892cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  ushort uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * this_00;
  undefined * pvVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  undefined * pAVar8;
  undefined4 uVar9;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  ((byte *)(gen_frame + 0x14))[0x24] = (char)uVar2;
  ((byte *)(gen_frame + 0x14))[0x25] = (char)(uVar2 >> 8);
  ((byte *)(gen_frame + 0x14))[0x26] = (char)(uVar2 >> 0x10);
  ((byte *)(gen_frame + 0x14))[0x27] = (char)(uVar2 >> 0x18);
  uVar2 = F_0055e340(this,2);
  *(uint *)(this + 0x180) = uVar2;
  uVar2 = F_0055e340(this,5);
  *(uint *)(this + 0x184) = uVar2;
  uVar2 = F_0055e2f0(this,6);
  *(uint *)(this + 0x188) = uVar2;
  uVar2 = F_0055e2f0(this,0xb);
  if (((uVar2 == 0) || (pvVar3 = (undefined *)F_00559c20(uVar2), pvVar3 == (undefined *)0x0)) ||
     (uVar2 = F_005613a0(pvVar3), uVar2 != 0)) {
    pvVar3 = (undefined *)0x0;
  }
  uVar2 = F_00561530(pvVar3,3);
  *(uint *)(this + 0x18c) = uVar2;
  uVar2 = F_00561530(pvVar3,6);
  *(uint *)(this + 400) = uVar2;
  uVar2 = F_00561550(pvVar3,4);
  *(uint *)(this + 0x194) = uVar2;
  uVar2 = F_00561530(pvVar3,2);
  *(uint *)(this + 0x1b4) = uVar2;
  uVar2 = F_0055e2f0(this,0xc);
  if (((uVar2 == 0) || (this_00 = (undefined *)F_00559c20(uVar2), this_00 == (undefined *)0x0)) ||
     (uVar2 = F_005613a0(this_00), uVar2 != 0)) {
    this_00 = (undefined *)0x0;
  }
  uVar2 = F_00561530(this_00,3);
  *(uint *)(this + 0x198) = uVar2;
  uVar2 = F_00561530(this_00,6);
  *(uint *)(this + 0x19c) = uVar2;
  uVar2 = F_00561550(this_00,4);
  *(uint *)(this + 0x1a0) = uVar2;
  uVar2 = F_00561530(this_00,2);
  *(uint *)(this + 0x1b8) = uVar2;
  uVar2 = F_0055e2f0(this,3);
  *(uint *)(this + 0x1a4) = uVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this + 0x1a8;
  ((byte *)(gen_frame + 0x14))[0] = 8;
  ((byte *)(gen_frame + 0x14))[1] = 0;
  ((byte *)(gen_frame + 0x14))[2] = 0;
  ((byte *)(gen_frame + 0x14))[3] = 0;
  ((byte *)(gen_frame + 0x14))[4] = 9;
  ((byte *)(gen_frame + 0x14))[5] = 0;
  ((byte *)(gen_frame + 0x14))[6] = 0;
  ((byte *)(gen_frame + 0x14))[7] = 0;
  ((byte *)(gen_frame + 0x14))[8] = 10;
  ((byte *)(gen_frame + 0x14))[9] = 0;
  ((byte *)(gen_frame + 0x14))[10] = 0;
  ((byte *)(gen_frame + 0x14))[0xb] = 0;
  ((byte *)(gen_frame + 0x14))[0x18] = 4;
  ((byte *)(gen_frame + 0x14))[0x19] = 0;
  ((byte *)(gen_frame + 0x14))[0x1a] = 0;
  ((byte *)(gen_frame + 0x14))[0x1b] = 0;
  ((byte *)(gen_frame + 0x14))[0x1c] = 4;
  ((byte *)(gen_frame + 0x14))[0x1d] = 0;
  ((byte *)(gen_frame + 0x14))[0x1e] = 0;
  ((byte *)(gen_frame + 0x14))[0x1f] = 0;
  ((byte *)(gen_frame + 0x14))[0x20] = 4;
  ((byte *)(gen_frame + 0x14))[0x21] = 0;
  ((byte *)(gen_frame + 0x14))[0x22] = 0;
  ((byte *)(gen_frame + 0x14))[0x23] = 0;
  iVar7 = 0;
  do {
    uVar2 = F_0055e2f0(this,*(undefined4 *)(((byte *)(gen_frame + 0x14)) + iVar7));
    if (((uVar2 != 0) && (pvVar4 = (undefined *)F_00559c20(uVar2), pvVar4 != (undefined *)0x0)) &&
       (uVar2 = F_005613a0(pvVar4), uVar2 == 0)) {
      uVar2 = F_00561490(pvVar4,*(undefined4 *)(((byte *)(gen_frame + 0x14)) + iVar7 + 0x18));
      *(uint *)(*(undefined * PTR32 *)(gen_frame + 0x10)) = uVar2;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 *)(gen_frame + 0x10)) + 4;
    iVar7 = iVar7 + 4;
  } while (iVar7 < 0xc);
  uVar1 = F_0055a020(*(undefined4 *)(this + 0x188));
  *(ushort *)(this + 0x1bc) = uVar1;
  uVar2 = F_0055e2f0(this,0xe);
  *(uint *)(this + 0x1c0) = uVar2;
  uVar2 = F_0055e2f0(this,0x16);
  *(uint *)(this + 0x1c4) = uVar2;
  uVar2 = F_0055e2f0(this,0x1d);
  *(uint *)(this + 0x1c8) = uVar2;
  uVar2 = F_0055e2f0(this,0x13);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar5 = F_005613a0(uVar2), uVar5 != 0x11)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x1cc) = uVar2;
  pvVar4 = (undefined *)0x0;
  if (uVar2 != 0) {
    pvVar4 = *(undefined * PTR32 *)(uVar2 + 0x70);
  }
  F_00568380(pvVar4,0x2d,1,this,0,0);
  pvVar4 = (undefined *)0x0;
  if (*(int *)(this + 0x1cc) != 0) {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1cc) + 0x70)));
  }
  F_00568380(pvVar4,0x34,1,this,0,0);
  *((undefined1 *)GEN_TOP((*(int *)(this + 0x1cc) + 0xa9))) = 2;
  uVar2 = F_0055e2f0(this,0x1b);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar5 = F_005613a0(uVar2), uVar5 != 0x11)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x1d0) = uVar2;
  pvVar4 = (undefined *)0x0;
  if (uVar2 != 0) {
    pvVar4 = *(undefined * PTR32 *)(uVar2 + 0x70);
  }
  F_00568380(pvVar4,0x2d,2,this,0,0);
  if (*(int *)(this + 0x1d0) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1d0) + 0x70)));
  }
  F_00568380(pvVar4,0x34,2,this,0,0);
  (*(byte * PTR32 *)(gen_frame + 0x4)) = ((byte *)(gen_frame + 0x14)) + 0xc;
  *((undefined1 *)GEN_TOP((*(int *)(this + 0x1d0) + 0xa9))) = 2;
  ((byte *)(gen_frame + 0x14))[0xc] = 0x15;
  ((byte *)(gen_frame + 0x14))[0xd] = 0;
  ((byte *)(gen_frame + 0x14))[0xe] = 0;
  ((byte *)(gen_frame + 0x14))[0xf] = 0;
  ((byte *)(gen_frame + 0x14))[0x10] = 0x21;
  ((byte *)(gen_frame + 0x14))[0x11] = 0;
  ((byte *)(gen_frame + 0x14))[0x12] = 0;
  ((byte *)(gen_frame + 0x14))[0x13] = 0;
  ((byte *)(gen_frame + 0x14))[0x14] = 0x22;
  ((byte *)(gen_frame + 0x14))[0x15] = 0;
  ((byte *)(gen_frame + 0x14))[0x16] = 0;
  ((byte *)(gen_frame + 0x14))[0x17] = 0;
  ((byte *)(gen_frame + 0x14))[0x18] = 0x23;
  ((byte *)(gen_frame + 0x14))[0x19] = 0;
  ((byte *)(gen_frame + 0x14))[0x1a] = 0;
  ((byte *)(gen_frame + 0x14))[0x1b] = 0;
  ((byte *)(gen_frame + 0x14))[0x1c] = 0x24;
  ((byte *)(gen_frame + 0x14))[0x1d] = 0;
  ((byte *)(gen_frame + 0x14))[0x1e] = 0;
  ((byte *)(gen_frame + 0x14))[0x1f] = 0;
  ((byte *)(gen_frame + 0x14))[0x20] = 0x25;
  ((byte *)(gen_frame + 0x14))[0x21] = 0;
  ((byte *)(gen_frame + 0x14))[0x22] = 0;
  ((byte *)(gen_frame + 0x14))[0x23] = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0x3;
  pAVar8 = this + 0x1f8;
  (*(int *)(gen_frame + 0x8)) = 6;
  do {
    if (-1 < *(int *)(*(byte * PTR32 *)(gen_frame + 0x4))) {
      uVar2 = F_0055e2f0(this,*(int *)(*(byte * PTR32 *)(gen_frame + 0x4)));
      if (((uVar2 == 0) || (pvVar4 = (undefined *)F_00559c20(uVar2), pvVar4 == (undefined *)0x0)) ||
         (uVar2 = F_005613a0(pvVar4), uVar2 != 0)) {
        pvVar4 = (undefined *)0x0;
      }
      uVar2 = F_00561490(pvVar4,3);
      if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
         (uVar5 = F_005613a0(uVar2), uVar5 != 0x11)) {
        uVar2 = 0;
      }
      *(uint *)pAVar8 = uVar2;
      uVar2 = F_00561530(pvVar4,4);
      *(uint *)(pAVar8 + 4) = uVar2;
      *(undefined * PTR32 *)(pAVar8 + 0x24) = pvVar4;
      pvVar6 = (undefined *)0x0;
      if (*(uint *)pAVar8 != 0) {
        pvVar6 = *(undefined * PTR32 *)(*(uint *)pAVar8 + 0x70);
      }
      F_00568380(pvVar6,0x2d,(*(undefined * PTR32 *)(gen_frame + 0x10)),this,0,0);
      pvVar6 = (undefined *)0x0;
      if (*(uint *)pAVar8 != 0) {
        pvVar6 = *(undefined * PTR32 *)(*(uint *)pAVar8 + 0x70);
      }
      F_00568380(pvVar6,0x34,(*(undefined * PTR32 *)(gen_frame + 0x10)),this,0,0);
      *(undefined1 *)(*(uint *)pAVar8 + 0xa9) = 2;
      F_0056c880(*(undefined * PTR32 *)pAVar8,pvVar4);
    }
    (*(byte * PTR32 *)(gen_frame + 0x4)) = (*(byte * PTR32 *)(gen_frame + 0x4)) + 4;
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 1);
    pAVar8 = pAVar8 + 0x28;
    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
  } while ((*(int *)(gen_frame + 0x8)) != 0);
  uVar2 = F_0055e340(this,0x29);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this + 0x2f0;
  *(uint *)(this + 0x850) = uVar2;
  ((byte *)(gen_frame + 0x14))[0x18] = 0x2b;
  ((byte *)(gen_frame + 0x14))[0x19] = 0;
  ((byte *)(gen_frame + 0x14))[0x1a] = 0;
  ((byte *)(gen_frame + 0x14))[0x1b] = 0;
  ((byte *)(gen_frame + 0x14))[0x1c] = 0x2c;
  ((byte *)(gen_frame + 0x14))[0x1d] = 0;
  ((byte *)(gen_frame + 0x14))[0x1e] = 0;
  ((byte *)(gen_frame + 0x14))[0x1f] = 0;
  ((byte *)(gen_frame + 0x14))[0x20] = 0x2d;
  ((byte *)(gen_frame + 0x14))[0x21] = 0;
  ((byte *)(gen_frame + 0x14))[0x22] = 0;
  ((byte *)(gen_frame + 0x14))[0x23] = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  do {
    uVar2 = F_0055e2f0(this,*(undefined4 *)(((byte *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x8)) * 4 + 0x18));
    if (((uVar2 != 0) && (pvVar4 = (undefined *)F_00559c20(uVar2), pvVar4 != (undefined *)0x0)) &&
       (uVar2 = F_005613a0(pvVar4), uVar2 == 0)) {
      uVar2 = F_00561530(pvVar4,3);
      *(uint *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + -8) = uVar2;
      uVar2 = F_00561530(pvVar4,4);
      *(uint *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + -4) = uVar2;
      uVar2 = F_00561490(pvVar4,0x10);
      *(uint *)(*(undefined * PTR32 *)(gen_frame + 0xc)) = uVar2;
      (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0x0;
      pAVar8 = (*(undefined * PTR32 *)(gen_frame + 0xc)) + 4;
      do {
        uVar2 = F_00561490(pvVar4,(int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 6);
        if (((uVar2 == 0) || (pvVar6 = (undefined *)F_00559c20(uVar2), pvVar6 == (undefined *)0x0)) ||
           (uVar2 = F_005613a0(pvVar6), uVar2 != 1)) {
          pvVar6 = (undefined *)0x0;
        }
        *(undefined * PTR32 *)pAVar8 = pvVar6;
        if (pvVar6 != (undefined *)0x0) {
          uVar2 = F_00561490(pvVar6,4);
          *(uint *)(pAVar8 + 4) = uVar2;
          uVar2 = F_00561530(*(undefined * PTR32 *)pAVar8,5);
          *(uint *)(pAVar8 + 8) = uVar2;
          uVar2 = F_00561550(*(undefined * PTR32 *)pAVar8,8);
          *(uint *)(pAVar8 + 0xc) = uVar2;
        }
        (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 1);
        pAVar8 = pAVar8 + 0x2c;
      } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) < 10);
    }
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x1c4;
    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
  } while ((*(int *)(gen_frame + 0x8)) < 3);
  uVar2 = F_0055e2f0(this,0x2e);
  *(uint *)(this + 0x834) = uVar2;
  iVar7 = 0x32;
  pAVar8 = this + 0x838;
  (*(int *)(gen_frame + 0x8)) = 3;
  do {
    uVar2 = F_0055e2f0(this,iVar7);
    if (((uVar2 == 0) || (pvVar4 = (undefined *)F_00559c20(uVar2), pvVar4 == (undefined *)0x0)) ||
       (uVar2 = F_005613a0(pvVar4), uVar2 != 1)) {
      pvVar4 = (undefined *)0x0;
    }
    *(undefined * PTR32 *)pAVar8 = pvVar4;
    pvVar4 = (undefined *)F_00561550(pvVar4,5);
    *(undefined * PTR32 *)(pAVar8 + 4) = pvVar4;
    F_0055a300(pvVar4,0);
    pvVar4 = (undefined *)0x0;
    if (*(int *)pAVar8 != 0) {
      pvVar4 = *(undefined * PTR32 *)(*(int *)pAVar8 + 0x70);
    }
    F_00568380(pvVar4,0x17,iVar7 + -0xb,this,0,0);
    F_00561ee0(*(undefined * PTR32 *)pAVar8,1,1);
    iVar7 = iVar7 + 1;
    pAVar8 = pAVar8 + 8;
    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
  } while ((*(int *)(gen_frame + 0x8)) != 0);
  uVar2 = F_0055e2f0(this,8);
  if (((uVar2 == 0) || (pvVar4 = (undefined *)F_00559c20(uVar2), pvVar4 == (undefined *)0x0)) ||
     (uVar2 = F_005613a0(pvVar4), uVar2 != 0)) {
    pvVar4 = (undefined *)0x0;
  }
  uVar2 = F_00561490(pvVar4,4);
  *(uint *)((int)pvVar4 + 0x68) = uVar2;
  F_0055a410(uVar2,1);
  uVar2 = F_0055e2f0(this,9);
  if (((uVar2 == 0) || (pvVar4 = (undefined *)F_00559c20(uVar2), pvVar4 == (undefined *)0x0)) ||
     (uVar2 = F_005613a0(pvVar4), uVar2 != 0)) {
    pvVar4 = (undefined *)0x0;
  }
  uVar2 = F_00561490(pvVar4,4);
  *(uint *)((int)pvVar4 + 0x68) = uVar2;
  F_0055a410(uVar2,1);
  uVar2 = F_0055e2f0(this,10);
  if (((uVar2 == 0) || (pvVar4 = (undefined *)F_00559c20(uVar2), pvVar4 == (undefined *)0x0)) ||
     (uVar2 = F_005613a0(pvVar4), uVar2 != 0)) {
    pvVar4 = (undefined *)0x0;
  }
  uVar2 = F_00561490(pvVar4,4);
  *(uint *)((int)pvVar4 + 0x68) = uVar2;
  F_0055a410(uVar2,1);
  F_00855870(this);
  F_0059d670(*(undefined * PTR32 *)((int)pvVar3 + 0x6c),0x65);
  F_0059d670(*(undefined * PTR32 *)((int)this_00 + 0x6c),0x66);
  uVar2 = F_0055e2f0(this,0x2b);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar5 = F_005613a0(uVar2), uVar5 != 0)) {
    uVar2 = 0;
  }
  F_0059d670(*(undefined * PTR32 *)(uVar2 + 0x6c),0x65);
  uVar2 = F_0055e2f0(this,0x2c);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar5 = F_005613a0(uVar2), uVar5 != 0)) {
    uVar2 = 0;
  }
  F_0059d670(*(undefined * PTR32 *)(uVar2 + 0x6c),0x66);
  uVar2 = F_0055e2f0(this,0x2d);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar5 = F_005613a0(uVar2), uVar5 != 0)) {
    uVar2 = 0;
  }
  F_0059d670(*(undefined * PTR32 *)(uVar2 + 0x6c),0x67);
  ((byte *)(gen_frame + 0x14))[0x18] = 0x65;
  ((byte *)(gen_frame + 0x14))[0x19] = 0;
  ((byte *)(gen_frame + 0x14))[0x1a] = 0;
  ((byte *)(gen_frame + 0x14))[0x1b] = 0;
  ((byte *)(gen_frame + 0x14))[0x1c] = 0x66;
  ((byte *)(gen_frame + 0x14))[0x1d] = 0;
  ((byte *)(gen_frame + 0x14))[0x1e] = 0;
  ((byte *)(gen_frame + 0x14))[0x1f] = 0;
  ((byte *)(gen_frame + 0x14))[0x20] = 0x67;
  ((byte *)(gen_frame + 0x14))[0x21] = 0;
  ((byte *)(gen_frame + 0x14))[0x22] = 0;
  ((byte *)(gen_frame + 0x14))[0x23] = 0;
  iVar7 = 0;
  pAVar8 = this + 0x838;
  do {
    uVar9 = *(undefined4 *)(((byte *)(gen_frame + 0x14)) + iVar7 * 4 + 0x18);
    pvVar3 = (undefined *)F_00561490(*(undefined * PTR32 *)pAVar8,6);
    F_0059d670(pvVar3,uVar9);
    iVar7 = iVar7 + 1;
    pAVar8 = pAVar8 + 8;
  } while (iVar7 < 3);
  F_005a91d0(this,1,0x38);
  uVar2 = F_005a91d0(this,0,0x34);
  F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x14)) + 36)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf44 */
uint F_00893410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x893410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined * pAVar5;
  byte * pbVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((this[0x1d0] == (undefined1)0x0) || (*(int *)(this + 0x1b4) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_0093f730(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b8) + 0x14))),
                         REFG(undefined * PTR32, 0x1328420),0,0,
                         *((ushort *)GEN_TOP((*(int *)(this + 0x1b4) + 0xf6))) & 0xf,0);
    uVar2 = F_00594fc0(this + 0x19c,uVar2,1,0,0,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*(int *)(uVar2 + 4) != 0)) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 4) + 0x13b))) = *((undefined1 *)GEN_TOP((*(int *)(this + 0x1b4) + 0x13a)))
      ;
    }
  }
  *(uint *)(this + 0x184) = uVar2;
  uVar2 = F_0055e2f0(this,3);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 10)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x188) = uVar2;
  uVar2 = F_0055e2f0(this,4);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 0xc)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x18c) = uVar2;
  if (*(int *)(this + 0x188) != 0) {
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x7b6fa0));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    F_00574320(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x88))),&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),1,0);
    if (*(int *)(this + 0x188) == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_00568380(pvVar4,0x23,0,this,0,0);
    F_0059caa0(*(undefined * PTR32 *)(this + 0x188),0);
  }
  if (*(int *)(this + 0x18c) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))),0x21,1,this,0,0);
    if (*(int *)(this + 0x18c) == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_00568380(pvVar4,0x23,2,this,0,0);
    if (*(int *)(this + 0x18c) == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_00568380(pvVar4,0x1f,4,this,0,0);
    if (*(int *)(this + 0x18c) == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_00568380(pvVar4,0x20,5,this,0,0);
    F_00814880(this);
    uVar1 = F_0056d300(*(undefined * PTR32 *)(this + 0x18c),3);
    iVar7 = 0;
    if (uVar1 != 0) {
      do {
        uVar2 = F_0056d250(*(undefined * PTR32 *)(this + 0x18c),3,iVar7);
        if (uVar2 != 0) {
          uVar10 = 0;
          uVar9 = 1;
          pvVar4 = (undefined *)F_0056d250(*(undefined * PTR32 *)(this + 0x18c),3,iVar7);
          F_00561ee0(pvVar4,uVar9,uVar10);
        }
        iVar7 = iVar7 + 1;
      } while ((ushort)iVar7 < uVar1);
    }
    *((undefined1 *)GEN_TOP((*(int *)(this + 0x18c) + 0x111))) = 2;
  }
  F_00568380(*(undefined * PTR32 *)(this + 0x90),0xf,0,this,0,0);
  uVar9 = 0;
  uVar2 = F_0055e2f0(this,7);
  uVar1 = F_0055a020(uVar2);
  F_0056b630(this,0x12c7,6,0,7,(uint)(uVar1 >> 1),uVar9);
  if ((*param_2 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 4);
  }
  if ((uVar2 & 4) != 0) {
    if ((param_2[0x10] & 0xf) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(param_2 + 0x14);
    }
    if ((param_2[0x18] & 0xf) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(param_2 + 0x1c);
    }
    *(undefined4 *)(this + 0x180) = uVar9;
    if (0 < iVar7) {
      pbVar6 = param_2 + 0x20;
      pAVar5 = this + 0x1d4;
      iVar8 = iVar7;
      do {
        if ((*pbVar6 & 0xf) == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined4 *)(pbVar6 + 4);
        }
        *(undefined4 *)pAVar5 = uVar9;
        pbVar6 = pbVar6 + 8;
        pAVar5 = pAVar5 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x88))),iVar7,0,1);
      F_0059caa0(*(undefined * PTR32 *)(this + 0x188),*(undefined4 *)(this + 0x180));
    }
  }
  F_0059d6a0(this,0x65,1,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf46 */
byte F_00893720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x893720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_1 != 0x248) {
    return 0;
  }
  if ((*param_2 & 0xf) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = *(uint *)(param_2 + 4);
  }
  if (((param_1 & 1) != 0) && (pvVar2 = *(undefined * PTR32 *)(this + 0x18c), pvVar2 != (undefined *)0x0)) {
    if (((param_2[0x120] & 0xf) == 0) || (iVar1 = *(int *)(param_2 + 0x124), iVar1 < 1)) {
      F_00591410(pvVar2,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)(this + 0x18c) != 0) {
        pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
      }
      F_0055a300(pvVar2,0);
      uVar4 = 0x66;
    }
    else {
      F_0055a300(*(undefined * PTR32 *)((int)pvVar2 + 0x70),1);
      F_00597190(*(undefined * PTR32 *)(this + 0x18c),0x248,param_2,0x25,0x151,3,2,iVar1,this + 400);
      uVar4 = 0x11;
    }
    F_0059d6a0(this,uVar4,1,0);
  }
  if (((param_1 & 2) != 0) && (*(int *)(this + 0x18c) != 0)) {
    if ((param_2[0x10c8] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_2 + 0x10cc);
    }
    F_00855e40(this,uVar4);
  }
  if (((param_1 & 0x10) != 0) && (*(int *)(this + 0x184) != 0)) {
    F_00814660(this,0x2d,param_2 + 0x10d0);
    if (((param_2[0x1238] & 0xf) != 0) && (*(int *)(param_2 + 0x123c) != 0)) {
      uVar3 = F_0055dcb0();
      if (*((undefined * PTR32 *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xcc))) == this) {
        ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 4))) + 0x8c))))
                  (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 4))));
      }
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf2 */
uint F_00893860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x893860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar4 = param_1 & 0xffff;
  uVar5 = uVar4 - 0xf;
  if (uVar5 < 0x30) {
    uVar5 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x893988) + uVar4 + 1)));
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0xf: ;
      uVar5 = *(uint *)(this + 0x184);
      if (*(undefined * PTR32 *)(uVar5 + 4) != (undefined *)0x0) {
        uVar5 = F_00856250(*(undefined * PTR32 *)(uVar5 + 4),param_3,param_4);
        return uVar5;
      }
      break;
    case 0x1f: ;
      uVar5 = F_00855f10(this,param_4);
      return uVar5;
    case 0x20: ;
      bVar1 = F_0056b780(this,0);
      return CONCAT31(extraout_var,bVar1);
    case 0x21: ;
      uVar5 = param_2 - 1;
      if (uVar5 == 0) {
        uVar5 = F_00855e90(this,param_4);
        return uVar5;
      }
      break;
    case 0x23: ;
      F_00557670(param_3,0);
      if (param_2 == 0) {
        uVar5 = F_007b6fd0(this,param_4);
        return uVar5;
      }
      uVar5 = param_2 - 2;
      if (uVar5 == 0) {
        uVar5 = F_00855ed0(this,param_4);
        return uVar5;
      }
      break;
    case 0x3e: ;
      uVar5 = F_00581000(this + 0x19c,*param_4);
      if (((uVar5 != 0) && (*(int *)(uVar5 + 4) != 0)) && (uVar5 == *(uint *)(this + 0x184))) {
        uVar4 = F_0055e2f0(this,2);
        uVar2 = F_00559d70(uVar4);
        uVar3 = F_00559d90(uVar4);
        *(ushort *)(uVar5 + 0x28) = uVar2;
        *(ushort *)(uVar5 + 0x2a) = uVar3;
        bVar1 = F_005a9130(this,0);
        uVar5 = CONCAT31(extraout_var_00,bVar1);
      }
    }
  }
  return uVar5;
}

/* ref: Client::UI2::AddonCutSceneReplayDetail::vf2 */
uint F_008939d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8939d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  uint uVar2;
  int * piVar3;
  undefined1 * this_00;
  int iVar4;
  
  this_00 = (gen_frame + 0x1c);
  uVar2 = param_1 & 0xffff;
  if (uVar2 == 0xf) {
    uVar2 = F_00856250(this,param_3,param_4);
    return uVar2;
  }
  if (uVar2 == 0x17) {
    F_00557670(param_3,0);
    uVar2 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      AVar1 = this[0x13c];
      uVar2 = F_0055dcb0();
      piVar3 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)AVar1);
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 100))(piVar3);
      }
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 1: ;
      param_2 = *(uint *)(this + 0x1b0);
      if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0xa0)) {
        param_2 = F_007b7340(this,*(int *)(param_2 + 0xa0) + -1);
      }
      break;
    case 2: ;
      break;
    case 3: ;
      param_2 = *(uint *)(this + 0x1b0);
      if (*(int *)(param_2 + 0xa0) < *(int *)(param_2 + 0x9c)) {
        uVar2 = F_007b7340(this,*(int *)(param_2 + 0xa0) + 1);
        return uVar2;
      }
      break;
    case 4: ;
      (*(undefined4 *)(gen_frame + 0xc)) = 3;
      (*(undefined4 *)(gen_frame + 0x10)) = 3;
      (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1b0) + 0xa0)));
      (*(undefined4 *)(gen_frame + 0x14)) = 3;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
      iVar4 = 1;
      do {
        this_00 = this_00 + -8;
        uVar2 = F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      return uVar2;
    default: ;
      goto switchD_00893a3f_default;
    }
    uVar2 = param_2;
  }
  else if (uVar2 == 0x1b) {
    F_00557670(param_3,0);
    uVar2 = param_2 - 2;
    if (param_2 - 2 == 0) {
      uVar2 = F_007b7340(this,*((undefined4 *)GEN_TOP((*(int *)(this + 0x1b0) + 0xa0))));
      return uVar2;
    }
  }
switchD_00893a3f_default: ;
  return uVar2;
}

/* ref: Client::UI2::AddonConfigLog::vf44 */
uint F_00893b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x893b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined * this_00;
  undefined * pvVar5;
  undefined1 * in_ecx;
  undefined * pAVar6;
  int iVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(int *)(gen_frame + 0x28)) = param_2;
  F_00856b30(this);
  if (param_2 != 0) {
    uVar1 = F_0055dcb0();
    piVar2 = (int *)F_0055b990(uVar1);
    iVar7 = *piVar2;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x7b81a0));
    F_00574320(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x88))),&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),1,0);
    uVar1 = 1;
    pAVar6 = this + 0x1b8;
    do {
      if ((*(byte *)((*(int *)(gen_frame + 0x28)) + uVar1 * 8) & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)((*(int *)(gen_frame + 0x28)) + 4 + uVar1 * 8);
      }
      F_0042e430(pAVar6,uVar3);
      uVar1 = uVar1 + 1;
      pAVar6 = pAVar6 + 0x54;
    } while (uVar1 < 5);
    uVar1 = 0;
    F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x88))),4,0,1);
    iVar8 = (*(int *)(gen_frame + 0x28));
    if ((*(byte *)((*(int *)(gen_frame + 0x28)) + 0x28) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)((*(int *)(gen_frame + 0x28)) + 0x2c);
    }
    F_0059caa0(*(undefined * PTR32 *)(this + 0x180),uVar3);
    if (*(int *)(this + 0x180) == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_00568380(pvVar5,0x21,0,this,0,0);
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x88))) + 0x70))))
              (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x88))));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x7b81d0));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_00574320(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x88))),&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),1,0);
    if ((*(byte *)(iVar8 + 0x30) & 0xf) == 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)0x0;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)*(uint *)(iVar8 + 0x34);
    }
    if ((*(byte *)(iVar8 + 0x38) & 0xf) != 0) {
      uVar1 = *(uint *)(iVar8 + 0x3c);
    }
    if ((*(undefined * PTR32 *)(gen_frame + 0x24)) <= uVar1) {
      (*(undefined * PTR32 *)(gen_frame + 0x20)) = this + 0x308;
      pAVar6 = (*(undefined * PTR32 *)(gen_frame + 0x24));
      do {
        uVar4 = F_00560910(pAVar6);
        F_0042e430((*(undefined * PTR32 *)(gen_frame + 0x20)),uVar4);
        (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x54;
        pAVar6 = (undefined *)((int)pAVar6 + 1);
      } while (pAVar6 <= uVar1);
    }
    F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x88))),(uVar1 - (int)(*(undefined * PTR32 *)(gen_frame + 0x24))) + 1,0,1);
    iVar8 = (*(int *)(gen_frame + 0x28));
    if ((*(byte *)((*(int *)(gen_frame + 0x28)) + 0x40) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)((*(int *)(gen_frame + 0x28)) + 0x44);
    }
    F_0059caa0(*(undefined * PTR32 *)(this + 0x184),uVar3);
    if (*(int *)(this + 0x184) == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_00568380(pvVar5,0x21,1,this,0,0);
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x88))) + 0x70))))
              (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x88))));
    if ((*(byte *)(iVar8 + 0x48) & 0xf) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(iVar8 + 0x4c);
    }
    F_0059dde0(*(undefined * PTR32 *)(this + 0x188),(uint)(iVar8 == 1));
    F_007b80f0(this,*(undefined4 *)(this + 0x188));
    if (*(int *)(this + 0x188) == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_00568380(pvVar5,0x17,2,this,0,0);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x7b8200));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_00574320(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x88))),&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),1,0);
    uVar1 = 10;
    pAVar6 = this + 0x74c;
    do {
      if ((*(byte *)((*(int *)(gen_frame + 0x28)) + uVar1 * 8) & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)((*(int *)(gen_frame + 0x28)) + 4 + uVar1 * 8);
      }
      F_0042e430(pAVar6,uVar3);
      uVar1 = uVar1 + 1;
      pAVar6 = pAVar6 + 0x54;
    } while (uVar1 < 0xc);
    F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x88))),2,0,1);
    if ((*(byte *)((*(int *)(gen_frame + 0x28)) + 0x28) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)((*(int *)(gen_frame + 0x28)) + 0x2c);
    }
    F_0059caa0(*(undefined * PTR32 *)(this + 0x18c),uVar3);
    if (*(int *)(this + 0x18c) == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_00568380(pvVar5,0x21,3,this,0,0);
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x88))) + 0x70))))
              (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x88))));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x7b8230));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_00574320(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x88))),&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),1,0);
    pAVar6 = this + 0x7f4;
    uVar1 = 0xd;
    do {
      if ((*(byte *)((*(int *)(gen_frame + 0x28)) + uVar1 * 8) & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)((*(int *)(gen_frame + 0x28)) + 4 + uVar1 * 8);
      }
      F_0042e430(pAVar6,uVar3);
      uVar1 = uVar1 + 1;
      pAVar6 = pAVar6 + 0x54;
    } while (uVar1 < 0xf);
    F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x88))),2,0,1);
    iVar8 = (*(int *)(gen_frame + 0x28));
    if ((*(byte *)((*(int *)(gen_frame + 0x28)) + 0x78) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)((*(int *)(gen_frame + 0x28)) + 0x7c);
    }
    F_0059caa0(*(undefined * PTR32 *)(this + 400),uVar3);
    if (*(int *)(this + 400) == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_00568380(pvVar5,0x21,4,this,0,0);
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x88))) + 0x70))))
              (*((int * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x88))));
    if ((*(byte *)(iVar8 + 0x80) & 0xf) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(iVar8 + 0x84);
    }
    F_0059dde0(*(undefined * PTR32 *)(this + 0x194),(uint)(iVar8 == 1));
    F_007b80f0(this,*(undefined4 *)(this + 0x194));
    if (*(int *)(this + 0x194) == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x194) + 0x70)));
    }
    F_00568380(pvVar5,0x17,5,this,0,0);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x7b8260));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_00574320(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x88))),&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),1,0);
    uVar1 = 0x11;
    pAVar6 = this + 0x89c;
    do {
      if ((*(byte *)((*(int *)(gen_frame + 0x28)) + uVar1 * 8) & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)((*(int *)(gen_frame + 0x28)) + 4 + uVar1 * 8);
      }
      F_0042e430(pAVar6,uVar3);
      uVar1 = uVar1 + 1;
      pAVar6 = pAVar6 + 0x54;
    } while (uVar1 < 0x14);
    F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x88))),3,0,1);
    iVar8 = (*(int *)(gen_frame + 0x28));
    if ((*(byte *)((*(int *)(gen_frame + 0x28)) + 0xa0) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)((*(int *)(gen_frame + 0x28)) + 0xa4);
    }
    F_0059caa0(*(undefined * PTR32 *)(this + 0x198),uVar3);
    if (*(int *)(this + 0x198) == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    F_00568380(pvVar5,0x21,6,this,0,0);
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x88))) + 0x70))))
              (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x88))));
    pvVar5 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_00568380(pvVar5,0x17,7,this,0,0);
    if ((*(byte *)(iVar8 + 0xa8) & 0xf) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(iVar8 + 0xac);
    }
    F_0059dde0(*(undefined * PTR32 *)(this + 0x1a0),(uint)(iVar8 == 1));
    pvVar5 = (undefined *)0x0;
    if (*(int *)(this + 0x1a0) != 0) {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
    }
    F_00568380(pvVar5,0x17,8,this,0,0);
    iVar7 = *((int *)GEN_TOP((*(int *)(iVar7 + 0x20) + 0x44)));
    if ((iVar7 == 4) || ((*(char *)(gen_frame + 0x2f)) = '\0', iVar7 == 5)) {
      (*(char *)(gen_frame + 0x2f)) = '\x01';
    }
    iVar7 = 0x2776;
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = this + 0x1a8;
    (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)&REFG(undefined, 0x4);
    do {
      pvVar5 = *(undefined * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x24));
      if (pvVar5 != (undefined *)0x0) {
        uVar3 = REFG(undefined4, 0x108cc50);
        uVar1 = F_00560910(iVar7 + -0x2775);
        F_0042cc20(((undefined1 *)(gen_frame + 0x30)),uVar1,uVar3);
        F_0055dcb0();
        F_00558290(((undefined1 *)(gen_frame + 0x84)),iVar7);
        in_ecx = ((undefined1 *)(gen_frame + 0x30));
        if ((*(char *)(gen_frame + 0x2f)) == '\0') {
          in_ecx = ((undefined1 *)(gen_frame + 0x84));
        }
        uVar1 = F_0042a990(in_ecx);
        this_00 = (undefined *)F_00561530(pvVar5,2);
        F_00584110(this_00,uVar1);
        uVar1 = F_00561490(pvVar5,3);
        if (uVar1 == 0) {
LAB_00894238: ;
          pvVar5 = (undefined *)0x0;
        }
        else {
          uVar1 = F_00559c20(uVar1);
          if (uVar1 == 0) goto LAB_00894238;
          uVar4 = F_005613a0(uVar1);
          if (uVar4 != 1) goto LAB_00894238;
          pvVar5 = *(undefined * PTR32 *)(uVar1 + 0x70);
        }
        F_00568380(pvVar5,0x17,iVar7 + -0x276d,this,0,0);
        F_0042c880(((undefined1 *)(gen_frame + 0x84)));
        F_0042c880(((undefined1 *)(gen_frame + 0x30)));
      }
      (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)(gen_frame + 0x24)) + 4;
      iVar7 = iVar7 + 1;
      (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x20)) + -1;
    } while ((*(undefined * PTR32 *)(gen_frame + 0x20)) != (undefined *)0x0);
    F_00856a00(this,(*(int *)(gen_frame + 0x28)));
    pvVar5 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_00568380(pvVar5,0x17,0xd,this,0,0);
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x28))))(*(int * PTR32 *)(this + 0x180),0);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x28))))(*(int * PTR32 *)(this + 0x188),0);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x28))))(*(int * PTR32 *)(this + 0x18c),0);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x28))))(*(int * PTR32 *)(this + 400),0);
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return uVar1;
}

/* ref: Client::UI2::AddonConfigLog::vf46 */
byte F_00894300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x894300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if (param_2 != (byte *)0x0) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(param_2 + 4);
    }
    if ((uVar1 & 1) != 0) {
      F_00856a00(this,param_2);
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonConfigLogColor::vf44 */
uint F_00894330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x894330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  F_00856fc0(this);
  piVar1 = *(int * PTR32 *)(this + 0x198);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
  }
  *(uint *)(this + 0xa8) = uVar2;
  F_008154a0(this);
  F_00856ec0(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  uVar2 = F_00815a40(this);
  return uVar2;
}

/* ref: Client::UI2::AddonConfigLogFilter::vf44 */
uint F_00894390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x894390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined * pAVar6;
  int * piVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(int *)(gen_frame + 0x34)) = param_2;
  F_00857510(this);
  piVar7 = *(int * PTR32 *)(this + 0x1b8);
  if (piVar7 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ((code *)*(gen_code32 *)(*piVar7 + 0x3c))(piVar7);
  }
  *(uint *)(this + 0xa8) = uVar1;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 2;
  (*(undefined4 *)(gen_frame + 0x48)) = 3;
  (*(undefined4 *)(gen_frame + 0x60)) = 5;
  (*(undefined4 *)(gen_frame + 0x54)) = 4;
  (*(undefined4 *)(gen_frame + 0x6c)) = 6;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(gen_code32 *)(gen_frame + 0x28)) = ((code *)REFP(0x815e70));
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x198),&(*(undefined * PTR32 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x3c)),5,0);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(gen_code32 *)(gen_frame + 0x28)) = ((code *)REFP(0x815e70));
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x19c),&(*(undefined * PTR32 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x3c)),5,0);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(gen_code32 *)(gen_frame + 0x28)) = ((code *)REFP(0x815e70));
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x1a4),&(*(undefined * PTR32 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x3c)),5,0);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(gen_code32 *)(gen_frame + 0x28)) = (code *)0x2;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x7b8d90));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00574320(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x88))),&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(gen_code32 *)(gen_frame + 0x28)),1,0);
  if (*(int *)(this + 0x198) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
  }
  F_0055a300(pvVar2,1);
  if (*(int *)(this + 0x19c) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
  }
  F_0055a300(pvVar2,1);
  if (*(int *)(this + 0x1a4) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
  }
  F_0055a300(pvVar2,1);
  if (*(int *)(this + 0x188) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar2,0x17,0,this,0,0);
  if (*(int *)(this + 0x18c) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar2,0x17,1,this,0,0);
  if (*(int *)(this + 400) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
  }
  F_00568380(pvVar2,0x17,2,this,0,0);
  if (*(int *)(this + 0x1ac) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1ac) + 0x70)));
  }
  F_00568380(pvVar2,0x17,3,this,0,0);
  if (*(int *)(this + 0x1b8) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b8) + 0x70)));
  }
  F_00568380(pvVar2,0x17,4,this,0,0);
  if (*(int *)(this + 0x1bc) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1bc) + 0x70)));
  }
  F_00568380(pvVar2,0x17,5,this,0,0);
  if (*(int *)(this + 0x1b0) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70)));
  }
  F_00568380(pvVar2,0x17,6,this,0,0);
  if (*(int *)(this + 0x1b4) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b4) + 0x70)));
  }
  F_00568380(pvVar2,0x17,7,this,0,0);
  if (*(int *)(this + 0x198) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
  }
  F_00568380(pvVar2,0x24,8,this,0,0);
  if (*(int *)(this + 0x198) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
  }
  F_00568380(pvVar2,0x21,8,this,0,0);
  if (*(int *)(this + 0x1a0) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
  }
  F_00568380(pvVar2,0x21,10,this,0,0);
  if (*(int *)(this + 0x19c) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
  }
  F_00568380(pvVar2,0x24,9,this,0,0);
  if (*(int *)(this + 0x19c) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
  }
  F_00568380(pvVar2,0x21,9,this,0,0);
  if (*(int *)(this + 0x1a4) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
  }
  F_00568380(pvVar2,0x24,0xb,this,0,0);
  if (*(int *)(this + 0x1a4) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
  }
  F_00568380(pvVar2,0x21,0xb,this,0,0);
  if (*(int *)(this + 0x198) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
  }
  F_00568380(pvVar2,0x11,8,this,0,0);
  if (*(int *)(this + 0x19c) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
  }
  F_00568380(pvVar2,0x11,9,this,0,0);
  if (*(int *)(this + 0x1a4) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
  }
  F_00568380(pvVar2,0x11,0xb,this,0,0);
  F_00568380(*(undefined * PTR32 *)(this + 0x90),0xf,0,this,0,0);
  F_00584110(*(undefined * PTR32 *)(this + 0x1a8),"");
  iVar4 = (*(int *)(gen_frame + 0x34));
  if ((*(int *)(gen_frame + 0x34)) != 0) {
    if ((*(byte *)((*(int *)(gen_frame + 0x34)) + 0x388) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)((*(int *)(gen_frame + 0x34)) + 0x38c);
    }
    *(uint *)(this + 0x1844) = uVar1;
    (*(int *)(gen_frame + 0x14)) = 0;
    if (uVar1 == 2) {
      F_0059dde0(*(undefined * PTR32 *)(this + 400),1);
      uVar8 = 0x67;
    }
    else if ((uVar1 < 3) || (9 < uVar1)) {
      F_0059dde0(*(undefined * PTR32 *)(this + 0x188),1);
      uVar8 = 0x65;
    }
    else {
      F_0059dde0(*(undefined * PTR32 *)(this + 0x18c),1);
      (*(int *)(gen_frame + 0x14)) = *(int *)(this + 0x1844) + -4;
      uVar8 = 0x66;
    }
    F_0059d670(*(undefined * PTR32 *)(this + 0x194),uVar8);
    if ((*(byte *)(iVar4 + 0x120) & 0xf) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar4 + 0x124);
    }
    *(int *)(this + 0x1c0) = iVar3;
    (*(uint *)(gen_frame + 0x38)) = 0;
    if (iVar3 != 0) {
      puVar5 = (undefined4 *)(iVar4 + 0x22c);
      pAVar6 = this + 0x21c;
      do {
        *(uint *)(pAVar6 + -0x58) = (*(uint *)(gen_frame + 0x38));
        if ((*(byte *)(puVar5 + -0x41) & 0xf) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = puVar5[-0x40];
        }
        F_0042e430(pAVar6 + -0x54,uVar8);
        if ((*(byte *)((*(int *)(gen_frame + 0x34)) + 0x18) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(uint *)((*(int *)(gen_frame + 0x34)) + 0x1c);
        }
        uVar8 = 0;
        *(uint *)pAVar6 = (uint)((1 << ((byte)(*(uint *)(gen_frame + 0x38)) & 0x1f) & uVar1) != 0);
        if ((*(byte *)(puVar5 + -1) & 0xf) != 0) {
          uVar8 = *puVar5;
        }
        F_0042e430(pAVar6 + 8,uVar8);
        if ((*(byte *)(puVar5 + -0x83) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar5[-0x82];
        }
        *(uint *)(pAVar6 + 4) = uVar1 >> 0x10 & 0xff | (uVar1 & 0xff) << 0x10 | uVar1 & 0xff00ff00;
        (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) + 1;
        puVar5 = puVar5 + 2;
        pAVar6 = pAVar6 + 0xb4;
      } while ((*(uint *)(gen_frame + 0x38)) < *(uint *)(this + 0x1c0));
    }
    F_0059ead0(*(undefined * PTR32 *)(this + 0x198),(uint)*(ushort *)(this + 0x1c0),0,1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x70))))(*(int * PTR32 *)(this + 0x198));
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x38)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x20)) = this + 0x1848;
    piVar7 = (int *)((*(int *)(gen_frame + 0x34)) + 0x35c);
    (*(int *)(gen_frame + 0x1c)) = 6;
    do {
      if ((*(byte *)(piVar7 + -0xd) & 0xf) != 0) {
        F_0042e430((*(undefined * PTR32 *)(gen_frame + 0x20)),piVar7[-0xc]);
        uVar1 = (*(uint *)(gen_frame + 0x38));
        if ((*(byte *)(piVar7 + -1) & 0xf) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar7;
        }
        (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) + 1;
        *(int *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x54) = iVar4;
        (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x58;
        if ((*(byte *)(piVar7 + -1) & 0xf) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar7;
        }
        if (iVar4 == (*(int *)(gen_frame + 0x14))) {
          (*(int *)(gen_frame + 0x18)) = uVar1;
        }
      }
      piVar7 = piVar7 + 2;
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + -1;
    } while ((*(int *)(gen_frame + 0x1c)) != 0);
    F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x88))),(*(uint *)(gen_frame + 0x38)),0,1);
    F_0059caa0(*(undefined * PTR32 *)(this + 0x1a0),(*(int *)(gen_frame + 0x18)));
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x88))) + 0x70))))
              (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x88))));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1b8) + 0x28))))(*(int * PTR32 *)(this + 0x1b8),0);
    ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,(*(int *)(gen_frame + 0x34)));
  }
  uVar1 = F_00815ee0(this);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar1;
}

/* ref: Client::UI2::AddonConfigSystem::vf44 */
uint F_008949c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8949c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  undefined * pAVar6;
  undefined4 uVar7;
  
  ((int *)(gen_frame + 0x18))[0xc] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(uint *)(gen_frame + 0x14)) = param_2;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = F_0055dcb0();
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = *(undefined * PTR32 *)(uVar1 + 0x30);
    ((int *)(gen_frame + 0x18))[0] = 7;
    ((int *)(gen_frame + 0x18))[1] = 8;
    ((int *)(gen_frame + 0x18))[2] = 9;
    ((int *)(gen_frame + 0x18))[3] = 10;
    ((int *)(gen_frame + 0x18))[4] = 0xb;
    ((int *)(gen_frame + 0x18))[5] = 0xc;
    ((int *)(gen_frame + 0x18))[6] = 0x104a;
    ((int *)(gen_frame + 0x18))[7] = 0x104b;
    ((int *)(gen_frame + 0x18))[8] = 0x104c;
    ((int *)(gen_frame + 0x18))[9] = 0x104d;
    ((int *)(gen_frame + 0x18))[10] = 0x104e;
    ((int *)(gen_frame + 0x18))[0xb] = 0x1051;
    uVar1 = 0;
    pAVar6 = this + 0x180;
    do {
      if (((int *)(gen_frame + 0x18))[uVar1] < 0) {
        *(uint *)pAVar6 = 0;
      }
      else {
        uVar3 = F_0055e2f0(this,((int *)(gen_frame + 0x18))[uVar1]);
        if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
           (uVar2 = F_005613a0(uVar3), uVar2 != 0x11)) {
          uVar3 = 0;
        }
        *(uint *)pAVar6 = uVar3;
        *(byte *)(uVar3 + 0xaa) = *(byte *)(uVar3 + 0xaa) | 2;
        *(byte *)(*(uint *)pAVar6 + 0xaa) = *(byte *)(*(uint *)pAVar6 + 0xaa) | 4;
        F_00595560(*(undefined * PTR32 *)pAVar6,(&REFG(undefined4, 0x10c2cf8))[uVar1]);
        F_00560760(((uint *)(gen_frame + 0x4)));
        ((uint *)(gen_frame + 0x4))[0] = F_0043bd00((*(undefined * PTR32 *)(gen_frame + 0x10)),((int *)(gen_frame + 0x18))[uVar1 + 6],0,0);
        ((uint *)(gen_frame + 0x4))[1] = 0;
        (*(undefined2 *)(gen_frame + 0xe)) = 0xff00;
        F_005916c0(*(undefined * PTR32 *)pAVar6,3,(uint)(byte)this[0x13a],((uint *)(gen_frame + 0x4)));
        uVar7 = 1;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(uint *)pAVar6 + 0x84) + 0x14))))(*(uint *)pAVar6 + 0x84);
        F_0055a3c0(uVar3,uVar7);
        pvVar4 = (undefined *)0x0;
        if (*(uint *)pAVar6 != 0) {
          pvVar4 = *(undefined * PTR32 *)(*(uint *)pAVar6 + 0x70);
        }
        F_00568380(pvVar4,0x34,uVar1,this,0,0);
        *(undefined1 *)(*(uint *)pAVar6 + 0xa9) = 2;
        pvVar4 = (undefined *)0x0;
        if (*(uint *)pAVar6 != 0) {
          pvVar4 = *(undefined * PTR32 *)(*(uint *)pAVar6 + 0x70);
        }
        F_00568380(pvVar4,0xc,0,this,0,0);
      }
      uVar1 = uVar1 + 1;
      pAVar6 = pAVar6 + 4;
    } while (uVar1 < 6);
    uVar1 = F_0055e2f0(this,0xf2);
    if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
       (uVar3 = F_005613a0(uVar1), uVar3 != 1)) {
      uVar1 = 0;
    }
    *(uint *)(this + 0x19c) = uVar1;
    pvVar4 = (undefined *)0x0;
    if (uVar1 != 0) {
      pvVar4 = *(undefined * PTR32 *)(uVar1 + 0x70);
    }
    F_00568380(pvVar4,0x17,2,this,0,0);
    pvVar4 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_00568380(pvVar4,0xc,2,this,0,0);
    uVar1 = F_0055e2f0(this,0xf4);
    if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
       (uVar3 = F_005613a0(uVar1), uVar3 != 1)) {
      uVar1 = 0;
    }
    *(uint *)(this + 0x1a4) = uVar1;
    pvVar4 = (undefined *)0x0;
    if (uVar1 != 0) {
      pvVar4 = *(undefined * PTR32 *)(uVar1 + 0x70);
    }
    F_00568380(pvVar4,0x17,3,this,0,0);
    pvVar4 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_00568380(pvVar4,0xc,2,this,0,0);
    uVar1 = F_0055e2f0(this,0xf3);
    if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
       (uVar3 = F_005613a0(uVar1), uVar3 != 1)) {
      uVar1 = 0;
    }
    *(uint *)(this + 0x1a0) = uVar1;
    pvVar4 = (undefined *)0x0;
    if (uVar1 != 0) {
      pvVar4 = *(undefined * PTR32 *)(uVar1 + 0x70);
    }
    F_00568380(pvVar4,0x17,1,this,0,0);
    pvVar4 = (undefined *)0x0;
    if (*(int *)(this + 0x1a0) != 0) {
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
    }
    F_00568380(pvVar4,0xc,2,this,0,0);
    uVar1 = F_0055e2f0(this,2);
    *(uint *)(this + 0x1b0) = uVar1;
    uVar1 = F_0055e340(this,4);
    *(uint *)(this + 0x1b4) = uVar1;
    uVar1 = F_0055e340(this,0x17);
    *(uint *)(this + 0x1b8) = uVar1;
    uVar1 = F_0055e340(this,0xd9);
    *(uint *)(this + 0x1bc) = uVar1;
    F_0055a300(*(undefined * PTR32 *)(this + 0x1b8),0);
    F_0055a300(*(undefined * PTR32 *)(this + 0x1bc),0);
    uVar1 = F_0055e2f0(this,0xf);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00559c20(uVar1);
      if ((uVar1 == 0) || (uVar3 = F_005613a0(uVar1), uVar3 != 0xd)) {
        uVar1 = 0;
      }
    }
    pAVar6 = this + 0x3ec;
    *(uint *)pAVar6 = uVar1;
    uVar1 = F_0055e2f0(this,0x62);
    if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
       (uVar3 = F_005613a0(uVar1), uVar3 != 0xd)) {
      uVar1 = 0;
    }
    *(uint *)(this + 0x3f4) = uVar1;
    iVar5 = 6;
    do {
      if (*(uint *)pAVar6 != 0) {
        F_00568380(*(undefined * PTR32 *)(*(uint *)pAVar6 + 0x70),0x19,2,this,0,0);
      }
      pAVar6 = pAVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    F_0056b630(this,0x18ac1,7,0,9,0,0);
    F_00857fd0(this);
    F_00858230(this);
    F_00858650(this);
    F_00859220(this);
    F_008592d0(this);
    F_008594b0(this);
    F_00816620(this);
    F_00568380(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0,0);
    F_00568380(*(undefined * PTR32 *)(this + 0x90),0x48,0,this,0,0);
    ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,(*(uint *)(gen_frame + 0x14)));
    *(undefined4 *)(this + 0x198) = 0;
    F_005a91d0(this,0,0x2e);
    param_2 = F_005a91d0(this,1,0x32);
  }
  F_00c47745(((int *)(gen_frame + 0x18))[0xc] ^ (uint)(uint)(gen_frame + 0x4c));
  return param_2;
}

/* ref: Client::UI2::AddonConfigSystem::vf46 */
byte F_00894e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x894e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x19c) + 0x28))))(*(int * PTR32 *)(this + 0x19c),0);
    this[0x3e9] = (undefined1)0x0;
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x19c) + 0x28))))(*(int * PTR32 *)(this + 0x19c),1);
    this[0x3e9] = (undefined1)0x1;
  }
  if (((param_2[0x10] & 0xf) == 0) || (*(int *)(param_2 + 0x14) == 0)) {
    uVar2 = 0x65;
  }
  else {
    uVar2 = 0x66;
  }
  F_0059d670(*(undefined * PTR32 *)(this + 0x1b0),uVar2);
  this[1000] = (undefined1)0x1;
  if ((param_2[0x18] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined1)*(undefined4 *)(param_2 + 0x1c);
  }
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    F_007b9b00(this,param_2);
    this[1000] = (undefined1)0x0;
    return 1;
  case 1: ;
    F_007b9e80(this,param_2);
    this[1000] = (undefined1)0x0;
    return 1;
  case 2: ;
    F_00858d60(this,param_2);
    this[1000] = (undefined1)0x0;
    return 1;
  case 3: ;
    F_007ba1d0(this,param_2);
    this[1000] = (undefined1)0x0;
    return 1;
  case 4: ;
    F_007ba260(this,param_2);
    this[1000] = (undefined1)0x0;
    return 1;
  case 5: ;
    F_007ba450(this,param_2);
  }
  this[1000] = (undefined1)0x0;
  return 1;
}

/* ref: Client::UI2::AddonConfigPadCustomize::vf44 */
uint F_00894f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x894f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined * pAVar5;
  int iVar6;
  int iVar7;
  byte * local_10;
  undefined * local_c;
  int local_8;
  
  pvVar1 = (undefined *)F_0055e2f0(this,0x27);
  if (pvVar1 != (undefined *)0x0) {
    F_0059d670(pvVar1,0x65);
  }
  uVar2 = F_0055e340(this,0x26);
  *(uint *)(this + 0x61c) = uVar2;
  uVar2 = F_0055e2f0(this,0x6e);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 1)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x754) = uVar2;
  pvVar1 = (undefined *)0x0;
  if (uVar2 != 0) {
    pvVar1 = *(undefined * PTR32 *)(uVar2 + 0x70);
  }
  F_00568380(pvVar1,0x17,2,this,0,0);
  pvVar1 = (undefined *)0x0;
  if (*(int *)(this + 0x754) != 0) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x754) + 0x70)));
  }
  F_00568380(pvVar1,0xc,0,this,0,0);
  uVar2 = F_0055e2f0(this,0x6d);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 1)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x75c) = uVar2;
  pvVar1 = (undefined *)0x0;
  if (uVar2 != 0) {
    pvVar1 = *(undefined * PTR32 *)(uVar2 + 0x70);
  }
  F_00568380(pvVar1,0x17,3,this,0,0);
  pvVar1 = (undefined *)0x0;
  if (*(int *)(this + 0x75c) != 0) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x75c) + 0x70)));
  }
  F_00568380(pvVar1,0xc,0,this,0,0);
  uVar2 = F_0055e2f0(this,0x6f);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00559c20(uVar2);
    if ((uVar2 == 0) || (uVar3 = F_005613a0(uVar2), uVar3 != 1)) {
      uVar2 = 0;
    }
  }
  *(uint *)(this + 0x758) = uVar2;
  pvVar1 = (undefined *)0x0;
  if (uVar2 != 0) {
    pvVar1 = *(undefined * PTR32 *)(uVar2 + 0x70);
  }
  F_00568380(pvVar1,0x17,1,this,0,0);
  pvVar1 = (undefined *)0x0;
  if (*(int *)(this + 0x758) != 0) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x758) + 0x70)));
  }
  F_00568380(pvVar1,0xc,0,this,0,0);
  pAVar5 = this + 0x71c;
  uVar2 = 0;
  do {
    uVar3 = F_0055e2f0(this,*(undefined4 *)((int)&REFG(undefined4, 0x10c3190) + uVar2));
    *(uint *)pAVar5 = uVar3;
    uVar2 = uVar2 + 4;
    pAVar5 = pAVar5 + 4;
  } while (uVar2 < 0x38);
  uVar2 = 0;
  local_8 = 0;
  F_0056b630(this,0x18aea,7,0,9,0,0);
  pAVar5 = this + 0x71c;
  do {
    if (*(undefined * PTR32 *)pAVar5 != (undefined *)0x0) {
      F_0059d670(*(undefined * PTR32 *)pAVar5,*(undefined4 *)((int)&REFG(undefined4, 0x10c31d4) + uVar2));
    }
    uVar2 = uVar2 + 8;
    pAVar5 = pAVar5 + 4;
  } while (uVar2 < 0x70);
  F_0085e930(this);
  F_00568380(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0,0);
  local_c = this + 0x184;
  local_10 = (byte *)(param_2 + 0x10);
  iVar6 = 0;
  do {
    if ((*(byte *)(param_2 + 0x80 + local_8 * 8) & 0xf) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(param_2 + 0x84 + local_8 * 8);
    }
    F_007c03b0(this,iVar6,local_8 + 1,iVar7,param_2);
    local_8 = local_8 + 1 + iVar7;
    if ((*local_10 & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(local_10 + 4);
    }
    F_0042e430(local_c,uVar4);
    local_c = local_c + 0x54;
    iVar6 = iVar6 + 1;
    local_10 = local_10 + 8;
  } while (iVar6 < 0xe);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonCharaSelectNameInput::vf44 */
uint F_008951d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8951d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  undefined1 AVar6;
  
  F_0085ef80(this);
  AVar6 = (undefined1)(*(char *)(REFG(int, 0x137104c) + 0x1d) == '\x04');
  this[0x3a3] = AVar6;
  if ((bool)AVar6) {
    F_0059d6a0(this,0x65,1,0);
    if (*(int *)(this + 0x38c) != 0) {
      uVar3 = F_0042a990(this + 0x324);
      F_005b2fe0(*(undefined * PTR32 *)(this + 0x38c),uVar3);
      F_00563480(*(undefined * PTR32 *)(this + 0x38c),0x20,REFG(undefined * PTR32, 0x132843c));
      iVar1 = *(int *)(this + 0x38c);
      *(undefined * PTR32 *)(iVar1 + 0x144) = this;
      *(gen_code32 *)(iVar1 + 0x148) = ((code *)REFP(0x819730));
      *(undefined4 *)(iVar1 + 0x14c) = 0;
      iVar1 = *(int *)(this + 0x38c);
      pvVar4 = (undefined *)0x0;
      if (iVar1 != 0) {
        pvVar4 = *(undefined * PTR32 *)(iVar1 + 0x70);
      }
      F_00568380(pvVar4,0x11,(uint)*(ushort *)(iVar1 + 100),this,0,0);
    }
    if (*(int *)(this + 0x39c) != 0) {
      F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x39c) + 0x70))),0);
    }
  }
  else {
    F_0059d6a0(this,0x11,1,0);
    if (*(int *)(this + 900) != 0) {
      uVar3 = F_0042a990(this + 0x180);
      F_005b2fe0(*(undefined * PTR32 *)(this + 900),uVar3);
      F_00563480(*(undefined * PTR32 *)(this + 900),0x93,REFG(undefined * PTR32, 0x132843c));
      iVar1 = *(int *)(this + 900);
      *(undefined * PTR32 *)(iVar1 + 0x144) = this;
      *(gen_code32 *)(iVar1 + 0x148) = ((code *)REFP(0x8196d0));
      *(undefined4 *)(iVar1 + 0x14c) = 0;
      pvVar4 = (undefined *)0x0;
      if (*(int *)(this + 900) != 0) {
        pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 900) + 0x70)));
      }
      F_00568380(pvVar4,0x11,0,this,0,0);
    }
    if (*(int *)(this + 0x388) != 0) {
      uVar3 = F_0042a990(this + 0x1d4);
      F_005b2fe0(*(undefined * PTR32 *)(this + 0x388),uVar3);
      F_00563480(*(undefined * PTR32 *)(this + 0x388),0x93,REFG(undefined * PTR32, 0x132843c));
      iVar1 = *(int *)(this + 0x388);
      *(undefined * PTR32 *)(iVar1 + 0x144) = this;
      *(gen_code32 *)(iVar1 + 0x148) = ((code *)REFP(0x819700));
      *(undefined4 *)(iVar1 + 0x14c) = 0;
      pvVar4 = (undefined *)0x0;
      if (*(int *)(this + 0x388) != 0) {
        pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x388) + 0x70)));
      }
      F_00568380(pvVar4,0x11,0,this,0,0);
    }
    iVar1 = *(int *)(this + 0x39c);
    if (iVar1 != 0) {
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x17,(uint)*(ushort *)(iVar1 + 100),this,0,0);
      iVar1 = *(int *)(this + 0x39c);
      pvVar4 = (undefined *)0x0;
      if (iVar1 != 0) {
        pvVar4 = *(undefined * PTR32 *)(iVar1 + 0x70);
      }
      F_00568380(pvVar4,6,(uint)*(ushort *)(iVar1 + 100),this,0,0);
    }
  }
  iVar1 = *(int *)(this + 0x398);
  if (iVar1 != 0) {
    F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x17,(uint)*(ushort *)(iVar1 + 100),this,0,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x398) + 0x28))))(*(int * PTR32 *)(this + 0x398),0);
  }
  if (*(undefined * PTR32 *)(this + 0x37c) != (undefined *)0x0) {
    if ((*(byte *)(param_2 + 8) & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0xc);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x37c),uVar5);
  }
  piVar2 = *(int * PTR32 *)(this + 0x398);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2);
  }
  *(uint *)(this + 0xa8) = uVar3;
  uVar3 = F_005b0610(this,1,1,0);
  return uVar3;
}

/* ref: Client::UI2::AddonCharaSelectListMenu::vf44 */
uint F_00895440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x895440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  char cVar2;
  undefined * pvVar3;
  uint uVar4;
  
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
  F_0085f230(this);
  iVar1 = *(int *)(this + 400);
  if (iVar1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_00568380(pvVar3,0x1f,(uint)*(ushort *)(iVar1 + 100),this,0,0);
  iVar1 = *(int *)(this + 400);
  if (iVar1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_00568380(pvVar3,0x23,(uint)*(ushort *)(iVar1 + 100),this,0,0);
  iVar1 = *(int *)(this + 400);
  if (iVar1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_00568380(pvVar3,0x21,(uint)*(ushort *)(iVar1 + 100),this,0,0);
  iVar1 = *(int *)(this + 400);
  if (iVar1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_00568380(pvVar3,0x20,(uint)*(ushort *)(iVar1 + 100),this,0,0);
  *((undefined1 *)GEN_TOP((*(int *)(this + 400) + 0x11b))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)(this + 400) + 0x11e))) = 1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 4;
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0x7c2a10));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 400),&(*(undefined * PTR32 *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x4)),2,0);
  *((undefined1 *)GEN_TOP((*(int *)(this + 400) + 0x11b))) = 1;
  iVar1 = *(int *)(this + 0x188);
  if (iVar1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_00568380(pvVar3,0x17,(uint)*(ushort *)(iVar1 + 100),this,0,0);
  iVar1 = *(int *)(this + 0x188);
  if (iVar1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_00568380(pvVar3,6,(uint)*(ushort *)(iVar1 + 100),this,0,0);
  iVar1 = *(int *)(this + 0x188);
  if (iVar1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_00568380(pvVar3,7,(uint)*(ushort *)(iVar1 + 100),this,0,0);
  iVar1 = *(int *)(this + 0x18c);
  if (iVar1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_00568380(pvVar3,0x17,(uint)*(ushort *)(iVar1 + 100),this,0,0);
  iVar1 = *(int *)(this + 0x18c);
  if (iVar1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_00568380(pvVar3,6,(uint)*(ushort *)(iVar1 + 100),this,0,0);
  iVar1 = *(int *)(this + 0x18c);
  if (iVar1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_00568380(pvVar3,7,(uint)*(ushort *)(iVar1 + 100),this,0,0);
  F_005a91d0(this,1,2);
  F_005a91d0(this,0,1);
  uVar4 = F_0055dcb0();
  uVar4 = F_0057f860(*(undefined * PTR32 *)(uVar4 + 0x14),"_CharaSelectDetail");
  *(uint *)(this + 0x1a8) = uVar4;
  uVar4 = F_0055dcb0();
  uVar4 = F_0057f860(*(undefined * PTR32 *)(uVar4 + 0x14),"_CharaSelectWorldServer");
  *(uint *)(this + 0x1ac) = uVar4;
  uVar4 = F_0055dcb0();
  uVar4 = F_0057f860(*(undefined * PTR32 *)(uVar4 + 0x14),"_CharaSelectReturn");
  *(uint *)(this + 0x1b0) = uVar4;
  F_00568380(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0,0);
  F_00568380(*(undefined * PTR32 *)(this + 0x90),0xf,0,this,0,0);
  if ((*param_2 & 0xf) == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (char)*(undefined4 *)(param_2 + 4);
  }
  if (cVar2 < '\0') {
    this[0xf9] = (undefined1)((byte)this[0xf9] | 0x40);
  }
  uVar4 = F_0055dcb0();
  this[0x1bc] = *(undefined *)(uVar4 + 0x21d);
  return uVar4;
}

/* ref: Client::UI2::AddonCharaSelectDetail::vf44 */
uint F_00895700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x895700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_0085f350(this);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),0xffffff9c,0,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),0xffffff9c,0,(float)(float10)1,1);
  this[0xfa] = (undefined1)((byte)this[0xfa] | 0x10);
  F_00584110(*(undefined * PTR32 *)(this + 0x180),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x19c),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x1b8),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x184),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x1a0),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x1bc),"");
  F_00584110(*(undefined * PTR32 *)(this + 400),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x1ac),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x1c8),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x18c),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x1a8),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x1c4),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x188),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x1a4),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x1c0),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x194),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x1b0),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x198),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x1b4),"");
  F_00584110(*(undefined * PTR32 *)(this + 0x1cc),"");
  F_005a91d0(this,1,2);
  uVar1 = F_005a91d0(this,0,1);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeBgSelector::vf44 */
uint F_008958b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8958b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  uint * puVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  undefined * pAVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_0085fce0(this);
  ((undefined * PTR32 *)(gen_frame + 0x20))[0] = (undefined *)0x7af;
  ((undefined * PTR32 *)(gen_frame + 0x20))[1] = (undefined *)0x7b3;
  ((undefined * PTR32 *)(gen_frame + 0x20))[2] = (undefined *)0x7b0;
  ((undefined * PTR32 *)(gen_frame + 0x20))[3] = (undefined *)0x7b4;
  ((undefined * PTR32 *)(gen_frame + 0x20))[4] = (undefined *)0x7b1;
  ((undefined * PTR32 *)(gen_frame + 0x20))[5] = (undefined *)0x65;
  ((undefined * PTR32 *)(gen_frame + 0x20))[6] = (undefined *)0x66;
  (*(gen_code32 *)(gen_frame + 0x3c)) = (code *)0x67;
  (*(undefined4 *)(gen_frame + 0x40)) = 0x68;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x69;
  uVar3 = F_0055dcb0();
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)(uVar3 + 0xe0);
  F_00560760(((char * PTR32 *)(gen_frame + 0x10)));
  iVar8 = 0;
  pAVar7 = this + 0x180;
  do {
    if (*(int *)pAVar7 == 0) {
      pvVar6 = (undefined *)0x0;
    }
    else {
      pvVar6 = *(undefined * PTR32 *)(*(int *)pAVar7 + 0x70);
    }
    F_00568380(pvVar6,0x17,iVar8,this,0,0);
    piVar1 = *(int * PTR32 *)pAVar7;
    pcVar2 = *(gen_code32 *)(*piVar1 + 0x30);
    *(undefined1 *)(piVar1 + 0x1e) = 0xff;
    (*pcVar2)(piVar1,0);
    pvVar6 = (undefined *)F_00561490(*(undefined * PTR32 *)pAVar7,3);
    F_0059d640(pvVar6,((undefined * PTR32 *)(gen_frame + 0x20))[iVar8 + 5]);
    puVar4 = (uint *)F_00ab36c0(((undefined * PTR32 *)(gen_frame + 0x20))[iVar8]);
    if (puVar4 == (uint *)0x0) {
      ((char * PTR32 *)(gen_frame + 0x10))[0] = "";
    }
    else {
      ((char * PTR32 *)(gen_frame + 0x10))[0] = ((char *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
    }
    F_00590ad0((*(undefined * PTR32 *)(gen_frame + 0x1c)),2,(uint)(byte)this[0x13a],*(undefined4 *)(*(int *)pAVar7 + 0x68),((char * PTR32 *)(gen_frame + 0x10)))
    ;
    iVar8 = iVar8 + 1;
    pAVar7 = pAVar7 + 4;
  } while (iVar8 < 5);
  if (((*(byte *)(param_2 + 0xe0) & 0xf) == 0) || (*(int *)(param_2 + 0xe4) != 1)) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x180),1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x28))))(*(int * PTR32 *)(this + 0x198),0);
  }
  else {
    F_0059dde0(*(undefined * PTR32 *)(this + 400),1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x28))))(*(int * PTR32 *)(this + 0x198),0);
  }
  iVar8 = *(int *)(this + 0x194);
  *(undefined4 *)(this + 0xa0) = 0;
  if (iVar8 == 0) {
    pvVar6 = (undefined *)0x0;
  }
  else {
    pvVar6 = *(undefined * PTR32 *)(iVar8 + 0x70);
  }
  F_00568380(pvVar6,0x17,(uint)*(ushort *)(iVar8 + 100),this,0,0);
  piVar1 = *(int * PTR32 *)(this + 0x194);
  pcVar2 = *(gen_code32 *)(*piVar1 + 0x30);
  *(undefined1 *)(piVar1 + 0x1e) = 0xff;
  (*pcVar2)(piVar1,0);
  puVar4 = (uint *)F_00ab36c0(0x7b8);
  if (puVar4 == (uint *)0x0) {
    ((char * PTR32 *)(gen_frame + 0x10))[0] = "";
  }
  else {
    ((char * PTR32 *)(gen_frame + 0x10))[0] = ((char *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
  }
  F_00590ad0((*(undefined * PTR32 *)(gen_frame + 0x1c)),2,(uint)(byte)this[0x13a],*((undefined4 *)GEN_TOP((*(int *)(this + 0x194) + 0x68))),
               ((char * PTR32 *)(gen_frame + 0x10)));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  ((undefined * PTR32 *)(gen_frame + 0x20))[6] = this;
  (*(gen_code32 *)(gen_frame + 0x3c)) = ((code *)REFP(0x7c42c0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  F_00574320(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x88))),((undefined * PTR32 *)(gen_frame + 0x20)) + 6,&(*(undefined4 *)(gen_frame + 0x4)),1,0);
  F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x88))),2,0,1);
  if (*((int *)GEN_TOP((*(int *)(this + 0x198) + 0x88))) == 0) {
    pvVar6 = (undefined *)0x0;
  }
  else {
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x198) + 0x88))) + 0x70)));
  }
  F_00568380(pvVar6,0x23,0,this,0,0);
  if (*(int *)(this + 0x198) == 0) {
    pvVar6 = (undefined *)0x0;
  }
  else {
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
  }
  F_00568380(pvVar6,0x47,0,this,0,0);
  F_0059caa0(*(undefined * PTR32 *)(this + 0x198),0);
  piVar1 = *(int * PTR32 *)(this + 0x198);
  if (piVar1[0x22] == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(piVar1[0x22] + 0x70);
  }
  *(undefined4 *)(this + 0x98) = uVar5;
  pcVar2 = *(gen_code32 *)(*piVar1 + 0x30);
  *(undefined1 *)(piVar1 + 0x1e) = 0xff;
  (*pcVar2)(piVar1,0);
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x84)));
  pcVar2 = *(gen_code32 *)(*piVar1 + 0x30);
  *(undefined1 *)(piVar1 + 0x1e) = 0xff;
  (*pcVar2)(piVar1,0);
  puVar4 = (uint *)F_00ab36c0(0x7b9);
  if (puVar4 == (uint *)0x0) {
    ((char * PTR32 *)(gen_frame + 0x10))[0] = "";
  }
  else {
    ((char * PTR32 *)(gen_frame + 0x10))[0] = ((char *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
  }
  F_00590ad0((*(undefined * PTR32 *)(gen_frame + 0x1c)),2,(uint)(byte)this[0x13a],piVar1[0x1a],((char * PTR32 *)(gen_frame + 0x10)));
  uVar3 = F_0055dcb0();
  this[0x1b0] = *(undefined *)(uVar3 + 0x21d);
  uVar3 = F_0055e2f0(this,4);
  *(uint *)(this + 0x1a8) = uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3;
}

/* ref: Client::UI2::AddonCharaMakeClassSelector::vf44 */
uint F_00895bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x895bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  uint * puVar4;
  uint uVar5;
  char * pcVar6;
  
  F_00860810(this);
  if ((*(byte *)(param_2 + 0x110) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x114);
  }
  *(undefined4 *)(this + 0x194) = uVar2;
  pvVar3 = (undefined *)F_0055e340(this,3);
  puVar4 = (uint *)F_00ab36c0(0x6b);
  if (puVar4 == (uint *)0x0) {
    pcVar6 = "";
  }
  else {
    pcVar6 = ((char *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
  }
  F_00584110(pvVar3,pcVar6);
  pvVar3 = (undefined *)F_0055e340(this,4);
  puVar4 = (uint *)F_00ab36c0(0x7a4);
  if (puVar4 == (uint *)0x0) {
    pcVar6 = "";
  }
  else {
    pcVar6 = ((char *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
  }
  F_00584110(pvVar3,pcVar6);
  pvVar3 = (undefined *)0x0;
  if (*(int *)(this + 0x18c) != 0) {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar3,0x17,9,this,0,0);
  pvVar3 = (undefined *)0x0;
  if (*(int *)(this + 0x18c) != 0) {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar3,0xc,9,this,0,0);
  pvVar3 = (undefined *)0x0;
  if (*(int *)(this + 400) != 0) {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
  }
  F_00568380(pvVar3,0x17,10,this,0,0);
  pvVar3 = (undefined *)0x0;
  if (*(int *)(this + 400) != 0) {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
  }
  F_00568380(pvVar3,0xc,10,this,0,0);
  iVar1 = *(int *)(this + 0x188);
  pvVar3 = (undefined *)0x0;
  if (iVar1 != 0) {
    pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_00568380(pvVar3,0x21,(uint)*(ushort *)(iVar1 + 100),this,0,0);
  iVar1 = *(int *)(this + 0x188);
  pvVar3 = (undefined *)0x0;
  if (iVar1 != 0) {
    pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_00568380(pvVar3,0x1f,(uint)*(ushort *)(iVar1 + 100),this,0,0);
  iVar1 = *(int *)(this + 0x188);
  pvVar3 = (undefined *)0x0;
  if (iVar1 != 0) {
    pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_00568380(pvVar3,0x20,(uint)*(ushort *)(iVar1 + 100),this,0,0);
  iVar1 = *(int *)(this + 0x188);
  pvVar3 = (undefined *)0x0;
  if (iVar1 != 0) {
    pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_00568380(pvVar3,0x29,(uint)*(ushort *)(iVar1 + 100),this,0,0);
  F_00860370(this);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
  *(undefined4 *)(this + 0xa0) = 0;
  uVar5 = F_005b0610(this,1,1,0);
  return uVar5;
}

/* ref: Client::UI2::AddonCharaMakeClassSelectorSimple::vf44 */
uint F_00895de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x895de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00895bf0((undefined *)this,param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeWorldServer::vf5 */
unsigned int F_00895df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x895df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_005a89b0(this,param_1,1);
    F_00860be0(this,*(undefined4 *)(this + 400));
    F_00568380(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0,0);
    F_00568380(*(undefined * PTR32 *)(this + 0x90),0xf,0,this,0,0);
    uVar1 = F_0055dcb0();
    F_00560760(((uint *)(gen_frame + 0x0)));
    ((uint *)(gen_frame + 0x0))[0] = F_0042a990(this + 0x1c4);
    F_00590ad0((undefined *)(uVar1 + 0xe0),2,(uint)(byte)this[0x13a],
                 *((undefined4 *)GEN_TOP((*(int *)(this + 0x1ac) + 0x68))),((uint *)(gen_frame + 0x0)));
  }
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeWorldServer::vf47 */
uint F_00895ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x895ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = *((uint * PTR32 *)GEN_TOP((*(int *)(param_1 + 8) + 0x20)));
  uVar2 = *puVar1;
  if ((uVar2 & 0x40) != 0) {
    *puVar1 = uVar2 & 0xffffffbf;
    uVar2 = F_00860be0(this,*(undefined4 *)(this + 400));
  }
  return uVar2;
}

/* ref: Client::UI2::AddonCharaMakeBirthDay::vf5 */
unsigned int F_00895ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x895ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * in_ecx;
  
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = F_0055e2f0(this,*(int *)(this + 0x21c) + 5);
    if (uVar1 == 0) {
      in_ecx = (int *)0x0;
    }
    else {
      in_ecx = (int *)F_00559c20(uVar1);
      if ((in_ecx == (int *)0x0) || (uVar1 = F_005613a0(in_ecx), uVar1 != 4)) {
        in_ecx = (int *)0x0;
      }
    }
    uVar1 = ((code *)*(gen_code32 *)(*in_ecx + 0x3c))(in_ecx);
    *(uint *)(this + 0xa4) = uVar1;
    F_005a89b0(this,param_1,1);
    if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
      F_007c52e0(*(undefined * PTR32 *)(this + 0x180),3,0);
    }
    F_00568380(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0,0);
    F_00568380(*(undefined * PTR32 *)(this + 0x90),0xf,0,this,0,0);
  }
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeGuardian::vf5 */
unsigned int F_00895f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x895f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * in_ecx;
  
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = F_0055e2f0(this,*(int *)(this + 0x188) + 4);
    if (uVar1 == 0) {
      in_ecx = (int *)0x0;
    }
    else {
      in_ecx = (int *)F_00559c20(uVar1);
      if ((in_ecx == (int *)0x0) || (uVar1 = F_005613a0(in_ecx), uVar1 != 4)) {
        in_ecx = (int *)0x0;
      }
    }
    uVar1 = ((code *)*(gen_code32 *)(*in_ecx + 0x3c))(in_ecx);
    *(uint *)(this + 0xa4) = uVar1;
    F_005a89b0(this,param_1,1);
    F_00568380(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0,0);
    F_00568380(*(undefined * PTR32 *)(this + 0x90),0xf,0,this,0,0);
    if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
      F_007c52e0(*(undefined * PTR32 *)(this + 0x180),4,*(undefined4 *)(this + 0x188));
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeFeature::vf44 */
uint F_00896030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x896030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint * puVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined * pAVar8;
  float10 fVar9;
  
  iVar7 = 0;
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),0xffffff9c,0,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),0xffffff9c,0,(float)(float10)1,1);
  F_00861920(this);
  *(undefined4 *)(this + 0xa0) = 0;
  pAVar8 = this + 0x194;
  do {
    iVar1 = *(int *)pAVar8;
    if (iVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(iVar1 + 0x70);
    }
    pvVar3 = (undefined *)0x0;
    if (iVar1 != 0) {
      pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_00568380(pvVar3,0x17,(&REFG(undefined4, 0x10c3738))[iVar7],this,uVar6,0);
    iVar1 = *(int *)pAVar8;
    if (iVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(iVar1 + 0x70);
    }
    pvVar3 = (undefined *)0x0;
    if (iVar1 != 0) {
      pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_00568380(pvVar3,6,(&REFG(undefined4, 0x10c3738))[iVar7],this,uVar6,0);
    iVar1 = *(int *)pAVar8;
    if (iVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(iVar1 + 0x70);
    }
    pvVar3 = (undefined *)0x0;
    if (iVar1 != 0) {
      pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_00568380(pvVar3,7,(&REFG(undefined4, 0x10c3738))[iVar7],this,uVar6,0);
    *(int *)(*(int *)pAVar8 + 0x110) = iVar7;
    F_00577aa0(*(undefined * PTR32 *)(*(int *)pAVar8 + 0x6c),1);
    iVar7 = iVar7 + 1;
    pAVar8 = pAVar8 + 4;
  } while (iVar7 < 0x1c);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x204) + 0x110))) = 0xfffffffe;
  iVar7 = *(int *)(this + 0x204);
  if (iVar7 == 0) {
    uVar6 = 0;
    pvVar3 = (undefined *)0x0;
  }
  else {
    uVar6 = *(undefined4 *)(iVar7 + 0x70);
    pvVar3 = *(undefined * PTR32 *)(iVar7 + 0x70);
  }
  F_00568380(pvVar3,0x17,0x25,this,uVar6,0);
  uVar6 = 0;
  if (*(int *)(this + 0x204) != 0) {
    uVar6 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x204) + 0x70)));
  }
  fVar9 = F_00559d80(uVar6);
  *(int *)(this + 0x188) = (int)(short)(int)fVar9;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x208) + 0x110))) = 0xffffffff;
  pvVar3 = (undefined *)0x0;
  if (*(int *)(this + 0x208) != 0) {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x208) + 0x70)));
  }
  F_00568380(pvVar3,0x17,0x26,this,0,0);
  pvVar3 = (undefined *)0x0;
  if (*(int *)(this + 0x208) != 0) {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x208) + 0x70)));
  }
  F_0055a300(pvVar3,1);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x20c) + 0x110))) = 0xfffffffd;
  pvVar3 = (undefined *)0x0;
  if (*(int *)(this + 0x20c) != 0) {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x20c) + 0x70)));
  }
  F_00568380(pvVar3,0x17,4,this,0,0);
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  puVar2 = (uint *)F_00ab36c0(0x68);
  if (puVar2 == (uint *)0x0) {
    puVar5 = &REFG(undefined, 0x10bf06a);
  }
  else {
    puVar5 = ((undefined *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
  }
  F_00584110(*(undefined * PTR32 *)(this + 0x210),puVar5);
  puVar2 = (uint *)F_00ab36c0(0x7a1);
  if (puVar2 == (uint *)0x0) {
    puVar5 = &REFG(undefined, 0x10bf06b);
  }
  else {
    puVar5 = ((undefined *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
  }
  F_00584110(*(undefined * PTR32 *)(this + 0x214),puVar5);
  *(undefined4 *)(this + 0x28c) = 0xffffffff;
  *(undefined4 *)(this + 0x290) = 0xffffffff;
  F_0055a410(*(undefined4 *)(this + 0x218),0);
  pvVar3 = (undefined *)F_0055e2f0(this,0x24);
  F_0059d670(pvVar3,0x11);
  F_005b0610(this,1,1,0);
  uVar4 = F_0055dcb0();
  uVar6 = *(undefined4 *)(uVar4 + 0x238);
  uVar4 = F_0055dcb0();
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this,*(undefined4 *)(uVar4 + 0x234),uVar6);
  return uVar4;
}

/* ref: Client::UI2::AddonCharaMakeProgress::vf44 */
uint F_008962c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8962c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  code * pcVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  undefined * pvVar5;
  char * pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined * pAVar9;
  undefined1 AVar10;
  
  ((uint *)(gen_frame + 0x8))[8] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00861a80(this);
  iVar8 = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  ((uint *)(gen_frame + 0x8))[0] = 0x65;
  ((uint *)(gen_frame + 0x8))[1] = 0x66;
  ((uint *)(gen_frame + 0x8))[2] = 0x68;
  ((uint *)(gen_frame + 0x8))[3] = 0x69;
  ((uint *)(gen_frame + 0x8))[4] = 0x6a;
  ((uint *)(gen_frame + 0x8))[5] = 0x6b;
  ((uint *)(gen_frame + 0x8))[6] = 0x6c;
  ((uint *)(gen_frame + 0x8))[7] = 0x6d;
  pAVar9 = this + 0x180;
  do {
    if (*(int *)pAVar9 == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *(undefined * PTR32 *)(*(int *)pAVar9 + 0x70);
    }
    F_0055a300(pvVar5,0);
    uVar7 = 0;
    if (*(int *)pAVar9 != 0) {
      uVar7 = *(undefined4 *)(*(int *)pAVar9 + 0x70);
    }
    F_00559e70(uVar7,(float)(int)(short)((short)REFG(undefined4, 0x148a460) + 100));
    *(int *)(*(int *)pAVar9 + 0x110) = iVar8;
    iVar4 = *(int *)pAVar9;
    if (iVar4 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(iVar4 + 0x70);
    }
    pvVar5 = (undefined *)0x0;
    if (iVar4 != 0) {
      pvVar5 = *(undefined * PTR32 *)(iVar4 + 0x70);
    }
    F_00568380(pvVar5,0x17,(&REFG(undefined4, 0x1328448))[iVar8],this,uVar7,0);
    uVar2 = F_00561490(*(undefined * PTR32 *)pAVar9,3);
    pvVar5 = (undefined *)F_00559ba0(uVar2);
    puVar3 = (uint *)F_00ab36c0(((uint *)(gen_frame + 0x8))[iVar8]);
    if (puVar3 == (uint *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = ((char *)GEN_TOP(((*puVar3 & 0xffffff) + (int)puVar3)));
    }
    F_00584110(pvVar5,pcVar6);
    iVar4 = 0;
    if (*(int *)pAVar9 != 0) {
      iVar4 = *(int *)(*(int *)pAVar9 + 0x70);
    }
    *(int *)(pAVar9 + 0x24) = iVar4;
    iVar8 = iVar8 + 1;
    pAVar9 = pAVar9 + 4;
  } while (iVar8 < 8);
  if (*(int *)(this + 0x1a0) == 0) {
    pvVar5 = (undefined *)0x0;
  }
  else {
    pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
  }
  F_00568380(pvVar5,0x17,0xb,this,0,0);
  uVar7 = 0;
  if (*(int *)(this + 0x1a0) != 0) {
    uVar7 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
  }
  *(undefined4 *)(this + 0x1c4) = uVar7;
  if ((*(byte *)(param_2 + 0xe0) & 0xf) == 0) {
    AVar10 = (undefined1)0x0;
  }
  else {
    AVar10 = SUB41(*(undefined4 *)(param_2 + 0xe4),0);
  }
  pcVar1 = *(gen_code32 *)(*(int *)this + 0xb8);
  this[900] = AVar10;
  (*pcVar1)(this,param_1,param_2);
  if ((this[900] == (undefined1)0x2) || (this[900] == (undefined1)0x3)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x28))))(*(int * PTR32 *)(this + 0x198),0);
    if ((*(byte *)(param_2 + 0xe48) & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(param_2 + 0xe4c);
    }
    AVar10 = (undefined1)((uVar2 & 0x400) != 0);
    this[0x3b8] = AVar10;
    this[0x3b9] = (undefined1)((uVar2 & 0x800) != 0);
    if (!(bool)AVar10) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x194) + 0x28))))(*(int * PTR32 *)(this + 0x194),0);
    }
    if (this[0x3b9] == (undefined1)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x19c) + 0x28))))(*(int * PTR32 *)(this + 0x19c),0);
    }
    pvVar5 = (undefined *)F_0055e2f0(this,10);
    F_0059d670(pvVar5,0x65);
  }
  F_00568380(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0,0);
  uVar2 = F_00568380(*(undefined * PTR32 *)(this + 0x90),0xf,0,this,0,0);
  F_00c47745(((uint *)(gen_frame + 0x8))[8] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: Client::UI2::AddonCharaMakeProgress::vf46 */
byte F_00896520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x896520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  uint in_ecx;
  uint * puVar4;
  int iVar5;
  byte * pbVar6;
  undefined * pAVar7;
  
  if ((param_2[0x170] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x174);
  }
  if ((uVar1 & 0xffffff00) == 0) {
    pbVar6 = param_2 + 8;
    pAVar7 = this + 0x180;
    (*(int *)(gen_frame + 0x4)) = 8;
    do {
      uVar1 = F_00561490(*(undefined * PTR32 *)pAVar7,3);
      pvVar2 = (undefined *)F_00559ba0(uVar1);
      uVar1 = F_00577bc0(pvVar2,0,0,REFG(undefined4, 0x108cc50),0);
      (*(uint *)(gen_frame + 0x8)) = uVar1 & 0xffff;
      uVar1 = F_00561490(*(undefined * PTR32 *)pAVar7,5);
      pvVar2 = (undefined *)F_00559ba0(uVar1);
      if ((pbVar6[8] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(pbVar6 + 0xc);
      }
      F_00584110(pvVar2,uVar3);
      uVar1 = F_00577bc0(pvVar2,0,0,REFG(undefined4, 0x108cc50),0);
      (*(uint *)(gen_frame + 0x0)) = uVar1 & 0xffff;
      in_ecx = F_00561490(*(undefined * PTR32 *)pAVar7,4);
      if ((pbVar6[0x10] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(pbVar6 + 0x14);
      }
      pvVar2 = (undefined *)F_00559ba0(in_ecx);
      F_00584110(pvVar2,uVar3);
      pbVar6 = pbVar6 + 0x18;
      puVar4 = &(*(uint *)(gen_frame + 0x0));
      if ((ushort)uVar1 <= (ushort)(*(uint *)(gen_frame + 0x8))) {
        puVar4 = &(*(uint *)(gen_frame + 0x8));
      }
      uVar1 = (uint)(ushort)((short)*puVar4 + *(short *)&REFG(undefined, 0x148a45c));
      (*(uint *)(gen_frame + 0x0)) = F_00561490(*(undefined * PTR32 *)pAVar7,7);
      F_0055a060((*(uint *)(gen_frame + 0x0)),uVar1);
      F_00559eb0((*(uint *)(gen_frame + 0x0)),REFG(int, 0x148a458) - uVar1);
      pAVar7 = pAVar7 + 4;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
    } while ((*(int *)(gen_frame + 0x4)) != 0);
    if ((*param_2 & 0xf) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_2 + 4);
      if (iVar5 < 0) {
        return 1;
      }
    }
    if (*(int *)(this + 0x378) != iVar5) {
      if (iVar5 == 7) {
        switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x37c))) {
        case 2: ;
          *(undefined4 *)(this + 0x37c) = 7;
          *(undefined4 *)(this + 0x380) = 7;
          if (*(undefined * PTR32 *)(this + 0x388) != (undefined *)0x0) {
            F_007c4030(*(undefined * PTR32 *)(this + 0x388),7);
          }
          F_0081c640(this,7);
          F_007c55c0(this,0);
          return 1;
        }
      }
      else if (iVar5 == 6) {
        switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x37c))) {
        case 2: ;
          *(undefined4 *)(this + 0x37c) = 3;
          F_0081c480(this);
          *(undefined4 *)(this + 0x380) = 6;
          if (*(undefined * PTR32 *)(this + 0x388) != (undefined *)0x0) {
            F_007c4030(*(undefined * PTR32 *)(this + 0x388),6);
          }
          F_0081c640(this,6);
          return 1;
        }
      }
      else {
        if (iVar5 == 2) {
          *(undefined4 *)(this + 0x378) = 2;
          return 1;
        }
        *(int *)(this + 0x378) = iVar5;
      }
    }
    return 1;
  }
  return 1;
}

/* ref: Client::UI2::AddonCharaMakeProgress::vf38 */
uint F_00896780(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x896780u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined * this;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = F_005a2370(param_1,param_2);
  if (((((*(int *)((int)param_1 + 0x37c) == -1) && ((*(byte *)((int)param_1 + 0xf9) & 1) != 0)) &&
       (uVar2 = *(uint *)((int)param_1 + 0x398), uVar2 != 0)) &&
      (((*(byte *)(uVar2 + 0xf9) & 1) != 0 && (uVar2 = *(uint *)((int)param_1 + 0x39c), uVar2 != 0))
      )) && (((*(byte *)(uVar2 + 0xf9) & 1) != 0 &&
             ((this = *(undefined * PTR32 *)((int)param_1 + 0x3a0), this != (undefined *)0x0 &&
              ((*(byte *)((int)this + 0xf9) & 1) != 0)))))) {
    uVar2 = *(uint *)((int)param_1 + 0x378);
    if (uVar2 == 0) {
      if (*(undefined * PTR32 *)((int)param_1 + 0x388) != (undefined *)0x0) {
        F_007c4030(*(undefined * PTR32 *)((int)param_1 + 0x388),0);
      }
      uVar2 = F_0081c640(param_1,0);
      *(undefined4 *)((int)param_1 + 0x380) = 0;
      *(undefined4 *)((int)param_1 + 0x37c) = 0;
      return uVar2;
    }
    if (uVar2 == 2) {
      *(undefined4 *)((int)this + 0x298) = 0x1c;
      F_007c50d0(this);
      uVar2 = *(uint *)((int)param_1 + 0x37c);
      uVar1 = *(undefined4 *)((int)param_1 + 0x378);
      if (uVar2 != 0) {
        uVar2 = uVar2 + 1;
        switch((unsigned int)(uintptr_t)(uVar2)) {
        case 0: ;
          if (*(undefined * PTR32 *)((int)param_1 + 0x388) != (undefined *)0x0) {
            F_007c4030(*(undefined * PTR32 *)((int)param_1 + 0x388),uVar1);
          }
          uVar2 = F_0081c640(param_1,uVar1);
          *(undefined4 *)((int)param_1 + 0x380) = uVar1;
        case 4: ;
        case 5: ;
          *(undefined4 *)((int)param_1 + 0x37c) = 0;
        }
      }
    }
    else if (uVar2 == 8) {
      *(undefined4 *)((int)param_1 + 0x37c) = 2;
      uVar2 = F_0081c550(param_1);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonCharaMakeProgress::vf2 */
uint F_008968e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x8968e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = param_3 & 0xffff;
  piVar4 = (int *)(uVar3 - 0xc);
  if ((int *)(uVar3 - 0xc) < (int *)0x32) {
    piVar4 = (int *)(uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x896a50) + uVar3)));
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0xc: ;
      piVar4 = param_6;
      if (((char)param_6[1] == '\0') &&
         ((piVar4 = (int *)*param_6, piVar4 == (int *)0x2 || (piVar4 == (int *)0x3)))) {
        piVar4 = *(int * PTR32 *)((int)in_ecx + 0x394);
        if (piVar4 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar4 + 0x88))(piVar4,in_ecx,0);
        }
        uVar3 = F_00557670(param_5,0);
        return uVar3;
      }
      break;
    case 0xf: ;
      uVar3 = F_0081c250(in_ecx,param_5,param_6);
      return uVar3;
    case 0x17: ;
      if (param_4 == 0xb) {
        uVar3 = F_007c5760(in_ecx);
        return uVar3;
      }
      uVar3 = F_005bdbc0((undefined *)*param_5,1);
      iVar1 = *(int *)(uVar3 + 0x110);
      piVar2 = *(int * PTR32 *)((int)in_ecx + 0x37c);
      piVar4 = piVar2;
      if (iVar1 == 7) {
        if (piVar2 != (int *)0x7) {
          piVar4 = (int *)((int)piVar2 + 1);
          switch((unsigned int)(uintptr_t)(piVar2)) {
          case (int *)0x2: ;
            *(undefined4 *)((int)in_ecx + 0x37c) = 7;
            *(undefined4 *)((int)in_ecx + 0x380) = 7;
            if (*(undefined * PTR32 *)((int)in_ecx + 0x388) != (undefined *)0x0) {
              F_007c4030(*(undefined * PTR32 *)((int)in_ecx + 0x388),7);
            }
            F_0081c640(in_ecx,7);
            piVar4 = (int *)F_007c55c0(in_ecx,0);
          }
        }
      }
      else if (piVar2 != (int *)0x3) {
        piVar4 = (int *)((int)piVar2 + 1);
        switch((unsigned int)(uintptr_t)(piVar2)) {
        case (int *)0x2: ;
          *(undefined4 *)((int)in_ecx + 0x37c) = 3;
          F_0081c480(in_ecx);
          *(int *)((int)in_ecx + 0x380) = iVar1;
          if (*(undefined * PTR32 *)((int)in_ecx + 0x388) != (undefined *)0x0) {
            F_007c4030(*(undefined * PTR32 *)((int)in_ecx + 0x388),iVar1);
          }
          uVar3 = F_0081c640(in_ecx,iVar1);
          return uVar3;
        }
      }
      break;
    case 0x3d: ;
      if (param_4 == 0) {
        uVar3 = F_0081c6b0(in_ecx);
        return uVar3;
      }
      uVar3 = F_00861ec0(in_ecx);
      return uVar3;
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00896ac0 */
uint F_00896ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x896ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  uint * puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar2 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    if (*(int *)((int)in_ecx + 0x37c) == 6) {
      uVar8 = *(undefined4 *)((int)in_ecx + 0x380);
      *(undefined4 *)((int)in_ecx + 0x37c) = 2;
      F_007c55c0(in_ecx,1);
      F_007c5470(in_ecx,uVar8);
      (*(undefined4 *)(gen_frame + 0xc)) = 3;
      (*(undefined4 *)(gen_frame + 0x10)) = 0xfffffff3;
      (*(undefined4 *)(gen_frame + 0x14)) = 3;
      (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
      F_005a9110(in_ecx,2,&(*(undefined4 *)(gen_frame + 0xc)));
      piVar4 = ((int *)(gen_frame + 0x1c));
      ((int *)(gen_frame + 0x1c))[0] = 1;
      do {
        piVar4 = piVar4 + -2;
        F_005a2670(piVar4);
        ((int *)(gen_frame + 0x1c))[0] = ((int *)(gen_frame + 0x1c))[0] + -1;
      } while (-1 < ((int *)(gen_frame + 0x1c))[0]);
    }
    else {
      switch((unsigned int)(uintptr_t)(*(int *)((int)in_ecx + 0x37c))) {
      case 0: ;
        *(undefined4 *)((int)in_ecx + 0x37c) = 1;
        F_007c5470(in_ecx,*(undefined4 *)((int)in_ecx + 0x380));
        F_0081c550(in_ecx);
        (*(undefined4 *)(gen_frame + 0xc)) = 3;
        (*(undefined4 *)(gen_frame + 0x10)) = 0xfffffff3;
        (*(undefined4 *)(gen_frame + 0x14)) = 3;
        (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
        F_005a9110(in_ecx,2,&(*(undefined4 *)(gen_frame + 0xc)));
        piVar4 = ((int *)(gen_frame + 0x1c));
        ((int *)(gen_frame + 0x1c))[0] = 1;
        do {
          piVar4 = piVar4 + -2;
          F_005a2670(piVar4);
          ((int *)(gen_frame + 0x1c))[0] = ((int *)(gen_frame + 0x1c))[0] + -1;
        } while (-1 < ((int *)(gen_frame + 0x1c))[0]);
      }
    }
    ((int *)(gen_frame + 0x1c))[2] = *(undefined4 *)((int)in_ecx + 0x380);
    (*(undefined4 *)(gen_frame + 0x34)) = param_5;
    (*(undefined4 *)(gen_frame + 0x2c)) = param_4;
    (*(undefined4 *)(gen_frame + 0x3c)) = param_6;
    ((int *)(gen_frame + 0x1c))[1] = 3;
    (*(undefined4 *)(gen_frame + 0x28)) = 3;
    (*(undefined4 *)(gen_frame + 0x30)) = 3;
    (*(undefined4 *)(gen_frame + 0x38)) = 6;
    (*(undefined4 *)(gen_frame + 0x40)) = 3;
    (*(int *)(gen_frame + 0x44)) = param_3;
    F_005a9110(in_ecx,5,((int *)(gen_frame + 0x1c)) + 1);
    puVar6 = &(*(uint *)(gen_frame + 0x48));
    iVar7 = 4;
    do {
      puVar6 = puVar6 + -2;
      uVar2 = F_005a2670(puVar6);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar2;
  case 1: ;
  case 3: ;
    (*(int *)(gen_frame + 0x44)) = param_3;
    ((int *)(gen_frame + 0x1c))[2] = *(undefined4 *)((int)in_ecx + 0x380);
    (*(undefined4 *)(gen_frame + 0x2c)) = param_4;
    ((int *)(gen_frame + 0x1c))[1] = 3;
    (*(undefined4 *)(gen_frame + 0x28)) = 3;
    (*(undefined4 *)(gen_frame + 0x30)) = 3;
    (*(undefined4 *)(gen_frame + 0x34)) = param_5;
    (*(undefined4 *)(gen_frame + 0x38)) = 6;
    (*(undefined4 *)(gen_frame + 0x3c)) = param_6;
    (*(undefined4 *)(gen_frame + 0x40)) = 3;
    F_005a9110(in_ecx,5,((int *)(gen_frame + 0x1c)) + 1);
    puVar6 = &(*(uint *)(gen_frame + 0x48));
    iVar7 = 4;
    do {
      puVar6 = puVar6 + -2;
      uVar2 = F_005a2670(puVar6);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar2;
  case 2: ;
    iVar7 = *(int *)((int)in_ecx + 0x380);
    if (iVar7 == *(int *)((int)in_ecx + 0x378)) {
      F_007c5520(in_ecx);
      iVar5 = *(int *)((int)in_ecx + 0x378);
      iVar1 = *(int *)((int)in_ecx + 0x37c);
      if (iVar5 == 7) {
        switch((unsigned int)(uintptr_t)(iVar1)) {
        case 0: ;
          *(undefined4 *)((int)in_ecx + 0x37c) = 5;
          F_007c5470(in_ecx,6);
          if (*(undefined * PTR32 *)((int)in_ecx + 0x388) != (undefined *)0x0) {
            F_007c4030(*(undefined * PTR32 *)((int)in_ecx + 0x388),7);
          }
          F_0081c640(in_ecx,7);
          F_007c55c0(in_ecx,0);
          F_0081c550(in_ecx);
          (*(undefined4 *)(gen_frame + 0xc)) = 3;
          (*(undefined4 *)(gen_frame + 0x10)) = 0xfffffff3;
          (*(undefined4 *)(gen_frame + 0x14)) = 3;
          (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
          F_005a9110(in_ecx,2,&(*(undefined4 *)(gen_frame + 0xc)));
          piVar4 = ((int *)(gen_frame + 0x1c));
          iVar5 = 1;
          do {
            piVar4 = piVar4 + -2;
            F_005a2670(piVar4);
            iVar5 = iVar5 + -1;
          } while (-1 < iVar5);
        }
      }
      else if (iVar5 == 8) {
        if (iVar1 != 2) {
          switch((unsigned int)(uintptr_t)(iVar1)) {
          case 1: ;
            *(undefined4 *)((int)in_ecx + 0x37c) = 2;
            break;
          case 6: ;
            *(undefined4 *)((int)in_ecx + 0x37c) = 2;
            F_007c55c0(in_ecx,1);
            F_007c5470(in_ecx,7);
            (*(undefined4 *)(gen_frame + 0xc)) = 3;
            (*(undefined4 *)(gen_frame + 0x10)) = 0xfffffff3;
            (*(undefined4 *)(gen_frame + 0x14)) = 3;
            (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
            F_005a9110(in_ecx,2,&(*(undefined4 *)(gen_frame + 0xc)));
            piVar4 = ((int *)(gen_frame + 0x1c));
            ((int *)(gen_frame + 0x1c))[0] = 1;
            do {
              piVar4 = piVar4 + -2;
              F_005a2670(piVar4);
              ((int *)(gen_frame + 0x1c))[0] = ((int *)(gen_frame + 0x1c))[0] + -1;
            } while (-1 < ((int *)(gen_frame + 0x1c))[0]);
            break;
          case -1: ;
            *(undefined4 *)((int)in_ecx + 0x37c) = 2;
            F_0081c550(in_ecx);
          }
        }
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        pvVar3 = (undefined *)F_0055dcb0();
        F_0059b300(pvVar3,uVar8,uVar9,uVar10);
      }
      else {
        switch((unsigned int)(uintptr_t)(iVar1)) {
        case 0: ;
          *(undefined4 *)((int)in_ecx + 0x37c) = 4;
          F_007c5470(in_ecx,iVar5 + -1);
          if (*(undefined * PTR32 *)((int)in_ecx + 0x388) != (undefined *)0x0) {
            F_007c4030(*(undefined * PTR32 *)((int)in_ecx + 0x388),iVar5);
          }
          F_0081c640(in_ecx,iVar5);
          (*(undefined4 *)(gen_frame + 0xc)) = 3;
          (*(undefined4 *)(gen_frame + 0x10)) = 0xfffffff3;
          (*(undefined4 *)(gen_frame + 0x14)) = 3;
          (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
          F_005a9110(in_ecx,2,&(*(undefined4 *)(gen_frame + 0xc)));
          piVar4 = ((int *)(gen_frame + 0x1c));
          ((int *)(gen_frame + 0x1c))[0] = 1;
          do {
            piVar4 = piVar4 + -2;
            F_005a2670(piVar4);
            ((int *)(gen_frame + 0x1c))[0] = ((int *)(gen_frame + 0x1c))[0] + -1;
          } while (-1 < ((int *)(gen_frame + 0x1c))[0]);
        }
      }
    }
    else if (*(int *)((int)in_ecx + 0x37c) == 6) {
      *(undefined4 *)((int)in_ecx + 0x37c) = 2;
      F_007c55c0(in_ecx,1);
      F_007c5470(in_ecx,iVar7);
      (*(undefined4 *)(gen_frame + 0xc)) = 3;
      (*(undefined4 *)(gen_frame + 0x10)) = 0xfffffff3;
      (*(undefined4 *)(gen_frame + 0x14)) = 3;
      (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
      F_005a9110(in_ecx,2,&(*(undefined4 *)(gen_frame + 0xc)));
      piVar4 = ((int *)(gen_frame + 0x1c));
      ((int *)(gen_frame + 0x1c))[0] = 1;
      do {
        piVar4 = piVar4 + -2;
        F_005a2670(piVar4);
        ((int *)(gen_frame + 0x1c))[0] = ((int *)(gen_frame + 0x1c))[0] + -1;
      } while (-1 < ((int *)(gen_frame + 0x1c))[0]);
      if (*(char *)((int)in_ecx + 900) == '\0') {
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        pvVar3 = (undefined *)F_0055dcb0();
        F_0059b300(pvVar3,uVar8,uVar9,uVar10);
      }
    }
    else {
      switch((unsigned int)(uintptr_t)(*(int *)((int)in_ecx + 0x37c))) {
      case 0: ;
        *(undefined4 *)((int)in_ecx + 0x37c) = 1;
        F_007c5470(in_ecx,iVar7);
        F_0081c550(in_ecx);
        (*(undefined4 *)(gen_frame + 0xc)) = 3;
        (*(undefined4 *)(gen_frame + 0x10)) = 0xfffffff3;
        (*(undefined4 *)(gen_frame + 0x14)) = 3;
        (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
        F_005a9110(in_ecx,2,&(*(undefined4 *)(gen_frame + 0xc)));
        piVar4 = ((int *)(gen_frame + 0x1c));
        iVar5 = 1;
        do {
          piVar4 = piVar4 + -2;
          F_005a2670(piVar4);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
    }
    if ((iVar7 == 7) && (pvVar3 = *(undefined * PTR32 *)((int)in_ecx + 0x38c), pvVar3 != (undefined *)0x0)) {
      piVar4 = *(int * PTR32 *)((int)pvVar3 + 0x180);
      uVar2 = F_00561390();
      ((code *)*(gen_code32 *)(*piVar4 + 0x60))(piVar4,uVar2 + 0xc0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x198) + 0x28))))(*(int * PTR32 *)((int)pvVar3 + 0x198),0);
      (*(undefined4 *)(gen_frame + 0xc)) = 3;
      (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffed;
      (*(undefined4 *)(gen_frame + 0x14)) = 3;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      F_005a9110(pvVar3,2,&(*(undefined4 *)(gen_frame + 0xc)));
      piVar4 = ((int *)(gen_frame + 0x1c));
      iVar5 = 1;
      do {
        piVar4 = piVar4 + -2;
        F_005a2670(piVar4);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
    (*(undefined4 *)(gen_frame + 0x34)) = param_5;
    ((int *)(gen_frame + 0x1c))[2] = iVar7;
    (*(undefined4 *)(gen_frame + 0x2c)) = param_4;
    ((int *)(gen_frame + 0x1c))[1] = 3;
    (*(undefined4 *)(gen_frame + 0x28)) = 3;
    (*(undefined4 *)(gen_frame + 0x30)) = 3;
    (*(undefined4 *)(gen_frame + 0x38)) = 6;
    (*(undefined4 *)(gen_frame + 0x3c)) = param_6;
    (*(undefined4 *)(gen_frame + 0x40)) = 3;
    (*(int *)(gen_frame + 0x44)) = param_3;
    F_005a9110(in_ecx,5,((int *)(gen_frame + 0x1c)) + 1);
    if (*(int *)((int)in_ecx + 0x380) != 7) {
      (*(undefined4 *)(gen_frame + 0xc)) = 3;
      (*(undefined4 *)(gen_frame + 0x10)) = 0xfffffff0;
      (*(undefined4 *)(gen_frame + 0x14)) = 3;
      (*(undefined4 *)(gen_frame + 0x18)) = 4;
      F_005a9110(in_ecx,2,&(*(undefined4 *)(gen_frame + 0xc)));
      piVar4 = ((int *)(gen_frame + 0x1c));
      iVar7 = 1;
      do {
        piVar4 = piVar4 + -2;
        F_005a2670(piVar4);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    puVar6 = &(*(uint *)(gen_frame + 0x48));
    iVar7 = 4;
    do {
      puVar6 = puVar6 + -2;
      uVar2 = F_005a2670(puVar6);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorL::vf19 */
uint F_00897160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x897160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = *((ushort *)GEN_TOP((*(int *)(this + 4) + 0xf6))) & 0xf;
  uVar1 = F_0055dcb0();
  this_00 = *(undefined * PTR32 *)(uVar1 + 0x14);
  uVar4 = 0;
  uVar3 = 0;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  uVar1 = F_0094c7d0(this_00,uVar1,uVar3,uVar4,uVar2,param_1);
  return uVar1;
}

/* ref: Client::UI2::AddonSupportSubView::vf44 */
uint F_008971a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8971a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  float10 fVar4;
  
  *(undefined4 *)(this + 400) = 7;
  if ((0 < param_1) && (((byte)*param_2 & 0xf) == 3)) {
    *(undefined4 *)(this + 400) = param_2[1];
  }
  F_00866580(this,*(undefined4 *)(this + 400));
  if (*(int *)(this + 0x194) != 0) {
    uVar1 = F_0055a030(*(int *)(this + 0x194));
    *(ushort *)(this + 0x1b8) = uVar1;
  }
  if (*(undefined * PTR32 *)(this + 0x198) != (undefined *)0x0) {
    F_00584580(*(undefined * PTR32 *)(this + 0x198),1);
    F_0055ad70(*(undefined4 *)(this + 0x198),1);
    uVar1 = F_00559d90(*(undefined4 *)(this + 0x198));
    *(ushort *)(this + 0x1bc) = uVar1;
    uVar1 = F_0055a030(*(undefined4 *)(this + 0x198));
    *(ushort *)(this + 0x1be) = uVar1;
  }
  if (*(int *)(this + 0x19c) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70))),0x17,0,this,0,0);
  }
  if (*(int *)(this + 0x1a0) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70))),0x17,1,this,0,0);
  }
  if (*(int *)(this + 0x1a8) != 0) {
    F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a8) + 0x70))),0);
    if (*(int *)(this + 0x1a8) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a8) + 0x70)));
    }
    fVar4 = F_00559d80(uVar2);
    *(short *)(this + 0x1c0) = (short)(int)fVar4;
    if (*(int *)(this + 0x1a8) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a8) + 0x70)));
    }
    uVar1 = F_0055a030(uVar2);
    *(ushort *)(this + 0x1c2) = uVar1;
  }
  uVar3 = F_0055e2f0(this,3);
  if (uVar3 != 0) {
    uVar1 = F_00559d90(uVar3);
    *(ushort *)(this + 0x1ba) = uVar1;
  }
  if (*(int *)(this + 0x1a4) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70))),0x17,2,this,0,0);
  }
  if (*(int *)(this + 0x1b0) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70))),0x21,3,this,0,0);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x81f8c0));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    F_00574320(*(undefined * PTR32 *)(this + 0x1b0),&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),1,0);
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  return uVar3;
}

/* ref: FUN_00897360 */
uint F_00897360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x897360u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = F_005593a0(this,1);
  uVar1 = F_00866c30(this,param_1,uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_008973a0 */
unsigned int F_008973a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8973a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00880d50(*(undefined * PTR32 *)((int)this + 0x232b0),param_1,param_2);
  return 0;
}

/* ref: FUN_008973b0 */
uint F_008973b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8973b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00881550(*(undefined * PTR32 *)((int)this + 0x232b8),param_1);
  return uVar1;
}

/* ref: FUN_008973c0 */
uint F_008973c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8973c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009556d0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008973d0 */
uint F_008973d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8973d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00955860(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008973e0 */
uint F_008973e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8973e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009559f0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008973f0 */
uint F_008973f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8973f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00955b80(this,REFG(undefined * PTR32, 0x1328034),param_2,param_3,param_4,param_5,param_6,param_7)
  ;
  return uVar1;
}

/* ref: FUN_00897420 */
uint F_00897420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x897420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00955d10(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00897430 */
uint F_00897430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x897430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00955860(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00897440 */
uint F_00897440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x897440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 0x231ac) != (undefined *)0x0) {
    F_0086e5a0(*(undefined * PTR32 *)((int)this + 0x231ac),param_2,param_3);
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00897470 */
uint F_00897470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x897470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  
  if (1 < param_3) {
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    uVar3 = F_00760440(uVar2);
    if ((param_2[8] & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(param_2 + 0xc);
    }
    pvVar4 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),uVar3);
    if ((pvVar4 != (undefined *)0x0) &&
       (pvVar4 = (undefined *)F_00a37da0(pvVar4,uVar6), pvVar4 != (undefined *)0x0)) {
      if (*(char *)((int)pvVar4 + 6) == '\0') {
        uVar5 = *(uint *)((int)pvVar4 + 8);
        if ((*(byte *)((int)pvVar4 + 0x14) & 1) != 0) {
          uVar5 = uVar5 + 1000000;
        }
      }
      else {
        pvVar4 = (undefined *)F_00a3a860(pvVar4);
        uVar5 = F_0046e5e0(pvVar4);
      }
      bVar1 = F_00a377b0(uVar5);
      if (bVar1 != 0) {
        if (uVar3 == 0x2ee2) {
          F_00a47f70(&REFG(undefined, 0x14a4230),0x2ee2,uVar6,0x2ee1,0,1);
          *param_1 = 0;
          return (uint)param_1;
        }
        pvVar4 = *(undefined * PTR32 *)((int)this + 0x23274);
        if (pvVar4 != (undefined *)0x0) {
          F_00a36f30(&REFG(undefined, 0x14a4230),0x2ee1);
          *(undefined4 *)((int)pvVar4 + 0x2c) = 0x2ee1;
          *(uint *)((int)pvVar4 + 0x30) = uVar6;
          uVar5 = F_00871af0(pvVar4,uVar3,uVar6);
          if ((char)uVar5 == '\0') {
            *(undefined4 *)((int)pvVar4 + 0x24) = 9999;
            *(undefined4 *)((int)pvVar4 + 0x2c) = 9999;
            uVar5 = 0;
            pvVar4 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),uVar3);
            if ((pvVar4 != (undefined *)0x0) &&
               (pvVar4 = (undefined *)F_00a37da0(pvVar4,uVar6), pvVar4 != (undefined *)0x0)) {
              uVar5 = F_00a3a8a0(pvVar4);
            }
            if ((9999 < (int)uVar3) && (uVar6 < 0x2717)) {
              F_00a418c0(&REFG(undefined, 0x14a4230),uVar3,uVar6,uVar5);
              *param_1 = 0;
              return (uint)param_1;
            }
            F_00a41810(&REFG(undefined, 0x14a4230),uVar3,uVar6,uVar5);
          }
        }
      }
    }
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_008975e0 */
unsigned int F_008975e0(unsigned int gen_a0)
{
  GEN_ENTER(0x8975e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x2db6c);
  piVar5 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x2db6c) + 4))) = *(int *)((int)this + 0x2db6c);
  *(undefined4 *)((int)this + 0x2db70) = 0;
  if (piVar5 != *(int * PTR32 *)((int)this + 0x2db6c)) {
    do {
      piVar1 = (int *)*piVar5;
      F_00429760(piVar5,0x14,400);
      piVar5 = piVar1;
    } while (piVar1 != (int *)*(int *)((int)this + 0x2db6c));
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x2db78);
  for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
    puVar4 = (undefined4 *)puVar3[2];
    F_005881e0((undefined *)((int)this + 0x20e70),*puVar4);
    F_00406ad0(puVar4);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x2db78);
  piVar5 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x2db78) + 4))) = *(int *)((int)this + 0x2db78);
  *(undefined4 *)((int)this + 0x2db7c) = 0;
  if (piVar5 != *(int * PTR32 *)((int)this + 0x2db78)) {
    do {
      piVar1 = (int *)*piVar5;
      F_00429760(piVar5,0xc,400);
      piVar5 = piVar1;
    } while (piVar1 != (int *)*(int *)((int)this + 0x2db78));
  }
  return 0;
}

/* ref: FUN_008976b0 */
byte F_008976b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8976b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  byte bVar2;
  
  bVar2 = 0;
  if (*(int *)((int)this + 0x2dba4) == 0) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 1: ;
      piVar1 = *(int * PTR32 *)((int)this + 0x2331c);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
        *(undefined4 *)((int)this + 0x2dba4) = 1;
        return 1;
      }
      break;
    case 2: ;
      if (*(undefined * PTR32 *)((int)this + 0x23318) != (undefined *)0x0) {
        F_00886020(*(undefined * PTR32 *)((int)this + 0x23318),0);
        *(undefined4 *)((int)this + 0x2dba4) = 2;
        return 1;
      }
      break;
    case 3: ;
      piVar1 = *(int * PTR32 *)((int)this + 0x23314);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
        *(undefined4 *)((int)this + 0x2dba4) = 3;
        return 1;
      }
      break;
    case 4: ;
      if (*(undefined * PTR32 *)((int)this + 0x23318) != (undefined *)0x0) {
        F_00886020(*(undefined * PTR32 *)((int)this + 0x23318),1);
        *(undefined4 *)((int)this + 0x2dba4) = 4;
        return 1;
      }
      break;
    case 5: ;
      piVar1 = *(int * PTR32 *)((int)this + 0x23320);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
        *(undefined4 *)((int)this + 0x2dba4) = 5;
        bVar2 = 1;
      }
    }
  }
  return bVar2;
}

/* ref: FUN_008977a0 */
byte F_008977a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8977a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  byte bVar4;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xb4);
  bVar4 = 0;
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    this_00 = (undefined *)puVar2[2];
    if ((this_00 != param_1) &&
       ((((uVar3 = *(uint *)((int)this_00 + 0xf4) >> 0x14 & 0xf, uVar3 == 3 || (uVar3 == 2)) &&
         ((*(uint *)((int)this_00 + 0x108) & 0xe00003f) == 0)) &&
        ((*(char *)((int)this_00 + 0x13c) == '\0' || ((*(byte *)((int)this_00 + 0xfb) & 2) != 0)))))
       ) {
      if (((*(byte *)((int)this_00 + 0xf9) & 4) == 0) ||
         ((*(byte *)((int)this_00 + 0x120) & 1) != 0)) {
        if (((char)param_2 == '\0') || ((*(uint *)((int)this_00 + 0x120) >> 0x11 & 1) == 0)) {
          (*(undefined4 *)(gen_frame + 0x4)) = 3;
          (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
          uVar3 = F_005a9110(this_00,1,&(*(undefined4 *)(gen_frame + 0x4)));
          if ((char)uVar3 != '\0') {
            bVar4 = bVar4 | 1;
          }
          F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
        }
      }
      else {
        bVar4 = bVar4 | 2;
      }
    }
  }
  return bVar4;
}

/* ref: FUN_00897870 */
uint F_00897870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x897870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1c0];
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  int * piVar2;
  uint uVar3;
  undefined3 extraout_var_02 = 0;
  uint uVar4;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  undefined4 * puVar5;
  int iVar6;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x1b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1bc);
  bVar1 = F_00a34970(param_1,0x12);
  uVar3 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    bVar1 = F_00a34b70(param_1,0x23);
    uVar3 = CONCAT31(extraout_var_00,bVar1);
    if (bVar1 != 0) {
      bVar1 = F_00a34c40(param_1,0x26);
      uVar3 = CONCAT31(extraout_var_01,bVar1);
      if (bVar1 != 0) goto LAB_008978b1;
    }
  }
  else {
LAB_008978b1: ;
    if (((*(int *)((int)this + 0x1e4) == 0) &&
        (uVar3 = *(uint *)(REFG(int, 0x1379860) + 0x18), *(char *)(uVar3 + 0xc6a) == '\0')) &&
       (*(char *)(REFG(int, 0x1379860) + 0xbc) == '\0')) {
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2);
      bVar1 = F_00434d00(uVar3);
      uVar3 = CONCAT31(extraout_var_02,bVar1);
      if (bVar1 != 0) {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x98))(piVar2);
      }
      F_00c47745((*(uint *)(gen_frame + 0x1b8)) ^ (uint)(uint)(gen_frame + 0x1bc));
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  if ((*(byte *)((int)this + 0x1b0) & 0x40) == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x1b8)) ^ (uint)(uint)(gen_frame + 0x1bc));
    return uVar3 & 0xffffff00;
  }
  uVar3 = *(uint *)((int)this + 0x1f8);
  uVar4 = F_0055b9e0(REFG(int, 0x1379860));
  if (uVar4 == 0) {
    bVar1 = F_00a34970(param_1,3);
    uVar4 = CONCAT31(extraout_var_03,bVar1);
    if ((bVar1 != 0) && ((*(int *)((int)this + 0x1f8) == 0 || ((uVar3 & 0xe00003f) == 0x10)))) {
      uVar3 = F_0057f860(this,REFG(undefined * PTR32, 0x1328124));
      bVar1 = F_008977a0(this,uVar3,0);
      uVar4 = CONCAT31(extraout_var_04,bVar1);
      if ((bVar1 & 1) != 0) {
        uVar3 = F_0043f8b0(0x18);
        F_00c47745((*(uint *)(gen_frame + 0x1b8)) ^ (uint)(uint)(gen_frame + 0x1bc));
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
      if ((bVar1 & 2) == 0) {
        if (uVar3 != 0) {
          bVar1 = F_005b89f0(uVar3);
          uVar4 = CONCAT31(extraout_var_05,bVar1);
          if (bVar1 != 0) goto LAB_00897a62;
        }
        uVar4 = F_0057f860(this,REFG(undefined * PTR32, 0x132812c));
        if ((uVar4 != 0) && ((*(byte *)(uVar4 + 0xf9) & 1) != 0)) {
          puVar5 = ((undefined4 *)(gen_frame + 0x0));
          iVar6 = 0x36;
          do {
            *puVar5 = 0;
            puVar5 = puVar5 + 2;
            iVar6 = iVar6 + -1;
          } while (-1 < iVar6);
          F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
          ((undefined4 *)(gen_frame + 0x0))[1] = 7;
          ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,uVar4,0x37,((undefined4 *)(gen_frame + 0x0)));
          this_00 = &(*(uint *)(gen_frame + 0x1b8));
          iVar6 = 0x36;
          do {
            this_00 = this_00 + -2;
            uVar3 = F_005a2670(this_00);
            iVar6 = iVar6 + -1;
          } while (-1 < iVar6);
          F_00c47745((*(uint *)(gen_frame + 0x1b8)) ^ (uint)(uint)(gen_frame + 0x1bc));
          return CONCAT31((int3)(uVar3 >> 8),1);
        }
      }
    }
  }
LAB_00897a62: ;
  F_00c47745((*(uint *)(gen_frame + 0x1b8)) ^ (uint)(uint)(gen_frame + 0x1bc));
  return uVar4 & 0xffffff00;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf18 */
unsigned int F_00897a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x897a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined4 * puVar6;
  int iVar7;
  
  if (((byte)this[0x1b0] & 0x40) != 0) {
    F_00594ae0(this,this + 0x1b4,param_1);
    piVar1 = *(int * PTR32 *)(this + 0x1b8);
    for (piVar5 = *(int * PTR32 *)(this + 0x1b4); piVar5 != piVar1; piVar5 = piVar5 + 1) {
      iVar7 = *piVar5;
      if ((char)param_2 == '\0') {
        if ('\0' < *(char *)(iVar7 + 0x10d)) {
          *(char *)(iVar7 + 0x10d) = *(char *)(iVar7 + 0x10d) + -1;
        }
      }
      else {
        *(char *)(iVar7 + 0x10d) = *(char *)(iVar7 + 0x10d) + '\x01';
      }
    }
    if (*(int *)(this + 0x1f8) == 0) {
      puVar6 = *(undefined4 * PTR32 *)(this + 0xb4);
      for (puVar2 = (undefined4 *)*puVar6; puVar2 != puVar6; puVar2 = (undefined4 *)*puVar2) {
        piVar5 = (int *)puVar2[2];
        uVar3 = piVar5[0x42];
        if (((uVar3 & 0xe00003f) == 0) &&
           (((char)piVar5[0x4f] == '\0' || ((*(byte *)((int)piVar5 + 0xfb) & 2) != 0)))) {
          uVar4 = (uint)piVar5[0x3d] >> 0x14 & 0xf;
          if ((char)param_2 == '\0') {
            if ((((uVar4 == 5) || (uVar4 == 4)) && ((uVar3 >> 0x18 & 1) != 0)) &&
               (((uint)piVar5[0x48] >> 1 & 1) != 0)) {
              piVar5[0x48] = piVar5[0x48] | 0x2000;
              ((code *)*(gen_code32 *)(*piVar5 + 0x14))(piVar5,0);
              piVar5[0x48] = piVar5[0x48] & 0xfffffffd;
            }
          }
          else if ((uVar4 == 3) || (uVar4 == 2)) {
            if ((uVar3 >> 0x18 & 1) == 0) {
              if ((*(byte *)((int)piVar5 + 0xf9) & 4) == 0) {
                (*(undefined4 *)(gen_frame + 0x14)) = 3;
                (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
                F_005a9110(piVar5,1,&(*(undefined4 *)(gen_frame + 0x14)));
                F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
              }
            }
            else {
              ((code *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5,0,0);
              piVar5[0x48] = piVar5[0x48] | 2;
            }
          }
        }
      }
    }
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),2);
    (*(bool *)(gen_frame + 0x8)) = (char)param_2 == '\0';
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),2);
    (*(bool *)(gen_frame + 0x10)) = (char)param_2 == '\0';
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) + 4))))
              (*(int * PTR32 *)(REFG(int, 0x1379860) + 0x38),&(*(undefined4 *)(gen_frame + 0x14)),0x32,2,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) + 4))))
              (*(int * PTR32 *)(REFG(int, 0x1379860) + 0x38),&(*(undefined4 *)(gen_frame + 0x14)),0x36,2,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
    puVar6 = &(*(undefined4 *)(gen_frame + 0x14));
    iVar7 = 1;
    do {
      puVar6 = puVar6 + -2;
      F_005a2670(puVar6);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  return 0;
}

/* ref: FUN_00897c80 */
unsigned int F_00897c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x897c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  code * pcVar4;
  uint uVar5;
  
  if ((*(byte *)((int)this + 0x1b0) & 0x40) != 0) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0xb4);
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      piVar3 = (int *)puVar2[2];
      if (((*(byte *)((int)piVar3 + 0xf9) & 1) != 0) &&
         (((char)piVar3[0x4f] == '\0' || ((*(byte *)((int)piVar3 + 0xfb) & 2) != 0)))) {
        if ((param_1 & piVar3[0x42]) == 0) {
          F_00762630(piVar3,param_2,param_3);
        }
        else if ((char)param_2 == '\0') {
          uVar5 = (uint)piVar3[0x3d] >> 0x14 & 0xf;
          if ((uVar5 != 5) && (uVar5 != 4)) {
            ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,param_3,0);
          }
        }
        else if ((*(char *)((int)piVar3 + 0x10e) < '\x01') &&
                (((uint)piVar3[0x42] >> 0x19 & 1) == 0)) {
          pcVar4 = *(gen_code32 *)(*piVar3 + 0x14);
          piVar3[0x48] = piVar3[0x48] | 0x2000;
          (*pcVar4)(piVar3,param_3);
        }
      }
    }
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf19 */
unsigned int F_00897d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x897d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  code * pcVar2;
  uint uVar3;
  int * piVar4;
  char cVar5;
  int iVar6;
  int * piVar7;
  
  if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1b0] & 0x40) != 0) {
    cVar5 = (char)(*(undefined4 *)&gen_args[2]);
    if (cVar5 == '\0') {
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))) | (*(uint *)&gen_args[1]);
    }
    else {
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))) & ~(*(uint *)&gen_args[1]);
    }
    piVar4 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar4;
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)*piVar4;
    if ((int *)*piVar4 != piVar4) {
      do {
        piVar7 = (int *)(*(int * PTR32 *)(gen_frame + 0x18))[2];
        if (((*(byte *)((int)piVar7 + 0xf9) & 1) == 0) ||
           (((char)piVar7[0x4f] != '\0' && ((*(byte *)((int)piVar7 + 0xfb) & 2) == 0)))) {
          (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)*(*(int * PTR32 *)(gen_frame + 0x18));
        }
        else {
          uVar3 = piVar7[0x42] & (*(uint *)&gen_args[1]);
          if (uVar3 != 0) {
            cVar1 = *(char *)((int)piVar7 + 0x10e);
            if (cVar5 != '\0') {
              iVar6 = cVar1 + -1;
              if (iVar6 < 1) {
                iVar6 = 0;
                if (((uint)piVar7[0x42] >> 0x19 & 1) == 0) {
                  pcVar2 = *(gen_code32 *)(*piVar7 + 0x14);
                  piVar7[0x48] = piVar7[0x48] | 0x2000;
                  (*pcVar2)(piVar7,(*(undefined4 *)&gen_args[3]));
                  *(undefined1 *)((int)piVar7 + 0x10e) = 0;
                  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)*(*(int * PTR32 *)(gen_frame + 0x18));
                  piVar4 = (*(int * PTR32 *)(gen_frame + 0x14));
                  goto LAB_00897e85;
                }
              }
              else {
                *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))) | uVar3;
              }
              *(char *)((int)piVar7 + 0x10e) = (char)iVar6;
              (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)*(*(int * PTR32 *)(gen_frame + 0x18));
              piVar4 = (*(int * PTR32 *)(gen_frame + 0x14));
              goto LAB_00897e85;
            }
            *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))) | uVar3;
            uVar3 = (uint)piVar7[0x3d] >> 0x14 & 0xf;
            *(char *)((int)piVar7 + 0x10e) = cVar1 + '\x01';
            if ((uVar3 != 5) && (uVar3 != 4)) {
              ((code *)*(gen_code32 *)(*piVar7 + 0x18))(piVar7,(*(undefined4 *)&gen_args[3]),0);
            }
          }
          (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)*(*(int * PTR32 *)(gen_frame + 0x18));
          piVar4 = (*(int * PTR32 *)(gen_frame + 0x14));
        }
LAB_00897e85: ;
      } while ((*(int * PTR32 *)(gen_frame + 0x18)) != piVar4);
    }
    if (((cVar5 == '\0') || (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))) == 0)) &&
       (piVar7 = ((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb4))))), piVar7 != piVar4)) {
      do {
        iVar6 = piVar7[2];
        if ((((*(byte *)(iVar6 + 0xf9) & 1) != 0) &&
            ((*(char *)(iVar6 + 0x13c) == '\0' || ((*(byte *)(iVar6 + 0xfb) & 2) != 0)))) &&
           (piVar4 = (*(int * PTR32 *)(gen_frame + 0x14)), (*(uint *)(iVar6 + 0x108) & (*(uint *)&gen_args[1])) == 0)) {
          F_00762630(iVar6,(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
          piVar4 = (*(int * PTR32 *)(gen_frame + 0x14));
        }
        piVar7 = (int *)*piVar7;
      } while (piVar7 != piVar4);
    }
    uVar3 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))) & 0xe00003f;
    if ((uVar3 == 0) || (uVar3 == 0x10)) {
      (*(byte *)(gen_frame + 0xc)) = 1;
    }
    else {
      (*(byte *)(gen_frame + 0xc)) = 0;
    }
    (*(undefined4 *)(gen_frame + 0x8)) = 2;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) + 4))))
              (*(int * PTR32 *)(REFG(int, 0x1379860) + 0x38),((undefined1 *)(gen_frame + 0x10)),0x32,1,&(*(undefined4 *)(gen_frame + 0x8)));
    F_005a2670(((undefined1 *)(gen_frame + 0x10)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),2);
    (*(byte *)(gen_frame + 0xc)) = ~(byte)(uVar3 >> 4) & 1;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) + 4))))
              (*(int * PTR32 *)(REFG(int, 0x1379860) + 0x38),((undefined1 *)(gen_frame + 0x10)),0x36,1,&(*(undefined4 *)(gen_frame + 0x8)));
    F_005a2670(((undefined1 *)(gen_frame + 0x10)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf27 */
uint F_00897f90(unsigned int gen_a0)
{
  GEN_ENTER(0x897f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (((byte)this[0x1b0] & 8) != 0) {
    uVar3 = 1;
    uVar2 = F_0057f860(this,REFG(undefined * PTR32, 0x1328124));
    bVar1 = F_008977a0(this,uVar2,uVar3);
    if ((bVar1 & 1) != 0) {
      F_0043f8b0(0x18);
    }
    F_007cbd80(this);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf17 */
uint F_00897fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x897fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  code * pcVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  gen_code32 * ppcVar7;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)in_ecx + 0xc) + 4))))((int)in_ecx + 0xc,2);
  piVar1 = *(int * PTR32 *)((int)in_ecx + 4);
  pcVar2 = *(gen_code32 *)(*piVar1 + 0x3c);
  if (*(char *)((int)in_ecx + 0x2d) == '\0') {
    if (*(char *)((int)in_ecx + 0x2c) == '\0') {
      uVar5 = 0x3f;
      uVar6 = 2;
      pvVar3 = ((undefined *)GEN_TOP((*pcVar2)(piVar1)));
      F_00447b80(pvVar3,uVar6,uVar5);
      uVar6 = 0x3f;
    }
    else {
      uVar5 = 0x1fffc0;
      uVar6 = 2;
      pvVar3 = ((undefined *)GEN_TOP((*pcVar2)(piVar1)));
      F_00447b80(pvVar3,uVar6,uVar5);
      uVar6 = 0x1fffc0;
    }
    uVar5 = 1;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x3c))))(*(int * PTR32 *)((int)in_ecx + 4))));
    F_00447b80(pvVar3,uVar5,uVar6);
    *(undefined2 *)((int)in_ecx + 0x1c) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*REFG(int * PTR32, 0x1488338))) + 0x24))))(((int *)GEN_TOP(*REFG(int * PTR32, 0x1488338))));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    piVar1 = *(int * PTR32 *)((int)in_ecx + 4);
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x916da0));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = in_ecx;
    (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x7cc2b0));
    if (*(char *)((int)in_ecx + 0x2c) == '\0') {
      ppcVar7 = &(*(gen_code32 *)(gen_frame + 0xc));
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
      F_0044d3f0(pvVar3,ppcVar7);
    }
    else {
      ppcVar7 = &(*(gen_code32 *)(gen_frame + 0xc));
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
      F_00466f40(pvVar3,ppcVar7);
    }
    F_007631c0(in_ecx);
    uVar6 = 0x321;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x28))))(*(int * PTR32 *)((int)in_ecx + 4))));
    F_0046a630(pvVar3,uVar6);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)in_ecx + 0xc) + 0xc))))((int)in_ecx + 0xc,2);
  }
  else {
    if (*(char *)((int)in_ecx + 0x2c) == '\0') {
      uVar6 = 0x3f;
    }
    else {
      uVar6 = 0x1fffc0;
    }
    uVar5 = 2;
    pvVar3 = ((undefined *)GEN_TOP((*pcVar2)(piVar1)));
    uVar4 = F_00447b80(pvVar3,uVar5,uVar6);
    if (*(char *)((int)in_ecx + 0x2f) == '\0') {
      uVar4 = F_00867bc0(in_ecx,in_ecx,in_edi);
      return uVar4;
    }
    if ((REFG(undefined4, 0x1370b90) != (undefined *)0x0) && (REFG(undefined4, 0x1328170) == -1)) {
      REFG(undefined4, 0x148a114) = in_ecx;
      REFG(undefined4, 0x1328170) = F_004dacb0(REFG(undefined4, 0x1370b90),((code *)REFP(0x7cc270)),0);
      return REFG(undefined4, 0x1328170);
    }
  }
  return uVar4;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf5 */
unsigned int F_00898130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x898130u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  
  if (*(char *)(in_ecx + 0x31) != '\0') {
    bVar1 = F_0049b6c0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
    if (bVar1 == 0) {
      F_00867bc0(in_ecx,in_ecx,in_edi);
      *(undefined1 *)(in_ecx + 0x31) = 0;
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentConfigCharacter::vf2 */
uint F_00898160(unsigned int gen_a0)
{
  GEN_ENTER(0x898160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  this[0x38] = (undefined1)0x0;
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x110) = 0;
  uVar1 = F_00867ab0(this,0x9d,0x49,0);
  return uVar1;
}

/* ref: FUN_00898410 */
uint F_00898410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x898410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * this_00;
  int * piVar4;
  int iVar5;
  int * piVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined * pvVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  uVar13 = 0;
  uVar1 = F_00404270();
  piVar2 = (int *)F_00406c00(0xb64,0,uVar1,uVar13);
  piVar4 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    piVar6 = piVar2 + 1;
    *piVar2 = 0x16c;
    iVar5 = 0x16b;
    piVar4 = piVar6;
    do {
      *piVar4 = 0;
      piVar4 = piVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    if (piVar6 != (int *)0x0) {
      uVar13 = 1;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
      F_005594a0(uVar1,uVar13);
      *(undefined1 *)((int)this + 0x3e) = 0;
      F_005a2710(piVar2 + 0x28f,3);
      piVar2[0x290] = 0;
      if (*(char *)((int)this + 0xac) == '\0') {
        puVar3 = (undefined4 *)F_00424cd0();
        ((code *)*(gen_code32 *)(*(int *)*puVar3 + 0x30))((int *)*puVar3,((code *)REFP(0x768450)),this);
        *(undefined1 *)((int)this + 0xac) = 1;
      }
      F_00868030(this,piVar6);
      uVar12 = 4;
      uVar11 = 0;
      uVar10 = 0xf;
      uVar8 = 0x16c;
      uVar13 = 0x9c;
      piVar4 = piVar6;
      pvVar9 = this;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar1 = F_008668b0(this_00,uVar13,uVar8,piVar4,pvVar9,uVar10,uVar11,uVar12);
      *(uint *)((int)this + 0x44) = uVar1;
      if (*(char *)((int)this + 0x3d) != '\0') {
        *(uint *)((int)this + 8) = uVar1;
      }
      iVar5 = *piVar2;
      piVar6 = piVar6 + iVar5 * 2;
      while (iVar5 = iVar5 + -1, -1 < iVar5) {
        piVar6 = piVar6 + -2;
        F_005a2670(piVar6);
      }
      uVar7 = F_00406b30(piVar2);
      piVar4 = (int *)uVar7;
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00898880 */
byte F_00898880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x898880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_ecx;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  if (((*param_1 & 0xf) == 0) || (*(int *)(param_1 + 4) == 0)) {
    *(undefined1 *)((int)this + 0x193c) = 0;
    *(undefined4 *)((int)this + 0x1944) = *(undefined4 *)((int)this + 0x19e0);
    in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x58))))(*(int * PTR32 *)((int)this + 4));
    puVar1 = (undefined4 *)F_0043a420(in_ecx,*(undefined4 *)((int)this + 0x1944));
    puVar3 = (undefined4 *)((int)this + 0x1948);
    for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = *(undefined2 *)puVar1;
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar1 + 2);
    F_00768980(this);
    F_00823850(this);
  }
  return 1;
}

/* ref: FUN_008988f0 */
byte F_008988f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8988f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint in_ecx;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if ((*param_1 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if ((-3 < iVar1) && (iVar1 < 0)) {
      return 1;
    }
  }
  F_004460e0((undefined4 *)((int)this + 0x1948),iVar1);
  *(undefined1 *)((int)this + 0x193c) = 1;
  F_00823a90(this);
  in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x58))))(*(int * PTR32 *)((int)this + 4));
  puVar2 = (undefined4 *)F_0043a420(in_ecx,*(undefined4 *)((int)this + 0x1944));
  puVar3 = (undefined4 *)((int)this + 0x1948);
  for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar2 + 2);
  F_00768980(this);
  F_00823850(this);
  return 1;
}

/* ref: Client::UI2::Agent::AgentConfigLogColor::vf2 */
uint F_00898970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x898970u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined4 * puVar2;
  undefined * this_00;
  int iVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined * pAVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (*(int *)(this + 8) == 0) {
    this[0x15] = (undefined1)0x0;
    F_007cd0c0(this);
    uVar10 = 0;
    uVar1 = F_00404270();
    puVar2 = (undefined4 *)F_00406c00(0x22c,0,uVar1,uVar10);
    if (puVar2 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = puVar2 + 1;
      *puVar2 = 0x45;
      iVar3 = 0x44;
      puVar2 = puVar4;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 2;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    F_00769000(this,puVar4);
    uVar11 = 4;
    uVar9 = 0;
    uVar8 = 0;
    uVar6 = 0x45;
    uVar10 = 0x54;
    puVar2 = puVar4;
    pAVar7 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = F_008668b0(this_00,uVar10,uVar6,puVar2,pAVar7,uVar8,uVar9,uVar11);
    *(uint *)(this + 8) = uVar1;
    if (puVar4 != (undefined4 *)0x0) {
      iVar3 = puVar4[-1];
      puVar2 = puVar4 + iVar3 * 2;
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        puVar2 = puVar2 + -2;
        F_005a2670(puVar2);
      }
      uVar5 = F_00406b30(puVar4 + -1);
      uVar1 = (uint)uVar5;
    }
    return uVar1;
  }
  if (this[0x15] != (undefined1)0x0) {
    uVar1 = F_00869010(this);
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00898a30 */
byte F_00898a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x898a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  byte bVar1;
  
  bVar1 = 0;
  if ((0 < param_2) && (((byte)*param_1 & 0xf) == 3)) {
    switch((unsigned int)(uintptr_t)(param_1[1])) {
    case 0: ;
      F_00869170(this);
      return 0;
    case 1: ;
      F_007cd220(this);
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
      F_0046a630(this_00,*(undefined4 *)((int)this + 0x248));
      return 0;
    case 2: ;
      if (*(char *)((int)this + 0x15) != '\0') {
        F_00869010(this);
        return 0;
      }
    case 0xfffffffe: ;
    case 0xffffffff: ;
      bVar1 = 1;
      *(undefined4 *)((int)this + 8) = 0;
      break;
    case 3: ;
      if (((byte)param_1[2] & 0xf) == 3) {
        *(undefined4 *)((int)this + 0x10) = param_1[3];
        F_00868fb0(this);
        return 0;
      }
    }
  }
  return bVar1;
}

/* ref: Client::UI2::Agent::AgentContext::vf2 */
uint F_00898b00(unsigned int gen_a0)
{
  GEN_ENTER(0x898b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00869700(this,0);
  return uVar1;
}

/* ref: FUN_00898b10 */
uint F_00898b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x898b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00869af0(this,param_1,0,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00898b30 */
uint F_00898b30(unsigned int gen_a0)
{
  GEN_ENTER(0x898b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(byte *)((int)this + 0xb96c) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
  case 1: ;
    uVar1 = F_0086ada0(this,0x68);
    return uVar1;
  case 2: ;
    uVar1 = F_0086ada0(this,0x69);
    return uVar1;
  case 3: ;
  case 4: ;
    uVar1 = F_0086ada0(this,0x6a);
    return uVar1;
  case 5: ;
    if (*(char *)((int)this + 0x969f) == '\x01') {
      uVar1 = F_0086ada0(this,0x6b);
    }
  }
  return uVar1;
}

/* ref: FUN_00898bd0 */
uint F_00898bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x898bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d6f14));
  puVar1 = (undefined4 *)((int)this + 0xc);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,400);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  F_0042b630((int)this + 0x28);
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFateReward::vf3 */
uint F_00898c40(unsigned int gen_a0)
{
  GEN_ENTER(0x898c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  uVar2 = F_009465f0(this + 0xc);
  *(undefined4 *)(this + 0x24) = 0;
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentFishingNote::vf1 */
uint F_00898c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x898c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  code * pcVar1;
  byte * pbVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  int * this_00;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[2]);
  if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
  }
  (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3)))) = 0;
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))));
    this_00 = *(int * PTR32 *)(uVar5 + 100);
    if (this_00 == (int *)0x0) break;
    if (1 < (*(int *)&gen_args[3])) {
      if ((pbVar2[8] & 0xf) == 0) {
        F_0086b920(this_00,0);
      }
      else {
        F_0086b920(this_00,*(undefined4 *)(pbVar2 + 0xc));
      }
      break;
    }
    goto LAB_00898ded;
  case 1: ;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))));
    this_00 = *(int * PTR32 *)(uVar5 + 0x68);
    if (this_00 == (int *)0x0) break;
LAB_00898ded: ;
    ((code *)*(gen_code32 *)(*this_00 + 8))(this_00);
    break;
  case 3: ;
    if ((pbVar2[8] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(pbVar2 + 0xc);
    }
    *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = (short)((uint)uVar4 >> 0x10);
    *((undefined2 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = 0xffff;
    pcVar1 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 4)));
    *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa2))) = (short)uVar4;
    (*pcVar1)((*(undefined * PTR32 *)&gen_args[0]) + 0xc,0x105);
    break;
  case 4: ;
    if ((pbVar2[8] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(pbVar2 + 0xc);
    }
    if ((pbVar2[0x10] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(pbVar2 + 0x14);
    }
    F_0076ce90((*(undefined * PTR32 *)&gen_args[0]),uVar5 >> 0x10,uVar4,uVar5);
    *((undefined2 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 4))))((*(undefined * PTR32 *)&gen_args[0]) + 0xc,0x106);
    break;
  case 5: ;
    if ((pbVar2[8] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(pbVar2 + 0xc);
    }
    if (*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa2))) < 8) {
      sVar3 = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa2))) * 6 + 0x62)));
    }
    else {
      sVar3 = 0;
    }
    if ((short)((uint)uVar4 >> 0x10) == sVar3) {
      pcVar1 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 4)));
      *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = (short)uVar4;
      (*pcVar1)((*(undefined * PTR32 *)&gen_args[0]) + 0xc,0x107);
    }
    else {
      F_0076cdb0((*(undefined * PTR32 *)&gen_args[0]));
    }
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    F_00a71980(&REFG(undefined, 0x14ac184));
    *((undefined2 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = 0xffff;
    (*(undefined * PTR32 *)&gen_args[0])[0xa7] = (undefined1)0x0;
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
    (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3)))) = 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3))));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00898e30 */
uint F_00898e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x898e30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = (*(uint *)&gen_args[0]);
  this = (undefined *)((*(uint *)&gen_args[0]) + 4);
  (*(uint *)&gen_args[0]) = (*(uint *)&gen_args[1]) & 0xffff;
  F_009536a0(this,&(*(uint *)&gen_args[1]),&(*(uint *)&gen_args[0]));
  if ((*(uint *)&gen_args[1]) != *(uint *)(iVar1 + 8)) {
    return (*(uint *)&gen_args[1]) + 0x10;
  }
  return 0;
}

/* ref: FUN_00898e70 */
uint F_00898e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x898e70u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this;
  int iVar1;
  uint uVar2;
  
  iVar1 = (*(uint *)&gen_args[0]);
  this = (undefined *)((*(uint *)&gen_args[0]) + 4);
  (*(uint *)&gen_args[0]) = (*(uint *)&gen_args[1]) & 0xffff;
  F_009536a0(this,&(*(uint *)&gen_args[1]),&(*(uint *)&gen_args[0]));
  uVar2 = (*(uint *)&gen_args[1]);
  if ((*(uint *)&gen_args[1]) != *(uint *)(iVar1 + 8)) {
    (*(uint *)&gen_args[0]) = (*(uint *)&gen_args[2]) & 0xffff;
    F_00953630((undefined *)((*(uint *)&gen_args[1]) + 0x10),&(*(uint *)&gen_args[1]),&(*(uint *)&gen_args[0]));
    if ((*(uint *)&gen_args[1]) != *(uint *)(uVar2 + 0x14)) {
      return (*(uint *)&gen_args[1]) + 0x14;
    }
  }
  return 0;
}

/* ref: FUN_00898ed0 */
byte F_00898ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x898ed0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int * piVar6;
  int * piVar7;
  int * PTR32 * ppiVar8;
  int * piVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  
  uVar12 = 0;
  if ((*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) != 0) && (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9a))) != 0)) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    piVar9 = *((int * PTR32 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 8)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)*piVar9;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(undefined2 *)(gen_frame + 0xc)) = 0;
    while ((*(int * PTR32 *)(gen_frame + 0x14)) != piVar9) {
      if ((short)(*(int * PTR32 *)(gen_frame + 0x14))[3] == *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98)))) {
        (*(uint *)(gen_frame + 0x18)) = uVar12;
        break;
      }
      uVar12 = uVar12 + 1;
      F_00928100(&(*(int * PTR32 *)(gen_frame + 0x14)));
    }
    (*(int * PTR32 *)(gen_frame + 0x14)) = *((int * PTR32 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 8)));
    if (*(char *)((*(int * PTR32 *)(gen_frame + 0x14))[1] + 0x21) == '\0') {
      piVar6 = (int *)(*(int * PTR32 *)(gen_frame + 0x14))[1];
      do {
        if (*(ushort *)(piVar6 + 3) < *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98)))) {
          piVar7 = (int *)piVar6[2];
        }
        else {
          piVar7 = (int *)*piVar6;
          (*(int * PTR32 *)(gen_frame + 0x14)) = piVar6;
        }
        piVar6 = piVar7;
      } while (*(char *)((int)piVar7 + 0x21) == '\0');
    }
    if (((*(int * PTR32 *)(gen_frame + 0x14)) == piVar9) || (*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) < *(ushort *)((*(int * PTR32 *)(gen_frame + 0x14)) + 3))) {
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
      ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x10));
    }
    else {
      ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x14));
    }
    if (*ppiVar8 != piVar9) {
      puVar2 = ((undefined4 *)GEN_TOP((*ppiVar8)[5]));
      puVar3 = (undefined4 *)*puVar2;
      iVar11 = 0;
      while (puVar3 != puVar2) {
        if (*(short *)(puVar3 + 3) == *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9a)))) {
          (*(undefined2 *)(gen_frame + 0xc)) = *(undefined2 *)(puVar3 + 4);
          (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(*(undefined2 *)(puVar3 + 3),(short)iVar11);
          break;
        }
        iVar11 = iVar11 + 1 + (int)(puVar3[6] - puVar3[5]) / 0x88;
        if (*(char *)((int)puVar3 + 0x25) == '\0') {
          puVar4 = (undefined4 *)puVar3[2];
          if (*(char *)((int)puVar4 + 0x25) == '\0') {
            cVar1 = *(char *)((int)*puVar4 + 0x25);
            puVar3 = puVar4;
            puVar4 = (undefined4 *)*puVar4;
            while (cVar1 == '\0') {
              cVar1 = *(char *)((int)*puVar4 + 0x25);
              puVar3 = puVar4;
              puVar4 = (undefined4 *)*puVar4;
            }
          }
          else {
            cVar1 = *(char *)((int)puVar3[1] + 0x25);
            puVar5 = (undefined4 *)puVar3[1];
            puVar4 = puVar3;
            while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
              cVar1 = *(char *)((int)puVar3[1] + 0x25);
              puVar5 = (undefined4 *)puVar3[1];
              puVar4 = puVar3;
            }
          }
        }
      }
    }
    piVar9 = ((int *)GEN_TOP((*((int * PTR32 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 8))))[1]));
    cVar1 = *(char *)((int)piVar9 + 0x21);
    piVar6 = *((int * PTR32 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 8)));
    while (cVar1 == '\0') {
      if (*(ushort *)(piVar9 + 3) < *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98)))) {
        piVar7 = (int *)piVar9[2];
        piVar9 = piVar6;
      }
      else {
        piVar7 = (int *)*piVar9;
      }
      piVar6 = piVar9;
      piVar9 = piVar7;
      cVar1 = *(char *)((int)piVar7 + 0x21);
    }
    (*(int * PTR32 *)(gen_frame + 0x10)) = *((int * PTR32 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 8)));
    (*(int * PTR32 *)&gen_args[1]) = piVar6;
    if ((piVar6 == (*(int * PTR32 *)(gen_frame + 0x10))) || (*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) < *(ushort *)(piVar6 + 3))) {
      ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x10));
    }
    else {
      ppiVar8 = &(*(int * PTR32 *)&gen_args[1]);
    }
    piVar9 = *ppiVar8;
    if (piVar9 != (*(int * PTR32 *)(gen_frame + 0x10))) {
      piVar6 = ((int *)GEN_TOP(((int *)piVar9[5])[1]));
      cVar1 = *(char *)((int)piVar6 + 0x25);
      (*(int * PTR32 *)&gen_args[1]) = (int *)piVar9[5];
      while (cVar1 == '\0') {
        if (*(ushort *)(piVar6 + 3) < *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9a)))) {
          piVar7 = (int *)piVar6[2];
          piVar6 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          piVar7 = (int *)*piVar6;
        }
        (*(int * PTR32 *)&gen_args[1]) = piVar6;
        piVar6 = piVar7;
        cVar1 = *(char *)((int)piVar7 + 0x25);
      }
      if (((*(int * PTR32 *)&gen_args[1]) == (int *)piVar9[5]) ||
         (*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9a))) < *((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 3))))) {
        (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)piVar9[5];
        ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x10));
      }
      else {
        ppiVar8 = &(*(int * PTR32 *)&gen_args[1]);
      }
      piVar6 = *ppiVar8;
      if ((piVar6 != (int *)piVar9[5]) && (piVar6 + 5 != (int *)0x0)) {
        iVar11 = piVar6[5];
        sVar10 = 0;
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))) == 0) {
          *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98)));
          *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa2))) = (short)(*(uint *)(gen_frame + 0x18));
          puVar2 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (((*(uint *)(gen_frame + 0x18)) & 0xffff) * 3 + 0x30) * 2)));
          *puVar2 = (*(undefined4 *)(gen_frame + 0x8));
          *(undefined2 *)(puVar2 + 1) = (*(undefined2 *)(gen_frame + 0xc));
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))) = 0;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) = 0;
          *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = 0;
          return 1;
        }
        for (; iVar11 != piVar6[6]; iVar11 = iVar11 + 0x88) {
          if (*(char *)(iVar11 + 0x85) != '\0') {
            uVar12 = 0;
            piVar9 = (int *)(iVar11 + 0x54);
            do {
              if (*piVar9 == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94)))) {
                *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98)));
                *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa2))) = (short)(*(uint *)(gen_frame + 0x18));
                puVar2 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (((*(uint *)(gen_frame + 0x18)) & 0xffff) * 3 + 0x30) * 2)));
                *puVar2 = (*(undefined4 *)(gen_frame + 0x8));
                *(undefined2 *)(puVar2 + 1) = (*(undefined2 *)(gen_frame + 0xc));
                *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = sVar10;
                *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) = 0;
                *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))) = 0;
                return 1;
              }
              uVar12 = uVar12 + 1;
              piVar9 = piVar9 + 1;
            } while (uVar12 < 10);
          }
          sVar10 = sVar10 + 1;
        }
      }
    }
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) = 0;
  return 0;
}

/* ref: FUN_00899390 */
uint F_00899390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x899390u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  int iVar1;
  short sVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (*(uint *)&gen_args[1]);
  iVar6 = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) != '\0') &&
     (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) == *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))))) {
    if (*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa2))) < 8) {
      sVar2 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa2))) * 6 + 0x62)));
    }
    else {
      sVar2 = 0;
    }
    if (sVar2 == *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9e)))) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x18);
      if (uVar4 != 0) {
        iVar6 = **(int * PTR32 *)(uVar4 + 0x20);
        (*(int *)(gen_frame + 0x18)) = (*(int * PTR32 *)(uVar4 + 0x20))[1];
        (*(int *)(gen_frame + 0x14)) = 2;
      }
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) = 0;
      goto LAB_008994ed;
    }
  }
  sVar2 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4)));
  if (-1 < sVar2) {
    if (*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa2))) < 8) {
      (*(uint *)(gen_frame + 0x10)) = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa2))) * 6 + 0x62)));
    }
    else {
      (*(uint *)(gen_frame + 0x10)) = 0;
    }
    this_00 = (undefined *)((*(uint *)&gen_args[1]) + 4);
    (*(uint *)&gen_args[1]) = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0)));
    F_009536a0(this_00,&(*(int *)(gen_frame + 0xc)),&(*(uint *)&gen_args[1]));
    iVar5 = (*(int *)(gen_frame + 0xc));
    if ((*(int *)(gen_frame + 0xc)) != *(int *)(iVar1 + 8)) {
      (*(uint *)&gen_args[1]) = (*(uint *)(gen_frame + 0x10)) & 0xffff;
      F_00953630((undefined *)((*(int *)(gen_frame + 0xc)) + 0x10),&(*(int *)(gen_frame + 0xc)),&(*(uint *)&gen_args[1]));
      if (((*(int *)(gen_frame + 0xc)) != *(int *)(iVar5 + 0x14)) && ((int *)((*(int *)(gen_frame + 0xc)) + 0x14) != (int *)0x0)) {
        iVar1 = *(int *)((*(int *)(gen_frame + 0xc)) + 0x14);
        if ((uint)((*(int *)((*(int *)(gen_frame + 0xc)) + 0x18) - iVar1) / 0x88) <= (uint)(int)sVar2) {
                    
          F_00c457e7("invalid vector<T> subscript");
        }
        iVar5 = sVar2 * 0x88;
        if (*(char *)(iVar5 + 0x85 + iVar1) != '\0') {
          iVar6 = *(short *)(iVar5 + 0x7e + iVar1) + -0x400;
          (*(int *)(gen_frame + 0x18)) = *(short *)(iVar5 + 0x80 + iVar1) + -0x400;
          (*(int *)(gen_frame + 0x14)) = 1;
        }
      }
    }
  }
LAB_008994ed: ;
  if (*((int *)GEN_TOP((*(int *)((*(int *)&gen_args[2]) + 0x20) + 0xca8))) != iVar6) {
    *((int *)GEN_TOP((*(int *)((*(int *)&gen_args[2]) + 0x20) + 0xca8))) = iVar6;
    *(undefined1 *)((*(int *)&gen_args[2]) + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)((*(int *)&gen_args[2]) + 0x20) + 0xcac))) != (*(int *)(gen_frame + 0x18))) {
    *((int *)GEN_TOP((*(int *)((*(int *)&gen_args[2]) + 0x20) + 0xcac))) = (*(int *)(gen_frame + 0x18));
    *(undefined1 *)((*(int *)&gen_args[2]) + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)((*(int *)&gen_args[2]) + 0x20) + 0xca4))) != (*(int *)(gen_frame + 0x14))) {
    *((int *)GEN_TOP((*(int *)((*(int *)&gen_args[2]) + 0x20) + 0xca4))) = (*(int *)(gen_frame + 0x14));
    *(undefined1 *)((*(int *)&gen_args[2]) + 0x1d) = 1;
  }
  return 2;
}

/* ref: FUN_00899550 */
byte F_00899550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x899550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))(*(int * PTR32 *)((int)this + -8))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x19);
  if (uVar3 != 0) {
    if (param_1 == 0) {
      if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0xc))) != *(int *)((int)this + 0x1c)) {
        *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0xc))) = *(int *)((int)this + 0x1c);
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      uVar1 = **(uint * PTR32 *)(uVar3 + 0x20);
      uVar4 = F_0076d5d0((undefined *)((int)this + -0xc));
      uVar5 = F_0076d650((undefined *)((int)this + -0xc));
      uVar5 = uVar1 | uVar4 | uVar5;
      **(uint * PTR32 *)(uVar3 + 0x20) = uVar5;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
      if (uVar5 != 0) {
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))(*(int * PTR32 *)((int)this + -8))));
        ((code *)*(gen_code32 *)(*piVar2 + 0x70))(piVar2,*(undefined4 *)((int)this + -4),1);
        F_00a72a70(&REFG(undefined, 0x14ab744),*(undefined4 *)((int)this + 0x18),
                     *(undefined4 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20));
      }
    }
    else {
      if (param_1 == 1) {
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0xb4))) != *(int *)((int)this + 0x20)) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0xb4))) = *(int *)((int)this + 0x20);
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        uVar1 = **(uint * PTR32 *)(uVar3 + 0x20);
        uVar4 = F_0076d760((undefined *)((int)this + -0xc));
        uVar5 = F_0086be80((undefined *)((int)this + -0xc));
        **(uint * PTR32 *)(uVar3 + 0x20) = uVar1 | uVar4 | uVar5;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))(*(int * PTR32 *)((int)this + -8))));
        ((code *)*(gen_code32 *)(*piVar2 + 0x70))(piVar2,*(undefined4 *)((int)this + -4),0);
        F_00a66b60(*(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c));
        return 0;
      }
      if (param_1 == 4) {
        uVar1 = **(uint * PTR32 *)(uVar3 + 0x20);
        uVar4 = F_0086be80((undefined *)((int)this + -0xc));
        **(uint * PTR32 *)(uVar3 + 0x20) = uVar1 | uVar4;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))(*(int * PTR32 *)((int)this + -8))));
        ((code *)*(gen_code32 *)(*piVar2 + 0x70))(piVar2,*(undefined4 *)((int)this + -4),0);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentGearSet::vf2 */
uint F_00899990(unsigned int gen_a0)
{
  GEN_ENTER(0x899990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0086c310(this,0,0);
  return uVar1;
}

/* ref: FUN_008999a0 */
uint F_008999a0(unsigned int gen_a0)
{
  GEN_ENTER(0x8999a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4));
  uVar3 = F_0043b460(uVar2);
  if ((uVar3 == 0xffffffff) && (uVar3 = F_0043b440(uVar2), uVar3 == 0xffffffff)) {
    return 0xffffffff;
  }
  uVar4 = F_0076dad0(this,uVar3);
  if ((uVar4 == 0) &&
     (uVar2 = F_0043b3e0(uVar2,uVar3), *(uint *)(uVar2 + 0x34) == (uint)REFG(undefined1, 0x14ab0d4))) {
    bVar1 = F_007d2900(this,uVar3);
    return CONCAT31(extraout_var,bVar1);
  }
  uVar2 = F_0086c880(this,uVar3);
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentBuddy::vf1 */
uint F_00899a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x899a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 local_5;
  
  uVar1 = 0;
  local_5 = 0;
  if (param_4 == 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    if ((0 < param_3) && ((*param_2 & 0xf) != 0)) {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    if (2 < param_3) {
      if ((param_2[8] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_2 + 0x14);
      }
    }
    local_5 = uVar1;
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0xb: ;
      uVar4 = 0;
      uVar2 = 0;
      uVar5 = F_00533b60(&REFG(undefined4, 0x1375bc0));
      F_00ac83b0(&REFG(undefined, 0x14bcf40),2,uVar3,(int)uVar5,(int)(uVar5 >> 0x20),uVar2,uVar4);
      break;
    case 0xc: ;
      uVar6 = 0;
      uVar2 = 0;
      uVar5 = F_00538780(&REFG(undefined4, 0x1375bc0));
      F_00ac83b0(&REFG(undefined, 0x14bcf40),uVar4,uVar3,(int)uVar5,(int)(uVar5 >> 0x20),uVar2,uVar6);
      break;
    case 0xd: ;
      F_0086d0d0(this,uVar3);
      break;
    case 0xe: ;
      F_0086d390(this,uVar3);
      break;
    case 0xf: ;
      *(undefined4 *)(this + 0xeb0) = 0xffffffff;
      *(undefined4 *)(this + 0xeb8) = 0;
      local_5 = 1;
      break;
    case 0x10: ;
      F_0086d280(this,uVar3);
      break;
    case 0x11: ;
      F_0076e890(this,uVar3,uVar4);
      break;
    case 0x12: ;
      F_0076e850(uVar3,uVar4);
      break;
    case 0xfffffffe: ;
    case 0xffffffff: ;
      ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
      local_5 = 1;
    }
  }
  else if ((param_4 < 1) || (3 < param_4)) {
    if (((3 < param_4) && (param_4 < 7)) &&
       ((local_5 = 1, (*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
      F_0076e850(param_4 + -4,0);
    }
  }
  else {
    *(undefined4 *)(this + 0xeb4) = 0;
    local_5 = 1;
    if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
      F_00a6b3f0((uint)(byte)((char)param_4 - 1));
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = local_5;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentHowTo::vf1 */
uint F_00899bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x899bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  undefined4 uVar4;
  undefined1 local_5;
  
  local_5 = 1;
  if ((*param_2 & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    local_5 = 0;
    if ((param_2[8] & 0xf) == 0) {
      F_007d3060(this,0);
    }
    else {
      F_007d3060(this,*(undefined4 *)(param_2 + 0xc));
    }
    break;
  case 1: ;
    local_5 = 0;
    F_007d3060(this,*(int *)(this + 0x3c) + -1);
    break;
  case 2: ;
    local_5 = 0;
    F_007d3060(this,*(int *)(this + 0x3c) + 1);
    break;
  case 3: ;
    local_5 = 0;
    if ((param_2[8] & 0xf) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 0xc);
    }
    uVar4 = 1;
    uVar2 = (uint)(iVar3 < 1);
    this_00 = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x140);
    F_00414a40(this_00,uVar2,uVar4);
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0x50) = 0;
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x140);
    if (*(int *)(uVar2 + 0x14) == 0) {
      iVar3 = *(int *)(this + 0x34);
      while (iVar3 != 0) {
        if (*(int *)(this + 0x34) != 0) {
          *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
          if (*(uint *)(this + 0x2c) <= *(uint *)(this + 0x30)) {
            *(undefined4 *)(this + 0x30) = 0;
          }
          iVar3 = *(int *)(this + 0x34) + -1;
          *(int *)(this + 0x34) = iVar3;
          if (iVar3 == 0) {
            *(undefined4 *)(this + 0x30) = 0;
          }
        }
        iVar3 = *(int *)(this + 0x34);
      }
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
      piVar1 = *(int * PTR32 *)(uVar2 + 0xa4);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      }
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = local_5;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentHowToNotice::vf3 */
uint F_00899d20(unsigned int gen_a0)
{
  GEN_ENTER(0x899d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = F_009463f0(this + 0x10);
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_00899d60 */
uint F_00899d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x899d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x1d0];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  undefined4 extraout_EAX = 0;
  byte * pbVar5;
  uint * puVar6;
  undefined4 * puVar7;
  int iVar8;
  int * piVar9;
  int iVar10;
  undefined4 uVar11;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1cc);
  (*(uint *)(gen_frame + 0x1c8)) = uVar2;
  if (param_3 != 0x34) {
    if (0 < (int)param_2) {
      if (((*param_1 & 0xf) == 0) || (*(int *)(param_1 + 4) != 1)) {
        param_2 = F_007d31d0(this,0,0,0xffffffff,0);
      }
      else {
        if ((param_1[8] & 0xf) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(uint *)(param_1 + 0xc);
        }
        (*(uint *)(gen_frame + 0x4)) = uVar2 & 0xff;
        if ((uVar2 & 0x100) == 0) {
          param_2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
          piVar4 = *(int * PTR32 *)(param_2 + 0x24);
          if (piVar4 != (int *)0x0) {
            F_00769610(piVar4);
            piVar9 = ((int *)(uint)(piVar4));
            if ((*(uint *)(gen_frame + 0x4)) != 0) {
              pbVar5 = param_1 + 100;
              do {
                if ((pbVar5[-0x54] & 0xf) == 0) {
                  uVar2 = 0;
                }
                else {
                  uVar2 = *(uint *)(pbVar5 + -0x50);
                }
                bVar1 = F_007d3660(this,uVar2);
                if ((pbVar5[-4] & 0xf) == 0) {
                  puVar6 = (uint *)F_00ab2cf0(uVar2 & 0xffff);
                  if (puVar6 == (uint *)0x0) {
                    iVar10 = 0;
                  }
                  else {
                    iVar10 = (*puVar6 & 0xffffff) + (int)puVar6;
                  }
                }
                else {
                  iVar10 = *(int *)pbVar5;
                }
                F_00769650(piVar4,iVar10,this,uVar2,(uint)(bVar1 == 0));
                pbVar5 = pbVar5 + 8;
                (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
                piVar9 = piVar4;
              } while ((*(uint *)(gen_frame + 0x4)) != 0);
            }
            param_2 = ((code *)*(gen_code32 *)(*piVar9 + 8))(piVar9);
          }
        }
        else {
          if (0 < *(int *)((int)this + 0x5c)) {
            F_0076ece0(this);
            F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc));
            return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
          }
          param_2 = F_0086d430(this,param_1,(*(uint *)(gen_frame + 0x4)));
        }
      }
      goto LAB_0089a0bd;
    }
    if (((param_1 != (byte *)0x0) || (param_2 != 0)) || (*(char *)((int)this + 0x60) == '\0'))
    goto LAB_0089a0bd;
    puVar7 = ((undefined4 *)(gen_frame + 0x10));
    iVar10 = 0x36;
    do {
      *puVar7 = 0;
      puVar7 = puVar7 + 2;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
    F_005a2710(((undefined4 *)(gen_frame + 0x10)),4);
    ((undefined4 *)(gen_frame + 0x10))[1] = 1;
    F_005a2710(((undefined1 *)(gen_frame + 0x18)),4);
    (*(int *)(gen_frame + 0x1c)) = param_3;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1bc)) = &REFG(undefined, 0x10bdbc2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1c0)),3);
    (*(undefined4 *)(gen_frame + 0x1c4)) = 0xffffffff;
    if (*(int *)((int)this + 0xcc) == 0) {
      uVar11 = 0x3c;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = F_007c8b20(pvVar3,uVar11);
      *(uint *)((int)this + 0xcc) = uVar2;
      if (uVar2 != 0) goto LAB_0089a083;
    }
    else {
LAB_0089a083: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x10)));
    }
    puVar6 = &(*(uint *)(gen_frame + 0x1c8));
    iVar10 = 0x36;
    do {
      puVar6 = puVar6 + -2;
      param_2 = F_005a2670(puVar6);
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
LAB_0089a0bd: ;
    F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc));
    return param_2 & 0xffffff00;
  }
  if ((*param_1 & 0xf) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(param_1 + 4);
    if (iVar10 < 0) goto LAB_00899e7d;
  }
  if ((*(int *)((int)this + 0x58) <= iVar10) ||
     (iVar10 = *(int *)((int)this + iVar10 * 4 + 0x2c), *(char *)((int)this + 0x60) == '\0'))
  goto LAB_00899e7d;
  puVar7 = ((undefined4 *)(gen_frame + 0x10));
  iVar8 = 0x36;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 2;
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  F_005a2710(((undefined4 *)(gen_frame + 0x10)),4);
  ((undefined4 *)(gen_frame + 0x10))[1] = 1;
  F_005a2710(((undefined1 *)(gen_frame + 0x18)),4);
  (*(int *)(gen_frame + 0x1c)) = iVar10;
  F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x1bc)) = &REFG(undefined, 0x10bdbc2);
  F_005a2710(((undefined1 *)(gen_frame + 0x1c0)),3);
  (*(undefined4 *)(gen_frame + 0x1c4)) = 0xffffffff;
  if (*(int *)((int)this + 0xcc) == 0) {
    uVar11 = 0x3c;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_007c8b20(pvVar3,uVar11);
    *(uint *)((int)this + 0xcc) = uVar2;
    if (uVar2 != 0) goto LAB_00899e3e;
  }
  else {
LAB_00899e3e: ;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x10)));
  }
  puVar6 = &(*(uint *)(gen_frame + 0x1c8));
  iVar10 = 0x36;
  do {
    puVar6 = puVar6 + -2;
    uVar2 = F_005a2670(puVar6);
    iVar10 = iVar10 + -1;
  } while (-1 < iVar10);
LAB_00899e7d: ;
  *(undefined4 *)((int)this + 0x5c) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc));
  return CONCAT31((int3)(uVar2 >> 8),1);
}

/* ref: FUN_0089a0e0 */
byte F_0089a0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89a0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  
  pvVar1 = param_1;
  F_0086f550(param_1);
  uVar2 = (uint)*(byte *)((int)param_1 + 0x33d8);
  if ((*(byte *)((int)param_1 + 0x33d9) & 2) != 0) {
    if (uVar2 != 0) {
      iVar3 = (int)param_1 + 0x2d7c;
      param_1 = (undefined *)uVar2;
      do {
        F_00915a30(param_2,*(undefined4 *)((int)this + 0x1af0),iVar3);
        *(int *)((int)this + 0x1af0) = *(int *)((int)this + 0x1af0) + 1;
        iVar3 = iVar3 + 0x6c;
        param_1 = (undefined *)((int)param_1 - 1);
      } while (param_1 != (undefined *)0x0);
    }
    *(byte *)((int)pvVar1 + 0x33d9) = *(byte *)((int)pvVar1 + 0x33d9) & 0xfd | 1;
    return 1;
  }
  *(int *)((int)this + 0x1af0) = *(int *)((int)this + 0x1af0) + uVar2;
  return 0;
}

/* ref: FUN_0089a160 */
byte F_0089a160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89a160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  float * pfVar5;
  undefined4 extraout_EDX = 0;
  float10 fVar6;
  float10 fVar7;
  
  bVar2 = *(byte *)((int)param_1 + 0x33d8);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x4c))))(*(int * PTR32 *)((int)this + 4));
  uVar4 = 0x44 - (bVar2 + 3);
  (*(uint *)(gen_frame + 0x4c)) = *(uint *)(uVar3 + 0x70f0);
  if (uVar4 < *(uint *)(uVar3 + 0x70f0)) {
    (*(uint *)(gen_frame + 0x4c)) = uVar4;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = REFG(undefined4, 0x1379694);
  (*(float * PTR32 *)(gen_frame + 0x3c)) = (float *)F_00a5feb0(REFG(undefined4, 0x1379694));
  (*(undefined4 *)(gen_frame + 0x34)) = REFG(undefined4, 0x14a73a0);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x4c))))(*(int * PTR32 *)((int)this + 4));
  (*(uint *)(gen_frame + 0x48)) = 0;
  if ((*(uint *)(gen_frame + 0x4c)) != 0) {
    (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)(uVar3 + 0x6b90);
    do {
      if (99 < *(uint *)((int)this + 0x1af0)) {
        return 1;
      }
      puVar1 = (undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x44));
      if (((undefined *)*puVar1 != (*(undefined * PTR32 *)(gen_frame + 0x40))) && (puVar1[0xf] != 0)) {
        pfVar5 = (float *)F_00a5feb0((undefined *)*puVar1);
        (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar5 - (float10)*(*(float * PTR32 *)(gen_frame + 0x3c)));
        (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar5[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x3c))[2]);
        fVar6 = (float10)(float)((float10)pfVar5[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x3c))[2]);
        fVar7 = (float10)(float)((float10)*pfVar5 - (float10)*(*(float * PTR32 *)(gen_frame + 0x3c)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)(fVar7 * fVar7 + fVar6 * fVar6))));
        (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x38)))))))))));
        if (!(*(double *)&REFG(undefined, 0x10d57f0) < (double)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x38))))))) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = (undefined4 *)*puVar1;
          uVar3 = F_00a5feb0((undefined4 *)*puVar1);
          uVar4 = ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x38)))((*(undefined4 * PTR32 *)(gen_frame + 0x38)));
          bVar2 = F_00773f00(param_1,(*(undefined4 *)(gen_frame + 0x34)),uVar4,extraout_EDX,uVar3);
          if ((bVar2 != 0) &&
             (((uVar3 = ((code *)*(gen_code32 *)(*(int *)*puVar1 + 4))((int *)*puVar1), uVar3 != 6 ||
               (bVar2 = F_00773ea0(param_1,puVar1), bVar2 == 0)) &&
              (bVar2 = F_0086f790(puVar1,(int)this + 0x1a7c), bVar2 == 0)))) {
            uVar3 = (uint)*(byte *)((int)puVar1 + 0x41);
            bVar2 = F_00773690(puVar1[0xf]);
            if (bVar2 != 0) {
              uVar3 = uVar3 | 0x40;
            }
            (*(uint *)(gen_frame + 0xc)) = uVar3;
            pfVar5 = (float *)F_00a5feb0((undefined *)*puVar1);
            uVar3 = F_0046e680(*pfVar5);
            (*(undefined2 *)(gen_frame + 0x10)) = (short)uVar3;
            uVar3 = F_00a5feb0((undefined *)*puVar1);
            uVar3 = F_0046e680(*(float *)(uVar3 + 8));
            (*(undefined4 *)(gen_frame + 0x14)) = puVar1[0xf];
            (*(undefined2 *)(gen_frame + 0x12)) = (short)uVar3;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(uint *)(gen_frame + 0x1c)) = ((code *)*(gen_code32 *)(*(int *)*puVar1 + 0xc))((int *)*puVar1);
            F_00915a30(param_2,*(undefined4 *)((int)this + 0x1af0),&(*(uint *)(gen_frame + 0xc)));
            *(int *)((int)this + 0x1af0) = *(int *)((int)this + 0x1af0) + 1;
          }
        }
      }
      (*(uint *)(gen_frame + 0x48)) = (*(uint *)(gen_frame + 0x48)) + 1;
      (*(int * PTR32 *)(gen_frame + 0x44)) = (*(int * PTR32 *)(gen_frame + 0x44)) + 1;
    } while ((*(uint *)(gen_frame + 0x48)) < (*(uint *)(gen_frame + 0x4c)));
  }
  return 1;
}

/* ref: FUN_0089a360 */
unsigned int F_0089a360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x89a360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  ushort * puVar3;
  int iVar4;
  
  if (param_2 == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    this_00 = *(undefined * PTR32 *)(uVar2 + 0x6c);
    if (param_1 < 0) {
      if ((REFG(int, 0x14b119c) != 0) && (REFG(char, 0x14b11f5) != '\0')) {
        uVar2 = F_00a698d0(&REFG(int, 0x14b119c));
        uVar1 = F_00a69910(&REFG(int, 0x14b119c));
        F_00870080(this_00,(uint)uVar1,uVar2,param_3);
        return 0;
      }
    }
    else if (this_00 != (undefined *)0x0) {
      puVar3 = (ushort *)F_00a69df0(&REFG(undefined, 0x14b0d04));
      uVar2 = (uint)*puVar3 + (uint)puVar3[1];
      if (5 < uVar2) {
        uVar2 = 5;
      }
      iVar4 = ((uVar2 - param_1) + -1) * 0x2624 + *(int *)(puVar3 + 0x90);
      F_00870080(this_00,(uint)*(ushort *)(iVar4 + 0xaa),*(undefined4 *)(iVar4 + 0xac),param_3);
    }
  }
  return 0;
}

/* ref: FUN_0089a410 */
uint F_0089a410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x89a410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  byte bVar1;
  int * piVar2;
  undefined * pvVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  ulonglong uVar5;
  undefined1 * puVar6;
  int * piVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if ((0 < param_2) && (((byte)*param_1 & 0xf) == 3)) {
    switch((unsigned int)(uintptr_t)(param_1[1])) {
    case 1: ;
      uVar8 = 0xc;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
      piVar2 = (int *)F_00435440(uVar4,uVar8);
      param_1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4))));
      pvVar3 = (undefined *)param_1[0x46];
      if (((piVar2 != (int *)0x0) && (pvVar3 != (undefined *)0x0)) &&
         (param_1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2))),
         param_1 == (undefined4 *)0x1)) {
        uVar8 = 0;
        uVar4 = F_00438700(piVar2,0);
        param_1 = (undefined4 *)F_008800e0(pvVar3,uVar4,uVar8,param_1);
      }
      break;
    case 2: ;
      F_0042cc20(((undefined1 *)(gen_frame + 0x60)),"/flist",REFG(undefined4, 0x108cc50));
      piVar2 = *(int * PTR32 *)((int)this + 4);
      puVar6 = ((undefined1 *)(gen_frame + 0x60));
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x20))()));
      F_00abefa0(pvVar3,puVar6,piVar2);
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x60)));
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
      return (uint)uVar5;
    case 3: ;
      uVar8 = 1;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
      piVar2 = (int *)F_00435440(uVar4,uVar8);
      param_1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4))));
      pvVar3 = (undefined *)param_1[0x32];
      if (((piVar2 != (int *)0x0) && (pvVar3 != (undefined *)0x0)) &&
         (param_1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2))),
         param_1 == (undefined4 *)0x1)) {
        uVar8 = 0;
        uVar4 = F_00438700(piVar2,0);
        uVar4 = F_0087d300(pvVar3,uVar4,uVar8,param_1);
        F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
        return uVar4;
      }
      break;
    case 4: ;
      uVar8 = 0xb;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
      uVar4 = F_00435440(uVar4,uVar8);
      param_1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4))));
      pvVar3 = (undefined *)param_1[0x43];
      if ((uVar4 != 0) && (pvVar3 != (undefined *)0x0)) {
        bVar1 = F_00436890(uVar4);
        param_1 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
        if (bVar1 == 0) {
          uVar4 = F_0087fc50(pvVar3);
          F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
          return uVar4;
        }
      }
      break;
    case 5: ;
      if ((1 < param_2) && (((byte)param_1[2] & 0xf) == 6)) {
        piVar2 = *(int * PTR32 *)((int)this + 4);
        piVar7 = piVar2;
        uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0xc)),"/lcmd \"%s\"",param_1[3]);
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2)));
        F_00abefa0(pvVar3,uVar4,piVar7);
        uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0xc)));
        F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
        return (uint)uVar5;
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0xb4)),"/lcmd",REFG(undefined4, 0x108cc50));
      piVar2 = *(int * PTR32 *)((int)this + 4);
      puVar6 = ((undefined1 *)(gen_frame + 0xb4));
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x20))()));
      F_00abefa0(pvVar3,puVar6,piVar2);
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
      return (uint)uVar5;
    case 6: ;
      param_1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4))));
      piVar2 = (int *)param_1[0x23];
      if (piVar2 != (int *)0x0) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
        if ((char)uVar4 == '\0') {
          uVar4 = F_00ae2850(&REFG(undefined * PTR32, 0x1338d48),2,0);
          F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
          return uVar4;
        }
        uVar4 = F_00ae2850(&REFG(undefined * PTR32, 0x1338d48),0,0);
        F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
        return uVar4;
      }
      break;
    case 7: ;
      param_1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4))));
      piVar2 = (int *)param_1[0x43];
      if (piVar2 != (int *)0x0) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
        F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
        return uVar4;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)param_1;
}

/* ref: FUN_0089a720 */
uint F_0089a720(unsigned int gen_a0)
{
  GEN_ENTER(0x89a720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = *(int * PTR32 *)(uVar1 + 0xb0);
  if (this_00 != (int *)0x0) {
    if ((char)this_00[0x2e5b] == '\x06') {
      uVar1 = ((code *)*(gen_code32 *)(*this_00 + 8))(this_00);
      return uVar1;
    }
    if (this_00[0x2e54] == 0) {
      uVar1 = F_00898b30(this_00);
      return uVar1;
    }
    if (this_00[0x2e56] != 0x6a) {
      uVar1 = F_0076c060(this_00);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentHUDLayout::vf1 */
uint F_0089a770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x89a770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  (*(undefined1 *)(gen_frame + 0xb)) = 0;
  if (param_4 == 1) {
    ((undefined4 *)(gen_frame + 0x0))[0] = 0;
    F_00771480(this,5,0);
    *(undefined4 *)(this + 0xc) = 0;
    (*(undefined1 *)(gen_frame + 0xb)) = 1;
    if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
      F_00771480(this,3,0);
    }
    F_005a2670(((undefined4 *)(gen_frame + 0x0)));
  }
  else {
    if ((*param_2 & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_2 + 4);
    }
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
    case 1: ;
      if ((param_2[8] & 0xf) == 0) {
        F_00771480(this,uVar4,0);
      }
      else {
        F_00771480(this,uVar4,*(undefined4 *)(param_2 + 0xc));
      }
      break;
    case 2: ;
      uVar5 = 0x33a;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x28))))(*(int * PTR32 *)(this + 4))));
      F_0046a630(pvVar2,uVar5);
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      F_00820020(pvVar2);
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x40))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,1);
    case 0xfffffffe: ;
    case 0xffffffff: ;
      F_00771480(this,uVar4,0);
    case 6: ;
      ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
      break;
    case 3: ;
      F_00771480(this,4,0);
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0x232;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
      uVar3 = F_0043bd00(pvVar2,uVar4,uVar5,uVar6);
      F_0086e100(this,uVar3);
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = (*(undefined1 *)(gen_frame + 0xb));
  return (uint)param_1;
}

/* ref: FUN_0089a8d0 */
uint F_0089a8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x89a8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = F_00ae0db0(&REFG(undefined, 0x14c0920),0x2a);
  *(uint *)((int)this + 0x1c8) = uVar3;
  if (uVar3 == 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x1bc);
  if (iVar1 == 1) {
    uVar3 = F_007d6230(this);
    if ((char)uVar3 == '\0') {
      return uVar3;
    }
    *(undefined4 *)((int)this + 0x1bc) = 2;
  }
  else if (iVar1 != 2) {
    if (iVar1 - 3U != 0) {
      return iVar1 - 3U;
    }
    goto LAB_0089a930;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x1c8);
  if (piVar2[0x3b] == 0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x2c))(piVar2);
    return uVar3;
  }
  *(undefined4 *)((int)this + 0x1bc) = 3;
LAB_0089a930: ;
  uVar3 = F_0086e390(this);
  if ((char)uVar3 != '\0') {
    *(undefined4 *)((int)this + 0x1bc) = 4;
  }
  return uVar3;
}

/* ref: FUN_0089a950 */
unsigned int F_0089a950(unsigned int gen_a0)
{
  GEN_ENTER(0x89a950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x18) != -0x20000000) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    if (*(undefined * PTR32 *)(uVar1 + 0x110) != (undefined *)0x0) {
      F_0087ffb0(*(undefined * PTR32 *)(uVar1 + 0x110),*(undefined4 *)((int)this + 0x18));
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentInventory::vf1 */
uint F_0089a980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x89a980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  byte * param_4 = (byte *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined * pvVar2;
  byte bVar3;
  uint uVar4;
  uint * this;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if ((*param_4 & 0xf) == 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(param_4 + 4);
  }
  switch((unsigned int)(uintptr_t)((*(undefined4 *)(gen_frame + 0x0)))) {
  default: ;
    uVar4 = 0;
    if (1 < param_5) {
      if ((param_4[8] & 0xf) != 0) {
        uVar4 = *(uint *)(param_4 + 0xc);
      }
      uVar4 = F_00760440(uVar4);
    }
    uVar5 = 0;
    if ((2 < param_5) && ((param_4[0x10] & 0xf) != 0)) {
      uVar5 = *(undefined4 *)(param_4 + 0x14);
    }
    switch((unsigned int)(uintptr_t)((*(undefined4 *)(gen_frame + 0x0)))) {
    case 0xb: ;
      F_007d6570(in_ecx,uVar4,uVar5);
      break;
    case 0xc: ;
      F_007d65a0(in_ecx,uVar4,uVar5);
      break;
    case 0xd: ;
      F_007d65e0(in_ecx,uVar4,uVar5);
      break;
    case 0xe: ;
      F_007d6620(in_ecx,uVar4,uVar5);
      break;
    case 0xf: ;
      F_007d6660(in_ecx,uVar4,uVar5);
      break;
    case 0x10: ;
      F_007d66a0(in_ecx,uVar4,uVar5);
      break;
    case 0x13: ;
      F_007720f0(uVar4,uVar5);
    }
    goto switchD_0089abbd_caseD_11;
  case 10: ;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x48))))(*(int * PTR32 *)((int)in_ecx + 4));
    pvVar2 = *(undefined * PTR32 *)(uVar4 + 0x130);
    uVar5 = 0;
    if ((param_4[8] & 0xf) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(param_4 + 0xc);
    }
    switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)in_ecx + 0xc))) {
    case 1: ;
      uVar5 = 3;
      break;
    case 2: ;
      uVar5 = 4;
      break;
    case 3: ;
      uVar5 = 5;
      break;
    case 4: ;
      uVar5 = 6;
      break;
    case 7: ;
      uVar5 = 7;
      break;
    case 8: ;
      uVar5 = 8;
      break;
    case 9: ;
      uVar5 = 9;
    }
    F_00869af0(pvVar2,0,uVar5,uVar7,1);
    bVar3 = F_0076a880(pvVar2);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x48))))(*(int * PTR32 *)((int)in_ecx + 4));
    piVar1 = *(int * PTR32 *)(uVar4 + 0x28);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
    if (param_6 == 5) {
      F_00827130(in_ecx);
    }
    *(byte *)(param_3 + 1) = bVar3;
    break;
  case 0x11: ;
    if (((param_4[8] & 0xf) != 0) && (*(int *)(param_4 + 0xc) != 0)) {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x48))))(*(int * PTR32 *)((int)in_ecx + 4));
      piVar1 = *(int * PTR32 *)(uVar4 + 0x28);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      }
      goto switchD_0089abbd_caseD_11;
    }
  case 0xfffffffe: ;
  case 0xffffffff: ;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x48))))(*(int * PTR32 *)((int)in_ecx + 4));
    piVar1 = *(int * PTR32 *)(uVar4 + 0x28);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
    if (*(int *)((int)in_ecx + 0xc) == 6) {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x48))))(*(int * PTR32 *)((int)in_ecx + 4));
      pvVar2 = *(undefined * PTR32 *)(uVar4 + 0x130);
      if ((pvVar2 != (undefined *)0x0) && (*(int *)((int)pvVar2 + 0x14) == 2)) {
        F_00869af0(pvVar2,*(undefined4 *)((int)pvVar2 + 0x10),0,0,1);
      }
    }
    if (param_6 == 5) {
      F_00827130(in_ecx);
    }
    *(undefined1 *)(param_3 + 1) = 1;
    break;
  case 0x12: ;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(int *)(gen_frame + 0xc)) = (param_6 == 4) + 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    if ((param_4[8] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_4 + 0xc);
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),2);
    (*(undefined1 *)(gen_frame + 0x24)) = 1;
    F_0086e5a0(in_ecx,&(*(undefined4 *)(gen_frame + 0x8)),4);
    this = &(*(uint *)(gen_frame + 0x28));
    iVar6 = 3;
    do {
      this = this + -2;
      F_005a2670(this);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
switchD_0089abbd_caseD_11: ;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  *param_3 = 2;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)param_3;
}

/* ref: Client::UI2::Agent::AgentInventory::vf3 */
unsigned int F_0089acb0(unsigned int gen_a0)
{
  GEN_ENTER(0x89acb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(int *)(this + 0xc) == 6) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    this_00 = *(undefined * PTR32 *)(uVar2 + 0x130);
    if ((this_00 != (undefined *)0x0) && (*(int *)((int)this_00 + 0x14) == 2)) {
      F_00869af0(this_00,*(undefined4 *)((int)this_00 + 0x10),0,0,1);
    }
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  if (*(int *)(this + 0x14) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    piVar3 = *(int * PTR32 *)(uVar2 + 0x28);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    }
    uVar1 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(this + 0x14) = 0;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,uVar1,0);
  }
  if (*(int *)(this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_0089ad50 */
uint F_0089ad50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x89ad50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  int * piVar1;
  bool bVar2;
  uint uVar3;
  uint * this_01;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  if ((*(int *)((int)this + 0xc) == 6) && (param_1 != 6)) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    this_00 = *(undefined * PTR32 *)(uVar3 + 0x130);
    if ((this_00 != (undefined *)0x0) && (*(int *)((int)this_00 + 0x14) == 2)) {
      F_00869af0(this_00,*(undefined4 *)((int)this_00 + 0x10),0,0,1);
    }
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  bVar2 = false;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    *(undefined4 *)((int)this + 0x10) = 0xdf8;
    break;
  case 2: ;
    *(undefined4 *)((int)this + 0x10) = 0xdf4;
    break;
  case 3: ;
    *(undefined4 *)((int)this + 0x10) = 0xdf7;
    break;
  case 4: ;
    *(undefined4 *)((int)this + 0x10) = 0xdf5;
    break;
  case 5: ;
    *(undefined4 *)((int)this + 0x10) = 0xdf9;
    bVar2 = false;
    goto LAB_0089ae10;
  case 6: ;
    *(undefined4 *)((int)this + 0x10) = 0xdfa;
    bVar2 = false;
    goto LAB_0089ae10;
  case 7: ;
    *(undefined4 *)((int)this + 0x10) = 0xdf6;
    break;
  case 8: ;
    *(undefined4 *)((int)this + 0x10) = 0xdf3;
    break;
  case 9: ;
    *(undefined4 *)((int)this + 0x10) = 0xdfb;
    break;
  default: ;
    goto switchD_0089adb8_default;
  }
  bVar2 = true;
LAB_0089ae10: ;
  *(int *)((int)this + 0xc) = param_1;
switchD_0089adb8_default: ;
  *(undefined4 *)((int)this + 0x18) = param_2;
  if (bVar2) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar1 = *(int * PTR32 *)(uVar3 + 0x130);
    if ((piVar1 != (int *)0x0) &&
       (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1), (char)uVar3 != '\0')) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),2);
  (*(undefined1 *)(gen_frame + 0x24)) = (undefined1)param_4;
  F_0086e5a0(this,&(*(undefined4 *)(gen_frame + 0x8)),4);
  this_01 = &(*(uint *)(gen_frame + 0x28));
  iVar4 = 3;
  do {
    this_01 = this_01 + -2;
    uVar3 = F_005a2670(this_01);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_0089aef0 */
uint F_0089aef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89aef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = *(uint *)((int)this + 0xc);
  if (uVar2 == param_1) {
    if (uVar2 == 6) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
      this_00 = *(undefined * PTR32 *)(uVar2 + 0x130);
      if ((this_00 != (undefined *)0x0) && (*(int *)((int)this_00 + 0x14) == 2)) {
        uVar2 = F_00869af0(this_00,*(undefined4 *)((int)this_00 + 0x10),0,0,1);
      }
    }
    if (param_1 == 5) {
      if (*(int *)((int)this + 0xc) != 0) {
        return uVar2;
      }
    }
    else {
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 0x18) = 6;
    }
    if (*(int *)((int)this + 0x14) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
      piVar3 = *(int * PTR32 *)(uVar2 + 0x28);
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
      }
      uVar1 = *(undefined4 *)((int)this + 0x14);
      *(undefined4 *)((int)this + 0x14) = 0;
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,uVar1,0);
    }
    uVar2 = F_00827080(this);
  }
  return uVar2;
}

/* ref: FUN_0089afa0 */
uint F_0089afa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x89afa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(int *)((int)this + 0x14) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar3 = *(int * PTR32 *)(uVar2 + 0x28);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    }
    uVar1 = *(undefined4 *)((int)this + 0x14);
    *(undefined4 *)((int)this + 0x14) = 0;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,uVar1,0);
    return uVar2;
  }
  uVar2 = F_0089ad50(this,param_1,5,0,1);
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentMacro::vf1 */
uint F_0089b010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x89b010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  int * piVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x2c))))(*(int * PTR32 *)(this + 4))));
  if (*(char *)((int)piVar2 + 0x39) == '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_0089b38c;
  }
  (*(undefined1 *)(gen_frame + 0xf)) = 0;
  switch((unsigned int)(uintptr_t)(param_4)) {
  case 1: ;
    if ((*param_2 & 0xf) == 0) {
LAB_0089b0d9: ;
      if ((param_2[0x10] & 0xf) == 0) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
      }
      else {
        (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + 0x14);
      }
      puVar4 = (undefined4 *)
               F_0043b860(piVar2,*(undefined4 *)(this + 0x554),*(undefined4 *)(this + 0x558));
      *puVar4 = (*(undefined4 *)(gen_frame + 0x8));
      *(undefined1 *)(piVar2 + 0xb) = 1;
      uVar9 = (uint)(byte)this[0x558];
      uVar3 = (uint)(byte)this[0x554];
      pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x30))))(*(int * PTR32 *)(this + 4))));
      F_00459330(pvVar5,uVar3,uVar9);
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
      *(byte *)(uVar3 + 0x230bf) = *(byte *)(uVar3 + 0x230bf) | 2;
      F_007d7d80(this,puVar4);
    }
    else if (-1 < *(int *)(param_2 + 4)) {
      if (*(int *)(param_2 + 4) != 0) break;
      goto LAB_0089b0d9;
    }
    *(undefined4 *)(this + 0x9f0) = 0;
    (*(undefined1 *)(gen_frame + 0xf)) = 1;
    break;
  case 2: ;
  case 3: ;
    break;
  case 4: ;
    if ((*param_2 & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 4);
    }
    bVar1 = F_00828840(this,piVar2,uVar6);
    if (bVar1 != 0) {
      uVar3 = F_0043b860(piVar2,*(undefined4 *)(this + 0x554),*(undefined4 *)(this + 0x558));
      *(undefined1 *)(piVar2 + 0xb) = 1;
      F_007d7d80(this,uVar3);
    }
    *(undefined4 *)(this + 0x9f4) = 0;
    (*(undefined1 *)(gen_frame + 0xf)) = 1;
    break;
  default: ;
    if ((*param_2 & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 4);
    }
    switch((unsigned int)(uintptr_t)(uVar6)) {
    case 0: ;
      F_0086ee40(this,piVar2,param_2);
      break;
    case 3: ;
      puVar4 = (undefined4 *)F_00772e50(this,piVar2,param_2);
      if ((param_2[0x18] & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(param_2 + 0x1c);
      }
      F_0042e430(puVar4 + 1,uVar6);
      if ((param_2[0x10] & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(param_2 + 0x14);
      }
      *puVar4 = uVar6;
      goto LAB_0089b21b;
    case 4: ;
      puVar4 = (undefined4 *)F_00772e50(this,piVar2,param_2);
      if ((param_2[0x18] & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(param_2 + 0x1c);
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x10)),uVar6,REFG(undefined4, 0x108cc50));
      F_0043ba60(piVar2,puVar4,((undefined1 *)(gen_frame + 0x10)));
      F_0042c880(((undefined1 *)(gen_frame + 0x10)));
      if ((param_2[0x10] & 0xf) == 0) {
        *puVar4 = 0;
      }
      else {
        *puVar4 = *(undefined4 *)(param_2 + 0x14);
      }
LAB_0089b21b: ;
      *(undefined1 *)(piVar2 + 0xb) = 1;
      uVar9 = (uint)(byte)this[0x558];
      uVar3 = (uint)(byte)this[0x554];
      pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x30))))(*(int * PTR32 *)(this + 4))));
      F_00459330(pvVar5,uVar3,uVar9);
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
      *(byte *)(uVar3 + 0x230bf) = *(byte *)(uVar3 + 0x230bf) | 2;
      break;
    case 5: ;
      F_0086f110(this,piVar2,param_2);
      break;
    case 6: ;
      piVar7 = (int *)F_00772e50(this,piVar2,param_2);
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),&REFG(undefined, 0x10bdfdb),REFG(undefined4, 0x108cc50));
      if ((param_2[0x20] & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(param_2 + 0x24);
      }
      if ((param_2[0x18] & 0xf) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(param_2 + 0x1c);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)(param_2 + 0x14);
      }
      F_007d7ec0(this,((undefined1 *)(gen_frame + 0x64)),uVar10,uVar8,uVar6);
      uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0x64)));
      if (uVar3 != 0) {
        F_004470b0(piVar2,piVar7,((undefined1 *)(gen_frame + 0x64)));
        *(undefined1 *)(piVar2 + 0xb) = 1;
        if (*piVar7 == 0) {
          *piVar7 = 0xed81;
        }
        F_007d7d80(this,piVar7);
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      break;
    case 8: ;
      uVar3 = F_00772e50(this,piVar2,param_2);
      F_007d7d80(this,uVar3);
      break;
    case 0xfffffffe: ;
    case 0xffffffff: ;
      ((code *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2,0);
      if (*(int *)(this + 0x9f0) != 0) {
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 0x9f0),0);
        *(undefined4 *)(this + 0x9f0) = 0;
      }
      *(undefined4 *)(this + 8) = 0;
      (*(undefined1 *)(gen_frame + 0xf)) = 1;
    }
  }
  *(undefined1 *)(param_1 + 1) = (*(undefined1 *)(gen_frame + 0xf));
LAB_0089b38c: ;
  *param_1 = 2;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return (uint)param_1;
}

/* ref: FUN_0089b3f0 */
uint F_0089b3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x89b3f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * this_00;
  undefined4 uVar1;
  undefined * this_01;
  uint uVar2;
  int * piVar3;
  int iVar4;
  uint * this_02;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  iVar4 = *(int *)(uVar2 + 0x28);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x1f0) = 0x58;
    *(int *)(iVar4 + 500) = (int)this + 0x10;
    *(undefined4 *)(iVar4 + 0x1f8) = 0;
    *(undefined1 *)(iVar4 + 0x1fc) = 0;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = *(int * PTR32 *)(uVar2 + 0x20);
  if (this_00 == (int *)0x0) {
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 0;
  }
  (*(int *)(gen_frame + 0x4)) = *(int *)((int)this + 0x18);
  if (this_00[5] == 0) {
    if (this_00[2] == 0) goto LAB_0089b48c;
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this_00[1] + 0x1c))((int *)this_00[1])));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xac))(piVar3,this_00[2]);
    if (uVar2 != 4) goto LAB_0089b48c;
  }
  if ((*(int *)(gen_frame + 0x4)) == 0) {
    (*(int *)(gen_frame + 0x4)) = 4;
  }
LAB_0089b48c: ;
  uVar1 = *(undefined4 *)((int)this + 8);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  if (this_00[3] == 6) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this_00[1] + 0x48))((int *)this_00[1]);
    this_01 = *(undefined * PTR32 *)(uVar2 + 0x130);
    if ((this_01 != (undefined *)0x0) && (*(int *)((int)this_01 + 0x14) == 2)) {
      F_00869af0(this_01,*(undefined4 *)((int)this_01 + 0x10),0,0,1);
    }
  }
  this_00[6] = (*(int *)(gen_frame + 0x4));
  this_00[4] = 0xdf3;
  this_00[3] = 8;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this_00[1] + 0x48))((int *)this_00[1]);
  piVar3 = *(int * PTR32 *)(uVar2 + 0x130);
  if (piVar3 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
    if ((char)uVar2 != '\0') {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    }
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0x4));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),2);
  (*(undefined1 *)(gen_frame + 0x24)) = 0;
  F_0086e5a0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),4);
  this_02 = &(*(uint *)(gen_frame + 0x28));
  iVar4 = 3;
  do {
    this_02 = this_02 + -2;
    F_005a2670(this_02);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0x30))(this_00);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_0089b5a0 */
unsigned int F_0089b5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x89b5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  iVar1 = *(int *)(uVar3 + 0x28);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1f0) = 0;
    *(undefined4 *)(iVar1 + 500) = 0;
    *(undefined4 *)(iVar1 + 0x1f8) = 0;
    *(undefined1 *)(iVar1 + 0x1fc) = 0;
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  if (*(undefined * PTR32 *)(uVar3 + 0x20) != (undefined *)0x0) {
    F_0089aef0(*(undefined * PTR32 *)(uVar3 + 0x20),8,*(undefined4 *)((int)this + 0x18));
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar2 = *(int * PTR32 *)(uVar3 + 0x130);
  if ((piVar2 != (int *)0x0) && (piVar2[5] == 8)) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    return 0;
  }
  return 0;
}

/* ref: FUN_0089b610 */
uint F_0089b610(unsigned int gen_a0)
{
  GEN_ENTER(0x89b610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined * this_01;
  uint uVar3;
  int iVar4;
  uint * this_02;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar3 + 0x130);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar3 != '\0') {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    }
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = *(undefined * PTR32 *)(uVar3 + 0x20);
  if (this_00 != (undefined *)0x0) {
    iVar4 = *(int *)((int)this + 0x18);
    if (iVar4 == 0) {
      iVar4 = 4;
    }
    uVar2 = *(undefined4 *)((int)this + 8);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    if (*(int *)((int)this_00 + 0xc) == 6) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
      this_01 = *(undefined * PTR32 *)(uVar3 + 0x130);
      if ((this_01 != (undefined *)0x0) && (*(int *)((int)this_01 + 0x14) == 2)) {
        F_00869af0(this_01,*(undefined4 *)((int)this_01 + 0x10),0,0,1);
      }
    }
    *(undefined4 *)((int)this_00 + 0x10) = 0xdf3;
    *(undefined4 *)((int)this_00 + 0xc) = 8;
    *(int *)((int)this_00 + 0x18) = iVar4;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
    piVar1 = *(int * PTR32 *)(uVar3 + 0x130);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      if ((char)uVar3 != '\0') {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      }
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(int *)(gen_frame + 0xc)) = iVar4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),2);
    (*(undefined1 *)(gen_frame + 0x24)) = 1;
    F_0086e5a0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),4);
    this_02 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 3;
    do {
      this_02 = this_02 + -2;
      uVar3 = F_005a2670(this_02);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_0089b770 */
byte F_0089b770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x89b770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))(*(int * PTR32 *)((int)this + -8))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x1a);
  pvVar6 = *(undefined * PTR32 *)((int)this + 4);
  if ((pvVar6 != (undefined *)0x0) && (uVar3 != 0)) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 10: ;
    case 0xb: ;
      if (*(int *)((int)this + 0x24) == 0) {
        F_00a80010(pvVar6,-(uint)(this != (undefined *)0xc) & (uint)this,2);
        return 0;
      }
      uVar1 = **(uint * PTR32 *)(uVar3 + 0x20);
      pvVar6 = (undefined *)((int)this + -0xc);
      uVar5 = F_00774e80(pvVar6);
      uVar4 = F_00870940(pvVar6);
      **(uint * PTR32 *)(uVar3 + 0x20) = uVar1 | uVar5 | uVar4;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
      if (param_1 == 10) {
        F_00829250(pvVar6);
        return 0;
      }
      break;
    case 0xc: ;
    case 0x11: ;
      F_00a7e370(pvVar6,0);
      return 0;
    case 0xd: ;
    case 0x12: ;
      uVar1 = **(uint * PTR32 *)(uVar3 + 0x20);
      uVar5 = F_007d97c0((undefined *)((int)this + -0xc));
      **(uint * PTR32 *)(uVar3 + 0x20) = uVar1 | uVar5;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
      break;
    case 0xe: ;
      break;
    case 0xf: ;
    case 0x10: ;
      uVar1 = **(uint * PTR32 *)(uVar3 + 0x20);
      pvVar6 = (undefined *)((int)this + -0xc);
      uVar5 = F_00774e80(pvVar6);
      uVar4 = F_008701c0(pvVar6);
      **(uint * PTR32 *)(uVar3 + 0x20) = uVar1 | uVar5 | uVar4;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
      if (param_1 == 0xf) {
        F_00829250(pvVar6);
        return 0;
      }
      break;
    default: ;
      goto switchD_0089b7b1_default;
    }
  }
switchD_0089b7b1_default: ;
  return 0;
}

/* ref: Client::UI2::Agent::AgentQuestJournal::vf2 */
uint F_0089b8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x89b8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0086fd80(this,0);
  return uVar1;
}

/* ref: FUN_0089ba40 */
uint F_0089ba40(unsigned int gen_a0)
{
  GEN_ENTER(0x89ba40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x40);
  if (0 < (int)uVar1) {
    uVar1 = F_0089b8c0(this,1,uVar1);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentRecipeNote::vf5 */
uint F_0089ba50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x89ba50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar2 != '\0') {
    bVar1 = F_00870f10(this + 0x10);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar3 + 0x70))(piVar3,*(undefined4 *)(this + 8),0);
      uVar2 = F_008713d0(this);
    }
  }
  return uVar2;
}

/* ref: FUN_0089ba90 */
byte F_0089ba90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89ba90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  if ((param_2 < 1) || (((byte)*param_1 & 0xf) != 3)) goto LAB_0089bb52;
  switch((unsigned int)(uintptr_t)(param_1[1])) {
  case 0: ;
    if (*(int *)((int)this + 0xa8c) != 0) {
      if (*(char *)((int)this + 0x19b4) == '\0') {
        uVar1 = F_00a3ae20(&REFG(undefined, 0x14a4230));
        uVar1 = F_00a3ae50(&REFG(undefined, 0x14a4230),uVar1 + *(int *)((int)this + 0xa8c));
        if (uVar1 == 0) {
          F_0043f8b0(0x14);
          uVar2 = 0x2e1;
          goto LAB_0089bb31;
        }
      }
      else {
        uVar1 = F_00a3ae20(&REFG(undefined, 0x14a4230));
        uVar1 = F_00a3ae50(&REFG(undefined, 0x14a4230),uVar1 - *(int *)((int)this + 0xa8c));
        if (uVar1 == 0) {
          F_0043f8b0(0x14);
          uVar2 = 0x2e0;
LAB_0089bb31: ;
          this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))
                                      (*(int * PTR32 *)((int)this + 4))));
          F_0046a630(this_00,uVar2);
        }
      }
    }
  default: ;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined1 *)((int)this + 0x19b4) = 1;
    *(undefined4 *)((int)this + 0xa8c) = 0;
LAB_0089bb52: ;
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    *(undefined4 *)((int)this + 0x14) = 0;
    return 1;
  case 2: ;
    *(undefined4 *)((int)this + 0xa8c) = 0;
    *(bool *)((int)this + 0x19b4) = *(char *)((int)this + 0x19b4) == '\0';
    F_00871f60(this);
    break;
  case 3: ;
    if ((1 < param_2) && (((byte)param_1[2] & 0xf) == 4)) {
      *(undefined4 *)((int)this + 0xa8c) = param_1[3];
      F_00871f60(this);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_0089bbd0 */
uint F_0089bbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x89bbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined4 uVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  uint * puVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = *(undefined * PTR32 *)(uVar4 + 0x20);
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    if ((char)param_1 != '\0') {
      iVar6 = *(int *)((int)this + 0xaa0);
      uVar1 = *(undefined4 *)((int)this + 0x19ac);
      if (*(int *)((int)this_00 + 0xc) == 6) {
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
        pvVar2 = *(undefined * PTR32 *)(uVar4 + 0x130);
        if ((pvVar2 != (undefined *)0x0) && (*(int *)((int)pvVar2 + 0x14) == 2)) {
          F_00869af0(pvVar2,*(undefined4 *)((int)pvVar2 + 0x10),0,0,1);
        }
      }
      *(undefined4 *)((int)this_00 + 0x10) = 0xdf6;
      *(undefined4 *)((int)this_00 + 0xc) = 7;
      *(undefined4 *)((int)this_00 + 0x18) = 4;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
      piVar3 = *(int * PTR32 *)(uVar4 + 0x130);
      if (piVar3 != (int *)0x0) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
        if ((char)uVar4 != '\0') {
          ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
        }
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(undefined4 *)(gen_frame + 0xc)) = 4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),2);
      (*(bool *)(gen_frame + 0x24)) = iVar6 == 0;
      F_0086e5a0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),4);
      puVar5 = &(*(uint *)(gen_frame + 0x28));
      iVar6 = 3;
      do {
        puVar5 = puVar5 + -2;
        uVar4 = F_005a2670(puVar5);
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar4;
    }
    uVar1 = *(undefined4 *)((int)this + 8);
    if (*(int *)((int)this_00 + 0xc) == 6) {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
      pvVar2 = *(undefined * PTR32 *)(uVar4 + 0x130);
      if ((pvVar2 != (undefined *)0x0) && (*(int *)((int)pvVar2 + 0x14) == 2)) {
        F_00869af0(pvVar2,*(undefined4 *)((int)pvVar2 + 0x10),0,0,1);
      }
    }
    *(undefined4 *)((int)this_00 + 0x10) = 0xdf5;
    *(undefined4 *)((int)this_00 + 0xc) = 4;
    *(undefined4 *)((int)this_00 + 0x18) = 4;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
    piVar3 = *(int * PTR32 *)(uVar4 + 0x130);
    if (piVar3 != (int *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
      if ((char)uVar4 != '\0') {
        ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
      }
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),2);
    (*(bool *)(gen_frame + 0x24)) = false;
    F_0086e5a0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),4);
    puVar5 = &(*(uint *)(gen_frame + 0x28));
    iVar6 = 3;
    do {
      puVar5 = puVar5 + -2;
      uVar4 = F_005a2670(puVar5);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_0089bdf0 */
uint F_0089bdf0(unsigned int gen_a0)
{
  GEN_ENTER(0x89bdf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = *(undefined * PTR32 *)(uVar2 + 0x20);
  if (this_00 != (undefined *)0x0) {
    F_0089aef0(this_00,4,4);
    F_0089aef0(this_00,7,4);
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x130);
  if (piVar1 != (int *)0x0) {
    if (piVar1[5] == 6) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
    if (piVar1[5] == 7) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0089be60 */
uint F_0089be60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x89be60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x130);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar2 != '\0') {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
      return uVar2;
    }
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = *(undefined * PTR32 *)(uVar2 + 0x20);
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_0089ad50(this_00,*(undefined4 *)((int)this_00 + 0xc),4,param_1,1);
  }
  return uVar2;
}

/* ref: FUN_0089bec0 */
uint F_0089bec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x89bec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x560];
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  byte bVar5;
  undefined * pvVar6;
  undefined * pvVar7;
  undefined * this;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint * puVar11;
  int * piVar12;
  undefined * puVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  (*(uint *)(gen_frame + 0x558)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x55c);
  *(undefined4 *)((int)in_ecx + 0xaa0) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  pvVar6 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x2ee2);
  if (pvVar6 != (undefined *)0x0) {
    (*(uint *)(gen_frame + 0xc)) = *(int *)((int)pvVar6 + 0xc);
    (*(uint *)(gen_frame + 0x8)) = 0;
    if (0 < (int)(*(uint *)(gen_frame + 0xc))) {
      do {
        pvVar7 = (undefined *)F_00a37da0(pvVar6,(*(uint *)(gen_frame + 0x8)));
        if ((pvVar7 != (undefined *)0x0) &&
           ((*(char *)((int)pvVar7 + 6) != '\0' || (*(int *)((int)pvVar7 + 8) != 0)))) {
          puVar11 = ((uint *)GEN_TOP((*(int *)((int)in_ecx + 0xaa0) * 0xc0 + 0xaa4 + (int)in_ecx)));
          if (*(char *)((int)pvVar7 + 6) == '\0') {
            uVar8 = *(uint *)((int)pvVar7 + 8);
            if ((*(byte *)((int)pvVar7 + 0x14) & 1) != 0) {
              uVar8 = uVar8 + 1000000;
            }
          }
          else {
            this = (undefined *)F_00a3a860(pvVar7);
            uVar8 = F_0046e5e0(this);
          }
          *puVar11 = uVar8;
          puVar11[1] = 0xffffffff;
          F_0042aca0(puVar11 + 2);
          uVar8 = F_00a3a8a0(pvVar7);
          puVar11[0x17] = uVar8;
          uVar8 = F_00a367d0(&REFG(undefined, 0x14a4230),(*(uint *)(gen_frame + 0x8)) & 0xffff);
          piVar12 = *(int * PTR32 *)((int)in_ecx + 4);
          uVar9 = F_00a3a8a0(pvVar7);
          iVar10 = uVar9 * uVar8;
          uVar15 = 0x39f;
          pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar12 + 0x18))(piVar12)));
          uVar8 = F_00461bb0(pvVar7,uVar15,iVar10);
          F_0042e430(puVar11 + 0x18,uVar8);
          *(undefined2 *)((int)puVar11 + 0xb6) = 0;
          *(undefined2 *)(puVar11 + 0x2d) = (undefined2)(*(uint *)(gen_frame + 0x8));
          bVar5 = F_007daab0(puVar11);
          *(byte *)((int)puVar11 + 0xbd) = bVar5;
          if (bVar5 == 0) {
            *(undefined1 *)((int)in_ecx + 0x19b6) = 1;
          }
          *(int *)((int)in_ecx + 0xaa0) = *(int *)((int)in_ecx + 0xaa0) + 1;
        }
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
      } while ((int)(*(uint *)(gen_frame + 0x8)) < (int)(*(uint *)(gen_frame + 0xc)));
    }
  }
  uVar15 = *(undefined4 *)((int)in_ecx + 0xaa0);
  uVar16 = REFG(undefined4, 0x108cc50);
  pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x18))))
                             (*(int * PTR32 *)((int)in_ecx + 4),0x7fc)));
  uVar8 = F_00461c60(pvVar6,uVar15,(*(uint *)(gen_frame + 0xc)),uVar16);
  F_0042cc20(((undefined1 *)(gen_frame + 0x18)),uVar8,in_edi);
  F_0042b630(((undefined1 *)(gen_frame + 0x6c)));
  (*(uint *)(gen_frame + 0xc)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x8)) = 0xffffffff;
  puVar13 = &REFG(undefined, 0x10be0e7);
  puVar11 = ((uint *)(gen_frame + 0xc0));
  iVar10 = 0x92;
  do {
    *puVar11 = 0;
    puVar11 = puVar11 + 2;
    iVar10 = iVar10 + -1;
  } while (-1 < iVar10);
  F_005a2710(((undefined1 *)(gen_frame + 0xe8)),3);
  (*(int *)(gen_frame + 0xec)) = 0;
  if ((*(byte *)((int)in_ecx + 0x1c) & 1) != 0) {
    uVar18 = 0;
    uVar16 = 0;
    uVar15 = 0x3b4;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x18))))(*(int * PTR32 *)((int)in_ecx + 4))));
    puVar13 = (undefined *)F_0043bd00(pvVar6,uVar15,uVar16,uVar18);
    iVar10 = *(int *)((int)in_ecx + 0x20);
    (*(char *)(gen_frame + 0x13)) = '\0';
    if ((iVar10 != 0) && (*(byte *)(iVar10 + 8) != 0)) {
      (*(uint *)(gen_frame + 0xc)) = (uint)*(byte *)(iVar10 + 9);
      puVar11 = (uint *)F_00ab3990((uint)*(byte *)(iVar10 + 8));
      if (puVar11 != (uint *)0x0) {
        (*(uint *)(gen_frame + 0x8)) = puVar11[1];
        puVar13 = ((undefined *)GEN_TOP(((*puVar11 & 0xffffff) + (int)puVar11)));
      }
      (*(char *)(gen_frame + 0x13)) = '\x05' - *((char *)GEN_TOP((*(int *)((int)in_ecx + 0x20) + 10)));
      uVar15 = *((undefined4 *)GEN_TOP((*(int *)((int)in_ecx + 0x20) + 0xc)));
      iVar10 = (int)(*(char *)(gen_frame + 0x13));
      uVar16 = 0x3c9;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x18))))(*(int * PTR32 *)((int)in_ecx + 4))))
      ;
      uVar8 = F_00461c60(pvVar6,uVar16,iVar10,uVar15);
      F_0042e430(((undefined1 *)(gen_frame + 0x6c)),uVar8);
      uVar8 = F_0042a990(((undefined1 *)(gen_frame + 0x6c)));
      F_005a2710(((undefined1 *)(gen_frame + 0xe0)),6);
      (*(uint *)(gen_frame + 0xe4)) = uVar8;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0xe8)),3);
    (*(int *)(gen_frame + 0xec)) = (int)(*(char *)(gen_frame + 0x13));
  }
  uVar8 = F_0042a990(((undefined1 *)(gen_frame + 0x18)));
  F_005a2710(((uint *)(gen_frame + 0xc0)),6);
  ((uint *)(gen_frame + 0xc0))[1] = uVar8;
  F_005a2710(((undefined1 *)(gen_frame + 0xc8)),3);
  (*(uint *)(gen_frame + 0xcc)) = (*(uint *)(gen_frame + 0xc));
  F_005a2710(((undefined1 *)(gen_frame + 0xd0)),3);
  (*(uint *)(gen_frame + 0xd4)) = (*(uint *)(gen_frame + 0x8));
  F_005a2710(((undefined1 *)(gen_frame + 0xd8)),6);
  (*(undefined * PTR32 *)(gen_frame + 0xdc)) = puVar13;
  uVar15 = *(undefined4 *)((int)in_ecx + 0xaa0);
  F_005a2710(((undefined1 *)(gen_frame + 0xf0)),3);
  (*(undefined4 *)(gen_frame + 0xf4)) = uVar15;
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (0 < *(int *)((int)in_ecx + 0xaa0)) {
    puVar11 = ((uint *)(gen_frame + 0x104));
    iVar10 = (int)in_ecx + 0xaac;
    do {
      uVar8 = *(uint *)(iVar10 + -4);
      F_005a2710(puVar11 + -3,3);
      puVar11[-2] = uVar8;
      uVar9 = F_0042a990(iVar10);
      F_005a2710(puVar11 + -1,6);
      uVar8 = *(uint *)(iVar10 + 0x54);
      *puVar11 = uVar9;
      F_005a2710(puVar11 + 1,3);
      puVar11[2] = uVar8;
      uVar8 = F_0042a990(iVar10 + 0x58);
      F_005a2710(puVar11 + 3,6);
      sVar2 = *(short *)(iVar10 + 0xac);
      puVar11[4] = uVar8;
      F_005a2710(puVar11 + 5,3);
      sVar3 = *(short *)(iVar10 + 0xae);
      puVar11[6] = (int)sVar2;
      F_005a2710(puVar11 + 7,3);
      iVar4 = *(int *)(iVar10 + 0xb0);
      cVar1 = *(char *)(iVar10 + 0xb4);
      puVar11[8] = (int)sVar3;
      F_005a2710(puVar11 + 9,4);
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
      puVar11[10] = (uint)(cVar1 != '\0') | iVar4 * 2;
      iVar10 = iVar10 + 0xc0;
      puVar11 = puVar11 + 0xe;
    } while ((int)(*(uint *)(gen_frame + 0xc)) < *(int *)((int)in_ecx + 0xaa0));
  }
  if (*(int *)((int)in_ecx + 0x19ac) == 0) {
    if (*(int *)((int)in_ecx + 0x14) != 3) {
      uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x48))))(*(int * PTR32 *)((int)in_ecx + 4));
      pvVar6 = *(undefined * PTR32 *)(uVar8 + 0x20);
      if (pvVar6 != (undefined *)0x0) {
        F_0089aef0(pvVar6,4,4);
        F_0089aef0(pvVar6,7,4);
      }
      uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x48))))(*(int * PTR32 *)((int)in_ecx + 4));
      piVar12 = *(int * PTR32 *)(uVar8 + 0x130);
      if (piVar12 != (int *)0x0) {
        if (piVar12[5] == 6) {
          ((code *)*(gen_code32 *)(*piVar12 + 0xc))(piVar12);
        }
        if (piVar12[5] == 7) {
          ((code *)*(gen_code32 *)(*piVar12 + 0xc))(piVar12);
        }
      }
    }
    uVar19 = 4;
    uVar17 = 0;
    uVar18 = 3;
    puVar11 = ((uint *)(gen_frame + 0xc0));
    uVar16 = 0x93;
    uVar15 = 0x49;
    pvVar6 = in_ecx;
    pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x1c))))(*(int * PTR32 *)((int)in_ecx + 4))));
    uVar8 = F_008668b0(pvVar7,uVar15,uVar16,puVar11,pvVar6,uVar18,uVar17,uVar19);
    *(uint *)((int)in_ecx + 0x19ac) = uVar8;
    if ((*(int *)((int)in_ecx + 0x14) == 4) && (*(int *)((int)in_ecx + 8) == 0)) {
      F_00871e80(in_ecx);
    }
    else if (*(int *)((int)in_ecx + 0x14) == 3) {
      F_0089bbd0(in_ecx,1);
    }
    F_00a6e080(&REFG(undefined, 0x14a9e40),0x32,0,0);
  }
  else {
    piVar12 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x1c))))(*(int * PTR32 *)((int)in_ecx + 4))));
    uVar8 = ((code *)*(gen_code32 *)(*piVar12 + 0x68))(piVar12,*(undefined4 *)((int)in_ecx + 0x19ac));
    if ((char)uVar8 != '\0') {
      piVar12 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x1c))))(*(int * PTR32 *)((int)in_ecx + 4))))
      ;
      ((code *)*(gen_code32 *)(*piVar12 + 0x5c))(piVar12,*(undefined4 *)((int)in_ecx + 0x19ac),0x93,((uint *)(gen_frame + 0xc0)));
    }
  }
  puVar11 = &(*(uint *)(gen_frame + 0x558));
  iVar10 = 0x92;
  do {
    puVar11 = puVar11 + -2;
    F_005a2670(puVar11);
    iVar10 = iVar10 + -1;
  } while (-1 < iVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x6c)));
  uVar14 = F_0042c880(((undefined1 *)(gen_frame + 0x18)));
  F_00c47745((*(uint *)(gen_frame + 0x558)) ^ (uint)(uint)(gen_frame + 0x55c));
  return (uint)uVar14;
}

/* ref: FUN_0089c4a0 */
uint F_0089c4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x89c4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)in_ecx + 0x14);
  if ((uVar1 != 3) && (uVar1 != 4)) {
    if (uVar1 == 2) {
      if (*(int *)((int)in_ecx + 8) == 0) {
        uVar1 = F_00871f60(in_ecx);
        return uVar1;
      }
    }
    else if (uVar1 == 5) {
      uVar1 = F_008722e0(in_ecx);
      return uVar1;
    }
    return uVar1;
  }
  uVar1 = F_0089bec0(in_ecx,in_edi);
  return uVar1;
}

/* ref: FUN_0089c4d0 */
uint F_0089c4d0(unsigned int gen_a0)
{
  GEN_ENTER(0x89c4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (0 < *(int *)((int)this + 0x19ac)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x19ac),0);
    *(undefined4 *)((int)this + 0x19ac) = 0;
  }
  uVar2 = *(uint *)((int)this + 0x14);
  if (uVar2 == 3) {
    uVar2 = F_0089bdf0(this);
    *(undefined4 *)((int)this + 0xaa0) = 0;
    *(undefined4 *)((int)this + 0xa9c) = 0xffffffff;
    return uVar2;
  }
  if (uVar2 == 4) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  *(undefined4 *)((int)this + 0xaa0) = 0;
  *(undefined4 *)((int)this + 0xa9c) = 0xffffffff;
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentReturn::vf1 */
uint F_0089cb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x89cb20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)(this + 8) = 0;
  if ((0 < param_3) && (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
    if (*(int *)(this + 0x28) == 0) {
      F_00872510(this);
    }
    else if ((*(int *)(this + 0x28) == 1) && (REFG(int, 0x1379694) != 0)) {
      F_00ac83b0(&REFG(undefined, 0x14bcf40),1,6,*(undefined4 *)(REFG(int, 0x1379694) + 0x74),0,0,0);
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 1;
      return (uint)param_1;
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_0089cba0 */
uint F_0089cba0(unsigned int gen_a0)
{
  GEN_ENTER(0x89cba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00953db0((undefined *)((int)this + 0x18));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x28) = 3;
  return 0;
}

/* ref: FUN_0089cbd0 */
uint F_0089cbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x89cbd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint param_7 = (uint)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int param_9 = (int)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int iVar1;
  uint uVar2;
  uint * puVar3;
  undefined * this_00;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_3;
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = param_5;
  (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44(param_5,(int)(*(ulonglong *)(gen_frame + 0x20)));
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  (*(int *)(gen_frame + 0x18)) = param_9;
  uVar2 = param_5[4];
  (*(int * PTR32 *)(gen_frame + 0x34)) = param_5 + 1;
  piVar4 = (int *)param_5[1];
  (*(undefined4 *)(gen_frame + 0x1c)) = param_6;
  piVar5 = (int *)0x0;
  if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
    piVar5 = *(int * PTR32 *)*piVar4;
  }
  if (((piVar5 == (int *)0x0) || ((int *)*piVar5 == (int *)0x0)) ||
     (piVar5 = *(int * PTR32 *)*piVar5, piVar5 == (int *)0x0)) {
    (*(int *)(gen_frame + 0x38)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x38)) = *piVar5;
  }
  uVar6 = uVar2;
  if (*(uint *)((*(int *)(gen_frame + 0x38)) + 8) <= uVar2) {
    uVar6 = uVar2 - *(uint *)((*(int *)(gen_frame + 0x38)) + 8);
  }
  if (**((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x38)) + 4) + uVar6 * 4))) + 4))) != 0) {
    piVar5 = (int *)0x0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      piVar5 = *(int * PTR32 *)*piVar4;
    }
    uVar2 = uVar2 + 1;
    if (((piVar5 == (int *)0x0) || ((int *)*piVar5 == (int *)0x0)) ||
       (piVar4 = *(int * PTR32 *)*piVar5, piVar4 == (int *)0x0)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar4;
    }
    if (*(uint *)(iVar7 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar7 + 8);
    }
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar7 + 4) + uVar2 * 4)));
    if (*(int *)piVar4[1] != 0) {
      uVar9 = *param_5;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = (undefined4 *)uVar9;
      (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44(uVar9,(int)(*(ulonglong *)(gen_frame + 0x20)));
      (*(int *)(gen_frame + 0x38)) = 0;
      (*(uint *)(gen_frame + 0x30)) = 0;
      F_0042b630(((undefined1 *)(gen_frame + 0x40)));
      piVar4 = (*(int * PTR32 *)(gen_frame + 0x34));
      (*(undefined1 *)(gen_frame + 0x3f)) = 1;
      switch((unsigned int)(uintptr_t)(uVar9)) {
      case 0: ;
      case 1: ;
      case 10: ;
      case 0xb: ;
      case 0xc: ;
      case 0xd: ;
      case 0xe: ;
      case 0x16: ;
      case 0x17: ;
      case 0x18: ;
      case 0x21: ;
      case 0x22: ;
      case 0x23: ;
        uVar2 = F_00481720((*(int * PTR32 *)(gen_frame + 0x34)),5);
        (*(int *)(gen_frame + 0x38)) = **(int * PTR32 *)(uVar2 + 4);
        break;
      case 2: ;
      case 0x12: ;
      case 0x1c: ;
      case 0x1f: ;
        uVar2 = F_00481720((*(int * PTR32 *)(gen_frame + 0x34)),3);
        (*(int *)(gen_frame + 0x38)) = **(int * PTR32 *)(uVar2 + 4);
        uVar2 = F_00481720(piVar4,4);
        uVar9 = **(undefined4 * PTR32 *)(uVar2 + 4);
        if ((((*(int *)(gen_frame + 0x38)) != 1) || (uVar2 = F_00ab1ed0(uVar9), uVar2 == 0)) ||
           (*(char *)(uVar2 + 0x1c) != '\x01')) {
          F_00775f30((*(int *)(gen_frame + 0x38)),uVar9,&(*(uint *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x40)));
        }
        uVar2 = F_00481720((*(int * PTR32 *)(gen_frame + 0x34)),5);
        (*(int *)(gen_frame + 0x38)) = **(int * PTR32 *)(uVar2 + 4);
        break;
      case 3: ;
      case 0x1e: ;
      case 0x25: ;
        break;
      default: ;
        (*(undefined1 *)(gen_frame + 0x3f)) = 0;
        uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x40)));
        uVar2 = CONCAT31((int3)(uVar8 >> 8),(*(undefined1 *)(gen_frame + 0x3f)));
        goto LAB_0089cfa3;
      case 7: ;
      case 8: ;
      case 0x1a: ;
      case 0x1b: ;
      case 0x1d: ;
        uVar2 = F_00481720((*(int * PTR32 *)(gen_frame + 0x34)),5);
        puVar3 = (uint *)F_00ab1ff0(**(undefined4 * PTR32 *)(uVar2 + 4));
        if (puVar3 != (uint *)0x0) {
          (*(uint *)(gen_frame + 0x30)) = (uint)(ushort)puVar3[2];
          if (*(char *)((int)puVar3 + 0xe) != '\0') {
            uVar2 = F_00481720((*(int * PTR32 *)(gen_frame + 0x34)),6);
            if (0 < **(int * PTR32 *)(uVar2 + 4)) {
              (*(uint *)(gen_frame + 0x30)) = ((*(uint *)(gen_frame + 0x30)) - 1) + **(int * PTR32 *)(uVar2 + 4);
            }
          }
          if (((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) == (undefined4 *)0x7) || ((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) == (undefined4 *)0x8)) {
            uVar2 = *puVar3;
            uVar9 = 0x3d9;
LAB_0089ce74: ;
            iVar7 = (uVar2 & 0xffffff) + (int)puVar3;
            this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 4) + 0x18))))
                                        (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 4))));
            uVar2 = F_00461190(this_00,uVar9,iVar7);
          }
          else {
            if (((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) == (undefined4 *)0x1a) || ((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) == (undefined4 *)0x1b)) {
              uVar2 = *puVar3;
              uVar9 = 0x3da;
              goto LAB_0089ce74;
            }
            uVar2 = (*puVar3 & 0xffffff) + (int)puVar3;
          }
          F_0042e430(((undefined1 *)(gen_frame + 0x40)),uVar2);
        }
        break;
      case 9: ;
        uVar2 = F_00481720((*(int * PTR32 *)(gen_frame + 0x34)),6);
        (*(int *)(gen_frame + 0x38)) = **(int * PTR32 *)(uVar2 + 4);
      }
      uVar2 = F_00481720((*(int * PTR32 *)(gen_frame + 0x34)),0);
      iVar7 = **(int * PTR32 *)(uVar2 + 4);
      F_0046fe00((undefined *)((*(int *)(gen_frame + 0x18)) + 0x10),((undefined1 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x1c)));
      (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)F_00431490(((undefined1 *)(gen_frame + 0x0)),param_7,param_8);
      iVar1 = (int)(*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4));
      (*(ulonglong *)(gen_frame + 0x20)) = F_00760bb0((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)),iVar7);
      piVar4 = ((int *)GEN_TOP((*(int *)(param_1 + 0x20) + param_2 * 4)));
      if (*piVar4 != iVar1) {
        *piVar4 = iVar1;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4 + param_2 * 4))) != iVar7) {
        *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4 + param_2 * 4))) = iVar7;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      puVar3 = ((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 8 + param_2 * 4)));
      if ((undefined *)*puVar3 != (*(undefined * PTR32 *)(gen_frame + 0x2c))) {
        *puVar3 = (uint)(*(undefined * PTR32 *)(gen_frame + 0x2c));
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      uVar2 = F_0043e110((*(int *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)));
      puVar3 = ((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc + param_2 * 4)));
      if (*puVar3 != uVar2) {
        *puVar3 = uVar2;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10 + param_2 * 4))) != (*(int *)(gen_frame + 0x38))) {
        *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10 + param_2 * 4))) = (*(int *)(gen_frame + 0x38));
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x14 + param_2 * 4))) != (*(uint *)(gen_frame + 0x30))) {
        *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x14 + param_2 * 4))) = (*(uint *)(gen_frame + 0x30));
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x18 + param_2 * 4))) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x18 + param_2 * 4))) = 0;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      if ((undefined4 *)*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c + param_2 * 4))) != (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4))) {
        *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c + param_2 * 4))) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4));
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      piVar4 = ((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20 + param_2 * 4)));
      if (*piVar4 != (int)(*(ulonglong *)(gen_frame + 0x20))) {
        *piVar4 = (int)(*(ulonglong *)(gen_frame + 0x20));
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      uVar11 = 0;
      uVar10 = 1;
      uVar9 = 0;
      uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x40)));
      F_00431250((*(undefined * PTR32 *)(gen_frame + 0x14)),param_4,uVar2,uVar9,uVar10,uVar11);
      uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x40)));
      uVar2 = CONCAT31((int3)(uVar8 >> 8),(*(undefined1 *)(gen_frame + 0x3f)));
      goto LAB_0089cfa3;
    }
  }
  uVar2 = (uint)piVar4 & 0xffffff00;
LAB_0089cfa3: ;
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return uVar2;
}

/* ref: FUN_0089d000 */
uint F_0089d000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x89d000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  int param_6 = (int)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 * puVar1;
  uint uVar2;
  uint * puVar3;
  undefined * pvVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int * piVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar2 = param_5[4];
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(int * PTR32 *)(gen_frame + 0x10)) = param_5;
  piVar12 = param_5 + 1;
  piVar7 = (int *)*piVar12;
  piVar5 = (int *)0x0;
  if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
    piVar5 = *(int * PTR32 *)*piVar7;
  }
  if (((piVar5 == (int *)0x0) || ((int *)*piVar5 == (int *)0x0)) ||
     (piVar5 = *(int * PTR32 *)*piVar5, piVar5 == (int *)0x0)) {
    iVar11 = 0;
  }
  else {
    iVar11 = *piVar5;
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)iVar11;
  }
  uVar6 = uVar2;
  if (*(uint *)(iVar11 + 8) <= uVar2) {
    uVar6 = uVar2 - *(uint *)(iVar11 + 8);
  }
  if (**((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar11 + 4) + uVar6 * 4))) + 4))) != 0) {
    piVar5 = (int *)0x0;
    if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
      piVar5 = *(int * PTR32 *)*piVar7;
    }
    uVar2 = uVar2 + 1;
    if (((piVar5 == (int *)0x0) || ((int *)*piVar5 == (int *)0x0)) ||
       (piVar7 = *(int * PTR32 *)*piVar5, piVar7 == (int *)0x0)) {
      iVar11 = 0;
    }
    else {
      iVar11 = *piVar7;
    }
    if (*(uint *)(iVar11 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar11 + 8);
    }
    piVar7 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar11 + 4) + uVar2 * 4))) + 4)));
    if (*piVar7 != 0) {
      F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c) ^ (uint)(uint)(gen_frame + 0x7c));
      return (uint)piVar7 & 0xffffff00;
    }
  }
  iVar11 = *param_5;
  (*(undefined1 *)(gen_frame + 0x23)) = 1;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
  F_0042b630(((undefined1 *)(gen_frame + 0x24)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x10be11e);
  switch((unsigned int)(uintptr_t)(iVar11)) {
  case 2: ;
  case 4: ;
  case 6: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0x12: ;
  case 0x16: ;
  case 0x17: ;
  case 0x18: ;
  case 0x1c: ;
  case 0x1f: ;
  case 0x20: ;
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
    uVar2 = F_00481720(piVar12,3);
    iVar8 = **(int * PTR32 *)(uVar2 + 4);
    uVar2 = F_00481720(piVar12,4);
    uVar14 = **(undefined4 * PTR32 *)(uVar2 + 4);
    if (((iVar8 != 1) || (uVar2 = F_00ab1ed0(uVar14), uVar2 == 0)) ||
       (*(char *)(uVar2 + 0x1c) != '\x01')) {
      F_00775f30(iVar8,uVar14,&(*(int * PTR32 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x24)));
    }
  case 0: ;
  case 1: ;
    uVar2 = F_00481720(piVar12,5);
    (*(int *)(gen_frame + 0xc)) = **(int * PTR32 *)(uVar2 + 4);
    uVar2 = F_00481720(piVar12,6);
    (*(int *)(gen_frame + 0x1c)) = **(int * PTR32 *)(uVar2 + 4);
    break;
  case 3: ;
  case 5: ;
  case 0x10: ;
  case 0x11: ;
  case 0x1e: ;
  case 0x25: ;
    break;
  case 7: ;
  case 8: ;
  case 0x19: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1d: ;
  case 0x24: ;
    uVar2 = F_00481720(piVar12,5);
    puVar3 = (uint *)F_00ab1ff0(**(undefined4 * PTR32 *)(uVar2 + 4));
    if (puVar3 != (uint *)0x0) {
      (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)(uint)(ushort)puVar3[2];
      if (*(char *)((int)puVar3 + 0xe) != '\0') {
        uVar2 = F_00481720(piVar12,6);
        if (0 < **(int * PTR32 *)(uVar2 + 4)) {
          (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x10)) + **(int * PTR32 *)(uVar2 + 4) + -1)));
        }
      }
      if ((iVar11 == 7) || (iVar11 == 8)) {
        uVar2 = *puVar3;
        uVar14 = 0x3d9;
LAB_0089d24c: ;
        iVar8 = (uVar2 & 0xffffff) + (int)puVar3;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 4) + 0x18))))
                                   (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 4))));
        uVar2 = F_00461190(pvVar4,uVar14,iVar8);
      }
      else {
        if ((iVar11 == 0x1a) || (iVar11 == 0x1b)) {
          uVar2 = *puVar3;
          uVar14 = 0x3da;
          goto LAB_0089d24c;
        }
        uVar2 = (*puVar3 & 0xffffff) + (int)puVar3;
      }
      F_0042e430(((undefined1 *)(gen_frame + 0x24)),uVar2);
    }
    break;
  case 9: ;
    uVar2 = F_00481720(piVar12,6);
    (*(int *)(gen_frame + 0xc)) = **(int * PTR32 *)(uVar2 + 4);
    uVar2 = F_00481720(piVar12,7);
    (*(int *)(gen_frame + 0x1c)) = **(int * PTR32 *)(uVar2 + 4);
    break;
  default: ;
    (*(undefined1 *)(gen_frame + 0x23)) = 0;
    goto LAB_0089d486;
  case 0x13: ;
  case 0x14: ;
  case 0x15: ;
    uVar2 = F_00481720(piVar12,5);
    (*(int *)(gen_frame + 0xc)) = **(int * PTR32 *)(uVar2 + 4);
  }
  piVar7 = (int *)0x0;
  if (((int *)*piVar12 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*piVar12, puVar1 != (undefined4 *)0x0)) {
    piVar7 = (int *)*puVar1;
  }
  uVar2 = param_5[4] + 2;
  if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
     (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar7;
  }
  if (*(uint *)(iVar8 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar8 + 8);
  }
  iVar8 = **((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar8 + 4) + uVar2 * 4))) + 4)));
  iVar9 = (*(int *)(gen_frame + 0x1c));
  switch((unsigned int)(uintptr_t)(iVar8)) {
  case 1: ;
    if ((*(int *)(gen_frame + 0x1c)) < 1) goto switchD_0089d2ae_default;
    uVar14 = 0x2da;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 4) + 0x18))))
                               (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 4),0x2da,(*(int *)(gen_frame + 0x1c)))));
    goto LAB_0089d303;
  case 2: ;
    piVar7 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 4);
    uVar14 = 0x2d8;
    goto LAB_0089d2fc;
  case 3: ;
    uVar14 = 0x2d9;
    break;
  case 4: ;
    uVar14 = 0x2d7;
    break;
  default: ;
    goto switchD_0089d2ae_default;
  }
  piVar7 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 4);
LAB_0089d2fc: ;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x18))(piVar7)));
LAB_0089d303: ;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)F_00461bb0(pvVar4,uVar14,iVar9);
switchD_0089d2ae_default: ;
  uVar2 = param_5[4];
  piVar12 = (int *)*piVar12;
  piVar7 = (int *)0x0;
  if ((piVar12 != (int *)0x0) && ((undefined4 *)*piVar12 != (undefined4 *)0x0)) {
    piVar7 = *(int * PTR32 *)*piVar12;
  }
  if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
     (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
    iVar9 = 0;
  }
  else {
    iVar9 = *piVar7;
  }
  uVar6 = uVar2;
  if (*(uint *)(iVar9 + 8) <= uVar2) {
    uVar6 = uVar2 - *(uint *)(iVar9 + 8);
  }
  piVar7 = (int *)0x0;
  if ((piVar12 != (int *)0x0) && ((undefined4 *)*piVar12 != (undefined4 *)0x0)) {
    piVar7 = *(int * PTR32 *)*piVar12;
  }
  uVar2 = uVar2 + 1;
  if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
     (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
    iVar10 = 0;
  }
  else {
    iVar10 = *piVar7;
  }
  if (*(uint *)(iVar10 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar10 + 8);
  }
  uVar2 = F_00760c50(iVar11,**((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar9 + 4) + uVar6 * 4))) + 4))),
                       **((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar10 + 4) + uVar2 * 4))) + 4))));
  piVar7 = ((int *)GEN_TOP((*(int *)(param_1 + 0x20) + param_2 * 4)));
  if (*piVar7 != 1) {
    *piVar7 = 1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4 + param_2 * 4))) != iVar11) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4 + param_2 * 4))) = iVar11;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 8 + param_2 * 4))) != (*(int *)(gen_frame + 0xc))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 8 + param_2 * 4))) = (*(int *)(gen_frame + 0xc));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc + param_2 * 4))) != (*(int *)(gen_frame + 0x1c))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc + param_2 * 4))) = (*(int *)(gen_frame + 0x1c));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10 + param_2 * 4))) != iVar8) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10 + param_2 * 4))) = iVar8;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x14 + param_2 * 4))) != uVar2) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x14 + param_2 * 4))) = uVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x18 + param_2 * 4))) != (*(int * PTR32 *)(gen_frame + 0x10))) {
    *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x18 + param_2 * 4))) = (*(int * PTR32 *)(gen_frame + 0x10));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  piVar7 = ((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c + param_2 * 4)));
  if (*piVar7 != param_6) {
    *piVar7 = param_6;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  piVar7 = ((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20 + param_2 * 4)));
  if (*piVar7 != param_7) {
    *piVar7 = param_7;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uVar16 = 0;
  uVar15 = 1;
  uVar14 = 0;
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x24)));
  F_00431250(param_3,param_4,uVar2,uVar14,uVar15,uVar16);
  F_00431250(param_3,param_4 + 1,(*(undefined * PTR32 *)(gen_frame + 0x18)),0,1,0);
LAB_0089d486: ;
  uVar13 = F_0042c880(((undefined1 *)(gen_frame + 0x24)));
  uVar2 = CONCAT31((int3)(uVar13 >> 8),(*(undefined1 *)(gen_frame + 0x23)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar2;
}

/* ref: FUN_0089d5a0 */
uint F_0089d5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x89d5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  uint * this_02;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = *(undefined * PTR32 *)(uVar1 + 0x20);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  if (*(int *)((int)this_00 + 0xc) == 6) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
    this_01 = *(undefined * PTR32 *)(uVar1 + 0x130);
    if ((this_01 != (undefined *)0x0) && (*(int *)((int)this_01 + 0x14) == 2)) {
      F_00869af0(this_01,*(undefined4 *)((int)this_01 + 0x10),0,0,1);
    }
  }
  *(undefined4 *)((int)this_00 + 0x10) = 0xdf9;
  *(undefined4 *)((int)this_00 + 0xc) = 5;
  *(undefined4 *)((int)this_00 + 0x18) = 4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),2);
  (*(undefined1 *)(gen_frame + 0x24)) = 1;
  F_0086e5a0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),4);
  this_02 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 3;
  do {
    this_02 = this_02 + -2;
    uVar1 = F_005a2670(this_02);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_0089d6a0 */
uint F_0089d6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x89d6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar1 = F_008999a0(*(undefined * PTR32 *)(uVar1 + 0x14c));
  return uVar1;
}

/* ref: FUN_0089d6c0 */
unsigned int F_0089d6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x89d6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x14) == 0) {
    return 0;
  }
  uVar2 = F_00ae0db0(&REFG(undefined, 0x14c0920),0x28);
  *(uint *)((int)this + 0x18) = uVar2;
  if (uVar2 == 0) {
    return 0;
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x14))) {
  case 1: ;
    uVar2 = F_007db120(this);
    if ((char)uVar2 == '\0') {
      return 0;
    }
    *(undefined4 *)((int)this + 0x14) = 2;
    break;
  case 2: ;
    break;
  case 3: ;
    goto switchD_0089d6e8_caseD_3;
  case 4: ;
    goto switchD_0089d6e8_caseD_4;
  default: ;
    goto switchD_0089d6e8_default;
  }
  bVar1 = F_00776c60(this);
  if (bVar1 != 0) {
    *(undefined4 *)((int)this + 0x14) = 3;
switchD_0089d6e8_caseD_3: ;
    bVar1 = F_007db3c0(this);
    if (bVar1 != 0) {
      *(undefined4 *)((int)this + 0x14) = 4;
switchD_0089d6e8_caseD_4: ;
      F_008729e0(this,param_1);
    }
  }
switchD_0089d6e8_default: ;
  return 0;
}

/* ref: Client::UI2::Agent::AgentTeleport::vf1 */
uint F_0089d750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x89d750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  uint * this_00;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = param_1;
  if (((0 < param_3) && ((*param_2 & 0xf) != 0)) && (*(int *)(param_2 + 4) < 0)) {
    piVar1 = *(int * PTR32 *)(this + 0x24);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0x1c)),param_2,param_3,param_4);
      F_005a2670(((undefined1 *)(gen_frame + 0x1c)));
    }
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    this[0x2d] = (undefined1)0x0;
    *(undefined4 *)(this + 0x24) = 0;
    goto LAB_0089d9aa;
  }
  if (param_4 != 0) {
    if (param_4 == 1) {
      if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
        pvVar2 = (undefined *)F_00a72de0(&REFG(undefined, 0x14ab428),0);
        puVar4 = (undefined4 *)F_00926e10(pvVar2,*(undefined4 *)(this + 0x28));
        F_00a6ac90(*puVar4);
      }
      this[0x2d] = (undefined1)0x0;
    }
    else if (param_4 == 2) {
      if ((*param_2 & 0xf) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(param_2 + 4);
      }
      *(undefined4 *)(this + 0x28) = uVar8;
      uVar3 = F_00872f20(this,uVar8);
      if ((char)uVar3 != '\0') goto LAB_0089d9aa;
    }
    else if (param_4 == 3) {
      if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
        (*(int *)(gen_frame + 0x18)) = REFG(int, 0x1379694);
        (*(uint *)(gen_frame + 0x20)) = F_00ab2690((uint)(byte)this[0x2c]);
        if (((*(int *)(gen_frame + 0x18)) != 0) && (piVar1 = *(int * PTR32 *)(this + 0x24), piVar1 != (int *)0x0)) {
          (*(undefined4 *)(gen_frame + 0x28)) = 0;
          (*(undefined4 *)(gen_frame + 0x30)) = 0;
          (*(undefined4 *)(gen_frame + 0x38)) = 0;
          (*(undefined4 *)(gen_frame + 0x40)) = 0;
          if ((*(int *)((*(int *)(gen_frame + 0x18)) + 0xe4) == 0) ||
             (*(uint *)&REFG(undefined2, 0x1379c78) == *(ushort *)((*(uint *)(gen_frame + 0x20)) + 0x28))) {
            ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0x8)),param_2,param_3,3);
            F_005a2670(((undefined1 *)(gen_frame + 0x8)));
          }
          else {
            uVar10 = 0;
            uVar8 = 0;
            if (REFG(undefined1, 0x1338ad4) < 2) {
              uVar6 = 0x6d;
            }
            else {
              uVar6 = 0x6c;
            }
            pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
            uVar3 = F_0043bd00(pvVar2,uVar6,uVar8,uVar10);
            F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),6);
            uVar6 = 0;
            (*(uint *)(gen_frame + 0x2c)) = uVar3;
            uVar10 = 0;
            uVar8 = 3;
            pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
            uVar3 = F_0043bd00(pvVar2,uVar8,uVar10,uVar6);
            F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
            uVar6 = 0;
            (*(uint *)(gen_frame + 0x34)) = uVar3;
            uVar10 = 0;
            uVar8 = 4;
            pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
            uVar3 = F_0043bd00(pvVar2,uVar8,uVar10,uVar6);
            F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),6);
            (*(uint *)(gen_frame + 0x3c)) = uVar3;
            F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),3);
            uVar8 = *(undefined4 *)(this + 0x24);
            uVar11 = 4;
            uVar9 = 0;
            uVar7 = 0;
            puVar4 = &(*(undefined4 *)(gen_frame + 0x28));
            (*(undefined4 *)(gen_frame + 0x44)) = 0;
            uVar6 = 4;
            uVar10 = 9;
            pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
            F_008668b0(pvVar2,uVar10,uVar6,puVar4,uVar8,uVar7,uVar9,uVar11);
          }
          this_00 = &(*(uint *)(gen_frame + 0x48));
          iVar5 = 3;
          do {
            this_00 = this_00 + -2;
            F_005a2670(this_00);
            iVar5 = iVar5 + -1;
          } while (-1 < iVar5);
          this[0x2c] = (undefined1)0x0;
          *(undefined4 *)(this + 0x24) = 0;
          goto LAB_0089d9a3;
        }
      }
      else {
        piVar1 = *(int * PTR32 *)(this + 0x24);
        if (piVar1 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0x10)),param_2,param_3,3);
          F_005a2670(((undefined1 *)(gen_frame + 0x10)));
        }
      }
      this[0x2c] = (undefined1)0x0;
      *(undefined4 *)(this + 0x24) = 0;
    }
  }
LAB_0089d9a3: ;
  *(undefined4 *)(this + 8) = 0;
LAB_0089d9aa: ;
  puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
  *(*(undefined4 * PTR32 *)(gen_frame + 0x24)) = 2;
  *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x24)) + 1) = 1;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (uint)puVar4;
}

/* ref: Client::UI2::Agent::AgentTeleport::vf2 */
unsigned int F_0089d9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x89d9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    return 0;
  }
  if ((this[0x2d] == (undefined1)0x0) && ((REFG(undefined1, 0x14b4ec0) & 0x10) != 0)) {
    bVar1 = F_00ac7930(&REFG(undefined, 0x14bcf40),1,5);
    if (bVar1 != 0) {
      F_00872c90(this);
      return 0;
    }
    uVar3 = 0x688;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x28))))(*(int * PTR32 *)(this + 4))));
    F_0046a630(this_00,uVar3);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentTeleport::vf5 */
uint F_0089da40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x89da40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((char)uVar1 != '\0') && (this[0x2e] == (undefined1)0x2)) {
    uVar1 = F_00a3ace0(&REFG(undefined, 0x14a4230));
    if (*(uint *)(this + 0x30) != uVar1) {
      uVar1 = F_00872c90(this);
    }
  }
  return uVar1;
}

/* ref: FUN_0089da70 */
uint F_0089da70(unsigned int gen_a0)
{
  GEN_ENTER(0x89da70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined4 uVar1;
  undefined * this_01;
  int * piVar2;
  uint uVar3;
  uint * this_02;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  iVar4 = *(int *)(uVar3 + 0x28);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x1e0) = 0x5f;
    *(int *)(iVar4 + 0x1e4) = (int)this + 0xc;
    *(undefined4 *)(iVar4 + 0x1e8) = 0;
    *(undefined1 *)(iVar4 + 0x1ec) = 0;
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = *(undefined * PTR32 *)(uVar3 + 0x20);
  if (this_00 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)((int)this + 8);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    if (*(int *)((int)this_00 + 0xc) == 6) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
      this_01 = *(undefined * PTR32 *)(uVar3 + 0x130);
      if ((this_01 != (undefined *)0x0) && (*(int *)((int)this_01 + 0x14) == 2)) {
        F_00869af0(this_01,*(undefined4 *)((int)this_01 + 0x10),0,0,1);
      }
    }
    *(undefined4 *)((int)this_00 + 0x10) = 0xdf4;
    *(undefined4 *)((int)this_00 + 0xc) = 2;
    *(undefined4 *)((int)this_00 + 0x18) = 4;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
    piVar2 = *(int * PTR32 *)(uVar3 + 0x130);
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
      if ((char)uVar3 != '\0') {
        ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      }
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),2);
    (*(undefined1 *)(gen_frame + 0x24)) = 0;
    F_0086e5a0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),4);
    this_02 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 3;
    do {
      this_02 = this_02 + -2;
      uVar3 = F_005a2670(this_02);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_0089dbc0 */
unsigned int F_0089dbc0(unsigned int gen_a0)
{
  GEN_ENTER(0x89dbc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  iVar1 = *(int *)(uVar3 + 0x28);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1e0) = 0;
    *(undefined4 *)(iVar1 + 0x1e4) = 0;
    *(undefined4 *)(iVar1 + 0x1e8) = 0;
    *(undefined1 *)(iVar1 + 0x1ec) = 0;
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  if (*(undefined * PTR32 *)(uVar3 + 0x20) != (undefined *)0x0) {
    F_0089aef0(*(undefined * PTR32 *)(uVar3 + 0x20),2,4);
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar2 = *(int * PTR32 *)(uVar3 + 0x130);
  if ((piVar2 != (int *)0x0) && (piVar2[5] == 4)) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    return 0;
  }
  return 0;
}

/* ref: FUN_0089dc30 */
uint F_0089dc30(unsigned int gen_a0)
{
  GEN_ENTER(0x89dc30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined * this_01;
  uint uVar3;
  uint * this_02;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar3 + 0x130);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar3 != '\0') {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    }
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = *(undefined * PTR32 *)(uVar3 + 0x20);
  if (this_00 != (undefined *)0x0) {
    uVar2 = *(undefined4 *)((int)this + 8);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    if (*(int *)((int)this_00 + 0xc) == 6) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
      this_01 = *(undefined * PTR32 *)(uVar3 + 0x130);
      if ((this_01 != (undefined *)0x0) && (*(int *)((int)this_01 + 0x14) == 2)) {
        F_00869af0(this_01,*(undefined4 *)((int)this_01 + 0x10),0,0,1);
      }
    }
    *(undefined4 *)((int)this_00 + 0x10) = 0xdf4;
    *(undefined4 *)((int)this_00 + 0xc) = 2;
    *(undefined4 *)((int)this_00 + 0x18) = 4;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
    piVar1 = *(int * PTR32 *)(uVar3 + 0x130);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      if ((char)uVar3 != '\0') {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      }
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),2);
    (*(undefined1 *)(gen_frame + 0x24)) = 1;
    F_0086e5a0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),4);
    this_02 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 3;
    do {
      this_02 = this_02 + -2;
      uVar3 = F_005a2670(this_02);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_0089dd90 */
uint F_0089dd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89dd90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 == '\0') {
    F_00a6aeb0(&REFG(undefined, 0x14ab440));
    *(undefined1 *)((int)this + 0x22) = 1;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined2 *)((int)this + 0x20) = 0x100;
    *(undefined4 *)((int)this + 0x1c) = 0;
    if (param_1 == 0) {
      F_008737b0(this);
    }
    else if (param_1 == 1) {
      F_008738a0(this);
      *(undefined4 *)((int)this + 0x18) = 1;
      *(uint *)((int)this + 0xc) = param_2;
      return param_2;
    }
    *(int *)((int)this + 0x18) = param_1;
    *(uint *)((int)this + 0xc) = param_2;
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCabinet::vf2 */
uint F_0089de00(unsigned int gen_a0)
{
  GEN_ENTER(0x89de00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 == '\0') {
    F_00a6aeb0(&REFG(undefined, 0x14ab440));
    this[0x22] = (undefined1)0x1;
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined2 *)(this + 0x20) = 0x100;
    *(undefined4 *)(this + 0x1c) = 0;
    uVar1 = F_008737b0(this);
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  return uVar1;
}

/* ref: FUN_0089de40 */
uint F_0089de40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89de40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x28);
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x28) = 0;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  uVar3 = 0;
  if (param_1 != 0) {
    *(int *)((int)this + 0x1c) = param_1;
    uVar3 = *(uint *)((int)this + 0xc);
    *(undefined4 *)((int)this + 0x20) = param_2;
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0: ;
      *(undefined4 *)((int)this + 0x10) = 6;
      uVar3 = F_00873ac0(this);
      return uVar3;
    case 2: ;
    case 4: ;
    case 7: ;
      *(undefined4 *)((int)this + 0x10) = 7;
      uVar3 = F_00873cf0(this);
    }
  }
  return uVar3;
}

/* ref: FUN_0089ded0 */
uint F_0089ded0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89ded0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    *(int *)((int)this + 0x1c) = param_1;
    *(undefined4 *)((int)this + 0x20) = param_2;
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined2 *)(puVar1 + 6) = 1;
    *(undefined4 *)((int)this + 0x10) = 4;
    uVar2 = F_00874050(this);
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentContentsTimer::vf2 */
uint F_0089df20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x89df20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  uVar2 = F_00ab0350();
  uVar1 = 0;
  if (uVar2 != 0) {
    if (REFG(char, 0x14ab29a) != '\0') {
      this[0x454] = (undefined1)0x1;
      uVar1 = F_00b9e270(&REFG(undefined, 0x14b3134),this + 0xc);
      return uVar1;
    }
    uVar1 = F_00875e80(this,0);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentContentsTimer::vf5 */
unsigned int F_0089df70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x89df70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if ((*(int *)(this + 8) != 0) && ((param_1 & 0x1f) == 0)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,*(undefined4 *)(this + 8));
    if ((char)uVar2 != '\0') {
      F_00875e80(this,1);
    }
  }
  return 0;
}

/* ref: FUN_0089dfb0 */
byte F_0089dfb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x89dfb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == 0x16) {
    if ((*(int *)((int)this + -4) != 0) || (*(char *)((int)this + 0x448) != '\0')) {
      F_00875e80((undefined *)((int)this + -0xc),1);
    }
    *(undefined1 *)((int)this + 0x448) = 0;
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentGrandCompanySupply::vf2 */
unsigned int F_0089dff0(unsigned int gen_a0)
{
  GEN_ENTER(0x89dff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x10) != 0) {
    F_00876c80(this,this,0);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentShop::vf1 */
uint F_0089e000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x89e000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined * pAVar2;
  code * pcVar3;
  byte bVar4;
  undefined1 AVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  uint * this_00;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(char *)(gen_frame + 0xe)) = '\0';
  (*(char *)(gen_frame + 0xf)) = '\0';
  if ((*param_2 & 0xf) == 0) {
    (*(uint *)(gen_frame + 0x8)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x8)) = param_2[1];
  }
  uVar8 = (*(uint *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  if (param_4 != 0) {
    if (param_4 == 1) {
      if (((*param_2 & 0xf) == 0) || (param_2[1] == 0)) {
        uVar1 = *(undefined4 *)(this + 0x40);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
        (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
        uVar1 = *(undefined4 *)(this + 0x44);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
        (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
        (*(char *)(gen_frame + 0xf)) = '\x01';
      }
      (*(char *)(gen_frame + 0xe)) = '\x01';
      *(undefined4 *)(this + 0x1c) = 0;
    }
    goto LAB_0089e1d1;
  }
  *(uint *)(this + 0x40) = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) == 0x403) {
    if ((param_2[4] & 0xf) == 0) {
      AVar5 = (undefined1)0x0;
    }
    else {
      AVar5 = SUB41(param_2[5],0);
    }
    this[0x4a] = AVar5;
    if (this[0x48] == (undefined1)0x2) {
      (*(char *)(gen_frame + 0xf)) = 1;
    }
    (*(char *)(gen_frame + 0xf)) = this[0x48] == (undefined1)0x2;
    F_007de190(this);
    if ((*(char *)(gen_frame + 0xf)) == '\0') goto LAB_0089e1d1;
  }
  else {
    if ((*(uint *)(gen_frame + 0x8)) == 0x404) {
      if (this[0x54] != (undefined1)0x0) {
        F_0077a340(this);
      }
      iVar9 = *(int *)(this + 0x30);
      if (iVar9 != 0) {
        if (iVar9 - 0x17U < 4) {
          uVar8 = F_00a3c240(&REFG(undefined, 0x14a4230),iVar9);
        }
        else {
          uVar8 = F_00a41080(&REFG(undefined, 0x14a4230),iVar9,1,1,1);
          uVar6 = F_00a41080(&REFG(undefined, 0x14a4230),iVar9,0,1,1);
          uVar8 = uVar8 + uVar6;
        }
        F_007de230(this,uVar8);
        uVar8 = (*(uint *)(gen_frame + 0x8));
      }
      F_007de190(this);
      goto LAB_0089e1d1;
    }
    if ((int)(*(uint *)(gen_frame + 0x8)) < 0) {
      (*(char *)(gen_frame + 0xf)) = '\x01';
      (*(char *)(gen_frame + 0xe)) = '\x01';
    }
    else {
      if (this[0x48] != (undefined1)0x3) {
        if (*(int *)(this + 0x1c) != 0) goto LAB_0089e1d1;
        if ((param_2[2] & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = param_2[3];
        }
        *(uint *)(this + 0x44) = uVar6;
        bVar4 = F_0077a630(this,(*(uint *)(gen_frame + 0x8)));
        if (bVar4 != 0) {
          bVar4 = F_00877ca0(this);
          if (bVar4 == 0) {
            piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
            ((code *)*(gen_code32 *)(*piVar7 + 0x70))(piVar7,*(undefined4 *)(this + 8),1);
            *(undefined4 *)(this + 0x18) = 1;
          }
          goto LAB_0089e1d1;
        }
      }
      (*(char *)(gen_frame + 0xf)) = '\x01';
    }
  }
  if (0 < param_3) {
    iVar9 = (int)&(*(undefined4 *)(gen_frame + 0x10)) - (int)param_2;
    (*(int *)(gen_frame + 0x4)) = iVar9;
    do {
      if ((*param_2 & 0xf) != 0) {
        F_00596cd0((byte *)(iVar9 + (int)param_2),param_2);
        iVar9 = (*(int *)(gen_frame + 0x4));
      }
      param_2 = param_2 + 2;
      param_3 = param_3 + -1;
      uVar8 = (*(uint *)(gen_frame + 0x8));
    } while (param_3 != 0);
  }
LAB_0089e1d1: ;
  if ((((this[0x53] == (undefined1)0x0) && ((*(char *)(gen_frame + 0xf)) != '\0')) &&
      (pAVar2 = *(undefined * PTR32 *)(this + 0xc), pAVar2 != (undefined *)0x0)) && (pAVar2 != this)) {
    this[0x53] = (undefined1)0x1;
    ((code *)*(gen_code32 *)(*(int *)pAVar2 + 4))(pAVar2,((byte *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),3,0);
    if (((*(char *)(gen_frame + 0xe)) == '\0') && ((((byte *)(gen_frame + 0x0))[0] & 0xf) == 2)) {
      (*(char *)(gen_frame + 0xe)) = (char)(*(int *)(gen_frame + 0x4));
    }
    if (uVar8 == 0x403) {
      F_0082b1c0(this,1);
      F_007de190(this);
    }
    this[0x53] = (undefined1)0x0;
    F_005a2670(((byte *)(gen_frame + 0x0)));
  }
  if (((*(char *)(gen_frame + 0xe)) != '\0') && (param_4 == 0)) {
    pcVar3 = *(gen_code32 *)(*(int *)this + 0xc);
    *(undefined4 *)(this + 8) = 0;
    (*pcVar3)(this);
  }
  *param_1 = 2;
  *(char *)(param_1 + 1) = (*(char *)(gen_frame + 0xe));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar9 = 2;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentShop::vf5 */
uint F_0089e2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x89e2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  undefined3 extraout_var = 0;
  int iVar7;
  uint local_14;
  int local_10;
  int local_c;
  
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x68))(piVar5,*(undefined4 *)(this + 8));
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  iVar1 = *(int *)(this + 0x30);
  if (iVar1 != 0) {
    if (iVar1 - 0x17U < 4) {
      uVar4 = F_00a3c240(&REFG(undefined, 0x14a4230),iVar1);
    }
    else {
      uVar4 = F_00a41080(&REFG(undefined, 0x14a4230),iVar1,1,1,1);
      uVar6 = F_00a41080(&REFG(undefined, 0x14a4230),iVar1,0,1,1);
      uVar4 = uVar4 + uVar6;
    }
    if (uVar4 != *(uint *)(this + 0x3c)) {
      F_007de230(this,uVar4);
    }
  }
  bVar2 = false;
  local_14 = 0;
  if (*(int *)(this + 0x28) != 0) {
    local_10 = 0;
    do {
      iVar7 = *(int *)(this + 0x20) + local_10;
      iVar1 = *(int *)(iVar7 + 0xb8);
      if (iVar1 - 0x17U < 4) {
        uVar4 = F_00a3c240(&REFG(undefined, 0x14a4230),iVar1);
      }
      else {
        uVar4 = F_00a41080(&REFG(undefined, 0x14a4230),iVar1,1,1,1);
        uVar6 = F_00a41080(&REFG(undefined, 0x14a4230),iVar1,0,1,1);
        uVar4 = uVar4 + uVar6;
      }
      if (uVar4 != *(uint *)(iVar7 + 0xb4)) {
        *(uint *)(iVar7 + 0xb4) = uVar4;
        bVar2 = true;
      }
      local_10 = local_10 + 0xcc;
      local_14 = local_14 + 1;
    } while (local_14 < *(uint *)(this + 0x28));
  }
  uVar4 = 0;
  local_14 = 0;
  if (*(int *)(this + 0x2c) != 0) {
    local_c = 0;
    do {
      iVar7 = *(int *)(this + 0x24) + local_c;
      iVar1 = *(int *)(iVar7 + 0xb8);
      if (iVar1 != 0) {
        if (iVar1 - 0x17U < 4) {
          uVar4 = F_00a3c240(&REFG(undefined, 0x14a4230),iVar1);
        }
        else {
          uVar4 = F_00a41080(&REFG(undefined, 0x14a4230),iVar1,1,1,1);
          uVar6 = F_00a41080(&REFG(undefined, 0x14a4230),iVar1,0,1,1);
          uVar4 = uVar4 + uVar6;
        }
        if (uVar4 != *(uint *)(iVar7 + 0xb4)) {
          *(uint *)(iVar7 + 0xb4) = uVar4;
          bVar2 = true;
        }
      }
      local_c = local_c + 0xcc;
      uVar4 = local_14 + 1;
      local_14 = uVar4;
    } while (uVar4 < *(uint *)(this + 0x2c));
  }
  if (this[0x54] == (undefined1)0x0) {
    if (!bVar2) goto LAB_0089e44e;
  }
  else {
    F_0077a340(this);
  }
  uVar4 = F_007de190(this);
LAB_0089e44e: ;
  if (*(int *)(this + 0x18) == 1) {
    bVar3 = F_00877ca0(this);
    uVar4 = CONCAT31(extraout_var,bVar3);
    if (bVar3 != 0) {
      piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x70))(piVar5,*(undefined4 *)(this + 8),0);
      *(undefined4 *)(this + 0x18) = 0;
    }
  }
  return uVar4;
}

/* ref: Client::UI2::Agent::AgentCutSceneReplay::vf1 */
uint F_0089e490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x89e490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x11270];
  undefined1 AVar1;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  int * piVar6;
  undefined4 uVar7;
  uint uVar8;
  ushort * puVar9;
  
  (*(uint *)(gen_frame + 0x11268)) = 0x89e49d;
  (*(uint *)(gen_frame + 0x11268)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10020)) = param_1;
  (*(undefined1 *)(gen_frame + 0x10027)) = 0;
  if (param_4 != 0) goto switchD_0089e4e3_default;
  if ((*param_2 & 0xf) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(param_2 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar7)) {
  case 0: ;
    puVar4 = ((uint *)(gen_frame + 0x10028));
    iVar2 = 0x247;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 2;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    uVar8 = F_008780d0(this,0x248,((uint *)(gen_frame + 0x10028)));
    uVar3 = F_007de670(this,0x248,((uint *)(gen_frame + 0x10028)));
    F_005a2710(((uint *)(gen_frame + 0x10028)),4);
    AVar1 = this[0x20];
    ((uint *)(gen_frame + 0x10028))[1] = uVar8 | uVar3;
    F_005a2710(((undefined1 *)(gen_frame + 0x11260)),4);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) & ~(uVar8 | uVar3);
    (*(uint *)(gen_frame + 0x11264)) = (uint)(byte)AVar1;
    this[0x20] = (undefined1)0x0;
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar6 + 0x5c))(piVar6,*(undefined4 *)(this + 8),0x248,((uint *)(gen_frame + 0x10028)));
    puVar4 = &(*(uint *)(gen_frame + 0x11268));
    iVar2 = 0x247;
    do {
      puVar4 = puVar4 + -2;
      F_005a2670(puVar4);
      iVar2 = iVar2 + -1;
      param_1 = (*(undefined4 * PTR32 *)(gen_frame + 0x10020));
    } while (-1 < iVar2);
    break;
  case 1: ;
    if ((param_2[8] & 0xf) == 0) {
      *(undefined4 *)(this + 0x18) = 0;
      F_007de5d0(this);
    }
    else {
      *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_2 + 0xc);
      F_007de5d0(this);
    }
    break;
  case 2: ;
    if (param_3 == 2) {
      if ((param_2[8] & 0xf) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_2 + 0xc);
        if (0xfffffc < iVar2) break;
      }
      if (*(int *)(this + 0x24) != iVar2) {
        *(int *)(this + 0x24) = iVar2;
        *(undefined4 *)(this + 0x1c) = 0;
        F_007de620(this);
      }
    }
    break;
  case 3: ;
    if (param_3 != 2) break;
    if ((param_2[8] & 0xf) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(param_2 + 0xc);
    }
    *(undefined4 *)(this + 0x1c) = uVar7;
    this[0x20] = (undefined1)0x1;
    if (*(int *)(this + 0x34) != 0) {
      (*(undefined4 *)(gen_frame + 0x10018)) = 0;
      puVar4 = (uint *)F_00a67930(*(undefined4 *)(this + 0x10));
      puVar5 = (uint *)F_00a67920(*(undefined4 *)(this + 0x10));
      uVar8 = 0;
      (*(undefined4 *)(gen_frame + 0x10014)) = 0;
      if (*puVar5 != 0) {
        (*(ushort * PTR32 *)(gen_frame + 0x1001c)) = (ushort *)puVar5[2];
        puVar9 = (*(ushort * PTR32 *)(gen_frame + 0x1001c));
        do {
          if (*puVar4 == (uint)*puVar9) {
            (*(undefined4 *)(gen_frame + 0x10014)) = *((undefined4 *)GEN_TOP(((*(ushort * PTR32 *)(gen_frame + 0x1001c)) + (uVar8 * 0x47 + *(int *)(this + 0x1c)) * 2 + 0x5c)));
            break;
          }
          uVar8 = uVar8 + 1;
          puVar9 = puVar9 + 0x8e;
          (*(undefined4 *)(gen_frame + 0x10014)) = (*(undefined4 *)(gen_frame + 0x10018));
        } while (uVar8 < *puVar5);
      }
      (*(undefined4 *)(gen_frame + 0x10010)) = 3;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 4))))(*(int * PTR32 *)(this + 0x34),((undefined1 *)(gen_frame + 0x10008)),&(*(undefined4 *)(gen_frame + 0x10010)),1,0);
      F_005a2670(((undefined1 *)(gen_frame + 0x10008)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x10010)));
    }
    param_1 = (*(undefined4 * PTR32 *)(gen_frame + 0x10020));
    if (*(int *)(this + 8) == 0) break;
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6,*(undefined4 *)(this + 8),0);
LAB_0089e714: ;
    *(undefined4 *)(this + 8) = 0;
    break;
  case 0xfffffffe: ;
    (*(undefined1 *)(gen_frame + 0x10027)) = 1;
    goto LAB_0089e714;
  case 0xffffffff: ;
    F_007de530(this);
    if (*(int *)(this + 8) == 0) break;
    (*(undefined1 *)(gen_frame + 0x10027)) = 1;
    goto LAB_0089e714;
  }
switchD_0089e4e3_default: ;
  *(undefined1 *)(param_1 + 1) = (*(undefined1 *)(gen_frame + 0x10027));
  *param_1 = 2;
  F_00c47745((*(uint *)(gen_frame + 0x11268)) ^ (uint)(uint)(gen_frame + 0x0));
  return (uint)param_1;
}

/* ref: FUN_0089e760 */
uint F_0089e760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x89e760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x11250];
  uint uVar1;
  uint extraout_EAX = 0;
  uint * puVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x11248)) = 0x89e76d;
  (*(uint *)(gen_frame + 0x11248)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    uVar1 = 0;
    uVar3 = param_1 - 10;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 10: ;
    case 0xb: ;
      *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 1;
      puVar2 = ((uint *)(gen_frame + 0x10008));
      iVar5 = 0x247;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 2;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      uVar3 = F_008780d0((undefined *)((int)this + -0xc),0x248,((uint *)(gen_frame + 0x10008)));
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))(*(int * PTR32 *)((int)this + -8))));
      uVar1 = ((code *)*(gen_code32 *)(*piVar4 + 0x68))(piVar4,*(undefined4 *)((int)this + -4));
      if (((char)uVar1 != '\0') && (uVar3 != 0)) {
        *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & ~uVar3;
        F_005a2710(((uint *)(gen_frame + 0x10008)),4);
        ((uint *)(gen_frame + 0x10008))[1] = uVar3;
        piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))(*(int * PTR32 *)((int)this + -8))));
        ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + -4),0x248,((uint *)(gen_frame + 0x10008)));
      }
      if (param_1 == 10) {
        F_007de620((undefined *)((int)this + -0xc));
      }
      puVar2 = &(*(uint *)(gen_frame + 0x11248));
      iVar5 = 0x247;
      do {
        puVar2 = puVar2 + -2;
        uVar3 = F_005a2670(puVar2);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      F_00c47745((*(uint *)(gen_frame + 0x11248)) ^ (uint)(uint)(gen_frame + 0x0));
      return uVar3 & 0xffffff00;
    case 0xc: ;
    case 0x11: ;
      F_00a7e370(*(undefined * PTR32 *)((int)this + 4),1);
      F_00c47745((*(uint *)(gen_frame + 0x11248)) ^ (uint)(uint)(gen_frame + 0x0));
      return extraout_EAX & 0xffffff00;
    case 0xd: ;
    case 0x12: ;
      *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 0x10;
      puVar2 = ((uint *)(gen_frame + 0x10008));
      iVar5 = 0x247;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 2;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      uVar3 = F_007de670((undefined *)((int)this + -0xc),0x248,((uint *)(gen_frame + 0x10008)));
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))(*(int * PTR32 *)((int)this + -8))));
      uVar1 = ((code *)*(gen_code32 *)(*piVar4 + 0x68))(piVar4,*(undefined4 *)((int)this + -4));
      if (((char)uVar1 != '\0') && (uVar3 != 0)) {
        F_005a2710(((uint *)(gen_frame + 0x10008)),4);
        ((uint *)(gen_frame + 0x10008))[1] = uVar3;
        *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & ~uVar3;
        piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))(*(int * PTR32 *)((int)this + -8))));
        ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + -4),0x248,((uint *)(gen_frame + 0x10008)));
      }
      puVar2 = &(*(uint *)(gen_frame + 0x11248));
      iVar5 = 0x247;
      do {
        puVar2 = puVar2 + -2;
        uVar1 = F_005a2670(puVar2);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    case 0xe: ;
    case 0xf: ;
    case 0x10: ;
      uVar3 = uVar1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x11248)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar3 & 0xffffff00;
}

/* ref: FUN_0089e970 */
uint F_0089e970(unsigned int gen_a0)
{
  GEN_ENTER(0x89e970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x11250];
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined * pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x11248)) = 0x89e97d;
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  (*(uint *)(gen_frame + 0x11248)) = uVar1;
  if ((*(int *)((int)this + 0x10) != 0) && (*(int *)((int)this + 8) == 0)) {
    *(undefined4 *)((int)this + 0x28) = 0x11;
    puVar2 = ((uint *)(gen_frame + 0x10008));
    iVar5 = 0x247;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    uVar1 = F_0077a730(this,0x248,((uint *)(gen_frame + 0x10008)));
    uVar3 = F_008780d0(this,0x248,((uint *)(gen_frame + 0x10008)));
    uVar4 = F_007de670(this,0x248,((uint *)(gen_frame + 0x10008)));
    F_005a2710(((undefined1 *)(gen_frame + 0x10128)),4);
    (*(undefined4 *)(gen_frame + 0x1012c)) = 0;
    F_005a2710(((uint *)(gen_frame + 0x10008)),4);
    uVar11 = 4;
    uVar10 = 0;
    uVar9 = 0;
    puVar2 = ((uint *)(gen_frame + 0x10008));
    ((uint *)(gen_frame + 0x10008))[1] = uVar1 | uVar3 | uVar4;
    uVar7 = 0x248;
    uVar6 = 0xc9;
    pvVar8 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_008668b0(this_00,uVar6,uVar7,puVar2,pvVar8,uVar9,uVar10,uVar11);
    *(uint *)((int)this + 8) = uVar1;
    puVar2 = &(*(uint *)(gen_frame + 0x11248));
    iVar5 = 0x247;
    do {
      puVar2 = puVar2 + -2;
      uVar1 = F_005a2670(puVar2);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x11248)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar1;
}

/* ref: FUN_0089ea80 */
byte F_0089ea80(unsigned int gen_a0)
{
  GEN_ENTER(0x89ea80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  uint local_10;
  int local_c;
  
  iVar2 = *(int *)((int)this + 0xc);
  if (iVar2 == *(int *)((int)this + 0x10)) {
    return 0;
  }
  iVar5 = *(int *)((int)this + 0x10);
  for (; iVar2 != iVar5; iVar2 = iVar2 + 0x18) {
    *(undefined1 *)(iVar2 + 0x15) = 0;
  }
  local_10 = 0;
  local_c = 0x29258;
  do {
    uVar3 = F_00a36f30(&REFG(undefined, 0x14a4230),local_10);
    if (((uVar3 != 0) &&
        (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4)),
        local_10 < 4)) && (*(int *)(local_c + uVar4) != 0)) {
      iVar2 = *(int *)(uVar3 + 0xc);
      iVar5 = 0;
      if (0 < iVar2) {
        piVar7 = ((int *)GEN_TOP((*(int *)(local_c + uVar4) + 0x58)));
        do {
          iVar1 = *piVar7;
          if ((iVar1 != 0) && ((*(byte *)((int)piVar7 + 0x15) & 1) != 0)) {
            iVar6 = *(int *)((int)this + 0xc);
            while( true ) {
              if (iVar6 == *(int *)((int)this + 0x10)) {
                return 1;
              }
              if (*(int *)(iVar6 + 4) == iVar1) break;
              iVar6 = iVar6 + 0x18;
            }
            uVar3 = F_00a41080(&REFG(undefined, 0x14a4230),iVar1,0,0,0);
            if (*(uint *)(iVar6 + 0xc) != uVar3) {
              return 1;
            }
            *(undefined1 *)(iVar6 + 0x15) = 1;
          }
          iVar5 = iVar5 + 1;
          piVar7 = piVar7 + 0x1c;
        } while (iVar5 < iVar2);
      }
    }
    local_c = local_c + 4;
    local_10 = local_10 + 1;
    if (0x29264 < local_c) {
      iVar2 = *(int *)((int)this + 0xc);
      while( true ) {
        if (iVar2 == *(int *)((int)this + 0x10)) {
          return 0;
        }
        if (*(char *)(iVar2 + 0x15) == '\0') break;
        iVar2 = iVar2 + 0x18;
      }
      return 1;
    }
  } while( true );
}

/* ref: Client::UI2::Agent::AgentSocial::vf2 */
uint F_0089eba0(unsigned int gen_a0)
{
  GEN_ENTER(0x89eba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 8) != 0) {
    uVar1 = F_00878990(this,0xffffffff);
    return uVar1;
  }
  uVar1 = F_00878990(this,*(undefined4 *)(this + 0xc));
  return uVar1;
}

/* ref: FUN_0089ebc0 */
byte F_0089ebc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89ebc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  byte bVar2;
  
  bVar2 = 1;
  if ((0 < param_2) && (((byte)*param_1 & 0xf) == 3)) {
    iVar1 = param_1[1];
    if (iVar1 == 0) {
      if (*(int *)((int)this + 0xdb4) != 5) {
        F_0087a820(this);
      }
    }
    else if (iVar1 == 1) {
      if (*(int *)((int)this + 0xdb4) != 5) {
        F_0087a620(this);
        return 0;
      }
    }
    else {
      if (iVar1 != 2) {
        *(undefined1 *)((int)this + 0x1019) = 0;
        *(undefined4 *)((int)this + 0xd9c) = 0;
        if (*(int *)((int)this + 0xda0) != *(int *)((int)this + 8)) {
          *(undefined4 *)((int)this + 0x1c) = 0;
        }
        *(undefined4 *)((int)this + 0xda0) = 0;
        F_007df0e0(this);
        return 1;
      }
      if ((((*(int *)((int)this + 0xda0) == *(int *)((int)this + 8)) &&
           (*(int *)((int)this + 0xdb4) != 5)) && (1 < param_2)) && (((byte)param_1[2] & 0xf) == 3))
      {
        iVar1 = param_1[3];
        if (*(int *)((int)this + 0x1c) != 0) {
          bVar2 = F_00438840(*(int *)((int)this + 0x1c));
          if (iVar1 < (int)(uint)bVar2) {
            *(int *)((int)this + 0xdac) = iVar1;
            *(undefined4 *)((int)this + 0xdb4) = 2;
            return 0;
          }
        }
      }
    }
    bVar2 = 0;
  }
  return bVar2;
}

/* ref: FUN_0089ecc0 */
uint F_0089ecc0(unsigned int gen_a0)
{
  GEN_ENTER(0x89ecc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (*(int *)((int)this + 0x1c) != 0) {
    in_EAX = *(int *)((int)this + 0xdb4) - 1;
    switch((unsigned int)(uintptr_t)(in_EAX)) {
    case 0: ;
      uVar3 = F_00ab24a0(*(undefined4 *)((int)this + 0xdb0));
      in_EAX = 0;
      if (uVar3 != 0) {
        uVar5 = *(undefined4 *)((int)this + 0xdb8);
        *(undefined4 *)((int)this + 0xdb8) = 0;
        *(undefined4 *)((int)this + 0xdb4) = uVar5;
        return uVar3;
      }
      break;
    case 1: ;
      uVar3 = F_00438850(*(int *)((int)this + 0x1c),*(undefined4 *)((int)this + 0xdac));
      in_EAX = 0;
      if (uVar3 != 0) {
        uVar3 = *(uint *)(uVar3 + 0x24);
        *(uint *)((int)this + 0xdb0) = uVar3;
        *(undefined4 *)((int)this + 0xdb4) = 3;
        return uVar3;
      }
      break;
    case 2: ;
      uVar3 = F_00ab24a0(*(undefined4 *)((int)this + 0xdb0));
      if (uVar3 == 0) {
        *(undefined4 *)((int)this + 0xdb8) = 3;
        *(undefined4 *)((int)this + 0xdb4) = 1;
        return 0;
      }
      bVar1 = *(byte *)(uVar3 + 0xa6);
      uVar4 = CONCAT31((int3)(uVar3 >> 8),bVar1);
      if (bVar1 == 0) {
        if (*(char *)(uVar3 + 0xa0) == '\x11') {
          uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070),0x12,1);
          uVar4 = uVar2 & 0xffff;
          if ((ushort)uVar2 < (ushort)*(byte *)(uVar3 + 0x9f)) {
            uVar3 = F_0087aaa0(this);
            *(undefined4 *)((int)this + 0xdb4) = 0;
            return uVar3;
          }
        }
        *(undefined4 *)((int)this + 0xdb4) = 4;
        return uVar4;
      }
      uVar5 = *(undefined4 *)((int)this + 0xdb0);
      uVar4 = REFG(int, 0x14a4258) - 1000;
      uVar3 = F_007605d0((uint)bVar1);
      uVar3 = F_00a3ef50(uVar4 & 0xffff,uVar3,uVar5);
      uVar3 = F_0087a8c0(this,uVar3);
      *(uint *)((int)this + 0xdb4) = (-(uint)((uVar3 & 0xff) != 0) & 0xfffffffc) + 4;
      return uVar3;
    case 3: ;
      uVar3 = F_00ab24a0(*(undefined4 *)((int)this + 0xdb0));
      if (uVar3 != 0) {
        uVar3 = F_0087ac10(this);
        *(undefined4 *)((int)this + 0xdb4) = 0;
        return uVar3;
      }
      *(undefined4 *)((int)this + 0xdb8) = 4;
      *(undefined4 *)((int)this + 0xdb4) = 1;
      in_EAX = 0;
    }
  }
  return in_EAX;
}

/* ref: FUN_0089ee60 */
uint F_0089ee60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89ee60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * this_00;
  undefined4 uVar1;
  undefined * this_01;
  int * piVar2;
  uint uVar3;
  uint * this_02;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_007e0610(this);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = *(int * PTR32 *)(uVar3 + 0x20);
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x20))(this_00);
  if ((((char)uVar3 == '\0') || ((char)param_2 != '\0')) || (this_00[3] != 3)) {
    uVar1 = *(undefined4 *)((int)this + 8);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    if (this_00[3] == 6) {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this_00[1] + 0x48))((int *)this_00[1]);
      this_01 = *(undefined * PTR32 *)(uVar3 + 0x130);
      if ((this_01 != (undefined *)0x0) && (*(int *)((int)this_01 + 0x14) == 2)) {
        F_00869af0(this_01,*(undefined4 *)((int)this_01 + 0x10),0,0,1);
      }
    }
    this_00[4] = 0xdf7;
    this_00[3] = 3;
    this_00[6] = 4;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this_00[1] + 0x48))((int *)this_00[1]);
    piVar2 = *(int * PTR32 *)(uVar3 + 0x130);
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
      if ((char)uVar3 != '\0') {
        ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      }
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),2);
    (*(char *)(gen_frame + 0x24)) = (char)param_2;
    F_0086e5a0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),4);
    this_02 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 3;
    do {
      this_02 = this_02 + -2;
      uVar3 = F_005a2670(this_02);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_0089efa0 */
uint F_0089efa0(unsigned int gen_a0)
{
  GEN_ENTER(0x89efa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined4 uVar1;
  undefined * this_01;
  int * piVar2;
  uint uVar3;
  uint * this_02;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar2 = *(int * PTR32 *)(uVar3 + 0x130);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = *(undefined * PTR32 *)(uVar3 + 0x20);
  if ((piVar2 != (int *)0x0) && (uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2), (char)uVar3 != '\0')
     ) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar3;
  }
  uVar3 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)((int)this + 8);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    if (*(int *)((int)this_00 + 0xc) == 6) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
      this_01 = *(undefined * PTR32 *)(uVar3 + 0x130);
      if ((this_01 != (undefined *)0x0) && (*(int *)((int)this_01 + 0x14) == 2)) {
        F_00869af0(this_01,*(undefined4 *)((int)this_01 + 0x10),0,0,1);
      }
    }
    *(undefined4 *)((int)this_00 + 0x10) = 0xdf7;
    *(undefined4 *)((int)this_00 + 0xc) = 3;
    *(undefined4 *)((int)this_00 + 0x18) = 4;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
    piVar2 = *(int * PTR32 *)(uVar3 + 0x130);
    if ((piVar2 != (int *)0x0) &&
       (uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2), (char)uVar3 != '\0')) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),2);
    (*(undefined1 *)(gen_frame + 0x24)) = 1;
    F_0086e5a0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),4);
    this_02 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 3;
    do {
      this_02 = this_02 + -2;
      uVar3 = F_005a2670(this_02);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_0089f110 */
unsigned int F_0089f110(unsigned int gen_a0)
{
  GEN_ENTER(0x89f110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  iVar1 = *(int *)(uVar3 + 0x28);
  *(undefined4 *)(iVar1 + 0x1d0) = 0;
  *(undefined4 *)(iVar1 + 0x1d4) = 0;
  *(undefined4 *)(iVar1 + 0x1d8) = 0;
  *(undefined1 *)(iVar1 + 0x1dc) = 0;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  F_0089aef0(*(undefined * PTR32 *)(uVar3 + 0x20),3,4);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar2 = *(int * PTR32 *)(uVar3 + 0x130);
  if ((piVar2 != (int *)0x0) && (piVar2[5] == 5)) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    return 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentPartyInvite::vf1 */
uint F_0089f180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x89f180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((param_3 == 0) || ((uVar3 = *param_2 & 0xf, uVar3 != 0 && ((int)param_2[1] < 0)))) {
    iVar1 = *(int *)(this + 0x68);
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0x68) = 0;
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
    }
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    switch((unsigned int)(uintptr_t)(param_4)) {
    case 0: ;
      if (this[0x10] == (undefined1)0x0) {
        if ((param_2[4] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = param_2[5];
        }
        F_0087d4a0(this,uVar3,*(undefined4 *)(this + 8));
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
      if ((param_2[4] & 0xf) != 0) {
        F_0087d300(this,param_2[5],*(undefined4 *)(this + 8),0);
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
      F_0087d300(this,0,*(undefined4 *)(this + 8),0);
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    case 1: ;
      if ((uVar3 == 0) || (param_2[1] == 0)) {
        uVar3 = F_0042a990(this + 0x14);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x1c))))(*(int * PTR32 *)(this + 0xc),uVar3,1);
      }
      *(undefined4 *)(this + 0x68) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    case 2: ;
      *(undefined4 *)(this + 0x68) = 0;
      if (((*param_2 & 0xf) != 0) && (param_2[1] != 0)) {
        uVar4 = 0;
        uVar3 = F_0042a990(this + 0x14);
        F_0087d4a0(this,uVar3,uVar4);
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 2;
        return (uint)param_1;
      }
      uVar3 = F_0042a990(this + 0x14);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x1c))))(*(int * PTR32 *)(this + 0xc),uVar3,1);
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    case 3: ;
      if ((uVar3 == 0) || (param_2[1] == 0)) {
        uVar3 = F_0042a990(this + 0x14);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x1c))))(*(int * PTR32 *)(this + 0xc),uVar3,0);
      }
      *(undefined4 *)(this + 0x68) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentPartyMember::vf1 */
uint F_0089f340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x89f340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_01;
  
  switch((unsigned int)(uintptr_t)(param_4)) {
  case 0: ;
    F_007e0b70(this);
    uVar4 = *param_2 & 0xf;
    if ((uVar4 == 0) || (param_2[1] != 3)) {
      if (uVar4 != 0) {
        if ((int)param_2[1] < 0) {
          if (param_2[1] == 0xfffffffe) {
            *(undefined4 *)(this + 8) = 0;
          }
          *param_1 = 2;
          *(undefined1 *)(param_1 + 1) = 1;
          return (uint)param_1;
        }
        if (((uVar4 != 0) && (param_2[1] != 0)) && (param_2[1] == 1)) {
          if (((param_2[2] & 0xf) == 0) || (param_2[3] == 0)) {
            uVar4 = F_004360d0(*(undefined4 *)(this + 0x10),0);
          }
          else {
            uVar4 = F_0044dfa0(*(undefined * PTR32 *)(this + 0x10),param_2[3]);
          }
          if ((uVar4 != 0) && ((*(uint *)(uVar4 + 0x10) & 0xf0000000) == 0x10000000)) {
            uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
            this_00 = *(undefined * PTR32 *)(uVar3 + 0x24);
            F_00769610(this_00);
            F_00769c00(this_01,uVar4,0);
            F_00769800(this_00,uVar4,0);
            if ((REFG(int, 0x1379694) == 0) ||
               (bVar1 = F_00ae09c0(&REFG(undefined, 0x1336e40),*(undefined4 *)(REFG(int, 0x1379694) + 0x74)), bVar1 == 0
               )) {
              *(undefined4 *)((int)this_00 + 0x51c) = 0;
            }
            else {
              *(undefined4 *)((int)this_00 + 0x51c) = 1;
            }
            *(undefined * PTR32 *)((int)this_00 + 0x518) = this + 0xc;
            F_00869700(this_00,*(undefined4 *)(this + 8));
          }
        }
      }
    }
    else {
      if ((param_2[2] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = param_2[3];
        if (4 < uVar4) goto LAB_0089f615;
      }
      switch((unsigned int)(uintptr_t)(uVar4)) {
      default: ;
        if ((param_2[4] & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = param_2[5];
        }
        if ((param_2[6] & 0xf) == 0) {
          F_0044b910(*(undefined * PTR32 *)(this + 0x10),0,uVar4,1);
          *param_1 = 2;
          *(undefined1 *)(param_1 + 1) = 0;
          return (uint)param_1;
        }
        if (-1 < (int)param_2[7]) {
          F_0044b910(*(undefined * PTR32 *)(this + 0x10),param_2[7],uVar4,1);
          *param_1 = 2;
          *(undefined1 *)(param_1 + 1) = 0;
          return (uint)param_1;
        }
        break;
      case 1: ;
        if ((param_2[4] & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = param_2[5];
        }
        if ((param_2[6] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = param_2[7];
        }
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x18))))(*(int * PTR32 *)(this + 0x10));
        if ((int)uVar3 < (int)(uVar2 - 1)) {
          F_0044b910(*(undefined * PTR32 *)(this + 0x10),uVar4,uVar3,1);
          *param_1 = 2;
          *(undefined1 *)(param_1 + 1) = 0;
          return (uint)param_1;
        }
        break;
      case 2: ;
        F_0087d980(this,*(undefined4 *)(this + 8));
        *param_1 = 2;
        *(undefined1 *)(param_1 + 1) = 0;
        return (uint)param_1;
      case 3: ;
        F_0087dae0(this,*(undefined4 *)(this + 8));
        *param_1 = 2;
        *(undefined1 *)(param_1 + 1) = 0;
        return (uint)param_1;
      case 4: ;
        if ((param_2[4] & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = param_2[5];
        }
        if ((param_2[6] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = param_2[7];
        }
        if ((int)uVar4 < (int)uVar3) {
          if ((-1 < (int)uVar4) && ((int)uVar4 < (int)uVar3)) {
            do {
              uVar2 = uVar4 + 1;
              F_0044b910(*(undefined * PTR32 *)(this + 0x10),uVar4,uVar2,(uint)(uVar2 == uVar3));
              uVar4 = uVar2;
            } while ((int)uVar2 < (int)uVar3);
            *param_1 = 2;
            *(undefined1 *)(param_1 + 1) = 0;
            return (uint)param_1;
          }
        }
        else if ((-1 < (int)uVar3) && ((int)uVar3 < (int)uVar4)) {
          do {
            uVar2 = uVar4 - 1;
            F_0044b910(*(undefined * PTR32 *)(this + 0x10),uVar2,uVar4,(uint)(uVar2 == uVar3));
            uVar4 = uVar2;
          } while ((int)uVar3 < (int)uVar2);
          *param_1 = 2;
          *(undefined1 *)(param_1 + 1) = 0;
          return (uint)param_1;
        }
      }
    }
LAB_0089f615: ;
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 0;
    return (uint)param_1;
  case 1: ;
    if ((((*param_2 & 0xf) == 0) || (param_2[1] == 0)) && (*(int *)(this + 0x10) != 0)) {
      uVar4 = F_0042a990(this + 0x18);
      F_00445a80(uVar4);
    }
    break;
  case 2: ;
    if ((((*param_2 & 0xf) == 0) || (param_2[1] == 0)) && (*(int *)(this + 0x10) != 0)) {
      uVar4 = F_0042a990(this + 0x18);
      F_00445960(uVar4);
    }
    break;
  case 3: ;
    if ((((*param_2 & 0xf) == 0) || (param_2[1] == 0)) && (*(int *)(this + 0x10) != 0)) {
      F_004459f0();
    }
    break;
  case 4: ;
    if ((((*param_2 & 0xf) == 0) || (param_2[1] == 0)) && (*(int *)(this + 0x10) != 0)) {
      F_00445b10();
    }
    break;
  default: ;
    goto switchD_0089f352_default;
  }
  *(undefined4 *)(this + 0x14) = 0;
switchD_0089f352_default: ;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_0089f6f0 */
byte F_0089f6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89f6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  undefined4 * puVar2;
  byte bVar3;
  byte bVar4;
  
  bVar4 = 1;
  if ((0 < param_2) && (((byte)*param_1 & 0xf) == 3)) {
    switch((unsigned int)(uintptr_t)(param_1[1])) {
    case 0: ;
      F_0087ddb0(this,(int)this + 0x18);
    default: ;
      *(undefined4 *)((int)this + 0x14) = 0;
      break;
    case 1: ;
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x14))))(*(int * PTR32 *)((int)this + 4))));
      puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
      F_0077c0f0((undefined *)((int)this + 0x18),*puVar2);
      F_0077c440(this,0xffffffff);
      return 0;
    case 2: ;
      bVar4 = 0;
      if (((4 < param_2) && (((byte)param_1[2] & 0xf) == 3)) && (((byte)param_1[8] & 0xf) == 6)) {
        F_0077c140((undefined *)((int)this + 0x18),param_1[9],param_1[3]);
        F_0077c440(this,1);
        return 0;
      }
      break;
    case 3: ;
      bVar4 = 0;
      if (((3 < param_2) && (((byte)param_1[2] & 0xf) == 3)) &&
         ((((byte)param_1[4] & 0xf) == 3 && (((byte)param_1[6] & 0xf) == 3)))) {
        F_0077c1a0((undefined *)((int)this + 0x18),param_1[3],(uint)(0 < (int)param_1[5]),
                     (uint)(param_1[7] == 1));
        F_0077c440(this,2);
        return 0;
      }
      break;
    case 4: ;
      bVar4 = 0;
      if (((3 < param_2) && (((byte)param_1[2] & 0xf) == 3)) &&
         ((((byte)param_1[4] & 0xf) == 3 && (((byte)param_1[6] & 0xf) == 3)))) {
        F_0077c200((undefined *)((int)this + 0x18),param_1[3],(uint)(0 < (int)param_1[5]),
                     (uint)(param_1[7] == 1));
        F_0077c440(this,4);
        return 0;
      }
      break;
    case 5: ;
      bVar4 = 0;
      if (((2 < param_2) && (((byte)param_1[2] & 0xf) == 3)) && (((byte)param_1[4] & 0xf) == 3)) {
        F_0077c260((undefined *)((int)this + 0x18),param_1[3],param_1[5]);
        F_0077c440(this,8);
        return 0;
      }
      break;
    case 6: ;
      bVar4 = 0;
      if (((1 < param_2) && (((byte)param_1[2] & 0xf) == 3)) && (((byte)param_1[4] & 0xf) == 3)) {
        F_0077c290((undefined *)((int)this + 0x18),param_1[3],(uint)(param_1[5] != 0));
        F_0077c440(this,0x10);
        return 0;
      }
      break;
    case 7: ;
      bVar4 = 0;
      if (((2 < param_2) && (((byte)param_1[2] & 0xf) == 3)) && (((byte)param_1[4] & 0xf) == 3)) {
        if ((uint)param_1[3] < 5) {
          bVar4 = *(byte *)((int)this + 0x84);
          bVar3 = (byte)(1 << ((byte)param_1[3] & 0x1f));
          if ((int)param_1[5] < 1) {
            bVar3 = ~bVar3 & bVar4;
          }
          else {
            bVar3 = bVar3 | bVar4;
          }
          *(byte *)((int)this + 0x84) = bVar3;
          if (bVar3 == 0) {
            *(byte *)((int)this + 0x84) = bVar4;
          }
        }
        F_0077c440(this,0x20);
        return 0;
      }
      break;
    case 8: ;
      bVar4 = 0;
      if ((((3 < param_2) && (((byte)param_1[2] & 0xf) == 3)) && (((byte)param_1[4] & 0xf) == 3)) &&
         (bVar4 = 0, ((byte)param_1[6] & 0xf) == 3)) {
        F_0077c340((undefined *)((int)this + 0x18),param_1[3],(uint)(0 < (int)param_1[5]),
                     (uint)(param_1[7] == 1));
        F_0077c440(this,0x40);
        return 0;
      }
    }
  }
  return bVar4;
}

/* ref: FUN_0089fa30 */
uint F_0089fa30(unsigned int gen_a0)
{
  GEN_ENTER(0x89fa30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  uint * this_01;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*(int *)((int)this + 0x30) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x30),0);
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  *(undefined1 *)((int)this + 0x34) = 0;
  uVar3 = F_0043bd00(*(undefined * PTR32 *)((int)this + 0x10),0xb3b,0,0);
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_005593a0(this_00,1);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(uint *)(gen_frame + 0xc)) = uVar3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(undefined4 *)(gen_frame + 0x1c)) = 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar3 = F_008668b0(this_00,8,4,&(*(undefined4 *)(gen_frame + 0x8)),this,0xb,uVar1,4);
  this_01 = &(*(uint *)(gen_frame + 0x28));
  iVar5 = 3;
  do {
    this_01 = this_01 + -2;
    uVar4 = F_005a2670(this_01);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(uint *)((int)this + 0x30) = uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_0089fb40 */
byte F_0089fb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89fb40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  if ((*param_1 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    if (*(char *)((int)this + 0x174) == '\0') {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
      if (*(undefined * PTR32 *)(uVar1 + 0x11c) != (undefined *)0x0) {
        F_00880490(*(undefined * PTR32 *)(uVar1 + 0x11c),(int)this + 0x178,*(undefined4 *)((int)this + 8));
        return 0;
      }
    }
    break;
  case 1: ;
    if ((param_1[8] & 0xf) != 0) {
      F_0087f810(this,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)((int)this + 8),1);
      return 0;
    }
    F_0087f810(this,0,*(undefined4 *)((int)this + 8),1);
    return 0;
  case 2: ;
    if ((param_1[8] & 0xf) == 0) {
      F_0087e890(this,0);
      return 0;
    }
    F_0087e890(this,*(undefined4 *)(param_1 + 0xc));
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    *(undefined4 *)((int)this + 0x1c) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_0089fc30 */
byte F_0089fc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89fc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((*param_1 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    if ((param_1[8] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0xc);
    }
    if (*(char *)((int)this + 0x21) != (char)uVar3) {
      F_0077ca30(this,uVar3);
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x27);
      if ((uVar2 != 0) && (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x1900))) != 0)) {
        *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x1900))) = 0;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      F_007e1250(this);
      return 0;
    }
    break;
  case 1: ;
    if ((param_1[8] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0xc);
    }
    if (*(char *)((int)this + 0x22) != (char)uVar3) {
      F_0077ca60(this,uVar3);
      F_007e1250(this);
      return 0;
    }
    break;
  case 2: ;
    if (((param_1[0x10] & 0xf) == 0) || (*(int *)(param_1 + 0x14) == 0)) {
      *(undefined1 *)((int)this + 0x23) = 3;
      if (*(int *)((int)this + 0x14) != 0) {
        F_00436dd0(*(int *)((int)this + 0x14),3);
      }
    }
    else {
      *(undefined1 *)((int)this + 0x23) = 1;
      if (*(int *)((int)this + 0x14) != 0) {
        F_00436dd0(*(int *)((int)this + 0x14),1);
        F_007e1250(this);
        return 0;
      }
    }
    F_007e1250(this);
    return 0;
  case 3: ;
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar4 = 1;
    uVar2 = F_0043bd00(*(undefined * PTR32 *)((int)this + 0x10),0xb25,0,0);
    F_0087e200(this,uVar2,uVar4,uVar3);
    return 0;
  case 4: ;
    if ((param_1[8] & 0xf) == 0) {
      F_0087e890(this,0);
      return 0;
    }
    F_0087e890(this,*(undefined4 *)(param_1 + 0xc));
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    *(undefined4 *)((int)this + 0x1c) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_0089fdd0 */
byte F_0089fdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89fdd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((*param_1 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    F_0087ecb0(this);
    return 0;
  case 1: ;
    F_0087f460(this,0);
    return 0;
  case 2: ;
    if ((param_1[8] & 0xf) != 0) {
      F_0077ce20(this,*(undefined4 *)(param_1 + 0xc));
      return 0;
    }
    F_0077ce20(this,0);
    return 0;
  case 3: ;
    if ((param_1[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
    F_0077ce20(this,uVar1);
    if ((param_1[8] & 0xf) != 0) {
      F_0087ebe0(this,*(undefined4 *)(param_1 + 0xc));
      return 0;
    }
    F_0087ebe0(this,0);
    return 0;
  case 4: ;
    break;
  case 5: ;
    F_0077c820(this,(uint)(byte)(*(char *)((int)this + 0xc6) + 1));
    return 0;
  case 6: ;
    F_0077c820(this,(uint)(byte)(*(char *)((int)this + 0xc6) - 1));
  default: ;
    return 0;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    *(undefined4 *)((int)this + 0x1c) = 0;
    return 1;
  }
  if ((param_1[0x10] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  if ((param_1[0x18] & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
  }
  F_0087e4d0(this,uVar1,uVar2);
  if ((param_1[8] & 0xf) != 0) {
    *(char *)((int)this + 0xc5) = (char)*(undefined4 *)(param_1 + 0xc);
    F_0077d140(this);
    return 0;
  }
  *(undefined1 *)((int)this + 0xc5) = 0;
  F_0077d140(this);
  return 0;
}

/* ref: FUN_0089ff60 */
byte F_0089ff60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89ff60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  
  if ((*param_1 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    break;
  case 1: ;
    if ((param_1[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
    F_0087f810(this,uVar1,*(undefined4 *)((int)this + 8),0);
  default: ;
    return 0;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    *(undefined4 *)((int)this + 0x1c) = 0;
    return 1;
  }
  if ((param_1[8] & 0xf) != 0) {
    F_0087f810(this,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)((int)this + 8),1);
    return 0;
  }
  F_0087f810(this,0,*(undefined4 *)((int)this + 8),1);
  return 0;
}

/* ref: FUN_008a0010 */
uint F_008a0010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a0010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined * this_00;
  undefined * extraout_ECX;
  undefined * this_01;
  undefined4 uVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  if (((char)param_2 == '\0') &&
     (uVar2 = CONCAT31((int3)(uVar2 >> 8),*(char *)((int)this + 0x41)),
     *(char *)((int)this + 0x41) == (char)param_1)) {
    bVar1 = F_0077ccf0(this,0x98);
    if (bVar1 == 0) {
      bVar1 = F_0077ccf0(this_00,0xf);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 == 0) goto LAB_008a0055;
      uVar3 = 5;
      this_01 = extraout_ECX;
    }
    else {
      uVar3 = 0;
      this_01 = this_00;
    }
    uVar2 = F_0087f650(this_01,uVar3);
  }
LAB_008a0055: ;
  if (*(int *)((int)this + 0x14) != 0) {
    uVar2 = F_00441d60();
  }
  return uVar2;
}

/* ref: FUN_008a0070 */
uint F_008a0070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a0070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    if ((char)param_1 == '\0') {
      if ((char)param_2 != '\0') {
        uVar1 = F_0087f460(this,1);
      }
    }
    else if (*(int *)((int)this + 0x14) != 0) {
      uVar1 = F_00441cd0();
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_008a00b0 */
uint F_008a00b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a00b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined * this_00;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar2 != '\0') {
    if ((char)param_1 == '\0') {
      if ((char)param_2 != '\0') {
        uVar2 = F_0087f460(this,0);
      }
    }
    else {
      if (*(int *)((int)this + 0x14) != 0) {
        F_00441cd0();
      }
      if ((char)param_2 != '\0') {
        uVar2 = F_0077ce20(this,(uint)*(byte *)((int)this + 0x6d));
        return uVar2;
      }
      bVar1 = F_0077ccf0(this,0x9b);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        uVar2 = F_0087f650(this_00,3);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_008a0120 */
uint F_008a0120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a0120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  uVar5 = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x2c);
  uVar1 = 0;
  if (uVar3 != 0) {
    iVar4 = *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + (param_1 & 0xff) * 0xc)));
    if (0 < iVar4) {
      iVar4 = iVar4 + -1;
    }
    uVar1 = 0;
    piVar2 = ((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4)));
    do {
      if (*piVar2 == iVar4) {
        uVar5 = uVar1 & 0xff;
        break;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while ((int)uVar1 < 0x10);
  }
  if ((char)param_2 == '\0') {
    if (*(char *)((int)this + 0x41) == (char)param_1) {
      if (*(int *)((int)this + 0x58) == 0) {
        bVar6 = *(int *)((int)this + 100) != 0;
        uVar1 = CONCAT31((int3)(uVar1 >> 8),bVar6);
        if (!bVar6) goto LAB_008a01be;
        uVar7 = 6;
      }
      else {
        uVar7 = 1;
      }
      uVar1 = F_0087f650(this,uVar7);
    }
LAB_008a01be: ;
    bVar6 = *(int *)((int)this + 0x60) != 0;
    uVar1 = CONCAT31((int3)(uVar1 >> 8),bVar6);
    if (bVar6) {
      uVar1 = F_0087f650(this,4);
    }
    if ((uVar3 == 0) || (uVar1 = param_1 & 0xff, uVar1 != *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 200)))))
    goto LAB_008a0216;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  }
  else {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  }
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x2c);
  if ((uVar1 != 0) && (*((uint *)GEN_TOP((*(int *)(uVar1 + 0x20) + 200))) != uVar5)) {
    *((uint *)GEN_TOP((*(int *)(uVar1 + 0x20) + 200))) = uVar5;
    *(undefined1 *)(uVar1 + 0x1d) = 1;
  }
LAB_008a0216: ;
  if (*(int *)((int)this + 0x14) != 0) {
    uVar1 = F_00441cd0();
  }
  if (((*(char *)((int)this + 0x20) == '\x01') && (*(char *)((int)this + 0x21) == '\0')) &&
     (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0)) {
    uVar1 = F_00437860(*(undefined * PTR32 *)((int)this + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_008a0250 */
uint F_008a0250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a0250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  bool bVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    if (((char)param_1 == '\0') &&
       (bVar2 = *(int *)((int)this + 0x60) != 0, uVar1 = CONCAT31((int3)(uVar1 >> 8),bVar2), bVar2))
    {
      uVar1 = F_0087f650(this,2);
    }
    if (*(int *)((int)this + 0x14) != 0) {
      uVar1 = F_00441d60();
    }
  }
  return uVar1;
}

/* ref: FUN_008a0290 */
byte F_008a0290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a0290u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * this_00;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  byte * pbVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  if ((*(*(byte * PTR32 *)&gen_args[1]) & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 4)));
  }
  switch((unsigned int)(uintptr_t)(uVar6)) {
  case 0: ;
    if (((*(byte * PTR32 *)&gen_args[1])[8] & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 0xc)));
    }
    this_00 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70)));
    F_0042e430(this_00,uVar6);
    if (*(char *)*this_00 == '\0') {
      F_0077cdd0((*(undefined * PTR32 *)&gen_args[0]),(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x41))));
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = 0;
      return 1;
    }
    bVar1 = F_0077d6b0(this_00);
    if (bVar1 == 0) {
      F_0087f650((*(undefined * PTR32 *)&gen_args[0]),7);
      return 0;
    }
    (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x41))))));
    uVar2 = F_00436a90(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),(*(byte * PTR32 *)&gen_args[1]));
    if (uVar2 != 0) {
      pbVar3 = (byte *)F_00441270(uVar2);
      pbVar4 = (byte *)F_0042a990(this_00);
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_008a0367: ;
          iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_008a036c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_008a0367;
        pbVar4 = pbVar4 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_008a036c: ;
      if (iVar5 != 0) {
        uVar2 = F_0042a990(this_00);
        F_004414f0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),(*(byte * PTR32 *)&gen_args[1]),uVar2);
      }
    }
switchD_008a02b7_caseD_fffffffe: ;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = 0;
    return 1;
  case 0xfffffffe: ;
  case 0xffffffff: ;
  case 1: ;
    goto switchD_008a02b7_caseD_fffffffe;
  default: ;
    return 1;
  }
}

/* ref: FUN_008a03b0 */
byte F_008a03b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a03b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((*(*(byte * PTR32 *)&gen_args[1]) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 4)));
  }
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != 0) {
      if (((*(byte * PTR32 *)&gen_args[1])[8] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 0xc)));
      }
      F_0042e430(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))),uVar4);
      bVar1 = F_0077d6b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))));
      if (bVar1 == 0) {
        F_0087f650((*(undefined * PTR32 *)&gen_args[0]),7);
        return 0;
      }
      bVar1 = 0;
      (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(((uint)(*(byte * PTR32 *)&gen_args[1]) & 0xffffff00)));
      do {
        bVar2 = F_004368a0((*(byte * PTR32 *)&gen_args[1]));
        if (((bVar2 != 0) &&
            (uVar3 = F_00436a90(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),(*(byte * PTR32 *)&gen_args[1])), uVar3 != 0)) &&
           (*(char *)(uVar3 + 0xb) == '\0')) {
          if (bVar1 != 0x11) {
            uVar5 = 0;
            uVar4 = 0;
            uVar3 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70);
            uVar3 = F_00441680(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),(*(byte * PTR32 *)&gen_args[1]),uVar3,uVar4,uVar5);
            if ((char)uVar3 != '\0') {
              *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d))) = bVar1;
              *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = 0;
              return 1;
            }
          }
          break;
        }
        bVar1 = bVar1 + 1;
        (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[1]), 1, 3),bVar1)));
      } while (bVar1 < 0x11);
      uVar4 = 0xbbc;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))));
      F_0046a630(this_00,uVar4);
    }
switchD_008a03d7_caseD_fffffffe: ;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = 0;
    return 1;
  case 0xfffffffe: ;
  case 0xffffffff: ;
  case 1: ;
    goto switchD_008a03d7_caseD_fffffffe;
  default: ;
    return 1;
  }
}

/* ref: FUN_008a04d0 */
byte F_008a04d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a04d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  if ((*param_1 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      return 0;
    }
  }
  if (iVar1 == 0) {
    F_0087eed0(this);
  }
  else {
    if (iVar1 == 1) {
      F_0087f460(this,1);
      return 1;
    }
    if (iVar1 == 2) {
      F_0087eb40(this);
      return 1;
    }
  }
  return 1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyProfile::vf2 */
uint F_008a0960(unsigned int gen_a0)
{
  GEN_ENTER(0x8a0960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x10) != -0x20000000) {
    uVar1 = F_0087ffb0(this,*(int *)(this + 0x10));
    return uVar1;
  }
  uVar1 = F_00880040(this,*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c));
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInvite::vf1 */
uint F_008a0980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a0980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((param_3 == 0) || ((uVar3 = *param_2 & 0xf, uVar3 != 0 && ((int)param_2[1] < 0)))) {
    iVar1 = *(int *)(this + 0x68);
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0x68) = 0;
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
    }
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    switch((unsigned int)(uintptr_t)(param_4)) {
    case 0: ;
      if (this[0x10] == (undefined1)0x0) {
        if ((param_2[4] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = param_2[5];
        }
        F_008802c0(this,uVar3,*(undefined4 *)(this + 8));
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
      if ((param_2[4] & 0xf) != 0) {
        F_008800e0(this,param_2[5],*(undefined4 *)(this + 8),0);
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
      F_008800e0(this,0,*(undefined4 *)(this + 8),0);
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    case 1: ;
      if ((uVar3 == 0) || (param_2[1] == 0)) {
        uVar3 = F_0042a990(this + 0x14);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x1c))))(*(int * PTR32 *)(this + 0xc),uVar3,1);
      }
      *(undefined4 *)(this + 0x68) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    case 2: ;
      *(undefined4 *)(this + 0x68) = 0;
      if (((*param_2 & 0xf) != 0) && (param_2[1] != 0)) {
        uVar4 = 0;
        uVar3 = F_0042a990(this + 0x14);
        F_008802c0(this,uVar3,uVar4);
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 2;
        return (uint)param_1;
      }
      uVar3 = F_0042a990(this + 0x14);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x1c))))(*(int * PTR32 *)(this + 0xc),uVar3,1);
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    case 3: ;
      if ((uVar3 == 0) || (param_2[1] == 0)) {
        uVar3 = F_0042a990(this + 0x14);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x1c))))(*(int * PTR32 *)(this + 0xc),uVar3,0);
      }
      *(undefined4 *)(this + 0x68) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInputString::vf2 */
uint F_008a0b40(unsigned int gen_a0)
{
  GEN_ENTER(0x8a0b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00880490(this,this + 0x10,*(undefined4 *)(this + 0xc));
  return uVar1;
}

/* ref: FUN_008a0b50 */
byte F_008a0b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a0b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  if (((*param_1 & 0xf) == 0) || (iVar1 = *(int *)(param_1 + 4), iVar1 < 1)) {
    if (*(int *)((int)this + 0x1490) != 9999) {
      F_00a3d7c0(&REFG(undefined, 0x14a4230),*(int *)((int)this + 0x1490),(uint)*(ushort *)((int)this + 0x1494))
      ;
    }
    *(undefined4 *)((int)this + 0x1490) = 9999;
    *(undefined2 *)((int)this + 0x1494) = 0;
    *(undefined4 *)((int)this + 0x1498) = 0;
    *(undefined4 *)((int)this + 0x149c) = 0;
    *(undefined4 *)((int)this + 0x14a0) = 9999;
    *(undefined2 *)((int)this + 0x14a4) = 0;
    *(undefined4 *)((int)this + 0x14a8) = 0;
    *(undefined4 *)((int)this + 0x14ac) = 0;
  }
  else if (*(int *)((int)this + 0x1490) != 9999) {
    uVar2 = F_00a3a150(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x1490),
                         (int)*(short *)((int)this + 0x1494));
    if (uVar2 != 0) {
      uVar2 = F_00a3a150(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x1490),
                           (int)*(short *)((int)this + 0x1494));
      if ((*(char *)(uVar2 + 6) != '\0') || (*(int *)(uVar2 + 8) != 0)) {
        uVar2 = F_00a3a150(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x14a0),
                             (int)*(short *)((int)this + 0x14a4));
        uVar3 = F_00a3a150(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x1490),
                             (int)*(short *)((int)this + 0x1494));
        F_00880510(this,uVar3,uVar2,iVar1,*(undefined4 *)((int)this + 0x14c0));
        *(undefined4 *)((int)this + 0x1488) = 0;
        return 1;
      }
    }
    F_00a3d7c0(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x1490),
                 (uint)*(ushort *)((int)this + 0x1494));
    *(undefined4 *)((int)this + 0x1490) = 9999;
    *(undefined4 *)((int)this + 0x1498) = 0;
    *(undefined4 *)((int)this + 0x149c) = 0;
    *(undefined2 *)((int)this + 0x1494) = 0;
    *(undefined2 *)((int)this + 0x14a4) = 0;
    *(undefined4 *)((int)this + 0x14a0) = 9999;
    *(undefined4 *)((int)this + 0x14a8) = 0;
    *(undefined4 *)((int)this + 0x14ac) = 0;
    uVar4 = 0x745;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
    F_0046a630(this_00,uVar4);
    *(undefined4 *)((int)this + 0x1488) = 0;
    return 1;
  }
  *(undefined4 *)((int)this + 0x1488) = 0;
  return 1;
}

/* ref: FUN_008a0d00 */
byte F_008a0d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a0d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    iVar1 = *(int *)((int)this + 0x1478);
    if (iVar1 != 0) {
      if (*(char *)((int)this + 0x147c) == '\0') {
        F_00a3c360(&REFG(undefined, 0x14a4230),iVar1);
        F_0043f8b0(0x14);
      }
      else {
        F_00a3c570(&REFG(undefined, 0x14a4230),iVar1);
        F_0043f8b0(0x14);
      }
    }
    break;
  case 2: ;
    *(bool *)((int)this + 0x147c) = *(char *)((int)this + 0x147c) == '\0';
    *(undefined4 *)((int)this + 0x1478) = 0;
    F_008808f0(this);
    return 0;
  case 3: ;
    if ((param_1[8] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0xc);
    }
    *(undefined4 *)((int)this + 0x1478) = uVar2;
    F_008808f0(this);
  default: ;
    return 0;
  case 0xfffffffe: ;
  case 0xffffffff: ;
  case 1: ;
  }
  *(undefined4 *)((int)this + 0x148c) = 0;
  F_0077f300(this);
  return 1;
}

/* ref: FUN_008a0df0 */
uint F_008a0df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a0df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (param_2 != (uint *)0x0) {
    if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
      if (*param_2 == 0x55f1) {
        uVar2 = 0x20;
      }
      else {
        bVar1 = (char)*param_2 - 0x20;
        if (4 < bVar1) goto LAB_008a0f86;
        uVar2 = (uint)(byte)(&REFG(undefined1, 0x10c0596))[(uint)bVar1 * 3];
      }
      bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),uVar2);
      if (bVar1 != 0) {
        uVar2 = *param_2;
        uVar4 = *param_1;
        if (uVar4 == uVar2) {
          if (uVar2 != 0x55f1) {
            uVar2 = F_00a47f70(&REFG(undefined, 0x14a4230),uVar4,(uint)(ushort)param_1[1],uVar2,
                                 (uint)(ushort)param_2[1],1);
            return uVar2;
          }
        }
        else {
          uVar2 = F_00a3eaa0(&REFG(undefined, 0x14a4230),uVar4,(uint)(ushort)param_1[1]);
          if (uVar2 == 0) {
            if ((*(char *)((int)param_2 + 6) == '\0') && (param_2[2] == 0)) {
LAB_008a0f2e: ;
              uVar2 = F_00a3a8a0(param_1);
              if (1 < uVar2) {
                iVar6 = 0;
                uVar2 = F_0071d3a0(param_2);
                if ((char)uVar2 == '\0') {
                  uVar2 = F_00a3a8a0(param_2);
                  iVar6 = *(int *)(param_4 + 0x28) - uVar2;
                }
                uVar2 = F_008806d0(this,param_1,param_2,iVar6,*(undefined4 *)((int)this + 8));
                return uVar2;
              }
              uVar2 = F_00880510(this,param_1,param_2,0,*(undefined4 *)((int)this + 8));
              return uVar2;
            }
            uVar2 = F_0046e5e0(param_1);
            uVar4 = F_0046e5e0(param_2);
            if ((uVar2 == uVar4) &&
               (uVar2 = F_00a3a8a0(param_2), *(uint *)(param_4 + 0x28) != uVar2))
            goto LAB_008a0f2e;
            uVar2 = F_0046e5e0(param_1);
            uVar4 = F_0046e5e0(param_2);
            if (uVar2 != uVar4) {
              uVar7 = 0x74b;
              pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))
                                         (*(int * PTR32 *)((int)this + 4))));
              uVar2 = F_0046a630(pvVar3,uVar7);
              return uVar2;
            }
            piVar5 = *(int * PTR32 *)((int)this + 4);
            uVar7 = 0x74d;
          }
          else {
            if ((int)uVar2 < 0x1b) {
              return uVar2;
            }
            if (0x1d < (int)uVar2) {
              return uVar2;
            }
            piVar5 = *(int * PTR32 *)((int)this + 4);
            uVar7 = 0x74a;
          }
          pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5)));
          uVar4 = F_0046a630(pvVar3,uVar7);
        }
        return uVar4;
      }
    }
  }
LAB_008a0f86: ;
  uVar7 = 0x748;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0046a630(pvVar3,uVar7);
  return uVar2;
}

/* ref: FUN_008a0fb0 */
uint F_008a0fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a0fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int * piVar1;
  uint * this_00;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  this_00 = (*(uint * PTR32 *)&gen_args[2]);
  if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != (undefined *)0x0) {
    if (*(*(int * PTR32 *)&gen_args[1]) == 0x55f1) {
      uVar3 = 0x20;
    }
    else {
      bVar2 = (char)*(*(int * PTR32 *)&gen_args[1]) - 0x20;
      if (4 < bVar2) goto LAB_008a0fec;
      uVar3 = (uint)(byte)(&REFG(undefined1, 0x10c0596))[(uint)bVar2 * 3];
    }
    bVar2 = F_00441290(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),uVar3);
    if (bVar2 != 0) {
      if (((*(uint * PTR32 *)&gen_args[2]) != (uint *)0x0) && ((*((char *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[2]) + 6))) != '\0' || ((*(uint * PTR32 *)&gen_args[2])[2] != 0))))
      {
        uVar3 = F_0046e5e0((*(int * PTR32 *)&gen_args[1]));
        uVar5 = F_0046e5e0((*(uint * PTR32 *)&gen_args[2]));
        if ((uVar3 != uVar5) || (uVar3 = F_00a3a8a0((*(uint * PTR32 *)&gen_args[2])), *(uint *)((*(int *)&gen_args[4]) + 0x28) == uVar3))
        {
          uVar3 = F_0046e5e0((*(int * PTR32 *)&gen_args[1]));
          uVar5 = F_0046e5e0((*(uint * PTR32 *)&gen_args[2]));
          piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
          if (uVar3 == uVar5) {
            uVar8 = 0x74e;
            pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
            uVar3 = F_0046a630(pvVar4,uVar8);
            return uVar3;
          }
          uVar8 = 0x74c;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
          uVar3 = F_0046a630(pvVar4,uVar8);
          return uVar3;
        }
      }
      uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
      if ((*(uint * PTR32 *)&gen_args[2]) != (uint *)0x0) {
        uVar5 = *(*(uint * PTR32 *)&gen_args[2]);
        (*(uint * PTR32 *)&gen_args[2]) = (uint *)uVar3;
        if (((-1 < (int)uVar5) && ((int)uVar5 < 4)) || (uVar5 == 0x7d1)) {
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
          piVar1 = *(int * PTR32 *)(uVar3 + 0x20);
          if (piVar1 != (int *)0x0) {
            (*(uint * PTR32 *)&gen_args[2]) = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1)));
          }
        }
        uVar3 = (uint)(*(uint * PTR32 *)&gen_args[2]);
        if ((((0xdab < (int)uVar5) && ((int)uVar5 < 0xdad)) ||
            ((0xc7f < (int)uVar5 && ((int)uVar5 < 0xc8a)))) ||
           ((uVar5 == 0xce4 || (uVar5 == 0xd48)))) {
          bVar2 = F_00a36920((*(undefined4 *)&gen_args[3]));
          (*(undefined4 *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[3]), 1, 3),bVar2);
          if (bVar2 == 0xe) {
            uVar8 = 0x312;
            pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x28))))
                                       (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))));
            uVar3 = F_0046a630(pvVar4,uVar8);
            return uVar3;
          }
          uVar5 = *this_00;
          uVar6 = F_00a36960((*(undefined4 *)&gen_args[3]));
          piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
          if (uVar6 != uVar5) {
            uVar8 = 0x313;
            pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
            uVar3 = F_0046a630(pvVar4,uVar8);
            return uVar3;
          }
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
          piVar1 = *(int * PTR32 *)(uVar5 + 0x130);
          if (piVar1 != (int *)0x0) {
            uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1);
          }
        }
      }
      (*(uint * PTR32 *)&gen_args[2]) = (uint *)uVar3;
      uVar3 = F_00a3a8a0((*(int * PTR32 *)&gen_args[1]));
      if (uVar3 < 2) {
        uVar3 = F_00880510((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),this_00,0,(*(uint * PTR32 *)&gen_args[2]));
        return uVar3;
      }
      iVar7 = 0;
      if ((this_00 != (uint *)0x0) && ((*(char *)((int)this_00 + 6) != '\0' || (this_00[2] != 0))))
      {
        uVar3 = F_00a3a8a0(this_00);
        iVar7 = *(int *)((*(int *)&gen_args[4]) + 0x28) - uVar3;
      }
      uVar3 = F_008806d0((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),this_00,iVar7,(*(uint * PTR32 *)&gen_args[2]));
      return uVar3;
    }
  }
LAB_008a0fec: ;
  uVar8 = 0x748;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))));
  uVar3 = F_0046a630(pvVar4,uVar8);
  return uVar3;
}

/* ref: FUN_008a1260 */
uint F_008a1260(unsigned int gen_a0)
{
  GEN_ENTER(0x8a1260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined * this_01;
  uint uVar3;
  uint * this_02;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar3 + 0x130);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar3 != '\0') {
      uVar3 = F_00869af0(piVar1,piVar1[4],9,*(undefined4 *)((int)this + 8),0);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    }
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = *(undefined * PTR32 *)(uVar3 + 0x20);
  if (this_00 != (undefined *)0x0) {
    uVar2 = *(undefined4 *)((int)this + 8);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    if (*(int *)((int)this_00 + 0xc) == 6) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
      this_01 = *(undefined * PTR32 *)(uVar3 + 0x130);
      if ((this_01 != (undefined *)0x0) && (*(int *)((int)this_01 + 0x14) == 2)) {
        F_00869af0(this_01,*(undefined4 *)((int)this_01 + 0x10),0,0,1);
      }
    }
    *(undefined4 *)((int)this_00 + 0x10) = 0xdfb;
    *(undefined4 *)((int)this_00 + 0xc) = 9;
    *(undefined4 *)((int)this_00 + 0x18) = 4;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
    piVar1 = *(int * PTR32 *)(uVar3 + 0x130);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      if ((char)uVar3 != '\0') {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      }
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),2);
    (*(undefined1 *)(gen_frame + 0x24)) = 0;
    F_0086e5a0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),4);
    this_02 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 3;
    do {
      this_02 = this_02 + -2;
      uVar3 = F_005a2670(this_02);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_008a13c0 */
uint F_008a13c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x8a13c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  if (*(undefined * PTR32 *)(uVar2 + 0x20) != (undefined *)0x0) {
    F_0089aef0(*(undefined * PTR32 *)(uVar2 + 0x20),9,4);
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x130);
  if ((piVar1 != (int *)0x0) && (piVar1[5] == 9)) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_008a1400 */
uint F_008a1400(unsigned int gen_a0)
{
  GEN_ENTER(0x8a1400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x1488) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x1488),0);
    *(undefined4 *)((int)this + 0x1488) = 0;
  }
  if (*(int *)((int)this + 0x1484) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x1484),0);
    *(undefined4 *)((int)this + 0x1484) = 0;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x130);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar2 != '\0') {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
      return uVar2;
    }
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = *(undefined * PTR32 *)(uVar2 + 0x20);
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_0089ad50(this_00,*(undefined4 *)((int)this_00 + 0xc),4,
                         *(undefined4 *)((int)this + 8),1);
  }
  return uVar2;
}

/* ref: FUN_008a14c0 */
uint F_008a14c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a14c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  uint * this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*(int *)((int)this + 0x1480) == 0) {
    if (*(int *)((int)this + 0x1484) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x1484),0);
      *(undefined4 *)((int)this + 0x1484) = 0;
    }
    if (*(int *)((int)this + 0x1488) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x1488),0);
      *(undefined4 *)((int)this + 0x1488) = 0;
    }
    if (*(int *)((int)this + 0x148c) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x148c),0);
      *(undefined4 *)((int)this + 0x148c) = 0;
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar2 = *(int * PTR32 *)(uVar3 + 0x24);
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
      if (((char)uVar3 != '\0') && (piVar2[0x82] == *(int *)((int)this + 8))) {
        ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      }
    }
    if (*(int *)((int)this + 0x1480) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x1480),0);
      *(undefined4 *)((int)this + 0x1480) = 0;
    }
    uVar1 = *(undefined4 *)((int)this + 8);
    uVar8 = 0;
    uVar7 = 0;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = F_0043bd00(pvVar4,param_1,uVar7,uVar8);
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar5 = F_005593a0(pvVar4,1);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
    (*(uint *)(gen_frame + 0xc)) = uVar3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
    (*(uint *)(gen_frame + 0x14)) = uVar5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(undefined4 *)(gen_frame + 0x1c)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    uVar3 = F_008668b0(pvVar4,8,4,&(*(undefined4 *)(gen_frame + 0x8)),this,1,uVar1,4);
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar6 = 3;
    do {
      this_00 = this_00 + -2;
      param_1 = F_005a2670(this_00);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    *(uint *)((int)this + 0x1480) = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return param_1;
}

/* ref: FUN_008a1690 */
uint F_008a1690(unsigned int gen_a0)
{
  GEN_ENTER(0x8a1690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,*(undefined4 *)((int)this + 8));
  if ((char)uVar2 != '\0') {
    F_007e2a20(this,1);
    uVar2 = F_008a14c0(this,0xb4e);
    return uVar2;
  }
  *(undefined4 *)((int)this + 0x14c4) = 2;
  return uVar2;
}

/* ref: FUN_008a16e0 */
uint F_008a16e0(unsigned int gen_a0)
{
  GEN_ENTER(0x8a16e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,*(undefined4 *)((int)this + 8));
  if ((char)uVar2 != '\0') {
    F_007e2a20(this,1);
    uVar2 = F_008a14c0(this,0xb53);
    return uVar2;
  }
  *(undefined4 *)((int)this + 0x14c4) = 3;
  return uVar2;
}

/* ref: FUN_008a1730 */
byte F_008a1730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a1730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  int * piVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  uint uVar5;
  
  (*(byte *)(gen_frame + 0xb)) = 0;
  if ((*param_1 & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    pvVar3 = *(undefined * PTR32 *)(uVar5 + 0x108);
    if (pvVar3 != (undefined *)0x0) {
      if ((param_1[8] & 0xf) != 0) {
        F_0087f810(pvVar3,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)((int)this + 8),1);
        return (*(byte *)(gen_frame + 0xb));
      }
      F_0087f810(pvVar3,0,*(undefined4 *)((int)this + 8),1);
      return (*(byte *)(gen_frame + 0xb));
    }
    break;
  case 1: ;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    pvVar3 = *(undefined * PTR32 *)(uVar5 + 0x108);
    if (pvVar3 != (undefined *)0x0) {
      if ((param_1[8] & 0xf) != 0) {
        F_0087f810(pvVar3,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)((int)this + 8),0);
        return (*(byte *)(gen_frame + 0xb));
      }
      F_0087f810(pvVar3,0,*(undefined4 *)((int)this + 8),0);
      return (*(byte *)(gen_frame + 0xb));
    }
    break;
  case 2: ;
    if ((param_1[8] & 0xf) == 0) {
      F_00880ed0(this,0);
      return (*(byte *)(gen_frame + 0xb));
    }
    F_00880ed0(this,*(undefined4 *)(param_1 + 0xc));
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    pcVar1 = *(gen_code32 *)(*(int *)this + 0xc);
    (*(byte *)(gen_frame + 0xb)) = 1;
    *(undefined4 *)((int)this + 8) = 0;
    (*pcVar1)(this);
    piVar2 = *(int * PTR32 *)((int)this + 0x10);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,((undefined1 *)(gen_frame + 0x0)),param_1,param_2,0);
      F_005a2670(((undefined1 *)(gen_frame + 0x0)));
      *(undefined4 *)((int)this + 0x10) = 0;
      return (*(byte *)(gen_frame + 0xb));
    }
  }
  return (*(byte *)(gen_frame + 0xb));
}

/* ref: Client::UI2::Agent::AgentFreeCompanyExchange::vf2 */
unsigned int F_008a1890(void)
{
  GEN_ENTER(0x8a1890u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_008a18a0 */
uint F_008a18a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a18a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint * this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*(int *)((int)this + 0x1c) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x1c),0);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  if (*(int *)((int)this + 0x20) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x20),0);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  uVar8 = 0;
  uVar7 = 0;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar3,param_1,uVar7,uVar8);
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_005593a0(pvVar3,1);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(uint *)(gen_frame + 0xc)) = uVar4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = uVar5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(undefined4 *)(gen_frame + 0x1c)) = 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar4 = F_008668b0(pvVar3,8,4,&(*(undefined4 *)(gen_frame + 0x8)),this,2,uVar1,4);
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar6 = 3;
  do {
    this_00 = this_00 + -2;
    uVar5 = F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  *(uint *)((int)this + 0x20) = uVar4;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar5;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyProfileEdit::vf2 */
uint F_008a19d0(unsigned int gen_a0)
{
  GEN_ENTER(0x8a19d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  undefined * this_00;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  undefined * pAVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"",REFG(undefined4, 0x108cc50));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 == '\0') {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),6);
    uVar9 = 4;
    uVar8 = 0;
    uVar7 = 0;
    puVar5 = &(*(undefined4 *)(gen_frame + 0xc));
    (*(uint *)(gen_frame + 0x10)) = uVar1;
    uVar4 = 1;
    uVar3 = 0xb5;
    pAVar6 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = F_008668b0(this_00,uVar3,uVar4,puVar5,pAVar6,uVar7,uVar8,uVar9);
    *(uint *)(this + 8) = uVar1;
    F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
  }
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar2;
}

/* ref: FUN_008a1a70 */
uint F_008a1a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a1a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)((int)this + 0x28) = param_1;
  uVar3 = 0xb;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  uVar1 = F_00435440(uVar1,uVar3);
  *(uint *)((int)this + 0x24) = uVar1;
  if (uVar1 != 0) {
    F_00453fa0((undefined *)(uVar1 + 0x490),(int)this + 0xc);
    uVar2 = F_00436a80(*(undefined * PTR32 *)((int)this + 0x24));
    *(ulonglong *)((int)this + 0x30) = uVar2;
  }
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x30);
  uVar1 = F_00881060(this);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyCrestEditor::vf2 */
uint F_008a1ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x8a1ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  uVar1 = F_008a1a70(this,0);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyCrestEditor::vf5 */
unsigned int F_008a1b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a1b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  if (*(int *)(this + 8) != 0) {
    if (*(int *)(this + 0x58) == 1) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)(this + 8));
      if ((char)uVar3 != '\0') {
        if (*(int *)(this + 0x24) != 0) {
          bVar1 = F_00436880(*(int *)(this + 0x24));
          if (bVar1 != 3) {
            F_008814e0(this,0);
            F_007e32e0(this);
            return 0;
          }
        }
        *(undefined4 *)(this + 0x58) = 2;
      }
    }
    F_007e32e0(this);
  }
  return 0;
}

/* ref: FUN_008a1b70 */
uint F_008a1b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a1b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(byte *)(param_1 + 4) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
      uVar2 = F_00436a80(*(undefined * PTR32 *)((int)this + 0x18));
      uVar1 = (uint)uVar2;
      *(ulonglong *)((int)this + 0x24) = uVar2;
    }
    break;
  case 3: ;
  case 4: ;
    uVar1 = F_008814e0((undefined *)((int)this + -0xc),0);
    return uVar1;
  case 5: ;
    uVar1 = F_008814e0((undefined *)((int)this + -0xc),1);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_008a1be0 */
uint F_008a1be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a1be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    if ((*(int *)((int)this + 0x30) != *(int *)((int)this + 0x38)) ||
       (*(int *)((int)this + 0x34) != *(int *)((int)this + 0x3c))) {
      F_008812d0(this,0);
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
LAB_008a1c0f: ;
    F_0077f780(this,param_2,param_3);
    *(undefined1 *)(param_1 + 1) = uVar2;
    *param_1 = 2;
    return (uint)param_1;
  case 1: ;
    if (*(int *)((int)this + 8) != 0) {
      if ((*(int *)((int)this + 0x30) == *(int *)((int)this + 0x38)) &&
         (*(int *)((int)this + 0x34) == *(int *)((int)this + 0x3c))) {
        F_0077f780(this,param_2,param_3);
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 2;
        return (uint)param_1;
      }
      F_008812d0(this,1);
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    break;
  case 2: ;
    if ((*(int *)((int)this + 0x30) != *(int *)((int)this + 0x38)) ||
       (*(int *)((int)this + 0x34) != *(int *)((int)this + 0x3c))) {
      F_008812d0(this,2);
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    break;
  case 3: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((param_2[0x10] & 0xf) != 0) {
      *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)((int)this + 0x40) = uVar1;
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined4 *)((int)this + 0x40) = uVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 4: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((param_2[0x10] & 0xf) != 0) {
      *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)((int)this + 0x38) = uVar1;
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    *(undefined4 *)((int)this + 0x3c) = 0;
    *(undefined4 *)((int)this + 0x38) = uVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 5: ;
    F_007e33f0(this,(undefined4 *)((int)this + 0x40));
    *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)this + 0x40);
    *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)this + 0x44);
    *(undefined4 *)((int)this + 0x5c) = 0x1010101;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 6: ;
    if (((param_2[8] & 0xf) == 0) || (*(uint *)(param_2 + 0xc) == 0)) {
      if ((param_2[0x10] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x14);
      }
      F_00881200(this,uVar1);
    }
    else if (*(uint *)(param_2 + 0xc) < 3) {
      F_00881130(this);
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    uVar2 = 1;
    goto LAB_008a1c0f;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_008a1e40 */
byte F_008a1e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a1e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  int * piVar2;
  undefined4 uVar3;
  
  (*(byte *)(gen_frame + 0xb)) = 0;
  if ((*param_1 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    if ((param_1[8] & 0xf) != 0) {
      F_00881770(this,*(undefined4 *)(param_1 + 0xc));
      return (*(byte *)(gen_frame + 0xb));
    }
    F_00881770(this,0);
    return (*(byte *)(gen_frame + 0xb));
  case 1: ;
    if ((param_1[0x10] & 0xf) != 0) {
      F_00881890(this,*(undefined4 *)(param_1 + 0x14));
      return (*(byte *)(gen_frame + 0xb));
    }
    F_00881890(this,0);
    return (*(byte *)(gen_frame + 0xb));
  case 2: ;
    if ((param_1[0x10] & 0xf) != 0) {
      F_00881970(this,0,*(undefined4 *)(param_1 + 0x14));
      return (*(byte *)(gen_frame + 0xb));
    }
    F_00881970(this,0,0);
    return (*(byte *)(gen_frame + 0xb));
  case 3: ;
    F_00881970(this,1,0);
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    pcVar1 = *(gen_code32 *)(*(int *)this + 0xc);
    (*(byte *)(gen_frame + 0xb)) = 1;
    *(undefined4 *)((int)this + 8) = 0;
    (*pcVar1)(this);
    piVar2 = *(int * PTR32 *)((int)this + 0x10);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,((undefined1 *)(gen_frame + 0x0)),param_1,param_2,0);
      F_005a2670(((undefined1 *)(gen_frame + 0x0)));
      *(undefined4 *)((int)this + 0x10) = 0;
      return (*(byte *)(gen_frame + 0xb));
    }
  }
  return (*(byte *)(gen_frame + 0xb));
}

/* ref: Client::UI2::Agent::AgentFreeCompanyCrestDecal::vf2 */
uint F_008a1f80(unsigned int gen_a0)
{
  GEN_ENTER(0x8a1f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00881550(this,0);
  return uVar1;
}

/* ref: FUN_008a1f90 */
uint F_008a1f90(unsigned int gen_a0)
{
  GEN_ENTER(0x8a1f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00881770(this,(uint)*(byte *)((int)this + 0x20));
  return uVar1;
}

/* ref: FUN_008a1fa0 */
uint F_008a1fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a1fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint * this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*(int *)((int)this + 0x1c) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x1c),0);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  if (*(int *)((int)this + 0x18) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x18),0);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  uVar8 = 0;
  uVar7 = 0;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar3,param_1,uVar7,uVar8);
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_005593a0(pvVar3,1);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(uint *)(gen_frame + 0xc)) = uVar4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = uVar5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(undefined4 *)(gen_frame + 0x1c)) = 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar4 = F_008668b0(pvVar3,8,4,&(*(undefined4 *)(gen_frame + 0x8)),this,1,uVar1,4);
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar6 = 3;
  do {
    this_00 = this_00 + -2;
    uVar5 = F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  *(uint *)((int)this + 0x18) = uVar4;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar5;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf5 */
uint F_008a20d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a20d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pAVar1;
  undefined1 AVar2;
  uint uVar3;
  byte bVar5;
  uint in_EAX = 0;
  uint uVar6;
  undefined * this_00;
  undefined3 extraout_var = 0;
  longlong lVar4;
  
  if (*(int *)(this + 8) != 0) {
    F_0082ce60((char)this[0x1fb8] + 2,(uint)*(ushort *)(this + 0x1fba));
    if (this[0x1fb8] == (undefined1)0xff) {
      if (REFG(undefined4, 0x148a44c) != (int *)0x0) {
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(undefined4, 0x148a44c),6,0);
        REFG(undefined4, 0x1328330) = 0xffffffff;
        REFG(undefined4, 0x148a44c) = (int *)0x0;
      }
    }
    else {
      if ((this[0x1fbc] == (undefined1)0x2) && (REFG(undefined4, 0x148a44c) != (int *)0x0)) {
        uVar6 = F_00aa02d0(REFG(undefined4, 0x148a44c),3,0);
        if ((char)uVar6 != '\0') {
          lVar4 = (longlong)((double)*(float *)(REFG(int, 0x137104c) + 0x1198) * *(double *)&REFG(undefined, 0x10912a8));
          uVar3 = (uint)lVar4;
          pAVar1 = this + 0x1fc8;
          uVar6 = *(uint *)pAVar1;
          *(uint *)pAVar1 = *(uint *)pAVar1 + uVar3;
          *(uint *)(this + 0x1fcc) =
               *(int *)(this + 0x1fcc) + (int)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(uVar6,uVar3)
          ;
          if ((*(int *)(this + 0x1fcc) != 0) || (2000 < *(uint *)(this + 0x1fc8))) {
            F_007e3e10(this);
          }
        }
      }
      if (4 < *(int *)(this + 0x1fac)) {
        AVar2 = this[0x1fd0];
        uVar6 = (uint)(AVar2 == (undefined1)0x1);
        if ((uVar6 != (byte)this[0x1fd2]) ||
           ((uint)*((byte *)GEN_TOP((*(int *)(this + 0xf5c) + 7))) != (int)(char)this[0x1fd1])) {
          bVar5 = F_00782a00((uint)*((byte *)GEN_TOP((*(int *)(this + 0xf5c) + 7))),uVar6);
          if (bVar5 != 0) {
            this[0x1fd1] = *((undefined *)GEN_TOP((*(int *)(this + 0xf5c) + 7)));
            this[0x1fd2] = (undefined1)(AVar2 == (undefined1)0x1);
            if (this[0x1fd0] == (undefined1)0x1) {
              ((code *)*(gen_code32 *)(*(int *)this + 0x90))(this,1,1);
            }
          }
        }
      }
    }
    uVar6 = F_00424810(REFG(int, 0x137104c));
    in_EAX = 0;
    if (uVar6 != 0) {
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x50))))(*(int * PTR32 *)(this + 4))));
      F_007822b0();
      F_00782110(this_00);
      F_008844c0();
      bVar5 = F_00a34970(this_00,0x166);
      in_EAX = CONCAT31(extraout_var,bVar5);
      if (bVar5 != 0) {
        if (REFG(int, 0x148a444) != 0) {
          F_00b6b690(REFG(int, 0x148a444));
        }
        in_EAX = F_0043f8b0(0x22);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_008a2280 */
uint F_008a2280(unsigned int gen_a0)
{
  GEN_ENTER(0x8a2280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint * puVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  puVar2 = (uint *)F_00ab36c0(0x888);
  if (puVar2 == (uint *)0x0) {
    (*(int *)(gen_frame + 0xc)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0xc)) = (*puVar2 & 0xffffff) + (int)puVar2;
  }
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 8);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  bVar1 = F_005594e0(uVar3);
  if (bVar1 != 0) {
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_005593a0(this_00,1);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0xc));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
  (*(uint *)(gen_frame + 0x24)) = uVar3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  uVar3 = F_008668b0(this_00,8,4,&(*(undefined4 *)(gen_frame + 0x18)),this,4,(*(undefined4 *)(gen_frame + 0x10)),0xb);
  puVar2 = &(*(uint *)(gen_frame + 0x38));
  iVar5 = 3;
  do {
    puVar2 = puVar2 + -2;
    uVar4 = F_005a2670(puVar2);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(uint *)((int)this + 0x1fb4) = uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar4;
}

/* ref: FUN_008a2390 */
uint F_008a2390(unsigned int gen_a0)
{
  GEN_ENTER(0x8a2390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint * puVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  puVar2 = (uint *)F_00ab36c0(0x889);
  if (puVar2 == (uint *)0x0) {
    (*(int *)(gen_frame + 0xc)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0xc)) = (*puVar2 & 0xffffff) + (int)puVar2;
  }
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 8);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  bVar1 = F_005594e0(uVar3);
  if (bVar1 != 0) {
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_005593a0(this_00,1);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0xc));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
  (*(uint *)(gen_frame + 0x24)) = uVar3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  uVar3 = F_008668b0(this_00,8,4,&(*(undefined4 *)(gen_frame + 0x18)),this,5,(*(undefined4 *)(gen_frame + 0x10)),0xb);
  puVar2 = &(*(uint *)(gen_frame + 0x38));
  iVar5 = 3;
  do {
    puVar2 = puVar2 + -2;
    uVar4 = F_005a2670(puVar2);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(uint *)((int)this + 0x1fb4) = uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar4;
}

/* ref: FUN_008a24a0 */
uint F_008a24a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a24a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_008a2280(this);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCreate::vf5 */
uint F_008a24b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a24b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  F_008a20d0((undefined *)this,param_1);
  uVar2 = *(int *)(this + 0x2184) - 1;
  if (uVar2 == 0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this);
    if ((char)uVar2 != '\0') {
      bVar1 = F_007826f0();
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this,(*(int *)(this + 0x1fd8) < 0) - 1 & 2);
        *(undefined4 *)(this + 0x2184) = 2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_008a2510 */
uint F_008a2510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a2510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    uVar1 = F_00882cf0(this,param_1);
    *(undefined1 *)((int)this + 0x68f) = 2;
    return uVar1;
  }
  *(undefined1 *)((int)this + 0x68f) = 0xf;
  return param_1;
}

/* ref: FUN_008a2540 */
uint F_008a2540(unsigned int gen_a0)
{
  GEN_ENTER(0x8a2540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  bool bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  undefined * pvVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint * puVar12;
  undefined * puVar13;
  undefined4 uVar14;
  
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,2);
  uVar5 = 0;
  piVar3 = (int *)((int)this + 0x48);
  do {
    if ((piVar3[-7] != 0) && (*piVar3 != 0)) {
      uVar5 = uVar5 * 0x118;
      iVar10 = *(int *)(uVar5 + 0x48 + (int)this);
      goto LAB_008a258d;
    }
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 0x46;
  } while ((int)uVar5 < 2);
  iVar10 = 0;
LAB_008a258d: ;
  iVar9 = *(int *)((int)this + 0x684);
  if (iVar9 != 0) {
    *(undefined4 *)((int)this + 0x684) = 0;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,iVar9,0);
  }
  if ((iVar10 != 0) && (uVar4 != 0)) {
    bVar1 = true;
    bVar2 = true;
    uVar5 = F_00e3c050(iVar10);
    uVar11 = 0;
    piVar3 = (int *)((int)this + 0x2c);
    do {
      if ((uVar11 < 2) && (9 < piVar3[0x3c])) {
        if (*piVar3 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (piVar3[0x25] - piVar3[0x24]) / 0x18;
        }
        if ((int)(uVar6 & 0xff) < (int)uVar5) {
          bVar1 = false;
          break;
        }
      }
      uVar11 = uVar11 + 1;
      piVar3 = piVar3 + 0x46;
    } while ((int)uVar11 < 2);
    uVar5 = F_00e3c030(iVar10);
    piVar3 = ((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8)));
    puVar7 = ((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x20)));
    iVar10 = 8;
    do {
      puVar12 = puVar7;
      for (iVar9 = iVar10; iVar9 < *piVar3 + iVar10; iVar9 = iVar9 + 1) {
        if ((int)(*puVar12 & 0xf) < (int)uVar5) {
          bVar2 = false;
          break;
        }
        puVar12 = puVar12 + 1;
      }
      iVar10 = iVar10 + 0x28;
      puVar7 = puVar7 + 0x28;
      piVar3 = piVar3 + 1;
    } while (iVar10 < 0x58);
    if (bVar1) {
      uVar14 = 0x3c;
    }
    else {
      if (!bVar2) {
        uVar4 = F_00883080(this);
        return uVar4;
      }
      uVar14 = 0x3d;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                              (*(int * PTR32 *)((int)this + 0x2e8),uVar14)));
    if (piVar3 == (int *)0x0) {
      puVar13 = &REFG(undefined, 0x10be54a);
    }
    else {
      uVar14 = 3;
      pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
      puVar13 = (undefined *)F_00cb0950(pvVar8,uVar14);
    }
    pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_005593a0(pvVar8,1);
    uVar5 = F_00866c30(pvVar8,puVar13,uVar4,this,0x12,0,0xb,0,0,1);
    *(uint *)((int)this + 0x684) = uVar5;
  }
  return uVar5;
}

/* ref: FUN_008a2730 */
uint F_008a2730(unsigned int gen_a0)
{
  GEN_ENTER(0x8a2730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * puVar4;
  undefined4 uVar5;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),0x1a)));
  if (piVar1 == (int *)0x0) {
    puVar4 = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar5 = 3;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
    puVar4 = (undefined *)F_00cb0950(pvVar2,uVar5);
  }
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_005593a0(pvVar2,1);
  uVar3 = F_00866c30(pvVar2,puVar4,uVar3,this,7,0,0xb,0,0,1);
  *(uint *)((int)this + 0x684) = uVar3;
  return uVar3;
}

/* ref: FUN_008a27a0 */
uint F_008a27a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a27a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar6 = 2;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  F_00760260(pvVar1,uVar6);
  if (param_1 == 0) {
    if (param_2 == 0xf) {
      *(undefined1 *)((int)this + 0x68c) = 8;
    }
    else if (param_2 == 0x13) {
      F_007e5390(this);
    }
  }
  else if (param_1 == 2) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x4)));
    (*(undefined2 *)(gen_frame + 0x64)) = 0x3e81;
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    ((undefined4 *)(gen_frame + 0x4))[0] = 0;
    F_0082c8e0(this,((undefined4 *)(gen_frame + 0x4)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  }
  else if (param_2 == 0xf) {
    *(undefined1 *)((int)this + 0x68f) = 0xf;
  }
  else if (param_2 == 0x13) {
    uVar7 = 0;
    uVar5 = 0;
    uVar4 = 1;
    uVar3 = 0x18;
    uVar6 = 0;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    F_0075ec30(pvVar1,uVar6,uVar3,uVar4,uVar5,uVar7);
    F_00783600((undefined *)((int)this + 0x18));
    F_00882820(this,0);
  }
  uVar2 = F_0053cd40(&REFG(undefined4, 0x1375bc0));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf5 */
unsigned int F_008a2890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a2890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined2 uVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*(int *)(this + 0x2180) != 0) {
    F_008a20d0((undefined *)this,param_1);
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x2180))) {
    case 1: ;
      bVar1 = F_0049b5a0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
      if (bVar1 == 0) {
        piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        ((code *)*(gen_code32 *)(*piVar4 + 0xf8))(piVar4,1);
        uVar6 = 0;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        F_0075d840(pvVar3,uVar6);
        *(undefined4 *)(this + 0x2180) = 2;
        return 0;
      }
      break;
    case 2: ;
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this);
      if ((char)uVar5 != '\0') {
        uVar6 = 1;
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
        bVar1 = F_005590e0(uVar5,uVar6);
        if (bVar1 != 0) {
          *(undefined4 *)(this + 0x2180) = 3;
          F_00781eb0(this);
          F_007820e0();
          F_0082cb40(0,1);
          this[0x1fb8] = (undefined1)0x4;
          uVar5 = F_00ab36c0(0x1c3);
          if (uVar5 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = (undefined2)*(undefined4 *)(uVar5 + 0x10);
          }
          *(undefined2 *)(this + 0x1fba) = uVar2;
          piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4))));
          uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4,"Lobby");
          F_00782420(uVar5);
          return 0;
        }
      }
      break;
    case 3: ;
      F_0082ce60((char)this[0x1fb8] + 2,(uint)*(ushort *)(this + 0x1fba));
      if (REFG(char, 0x148a113) == '\0') {
        F_00920c00(0,(float)(float10)0);
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        uVar7 = 0x18;
        uVar6 = 0;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        F_00820b30(pvVar3,uVar6,uVar7,uVar8,uVar9,uVar10);
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        uVar7 = 0x18;
        uVar6 = 1;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        F_00820b30(pvVar3,uVar6,uVar7,uVar8,uVar9,uVar10);
        if (*((char *)GEN_TOP((*(int *)(this + 0xf60) + 0x10))) != '\0') {
          *(undefined4 *)(this + 0x2180) = 5;
          return 0;
        }
        F_00883d00(this);
        *(undefined4 *)(this + 0x2180) = 4;
        return 0;
      }
      break;
    case 5: ;
      if ((REFG(char, 0x148a113) == '\0') && (bVar1 = F_007826f0(), bVar1 != 0)) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this,(*(int *)(this + 0x1fd8) < 0) - 1 & 2);
        *(undefined4 *)(this + 0x2180) = 6;
        return 0;
      }
      break;
    case 7: ;
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
      bVar1 = F_0075ee20(uVar5);
      if (bVar1 != 0) {
        F_007e5570(this);
        return 0;
      }
      break;
    case 8: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4,0);
      if ((char)uVar5 != '\0') {
        F_00920c00(0,(float)(float10)0);
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        uVar7 = 0;
        uVar6 = 0;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        F_0075ec30(pvVar3,uVar6,uVar7,uVar8,uVar9,uVar10);
        *(undefined4 *)(this + 0x2180) = 9;
        return 0;
      }
      break;
    case 9: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4,1);
      if ((char)uVar5 != '\0') {
        F_007e5650(this);
        return 0;
      }
      break;
    case 10: ;
      ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf5 */
uint F_008a2b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a2b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)(this + 0x2180);
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this);
      if ((char)uVar2 != '\0') {
        bVar1 = F_007826f0();
        uVar2 = CONCAT31(extraout_var,bVar1);
        if (bVar1 != 0) {
          uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this,8);
          *(undefined4 *)(this + 0x2180) = 2;
        }
      }
    }
    else {
      uVar2 = uVar2 - 2;
      if (uVar2 == 0) {
        uVar2 = F_008a20d0((undefined *)this,param_1);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf40 */
uint F_008a2c00(unsigned int gen_a0)
{
  GEN_ENTER(0x8a2c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = F_00884220(this);
  if (*(int *)(this + 8) != 0) {
    F_005a2710(this + 0x1dc4,3);
    *(undefined4 *)(this + 0x1dc8) = 0x115;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)(this + 8),0x205,this + 0xf7c);
  }
  if (REFG(undefined4, 0x148a44c) != (undefined *)0x0) {
    F_00aa0560(REFG(undefined4, 0x148a44c),3);
    uVar1 = F_00aa4270(REFG(undefined4, 0x148a44c),0x2c5,0,0);
  }
  return uVar1;
}

/* ref: FUN_008a2c80 */
byte F_008a2c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15)
{
  GEN_ENTER(0x8a2c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[16];
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
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  gen_args[12] = gen_a12;
  gen_args[13] = gen_a13;
  gen_args[14] = gen_a14;
  gen_args[15] = gen_a15;
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = (*(undefined4 *)&gen_args[15]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) != 0) {
    piVar2 = (int *)F_00884650((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    if ((piVar2 != (int *)0x0) && ((char)(*(undefined4 *)&gen_args[4]) != '\0')) {
      (*(int *)&gen_args[12]) = piVar2[4];
      if (*piVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (uint)*(byte *)(*piVar2 + 0x10);
      }
      uVar3 = F_00974b60(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),uVar3,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar1,&(*(undefined4 *)&gen_args[3]),(*(undefined * PTR32 *)&gen_args[0]),
                           *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc))) = ((byte)uVar3 == 0) + 0x21;
      F_00e75880(&(*(undefined4 *)&gen_args[3]));
      return (byte)uVar3;
    }
  }
  F_00e75880(&(*(undefined4 *)&gen_args[3]));
  return 0;
}

/* ref: FUN_008a2d20 */
uint F_008a2d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8a2d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint in_EAX = 0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return in_EAX & 0xffffff00;
  }
  piVar1 = (int *)F_00884650(this,param_1,param_2);
  if ((piVar1 != (int *)0x0) && (*(char *)(param_3 + 4) != '\0')) {
    *(int *)(param_3 + 0x24) = piVar1[4];
    if (*piVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)(*piVar1 + 0x10);
    }
    uVar2 = F_00974b20(*(undefined * PTR32 *)((int)this + 8),uVar2,param_1,param_2,param_3,this,
                         *(undefined4 *)((int)this + 0xc));
    *(uint *)((int)this + 0xfc) = ((char)uVar2 == '\0') + 0x24;
    return uVar2;
  }
  return (uint)piVar1 & 0xffffff00;
}

/* ref: FUN_008a2da0 */
byte F_008a2da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a2da0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  undefined * PTR32 * ppvVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)F_00929420(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))),&(*(uint *)&gen_args[1]));
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0)));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != pvVar1) {
    if ((*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x14) <= (*(undefined * PTR32 *)&gen_args[2])) &&
       (((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x14) ||
        (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) <= (*(uint *)&gen_args[1]))))) {
      ppvVar2 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
      goto LAB_008a2de1;
    }
  }
  (*(undefined * PTR32 *)&gen_args[2]) = pvVar1;
  ppvVar2 = &(*(undefined * PTR32 *)&gen_args[2]);
LAB_008a2de1: ;
  if (*ppvVar2 != pvVar1) {
    return *(byte *)((int)*ppvVar2 + 0x18);
  }
  return 0;
}

/* ref: FUN_008a2e00 */
uint F_008a2e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a2e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  
  iVar3 = *(int *)((int)this + 0xb0);
  if (iVar3 == 0) {
    iVar6 = 0;
    iVar3 = 0;
  }
  else {
    iVar6 = *(int *)(iVar3 + 8);
    iVar3 = *(int *)(iVar3 + 0xc);
  }
  if ((param_1 == iVar6) && (param_2 == iVar3)) {
    uVar4 = F_00ab21a0((uint)*(byte *)((int)this + 0xea));
    if (uVar4 != 0) {
      cVar2 = *(char *)(uVar4 + 0x40);
      goto LAB_008a2ea0;
    }
  }
  else {
    piVar5 = (int *)F_00884650(this,param_1,param_2);
    if ((piVar5 == (int *)0x0) || (*piVar5 == 0)) {
      return 0;
    }
    uVar4 = F_00e3be40(*piVar5);
    if (uVar4 == 0) {
      return 0;
    }
    if (-1 < *(short *)(uVar4 + 0x54)) {
      return (int)*(short *)(uVar4 + 0x54);
    }
    bVar1 = F_008a2da0(this,param_1,param_2);
    uVar4 = F_00ab21a0((uint)bVar1);
    if (uVar4 != 0) {
      cVar2 = *(char *)(uVar4 + 0x40);
      goto LAB_008a2ea0;
    }
  }
  cVar2 = '\0';
LAB_008a2ea0: ;
  if (cVar2 == '\x01') {
    return 0xb5;
  }
  if (cVar2 == '\x02') {
    return 0xb7;
  }
  if (cVar2 == '\x03') {
    return 0xb6;
  }
  return 0;
}

