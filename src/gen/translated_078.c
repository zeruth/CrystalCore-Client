#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf44 */
unsigned int F_0081e330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81e330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0081e050(this,0x15,7,9,0xf,0xb,0x11,0xd,0x13,5,3);
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf62 */
uint F_0081e350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81e350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x180);
  if (iVar4 == 0) {
    *(undefined2 *)param_1 = 0;
    *(undefined1 *)((int)param_1 + 2) = 0;
    *param_1 = *param_1 | 0xff000000;
    return (uint)param_1;
  }
  uVar2 = F_007c6400(iVar4);
  iVar4 = *((int *)GEN_TOP((*(int *)(iVar4 + 4) + 0x180)));
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x398);
    if (iVar4 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x1a8);
    }
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x137129c) + 0x24) + 0x5c))))(*(int * PTR32 *)(REFG(int, 0x137129c) + 0x24));
  uVar1 = *((undefined4 *)GEN_TOP((uVar3 + (iVar4 + 2 + ((uVar2 - 1 & 1) + (uVar2 - 1 & 0xfffffffe)) * 2) * 0x1400 + 0x1000
           + param_2 * 4)));
  *(char *)param_1 = (char)uVar1;
  *(char *)((int)param_1 + 1) = (char)((uint)uVar1 >> 8);
  *(char *)((int)param_1 + 2) = (char)((uint)uVar1 >> 0x10);
  *(undefined1 *)((int)param_1 + 3) = 0xff;
  return (uint)param_1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf63 */
uint F_0081e3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81e3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x180) == 0) {
    *(undefined2 *)param_1 = 0;
    *(undefined1 *)((int)param_1 + 2) = 0;
    *param_1 = *param_1 | 0xff000000;
    return (uint)param_1;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x137129c) + 0x24) + 0x5c))))(*(int * PTR32 *)(REFG(int, 0x137129c) + 0x24));
  uVar1 = *(undefined4 *)(uVar2 + 0x1800 + param_2 * 4);
  *(char *)param_1 = (char)uVar1;
  *(char *)((int)param_1 + 1) = (char)((uint)uVar1 >> 8);
  *(char *)((int)param_1 + 2) = (char)((uint)uVar1 >> 0x10);
  *(undefined1 *)((int)param_1 + 3) = 0xff;
  return (uint)param_1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf65 */
uint F_0081e450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x81e450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  uint uVar2;
  
  ((uint *)(gen_frame + 0x0))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((char)param_1 != '\0') {
    ((uint *)(gen_frame + 0x0))[0] = 0xf;
    ((uint *)(gen_frame + 0x0))[1] = 0x10;
    ((uint *)(gen_frame + 0x0))[2] = 0x11;
    ((uint *)(gen_frame + 0x0))[3] = 0x12;
    ((uint *)(gen_frame + 0x0))[4] = 0x13;
    ((uint *)(gen_frame + 0x0))[5] = 0x14;
    uVar2 = 0;
    do {
      pvVar1 = (undefined *)F_0055e2f0(this,((uint *)(gen_frame + 0x0))[(int)(uVar2)]);
      if (pvVar1 != (undefined *)0x0) {
        F_0055a300(pvVar1,1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 6);
    F_0059d640(*(undefined * PTR32 *)(this + 0x90),0x65);
    F_0081d4d0(*(undefined4 *)(this + 400),1,this);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 400) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_00568380(pvVar1,0xc,1,this,0,0);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x70))))(*(int * PTR32 *)(this + 400));
    F_00c47745(((uint *)(gen_frame + 0x0))[6] ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar2;
  }
  F_0059d640(*(undefined * PTR32 *)(this + 0x90),0x11);
  F_0081d570(*(undefined4 *)(this + 400),1,this);
  pvVar1 = (undefined *)0x0;
  if (*(int *)(this + 400) != 0) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
  }
  uVar2 = F_005840a0(pvVar1,0xc,1,this,0);
  F_00c47745(((uint *)(gen_frame + 0x0))[6] ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf44 */
unsigned int F_0081e570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81e570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0081e050(this,0x15,7,9,0xf,0xb,0x11,0xd,0x13,5,3);
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf62 */
uint F_0081e590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81e590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x180) == 0) {
    *(undefined2 *)param_1 = 0;
    *(undefined1 *)((int)param_1 + 2) = 0;
    *param_1 = *param_1 | 0xff000000;
    return (uint)param_1;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x137129c) + 0x24) + 0x5c))))(*(int * PTR32 *)(REFG(int, 0x137129c) + 0x24));
  uVar1 = *(undefined4 *)(uVar2 + 0x1400 + param_2 * 4);
  *(char *)param_1 = (char)uVar1;
  *(char *)((int)param_1 + 1) = (char)((uint)uVar1 >> 8);
  *(char *)((int)param_1 + 2) = (char)((uint)uVar1 >> 0x10);
  *(undefined1 *)((int)param_1 + 3) = 0xff;
  return (uint)param_1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf65 */
uint F_0081e5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x81e5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  uint uVar1;
  
  ((uint *)(gen_frame + 0x0))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((char)param_1 != '\0') {
    ((uint *)(gen_frame + 0x0))[0] = 9;
    ((uint *)(gen_frame + 0x0))[1] = 10;
    ((uint *)(gen_frame + 0x0))[2] = 0xb;
    ((uint *)(gen_frame + 0x0))[3] = 0xc;
    ((uint *)(gen_frame + 0x0))[4] = 0xd;
    ((uint *)(gen_frame + 0x0))[5] = 0xe;
    uVar1 = 0;
    do {
      this_00 = (undefined *)F_0055e2f0(this,((uint *)(gen_frame + 0x0))[(int)(uVar1)]);
      if (this_00 != (undefined *)0x0) {
        F_0055a300(this_00,1);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 6);
    F_0059d640(*(undefined * PTR32 *)(this + 0x90),0x65);
    F_0081d4d0(*(undefined4 *)(this + 400),1,this);
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x70))))(*(int * PTR32 *)(this + 400));
    F_00c47745(((uint *)(gen_frame + 0x0))[6] ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar1;
  }
  F_0059d640(*(undefined * PTR32 *)(this + 0x90),0x11);
  uVar1 = F_0081d570(*(undefined4 *)(this + 400),1,this);
  F_00c47745(((uint *)(gen_frame + 0x0))[6] ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureSlider::vf44 */
unsigned int F_0081e6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81e6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * this_00;
  undefined * this_01;
  undefined * this_02;
  uint * puVar4;
  undefined * puVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  
  if (*(int *)(this + 0x180) != 0) {
    F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
    F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
    if (this[0x188] != (undefined1)0x0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
    }
    uVar1 = F_0055e2f0(this,10);
    if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
       (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
      uVar1 = 0;
    }
    *(uint *)(this + 400) = uVar1;
    F_00568380(*(undefined * PTR32 *)(uVar1 + 0x70),0x17,(uint)*(ushort *)(uVar1 + 100),this,0,0);
    iVar6 = *(int *)(this + 400);
    pvVar3 = (undefined *)0x0;
    if (iVar6 != 0) {
      pvVar3 = *(undefined * PTR32 *)(iVar6 + 0x70);
    }
    F_00568380(pvVar3,0xc,(uint)*(ushort *)(iVar6 + 100),this,0,0);
    uVar1 = F_0055e2f0(this,9);
    if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
       (uVar2 = F_005613a0(uVar1), uVar2 != 6)) {
      uVar1 = 0;
    }
    *(uint *)(this + 0x18c) = uVar1;
    F_00568380(*(undefined * PTR32 *)(uVar1 + 0x70),0x1b,(uint)*(ushort *)(uVar1 + 100),this,0,0);
    *((byte *)GEN_TOP((*(int *)(this + 0x18c) + 0xae))) = *((byte *)GEN_TOP((*(int *)(this + 0x18c) + 0xae))) & 0xf5 | 5;
    *((byte *)GEN_TOP((*(int *)(this + 0x18c) + 0xae))) = *((byte *)GEN_TOP((*(int *)(this + 0x18c) + 0xae))) | 0x80;
    uVar1 = F_0055e340(this,8);
    *(uint *)(this + 0x194) = uVar1;
    this_00 = (undefined *)F_0055e340(this,6);
    this_01 = (undefined *)F_0055e340(this,7);
    this_02 = (undefined *)F_0055e340(this,3);
    pvVar3 = *(undefined * PTR32 *)(this + 0x180);
    uVar1 = F_007c6380(pvVar3);
    iVar6 = *(int *)((int)pvVar3 + 0x18);
    uVar1 = F_00ab3630(uVar1);
    iVar6 = iVar6 * 0xf0;
    puVar7 = (undefined4 *)(iVar6 + uVar1);
    F_00561c50(*(undefined4 *)(this + 0x18c),*(undefined4 *)(iVar6 + 0x14 + uVar1));
    F_00561c70(*(undefined4 *)(this + 0x18c),puVar7[6]);
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0xa4))) = 1;
    puVar4 = (uint *)F_00ab36c0(puVar7[3]);
    if (puVar4 == (uint *)0x0) {
      puVar5 = &REFG(undefined, 0x10bf24b);
    }
    else {
      puVar5 = ((undefined *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
    }
    F_00584110(this_00,puVar5);
    puVar4 = (uint *)F_00ab36c0(puVar7[4]);
    if (puVar4 == (uint *)0x0) {
      puVar5 = &REFG(undefined, 0x10bf257);
    }
    else {
      puVar5 = ((undefined *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
    }
    F_00584110(this_01,puVar5);
    puVar4 = (uint *)F_00ab36c0(*puVar7);
    if (puVar4 == (uint *)0x0) {
      puVar5 = &REFG(undefined, 0x10bf26d);
    }
    else {
      puVar5 = ((undefined *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
    }
    F_00584110(this_02,puVar5);
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x38))))(*(int * PTR32 *)(this + 0x180));
    if (uVar1 == 0xc9) {
      uVar8 = 0x65;
    }
    else {
      uVar8 = 0x11;
    }
    F_0059d6a0(this,uVar8,1,0);
    ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  }
  return 0;
}

/* ref: FUN_0081e950 */
uint F_0081e950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81e950u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  F_00568380(pvVar2,0x17,param_2,param_3,0,0);
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  F_00568380(pvVar2,6,param_2,param_3,0,0);
  if (param_1 == 0) {
    uVar1 = F_00568380((undefined *)0x0,7,param_2,param_3,0,0);
    return uVar1;
  }
  uVar1 = F_00568380(*(undefined * PTR32 *)(param_1 + 0x70),7,param_2,param_3,0,0);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton::vf46 */
byte F_0081e9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81e9c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 local_8;
  
  if ((*(int *)(this + 0x18c) != 0) && (*(int *)(this + 0x180) != 0)) {
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*((undefined1 *)GEN_TOP((*(int *)(this + 0x180) + 0x28))));
    F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))),local_8);
    return 1;
  }
  return 0;
}

/* ref: FUN_0081ea00 */
uint F_0081ea00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81ea00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  bVar1 = F_0055a220(pvVar3,0x21);
  if (bVar1 == 0) {
    if (param_1 == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)(param_1 + 0x70);
    }
    F_00568380(pvVar3,0x21,param_2,param_3,0,0);
  }
  if (param_1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  bVar1 = F_0055a220(pvVar3,0x1f);
  if (bVar1 == 0) {
    if (param_1 == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)(param_1 + 0x70);
    }
    F_00568380(pvVar3,0x1f,param_2,param_3,0,0);
  }
  if (param_1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  bVar1 = F_0055a220(pvVar3,0x20);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    if (param_1 == 0) {
      uVar2 = F_00568380((undefined *)0x0,0x20,param_2,param_3,0,0);
      return uVar2;
    }
    uVar2 = F_00568380(*(undefined * PTR32 *)(param_1 + 0x70),0x20,param_2,param_3,0,0);
  }
  return uVar2;
}

/* ref: FUN_0081eab0 */
uint F_0081eab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81eab0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  F_005840a0(pvVar2,0x21,param_2,param_3,0);
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  F_005840a0(pvVar2,0x1f,param_2,param_3,0);
  if (param_1 == 0) {
    uVar1 = F_005840a0((undefined *)0x0,0x20,param_2,param_3,0);
    return uVar1;
  }
  uVar1 = F_005840a0(*(undefined * PTR32 *)(param_1 + 0x70),0x20,param_2,param_3,0);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIcon::vf37 */
uint F_0081eb20(unsigned int gen_a0)
{
  GEN_ENTER(0x81eb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x18c) != 0) {
    F_0081eab0(*(int *)(this + 0x18c),0,this);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIcon::vf46 */
byte F_0081eb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81eb50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * pAVar7;
  uint uVar8;
  undefined1 AVar9;
  
  if ((*(int *)(this + 0x18c) != 0) && (*(int *)(this + 0x180) != 0)) {
    iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x180) + 0xc)));
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this);
    if (iVar1 <= (int)uVar4) {
      return 0;
    }
    (*(undefined4 *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x14)), 1, 3),*((char *)GEN_TOP((*(int *)(this + 0x180) + 0x28))));
    if (*((char *)GEN_TOP((*(int *)(this + 0x180) + 0x28))) != '\0') {
      F_0081ea00(*(undefined4 *)(this + 0x18c),0,this);
    }
    if (*(int *)(this + 400) == 0) {
      pvVar6 = (undefined *)0x0;
    }
    else {
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_0055a300(pvVar6,(*(undefined4 *)(gen_frame + 0x14)));
    F_0058d980(*(undefined4 *)(this + 0x18c),(uint)*((ushort *)GEN_TOP((*(int *)(this + 0x180) + 0xc))));
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this);
    F_005623b0(*(undefined * PTR32 *)(this + 0x18c),uVar4);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this);
    pvVar6 = *(undefined * PTR32 *)(this + 0x180);
    *(uint *)(this + 0x184) = uVar4;
    uVar4 = F_007c6380(pvVar6);
    iVar1 = *(int *)((int)pvVar6 + 0x18);
    uVar5 = F_00ab3630(uVar4);
    uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x180) + 0x24)));
    uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x180) + 0xc)));
    uVar8 = 0;
    uVar4 = 1;
    if (uVar3 != 0) {
      pAVar7 = this + 0x194;
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)(uVar5 + iVar1 * 0xf0 + 0xc);
      do {
        if (0x1b < uVar8) {
          return 1;
        }
        AVar9 = (undefined1)((uVar2 & uVar4) != 0);
        pAVar7[4] = AVar9;
        (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),AVar9);
        *(undefined4 *)pAVar7 = *(*(undefined4 * PTR32 *)(gen_frame + 0x18));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x54))))(*(int * PTR32 *)(this + 0x18c),uVar8,(*(undefined4 *)(gen_frame + 0xc)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 1;
        pAVar7 = pAVar7 + 8;
        uVar8 = uVar8 + 1;
        uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      } while (uVar8 < uVar3);
    }
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconFacePaint::vf46 */
byte F_0081ecc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81ecc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined1 AVar4;
  
  bVar2 = F_0081eb50((undefined *)this,param_1,param_2);
  if ((bVar2 != 0) && (piVar1 = *(int * PTR32 *)(this + 0x180), piVar1 != (int *)0x0)) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1);
    AVar4 = (undefined1)((uVar3 & 0x80) != 0);
    this[0x27c] = AVar4;
    F_0059dde0(*(undefined * PTR32 *)(this + 0x278),CONCAT31((int3)(uVar3 >> 8),AVar4));
  }
  return bVar2;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconFeature::vf46 */
byte F_0081ed10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81ed10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined * pvVar9;
  uint uVar10;
  
  if ((*(int *)(this + 0x18c) != 0) && (*(int *)(this + 0x180) != 0)) {
    cVar1 = *((char *)GEN_TOP((*(int *)(this + 0x180) + 0x28)));
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),cVar1);
    if ((cVar1 != '\0') &&
       (bVar4 = F_0055a220(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))),0x21), bVar4 == 0)) {
      if (*(int *)(this + 0x18c) == 0) {
        pvVar9 = (undefined *)0x0;
      }
      else {
        pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
      }
      F_00568380(pvVar9,0x21,0,this,0,0);
    }
    if (*(int *)(this + 400) == 0) {
      pvVar9 = (undefined *)0x0;
    }
    else {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_0055a300(pvVar9,(*(undefined4 *)(gen_frame + 0x4)));
    F_0058d980(*(undefined4 *)(this + 0x18c),(uint)*((ushort *)GEN_TOP((*(int *)(this + 0x180) + 0xc))));
    pvVar9 = *(undefined * PTR32 *)(this + 0x180);
    *(undefined4 *)(this + 0x184) = 0xffffffff;
    uVar5 = F_007c6380(pvVar9);
    uVar6 = F_0081c170(*(undefined * PTR32 *)((int)pvVar9 + 4));
    uVar7 = F_00ab3630(uVar5);
    uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x180) + 0x24)));
    uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x180) + 0xc)));
    uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this);
    uVar10 = 0;
    uVar5 = 1;
    if (uVar3 != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = this + 0x194;
      do {
        if (0x1b < uVar10) {
          return 1;
        }
        *(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined4 *)(uVar7 + 0x1a4c + uVar6 * 0x1c + uVar10 * 4);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x54))))
                  (*(int * PTR32 *)(this + 0x18c),uVar10,(uint)((uVar2 & uVar5) != 0));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x5c))))
                  (*(undefined4 *)(this + 0x18c),uVar10,
                   (uint)((uVar8 >> ((byte)uVar10 & 0x1f) & 1) != 0));
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)(gen_frame + 0x8)) + 8;
        uVar10 = uVar10 + 1;
        uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      } while (uVar10 < uVar3);
    }
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconTatoo::vf46 */
byte F_0081ee80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81ee80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined * pvVar9;
  uint uVar10;
  
  if ((*(int *)(this + 0x18c) != 0) && (*(int *)(this + 0x180) != 0)) {
    cVar1 = *((char *)GEN_TOP((*(int *)(this + 0x180) + 0x28)));
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),cVar1);
    if ((cVar1 != '\0') &&
       (bVar4 = F_0055a220(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))),0x21), bVar4 == 0)) {
      if (*(int *)(this + 0x18c) == 0) {
        pvVar9 = (undefined *)0x0;
      }
      else {
        pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
      }
      F_00568380(pvVar9,0x21,0,this,0,0);
    }
    if (*(int *)(this + 400) == 0) {
      pvVar9 = (undefined *)0x0;
    }
    else {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_0055a300(pvVar9,(*(undefined4 *)(gen_frame + 0x0)));
    F_0058d980(*(undefined4 *)(this + 0x18c),(uint)*((ushort *)GEN_TOP((*(int *)(this + 0x180) + 0xc))));
    pvVar9 = *(undefined * PTR32 *)(this + 0x180);
    *(undefined4 *)(this + 0x184) = 0xffffffff;
    uVar5 = F_007c6380(pvVar9);
    uVar6 = F_0081c170(*(undefined * PTR32 *)((int)pvVar9 + 4));
    uVar7 = F_00ab3630(uVar5);
    uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x180) + 0x24)));
    uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x180) + 0xc)));
    uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this);
    uVar10 = 0;
    uVar5 = 1;
    if (uVar3 != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 0x194;
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)(uVar7 + uVar6 * 0x1c + 0x1a60);
      do {
        if (1 < uVar10) {
          return 1;
        }
        *(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x4)) = *(*(undefined4 * PTR32 *)(gen_frame + 0x8));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x54))))
                  (*(int * PTR32 *)(this + 0x18c),uVar10,(uint)((uVar2 & uVar5) != 0));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x5c))))
                  (*(undefined4 *)(this + 0x18c),uVar10,
                   (uint)((uVar8 >> ((byte)uVar10 & 0x1f) & 1) != 0));
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 1;
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 8;
        uVar10 = uVar10 + 1;
        uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      } while (uVar10 < uVar3);
    }
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonLicenseViewer::vf44 */
uint F_0081f000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81f000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined * this_00;
  undefined4 uVar5;
  
  this_00 = (undefined *)0x0;
  uVar3 = F_0055e2f0(this,2);
  if (uVar3 != 0) {
    this_00 = (undefined *)F_00559ba0(uVar3);
  }
  *(undefined4 *)(this + 0x180) = 0;
  uVar3 = F_0055e2f0(this,3);
  if (uVar3 == 0) goto LAB_0081f054;
  uVar3 = F_00559c20(uVar3);
  if (uVar3 == 0) {
LAB_0081f04b: ;
    uVar3 = 0;
  }
  else {
    uVar4 = F_005613a0(uVar3);
    if (uVar4 != 0xd) goto LAB_0081f04b;
  }
  *(uint *)(this + 0x180) = uVar3;
LAB_0081f054: ;
  if ((this_00 != (undefined *)0x0) && (*(int *)(this + 0x180) != 0)) {
    uVar2 = F_0055a020(this_00);
    F_0055a060(this_00,(uint)(ushort)(uVar2 - 0x14));
    F_00584580(this_00,1);
    F_0055ad70(this_00,1);
    F_005842a0(this_00,0xab6);
    uVar2 = F_0055a020(this_00);
    F_0055a060(this_00,(uint)(ushort)(uVar2 + 0x14));
    uVar5 = 0;
    uVar3 = F_0055e2f0(this,4);
    F_0058e3c0(*(undefined * PTR32 *)(this + 0x180),this_00,uVar3,uVar5);
  }
  bVar1 = F_0056b630(this,0x18ad9,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonLicenseViewer::vf52 */
byte F_0081f0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x81f0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  if (*param_1 == 9) {
    uVar1 = 0;
    if (*(int *)(this + 0x180) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    uVar2 = F_0055a350(uVar1);
    if ((char)uVar2 != '\0') {
      F_0059f6f0(*(undefined * PTR32 *)(this + 0x180),-(int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 0x180) + 0xc2))),1
                  );
    }
  }
  else {
    if (*param_1 != 10) {
      return 0;
    }
    uVar1 = 0;
    if (*(int *)(this + 0x180) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    uVar2 = F_0055a350(uVar1);
    if ((char)uVar2 != '\0') {
      F_0059f6f0(*(undefined * PTR32 *)(this + 0x180),(int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 0x180) + 0xc2))),1)
      ;
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_0081f170 */
uint F_0081f170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x81f170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_0059d6a0(this,*(undefined4 *)(&REFG(undefined, 0x10d6850) + param_1 * 4),1,1);
  if (param_1 == 0) {
    pvVar1 = (undefined *)F_0055e2f0(this,8);
    if (pvVar1 != (undefined *)0x0) {
      F_0059d670(pvVar1,0x65);
    }
    pvVar1 = (undefined *)F_0055e2f0(this,0xe);
    if (pvVar1 != (undefined *)0x0) {
      F_0059d670(pvVar1,0x65);
    }
    uVar4 = 0x14;
LAB_0081f1df: ;
    pvVar1 = (undefined *)F_0055e2f0(this,uVar4);
    if (pvVar1 != (undefined *)0x0) {
      F_0059d670(pvVar1,0x65);
    }
  }
  else {
    if (param_1 == 1) {
      uVar4 = 0x21;
      goto LAB_0081f1df;
    }
    if (param_1 == 3) {
      uVar4 = 0x32;
      goto LAB_0081f1df;
    }
  }
  if (param_1 == 0) {
    F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x10))),0,0,1);
    F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x14))),0,0,1);
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x18)));
  }
  else if (param_1 == 1) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x58)));
  }
  else {
    if (param_1 != 3) goto LAB_0081f250;
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x8c)));
  }
  F_0059ead0(pvVar1,0,0,1);
LAB_0081f250: ;
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
  return uVar2;
}

/* ref: FUN_0081f2b0 */
uint F_0081f2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x81f2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x180);
  if (param_1 < (uint)(*(int *)(uVar1 + 0x20) - *(int *)(uVar1 + 0x1c) >> 2)) {
    uVar1 = F_00584110((undefined *)*param_2,*((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x1c) + param_1 * 4))));
  }
  return uVar1;
}

/* ref: FUN_0081f2e0 */
uint F_0081f2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x81f2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x180);
  if (param_1 < (uint)(*(int *)(uVar1 + 0x30) - *(int *)(uVar1 + 0x2c) >> 2)) {
    uVar1 = F_00584110((undefined *)*param_2,*((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x2c) + param_1 * 4))));
  }
  return uVar1;
}

/* ref: FUN_0081f310 */
uint F_0081f310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x81f310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x180);
  if (param_1 < (uint)(*(int *)(uVar1 + 0x40) - *(int *)(uVar1 + 0x3c) >> 2)) {
    uVar1 = F_00584110((undefined *)*param_2,*((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x3c) + param_1 * 4))));
  }
  return uVar1;
}

/* ref: FUN_0081f340 */
uint F_0081f340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x81f340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x180);
  if (param_1 < (uint)(*(int *)(uVar1 + 0x60) - *(int *)(uVar1 + 0x5c) >> 2)) {
    uVar1 = F_00584110((undefined *)*param_2,*((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x5c) + param_1 * 4))));
  }
  return uVar1;
}

/* ref: FUN_0081f370 */
uint F_0081f370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x81f370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x180);
  if (param_1 < (uint)(*(int *)(uVar1 + 0x70) - *(int *)(uVar1 + 0x6c) >> 2)) {
    uVar1 = F_00584110((undefined *)*param_2,*((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x6c) + param_1 * 4))));
  }
  return uVar1;
}

/* ref: FUN_0081f3a0 */
uint F_0081f3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x81f3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x180);
  if (param_1 < (uint)(*(int *)(uVar1 + 0x94) - *(int *)(uVar1 + 0x90) >> 2)) {
    uVar1 = F_00584110((undefined *)*param_2,*((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x90) + param_1 * 4))));
  }
  return uVar1;
}

/* ref: FUN_0081f3e0 */
uint F_0081f3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x81f3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = *(int *)((int)this + 0x18c) - *(int *)((int)this + 0x188) >> 2;
  if (param_1 < uVar1) {
    this_00 = (undefined *)F_00559ba0(*param_2);
    uVar1 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_00584110(this_00,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x188) + param_1 * 4))));
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSupportSubEdit::vf37 */
uint F_0081f430(unsigned int gen_a0)
{
  GEN_ENTER(0x81f430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x1c8);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x144) = 0;
    *(undefined4 *)(iVar1 + 0x148) = 0;
    *(undefined4 *)(iVar1 + 0x14c) = 0;
  }
  if (*(int *)(this + 0x1cc) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1cc) + 0x70))),0x17,0,this,0);
  }
  if (*(int *)(this + 0x1d0) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1d0) + 0x70))),0x17,1,this,0);
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: FUN_0081f4a0 */
uint F_0081f4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x81f4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 in_ecx;
  undefined * this_00;
  
  uVar1 = F_0042b790(((undefined *)GEN_TOP((*(int *)((int)this + 0x1c4) + 0x9c))));
  if (uVar1 != 0) {
    in_ecx = 0;
    if (*(int *)((int)this + 0x1cc) != 0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1cc) + 0x70)));
    }
    uVar1 = F_0055a350(in_ecx);
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x1c8) + 0x9c)));
    if ((char)uVar1 == '\0') {
      uVar1 = F_0042b790(this_00);
      if (uVar1 == 0) {
        return 0;
      }
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1cc) + 0x28))))(*(int * PTR32 *)((int)this + 0x1cc),1);
      return uVar1;
    }
    uVar1 = F_0042b790(this_00);
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1cc) + 0x28))))(*(int * PTR32 *)((int)this + 0x1cc),0);
  return uVar1;
}

/* ref: FUN_0081f510 */
uint F_0081f510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x81f510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = *(int *)((int)this + 0x184) - *(int *)((int)this + 0x180) >> 2;
  if (param_1 < uVar1) {
    this_00 = (undefined *)F_00559ba0(*param_2);
    uVar1 = F_00584110(this_00,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + param_1 * 4))));
    if ((*(int *)((int)this + 0x1a0) < 1) || (*(int *)((int)this + 0x1b0) == 4)) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1d4) + 0x28))))(*(int * PTR32 *)((int)this + 0x1d4),0);
    }
  }
  return uVar1;
}

/* ref: FUN_0081f570 */
uint F_0081f570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x81f570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = *(int *)((int)this + 0x194) - *(int *)((int)this + 400) >> 2;
  if (param_1 < uVar1) {
    this_00 = (undefined *)F_00559ba0(*param_2);
    uVar1 = F_00584110(this_00,*((undefined4 *)GEN_TOP((*(int *)((int)this + 400) + param_1 * 4))));
    if ((*(int *)((int)this + 0x1a4) < 1) || (*(int *)((int)this + 0x1b0) == 4)) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1d8) + 0x28))))(*(int * PTR32 *)((int)this + 0x1d8),0);
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSupportSubEdit::vf25 */
uint F_0081f5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x81f5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 in_ecx;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  if (*(int *)(this + 0x1cc) == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1cc) + 0x70)));
  }
  uVar1 = F_0055a350(in_ecx);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),2);
  (*(undefined1 *)(gen_frame + 0x18)) = (char)uVar1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_0081f650 */
unsigned int F_0081f650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81f650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  char * pcVar1;
  
  if (param_1 != (undefined *)0x0) {
    if (((byte)*(undefined4 *)(param_2 + param_3 * 8) & 0xf) == 6) {
      pcVar1 = *(char * PTR32 *)(param_2 + 4 + param_3 * 8);
      if (*pcVar1 == '\0') {
        F_0055a300(*(undefined * PTR32 *)((int)param_1 + 0x70),0);
        F_00589280(param_1,pcVar1);
        return 0;
      }
      F_0055a300(*(undefined * PTR32 *)((int)param_1 + 0x70),1);
      F_00589280(param_1,pcVar1);
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonSupportSubView::vf2 */
uint F_0081f6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x81f6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 uVar2;
  uint * puVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 0xf) {
    if ((*(short *)(param_4 + 4) != 0) || (*(short *)(param_4 + 6) != 0)) {
      uVar2 = 0;
      if (*(int *)(this + 0x1a8) != 0) {
        uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a8) + 0x70)));
      }
      uVar1 = F_0055a350(uVar2);
      if ((char)uVar1 != '\0') {
        uVar1 = F_0059f6f0(*(undefined * PTR32 *)(this + 0x1a8),
                             ((uint)(*(short *)(param_4 + 6) < 1) * 2 + -1) *
                             (int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 0x1a8) + 0xc2))),1);
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
        *(undefined1 *)(param_3 + 0x15) = 2;
      }
    }
  }
  else if (uVar1 == 0x17) {
    if ((param_2 == 0) || (param_2 == 1)) {
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(int *)(gen_frame + 0x14)) = param_2;
      uVar1 = F_0055aaf0(*(undefined4 *)(this + 0x194));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
      (*(uint *)(gen_frame + 0x1c)) = uVar1;
      uVar1 = F_0055aaf0(*(undefined4 *)(this + 0x198));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
      (*(uint *)(gen_frame + 0x24)) = uVar1;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
      puVar3 = &(*(uint *)(gen_frame + 0x28));
      iVar4 = 2;
      do {
        puVar3 = puVar3 + -2;
        uVar1 = F_005a2670(puVar3);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar1;
    }
    if (param_2 == 2) {
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x8)) = 3;
      (*(int *)(gen_frame + 0xc)) = param_2;
      F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x8)));
      uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x8)));
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar1;
    }
  }
  else if (uVar1 == 0x21) {
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(int *)(gen_frame + 0x14)) = param_2;
    (*(int *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + *(int *)(param_4 + 8) * 4)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
    uVar2 = *(undefined4 *)(param_4 + 8);
    (*(uint *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0xc));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
    (*(uint *)(gen_frame + 0x24)) = uVar2;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
    F_00557670(param_3,0);
    puVar3 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 2;
    do {
      puVar3 = puVar3 + -2;
      uVar1 = F_005a2670(puVar3);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_0081f8c0 */
uint F_0081f8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x81f8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = *(int *)((int)this + 0x184) - *(int *)((int)this + 0x180) >> 2;
  if (param_1 < uVar1) {
    this_00 = (undefined *)F_00559ba0(*param_2);
    uVar1 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_00584110(this_00,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + param_1 * 4))));
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSupportSubView::vf52 */
byte F_0081f910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x81f910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  bVar1 = 0;
  if ((*(int *)(this + 400) != 4) && (*(int *)(this + 400) != 5)) {
    if (*param_1 == 9) {
      uVar2 = 0;
      if (*(int *)(this + 0x1a8) != 0) {
        uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a8) + 0x70)));
      }
      uVar3 = F_0055a350(uVar2);
      if ((char)uVar3 != '\0') {
        F_0059f6f0(*(undefined * PTR32 *)(this + 0x1a8),-(int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 0x1a8) + 0xc2)))
                     ,1);
      }
    }
    else {
      if (*param_1 != 10) {
        return 0;
      }
      uVar2 = 0;
      if (*(int *)(this + 0x1a8) != 0) {
        uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a8) + 0x70)));
      }
      uVar3 = F_0055a350(uVar2);
      if ((char)uVar3 != '\0') {
        F_0059f6f0(*(undefined * PTR32 *)(this + 0x1a8),(int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 0x1a8) + 0xc2))),
                     1);
        return 1;
      }
    }
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: FUN_0081f9d0 */
uint F_0081f9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x81f9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_007cc050((undefined *)((int)this + 0x23538));
  return uVar1;
}

/* ref: Client::UI2::RaptureAtkModule::vf49 */
uint F_0081f9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x81f9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_c;
  int local_8;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf0))(this);
  if ((char)uVar1 == '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0x640);
    iVar5 = 2;
    puVar6 = &REFG(undefined4, 0x10be120);
    do {
      ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,iVar5,*puVar6);
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + 1;
    } while ((int)puVar6 < 0x10be21c);
    puVar6 = &REFG(undefined4, 0x10be220);
    iVar5 = 1;
    do {
      ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,iVar5,*puVar6);
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + 1;
    } while ((int)puVar6 < 0x10be30c);
    iVar5 = 0;
    do {
      ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,iVar5,(&REFG(undefined4, 0x10be30c))[(int)(iVar5)]);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,0);
    if (uVar1 != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0xc))))(*(int * PTR32 *)(this + 0xc))));
      if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x44))) != *piVar2) {
        *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x44))) = *piVar2;
        *(undefined1 *)(uVar1 + 0x1d) = 1;
      }
    }
    if (*(undefined * PTR32 *)(this + 0x23208) != (undefined *)0x0) {
      F_00776010(*(undefined * PTR32 *)(this + 0x23208),8,4,100);
    }
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x23184) + 0x18))))(*(int * PTR32 *)(this + 0x23184))));
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,6)));
    if (pvVar3 != (undefined *)0x0) {
      local_8 = 0x10e;
      local_c = 4;
      do {
        uVar9 = 0;
        uVar8 = 1;
        uVar7 = 0;
        uVar1 = F_00461bb0(this_00,0x7eb,local_8 + -0x10d);
        F_00431250(pvVar3,local_8,uVar1,uVar7,uVar8,uVar9);
        local_8 = local_8 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      uVar1 = F_0043bd00(this_00,0x7ec,0,0);
      if (uVar1 != *((uint *)GEN_TOP((*(int *)((int)pvVar3 + 0x20) + 0x448)))) {
        *((uint *)GEN_TOP((*(int *)((int)pvVar3 + 0x20) + 0x448))) = uVar1;
        *(undefined1 *)((int)pvVar3 + 0x1d) = 1;
      }
      local_8 = 0x113;
      local_c = 6;
      do {
        uVar9 = 0;
        uVar8 = 1;
        uVar7 = 0;
        uVar1 = F_00461bb0(this_00,0x7ed,local_8 + -0x112);
        F_00431250(pvVar3,local_8,uVar1,uVar7,uVar8,uVar9);
        local_8 = local_8 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0x1e)));
    if (pvVar3 != (undefined *)0x0) {
      local_c = 7;
      iVar5 = 0x2e;
      do {
        uVar9 = 0;
        uVar8 = 1;
        uVar7 = 0;
        uVar1 = F_00461bb0(this_00,0x7ee,iVar5 + -0x2d);
        F_00431250(pvVar3,iVar5,uVar1,uVar7,uVar8,uVar9);
        iVar5 = iVar5 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      uVar1 = F_0043bd00(this_00,0x7ef,0,0);
      if (uVar1 != *((uint *)GEN_TOP((*(int *)((int)pvVar3 + 0x20) + 0xd4)))) {
        *((uint *)GEN_TOP((*(int *)((int)pvVar3 + 0x20) + 0xd4))) = uVar1;
        *(undefined1 *)((int)pvVar3 + 0x1d) = 1;
      }
    }
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0x15);
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = F_0043bd00(this_00,0x4a1,0,0);
      if (uVar1 != **(uint * PTR32 *)(uVar4 + 0x20)) {
        **(uint * PTR32 *)(uVar4 + 0x20) = uVar1;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
    }
    return uVar1;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,2,0x65);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,1,0x7b);
  return uVar1;
}

/* ref: FUN_0081fc50 */
uint F_0081fc50(unsigned int gen_a0)
{
  GEN_ENTER(0x81fc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_ecx;
  uint uVar1;
  undefined * puVar2;
  uint uVar3;
  uint * puVar4;
  int * piVar5;
  uint uVar6;
  undefined * puVar7;
  undefined * puVar8;
  int local_8;
  
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar3 = F_00414500(in_ecx,0xb9);
  uVar3 = *(uint *)(uVar3 + 0x14);
  puVar4 = (uint *)F_00414500(in_ecx,0xb9);
  uVar1 = *puVar4;
  local_8 = 0;
  uVar6 = 1;
  do {
    F_007c8940(this,local_8,(uint)((uVar3 & uVar6) != 0),(uint)((uVar1 & uVar6) != 0));
    local_8 = local_8 + 1;
    uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  } while (local_8 < 10);
  piVar5 = (int *)F_00414500(in_ecx,0x18b);
  F_007c8940(this,0xd,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx,0x18d);
  F_007c8940(this,0xe,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx,0x194);
  F_007c8940(this,0xf,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx,0x18c);
  F_007c8940(this,0x10,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx,0x181);
  F_007c8940(this,0x11,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx,0x188);
  F_007c8940(this,0x13,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx,0x18a);
  F_007c8940(this,0x15,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx,0x189);
  F_007c8940(this,0x16,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx,0x186);
  F_007c8940(this,0x17,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx,0x187);
  F_007c8940(this,0x18,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx,0x18e);
  F_007c8940(this,0x19,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx,400);
  F_007c8940(this,0x1a,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx,0x184);
  F_007c8940(this,0x1c,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx,0x185);
  F_007c8940(this,0x1d,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx,0x19c);
  F_007c8940(this,0x14,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx,0x182);
  F_007c8940(this,0x1b,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx,0x183);
  F_007c8940(this,0xb,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  uVar3 = F_00414500(in_ecx,0x19b);
  puVar8 = REFG(undefined * PTR32, 0x1328130);
  puVar2 = REFG(undefined * PTR32, 0x132812c);
  if (*(int *)(uVar3 + 0x14) == 0) {
    if (*(int *)((int)this + 0x23530) == 0) {
      return uVar3;
    }
    *(undefined4 *)((int)this + 0x23530) = 0;
    puVar7 = puVar2;
  }
  else {
    if (*(int *)((int)this + 0x23530) == 1) {
      return 1;
    }
    *(undefined4 *)((int)this + 0x23530) = 1;
    puVar7 = puVar8;
    puVar8 = puVar2;
  }
  piVar5 = (int *)F_0057f860((undefined *)((int)this + 0x23330),puVar8);
  if (piVar5 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar5 + 0xfc))(piVar5);
  }
  piVar5 = (int *)F_0057f860((undefined *)((int)this + 0x23330),puVar7);
  uVar3 = 0;
  if (piVar5 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar5 + 0xf8))(piVar5);
  }
  return uVar3;
}

/* ref: FUN_00820020 */
uint F_00820020(unsigned int gen_a0)
{
  GEN_ENTER(0x820020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_ecx;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined * PTR32 * ppuVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined3 extraout_var = 0;
  uint uVar7;
  undefined * puVar8;
  undefined4 uVar9;
  
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar3 = F_00414500(in_ecx,0xb9);
  uVar1 = *(uint *)(uVar3 + 0x14);
  puVar8 = (undefined *)0x0;
  uVar3 = 1;
  uVar7 = uVar1;
  do {
    ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
    do {
      if (ppuVar4[1] == puVar8) {
        if (((*ppuVar4 == (undefined *)0x0) ||
            (uVar5 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar5 == 0)) ||
           ((~*(byte *)(uVar5 + 0x126) & 1) != 0)) {
          uVar7 = uVar7 | uVar3;
        }
        else {
          uVar7 = uVar7 & ~uVar3;
        }
        goto LAB_00820097;
      }
      ppuVar4 = ppuVar4 + 3;
    } while ((int)ppuVar4 < 0x10c00c8);
    uVar7 = uVar7 | uVar3;
LAB_00820097: ;
    puVar8 = puVar8 + 1;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  } while ((int)puVar8 < 10);
  if (uVar7 != uVar1) {
    uVar9 = 1;
    pvVar6 = (undefined *)F_00414500(in_ecx,0xb9);
    F_00414a40(pvVar6,uVar7,uVar9);
  }
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0xd) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_008200dd;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_008200dd: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx,0x18b);
  F_00414a40(pvVar6,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0xe) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_0082011c;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_0082011c: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx,0x18d);
  F_00414a40(pvVar6,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0xf) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820158;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820158: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx,0x194);
  F_00414a40(pvVar6,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x10) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820195;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820195: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx,0x18c);
  F_00414a40(pvVar6,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x11) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_008201d5;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_008201d5: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx,0x181);
  F_00414a40(pvVar6,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x13) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820215;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820215: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx,0x188);
  F_00414a40(pvVar6,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x15) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820255;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820255: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx,0x18a);
  F_00414a40(pvVar6,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x16) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820295;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820295: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx,0x189);
  F_00414a40(pvVar6,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x17) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_008202d5;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_008202d5: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx,0x186);
  F_00414a40(pvVar6,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x18) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820315;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820315: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx,0x187);
  F_00414a40(pvVar6,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x19) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820355;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820355: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx,0x18e);
  F_00414a40(pvVar6,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x1a) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820395;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820395: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx,400);
  F_00414a40(pvVar6,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x1c) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_008203d5;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_008203d5: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx,0x184);
  F_00414a40(pvVar6,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x1d) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820415;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820415: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx,0x185);
  F_00414a40(pvVar6,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x14) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820455;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820455: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx,0x19c);
  F_00414a40(pvVar6,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x1b) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820495;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820495: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx,0x182);
  F_00414a40(pvVar6,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0xb) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330),*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_008204d5;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_008204d5: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx,0x183);
  bVar2 = F_00414a40(pvVar6,uVar3,uVar9);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_00820800 */
byte F_00820800(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x820800u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  byte bVar1;
  
  if (REFG(int, 0x1370c18) == 0) {
    *(byte *)(param_1 + 0x29254) = (byte)param_2;
    return (byte)param_2;
  }
  if ((byte)param_2 != 0) {
    bVar1 = F_004d2600(REFG(int, 0x1370c18),param_3);
    *(byte *)(param_1 + 0x29254) = (byte)param_2;
    return bVar1;
  }
  bVar1 = F_004d2690(REFG(int, 0x1370c18),param_3);
  *(undefined1 *)(param_1 + 0x29254) = 0;
  return bVar1;
}

/* ref: FUN_00820850 */
byte F_00820850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x820850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 5;
  iVar3 = 0;
  if (param_1 != 0) {
    uVar2 = F_00ab1c90(param_1);
    iVar3 = *(ushort *)(uVar2 + 0x1c) - 0x16;
    switch((unsigned int)(uintptr_t)(iVar3)) {
    case 0: ;
      uVar4 = 1;
      break;
    case 1: ;
      uVar4 = 0;
      break;
    case 2: ;
      uVar4 = 2;
      break;
    case 3: ;
      uVar4 = 3;
      break;
    case 4: ;
      uVar4 = 4;
    }
  }
  bVar1 = (byte)iVar3;
  if ((REFG(void * PTR32, 0x1370c18) != (undefined *)0x0) &&
     (bVar1 = F_004d25c0(REFG(void * PTR32, 0x1370c18),uVar4), REFG(void * PTR32, 0x1370c18) != (undefined *)0x0)) {
    bVar1 = F_004d2600(REFG(void * PTR32, 0x1370c18),(float)(float10)1);
  }
  *(undefined1 *)((int)this + 0x29254) = 1;
  return bVar1;
}

/* ref: FUN_008208f0 */
unsigned int F_008208f0(unsigned int gen_a0)
{
  GEN_ENTER(0x8208f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x29250) = 0;
  if (*(char *)((int)this + 0x29254) != '\0') {
    if (REFG(int, 0x1370c18) != 0) {
      F_004d2690(REFG(int, 0x1370c18),REFG(float, 0x1088068));
    }
    *(undefined1 *)((int)this + 0x29254) = 0;
  }
  return 0;
}

/* ref: FUN_00820930 */
uint F_00820930(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x820930u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float * pfVar1;
  float fVar2;
  float10 fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  float local_1c;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  
  fVar4 = REFG(float, 0x10928e4);
  fVar7 = (float10)param_2;
  local_8 = REFG(float, 0x10928e4);
  local_c = 0.0;
  local_1c = 0.0;
  local_18 = 0.0;
  local_14 = 0.0;
  if (!(*(float *)(param_1 + 0x29228) < 0.0)) {
    local_8 = REFG(float, 0x1087f04);
    fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29220) * fVar7 +
                   (float10)*(float *)(param_1 + 0x29224))));
    *(float *)(param_1 + 0x29224) = fVar2;
    *(float *)(param_1 + 0x29228) = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29228) - fVar7)));
    fVar3 = (float10)0;
    local_c = (float)((float10)fVar2 + fVar3);
    local_1c = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29214) + fVar3)));
    local_18 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29218) + fVar3)));
    local_14 = ((float)GEN_TOF((fVar3 + (float10)*(float *)(param_1 + 0x2921c))));
  }
  pfVar1 = (float *)(param_1 + 0x29240);
  if (GEN_ISNAN(*pfVar1) || (0.0 < *pfVar1 || *pfVar1 == 0.0)) {
    local_8 = (float)((float10)local_8 * (float10)REFG(double, 0x1088108));
    *(float *)(param_1 + 0x2923c) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29238) * fVar7 +
                (float10)*(float *)(param_1 + 0x2923c))));
    *(float *)(param_1 + 0x29240) = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29240) - fVar7)));
    local_c = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x2923c) + (float10)local_c)));
    local_1c = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x2922c) + (float10)local_1c)));
    local_18 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29230) + (float10)local_18)));
    local_14 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29234) + (float10)local_14)));
  }
  if ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(local_8)) && (!(fVar4 < local_8) && fVar4 != local_8)) {
    *(float *)(param_1 + 0x29244) = (float)((float10)local_c * (float10)local_8);
  }
  iVar5 = REFG(int, 0x1371290);
  if (*(double *)&REFG(undefined, 0x109ce00) < (double)*(float *)(param_1 + 0x29244)) {
    uVar6 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),0x10,1,1);
    if (*(char *)(iVar5 + 0x318) == '\x01') {
      uVar6 = 0;
      if (iVar5 + 0x2f0U != 0) {
        *(undefined4 *)(iVar5 + 0x2f4) = 0;
        *(float *)(iVar5 + 0x2f8) =
             ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29244) * (float10)*(double *)&REFG(undefined, 0x10947f0))));
        fVar7 = (float10)local_8;
        *(float *)(iVar5 + 0x2fc) = (float)(fVar7 * (float10)local_1c);
        *(float *)(iVar5 + 0x300) = (float)((float10)local_18 * fVar7);
        *(float *)(iVar5 + 0x304) = (float)(fVar7 * (float10)local_14);
        return iVar5 + 0x2f0U;
      }
    }
  }
  else {
    uVar6 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),0x10,0,1);
  }
  return uVar6;
}

/* ref: FUN_00820af0 */
unsigned int F_00820af0(unsigned int gen_a0)
{
  GEN_ENTER(0x820af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x48))))(*(int * PTR32 *)((int)this + 0x23184));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x184);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    if ((char)uVar2 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00820b30 */
byte F_00820b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x820b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * puVar1;
  uint * this_00;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar2 = param_2;
  if ((*(int *)((int)this + 0x29250) == 2) && (param_1 == 0)) {
    fVar4 = (float10)(int)param_2;
    if ((int)param_2 < 0) {
      fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    if (REFG(int, 0x1370c18) != 0) {
      F_004d2690(REFG(int, 0x1370c18),(float)(fVar4 / (float10)*(double *)&REFG(undefined, 0x10943d8)));
    }
    *(undefined1 *)((int)this + 0x29254) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 8))))(*(int * PTR32 *)((int)this + 0x23184),2,1);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x23330) + 0x4c))))((int)this + 0x23330,0x3e,1,1);
    *(undefined4 *)((int)this + 0x29250) = 0;
    uVar2 = param_2 | 0x80000000;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  puVar1 = REFG(undefined * PTR32, 0x132723c);
  if (param_1 != 1) {
    puVar1 = REFG(undefined * PTR32, 0x1327fe8);
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,puVar1,4,&(*(undefined4 *)(gen_frame + 0x8)),param_4,param_5,0);
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar3 = 3;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (byte)uVar2;
}

/* ref: FUN_00820c80 */
byte F_00820c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x820c80u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  byte bVar1;
  
  if (*(int *)(param_1 + 0x231a4) != 0) {
    bVar1 = F_007d5e70(*(int *)(param_1 + 0x231a4),param_2,param_3,param_4);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00820cb0 */
uint F_00820cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092ba50(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820cc0 */
uint F_00820cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092bbe0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820cd0 */
uint F_00820cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092bd70(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820ce0 */
uint F_00820ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092bf00(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820cf0 */
uint F_00820cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092c090(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820d00 */
uint F_00820d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092c220(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820d10 */
uint F_00820d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092c3b0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820d20 */
uint F_00820d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092c540(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820d30 */
uint F_00820d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092c6d0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820d40 */
uint F_00820d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092aab0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820d50 */
uint F_00820d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092c860(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820d60 */
uint F_00820d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092c9f0(this,REFG(undefined * PTR32, 0x1328008),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00820d90 */
uint F_00820d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092cb80(this,REFG(undefined * PTR32, 0x1328010),param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820dc0 */
uint F_00820dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092cd10(this,REFG(undefined * PTR32, 0x1328014),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00820df0 */
uint F_00820df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092cea0(this,REFG(undefined * PTR32, 0x1328018),param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820e20 */
uint F_00820e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092d030(this,REFG(undefined * PTR32, 0x132801c),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00820e50 */
uint F_00820e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092d1c0(this,REFG(undefined * PTR32, 0x1328020),param_2,param_3,param_4,param_5,param_6,0);
  return uVar1;
}

/* ref: FUN_00820e80 */
uint F_00820e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092d350(this,REFG(undefined * PTR32, 0x1328024),param_2,param_3,param_4,param_5,
                       param_6,8);
  return uVar1;
}

/* ref: FUN_00820eb0 */
uint F_00820eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092d4e0(this,REFG(undefined * PTR32, 0x132802c),param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820ee0 */
uint F_00820ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092d670(this,REFG(undefined * PTR32, 0x1328030),param_2,param_3,param_4,param_5,param_6,param_7)
  ;
  return uVar1;
}

/* ref: FUN_00820f10 */
uint F_00820f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092d800(this,REFG(undefined * PTR32, 0x1328074),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00820f40 */
uint F_00820f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092d990(this,REFG(undefined * PTR32, 0x1328078),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00820f70 */
uint F_00820f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092db20(this,REFG(undefined * PTR32, 0x1328080),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00820fa0 */
uint F_00820fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092dcb0(this,REFG(undefined * PTR32, 0x1328084),param_2,param_3,param_4,param_5,param_6,10);
  return uVar1;
}

/* ref: FUN_00820fd0 */
uint F_00820fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x820fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092de40(this,REFG(undefined * PTR32, 0x132808c),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00821000 */
uint F_00821000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092dfd0(this,param_1,param_2,param_3,param_4,param_5,param_6,5);
  return uVar1;
}

/* ref: FUN_00821030 */
uint F_00821030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092e160(this,REFG(undefined * PTR32, 0x1328094),param_2,param_3,param_4,param_5,param_6,
                       5);
  return uVar1;
}

/* ref: FUN_00821060 */
uint F_00821060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092e2f0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821070 */
uint F_00821070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092e480(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821080 */
uint F_00821080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092e610(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821090 */
uint F_00821090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092e7a0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008210a0 */
uint F_008210a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8210a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092e930(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008210b0 */
uint F_008210b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8210b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092eac0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008210c0 */
uint F_008210c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8210c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092ec50(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008210d0 */
uint F_008210d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8210d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092ede0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008210e0 */
uint F_008210e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8210e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092ef70(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008210f0 */
uint F_008210f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8210f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092f100(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821100 */
uint F_00821100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092f290(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821110 */
uint F_00821110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092f420(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821120 */
uint F_00821120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092f5b0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821130 */
uint F_00821130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092f740(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821140 */
uint F_00821140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092f8d0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821150 */
uint F_00821150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092fa60(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821160 */
uint F_00821160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092fbf0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821170 */
uint F_00821170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092fd80(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821180 */
uint F_00821180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092ff10(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821190 */
uint F_00821190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009300a0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008211a0 */
uint F_008211a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8211a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00930230(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008211b0 */
uint F_008211b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8211b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009303c0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008211c0 */
uint F_008211c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8211c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00930550(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008211d0 */
uint F_008211d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8211d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009306e0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008211e0 */
uint F_008211e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8211e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00930870(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008211f0 */
uint F_008211f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8211f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00930a00(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821200 */
uint F_00821200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00930b90(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821210 */
uint F_00821210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00930d20(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821220 */
uint F_00821220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00930eb0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821230 */
uint F_00821230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00931040(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821240 */
uint F_00821240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009311d0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821250 */
uint F_00821250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00931360(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821260 */
uint F_00821260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009314f0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821270 */
uint F_00821270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00931680(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821280 */
uint F_00821280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00931810(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821290 */
uint F_00821290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009319a0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008212a0 */
uint F_008212a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8212a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00931b30(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008212b0 */
uint F_008212b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8212b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00931cc0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008212c0 */
uint F_008212c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8212c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00931e50(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008212d0 */
uint F_008212d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8212d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00931fe0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008212e0 */
uint F_008212e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8212e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00932170(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008212f0 */
uint F_008212f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8212f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00932300(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821300 */
uint F_00821300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00932490(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821310 */
uint F_00821310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00932620(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821320 */
uint F_00821320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009327b0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821330 */
uint F_00821330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00932940(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821340 */
uint F_00821340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00932ad0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821350 */
uint F_00821350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00932c60(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821360 */
uint F_00821360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00932df0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821370 */
uint F_00821370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00932f80(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821380 */
uint F_00821380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00933110(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821390 */
uint F_00821390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009332a0(this,param_1,param_2,param_3,param_4,param_5,param_6,7);
  return uVar1;
}

/* ref: FUN_008213c0 */
uint F_008213c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8213c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092b0f0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008213d0 */
uint F_008213d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8213d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00933430(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008213e0 */
uint F_008213e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8213e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092af60(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008213f0 */
uint F_008213f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8213f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009335c0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821400 */
uint F_00821400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092b730(this,param_1,param_2,param_3,param_4,param_5,param_6,5);
  return uVar1;
}

/* ref: FUN_00821430 */
uint F_00821430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092b5a0(this,param_1,param_2,param_3,param_4,param_5,param_6,5);
  return uVar1;
}

/* ref: FUN_00821460 */
uint F_00821460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092b410(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821470 */
uint F_00821470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00933750(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821480 */
uint F_00821480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009338e0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821490 */
uint F_00821490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00933a70(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008214a0 */
uint F_008214a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8214a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00933c00(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008214b0 */
uint F_008214b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8214b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00933d90(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008214c0 */
uint F_008214c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8214c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00933f20(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008214d0 */
uint F_008214d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8214d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092b280(this,param_1,param_2,param_3,param_4,param_5,param_6,1);
  return uVar1;
}

/* ref: FUN_00821500 */
uint F_00821500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009340b0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821510 */
uint F_00821510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00934240(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821520 */
uint F_00821520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009343d0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821530 */
uint F_00821530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00934560(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821540 */
uint F_00821540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009346f0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821550 */
uint F_00821550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00934880(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821560 */
uint F_00821560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00934a10(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821570 */
uint F_00821570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00934ba0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821580 */
uint F_00821580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00934d30(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821590 */
uint F_00821590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00934ec0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008215a0 */
uint F_008215a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8215a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00935050(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008215b0 */
uint F_008215b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8215b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009351e0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008215c0 */
uint F_008215c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8215c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00935370(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008215d0 */
uint F_008215d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8215d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00935500(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008215e0 */
uint F_008215e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8215e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00935690(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008215f0 */
uint F_008215f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8215f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00935820(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821600 */
uint F_00821600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009359b0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821610 */
uint F_00821610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00935b40(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821620 */
uint F_00821620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00935cd0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821630 */
uint F_00821630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00935e60(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821640 */
uint F_00821640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00935ff0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821650 */
uint F_00821650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00936180(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821660 */
uint F_00821660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00936310(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821670 */
uint F_00821670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009364a0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821680 */
uint F_00821680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00936630(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821690 */
uint F_00821690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009367c0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008216a0 */
uint F_008216a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8216a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092c220(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008216b0 */
uint F_008216b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8216b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0092c220(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008216c0 */
uint F_008216c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8216c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00936950(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008216d0 */
uint F_008216d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8216d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00936ae0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008216e0 */
uint F_008216e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8216e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00936c70(this,REFG(undefined * PTR32, 0x132809c),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00821710 */
uint F_00821710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00936e00(this,REFG(undefined * PTR32, 0x13280a0),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00821740 */
uint F_00821740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00936f90(this,REFG(undefined * PTR32, 0x13280a4),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00821770 */
uint F_00821770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00937120(this,REFG(undefined * PTR32, 0x13280a8),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_008217a0 */
uint F_008217a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8217a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009372b0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008217b0 */
uint F_008217b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8217b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00937440(this,REFG(undefined * PTR32, 0x13280ac),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_008217e0 */
uint F_008217e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8217e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009375d0(this,REFG(undefined * PTR32, 0x13280b0),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00821810 */
uint F_00821810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00937760(this,REFG(undefined * PTR32, 0x13280b4),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821840 */
uint F_00821840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009378f0(this,REFG(undefined * PTR32, 0x13280b8),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821870 */
uint F_00821870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00937a80(this,REFG(undefined * PTR32, 0x13280bc),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_008218a0 */
uint F_008218a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8218a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00937c10(this,REFG(undefined * PTR32, 0x13280c0),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_008218d0 */
uint F_008218d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8218d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00937da0(this,REFG(undefined * PTR32, 0x13280c4),param_2,param_3,param_4,param_5,param_6
                       ,param_7);
  return uVar1;
}

/* ref: FUN_00821900 */
uint F_00821900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00937f30(this,REFG(undefined * PTR32, 0x13280c8),param_2,param_3,param_4,param_5,
                       param_6,5);
  return uVar1;
}

/* ref: FUN_00821930 */
uint F_00821930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009380c0(this,REFG(undefined * PTR32, 0x13280cc),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821960 */
uint F_00821960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00938250(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821970 */
uint F_00821970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009383e0(this,REFG(undefined * PTR32, 0x13280d0),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_008219a0 */
uint F_008219a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8219a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00938570(this,REFG(undefined * PTR32, 0x13280d4),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_008219d0 */
uint F_008219d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8219d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00938700(this,REFG(undefined * PTR32, 0x13280d8),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00821a00 */
uint F_00821a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00938890(this,REFG(undefined * PTR32, 0x13280dc),param_2,param_3,param_4,param_5,param_6
                       ,2);
  return uVar1;
}

/* ref: FUN_00821a30 */
uint F_00821a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00938a20(this,REFG(undefined * PTR32, 0x13280e0),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821a60 */
uint F_00821a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00938bb0(this,REFG(undefined * PTR32, 0x13280e4),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821a90 */
uint F_00821a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00938d40(this,REFG(undefined * PTR32, 0x13280ec),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821ac0 */
uint F_00821ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00938ed0(this,REFG(undefined * PTR32, 0x13280f0),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821af0 */
uint F_00821af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00939060(this,REFG(undefined * PTR32, 0x13280f4),param_2,param_3,param_4,param_5,param_6,2)
  ;
  return uVar1;
}

/* ref: FUN_00821b20 */
uint F_00821b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009391f0(this,REFG(undefined * PTR32, 0x13280f8),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821b50 */
uint F_00821b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00939380(this,REFG(undefined * PTR32, 0x13280fc),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00821b80 */
uint F_00821b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00939510(this,REFG(undefined * PTR32, 0x1328100),param_2,param_3,param_4,param_5,param_6,3)
  ;
  return uVar1;
}

/* ref: FUN_00821bb0 */
uint F_00821bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009396a0(this,REFG(undefined * PTR32, 0x1328104),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00821be0 */
uint F_00821be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00939830(this,REFG(undefined * PTR32, 0x1328108),param_2,param_3,param_4,param_5,param_6,
                       2);
  return uVar1;
}

/* ref: FUN_00821c10 */
uint F_00821c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009399c0(this,REFG(undefined * PTR32, 0x132810c),param_2,param_3,param_4,param_5,param_6,2
                      );
  return uVar1;
}

/* ref: FUN_00821c40 */
uint F_00821c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00939b50(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821c50 */
uint F_00821c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00939ce0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821c60 */
uint F_00821c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00939e70(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821c70 */
uint F_00821c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0093a000(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821c80 */
uint F_00821c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0093a190(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821c90 */
uint F_00821c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0093a320(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821ca0 */
uint F_00821ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0093a4b0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821cb0 */
uint F_00821cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0093a640(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821cc0 */
uint F_00821cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0093a7d0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821cd0 */
uint F_00821cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0093a960(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821ce0 */
uint F_00821ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0093aaf0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821cf0 */
uint F_00821cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0093ac80(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821d00 */
uint F_00821d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0093ae10(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821d10 */
uint F_00821d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0093afa0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821d20 */
uint F_00821d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0093b130(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821d30 */
uint F_00821d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0093b2c0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821d40 */
uint F_00821d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0093b450(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821d50 */
uint F_00821d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0093b5e0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821d60 */
uint F_00821d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00939060(this,REFG(undefined * PTR32, 0x132811c),param_2,param_3,param_4,param_5,param_6,2);
  return uVar1;
}

/* ref: FUN_00821d90 */
uint F_00821d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00939510(this,REFG(undefined * PTR32, 0x1328120),param_2,param_3,param_4,param_5,param_6,3);
  return uVar1;
}

/* ref: FUN_00821dc0 */
uint F_00821dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0093b770(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821dd0 */
uint F_00821dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x821dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0093b900(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821de0 */
uint F_00821de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x821de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
    if (uVar1 == 1) {
      uVar1 = F_007c9780(param_2);
      if (0 < (int)uVar1) {
        F_007c9860(param_1,1,uVar1 - 1);
        return uVar1;
      }
    }
    else if (uVar1 == 2) {
      uVar1 = F_007c9780(param_2);
      if (0 < (int)uVar1) {
        F_007c9860(param_1,2,uVar1 - 1);
      }
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00821e50 */
uint F_00821e50(void)
{
  GEN_ENTER(0x821e50u, 0u, 0u, 0u, 0u);
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  *(undefined4 *)&REFG(undefined, 0x148a0fc) = 0xfffeffe8;
  *(undefined4 *)&REFG(undefined, 0x148a104) = 0xfffeffe8;
  *(undefined4 *)&REFG(undefined, 0x148a0f8) = 0xff985008;
  *(undefined4 *)&REFG(undefined, 0x148a100) = 0xff985008;
  *(undefined4 *)&REFG(undefined, 0x148a0a0) = 0xff000000;
  *(undefined4 *)&REFG(undefined, 0x148a0a4) = 0xffbfbfbf;
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar3 = F_00414500(uVar1,0x129);
  uVar2 = *(undefined4 *)(uVar3 + 0x14);
  uVar3 = F_00414500(uVar1,0x12a);
  *(undefined4 *)&REFG(undefined, 0x148a070) = *(undefined4 *)(uVar3 + 0x14);
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  *(undefined4 *)&REFG(undefined, 0x148a074) = uVar2;
  uVar3 = F_00414500(uVar1,0xf3);
  uVar2 = *(undefined4 *)(uVar3 + 0x14);
  uVar3 = F_00414500(uVar1,0xf4);
  *(undefined4 *)&REFG(undefined, 0x148a078) = *(undefined4 *)(uVar3 + 0x14);
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  *(undefined4 *)&REFG(undefined, 0x148a07c) = uVar2;
  uVar3 = F_00414500(uVar1,0x100);
  uVar2 = *(undefined4 *)(uVar3 + 0x14);
  uVar3 = F_00414500(uVar1,0x101);
  *(undefined4 *)&REFG(undefined, 0x148a080) = *(undefined4 *)(uVar3 + 0x14);
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  *(undefined4 *)&REFG(undefined, 0x148a084) = uVar2;
  uVar3 = F_00414500(uVar1,0x10e);
  uVar2 = *(undefined4 *)(uVar3 + 0x14);
  uVar3 = F_00414500(uVar1,0x10f);
  *(undefined4 *)&REFG(undefined, 0x148a088) = *(undefined4 *)(uVar3 + 0x14);
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  *(undefined4 *)&REFG(undefined, 0x148a08c) = uVar2;
  uVar3 = F_00414500(uVar1,0x119);
  uVar2 = *(undefined4 *)(uVar3 + 0x14);
  uVar3 = F_00414500(uVar1,0x11a);
  *(undefined4 *)&REFG(undefined, 0x148a090) = *(undefined4 *)(uVar3 + 0x14);
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  *(undefined4 *)&REFG(undefined, 0x148a094) = uVar2;
  uVar3 = F_00414500(uVar1,0x115);
  uVar2 = *(undefined4 *)(uVar3 + 0x14);
  uVar3 = F_00414500(uVar1,0x116);
  *(undefined4 *)&REFG(undefined, 0x148a098) = *(undefined4 *)(uVar3 + 0x14);
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  *(undefined4 *)&REFG(undefined, 0x148a09c) = uVar2;
  uVar3 = F_00414500(uVar1,0x119);
  uVar2 = *(undefined4 *)(uVar3 + 0x14);
  uVar3 = F_00414500(uVar1,0x11a);
  *(undefined4 *)&REFG(undefined, 0x148a0a8) = *(undefined4 *)(uVar3 + 0x14);
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  *(undefined4 *)&REFG(undefined, 0x148a0ac) = uVar2;
  uVar3 = F_00414500(uVar1,0x11d);
  uVar2 = *(undefined4 *)(uVar3 + 0x14);
  uVar3 = F_00414500(uVar1,0x11e);
  *(undefined4 *)&REFG(undefined, 0x148a0b0) = *(undefined4 *)(uVar3 + 0x14);
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  *(undefined4 *)&REFG(undefined, 0x148a0b4) = uVar2;
  uVar3 = F_00414500(uVar1,0x121);
  uVar2 = *(undefined4 *)(uVar3 + 0x14);
  uVar3 = F_00414500(uVar1,0x122);
  *(undefined4 *)&REFG(undefined, 0x148a0b8) = *(undefined4 *)(uVar3 + 0x14);
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  *(undefined4 *)&REFG(undefined, 0x148a0bc) = uVar2;
  uVar3 = F_00414500(uVar1,0x125);
  uVar2 = *(undefined4 *)(uVar3 + 0x14);
  uVar3 = F_00414500(uVar1,0x126);
  *(undefined4 *)&REFG(undefined, 0x148a0c0) = *(undefined4 *)(uVar3 + 0x14);
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  *(undefined4 *)&REFG(undefined, 0x148a0c4) = uVar2;
  uVar3 = F_00414500(uVar1,0x125);
  uVar2 = *(undefined4 *)(uVar3 + 0x14);
  uVar3 = F_00414500(uVar1,0x126);
  *(undefined4 *)&REFG(undefined, 0x148a0c8) = *(undefined4 *)(uVar3 + 0x14);
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  *(undefined4 *)&REFG(undefined, 0x148a0cc) = uVar2;
  uVar3 = F_00414500(uVar1,0x12d);
  uVar2 = *(undefined4 *)(uVar3 + 0x14);
  uVar3 = F_00414500(uVar1,0x12e);
  *(undefined4 *)&REFG(undefined, 0x148a0d0) = *(undefined4 *)(uVar3 + 0x14);
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  *(undefined4 *)&REFG(undefined, 0x148a0d4) = uVar2;
  uVar3 = F_00414500(uVar1,0xf8);
  uVar2 = *(undefined4 *)(uVar3 + 0x14);
  uVar3 = F_00414500(uVar1,0xf9);
  *(undefined4 *)&REFG(undefined, 0x148a0d8) = *(undefined4 *)(uVar3 + 0x14);
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  *(undefined4 *)&REFG(undefined, 0x148a0dc) = uVar2;
  uVar3 = F_00414500(uVar1,0xfc);
  uVar2 = *(undefined4 *)(uVar3 + 0x14);
  uVar3 = F_00414500(uVar1,0xfd);
  *(undefined4 *)&REFG(undefined, 0x148a0e0) = *(undefined4 *)(uVar3 + 0x14);
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  *(undefined4 *)&REFG(undefined, 0x148a0e4) = uVar2;
  uVar3 = F_00414500(uVar1,0x130);
  uVar2 = *(undefined4 *)(uVar3 + 0x14);
  uVar3 = F_00414500(uVar1,0x131);
  *(undefined4 *)&REFG(undefined, 0x148a0e8) = *(undefined4 *)(uVar3 + 0x14);
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  *(undefined4 *)&REFG(undefined, 0x148a0ec) = uVar2;
  uVar3 = F_00414500(uVar1,0x132);
  uVar2 = *(undefined4 *)(uVar3 + 0x14);
  uVar3 = F_00414500(uVar1,0x133);
  *(undefined4 *)&REFG(undefined, 0x148a0f0) = *(undefined4 *)(uVar3 + 0x14);
  *(undefined4 *)&REFG(undefined, 0x148a0f4) = uVar2;
  return 0;
}

/* ref: FUN_00822230 */
uint F_00822230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x822230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  int param_6 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 gen_out[0x4];
  undefined1 uVar1;
  ushort uVar2;
  double dVar3;
  byte bVar4;
  uint uVar5;
  int * this_00;
  int iVar6;
  byte * pbVar7;
  undefined * pvVar8;
  uint uVar9;
  uint * puVar10;
  byte * pbVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int * piVar17;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  this_00 = (int *)F_00a5f290(param_4);
  if (this_00 == (int *)0x0) {
    F_00c47745(uVar5 ^ (uint)(uint)(gen_out + 0x0));
    return 0xffffffff;
  }
  iVar6 = this_00[0x5a5];
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else if (this_00[0x5a4] < iVar6) {
    dVar3 = (double)((float)GEN_TOF((((float10)this_00[0x5a4] * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                           (float10)iVar6)));
    if (dVar3 < 0.0) {
      iVar6 = (int)(dVar3 - REFG(double, 0x1088108));
    }
    else {
      iVar6 = (int)(dVar3 + REFG(double, 0x1088108));
    }
  }
  else {
    iVar6 = 100;
  }
  if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x18 + param_5 * 4))) != iVar6) {
    *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x18 + param_5 * 4))) = iVar6;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  if (this_00[0x5a4] != 0) {
    (*(uint *)(gen_frame + 0x8)) = 0x20;
  }
  pbVar7 = (byte *)(uint)*(byte *)((int)this_00 + 0x1689);
  if ((*(byte *)(this_00 + 0xb75) & 1) == 0) {
    if (*(int *)(param_1 + 0x18) != -1) {
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0x7f3;
      pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                                 (*(int * PTR32 *)((int)this + 0x23184))));
      uVar9 = F_0043bd00(pvVar8,uVar14,uVar15,uVar16);
      F_0042e430((undefined *)((int)this + 0x22d40),uVar9);
      piVar17 = *(int * PTR32 *)((int)this + 0x23184);
      uVar9 = F_0042a990((int)this + 0x22d40);
      uVar14 = 0x7f2;
      pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar17 + 0x18))(piVar17)));
      uVar9 = F_00461190(pvVar8,uVar14,uVar9);
      F_0042e430((undefined *)(param_1 + 0x16c),uVar9);
    }
    (*(byte * PTR32 *)(gen_frame + 0x14)) = (byte *)0xffffffff;
    pbVar7 = (*(byte * PTR32 *)(gen_frame + 0x14));
  }
  else if ((byte *)*(uint *)(param_1 + 0x18) != pbVar7) {
    uVar9 = F_00435340(pbVar7);
    F_0042e430((undefined *)((int)this + 0x22d40),uVar9);
    piVar17 = *(int * PTR32 *)((int)this + 0x23184);
    uVar9 = F_0042a990((int)this + 0x22d40);
    uVar14 = 0x7f2;
    pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar17 + 0x18))(piVar17)));
    uVar9 = F_00461190(pvVar8,uVar14,uVar9);
    F_0042e430((undefined *)(param_1 + 0x16c),uVar9);
  }
  *(byte * PTR32 *)(param_1 + 0x18) = pbVar7;
  uVar9 = ((code *)*(gen_code32 *)(*this_00 + 4))(this_00);
  if (uVar9 == 1) {
    uVar2 = *(ushort *)((int)this_00 + 0x168e);
    uVar1 = *(undefined1 *)((int)this_00 + 0x18a);
    bVar4 = F_007608a0(this_00);
    if (bVar4 == 0) {
      (*(byte * PTR32 *)(gen_frame + 0x14)) = &REFG(undefined, 0x10bdab2);
      if ((uVar2 != 0) && (puVar10 = (uint *)F_00ab2020((uint)uVar2), puVar10 != (uint *)0x0)) {
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) | (char)puVar10[2] != '\0';
        uVar9 = ((code *)*(gen_code32 *)(*this_00 + 0x1c))(this_00);
        if ((char)uVar9 != '\0') {
          puVar10 = puVar10 + 1;
        }
        (*(byte * PTR32 *)(gen_frame + 0x14)) = ((byte *)GEN_TOP(((*puVar10 & 0xffffff) + (int)puVar10)));
      }
      pbVar11 = (byte *)F_0042a990(param_1 + 0xc4);
      pbVar7 = (*(byte * PTR32 *)(gen_frame + 0x14));
      do {
        bVar4 = *pbVar11;
        bVar12 = bVar4 < *pbVar7;
        if (bVar4 != *pbVar7) {
LAB_008224e6: ;
          iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_008224eb;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar12 = bVar4 < pbVar7[1];
        if (bVar4 != pbVar7[1]) goto LAB_008224e6;
        pbVar11 = pbVar11 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar4 != 0);
      iVar6 = 0;
LAB_008224eb: ;
      if (iVar6 != 0) {
        F_0042e430((undefined *)(param_1 + 0xc4),(*(byte * PTR32 *)(gen_frame + 0x14)));
        F_0042e430((undefined *)(param_1 + 0x118),(*(byte * PTR32 *)(gen_frame + 0x14)));
      }
      if ((char)this_00[0x59b] == '\0') {
        *(undefined1 *)(param_1 + 0x1c0) = 0;
        F_0042e430((undefined *)(param_1 + 0x70),&REFG(undefined1, 0x107fc63));
      }
      else {
        piVar17 = (int *)(param_1 + 0x1c0);
        if (((*piVar17 == this_00[0x59b]) && ((char)this_00[0x59c] == *(char *)(param_1 + 0x1c4)))
           && (*(char *)((int)this_00 + 0x1671) == *(char *)(param_1 + 0x1c5))) {
          *(uint *)((int)this + 0x2920c) = *(uint *)((int)this + 0x2920c) | 0x10000;
        }
        else {
          *piVar17 = this_00[0x59b];
          *(short *)(param_1 + 0x1c4) = (short)this_00[0x59c];
          *(undefined1 *)(param_1 + 0x1c6) = 0;
          uVar14 = 0x7f4;
          pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                                     (*(int * PTR32 *)((int)this + 0x23184))));
          uVar9 = F_00460540(pvVar8,uVar14,piVar17);
          F_0042e430((undefined *)(param_1 + 0x70),uVar9);
          *(uint *)((int)this + 0x2920c) = *(uint *)((int)this + 0x2920c) | 0x10000;
        }
      }
      if ((this_00 == REFG(int * PTR32, 0x1379694)) && ((*(byte *)((int)this + 0x235b4) & 1) != 0)) {
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) | 4;
      }
      uVar9 = F_00760530(this_00,REFG(int * PTR32, 0x1379694)[0x39]);
    }
    else {
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) | 0x50;
      *(undefined1 *)(param_1 + 0x1c0) = 0;
      F_0042e430((undefined *)(param_1 + 0x70),&REFG(undefined1, 0x107fc63));
      *(undefined4 *)(param_1 + 0x18) = 0;
      F_0042e430((undefined *)(param_1 + 0x16c),&REFG(undefined1, 0x107fc63));
      F_0042e430((undefined *)(param_1 + 0xc4),&REFG(undefined1, 0x107fc63));
      F_0042e430((undefined *)(param_1 + 0x118),&REFG(undefined1, 0x107fc63));
      uVar9 = 0xffffffff;
    }
    if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x28 + param_5 * 4))) != uVar9) {
      *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x28 + param_5 * 4))) = uVar9;
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
    (*(undefined1 *)((char *)&(*(byte * PTR32 *)(gen_frame + 0xc)) + 0)) = (undefined1)uVar2;
    *(undefined1 *)((int)this + 0x2920c) = (*(undefined1 *)((char *)&(*(byte * PTR32 *)(gen_frame + 0xc)) + 0));
    *(undefined1 *)((int)this + 0x2920d) = uVar1;
    goto LAB_00822840;
  }
  uVar9 = ((code *)*(gen_code32 *)(*this_00 + 4))(this_00);
  if (uVar9 != 2) goto LAB_00822840;
  bVar12 = false;
  (*(byte * PTR32 *)(gen_frame + 0xc)) = &REFG(undefined, 0x10bdab3);
  uVar9 = ((code *)*(gen_code32 *)(*this_00 + 4))(this_00);
  if (((uVar9 == 2) && (uVar9 = ((code *)*(gen_code32 *)(*this_00 + 8))(this_00), (char)uVar9 == '\x03')) ||
     (bVar4 = F_0054c460(this_00), bVar4 != 0)) {
    uVar9 = F_00a64450(&REFG(undefined, 0x14a9a18),this_00[0xbb6]);
    bVar4 = F_007608a0(uVar9);
    if (bVar4 == 0) {
      F_007c9c70(this,(int)this + 0x22d40,uVar9);
      (*(byte * PTR32 *)(gen_frame + 0xc)) = (byte *)F_0042a990((int)this + 0x22d40);
    }
    else {
      F_007608f0(this,(int)this + 0x22d40,uVar9);
      (*(byte * PTR32 *)(gen_frame + 0xc)) = (byte *)F_0042a990((int)this + 0x22d40);
      bVar12 = true;
      *(undefined4 *)(param_1 + 0x18) = 0;
      F_0042e430((undefined *)(param_1 + 0x16c),&REFG(undefined1, 0x107fc63));
    }
  }
  else {
    uVar9 = ((code *)*(gen_code32 *)(*this_00 + 8))(this_00);
    if (((char)uVar9 == '\x05') && (this_00[0x20] == 0x372)) {
      (*(byte * PTR32 *)(gen_frame + 0xc)) = (byte *)(this_00 + 0xc);
    }
  }
  pbVar11 = (byte *)F_0042a990(param_1 + 0xc4);
  pbVar7 = (*(byte * PTR32 *)(gen_frame + 0xc));
  do {
    bVar4 = *pbVar11;
    bVar13 = bVar4 < *pbVar7;
    if (bVar4 != *pbVar7) {
LAB_00822720: ;
      iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_00822725;
    }
    if (bVar4 == 0) break;
    bVar4 = pbVar11[1];
    bVar13 = bVar4 < pbVar7[1];
    if (bVar4 != pbVar7[1]) goto LAB_00822720;
    pbVar11 = pbVar11 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar4 != 0);
  iVar6 = 0;
LAB_00822725: ;
  if (iVar6 != 0) {
    F_0042e430((undefined *)(param_1 + 0xc4),(*(byte * PTR32 *)(gen_frame + 0xc)));
    if ((*(byte * PTR32 *)(gen_frame + 0xc)) != (byte *)0x0) {
      pbVar7 = (*(byte * PTR32 *)(gen_frame + 0xc));
      do {
        bVar4 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar4 != 0);
      if (pbVar7 != (*(byte * PTR32 *)(gen_frame + 0xc)) + 1) {
        uVar14 = 0x25;
        pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                                   (*(int * PTR32 *)((int)this + 0x23184))));
        uVar9 = F_00460540(pvVar8,uVar14,(*(byte * PTR32 *)(gen_frame + 0xc)));
        F_0042e430((undefined *)(param_1 + 0x118),uVar9);
        goto LAB_0082278a;
      }
    }
    F_0042e430((undefined *)(param_1 + 0x118),&REFG(undefined, 0x10bdabb));
  }
LAB_0082278a: ;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  F_0042e430((undefined *)(param_1 + 0x70),&REFG(undefined1, 0x107fc63));
  uVar9 = 0;
  if (!bVar12) {
    piVar17 = this_00;
    pvVar8 = (undefined *)F_00b070f0();
    uVar9 = F_00b092e0(pvVar8,piVar17);
    if (uVar9 == 0) {
      uVar9 = F_00760720(this_00);
    }
  }
  if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x28 + param_5 * 4))) != uVar9) {
    *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x28 + param_5 * 4))) = uVar9;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  iVar6 = (int)this + 0x22d40;
  F_0042aca0(iVar6);
  if (!bVar12) {
    uVar9 = F_00821de0(iVar6,this_00,
                         *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x30 + param_5 * 4))));
    *(uint *)((int)this + 0x2920c) =
         *(uint *)((int)this + 0x2920c) ^ (*(uint *)((int)this + 0x2920c) ^ uVar9) & 0x1f;
  }
  uVar16 = 0;
  uVar15 = 1;
  uVar14 = 0;
  uVar9 = F_0042a990(iVar6);
  F_00431250(param_3,param_6 + 0x96,uVar9,uVar14,uVar15,uVar16);
  if ((char)this_00[0x62] == '\x02') {
    (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) | 4;
  }
LAB_00822840: ;
  pvVar8 = (undefined *)F_005339e0(&REFG(undefined4, 0x1375bc0));
  uVar9 = (*(uint *)(gen_frame + 0x8));
  if ((pvVar8 != param_4) && (pvVar8 = (undefined *)F_00533a30(&REFG(undefined4, 0x1375bc0)), pvVar8 != param_4)) {
    uVar9 = (*(uint *)(gen_frame + 0x8)) | 8;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34 + param_5 * 4))) != uVar9) {
    *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34 + param_5 * 4))) = uVar9;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  F_00c47745(uVar5 ^ (uint)(uint)(gen_out + 0x0));
  return 0;
}

/* ref: FUN_008228a0 */
uint F_008228a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8228a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  byte * pbVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  pbVar1 = param_2;
  this_00 = *(undefined * PTR32 *)((int)this + 0x231b4);
  uVar5 = 0;
  if (this_00 != (undefined *)0x0) {
    if ((*param_2 & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 4);
    }
    uVar4 = F_00760440(uVar3);
    if ((param_2[8] & 0xf) == 0) {
      param_2 = (byte *)0x0;
    }
    else {
      param_2 = *(byte * PTR32 *)(param_2 + 0xc);
    }
    if ((pbVar1[0x10] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(pbVar1 + 0x14);
    }
    if ((pbVar1[0x18] & 0xf) != 0) {
      uVar5 = *(undefined4 *)(pbVar1 + 0x1c);
    }
    if ((((pbVar1[0x20] & 0xf) == 0) || (*(int *)(pbVar1 + 0x24) == 0)) ||
       (bVar2 = F_0076a650(this_00,uVar4,param_2,uVar3), bVar2 == 0)) {
      F_007cdf80(this_00,uVar4,param_2,uVar3,uVar5);
    }
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00822940 */
uint F_00822940(unsigned int gen_a0)
{
  GEN_ENTER(0x822940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint in_EAX = 0;
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x23214);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x34);
    iVar2 = *(int *)(uVar1 + 0x14) + -1;
    if (iVar2 == 0) {
      bVar3 = *(char *)((int)this_00 + 0x33da) != '\x01';
      *(undefined1 *)((int)this_00 + 0x33da) = 1;
      in_EAX = (uint)bVar3;
      if (bVar3) {
        uVar1 = F_00774820(this_00);
        return uVar1;
      }
    }
    else {
      bVar3 = *(char *)((int)this_00 + 0x33da) != '\0';
      *(undefined1 *)((int)this_00 + 0x33da) = 0;
      in_EAX = CONCAT31((int3)((uint)iVar2 >> 8),bVar3);
      if (bVar3) {
        uVar1 = F_00774820(this_00);
        return uVar1;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_008229a0 */
uint F_008229a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8229a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_EAX = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x23214) != (undefined *)0x0) {
    in_EAX = F_007d85d0(*(undefined * PTR32 *)((int)this + 0x23214),param_1);
  }
  return in_EAX;
}

/* ref: FUN_008229c0 */
unsigned int F_008229c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8229c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x23214) != (undefined *)0x0) {
    F_007d8630(*(undefined * PTR32 *)((int)this + 0x23214),param_1);
  }
  return 0;
}

/* ref: FUN_008229e0 */
uint F_008229e0(unsigned int gen_a0)
{
  GEN_ENTER(0x8229e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined * this_00;
  uint uVar2;
  int * piVar3;
  undefined4 * puVar4;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x34);
  puVar1 = (undefined4 *)((int)this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x10d3d9c));
  *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10d3d7c));
  if ((piVar3 != (int *)0x0) && (piVar3[0x82] == *(int *)((int)this + 8))) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  puVar4 = puVar1;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043d010(this_00,puVar4);
  *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10c3ed0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00822a70 */
uint F_00822a70(unsigned int gen_a0)
{
  GEN_ENTER(0x822a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int * piVar2;
  byte bVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  gen_code32 * ppcVar6;
  
  cVar1 = *(char *)((int)this + 0x2c);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x916da0));
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x7cc2b0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if (cVar1 == '\0') {
    ppcVar6 = &(*(gen_code32 *)(gen_frame + 0xc));
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2)));
    uVar5 = F_0044d3f0(pvVar4,ppcVar6);
    return uVar5;
  }
  ppcVar6 = &(*(gen_code32 *)(gen_frame + 0xc));
  pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2)));
  bVar3 = F_00466f40(pvVar4,ppcVar6);
  return CONCAT31(extraout_var,bVar3);
}

/* ref: FUN_00822ad0 */
uint F_00822ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x822ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10c3ed0));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2d) = 0x1000000;
  *(undefined1 *)((int)this + 0x31) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x10d68cc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10d68ac));
  F_00c48350((undefined *)((int)this + 0x78),0,0x97);
  *(undefined4 *)&REFG(undefined, 0x148a140) = 0x153;
  *(undefined4 *)&REFG(undefined, 0x148a190) = 0x166;
  *(undefined4 *)&REFG(undefined, 0x148a144) = 0x154;
  *(undefined4 *)&REFG(undefined, 0x148a148) = 0x155;
  *(undefined4 *)&REFG(undefined, 0x148a150) = 0x156;
  *(undefined4 *)&REFG(undefined, 0x148a178) = 0x160;
  *(undefined4 *)&REFG(undefined, 0x148a158) = 0x158;
  *(undefined4 *)&REFG(undefined, 0x148a15c) = 0x159;
  *(undefined4 *)&REFG(undefined, 0x148a160) = 0x15a;
  *(undefined4 *)&REFG(undefined, 0x148a164) = 0x15b;
  *(undefined4 *)&REFG(undefined, 0x148a168) = 0x15c;
  *(undefined4 *)&REFG(undefined, 0x148a16c) = 0x15d;
  *(undefined4 *)&REFG(undefined, 0x148a170) = 0x15e;
  *(undefined4 *)&REFG(undefined, 0x148a174) = 0x15f;
  *(undefined4 *)&REFG(undefined, 0x148a18c) = 0x165;
  *(undefined4 *)&REFG(undefined, 0x148a188) = 0x164;
  *(undefined4 *)&REFG(undefined, 0x148a1bc) = 0x16a;
  *(undefined4 *)&REFG(undefined, 0x148a1c0) = 0x16b;
  *(undefined4 *)&REFG(undefined, 0x148a1c4) = 0x16c;
  *(undefined4 *)&REFG(undefined, 0x148a1c8) = 0x16d;
  *(undefined4 *)&REFG(undefined, 0x148a1cc) = 0x16e;
  *(undefined4 *)&REFG(undefined, 0x148a1d0) = 0x16f;
  *(undefined4 *)&REFG(undefined, 0x148a1d4) = 0x170;
  *(undefined4 *)&REFG(undefined, 0x148a1f8) = 0x171;
  *(undefined4 *)&REFG(undefined, 0x148a1fc) = 0x172;
  *(undefined4 *)&REFG(undefined, 0x148a200) = 0x174;
  *(undefined4 *)&REFG(undefined, 0x148a204) = 0x175;
  *(undefined4 *)&REFG(undefined, 0x148a208) = 0x176;
  *(undefined4 *)&REFG(undefined, 0x148a22c) = 0x173;
  *(undefined4 *)&REFG(undefined, 0x148a210) = 0x178;
  *(undefined4 *)&REFG(undefined, 0x148a218) = 0x179;
  *(undefined4 *)&REFG(undefined, 0x148a21c) = 0x17a;
  *(undefined4 *)&REFG(undefined, 0x148a220) = 0x17b;
  *(undefined4 *)&REFG(undefined, 0x148a224) = 0x17c;
  *(undefined4 *)&REFG(undefined, 0x148a20c) = 0x177;
  *(undefined4 *)&REFG(undefined, 0x148a228) = 0x177;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x40) = 0xffffffff;
  *(undefined1 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x60) = 0xffffffff;
  *(undefined1 *)((int)this + 0x2c) = 1;
  return (uint)this;
}

/* ref: FUN_00822d10 */
uint F_00822d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x822d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  
  *(undefined4 *)((int)this + 0x74) = param_1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x58))))(*(int * PTR32 *)((int)this + 4));
  puVar2 = (undefined4 *)F_0043a420(uVar1,*(undefined4 *)((int)this + 0x74));
  puVar4 = (undefined4 *)((int)this + 0x78);
  for (iVar3 = 0x25; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar2 + 2);
  F_007cc6e0(this);
  uVar1 = F_007cc7d0(this);
  return uVar1;
}

/* ref: FUN_00822d60 */
byte F_00822d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x822d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_ecx;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x68) = 0;
  if (((*param_1 & 0xf) == 0) || (*(int *)(param_1 + 4) == 0)) {
    *(undefined1 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 0x1a3c);
    in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x58))))(*(int * PTR32 *)((int)this + 4));
    puVar1 = (undefined4 *)F_0043a420(in_ecx,*(undefined4 *)((int)this + 0x74));
    puVar3 = (undefined4 *)((int)this + 0x78);
    for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = *(undefined2 *)puVar1;
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar1 + 2);
    F_007cc6e0(this);
    F_007cc7d0(this);
  }
  return 1;
}

/* ref: FUN_00822dd0 */
byte F_00822dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x822dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  if ((*param_1 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if ((-3 < iVar1) && (iVar1 < 0)) {
      return 1;
    }
  }
  F_004460e0((int)this + 0x78,iVar1);
  *(undefined1 *)((int)this + 0x70) = 1;
  F_007cc7d0(this);
  return 1;
}

/* ref: FUN_00822e10 */
unsigned int F_00822e10(unsigned int gen_a0)
{
  GEN_ENTER(0x822e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  undefined4 * puVar1;
  undefined * this_01;
  int iVar2;
  undefined4 * puVar3;
  
  if (*(char *)((int)this + 0x70) != '\0') {
    this_00 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x58))))(*(int * PTR32 *)((int)this + 4))));
    puVar1 = (undefined4 *)F_0043a420(this_00,*(undefined4 *)((int)this + 0x74));
    puVar3 = (undefined4 *)((int)this + 0x78);
    for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 1;
    }
    *(undefined2 *)puVar1 = *(undefined2 *)puVar3;
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)puVar3 + 2);
    ((code *)*(gen_code32 *)(*this_00 + 0x20))(this_00,1);
    F_00454290(this_00);
    iVar2 = *(int *)((int)this + 0x74);
    this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
    if (iVar2 < 4) {
      F_0045ca60(this_01,iVar2);
    }
    *(undefined1 *)((int)this + 0x70) = 0;
  }
  return 0;
}

/* ref: FUN_00822e80 */
uint F_00822e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x822e80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[6])REFP(0x10c3ed0));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *(undefined2 *)(in_ecx + 7) = 0;
  *(undefined1 *)((int)in_ecx + 0x1e) = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  *(undefined2 *)(in_ecx + 0xc) = 1;
  in_ecx[0xd] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[23])REFP(0x10d694c));
  in_ecx[3] = (*(undefined * PTR32 (*)[6])REFP(0x10d692c));
  in_ecx[0xe] = 0xffffffff;
  in_ecx[0xf] = 0;
  *(undefined1 *)(in_ecx + 0x10) = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x12] = 0xffffffff;
  in_ecx[0x13] = 0;
  F_0042b630(in_ecx + 0x14);
  in_ecx[0x29] = 0;
  in_ecx[0x2a] = 0;
  *(undefined2 *)(in_ecx + 0x2b) = 0;
  *(undefined1 *)((int)in_ecx + 0xae) = 0;
  puVar2 = in_ecx + 0x2c;
  param_2 = 299;
  do {
    F_0042b630(puVar2);
    puVar2 = puVar2 + 0x15;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  puVar2 = in_ecx + 0x18c8;
  param_2 = 9;
  do {
    F_0042b630(puVar2);
    puVar2 = puVar2 + 0x15;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  F_0042b630(in_ecx + 0x1d1e);
  in_ecx[0x1d33] = 0;
  in_ecx[0x1d34] = 0;
  in_ecx[0x1d35] = 0;
  in_ecx[0x1d36] = 0;
  in_ecx[0x1d37] = 0;
  in_ecx[0x1d38] = 0;
  puVar2 = in_ecx + 0x1d39;
  iVar1 = 9;
  do {
    F_0042b630(puVar2);
    puVar2 = puVar2 + 0x15;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  in_ecx[0x1e3b] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_00822fa0 */
uint F_00822fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x822fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * pvVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x10d694c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10d692c));
  pvVar3 = (undefined *)((int)this + 0x782c);
  iVar2 = 9;
  do {
    pvVar3 = (undefined *)((int)pvVar3 + -0x54);
    F_0042c880(pvVar3);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_0042c880((undefined *)((int)this + 0x7478));
  pvVar3 = (undefined *)((int)this + 0x6668);
  iVar2 = 9;
  do {
    pvVar3 = (undefined *)((int)pvVar3 + -0x54);
    F_0042c880(pvVar3);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  pvVar3 = (undefined *)((int)this + 0x6320);
  iVar2 = 299;
  do {
    pvVar3 = (undefined *)((int)pvVar3 + -0x54);
    F_0042c880(pvVar3);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_0042c880((undefined *)((int)this + 0x50));
  uVar1 = F_008229e0(this);
  return uVar1;
}

/* ref: FUN_00823020 */
uint F_00823020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x823020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  byte bVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint * puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  uVar5 = REFG(undefined4, 0x1370b90);
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar6 = *(uint *)(REFG(int, 0x137104c) + 0x25f4);
  (*(int *)(gen_frame + 0x10)) = param_1;
  (*(uint *)(gen_frame + 0x30)) = REFG(undefined4, 0x1370b90);
  (*(uint *)(gen_frame + 0x2c)) = uVar6;
  if ((REFG(undefined4, 0x1370b90) == 0) || (uVar6 == 0)) goto LAB_00823505;
  *(undefined4 *)((int)this + 0x4c) = 0;
  piVar1 = *(int * PTR32 *)((int)this + 4);
  uVar6 = (*(int *)(uVar5 + 0x74) - *(int *)(uVar5 + 0x70)) / 0xc;
  (*(int *)(gen_frame + 0x28)) = -1;
  uVar12 = 2;
  if ((char)param_2 == '\0') {
    uVar10 = 2;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
    uVar5 = F_0043c920(pvVar4,uVar10,uVar12);
    (*(uint *)(gen_frame + 0x1c)) = uVar5;
    uVar10 = 2;
    uVar12 = 3;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    uVar5 = F_0043c920(pvVar4,uVar12,uVar10);
    (*(uint *)(gen_frame + 0x34)) = uVar5;
    (*(uint *)(gen_frame + 0x20)) = 0;
    (*(uint *)(gen_frame + 0x24)) = 0;
    if (uVar6 != 0) {
      puVar8 = *(uint * PTR32 *)((*(uint *)(gen_frame + 0x30)) + 0x70);
      do {
        if (((*(uint *)(gen_frame + 0x20)) <= *puVar8) && ((*(uint *)(gen_frame + 0x24)) <= puVar8[1])) {
          (*(uint *)(gen_frame + 0x20)) = *puVar8;
          (*(uint *)(gen_frame + 0x24)) = puVar8[1];
        }
        puVar8 = puVar8 + 3;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    puVar8 = &REFG(undefined4, 0x1328540);
    (*(uint *)(gen_frame + 0x30)) = 0;
    do {
      uVar6 = *puVar8;
      if (((*(uint *)(gen_frame + 0x20)) < uVar6) || (uVar5 = puVar8[1], (*(uint *)(gen_frame + 0x24)) < uVar5)) break;
      if ((uVar6 == (*(uint *)(gen_frame + 0x1c))) && (uVar5 == (*(uint *)(gen_frame + 0x34)))) {
        (*(int *)(gen_frame + 0x28)) = *(int *)((int)this + 0x4c);
      }
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x40,"%ux%u",uVar6,uVar5);
      F_0042aca0(*(int *)((int)this + 0x4c) * 0x54 + 0xb0 + (int)this);
      F_0042d540(((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) * 0x54 + 0xb0 + (int)this))),((undefined1 *)(gen_frame + 0x38)));
      iVar9 = *(int *)((int)this + 0x4c);
      *(uint *)((int)this + iVar9 * 8 + 0x6668) = *puVar8;
      *(uint *)((int)this + iVar9 * 8 + 0x666c) = puVar8[1];
      *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x4c) * 4 + 0x6fc8))) = 0x3c;
      *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + 1;
      if (0x12a < *(uint *)((int)this + 0x4c)) break;
      uVar6 = (*(uint *)(gen_frame + 0x30)) + 8;
      puVar8 = puVar8 + 2;
      (*(uint *)(gen_frame + 0x30)) = uVar6;
    } while (uVar6 < 0x88);
    iVar9 = (*(int *)(gen_frame + 0x10));
    F_005a2710((undefined *)((*(int *)(gen_frame + 0x10)) + 0xa68),3);
    *(uint *)(iVar9 + 0xa6c) = (*(uint *)(gen_frame + 0x1c));
    F_005a2710((undefined *)(iVar9 + 0xa70),3);
    *(uint *)(iVar9 + 0xa74) = (*(uint *)(gen_frame + 0x34));
    F_005a2710((undefined *)(iVar9 + 0xa58),3);
    *(undefined4 *)(iVar9 + 0xa5c) = 0;
  }
  else {
    uVar10 = 4;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
    uVar5 = F_0043c920(pvVar4,uVar10,uVar12);
    piVar1 = *(int * PTR32 *)((int)this + 4);
    iVar9 = *piVar1;
    uVar10 = 2;
    (*(uint *)(gen_frame + 0x18)) = uVar5;
    uVar12 = 5;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(iVar9 + 0x3c))(piVar1)));
    uVar5 = F_0043c920(pvVar4,uVar12,uVar10);
    piVar1 = *(int * PTR32 *)((int)this + 4);
    iVar9 = *piVar1;
    uVar10 = 2;
    (*(uint *)(gen_frame + 0x14)) = uVar5;
    uVar12 = 6;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(iVar9 + 0x3c))(piVar1)));
    uVar5 = F_0043c920(pvVar4,uVar12,uVar10);
    (*(uint *)(gen_frame + 0x24)) = uVar5;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    iVar9 = param_1;
    if (uVar6 == 0) {
LAB_008231be: ;
      F_007ccb10(this,&(*(uint *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0x14)),&(*(int *)(gen_frame + 0x28)));
      uVar13 = 1;
      uVar11 = 1;
      uVar10 = 2;
      uVar12 = 4;
      uVar6 = (*(uint *)(gen_frame + 0x18));
      pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
      bVar3 = F_00447870(pvVar4,uVar12,uVar6,uVar10,uVar11,uVar13);
      if (*(char *)((int)this + 0x1c) == '\0') {
        *(bool *)((int)this + 0x1c) = bVar3 == 0;
      }
      uVar13 = 1;
      uVar11 = 1;
      uVar10 = 2;
      uVar12 = 5;
      uVar6 = (*(uint *)(gen_frame + 0x14));
      pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
      bVar3 = F_00447870(pvVar4,uVar12,uVar6,uVar10,uVar11,uVar13);
      if (*(char *)((int)this + 0x1c) == '\0') {
        *(bool *)((int)this + 0x1c) = bVar3 == 0;
      }
    }
    else {
      (*(uint *)(gen_frame + 0x34)) = 0;
      do {
        puVar8 = ((uint *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x30)) + 0x70) + (*(uint *)(gen_frame + 0x34)))));
        uVar5 = *puVar8;
        uVar2 = puVar8[2];
        (*(uint *)(gen_frame + 0xc)) = uVar2;
        if ((0x3ff < uVar5) && (0x2cf < puVar8[1])) {
          F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x40,"%ux%u (%dHz)",uVar5,puVar8[1],uVar2);
          F_0042aca0(*(int *)((int)this + 0x4c) * 0x54 + 0xb0 + (int)this);
          F_0042d540(((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) * 0x54 + 0xb0 + (int)this))),((undefined1 *)(gen_frame + 0x38)));
          iVar9 = *(int *)((int)this + 0x4c);
          *(uint *)((int)this + iVar9 * 8 + 0x6668) = *puVar8;
          *(uint *)((int)this + iVar9 * 8 + 0x666c) = puVar8[1];
          *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x4c) * 4 + 0x6fc8))) = (*(uint *)(gen_frame + 0xc));
          if ((*puVar8 == (*(uint *)(gen_frame + 0x18))) && ((puVar8[1] == (*(uint *)(gen_frame + 0x14)) && ((*(uint *)(gen_frame + 0xc)) == (*(uint *)(gen_frame + 0x24)))))) {
            (*(int *)(gen_frame + 0x28)) = *(int *)((int)this + 0x4c);
          }
          *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + 1;
          if (0x12a < *(uint *)((int)this + 0x4c)) break;
        }
        (*(uint *)(gen_frame + 0x34)) = (*(uint *)(gen_frame + 0x34)) + 0xc;
        uVar5 = (*(uint *)(gen_frame + 0x1c)) + 1;
        (*(uint *)(gen_frame + 0x1c)) = uVar5;
      } while (uVar5 < uVar6);
      iVar9 = (*(int *)(gen_frame + 0x10));
      if ((*(int *)(gen_frame + 0x28)) < 0) goto LAB_008231be;
    }
    F_005a2710((undefined *)(iVar9 + 0xa68),3);
    *(uint *)(iVar9 + 0xa6c) = (*(uint *)(gen_frame + 0x18));
    F_005a2710((undefined *)(iVar9 + 0xa70),3);
    *(uint *)(iVar9 + 0xa74) = (*(uint *)(gen_frame + 0x14));
    F_005a2710((undefined *)(iVar9 + 0xa58),3);
    *(undefined4 *)(iVar9 + 0xa5c) = 2;
  }
  if (*(int *)((int)this + 0x4c) != 0) {
    F_0049b6d0(&(*(uint *)(gen_frame + 0x2c)),&(*(uint *)(gen_frame + 0xc)));
    F_005a2710((undefined *)(iVar9 + 0xa90),3);
    *(undefined4 *)(iVar9 + 0xa94) = 0x400;
    (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x2c));
    F_005a2710((undefined *)(iVar9 + 0xa98),3);
    *(uint *)(iVar9 + 0xa9c) = (*(uint *)(gen_frame + 0x24));
    F_005a2710((undefined *)(iVar9 + 0xaa0),3);
    (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0xc));
    *(undefined4 *)(iVar9 + 0xaa4) = 0x2d0;
    F_005a2710((undefined *)(iVar9 + 0xaa8),3);
    *(uint *)(iVar9 + 0xaac) = (*(uint *)(gen_frame + 0x24));
  }
  if ((*(int *)(gen_frame + 0x28)) < 0) {
    uVar11 = 0;
    uVar10 = 0;
    uVar12 = 0xc0c;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar6 = F_0043bd00(pvVar4,uVar12,uVar10,uVar11);
    F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) * 0x54 + 0xb0 + (int)this))),uVar6);
    iVar7 = *(int *)((int)this + 0x4c) + 1;
    *(int *)((int)this + 0x4c) = iVar7;
    F_005a2710((undefined *)(iVar9 + 0x30),4);
    *(int *)(iVar9 + 0x34) = iVar7;
  }
  else {
    (*(uint *)(gen_frame + 0x2c)) = *(uint *)((int)this + 0x4c);
    F_005a2710((undefined *)(iVar9 + 0x30),4);
    *(uint *)(iVar9 + 0x34) = (*(uint *)(gen_frame + 0x2c));
  }
  (*(uint *)(gen_frame + 0x30)) = 0;
  if (*(int *)((int)this + 0x4c) != 0) {
    pvVar4 = (undefined *)(iVar9 + 0x38);
    (*(uint *)(gen_frame + 0x34)) = (int)this + 0xb0;
    do {
      uVar6 = F_0042a990((*(uint *)(gen_frame + 0x34)));
      (*(uint *)(gen_frame + 0x2c)) = uVar6;
      F_005a2710(pvVar4,6);
      (*(uint *)(gen_frame + 0x34)) = (*(uint *)(gen_frame + 0x34)) + 0x54;
      *(uint *)((int)pvVar4 + 4) = (*(uint *)(gen_frame + 0x2c));
      uVar6 = (*(uint *)(gen_frame + 0x30)) + 1;
      pvVar4 = (undefined *)((int)pvVar4 + 8);
      (*(uint *)(gen_frame + 0x30)) = uVar6;
    } while (uVar6 < *(uint *)((int)this + 0x4c));
  }
  uVar5 = F_005a2710((undefined *)(iVar9 + 0xa60),3);
  *(int *)(iVar9 + 0xa64) = (*(int *)(gen_frame + 0x28));
LAB_00823505: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar5;
}

/* ref: FUN_00823520 */
uint F_00823520(unsigned int gen_a0)
{
  GEN_ENTER(0x823520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  gen_code32 * ppcVar5;
  
  *(undefined1 *)((int)this + 0x3e) = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x44),0);
  if (*(char *)((int)this + 0x3d) == '\0') {
    *(undefined1 *)((int)this + 0x1d) = 1;
    uVar4 = F_007631c0(this);
    *(undefined1 *)((int)this + 0x3f) = 0;
    return uVar4;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1488338))) + 0x24))))(((int *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1488338))));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x916da0));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x7cc2b0));
  if (*(char *)((int)this + 0x2c) == '\0') {
    ppcVar5 = &(*(gen_code32 *)(gen_frame + 0xc));
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2)));
    uVar4 = F_0044d3f0(pvVar3,ppcVar5);
    *(undefined1 *)((int)this + 0x3f) = 0;
    return uVar4;
  }
  ppcVar5 = &(*(gen_code32 *)(gen_frame + 0xc));
  pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2)));
  bVar1 = F_00466f40(pvVar3,ppcVar5);
  *(undefined1 *)((int)this + 0x3f) = 0;
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_008235d0 */
unsigned int F_008235d0(unsigned int gen_a0)
{
  GEN_ENTER(0x8235d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_8;
  
  uVar7 = 2;
  uVar6 = 1;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043c920(pvVar2,uVar6,uVar7);
  iVar1 = REFG(int, 0x1370b90);
  uVar4 = 0;
  uVar5 = 0;
  local_8 = 0;
  if (REFG(int, 0x1370b90) != 0) {
    uVar6 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
    uVar5 = F_00414500(uVar6,0xd);
    *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(uVar5 + 0x14);
    uVar5 = F_00414500(uVar6,0xe);
    *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(uVar5 + 0x14);
    if (uVar3 == 1) {
      *(undefined2 *)((int)this + 0x2d) = 0xf01;
      *(undefined1 *)((int)this + 0x2f) = 1;
      uVar7 = 2;
      uVar6 = 4;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
      uVar5 = F_0043c920(pvVar2,uVar6,uVar7);
      uVar7 = 2;
      uVar6 = 5;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
      uVar4 = F_0043c920(pvVar2,uVar6,uVar7);
      uVar7 = 2;
      uVar6 = 6;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
      local_8 = F_0043c920(pvVar2,uVar6,uVar7);
    }
    else if (uVar3 == 2) {
      if (*(char *)(iVar1 + 0x4c) != '\0') {
        *(undefined2 *)((int)this + 0x2d) = 0xf01;
        *(undefined1 *)((int)this + 0x2f) = 1;
      }
      uVar7 = 2;
      uVar6 = 4;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
      uVar5 = F_0043c920(pvVar2,uVar6,uVar7);
      uVar7 = 2;
      uVar6 = 5;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
      uVar4 = F_0043c920(pvVar2,uVar6,uVar7);
      uVar7 = 2;
      uVar6 = 6;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
      local_8 = F_0043c920(pvVar2,uVar6,uVar7);
    }
    else {
      if (*(char *)(iVar1 + 0x4c) != '\0') {
        *(undefined2 *)((int)this + 0x2d) = 0xf01;
        *(undefined1 *)((int)this + 0x2f) = 1;
      }
      uVar7 = 2;
      uVar6 = 2;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
      uVar5 = F_0043c920(pvVar2,uVar6,uVar7);
      uVar7 = 2;
      uVar6 = 3;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
      uVar4 = F_0043c920(pvVar2,uVar6,uVar7);
    }
  }
  F_007ccdc0(uVar3,uVar5,uVar4,local_8);
  return 0;
}

/* ref: FUN_00823750 */
unsigned int F_00823750(unsigned int gen_a0)
{
  GEN_ENTER(0x823750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_c;
  uint local_8;
  
  uVar6 = 2;
  uVar5 = 1;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043c920(pvVar2,uVar5,uVar6);
  piVar1 = *(int * PTR32 *)((int)this + 4);
  local_8 = 0;
  uVar5 = 2;
  if (uVar3 == 1) {
    uVar6 = 4;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
    uVar4 = F_0043c920(pvVar2,uVar6,uVar5);
    uVar6 = 2;
    uVar5 = 5;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    local_c = F_0043c920(pvVar2,uVar5,uVar6);
    uVar6 = 2;
    uVar5 = 6;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    local_8 = F_0043c920(pvVar2,uVar5,uVar6);
  }
  else {
    uVar6 = 2;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
    uVar4 = F_0043c920(pvVar2,uVar6,uVar5);
    uVar6 = 2;
    uVar5 = 3;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    local_c = F_0043c920(pvVar2,uVar5,uVar6);
  }
  uVar5 = *(undefined4 *)((int)this + 0xa8);
  uVar6 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar7 = 1;
  pvVar2 = (undefined *)F_00414500(uVar6,0xd);
  F_00414a40(pvVar2,uVar5,uVar7);
  uVar5 = *(undefined4 *)((int)this + 0xa4);
  uVar7 = 1;
  pvVar2 = (undefined *)F_00414500(uVar6,0xe);
  F_00414a40(pvVar2,uVar5,uVar7);
  F_007ccdc0(uVar3,uVar4,local_c,local_8);
  return 0;
}

/* ref: FUN_00823850 */
uint F_00823850(unsigned int gen_a0)
{
  GEN_ENTER(0x823850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x3b0];
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  uint uVar8;
  uint * this_00;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3ac);
  (*(uint *)(gen_frame + 0x3a8)) = uVar3;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4));
    puVar4 = ((undefined4 *)(gen_frame + 0x10));
    iVar7 = 0x72;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 2;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    F_005a2710(((undefined4 *)(gen_frame + 0x10)),4);
    ((undefined4 *)(gen_frame + 0x10))[1] = 3;
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x1940) * 4 + 0x14)));
    F_005a2710(((undefined1 *)(gen_frame + 0x130)),4);
    iVar7 = *(int *)((int)this + 0x1940);
    (*(undefined4 *)(gen_frame + 0x134)) = uVar2;
    (*(uint *)(gen_frame + 0x8)) = 0;
    (*(uint *)(gen_frame + 0x4)) = 0;
    if (*(int *)((int)this + iVar7 * 4 + 0x14) != 0) {
      puVar4 = ((undefined4 *)(gen_frame + 0x23c));
      do {
        iVar7 = iVar7 * 0x20 + 3 + (*(uint *)(gen_frame + 0x4));
        uVar2 = *(undefined4 *)((int)this + iVar7 * 0x14 + 0xc);
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) |
                    (uint)(*((char *)GEN_TOP(((int)this + *(int *)((int)this + iVar7 * 0x14) + 0x1948))) !=
                          '\0') << ((byte)(*(uint *)(gen_frame + 0x4)) & 0x1f);
        F_005a2710(puVar4 + -0x41,6);
        puVar4[-0x40] = uVar2;
        uVar2 = *(undefined4 *)((int)this + iVar7 * 0x14 + 0x10);
        F_005a2710(puVar4 + -1,6);
        *puVar4 = uVar2;
        uVar5 = *(uint *)((int)this + iVar7 * 0x14 + 4);
        uVar8 = 0;
        if ((uVar5 < 0x65) && (0 < *(int *)(&REFG(undefined, 0x148a2b0) + uVar5 * 4))) {
          uVar5 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),
                               *(int *)(&REFG(undefined, 0x148a2b0) + uVar5 * 4));
          uVar8 = *(uint *)(uVar5 + 0x14);
        }
        F_005a2710(puVar4 + -0x83,4);
        iVar7 = *(int *)((int)this + 0x1940);
        puVar4[-0x82] = uVar8 | 0xff000000;
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
        puVar4 = puVar4 + 2;
      } while ((*(uint *)(gen_frame + 0x4)) < *(uint *)((int)this + iVar7 * 4 + 0x14));
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x28)),4);
    uVar2 = *(undefined4 *)((int)this + 0x1944);
    (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x8));
    F_005a2710(((undefined1 *)(gen_frame + 0x18)),4);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
    uVar3 = F_0043b840(uVar3,*(undefined4 *)((int)this + 0x1944));
    uVar3 = F_0042a990(uVar3);
    F_005a2710(((undefined1 *)(gen_frame + 0x20)),6);
    cVar1 = *(char *)((int)this + 0x193c);
    (*(uint *)(gen_frame + 0x24)) = uVar3;
    F_005a2710(((undefined1 *)(gen_frame + 0x3a0)),4);
    (*(uint *)(gen_frame + 0x3a4)) = (uint)(cVar1 != '\0');
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar6 + 0x5c))(piVar6,*(undefined4 *)((int)this + 0xc),0x73,((undefined4 *)(gen_frame + 0x10)));
    this_00 = &(*(uint *)(gen_frame + 0x3a8));
    iVar7 = 0x72;
    do {
      this_00 = this_00 + -2;
      uVar3 = F_005a2670(this_00);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  F_00c47745((*(uint *)(gen_frame + 0x3a8)) ^ (uint)(uint)(gen_frame + 0x3ac));
  return uVar3;
}

/* ref: FUN_00823a90 */
unsigned int F_00823a90(unsigned int gen_a0)
{
  GEN_ENTER(0x823a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  undefined4 * puVar1;
  undefined * this_01;
  int iVar2;
  undefined4 * puVar3;
  
  if (*(char *)((int)this + 0x193c) != '\0') {
    this_00 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x58))))(*(int * PTR32 *)((int)this + 4))));
    puVar1 = (undefined4 *)F_0043a420(this_00,*(undefined4 *)((int)this + 0x1944));
    puVar3 = (undefined4 *)((int)this + 0x1948);
    for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 1;
    }
    *(undefined2 *)puVar1 = *(undefined2 *)puVar3;
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)puVar3 + 2);
    ((code *)*(gen_code32 *)(*this_00 + 0x20))(this_00,(uint)(*(int *)((int)this + 0x1944) != 0));
    F_00454290(this_00);
    iVar2 = *(int *)((int)this + 0x1944);
    this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
    if (iVar2 < 4) {
      F_0045ca60(this_01,iVar2);
    }
    *(undefined1 *)((int)this + 0x193c) = 0;
  }
  return 0;
}

/* ref: FUN_00823b20 */
byte F_00823b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x823b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*param_1 & 0xf) == 0) || (*(int *)(param_1 + 4) == 0)) {
    F_007cd1d0(this);
    *(undefined1 *)((int)this + 0x15) = 1;
    F_007690b0(this);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  return 1;
}

/* ref: FUN_00823b60 */
uint F_00823b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x823b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined3 extraout_var = 0;
  short * psVar6;
  undefined4 uVar7;
  
  *(undefined4 *)((int)this + 0x154) = param_2;
  iVar3 = 0;
  *(undefined1 *)((int)this + 0x35) = 1;
  *(int *)((int)this + 0x150) = param_1;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined1 *)((int)this + 0x15a) = 1;
  if ((-1 < param_1) && (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x28) + 0x838))), 0 < iVar1)) {
    psVar6 = *(short * PTR32 *)((int)this + 0x3b8);
    do {
      if (*psVar6 == param_1) goto LAB_00823bb6;
      iVar3 = iVar3 + 1;
      psVar6 = psVar6 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = -1;
LAB_00823bb6: ;
  uVar4 = F_00a343f0(*(undefined4 *)((int)this + 0x28),iVar3);
  F_007cd2d0(this,uVar4);
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar5 + 0x90))(piVar5,this,4);
  uVar7 = 1;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  bVar2 = F_005594a0(uVar4,uVar7);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_00823c00 */
unsigned int F_00823c00(unsigned int gen_a0)
{
  GEN_ENTER(0x823c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  short * psVar5;
  undefined4 uVar6;
  
  if (*(char *)((int)this + 0x35) != '\0') {
    *(undefined1 *)((int)this + 0x35) = 0;
    uVar6 = 0;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    F_005594a0(uVar2,uVar6);
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x90))(piVar3,0,0);
    *(undefined4 *)((int)this + 0x3b4) = 0;
    *(undefined1 *)((int)this + 0x15a) = 0;
    if (-1 < *(int *)((int)this + 0x150)) {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x28) + 0x838)));
      iVar4 = 0;
      if (0 < iVar1) {
        psVar5 = *(short * PTR32 *)((int)this + 0x3b8);
        do {
          if ((int)*psVar5 == *(int *)((int)this + 0x150)) goto LAB_00823c76;
          iVar4 = iVar4 + 1;
          psVar5 = psVar5 + 1;
        } while (iVar4 < iVar1);
      }
    }
    iVar4 = -1;
LAB_00823c76: ;
    uVar2 = F_00a343f0(*(undefined4 *)((int)this + 0x28),iVar4);
    F_007cd2d0(this,uVar2);
  }
  return 0;
}

/* ref: FUN_00823c90 */
uint F_00823c90(unsigned int gen_a0)
{
  GEN_ENTER(0x823c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  bool bVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  int iVar5;
  uint * puVar6;
  int * piVar7;
  undefined4 uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(char *)(gen_frame + 0x1b)) = '\0';
  (*(uint *)(gen_frame + 0x10)) = 0;
  do {
    if ((&REFG(undefined4, 0x10bfb08))[(int)((*(uint *)(gen_frame + 0x10)))] != 0) {
      bVar1 = false;
      puVar6 = &REFG(undefined4, 0x10bfb64);
      piVar7 = (int *)((int)this + 0x4c);
      do {
        iVar4 = 0;
        uVar2 = 0;
        do {
          if (*puVar6 == uVar2) {
            uVar2 = *piVar7 + iVar4;
            goto LAB_00823cd9;
          }
          iVar4 = iVar4 + (&REFG(undefined4, 0x10bfb4c))[(int)(uVar2)];
          uVar2 = uVar2 + 1;
        } while (uVar2 < 5);
        uVar2 = 0;
LAB_00823cd9: ;
        if (uVar2 == (*(uint *)(gen_frame + 0x10))) {
          bVar1 = true;
        }
        puVar6 = puVar6 + 1;
        piVar7 = piVar7 + 1;
      } while ((int)puVar6 < 0x10bfb9c);
      if (!bVar1) {
        (*(char *)(gen_frame + 0x1b)) = '\x01';
      }
    }
    uVar2 = (*(uint *)(gen_frame + 0x10)) + 1;
    (*(uint *)(gen_frame + 0x10)) = uVar2;
  } while (uVar2 < 0x10);
  if ((*(char *)(gen_frame + 0x1b)) == '\0') {
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    iVar4 = 0;
    piVar7 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x4c);
    do {
      iVar5 = 0;
      uVar2 = 0;
      do {
        if ((&REFG(undefined4, 0x10bfb64))[(int)(iVar4)] == uVar2) {
          iVar5 = *piVar7 + iVar5;
          goto LAB_00823d53;
        }
        iVar5 = iVar5 + (&REFG(undefined4, 0x10bfb4c))[(int)(uVar2)];
        uVar2 = uVar2 + 1;
      } while (uVar2 < 5);
      iVar5 = 0;
LAB_00823d53: ;
      F_00447fd0(pvVar3,iVar4,iVar5);
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x14));
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar4 < 0xe);
    (*(gen_code32 *)(gen_frame + 0x8)) = (code *)0x0;
    *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0xc) = 0;
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x916dc0));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x14));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x769600));
    F_0044d3f0(pvVar3,&(*(gen_code32 *)(gen_frame + 0x0)));
    F_007cd4a0(this_00);
    piVar7 = *(int * PTR32 *)((int)this_00 + 4);
    uVar8 = 0x321;
  }
  else {
    piVar7 = *(int * PTR32 *)((int)this + 4);
    uVar8 = 0x362;
  }
  pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x28))(piVar7)));
  uVar2 = F_0046a630(pvVar3,uVar8);
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentCursor::vf2 */
uint F_00823dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x823dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined2 *)(this + 0x1d) = 0x101;
  *(undefined4 *)(this + 0x18) = 0;
  uVar2 = F_007cde00(this);
  return uVar2;
}

/* ref: FUN_00823f90 */
uint F_00823f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x823f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  *(undefined1 *)((int)this + 0x1d) = 1;
  piVar1 = *(int * PTR32 *)(REFG(undefined4, 0x137104c) + 0x20);
  uVar2 = REFG(undefined4, 0x137104c);
  if ((piVar1 != (int *)0x0) && (*(char *)((int)this + 0x1e) != '\0')) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,1);
  }
  if ((char)param_1 != '\0') {
    uVar2 = F_007cde00(this);
  }
  return uVar2;
}

/* ref: FUN_00823fd0 */
uint F_00823fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x823fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  *(undefined1 *)((int)this + 0x1d) = 0;
  piVar1 = *(int * PTR32 *)(REFG(undefined4, 0x137104c) + 0x20);
  uVar2 = REFG(undefined4, 0x137104c);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,0);
  }
  if ((char)param_1 != '\0') {
    uVar2 = F_007cde00(this);
  }
  return uVar2;
}

/* ref: FUN_00824010 */
uint F_00824010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x824010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  *(char *)((int)this + 0x1e) = (char)param_1;
  piVar1 = *(int * PTR32 *)(REFG(int, 0x137104c) + 0x20);
  uVar2 = param_1;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,param_1);
    if (*(char *)((int)this + 0x1d) == '\0') {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,0);
    }
  }
  if ((char)param_2 != '\0') {
    uVar2 = F_007cde00(this);
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentArmouryBoard::vf5 */
unsigned int F_00824060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x824060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
  bVar1 = *(byte *)(uVar2 + 0x230bf);
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
  if ((0x1e < *(int *)(this + 0x1c)) || ((bVar1 & 1) != 0)) {
    *(undefined4 *)(this + 0x1c) = 0;
    F_007ced40(this);
    if (*(int *)(this + 8) != 0) {
      F_0076a8b0(this);
      F_0076ab00(this);
    }
  }
  return 0;
}

/* ref: FUN_008240b0 */
uint F_008240b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8240b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  undefined * puVar3;
  uint * this_01;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    uVar5 = *(undefined4 *)((int)this + 0x14);
    (*(undefined4 *)(gen_frame + 0x4)) = param_1;
    *(undefined4 *)((int)this + 0x10) = param_1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    iVar4 = *(int *)((int)this + 0x18);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar5;
    if (iVar4 == 0) {
      puVar3 = &REFG(undefined, 0x10bdb17);
    }
    else {
      uVar6 = 0;
      uVar5 = 0;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      puVar3 = (undefined *)F_0043bd00(this_00,iVar4,uVar5,uVar6);
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = puVar3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    F_0076a8b0(this);
    F_0076ab00(this);
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),5,&(*(undefined4 *)(gen_frame + 0x0)));
    this_01 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 4;
    do {
      this_01 = this_01 + -2;
      uVar1 = F_005a2670(this_01);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_008241b0 */
byte F_008241b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8241b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = true;
  if (((*(byte *)(param_1 + 8) & 0xf) != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar1 = *(int * PTR32 *)(uVar3 + 0x28);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
    bVar2 = false;
  }
  F_0043f8b0(!bVar2 + 0x18);
  return bVar2;
}

/* ref: FUN_00824200 */
uint F_00824200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x824200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  F_0076b890(this);
  puVar2 = param_1;
  puVar7 = this;
  for (iVar5 = 0x22; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  F_007cf450(this,this,(int)this + 0x9c,500);
  F_007cf450(this,(int)this + 0x58,(int)this + 0x484,400);
  if (*(int *)((int)this + 0x64c) == 0) {
    *(undefined1 *)((int)this + 0x94) = 1;
    ((code *)*(gen_code32 *)(*param_2 + 4))(param_2,((undefined1 *)(gen_frame + 0x4)),0,0,param_3);
    uVar6 = F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  }
  else {
    *(undefined1 *)((int)this + 0x94) = 0;
    *(int * PTR32 *)((int)this + 0x88) = param_2;
    *(undefined4 *)((int)this + 0x98) = param_3;
    puVar2 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)((int)this + 0x64c);
      F_00cb4700(puVar2,uVar1,0);
      puVar2[5] = uVar1;
      *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x10d39c8))
      ;
      puVar2[6] = this;
      puVar2[7] = ((code *)REFP(0x76b9e0));
    }
    *(undefined4 * PTR32 *)((int)this + 0x90) = puVar2;
    if ((puVar2 != (undefined4 *)0x0) && (uVar6 = 0, *(int *)((int)this + 0x64c) != 0)) {
      piVar4 = (int *)((int)this + 0x614);
      do {
        uVar3 = *(uint *)(*piVar4 + 8);
        if (999999 < uVar3) {
          uVar3 = uVar3 - 1000000;
        }
        F_00cb4540(*(undefined * PTR32 *)((int)this + 0x90),uVar6,uVar3);
        uVar6 = uVar6 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar6 < *(uint *)((int)this + 0x64c));
    }
    piVar4 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),9);
    *(int * PTR32 *)((int)this + 0x8c) = piVar4;
    uVar6 = 0;
    if (piVar4 != (int *)0x0) {
      uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0x48))(piVar4,*(undefined4 *)((int)this + 0x90));
      return uVar6;
    }
  }
  return uVar6;
}

/* ref: FUN_00824350 */
unsigned int F_00824350(unsigned int gen_a0)
{
  GEN_ENTER(0x824350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined2 * puVar3;
  bool bVar4;
  int local_8;
  
  *(undefined4 *)((int)this + 0x968c) = 0;
  puVar3 = (undefined2 *)((int)this + 0x96a4);
  local_8 = 5;
  do {
    if (puVar3[-1] != 0) {
      *(undefined1 *)((int)puVar3 + 5) = 0;
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 1) = 0;
      if (*(int *)((int)this + 0x9680) == 0) {
        bVar4 = false;
        *puVar3 = 0;
      }
      else {
        uVar1 = F_00ab21a0(*(int *)((int)this + 0x9680));
        iVar2 = 3;
        switch((unsigned int)(uintptr_t)(*(undefined1 *)(uVar1 + 0x3f))) {
        case 1: ;
          iVar2 = 0;
          break;
        case 2: ;
        case 3: ;
          iVar2 = 2;
          break;
        case 4: ;
          iVar2 = 1;
        }
        bVar4 = iVar2 == 2;
        *(bool *)puVar3 = iVar2 == 0;
        *(bool *)((int)puVar3 + 1) = iVar2 == 1;
      }
      *(bool *)(puVar3 + 1) = bVar4;
    }
    puVar3 = puVar3 + 5;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  F_007d0c60(this);
  return 0;
}

/* ref: FUN_00824400 */
uint F_00824400(unsigned int gen_a0)
{
  GEN_ENTER(0x824400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint * this_00;
  int iVar4;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  (*(uint *)(gen_frame + 0xf8)) = uVar1;
  if (*(int *)((int)this + 0xb950) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)((int)this + 0xb950));
    if ((char)uVar1 != '\0') {
      if (*(int *)((int)this + 0xb958) == 0x6b) {
        ((undefined4 *)(gen_frame + 0xb8))[0] = 0;
        (*(undefined4 *)(gen_frame + 0xc0)) = 0;
        (*(undefined4 *)(gen_frame + 0xc8)) = 0;
        (*(undefined4 *)(gen_frame + 0xd0)) = 0;
        (*(undefined4 *)(gen_frame + 0xd8)) = 0;
        (*(undefined4 *)(gen_frame + 0xe0)) = 0;
        (*(undefined4 *)(gen_frame + 0xe8)) = 0;
        (*(undefined4 *)(gen_frame + 0xf0)) = 0;
        F_0076c0f0(this,((undefined4 *)(gen_frame + 0xb8)));
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
        ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 0xb950),8,((undefined4 *)(gen_frame + 0xb8)));
        this_00 = &(*(uint *)(gen_frame + 0xf8));
        iVar4 = 7;
        do {
          this_00 = this_00 + -2;
          uVar1 = F_005a2670(this_00);
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
        F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
        return uVar1;
      }
      puVar3 = ((undefined4 *)(gen_frame + 0x0));
      iVar4 = 0x16;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 2;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      F_007d03d0(this,((undefined4 *)(gen_frame + 0x0)));
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 0xb950),0x17,((undefined4 *)(gen_frame + 0x0)));
      if ((*(int *)((int)this + 0xb958) == 0x69) && (REFG(int, 0x1379694) != 0)) {
        *(bool *)((int)this + 0xb970) = *(char *)(REFG(int, 0x1379694) + 0x188) == '\x02';
      }
      puVar3 = ((undefined4 *)(gen_frame + 0xb8));
      iVar4 = 0x16;
      do {
        puVar3 = puVar3 + -2;
        uVar1 = F_005a2670(puVar3);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
  return uVar1;
}

/* ref: FUN_00824550 */
uint F_00824550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x824550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00824200((undefined *)((int)this + 0xc),param_2,this,5);
  return uVar1;
}

/* ref: FUN_00824570 */
unsigned int F_00824570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x824570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    do {
      if (*(int *)(param_2 + uVar2 * 4) != 0) {
        uVar1 = F_0076beb0(this,(uint)*(ushort *)(param_2 + uVar2 * 4));
        if (uVar1 == 0) {
          return 0;
        }
        F_0076c4d0(this,uVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_1);
  }
  if (*(char *)((int)this + 0xb974) == '\x02') {
    F_007d0c60(this);
  }
  return 0;
}

/* ref: FUN_008245c0 */
uint F_008245c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8245c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d69bc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d69ac));
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
  *(undefined4 *)((int)this + 0x8c) = 0;
  F_007d1380(this);
  return ((uint)(uint)(this));
}

/* ref: Client::UI2::Agent::AgentFishingNote::vf3 */
unsigned int F_00824630(unsigned int gen_a0)
{
  GEN_ENTER(0x824630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  F_007d1380(this);
  return 0;
}

/* ref: Client::UI2::Agent::AgentFishingNote::vf5 */
uint F_00824670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x824670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  int iVar9;
  undefined * pAVar10;
  undefined4 * local_10;
  int local_c;
  
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar4 != '\0') {
    if (*(short *)(this + 0xa0) == *(short *)(this + 0x9c)) {
      if (*(ushort *)(this + 0xa2) < 8) {
        sVar3 = *((short *)GEN_TOP((this + (uint)*(ushort *)(this + 0xa2) * 6 + 0x62)));
      }
      else {
        sVar3 = 0;
      }
      if (sVar3 == *(short *)(this + 0x9e)) {
        piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,0x3e);
        piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,0x18);
        if ((uVar6 != 0) && (uVar4 != 0)) {
          if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1310))) != **(int * PTR32 *)(uVar6 + 0x20)) {
            *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1310))) = **(int * PTR32 *)(uVar6 + 0x20);
            *(undefined1 *)(uVar4 + 0x1d) = 1;
          }
          iVar9 = *((int *)GEN_TOP((*(int *)(uVar6 + 0x20) + 4)));
          if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1314))) != iVar9) {
            *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1314))) = iVar9;
            *(undefined1 *)(uVar4 + 0x1d) = 1;
          }
          iVar9 = *((int *)GEN_TOP((*(int *)(uVar6 + 0x20) + 8)));
          if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1308))) != iVar9) {
            *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1308))) = iVar9;
            *(undefined1 *)(uVar4 + 0x1d) = 1;
          }
          iVar9 = *((int *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0xc)));
          if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x130c))) != iVar9) {
            *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x130c))) = iVar9;
            *(undefined1 *)(uVar4 + 0x1d) = 1;
          }
          uVar6 = *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc94)));
          uVar7 = uVar6 | 4;
          if (uVar6 != uVar7) {
            *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc94))) = uVar7;
            *(undefined1 *)(uVar4 + 0x1d) = 1;
          }
        }
      }
    }
    uVar4 = (byte)this[0xa7] - 1;
    if (uVar4 == 0) {
      if (this[0xa6] != (undefined1)0x0) {
        piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,0x3e);
        piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        puVar8 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5,0x39)));
        iVar9 = 0;
        if (uVar6 == 0) {
          return (uint)puVar8;
        }
        if (puVar8 == (undefined4 *)0x0) {
          return 0;
        }
        local_c = 0;
        bVar2 = true;
        local_10 = (undefined4 *)0x0;
        if (this[0xa6] != (undefined1)0x0) {
          iVar9 = 0xc44;
          pAVar10 = this + 0x14;
          do {
            if (pAVar10[1] == (undefined1)0x0) {
              if (*pAVar10 == (undefined1)0x0) {
                if (*((int *)GEN_TOP((iVar9 + 4 + *(int *)(uVar6 + 0x20)))) != 0xea62) {
                  *((undefined4 *)GEN_TOP((iVar9 + 4 + *(int *)(uVar6 + 0x20)))) = 0xea62;
                  *(undefined1 *)(uVar6 + 0x1d) = 1;
                }
                puVar8 = ((undefined4 *)GEN_TOP((iVar9 + *(int *)(uVar6 + 0x20))));
                if (*((int *)GEN_TOP((iVar9 + *(int *)(uVar6 + 0x20)))) != 0) {
                  *puVar8 = 0;
                  goto LAB_0082487d;
                }
                goto LAB_00824881;
              }
            }
            else {
              puVar8 = (undefined4 *)F_00ab24a0(*(undefined4 *)(pAVar10 + -4));
              if ((puVar8 != (undefined4 *)0x0) && (*pAVar10 == (undefined1)0x0)) {
                uVar4 = F_00ab65a0(*(undefined4 *)(pAVar10 + -4),puVar8);
                puVar1 = ((uint *)GEN_TOP((iVar9 + 4 + *(int *)(uVar6 + 0x20))));
                if (*puVar1 != uVar4) {
                  *puVar1 = uVar4;
                  *(undefined1 *)(uVar6 + 0x1d) = 1;
                }
                puVar8 = *(undefined4 * PTR32 *)(pAVar10 + -4);
                if (*((undefined4 * PTR32 *)GEN_TOP((iVar9 + *(int *)(uVar6 + 0x20)))) != puVar8) {
                  *((undefined4 * PTR32 *)GEN_TOP((iVar9 + *(int *)(uVar6 + 0x20)))) = puVar8;
LAB_0082487d: ;
                  *(undefined1 *)(uVar6 + 0x1d) = 1;
                }
LAB_00824881: ;
                *pAVar10 = (undefined1)0x1;
              }
            }
            if (*(int *)(pAVar10 + -4) == 0) break;
            local_c = local_c + 1;
            iVar9 = iVar9 + 8;
            if (*pAVar10 == (undefined1)0x0) {
              bVar2 = false;
            }
            puVar8 = (undefined4 *)((int)local_10 + 1);
            pAVar10 = pAVar10 + 8;
            local_10 = puVar8;
          } while (puVar8 < (undefined4 *)(uint)(byte)this[0xa6]);
          iVar9 = local_c;
          if (!bVar2) {
            return (uint)puVar8;
          }
        }
        if (*((int *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0xc3c))) != iVar9) {
          *((int *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0xc3c))) = iVar9;
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
        uVar4 = *(uint *)(uVar6 + 0x20);
        if (*(int *)(uVar4 + 0xc38) != 1) {
          *(undefined4 *)(uVar4 + 0xc38) = 1;
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
      }
      this[0xa7] = (undefined1)0x0;
    }
  }
  return uVar4;
}

/* ref: FUN_00824900 */
uint F_00824900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x824900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar2 = (uint)*(ushort *)((int)this + 0xa2);
  if (((7 < uVar2) || (*(short *)((int)this + uVar2 * 6 + 0x62) == 0)) ||
     (*(short *)((int)this + uVar2 * 6 + 100) == 0)) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  iVar1 = *(int *)(uVar2 + 0x88);
  if (iVar1 != 0) {
    if (*(ushort *)((int)this + 0xa2) < 8) {
      uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0xa2) * 6 + 100)));
    }
    else {
      uVar2 = 0;
    }
    puVar3 = (uint *)F_00ab1e70(uVar2);
    if (puVar3 != (uint *)0x0) {
      F_0042b630(((undefined1 *)(gen_frame + 0x4)));
      F_00774030(((undefined1 *)(gen_frame + 0x4)),(*puVar3 & 0xffffff) + (int)puVar3,0);
      uVar7 = 0;
      uVar6 = 1;
      uVar5 = 0;
      uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
      F_00431250(param_3,0x10e,uVar4,uVar5,uVar6,uVar7);
      F_00774180(((undefined1 *)(gen_frame + 0x4)),(*puVar3 & 0xffffff) + (int)puVar3,(uint)(-1 < (short)puVar3[7]),0);
      uVar7 = 0;
      uVar6 = 1;
      uVar5 = 0;
      uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
      F_00431250(param_3,0x10f,uVar4,uVar5,uVar6,uVar7);
      uVar4 = F_007d8f20(uVar2,puVar3[2]);
      if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xc98))) != uVar4) {
        *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xc98))) = uVar4;
        *(undefined1 *)(param_2 + 0x1d) = 1;
      }
      uVar2 = (uint)(*(uint *)(iVar1 + 0x338c) == uVar2);
      if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xc9c))) != uVar2) {
        *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xc9c))) = uVar2;
        *(undefined1 *)(param_2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xca0))) !=
          (int)(((double)GEN_TOD(gen_bits2f(puVar3[1]))) * REFG(double, 0x10944b8))) {
        *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xca0))) =
             (int)(((double)GEN_TOD(gen_bits2f(puVar3[1]))) * REFG(double, 0x10944b8));
        *(undefined1 *)(param_2 + 0x1d) = 1;
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_00824ad0 */
byte F_00824ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x824ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  short sVar2;
  
  if (*(short *)((int)this + 0xa0) == *(short *)((int)this + 0x9c)) {
    if (*(ushort *)((int)this + 0xa2) < 8) {
      sVar2 = *((short *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0xa2) * 6 + 0x62)));
    }
    else {
      sVar2 = 0;
    }
    if ((sVar2 == *(short *)((int)this + 0x9e)) && (param_1 < 0x51)) {
      iVar1 = param_1 * 5 + 0x32d;
      if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar1 * 4))) != 0x10000080) {
        *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar1 * 4))) = 0x10000080;
        *(undefined1 *)(param_2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 4 + iVar1 * 4))) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 4 + iVar1 * 4))) = 0;
        *(undefined1 *)(param_2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 8 + iVar1 * 4))) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 8 + iVar1 * 4))) = 0;
        *(undefined1 *)(param_2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xc + iVar1 * 4))) != 0xec1b) {
        *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xc + iVar1 * 4))) = 0xec1b;
        *(undefined1 *)(param_2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x10 + iVar1 * 4))) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x10 + iVar1 * 4))) = 0;
        *(undefined1 *)(param_2 + 0x1d) = 1;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00824ba0 */
uint F_00824ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x824ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(char *)((int)this + 0xe7) * 0x19 + param_2;
  if (uVar2 < *(ushort *)((int)this + 0xe4)) {
    iVar1 = *(int *)((int)param_1 + 4);
    if (((uVar2 < (uint)((*(int *)((int)param_1 + 8) - iVar1) / 0x14)) &&
        ((*(byte *)(iVar1 + 0xe + uVar2 * 0x14) & 1) != 0)) &&
       (uVar2 = (uint)*(ushort *)(iVar1 + uVar2 * 0x14 + 4), uVar2 != 0)) {
      uVar2 = F_00a6f950(param_1,uVar2);
      return uVar2;
    }
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4))))((int)this + 0xc,7);
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4))))((int)this + 0xc,7);
  return uVar2;
}

/* ref: FUN_00824c30 */
uint F_00824c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x824c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  ushort uVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  uint * puVar4;
  uint * puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  uVar1 = *(ushort *)((int)this + 0xe4);
  uVar7 = *(char *)((int)this + 0xe7) * 0x19;
  if (((uVar1 != 0) && (uVar7 < uVar1)) &&
     (uVar7 = (int)*(char *)((int)this + 0xe8) + uVar7, uVar7 < 200)) {
    *(undefined4 *)((int)this + 0xdc) = 0;
    *(undefined1 *)((int)this + 0xe9) = 0;
    if ((uVar7 < uVar1) &&
       (puVar2 = (undefined4 *)F_00926cf0((undefined *)(param_1 + 4),uVar7),
       (*(byte *)((int)puVar2 + 0xe) & 1) != 0)) {
      *(undefined4 *)((int)this + 0xdc) = *puVar2;
      *(byte *)((int)this + 0xe9) = *(byte *)((int)puVar2 + 0xe) >> 1 & 1;
      if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x13c))) != (uint)*(byte *)((int)puVar2 + 0xd)) {
        *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x13c))) = (uint)*(byte *)((int)puVar2 + 0xd);
        *(undefined1 *)(param_2 + 0x1d) = 1;
      }
      uVar1 = *(ushort *)((int)puVar2 + 10);
      if ((uVar1 < 0xef9) || (0xefe < uVar1)) {
        uVar1 = 0xef9;
      }
      uVar13 = 0;
      uVar12 = 1;
      uVar11 = 0;
      uVar7 = (uint)uVar1;
      uVar10 = 0;
      uVar9 = 0;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar7 = F_0043bd00(pvVar3,uVar7,uVar9,uVar10);
      F_00431250(param_3,3,uVar7,uVar11,uVar12,uVar13);
      uVar11 = 0;
      uVar10 = 1;
      uVar9 = 0;
      uVar7 = F_0042a990(param_1 + 0x14);
      F_00431250(param_3,6,uVar7,uVar9,uVar10,uVar11);
      uVar7 = (uint)*(byte *)(puVar2 + 3);
      uVar12 = 0;
      uVar11 = 1;
      uVar10 = 0;
      uVar9 = 0x23;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar7 = F_00461bb0(pvVar3,uVar9,uVar7);
      F_00431250(param_3,5,uVar7,uVar10,uVar11,uVar12);
      puVar4 = (uint *)F_00ab2750((uint)*(ushort *)((int)puVar2 + 6));
      if (((puVar4 != (uint *)0x0) &&
          (uVar7 = F_00ab1c90((uint)*(ushort *)(puVar2 + 2)), uVar7 != 0)) &&
         (puVar5 = (uint *)F_00ab2750((uint)*(ushort *)(uVar7 + 0x20)), puVar5 != (uint *)0x0)) {
        uVar12 = 0;
        iVar8 = (*puVar5 & 0xffffff) + (int)puVar5;
        uVar11 = 1;
        uVar10 = 0;
        iVar6 = (*puVar4 & 0xffffff) + (int)puVar4;
        uVar9 = 0xef0;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar7 = F_00461500(pvVar3,uVar9,iVar6,iVar8);
        F_00431250(param_3,7,uVar7,uVar10,uVar11,uVar12);
      }
    }
    if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x138))) != *(int *)((int)this + 0xdc)) {
      *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x138))) = *(int *)((int)this + 0xdc);
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
    return 8;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentGearSet::vf3 */
uint F_00824e10(unsigned int gen_a0)
{
  GEN_ENTER(0x824e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x24) + 0xc))))(*(int * PTR32 *)(uVar1 + 0x24));
  if (*(int *)(this + 0x6c) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 0x6c),0);
    *(undefined4 *)(this + 0x6c) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_00824e90 */
uint F_00824e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x824e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
  if ((char)param_2 == '\0') {
    uVar1 = F_0046c6a0(this_00,param_1);
  }
  else {
    uVar1 = F_0046cf50(this_00);
  }
  if (uVar1 != 0xffffffff) {
    F_00446df0(this_00,100);
    F_007d2430(this);
    if (*(int *)((int)this + 8) != 0) {
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
      (*(uint *)(gen_frame + 0x8)) = uVar1;
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),1,&(*(undefined4 *)(gen_frame + 0x4)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
    }
  }
  return uVar1;
}

/* ref: FUN_00824f20 */
byte F_00824f20(unsigned int gen_a0)
{
  GEN_ENTER(0x824f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0046cf50(this_00);
  if (uVar1 != 0xffffffff) {
    F_00446df0(this_00,100);
    F_007d2430(this);
    if (*(int *)((int)this + 8) != 0) {
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
      (*(uint *)(gen_frame + 0x8)) = uVar1;
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),1,&(*(undefined4 *)(gen_frame + 0x4)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
    }
  }
  return 0;
}

/* ref: FUN_00824fa0 */
byte F_00824fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x824fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(this_00,0x136f,0,0);
  F_005a2710(param_1,6);
  *(uint *)((int)param_1 + 4) = uVar2;
  uVar2 = F_0043bd00(this_00,0x1370,0,0);
  F_005a2710((undefined *)((int)param_1 + 8),6);
  *(uint *)((int)param_1 + 0xc) = uVar2;
  uVar2 = F_0043bd00(this_00,0x1371,0,0);
  F_005a2710((undefined *)((int)param_1 + 0x10),6);
  *(uint *)((int)param_1 + 0x14) = uVar2;
  uVar2 = F_0043bd00(this_00,0x135f,0,0);
  F_005a2710((undefined *)((int)param_1 + 0x18),6);
  *(uint *)((int)param_1 + 0x1c) = uVar2;
  uVar2 = F_0043bd00(this_00,0x1362,0,0);
  F_005a2710((undefined *)((int)param_1 + 0x20),6);
  *(uint *)((int)param_1 + 0x24) = uVar2;
  uVar2 = F_0043bd00(this_00,0x136a,0,0);
  F_005a2710((undefined *)((int)param_1 + 0x28),6);
  *(uint *)((int)param_1 + 0x2c) = uVar2;
  uVar2 = F_0043bd00(this_00,0x136b,0,0);
  F_005a2710((undefined *)((int)param_1 + 0x30),6);
  *(uint *)((int)param_1 + 0x34) = uVar2;
  uVar2 = F_0043bd00(this_00,0x136c,0,0);
  F_005a2710((undefined *)((int)param_1 + 0x38),6);
  *(uint *)((int)param_1 + 0x3c) = uVar2;
  bVar1 = F_007d2d60(this,&REFG(undefined, 0x14ab584),param_1);
  if (bVar1 != 0) {
    bVar1 = F_007d2df0(this,&REFG(undefined, 0x14ab584),param_1);
    if (bVar1 != 0) {
      bVar1 = F_0076e270(this,&REFG(undefined, 0x14ab584),param_1);
      return bVar1 != 0;
    }
  }
  return 0;
}

/* ref: FUN_00825120 */
uint F_00825120(unsigned int gen_a0)
{
  GEN_ENTER(0x825120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  
  iVar2 = *(int *)((int)this + 0x4c);
  uVar5 = 0;
  if (iVar2 != 0) {
    if ((*(char *)((int)this + 0x44) == '\0') || (*(short *)(iVar2 + 0xe) == 0)) {
      sVar1 = *((short *)GEN_TOP((iVar2 + 4 + *(int *)((int)this + 0x3c) * 2)));
    }
    else {
      sVar1 = *((short *)GEN_TOP((iVar2 + 0xe + *(int *)((int)this + 0x3c) * 2)));
    }
    uVar4 = F_00ab3b70((int)sVar1);
    uVar5 = 0;
    if (uVar4 != 0) {
      bVar3 = F_007d3060(this,*(undefined4 *)((int)this + 0x3c));
      uVar5 = CONCAT31(extraout_var,bVar3);
      if (bVar3 != 0) {
        *(undefined4 *)((int)this + 0x50) = 0;
      }
    }
  }
  return uVar5;
}

/* ref: FUN_00825170 */
uint F_00825170(unsigned int gen_a0)
{
  GEN_ENTER(0x825170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1e0];
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  uint * puVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x1d8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc);
  uVar7 = ~(**(int * PTR32 *)((int)this + 0xe4) << 7) & 0x10000;
  if (*(char *)((int)this + 0x60) != '\0') {
    puVar5 = ((undefined4 *)(gen_frame + 0x8));
    iVar6 = 0x36;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
    ((undefined4 *)(gen_frame + 0x8))[1] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = uVar7 | 9;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
    (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
    if (*(int *)((int)this + 0xcc) == 0) {
      uVar9 = 0x3c;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar3 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xcc) = uVar3;
      if (uVar3 != 0) goto LAB_0082522e;
    }
    else {
LAB_0082522e: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
    }
    (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
    (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
    (*(undefined4 *)(gen_frame + 0x1cc)) = 9;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
    (*(uint *)(gen_frame + 0x1d4)) = uVar7 >> 0x10;
    if (*(int *)((int)this + 0xd0) == 0) {
      uVar9 = 0x80;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar7 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xd0) = uVar7;
      if (uVar7 != 0) goto LAB_008252b6;
    }
    else {
LAB_008252b6: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
    }
    puVar8 = &(*(uint *)(gen_frame + 0x1d8));
    iVar6 = 2;
    do {
      puVar8 = puVar8 + -2;
      F_005a2670(puVar8);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar5 = &(*(undefined4 *)(gen_frame + 0x1c0));
    iVar6 = 0x36;
    do {
      puVar5 = puVar5 + -2;
      F_005a2670(puVar5);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  bVar1 = **(byte * PTR32 *)((int)this + 0xe4);
  if (*(char *)((int)this + 0x60) != '\0') {
    puVar5 = ((undefined4 *)(gen_frame + 0x8));
    iVar6 = 0x36;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
    ((undefined4 *)(gen_frame + 0x8))[1] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = ((byte)~bVar1 & 0x80) << 9 | 7;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
    (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
    if (*(int *)((int)this + 0xcc) == 0) {
      uVar9 = 0x3c;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar7 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xcc) = uVar7;
      if (uVar7 != 0) goto LAB_008253ab;
    }
    else {
LAB_008253ab: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
    }
    (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
    (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
    (*(undefined4 *)(gen_frame + 0x1cc)) = 7;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
    (*(uint *)(gen_frame + 0x1d4)) = (uint)((byte)~bVar1 >> 7);
    if (*(int *)((int)this + 0xd0) == 0) {
      uVar9 = 0x80;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar7 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xd0) = uVar7;
      if (uVar7 != 0) goto LAB_00825433;
    }
    else {
LAB_00825433: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
    }
    puVar8 = &(*(uint *)(gen_frame + 0x1d8));
    iVar6 = 2;
    do {
      puVar8 = puVar8 + -2;
      F_005a2670(puVar8);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar5 = &(*(undefined4 *)(gen_frame + 0x1c0));
    iVar6 = 0x36;
    do {
      puVar5 = puVar5 + -2;
      F_005a2670(puVar5);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  uVar7 = ~(**(uint * PTR32 *)((int)this + 0xe4) >> 0xd) & 0x10000;
  if (*(char *)((int)this + 0x60) != '\0') {
    puVar5 = ((undefined4 *)(gen_frame + 0x8));
    iVar6 = 0x36;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
    ((undefined4 *)(gen_frame + 0x8))[1] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = uVar7 | 0x1d;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
    (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
    if (*(int *)((int)this + 0xcc) == 0) {
      uVar9 = 0x3c;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar3 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xcc) = uVar3;
      if (uVar3 != 0) goto LAB_00825529;
    }
    else {
LAB_00825529: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
    }
    (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
    (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
    (*(undefined4 *)(gen_frame + 0x1cc)) = 0x1d;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
    (*(uint *)(gen_frame + 0x1d4)) = uVar7 >> 0x10;
    if (*(int *)((int)this + 0xd0) == 0) {
      uVar9 = 0x80;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar7 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xd0) = uVar7;
      if (uVar7 != 0) goto LAB_008255b1;
    }
    else {
LAB_008255b1: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
    }
    puVar8 = &(*(uint *)(gen_frame + 0x1d8));
    iVar6 = 2;
    do {
      puVar8 = puVar8 + -2;
      F_005a2670(puVar8);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar5 = &(*(undefined4 *)(gen_frame + 0x1c0));
    iVar6 = 0x36;
    do {
      puVar5 = puVar5 + -2;
      F_005a2670(puVar5);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  uVar7 = ~(**(int * PTR32 *)((int)this + 0xe4) << 8) & 0x10000;
  if (*(char *)((int)this + 0x60) != '\0') {
    puVar5 = ((undefined4 *)(gen_frame + 0x8));
    iVar6 = 0x36;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
    ((undefined4 *)(gen_frame + 0x8))[1] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = uVar7 | 8;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
    (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
    if (*(int *)((int)this + 0xcc) == 0) {
      uVar9 = 0x3c;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar3 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xcc) = uVar3;
      if (uVar3 != 0) goto LAB_008256a9;
    }
    else {
LAB_008256a9: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
    }
    (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
    (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
    (*(undefined4 *)(gen_frame + 0x1cc)) = 8;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
    (*(uint *)(gen_frame + 0x1d4)) = uVar7 >> 0x10;
    if (*(int *)((int)this + 0xd0) == 0) {
      uVar9 = 0x80;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar7 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xd0) = uVar7;
      if (uVar7 != 0) goto LAB_00825731;
    }
    else {
LAB_00825731: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
    }
    puVar8 = &(*(uint *)(gen_frame + 0x1d8));
    iVar6 = 2;
    do {
      puVar8 = puVar8 + -2;
      F_005a2670(puVar8);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar5 = &(*(undefined4 *)(gen_frame + 0x1c0));
    iVar6 = 0x36;
    do {
      puVar5 = puVar5 + -2;
      F_005a2670(puVar5);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  uVar7 = (*((byte *)GEN_TOP((*(int *)((int)this + 0xe4) + 4))) ^ 0xffffffff) & 2;
  if (*(char *)((int)this + 0x60) != '\0') {
    puVar5 = ((undefined4 *)(gen_frame + 0x8));
    iVar6 = 0x36;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
    ((undefined4 *)(gen_frame + 0x8))[1] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = uVar7 << 0xf | 0x21;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
    (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
    if (*(int *)((int)this + 0xcc) == 0) {
      uVar9 = 0x3c;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar3 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xcc) = uVar3;
      if (uVar3 != 0) goto LAB_00825829;
    }
    else {
LAB_00825829: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
    }
    (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
    (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
    (*(undefined4 *)(gen_frame + 0x1cc)) = 0x21;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
    (*(uint *)(gen_frame + 0x1d4)) = uVar7 >> 1;
    if (*(int *)((int)this + 0xd0) == 0) {
      uVar9 = 0x80;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar7 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xd0) = uVar7;
      if (uVar7 != 0) goto LAB_008258b1;
    }
    else {
LAB_008258b1: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
    }
    puVar8 = &(*(uint *)(gen_frame + 0x1d8));
    iVar6 = 2;
    do {
      puVar8 = puVar8 + -2;
      F_005a2670(puVar8);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar5 = &(*(undefined4 *)(gen_frame + 0x1c0));
    iVar6 = 0x36;
    do {
      puVar5 = puVar5 + -2;
      F_005a2670(puVar5);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  uVar7 = ~(**(uint * PTR32 *)((int)this + 0xe4) >> 0xb) & 0x10000;
  if (*(char *)((int)this + 0x60) != '\0') {
    puVar5 = ((undefined4 *)(gen_frame + 0x8));
    iVar6 = 0x36;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
    ((undefined4 *)(gen_frame + 0x8))[1] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = uVar7 | 0x1b;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
    (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
    if (*(int *)((int)this + 0xcc) == 0) {
      uVar9 = 0x3c;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar3 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xcc) = uVar3;
      if (uVar3 != 0) goto LAB_008259a9;
    }
    else {
LAB_008259a9: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
    }
    (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
    (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
    (*(undefined4 *)(gen_frame + 0x1cc)) = 0x1b;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
    (*(uint *)(gen_frame + 0x1d4)) = uVar7 >> 0x10;
    if (*(int *)((int)this + 0xd0) == 0) {
      uVar9 = 0x80;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar7 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xd0) = uVar7;
      if (uVar7 != 0) goto LAB_00825a31;
    }
    else {
LAB_00825a31: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
    }
    puVar8 = &(*(uint *)(gen_frame + 0x1d8));
    iVar6 = 2;
    do {
      puVar8 = puVar8 + -2;
      F_005a2670(puVar8);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar5 = &(*(undefined4 *)(gen_frame + 0x1c0));
    iVar6 = 0x36;
    do {
      puVar5 = puVar5 + -2;
      F_005a2670(puVar5);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  uVar7 = ~(**(uint * PTR32 *)((int)this + 0xe4) >> 0xc) & 0x10000;
  if (*(char *)((int)this + 0x60) != '\0') {
    puVar5 = ((undefined4 *)(gen_frame + 0x8));
    iVar6 = 0x36;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
    ((undefined4 *)(gen_frame + 0x8))[1] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = uVar7 | 0x1c;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
    (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
    if (*(int *)((int)this + 0xcc) == 0) {
      uVar9 = 0x3c;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar3 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xcc) = uVar3;
      if (uVar3 != 0) goto LAB_00825b29;
    }
    else {
LAB_00825b29: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
    }
    (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
    (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
    (*(undefined4 *)(gen_frame + 0x1cc)) = 0x1c;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
    (*(uint *)(gen_frame + 0x1d4)) = uVar7 >> 0x10;
    if (*(int *)((int)this + 0xd0) == 0) {
      uVar9 = 0x80;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar7 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xd0) = uVar7;
      if (uVar7 != 0) goto LAB_00825bb1;
    }
    else {
LAB_00825bb1: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
    }
    puVar8 = &(*(uint *)(gen_frame + 0x1d8));
    iVar6 = 2;
    do {
      puVar8 = puVar8 + -2;
      F_005a2670(puVar8);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar5 = &(*(undefined4 *)(gen_frame + 0x1c0));
    iVar6 = 0x36;
    do {
      puVar5 = puVar5 + -2;
      F_005a2670(puVar5);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  uVar7 = (*((byte *)GEN_TOP((*(int *)((int)this + 0xe4) + 4))) ^ 0xffffffff) & 8;
  if (*(char *)((int)this + 0x60) != '\0') {
    puVar5 = ((undefined4 *)(gen_frame + 0x8));
    iVar6 = 0x36;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
    ((undefined4 *)(gen_frame + 0x8))[1] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = uVar7 << 0xd | 0x23;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
    (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
    if (*(int *)((int)this + 0xcc) == 0) {
      uVar9 = 0x3c;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar3 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xcc) = uVar3;
      if (uVar3 != 0) goto LAB_00825ca9;
    }
    else {
LAB_00825ca9: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
    }
    (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
    (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
    (*(undefined4 *)(gen_frame + 0x1cc)) = 0x23;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
    (*(uint *)(gen_frame + 0x1d4)) = uVar7 >> 3;
    if (*(int *)((int)this + 0xd0) == 0) {
      uVar9 = 0x80;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar7 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xd0) = uVar7;
      if (uVar7 != 0) goto LAB_00825d31;
    }
    else {
LAB_00825d31: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
    }
    puVar8 = &(*(uint *)(gen_frame + 0x1d8));
    iVar6 = 2;
    do {
      puVar8 = puVar8 + -2;
      F_005a2670(puVar8);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar5 = &(*(undefined4 *)(gen_frame + 0x1c0));
    iVar6 = 0x36;
    do {
      puVar5 = puVar5 + -2;
      F_005a2670(puVar5);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  uVar7 = (*((byte *)GEN_TOP((*(int *)((int)this + 0xe4) + 4))) ^ 0xffffffff) & 0x10;
  if (*(char *)((int)this + 0x60) != '\0') {
    puVar5 = ((undefined4 *)(gen_frame + 0x8));
    iVar6 = 0x36;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
    ((undefined4 *)(gen_frame + 0x8))[1] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = uVar7 << 0xc | 0x24;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
    (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
    if (*(int *)((int)this + 0xcc) == 0) {
      uVar9 = 0x3c;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar3 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xcc) = uVar3;
      if (uVar3 != 0) goto LAB_00825e29;
    }
    else {
LAB_00825e29: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
    }
    (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
    (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
    (*(undefined4 *)(gen_frame + 0x1cc)) = 0x24;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
    (*(uint *)(gen_frame + 0x1d4)) = uVar7 >> 4;
    if (*(int *)((int)this + 0xd0) == 0) {
      uVar9 = 0x80;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar7 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xd0) = uVar7;
      if (uVar7 != 0) goto LAB_00825eb1;
    }
    else {
LAB_00825eb1: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
    }
    puVar8 = &(*(uint *)(gen_frame + 0x1d8));
    iVar6 = 2;
    do {
      puVar8 = puVar8 + -2;
      F_005a2670(puVar8);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar5 = &(*(undefined4 *)(gen_frame + 0x1c0));
    iVar6 = 0x36;
    do {
      puVar5 = puVar5 + -2;
      F_005a2670(puVar5);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  uVar7 = (*((byte *)GEN_TOP((*(int *)((int)this + 0xe4) + 4))) ^ 0xffffffff) & 1;
  if (*(char *)((int)this + 0x60) != '\0') {
    puVar5 = ((undefined4 *)(gen_frame + 0x8));
    iVar6 = 0x36;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
    ((undefined4 *)(gen_frame + 0x8))[1] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = uVar7 << 0x10 | 0x20;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
    (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
    if (*(int *)((int)this + 0xcc) == 0) {
      uVar9 = 0x3c;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar3 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xcc) = uVar3;
      if (uVar3 != 0) goto LAB_00825fa9;
    }
    else {
LAB_00825fa9: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
    }
    (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
    (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
    (*(undefined4 *)(gen_frame + 0x1cc)) = 0x20;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
    (*(uint *)(gen_frame + 0x1d4)) = uVar7;
    if (*(int *)((int)this + 0xd0) == 0) {
      uVar9 = 0x80;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar7 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xd0) = uVar7;
      if (uVar7 != 0) goto LAB_00826031;
    }
    else {
LAB_00826031: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
    }
    puVar8 = &(*(uint *)(gen_frame + 0x1d8));
    iVar6 = 2;
    do {
      puVar8 = puVar8 + -2;
      F_005a2670(puVar8);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar5 = &(*(undefined4 *)(gen_frame + 0x1c0));
    iVar6 = 0x36;
    do {
      puVar5 = puVar5 + -2;
      F_005a2670(puVar5);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  uVar7 = ~(*((int *)GEN_TOP((*(int *)((int)this + 0xe4) + 4))) << 7) & 0x10000;
  if (*(char *)((int)this + 0x60) != '\0') {
    puVar5 = ((undefined4 *)(gen_frame + 0x8));
    iVar6 = 0x36;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
    ((undefined4 *)(gen_frame + 0x8))[1] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = uVar7 | 0x29;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
    (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
    if (*(int *)((int)this + 0xcc) == 0) {
      uVar9 = 0x3c;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar3 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xcc) = uVar3;
      if (uVar3 != 0) goto LAB_00826129;
    }
    else {
LAB_00826129: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
    }
    (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
    (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
    (*(undefined4 *)(gen_frame + 0x1cc)) = 0x29;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
    (*(uint *)(gen_frame + 0x1d4)) = uVar7 >> 0x10;
    if (*(int *)((int)this + 0xd0) == 0) {
      uVar9 = 0x80;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar7 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xd0) = uVar7;
      if (uVar7 != 0) goto LAB_008261b1;
    }
    else {
LAB_008261b1: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
    }
    puVar8 = &(*(uint *)(gen_frame + 0x1d8));
    iVar6 = 2;
    do {
      puVar8 = puVar8 + -2;
      F_005a2670(puVar8);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar5 = &(*(undefined4 *)(gen_frame + 0x1c0));
    iVar6 = 0x36;
    do {
      puVar5 = puVar5 + -2;
      F_005a2670(puVar5);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  uVar7 = ~(*((int *)GEN_TOP((*(int *)((int)this + 0xe4) + 4))) << 6) & 0x10000;
  if (*(char *)((int)this + 0x60) != '\0') {
    puVar5 = ((undefined4 *)(gen_frame + 0x8));
    iVar6 = 0x36;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
    ((undefined4 *)(gen_frame + 0x8))[1] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = uVar7 | 0x2a;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
    (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
    if (*(int *)((int)this + 0xcc) == 0) {
      uVar9 = 0x3c;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar3 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xcc) = uVar3;
      if (uVar3 != 0) goto LAB_008262a9;
    }
    else {
LAB_008262a9: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
    }
    (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
    (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
    (*(undefined4 *)(gen_frame + 0x1cc)) = 0x2a;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
    (*(uint *)(gen_frame + 0x1d4)) = uVar7 >> 0x10;
    if (*(int *)((int)this + 0xd0) == 0) {
      uVar9 = 0x80;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar7 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xd0) = uVar7;
      if (uVar7 != 0) goto LAB_00826331;
    }
    else {
LAB_00826331: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
    }
    puVar8 = &(*(uint *)(gen_frame + 0x1d8));
    iVar6 = 2;
    do {
      puVar8 = puVar8 + -2;
      F_005a2670(puVar8);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar5 = &(*(undefined4 *)(gen_frame + 0x1c0));
    iVar6 = 0x36;
    do {
      puVar5 = puVar5 + -2;
      F_005a2670(puVar5);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  uVar7 = ~(**(uint * PTR32 *)((int)this + 0xe4) >> 0xf) & 0x10000;
  if (*(char *)((int)this + 0x60) != '\0') {
    puVar5 = ((undefined4 *)(gen_frame + 0x8));
    iVar6 = 0x36;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
    ((undefined4 *)(gen_frame + 0x8))[1] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = uVar7 | 0x1f;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
    (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
    if (*(int *)((int)this + 0xcc) == 0) {
      uVar9 = 0x3c;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar3 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xcc) = uVar3;
      if (uVar3 != 0) goto LAB_00826429;
    }
    else {
LAB_00826429: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
    }
    (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)),4);
    (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),4);
    (*(undefined4 *)(gen_frame + 0x1cc)) = 0x1f;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),3);
    (*(uint *)(gen_frame + 0x1d4)) = uVar7 >> 0x10;
    if (*(int *)((int)this + 0xd0) == 0) {
      uVar9 = 0x80;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar7 = F_007c8b20(pvVar2,uVar9);
      *(uint *)((int)this + 0xd0) = uVar7;
      if (uVar7 != 0) goto LAB_008264b1;
    }
    else {
LAB_008264b1: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
    }
    puVar8 = &(*(uint *)(gen_frame + 0x1d8));
    iVar6 = 2;
    do {
      puVar8 = puVar8 + -2;
      F_005a2670(puVar8);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar5 = &(*(undefined4 *)(gen_frame + 0x1c0));
    iVar6 = 0x36;
    do {
      puVar5 = puVar5 + -2;
      F_005a2670(puVar5);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  uVar7 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x19b);
  if ((*(int *)(uVar7 + 0x14) != 1) || (*(char *)((int)this + 0x60) == '\0')) goto LAB_008265ed;
  puVar5 = ((undefined4 *)(gen_frame + 0x8));
  iVar6 = 0x36;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 2;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
  ((undefined4 *)(gen_frame + 0x8))[1] = 8;
  F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = 0;
  F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
  F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),3);
  (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
  if (*(int *)((int)this + 0xcc) == 0) {
    uVar9 = 0x3c;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar7 = F_007c8b20(pvVar2,uVar9);
    *(uint *)((int)this + 0xcc) = uVar7;
    if (uVar7 != 0) goto LAB_008265b5;
  }
  else {
LAB_008265b5: ;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
  }
  puVar5 = &(*(undefined4 *)(gen_frame + 0x1c0));
  iVar6 = 0x36;
  do {
    puVar5 = puVar5 + -2;
    uVar7 = F_005a2670(puVar5);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
LAB_008265ed: ;
  F_00c47745((*(uint *)(gen_frame + 0x1d8)) ^ (uint)(uint)(gen_frame + 0x1dc));
  return uVar7;
}

/* ref: FUN_00826600 */
uint F_00826600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x826600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1c0];
  char cVar1;
  byte bVar2;
  undefined4 * puVar3;
  undefined * this_00;
  uint uVar4;
  int * piVar5;
  uint in_ecx;
  undefined3 extraout_var = 0;
  int iVar6;
  uint * this_01;
  bool bVar7;
  undefined4 uVar8;
  
  cVar1 = REFG(char, 0x14ab058);
  (*(uint *)(gen_frame + 0x1b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1bc);
  if ((REFG(char, 0x14ab058) != *(char *)((int)this + 0x61)) &&
     (bVar7 = REFG(char, 0x14ab058) != '\0', *(char *)((int)this + 0x60) != '\0')) {
    puVar3 = ((undefined4 *)(gen_frame + 0x0));
    iVar6 = 0x36;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 4;
    F_005a2710(((undefined1 *)(gen_frame + 0x8)),4);
    (*(uint *)(gen_frame + 0xc)) = (uint)bVar7;
    F_005a2710(((undefined1 *)(gen_frame + 0x1a8)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1ac)) = &REFG(undefined, 0x10bdbc2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),3);
    (*(undefined4 *)(gen_frame + 0x1b4)) = 0xffffffff;
    bVar7 = false;
    if (*(int *)((int)this + 0xcc) == 0) {
      uVar8 = 0x3c;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar4 = F_007c8b20(this_00,uVar8);
      *(uint *)((int)this + 0xcc) = uVar4;
      if (uVar4 != 0) goto LAB_008266d5;
    }
    else {
LAB_008266d5: ;
      piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x0)));
      bVar7 = true;
    }
    this_01 = &(*(uint *)(gen_frame + 0x1b8));
    iVar6 = 0x36;
    do {
      this_01 = this_01 + -2;
      F_005a2670(this_01);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    if (bVar7) {
      *(char *)((int)this + 0x61) = cVar1;
    }
  }
  if (REFG(int, 0x1379694) != 0) {
    F_007d3410(this,1,(uint)(*(char *)(REFG(int, 0x1379694) + 0x2e08) == '\0'));
  }
  uVar8 = 0xb;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  in_ecx = F_00435440(uVar4,uVar8);
  uVar4 = 0;
  if (in_ecx == 0) goto LAB_00826797;
  bVar2 = F_00436880(in_ecx);
  if (bVar2 == 0) {
LAB_0082678c: ;
    uVar8 = 0;
  }
  else {
    bVar2 = F_00436880(in_ecx);
    if (bVar2 == 4) goto LAB_0082678c;
    bVar2 = F_004351d0();
    if (bVar2 != 0) goto LAB_0082678c;
    uVar8 = 1;
  }
  bVar2 = F_007d3410(this,0x1b,uVar8);
  uVar4 = CONCAT31(extraout_var,bVar2);
LAB_00826797: ;
  F_00c47745((*(uint *)(gen_frame + 0x1b8)) ^ (uint)(uint)(gen_frame + 0x1bc));
  return uVar4;
}

/* ref: FUN_00826bd0 */
uint F_00826bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x826bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_3 == -0x20000000) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0),param_3,param_4);
    if (uVar1 != 0) goto LAB_00826c6e;
  }
  if ((param_3 != -0x20000000) || (param_4 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x20);
    if (*(int *)(uVar1 + 0x164) != 0) {
      *(undefined4 *)(uVar1 + 0x164) = 0;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if ((*(char *)((int)this + 0x302) == '\0') && (*(char *)((int)this + 0x303) == '\0')) {
      return uVar1;
    }
    uVar7 = 0;
    uVar6 = 1;
    uVar5 = 0;
    uVar4 = 0;
    *(undefined1 *)((int)this + 0x303) = 0;
    uVar3 = 0;
    uVar2 = 0x40b;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043bd00(this_00,uVar2,uVar3,uVar4);
    uVar1 = F_00431250(param_2,0x4f,uVar1,uVar5,uVar6,uVar7);
    return uVar1;
  }
LAB_00826c6e: ;
  uVar1 = F_008267b0(this,param_1,param_2,uVar1);
  return uVar1;
}

/* ref: FUN_00826c90 */
byte F_00826c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x826c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_007d8520(param_2,*(undefined4 *)((int)this + 0x1af0));
  if (bVar1 != 0) {
    *(int *)((int)this + 0x1af0) = *(int *)((int)this + 0x1af0) + 1;
    return 1;
  }
  return 1;
}

/* ref: FUN_00826cd0 */
uint F_00826cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x826cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  undefined4 in_ecx;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  ((uint *)(gen_frame + 0x8))[0x10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  if (*(char *)((int)this + 0x1b45) != REFG(char, 0x14ab058)) {
    bVar8 = REFG(char, 0x14ab058) != '\0';
    *(char *)((int)this + 0x1b45) = REFG(char, 0x14ab058);
    in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
    uVar3 = F_00414500(in_ecx,(-(uint)bVar8 & 9) + 0xdd);
    if (*(int *)(uVar3 + 0x14) != 0) {
      cVar1 = *(char *)((int)this + 0x1b45);
      ((uint *)(gen_frame + 0x8))[0] = 0xde;
      ((uint *)(gen_frame + 0x8))[1] = 0xdf;
      ((uint *)(gen_frame + 0x8))[2] = 0xe0;
      ((uint *)(gen_frame + 0x8))[3] = 0xe1;
      ((uint *)(gen_frame + 0x8))[4] = 0xe2;
      ((uint *)(gen_frame + 0x8))[5] = 0xe3;
      ((uint *)(gen_frame + 0x8))[6] = 0xe4;
      ((uint *)(gen_frame + 0x8))[7] = 0xe5;
      ((uint *)(gen_frame + 0x8))[8] = 0xe7;
      ((uint *)(gen_frame + 0x8))[9] = 0xe8;
      ((uint *)(gen_frame + 0x8))[10] = 0xe9;
      ((uint *)(gen_frame + 0x8))[0xb] = 0xea;
      ((uint *)(gen_frame + 0x8))[0xc] = 0xeb;
      ((uint *)(gen_frame + 0x8))[0xd] = 0xec;
      ((uint *)(gen_frame + 0x8))[0xe] = 0xed;
      ((uint *)(gen_frame + 0x8))[0xf] = 0xee;
      iVar6 = 10;
      do {
        iVar7 = iVar6;
        if (0x11 < iVar6) {
          iVar7 = iVar6 + -8;
        }
        uVar3 = F_00414500(in_ecx,((uint *)(gen_frame + 0x8))[(int)(iVar7 + -10 + (uint)(cVar1 != '\0') * 8)]);
        if ((*(int *)(uVar3 + 0x14) != 0) && (bVar2 = F_0043aef0(this_00,iVar7), bVar2 == 0)) {
          F_007d5b50(this,iVar7);
          break;
        }
        iVar7 = iVar6 + -9;
        iVar6 = iVar6 + 1;
      } while (iVar7 < 8);
    }
  }
  if (*(char *)((int)this + 0xdd0) != *(char *)((int)this_00 + 0x2c24c)) {
    *(char *)((int)this + 0xdd0) = *(char *)((int)this_00 + 0x2c24c);
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,6);
    if (uVar3 != 0) {
      uVar5 = (uint)((*(byte *)((int)this_00 + 0x2c24c) & 0x14) != 0);
      if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d18))) != uVar5) {
        *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d18))) = uVar5;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      uVar5 = (uint)((*(byte *)((int)this_00 + 0x2c24c) & 0x28) != 0);
      if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d1c))) != uVar5) {
        *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d1c))) = uVar5;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      uVar5 = *(byte *)((int)this_00 + 0x2c24c) & 1;
      if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d20))) != uVar5) {
        *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d20))) = uVar5;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      uVar5 = *(byte *)((int)this_00 + 0x2c24c) >> 1 & 1;
      if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d28))) != uVar5) {
        *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d28))) = uVar5;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      uVar5 = *(byte *)((int)this_00 + 0x2c24c) >> 6 & 1;
      if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d38))) != uVar5) {
        *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d38))) = uVar5;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      uVar5 = (uint)(*(byte *)((int)this_00 + 0x2c24c) >> 7);
      if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d58))) != uVar5) {
        *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d58))) = uVar5;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x54))))(*(int * PTR32 *)((int)this + 4));
      uVar5 = (uint)(*(int *)(uVar5 + 0x18) != 0);
      if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d30))) != uVar5) {
        *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d30))) = uVar5;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      uVar5 = (uint)(*(int *)((int)this_00 + 0x1bd48) == 1);
      if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d5c))) != uVar5) {
        *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d5c))) = uVar5;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
    }
  }
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,6);
  if (uVar3 != 0) {
    if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d24))) != *(int *)((int)this + 0xdc8)) {
      *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d24))) = *(int *)((int)this + 0xdc8);
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
  }
  *(undefined4 *)((int)this + 0xdc8) = 0xffffffff;
  F_00c47745(((uint *)(gen_frame + 0x8))[0x10] ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3;
}

/* ref: FUN_00826fb0 */
unsigned int F_00826fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x826fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if ((((0 < param_2) && (param_1 != (undefined4 *)0x0)) && (((byte)*param_1 & 0xf) == 4)) &&
     (param_1[1] == 1)) {
    uVar1 = F_00533c90(&REFG(undefined4, 0x1375bc0));
    F_007d5ee0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00827000 */
uint F_00827000(unsigned int gen_a0)
{
  GEN_ENTER(0x827000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  iVar1 = *(int *)((int)this + 0x1b0);
  if (iVar1 == 1) {
    uVar3 = *(uint *)((int)this + 0xc);
    if ((uVar3 != 0xe0000000) && (uVar3 == REFG(undefined4, 0x14ab3b0))) {
      *(undefined4 *)((int)this + 0xc) = 0xe0000000;
      *(undefined4 *)((int)this + 0x1b0) = 2;
    }
  }
  else if (iVar1 == 2) {
    uVar3 = 0;
    if (*(char *)((int)this + 0x142) != '\0') {
      bVar2 = F_007d60d0(this);
      uVar3 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 0) {
        uVar3 = F_007716a0(this);
        *(undefined4 *)((int)this + 0x1b0) = 0;
        return uVar3;
      }
    }
  }
  else {
    uVar3 = iVar1 - 3;
    if ((uVar3 == 0) && (*(char *)((int)this + 0x142) != '\0')) {
      uVar3 = F_00771fc0(this);
      *(undefined4 *)((int)this + 0x1b0) = 0;
      *(undefined4 *)((int)this + 0x1b8) = 0;
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00827080 */
uint F_00827080(unsigned int gen_a0)
{
  GEN_ENTER(0x827080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  uint * this_00;
  int iVar4;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x38)) = uVar2;
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar3 = *(int * PTR32 *)(uVar2 + 0x28);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    }
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    uVar1 = *(undefined4 *)((int)this + 0xc);
    (*(undefined4 *)(gen_frame + 0xc)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),6,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x38));
    iVar4 = 5;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: FUN_00827130 */
unsigned int F_00827130(unsigned int gen_a0)
{
  GEN_ENTER(0x827130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
    ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,uVar1,0);
  }
  return 0;
}

/* ref: FUN_00827180 */
uint F_00827180(unsigned int gen_a0)
{
  GEN_ENTER(0x827180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined3 extraout_var = 0;
  
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  if ((*(byte *)(uVar4 + 0x230bf) & 1) == 0) {
    return uVar4;
  }
  if (*(int *)((int)this + 0x2c) == 2) {
    uVar4 = F_00760440(*(undefined4 *)((int)this + 0x30));
    pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),uVar4);
    if (pvVar5 == (undefined *)0x0) {
      return 0;
    }
    uVar6 = F_00a37da0(pvVar5,*(undefined4 *)((int)this + 0x34));
    if (uVar6 == 0) {
      return 0;
    }
    bVar3 = F_00a36720(uVar4);
    uVar4 = CONCAT31(extraout_var,bVar3);
    if (bVar3 != 0) {
      uVar4 = F_00a363c0(pvVar5,*(undefined4 *)((int)this + 0x34));
      uVar6 = uVar4;
    }
  }
  else {
    uVar4 = *(int *)((int)this + 0x2c) - 10;
    if (uVar4 != 0) {
      return uVar4;
    }
    pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d4);
    if (pvVar5 == (undefined *)0x0) {
      return 0;
    }
    uVar4 = F_00a3a8f0(pvVar5,*(undefined4 *)((int)this + 0x30),0);
    uVar6 = uVar4;
  }
  if ((uVar6 != 0) && ((*(char *)(uVar6 + 6) != '\0' || (*(int *)(uVar6 + 8) != 0)))) {
    F_007d7520(this,uVar6,*(undefined4 *)((int)this + 0x40),*(undefined4 *)((int)this + 0x30));
    iVar1 = *(int *)((int)this + 0x24);
    iVar2 = *(int *)(iVar1 + 0x20);
    uVar4 = *(uint *)(iVar2 + 8) | 4;
    *(uint *)(iVar2 + 8) = uVar4;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  return uVar4;
}

/* ref: FUN_00827270 */
uint F_00827270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x827270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined * pvVar5;
  char * pcVar6;
  char cVar7;
  uint uVar8;
  char * pcVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined1 * puVar15;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_0042cc20(((undefined1 *)(gen_frame + 0xb4)),&REFG(undefined, 0x10bde7d),REFG(undefined4, 0x108cc50));
  switch((unsigned int)(uintptr_t)(*(char *)(param_2 + 0xa0))) {
  case '\x05': ;
  case '\x06': ;
    uVar4 = F_00ab2660((uint)*(ushort *)(param_1 + 4));
    uVar8 = 0;
    if (uVar4 != 0) {
      (*(int *)(gen_frame + 0x4)) = 0;
      do {
        if (*(char *)(uVar8 + uVar4) != '\0') {
          if ((*(int *)(gen_frame + 0x4)) != 0) {
            F_0042e370(((undefined1 *)(gen_frame + 0xb4)),&REFG(undefined, 0x10c00dc));
          }
          uVar11 = (uint)*(byte *)(uVar8 + 0xf + uVar4);
          if (param_3 - 0xf4241U < 999999) {
            cVar7 = *(char *)(uVar8 + 9 + uVar4);
          }
          else {
            cVar7 = *(char *)(uVar8 + 3 + uVar4);
          }
          iVar3 = (int)cVar7;
          if (param_3 - 0xf4241U < 999999) {
            cVar7 = *(char *)(uVar8 + 0xc + uVar4);
          }
          else {
            cVar7 = *(char *)(uVar8 + 6 + uVar4);
          }
          puVar1 = (uint *)F_00ab2290((uint)*(byte *)(uVar8 + uVar4));
          F_0042e370(((undefined1 *)(gen_frame + 0xb4)),(*puVar1 & 0xffffff) + (int)puVar1);
          iVar2 = (int)cVar7;
          uVar14 = 0x3f8;
          pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))))
          ;
          uVar11 = F_00461d60(pvVar5,uVar14,uVar11,iVar3,iVar2);
          F_0042e370(((undefined1 *)(gen_frame + 0xb4)),uVar11);
          (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < 3);
    }
    break;
  case '\b': ;
  case '\t': ;
    if (param_3 - 0xf4241U < 999999) {
      uVar10 = *(ushort *)(param_1 + 0x14);
    }
    else {
      uVar10 = *(ushort *)(param_1 + 2);
    }
    uVar4 = (uint)uVar10;
    if (param_3 - 0xf4241U < 999999) {
      uVar10 = *(ushort *)(param_1 + 0x16);
    }
    else {
      uVar10 = *(ushort *)(param_1 + 4);
    }
    uVar8 = (uint)uVar10;
    iVar3 = (*(char *)(param_2 + 0xa0) != '\b') + 0x3e6;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_00461c60(pvVar5,iVar3,uVar4,uVar8);
    F_0042e430(((undefined1 *)(gen_frame + 0xb4)),uVar4);
    break;
  case '\n': ;
    uVar4 = param_3 - 0xf4241;
    if (uVar4 < 999999) {
      uVar10 = *(ushort *)(param_1 + 0x14);
    }
    else {
      uVar10 = *(ushort *)(param_1 + 2);
    }
    uVar8 = (uint)uVar10;
    if (uVar4 < 999999) {
      uVar10 = *(ushort *)(param_1 + 0x16);
    }
    else {
      uVar10 = *(ushort *)(param_1 + 4);
    }
    uVar11 = (uint)uVar10;
    if (uVar4 < 999999) {
      uVar10 = *(ushort *)(param_1 + 0x1a);
    }
    else {
      uVar10 = *(ushort *)(param_1 + 8);
    }
    uVar12 = (uint)uVar10;
    if (uVar4 < 999999) {
      uVar10 = *(ushort *)(param_1 + 0x1c);
    }
    else {
      uVar10 = *(ushort *)(param_1 + 10);
    }
    uVar14 = 0x3e6;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_00461c60(pvVar5,uVar14,uVar8,uVar11);
    F_0042e430(((undefined1 *)(gen_frame + 0xb4)),uVar4);
    uVar4 = (uint)uVar10;
    uVar14 = 999;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_00461c60(pvVar5,uVar14,uVar12,uVar4);
    puVar15 = ((undefined1 *)(gen_frame + 0xc));
    pvVar5 = (undefined *)F_0042cdb0(((undefined1 *)(gen_frame + 0xb4)),((undefined1 *)(gen_frame + 0x60)),&REFG(undefined, 0x10c00e0));
    uVar4 = F_0042cdb0(pvVar5,puVar15,uVar4);
    F_0042ccf0(((undefined1 *)(gen_frame + 0xb4)),uVar4);
    F_0042c880(((undefined1 *)(gen_frame + 0xc)));
    F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  }
  pcVar6 = (char *)F_0042a990(((undefined1 *)(gen_frame + 0xb4)));
  if (pcVar6 != (char *)0x0) {
    pcVar9 = pcVar6;
    do {
      cVar7 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar7 != '\0');
    if (pcVar9 != pcVar6 + 1) {
      F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0xe,pcVar6,0,1,0);
      *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x100;
    }
  }
  uVar13 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)uVar13;
}

/* ref: FUN_00827560 */
uint F_00827560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x827560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar4 = param_3;
  if (*(int *)(param_2 + 0x74) != 0) {
    (*(int *)(gen_frame + 0xc)) = *(byte *)(param_2 + 0x9f) - 10;
    if ((*(int *)(gen_frame + 0xc)) < 1) {
      (*(int *)(gen_frame + 0xc)) = 1;
    }
    if (*(byte *)(param_1 + 0x3e) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(byte *)(param_1 + 0x3e) + 0xf294;
    }
    iVar1 = *(int *)((int)this + 0x24);
    iVar2 = *(int *)(iVar1 + 0x20);
    if (*(int *)(iVar2 + 0x44) != iVar8) {
      *(int *)(iVar2 + 0x44) = iVar8;
      *(undefined1 *)(iVar1 + 0x1d) = 1;
    }
    uVar4 = F_00a68280(&REFG(undefined1, 0x14ab070),(uint)*(byte *)(param_1 + 0x3e),1);
    iVar8 = *(int *)((int)this + 0x24);
    iVar1 = *(int *)(iVar8 + 0x20);
    if (*(uint *)(iVar1 + 0x40) != (uVar4 & 0xffff)) {
      *(uint *)(iVar1 + 0x40) = uVar4 & 0xffff;
      *(undefined1 *)(iVar8 + 0x1d) = 0;
    }
    F_007d6dc0(this,param_3,param_4);
    uVar5 = F_007723a0(this,param_3,param_4);
    uVar11 = 0x1e3;
    uVar4 = uVar5;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_00461bb0(pvVar6,uVar11,uVar4);
    F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0x18,uVar4,0,1,0);
    iVar8 = *(int *)((int)this + 0x24);
    iVar1 = *(int *)(iVar8 + 0x20);
    if (*(uint *)(iVar1 + 0x48) != uVar5) {
      *(uint *)(iVar1 + 0x48) = uVar5;
      *(undefined1 *)(iVar8 + 0x1d) = 1;
    }
    uVar11 = *(undefined4 *)(param_2 + 0x74);
    uVar10 = 0x7e7;
    uVar12 = REFG(undefined4, 0x108cc50);
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_00461bb0(pvVar6,uVar10,uVar11);
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),uVar4,uVar12);
    piVar3 = *(int * PTR32 *)((int)this + 4);
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
    uVar11 = 0x202;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
    uVar4 = F_00461270(pvVar6,uVar11,uVar4,(*(int *)(gen_frame + 0xc)));
    F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0x19,uVar4,0,1,0);
    puVar7 = (undefined *)F_00ab6240(*(undefined4 *)(param_2 + 0x78),1,0);
    if (puVar7 == (undefined *)0x0) {
      puVar7 = &REFG(undefined, 0x10bdec3);
    }
    F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0x1a,puVar7,0,1,0);
    piVar3 = *(int * PTR32 *)((int)this + 4);
    uVar4 = F_00a412b0(param_3);
    uVar11 = 0x11;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
    uVar4 = F_00460bd0(pvVar6,uVar11,uVar4);
    F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0x1b,uVar4,0,1,0);
    uVar4 = (uint)*(byte *)(param_2 + 0x9f);
    piVar3 = *(int * PTR32 *)((int)this + 4);
    uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
    uVar11 = 0x202;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
    uVar4 = F_00461270(pvVar6,uVar11,uVar5,uVar4);
    F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0x1c,uVar4,0,1,0);
    uVar12 = 0;
    iVar8 = (-(uint)(*(char *)(param_2 + 0xa4) != '\0') & 0xfffffff1) + 0x205;
    uVar11 = 0;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_0043bd00(pvVar6,iVar8,uVar11,uVar12);
    F_00431250(*(undefined * PTR32 *)((int)this + 0x28),0x1d,uVar4,0,1,0);
    *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x40;
    uVar9 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    uVar4 = (uint)uVar9;
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar4;
}

/* ref: FUN_008277a0 */
uint F_008277a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8277a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  F_00c48350(((undefined1 *)(gen_frame + 0x0)),0,0x128);
  F_007726a0(this,((undefined1 *)(gen_frame + 0x0)),param_2,param_3,param_1,param_4);
  uVar1 = F_007d6f30(this,((undefined1 *)(gen_frame + 0x0)),param_2);
  uVar2 = F_007d7010(this,param_2);
  if ((uVar1 != 0) || (uVar2 != 0)) {
    *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x10;
  }
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
  return uVar2;
}

/* ref: FUN_00827830 */
byte F_00827830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x827830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  ulonglong uVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 * puVar14;
  undefined4 uVar15;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  bVar10 = *(char *)(param_2 + 0xa0) == '\x02';
  (*(undefined4 *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x10)), 1, 3),bVar10);
  bVar11 = *param_3 == 9999;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = *(undefined1 *)((int)this + 0x45);
  (*(uint *)(gen_frame + 0x24)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x24)), 1, 3),*(undefined1 *)((int)this + 0x45));
  (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),bVar11);
  if (bVar11) {
    uVar4 = F_00a3ba20(0xc,param_3,1);
  }
  else {
    uVar4 = F_00a3bca0(0xc,*param_3,(int)(short)param_3[1],0);
  }
  if (-1 < (int)uVar4) {
    (*(uint *)(gen_frame + 0x20)) = uVar4 & 0xffff;
    if (bVar11) {
      uVar4 = F_00a3ba20(0xd,param_3,1);
    }
    else {
      uVar4 = F_00a3bca0(0xd,*param_3,(int)(short)param_3[1],0);
    }
    if (-1 < (int)uVar4) {
      if (bVar11) {
        uVar5 = F_00a3ba20(0xe,param_3,1);
      }
      else {
        uVar5 = F_00a3bca0(0xe,*param_3,(int)(short)param_3[1],0);
      }
      if (-1 < (int)uVar5) {
        (*(int *)(gen_frame + 0x18)) = 0;
        (*(int *)(gen_frame + 0x1c)) = 0;
        bVar2 = F_007d72e0(this,param_1,param_2,(*(undefined4 *)(gen_frame + 0x10)),&(*(int *)(gen_frame + 0x1c)),uVar4 & 0xffff,(*(uint *)(gen_frame + 0x20)),
                             &(*(int *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0xc)),param_3);
        if (bVar2 != 0) {
          if ((*(short *)(param_2 + 0x84) != 0) || (*(short *)(param_2 + 0x80) != 0)) {
            (*(undefined1 *)(gen_frame + 0x28)) = 0;
            F_00c48350(((undefined1 *)(gen_frame + 0x29)),0,0x7f);
            uVar15 = 0;
            uVar13 = 0;
            uVar12 = 0x11f;
            pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                       (*(int * PTR32 *)((int)this + 4))));
            uVar7 = F_0043bd00(pvVar6,uVar12,uVar13,uVar15);
            F_00431250(*(undefined * PTR32 *)((int)this + 0x28),3,uVar7,0,1,0);
            uVar5 = uVar5 & 0xffff;
            F_00c472af(&(*(undefined1 *)(gen_frame + 0x28)),0x80,"%d.%02d",uVar5 / 1000,((uVar5 % 1000) * 100) / 1000);
            uVar9 = (*(uint *)(gen_frame + 0x24)) & 0xff;
            puVar14 = &(*(undefined1 *)(gen_frame + 0x28));
            uVar12 = 0xb74;
            uVar7 = uVar9;
            pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                       (*(int * PTR32 *)((int)this + 4))));
            uVar7 = F_00461270(pvVar6,uVar12,puVar14,uVar7);
            F_00431250(*(undefined * PTR32 *)((int)this + 0x28),6,uVar7,0,1,0);
            uVar15 = 0;
            uVar13 = 0;
            uVar12 = 0x11e;
            pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                       (*(int * PTR32 *)((int)this + 4))));
            uVar7 = F_0043bd00(pvVar6,uVar12,uVar13,uVar15);
            F_00431250(*(undefined * PTR32 *)((int)this + 0x28),4,uVar7,0,1,0);
            uVar1 = (ulonglong)(((*(uint *)(gen_frame + 0x20)) & 0xffff) * uVar5 * 1000) / 3000;
            F_00c472af(&(*(undefined1 *)(gen_frame + 0x28)),0x80,"%d.%02d",(int)(uVar1 / 1000),
                       (uint)((int)(uVar1 % 1000) * 100) / 1000);
            puVar14 = &(*(undefined1 *)(gen_frame + 0x28));
            uVar12 = 0xb73;
            uVar5 = uVar9;
            pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                       (*(int * PTR32 *)((int)this + 4))));
            uVar5 = F_00461270(pvVar6,uVar12,puVar14,uVar5);
            F_00431250(*(undefined * PTR32 *)((int)this + 0x28),7,uVar5,0,1,0);
            uVar13 = 0;
            iVar8 = (-(uint)bVar10 & 3) + 0x11d;
            uVar12 = 0;
            pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                       (*(int * PTR32 *)((int)this + 4))));
            uVar5 = F_0043bd00(pvVar6,iVar8,uVar12,uVar13);
            F_00431250(*(undefined * PTR32 *)((int)this + 0x28),5,uVar5,0,1,0);
            (*(short *)(gen_frame + 0x14)) = (short)uVar4;
            sVar3 = (*(short *)(gen_frame + 0x14));
            if (!bVar10) {
              sVar3 = (short)(*(uint *)(gen_frame + 0x20));
            }
            iVar8 = (int)sVar3;
            uVar12 = 0xb72;
            pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                       (*(int * PTR32 *)((int)this + 4))));
            uVar4 = F_00461c60(pvVar6,uVar12,iVar8,uVar9);
            F_00431250(*(undefined * PTR32 *)((int)this + 0x28),8,uVar4,0,1,0);
            iVar8 = (*(int *)(gen_frame + 0x1c));
            if (!bVar10) {
              iVar8 = (*(int *)(gen_frame + 0x18));
            }
            if (iVar8 != 0) {
              F_007d75c0(this,2,param_1,iVar8,(*(uint *)(gen_frame + 0x24)));
            }
            *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x3800;
          }
          F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
          return 1;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return 0;
}

/* ref: FUN_00827bc0 */
byte F_00827bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x827bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(uint *)(gen_frame + 0x8)) = (uint)*(ushort *)(param_2 + 0x88);
  (*(uint *)(gen_frame + 0xc)) = (uint)*(ushort *)(param_2 + 0x86);
  bVar1 = *(byte *)((int)this + 0x45);
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),bVar1);
  bVar9 = true;
  if (param_3 != (int *)0x0) {
    bVar9 = *param_3 == 9999;
    if (bVar9) {
      (*(uint *)(gen_frame + 0xc)) = F_00a3ba20(0x11,param_3,1);
    }
    else {
      (*(uint *)(gen_frame + 0xc)) = F_00a3bca0(0x11,*param_3,(int)(short)param_3[1],0);
    }
    if ((int)(*(uint *)(gen_frame + 0xc)) < 0) goto LAB_00827c3d;
    if (bVar9) {
      (*(uint *)(gen_frame + 0x8)) = F_00a3ba20(0x12,param_3,1);
    }
    else {
      (*(uint *)(gen_frame + 0x8)) = F_00a3bca0(0x12,*param_3,(int)(short)param_3[1],0);
    }
    if ((int)(*(uint *)(gen_frame + 0x8)) < 0) goto LAB_00827c3d;
  }
  if ((char)param_1 == '\0') {
    uVar3 = F_00ab25a0((uint)*(byte *)(param_2 + 0xa6));
    iVar8 = 0;
    if (uVar3 != 0) {
      iVar7 = 0;
      do {
        iVar8 = iVar7;
        if (*(char *)(uVar3 + 4 + iVar7) == '\x01') break;
        iVar7 = iVar7 + 1;
        iVar8 = 0;
      } while (iVar7 < 0xe);
    }
    uVar3 = F_00a3bca0(0x11,REFG(undefined4, 0x14a4258),iVar8,0);
    if (-1 < (int)uVar3) {
      iVar7 = (*(uint *)(gen_frame + 0xc)) - uVar3;
      uVar3 = F_00a3bca0(0x12,REFG(undefined4, 0x14a4258),iVar8,0);
      if (-1 < (int)uVar3) {
        (*(int *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x8)) - uVar3;
LAB_00827d80: ;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0x1e9;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar3 = F_0043bd00(pvVar4,uVar10,uVar11,uVar12);
        F_00431250(*(undefined * PTR32 *)((int)this + 0x28),3,uVar3,0,1,0);
        uVar3 = (uint)bVar1;
        piVar2 = *(int * PTR32 *)((int)this + 4);
        uVar6 = uVar3;
        uVar5 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0xc)),10,0,0);
        uVar5 = F_0042a990(uVar5);
        uVar10 = 0x235;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
        uVar6 = F_00461270(pvVar4,uVar10,uVar5,uVar6);
        F_00431250(*(undefined * PTR32 *)((int)this + 0x28),6,uVar6,0,1,0);
        F_0042c880(((undefined1 *)(gen_frame + 0x14)));
        if (iVar7 != 0) {
          F_007d75c0(this,0,param_1,iVar7,(*(undefined4 *)(gen_frame + 0x0)));
        }
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0x1e8;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar6 = F_0043bd00(pvVar4,uVar10,uVar11,uVar12);
        F_00431250(*(undefined * PTR32 *)((int)this + 0x28),4,uVar6,0,1,0);
        piVar2 = *(int * PTR32 *)((int)this + 4);
        uVar6 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0x8)),10,0,0);
        uVar6 = F_0042a990(uVar6);
        uVar10 = 0x236;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
        uVar3 = F_00461270(pvVar4,uVar10,uVar6,uVar3);
        F_00431250(*(undefined * PTR32 *)((int)this + 0x28),7,uVar3,0,1,0);
        F_0042c880(((undefined1 *)(gen_frame + 0x14)));
        if ((*(int *)(gen_frame + 0x4)) != 0) {
          F_007d75c0(this,1,param_1,(*(int *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)));
        }
        *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x1800;
        F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
        return 1;
      }
    }
  }
  else {
    if ((bVar9) || (param_3 != (int *)0x0)) {
      uVar3 = F_00a3ba20(0x11,param_3,1);
    }
    else {
      uVar3 = F_00a3bca0(0x11,*(undefined4 *)&REFG(undefined, 0x0),(int)*(short *)&REFG(undefined, 0x4),1);
    }
    if (-1 < (int)uVar3) {
      iVar7 = uVar3 - (*(uint *)(gen_frame + 0xc));
      if ((bVar9) || (param_3 != (int *)0x0)) {
        uVar3 = F_00a3ba20(0x12,param_3,1);
      }
      else {
        uVar3 = F_00a3bca0(0x12,*(undefined4 *)&REFG(undefined, 0x0),(int)*(short *)&REFG(undefined, 0x4),1);
      }
      if (-1 < (int)uVar3) {
        (*(int *)(gen_frame + 0x4)) = uVar3 - (*(uint *)(gen_frame + 0x8));
        goto LAB_00827d80;
      }
    }
  }
LAB_00827c3d: ;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0;
}

/* ref: FUN_00827ed0 */
byte F_00827ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x827ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar5 = param_2;
  (*(uint *)(gen_frame + 0x4)) = (uint)*(ushort *)(param_2 + 0x8a);
  bVar1 = *(byte *)((int)this + 0x45);
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),bVar1);
  bVar7 = true;
  param_2 = (uint)*(ushort *)(param_2 + 0x8c);
  if (param_3 != (int *)0x0) {
    bVar7 = *param_3 == 9999;
    if (bVar7) {
      (*(uint *)(gen_frame + 0x4)) = F_00a3ba20(0x15,param_3,1);
    }
    else {
      (*(uint *)(gen_frame + 0x4)) = F_00a3bca0(0x15,*param_3,(int)(short)param_3[1],0);
    }
    if ((int)(*(uint *)(gen_frame + 0x4)) < 0) {
      return 0;
    }
    if (bVar7) {
      uVar2 = F_00a3ba20(0x15,param_3,1);
    }
    else {
      uVar2 = F_00a3bca0(0x15,*param_3,(int)(short)param_3[1],1);
    }
    if ((int)uVar2 < 0) {
      return 0;
    }
    if (bVar7) {
      param_2 = F_00a3ba20(0x18,param_3,1);
    }
    else {
      param_2 = F_00a3bca0(0x18,*param_3,(int)(short)param_3[1],0);
    }
    if ((int)param_2 < 0) {
      return 0;
    }
    if (bVar7) {
      uVar2 = F_00a3ba20(0x18,param_3,1);
    }
    else {
      uVar2 = F_00a3bca0(0x18,*param_3,(int)(short)param_3[1],1);
    }
    if ((int)uVar2 < 0) {
      return 0;
    }
  }
  if ((char)param_1 == '\0') {
    uVar2 = F_00ab25a0((uint)*(byte *)(iVar5 + 0xa6));
    iVar6 = 0;
    if (uVar2 != 0) {
      iVar5 = 0;
      do {
        iVar6 = iVar5;
        if (*(char *)(uVar2 + 4 + iVar5) == '\x01') break;
        iVar5 = iVar5 + 1;
        iVar6 = 0;
      } while (iVar5 < 0xe);
    }
    uVar2 = F_00a3bca0(0x15,REFG(undefined4, 0x14a4258),iVar6,0);
    if (-1 < (int)uVar2) {
      iVar5 = (*(uint *)(gen_frame + 0x4)) - uVar2;
      uVar2 = F_00a3bca0(0x18,REFG(undefined4, 0x14a4258),iVar6,0);
      if (-1 < (int)uVar2) {
        iVar6 = param_2 - uVar2;
LAB_008280d3: ;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0x117;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar2 = F_0043bd00(pvVar3,uVar8,uVar9,uVar10);
        F_00431250(*(undefined * PTR32 *)((int)this + 0x28),3,uVar2,0,1,0);
        uVar2 = (uint)bVar1;
        uVar8 = 0xb75;
        uVar4 = uVar2;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar4 = F_00461c60(pvVar3,uVar8,param_2,uVar4);
        F_00431250(*(undefined * PTR32 *)((int)this + 0x28),6,uVar4,0,1,0);
        if (iVar6 != 0) {
          F_007d75c0(this,0,param_1,iVar6,(*(undefined4 *)(gen_frame + 0x0)));
        }
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0x101;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar4 = F_0043bd00(pvVar3,uVar8,uVar9,uVar10);
        F_00431250(*(undefined * PTR32 *)((int)this + 0x28),4,uVar4,0,1,0);
        uVar8 = 0xb76;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar2 = F_00461c60(pvVar3,uVar8,(*(uint *)(gen_frame + 0x4)),uVar2);
        F_00431250(*(undefined * PTR32 *)((int)this + 0x28),7,uVar2,0,1,0);
        if (iVar5 != 0) {
          F_007d75c0(this,1,param_1,iVar5,(*(undefined4 *)(gen_frame + 0x0)));
        }
        *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x1800;
        return 1;
      }
    }
  }
  else {
    if ((bVar7) || (param_3 != (int *)0x0)) {
      uVar2 = F_00a3ba20(0x15,param_3,1);
    }
    else {
      uVar2 = F_00a3bca0(0x15,*(undefined4 *)&REFG(undefined, 0x0),(int)*(short *)&REFG(undefined, 0x4),1);
    }
    if (-1 < (int)uVar2) {
      iVar5 = uVar2 - (*(uint *)(gen_frame + 0x4));
      if ((bVar7) || (param_3 != (int *)0x0)) {
        uVar2 = F_00a3ba20(0x18,param_3,1);
      }
      else {
        uVar2 = F_00a3bca0(0x18,*(undefined4 *)&REFG(undefined, 0x0),(int)*(short *)&REFG(undefined, 0x4),1);
      }
      if (-1 < (int)uVar2) {
        iVar6 = uVar2 - param_2;
        goto LAB_008280d3;
      }
    }
  }
  return 0;
}

/* ref: FUN_008281d0 */
byte F_008281d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8281d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  ulonglong * param_4 = (ulonglong *)(uintptr_t)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint * param_6 = (uint *)(uintptr_t)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 uVar1;
  byte bVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined4 * puVar7;
  ulonglong uVar8;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x2c))) {
  case 2: ;
    uVar6 = F_00760440(*(undefined4 *)((int)this + 0x30));
    *param_5 = uVar6;
    pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),uVar6);
    *param_2 = pvVar5;
    if (pvVar5 == (undefined *)0x0) {
      return 0;
    }
    puVar3 = (undefined4 *)F_00a37da0(pvVar5,param_7);
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    puVar7 = param_1;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
    *param_3 = (uint)param_1;
    bVar2 = F_00a36720(*param_5);
    if (bVar2 != 0) {
      pvVar5 = (undefined *)F_00a363c0((undefined *)*param_2,param_7);
      if (pvVar5 == (undefined *)0x0) {
        return 0;
      }
      uVar6 = F_00a3a8a0(pvVar5);
      F_00a35f80(param_1,uVar6);
    }
    if (*(int *)((int)this + 0x38) != -1) {
      F_00a35f80(param_1,*(int *)((int)this + 0x38));
    }
    break;
  default: ;
    F_00a35f30(param_1);
    iVar4 = *(int *)((int)this + 0x38);
    if (iVar4 == -1) {
      iVar4 = 1;
    }
    F_00a35f80(param_1,iVar4);
    F_00a35ee0(param_1,*param_6,1);
    if (*(int *)((int)this + 0x2c) == 7) {
      bVar2 = F_006d0f60(param_7);
      *(byte *)((int)param_1 + 0x2f) = bVar2;
      iVar4 = *(int *)((int)this + 0x38);
      if (iVar4 == -1) {
        iVar4 = 1;
      }
      F_00a35f80(param_1,iVar4);
    }
    else if (*(int *)((int)this + 0x2c) == 0xb) {
      *(undefined1 *)((int)param_1 + 0x2f) = (undefined1)param_7;
    }
LAB_00828491: ;
    *param_3 = (uint)param_1;
    break;
  case 4: ;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    if (*(undefined * PTR32 *)(uVar6 + 0xfc) == (undefined *)0x0) {
      return 0;
    }
    uVar6 = F_007df180(*(undefined * PTR32 *)(uVar6 + 0xfc),param_7);
    *param_3 = uVar6;
    break;
  case 5: ;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    uVar6 = F_00772b60(*(undefined * PTR32 *)(uVar6 + 0x8c),*param_6);
    *param_3 = uVar6;
    break;
  case 6: ;
    F_00a35f30(param_1);
    *param_3 = (uint)param_1;
    bVar2 = F_006d0f40(*param_6,param_1);
    if (bVar2 == 0) {
      return 0;
    }
    break;
  case 9: ;
    pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7da);
    if (pvVar5 == (undefined *)0x0) {
      return 0;
    }
    uVar6 = F_00a37da0(pvVar5,param_7);
    *param_3 = uVar6;
    break;
  case 10: ;
    pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d4);
    if (pvVar5 == (undefined *)0x0) {
      return 0;
    }
    uVar6 = F_00a3a8f0(pvVar5,*param_6,0);
    *param_3 = uVar6;
    if (uVar6 == 0) {
      F_00a35f30(param_1);
      F_00a35f80(param_1,0);
      F_00a35ee0(param_1,*param_6,1);
      bVar2 = F_006de3f0(*param_6);
      if ((bVar2 != 0) && (REFG(int, 0x1379694) != 0)) {
        param_1[0xf] = *(undefined4 *)(REFG(int, 0x1379694) + 0xe4);
      }
      goto LAB_00828491;
    }
    goto LAB_0082849c;
  case 0xc: ;
    uVar6 = F_00a36610(&REFG(undefined, 0x14a4230),param_7);
    *param_3 = uVar6;
    break;
  case 0xd: ;
    pvVar5 = (undefined *)F_00a3af20(&REFG(undefined, 0x14a4230),param_7);
    *param_3 = (uint)pvVar5;
    if ((pvVar5 == (undefined *)0x0) || (uVar6 = F_0046e5e0(pvVar5), uVar6 == 0)) {
      uVar6 = F_00a41080(&REFG(undefined, 0x14a4230),*param_6,0,1,1);
      F_00a35f30(param_1);
      F_00a35f80(param_1,uVar6);
      F_00a35ee0(param_1,*param_6,1);
      goto LAB_00828491;
    }
  }
  if (*param_3 == 0) {
    return 0;
  }
LAB_0082849c: ;
  pvVar5 = (undefined *)*param_3;
  if (*(char *)((int)pvVar5 + 6) == '\0') {
    if (*(int *)((int)pvVar5 + 8) == 0) {
      return 0;
    }
    if (*(char *)((int)pvVar5 + 6) == '\0') {
      uVar6 = *(uint *)((int)pvVar5 + 8);
      if ((*(byte *)((int)pvVar5 + 0x14) & 1) != 0) {
        uVar6 = uVar6 + 1000000;
      }
      goto LAB_008284d0;
    }
  }
  pvVar5 = (undefined *)F_00a3a860(pvVar5);
  uVar6 = F_0046e5e0(pvVar5);
LAB_008284d0: ;
  *param_6 = uVar6;
  pvVar5 = (undefined *)*param_3;
  if ((*(char *)((int)pvVar5 + 6) != '\0') && (uVar6 = F_00a3a860(pvVar5), uVar6 != 0)) {
    pvVar5 = (undefined *)F_00a3a860(pvVar5);
    uVar8 = F_00906d30(pvVar5);
    *param_4 = uVar8;
    return 1;
  }
  uVar1 = *(undefined4 *)((int)pvVar5 + 0x1c);
  *(undefined4 *)param_4 = *(undefined4 *)((int)pvVar5 + 0x18);
  *(undefined4 *)((int)param_4 + 4) = uVar1;
  return 1;
}

/* ref: FUN_00828550 */
byte F_00828550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x828550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int iVar2;
  uint * puVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  undefined * pvVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  puVar3 = (uint *)F_00ab1f00(param_1);
  if (puVar3 != (uint *)0x0) {
    uVar4 = F_00ab21a0((int)*(char *)((int)puVar3 + 0x11));
    if (uVar4 != 0) {
      puVar5 = (uint *)F_00ab1f60(7);
      if (puVar5 != (uint *)0x0) {
        uVar6 = F_00ab21d0((uint)*(byte *)((int)puVar3 + 0xe));
        if (uVar6 != 0) {
          F_007d79e0(this,(uint)(ushort)puVar3[3],(*puVar3 & 0xffffff) + (int)puVar3,
                       (*puVar5 & 0xffffff) + (int)puVar5);
          piVar1 = *(int * PTR32 *)((int)this + 4);
          uVar6 = F_00ac19f0(param_1);
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0x2c3;
          pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
          uVar8 = F_0043bd00(pvVar7,uVar10,uVar11,uVar12);
          F_007d77b0(this,uVar8,uVar6);
          iVar9 = (int)puVar3 + (puVar3[1] & 0xffffff) + 4;
          uVar10 = 0;
          pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))))
          ;
          uVar6 = F_0043bd60(pvVar7,iVar9,uVar10);
          F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0xc,uVar6,0,1,0);
          *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x20;
          if (*(byte *)(uVar4 + 0x3e) == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *(byte *)(uVar4 + 0x3e) + 0xf294;
          }
          F_007d7b60(this,iVar9,(uint)*(byte *)((int)puVar3 + 0xf));
          F_007d7bc0(this,(uint)*(byte *)((int)puVar3 + 0xe));
          *(undefined4 *)((int)this + 0x1c) = 9;
          iVar9 = *(int *)((int)this + 0xc);
          iVar2 = *(int *)(iVar9 + 0x20);
          if (*(int *)(iVar2 + 0x18) != 0xf) {
            *(undefined4 *)(iVar2 + 0x18) = 0xf;
            *(undefined1 *)(iVar9 + 0x1d) = 1;
          }
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_008286a0 */
uint F_008286a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8286a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  undefined * puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(param_2 + 0x22);
  if (bVar1 == 0) {
    return CONCAT31((int3)((uint)param_2 >> 8),bVar1);
  }
  uVar2 = bVar1 - 1;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    iVar5 = 0x2c0;
    break;
  case 1: ;
    goto switchD_008286ca_caseD_2;
  case 2: ;
  case 3: ;
    iVar5 = 0x2c1;
    break;
  case 4: ;
  case 5: ;
    iVar5 = 0x2c2;
    break;
  case 6: ;
    iVar5 = 0x2c4;
    break;
  case 7: ;
    iVar5 = 0x2c3;
    break;
  default: ;
    return uVar2;
  }
  uVar3 = F_00ac4750(1,param_1,1,0);
  if (iVar5 == 0) {
    puVar4 = &REFG(undefined, 0x10bdf5a);
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    puVar4 = (undefined *)F_0043bd00(this_00,iVar5,uVar6,uVar7);
  }
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),7,puVar4,0,1,0);
  uVar2 = *(uint *)((int)this + 0xc);
  if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xc))) != uVar3) {
    *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xc))) = uVar3;
    *(undefined1 *)(uVar2 + 0x1d) = 1;
  }
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 4;
switchD_008286ca_caseD_2: ;
  return uVar2;
}

/* ref: FUN_00828780 */
byte F_00828780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x828780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint * puVar4;
  
  puVar4 = (uint *)F_00ab2cf0(param_1);
  if (puVar4 == (uint *)0x0) {
    return 0;
  }
  uVar1 = *puVar4;
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)(iVar2 + 0x20);
  if (*(uint *)(iVar3 + 4) != (uint)(ushort)puVar4[2]) {
    *(uint *)(iVar3 + 4) = (uint)(ushort)puVar4[2];
    *(undefined1 *)(iVar2 + 0x1d) = 1;
  }
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0,(uVar1 & 0xffffff) + (int)puVar4,0,1,0);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),1,&REFG(undefined, 0x10bdfa6),0,1,0);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10),0xc,(int)puVar4 + (puVar4[1] & 0xffffff) + 4,0,1,0);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x20;
  *(undefined4 *)((int)this + 0x1c) = 7;
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)(iVar2 + 0x20);
  if (*(int *)(iVar3 + 0x18) != 0x12) {
    *(undefined4 *)(iVar3 + 0x18) = 0x12;
    *(undefined1 *)(iVar2 + 0x1d) = 1;
  }
  return 1;
}

/* ref: FUN_00828840 */
byte F_00828840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x828840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  byte bVar2;
  undefined4 * this_00;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  bVar2 = 0;
  if (param_2 < 0) {
    return 0;
  }
  this_00 = (undefined4 *)
            F_0043b860(param_1,*(undefined4 *)((int)this + 0x554),
                         *(undefined4 *)((int)this + 0x558));
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + param_2 * 4 + 0x9f8))) {
  case 0: ;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x20))))(*(int * PTR32 *)((int)this + 4))));
    F_004484f0(pvVar4,this_00);
    return 0;
  case 1: ;
    F_00471680((undefined *)((int)this + 0xc),this_00);
    *(undefined1 *)((int)this + 0xa1c) = 1;
    return 0;
  case 2: ;
    if (*(char *)((int)this + 0xa1c) != '\0') {
      F_007d8170(this,2,this_00,1);
      F_00471680(this_00,(int)this + 0xc);
      uVar5 = (uint)*(byte *)((int)this + 0x558);
      uVar3 = (uint)*(byte *)((int)this + 0x554);
      pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
      F_00459330(pvVar4,uVar3,uVar5);
      return 1;
    }
    break;
  case 3: ;
    F_007d8170(this,3,this_00,0);
    F_00471680((undefined *)((int)this + 0xc),this_00);
    uVar5 = (uint)*(byte *)((int)this + 0x558);
    uVar3 = (uint)*(byte *)((int)this + 0x554);
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
    F_0043b040(pvVar4,uVar3,uVar5);
    F_0043b900(this_00);
    *(undefined1 *)((int)this + 0xa1c) = 1;
    return 1;
  case 5: ;
    F_007d8170(this,5,this_00,0);
    uVar5 = (uint)*(byte *)((int)this + 0x558);
    uVar3 = (uint)*(byte *)((int)this + 0x554);
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
    F_0043b040(pvVar4,uVar3,uVar5);
    F_0043b900(this_00);
    F_0043b900((int)this + 0xc);
    *(undefined1 *)((int)this + 0xa1c) = 0;
    return 1;
  case 6: ;
    uVar8 = 1;
    uVar3 = F_00773110(this);
    bVar2 = F_00773060(this,param_1,uVar3,uVar8);
    return bVar2;
  case 7: ;
    uVar8 = 0;
    uVar3 = F_00773140(this);
    bVar2 = F_00773060(((undefined *)(uint)(this)),param_1,uVar3,uVar8);
    return bVar2;
  case 8: ;
    uVar8 = *(undefined4 *)((int)this + 0x558);
    piVar1 = *(int * PTR32 *)((int)this + 4);
    uVar7 = 0x20;
    uVar3 = F_0042a990(this_00 + 1);
    uVar6 = *this_00;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1)));
    F_00434720(pvVar4,uVar6,uVar3,uVar7,uVar8);
    bVar2 = 1;
  }
  return bVar2;
}

/* ref: FUN_00828a40 */
uint F_00828a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x828a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  if (0xff < *(int *)((int)this + 0x33c8)) {
    return 0;
  }
  bVar1 = F_007d8520(param_1,*(int *)((int)this + 0x33c8));
  if (bVar1 != 0) {
    *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
  }
  return (uint)(bVar1 != 0);
}

/* ref: FUN_00828a80 */
uint F_00828a80(unsigned int gen_a0)
{
  GEN_ENTER(0x828a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  bool bVar2;
  int * piVar3;
  uint * puVar4;
  uint uVar5;
  undefined * puVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar1 = *(int *)((int)this + 0x33a0);
  uVar5 = iVar1 + 0x40;
  bVar2 = false;
  do {
    if (((iVar1 == 0) || (uVar5 <= *(uint *)((int)this + 0x33a0))) ||
       (piVar3 = (int *)F_00ab1ea0(*(uint *)((int)this + 0x33a0)), piVar3 == (int *)0x0))
    goto LAB_00828b81;
    if (*(char *)((int)piVar3 + 0x16) == '\0') {
      if (bVar2) goto LAB_00828afd;
    }
    else {
      if (bVar2) {
LAB_00828b81: ;
        uVar5 = *(uint *)((int)this + 0x33b0) & 0xfffffffb | 0xc0;
        *(undefined4 *)((int)this + 0x33c0) = 0;
        *(undefined4 *)((int)this + 0x33c4) = 0;
        *(uint *)((int)this + 0x33b0) = uVar5;
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return uVar5;
      }
      *(undefined4 *)((int)this + 0x33c0) = 0;
      *(undefined4 *)((int)this + 0x33c4) = 0;
      *(undefined1 *)((int)this + 0x33d4) = 0;
      bVar2 = true;
LAB_00828afd: ;
      if (((*piVar3 == 0) && (piVar3[1] == 0)) && (piVar3[2] == 0)) goto LAB_00828b81;
      puVar4 = (uint *)F_00ab2750(piVar3[1]);
      if (puVar4 == (uint *)0x0) {
        puVar6 = &REFG(undefined, 0x10be003);
      }
      else {
        puVar6 = ((undefined *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),puVar6,REFG(undefined4, 0x108cc50));
      F_007d8c80(this,piVar3[2],(int)*(short *)((int)piVar3 + 0x12),(int)(short)piVar3[5],*piVar3,
                   0,((undefined1 *)(gen_frame + 0x4)),(uint)*(byte *)((int)piVar3 + 0x17),(uint)*(ushort *)(piVar3 + 4),
                   piVar3[3]);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    }
    *(int *)((int)this + 0x33a0) = *(int *)((int)this + 0x33a0) + 1;
    iVar1 = *(int *)((int)this + 0x33a0);
  } while( true );
}

/* ref: FUN_00828bc0 */
byte F_00828bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x828bc0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  byte bVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 0.0;
  fVar2 = param_4;
  if (((*param_2 == 0xebf9) && (0.0 < param_4)) &&
     (bVar1 = F_007743e0(param_2,param_3,param_4,0), bVar1 != 0)) {
    return 1;
  }
  if (((*param_2 == 0xec69) && (fVar3 < fVar2)) &&
     (bVar1 = F_007743e0(param_2,param_3,param_4,1), bVar1 != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00828c30 */
byte F_00828c30(unsigned int gen_a0)
{
  GEN_ENTER(0x828c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  undefined * this_00;
  byte * pbVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined1 *)((int)this + 0x26) = 0;
  this_00 = (undefined *)F_00a629e0(&REFG(undefined, 0x14a9728),(uint)*(byte *)((int)this + 0x22));
  bVar1 = F_00a63450(this_00);
  bVar2 = F_00a62b40((uint)*(byte *)((int)this + 0x22));
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2)) = bVar2;
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 1)) = 0;
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = *(byte *)((int)this_00 + 0x30);
  pbVar3 = (byte *)((int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if (bVar2 <= *(byte *)((int)this_00 + 0x30)) {
    pbVar3 = (byte *)((int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2);
  }
  if (*pbVar3 == 0) {
    pbVar3 = (byte *)((int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 1);
  }
  bVar2 = *pbVar3;
  if (bVar1 < bVar2) {
    *(byte *)((int)this + 0x26) = bVar1;
    return bVar2;
  }
  *(byte *)((int)this + 0x26) = bVar2;
  return bVar2;
}

/* ref: Client::UI2::Agent::AgentNpcTrade::vf5 */
unsigned int F_00828ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x828ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 AVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined * this_00;
  undefined * this_01;
  uint uVar7;
  uint uVar8;
  undefined * pAVar9;
  uint local_24;
  int local_20;
  int local_1c;
  int local_14;
  int local_c;
  
  if (*(int *)(this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0xb);
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,10);
    if ((uVar4 != 0) && (uVar5 != 0)) {
      if (*(int *)(this + 0xcc) == 2) {
        F_007d94d0(this,uVar4,uVar5);
      }
      uVar6 = F_00b9f960(&REFG(undefined, 0x14b0f2c));
      bVar2 = F_00a3c970(&REFG(undefined, 0x14a4230),uVar6);
      if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1a8))) != (uint)(bVar2 == 0)) {
        *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1a8))) = (uint)(bVar2 == 0);
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      local_20 = *(int *)(this + 0xc4);
      if (5 < local_20) {
        local_20 = 5;
      }
      local_1c = 0;
      if (0 < local_20) {
        local_14 = 0x44;
        local_c = 0x148;
        pAVar9 = this + 0x2c0;
        do {
          this_00 = (undefined *)F_00a3af20(&REFG(undefined, 0x14a4230),local_1c);
          if (this_00 == (undefined *)0x0) {
LAB_00828f23: ;
            ((code *)*((gen_code32 *)GEN_TOP((*(int *)(pAVar9 + -0x60) + 4))))(pAVar9 + -0x60);
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8 + local_c))) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8 + local_c))) = 0;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + local_c))) != -1) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + local_c))) = 0xffffffff;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_c))) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_c))) = 0;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc + local_c))) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc + local_c))) = 0;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            uVar6 = F_0042a990(pAVar9 + -0x5c);
          }
          else {
            if (*(char *)((int)this_00 + 6) == '\0') {
              uVar6 = *(uint *)((int)this_00 + 8);
              if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
                uVar6 = uVar6 + 1000000;
              }
            }
            else {
              this_01 = (undefined *)F_00a3a860(this_00);
              uVar6 = F_0046e5e0(this_01);
            }
            if (uVar6 == 0) goto LAB_00828f23;
            uVar6 = F_0046e5e0(this_00);
            if (*(uint *)(pAVar9 + -8) != uVar6) {
              ((code *)*((gen_code32 *)GEN_TOP((*(int *)(pAVar9 + -0x60) + 4))))(pAVar9 + -0x60);
              *(undefined4 *)(pAVar9 + -4) = 0xffffffff;
              bVar2 = F_00a37790(uVar6);
              if (bVar2 == 0) {
                uVar7 = F_00ab24a0(uVar6);
                if (uVar7 != 0) {
                  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(pAVar9 + -0x60) + 8))))(pAVar9 + -0x60,uVar6,uVar7);
                }
              }
              else {
                uVar7 = F_00ab2510(uVar6);
                if (uVar7 != 0) {
                  *(uint *)(pAVar9 + -4) = (uint)*(ushort *)(uVar7 + 0x1c);
                  uVar8 = F_00463610(1,uVar6,0);
                  F_0042e430(pAVar9 + -0x5c,uVar8);
                  *(undefined2 *)(pAVar9 + 4) = 0;
                  *(uint *)(pAVar9 + -8) = uVar6;
                  *(uint *)pAVar9 = (uint)*(byte *)(uVar7 + 0x20);
                }
              }
            }
            uVar7 = F_00760640((uint)(byte)pAVar9[4],this_00,*(undefined4 *)pAVar9);
            if (*(int *)(this + 0xcc) == 2) {
              uVar6 = F_00a41080(&REFG(undefined, 0x14a4230),uVar6,0,1,1);
            }
            else {
              uVar6 = F_00a3a8a0(this_00);
            }
            AVar1 = pAVar9[5];
            local_24 = 0;
            if (AVar1 != (undefined1)0x0) {
              bVar2 = F_00760e50(pAVar9 + -0x60,this_00);
              local_24 = F_00760700((uint)bVar2);
            }
            if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8 + local_c))) != (uVar7 & 0xff)) {
              *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8 + local_c))) = uVar7 & 0xff;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + local_c))) != *(int *)(pAVar9 + -4)) {
              *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + local_c))) = *(int *)(pAVar9 + -4);
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_c))) != uVar6) {
              *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_c))) = uVar6;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            uVar6 = (uint)(AVar1 != (undefined1)0x0) | local_24 * 2;
            if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc + local_c))) != uVar6) {
              *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc + local_c))) = uVar6;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            uVar6 = F_0042a990(pAVar9 + -0x5c);
          }
          if (uVar6 != *((uint *)GEN_TOP((local_14 + *(int *)(uVar5 + 0x20))))) {
            *((uint *)GEN_TOP((local_14 + *(int *)(uVar5 + 0x20)))) = uVar6;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          local_14 = local_14 + 4;
          local_1c = local_1c + 1;
          local_c = local_c + 0x14;
          pAVar9 = pAVar9 + 0x68;
        } while (local_1c < local_20);
      }
    }
  }
  return 0;
}

/* ref: FUN_00828fe0 */
byte F_00828fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x828fe0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x248)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24c);
  uVar2 = F_00b9f960(&REFG(undefined, 0x14b0f2c));
  F_009222f0(((byte *)(gen_frame + 0x0)),uVar2);
  if (((byte *)(gen_frame + 0x0))[0] == 0) {
    iVar5 = 4;
    puVar4 = &(*(undefined4 *)&gen_args[1]);
    do {
      puVar4 = puVar4 + -0x1d;
      F_0042c880(puVar4);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c));
    return 0;
  }
  if (((byte *)(gen_frame + 0x0))[100] == 0) {
    uVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))));
    bVar1 = F_00762230(pvVar3,uVar6);
    if (bVar1 != 0) {
      iVar5 = 4;
      puVar4 = &(*(undefined4 *)&gen_args[1]);
      do {
        puVar4 = puVar4 + -0x1d;
        F_0042c880(puVar4);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c));
      return 1;
    }
  }
  iVar5 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 1000000;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))));
  bVar1 = F_00762230(pvVar3,iVar5);
  iVar5 = 4;
  puVar4 = &(*(undefined4 *)&gen_args[1]);
  do {
    puVar4 = puVar4 + -0x1d;
    F_0042c880(puVar4);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c));
  return bVar1;
}

/* ref: FUN_008290f0 */
uint F_008290f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8290f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x248)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24c);
  uVar1 = F_00b9f960(&REFG(undefined, 0x14b0f2c));
  F_009222f0(((byte *)(gen_frame + 0x0)),uVar1);
  if (((byte *)(gen_frame + 0x0))[0] == 0) {
    iVar3 = 4;
    puVar2 = &(*(undefined4 *)&gen_args[1]);
    do {
      puVar2 = puVar2 + -0x1d;
      F_0042c880(puVar2);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c));
    return 0xffffffff;
  }
  if (((byte *)(gen_frame + 0x0))[100] == 0) {
    uVar1 = F_007d9440((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)));
    if (-1 < (int)uVar1) {
      iVar3 = 4;
      puVar2 = &(*(undefined4 *)&gen_args[1]);
      do {
        puVar2 = puVar2 + -0x1d;
        F_0042c880(puVar2);
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c));
      return uVar1;
    }
  }
  uVar1 = F_007d9440((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 1000000);
  iVar3 = 4;
  puVar2 = &(*(undefined4 *)&gen_args[1]);
  do {
    puVar2 = puVar2 + -0x1d;
    F_0042c880(puVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c));
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentQuestJournal::vf3 */
uint F_008291e0(unsigned int gen_a0)
{
  GEN_ENTER(0x8291e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = F_007d9710(this);
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_00829210 */
unsigned int F_00829210(unsigned int gen_a0)
{
  GEN_ENTER(0x829210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    if (*(int *)((int)this + 0x30) == 0) {
      F_00a80010(*(undefined * PTR32 *)((int)this + 0x10),(int)this + 0xc,1);
      return 0;
    }
    uVar1 = F_007da030(this,(uint)*(byte *)((int)this + 0x38));
    F_00a7b600(*(undefined * PTR32 *)((int)this + 0x10),(int)this + 0xc,uVar1);
  }
  return 0;
}

/* ref: FUN_00829250 */
unsigned int F_00829250(unsigned int gen_a0)
{
  GEN_ENTER(0x829250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    if (((*(int *)((int)this + 0x30) == 0) && (*(int *)((int)this + 0x3c) != 0)) &&
       (0 < *(int *)((int)this + 0x40))) {
      F_00a7e0c0(*(undefined * PTR32 *)((int)this + 0x10),(int)this + 0xc,*(int *)((int)this + 0x3c),
                   *(int *)((int)this + 0x40));
      return 0;
    }
    iVar2 = *(int *)((int)this + 0x44);
    if (0 < iVar2) {
      uVar1 = F_007da030(this,(uint)*(byte *)((int)this + 0x38));
      F_00a7e2a0(*(undefined * PTR32 *)((int)this + 0x10),(int)this + 0xc,uVar1,iVar2);
    }
  }
  return 0;
}

/* ref: FUN_008292b0 */
unsigned int F_008292b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8292b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  
  if (*(char *)((int)this + 0xf6) != '\0') {
    if (*(int *)((int)this + 0x18) != 0) {
      F_00a3d7c0(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x10),
                   (uint)*(ushort *)((int)this + 0x14));
    }
    *(undefined4 *)((int)this + 0x10) = 9999;
    *(undefined2 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    iVar1 = param_1;
    if (param_1 - 1000000U < 1000000) {
      iVar1 = param_1 + -1000000;
    }
    if (((*(int *)((int)this + 0xf0) == iVar1) && (-1 < param_2)) &&
       (param_2 < *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 4)) {
      puVar2 = (undefined4 *)F_00927190(this,param_2);
      *(undefined4 *)((int)this + 0x10) = *puVar2;
      *(undefined4 *)((int)this + 0x14) = puVar2[1];
      *(undefined4 *)((int)this + 0x18) = puVar2[2];
      *(undefined4 *)((int)this + 0x1c) = puVar2[3];
      F_00775210(this);
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentRecipeNote::vf14 */
uint F_00829350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x829350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    puVar2 = ((undefined4 *)(gen_frame + 0x8));
    iVar4 = 0xd;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_007da190(this,((undefined4 *)(gen_frame + 0x8)));
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)(this + 8),0xe,((undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x78));
    iVar4 = 0xd;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentRecipeNote::vf15 */
uint F_008293e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8293e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    puVar2 = ((undefined4 *)(gen_frame + 0x8));
    iVar4 = 0xd;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_007da190(this,((undefined4 *)(gen_frame + 0x8)));
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)(this + 8),0xe,((undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x78));
    iVar4 = 0xd;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar1;
}

/* ref: FUN_00829470 */
byte F_00829470(unsigned int gen_a0)
{
  GEN_ENTER(0x829470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  int local_c;
  byte local_5;
  
  bVar1 = 1;
  local_5 = 1;
  local_c = 0;
  if (0 < *(int *)((int)this + 0xaa0)) {
    puVar6 = (uint *)((int)this + 0xaa8);
    do {
      if (*(char *)((int)puVar6 + 0xb9) == '\0') {
        uVar3 = F_00ab24a0(puVar6[-1]);
        if (((uVar3 == 0) ||
            (this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x2ee2), this_00 == (undefined *)0x0)) ||
           (uVar4 = F_00a37da0(this_00,(int)(short)puVar6[0x2c]), uVar4 == 0)) {
          cVar2 = '\0';
        }
        else {
          uVar5 = F_00ab65a0(puVar6[-1],uVar3);
          *puVar6 = uVar5;
          uVar5 = F_00ab6240(puVar6[-1],0,uVar3);
          F_0042e430(puVar6 + 1,uVar5);
          uVar3 = F_00760640((uint)*(byte *)(uVar3 + 0xa6),uVar4,*(undefined4 *)(uVar3 + 0x28));
          *(short *)((int)puVar6 + 0xb2) = (short)uVar3;
          bVar1 = F_007c9be0(puVar6 + 0x2d,uVar4);
          *(byte *)(puVar6 + 0x2e) = bVar1;
          cVar2 = '\x01';
        }
        *(char *)((int)puVar6 + 0xb9) = cVar2;
        if (cVar2 == '\0') {
          local_5 = 0;
        }
      }
      local_c = local_c + 1;
      puVar6 = puVar6 + 0x30;
      bVar1 = local_5;
    } while (local_c < *(int *)((int)this + 0xaa0));
  }
  return bVar1;
}

/* ref: FUN_00829580 */
uint F_00829580(unsigned int gen_a0)
{
  GEN_ENTER(0x829580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = *(uint *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0xa94) = 0;
  *(undefined4 *)((int)this + 0xa98) = 0;
  if ((-1 < (int)uVar1) && (-1 < *(int *)((int)this + 0x28))) {
    uVar1 = F_00a3d7c0(&REFG(undefined, 0x14a4230),uVar1,(uint)*(ushort *)((int)this + 0x28));
  }
  *(undefined4 *)((int)this + 0x19b8) = 0;
  *(undefined4 *)((int)this + 0x24) = 9999;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  if (0 < *(int *)((int)this + 0x19b0)) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x19b0),0);
    *(undefined4 *)((int)this + 0x19b0) = 0;
    if (*(char *)((int)this + 0x19b5) != '\0') {
      *(undefined1 *)((int)this + 0x19b5) = 0;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
      uVar1 = F_007df0e0(*(undefined * PTR32 *)(uVar1 + 0xfc));
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00829620 */
uint F_00829620(unsigned int gen_a0)
{
  GEN_ENTER(0x829620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  puVar1 = ((undefined4 *)(gen_frame + 0x8));
  iVar4 = 0x3f;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_007dc610(this,((undefined4 *)(gen_frame + 0x8)));
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),0x40,((undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x208));
  iVar4 = 0x3f;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return uVar3;
}

/* ref: FUN_008296b0 */
uint F_008296b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8296b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  ushort uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined * pvVar7;
  uint uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(undefined1 *)(gen_frame + 0x2b)) = 0;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x2d);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0x29);
  uVar6 = F_00ab0070();
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  if (uVar6 != 0) {
    (*(int *)(gen_frame + 0x8)) = 0x10;
    (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)((int)this + 0x80);
    do {
      piVar3 = (int *)F_00ab2ba0((*(uint *)(gen_frame + 0x1c)));
      if (piVar3 != (int *)0x0) {
        iVar1 = *piVar3;
        (*(int *)(gen_frame + 0x10)) = 0;
        (*(int *)(gen_frame + 0xc)) = 0;
        (*(int *)(gen_frame + 0x14)) = 1;
        pvVar7 = (undefined *)F_007dc7b0(this,iVar1,&(*(int *)(gen_frame + 0x10)),&(*(int *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x14)));
        this = (*(undefined * PTR32 *)(gen_frame + 0x20));
        if (((*(int *)(gen_frame + 0x14)) == *(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x21)) && (pvVar7 != (undefined *)0x0)) {
          uVar8 = F_00ab24a0(iVar1);
          if (uVar8 == 0) {
            (*(undefined1 *)(gen_frame + 0x2b)) = 1;
            this = (*(undefined * PTR32 *)(gen_frame + 0x20));
          }
          else {
            if ((*(int * PTR32 *)(gen_frame + 0x24))[-1] != iVar1) {
              ((code *)*(gen_code32 *)((*(int * PTR32 *)(gen_frame + 0x24))[-0x17] + 8))((*(int * PTR32 *)(gen_frame + 0x24)) + -0x17,iVar1,uVar8);
            }
            if ((*(char *)((int)pvVar7 + 6) == '\0') || (uVar8 = F_00a3a860(pvVar7), uVar8 == 0))
            {
              uVar2 = *(ushort *)((int)pvVar7 + 0x12);
            }
            else {
              pvVar7 = (undefined *)F_00a3a860(pvVar7);
              uVar2 = F_00906d60(pvVar7);
            }
            if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + -8 + *(int *)(uVar4 + 0x20)))) != *(*(int * PTR32 *)(gen_frame + 0x24))) {
              *((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + -8 + *(int *)(uVar4 + 0x20)))) = *(*(int * PTR32 *)(gen_frame + 0x24));
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + -4 + *(int *)(uVar4 + 0x20)))) != (uint)uVar2) {
              *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + -4 + *(int *)(uVar4 + 0x20)))) = (uint)uVar2;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            piVar3 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + *(int *)(uVar4 + 0x20))));
            if (*piVar3 != (*(int *)(gen_frame + 0x10))) {
              *piVar3 = (*(int *)(gen_frame + 0x10));
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 4 + *(int *)(uVar4 + 0x20)))) != (*(int *)(gen_frame + 0xc))) {
              *((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 4 + *(int *)(uVar4 + 0x20)))) = (*(int *)(gen_frame + 0xc));
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 8 + *(int *)(uVar4 + 0x20)))) != (*(uint *)(gen_frame + 0x1c))) {
              *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 8 + *(int *)(uVar4 + 0x20)))) = (*(uint *)(gen_frame + 0x1c));
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            uVar8 = F_0042a990((*(int * PTR32 *)(gen_frame + 0x24)) + -0x16);
            if (uVar8 != *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + (*(uint *)(gen_frame + 0x18)) * 4)))) {
              *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + (*(uint *)(gen_frame + 0x18)) * 4))) = uVar8;
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x24)) + 0x1a;
            uVar8 = (*(uint *)(gen_frame + 0x18)) + 1;
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x14;
            (*(uint *)(gen_frame + 0x18)) = uVar8;
            this = (*(undefined * PTR32 *)(gen_frame + 0x20));
            if (0x31 < uVar8) break;
          }
        }
      }
      uVar8 = (*(uint *)(gen_frame + 0x1c)) + 1;
      (*(uint *)(gen_frame + 0x1c)) = uVar8;
    } while (uVar8 < uVar6);
  }
  if (**(uint * PTR32 *)(uVar4 + 0x20) != (*(uint *)(gen_frame + 0x18))) {
    **(uint * PTR32 *)(uVar4 + 0x20) = (*(uint *)(gen_frame + 0x18));
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar5 = (int)*(char *)((int)this + 0x21) - 1;
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4))) == uVar5) {
    *(undefined1 *)((int)this + 0x22) = (*(undefined1 *)(gen_frame + 0x2b));
    return CONCAT31((int3)(uVar5 >> 8),(*(undefined1 *)(gen_frame + 0x2b)));
  }
  *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4))) = uVar5;
  *(undefined1 *)(uVar4 + 0x1d) = 1;
  *(undefined1 *)((int)this + 0x22) = (*(undefined1 *)(gen_frame + 0x2b));
  return uVar5;
}

/* ref: FUN_008298c0 */
uint F_008298c0(unsigned int gen_a0)
{
  GEN_ENTER(0x8298c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xfa0];
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  undefined1 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0xf98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf9c);
  puVar7 = *(undefined4 * PTR32 *)((int)this + 0x14);
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined4 *)(gen_frame + 0x8c)) = 0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(undefined4 *)(gen_frame + 0xf88)) = 0;
  (*(undefined4 *)(gen_frame + 0xf8c)) = 0;
  (*(undefined4 *)(gen_frame + 0xf90)) = 0;
  (*(undefined4 *)(gen_frame + 0xf94)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = puVar7;
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0xf84)) = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0xf24)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0xf28)),0,0x5c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x10)),0,0x5c);
  bVar1 = F_007dc9b0(this,&(*(undefined4 *)(gen_frame + 0x98)),&(*(undefined4 *)(gen_frame + 0x9c)),&(*(undefined4 *)(gen_frame + 0x80)),&(*(undefined4 *)(gen_frame + 0xf84)),&(*(undefined4 *)(gen_frame + 0x6c)),&(*(undefined4 *)(gen_frame + 0xf24)),
                       &(*(undefined4 *)(gen_frame + 0xc)),*puVar7);
  uVar6 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    puVar2 = ((undefined4 *)(gen_frame + 0xbcc));
    iVar4 = 0x6a;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    puVar5 = ((undefined1 *)(gen_frame + 0x884));
    (*(int *)(gen_frame + 0xa0)) = 4;
    do {
      F_0042b630(puVar5);
      puVar5 = puVar5 + 0x54;
      iVar4 = (*(int *)(gen_frame + 0xa0)) + -1;
      (*(int *)(gen_frame + 0xa0)) = iVar4;
    } while (-1 < iVar4);
    puVar5 = ((undefined1 *)(gen_frame + 0xa28));
    (*(int *)(gen_frame + 0xa0)) = 4;
    do {
      F_0042b630(puVar5);
      puVar5 = puVar5 + 0x54;
      iVar4 = (*(int *)(gen_frame + 0xa0)) + -1;
      (*(int *)(gen_frame + 0xa0)) = iVar4;
    } while (-1 < iVar4);
    puVar5 = ((undefined1 *)(gen_frame + 0xa4));
    (*(int *)(gen_frame + 0xa0)) = 0x17;
    do {
      F_0042b630(puVar5);
      puVar5 = puVar5 + 0x54;
      iVar4 = (*(int *)(gen_frame + 0xa0)) + -1;
      (*(int *)(gen_frame + 0xa0)) = iVar4;
    } while (-1 < iVar4);
    bVar1 = F_007dcbf0(this,((undefined4 *)(gen_frame + 0xbcc)),((undefined1 *)(gen_frame + 0x884)),((undefined1 *)(gen_frame + 0xa28)),(*(undefined4 *)(gen_frame + 0x98)),(*(undefined4 *)(gen_frame + 0x9c)),&(*(undefined4 *)(gen_frame + 0x80)),&(*(undefined4 *)(gen_frame + 0xf84))
                         ,&(*(undefined4 *)(gen_frame + 0x6c)));
    *(byte *)((int)puVar7 + 0x19) = bVar1;
    F_00777e40(((undefined4 *)(gen_frame + 0xbcc)),((undefined1 *)(gen_frame + 0xa4)),&(*(undefined4 *)(gen_frame + 0xf24)),&(*(undefined4 *)(gen_frame + 0xc)),*puVar7,(uint)*(byte *)(puVar7 + 6));
    uVar6 = (uint)((*(undefined4 * PTR32 *)(gen_frame + 0x94))[1] != 0);
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x94))[2] != 0) {
      uVar6 = uVar6 + 1;
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x94))[3] != 0) {
      uVar6 = uVar6 + 1;
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x94))[4] != 0) {
      uVar6 = uVar6 + 1;
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x94))[5] != 0) {
      uVar6 = uVar6 + 1;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0xf1c)),3);
    (*(uint *)(gen_frame + 0xf20)) = (uint)((-(uint)(((*(byte *)(gen_frame + 0xbfc)) & 0xf) != 0) & (*(uint *)(gen_frame + 0xc00))) == uVar6);
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 0x24),0x6b,((undefined4 *)(gen_frame + 0xbcc)));
    *(undefined4 *)((int)this + 0x10) = 0;
    puVar5 = ((undefined1 *)(gen_frame + 0x884));
    iVar4 = 0x17;
    do {
      puVar5 = puVar5 + -0x54;
      F_0042c880(puVar5);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    puVar7 = ((undefined4 *)(gen_frame + 0xbcc));
    iVar4 = 4;
    do {
      puVar7 = puVar7 + -0x15;
      F_0042c880(puVar7);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    puVar5 = ((undefined1 *)(gen_frame + 0xa28));
    iVar4 = 4;
    do {
      puVar5 = puVar5 + -0x54;
      F_0042c880(puVar5);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    puVar7 = &(*(undefined4 *)(gen_frame + 0xf24));
    iVar4 = 0x6a;
    do {
      puVar7 = puVar7 + -2;
      uVar6 = F_005a2670(puVar7);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0xf98)) ^ (uint)(uint)(gen_frame + 0xf9c));
  return uVar6;
}

/* ref: FUN_00829b90 */
uint F_00829b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x829b90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * this;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  byte * pbVar6;
  uint uVar7;
  uint uVar8;
  
  iVar5 = (*(int *)&gen_args[1]);
  this = (*(undefined * PTR32 *)&gen_args[0]);
  if (((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) || ((*(int *)&gen_args[1]) == 0)) {
    return 0;
  }
  if (*(char *)((*(int *)&gen_args[1]) + 0xa3) == '\a') {
    (*(undefined * PTR32 *)&gen_args[0]) = (undefined *)0x0;
  }
  else {
    bVar1 = F_00a3bef0((*(undefined * PTR32 *)&gen_args[0]));
    pbVar6 = (byte *)(iVar5 + 0xa5);
    if (*pbVar6 <= bVar1) {
      pbVar6 = ((byte *)GEN_TOP(((int)&(*(undefined * PTR32 *)&gen_args[0]) + 3)));
    }
    (*(undefined * PTR32 *)&gen_args[0]) = (undefined *)(uint)*pbVar6;
  }
  uVar8 = (uint)*(byte *)(iVar5 + 0xa5) << 4 | (uint)(*(undefined * PTR32 *)&gen_args[0]);
  uVar7 = 0;
  if ((*(undefined * PTR32 *)&gen_args[0]) != (undefined *)0x0) {
    (*(int *)&gen_args[1]) = 8;
    do {
      if (*(char *)((int)this + 6) == '\0') {
LAB_00829c25: ;
        uVar2 = *((ushort *)GEN_TOP(((int)this + (uVar7 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar3 = F_00a3a860(this);
        if (uVar3 == 0) goto LAB_00829c25;
        uVar3 = uVar7;
        pvVar4 = (undefined *)F_00a3a860(this);
        uVar2 = F_0071d2c0(pvVar4,uVar3);
      }
      if (uVar2 == 0) {
        iVar5 = 0;
      }
      else {
        if (*(char *)((int)this + 6) != '\0') {
          uVar3 = F_00a3a860(this);
          if (uVar3 != 0) {
            uVar3 = uVar7;
            pvVar4 = (undefined *)F_00a3a860(this);
            bVar1 = F_0071d300(pvVar4,uVar3);
            iVar5 = bVar1 + 1;
            goto LAB_00829c67;
          }
        }
        iVar5 = *((byte *)GEN_TOP(((uVar7 & 0xff) + 0x2a + (int)this))) + 1;
      }
LAB_00829c67: ;
      bVar1 = (byte)(*(int *)&gen_args[1]);
      uVar7 = uVar7 + 1;
      (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) + 4;
      uVar8 = uVar8 | iVar5 << (bVar1 & 0x1f);
    } while ((int)uVar7 < (int)(*(undefined * PTR32 *)&gen_args[0]));
  }
  return uVar8;
}

/* ref: FUN_00829c90 */
byte F_00829c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0x829c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint * param_6 = (uint *)(uintptr_t)gen_a6;
  int param_7 = (int)gen_a7;
  uint * param_8 = (uint *)(uintptr_t)gen_a8;
  uint * param_9 = (uint *)(uintptr_t)gen_a9;
  undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a10;
  undefined4 param_11 = (undefined4)gen_a11;
  int param_12 = (int)gen_a12;
  undefined4 param_13 = (undefined4)gen_a13;
  byte bVar1;
  ushort uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  
  *param_1 = param_11;
  *param_3 = param_12;
  pvVar3 = (undefined *)*param_1;
  if ((pvVar3 == (undefined *)0x0) || (param_12 == 0)) {
    return 0;
  }
  if (*(char *)((int)pvVar3 + 6) == '\0') {
    uVar4 = *(uint *)((int)pvVar3 + 8);
    if ((*(byte *)((int)pvVar3 + 0x14) & 1) != 0) {
      uVar4 = uVar4 + 1000000;
    }
  }
  else {
    pvVar3 = (undefined *)F_00a3a860(pvVar3);
    uVar4 = F_0046e5e0(pvVar3);
  }
  uVar4 = F_00ab24a0(uVar4);
  *param_2 = uVar4;
  pvVar3 = (undefined *)*param_3;
  if (*(char *)((int)pvVar3 + 6) == '\0') {
    uVar4 = *(uint *)((int)pvVar3 + 8);
    if ((*(byte *)((int)pvVar3 + 0x14) & 1) != 0) {
      uVar4 = uVar4 + 1000000;
    }
  }
  else {
    pvVar3 = (undefined *)F_00a3a860(pvVar3);
    uVar4 = F_0046e5e0(pvVar3);
  }
  uVar4 = F_00ab24a0(uVar4);
  *param_4 = uVar4;
  pvVar3 = (undefined *)*param_3;
  if (*(char *)((int)pvVar3 + 6) == '\0') {
    uVar4 = *(uint *)((int)pvVar3 + 8);
    if ((*(byte *)((int)pvVar3 + 0x14) & 1) != 0) {
      uVar4 = uVar4 + 1000000;
    }
  }
  else {
    pvVar3 = (undefined *)F_00a3a860(pvVar3);
    uVar4 = F_0046e5e0(pvVar3);
  }
  uVar4 = F_00a6add0(uVar4);
  *param_5 = uVar4;
  if (((*param_2 != 0) && (*param_4 != 0)) && (uVar4 != 0)) {
    if ((char)param_13 != '\0') {
      bVar1 = F_0071d300((undefined *)*param_3,0);
      uVar4 = F_00a415a0(&REFG(undefined, 0x14a4230),(uint)bVar1,1);
      *param_8 = uVar4;
      *param_10 = 0;
      uVar4 = bVar1 + 0x15df;
      if (*param_8 == 0) {
        *param_10 = 0xfffffffe;
        *param_8 = uVar4;
      }
      else if (*param_8 != uVar4) {
        *param_10 = 0xffffffff;
      }
      uVar4 = F_00ab24a0(*param_8);
      *param_9 = uVar4;
      if (uVar4 == 0) {
        return 0;
      }
    }
    uVar4 = F_007dd150(*param_1,*param_2);
    iVar7 = 0;
    if (0 < (int)uVar4) {
      puVar6 = param_6;
      do {
        uVar2 = F_0071d2c0((undefined *)*param_1,iVar7);
        if (uVar2 != 0) {
          uVar5 = F_00ab20e0((uint)uVar2);
          *puVar6 = uVar5;
          if (uVar5 == 0) {
            return 0;
          }
          bVar1 = F_0071d300((undefined *)*param_1,iVar7);
          uVar5 = F_00ab24a0(*(undefined4 *)(*puVar6 + (uint)bVar1 * 4));
          *((uint *)GEN_TOP(((param_7 - (int)param_6) + (int)puVar6))) = uVar5;
          if (uVar5 == 0) {
            return 0;
          }
        }
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar7 < (int)uVar4);
    }
    return REFG(char, 0x14a7367) == '\0';
  }
  return 0;
}

/* ref: FUN_00829e70 */
byte F_00829e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21, unsigned int gen_a22)
{
  GEN_ENTER(0x829e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a5;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a6;
  undefined * param_7 = (undefined *)(uintptr_t)gen_a7;
  undefined * param_8 = (undefined *)(uintptr_t)gen_a8;
  undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a9;
  int param_10 = (int)gen_a10;
  undefined4 * param_11 = (undefined4 *)(uintptr_t)gen_a11;
  undefined4 param_12 = (undefined4)gen_a12;
  int param_13 = (int)gen_a13;
  int * param_14 = (int *)(uintptr_t)gen_a14;
  int param_15 = (int)gen_a15;
  undefined4 param_16 = (undefined4)gen_a16;
  uint param_17 = (uint)gen_a17;
  int param_18 = (int)gen_a18;
  int param_19 = (int)gen_a19;
  int param_20 = (int)gen_a20;
  undefined4 param_21 = (undefined4)gen_a21;
  undefined4 param_22 = (undefined4)gen_a22;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  char cVar1;
  short sVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  undefined * pvVar8;
  undefined4 * puVar9;
  uint uVar10;
  uint uVar11;
  byte * pbVar12;
  int iVar13;
  int * piVar14;
  uint * puVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int * piVar19;
  
  (*(uint *)(gen_frame + 0x168)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x16c);
  (*(int * PTR32 *)(gen_frame + 0x10)) = param_14;
  uVar7 = F_00ab65a0(*param_11,param_12);
  F_005a2710(param_1 + 0x18,3);
  *(uint *)(param_1 + 0x1c) = uVar7;
  if (*(char *)((int)param_11 + 6) == '\0') {
    uVar7 = param_11[2];
    if ((*(byte *)(param_11 + 5) & 1) != 0) {
      uVar7 = uVar7 + 1000000;
    }
  }
  else {
    pvVar8 = (undefined *)F_00a3a860(param_11);
    uVar7 = F_0046e5e0(pvVar8);
  }
  uVar7 = F_00ab6240(uVar7,1,param_12);
  F_0042e430(param_3,uVar7);
  uVar7 = F_0042a990(param_3);
  F_005a2710(param_1 + 0x30,6);
  *(uint *)(param_1 + 0x34) = uVar7;
  uVar17 = *param_11;
  F_005a2710(param_1 + 0x20,3);
  *(undefined4 *)(param_1 + 0x24) = uVar17;
  sVar2 = *(short *)(param_11 + 1);
  F_005a2710(param_1 + 0x28,3);
  *(int *)(param_1 + 0x2c) = (int)sVar2;
  uVar7 = F_00ab65a0(*param_9,param_10);
  F_005a2710(param_1 + 0x48,3);
  *(uint *)(param_1 + 0x4c) = uVar7;
  if (*(char *)((int)param_9 + 6) == '\0') {
    uVar7 = param_9[2];
    if ((*(byte *)(param_9 + 5) & 1) != 0) {
      uVar7 = uVar7 + 1000000;
    }
  }
  else {
    pvVar8 = (undefined *)F_00a3a860(param_9);
    uVar7 = F_0046e5e0(pvVar8);
  }
  uVar7 = F_00ab6240(uVar7,1,param_10);
  F_0042e430(param_2,uVar7);
  uVar7 = F_0042a990(param_2);
  F_005a2710(param_1 + 0x60,6);
  *(uint *)(param_1 + 100) = uVar7;
  if (param_10 == 0) {
    (*(uint *)(gen_frame + 0x34)) = 0;
  }
  else {
    bVar4 = F_00a3bef0(param_9);
    pbVar12 = (byte *)(param_10 + 0xa5);
    (*(byte *)(gen_frame + 0x3f)) = bVar4;
    if (*pbVar12 <= bVar4) {
      pbVar12 = &(*(byte *)(gen_frame + 0x3f));
    }
    (*(uint *)(gen_frame + 0x34)) = (uint)*pbVar12;
  }
  F_005a2710(param_1 + 0x78,3);
  *(uint *)(param_1 + 0x7c) = (*(uint *)(gen_frame + 0x34));
  bVar4 = *(byte *)(param_10 + 0xa5);
  F_005a2710(param_1 + 0x80,3);
  *(uint *)(param_1 + 0x84) = (uint)bVar4;
  uVar17 = *param_9;
  F_005a2710(param_1 + 0x50,3);
  *(undefined4 *)(param_1 + 0x54) = uVar17;
  sVar2 = *(short *)(param_9 + 1);
  F_005a2710(param_1 + 0x58,3);
  *(int *)(param_1 + 0x5c) = (int)sVar2;
  cVar1 = *(char *)(param_10 + 0xba);
  F_005a2710(param_1 + 0x68,3);
  *(uint *)(param_1 + 0x6c) = (uint)(cVar1 != '\0');
  if ((*(char *)((int)param_9 + 6) == '\0') || (uVar7 = F_00a3a860(param_9), uVar7 == 0)) {
    bVar4 = *(byte *)((int)param_9 + 0x2f);
  }
  else {
    pvVar8 = (undefined *)F_00a3a860(param_9);
    bVar4 = F_0046e590(pvVar8);
  }
  puVar9 = (undefined4 *)F_00ab3c60((uint)bVar4);
  if (puVar9 == (undefined4 *)0x0) {
    (*(uint *)(gen_frame + 0x34)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x34)) = *puVar9;
  }
  F_005a2710(param_1 + 0x70,4);
  *(uint *)(param_1 + 0x74) = (*(uint *)(gen_frame + 0x34));
  F_00c48350(((int *)(gen_frame + 0x40)),-1,0x128);
  bVar4 = F_00a3bef0(param_9);
  pbVar12 = (byte *)(param_10 + 0xa5);
  (*(byte *)(gen_frame + 0x3f)) = bVar4;
  if (*pbVar12 <= bVar4) {
    pbVar12 = &(*(byte *)(gen_frame + 0x3f));
  }
  bVar4 = *pbVar12;
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (bVar4 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = param_5;
    puVar15 = (uint *)(param_1 + 0xb4);
    piVar14 = param_14;
    do {
      if ((*(char *)((int)param_9 + 6) == '\0') || (uVar7 = F_00a3a860(param_9), uVar7 == 0)) {
        uVar6 = *((ushort *)GEN_TOP(((int)param_9 + ((*(uint *)(gen_frame + 0x8)) & 0xff) * 2 + 0x20)));
      }
      else {
        uVar7 = (*(uint *)(gen_frame + 0x8)) & 0xff;
        pvVar8 = (undefined *)F_00a3a860(param_9);
        uVar6 = F_0071d2c0(pvVar8,uVar7);
      }
      (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x10)), 1, 3),(char)(*(uint *)(gen_frame + 0x8)))));
      if (uVar6 == 0) {
        (*(uint *)(gen_frame + 0x34)) = 0;
      }
      else if ((*(char *)((int)param_9 + 6) == '\0') || (uVar7 = F_00a3a860(param_9), uVar7 == 0))
      {
        (*(uint *)(gen_frame + 0x34)) = *((byte *)GEN_TOP((((*(uint *)(gen_frame + 0x8)) & 0xff) + 0x2a + (int)param_9))) + 1;
      }
      else {
        piVar19 = (*(int * PTR32 *)(gen_frame + 0x10));
        pvVar8 = (undefined *)F_00a3a860(param_9);
        bVar5 = F_0071d300(pvVar8,piVar19);
        (*(uint *)(gen_frame + 0x34)) = bVar5 + 1;
      }
      F_005a2710(puVar15 + -0xb,3);
      puVar15[-10] = (*(uint *)(gen_frame + 0x34));
      if ((*(uint *)(gen_frame + 0x34)) != 0) {
        if ((*(char *)((int)param_9 + 6) == '\0') || (uVar7 = F_00a3a860(param_9), uVar7 == 0)) {
          bVar5 = *((byte *)GEN_TOP((((*(uint *)(gen_frame + 0x8)) & 0xff) + 0x2a + (int)param_9)));
        }
        else {
          piVar19 = (*(int * PTR32 *)(gen_frame + 0x10));
          pvVar8 = (undefined *)F_00a3a860(param_9);
          bVar5 = F_0071d300(pvVar8,piVar19);
        }
        pvVar8 = ((undefined *)GEN_TOP(((param_4 - (int)param_5) + (int)(*(undefined * PTR32 *)(gen_frame + 0x18)))));
        uVar7 = (uint)bVar5;
        uVar10 = F_00ab6240(*(undefined4 *)(*piVar14 + uVar7 * 4),1,
                              *((undefined4 *)GEN_TOP(((param_15 - (int)param_14) + (int)piVar14))));
        F_0042e430(pvVar8,uVar10);
        uVar10 = F_0042a990(pvVar8);
        F_005a2710(puVar15 + -1,6);
        *puVar15 = uVar10;
        (*(uint *)(gen_frame + 0x24)) = (uint)*(byte *)(*piVar14 + 0x28);
        if (((int *)(gen_frame + 0x40))[(int)((*(uint *)(gen_frame + 0x24)))] == -1) {
          uVar10 = F_00a6ad20((uint)*(byte *)(*piVar14 + 0x28),param_10);
          uVar11 = F_00a3ba20((*(uint *)(gen_frame + 0x24)),param_9,0);
          (*(uint *)(gen_frame + 0x24)) = (uint)*(byte *)(*piVar14 + 0x28);
          ((int *)(gen_frame + 0x40))[(int)((*(uint *)(gen_frame + 0x24)))] = uVar10 - uVar11;
        }
        if (((int *)(gen_frame + 0x40))[(int)(*(byte *)(*piVar14 + 0x28))] < (int)*(char *)(*piVar14 + 0x29 + uVar7)) {
          iVar13 = ((int *)(gen_frame + 0x40))[(int)(*(byte *)(*piVar14 + 0x28))];
          ((int *)(gen_frame + 0x40))[(int)(*(byte *)(*piVar14 + 0x28))] = 0;
        }
        else {
          iVar13 = (int)*(char *)(*piVar14 + 0x29 + uVar7);
          ((int *)(gen_frame + 0x40))[(int)(*(byte *)(*piVar14 + 0x28))] = ((int *)(gen_frame + 0x40))[(int)(*(byte *)(*piVar14 + 0x28))] - iVar13;
        }
        uVar18 = 1;
        uVar17 = 0x20f;
        iVar16 = iVar13;
        pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar10 = F_00461d60(pvVar8,uVar17,(*(uint *)(gen_frame + 0x24)),uVar18,iVar16);
        F_0042e430((*(undefined * PTR32 *)(gen_frame + 0x18)),uVar10);
        uVar10 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x18)));
        F_005a2710(puVar15 + 9,6);
        puVar15[10] = uVar10;
        cVar1 = *(char *)(uVar7 + 0x29 + *piVar14);
        F_005a2710(puVar15 + 0x13,3);
        puVar15[0x14] = (uint)(iVar13 != cVar1);
      }
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x54);
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
      puVar15 = puVar15 + 2;
      piVar14 = piVar14 + 1;
    } while ((int)(*(uint *)(gen_frame + 0x8)) < (int)(uint)bVar4);
  }
  if (((*param_1 & 0xf) == 0) || (*(int *)(param_1 + 4) != 3)) {
    F_005a2710(param_1 + 0x128,3);
    *(int *)(param_1 + 300) = param_18;
    uVar7 = param_17;
    if (((param_17 == 0) && (uVar7 = F_00ab24a0(param_16), uVar7 == 0)) ||
       (uVar7 = F_00ab25d0((uint)*(byte *)(uVar7 + 0xa1)), uVar7 == 0)) {
      (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(uVar7 + 4);
    }
    F_005a2710(param_1 + 0x130,3);
    *(undefined4 *)(param_1 + 0x134) = (*(undefined4 *)(gen_frame + 0x38));
    uVar7 = F_00ab6240(param_16,1,param_17);
    F_0042e430(param_6,uVar7);
    uVar7 = F_0042a990(param_6);
    F_005a2710(param_1 + 0x140,6);
    *(uint *)(param_1 + 0x144) = uVar7;
    F_005a2710(param_1 + 0x138,3);
    *(undefined4 *)(param_1 + 0x13c) = param_16;
  }
  (*(byte *)(gen_frame + 0x3f)) = 1;
  pbVar12 = param_1;
  if (param_19 == *(int *)(param_10 + 0x74)) {
    if (param_20 < (int)(uint)*(byte *)(param_10 + 0x9f)) {
      iVar13 = 0x1166;
    }
    else {
      if (((char)param_21 != '\0') || (bVar4 = F_00778a20(param_9), bVar4 == 0)) {
        F_005a2710(param_1 + 0x160,3);
        pbVar12[0x164] = 0;
        pbVar12[0x165] = 0;
        pbVar12[0x166] = 0;
        pbVar12[0x167] = 0;
        uVar7 = F_00a6f250((uint)param_9,param_11);
        F_005a2710(param_1 + 0x148,3);
        *(int *)(param_1 + 0x14c) = (int)uVar7 / 100;
        F_005a2710(param_1 + 0x150,3);
        *(int *)(param_1 + 0x154) = (int)uVar7 % 100;
        (*(uint *)(gen_frame + 0x1c)) = 0;
        do {
          if ((int)(&REFG(undefined4, 0x10c44e4))[(int)((*(uint *)(gen_frame + 0x1c)))] <= (int)uVar7) goto LAB_0082a71b;
          (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) + 1;
        } while ((*(uint *)(gen_frame + 0x1c)) < 4);
        (*(uint *)(gen_frame + 0x1c)) = 3;
LAB_0082a71b: ;
        F_005a2710(param_1 + 0x158,3);
        *(uint *)(param_1 + 0x15c) = (*(uint *)(gen_frame + 0x1c));
        goto LAB_0082a7c5;
      }
      iVar13 = 0x1167;
    }
  }
  else {
    iVar13 = 0x1165;
  }
  if (iVar13 == 0x1165) {
    uVar7 = *(uint *)(param_10 + 0x74);
    uVar17 = 0x1165;
    pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
LAB_0082a76a: ;
    uVar7 = F_00461bb0(pvVar8,uVar17,uVar7);
  }
  else {
    piVar14 = *(int * PTR32 *)((int)this + 4);
    if (iVar13 == 0x1166) {
      uVar7 = (uint)*(byte *)(param_10 + 0x9f);
      uVar17 = 0x1166;
      pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar14 + 0x18))(piVar14,0x1166,uVar7)));
      goto LAB_0082a76a;
    }
    uVar18 = 0;
    uVar17 = 0;
    pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar14 + 0x18))(piVar14)));
    uVar7 = F_0043bd00(pvVar8,iVar13,uVar17,uVar18);
  }
  F_0042e430(param_7,uVar7);
  F_005a2710(param_1 + 0x160,3);
  pbVar12[0x164] = 0xff;
  pbVar12[0x165] = 0xff;
  pbVar12[0x166] = 0xff;
  pbVar12[0x167] = 0xff;
  uVar7 = F_0042a990(param_7);
  F_005a2710(param_1 + 0x168,6);
  *(uint *)(param_1 + 0x16c) = uVar7;
  (*(byte *)(gen_frame + 0x3f)) = 0;
LAB_0082a7c5: ;
  uVar7 = F_00a6ad20((uint)*(byte *)(param_13 + 0x28),param_10);
  uVar10 = F_00a3ba20((uint)*(byte *)(param_13 + 0x28),param_9,1);
  if ((*(char *)((int)param_11 + 6) == '\0') || (uVar11 = F_00a3a860(param_11), uVar11 == 0)) {
    bVar4 = *(byte *)((int)param_11 + 0x2a);
  }
  else {
    uVar17 = 0;
    pvVar8 = (undefined *)F_00a3a860(param_11);
    bVar4 = F_0071d300(pvVar8,uVar17);
  }
  iVar13 = (int)*(char *)(bVar4 + 0x29 + param_13);
  uVar11 = (uint)*(byte *)(param_13 + 0x28);
  bVar3 = (int)uVar7 < (int)(uVar10 + iVar13);
  piVar14 = *(int * PTR32 *)((int)this + 4);
  if (bVar3) {
    iVar16 = uVar7 - uVar10;
    uVar18 = 1;
    uVar17 = 0x217;
    pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar14 + 0x18))(piVar14)));
    uVar7 = F_00461ea0(pvVar8,uVar17,uVar11,uVar18,iVar16,iVar13);
  }
  else {
    uVar18 = 1;
    uVar17 = 0x200;
    pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar14 + 0x18))(piVar14)));
    uVar7 = F_00461d60(pvVar8,uVar17,uVar11,uVar18,iVar13);
  }
  F_0042e430(param_8,uVar7);
  uVar7 = F_0042a990(param_8);
  F_005a2710(param_1 + 0x38,6);
  *(uint *)(param_1 + 0x3c) = uVar7;
  F_005a2710(param_1 + 0x40,3);
  *(uint *)(param_1 + 0x44) = (uint)bVar3;
  F_007788f0(this,param_1);
  if (param_18 == -2) {
    (*(byte *)(gen_frame + 0x3f)) = 0;
  }
  if ((char)param_22 != '\0') {
    F_00a3d750(&REFG(undefined, 0x14a4230),*param_9,(uint)*(ushort *)(param_9 + 1));
    F_00a3d750(&REFG(undefined, 0x14a4230),*param_11,(uint)*(ushort *)(param_11 + 1));
  }
  bVar4 = (*(byte *)(gen_frame + 0x3f));
  F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
  return bVar4;
}

/* ref: FUN_0082a940 */
uint F_0082a940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82a940u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * this;
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  byte * pbVar7;
  uint uVar8;
  uint uVar9;
  
  iVar6 = (*(uint *)&gen_args[1]);
  this = (*(undefined * PTR32 *)&gen_args[0]);
  if (((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) || ((*(uint *)&gen_args[1]) == 0)) {
    return 0;
  }
  bVar1 = F_00a3bef0((*(undefined * PTR32 *)&gen_args[0]));
  bVar2 = *(byte *)(iVar6 + 0xa5);
  pbVar7 = (byte *)(iVar6 + 0xa5);
  if (bVar2 <= bVar1) {
    pbVar7 = ((byte *)GEN_TOP(((int)&(*(undefined * PTR32 *)&gen_args[0]) + 3)));
  }
  (*(uint *)&gen_args[1]) = (uint)*pbVar7;
  uVar9 = (uint)bVar2 << 4 | (*(uint *)&gen_args[1]);
  uVar8 = 0;
  if ((*(uint *)&gen_args[1]) != 0) {
    (*(undefined * PTR32 *)&gen_args[0]) = (undefined *)0x8;
    do {
      if (*(char *)((int)this + 6) == '\0') {
LAB_0082a9bd: ;
        uVar3 = *((ushort *)GEN_TOP(((int)this + (uVar8 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar4 = F_00a3a860(this);
        if (uVar4 == 0) goto LAB_0082a9bd;
        uVar4 = uVar8;
        pvVar5 = (undefined *)F_00a3a860(this);
        uVar3 = F_0071d2c0(pvVar5,uVar4);
      }
      if (uVar3 == 0) {
        iVar6 = 0;
      }
      else {
        if (*(char *)((int)this + 6) != '\0') {
          uVar4 = F_00a3a860(this);
          if (uVar4 != 0) {
            uVar4 = uVar8;
            pvVar5 = (undefined *)F_00a3a860(this);
            bVar2 = F_0071d300(pvVar5,uVar4);
            iVar6 = bVar2 + 1;
            goto LAB_0082a9ff;
          }
        }
        iVar6 = *((byte *)GEN_TOP(((uVar8 & 0xff) + 0x2a + (int)this))) + 1;
      }
LAB_0082a9ff: ;
      bVar2 = (byte)(*(undefined * PTR32 *)&gen_args[0]);
      uVar8 = uVar8 + 1;
      (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      uVar9 = uVar9 | iVar6 << (bVar2 & 0x1f);
    } while ((int)uVar8 < (int)(*(uint *)&gen_args[1]));
  }
  return uVar9;
}

/* ref: FUN_0082aa30 */
uint F_0082aa30(unsigned int gen_a0)
{
  GEN_ENTER(0x82aa30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xbf0];
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * pvVar4;
  int * piVar5;
  int iVar6;
  uint * puVar7;
  undefined1 * in_ecx;
  bool bVar8;
  ulonglong uVar9;
  
  (*(uint *)(gen_frame + 0xbe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbec);
  in_ecx = ((undefined1 *)(gen_frame + 0x0));
  iVar6 = 0x17;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  puVar2 = ((undefined4 *)(gen_frame + 0x7e0));
  iVar6 = 0x80;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  iVar6 = *(int *)((int)this + 0x20);
  if (((iVar6 < 0) || (*(int *)((int)this + 0x1c) <= iVar6)) ||
     (pvVar4 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + iVar6 * 4))))),
     pvVar4 == (undefined *)0x0)) {
    uVar3 = 0;
  }
  else if ((*(char *)((int)pvVar4 + 6) == '\0') || (uVar3 = F_00a3a860(pvVar4), uVar3 == 0)) {
    uVar3 = (uint)*(byte *)((int)pvVar4 + 0x2f);
  }
  else {
    pvVar4 = (undefined *)F_00a3a860(pvVar4);
    bVar1 = F_0046e590(pvVar4);
    uVar3 = (uint)bVar1;
  }
  bVar1 = F_007dd2d0(this,0x81,((undefined4 *)(gen_frame + 0x7e0)),*(undefined4 *)((int)this + 0x24),((undefined1 *)(gen_frame + 0x0)),0xffffffff,
                       uVar3);
  if (bVar1 != 0) {
    iVar6 = *(int *)((int)this + 0x2c);
    bVar8 = false;
    if (iVar6 != -1) {
      if ((((byte *)(gen_frame + 0x820))[(int)(iVar6 * 8)] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = ((uint *)(gen_frame + 0x824))[(int)(iVar6 * 2)];
      }
      uVar3 = uVar3 & 0x80000001;
      bVar8 = uVar3 == 0;
      if ((int)uVar3 < 0) {
        bVar8 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
      }
    }
    F_005a2710(((undefined1 *)(gen_frame + 0xbe0)),3);
    (*(uint *)(gen_frame + 0xbe4)) = (uint)bVar8;
    piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5,*(undefined4 *)((int)this + 0x14),0x81,((undefined4 *)(gen_frame + 0x7e0)));
    *(undefined4 *)((int)this + 0xc) = 0;
    puVar7 = &(*(uint *)(gen_frame + 0xbe8));
    iVar6 = 0x80;
    do {
      puVar7 = puVar7 + -2;
      F_005a2670(puVar7);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar2 = ((undefined4 *)(gen_frame + 0x7e0));
    iVar6 = 0x17;
    do {
      puVar2 = puVar2 + -0x15;
      uVar9 = F_0042c880(puVar2);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_00c47745((*(uint *)(gen_frame + 0xbe8)) ^ (uint)(uint)(gen_frame + 0xbec));
    return (uint)uVar9;
  }
  puVar7 = &(*(uint *)(gen_frame + 0xbe8));
  iVar6 = 0x80;
  do {
    puVar7 = puVar7 + -2;
    F_005a2670(puVar7);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  puVar2 = ((undefined4 *)(gen_frame + 0x7e0));
  iVar6 = 0x17;
  do {
    puVar2 = puVar2 + -0x15;
    uVar9 = F_0042c880(puVar2);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  F_00c47745((*(uint *)(gen_frame + 0xbe8)) ^ (uint)(uint)(gen_frame + 0xbec));
  return (uint)uVar9;
}

/* ref: FUN_0082abe0 */
uint F_0082abe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x82abe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  
  if (param_3 == (undefined *)0x0) {
    return 0;
  }
  if (*(char *)((int)param_3 + 6) == '\0') {
    uVar3 = *(uint *)((int)param_3 + 8);
    if ((*(byte *)((int)param_3 + 0x14) & 1) != 0) {
      uVar3 = uVar3 + 1000000;
    }
  }
  else {
    this_00 = (undefined *)F_00a3a860(param_3);
    uVar3 = F_0046e5e0(this_00);
  }
  uVar3 = F_00ab24a0(uVar3);
  if (uVar3 == 0) {
    return 2;
  }
  if ((*(char *)(uVar3 + 0xa0) != '\x0f') ||
     (uVar4 = F_00ab3c60(*(undefined4 *)(uVar3 + 0x2c)), uVar4 == 0)) {
    return 0;
  }
  if ((*(byte *)(uVar4 + 8) < 0xb) &&
     (iVar1 = *(int *)(&REFG(undefined, 0x10c4530) + (uint)*(byte *)(uVar4 + 8) * 4), iVar1 != -1)) {
    bVar2 = F_007dd2d0(this,param_1,param_2,iVar1,param_4,*(undefined4 *)(uVar3 + 0x2c),param_5);
    if (bVar2 != 0) {
      *(int *)((int)this + 0x24) = iVar1;
      return 1;
    }
    return 2;
  }
  return 0;
}

/* ref: FUN_0082acb0 */
uint F_0082acb0(unsigned int gen_a0)
{
  GEN_ENTER(0x82acb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  undefined * this_00;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    this_00 = (undefined *)(iVar2 * 0x74 + iVar1);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 + -0x74);
      F_0042c880(this_00);
    }
    F_00406b30((int *)(iVar1 + -4));
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined1 *)((int)this + 0x27) = 0;
    return 0;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x27) = 0;
  return 0;
}

/* ref: Client::UI2::Agent::AgentGrandCompanySupply::vf1 */
uint F_0082ad10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x82ad10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pAVar1;
  undefined2 uVar2;
  char * pcVar3;
  uint uVar4;
  byte * pbVar5;
  uint uVar6;
  int iVar7;
  
  (*(char *)(gen_frame + 0x1b)) = '\0';
  ((byte *)(gen_frame + 0x0))[0] = 0;
  ((byte *)(gen_frame + 0x0))[1] = 0;
  ((byte *)(gen_frame + 0x0))[2] = 0;
  ((byte *)(gen_frame + 0x0))[3] = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  pbVar5 = param_2;
  if (((param_4 == 0) && ((*param_2 & 0xf) != 0)) && (*(int *)(param_2 + 4) == 1)) {
    F_005a2710(((byte *)(gen_frame + 0x0)),3);
    ((byte *)(gen_frame + 0x0))[4] = 1;
    ((byte *)(gen_frame + 0x0))[5] = 0;
    ((byte *)(gen_frame + 0x0))[6] = 0;
    ((byte *)(gen_frame + 0x0))[7] = 0;
    if ((param_2[8] & 0xf) == 0) {
      param_2 = (byte *)0x0;
    }
    else {
      param_2 = *(byte * PTR32 *)(param_2 + 0xc);
    }
    uVar4 = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    uVar6 = 0;
    (*(uint *)(gen_frame + 0xc)) = (uint)param_2;
    if (*(int *)(this + 0x14) != 0) {
      pcVar3 = ((char *)GEN_TOP((*(int *)(this + 0x10) + 0x6f)));
      do {
        if ((((ushort)(byte)pcVar3[-1] == *(ushort *)(this + 0x24)) && (*pcVar3 == '\0')) &&
           ((*(short *)(this + 0x24) != 2 || (*(int *)(pcVar3 + -0xf) != 0)))) {
          if (param_2 == (byte *)uVar4) {
            F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
            (*(uint *)(gen_frame + 0xc)) = uVar6;
            break;
          }
          uVar4 = uVar4 + 1;
        }
        uVar6 = uVar6 + 1;
        pcVar3 = pcVar3 + 0x74;
      } while (uVar6 < *(uint *)(this + 0x14));
    }
    pbVar5 = ((byte *)(gen_frame + 0x0));
  }
  if (((this[0x27] == (undefined1)0x0) && (*(int *)(this + 0x1c) == 0)) &&
     ((pAVar1 = *(undefined * PTR32 *)(this + 0xc), pAVar1 != (undefined *)0x0
      && (pAVar1 != this)))) {
    this[0x27] = (undefined1)0x1;
    ((code *)*(gen_code32 *)(*(int *)pAVar1 + 4))(pAVar1,((byte *)(gen_frame + 0x10)),pbVar5,param_3,0);
    if ((((byte *)(gen_frame + 0x10))[0] & 0xf) == 2) {
      (*(char *)(gen_frame + 0x1b)) = (*(char *)(gen_frame + 0x14));
    }
    this[0x27] = (undefined1)0x0;
    F_005a2670(((byte *)(gen_frame + 0x10)));
  }
  if (param_4 == 0) {
    if (((*pbVar5 & 0xf) == 0) || (*(int *)(pbVar5 + 4) == 0)) {
      if ((pbVar5[8] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (undefined2)*(undefined4 *)(pbVar5 + 0xc);
      }
      *(undefined2 *)(this + 0x24) = uVar2;
      F_007dd800(this);
    }
  }
  else {
    if (param_4 == 1) {
      if (((*pbVar5 & 0xf) == 0) || (*(int *)(pbVar5 + 4) == 0)) {
        ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
      }
      *(undefined4 *)(this + 0x1c) = 0;
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 1;
      pbVar5 = ((byte *)(gen_frame + 0x10));
      iVar7 = 1;
      do {
        pbVar5 = pbVar5 + -8;
        F_005a2670(pbVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      return (uint)param_1;
    }
    if (((param_4 == 2) && ((*pbVar5 & 0xf) != 0)) && (*(int *)(pbVar5 + 4) != 0)) {
      F_00ba08a0(&REFG(undefined, 0x14b0f2c),1);
      goto LAB_0082af00;
    }
  }
  if (((*(char *)(gen_frame + 0x1b)) == '\0') && (((*pbVar5 & 0xf) == 0 || (-1 < *(int *)(pbVar5 + 4))))) {
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 0;
    pbVar5 = ((byte *)(gen_frame + 0x10));
    iVar7 = 1;
    do {
      pbVar5 = pbVar5 + -8;
      F_005a2670(pbVar5);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    return (uint)param_1;
  }
LAB_0082af00: ;
  if (this[0x27] == (undefined1)0x0) {
    if (param_4 != 2) {
      F_0082acb0(this);
      *(undefined4 *)(this + 0xc) = 0;
      *(undefined4 *)(this + 8) = 0;
      *(undefined4 *)(this + 0x1c) = 0;
    }
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    pbVar5 = ((byte *)(gen_frame + 0x10));
    iVar7 = 1;
    do {
      pbVar5 = pbVar5 + -8;
      F_005a2670(pbVar5);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    return (uint)param_1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  pbVar5 = ((byte *)(gen_frame + 0x10));
  iVar7 = 1;
  do {
    pbVar5 = pbVar5 + -8;
    F_005a2670(pbVar5);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  return (uint)param_1;
}

/* ref: FUN_0082af80 */
uint F_0082af80(unsigned int gen_a0)
{
  GEN_ENTER(0x82af80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  ((undefined4 *)(gen_frame + 0xc))[0] = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_007dd890(this,((undefined4 *)(gen_frame + 0xc)));
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)((int)this + 8),2,((undefined4 *)(gen_frame + 0xc)));
  iVar3 = 1;
  do {
    this_00 = this_00 + -8;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_0082afe0 */
byte F_0082afe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82afe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  uint uVar4;
  
  F_0082acb0(this);
  uVar1 = F_00404270();
  uVar4 = -(uint)((int)((ulonglong)param_1 * 0x74 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x74)
  ;
  puVar2 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar4) | uVar4 + 4,0,uVar1,0);
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = param_1;
    puVar2 = puVar3;
    uVar1 = param_1;
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      F_0042b630(puVar2);
      puVar2 = puVar2 + 0x1d;
    }
  }
  *(uint * PTR32 *)((int)this + 0x10) = puVar3;
  if (puVar3 != (uint *)0x0) {
    *(uint *)((int)this + 0x14) = param_1;
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentMovieSubtitle::vf5 */
unsigned int F_0082b080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82b080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)(this + 0x14) == 2) {
    F_007dd9b0(this);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentColosseumRecord::vf2 */
uint F_0082b090(unsigned int gen_a0)
{
  GEN_ENTER(0x82b090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  uVar1 = F_00406bd0(0xdf8,0,uVar1,uVar2);
  if (uVar1 != 0) {
    uVar1 = F_00922800(uVar1);
    *(uint *)(this + 0xc) = uVar1;
    return uVar1;
  }
  *(undefined4 *)(this + 0xc) = 0;
  return 0;
}

/* ref: FUN_0082b0d0 */
unsigned int F_0082b0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x82b0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xc);
  if (this_00 != (undefined *)0x0) {
    F_0090de10(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return 0;
}

/* ref: FUN_0082b100 */
uint F_0082b100(unsigned int gen_a0)
{
  GEN_ENTER(0x82b100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  undefined * pvVar3;
  
  iVar1 = *(int *)((int)this + 0x20);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    pvVar3 = (undefined *)(iVar2 * 0xcc + iVar1);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      F_0042c880((undefined *)((int)pvVar3 + -0x78));
      F_0042c880((undefined *)((int)pvVar3 + -0xcc));
      pvVar3 = (undefined *)((int)pvVar3 + -0xcc);
    }
    F_00406b30(iVar1 + -4);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  iVar1 = *(int *)((int)this + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    pvVar3 = (undefined *)(iVar2 * 0xcc + iVar1);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      F_0042c880((undefined *)((int)pvVar3 + -0x78));
      F_0042c880((undefined *)((int)pvVar3 + -0xcc));
      pvVar3 = (undefined *)((int)pvVar3 + -0xcc);
    }
    F_00406b30(iVar1 + -4);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x53) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  return 0;
}

/* ref: FUN_0082b1c0 */
unsigned int F_0082b1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82b1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x30);
  if (iVar1 != 0) {
    if (iVar1 - 0x17U < 4) {
      uVar2 = F_00a3c240(&REFG(undefined, 0x14a4230),iVar1);
    }
    else {
      uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),iVar1,1,1,1);
      uVar3 = F_00a41080(&REFG(undefined, 0x14a4230),iVar1,0,1,1);
      uVar2 = uVar2 + uVar3;
    }
    if (((char)param_1 != '\0') || (uVar2 != *(uint *)((int)this + 0x3c))) {
      F_007de230(this,uVar2);
    }
  }
  return 0;
}

/* ref: FUN_0082b230 */
byte F_0082b230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82b230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint * puVar7;
  
  F_0082b100(this);
  if (param_1 != 0) {
    uVar1 = F_00404270();
    uVar4 = -(uint)((int)((ulonglong)param_1 * 0xcc >> 0x20) != 0) |
            (uint)((ulonglong)param_1 * 0xcc);
    puVar2 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar4) | uVar4 + 4,0,uVar1,0);
    if (puVar2 == (uint *)0x0) {
      puVar2 = (uint *)0x0;
    }
    else {
      *puVar2 = param_1;
      puVar2 = puVar2 + 1;
      puVar7 = puVar2;
      uVar4 = param_1;
      while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
        F_0042b630(puVar7);
        F_0042b630(puVar7 + 0x15);
        puVar7 = puVar7 + 0x33;
      }
    }
    *(uint * PTR32 *)((int)this + 0x20) = puVar2;
    if (puVar2 == (uint *)0x0) {
      return 0;
    }
    uVar4 = 0;
    *(uint *)((int)this + 0x28) = param_1;
    if (param_1 != 0) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)((int)this + 0x20) + iVar6;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(iVar3 + 0xa8) = 0;
        *(undefined4 *)(iVar3 + 0xac) = 0;
        *(undefined4 *)(iVar3 + 0xb0) = 0;
        *(undefined4 *)(iVar3 + 0xb4) = 0;
        *(undefined4 *)(iVar3 + 0xb8) = 0;
        *(undefined1 *)(iVar3 + 0xbc) = 0;
        *(undefined1 *)(iVar3 + 200) = 0;
        *(undefined4 *)(iVar3 + 0xc0) = 1;
        *(undefined4 *)(iVar3 + 0xc4) = 1;
        iVar6 = iVar6 + 0xcc;
      } while (uVar4 < *(uint *)((int)this + 0x28));
    }
    if ((char)param_2 != '\0') {
      uVar4 = param_1 * 2;
      *(uint *)((int)this + 0x2c) = uVar4;
      uVar5 = -(uint)((int)((ulonglong)uVar4 * 0xcc >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0xcc)
      ;
      puVar2 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0,uVar1,0);
      if (puVar2 == (uint *)0x0) {
        puVar2 = (uint *)0x0;
      }
      else {
        *puVar2 = uVar4;
        puVar2 = puVar2 + 1;
        puVar7 = puVar2;
        while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
          F_0042b630(puVar7);
          F_0042b630(puVar7 + 0x15);
          puVar7 = puVar7 + 0x33;
        }
      }
      *(uint * PTR32 *)((int)this + 0x24) = puVar2;
      if (puVar2 == (uint *)0x0) {
        F_0082b100(this);
        return 0;
      }
      uVar1 = 0;
      if (*(int *)((int)this + 0x2c) != 0) {
        iVar6 = 0;
        do {
          iVar3 = *(int *)((int)this + 0x24) + iVar6;
          uVar1 = uVar1 + 1;
          *(undefined4 *)(iVar3 + 0xa8) = 0;
          *(undefined4 *)(iVar3 + 0xac) = 0;
          *(undefined4 *)(iVar3 + 0xb0) = 0;
          *(undefined4 *)(iVar3 + 0xb4) = 0;
          *(undefined4 *)(iVar3 + 0xb8) = 0;
          *(undefined1 *)(iVar3 + 0xbc) = 0;
          *(undefined1 *)(iVar3 + 200) = 0;
          *(undefined4 *)(iVar3 + 0xc0) = 1;
          *(undefined4 *)(iVar3 + 0xc4) = 1;
          iVar6 = iVar6 + 0xcc;
        } while (uVar1 < *(uint *)((int)this + 0x2c));
      }
    }
  }
  return 1;
}

/* ref: FUN_0082b410 */
uint F_0082b410(unsigned int gen_a0)
{
  GEN_ENTER(0x82b410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)((int)this + 0x2c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4a04));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d49f8));
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + -4);
    pvVar4 = (undefined *)(iVar5 * 0x54 + iVar1);
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      pvVar4 = (undefined *)((int)pvVar4 + -0x54);
      F_0042c880(pvVar4);
    }
    uVar6 = F_00406b30(iVar1 + -4);
    uVar3 = (uint)uVar6;
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  iVar1 = *(int *)((int)this + 0x30);
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + -4) + -1;
    if (-1 < iVar5) {
      pvVar4 = ((undefined *)GEN_TOP((*(int *)(iVar1 + -4) * 0x58 + 4 + iVar1)));
      do {
        pvVar4 = (undefined *)((int)pvVar4 + -0x58);
        F_0042c880(pvVar4);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
    uVar6 = F_00406b30(iVar1 + -4);
    uVar3 = (uint)uVar6;
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar3;
}

/* ref: Client::UI2::Agent::AgentCutSceneReplay::vf3 */
uint F_0082b4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x82b4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = F_007de530(this);
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_0082b510 */
uint F_0082b510(unsigned int gen_a0)
{
  GEN_ENTER(0x82b510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * this_00;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  uint * puVar5;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0xd0);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    puVar5 = &REFG(uint, 0x132822c);
    do {
      uVar2 = *puVar5;
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
      this_00 = *(int * PTR32 *)(uVar3 + 0xc + uVar2 * 4);
      uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x30))(this_00);
      if (uVar3 == piVar1[0x19]) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      }
      uVar2 = uVar2 - 0x2b;
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 0: ;
        if (this_00[0x19] != 0) {
          piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this_00[1] + 0x1c))((int *)this_00[1])));
          uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,this_00[0x19],0);
          this_00[0x19] = 0;
        }
        break;
      case 1: ;
        uVar2 = F_007deb30(this_00);
        break;
      case 3: ;
        uVar2 = F_007e0b70(this_00);
        break;
      case 5: ;
        uVar2 = F_007e0ce0(this_00);
      }
      puVar5 = puVar5 + 2;
    } while ((int)puVar5 < 0x132824c);
  }
  return uVar2;
}

/* ref: FUN_0082b5f0 */
uint F_0082b5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82b5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  if (3 < param_1) {
    return param_1;
  }
  uVar3 = (&REFG(uint, 0x132822c))[(int)(param_1 * 2)];
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar2 = *(int * PTR32 *)(uVar1 + 0xd0);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = *(undefined * PTR32 *)(uVar1 + 0xc + uVar3 * 4);
  uVar3 = uVar3 - 0x2b;
  if (5 < uVar3) goto LAB_0082b649;
  switch((unsigned int)(uintptr_t)(param_1)) {
  default: ;
    uVar1 = *(uint *)((int)this_00 + 0x14);
    if (uVar1 == 0) break;
    goto LAB_0082b65c;
  case 1: ;
    uVar3 = F_007deb30(this_00);
    break;
  case 2: ;
    uVar3 = F_0077a8c0(this_00);
  }
LAB_0082b649: ;
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2);
    uVar3 = 0;
    if (uVar1 != 0) {
LAB_0082b65c: ;
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 100))(piVar2,uVar1,1);
    }
  }
  return uVar3;
}

/* ref: Client::UI2::Agent::AgentFriendlist::vf3 */
uint F_0082b6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x82b6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = F_007deb30(this);
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_0082b6d0 */
unsigned int F_0082b6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82b6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 == 0xb5) {
    F_007df2a0((undefined *)((int)this + -0xc));
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentItemSearch::vf3 */
uint F_0082b6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x82b6f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x564) = 0;
  *(undefined2 *)(this + 0x3d0) = 0;
  F_00c48350(this + 0x3d4,0,400);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x24);
  if (uVar2 != 0) {
    if (**(int * PTR32 *)(uVar2 + 0x20) != *(int *)(this + 0x564)) {
      **(int * PTR32 *)(uVar2 + 0x20) = *(int *)(this + 0x564);
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  F_00c48350(this + 0xa18,0,0x3a);
  this[0xa52] = (undefined1)0x0;
  uVar2 = F_007df0e0(this);
  if (0 < *(int *)(this + 0xe00)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0xe00),0);
    *(undefined4 *)(this + 0xe00) = 0;
  }
  if (0 < *(int *)(this + 0x101c)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x101c),0);
    *(undefined4 *)(this + 0x101c) = 0;
  }
  if (0 < *(int *)(this + 0x1020)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x1020),0);
    *(undefined4 *)(this + 0x1020) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0x4)),0,0,0);
    uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    *(undefined4 *)(this + 0x18) = 0;
  }
  return uVar2;
}

/* ref: FUN_0082b830 */
unsigned int F_0082b830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82b830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_007dfc60(this,param_1,*(undefined4 *)((int)this + 8));
  return 0;
}

/* ref: Client::UI2::Agent::AgentLetter::vf3 */
uint F_0082b850(unsigned int gen_a0)
{
  GEN_ENTER(0x82b850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = F_007dfd10(this);
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0x18) = 0;
  return uVar1;
}

/* ref: FUN_0082b890 */
uint F_0082b890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82b890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4c0c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4c00));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  F_0042b630((int)this + 0x20);
  F_0042b630((int)this + 0x74);
  F_0042b630((int)this + 0x110);
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined1 *)((int)this + 0x174) = 0;
  F_00c48350((undefined *)((int)this + 200),0,0x48);
  return (uint)this;
}

/* ref: FUN_0082b910 */
uint F_0082b910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x82b910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  
  if (param_4 == 0) {
    uVar1 = F_0077bbe0((int)this + -0xc);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  else {
    uVar1 = param_4 - 1;
  }
  F_007e04c0((undefined *)((int)this + -0xc),uVar1,param_1,param_2);
  uVar1 = F_007dfef0((undefined *)((int)this + -0xc),0);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentPartyMember::vf3 */
uint F_0082b950(unsigned int gen_a0)
{
  GEN_ENTER(0x82b950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = F_007e0b70(this);
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentSearch::vf3 */
uint F_0082b980(unsigned int gen_a0)
{
  GEN_ENTER(0x82b980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = F_007e0ce0(this);
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_0082b9b0 */
uint F_0082b9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82b9b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  bool bVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  undefined * this_00;
  undefined * this_01;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x2a);
  uVar7 = 0;
  if (uVar5 != 0) {
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,0x26)));
    uVar7 = 0;
    if (this_00 != (undefined *)0x0) {
      this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      F_007e20a0(this,param_1,uVar5,this_00,1,4);
      param_1 = 0;
      piVar4 = param_2;
      iVar8 = 2;
      do {
        if (*piVar4 == 0 && piVar4[1] == 0) break;
        param_1 = param_1 + 1;
        F_007e20a0(this,piVar4,uVar5,this_00,iVar8,iVar8 + 3);
        iVar1 = iVar8 + -1;
        piVar4 = piVar4 + 0xe;
        iVar8 = iVar8 + 1;
      } while (iVar1 < 3);
      if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x14))) != param_1) {
        *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x14))) = param_1;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x18))) != 3) {
        *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x18))) = 3;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (param_1 == 0) {
        if (*((int *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x20))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x20))) = 0;
          *(undefined1 *)((int)this_00 + 0x1d) = 1;
        }
      }
      else {
        uVar10 = 0;
        uVar6 = 1;
        uVar9 = 0;
        uVar7 = F_00461c60(this_01,0x7fc,param_1,3);
        F_00431250(this_00,8,uVar7,uVar9,uVar6,uVar10);
      }
      if ((*(int *)((int)this + 0xc) == 0) ||
         (bVar3 = F_00436890(*(int *)((int)this + 0xc)), bVar3 == 0)) {
        uVar6 = 0xb56;
        bVar2 = false;
        uVar9 = 0xb60;
      }
      else {
        bVar2 = true;
        if (param_1 < 3) {
          uVar6 = 0xb54;
          uVar9 = 0xb5e;
        }
        else {
          uVar6 = 0xb55;
          uVar9 = 0xb5f;
        }
      }
      uVar7 = F_0043bd00(this_01,uVar6,0,0);
      if (uVar7 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x24)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x24))) = uVar7;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      uVar7 = F_0043bd00(this_01,uVar9,0,0);
      if (uVar7 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x28)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x28))) = uVar7;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      uVar7 = 1;
      if (!bVar2) {
        uVar7 = 2;
      }
      if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x1c))) != uVar7) {
        *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x1c))) = uVar7;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
    }
  }
  return uVar7;
}

/* ref: FUN_0082bb50 */
unsigned int F_0082bb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82bb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1 != (undefined *)0x0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x12df;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar5);
    F_005a2710(param_1,6);
    *(uint *)((int)param_1 + 4) = uVar2;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x12e3;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar5);
    F_005a2710((undefined *)((int)param_1 + 8),6);
    *(uint *)((int)param_1 + 0xc) = uVar2;
    F_005a2710((undefined *)((int)param_1 + 0x10),4);
    *(undefined4 *)((int)param_1 + 0x14) = 0x18ae5;
    F_005a2710((undefined *)((int)param_1 + 0x18),4);
    *(undefined4 *)((int)param_1 + 0x1c) = 0x18ae6;
    F_005a2710((undefined *)((int)param_1 + 0x20),4);
    *(undefined4 *)((int)param_1 + 0x24) = 0x18ae7;
    F_007e3200(this,param_1);
    F_0077f960(param_1);
    F_0077f9e0(param_1);
    F_0077fa60(param_1,0);
    F_0077faf0(param_1);
  }
  return 0;
}

/* ref: FUN_0082bc20 */
unsigned int F_0082bc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82bc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  *(undefined4 *)((int)this + 0x4e58) = 2;
  F_00780040();
  if ((char)param_1 == '\0') {
    F_007e37d0(this,1000,4);
    return 0;
  }
  if ((char)param_1 != '\x01') {
    if ((char)param_1 == '\x02') {
      iVar2 = 0;
      do {
        F_007e37d0(this,iVar2,iVar2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
    }
    return 0;
  }
  piVar3 = &REFG(undefined4, 0x10bd988);
  do {
    iVar2 = *piVar3;
    if (iVar2 != 9999) {
      uVar1 = F_00435000(iVar2);
      F_007e37d0(this,iVar2,uVar1);
    }
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x10bd998);
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf31 */
unsigned int F_0082bcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82bcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(this + 0xf5c) != 0) {
    iVar3 = 0;
    do {
      *(undefined1 *)(param_1 + iVar3) = *((undefined1 *)GEN_TOP((iVar3 + 0xc + *(int *)(this + 0xf5c))));
      *(undefined1 *)(param_1 + 1 + iVar3) = *((undefined1 *)GEN_TOP((iVar3 + 0xd + *(int *)(this + 0xf5c))));
      iVar3 = iVar3 + 2;
    } while (iVar3 < 0x1a);
    pbVar2 = *(byte * PTR32 *)(this + 0xf5c);
    bVar1 = pbVar2[10];
    uVar4 = F_00ab3630((uint)pbVar2[2] + ((uint)pbVar2[1] + (uint)*pbVar2 * 2) * 2);
    *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(uVar4 + 0x1a40 + (uint)bVar1);
    *(char *)(param_1 + 0x1b) = *((char *)GEN_TOP((*(int *)(this + 0xf5c) + 4))) + '\x01';
    *(char *)(param_1 + 0x1c) = *((char *)GEN_TOP((*(int *)(this + 0xf5c) + 5))) + '\x01';
    *(char *)(param_1 + 0x1d) = *((char *)GEN_TOP((*(int *)(this + 0xf5c) + 6))) + '\x01';
    uVar4 = F_00ab3660((uint)*((byte *)GEN_TOP((*(int *)(this + 0xf5c) + 7))));
    if (uVar4 != 0) {
      *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(uVar4 + 0x38);
      return 0;
    }
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
  return 0;
}

/* ref: FUN_0082bd80 */
uint F_0082bd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x82bd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  
  ((uint *)(gen_frame + 0x0))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0x0))[0] = 0;
  ((uint *)(gen_frame + 0x0))[1] = 0x2b3;
  ((uint *)(gen_frame + 0x0))[2] = 0x2b7;
  ((uint *)(gen_frame + 0x0))[3] = 0x2c7;
  ((uint *)(gen_frame + 0x0))[4] = 0x2e3;
  ((uint *)(gen_frame + 0x0))[5] = 0x2cc;
  uVar2 = F_00ab3630(param_3 + (param_2 + param_1 * 2) * 2);
  bVar1 = *((byte *)GEN_TOP((uVar2 + 0x1a40 + (param_4 & 0xff))));
  uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
  if (REFG(void * PTR32, 0x148a44c) != (undefined *)0x0) {
    uVar2 = (uint)bVar1;
    *((ushort *)GEN_TOP(((int)REFG(void * PTR32, 0x148a44c) + 0x2ea4))) = (ushort)bVar1;
    if (REFG(void * PTR32, 0x148a44c) != (undefined *)0x0) {
      F_00aa0560(REFG(void * PTR32, 0x148a44c),3);
      uVar2 = F_00aa4270(REFG(void * PTR32, 0x148a44c),((uint *)(gen_frame + 0x0))[(int)(param_4 >> 8 & 0xff)],0,0);
    }
  }
  F_00c47745(((uint *)(gen_frame + 0x0))[6] ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_0082be30 */
byte F_0082be30(unsigned int gen_a0)
{
  GEN_ENTER(0x82be30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = (int)this + 0xd;
  do {
    uVar3 = F_00ab3630(iVar5);
    *(char *)(iVar4 + -1) = *(char *)(uVar3 + 0x1ba0) + -1;
    *(undefined1 *)(iVar4 + 0xb) = *(undefined1 *)(uVar3 + 0x1ba0);
    bVar1 = 1 < ((byte)iVar5 & 3);
    *(bool *)iVar4 = bVar1;
    *(undefined1 *)(iVar4 + 0xf) = *(undefined1 *)(uVar3 + 0x1ba4);
    bVar2 = *(byte *)(uVar3 + 0x1ba8);
    *(byte *)(iVar4 + 1) = bVar2;
    *(undefined1 *)(iVar4 + 0xc) = *(undefined1 *)(uVar3 + 0x1ba8);
    *(undefined1 *)(iVar4 + 9) = 0;
    *(undefined1 *)(iVar4 + 6) = 0;
    *(undefined2 *)(iVar4 + 3) = 0;
    *(undefined2 *)(iVar4 + 7) = 0;
    *(undefined1 *)(iVar4 + 2) = 4;
    bVar2 = F_007e3ed0(this,(byte *)(iVar4 + -1),(uint)*(byte *)(iVar4 + -1),(uint)bVar1,
                         (uint)bVar2);
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0xc4;
  } while (iVar5 < 0x14);
  return bVar2;
}

/* ref: FUN_0082bed0 */
uint F_0082bed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82bed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x11bc0];
  byte * pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint * puVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0x11bb8)) = 0x82bedd;
  (*(uint *)(gen_frame + 0x11bb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  uVar8 = *(byte *)(param_1 + 4) - 1;
  uVar9 = uVar8 & 0x80000001;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
  }
  iVar10 = ((uint)*(byte *)(param_1 + 1) + (uVar9 + ((int)uVar8 / 2) * 2) * 2) * 0xc4 + 0xc +
           (int)this;
  *(int *)((int)this + 0xf5c) = iVar10;
  F_00c46aa0(iVar10 + 0xc,param_1,0x1a);
  pbVar1 = *(byte * PTR32 *)((int)this + 0xf5c);
  uVar12 = 0x1bb0;
  uVar8 = F_00ab3630((uint)pbVar1[2] + ((uint)pbVar1[1] + (uint)*pbVar1 * 2) * 2);
  F_00c46aa0(((int *)(gen_frame + 0x10008)),uVar8,uVar12);
  bVar2 = F_007e44b0(((int *)(gen_frame + 0x10008)),param_2);
  *((byte *)GEN_TOP((*(int *)((int)this + 0xf5c) + 10))) = bVar2;
  uVar8 = 0;
  piVar7 = ((int *)(gen_frame + 0x10008));
  do {
    if (*piVar7 == 0xcb) goto LAB_0082bfa6;
    uVar8 = uVar8 + 1;
    piVar7 = piVar7 + 0x3c;
  } while ((int)uVar8 < 0x1c);
  uVar8 = 0;
LAB_0082bfa6: ;
  *((uint *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + (uVar8 & 0xff) * 4))) =
       (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0xf5c) + 10)));
  (*(uint *)(gen_frame + 0x10000)) = 0;
  do {
    bVar2 = *(byte *)(param_1 + (*(uint *)(gen_frame + 0x10000)));
    uVar8 = (uint)bVar2;
    switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x10000)))) {
    case 3: ;
      uVar9 = 0;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c002;
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar9 < 0x1c);
      uVar9 = 0xff;
LAB_0082c002: ;
      if ((uVar9 & 0xff) < 0x1c) {
        *((uint *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + (uVar9 & 0xff) * 4))) = uVar8;
      }
      break;
    case 5: ;
      uVar9 = 0;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c03a;
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar9 < 0x1c);
      uVar9 = 0xff;
LAB_0082c03a: ;
      uVar9 = uVar9 & 0xff;
      if (uVar9 < 0x1c) {
        uVar6 = 0;
        puVar5 = ((uint *)(gen_frame + 0x10084)) + uVar9 * 0x3c;
        do {
          if (*puVar5 == uVar8) goto LAB_0082c066;
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while ((int)uVar6 < 0x1c);
        uVar6 = 0;
LAB_0082c066: ;
        *((uint *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + uVar9 * 4))) = uVar6 & 0xff;
      }
      break;
    case 6: ;
      uVar9 = 0;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c095;
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar9 < 0x1c);
      uVar9 = 0xff;
LAB_0082c095: ;
      uVar9 = uVar9 & 0xff;
      if (uVar9 < 0x1c) {
        uVar6 = 0;
        puVar5 = ((uint *)(gen_frame + 0x10084)) + uVar9 * 0x3c;
        do {
          if (*puVar5 == uVar8) goto LAB_0082c066;
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while ((int)uVar6 < 0x1c);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + uVar9 * 4))) = 0;
      }
      break;
    case 8: ;
      uVar9 = 0;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c0f2;
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar9 < 0x1c);
      uVar9 = 0xff;
LAB_0082c0f2: ;
      if ((uVar9 & 0xff) < 0x1c) {
        *((uint *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + (uVar9 & 0xff) * 4))) = uVar8;
      }
      break;
    case 9: ;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      uVar8 = uVar8 | (uint)CONCAT11(*(byte *)(param_1 + 0xf) != bVar2,*(byte *)(param_1 + 0xf)) <<
                      0x10;
      uVar9 = 0;
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c649;
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar9 < 0x1c);
      goto LAB_0082c647;
    case 10: ;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      uVar8 = ((uint)((*(byte *)(param_1 + 7) & 0x80) != 0) * 0x100 | (uint)*(byte *)(param_1 + 0xb)
              ) << 0x10 | uVar8;
      uVar9 = 0;
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c193;
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar9 < 0x1c);
      goto LAB_0082c190;
    case 0xc: ;
      bVar3 = bVar2 >> 5;
      bVar2 = bVar2 & 0x1f;
      uVar8 = 0;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c1e2;
        uVar8 = uVar8 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar8 < 0x1c);
      uVar8 = 0xff;
LAB_0082c1e2: ;
      uVar8 = uVar8 & 0xff;
      bVar4 = F_00780c90(((int *)(gen_frame + 0x10008)),(*(uint *)(gen_frame + 0x10000)));
      bVar11 = bVar3;
      if ((((int *)(gen_frame + 0x10008))[(int)(uVar8 * 0x3c)] != 0x6ce) && (((int *)(gen_frame + 0x10008))[(int)(uVar8 * 0x3c)] != 0x6cf)) {
        bVar11 = bVar2;
        bVar2 = bVar3;
      }
      if (uVar8 < 0x1c) {
        *((uint *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + uVar8 * 4))) = (uint)bVar11;
      }
      if (bVar4 < 0x1c) {
        *((uint *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + (uint)bVar4 * 4))) = (uint)bVar2;
      }
      break;
    case 0xd: ;
      uVar9 = 0;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c649;
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar9 < 0x1c);
      goto LAB_0082c647;
    case 0xe: ;
      uVar9 = 0;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c299;
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar9 < 0x1c);
      uVar9 = 0xff;
LAB_0082c299: ;
      uVar9 = uVar9 & 0xff;
      if (uVar9 < 0x1c) {
        uVar6 = 0;
        puVar5 = ((uint *)(gen_frame + 0x10084)) + uVar9 * 0x3c;
        do {
          if (*puVar5 == uVar8) goto LAB_0082c066;
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while ((int)uVar6 < 0x1c);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + uVar9 * 4))) = 0;
      }
      break;
    case 0x10: ;
      uVar8 = 0;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c306;
        uVar8 = uVar8 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar8 < 0x1c);
      uVar8 = 0xff;
LAB_0082c306: ;
      uVar8 = uVar8 & 0xff;
      iVar10 = 0;
      puVar5 = ((uint *)(gen_frame + 0x10084)) + uVar8 * 0x3c;
      do {
        if (*puVar5 == (uint)(bVar2 & 0x7f)) {
          (*(byte *)(gen_frame + 0x10007)) = (byte)iVar10;
          goto LAB_0082c334;
        }
        iVar10 = iVar10 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar10 < 0x1c);
      (*(byte *)(gen_frame + 0x10007)) = 0;
LAB_0082c334: ;
      uVar9 = uVar8 + 1 & 0xff;
      uVar6 = 0;
      puVar5 = ((uint *)(gen_frame + 0x10084)) + uVar9 * 0x3c;
      do {
        if (*puVar5 == (uint)(bVar2 >> 7)) goto LAB_0082c35f;
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
      } while ((int)uVar6 < 0x1c);
      uVar6 = 0;
LAB_0082c35f: ;
      *((uint *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + uVar8 * 4))) = (uint)(*(byte *)(gen_frame + 0x10007));
      *((uint *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + uVar9 * 4))) = uVar6 & 0xff;
      break;
    case 0x11: ;
      uVar9 = 0;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c3b2;
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar9 < 0x1c);
      uVar9 = 0xff;
LAB_0082c3b2: ;
      uVar9 = uVar9 & 0xff;
      if (uVar9 < 0x1c) {
        uVar6 = 0;
        puVar5 = ((uint *)(gen_frame + 0x10084)) + uVar9 * 0x3c;
        do {
          if (*puVar5 == uVar8) goto LAB_0082c3df;
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while ((int)uVar6 < 0x1c);
        uVar6 = 0;
LAB_0082c3df: ;
        *((uint *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + uVar9 * 4))) = uVar6 & 0xff;
      }
      break;
    case 0x12: ;
      uVar9 = 0;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c412;
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar9 < 0x1c);
      uVar9 = 0xff;
LAB_0082c412: ;
      uVar9 = uVar9 & 0xff;
      if (uVar9 < 0x1c) {
        uVar6 = 0;
        puVar5 = ((uint *)(gen_frame + 0x10084)) + uVar9 * 0x3c;
        do {
          if (*puVar5 == uVar8) goto LAB_0082c3df;
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while ((int)uVar6 < 0x1c);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + uVar9 * 4))) = 0;
      }
      break;
    case 0x13: ;
      uVar8 = 0;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c473;
        uVar8 = uVar8 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar8 < 0x1c);
      uVar8 = 0xff;
LAB_0082c473: ;
      uVar8 = uVar8 & 0xff;
      if (uVar8 < 0x1c) {
        uVar9 = 0;
        puVar5 = ((uint *)(gen_frame + 0x10084)) + uVar8 * 0x3c;
        do {
          if (*puVar5 == (uint)(bVar2 & 0x7f)) goto LAB_0082c4a4;
          uVar9 = uVar9 + 1;
          puVar5 = puVar5 + 1;
        } while ((int)uVar9 < 0x1c);
        uVar9 = 0;
LAB_0082c4a4: ;
        *((uint *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + uVar8 * 4))) = uVar9 & 0xff;
      }
      break;
    case 0x14: ;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      uVar8 = (uint)((*(byte *)(param_1 + 0x13) & 0x80) != 0) * 0x100 | uVar8;
      uVar9 = 0;
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c193;
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar9 < 0x1c);
LAB_0082c190: ;
      uVar9 = 0xff;
LAB_0082c193: ;
      if ((uVar9 & 0xff) < 0x1c) {
        *((uint *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + (uVar9 & 0xff) * 4))) = uVar8;
      }
      break;
    case 0x15: ;
      uVar9 = 0;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c649;
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar9 < 0x1c);
      goto LAB_0082c647;
    case 0x16: ;
      uVar9 = 0;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c53a;
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar9 < 0x1c);
      uVar9 = 0xff;
LAB_0082c53a: ;
      uVar9 = uVar9 & 0xff;
      if (uVar9 < 0x1c) {
        uVar6 = 0;
        puVar5 = ((uint *)(gen_frame + 0x10084)) + uVar9 * 0x3c;
        do {
          if (*puVar5 == uVar8) goto LAB_0082c066;
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while ((int)uVar6 < 0x1c);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + uVar9 * 4))) = 0;
      }
      break;
    case 0x17: ;
      uVar9 = 0;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c599;
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar9 < 0x1c);
      uVar9 = 0xff;
LAB_0082c599: ;
      if ((uVar9 & 0xff) < 0x1c) {
        *((uint *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + (uVar9 & 0xff) * 4))) = uVar8;
      }
      break;
    case 0x18: ;
      uVar8 = 0;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c5d3;
        uVar8 = uVar8 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar8 < 0x1c);
      uVar8 = 0xff;
LAB_0082c5d3: ;
      uVar8 = uVar8 & 0xff;
      if (uVar8 < 0x1c) {
        uVar9 = 0;
        puVar5 = ((uint *)(gen_frame + 0x10084)) + uVar8 * 0x3c;
        do {
          if (*puVar5 == (uint)(bVar2 & 0x7f)) goto LAB_0082c60f;
          uVar9 = uVar9 + 1;
          puVar5 = puVar5 + 1;
        } while ((int)uVar9 < 0x1c);
        uVar9 = 0;
LAB_0082c60f: ;
        *((uint *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + uVar8 * 4))) =
             (uint)((bVar2 & 0x80) != 0) << 7 | uVar9 & 0xff;
      }
      break;
    case 0x19: ;
      uVar9 = 0;
      puVar5 = (uint *)(((int *)(gen_frame + 0x10008)) + 2);
      do {
        if (*puVar5 == ((*(uint *)(gen_frame + 0x10000)) & 0xff)) goto LAB_0082c649;
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 0x3c;
      } while ((int)uVar9 < 0x1c);
LAB_0082c647: ;
      uVar9 = 0xff;
LAB_0082c649: ;
      if ((uVar9 & 0xff) < 0x1c) {
        *((uint *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x54 + (uVar9 & 0xff) * 4))) = uVar8;
      }
    }
    (*(uint *)(gen_frame + 0x10000)) = (*(uint *)(gen_frame + 0x10000)) + 1;
    if (0x19 < (int)(*(uint *)(gen_frame + 0x10000))) {
      iVar10 = (*((byte *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0xd))) - 2) +
               (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x10))) * 2;
      if (iVar10 < 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x13282e0))[(int)(iVar10)]);
        if (piVar7 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar7 + 0x30))(piVar7);
        }
      }
      if (-1 < (int)(&REFG(undefined4, 0x13282e0))[(int)(iVar10)]) {
        F_00ae0cd0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x13282e0))[(int)(iVar10)]);
        (&REFG(undefined4, 0x13282e0))[(int)(iVar10)] = 0xffffffff;
      }
      if (REFG(int * PTR32, 0x148a44c) == piVar7) {
        REFG(int * PTR32, 0x148a44c) = (int *)0x0;
      }
      uVar8 = F_007e58e0(*(int *)((int)this + 0xf5c) + 0xc,(int)*(char *)((int)this + 0x1fa8));
      F_00c47745((*(uint *)(gen_frame + 0x11bb8)) ^ (uint)(uint)(gen_frame + 0x0));
      return uVar8;
    }
  } while( true );
}

/* ref: FUN_0082c770 */
unsigned int F_0082c770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82c770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  
  ((uint *)(gen_frame + 0x0))[10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*(byte *)((int)this + 0x1fb9) != param_1) {
    cVar1 = *(char *)((int)this + 0x1fb8);
    *(char *)((int)this + 0x1fb9) = (char)param_1;
    ((uint *)(gen_frame + 0x0))[0] = 0x1c3;
    ((uint *)(gen_frame + 0x0))[1] = 0x1c3;
    ((uint *)(gen_frame + 0x0))[2] = 0x1c4;
    ((uint *)(gen_frame + 0x0))[3] = 0x1c5;
    ((uint *)(gen_frame + 0x0))[4] = 0x1c6;
    ((uint *)(gen_frame + 0x0))[5] = 0x1c7;
    ((uint *)(gen_frame + 0x0))[6] = 0x1c8;
    ((uint *)(gen_frame + 0x0))[7] = 0x1c9;
    ((uint *)(gen_frame + 0x0))[8] = 0;
    ((uint *)(gen_frame + 0x0))[9] = 0;
    uVar2 = F_00ab36c0(((uint *)(gen_frame + 0x0))[(int)(param_1 + cVar1 * 2)]);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(uVar2 + 0x10);
    }
    *(short *)((int)this + 0x1fba) = (short)uVar2;
    F_007e5c20(uVar2);
  }
  F_00c47745(((uint *)(gen_frame + 0x0))[10] ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_0082c820 */
uint F_0082c820(unsigned int gen_a0)
{
  GEN_ENTER(0x82c820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x1fd8);
  if (-1 < (int)uVar1) {
    uVar1 = F_00aca790(&REFG(undefined, 0x148a590),uVar1);
    uVar1 = F_0082bed0(this,uVar1 + 0x10,(uint)*(byte *)(uVar1 + 0x2a));
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentLobby::vf3 */
uint F_0082c850(unsigned int gen_a0)
{
  GEN_ENTER(0x82c850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0x2dc) = 0;
  if (*(undefined * PTR32 *)(this + 0x2d4) != (undefined *)0x0) {
    F_00ba1d20(*(undefined * PTR32 *)(this + 0x2d4));
    F_00ba1f90(*(undefined * PTR32 *)(this + 0x2d4));
    *(undefined4 *)(this + 0x2d4) = 0;
  }
  F_00782660();
  iVar3 = 0;
  do {
    F_00782d20(iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  uVar2 = F_00782e50();
  if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(int * PTR32, 0x148a44c),6,0);
  }
  REFG(int * PTR32, 0x148a44c) = (int *)0x0;
  return uVar2;
}

/* ref: FUN_0082c8e0 */
uint F_0082c8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82c8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  ushort uVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined3 extraout_var = 0;
  uint * this_00;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 * puVar12;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if (param_2 == 0x1a) {
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(undefined4 *)(gen_frame + 0x14)) = 4;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),5,&(*(undefined4 *)(gen_frame + 0x10)));
    this_00 = &(*(uint *)(gen_frame + 0x38));
    (*(uint *)(gen_frame + 0xc)) = 4;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar9 = (*(uint *)(gen_frame + 0xc)) + -1;
      (*(uint *)(gen_frame + 0xc)) = iVar9;
    } while (-1 < iVar9);
  }
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  *(undefined4 *)(uVar4 + 0x29250) = 0;
  if (*(char *)(uVar4 + 0x29254) != '\0') {
    if (REFG(int, 0x1370c18) != 0) {
      F_004d2690(REFG(int, 0x1370c18),REFG(float, 0x1088068));
    }
    *(undefined1 *)(uVar4 + 0x29254) = 0;
  }
  uVar10 = 2;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  F_00760260(pvVar5,uVar10);
  *(undefined1 *)((int)this + 0x6d0) = 0;
  uVar10 = 1;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  bVar1 = F_005590e0(uVar4,uVar10);
  uVar4 = CONCAT31(extraout_var,bVar1);
  if ((((bVar1 == 0) || (uVar4 = *(uint *)(REFG(int, 0x148a454) + 0xc), uVar4 == 1)) || (uVar4 == 2)) ||
     ((uVar4 == 3 || (uVar4 == 4)))) {
    if (*(int *)((int)this + 0x6e8) == 0) {
      uVar10 = 0;
      uVar4 = F_00404270();
      uVar4 = F_00406bd0(100,0,uVar4,uVar10);
      if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = F_00e3bd90(uVar4);
      }
      *(uint *)((int)this + 0x6e8) = uVar4;
      *(undefined4 *)(uVar4 + 8) = param_1[2];
      puVar12 = *(undefined4 * PTR32 *)((int)this + 0x6e8);
      *puVar12 = *param_1;
      uVar4 = CONCAT22((short)((uint)((int)(uintptr_t)puVar12) >> 0x10),*(undefined2 *)(param_1 + 0x18));
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x6e8) + 0x60))) = *(undefined2 *)(param_1 + 0x18);
    }
  }
  else {
    uVar11 = 0;
    uVar8 = 0;
    uVar7 = 1;
    uVar6 = 0;
    uVar10 = 0;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    F_0075ec30(pvVar5,uVar10,uVar6,uVar7,uVar8,uVar11);
    uVar11 = 0;
    uVar8 = 0;
    uVar7 = 1;
    uVar6 = 0;
    uVar10 = 1;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    F_00820b30(pvVar5,uVar10,uVar6,uVar7,uVar8,uVar11);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    uVar4 = F_00e3bdc0(param_1);
    (*(uint *)(gen_frame + 0xc)) = uVar4 << 0x10;
    uVar2 = F_00e3bdd0(param_1);
    uVar4 = uVar2 | (*(uint *)(gen_frame + 0xc));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),4);
    (*(uint *)(gen_frame + 0x8)) = uVar4;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar10 = *param_1;
    puVar12 = &(*(undefined4 *)(gen_frame + 0x4));
    (*(uint *)(gen_frame + 0xc)) = *piVar3;
    iVar9 = (int)this + 0xc;
    uVar2 = F_00e3bdd0(param_1);
    ((code *)*(gen_code32 *)((*(uint *)(gen_frame + 0xc)) + 0x74))(piVar3,0,(uint)uVar2,uVar10,iVar9,puVar12);
    uVar4 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
    iVar9 = *(int *)((int)this + 0x6e8);
    if (iVar9 != 0) {
      F_0042c880((undefined *)(iVar9 + 0xc));
      uVar4 = F_00406ad0(iVar9);
      *(undefined4 *)((int)this + 0x6e8) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar4;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar4;
}

/* ref: FUN_0082cb40 */
uint F_0082cb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82cb40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar2 = param_1;
  if (param_1 == 0) {
    iVar2 = 0x14;
  }
  (*(uint *)(gen_frame + 0x8)) = 1;
  do {
    (*(int *)(gen_frame + 0x0)) = 0;
    do {
      (*(int *)(gen_frame + 0x4)) = 0;
      bVar1 = ((char)(*(uint *)(gen_frame + 0x8)) * '\x02' + (char)(*(int *)(gen_frame + 0x0))) - 1;
      do {
        F_0068e790(&(*(uint *)(gen_frame + 0x10)));
        (*(uint *)(gen_frame + 0x10)) = 0;
        (*(uint *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        (*(undefined2 *)(gen_frame + 0x28)) = 0;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = (char)(*(uint *)(gen_frame + 0x8));
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = bVar1;
        (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 1)) = (undefined1)(*(int *)(gen_frame + 0x4));
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = 1;
        (*(uint *)(gen_frame + 0x10)) = (uint)CONCAT12(1,CONCAT11((undefined1)(*(int *)(gen_frame + 0x4)),(char)(*(uint *)(gen_frame + 0x8))));
        F_00b88e00(&(*(uint *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0x10)));
        F_007e58e0(&(*(uint *)(gen_frame + 0x10)),param_2);
        iVar2 = iVar2 + -1;
        if (iVar2 < 1) break;
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
      } while ((*(int *)(gen_frame + 0x4)) < 2);
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
    } while ((*(int *)(gen_frame + 0x0)) < 2);
    (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
    if (5 < (int)(*(uint *)(gen_frame + 0x8))) {
      if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
        (*(uint *)(gen_frame + 0x8)) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(int * PTR32, 0x148a44c),6,0);
      }
      REFG(int * PTR32, 0x148a44c) = (int *)0x0;
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return (*(uint *)(gen_frame + 0x8));
    }
  } while( true );
}

/* ref: FUN_0082cc40 */
byte F_0082cc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82cc40u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_1 == (int *)0x0) {
    if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(int * PTR32, 0x148a44c),6,0);
      REFG(int, 0x1328330) = -1;
      REFG(int * PTR32, 0x148a44c) = param_1;
    }
  }
  else if ((char)*param_1 != '\0') {
    (*(int *)(gen_frame + 0x1c)) = 0;
    if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
      (*(int *)(gen_frame + 0x1c)) = REFG(int * PTR32, 0x148a44c)[0x2c];
    }
    F_00b88e00(param_1,param_1);
    iVar1 = (*(byte *)((int)param_1 + 1) - 2) + (uint)*(byte *)(param_1 + 1) * 2;
    if (iVar1 < 0) {
      REFG(int * PTR32, 0x148a44c) = (int *)0x0;
    }
    else {
      REFG(int * PTR32, 0x148a44c) = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x13282e0))[(int)(iVar1)]);
    }
    if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
      if (((undefined *)GEN_TOP(REFG(int * PTR32, 0x148a44c)[0x3b])) != (undefined *)0x0) {
        bVar2 = F_006a9a90(((undefined *)GEN_TOP(REFG(int * PTR32, 0x148a44c)[0x3b])),param_1,0);
        if (bVar2 == 0) {
          F_00b88e00(param_1,param_1);
          F_00ae0cd0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x13282e0))[(int)(iVar1)]);
          uVar3 = F_00ae3f10(&REFG(undefined, 0x14c0920),0xffffffff);
          (&REFG(undefined4, 0x13282e0))[(int)(iVar1)] = uVar3;
          REFG(int * PTR32, 0x148a44c) = (int *)F_00782630(iVar1);
          if (REFG(int * PTR32, 0x148a44c) == (int *)0x0) goto LAB_0082cd84;
          F_00aaa640(REFG(int * PTR32, 0x148a44c),param_1,0);
          if (((undefined *)GEN_TOP(REFG(int * PTR32, 0x148a44c)[0x3b])) != (undefined *)0x0) {
            F_006a9a90(((undefined *)GEN_TOP(REFG(int * PTR32, 0x148a44c)[0x3b])),param_1,0);
          }
        }
        if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x24))))(REFG(int * PTR32, 0x148a44c),6,0);
        }
      }
LAB_0082cd84: ;
      if (REFG(int, 0x1328330) != iVar1) {
        if ((-1 < REFG(int, 0x1328330)) &&
           (REFG(int * PTR32, 0x148a44c) = (int *)F_00782630(REFG(int, 0x1328330)), REFG(int * PTR32, 0x148a44c) != (int *)0x0)) {
          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(int * PTR32, 0x148a44c),6,0);
          F_00b5aeb0(REFG(void * PTR32, 0x14c4e84),(uint)*((ushort *)GEN_TOP((REFG(int * PTR32, 0x148a44c) + 0x22))),0);
        }
        REFG(int, 0x1328330) = iVar1;
        REFG(int * PTR32, 0x148a44c) = (int *)F_00782630(iVar1);
        if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
          F_00782be0();
          F_007828a0(3);
        }
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x48))))(REFG(int * PTR32, 0x148a44c),(*(int *)(gen_frame + 0x1c)));
      }
      if ((byte)param_2 != 0) {
        *((ushort *)GEN_TOP((REFG(int * PTR32, 0x148a44c) + 0xba9))) = (ushort)(byte)param_2;
      }
      F_007e5bb0();
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x3c))))(REFG(int * PTR32, 0x148a44c),&(*(undefined4 *)(gen_frame + 0x0)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0082ce60 */
uint F_0082ce60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82ce60u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * piVar1;
  byte bVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  byte * pbVar6;
  undefined3 extraout_var_00 = 0;
  int iVar7;
  byte * pbVar8;
  short sVar9;
  bool bVar10;
  float10 fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined * PTR32 * ppuVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float local_8;
  
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  pvVar4 = REFG(void * PTR32, 0x148a454);
  uVar5 = 0;
  if (piVar3 != (int *)0x0) {
    if ((int)param_1 < 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x148a454) + 0x10)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
      }
      uVar20 = 0;
      ppuVar18 = &REFG(undefined * PTR32, 0x13286a0);
      uVar16 = 1;
      *(undefined4 *)((int)pvVar4 + 0x10) = 0;
      *(undefined4 *)((int)pvVar4 + 0x14) = 0;
      uVar14 = 0x18;
      uVar13 = 0;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      F_0075ec30(pvVar4,uVar13,uVar14,uVar16,ppuVar18,uVar20);
      REFG(short, 0x13282dc) = 0xffff;
      REFG(short, 0x13282d8) = 0xffff;
      REFG(char, 0x148a113) = 0;
      uVar5 = F_005d4f10(1,0xc,0);
      return uVar5;
    }
    if (REFG(char, 0x148a113) == '\0') {
      uVar5 = (uint)REFG(short, 0x13282d8);
      if ((param_1 != uVar5) && (param_1 != (int)REFG(short, 0x13282dc))) {
        sVar9 = (short)param_1;
        if (REFG(short, 0x13282d8) < 0) {
          uVar21 = 0;
          uVar20 = 0;
          uVar16 = 1;
          uVar14 = 0;
          uVar13 = 1;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
          F_0075ec30(pvVar4,uVar13,uVar14,uVar16,uVar20,uVar21);
          F_005f9ab0((&REFG(undefined * PTR32, 0x132826c))[(int)(param_1)],0,0,0,0);
          REFG(char, 0x148a113) = 1;
          REFG(short, 0x13282d8) = sVar9;
          F_007e5c20(param_2);
          uVar5 = F_007e5bb0();
          return uVar5;
        }
        pbVar8 = (&REFG(undefined * PTR32, 0x132826c))[(int)(uVar5)];
        pbVar6 = (&REFG(undefined * PTR32, 0x132826c))[(int)(param_1)];
        do {
          bVar2 = *pbVar6;
          bVar10 = bVar2 < *pbVar8;
          if (bVar2 != *pbVar8) {
LAB_0082d125: ;
            iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_0082d12a;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar10 = bVar2 < pbVar8[1];
          if (bVar2 != pbVar8[1]) goto LAB_0082d125;
          pbVar6 = pbVar6 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar2 != 0);
        iVar7 = 0;
LAB_0082d12a: ;
        if (iVar7 == 0) {
          REFG(char, 0x148a113) = '\x01';
          REFG(short, 0x13282d8) = sVar9;
          F_007e5c20(param_2);
          uVar5 = F_007e5bb0();
        }
        else {
          uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3);
          uVar5 = F_0075edd0(uVar5);
          if ((uVar5 & 10) == 0) {
            iVar7 = param_2 * 0x10000 + 0x10 + param_1;
            ppuVar18 = &REFG(undefined * PTR32, 0x13286a0);
            uVar16 = 1;
            uVar14 = 0x18;
            uVar13 = 1;
            pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
            bVar2 = F_0075ec30(pvVar4,uVar13,uVar14,uVar16,ppuVar18,iVar7);
            REFG(short, 0x13282dc) = sVar9;
            return CONCAT31(extraout_var_00,bVar2);
          }
        }
      }
    }
    else {
      bVar2 = F_005d99e0();
      uVar5 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 0) {
        iVar7 = (int)REFG(short, 0x13282d8);
        switch((unsigned int)(uintptr_t)(iVar7)) {
        case 0: ;
          F_00783ae0(REFG(void * PTR32, 0x148a454),1);
          F_00b720d0(REFG(void * PTR32, 0x148a444),&REFG(undefined, 0x1328680),&REFG(undefined, 0x1328690),REFG(float, 0x10946b8));
          break;
        case 1: ;
          F_00783ae0(REFG(void * PTR32, 0x148a454),2);
          F_007e5800(0);
          F_00782c20((float)(float10)0);
          F_00b75200(REFG(void * PTR32, 0x148a444));
          break;
        case 2: ;
        case 3: ;
        case 4: ;
        case 5: ;
        case 6: ;
          fVar22 = *((float *)GEN_TOP(((int)REFG(void * PTR32, 0x148a444) + 0xfc)));
          fVar12 = F_00782c40();
          uVar5 = F_00ab36c0(iVar7 + 0x1e8);
          if (uVar5 == 0) {
            local_8 = 0.0;
          }
          else {
            fVar11 = (float10)*(int *)(uVar5 + 0x10);
            if (*(int *)(uVar5 + 0x10) < 0) {
              fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
            }
            local_8 = (float)fVar11;
          }
          fVar19 = ((float)GEN_TOF((((float10)local_8 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                          (float10)*(double *)&REFG(undefined, 0x1080220))));
          F_00782c20(fVar19);
          F_00b6aa40(REFG(void * PTR32, 0x148a444),((float)GEN_TOF((((float10)fVar22 - (float10)fVar12) + (float10)fVar19))));
        }
        uVar21 = 0;
        uVar20 = 0;
        uVar16 = 1;
        uVar14 = 0x18;
        uVar13 = 1;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
        F_00820b30(pvVar4,uVar13,uVar14,uVar16,uVar20,uVar21);
        fVar11 = (float10)0;
        fVar22 = (float)fVar11;
        fVar12 = (float)fVar11;
        fVar19 = (float)fVar11;
        uVar17 = 1;
        uVar13 = 0;
        fVar15 = REFG(float, 0x10b2cc8);
        uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3);
        F_0075e050(uVar5,uVar13,fVar15,uVar17,fVar19,fVar12,fVar22);
        REFG(char, 0x148a113) = 0;
        F_007e5c20(param_2);
        uVar5 = F_007e5bb0();
        return uVar5;
      }
    }
  }
  return uVar5;
}

/* ref: FUN_0082d1c0 */
unsigned int F_0082d1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82d1c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0xec);
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0x70) =
           (ushort)((char)param_2 != '\0') << 4 | *(ushort *)(iVar1 + 0x70) & 0xffef;
    }
    if (param_1 != -0x16c0) {
      *(ushort *)(param_1 + 0x1730) =
           (ushort)((char)param_2 != '\0') << 4 | *(ushort *)(param_1 + 0x1730) & 0xffef;
    }
    if (param_1 != -0x1e60) {
      *(ushort *)(param_1 + 0x1ed0) =
           (ushort)((char)param_2 != '\0') << 4 | *(ushort *)(param_1 + 0x1ed0) & 0xffef;
    }
  }
  return 0;
}

/* ref: FUN_0082d250 */
uint F_0082d250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82d250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  
  piVar3 = (int *)0x0;
  if (*(int *)((int)this + 0xc) != 0) {
    piVar3 = *(int * PTR32 *)((int)this + 0x10);
    uVar4 = (uint)*((char *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x670)));
    if (((piVar3 != (int *)0x0) && (-1 < (int)uVar4)) && ((int)uVar4 < piVar3[1] - *piVar3 >> 2)) {
      iVar1 = *piVar3;
      if ((uint)(piVar3[1] - iVar1 >> 2) <= uVar4) {
                    
        F_00c457e7("invalid vector<T> subscript");
      }
      if ((uint)(piVar3[1] - iVar1 >> 2) <= uVar4) {
                    
        F_00c457e7("invalid vector<T> subscript");
      }
      puVar2 = *(undefined4 * PTR32 *)(uVar4 * 4 + iVar1);
      uVar4 = F_00974950(*(undefined * PTR32 *)((int)this + 8),
                           (uint)*((byte *)GEN_TOP((*(int *)(iVar1 + uVar4 * 4) + 8))),*puVar2,puVar2[1],this,
                           *(undefined4 *)((int)this + 0xc));
      *(undefined4 *)((int)this + 0x104) = param_1;
      *(uint *)((int)this + 0xfc) = ((char)uVar4 == '\0') + 0xb;
      return uVar4;
    }
  }
  return (uint)piVar3 & 0xffffff00;
}

/* ref: FUN_0082d310 */
byte F_0082d310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x82d310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return 0;
  }
  F_00415060(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x10))),param_2,param_3);
  (*(gen_code32 *)(gen_frame + 0x14)) = (code *)0x0;
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x916e60));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x7835d0));
  F_00976af0(REFG(void * PTR32, 0x137104c),&(*(gen_code32 *)(gen_frame + 0xc)),0);
  bVar1 = F_00974980(*(undefined * PTR32 *)((int)this + 8),param_1,param_2,param_3,this,
                       *(undefined4 *)((int)this + 0xc));
  *(uint *)((int)this + 0xfc) = (bVar1 == 0) + 0xe;
  return bVar1;
}

/* ref: FUN_0082d3a0 */
byte F_0082d3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x82d3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return 0;
  }
  bVar1 = F_00974ae0(*(undefined * PTR32 *)((int)this + 8),param_1,param_2,param_3,param_4,this,
                       *(int *)((int)this + 0xc));
  *(uint *)((int)this + 0xfc) = (bVar1 == 0) + 0x15;
  if (bVar1 != 0) {
    F_0090e260((undefined *)((int)this + 200),param_4);
  }
  return bVar1;
}

/* ref: FUN_0082d400 */
byte F_0082d400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82d400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  byte bVar4;
  
  if ((((*(int *)((int)this + 0xc) == 0) ||
       (piVar1 = *(int * PTR32 *)((int)this + 0x10), piVar1 == (int *)0x0)) || ((int)param_1 < 0)) ||
     (piVar1[1] - *piVar1 >> 2 <= (int)param_1)) {
    return 0;
  }
  iVar2 = *piVar1;
  if ((uint)(piVar1[1] - iVar2 >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  if ((uint)(piVar1[1] - iVar2 >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  puVar3 = *(undefined4 * PTR32 *)(param_1 * 4 + iVar2);
  bVar4 = F_009749b0(*(undefined * PTR32 *)((int)this + 8),(uint)*((byte *)GEN_TOP((*(int *)(iVar2 + param_1 * 4) + 8))),
                       *puVar3,puVar3[1],this,*(undefined4 *)((int)this + 0xc));
  *(uint *)((int)this + 0xfc) = 0x28 - (uint)(bVar4 != 0);
  return 1;
}

/* ref: FUN_0082d4b0 */
uint F_0082d4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82d4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = in_EAX & 0xffffff00;
  if (param_2 < 2) {
    bVar1 = F_0082d400((undefined *)(param_2 * 0x118 + 8 + (int)this),param_1);
    uVar2 = CONCAT31(extraout_var,bVar1);
    *(uint *)((int)this + 0x238) = (bVar1 != 0) + 0x28;
  }
  return uVar2;
}

/* ref: FUN_0082d4f0 */
uint F_0082d4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x82d4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined * pvVar3;
  undefined3 extraout_var_05 = 0;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = *(int *)(REFG(int, 0x148a454) + 0xc) - 1;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))(*(int * PTR32 *)this);
    bVar1 = F_0075ee20(uVar2);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
      F_004142d0(((undefined1 *)(gen_frame + 0x8)),*(undefined4 *)(uVar2 + 0x14));
      uVar2 = F_00ba1ef0(*(undefined4 *)((int)this + 8),0xffffffff);
      *(uint *)((int)this + 4) = uVar2;
      *(undefined4 *)((int)this + 0xc) = 2;
      return uVar2;
    }
    break;
  case 1: ;
    if ((*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) &&
       (uVar2 = F_00ba1e40(*(undefined * PTR32 *)((int)this + 4)), (char)uVar2 != '\0')) {
      F_004309e0(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),((undefined1 *)(gen_frame + 0x4)));
      F_00ba1c30(*(undefined * PTR32 *)((int)this + 4),0);
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 1;
      *(undefined4 *)((int)this + 0xc) = 3;
      uVar5 = 0x18;
      uVar4 = 0;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))(*(int * PTR32 *)this)));
      bVar1 = F_00820b30(pvVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
      return CONCAT31(extraout_var_00,bVar1);
    }
    break;
  case 2: ;
    bVar1 = F_00414f10(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x10));
    uVar2 = CONCAT31(extraout_var_01,bVar1);
    if (bVar1 == 1) {
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x50))))(*(int * PTR32 *)this)));
      bVar1 = F_00a34970(pvVar3,0x16e);
      if (bVar1 == 0) {
        bVar1 = F_00a34970(pvVar3,3);
        uVar2 = CONCAT31(extraout_var_02,bVar1);
        if (bVar1 == 0) goto LAB_0082d60d;
      }
      if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
        F_00ba1d20(*(undefined * PTR32 *)((int)this + 4));
      }
      uVar4 = 0x18;
    }
    else {
LAB_0082d60d: ;
      if (*(int *)((int)this + 4) == 0) {
        return uVar2;
      }
      uVar2 = F_00ba1950();
      if ((char)uVar2 == '\0') {
        return uVar2;
      }
      uVar4 = 1;
    }
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 1;
    *(undefined4 *)((int)this + 0xc) = 4;
    uVar5 = 0;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))(*(int * PTR32 *)this)));
    bVar1 = F_0075ec30(pvVar3,uVar5,uVar4,uVar6,uVar7,uVar8);
    uVar2 = CONCAT31(extraout_var_03,bVar1);
    break;
  case 3: ;
    if ((*(int *)((int)this + 4) != 0) && (uVar2 = F_00ba1930(), (char)uVar2 == '\0')) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))(*(int * PTR32 *)this);
      bVar1 = F_0075ee20(uVar2);
      uVar2 = CONCAT31(extraout_var_04,bVar1);
      if (bVar1 != 0) {
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 1;
        uVar5 = 0x18;
        uVar4 = 0;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))(*(int * PTR32 *)this)));
        bVar1 = F_00820b30(pvVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
        uVar2 = CONCAT31(extraout_var_05,bVar1);
        *(undefined4 *)((int)this + 0xc) = 5;
        *(undefined4 *)((int)this + 8) = 3;
        if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
          uVar2 = F_00ba1f90(*(undefined * PTR32 *)((int)this + 4));
          *(undefined4 *)((int)this + 4) = 0;
          return uVar2;
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_0082d6c0 */
byte F_0082d6c0(void)
{
  GEN_ENTER(0x82d6c0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x9127c0));
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x783ab0));
  bVar1 = F_00acc5d0(&REFG(undefined, 0x148a590),&(*(gen_code32 *)(gen_frame + 0xc)),0);
  REFG(undefined4, 0x148a44a) = 1;
  return bVar1;
}

/* ref: FUN_0082d700 */
uint F_0082d700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x82d700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(*(uint *)((int)this + 0x18))) {
  case 0: ;
    uVar1 = F_007e6930(this,param_1);
    return uVar1;
  case 1: ;
  case 3: ;
    uVar1 = F_007e6ca0(this,param_1);
    return uVar1;
  case 2: ;
    uVar1 = F_00783d10(this,param_1);
    return uVar1;
  default: ;
    return *(uint *)((int)this + 0x18);
  }
}

/* ref: FUN_0082d740 */
uint F_0082d740(unsigned int gen_a0)
{
  GEN_ENTER(0x82d740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_ecx;
  uint uVar1;
  
  in_ecx = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
  }
  uVar1 = F_0055a350(in_ecx);
  if (((char)uVar1 != '\0') &&
     ((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa8))) <= *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb0))) ||
      (*(char *)((int)this + 0xa1) != '\0')))) {
    *(undefined1 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0xb8);
  }
  uVar1 = F_007e7d70(this,0);
  return uVar1;
}

/* ref: FUN_0082d790 */
uint F_0082d790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82d790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_0055ad50(*(undefined * PTR32 *)((int)this + 8),0,0);
  if ((*(char *)((int)this + 0x68) == '\0') && (uVar2 = 0, param_2[1] != *param_2)) {
    if (0 < param_2[1] - *param_2) {
      *(undefined1 *)((int)this + 0xa1) = 0;
    }
    bVar1 = F_00784bc0(this);
    if (bVar1 == 0) {
      F_0082d740(this);
    }
    uVar2 = *(uint *)((int)this + 0x10);
    *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(uVar2 + 0xb0);
  }
  return uVar2;
}

/* ref: FUN_0082d7e0 */
uint F_0082d7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82d7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint in_EAX = 0;
  undefined4 in_ecx;
  
  if (*(char *)((int)this + 0x68) == '\0') {
    in_ecx = 0;
    if (*(int *)((int)this + 0x10) != 0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
    }
    in_EAX = F_0055a350(in_ecx);
    if ((char)in_EAX != '\0') {
      F_00574c80(*(int *)((int)this + 0x10),
                   *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb0))) + *(short *)(param_2 + 4) * -4,1,1);
      F_00557670(param_1,0);
      *(bool *)((int)this + 0xa1) =
           *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa8))) <=
           *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb0)));
      F_0055ad50(*(undefined * PTR32 *)((int)this + 8),0,0);
      bVar1 = F_00784bc0(this);
      if (bVar1 == 0) {
        F_0082d740(this);
      }
      in_EAX = *(uint *)((int)this + 0x10);
      *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(in_EAX + 0xb0);
    }
  }
  return in_EAX;
}

/* ref: FUN_0082d880 */
unsigned int F_0082d880(unsigned int gen_a0)
{
  GEN_ENTER(0x82d880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (-1 < *(int *)((int)this + 0xc4)) {
    F_0059b300(*(undefined * PTR32 *)((int)this + 0x18),*(undefined4 *)((int)this + 8),
                 *(undefined4 *)((int)this + 4),0);
    F_007e8480(this,1);
  }
  *(undefined1 *)((int)this + 0xc1) = 0;
  return 0;
}

/* ref: FUN_0082d8c0 */
byte F_0082d8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x82d8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte * pbVar1;
  uint uVar2;
  undefined * pvVar3;
  int * this_00;
  
  if (((byte)*param_2 & 0xf) == 9) {
    this_00 = (int *)((int)this + -0x180);
    pvVar3 = (undefined *)0x0;
    (*(uint *)(gen_frame + 0x4)) = 0;
    uVar2 = F_0055e2f0(this_00,4);
    if ((uVar2 != 0) &&
       ((pvVar3 = (undefined *)F_00559c20(uVar2), pvVar3 == (undefined *)0x0 ||
        (uVar2 = F_005613a0(pvVar3), uVar2 != 1)))) {
      pvVar3 = (undefined *)0x0;
    }
    F_0056c4c0(param_2,2,&(*(uint *)(gen_frame + 0x4)));
    F_00589280(pvVar3,-(uint)(((*(uint *)(gen_frame + 0x4)) & 0xf) != 0) & (*(uint *)(gen_frame + 0x8)));
    if (pvVar3 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)((int)pvVar3 + 0x70);
    }
    F_00568380(pvVar3,0x17,0,this_00,0,0);
    pvVar3 = (undefined *)F_0055e340(this_00,2);
    F_0056c4c0(param_2,0,&(*(uint *)(gen_frame + 0x4)));
    F_00584110(pvVar3,-(uint)(((*(uint *)(gen_frame + 0x4)) & 0xf) != 0) & (*(uint *)(gen_frame + 0x8)));
    pvVar3 = (undefined *)F_0055e340(this_00,3);
    F_0056c4c0(param_2,1,&(*(uint *)(gen_frame + 0x4)));
    F_00584110(pvVar3,-(uint)(((*(uint *)(gen_frame + 0x4)) & 0xf) != 0) & (*(uint *)(gen_frame + 0x8)));
    pvVar3 = (undefined *)F_0055e340(this_00,5);
    F_0056c4c0(param_2,4,&(*(uint *)(gen_frame + 0x4)));
    uVar2 = -(uint)(((*(uint *)(gen_frame + 0x4)) & 0xf) != 0) & (*(uint *)(gen_frame + 0x8));
    F_0055a300(pvVar3,(uint)(uVar2 != 0));
    if (uVar2 != 0) {
      F_0055dcb0();
      uVar2 = F_0056a410(uVar2);
      F_00584110(pvVar3,uVar2);
    }
    uVar2 = F_0055dcb0();
    pbVar1 = ((byte *)GEN_TOP((*(int *)(uVar2 + 0x14) + 0x1b0)));
    *pbVar1 = *pbVar1 & 0xfb;
    ((code *)*(gen_code32 *)(*this_00 + 0x14))(this_00,0);
    F_005a2670(&(*(uint *)(gen_frame + 0x4)));
    return 1;
  }
  return 1;
}

/* ref: Client::UI2::AddonOperationGuide::vf44 */
uint F_0082da30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82da30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined * pAVar5;
  int iVar6;
  undefined * pAVar7;
  
  ((uint *)(gen_frame + 0x4))[5] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  pAVar7 = this + 0x184;
  ((uint *)(gen_frame + 0x4))[0] = 6;
  ((uint *)(gen_frame + 0x4))[1] = 3;
  ((uint *)(gen_frame + 0x4))[2] = 2;
  ((uint *)(gen_frame + 0x4))[3] = 5;
  ((uint *)(gen_frame + 0x4))[4] = 4;
  iVar6 = 0;
  pAVar5 = pAVar7;
  do {
    uVar3 = F_0055e2f0(this,((uint *)(gen_frame + 0x4))[(int)(iVar6)]);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00559c20(uVar3);
      if ((uVar3 == 0) || (uVar4 = F_005613a0(uVar3), uVar4 != 0x13)) {
        uVar3 = 0;
      }
    }
    *(uint *)pAVar5 = uVar3;
    iVar6 = iVar6 + 1;
    pAVar5 = pAVar5 + 4;
  } while (iVar6 < 5);
  iVar6 = 5;
  do {
    piVar1 = *(int * PTR32 *)pAVar7;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0);
      bVar2 = F_0055a300((undefined *)piVar1[0x1c],0);
      uVar3 = CONCAT31(extraout_var,bVar2);
    }
    pAVar7 = pAVar7 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  F_00c47745(((uint *)(gen_frame + 0x4))[5] ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: FUN_0082db00 */
byte F_0082db00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x82db00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * this_00;
  
  this_00 = (int *)((int)this + -0x180);
  F_007e8db0(this_00);
  if (param_1 == 1) {
    if (param_3 != 0) {
      F_007e8df0(this_00,param_2,param_3);
      ((code *)*(gen_code32 *)(*this_00 + 0x14))(this_00,1);
      return 0;
    }
  }
  else {
    ((code *)*(gen_code32 *)(*this_00 + 0x18))(this_00,1,0);
  }
  return 0;
}

/* ref: FUN_0082db50 */
byte F_0082db50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82db50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  code * pcVar1;
  byte bVar2;
  ushort uVar3;
  undefined * pvVar4;
  uint uVar5;
  byte * pbVar6;
  int * piVar7;
  int iVar8;
  undefined4 uVar9;
  uint * puVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar9 = 0;
  (*(byte * PTR32 *)(gen_frame + 0x1c)) = param_2;
  if (param_2 != (byte *)0x0) {
    uVar11 = 1;
    pvVar4 = (undefined *)F_0055e320(this);
    F_0056e010(pvVar4,uVar11);
    uVar5 = F_0055e340(this,2);
    *(uint *)((int)this + 0x180) = uVar5;
    pbVar6 = param_2;
    if (uVar5 != 0) {
      bVar2 = *param_2;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      if ((bVar2 & 0xf) != 0) {
        uVar9 = *(undefined4 *)(param_2 + 4);
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),6);
      (*(undefined4 *)(gen_frame + 0x2c)) = uVar9;
      uVar3 = F_0055a020(*(undefined4 *)((int)this + 0x180));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
      (*(uint *)(gen_frame + 0x34)) = (uint)uVar3;
      uVar5 = F_0055ab00(*(undefined4 *)((int)this + 0x180));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
      (*(uint *)(gen_frame + 0x3c)) = uVar5;
      bVar2 = F_0055ab50(*(undefined4 *)((int)this + 0x180));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
      (*(uint *)(gen_frame + 0x44)) = (uint)bVar2;
      uVar5 = F_0055dcb0();
      pbVar6 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 4))))
                                 (*(int * PTR32 *)(uVar5 + 0x38),((undefined1 *)(gen_frame + 0x10)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x28)))));
      if ((*pbVar6 & 0xf) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(pbVar6 + 4);
      }
      F_00584110(*(undefined * PTR32 *)((int)this + 0x180),uVar9);
      F_005a2670(((undefined1 *)(gen_frame + 0x10)));
      F_0055aa90(*(undefined4 *)((int)this + 0x180),0);
      puVar10 = &(*(uint *)(gen_frame + 0x48));
      iVar8 = 3;
      do {
        puVar10 = puVar10 + -2;
        F_005a2670(puVar10);
        iVar8 = iVar8 + -1;
        pbVar6 = (*(byte * PTR32 *)(gen_frame + 0x1c));
      } while (-1 < iVar8);
    }
    uVar5 = F_0055e2f0(this,3);
    if (((uVar5 == 0) || (pvVar4 = (undefined *)F_00559c20(uVar5), pvVar4 == (undefined *)0x0)) ||
       (uVar5 = F_005613a0(pvVar4), uVar5 != 1)) {
      pvVar4 = (undefined *)0x0;
    }
    *(undefined * PTR32 *)((int)this + 0x184) = pvVar4;
    if (pvVar4 != (undefined *)0x0) {
      if ((pbVar6[8] & 0xf) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(pbVar6 + 0xc);
      }
      F_00589280(pvVar4,uVar9);
    }
    uVar5 = F_0055e2f0(this,4);
    if (((uVar5 == 0) || (pvVar4 = (undefined *)F_00559c20(uVar5), pvVar4 == (undefined *)0x0)) ||
       (uVar5 = F_005613a0(pvVar4), uVar5 != 1)) {
      pvVar4 = (undefined *)0x0;
    }
    *(undefined * PTR32 *)((int)this + 0x188) = pvVar4;
    if (pvVar4 != (undefined *)0x0) {
      if ((pbVar6[0x10] & 0xf) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(pbVar6 + 0x14);
      }
      F_00589280(pvVar4,uVar9);
    }
    uVar5 = 1;
    if ((pbVar6[0x18] & 0xf) != 0) {
      uVar5 = *(uint *)(pbVar6 + 0x1c);
    }
    *(uint *)((int)this + 0x18c) = uVar5;
    if (3 < param_1) {
      *(uint *)((int)this + 0x18c) = uVar5 & 0xfeffffff;
      if ((uVar5 & 0x10000) != 0) {
        *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 4;
        *(uint *)((int)this + 0x18c) = uVar5 & 0xfefeffff;
      }
      puVar10 = (uint *)((int)this + 0x18c);
      *puVar10 = *puVar10 & 0xfffffeef;
      if (*puVar10 == 0) {
        piVar7 = *(int * PTR32 *)((int)this + 0x184);
      }
      else {
        piVar7 = *(int * PTR32 *)((int)this + 0x188);
      }
      uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x3c))(piVar7);
      *(undefined1 *)((int)this + 0x13e) = 1;
      *(uint *)((int)this + 0xa4) = uVar5;
    }
    uVar5 = 0;
    if (*(undefined * PTR32 *)((int)this + 0x180) != (undefined *)0x0) {
      F_00568010(*(undefined * PTR32 *)((int)this + 0x180),((undefined1 *)(gen_frame + 0x8)));
      F_00577d20(*(undefined * PTR32 *)((int)this + 0x180),&(*(byte * PTR32 *)(gen_frame + 0x1c)),((short *)(gen_frame + 0x24)),0,0,REFG(undefined4, 0x108cc50),0);
      uVar5 = (uint)(ushort)(((*(short *)(gen_frame + 0x14)) - (*(short *)(gen_frame + 0xc))) - ((short *)(gen_frame + 0x24))[0]);
    }
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x48);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x20)) = 0;
    (*pcVar1)(this,&(*(undefined4 *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x20)),0);
    ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this,(*(undefined4 *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x20)) - uVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Client::UI2::AddonSelectOk::vf46 */
byte F_0082ddf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82ddf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  code * pcVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  byte * pbVar5;
  undefined * pvVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar9 = 0;
  (*(byte * PTR32 *)(gen_frame + 0x1c)) = param_2;
  if (param_2 != (byte *)0x0) {
    if ((param_2[0x18] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_2 + 0x1c);
    }
    *(uint *)(this + 0x188) = uVar4;
    if ((uVar4 & 2) != 0) {
      *(uint *)(this + 0x120) = *(uint *)(this + 0x120) | 4;
      *(uint *)(this + 0x188) = uVar4 & 0xfffffffd;
    }
    uVar4 = F_0055e340(this,2);
    *(uint *)(this + 0x180) = uVar4;
    pbVar5 = param_2;
    if (uVar4 != 0) {
      F_0055aa90(uVar4,(uint)(((byte)this[0x188] & 4) != 0));
      bVar2 = *param_2;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      if ((bVar2 & 0xf) != 0) {
        uVar9 = *(undefined4 *)(param_2 + 4);
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),6);
      (*(undefined4 *)(gen_frame + 0x2c)) = uVar9;
      uVar3 = F_0055a020(*(undefined4 *)(this + 0x180));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
      (*(uint *)(gen_frame + 0x34)) = (uint)uVar3;
      uVar4 = F_0055ab00(*(undefined4 *)(this + 0x180));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
      (*(uint *)(gen_frame + 0x3c)) = uVar4;
      bVar2 = F_0055ab50(*(undefined4 *)(this + 0x180));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
      (*(uint *)(gen_frame + 0x44)) = (uint)bVar2;
      uVar4 = F_0055dcb0();
      pbVar5 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 4))))
                                 (*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x10)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x28)))));
      if ((*pbVar5 & 0xf) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(pbVar5 + 4);
      }
      F_00584110(*(undefined * PTR32 *)(this + 0x180),uVar9);
      F_005a2670(((undefined1 *)(gen_frame + 0x10)));
      this_00 = &(*(uint *)(gen_frame + 0x48));
      iVar8 = 3;
      do {
        this_00 = this_00 + -2;
        F_005a2670(this_00);
        iVar8 = iVar8 + -1;
        pbVar5 = (*(byte * PTR32 *)(gen_frame + 0x1c));
      } while (-1 < iVar8);
    }
    uVar4 = F_0055e2f0(this,3);
    if (uVar4 == 0) {
      pvVar6 = (undefined *)0x0;
    }
    else {
      pvVar6 = (undefined *)F_00559c20(uVar4);
      if ((pvVar6 == (undefined *)0x0) || (uVar4 = F_005613a0(pvVar6), uVar4 != 1)) {
        pvVar6 = (undefined *)0x0;
      }
    }
    uVar4 = 0;
    *(undefined * PTR32 *)(this + 0x184) = pvVar6;
    if (pvVar6 != (undefined *)0x0) {
      if ((pbVar5[8] & 0xf) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(pbVar5 + 0xc);
      }
      F_00589280(pvVar6,uVar9);
    }
    if ((pbVar5[0x10] & 0xf) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(pbVar5 + 0x14);
    }
    uVar7 = (uint)(iVar8 == 0);
    pvVar6 = (undefined *)F_0055e320(this);
    F_0056e010(pvVar6,uVar7);
    this[0xf9] = (undefined1)
                 ((byte)this[0xf9] ^
                 ((((byte)*(undefined4 *)(this + 0x188) & 1) == 1) * '\x04' ^ (byte)this[0xf9]) & 4)
    ;
    if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
      F_00568010(*(undefined * PTR32 *)(this + 0x180),((undefined1 *)(gen_frame + 0x8)));
      F_00577d20(*(undefined * PTR32 *)(this + 0x180),&(*(byte * PTR32 *)(gen_frame + 0x1c)),((short *)(gen_frame + 0x24)),0,0,REFG(undefined4, 0x108cc50),0);
      uVar4 = (uint)(ushort)(((*(short *)(gen_frame + 0x14)) - (*(short *)(gen_frame + 0xc))) - ((short *)(gen_frame + 0x24))[0]);
    }
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x48);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x20)) = 0;
    (*pcVar1)(this,&(*(undefined4 *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x20)),0);
    ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this,(*(undefined4 *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x20)) - uVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Client::UI2::AddonSelectYesNoCount::vf46 */
byte F_0082e050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82e050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  ushort uVar2;
  undefined * pvVar3;
  uint uVar4;
  byte * pbVar5;
  uint uVar6;
  byte * pbVar7;
  int * piVar8;
  byte * pbVar9;
  short sVar10;
  int iVar11;
  short sVar12;
  uint * this_00;
  bool bVar13;
  float10 fVar14;
  float10 fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(byte * PTR32 *)(gen_frame + 0x20)) = param_2;
  if (param_2 != (byte *)0x0) {
    uVar16 = 1;
    pvVar3 = (undefined *)F_0055e320(this);
    F_0056e010(pvVar3,uVar16);
    uVar4 = F_0055e340(this,3);
    *(uint *)(this + 0x180) = uVar4;
    if (uVar4 != 0) {
      bVar1 = *(*(byte * PTR32 *)(gen_frame + 0x20));
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      if ((bVar1 & 0xf) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x20)) + 4);
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),6);
      (*(undefined4 *)(gen_frame + 0x2c)) = uVar16;
      uVar2 = F_0055a020(*(undefined4 *)(this + 0x180));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
      (*(uint *)(gen_frame + 0x34)) = (uint)uVar2;
      uVar4 = F_0055ab00(*(undefined4 *)(this + 0x180));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
      (*(uint *)(gen_frame + 0x3c)) = uVar4;
      bVar1 = F_0055ab50(*(undefined4 *)(this + 0x180));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
      (*(uint *)(gen_frame + 0x44)) = (uint)bVar1;
      uVar4 = F_0055dcb0();
      pbVar5 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 4))))
                                 (*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x10)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x28)))));
      if ((*pbVar5 & 0xf) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined4 *)(pbVar5 + 4);
      }
      F_00584110(*(undefined * PTR32 *)(this + 0x180),uVar16);
      F_005a2670(((undefined1 *)(gen_frame + 0x10)));
      F_0055aa90(*(undefined4 *)(this + 0x180),0);
      this_00 = &(*(uint *)(gen_frame + 0x48));
      iVar11 = 3;
      do {
        this_00 = this_00 + -2;
        F_005a2670(this_00);
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
    uVar4 = F_0055e2f0(this,5);
    if (((uVar4 == 0) || (pvVar3 = (undefined *)F_00559c20(uVar4), pvVar3 == (undefined *)0x0)) ||
       (uVar4 = F_005613a0(pvVar3), uVar4 != 1)) {
      pvVar3 = (undefined *)0x0;
    }
    pbVar5 = (*(byte * PTR32 *)(gen_frame + 0x20));
    *(undefined * PTR32 *)(this + 0x184) = pvVar3;
    if (pvVar3 != (undefined *)0x0) {
      if (((*(byte * PTR32 *)(gen_frame + 0x20))[8] & 0xf) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x20)) + 0xc);
      }
      F_00589280(pvVar3,uVar16);
    }
    uVar4 = F_0055e2f0(this,6);
    if (((uVar4 == 0) || (pvVar3 = (undefined *)F_00559c20(uVar4), pvVar3 == (undefined *)0x0)) ||
       (uVar4 = F_005613a0(pvVar3), uVar4 != 1)) {
      pvVar3 = (undefined *)0x0;
    }
    *(undefined * PTR32 *)(this + 0x188) = pvVar3;
    if (pvVar3 != (undefined *)0x0) {
      if ((pbVar5[0x10] & 0xf) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined4 *)(pbVar5 + 0x14);
      }
      F_00589280(pvVar3,uVar16);
    }
    if ((pbVar5[0x18] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(pbVar5 + 0x1c);
    }
    *(uint *)(this + 0x18c) = uVar4;
    if (3 < param_1) {
      if ((uVar4 & 0x1000000) != 0) {
        this[0x19e] = (undefined1)0x1;
      }
      *(uint *)(this + 0x18c) = uVar4 & 0xfeffffff;
      if ((uVar4 & 0x10000) != 0) {
        *(uint *)(this + 0x120) = *(uint *)(this + 0x120) | 4;
      }
      this[0x19d] = (undefined1)(~(byte)(uVar4 >> 8) & 1);
      this[0x19f] = (undefined1)((byte)uVar4 >> 4 & 1);
      *(uint *)(this + 0x18c) = uVar4 & 0xfefefeef;
      if ((uVar4 & 0xfefefeef) == 0) {
        piVar8 = *(int * PTR32 *)(this + 0x184);
      }
      else {
        piVar8 = *(int * PTR32 *)(this + 0x188);
      }
      uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0x3c))(piVar8);
      this[0x13e] = (undefined1)0x1;
      *(uint *)(this + 0xa4) = uVar4;
    }
    (*(char *)(gen_frame + 0x27)) = '\0';
    uVar4 = F_0055e2f0(this,4);
    if (((uVar4 == 0) || (uVar4 = F_00559c20(uVar4), uVar4 == 0)) ||
       (uVar6 = F_005613a0(uVar4), uVar6 != 3)) {
      uVar4 = 0;
    }
    *(uint *)(this + 400) = uVar4;
    if (uVar4 != 0) {
      if ((pbVar5[0x20] & 0xf) == 0) {
        pbVar7 = (byte *)0x0;
      }
      else {
        pbVar7 = *(byte * PTR32 *)(pbVar5 + 0x24);
      }
      pbVar9 = &REFG(undefined1, 0x10be667);
      do {
        bVar1 = *pbVar7;
        bVar13 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_0082e310: ;
          iVar11 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_0082e315;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar13 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_0082e310;
        pbVar7 = pbVar7 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar11 = 0;
LAB_0082e315: ;
      if (iVar11 == 0) {
        F_0055a300(*(undefined * PTR32 *)(uVar4 + 0x70),0);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x28))))(*(int * PTR32 *)(this + 0x184),1);
      }
      else {
        F_0055a300(*(undefined * PTR32 *)(uVar4 + 0x70),1);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x28))))
                  (*(int * PTR32 *)(this + 0x184),(uint)(this[0x19e] != (undefined1)0x0));
        (*(char *)(gen_frame + 0x27)) = '\x01';
      }
      if ((pbVar5[0x20] & 0xf) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined4 *)(pbVar5 + 0x24);
      }
      F_00589280(*(undefined * PTR32 *)(this + 400),uVar16);
      F_0059dde0(*(undefined * PTR32 *)(this + 400),0);
    }
    if ((pbVar5[0x30] & 0xf) == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined4 *)(pbVar5 + 0x34);
    }
    *(undefined4 *)(this + 0x198) = uVar16;
    pvVar3 = (undefined *)F_0055e340(this,2);
    *(undefined * PTR32 *)(this + 0x194) = pvVar3;
    if (pvVar3 != (undefined *)0x0) {
      if ((*(uint *)((*(byte * PTR32 *)(gen_frame + 0x20)) + 0x28) & 0xf) == 0) {
        pbVar5 = (byte *)0x0;
      }
      else {
        pbVar5 = *(byte * PTR32 *)((*(byte * PTR32 *)(gen_frame + 0x20)) + 0x2c);
      }
      pbVar7 = &REFG(undefined1, 0x10be679);
      do {
        bVar1 = *pbVar5;
        bVar13 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_0082e3e3: ;
          iVar11 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_0082e3e8;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar13 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0082e3e3;
        pbVar5 = pbVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar11 = 0;
LAB_0082e3e8: ;
      if (iVar11 == 0) {
        uVar16 = *(undefined4 *)(this + 0x198);
        uVar17 = uVar16;
        pvVar3 = (undefined *)F_0055dcb0();
        uVar4 = F_005b03e0(pvVar3,uVar16,uVar17);
        F_00584110(*(undefined * PTR32 *)(this + 0x194),uVar4);
        F_0055a300(*(undefined * PTR32 *)(this + 0x194),0);
      }
      else {
        if ((*(uint *)((*(byte * PTR32 *)(gen_frame + 0x20)) + 0x28) & 0xf) == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x20)) + 0x2c);
        }
        F_00584110(pvVar3,uVar16);
      }
    }
    pvVar3 = *(undefined * PTR32 *)(this + 0x180);
    sVar12 = 0;
    sVar10 = 0;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    if (pvVar3 != (undefined *)0x0) {
      F_00568010(pvVar3,&(*(undefined4 *)(gen_frame + 0x38)));
      fVar14 = F_00559d80(*(undefined4 *)(this + 0x180));
      fVar15 = F_00559d80(*(undefined4 *)(this + 0x180));
      (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x44)) - (*(uint *)(gen_frame + 0x3c));
      sVar10 = (short)(int)(fVar15 + (float10)(int)((*(uint *)(gen_frame + 0x44)) - (*(uint *)(gen_frame + 0x3c))));
      F_00577d20(*(undefined * PTR32 *)(this + 0x180),&(*(byte * PTR32 *)(gen_frame + 0x20)),&(*(uint *)(gen_frame + 0x1c)),0,0,REFG(undefined4, 0x108cc50),0);
      sVar12 = (short)(int)fVar14 + (short)(*(uint *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x1c)) = (uint)(ushort)(((short)(*(uint *)(gen_frame + 0x44)) - (short)(*(uint *)(gen_frame + 0x3c))) - (short)(*(uint *)(gen_frame + 0x1c)));
    }
    iVar11 = *(int *)(this + 400);
    (*(byte * PTR32 *)(gen_frame + 0x20)) = (byte *)0x0;
    if (iVar11 != 0) {
      uVar2 = F_0055a030(*(undefined4 *)(iVar11 + 0x70));
      (*(uint *)(gen_frame + 0x14)) = (uint)uVar2;
      uVar16 = 0;
      if (*(int *)(this + 400) != 0) {
        uVar16 = *((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
      }
      fVar14 = F_00559d80(uVar16);
      uVar16 = 0;
      if (*(int *)(this + 400) != 0) {
        uVar16 = *((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
      }
      F_00559f00(uVar16,(float)(int)(short)(((short)(int)fVar14 - sVar10) + sVar12));
      if ((*(char *)(gen_frame + 0x27)) == '\0') {
        (*(byte * PTR32 *)(gen_frame + 0x20)) = (byte *)((*(uint *)(gen_frame + 0x14)) & 0xffff);
      }
    }
    uVar2 = 0;
    if ((*(int *)(this + 0x194) != 0) && (*(int *)(this + 0x198) == 0)) {
      uVar2 = F_0055a030(*(int *)(this + 0x194));
      F_0055a300(*(undefined * PTR32 *)(this + 0x194),0);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,&(*(undefined4 *)(gen_frame + 0xc)),((short *)(gen_frame + 0x18)),0);
    iVar11 = *(int *)this;
    ((code *)*(gen_code32 *)(iVar11 + 0x4c))
              (this,(*(undefined4 *)(gen_frame + 0xc)),
               (uint)(ushort)(((((short *)(gen_frame + 0x18))[0] - uVar2) - (short)(*(byte * PTR32 *)(gen_frame + 0x20))) - (short)(*(uint *)(gen_frame + 0x1c))));
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: FUN_0082e5a0 */
uint F_0082e5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x82e5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d53c4));
  uVar1 = F_0055dcb0();
  *(uint *)((int)this + 0x184) = uVar1;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined2 *)((int)this + 0x1b4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[5])REFP(0x10d6864));
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8200;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined2 *)((int)this + 0x1c0) = 0;
  return (uint)this;
}

/* ref: FUN_0082e650 */
uint F_0082e650(unsigned int gen_a0)
{
  GEN_ENTER(0x82e650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005903f0(this);
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d54c4));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined2 *)((int)this + 0x194) = 0;
  uVar1 = F_0055dcb0();
  *(uint *)((int)this + 0x19c) = uVar1;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined2 *)((int)this + 0x1cc) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) = (*(undefined * PTR32 (*)[5])REFP(0x10d687c));
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined1 *)((int)this + 0x1d0) = 1;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: FUN_0082e720 */
byte F_0082e720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82e720u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pvVar4;
  int * in_ecx;
  undefined4 * puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  uint * puVar10;
  undefined4 uVar11;
  
  if ((*(int *)&gen_args[2]) == 0) {
    return 1;
  }
  if ((*(byte *)((*(int *)&gen_args[2]) + 0x40) & 0xf) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)((*(int *)&gen_args[2]) + 0x44);
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 400))) = 0;
  (*(int *)(gen_frame + 0x1c)) = iVar8;
  if (((byte)*(undefined4 *)((*(int *)&gen_args[2]) + 0x28) & 0xf) == 4) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 400))) = *(undefined4 *)((*(int *)&gen_args[2]) + 0x2c);
  }
  if (((byte)*(undefined4 *)((*(int *)&gen_args[2]) + 0x28) & 0xf) == 3) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 400))) = *(undefined4 *)((*(int *)&gen_args[2]) + 0x2c);
  }
  if (iVar8 == 2) {
    F_007879d0((*(undefined * PTR32 *)&gen_args[0]));
    return 1;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) != (undefined *)0x0) {
    F_005b1d70(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),5);
    if ((*(byte *)((*(int *)&gen_args[2]) + 0x20) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)((*(int *)&gen_args[2]) + 0x24);
    }
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x180))) = uVar3;
    if (uVar3 < 0x19) {
      uVar3 = uVar3 & 0xffff;
    }
    else {
      uVar3 = 0x19;
    }
    F_0059ead0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),uVar3,0,1);
    pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c)));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))) = 3;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x787910));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_00574320(pvVar4,&(*(undefined * PTR32 *)(gen_frame + 0x8)),((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),1,0);
    F_0056d690(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),
                 (uint)(((byte)*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) & 1) == 1),0);
    if ((*(byte *)((*(int *)&gen_args[2]) + 0x48) & 0xf) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)((*(int *)&gen_args[2]) + 0x4c);
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) + 0xe4))) = uVar11;
    if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) & 0x40) != 0) {
      uVar2 = F_0056d300(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),0);
      iVar8 = 0;
      if (uVar2 != 0) {
        do {
          uVar11 = 2;
          pvVar4 = (undefined *)F_0056d250(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),0,iVar8);
          pvVar4 = (undefined *)F_00561490(pvVar4,uVar11);
          F_0055a300(pvVar4,0);
          iVar8 = iVar8 + 1;
        } while ((ushort)iVar8 < uVar2);
      }
    }
    uVar3 = F_00561490(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),2);
    if (((uVar3 != 0) && (in_ecx = (int *)F_00559c20(uVar3), in_ecx != (int *)0x0)) &&
       (uVar3 = F_005613a0(in_ecx), uVar3 == 0xd)) {
      ((code *)*(gen_code32 *)(*in_ecx + 0x28))(in_ecx,0);
      F_0055a300((undefined *)in_ecx[0x1c],0);
    }
    puVar10 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) + 100)));
    *puVar10 = *puVar10 & 0xfffdffff;
    if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf9))) & 1) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) + 0x70))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))));
    }
  }
  iVar8 = 0;
  uVar11 = 0;
  uVar3 = F_00404270();
  lVar1 = (ulonglong)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x180))) * 0x14;
  uVar3 = F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar3,uVar11);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) = uVar3;
  (*(uint *)(gen_frame + 0x24)) = 0;
  if (uVar3 != 0) {
    (*(uint *)(gen_frame + 0x24)) = 0;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x180))) != 0) {
      puVar5 = (undefined4 *)((*(int *)&gen_args[2]) + 100);
      uVar3 = 0;
      do {
        uVar6 = uVar3;
        puVar9 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) + iVar8)));
        if ((*(byte *)(puVar5 + -5) & 0xf) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = puVar5[-4];
        }
        *puVar9 = uVar11;
        if ((*(byte *)(puVar5 + -3) & 0xf) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = puVar5[-2];
        }
        puVar9[1] = uVar11;
        if ((*(byte *)(puVar5 + -1) & 0xf) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *puVar5;
        }
        puVar9[2] = uVar11;
        if ((*(byte *)(puVar5 + 1) & 0xf) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = puVar5[2];
        }
        puVar9[3] = uVar11;
        if ((*(byte *)(puVar5 + 3) & 0xf) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = puVar5[4];
        }
        uVar3 = uVar6 + 1;
        puVar9[4] = uVar11;
        puVar5 = puVar5 + 10;
        iVar8 = iVar8 + 0x14;
      } while (uVar3 < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x180))));
      (*(uint *)(gen_frame + 0x24)) = uVar3;
      if (uVar3 != 0) {
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))) = uVar6 / 0x19;
        goto LAB_0082e9c9;
      }
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))) = 0;
  }
LAB_0082e9c9: ;
  uVar3 = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  puVar10 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4)));
  do {
    (*(uint *)(gen_frame + 0x20)) = uVar3 + 1;
    uVar6 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),uVar3 + 3);
    if (((uVar6 == 0) || (uVar6 = F_00559c20(uVar6), uVar6 == 0)) ||
       (uVar7 = F_005613a0(uVar6), uVar7 != 4)) {
      uVar6 = 0;
    }
    *puVar10 = uVar6;
    if (uVar6 != 0) {
      uVar6 = F_005608e0((*(uint *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x18)),4);
      F_00589280((undefined *)*puVar10,uVar6);
      if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))) < uVar3) {
        if (*puVar10 == 0) {
          pvVar4 = (undefined *)0x0;
        }
        else {
          pvVar4 = *(undefined * PTR32 *)(*puVar10 + 0x70);
        }
        F_0055a300(pvVar4,0);
        ((code *)*(gen_code32 *)(*(int *)*puVar10 + 0x28))((int *)*puVar10,0);
      }
    }
    puVar10 = puVar10 + 1;
    uVar3 = (*(uint *)(gen_frame + 0x20));
  } while ((*(uint *)(gen_frame + 0x20)) < 10);
  pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4)));
  if (pvVar4 != (undefined *)0x0) {
    if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x180))) < 0x1a) {
      F_0055a300(*(undefined * PTR32 *)((int)pvVar4 + 0x70),0);
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))),0);
    }
    else {
      F_0059dde0(pvVar4,1);
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) + 0x70)));
    }
    F_00559d80(uVar11);
    uVar3 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),2);
    uVar2 = F_00559d90(uVar3);
    (*(uint *)(gen_frame + 0x28)) = (uint)uVar2;
  }
  (*(undefined2 *)((char *)&(*(int *)&gen_args[2]) + 0)) = 0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))) == 0) {
    (*(undefined2 *)((char *)&(*(int *)&gen_args[2]) + 0)) = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x198))) - (short)(*(uint *)(gen_frame + 0x28));
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) != 0) {
      F_00559f00(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) + 0x70))),(float)(int)(short)(*(uint *)(gen_frame + 0x28)));
      uVar11 = 0;
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) != 0) {
        uVar11 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) + 0x70)));
      }
      uVar2 = F_0055a020(uVar11);
      uVar3 = ((*(uint *)(gen_frame + 0x24)) + 4) / 5;
      F_005b2060(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),uVar3);
      (*(undefined2 *)((char *)&(*(int *)&gen_args[2]) + 0)) = (short)(*(int *)&gen_args[2]) + (uVar2 / 5) * (5 - (short)uVar3);
    }
  }
  if (((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) & 4) != 0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) != 0)) {
    uVar2 = F_0055a030(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))));
    (*(undefined2 *)((char *)&(*(int *)&gen_args[2]) + 0)) = (short)(*(int *)&gen_args[2]) + uVar2;
    F_0055a300(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))),0);
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))))
            ((*(undefined * PTR32 *)&gen_args[0]),(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x194))),
             (uint)(ushort)(*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x196))) - (short)(*(int *)&gen_args[2])));
  F_0056b300((*(undefined * PTR32 *)&gen_args[0]),0);
  F_007ea1c0((*(undefined * PTR32 *)&gen_args[0]),(*(int *)(gen_frame + 0x1c)));
  uVar3 = 0;
  if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))) != 0) && (-1 < (int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 400))))) {
    uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 400))) / 0x19;
  }
  F_00908c60((*(undefined * PTR32 *)&gen_args[0]),uVar3);
  if ((uVar3 != 0) && (uVar3 <= *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))))) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))),0);
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar3 * 4 + 0x1a4))),1);
  }
  return 1;
}

/* ref: FUN_0082ec20 */
uint F_0082ec20(unsigned int gen_a0)
{
  GEN_ENTER(0x82ec20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005903f0(this);
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d55c4));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined2 *)((int)this + 0x194) = 0;
  uVar1 = F_0055dcb0();
  *(uint *)((int)this + 0x19c) = uVar1;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined2 *)((int)this + 0x1cc) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) = (*(undefined * PTR32 (*)[5])REFP(0x10d6894))
  ;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined1 *)((int)this + 0x1d0) = 1;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonInputNumeric::vf46 */
byte F_0082ecf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82ecf0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  byte * pbVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[2]);
  if ((*(byte * PTR32 *)&gen_args[2]) != (byte *)0x0) {
    pvVar3 = (undefined *)F_0055e340((*(undefined * PTR32 *)&gen_args[0]),2);
    *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))) = pvVar3;
    if (pvVar3 != (undefined *)0x0) {
      if ((pbVar2[0x30] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar2 + 0x34);
      }
      F_00584110(pvVar3,uVar5);
    }
    uVar4 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),4);
    if (((uVar4 == 0) || (pvVar3 = (undefined *)F_00559c20(uVar4), pvVar3 == (undefined *)0x0)) ||
       (uVar4 = F_005613a0(pvVar3), uVar4 != 1)) {
      pvVar3 = (undefined *)0x0;
    }
    *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) = pvVar3;
    if (pvVar3 != (undefined *)0x0) {
      if ((*pbVar2 & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar2 + 4);
      }
      F_00589280(pvVar3,uVar5);
    }
    uVar4 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),5);
    if (((uVar4 == 0) || (pvVar3 = (undefined *)F_00559c20(uVar4), pvVar3 == (undefined *)0x0)) ||
       (uVar4 = F_005613a0(pvVar3), uVar4 != 1)) {
      pvVar3 = (undefined *)0x0;
    }
    *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = pvVar3;
    if (pvVar3 != (undefined *)0x0) {
      if ((pbVar2[8] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar2 + 0xc);
      }
      F_00589280(pvVar3,uVar5);
    }
    uVar4 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),3);
    if (((uVar4 == 0) || (pvVar3 = (undefined *)F_00559c20(uVar4), pvVar3 == (undefined *)0x0)) ||
       (uVar4 = F_005613a0(pvVar3), uVar4 != 8)) {
      pvVar3 = (undefined *)0x0;
    }
    *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198))) = pvVar3;
    if (pvVar3 != (undefined *)0x0) {
      if ((pbVar2[0x10] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar2 + 0x14);
      }
      F_0059d040(pvVar3,uVar5,1,1);
      if ((pbVar2[0x18] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar2 + 0x1c);
      }
      F_0059d070(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198))),uVar5,1,1);
      if ((pbVar2[0x20] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar2 + 0x24);
      }
      F_0059cf90(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198))),uVar5,1,1);
      if ((pbVar2[0x28] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar2 + 0x2c);
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198))) + 0x194))) = uVar5;
      F_00563b00(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198))),1);
    }
    uVar4 = 0;
    if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))) != (undefined *)0x0) {
      F_00568010(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))),((byte *)(gen_frame + 0x0)));
      F_00577d20(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))),((undefined1 *)(gen_frame + 0x18)),&(*(byte * PTR32 *)&gen_args[2]),0,0,REFG(undefined4, 0x108cc50),0);
      uVar4 = (uint)(ushort)(((*(undefined2 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) - (*(undefined2 *)((char *)((byte *)(gen_frame + 0x0)) + 4))) - (short)(*(byte * PTR32 *)&gen_args[2]));
    }
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(int *)(gen_frame + 0x14)) = 0;
    (*pcVar1)((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x10)),&(*(int *)(gen_frame + 0x14)),0);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x10)),(*(int *)(gen_frame + 0x14)) + uVar4);
  }
  return 1;
}

/* ref: Client::UI2::AddonInputString::vf44 */
uint F_0082eee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82eee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_0055e2f0(this,0x14);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 1)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x194) = uVar2;
  uVar2 = F_0055e2f0(this,0x15);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 1)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x198) = uVar2;
  uVar2 = F_0055e2f0(this,0x16);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 1)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x19c) = uVar2;
  uVar2 = F_0055e2f0(this,2);
  *(uint *)(this + 0x1a0) = uVar2;
  uVar2 = F_0055e340(this,3);
  *(uint *)(this + 0x1a4) = uVar2;
  uVar2 = F_0055e340(this,4);
  *(uint *)(this + 0x1a8) = uVar2;
  uVar2 = F_0055e340(this,5);
  *(uint *)(this + 0x1ac) = uVar2;
  uVar2 = F_0055e340(this,6);
  *(uint *)(this + 0x1b0) = uVar2;
  uVar2 = F_0055e2f0(this,7);
  *(uint *)(this + 0x1b4) = uVar2;
  uVar2 = F_0055e340(this,8);
  *(uint *)(this + 0x1b8) = uVar2;
  uVar2 = F_0055e2f0(this,9);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 7)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x1bc) = uVar2;
  uVar2 = F_0055e2f0(this,10);
  *(uint *)(this + 0x1c0) = uVar2;
  uVar2 = F_0055e340(this,0xb);
  *(uint *)(this + 0x1c4) = uVar2;
  uVar2 = F_0055e2f0(this,0xc);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 7)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x1c8) = uVar2;
  uVar2 = F_0055e340(this,0xd);
  *(uint *)(this + 0x1cc) = uVar2;
  uVar2 = F_0055e2f0(this,0xe);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 7)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x1d0) = uVar2;
  uVar2 = F_0055e2f0(this,0xf);
  *(uint *)(this + 0x1d4) = uVar2;
  uVar2 = F_0055e340(this,0x10);
  *(uint *)(this + 0x1d8) = uVar2;
  uVar2 = F_0055e2f0(this,0x11);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 7)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x1dc) = uVar2;
  uVar2 = F_0055e340(this,0x12);
  *(uint *)(this + 0x1e0) = uVar2;
  uVar2 = F_0055e2f0(this,0x13);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 7)) {
    uVar2 = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x19c);
  *(uint *)(this + 0x1e4) = uVar2;
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
  }
  *(uint *)(this + 0xa8) = uVar2;
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  if (*(int *)(this + 0x194) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x194) + 0x70))),0x17,0x65,this,0,0);
  }
  if (*(int *)(this + 0x198) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70))),0x17,0,this,0,0);
  }
  if (*(int *)(this + 0x19c) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70))),0x17,1,this,0,0);
  }
  if ((*(int *)(this + 0x18c) != 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x98))), this_00 != (undefined *)0x0)) {
    F_00568380(this_00,0x45,0,this,0,0);
  }
  uVar2 = *(uint *)(this + 400);
  if ((uVar2 != 0) && (*(undefined * PTR32 *)(uVar2 + 0x98) != (undefined *)0x0)) {
    uVar2 = F_00568380(*(undefined * PTR32 *)(uVar2 + 0x98),0x45,1,this,0,0);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonInputString::vf46 */
byte F_0082f240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82f240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  code * pcVar2;
  bool bVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined * pvVar8;
  byte * pbVar9;
  int iVar10;
  byte * pbVar11;
  int in_ecx;
  bool bVar12;
  
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if ((*param_2 & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(param_2 + 4);
  }
  *(undefined4 *)(this + 0x180) = uVar6;
  if ((param_2[8] & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(param_2 + 0xc);
  }
  *(undefined4 *)(this + 0x184) = uVar6;
  if ((param_2[0xa0] & 0xf) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(param_2 + 0xa4);
  }
  this[0x188] = (undefined1)(iVar7 != 0);
  pvVar8 = (undefined *)F_0055e320(this);
  if (pvVar8 != (undefined *)0x0) {
    F_0056e010(pvVar8,1);
  }
  bVar3 = true;
  if (*(undefined * PTR32 *)(this + 0x194) != (undefined *)0x0) {
    if ((param_2[0x48] & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 0x4c);
    }
    F_00589280(*(undefined * PTR32 *)(this + 0x194),uVar6);
    pbVar11 = &REFG(undefined1, 0x10be6c3);
    pbVar9 = (byte *)F_00561db0(*(undefined4 *)(this + 0x194));
    do {
      bVar4 = *pbVar9;
      bVar12 = bVar4 < *pbVar11;
      if (bVar4 != *pbVar11) {
LAB_0082f300: ;
        iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_0082f305;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar9[1];
      bVar12 = bVar4 < pbVar11[1];
      if (bVar4 != pbVar11[1]) goto LAB_0082f300;
      pbVar9 = pbVar9 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar4 != 0);
    iVar7 = 0;
LAB_0082f305: ;
    if (iVar7 == 0) {
      bVar3 = false;
    }
  }
  if (*(undefined * PTR32 *)(this + 0x198) != (undefined *)0x0) {
    if ((param_2[0x38] & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 0x3c);
    }
    F_00589280(*(undefined * PTR32 *)(this + 0x198),uVar6);
  }
  if (*(undefined * PTR32 *)(this + 0x19c) != (undefined *)0x0) {
    if ((param_2[0x40] & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 0x44);
    }
    F_00589280(*(undefined * PTR32 *)(this + 0x19c),uVar6);
  }
  if (*(int *)(this + 0x1a4) != 0) {
    if (*(int *)(this + 0x184) == 1) {
      F_0055aa30(*(int *)(this + 0x1a4),0xf04e4aff);
    }
    if ((param_2[0x18] & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 0x1c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1a4),uVar6);
  }
  if (*(undefined * PTR32 *)(this + 0x1a8) != (undefined *)0x0) {
    if ((param_2[0x20] & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 0x24);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar6);
  }
  if (*(undefined * PTR32 *)(this + 0x1ac) != (undefined *)0x0) {
    if ((param_2[0x28] & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 0x2c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1ac),uVar6);
  }
  if (*(undefined * PTR32 *)(this + 0x1b0) != (undefined *)0x0) {
    if ((param_2[0x30] & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 0x34);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1b0),uVar6);
  }
  in_ecx = 0;
  iVar7 = 0;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x180))) {
  case 0: ;
    if (*(int *)(this + 0x1b4) != 0) {
      in_ecx = *(int *)(this + 0x1b4);
    }
    if (*(int *)(this + 0x1b8) != 0) {
      iVar7 = *(int *)(this + 0x1b8);
    }
    if (*(int *)(this + 0x1bc) != 0) {
      *(int *)(this + 0x18c) = *(int *)(this + 0x1bc);
    }
    F_007eab90(this,param_2,iVar7,*(undefined4 *)(this + 0x18c),0,0);
    uVar6 = 0x13;
    break;
  case 1: ;
    if (*(int *)(this + 0x1c0) != 0) {
      in_ecx = *(int *)(this + 0x1c0);
    }
    if (*(int *)(this + 0x1c4) != 0) {
      iVar7 = *(int *)(this + 0x1c4);
    }
    if (*(int *)(this + 0x1c8) != 0) {
      *(int *)(this + 0x18c) = *(int *)(this + 0x1c8);
    }
    iVar10 = 0;
    if (*(int *)(this + 0x1cc) != 0) {
      iVar10 = *(int *)(this + 0x1cc);
    }
    if (*(int *)(this + 0x1d0) != 0) {
      *(int *)(this + 400) = *(int *)(this + 0x1d0);
    }
    F_007eab90(this,param_2,iVar7,*(undefined4 *)(this + 0x18c),iVar10,*(undefined4 *)(this + 400)
                );
    uVar6 = 0x65;
    break;
  case 2: ;
    if (*(int *)(this + 0x1d4) != 0) {
      in_ecx = *(int *)(this + 0x1d4);
    }
    if (*(int *)(this + 0x1d8) != 0) {
      iVar7 = *(int *)(this + 0x1d8);
    }
    if (*(int *)(this + 0x1dc) != 0) {
      *(int *)(this + 0x18c) = *(int *)(this + 0x1dc);
    }
    iVar10 = 0;
    if (*(int *)(this + 0x1e0) != 0) {
      iVar10 = *(int *)(this + 0x1e0);
    }
    if (*(int *)(this + 0x1e4) != 0) {
      *(int *)(this + 400) = *(int *)(this + 0x1e4);
    }
    F_007eab90(this,param_2,iVar7,*(undefined4 *)(this + 0x18c),iVar10,*(undefined4 *)(this + 400)
                );
    uVar6 = 0x67;
    break;
  case 3: ;
    if (*(int *)(this + 0x1b4) != 0) {
      in_ecx = *(int *)(this + 0x1b4);
    }
    if (*(int *)(this + 0x1b8) != 0) {
      iVar7 = *(int *)(this + 0x1b8);
    }
    if (*(int *)(this + 0x1bc) != 0) {
      *(int *)(this + 0x18c) = *(int *)(this + 0x1bc);
    }
    F_007eab90(this,param_2,iVar7,*(undefined4 *)(this + 0x18c),0,0);
    uVar6 = 0x66;
    break;
  default: ;
    goto switchD_0082f3e8_default;
  }
  F_0059d6a0(this,uVar6,1,0);
switchD_0082f3e8_default: ;
  uVar6 = *(undefined4 *)(this + 0x1a4);
  (*(int *)(gen_frame + 0x18)) = 0;
  ((int *)(gen_frame + 0x10))[1] = 0;
  F_007880f0(((int *)(gen_frame + 0x10)) + 1,&(*(int *)(gen_frame + 0x18)),uVar6);
  F_007880f0(((int *)(gen_frame + 0x10)) + 1,&(*(int *)(gen_frame + 0x18)),*(undefined4 *)(this + 0x1a8));
  F_007880f0(((int *)(gen_frame + 0x10)) + 1,&(*(int *)(gen_frame + 0x18)),*(undefined4 *)(this + 0x1ac));
  F_007880f0(((int *)(gen_frame + 0x10)) + 1,&(*(int *)(gen_frame + 0x18)),*(undefined4 *)(this + 0x1b0));
  if (in_ecx != 0) {
    uVar5 = F_00559d90(in_ecx);
    F_00559f40(in_ecx,(uint)uVar5 - (*(int *)(gen_frame + 0x18)));
  }
  if ((!bVar3) && (*(int *)(this + 0x194) != 0)) {
    uVar5 = F_0055a030(*((undefined4 *)GEN_TOP((*(int *)(this + 0x194) + 0x70))));
    sVar1 = (short)(*(int *)(gen_frame + 0x18)) + uVar5;
    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x18)) + 0)) = sVar1;
    (*(int *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x18)) + 2)),sVar1);
    if (*(int *)(this + 0x194) == 0) {
      pvVar8 = (undefined *)0x0;
    }
    else {
      pvVar8 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x194) + 0x70)));
    }
    F_0055a300(pvVar8,0);
  }
  pcVar2 = *(gen_code32 *)(*(int *)this + 0x48);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  ((int *)(gen_frame + 0x10))[0] = 0;
  (*pcVar2)(this,&(*(undefined4 *)(gen_frame + 0xc)),((int *)(gen_frame + 0x10)),0);
  ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this,(*(undefined4 *)(gen_frame + 0xc)),((int *)(gen_frame + 0x10))[0] - (*(int *)(gen_frame + 0x18)));
  if (*(int *)(this + 0x198) != 0) {
    if ((this[0x188] == (undefined1)0x0) && (bVar4 = F_00908e50(this), bVar4 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x28))))(*(int * PTR32 *)(this + 0x198),uVar6);
  }
  return 1;
}

/* ref: Client::UI2::AddonListColorChooser::vf46 */
byte F_0082f670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82f670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  short sVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined * pvVar7;
  int * in_ecx;
  byte * pbVar8;
  int iVar9;
  undefined * pAVar10;
  float10 fVar11;
  undefined4 uVar12;
  
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  pvVar3 = (undefined *)F_0055e320(this);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar3;
  uVar4 = F_0055e2f0(this,2);
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  uVar4 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this + 0x1ac;
  do {
    uVar5 = F_0055e2f0(this,uVar4 + 3);
    if (((uVar5 == 0) || (uVar5 = F_00559c20(uVar5), uVar5 == 0)) ||
       (uVar6 = F_005613a0(uVar5), uVar6 != 4)) {
      uVar5 = 0;
    }
    *(uint *)(*(undefined * PTR32 *)(gen_frame + 0x24)) = uVar5;
    uVar4 = uVar4 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)(gen_frame + 0x24)) + 4;
  } while (uVar4 < 10);
  uVar4 = F_0055e2f0(this,0xd);
  if (uVar4 == 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)0x0;
  }
  else {
    pvVar3 = (undefined *)F_00559c20(uVar4);
    if ((pvVar3 == (undefined *)0x0) || (uVar4 = F_005613a0(pvVar3), uVar4 != 9)) {
      pvVar3 = (undefined *)0x0;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar3;
  }
  uVar4 = F_0055e2f0(this,0xd);
  uVar12 = 4;
  pvVar3 = (undefined *)F_00559c20(uVar4);
  F_00561490(pvVar3,uVar12);
  uVar12 = 3;
  pvVar3 = (undefined *)F_00559c20(uVar4);
  F_00561490(pvVar3,uVar12);
  pvVar7 = (undefined *)F_0055e340(this,0xe);
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x20));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = pvVar7;
  if ((param_2[0x38] & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x3c);
  }
  *(uint *)(this + 0x18c) = uVar4;
  if ((*(undefined * PTR32 *)(gen_frame + 0x20)) != (undefined *)0x0) {
    if ((uVar4 & 2) == 0) {
      if ((param_2[8] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(param_2 + 0xc);
      }
      if ((*param_2 & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(param_2 + 4);
      }
      F_0058a320((*(undefined * PTR32 *)(gen_frame + 0x20)),uVar5,uVar4);
    }
    F_0056e010(pvVar3,(uint)(((byte)*(undefined4 *)(this + 0x18c) & 0x20) == 0x20));
  }
  *(undefined4 *)(this + 0x198) = 0;
  if (((byte)*(undefined4 *)(param_2 + 0x28) & 0xf) == 4) {
    *(undefined4 *)(this + 0x198) = *(undefined4 *)(param_2 + 0x2c);
  }
  if (((byte)*(undefined4 *)(param_2 + 0x28) & 0xf) == 3) {
    *(undefined4 *)(this + 0x198) = *(undefined4 *)(param_2 + 0x2c);
  }
  if ((param_2[0x30] & 0xf) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined4 *)(param_2 + 0x34);
  }
  *(undefined4 *)(this + 0x19c) = uVar12;
  if (((byte)this[0x18c] & 0x10) == 0) {
    *(undefined4 *)(this + 400) = 5;
    *(undefined4 *)(this + 0x194) = 0x19;
  }
  else {
    *(undefined4 *)(this + 400) = 8;
    *(undefined4 *)(this + 0x194) = 0x40;
  }
  if ((param_2[0x20] & 0xf) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined4 *)(param_2 + 0x24);
  }
  *(undefined4 *)(this + 0x180) = uVar12;
  *(undefined * PTR32 *)(this + 0x1a4) = (*(undefined * PTR32 *)(gen_frame + 0x24));
  if ((*(undefined * PTR32 *)(gen_frame + 0x24)) != (undefined *)0x0) {
    F_005b1d70((*(undefined * PTR32 *)(gen_frame + 0x24)),(uint)*(ushort *)(this + 400));
    F_005b1da0(*(undefined * PTR32 *)(this + 0x1a4),(uint)*(ushort *)(this + 400));
    uVar4 = *(uint *)(this + 0x194);
    if (*(uint *)(this + 0x180) < *(uint *)(this + 0x194)) {
      uVar4 = *(uint *)(this + 0x180);
    }
    F_0059ead0(*(undefined * PTR32 *)(this + 0x1a4),uVar4 & 0xffff,0,1);
    *(undefined4 *)(this + 0x1e0) = 4;
    *(undefined4 *)(this + 0x1d4) = 1;
    if (((byte)this[0x18c] & 0x10) == 0) {
      uVar12 = 4;
    }
    else {
      uVar12 = 3;
    }
    F_005b1c50(*(undefined * PTR32 *)(this + 0x1a4),uVar12);
    pvVar3 = *(undefined * PTR32 *)(this + 0x1a4);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x7884e0));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    F_00574320(pvVar3,&(*(undefined * PTR32 *)(gen_frame + 0x0)),this + 0x1d4,2,0);
    F_0056d690(*(undefined * PTR32 *)(this + 0x1a4),(uint)(((byte)*(undefined4 *)(this + 0x18c) & 1) == 1),0);
    if ((param_2[0x48] & 0xf) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)(param_2 + 0x4c);
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a4) + 0xe4))) = uVar12;
    uVar4 = F_00561490(*(undefined * PTR32 *)(this + 0x1a4),2);
    if (((uVar4 != 0) && (in_ecx = (int *)F_00559c20(uVar4), in_ecx != (int *)0x0)) &&
       (uVar4 = F_005613a0(in_ecx), uVar4 == 0xd)) {
      ((code *)*(gen_code32 *)(*in_ecx + 0x28))(in_ecx,0);
      F_0055a300((undefined *)in_ecx[0x1c],0);
    }
    *((uint *)GEN_TOP((*(int *)(this + 0x1a4) + 100))) = *((uint *)GEN_TOP((*(int *)(this + 0x1a4) + 100))) & 0xfffdffff;
  }
  uVar12 = 0;
  uVar4 = F_00404270();
  uVar4 = F_00406c00(-(uint)((int)((ulonglong)*(uint *)(this + 0x180) * 0xc >> 0x20) != 0) |
                       (uint)((ulonglong)*(uint *)(this + 0x180) * 0xc),0,uVar4,uVar12);
  *(uint *)(this + 0x1a8) = uVar4;
  if (uVar4 != 0) {
    if (*(int *)(this + 0x180) != 0) {
      iVar9 = 0;
      pbVar8 = param_2 + 0x6c;
      uVar4 = 0;
      do {
        uVar5 = uVar4;
        if ((pbVar8[-0x1c] & 0xf) == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined4 *)(pbVar8 + -0x18);
        }
        *((undefined4 *)GEN_TOP((iVar9 + *(int *)(this + 0x1a8)))) = uVar12;
        if ((pbVar8[-0xc] & 0xf) == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined4 *)(pbVar8 + -8);
        }
        *((undefined4 *)GEN_TOP((iVar9 + 4 + *(int *)(this + 0x1a8)))) = uVar12;
        if ((pbVar8[-4] & 0xf) == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined4 *)pbVar8;
        }
        *((undefined4 *)GEN_TOP((iVar9 + 8 + *(int *)(this + 0x1a8)))) = uVar12;
        uVar4 = uVar5 + 1;
        pbVar8 = pbVar8 + 0x28;
        iVar9 = iVar9 + 0xc;
      } while (uVar4 < *(uint *)(this + 0x180));
      if (uVar4 != 0) {
        *(uint *)(this + 0x188) = uVar5 / *(uint *)(this + 0x194);
        goto LAB_0082fa23;
      }
    }
    *(undefined4 *)(this + 0x188) = 0;
  }
LAB_0082fa23: ;
  uVar4 = 0;
  pAVar10 = this + 0x1ac;
  do {
    if (*(int *)pAVar10 != 0) {
      uVar5 = F_005608e0(uVar4 + 1,((undefined1 *)(gen_frame + 0x10)),4);
      F_00589280(*(undefined * PTR32 *)pAVar10,uVar5);
      if (*(uint *)(this + 0x188) < uVar4) {
        if (*(int *)pAVar10 == 0) {
          pvVar3 = (undefined *)0x0;
        }
        else {
          pvVar3 = *(undefined * PTR32 *)(*(int *)pAVar10 + 0x70);
        }
        F_0055a300(pvVar3,0);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar10 + 0x28))))(*(int * PTR32 *)pAVar10,0);
      }
    }
    uVar4 = uVar4 + 1;
    pAVar10 = pAVar10 + 4;
  } while (uVar4 < 10);
  if ((*(uint *)(this + 0x194) < *(uint *)(this + 0x180)) || (*(int *)(this + 0x1ac) == 0)) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x1ac),1);
  }
  else {
    F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1ac) + 0x70))),0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1ac) + 0x28))))(*(int * PTR32 *)(this + 0x1ac),0);
  }
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x20));
  uVar4 = 0;
  sVar2 = 0;
  if ((*(undefined * PTR32 *)(gen_frame + 0x20)) != (undefined *)0x0) {
    uVar4 = F_00561490((*(undefined * PTR32 *)(gen_frame + 0x20)),3);
    uVar1 = F_00559d90(uVar4);
    uVar4 = (uint)uVar1;
    if (((byte)this[0x18c] & 2) != 0) {
      uVar12 = 0;
      pvVar3 = (undefined *)F_00561490(pvVar3,8);
      F_0055a300(pvVar3,uVar12);
    }
  }
  uVar5 = (*(uint *)(gen_frame + 0x1c));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)0x0;
  if ((*(uint *)(gen_frame + 0x1c)) != 0) {
    uVar1 = F_00559d90((*(uint *)(gen_frame + 0x1c)));
    (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)(uint)uVar1;
    if (((byte)this[0x18c] & 2) != 0) {
      uVar1 = F_00559d90(uVar5);
      sVar2 = uVar1 - (short)uVar4;
      F_00559f40(uVar5,uVar4);
    }
  }
  uVar4 = 0;
  if (*(int *)(this + 0x1a4) != 0) {
    if (((byte)this[0x18c] & 2) != 0) {
      fVar11 = F_00559d80(*((undefined4 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70))));
      uVar12 = 0;
      if (*(int *)(this + 0x1a4) != 0) {
        uVar12 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
      }
      F_00559f00(uVar12,(float)(int)(short)((short)(int)fVar11 - sVar2));
    }
    if ((*(int *)(this + 0x1ac) != 0) &&
       (uVar4 = F_0055a2d0(*((undefined4 *)GEN_TOP((*(int *)(this + 0x1ac) + 0x70)))), (char)uVar4 == '\0'))
    {
      if (*(int *)(this + 0x1a4) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
      }
      F_00559f00(uVar12,(float)(int)(short)(*(undefined * PTR32 *)(gen_frame + 0x20)));
      uVar12 = 0;
      if (*(int *)(this + 0x1ac) != 0) {
        uVar12 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1ac) + 0x70)));
      }
      F_0055a030(uVar12);
    }
    if (*(int *)(this + 0x1a4) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    fVar11 = F_00559d80(uVar12);
    uVar12 = 0;
    if (*(int *)(this + 0x1a4) != 0) {
      uVar12 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    uVar1 = F_0055a030(uVar12);
    uVar4 = (uint)(ushort)(uVar1 + (short)(int)fVar11);
  }
  if ((*(undefined * PTR32 *)(gen_frame + 0x18)) != (undefined *)0x0) {
    F_0055a300((*(undefined * PTR32 *)(gen_frame + 0x18)),(uint)(((byte)this[0x18c] & 4) == 0));
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,&(*(undefined4 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x28)),0);
  ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this,(*(undefined4 *)(gen_frame + 0x14)),uVar4 + 0xf);
  uVar4 = *(uint *)(this + 0x198) / *(uint *)(this + 0x194);
  F_00908f10(this,uVar4,0);
  if (uVar4 != 0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x1ac),0);
    F_0059dde0(*(undefined * PTR32 *)(this + uVar4 * 4 + 0x1ac),1);
  }
  F_007eaed0(this);
  return 1;
}

/* ref: Client::UI2::AddonContextIconMenu::vf44 */
uint F_0082fca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82fca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  int iVar7;
  undefined * pAVar8;
  float10 fVar9;
  
  *(undefined2 *)(this + 0x136) = 1;
  F_0055e1c0(this,(float)(float10)0,0,0,(float)(float10)1,0);
  F_0055e220(this,(float)(float10)0,0,0,(float)(float10)1,0);
  uVar3 = F_0055e2f0(this,0xd);
  if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3), uVar3 == 0)) ||
     (uVar4 = F_005613a0(uVar3), uVar4 != 9)) {
    uVar3 = 0;
  }
  *(uint *)(this + 0x1a0) = uVar3;
  if (uVar3 != 0) {
    fVar9 = F_00559d60(*(undefined4 *)(uVar3 + 0x70));
    *(short *)(this + 0x194) = (short)(int)fVar9;
    uVar5 = 0;
    if (*(int *)(this + 0x1a0) != 0) {
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
    }
    fVar9 = F_00559d80(uVar5);
    *(short *)(this + 0x196) = (short)(int)fVar9;
    uVar5 = 0;
    if (*(int *)(this + 0x1a0) != 0) {
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
    }
    uVar2 = F_0055a020(uVar5);
    *(ushort *)(this + 0x198) = uVar2;
    uVar5 = 0;
    if (*(int *)(this + 0x1a0) != 0) {
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
    }
    uVar2 = F_0055a030(uVar5);
    *(ushort *)(this + 0x19a) = uVar2;
  }
  uVar3 = F_0055e2f0(this,2);
  if (uVar3 != 0) {
    uVar2 = F_00559d70(uVar3);
    *(ushort *)(this + 0x19c) = uVar2;
    uVar2 = F_00559d90(uVar3);
    *(ushort *)(this + 0x19e) = uVar2;
  }
  (*(int *)(gen_frame + 0x8)) = 1;
  pAVar8 = this + 0x1a8;
  (*(int *)(gen_frame + 0x4)) = 10;
  do {
    iVar7 = (*(int *)(gen_frame + 0x8));
    uVar3 = F_0055e2f0(this,(*(int *)(gen_frame + 0x8)) + 2);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00559c20(uVar3);
      if ((uVar3 == 0) || (uVar4 = F_005613a0(uVar3), iVar7 = (*(int *)(gen_frame + 0x8)), uVar4 != 4)) {
        uVar3 = 0;
        iVar7 = (*(int *)(gen_frame + 0x8));
      }
    }
    *(uint *)pAVar8 = uVar3;
    if (uVar3 != 0) {
      uVar3 = F_005608e0(iVar7,((undefined1 *)(gen_frame + 0x0)),4);
      F_00589280(*(undefined * PTR32 *)pAVar8,uVar3);
      pvVar6 = (undefined *)0x0;
      if (*(uint *)pAVar8 != 0) {
        pvVar6 = *(undefined * PTR32 *)(*(uint *)pAVar8 + 0x70);
      }
      F_0055a300(pvVar6,0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar8 + 0x28))))(*(int * PTR32 *)pAVar8,0);
    }
    pAVar8 = pAVar8 + 4;
    iVar1 = (*(int *)(gen_frame + 0x4)) + -1;
    (*(int *)(gen_frame + 0x4)) = iVar1;
    (*(int *)(gen_frame + 0x8)) = iVar7 + 1;
  } while (iVar1 != 0);
  if (*(int *)(this + 0x1a0) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70))),0x21,0,this,0,0);
    pvVar6 = (undefined *)0x0;
    if (*(int *)(this + 0x1a0) != 0) {
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
    }
    F_00568380(pvVar6,0x20,2,this,0,0);
    pvVar6 = (undefined *)0x0;
    if (*(int *)(this + 0x1a0) != 0) {
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
    }
    F_00568380(pvVar6,0x1f,3,this,0,0);
    pvVar6 = (undefined *)0x0;
    if (*(int *)(this + 0x1a0) != 0) {
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
    }
    F_00568380(pvVar6,0x2d,4,this,0,0);
  }
  uVar3 = 0;
  pAVar8 = this + 0x1a8;
  do {
    if (*(int *)pAVar8 == 0) {
      pvVar6 = (undefined *)0x0;
    }
    else {
      pvVar6 = *(undefined * PTR32 *)(*(int *)pAVar8 + 0x70);
    }
    uVar4 = F_00568380(pvVar6,0x17,uVar3 + 100,this,0,0);
    uVar3 = uVar3 + 1;
    pAVar8 = pAVar8 + 4;
  } while (uVar3 < 10);
  return uVar4;
}

/* ref: Client::UI2::AddonContextIconMenu::vf46 */
byte F_0082fef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x82fef0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  undefined * pAVar10;
  float10 fVar11;
  short * psVar12;
  
  iVar7 = (*(int *)&gen_args[2]);
  if ((*(int *)&gen_args[2]) == 0) {
    return 1;
  }
  if ((*(byte *)((*(int *)&gen_args[2]) + 0x38) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((*(int *)&gen_args[2]) + 0x3c);
  }
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) = uVar1;
  puVar4 = &(*(int *)&gen_args[2]);
  psVar12 = ((short *)(gen_frame + 0x18));
  pvVar2 = (undefined *)F_0055dcb0();
  F_0055ba20(pvVar2,psVar12,puVar4);
  fVar11 = F_0055df60((*(undefined * PTR32 *)&gen_args[0]));
  (*(float *)(gen_frame + 0x10)) = (float)fVar11;
  (*(uint *)(gen_frame + 0x14)) = (int)(short)(*(int *)&gen_args[2]);
  fVar11 = (float10)(float)fVar11;
  (*(float *)(gen_frame + 0x10)) = gen_bits2f((int)((short *)(gen_frame + 0x18))[0]);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))))
            ((*(undefined * PTR32 *)&gen_args[0]),(int)((float10)(int)((short *)(gen_frame + 0x18))[0] - fVar11 * (float10)REFG(double, 0x10944b8)) & 0xffff,
             (int)((float10)(int)(short)(*(int *)&gen_args[2]) - (float10)*(double *)&REFG(undefined, 0x10cdac8) * fVar11) &
             0xffff);
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) = 0;
  if (((byte)*(undefined4 *)(iVar7 + 0x28) & 0xf) == 4) {
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) = *(undefined4 *)(iVar7 + 0x2c);
  }
  if (((byte)*(undefined4 *)(iVar7 + 0x28) & 0xf) == 3) {
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) = *(undefined4 *)(iVar7 + 0x2c);
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) != 0) {
    F_00559da0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) + 0x70))),(float)(int)*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194)))
                 ,(float)(int)*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x196))));
    F_005b1d70(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),5);
    if ((*(byte *)(iVar7 + 0x20) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(iVar7 + 0x24);
    }
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) = uVar3;
    if (uVar3 < 0x19) {
      uVar3 = uVar3 & 0xffff;
    }
    else {
      uVar3 = 0x19;
    }
    F_0059ead0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),uVar3,0,1);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0)));
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x788a20));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    F_00574320(pvVar2,&(*(undefined * PTR32 *)(gen_frame + 0x0)),(*(undefined * PTR32 *)&gen_args[0]) + 0x1d0,1,0);
    F_0056d690(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),(uint)(((byte)*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) & 1) == 1),0);
    if ((*(byte *)(iVar7 + 0x70) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(iVar7 + 0x74);
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) + 0xe4))) = uVar1;
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) + 100))) = *((uint *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) + 100))) & 0xfffdffff;
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))));
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) = 0;
  }
  uVar1 = 0;
  uVar3 = F_00404270();
  uVar3 = F_00406c00(-(uint)((int)((ulonglong)*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) * 0x14 >> 0x20) != 0) |
                       (uint)((ulonglong)*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) * 0x14),0,uVar3,uVar1);
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) = uVar3;
  if (uVar3 != 0) {
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) != 0) {
      (*(uint *)(gen_frame + 0x14)) = 0;
      puVar4 = (undefined4 *)(iVar7 + 100);
      uVar3 = 0;
      do {
        uVar8 = uVar3;
        puVar5 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) + (*(uint *)(gen_frame + 0x14)))));
        if ((*(byte *)(puVar4 + -5) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar4[-4];
        }
        *puVar5 = uVar1;
        if ((*(byte *)(puVar4 + -3) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar4[-2];
        }
        puVar5[1] = uVar1;
        if ((*(byte *)(puVar4 + -1) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *puVar4;
        }
        puVar5[2] = uVar1;
        if ((*(byte *)(puVar4 + 1) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar4[2];
        }
        puVar5[3] = uVar1;
        if ((*(byte *)(puVar4 + 3) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar4[4];
        }
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 0x14;
        uVar3 = uVar8 + 1;
        puVar5[4] = uVar1;
        puVar4 = puVar4 + 10;
      } while (uVar3 < *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))));
      if (uVar3 != 0) {
        *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))) = uVar8 / 0x19;
        goto LAB_00830198;
      }
    }
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))) = 0;
  }
LAB_00830198: ;
  pAVar10 = (*(undefined * PTR32 *)&gen_args[0]) + 0x1a8;
  iVar7 = 10;
  do {
    if (*(int *)pAVar10 == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar10 + 0x70);
    }
    F_0055a300(pvVar2,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar10 + 0x28))))(*(int * PTR32 *)pAVar10,0);
    F_0059dde0(*(undefined * PTR32 *)pAVar10,0);
    pAVar10 = pAVar10 + 4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))) == 0) {
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) + 0x70)));
    }
    F_0055a300(pvVar2,0);
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))),0);
  }
  else {
    pAVar10 = (*(undefined * PTR32 *)&gen_args[0]) + 0x1a8;
    uVar3 = 0;
    do {
      if (*(int *)pAVar10 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar10 + 0x70);
      }
      F_0055a300(pvVar2,1);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar10 + 0x28))))(*(int * PTR32 *)pAVar10,1);
      uVar3 = uVar3 + 1;
      pAVar10 = pAVar10 + 4;
    } while (uVar3 <= *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))));
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))),1);
  }
  uVar6 = 0;
  sVar9 = 0;
  (*(uint *)(gen_frame + 0x14)) = (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x196)));
  if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))) == 0) && (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) != 0)) {
    F_00559da0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) + 0x70))),(float)(int)*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c)))
                 ,(float)(int)*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19e))));
    (*(uint *)(gen_frame + 0x14)) = (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19e)));
    if (*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) < 5) {
      F_005b1da0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),1);
      F_005b1d70(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),(uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))));
      sVar9 = (short)(((uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198))) * *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180)))) / 5);
      uVar6 = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19a))) / 5;
      goto LAB_00830386;
    }
    uVar3 = (*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) + 4) / 5;
    uVar8 = uVar3 & 0xff;
    if (5 < (byte)uVar3) {
      uVar8 = 5;
    }
    F_005b1da0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),uVar8);
    F_005b1d70(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),5);
    uVar6 = (ushort)((*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19a))) * uVar8) / 5);
  }
  else {
    if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) == (undefined *)0x0) goto LAB_00830386;
    F_005b1da0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),5);
    F_005b1d70(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),5);
    uVar6 = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19a)));
  }
  sVar9 = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198)));
LAB_00830386: ;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))))
            ((*(undefined * PTR32 *)&gen_args[0]),(uint)(ushort)(*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) * 2 + sVar9),
             (uint)(ushort)(*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19e))) + (short)(*(uint *)(gen_frame + 0x14)) + uVar6));
  F_007eb1d0((*(undefined * PTR32 *)&gen_args[0]));
  uVar3 = 0;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))) != 0) {
    uVar3 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) / 0x19;
  }
  F_00909050((*(undefined * PTR32 *)&gen_args[0]),uVar3);
  if ((uVar3 != 0) && (uVar3 <= *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))))) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))),0);
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + uVar3 * 4 + 0x1a8))),1);
  }
  return 1;
}

/* ref: Client::UI2::AddonCreditPlayer::vf44 */
uint F_00830410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x830410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined * local_8;
  
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e2f0(this,5);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x18c) = uVar1;
  uVar1 = F_0055e2f0(this,6);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
    uVar1 = 0;
  }
  *(uint *)(this + 400) = uVar1;
  uVar1 = F_0055e2f0(this,0x22);
  *(uint *)(this + 0x1fc) = uVar1;
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x208) = uVar1;
  uVar1 = F_0055e2f0(this,3);
  *(uint *)(this + 0x20c) = uVar1;
  uVar1 = F_0055e2f0(this,0x29);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 9)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x210) = uVar1;
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 0x125) = 1;
  }
  local_8 = this + 0x194;
  uVar1 = 0;
  do {
    uVar2 = F_0055e2f0(this,*(undefined4 *)((int)&REFG(undefined4, 0x10c0ab0) + uVar1));
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2), uVar3 != 1)) {
      uVar2 = 0;
    }
    *(uint *)local_8 = uVar2;
    uVar1 = uVar1 + 4;
    local_8 = local_8 + 4;
  } while (uVar1 < 0x68);
  if (*(int *)(this + 0x18c) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar4,0x17,0,this,0,0);
  if (*(int *)(this + 400) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
  }
  F_00568380(pvVar4,0x17,1,this,0,0);
  uVar1 = 0;
  pAVar5 = this + 0x194;
  do {
    if (*(int *)pAVar5 == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *(undefined * PTR32 *)(*(int *)pAVar5 + 0x70);
    }
    F_00568380(pvVar4,0x17,uVar1 + 2,this,0,0);
    uVar1 = uVar1 + 1;
    pAVar5 = pAVar5 + 4;
  } while (uVar1 < 0x1a);
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0xc;
  pAVar5 = this;
  pvVar4 = (undefined *)F_0055dcb0();
  F_0056a3d0(pvVar4,uVar6,uVar7,pAVar5,uVar8,uVar9);
  F_00568380(*(undefined * PTR32 *)(this + 0x90),0x41,0,this,0,0);
  this[0x399] = (undefined1)0x1;
  uVar1 = F_0055dcb0();
  uVar6 = *(undefined4 *)(uVar1 + 0x238);
  uVar1 = F_0055dcb0();
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this,*(undefined4 *)(uVar1 + 0x234),uVar6);
  return uVar1;
}

/* ref: FUN_00830620 */
byte F_00830620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x830620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  
  bVar2 = 0;
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 1: ;
  case 4: ;
  case 5: ;
    if (*(char *)(param_1 + 1) != '\0') {
      return 0;
    }
    *(undefined4 *)((int)this + 0x39c) = 0;
    *(bool *)((int)this + 0x39a) = *(char *)((int)this + 0x39a) == '\0';
    break;
  case 2: ;
  case 3: ;
    if (*(char *)(param_1 + 1) != '\0') {
      return 0;
    }
    F_005a9130(this,0);
    break;
  default: ;
    goto switchD_0083063f_caseD_6;
  case 7: ;
  case 0x10: ;
    if (*(char *)(param_1 + 1) != '\0') {
      return 0;
    }
    if (*(int *)((int)this + 0x200) != 0) {
      iVar1 = *(int *)((int)this + 0x200) + -1;
LAB_008306db: ;
      F_007eb340(this,iVar1);
    }
    break;
  case 8: ;
  case 0xf: ;
    if (*(char *)(param_1 + 1) != '\0') {
      return 0;
    }
    if (*(uint *)((int)this + 0x200) < 0x19) {
      iVar1 = *(uint *)((int)this + 0x200) + 1;
      goto LAB_008306db;
    }
    break;
  case 10: ;
    if (*(char *)(param_1 + 1) != '\0') {
      return 0;
    }
    if (*(char *)((int)this + 0x39a) != '\0') {
      return 0;
    }
    *(int *)((int)this + 0x39c) = *(int *)((int)this + 0x39c) + 1;
    if (2 < *(int *)((int)this + 0x39c)) {
      *(undefined4 *)((int)this + 0x39c) = 0;
    }
  }
  iVar1 = *(int *)((int)this + 0x39c);
  bVar2 = 1;
  if (iVar1 == 0) {
    F_0059d640(*(undefined * PTR32 *)((int)this + 0x20c),0x11);
  }
  else {
    if (iVar1 == 1) {
      F_0059d640(*(undefined * PTR32 *)((int)this + 0x20c),0x65);
      return 1;
    }
    if (iVar1 == 2) {
      F_0059d640(*(undefined * PTR32 *)((int)this + 0x20c),0x66);
      return 1;
    }
  }
switchD_0083063f_caseD_6: ;
  return bVar2;
}

/* ref: FUN_00830760 */
unsigned int F_00830760(unsigned int gen_a0)
{
  GEN_ENTER(0x830760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0x210) != (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x200) = 0;
    *(undefined4 *)((int)this + 0x204) = 0;
    uVar1 = F_00561490(*(undefined * PTR32 *)((int)this + 0x210),2);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00559c20(uVar1);
      if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 0xe)) {
        uVar1 = 0;
      }
    }
    *(uint *)((int)this + 0x214) = uVar1;
    if (uVar1 == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)(uVar1 + 0x70);
    }
    F_0055a000(pvVar3,(int)this + 0x224,(int)this + 0x226);
    F_005b1d70(*(undefined * PTR32 *)((int)this + 0x210),4);
    F_0059ead0(*(undefined * PTR32 *)((int)this + 0x210),0x58,0,1);
    pvVar3 = *(undefined * PTR32 *)((int)this + 0x210);
    *(undefined4 *)((int)this + 0x218) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
    (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x788aa0));
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    F_00574320(pvVar3,&(*(undefined * PTR32 *)(gen_frame + 0xc)),(undefined4 *)((int)this + 0x218),1,0);
    *(undefined4 *)((int)this + 0x228) = 0;
    *(undefined4 *)((int)this + 0x22c) = 0;
    F_007eb4f0(this);
  }
  return 0;
}

/* ref: FUN_00830850 */
uint F_00830850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x830850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
    if (*(int *)((int)this + 0x200) != 0) {
      uVar1 = F_007eb340(this,*(int *)((int)this + 0x200) + -1);
      return uVar1;
    }
  }
  else {
    uVar1 = param_1 - 1;
    if (uVar1 == 0) {
      uVar1 = *(uint *)((int)this + 0x200);
      if (uVar1 < 0x19) {
        uVar1 = F_007eb340(this,uVar1 + 1);
        return uVar1;
      }
    }
    else if (1 < param_1) {
      uVar1 = F_007eb340(this,param_1 - 2);
    }
  }
  return uVar1;
}

/* ref: FUN_008308a0 */
unsigned int F_008308a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x8308a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_1 + 0x3a0))) {
  case 1: ;
    F_007eb670(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_008308e0 */
uint F_008308e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8308e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  undefined * this_00;
  uint in_ecx;
  uint uVar5;
  int * piVar6;
  int iVar7;
  char * pcVar8;
  float10 fVar9;
  float10 fVar10;
  float local_c;
  float local_8;
  
  iVar7 = *(int *)((int)this + 0x198) - *(int *)((int)this + 0x194);
  iVar1 = iVar7 >> 0x1f;
  iVar7 = iVar7 / 0xd + iVar1;
  if (iVar7 != iVar1) {
    uVar5 = 0;
    pcVar8 = *(char * PTR32 *)((int)this + 0x194);
    do {
      if (*pcVar8 == *(char *)((int)this + 0x1b4)) {
        pcVar8 = *(char * PTR32 *)((int)this + 0x194) + uVar5 * 0xd;
        goto LAB_00830931;
      }
      uVar5 = uVar5 + 1;
      pcVar8 = pcVar8 + 0xd;
    } while (uVar5 < (uint)(iVar7 - iVar1));
  }
  pcVar8 = (char *)0x0;
LAB_00830931: ;
  uVar5 = (uint)*(byte *)(param_1 + 4);
  if (uVar5 == 0) {
    fVar9 = (float10)*(ushort *)((int)this + 0x42c) / (float10)*(double *)&REFG(undefined, 0x1088118);
    local_8 = (float)((float10)(byte)pcVar8[1] * fVar9);
    fVar10 = (float10)(byte)pcVar8[3];
LAB_008309d8: ;
    local_c = (float)(fVar10 * fVar9);
  }
  else {
    if (uVar5 == 1) {
      fVar9 = (float10)*(ushort *)((int)this + 0x42c) / (float10)*(double *)&REFG(undefined, 0x1088118);
      local_8 = (float)((float10)(byte)pcVar8[5] * fVar9);
      fVar10 = (float10)(byte)pcVar8[7];
      goto LAB_008309d8;
    }
    if (uVar5 == 2) {
      fVar9 = (float10)*(ushort *)((int)this + 0x42c) / (float10)*(double *)&REFG(undefined, 0x1088118);
      local_8 = (float)((float10)(byte)pcVar8[9] * fVar9);
      fVar10 = (float10)(byte)pcVar8[0xb];
      goto LAB_008309d8;
    }
  }
  if (*(char *)(param_1 + 7) == '\0') {
    in_ecx = F_007ebe00(this,*(undefined4 *)(param_1 + 0x5c));
    uVar5 = 0;
    if (in_ecx == 0) goto LAB_00830c77;
    F_00559f40(in_ecx,(uint)(ushort)((*(short *)((int)this + 0x42e) - (short)param_3) + 0x3c));
    cVar2 = *(char *)(param_1 + 5);
    if (cVar2 == '\0') {
      uVar5 = (int)local_8 & 0xffff;
LAB_00830c24: ;
      F_00559eb0(in_ecx,uVar5);
    }
    else {
      if (cVar2 == '\x01') {
        uVar4 = F_0055a020(in_ecx);
        uVar5 = (uint)(ushort)(((short)(int)local_c + (short)(int)local_8) - uVar4);
        goto LAB_00830c24;
      }
      if (cVar2 == '\x02') {
        uVar4 = F_0055a020(in_ecx);
        uVar5 = (uint)(ushort)(((short)(int)local_c / 2 - (uVar4 >> 1)) + (short)(int)local_8);
        goto LAB_00830c24;
      }
    }
    uVar5 = 0;
    piVar6 = *(int * PTR32 *)((int)this + 0x3cc);
    while (*piVar6 != 0) {
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 2;
      if (0x73 < uVar5) {
        *(int *)((int)this + 0x430) = *(int *)((int)this + 0x430) + 1;
        return uVar5;
      }
    }
    (*(int * PTR32 *)((int)this + 0x3cc))[uVar5 * 2] = in_ecx;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x3cc) + 5 + uVar5 * 8))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x3cc) + 4 + uVar5 * 8))) = (undefined1)param_2;
    sVar3 = *(short *)(param_1 + 2);
  }
  else {
    if (uVar5 == 0) {
      this_00 = (undefined *)F_00788e40(this);
    }
    else if (uVar5 == 1) {
      this_00 = (undefined *)F_00788e80(this);
    }
    else {
      uVar5 = uVar5 - 2;
      if (uVar5 != 0) goto LAB_00830c77;
      this_00 = (undefined *)F_00788e00(this);
    }
    uVar5 = 0;
    if (this_00 == (undefined *)0x0) goto LAB_00830c77;
    F_00559f40(this_00,(uint)(ushort)((*(short *)((int)this + 0x42e) - (short)param_3) + 0x3c));
    uVar5 = F_0042a990(param_1 + 8);
    F_00584110(this_00,uVar5);
    iVar7 = *(int *)((int)this + 0x1a8) - *(int *)((int)this + 0x1a4);
    iVar1 = iVar7 >> 0x1f;
    iVar7 = iVar7 / 3 + iVar1;
    uVar5 = 0;
    if (iVar7 != iVar1) {
      pcVar8 = *(char * PTR32 *)((int)this + 0x1a4);
      do {
        if (*pcVar8 == *(char *)(param_1 + 6)) {
          iVar1 = *(int *)((int)this + 0x1a4) + uVar5 * 3;
          if (iVar1 != 0) {
            F_0055ab20(this_00,*(undefined4 *)(&REFG(undefined, 0x10c0bf0) + (uint)*(byte *)(iVar1 + 1) * 4));
            F_0055ab60(this_00,(uint)*(byte *)(iVar1 + 2),0);
            F_0055a080(this_00,(uint)(ushort)(*(byte *)(iVar1 + 2) + 2));
          }
          break;
        }
        uVar5 = uVar5 + 1;
        pcVar8 = pcVar8 + 3;
      } while (uVar5 < (uint)(iVar7 - iVar1));
    }
    cVar2 = *(char *)(param_1 + 5);
    if (cVar2 == '\0') {
      F_0055aa90(this_00,3);
      uVar5 = (int)local_8 & 0xffff;
LAB_00830b44: ;
      F_00559eb0(this_00,uVar5);
    }
    else {
      if (cVar2 == '\x01') {
        F_0055aa90(this_00,5);
        uVar4 = F_0055a020(this_00);
        uVar5 = (uint)(ushort)(((short)(int)local_c + (short)(int)local_8) - uVar4);
        goto LAB_00830b44;
      }
      if (cVar2 == '\x02') {
        F_0055aa90(this_00,4);
        uVar4 = F_0055a020(this_00);
        uVar5 = (uint)(ushort)(((short)(int)local_c / 2 - (uVar4 >> 1)) + (short)(int)local_8);
        goto LAB_00830b44;
      }
    }
    uVar5 = 0;
    piVar6 = *(int * PTR32 *)((int)this + 0x3cc);
    while (*piVar6 != 0) {
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 2;
      if (0x73 < uVar5) {
        *(int *)((int)this + 0x430) = *(int *)((int)this + 0x430) + 1;
        return uVar5;
      }
    }
    (*(int * PTR32 *)((int)this + 0x3cc))[uVar5 * 2] = (int)this_00;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x3cc) + 5 + uVar5 * 8))) = 0;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x3cc) + 4 + uVar5 * 8))) = (undefined1)param_2;
    sVar3 = *(short *)(param_1 + 2);
  }
  *(int *)((int)this + 0x434) = *(int *)((int)this + 0x434) + (int)sVar3;
LAB_00830c77: ;
  *(int *)((int)this + 0x430) = *(int *)((int)this + 0x430) + 1;
  return uVar5;
}

/* ref: Client::UI2::AddonCreditCast::vf38 */
uint F_00830c90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x830c90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  F_005a2370(param_1,param_2);
  if (*(int *)((int)param_1 + 0x180) == 1) {
    uVar1 = F_007ec030(param_1);
  }
  else {
    uVar1 = *(int *)((int)param_1 + 0x180) - 2;
    if (uVar1 == 0) {
      uVar1 = F_007890d0(param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonHudTargetInfo::vf47 */
uint F_00830cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x830cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  iVar1 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x4c);
  iVar3 = *(int *)(param_1 + 0x24);
  uVar6 = *(uint *)(param_1 + 0x54);
  if ((iVar3 != 0) && (iVar1 != 0)) {
    iVar4 = *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 4)));
    if (iVar4 == 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
      uVar6 = F_0055e2a0(this,0x2000000,1);
      return uVar6;
    }
    uVar8 = 0x69;
    if (iVar4 == 1) {
      uVar8 = 0x65;
    }
    else if (iVar4 == 2) {
      uVar8 = 0x68;
    }
    F_0059d640(*(undefined * PTR32 *)(this + 0x180),uVar8);
    bVar5 = F_00789b60(this,iVar3,iVar1);
    F_00789c10(this,iVar3);
    if ((bVar5 != 0) && (uVar7 = F_005b8a10(this), (char)uVar7 != '\0')) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
    }
    if (iVar4 == 1) {
      F_007ec160(this,iVar3,iVar1);
      F_00789d40(this,uVar6,uVar2);
      uVar6 = F_007ec2b0(this,iVar3,iVar1);
    }
    else {
      uVar6 = iVar4 - 2;
      if (uVar6 == 0) {
        uVar6 = F_00789e00(this,iVar3,iVar1);
        return uVar6;
      }
    }
  }
  return uVar6;
}

/* ref: Client::UI2::AddonAreaText::vf44 */
uint F_00830dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x830dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint in_ecx;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e2f0(this,2);
  if (uVar1 == 0) {
    *(undefined4 *)(this + 0x188) = 0;
    return 0;
  }
  in_ecx = F_00559c20(uVar1);
  uVar1 = 0;
  if (in_ecx != 0) {
    uVar1 = F_005613a0(in_ecx);
    if (uVar1 == 0x13) goto LAB_00830e4b;
  }
  in_ecx = 0;
LAB_00830e4b: ;
  *(uint *)(this + 0x188) = in_ecx;
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompany0::vf44 */
uint F_00830e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x830e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * this_00;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e360(this,3);
  *(uint *)(this + 400) = uVar1;
  uVar1 = F_0055e360(this,4);
  *(uint *)(this + 0x194) = uVar1;
  uVar1 = F_0055e360(this,5);
  *(uint *)(this + 0x198) = uVar1;
  uVar1 = F_0055e360(this,6);
  *(uint *)(this + 0x19c) = uVar1;
  uVar1 = F_0055e2f0(this,2);
  if (uVar1 == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = (undefined *)F_00559c20(uVar1);
    if ((this_00 == (undefined *)0x0) || (uVar1 = F_005613a0(this_00), uVar1 != 0x13)) {
      this_00 = (undefined *)0x0;
    }
  }
  *(undefined * PTR32 *)(this + 0x188) = this_00;
  uVar1 = F_00561550(this_00,2);
  *(uint *)(this + 0x18c) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompany1::vf44 */
uint F_00830f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x830f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * this_00;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e360(this,3);
  *(uint *)(this + 0x194) = uVar1;
  uVar1 = F_0055e360(this,4);
  *(uint *)(this + 0x198) = uVar1;
  uVar1 = F_0055e360(this,5);
  *(uint *)(this + 0x19c) = uVar1;
  uVar1 = F_0055e2f0(this,2);
  if (uVar1 == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = (undefined *)F_00559c20(uVar1);
    if ((this_00 == (undefined *)0x0) || (uVar1 = F_005613a0(this_00), uVar1 != 0x13)) {
      this_00 = (undefined *)0x0;
    }
  }
  *(undefined * PTR32 *)(this + 0x188) = this_00;
  uVar1 = F_00561550(this_00,2);
  *(uint *)(this + 0x18c) = uVar1;
  return uVar1;
}

/* ref: FUN_00831020 */
uint F_00831020(unsigned int gen_a0)
{
  GEN_ENTER(0x831020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  this_00 = (undefined *)F_00559c20(*(undefined4 *)((int)this + 0x48));
  uVar2 = F_00561490(this_00,2);
  F_00559d70(uVar2);
  uVar2 = F_00561490(this_00,1);
  *(uint *)((int)this + 0x4c) = uVar2;
  uVar2 = F_00561530(this_00,3);
  *(uint *)((int)this + 0x50) = uVar2;
  uVar2 = F_00561490(this_00,7);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00559c20(uVar2);
    if ((uVar2 == 0) || (uVar3 = F_005613a0(uVar2), uVar3 != 0xf)) {
      uVar2 = 0;
    }
  }
  *(uint *)((int)this + 0x54) = uVar2;
  uVar2 = F_00561490(this_00,4);
  *(uint *)((int)this + 100) = uVar2;
  uVar2 = F_00561490(this_00,8);
  *(uint *)((int)this + 0x58) = uVar2;
  uVar2 = F_00561490(this_00,10);
  *(uint *)((int)this + 0x5c) = uVar2;
  uVar2 = F_00561490(this_00,9);
  *(uint *)((int)this + 0x60) = uVar2;
  uVar2 = F_00561490(this_00,6);
  *(uint *)((int)this + 0x68) = uVar2;
  uVar2 = F_00561490(this_00,5);
  *(uint *)((int)this + 0x6c) = uVar2;
  bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x48),0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_008310f0 */
byte F_008310f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8310f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  byte * pbVar3;
  undefined4 uVar4;
  undefined * pvVar5;
  uint * this_01;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  this_00 = (undefined *)F_007ed4a0(this,*(undefined4 *)(param_1 + 0x5c));
  if (this_00 == (undefined *)0x0) {
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return 0;
  }
  *(undefined4 *)((int)this_00 + 0x3c) = *(undefined4 *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x60) == 1) {
    (*(int *)(gen_frame + 0x14)) = *(int *)((int)(uintptr_t)param_1) >> 1;
    iVar6 = *(int *)((int)this_00 + 0x54);
    if (*(int *)((int)(uintptr_t)param_1) >> 1 < 1) {
      if (iVar6 == 0) {
        pvVar5 = (undefined *)0x0;
      }
      else {
        pvVar5 = *(undefined * PTR32 *)(iVar6 + 0x70);
      }
      F_0055a300(pvVar5,0);
      F_0058d590(*(undefined * PTR32 *)((int)this_00 + 0x54));
    }
    else {
      if (iVar6 == 0) {
        pvVar5 = (undefined *)0x0;
      }
      else {
        pvVar5 = *(undefined * PTR32 *)(iVar6 + 0x70);
      }
      F_0055a300(pvVar5,1);
      F_00595190(*(undefined * PTR32 *)((int)this_00 + 0x54),(*(int *)(gen_frame + 0x14)),0,0);
    }
    if ((*param_1 & 1) != 0) {
      F_0078a8d0((*(undefined * PTR32 *)(gen_frame + 0x10)),0x3e);
    }
    if (*(int *)(param_1 + 4) == 0) {
      F_0055a300(*(undefined * PTR32 *)((int)this_00 + 0x68),0);
      F_0055a300(*(undefined * PTR32 *)((int)this_00 + 0x6c),0);
      F_0059d640(*(undefined * PTR32 *)((int)this_00 + 100),0x65);
    }
    else {
      F_0055a300(*(undefined * PTR32 *)((int)this_00 + 0x68),1);
      F_0055a300(*(undefined * PTR32 *)((int)this_00 + 0x6c),1);
      F_0059d640(*(undefined * PTR32 *)((int)this_00 + 100),((*(int *)(gen_frame + 0x14)) < 1) + 0x66);
    }
  }
  else {
    F_0055a300(*(undefined * PTR32 *)((int)this_00 + 0x68),0);
    F_0055a300(*(undefined * PTR32 *)((int)this_00 + 0x6c),0);
    if (*(int *)((int)this_00 + 0x54) == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0x54) + 0x70)));
    }
    F_0055a300(pvVar5,0);
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  uVar2 = F_0042a990(param_1 + 8);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = uVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = 10000;
  uVar2 = F_0055ab00(*(undefined4 *)((int)this_00 + 0x50));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
  (*(uint *)(gen_frame + 0x2c)) = uVar2;
  bVar1 = F_0055ab50(*(undefined4 *)((int)this_00 + 0x50));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
  pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  (*(uint *)(gen_frame + 0x34)) = (uint)bVar1;
  uVar2 = F_0055dcb0();
  pbVar3 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))
                             (*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x18)))));
  if ((*pbVar3 & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(pbVar3 + 4);
  }
  F_00584110(*(undefined * PTR32 *)((int)this_00 + 0x50),uVar4);
  F_005a2670(((undefined1 *)(gen_frame + 0xc)));
  F_0055a300(*(undefined * PTR32 *)((int)this_00 + 0x48),1);
  F_0078ae00(this_00);
  F_007ed140(pvVar5,(uint)this_00);
  F_00559c60(*(undefined * PTR32 *)((int)this_00 + 0x4c),2);
  *(undefined4 *)((int)this_00 + 0x44) = 0;
  this_01 = &(*(uint *)(gen_frame + 0x38));
  iVar6 = 3;
  do {
    this_01 = this_01 + -2;
    F_005a2670(this_01);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return 1;
}

/* ref: Client::UI2::AddonTextMonsterNote1::vf44 */
unsigned int F_00831310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x831310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e360(this,10);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e340(this,0xb);
  *(uint *)(this + 0x18c) = uVar1;
  uVar1 = F_0055e2f0(this,3);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 0x13)) {
      uVar1 = 0;
    }
  }
  *(uint *)(this + 0x1a4) = uVar1;
  uVar1 = F_0055e2f0(this,4);
  *(uint *)(this + 0x1a0) = uVar1;
  uVar1 = F_00559cb0(*(undefined4 *)(this + 0x184));
  F_00577aa0(*(undefined * PTR32 *)(this + 0x184),uVar1);
  return 0;
}

/* ref: Client::UI2::AddonTextMonsterNote2::vf44 */
unsigned int F_008313f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8313f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e360(this,10);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e340(this,0xb);
  *(uint *)(this + 0x18c) = uVar1;
  uVar1 = F_0055e2f0(this,3);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 0x13)) {
      uVar1 = 0;
    }
  }
  *(uint *)(this + 0x1a4) = uVar1;
  uVar1 = F_0055e2f0(this,4);
  *(uint *)(this + 0x1a0) = uVar1;
  uVar1 = F_00559cb0(*(undefined4 *)(this + 0x184));
  F_00577aa0(*(undefined * PTR32 *)(this + 0x184),uVar1);
  return 0;
}

/* ref: Client::UI2::AddonTextTargetCircle::vf44 */
uint F_008314d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8314d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint in_ecx;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e2f0(this,2);
  if (uVar1 == 0) {
    *(undefined4 *)(this + 0x188) = 0;
    return 0;
  }
  in_ecx = F_00559c20(uVar1);
  uVar1 = 0;
  if (in_ecx != 0) {
    uVar1 = F_005613a0(in_ecx);
    if (uVar1 == 0x13) goto LAB_0083154b;
  }
  in_ecx = 0;
LAB_0083154b: ;
  *(uint *)(this + 0x188) = in_ecx;
  return uVar1;
}

/* ref: FUN_00831570 */
uint F_00831570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x831570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  uint * puVar5;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  uVar1 = param_1 - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar2 = F_007edaa0(this,1);
    uVar1 = 0;
    if (uVar2 != 0) {
      if (*(char *)(uVar2 + 0x88) == '\0') {
        F_0059d640(*(undefined * PTR32 *)(uVar2 + 0x6c),0x10);
        (*(undefined4 *)(gen_frame + 0x18)) = 3;
        (*(undefined4 *)(gen_frame + 0x1c)) = 1;
        uVar1 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))
                  (*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x8)),0x21,1,&(*(undefined4 *)(gen_frame + 0x18)));
        F_005a2670(((undefined1 *)(gen_frame + 0x8)));
        uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x18)));
        F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
        return uVar1;
      }
      F_0059d640(*(undefined * PTR32 *)(uVar2 + 0x6c),0xf);
      (*(undefined4 *)(gen_frame + 0x18)) = 3;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x10)),0x21,1,&(*(undefined4 *)(gen_frame + 0x18)))
      ;
      F_005a2670(((undefined1 *)(gen_frame + 0x10)));
      uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x18)));
      F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
      return uVar1;
    }
    break;
  case 1: ;
    uVar1 = F_0078d2a0(2);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 2: ;
    uVar1 = F_0078d2a0(3);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 3: ;
    uVar1 = F_0078d2a0(4);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 4: ;
    uVar1 = F_0078d2a0(5);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 5: ;
    uVar1 = F_0078d2a0(6);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 6: ;
    uVar1 = F_0078d2a0(7);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 7: ;
    uVar1 = F_0078d2a0(8);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 8: ;
    uVar1 = F_0078d2a0(9);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 9: ;
    uVar1 = F_0078d2a0(10);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0x19: ;
  case 0x28: ;
  case 0x29: ;
    break;
  case 0xf: ;
    uVar1 = F_0078d2a0(0x10);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x10: ;
    uVar1 = F_0078d2a0(0x11);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x11: ;
    uVar1 = F_0078d2a0(0x12);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x12: ;
    uVar1 = F_0078d2a0(0x13);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x13: ;
    uVar1 = F_0078d2a0(0x14);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x14: ;
    uVar1 = F_0078d2a0(0x15);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x15: ;
    uVar1 = F_0078d2a0(0x16);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x16: ;
    uVar1 = F_0078d2a0(0x17);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x17: ;
    uVar1 = F_0078d2a0(0x18);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x18: ;
    uVar1 = F_0078d2a0(0x19);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x1a: ;
    uVar1 = F_0078d2a0(0x1b);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x1b: ;
    uVar1 = F_0078d2a0(0x1c);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x1c: ;
    uVar1 = F_0078d2a0(0x1d);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x1d: ;
    uVar1 = F_0078d2a0(0x1e);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x1e: ;
    uVar1 = F_0078d2a0(0x1f);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x1f: ;
    uVar1 = F_0078d2a0(0x20);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x20: ;
    uVar1 = F_0078d2a0(0x21);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x21: ;
    uVar1 = F_0078d2a0(0x22);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x22: ;
    uVar1 = F_0078d2a0(0x23);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x23: ;
    uVar1 = F_0078d2a0(0x24);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x24: ;
    uVar1 = F_0078d2a0(0x25);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x25: ;
    (*(undefined4 *)(gen_frame + 0x20)) = 3;
    (*(undefined4 *)(gen_frame + 0x28)) = 3;
    (*(undefined4 *)(gen_frame + 0x30)) = 3;
    (*(undefined4 *)(gen_frame + 0x38)) = 3;
    (*(undefined4 *)(gen_frame + 0x40)) = 3;
    (*(undefined4 *)(gen_frame + 0x48)) = 3;
    (*(undefined4 *)(gen_frame + 0x50)) = 3;
    (*(undefined4 *)(gen_frame + 0x58)) = 3;
    (*(undefined4 *)(gen_frame + 0x60)) = 3;
    (*(undefined4 *)(gen_frame + 0x68)) = 3;
    (*(undefined4 *)(gen_frame + 0x70)) = 3;
    (*(undefined4 *)(gen_frame + 0x24)) = 1;
    (*(undefined4 *)(gen_frame + 0x2c)) = 1;
    (*(undefined4 *)(gen_frame + 0x34)) = 5;
    (*(undefined4 *)(gen_frame + 0x3c)) = 8;
    (*(undefined4 *)(gen_frame + 0x44)) = 9;
    (*(undefined4 *)(gen_frame + 0x4c)) = 7;
    (*(undefined4 *)(gen_frame + 0x54)) = 0x1d;
    (*(undefined4 *)(gen_frame + 0x5c)) = 6;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    (*(undefined4 *)(gen_frame + 0x6c)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    puVar3 = ((undefined4 *)(gen_frame + 0x78));
    iVar4 = 0xb;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_005a9110(this,0x17,&(*(undefined4 *)(gen_frame + 0x20)));
    puVar5 = &(*(uint *)(gen_frame + 0xd8));
    iVar4 = 0x16;
    do {
      puVar5 = puVar5 + -2;
      uVar1 = F_005a2670(puVar5);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x26: ;
    uVar1 = F_0078d2a0(0x27);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x27: ;
    (*(undefined4 *)(gen_frame + 0x20)) = 3;
    (*(undefined4 *)(gen_frame + 0x28)) = 3;
    (*(undefined4 *)(gen_frame + 0x30)) = 3;
    (*(undefined4 *)(gen_frame + 0x38)) = 3;
    (*(undefined4 *)(gen_frame + 0x40)) = 3;
    (*(undefined4 *)(gen_frame + 0x48)) = 3;
    (*(undefined4 *)(gen_frame + 0x50)) = 3;
    (*(undefined4 *)(gen_frame + 0x58)) = 3;
    (*(undefined4 *)(gen_frame + 0x60)) = 3;
    (*(undefined4 *)(gen_frame + 0x68)) = 3;
    (*(undefined4 *)(gen_frame + 0x70)) = 3;
    ((undefined4 *)(gen_frame + 0x78))[0] = 3;
    ((undefined4 *)(gen_frame + 0x78))[2] = 3;
    (*(undefined4 *)(gen_frame + 0x24)) = 1;
    (*(undefined4 *)(gen_frame + 0x2c)) = 1;
    (*(undefined4 *)(gen_frame + 0x34)) = 0x10a;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0x1e;
    (*(undefined4 *)(gen_frame + 0x44)) = 0x20;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0x22;
    (*(undefined4 *)(gen_frame + 0x54)) = 0x13;
    (*(undefined4 *)(gen_frame + 0x5c)) = 0x14;
    (*(undefined4 *)(gen_frame + 0x64)) = 0x15;
    (*(undefined4 *)(gen_frame + 0x6c)) = 0x16;
    (*(undefined4 *)(gen_frame + 0x74)) = 0x25;
    ((undefined4 *)(gen_frame + 0x78))[1] = 0x17;
    ((undefined4 *)(gen_frame + 0x78))[3] = 0x18;
    ((undefined4 *)(gen_frame + 0x78))[4] = 0;
    (*(undefined4 *)(gen_frame + 0x90)) = 0;
    (*(undefined4 *)(gen_frame + 0x98)) = 0;
    (*(undefined4 *)(gen_frame + 0xa0)) = 0;
    (*(undefined4 *)(gen_frame + 0xa8)) = 0;
    (*(undefined4 *)(gen_frame + 0xb0)) = 0;
    (*(undefined4 *)(gen_frame + 0xb8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc0)) = 0;
    (*(undefined4 *)(gen_frame + 0xc8)) = 0;
    (*(undefined4 *)(gen_frame + 0xd0)) = 0;
    F_005a9110(this,0x17,&(*(undefined4 *)(gen_frame + 0x20)));
    puVar5 = &(*(uint *)(gen_frame + 0xd8));
    iVar4 = 0x16;
    do {
      puVar5 = puVar5 + -2;
      uVar1 = F_005a2670(puVar5);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return uVar1;
  case 0x2a: ;
    (*(undefined4 *)(gen_frame + 0x20)) = 3;
    (*(undefined4 *)(gen_frame + 0x28)) = 3;
    (*(undefined4 *)(gen_frame + 0x30)) = 3;
    (*(undefined4 *)(gen_frame + 0x38)) = 3;
    (*(undefined4 *)(gen_frame + 0x40)) = 3;
    (*(undefined4 *)(gen_frame + 0x48)) = 3;
    (*(undefined4 *)(gen_frame + 0x50)) = 3;
    (*(undefined4 *)(gen_frame + 0x58)) = 3;
    (*(undefined4 *)(gen_frame + 0x60)) = 3;
    (*(undefined4 *)(gen_frame + 0x68)) = 3;
    (*(undefined4 *)(gen_frame + 0x70)) = 3;
    (*(undefined4 *)(gen_frame + 0x24)) = 1;
    (*(undefined4 *)(gen_frame + 0x2c)) = 1;
    (*(undefined4 *)(gen_frame + 0x34)) = 2;
    (*(undefined4 *)(gen_frame + 0x3c)) = 5;
    (*(undefined4 *)(gen_frame + 0x44)) = 0x1f;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x5c)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    (*(undefined4 *)(gen_frame + 0x6c)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    puVar3 = ((undefined4 *)(gen_frame + 0x78));
    iVar4 = 0xb;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_005a9110(this,0x17,&(*(undefined4 *)(gen_frame + 0x20)));
    puVar5 = &(*(uint *)(gen_frame + 0xd8));
    iVar4 = 0x16;
    do {
      puVar5 = puVar5 + -2;
      uVar1 = F_005a2670(puVar5);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    break;
  default: ;
    goto switchD_00831595_default;
  }
switchD_00831595_default: ;
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return uVar1;
}

